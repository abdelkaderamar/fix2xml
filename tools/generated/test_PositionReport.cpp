#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/PositionReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( PositionReport, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::PositionReport msg;

  list<multiset<string>> all_values;
  multiset<string> PositionReport_0;
  FIX::Account Account_30("STRING_1530190791");
  msg.set(Account_30);
  PositionReport_0.insert(Account_30.getString());
  FIX::AccountType AccountType_26(1);
  msg.set(AccountType_26);
  PositionReport_0.insert(AccountType_26.getString());
  FIX::AcctIDSource AcctIDSource_23(2);
  msg.set(AcctIDSource_23);
  PositionReport_0.insert(AcctIDSource_23.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_17("LOCALMKTDATE_204373159");
  msg.set(ClearingBusinessDate_17);
  PositionReport_0.insert(ClearingBusinessDate_17.getString());
  FIX::Currency Currency_43("EUR");
  msg.set(Currency_43);
  PositionReport_0.insert(Currency_43.getString());
  FIX::DeliveryDate DeliveryDate_0("LOCALMKTDATE_1011207520");
  msg.set(DeliveryDate_0);
  PositionReport_0.insert(DeliveryDate_0.getString());
  FIX::EncodedText EncodedText_69("DATA_781665680");
  msg.set(EncodedText_69);
  PositionReport_0.insert(EncodedText_69.getString());
  FIX::EncodedTextLen EncodedTextLen_69(1251662558);
  msg.set(EncodedTextLen_69);
  PositionReport_0.insert(EncodedTextLen_69.getString());
  FIX::MatchStatus MatchStatus_8('0');
  msg.set(MatchStatus_8);
  PositionReport_0.insert(MatchStatus_8.getString());
  FIX::MessageEventSource MessageEventSource_3("STRING_1732816421");
  msg.set(MessageEventSource_3);
  PositionReport_0.insert(MessageEventSource_3.getString());
  FIX::ModelType ModelType_0(1);
  msg.set(ModelType_0);
  PositionReport_0.insert(ModelType_0.getString());
  FIX::PosMaintRptID PosMaintRptID_2("STRING_609161434");
  msg.set(PosMaintRptID_2);
  PositionReport_0.insert(PosMaintRptID_2.getString());
  FIX::PosReqID PosReqID_3("STRING_677155946");
  msg.set(PosReqID_3);
  PositionReport_0.insert(PosReqID_3.getString());
  FIX::PosReqResult PosReqResult_0(4);
  msg.set(PosReqResult_0);
  PositionReport_0.insert(PosReqResult_0.getString());
  FIX::PosReqType PosReqType_1(5);
  msg.set(PosReqType_1);
  PositionReport_0.insert(PosReqType_1.getString());
  FIX::PriceDelta PriceDelta_4;
  PriceDelta_4.setString("4535833");
  msg.set(PriceDelta_4);
  PositionReport_0.insert(PriceDelta_4.getString());
  FIX::PriceType PriceType_32(8);
  msg.set(PriceType_32);
  PositionReport_0.insert(PriceType_32.getString());
  FIX::PriorSettlPrice PriorSettlPrice_2;
  PriorSettlPrice_2.setString("14433187");
  msg.set(PriorSettlPrice_2);
  PositionReport_0.insert(PriorSettlPrice_2.getString());
  FIX::RegistStatus RegistStatus_0('R');
  msg.set(RegistStatus_0);
  PositionReport_0.insert(RegistStatus_0.getString());
  FIX::SettlCurrency SettlCurrency_24("EUR");
  msg.set(SettlCurrency_24);
  PositionReport_0.insert(SettlCurrency_24.getString());
  FIX::SettlPrice SettlPrice_2;
  SettlPrice_2.setString("2353480");
  msg.set(SettlPrice_2);
  PositionReport_0.insert(SettlPrice_2.getString());
  FIX::SettlPriceType SettlPriceType_1(2);
  msg.set(SettlPriceType_1);
  PositionReport_0.insert(SettlPriceType_1.getString());
  FIX::SettlSessID SettlSessID_9("STRING_ITD");
  msg.set(SettlSessID_9);
  PositionReport_0.insert(SettlSessID_9.getString());
  FIX::SettlSessSubID SettlSessSubID_8("STRING_1528237984");
  msg.set(SettlSessSubID_8);
  PositionReport_0.insert(SettlSessSubID_8.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_4('0');
  msg.set(SubscriptionRequestType_4);
  PositionReport_0.insert(SubscriptionRequestType_4.getString());
  FIX::Text Text_69("STRING_838283586");
  msg.set(Text_69);
  PositionReport_0.insert(Text_69.getString());
  FIX::TotalNumPosReports TotalNumPosReports_0(431856184);
  msg.set(TotalNumPosReports_0);
  PositionReport_0.insert(TotalNumPosReports_0.getString());
  FIX::UnsolicitedIndicator UnsolicitedIndicator_0(false);
  msg.set(UnsolicitedIndicator_0);
  PositionReport_0.insert(UnsolicitedIndicator_0.getString());
  all_values.push_back(PositionReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_11;
  FIX::ApplID ApplID_11("STRING_1398261601");
  msg.set(ApplID_11);
  ApplicationSequenceControl_11.insert(ApplID_11.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_11(1962046976);
  msg.set(ApplLastSeqNum_11);
  ApplicationSequenceControl_11.insert(ApplLastSeqNum_11.getString());
  FIX::ApplResendFlag ApplResendFlag_11(true);
  msg.set(ApplResendFlag_11);
  ApplicationSequenceControl_11.insert(ApplResendFlag_11.getString());
  FIX::ApplSeqNum ApplSeqNum_11(1425944859);
  msg.set(ApplSeqNum_11);
  ApplicationSequenceControl_11.insert(ApplSeqNum_11.getString());
  all_values.push_back(ApplicationSequenceControl_11);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::PositionReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_68;
    FIX::EncodedLegIssuer EncodedLegIssuer_68("DATA_24687538");
    noLegs_0_0.set(EncodedLegIssuer_68);
    InstrumentLeg_68.insert(EncodedLegIssuer_68.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_68(980892344);
    noLegs_0_0.set(EncodedLegIssuerLen_68);
    InstrumentLeg_68.insert(EncodedLegIssuerLen_68.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_68("DATA_1030144007");
    noLegs_0_0.set(EncodedLegSecurityDesc_68);
    InstrumentLeg_68.insert(EncodedLegSecurityDesc_68.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_68(806353218);
    noLegs_0_0.set(EncodedLegSecurityDescLen_68);
    InstrumentLeg_68.insert(EncodedLegSecurityDescLen_68.getString());
    FIX::LegCFICode LegCFICode_68("STRING_85071254");
    noLegs_0_0.set(LegCFICode_68);
    InstrumentLeg_68.insert(LegCFICode_68.getString());
    FIX::LegContractMultiplier LegContractMultiplier_68;
    LegContractMultiplier_68.setString("15442062");
    noLegs_0_0.set(LegContractMultiplier_68);
    InstrumentLeg_68.insert(LegContractMultiplier_68.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_68(391685992);
    noLegs_0_0.set(LegContractMultiplierUnit_68);
    InstrumentLeg_68.insert(LegContractMultiplierUnit_68.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_68("MONTHYEAR_220316292");
    noLegs_0_0.set(LegContractSettlMonth_68);
    InstrumentLeg_68.insert(LegContractSettlMonth_68.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_68("COUNTRY_5884016");
    noLegs_0_0.set(LegCountryOfIssue_68);
    InstrumentLeg_68.insert(LegCountryOfIssue_68.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_68("LOCALMKTDATE_1068841938");
    noLegs_0_0.set(LegCouponPaymentDate_68);
    InstrumentLeg_68.insert(LegCouponPaymentDate_68.getString());
    FIX::LegCouponRate LegCouponRate_68;
    LegCouponRate_68.setString("72.880000");
    noLegs_0_0.set(LegCouponRate_68);
    InstrumentLeg_68.insert(LegCouponRate_68.getString());
    FIX::LegCreditRating LegCreditRating_68("STRING_1028833907");
    noLegs_0_0.set(LegCreditRating_68);
    InstrumentLeg_68.insert(LegCreditRating_68.getString());
    FIX::LegCurrency LegCurrency_68("CHF");
    noLegs_0_0.set(LegCurrency_68);
    InstrumentLeg_68.insert(LegCurrency_68.getString());
    FIX::LegDatedDate LegDatedDate_68("LOCALMKTDATE_324668977");
    noLegs_0_0.set(LegDatedDate_68);
    InstrumentLeg_68.insert(LegDatedDate_68.getString());
    FIX::LegExerciseStyle LegExerciseStyle_68(1759406293);
    noLegs_0_0.set(LegExerciseStyle_68);
    InstrumentLeg_68.insert(LegExerciseStyle_68.getString());
    FIX::LegFactor LegFactor_68;
    LegFactor_68.setString("187804");
    noLegs_0_0.set(LegFactor_68);
    InstrumentLeg_68.insert(LegFactor_68.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_68(1281471944);
    noLegs_0_0.set(LegFlowScheduleType_68);
    InstrumentLeg_68.insert(LegFlowScheduleType_68.getString());
    FIX::LegInstrRegistry LegInstrRegistry_68("STRING_1994754300");
    noLegs_0_0.set(LegInstrRegistry_68);
    InstrumentLeg_68.insert(LegInstrRegistry_68.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_68("LOCALMKTDATE_1776075100");
    noLegs_0_0.set(LegInterestAccrualDate_68);
    InstrumentLeg_68.insert(LegInterestAccrualDate_68.getString());
    FIX::LegIssueDate LegIssueDate_68("LOCALMKTDATE_735947213");
    noLegs_0_0.set(LegIssueDate_68);
    InstrumentLeg_68.insert(LegIssueDate_68.getString());
    FIX::LegIssuer LegIssuer_68("STRING_1375508636");
    noLegs_0_0.set(LegIssuer_68);
    InstrumentLeg_68.insert(LegIssuer_68.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_68("STRING_706750532");
    noLegs_0_0.set(LegLocaleOfIssue_68);
    InstrumentLeg_68.insert(LegLocaleOfIssue_68.getString());
    FIX::LegMaturityDate LegMaturityDate_68("LOCALMKTDATE_1574230799");
    noLegs_0_0.set(LegMaturityDate_68);
    InstrumentLeg_68.insert(LegMaturityDate_68.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_68("MONTHYEAR_1807364821");
    noLegs_0_0.set(LegMaturityMonthYear_68);
    InstrumentLeg_68.insert(LegMaturityMonthYear_68.getString());
    FIX::LegMaturityTime LegMaturityTime_68("TZTIMEONLY_795607388");
    noLegs_0_0.set(LegMaturityTime_68);
    InstrumentLeg_68.insert(LegMaturityTime_68.getString());
    FIX::LegOptAttribute LegOptAttribute_68('8');
    noLegs_0_0.set(LegOptAttribute_68);
    InstrumentLeg_68.insert(LegOptAttribute_68.getString());
    FIX::LegOptionRatio LegOptionRatio_68;
    LegOptionRatio_68.setString("16219281");
    noLegs_0_0.set(LegOptionRatio_68);
    InstrumentLeg_68.insert(LegOptionRatio_68.getString());
    FIX::LegPool LegPool_68("STRING_402360564");
    noLegs_0_0.set(LegPool_68);
    InstrumentLeg_68.insert(LegPool_68.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_68("STRING_103469964");
    noLegs_0_0.set(LegPriceUnitOfMeasure_68);
    InstrumentLeg_68.insert(LegPriceUnitOfMeasure_68.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_68;
    LegPriceUnitOfMeasureQty_68.setString("16408646");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_68);
    InstrumentLeg_68.insert(LegPriceUnitOfMeasureQty_68.getString());
    FIX::LegProduct LegProduct_68(427048102);
    noLegs_0_0.set(LegProduct_68);
    InstrumentLeg_68.insert(LegProduct_68.getString());
    FIX::LegPutOrCall LegPutOrCall_68(1084362308);
    noLegs_0_0.set(LegPutOrCall_68);
    InstrumentLeg_68.insert(LegPutOrCall_68.getString());
    FIX::LegRatioQty LegRatioQty_68;
    LegRatioQty_68.setString("5235249");
    noLegs_0_0.set(LegRatioQty_68);
    InstrumentLeg_68.insert(LegRatioQty_68.getString());
    FIX::LegRedemptionDate LegRedemptionDate_68("LOCALMKTDATE_1233401320");
    noLegs_0_0.set(LegRedemptionDate_68);
    InstrumentLeg_68.insert(LegRedemptionDate_68.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_68("STRING_1169433562");
    noLegs_0_0.set(LegRepoCollateralSecurityType_68);
    InstrumentLeg_68.insert(LegRepoCollateralSecurityType_68.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_68;
    LegRepurchaseRate_68.setString("12.250000");
    noLegs_0_0.set(LegRepurchaseRate_68);
    InstrumentLeg_68.insert(LegRepurchaseRate_68.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_68(1625087312);
    noLegs_0_0.set(LegRepurchaseTerm_68);
    InstrumentLeg_68.insert(LegRepurchaseTerm_68.getString());
    FIX::LegSecurityDesc LegSecurityDesc_68("STRING_1389749854");
    noLegs_0_0.set(LegSecurityDesc_68);
    InstrumentLeg_68.insert(LegSecurityDesc_68.getString());
    FIX::LegSecurityExchange LegSecurityExchange_68("EXCHANGE_2073615241");
    noLegs_0_0.set(LegSecurityExchange_68);
    InstrumentLeg_68.insert(LegSecurityExchange_68.getString());
    FIX::LegSecurityID LegSecurityID_68("STRING_546445603");
    noLegs_0_0.set(LegSecurityID_68);
    InstrumentLeg_68.insert(LegSecurityID_68.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_68("STRING_1305253495");
    noLegs_0_0.set(LegSecurityIDSource_68);
    InstrumentLeg_68.insert(LegSecurityIDSource_68.getString());
    FIX::LegSecuritySubType LegSecuritySubType_68("STRING_954965500");
    noLegs_0_0.set(LegSecuritySubType_68);
    InstrumentLeg_68.insert(LegSecuritySubType_68.getString());
    FIX::LegSecurityType LegSecurityType_68("STRING_2068870939");
    noLegs_0_0.set(LegSecurityType_68);
    InstrumentLeg_68.insert(LegSecurityType_68.getString());
    FIX::LegSide LegSide_68('1');
    noLegs_0_0.set(LegSide_68);
    InstrumentLeg_68.insert(LegSide_68.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_68("STRING_1279634478");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_68);
    InstrumentLeg_68.insert(LegStateOrProvinceOfIssue_68.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_68("EUR");
    noLegs_0_0.set(LegStrikeCurrency_68);
    InstrumentLeg_68.insert(LegStrikeCurrency_68.getString());
    FIX::LegStrikePrice LegStrikePrice_68;
    LegStrikePrice_68.setString("4136227");
    noLegs_0_0.set(LegStrikePrice_68);
    InstrumentLeg_68.insert(LegStrikePrice_68.getString());
    FIX::LegSymbol LegSymbol_68("STRING_1528064237");
    noLegs_0_0.set(LegSymbol_68);
    InstrumentLeg_68.insert(LegSymbol_68.getString());
    FIX::LegSymbolSfx LegSymbolSfx_68("STRING_1535419485");
    noLegs_0_0.set(LegSymbolSfx_68);
    InstrumentLeg_68.insert(LegSymbolSfx_68.getString());
    FIX::LegTimeUnit LegTimeUnit_68("STRING_1149569987");
    noLegs_0_0.set(LegTimeUnit_68);
    InstrumentLeg_68.insert(LegTimeUnit_68.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_68("STRING_756089225");
    noLegs_0_0.set(LegUnitOfMeasure_68);
    InstrumentLeg_68.insert(LegUnitOfMeasure_68.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_68;
    LegUnitOfMeasureQty_68.setString("946863");
    noLegs_0_0.set(LegUnitOfMeasureQty_68);
    InstrumentLeg_68.insert(LegUnitOfMeasureQty_68.getString());
    all_values.push_back(InstrumentLeg_68);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_121;
      FIX::LegSecurityAltID LegSecurityAltID_121("STRING_415970398");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_121);
      LegSecAltIDGrp_NoLegSecurityAltID_121.insert(LegSecurityAltID_121.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_121("STRING_890293757");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_121);
      LegSecAltIDGrp_NoLegSecurityAltID_121.insert(LegSecurityAltIDSource_121.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_121);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::PositionReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_69;
    FIX::EncodedLegIssuer EncodedLegIssuer_69("DATA_1401325892");
    noLegs_0_1.set(EncodedLegIssuer_69);
    InstrumentLeg_69.insert(EncodedLegIssuer_69.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_69(2037898547);
    noLegs_0_1.set(EncodedLegIssuerLen_69);
    InstrumentLeg_69.insert(EncodedLegIssuerLen_69.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_69("DATA_1292654321");
    noLegs_0_1.set(EncodedLegSecurityDesc_69);
    InstrumentLeg_69.insert(EncodedLegSecurityDesc_69.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_69(1504795856);
    noLegs_0_1.set(EncodedLegSecurityDescLen_69);
    InstrumentLeg_69.insert(EncodedLegSecurityDescLen_69.getString());
    FIX::LegCFICode LegCFICode_69("STRING_1531279535");
    noLegs_0_1.set(LegCFICode_69);
    InstrumentLeg_69.insert(LegCFICode_69.getString());
    FIX::LegContractMultiplier LegContractMultiplier_69;
    LegContractMultiplier_69.setString("17197024");
    noLegs_0_1.set(LegContractMultiplier_69);
    InstrumentLeg_69.insert(LegContractMultiplier_69.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_69(441674516);
    noLegs_0_1.set(LegContractMultiplierUnit_69);
    InstrumentLeg_69.insert(LegContractMultiplierUnit_69.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_69("MONTHYEAR_2054804531");
    noLegs_0_1.set(LegContractSettlMonth_69);
    InstrumentLeg_69.insert(LegContractSettlMonth_69.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_69("COUNTRY_805620096");
    noLegs_0_1.set(LegCountryOfIssue_69);
    InstrumentLeg_69.insert(LegCountryOfIssue_69.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_69("LOCALMKTDATE_1611108078");
    noLegs_0_1.set(LegCouponPaymentDate_69);
    InstrumentLeg_69.insert(LegCouponPaymentDate_69.getString());
    FIX::LegCouponRate LegCouponRate_69;
    LegCouponRate_69.setString("21.080000");
    noLegs_0_1.set(LegCouponRate_69);
    InstrumentLeg_69.insert(LegCouponRate_69.getString());
    FIX::LegCreditRating LegCreditRating_69("STRING_283223760");
    noLegs_0_1.set(LegCreditRating_69);
    InstrumentLeg_69.insert(LegCreditRating_69.getString());
    FIX::LegCurrency LegCurrency_69("EUR");
    noLegs_0_1.set(LegCurrency_69);
    InstrumentLeg_69.insert(LegCurrency_69.getString());
    FIX::LegDatedDate LegDatedDate_69("LOCALMKTDATE_829669363");
    noLegs_0_1.set(LegDatedDate_69);
    InstrumentLeg_69.insert(LegDatedDate_69.getString());
    FIX::LegExerciseStyle LegExerciseStyle_69(11144132);
    noLegs_0_1.set(LegExerciseStyle_69);
    InstrumentLeg_69.insert(LegExerciseStyle_69.getString());
    FIX::LegFactor LegFactor_69;
    LegFactor_69.setString("7086655");
    noLegs_0_1.set(LegFactor_69);
    InstrumentLeg_69.insert(LegFactor_69.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_69(751056654);
    noLegs_0_1.set(LegFlowScheduleType_69);
    InstrumentLeg_69.insert(LegFlowScheduleType_69.getString());
    FIX::LegInstrRegistry LegInstrRegistry_69("STRING_1899191712");
    noLegs_0_1.set(LegInstrRegistry_69);
    InstrumentLeg_69.insert(LegInstrRegistry_69.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_69("LOCALMKTDATE_1988300031");
    noLegs_0_1.set(LegInterestAccrualDate_69);
    InstrumentLeg_69.insert(LegInterestAccrualDate_69.getString());
    FIX::LegIssueDate LegIssueDate_69("LOCALMKTDATE_284366591");
    noLegs_0_1.set(LegIssueDate_69);
    InstrumentLeg_69.insert(LegIssueDate_69.getString());
    FIX::LegIssuer LegIssuer_69("STRING_1658536097");
    noLegs_0_1.set(LegIssuer_69);
    InstrumentLeg_69.insert(LegIssuer_69.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_69("STRING_254439158");
    noLegs_0_1.set(LegLocaleOfIssue_69);
    InstrumentLeg_69.insert(LegLocaleOfIssue_69.getString());
    FIX::LegMaturityDate LegMaturityDate_69("LOCALMKTDATE_1812430828");
    noLegs_0_1.set(LegMaturityDate_69);
    InstrumentLeg_69.insert(LegMaturityDate_69.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_69("MONTHYEAR_1046471934");
    noLegs_0_1.set(LegMaturityMonthYear_69);
    InstrumentLeg_69.insert(LegMaturityMonthYear_69.getString());
    FIX::LegMaturityTime LegMaturityTime_69("TZTIMEONLY_1404009145");
    noLegs_0_1.set(LegMaturityTime_69);
    InstrumentLeg_69.insert(LegMaturityTime_69.getString());
    FIX::LegOptAttribute LegOptAttribute_69('4');
    noLegs_0_1.set(LegOptAttribute_69);
    InstrumentLeg_69.insert(LegOptAttribute_69.getString());
    FIX::LegOptionRatio LegOptionRatio_69;
    LegOptionRatio_69.setString("11411583");
    noLegs_0_1.set(LegOptionRatio_69);
    InstrumentLeg_69.insert(LegOptionRatio_69.getString());
    FIX::LegPool LegPool_69("STRING_1980326284");
    noLegs_0_1.set(LegPool_69);
    InstrumentLeg_69.insert(LegPool_69.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_69("STRING_837006804");
    noLegs_0_1.set(LegPriceUnitOfMeasure_69);
    InstrumentLeg_69.insert(LegPriceUnitOfMeasure_69.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_69;
    LegPriceUnitOfMeasureQty_69.setString("20314520");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_69);
    InstrumentLeg_69.insert(LegPriceUnitOfMeasureQty_69.getString());
    FIX::LegProduct LegProduct_69(1234168528);
    noLegs_0_1.set(LegProduct_69);
    InstrumentLeg_69.insert(LegProduct_69.getString());
    FIX::LegPutOrCall LegPutOrCall_69(727421703);
    noLegs_0_1.set(LegPutOrCall_69);
    InstrumentLeg_69.insert(LegPutOrCall_69.getString());
    FIX::LegRatioQty LegRatioQty_69;
    LegRatioQty_69.setString("11766227");
    noLegs_0_1.set(LegRatioQty_69);
    InstrumentLeg_69.insert(LegRatioQty_69.getString());
    FIX::LegRedemptionDate LegRedemptionDate_69("LOCALMKTDATE_591480736");
    noLegs_0_1.set(LegRedemptionDate_69);
    InstrumentLeg_69.insert(LegRedemptionDate_69.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_69("STRING_111217591");
    noLegs_0_1.set(LegRepoCollateralSecurityType_69);
    InstrumentLeg_69.insert(LegRepoCollateralSecurityType_69.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_69;
    LegRepurchaseRate_69.setString("15.100000");
    noLegs_0_1.set(LegRepurchaseRate_69);
    InstrumentLeg_69.insert(LegRepurchaseRate_69.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_69(1033155252);
    noLegs_0_1.set(LegRepurchaseTerm_69);
    InstrumentLeg_69.insert(LegRepurchaseTerm_69.getString());
    FIX::LegSecurityDesc LegSecurityDesc_69("STRING_18538474");
    noLegs_0_1.set(LegSecurityDesc_69);
    InstrumentLeg_69.insert(LegSecurityDesc_69.getString());
    FIX::LegSecurityExchange LegSecurityExchange_69("EXCHANGE_1554461606");
    noLegs_0_1.set(LegSecurityExchange_69);
    InstrumentLeg_69.insert(LegSecurityExchange_69.getString());
    FIX::LegSecurityID LegSecurityID_69("STRING_496779683");
    noLegs_0_1.set(LegSecurityID_69);
    InstrumentLeg_69.insert(LegSecurityID_69.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_69("STRING_1993590582");
    noLegs_0_1.set(LegSecurityIDSource_69);
    InstrumentLeg_69.insert(LegSecurityIDSource_69.getString());
    FIX::LegSecuritySubType LegSecuritySubType_69("STRING_1837685367");
    noLegs_0_1.set(LegSecuritySubType_69);
    InstrumentLeg_69.insert(LegSecuritySubType_69.getString());
    FIX::LegSecurityType LegSecurityType_69("STRING_1350153968");
    noLegs_0_1.set(LegSecurityType_69);
    InstrumentLeg_69.insert(LegSecurityType_69.getString());
    FIX::LegSide LegSide_69('1');
    noLegs_0_1.set(LegSide_69);
    InstrumentLeg_69.insert(LegSide_69.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_69("STRING_519871082");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_69);
    InstrumentLeg_69.insert(LegStateOrProvinceOfIssue_69.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_69("USD");
    noLegs_0_1.set(LegStrikeCurrency_69);
    InstrumentLeg_69.insert(LegStrikeCurrency_69.getString());
    FIX::LegStrikePrice LegStrikePrice_69;
    LegStrikePrice_69.setString("12709277");
    noLegs_0_1.set(LegStrikePrice_69);
    InstrumentLeg_69.insert(LegStrikePrice_69.getString());
    FIX::LegSymbol LegSymbol_69("STRING_1113006164");
    noLegs_0_1.set(LegSymbol_69);
    InstrumentLeg_69.insert(LegSymbol_69.getString());
    FIX::LegSymbolSfx LegSymbolSfx_69("STRING_149288924");
    noLegs_0_1.set(LegSymbolSfx_69);
    InstrumentLeg_69.insert(LegSymbolSfx_69.getString());
    FIX::LegTimeUnit LegTimeUnit_69("STRING_1555294328");
    noLegs_0_1.set(LegTimeUnit_69);
    InstrumentLeg_69.insert(LegTimeUnit_69.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_69("STRING_624058614");
    noLegs_0_1.set(LegUnitOfMeasure_69);
    InstrumentLeg_69.insert(LegUnitOfMeasure_69.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_69;
    LegUnitOfMeasureQty_69.setString("4037280");
    noLegs_0_1.set(LegUnitOfMeasureQty_69);
    InstrumentLeg_69.insert(LegUnitOfMeasureQty_69.getString());
    all_values.push_back(InstrumentLeg_69);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_122;
      FIX::LegSecurityAltID LegSecurityAltID_122("STRING_1670530548");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_122);
      LegSecAltIDGrp_NoLegSecurityAltID_122.insert(LegSecurityAltID_122.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_122("STRING_1807737227");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_122);
      LegSecAltIDGrp_NoLegSecurityAltID_122.insert(LegSecurityAltIDSource_122.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_122);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_123;
      FIX::LegSecurityAltID LegSecurityAltID_123("STRING_1641277913");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_123);
      LegSecAltIDGrp_NoLegSecurityAltID_123.insert(LegSecurityAltID_123.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_123("STRING_664205204");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_123);
      LegSecAltIDGrp_NoLegSecurityAltID_123.insert(LegSecurityAltIDSource_123.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_123);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_55;
  FIX::AttachmentPoint AttachmentPoint_55;
  AttachmentPoint_55.setString("98.640000");
  msg.set(AttachmentPoint_55);
  Instrument_55.insert(AttachmentPoint_55.getString());
  FIX::CFICode CFICode_55("STRING_330801069");
  msg.set(CFICode_55);
  Instrument_55.insert(CFICode_55.getString());
  FIX::CPProgram CPProgram_55(2);
  msg.set(CPProgram_55);
  Instrument_55.insert(CPProgram_55.getString());
  FIX::CPRegType CPRegType_55("STRING_727264744");
  msg.set(CPRegType_55);
  Instrument_55.insert(CPRegType_55.getString());
  FIX::CapPrice CapPrice_55;
  CapPrice_55.setString("10582227");
  msg.set(CapPrice_55);
  Instrument_55.insert(CapPrice_55.getString());
  FIX::ContractMultiplier ContractMultiplier_55;
  ContractMultiplier_55.setString("17247963");
  msg.set(ContractMultiplier_55);
  Instrument_55.insert(ContractMultiplier_55.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_55(0);
  msg.set(ContractMultiplierUnit_55);
  Instrument_55.insert(ContractMultiplierUnit_55.getString());
  FIX::ContractSettlMonth ContractSettlMonth_55("MONTHYEAR_1169440364");
  msg.set(ContractSettlMonth_55);
  Instrument_55.insert(ContractSettlMonth_55.getString());
  FIX::CountryOfIssue CountryOfIssue_55("COUNTRY_326154215");
  msg.set(CountryOfIssue_55);
  Instrument_55.insert(CountryOfIssue_55.getString());
  FIX::CouponPaymentDate CouponPaymentDate_55("LOCALMKTDATE_204417085");
  msg.set(CouponPaymentDate_55);
  Instrument_55.insert(CouponPaymentDate_55.getString());
  FIX::CouponRate CouponRate_55;
  CouponRate_55.setString("88.380000");
  msg.set(CouponRate_55);
  Instrument_55.insert(CouponRate_55.getString());
  FIX::CreditRating CreditRating_55("STRING_1880615822");
  msg.set(CreditRating_55);
  Instrument_55.insert(CreditRating_55.getString());
  FIX::DatedDate DatedDate_55("LOCALMKTDATE_701196768");
  msg.set(DatedDate_55);
  Instrument_55.insert(DatedDate_55.getString());
  FIX::DetachmentPoint DetachmentPoint_55;
  DetachmentPoint_55.setString("57.720000");
  msg.set(DetachmentPoint_55);
  Instrument_55.insert(DetachmentPoint_55.getString());
  FIX::EncodedIssuer EncodedIssuer_55("DATA_1570817541");
  msg.set(EncodedIssuer_55);
  Instrument_55.insert(EncodedIssuer_55.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_55(2051350736);
  msg.set(EncodedIssuerLen_55);
  Instrument_55.insert(EncodedIssuerLen_55.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_55("DATA_633892759");
  msg.set(EncodedSecurityDesc_55);
  Instrument_55.insert(EncodedSecurityDesc_55.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_55(2090688623);
  msg.set(EncodedSecurityDescLen_55);
  Instrument_55.insert(EncodedSecurityDescLen_55.getString());
  FIX::ExerciseStyle ExerciseStyle_55(1);
  msg.set(ExerciseStyle_55);
  Instrument_55.insert(ExerciseStyle_55.getString());
  FIX::Factor Factor_55;
  Factor_55.setString("9423652");
  msg.set(Factor_55);
  Instrument_55.insert(Factor_55.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_55(true);
  msg.set(FlexProductEligibilityIndicator_55);
  Instrument_55.insert(FlexProductEligibilityIndicator_55.getString());
  FIX::FlexibleIndicator FlexibleIndicator_55(false);
  msg.set(FlexibleIndicator_55);
  Instrument_55.insert(FlexibleIndicator_55.getString());
  FIX::FloorPrice FloorPrice_55;
  FloorPrice_55.setString("10916542");
  msg.set(FloorPrice_55);
  Instrument_55.insert(FloorPrice_55.getString());
  FIX::FlowScheduleType FlowScheduleType_55(2);
  msg.set(FlowScheduleType_55);
  Instrument_55.insert(FlowScheduleType_55.getString());
  FIX::InstrRegistry InstrRegistry_55("STRING_854746319");
  msg.set(InstrRegistry_55);
  Instrument_55.insert(InstrRegistry_55.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_55('1');
  msg.set(InstrmtAssignmentMethod_55);
  Instrument_55.insert(InstrmtAssignmentMethod_55.getString());
  FIX::InterestAccrualDate InterestAccrualDate_55("LOCALMKTDATE_1842184900");
  msg.set(InterestAccrualDate_55);
  Instrument_55.insert(InterestAccrualDate_55.getString());
  FIX::IssueDate IssueDate_55("LOCALMKTDATE_377793219");
  msg.set(IssueDate_55);
  Instrument_55.insert(IssueDate_55.getString());
  FIX::Issuer Issuer_55("STRING_1155635885");
  msg.set(Issuer_55);
  Instrument_55.insert(Issuer_55.getString());
  FIX::ListMethod ListMethod_55(0);
  msg.set(ListMethod_55);
  Instrument_55.insert(ListMethod_55.getString());
  FIX::LocaleOfIssue LocaleOfIssue_55("STRING_1041998424");
  msg.set(LocaleOfIssue_55);
  Instrument_55.insert(LocaleOfIssue_55.getString());
  FIX::MaturityDate MaturityDate_55("LOCALMKTDATE_648732101");
  msg.set(MaturityDate_55);
  Instrument_55.insert(MaturityDate_55.getString());
  FIX::MaturityMonthYear MaturityMonthYear_55("MONTHYEAR_1666780235");
  msg.set(MaturityMonthYear_55);
  Instrument_55.insert(MaturityMonthYear_55.getString());
  FIX::MaturityTime MaturityTime_55("TZTIMEONLY_1590172042");
  msg.set(MaturityTime_55);
  Instrument_55.insert(MaturityTime_55.getString());
  FIX::MinPriceIncrement MinPriceIncrement_55;
  MinPriceIncrement_55.setString("13759968");
  msg.set(MinPriceIncrement_55);
  Instrument_55.insert(MinPriceIncrement_55.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_55;
  MinPriceIncrementAmount_55.setString("5775193");
  msg.set(MinPriceIncrementAmount_55);
  Instrument_55.insert(MinPriceIncrementAmount_55.getString());
  FIX::NTPositionLimit NTPositionLimit_55(1167484747);
  msg.set(NTPositionLimit_55);
  Instrument_55.insert(NTPositionLimit_55.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_55;
  NotionalPercentageOutstanding_55.setString("86.780000");
  msg.set(NotionalPercentageOutstanding_55);
  Instrument_55.insert(NotionalPercentageOutstanding_55.getString());
  FIX::OptAttribute OptAttribute_55('1');
  msg.set(OptAttribute_55);
  Instrument_55.insert(OptAttribute_55.getString());
  FIX::OptPayoutAmount OptPayoutAmount_55;
  OptPayoutAmount_55.setString("14936389");
  msg.set(OptPayoutAmount_55);
  Instrument_55.insert(OptPayoutAmount_55.getString());
  FIX::OptPayoutType OptPayoutType_55(1);
  msg.set(OptPayoutType_55);
  Instrument_55.insert(OptPayoutType_55.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_55;
  OriginalNotionalPercentageOutstanding_55.setString("49.140000");
  msg.set(OriginalNotionalPercentageOutstanding_55);
  Instrument_55.insert(OriginalNotionalPercentageOutstanding_55.getString());
  FIX::Pool Pool_55("STRING_1226771136");
  msg.set(Pool_55);
  Instrument_55.insert(Pool_55.getString());
  FIX::PositionLimit PositionLimit_55(1452872532);
  msg.set(PositionLimit_55);
  Instrument_55.insert(PositionLimit_55.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_55("STRING_INT");
  msg.set(PriceQuoteMethod_55);
  Instrument_55.insert(PriceQuoteMethod_55.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_55("STRING_650105029");
  msg.set(PriceUnitOfMeasure_55);
  Instrument_55.insert(PriceUnitOfMeasure_55.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_55;
  PriceUnitOfMeasureQty_55.setString("13567396");
  msg.set(PriceUnitOfMeasureQty_55);
  Instrument_55.insert(PriceUnitOfMeasureQty_55.getString());
  FIX::Product Product_57(13);
  msg.set(Product_57);
  Instrument_55.insert(Product_57.getString());
  FIX::ProductComplex ProductComplex_55("STRING_593310005");
  msg.set(ProductComplex_55);
  Instrument_55.insert(ProductComplex_55.getString());
  FIX::PutOrCall PutOrCall_55(1);
  msg.set(PutOrCall_55);
  Instrument_55.insert(PutOrCall_55.getString());
  FIX::RedemptionDate RedemptionDate_55("LOCALMKTDATE_1250315097");
  msg.set(RedemptionDate_55);
  Instrument_55.insert(RedemptionDate_55.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_55("STRING_1807442717");
  msg.set(RepoCollateralSecurityType_55);
  Instrument_55.insert(RepoCollateralSecurityType_55.getString());
  FIX::RepurchaseRate RepurchaseRate_55;
  RepurchaseRate_55.setString("88.660000");
  msg.set(RepurchaseRate_55);
  Instrument_55.insert(RepurchaseRate_55.getString());
  FIX::RepurchaseTerm RepurchaseTerm_55(194485672);
  msg.set(RepurchaseTerm_55);
  Instrument_55.insert(RepurchaseTerm_55.getString());
  FIX::RestructuringType RestructuringType_55("STRING_MM");
  msg.set(RestructuringType_55);
  Instrument_55.insert(RestructuringType_55.getString());
  FIX::SecurityDesc SecurityDesc_55("STRING_1559855185");
  msg.set(SecurityDesc_55);
  Instrument_55.insert(SecurityDesc_55.getString());
  FIX::SecurityExchange SecurityExchange_55("EXCHANGE_1689867978");
  msg.set(SecurityExchange_55);
  Instrument_55.insert(SecurityExchange_55.getString());
  FIX::SecurityGroup SecurityGroup_55("STRING_2124087362");
  msg.set(SecurityGroup_55);
  Instrument_55.insert(SecurityGroup_55.getString());
  FIX::SecurityID SecurityID_55("STRING_1937648405");
  msg.set(SecurityID_55);
  Instrument_55.insert(SecurityID_55.getString());
  FIX::SecurityIDSource SecurityIDSource_55("STRING_E");
  msg.set(SecurityIDSource_55);
  Instrument_55.insert(SecurityIDSource_55.getString());
  FIX::SecurityStatus SecurityStatus_55("STRING_1");
  msg.set(SecurityStatus_55);
  Instrument_55.insert(SecurityStatus_55.getString());
  FIX::SecuritySubType SecuritySubType_56("STRING_832163181");
  msg.set(SecuritySubType_56);
  Instrument_55.insert(SecuritySubType_56.getString());
  FIX::SecurityType SecurityType_57("STRING_PS");
  msg.set(SecurityType_57);
  Instrument_55.insert(SecurityType_57.getString());
  FIX::Seniority Seniority_55("STRING_SD");
  msg.set(Seniority_55);
  Instrument_55.insert(Seniority_55.getString());
  FIX::SettlMethod SettlMethod_55('P');
  msg.set(SettlMethod_55);
  Instrument_55.insert(SettlMethod_55.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_55("STRING_575265513");
  msg.set(SettleOnOpenFlag_55);
  Instrument_55.insert(SettleOnOpenFlag_55.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_55("STRING_1409398828");
  msg.set(StateOrProvinceOfIssue_55);
  Instrument_55.insert(StateOrProvinceOfIssue_55.getString());
  FIX::StrikeCurrency StrikeCurrency_55("GBP");
  msg.set(StrikeCurrency_55);
  Instrument_55.insert(StrikeCurrency_55.getString());
  FIX::StrikeMultiplier StrikeMultiplier_55;
  StrikeMultiplier_55.setString("10088749");
  msg.set(StrikeMultiplier_55);
  Instrument_55.insert(StrikeMultiplier_55.getString());
  FIX::StrikePrice StrikePrice_55;
  StrikePrice_55.setString("7884916");
  msg.set(StrikePrice_55);
  Instrument_55.insert(StrikePrice_55.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_55(2);
  msg.set(StrikePriceBoundaryMethod_55);
  Instrument_55.insert(StrikePriceBoundaryMethod_55.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_55;
  StrikePriceBoundaryPrecision_55.setString("98.190000");
  msg.set(StrikePriceBoundaryPrecision_55);
  Instrument_55.insert(StrikePriceBoundaryPrecision_55.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_55(2);
  msg.set(StrikePriceDeterminationMethod_55);
  Instrument_55.insert(StrikePriceDeterminationMethod_55.getString());
  FIX::StrikeValue StrikeValue_55;
  StrikeValue_55.setString("11795888");
  msg.set(StrikeValue_55);
  Instrument_55.insert(StrikeValue_55.getString());
  FIX::Symbol Symbol_55("STRING_1470386858");
  msg.set(Symbol_55);
  Instrument_55.insert(Symbol_55.getString());
  FIX::SymbolSfx SymbolSfx_55("STRING_CD");
  msg.set(SymbolSfx_55);
  Instrument_55.insert(SymbolSfx_55.getString());
  FIX::TimeUnit TimeUnit_55("STRING_H");
  msg.set(TimeUnit_55);
  Instrument_55.insert(TimeUnit_55.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_55(4);
  msg.set(UnderlyingPriceDeterminationMethod_55);
  Instrument_55.insert(UnderlyingPriceDeterminationMethod_55.getString());
  FIX::UnitOfMeasure UnitOfMeasure_55("STRING_tn");
  msg.set(UnitOfMeasure_55);
  Instrument_55.insert(UnitOfMeasure_55.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_55;
  UnitOfMeasureQty_55.setString("8632659");
  msg.set(UnitOfMeasureQty_55);
  Instrument_55.insert(UnitOfMeasureQty_55.getString());
  FIX::ValuationMethod ValuationMethod_55("STRING_CDSD");
  msg.set(ValuationMethod_55);
  Instrument_55.insert(ValuationMethod_55.getString());
  all_values.push_back(Instrument_55);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::PositionReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_106;
    FIX::ComplexEventCondition ComplexEventCondition_106(2);
    noComplexEvents_0_0.set(ComplexEventCondition_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventCondition_106.getString());
    FIX::ComplexEventPrice ComplexEventPrice_106;
    ComplexEventPrice_106.setString("10756537");
    noComplexEvents_0_0.set(ComplexEventPrice_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventPrice_106.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_106(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventPriceBoundaryMethod_106.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_106;
    ComplexEventPriceBoundaryPrecision_106.setString("63.790000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventPriceBoundaryPrecision_106.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_106(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventPriceTimeType_106.getString());
    FIX::ComplexEventType ComplexEventType_106(6);
    noComplexEvents_0_0.set(ComplexEventType_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventType_106.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_106;
    ComplexOptPayoutAmount_106.setString("7709111");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexOptPayoutAmount_106.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_106);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_218;
      FIX::ComplexEventEndDate ComplexEventEndDate_218(FIX::UTCTIMESTAMP(5, 10, 6, 24, 82002));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_218);
      ComplexEventDates_NoComplexEventDates_218.insert(ComplexEventEndDate_218.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_218(FIX::UTCTIMESTAMP(7, 11, 42, 3, 122009));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_218);
      ComplexEventDates_NoComplexEventDates_218.insert(ComplexEventStartDate_218.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_218);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_433;
        FIX::ComplexEventEndTime ComplexEventEndTime_433(FIX::UTCTIMEONLY(18, 49, 8));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_433);
        ComplexEventTimes_NoComplexEventTimes_433.insert(ComplexEventEndTime_433.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_433(FIX::UTCTIMEONLY(8, 5, 22));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_433);
        ComplexEventTimes_NoComplexEventTimes_433.insert(ComplexEventStartTime_433.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_433);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_434;
        FIX::ComplexEventEndTime ComplexEventEndTime_434(FIX::UTCTIMEONLY(14, 25, 29));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_434);
        ComplexEventTimes_NoComplexEventTimes_434.insert(ComplexEventEndTime_434.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_434(FIX::UTCTIMEONLY(7, 25, 23));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_434);
        ComplexEventTimes_NoComplexEventTimes_434.insert(ComplexEventStartTime_434.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_434);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_435;
        FIX::ComplexEventEndTime ComplexEventEndTime_435(FIX::UTCTIMEONLY(10, 25, 47));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_435);
        ComplexEventTimes_NoComplexEventTimes_435.insert(ComplexEventEndTime_435.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_435(FIX::UTCTIMEONLY(8, 13, 44));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_435);
        ComplexEventTimes_NoComplexEventTimes_435.insert(ComplexEventStartTime_435.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_435);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_219;
      FIX::ComplexEventEndDate ComplexEventEndDate_219(FIX::UTCTIMESTAMP(5, 18, 11, 0, 32001));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_219);
      ComplexEventDates_NoComplexEventDates_219.insert(ComplexEventEndDate_219.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_219(FIX::UTCTIMESTAMP(8, 49, 33, 25, 102012));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_219);
      ComplexEventDates_NoComplexEventDates_219.insert(ComplexEventStartDate_219.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_219);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_436;
        FIX::ComplexEventEndTime ComplexEventEndTime_436(FIX::UTCTIMEONLY(20, 37, 44));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_436);
        ComplexEventTimes_NoComplexEventTimes_436.insert(ComplexEventEndTime_436.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_436(FIX::UTCTIMEONLY(0, 1, 48));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_436);
        ComplexEventTimes_NoComplexEventTimes_436.insert(ComplexEventStartTime_436.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_436);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::PositionReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_107;
    FIX::ComplexEventCondition ComplexEventCondition_107(2);
    noComplexEvents_0_1.set(ComplexEventCondition_107);
    ComplexEvents_NoComplexEvents_107.insert(ComplexEventCondition_107.getString());
    FIX::ComplexEventPrice ComplexEventPrice_107;
    ComplexEventPrice_107.setString("10036809");
    noComplexEvents_0_1.set(ComplexEventPrice_107);
    ComplexEvents_NoComplexEvents_107.insert(ComplexEventPrice_107.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_107(4);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_107);
    ComplexEvents_NoComplexEvents_107.insert(ComplexEventPriceBoundaryMethod_107.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_107;
    ComplexEventPriceBoundaryPrecision_107.setString("75.800000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_107);
    ComplexEvents_NoComplexEvents_107.insert(ComplexEventPriceBoundaryPrecision_107.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_107(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_107);
    ComplexEvents_NoComplexEvents_107.insert(ComplexEventPriceTimeType_107.getString());
    FIX::ComplexEventType ComplexEventType_107(9);
    noComplexEvents_0_1.set(ComplexEventType_107);
    ComplexEvents_NoComplexEvents_107.insert(ComplexEventType_107.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_107;
    ComplexOptPayoutAmount_107.setString("16443726");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_107);
    ComplexEvents_NoComplexEvents_107.insert(ComplexOptPayoutAmount_107.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_107);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_220;
      FIX::ComplexEventEndDate ComplexEventEndDate_220(FIX::UTCTIMESTAMP(7, 40, 33, 15, 72009));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_220);
      ComplexEventDates_NoComplexEventDates_220.insert(ComplexEventEndDate_220.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_220(FIX::UTCTIMESTAMP(6, 22, 13, 3, 122014));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_220);
      ComplexEventDates_NoComplexEventDates_220.insert(ComplexEventStartDate_220.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_220);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_437;
        FIX::ComplexEventEndTime ComplexEventEndTime_437(FIX::UTCTIMEONLY(8, 21, 51));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_437);
        ComplexEventTimes_NoComplexEventTimes_437.insert(ComplexEventEndTime_437.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_437(FIX::UTCTIMEONLY(9, 53, 14));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_437);
        ComplexEventTimes_NoComplexEventTimes_437.insert(ComplexEventStartTime_437.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_437);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_221;
      FIX::ComplexEventEndDate ComplexEventEndDate_221(FIX::UTCTIMESTAMP(16, 20, 15, 14, 112011));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_221);
      ComplexEventDates_NoComplexEventDates_221.insert(ComplexEventEndDate_221.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_221(FIX::UTCTIMESTAMP(20, 24, 15, 21, 42015));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_221);
      ComplexEventDates_NoComplexEventDates_221.insert(ComplexEventStartDate_221.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_221);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_438;
        FIX::ComplexEventEndTime ComplexEventEndTime_438(FIX::UTCTIMEONLY(3, 8, 41));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_438);
        ComplexEventTimes_NoComplexEventTimes_438.insert(ComplexEventEndTime_438.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_438(FIX::UTCTIMEONLY(20, 17, 38));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_438);
        ComplexEventTimes_NoComplexEventTimes_438.insert(ComplexEventStartTime_438.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_438);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_222;
      FIX::ComplexEventEndDate ComplexEventEndDate_222(FIX::UTCTIMESTAMP(1, 51, 6, 27, 22009));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_222);
      ComplexEventDates_NoComplexEventDates_222.insert(ComplexEventEndDate_222.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_222(FIX::UTCTIMESTAMP(12, 12, 18, 11, 32016));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_222);
      ComplexEventDates_NoComplexEventDates_222.insert(ComplexEventStartDate_222.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_222);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_439;
        FIX::ComplexEventEndTime ComplexEventEndTime_439(FIX::UTCTIMEONLY(4, 13, 17));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_439);
        ComplexEventTimes_NoComplexEventTimes_439.insert(ComplexEventEndTime_439.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_439(FIX::UTCTIMEONLY(5, 42, 48));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_439);
        ComplexEventTimes_NoComplexEventTimes_439.insert(ComplexEventStartTime_439.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_439);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_440;
        FIX::ComplexEventEndTime ComplexEventEndTime_440(FIX::UTCTIMEONLY(2, 56, 45));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_440);
        ComplexEventTimes_NoComplexEventTimes_440.insert(ComplexEventEndTime_440.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_440(FIX::UTCTIMEONLY(20, 2, 7));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_440);
        ComplexEventTimes_NoComplexEventTimes_440.insert(ComplexEventStartTime_440.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_440);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::PositionReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_111;
    FIX::EventDate EventDate_111("LOCALMKTDATE_161754620");
    noEvents_0_0.set(EventDate_111);
    EvntGrp_NoEvents_111.insert(EventDate_111.getString());
    FIX::EventPx EventPx_111;
    EventPx_111.setString("19219421");
    noEvents_0_0.set(EventPx_111);
    EvntGrp_NoEvents_111.insert(EventPx_111.getString());
    FIX::EventText EventText_111("STRING_2105281390");
    noEvents_0_0.set(EventText_111);
    EvntGrp_NoEvents_111.insert(EventText_111.getString());
    FIX::EventTime EventTime_111(FIX::UTCTIMESTAMP(16, 53, 17, 20, 62017));
    noEvents_0_0.set(EventTime_111);
    EvntGrp_NoEvents_111.insert(EventTime_111.getString());
    FIX::EventType EventType_111(4);
    noEvents_0_0.set(EventType_111);
    EvntGrp_NoEvents_111.insert(EventType_111.getString());
    all_values.push_back(EvntGrp_NoEvents_111);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::PositionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_100;
    FIX::InstrumentPartyID InstrumentPartyID_100("STRING_1779161719");
    noInstrumentParties_0_0.set(InstrumentPartyID_100);
    InstrumentParties_NoInstrumentParties_100.insert(InstrumentPartyID_100.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_100('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_100);
    InstrumentParties_NoInstrumentParties_100.insert(InstrumentPartyIDSource_100.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_100(560200937);
    noInstrumentParties_0_0.set(InstrumentPartyRole_100);
    InstrumentParties_NoInstrumentParties_100.insert(InstrumentPartyRole_100.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_100);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199;
      FIX::InstrumentPartySubID InstrumentPartySubID_199("STRING_945074098");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_199);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199.insert(InstrumentPartySubID_199.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_199(444492986);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_199);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199.insert(InstrumentPartySubIDType_199.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::PositionReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_101;
    FIX::InstrumentPartyID InstrumentPartyID_101("STRING_642829065");
    noInstrumentParties_0_1.set(InstrumentPartyID_101);
    InstrumentParties_NoInstrumentParties_101.insert(InstrumentPartyID_101.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_101('4');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_101);
    InstrumentParties_NoInstrumentParties_101.insert(InstrumentPartyIDSource_101.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_101(1802051768);
    noInstrumentParties_0_1.set(InstrumentPartyRole_101);
    InstrumentParties_NoInstrumentParties_101.insert(InstrumentPartyRole_101.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_101);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200;
      FIX::InstrumentPartySubID InstrumentPartySubID_200("STRING_1158482995");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_200);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200.insert(InstrumentPartySubID_200.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_200(769929890);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_200);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200.insert(InstrumentPartySubIDType_200.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::PositionReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_102;
    FIX::InstrumentPartyID InstrumentPartyID_102("STRING_869577741");
    noInstrumentParties_0_2.set(InstrumentPartyID_102);
    InstrumentParties_NoInstrumentParties_102.insert(InstrumentPartyID_102.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_102('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_102);
    InstrumentParties_NoInstrumentParties_102.insert(InstrumentPartyIDSource_102.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_102(393518839);
    noInstrumentParties_0_2.set(InstrumentPartyRole_102);
    InstrumentParties_NoInstrumentParties_102.insert(InstrumentPartyRole_102.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_102);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201;
      FIX::InstrumentPartySubID InstrumentPartySubID_201("STRING_293560295");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_201);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201.insert(InstrumentPartySubID_201.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_201(1970927967);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_201);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201.insert(InstrumentPartySubIDType_201.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::PositionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_109;
    FIX::SecurityAltID SecurityAltID_109("STRING_455314915");
    noSecurityAltID_0_0.set(SecurityAltID_109);
    SecAltIDGrp_NoSecurityAltID_109.insert(SecurityAltID_109.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_109("STRING_1745386458");
    noSecurityAltID_0_0.set(SecurityAltIDSource_109);
    SecAltIDGrp_NoSecurityAltID_109.insert(SecurityAltIDSource_109.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_109);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::PositionReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_110;
    FIX::SecurityAltID SecurityAltID_110("STRING_75114195");
    noSecurityAltID_0_1.set(SecurityAltID_110);
    SecAltIDGrp_NoSecurityAltID_110.insert(SecurityAltID_110.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_110("STRING_1048346647");
    noSecurityAltID_0_1.set(SecurityAltIDSource_110);
    SecAltIDGrp_NoSecurityAltID_110.insert(SecurityAltIDSource_110.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_110);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_110;
  FIX::SecurityXML SecurityXML_111("XMLDATA_1512206594");
  msg.set(SecurityXML_111);
  FIX::SecurityXMLLen SecurityXMLLen_55(741619269);
  msg.set(SecurityXMLLen_55);
  FIX::SecurityXMLSchema SecurityXMLSchema_55("STRING_915511216");
  msg.set(SecurityXMLSchema_55);
  SecurityXML_110.insert(SecurityXMLSchema_55.getString());
  all_values.push_back(SecurityXML_110);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::PositionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_101;
    FIX::PartyID PartyID_101("STRING_1949210234");
    noPartyIDs_0_0.set(PartyID_101);
    Parties_NoPartyIDs_101.insert(PartyID_101.getString());
    FIX::PartyIDSource PartyIDSource_101('8');
    noPartyIDs_0_0.set(PartyIDSource_101);
    Parties_NoPartyIDs_101.insert(PartyIDSource_101.getString());
    FIX::PartyRole PartyRole_101(18);
    noPartyIDs_0_0.set(PartyRole_101);
    Parties_NoPartyIDs_101.insert(PartyRole_101.getString());
    all_values.push_back(Parties_NoPartyIDs_101);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_198;
      FIX::PartySubID PartySubID_198("STRING_501529135");
      noPartySubIDs_0_1_0.set(PartySubID_198);
      PtysSubGrp_NoPartySubIDs_198.insert(PartySubID_198.getString());
      FIX::PartySubIDType PartySubIDType_198(24);
      noPartySubIDs_0_1_0.set(PartySubIDType_198);
      PtysSubGrp_NoPartySubIDs_198.insert(PartySubIDType_198.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_198);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::PositionReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_102;
    FIX::PartyID PartyID_102("STRING_1234327187");
    noPartyIDs_0_1.set(PartyID_102);
    Parties_NoPartyIDs_102.insert(PartyID_102.getString());
    FIX::PartyIDSource PartyIDSource_102('H');
    noPartyIDs_0_1.set(PartyIDSource_102);
    Parties_NoPartyIDs_102.insert(PartyIDSource_102.getString());
    FIX::PartyRole PartyRole_102(13);
    noPartyIDs_0_1.set(PartyRole_102);
    Parties_NoPartyIDs_102.insert(PartyRole_102.getString());
    all_values.push_back(Parties_NoPartyIDs_102);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_199;
      FIX::PartySubID PartySubID_199("STRING_2135675732");
      noPartySubIDs_1_1_0.set(PartySubID_199);
      PtysSubGrp_NoPartySubIDs_199.insert(PartySubID_199.getString());
      FIX::PartySubIDType PartySubIDType_199(5);
      noPartySubIDs_1_1_0.set(PartySubIDType_199);
      PtysSubGrp_NoPartySubIDs_199.insert(PartySubIDType_199.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_199);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_200;
      FIX::PartySubID PartySubID_200("STRING_1333388293");
      noPartySubIDs_1_1_1.set(PartySubID_200);
      PtysSubGrp_NoPartySubIDs_200.insert(PartySubID_200.getString());
      FIX::PartySubIDType PartySubIDType_200(25);
      noPartySubIDs_1_1_1.set(PartySubIDType_200);
      PtysSubGrp_NoPartySubIDs_200.insert(PartySubIDType_200.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_200);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::PositionReport::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_103;
    FIX::PartyID PartyID_103("STRING_680474598");
    noPartyIDs_0_2.set(PartyID_103);
    Parties_NoPartyIDs_103.insert(PartyID_103.getString());
    FIX::PartyIDSource PartyIDSource_103('A');
    noPartyIDs_0_2.set(PartyIDSource_103);
    Parties_NoPartyIDs_103.insert(PartyIDSource_103.getString());
    FIX::PartyRole PartyRole_103(72);
    noPartyIDs_0_2.set(PartyRole_103);
    Parties_NoPartyIDs_103.insert(PartyRole_103.getString());
    all_values.push_back(Parties_NoPartyIDs_103);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_201;
      FIX::PartySubID PartySubID_201("STRING_349353375");
      noPartySubIDs_2_1_0.set(PartySubID_201);
      PtysSubGrp_NoPartySubIDs_201.insert(PartySubID_201.getString());
      FIX::PartySubIDType PartySubIDType_201(24);
      noPartySubIDs_2_1_0.set(PartySubIDType_201);
      PtysSubGrp_NoPartySubIDs_201.insert(PartySubIDType_201.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_201);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PosUndInstrmtGrp
  // Group PosUndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::PositionReport::NoUnderlyings noUnderlyings_0_0;
    // PosUndInstrmtGrp.NoUnderlyings
    multiset<string> PosUndInstrmtGrp_NoUnderlyings_0;
    FIX::UnderlyingDeliveryAmount UnderlyingDeliveryAmount_0;
    UnderlyingDeliveryAmount_0.setString("1727976");
    noUnderlyings_0_0.set(UnderlyingDeliveryAmount_0);
    PosUndInstrmtGrp_NoUnderlyings_0.insert(UnderlyingDeliveryAmount_0.getString());
    FIX::UnderlyingSettlPrice UnderlyingSettlPrice_1;
    UnderlyingSettlPrice_1.setString("1422198");
    noUnderlyings_0_0.set(UnderlyingSettlPrice_1);
    PosUndInstrmtGrp_NoUnderlyings_0.insert(UnderlyingSettlPrice_1.getString());
    FIX::UnderlyingSettlPriceType UnderlyingSettlPriceType_0(813487702);
    noUnderlyings_0_0.set(UnderlyingSettlPriceType_0);
    PosUndInstrmtGrp_NoUnderlyings_0.insert(UnderlyingSettlPriceType_0.getString());
    all_values.push_back(PosUndInstrmtGrp_NoUnderlyings_0);

    // UnderlyingAmount
    // Group UnderlyingAmount.NoUnderlyingAmounts
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingAmounts noUnderlyingAmounts_0_1_0;
      // UnderlyingAmount.NoUnderlyingAmounts
      multiset<string> UnderlyingAmount_NoUnderlyingAmounts_0;
      FIX::UnderlyingCollectAmount UnderlyingCollectAmount_0;
      UnderlyingCollectAmount_0.setString("2173340");
      noUnderlyingAmounts_0_1_0.set(UnderlyingCollectAmount_0);
      UnderlyingAmount_NoUnderlyingAmounts_0.insert(UnderlyingCollectAmount_0.getString());
      FIX::UnderlyingPayAmount UnderlyingPayAmount_0;
      UnderlyingPayAmount_0.setString("18618343");
      noUnderlyingAmounts_0_1_0.set(UnderlyingPayAmount_0);
      UnderlyingAmount_NoUnderlyingAmounts_0.insert(UnderlyingPayAmount_0.getString());
      FIX::UnderlyingSettlementDate UnderlyingSettlementDate_0("LOCALMKTDATE_1282907098");
      noUnderlyingAmounts_0_1_0.set(UnderlyingSettlementDate_0);
      UnderlyingAmount_NoUnderlyingAmounts_0.insert(UnderlyingSettlementDate_0.getString());
      FIX::UnderlyingSettlementStatus UnderlyingSettlementStatus_0("STRING_958953358");
      noUnderlyingAmounts_0_1_0.set(UnderlyingSettlementStatus_0);
      UnderlyingAmount_NoUnderlyingAmounts_0.insert(UnderlyingSettlementStatus_0.getString());
      all_values.push_back(UnderlyingAmount_NoUnderlyingAmounts_0);

      noUnderlyings_0_0.addGroup(noUnderlyingAmounts_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingAmounts noUnderlyingAmounts_0_1_1;
      // UnderlyingAmount.NoUnderlyingAmounts
      multiset<string> UnderlyingAmount_NoUnderlyingAmounts_1;
      FIX::UnderlyingCollectAmount UnderlyingCollectAmount_1;
      UnderlyingCollectAmount_1.setString("6298619");
      noUnderlyingAmounts_0_1_1.set(UnderlyingCollectAmount_1);
      UnderlyingAmount_NoUnderlyingAmounts_1.insert(UnderlyingCollectAmount_1.getString());
      FIX::UnderlyingPayAmount UnderlyingPayAmount_1;
      UnderlyingPayAmount_1.setString("13760599");
      noUnderlyingAmounts_0_1_1.set(UnderlyingPayAmount_1);
      UnderlyingAmount_NoUnderlyingAmounts_1.insert(UnderlyingPayAmount_1.getString());
      FIX::UnderlyingSettlementDate UnderlyingSettlementDate_1("LOCALMKTDATE_760679945");
      noUnderlyingAmounts_0_1_1.set(UnderlyingSettlementDate_1);
      UnderlyingAmount_NoUnderlyingAmounts_1.insert(UnderlyingSettlementDate_1.getString());
      FIX::UnderlyingSettlementStatus UnderlyingSettlementStatus_1("STRING_1499712982");
      noUnderlyingAmounts_0_1_1.set(UnderlyingSettlementStatus_1);
      UnderlyingAmount_NoUnderlyingAmounts_1.insert(UnderlyingSettlementStatus_1.getString());
      all_values.push_back(UnderlyingAmount_NoUnderlyingAmounts_1);

      noUnderlyings_0_0.addGroup(noUnderlyingAmounts_0_1_1);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_84;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_84("DATA_98410738");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_84);
    UnderlyingInstrument_84.insert(EncodedUnderlyingIssuer_84.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_84(1434806195);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_84);
    UnderlyingInstrument_84.insert(EncodedUnderlyingIssuerLen_84.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_84("DATA_2001242117");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_84);
    UnderlyingInstrument_84.insert(EncodedUnderlyingSecurityDesc_84.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_84(376709628);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_84);
    UnderlyingInstrument_84.insert(EncodedUnderlyingSecurityDescLen_84.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_84;
    UnderlyingAdjustedQuantity_84.setString("5216497");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_84);
    UnderlyingInstrument_84.insert(UnderlyingAdjustedQuantity_84.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_84;
    UnderlyingAllocationPercent_84.setString("51.360000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_84);
    UnderlyingInstrument_84.insert(UnderlyingAllocationPercent_84.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_84;
    UnderlyingAttachmentPoint_84.setString("26.160000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_84);
    UnderlyingInstrument_84.insert(UnderlyingAttachmentPoint_84.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_84("STRING_52986259");
    noUnderlyings_0_0.set(UnderlyingCFICode_84);
    UnderlyingInstrument_84.insert(UnderlyingCFICode_84.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_84("STRING_1334797220");
    noUnderlyings_0_0.set(UnderlyingCPProgram_84);
    UnderlyingInstrument_84.insert(UnderlyingCPProgram_84.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_84("STRING_1122074219");
    noUnderlyings_0_0.set(UnderlyingCPRegType_84);
    UnderlyingInstrument_84.insert(UnderlyingCPRegType_84.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_84;
    UnderlyingCapValue_84.setString("13863745");
    noUnderlyings_0_0.set(UnderlyingCapValue_84);
    UnderlyingInstrument_84.insert(UnderlyingCapValue_84.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_84;
    UnderlyingCashAmount_84.setString("5980781");
    noUnderlyings_0_0.set(UnderlyingCashAmount_84);
    UnderlyingInstrument_84.insert(UnderlyingCashAmount_84.getString());
    FIX::UnderlyingCashType UnderlyingCashType_84("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_84);
    UnderlyingInstrument_84.insert(UnderlyingCashType_84.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_84;
    UnderlyingContractMultiplier_84.setString("13422090");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_84);
    UnderlyingInstrument_84.insert(UnderlyingContractMultiplier_84.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_84(730936820);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_84);
    UnderlyingInstrument_84.insert(UnderlyingContractMultiplierUnit_84.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_84("COUNTRY_1867161309");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_84);
    UnderlyingInstrument_84.insert(UnderlyingCountryOfIssue_84.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_84("LOCALMKTDATE_1691562464");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_84);
    UnderlyingInstrument_84.insert(UnderlyingCouponPaymentDate_84.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_84;
    UnderlyingCouponRate_84.setString("2.600000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_84);
    UnderlyingInstrument_84.insert(UnderlyingCouponRate_84.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_84("STRING_77850448");
    noUnderlyings_0_0.set(UnderlyingCreditRating_84);
    UnderlyingInstrument_84.insert(UnderlyingCreditRating_84.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_84("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_84);
    UnderlyingInstrument_84.insert(UnderlyingCurrency_84.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_84;
    UnderlyingCurrentValue_84.setString("8913381");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_84);
    UnderlyingInstrument_84.insert(UnderlyingCurrentValue_84.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_84;
    UnderlyingDetachmentPoint_84.setString("6.630000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_84);
    UnderlyingInstrument_84.insert(UnderlyingDetachmentPoint_84.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_84;
    UnderlyingDirtyPrice_84.setString("11153942");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_84);
    UnderlyingInstrument_84.insert(UnderlyingDirtyPrice_84.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_84;
    UnderlyingEndPrice_84.setString("6056888");
    noUnderlyings_0_0.set(UnderlyingEndPrice_84);
    UnderlyingInstrument_84.insert(UnderlyingEndPrice_84.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_84;
    UnderlyingEndValue_84.setString("7704841");
    noUnderlyings_0_0.set(UnderlyingEndValue_84);
    UnderlyingInstrument_84.insert(UnderlyingEndValue_84.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_84(2074347602);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_84);
    UnderlyingInstrument_84.insert(UnderlyingExerciseStyle_84.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_84;
    UnderlyingFXRate_84.setString("12355507");
    noUnderlyings_0_0.set(UnderlyingFXRate_84);
    UnderlyingInstrument_84.insert(UnderlyingFXRate_84.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_84('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_84);
    UnderlyingInstrument_84.insert(UnderlyingFXRateCalc_84.getString());
    FIX::UnderlyingFactor UnderlyingFactor_84;
    UnderlyingFactor_84.setString("6875438");
    noUnderlyings_0_0.set(UnderlyingFactor_84);
    UnderlyingInstrument_84.insert(UnderlyingFactor_84.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_84(587780104);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_84);
    UnderlyingInstrument_84.insert(UnderlyingFlowScheduleType_84.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_84("STRING_97471124");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_84);
    UnderlyingInstrument_84.insert(UnderlyingInstrRegistry_84.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_84("LOCALMKTDATE_2122350094");
    noUnderlyings_0_0.set(UnderlyingIssueDate_84);
    UnderlyingInstrument_84.insert(UnderlyingIssueDate_84.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_84("STRING_441538573");
    noUnderlyings_0_0.set(UnderlyingIssuer_84);
    UnderlyingInstrument_84.insert(UnderlyingIssuer_84.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_84("STRING_474180752");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_84);
    UnderlyingInstrument_84.insert(UnderlyingLocaleOfIssue_84.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_84("LOCALMKTDATE_496516180");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_84);
    UnderlyingInstrument_84.insert(UnderlyingMaturityDate_84.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_84("MONTHYEAR_1788143710");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_84);
    UnderlyingInstrument_84.insert(UnderlyingMaturityMonthYear_84.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_84("TZTIMEONLY_2074263368");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_84);
    UnderlyingInstrument_84.insert(UnderlyingMaturityTime_84.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_84;
    UnderlyingNotionalPercentageOutstanding_84.setString("24.390000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_84);
    UnderlyingInstrument_84.insert(UnderlyingNotionalPercentageOutstanding_84.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_84('9');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_84);
    UnderlyingInstrument_84.insert(UnderlyingOptAttribute_84.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_84;
    UnderlyingOriginalNotionalPercentageOutstanding_84.setString("39.390000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_84);
    UnderlyingInstrument_84.insert(UnderlyingOriginalNotionalPercentageOutstanding_84.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_84("STRING_1935876992");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_84);
    UnderlyingInstrument_84.insert(UnderlyingPriceUnitOfMeasure_84.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_84;
    UnderlyingPriceUnitOfMeasureQty_84.setString("15735354");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_84);
    UnderlyingInstrument_84.insert(UnderlyingPriceUnitOfMeasureQty_84.getString());
    FIX::UnderlyingProduct UnderlyingProduct_84(703919108);
    noUnderlyings_0_0.set(UnderlyingProduct_84);
    UnderlyingInstrument_84.insert(UnderlyingProduct_84.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_84(1130602432);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_84);
    UnderlyingInstrument_84.insert(UnderlyingPutOrCall_84.getString());
    FIX::UnderlyingPx UnderlyingPx_84;
    UnderlyingPx_84.setString("1569886");
    noUnderlyings_0_0.set(UnderlyingPx_84);
    UnderlyingInstrument_84.insert(UnderlyingPx_84.getString());
    FIX::UnderlyingQty UnderlyingQty_84;
    UnderlyingQty_84.setString("4235967");
    noUnderlyings_0_0.set(UnderlyingQty_84);
    UnderlyingInstrument_84.insert(UnderlyingQty_84.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_84("LOCALMKTDATE_674681248");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_84);
    UnderlyingInstrument_84.insert(UnderlyingRedemptionDate_84.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_84("STRING_912828864");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_84);
    UnderlyingInstrument_84.insert(UnderlyingRepoCollateralSecurityType_84.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_84;
    UnderlyingRepurchaseRate_84.setString("72.170000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_84);
    UnderlyingInstrument_84.insert(UnderlyingRepurchaseRate_84.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_84(391557759);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_84);
    UnderlyingInstrument_84.insert(UnderlyingRepurchaseTerm_84.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_84("STRING_1810889019");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_84);
    UnderlyingInstrument_84.insert(UnderlyingRestructuringType_84.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_84("STRING_1392785368");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_84);
    UnderlyingInstrument_84.insert(UnderlyingSecurityDesc_84.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_84("EXCHANGE_2026618422");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_84);
    UnderlyingInstrument_84.insert(UnderlyingSecurityExchange_84.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_84("STRING_778799615");
    noUnderlyings_0_0.set(UnderlyingSecurityID_84);
    UnderlyingInstrument_84.insert(UnderlyingSecurityID_84.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_84("STRING_1998474220");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_84);
    UnderlyingInstrument_84.insert(UnderlyingSecurityIDSource_84.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_84("STRING_649618887");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_84);
    UnderlyingInstrument_84.insert(UnderlyingSecuritySubType_84.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_84("STRING_705663569");
    noUnderlyings_0_0.set(UnderlyingSecurityType_84);
    UnderlyingInstrument_84.insert(UnderlyingSecurityType_84.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_84("STRING_1086541342");
    noUnderlyings_0_0.set(UnderlyingSeniority_84);
    UnderlyingInstrument_84.insert(UnderlyingSeniority_84.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_84("STRING_648679273");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_84);
    UnderlyingInstrument_84.insert(UnderlyingSettlMethod_84.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_84(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_84);
    UnderlyingInstrument_84.insert(UnderlyingSettlementType_84.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_84;
    UnderlyingStartValue_84.setString("16743214");
    noUnderlyings_0_0.set(UnderlyingStartValue_84);
    UnderlyingInstrument_84.insert(UnderlyingStartValue_84.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_84("STRING_746150397");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_84);
    UnderlyingInstrument_84.insert(UnderlyingStateOrProvinceOfIssue_84.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_84("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_84);
    UnderlyingInstrument_84.insert(UnderlyingStrikeCurrency_84.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_84;
    UnderlyingStrikePrice_84.setString("12203311");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_84);
    UnderlyingInstrument_84.insert(UnderlyingStrikePrice_84.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_84("STRING_1864590096");
    noUnderlyings_0_0.set(UnderlyingSymbol_84);
    UnderlyingInstrument_84.insert(UnderlyingSymbol_84.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_84("STRING_1756520081");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_84);
    UnderlyingInstrument_84.insert(UnderlyingSymbolSfx_84.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_84("STRING_1147110869");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_84);
    UnderlyingInstrument_84.insert(UnderlyingTimeUnit_84.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_84("STRING_266608887");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_84);
    UnderlyingInstrument_84.insert(UnderlyingUnitOfMeasure_84.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_84;
    UnderlyingUnitOfMeasureQty_84.setString("5844937");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_84);
    UnderlyingInstrument_84.insert(UnderlyingUnitOfMeasureQty_84.getString());
    all_values.push_back(UnderlyingInstrument_84);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_167;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_167("STRING_55002231");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_167);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_167.insert(UnderlyingSecurityAltID_167.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_167("STRING_10545500");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_167);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_167.insert(UnderlyingSecurityAltIDSource_167.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_167);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_168;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_168("STRING_752400269");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_168);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_168.insert(UnderlyingSecurityAltID_168.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_168("STRING_1185604664");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_168);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_168.insert(UnderlyingSecurityAltIDSource_168.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_168);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_169;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_169("STRING_167534104");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_169);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_169.insert(UnderlyingSecurityAltID_169.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_169("STRING_1175997038");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_169);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_169.insert(UnderlyingSecurityAltIDSource_169.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_169);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_160;
      FIX::UnderlyingStipType UnderlyingStipType_160("STRING_1080362968");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_160);
      UnderlyingStipulations_NoUnderlyingStips_160.insert(UnderlyingStipType_160.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_160("STRING_1677444256");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_160);
      UnderlyingStipulations_NoUnderlyingStips_160.insert(UnderlyingStipValue_160.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_160);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_169;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_169("STRING_743768339");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_169);
      UndlyInstrumentParties_NoUndlyInstrumentParties_169.insert(UnderlyingInstrumentPartyID_169.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_169('9');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_169);
      UndlyInstrumentParties_NoUndlyInstrumentParties_169.insert(UnderlyingInstrumentPartyIDSource_169.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_169(2130978445);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_169);
      UndlyInstrumentParties_NoUndlyInstrumentParties_169.insert(UnderlyingInstrumentPartyRole_169.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_169);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_329("STRING_773736548");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_329);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329.insert(UnderlyingInstrumentPartySubID_329.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_329(633113685);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_329);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329.insert(UnderlyingInstrumentPartySubIDType_329.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_329);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_330("STRING_80747876");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_330);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330.insert(UnderlyingInstrumentPartySubID_330.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_330(1860277890);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_330);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330.insert(UnderlyingInstrumentPartySubIDType_330.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_330);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_170;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_170("STRING_1281792958");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_170);
      UndlyInstrumentParties_NoUndlyInstrumentParties_170.insert(UnderlyingInstrumentPartyID_170.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_170('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_170);
      UndlyInstrumentParties_NoUndlyInstrumentParties_170.insert(UnderlyingInstrumentPartyIDSource_170.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_170(1387115688);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_170);
      UndlyInstrumentParties_NoUndlyInstrumentParties_170.insert(UnderlyingInstrumentPartyRole_170.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_170);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_331("STRING_694545612");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_331);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331.insert(UnderlyingInstrumentPartySubID_331.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_331(1355492059);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_331);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331.insert(UnderlyingInstrumentPartySubIDType_331.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_331);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_332("STRING_1100790857");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_332);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332.insert(UnderlyingInstrumentPartySubID_332.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_332(411652060);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_332);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332.insert(UnderlyingInstrumentPartySubIDType_332.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_332);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_333("STRING_964528493");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_333);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333.insert(UnderlyingInstrumentPartySubID_333.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_333(100418079);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_333);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333.insert(UnderlyingInstrumentPartySubIDType_333.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_333);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::PositionReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_13;
    FIX::PosAmt PosAmt_13;
    PosAmt_13.setString("15490222");
    noPosAmt_0_0.set(PosAmt_13);
    PositionAmountData_NoPosAmt_13.insert(PosAmt_13.getString());
    FIX::PosAmtType PosAmtType_13("STRING_COLAT");
    noPosAmt_0_0.set(PosAmtType_13);
    PositionAmountData_NoPosAmt_13.insert(PosAmtType_13.getString());
    FIX::PositionCurrency PositionCurrency_13("STRING_733263179");
    noPosAmt_0_0.set(PositionCurrency_13);
    PositionAmountData_NoPosAmt_13.insert(PositionCurrency_13.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_13);

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::PositionReport::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_14;
    FIX::PosAmt PosAmt_14;
    PosAmt_14.setString("15595677");
    noPosAmt_0_1.set(PosAmt_14);
    PositionAmountData_NoPosAmt_14.insert(PosAmt_14.getString());
    FIX::PosAmtType PosAmtType_14("STRING_BANK");
    noPosAmt_0_1.set(PosAmtType_14);
    PositionAmountData_NoPosAmt_14.insert(PosAmtType_14.getString());
    FIX::PositionCurrency PositionCurrency_14("STRING_1918867843");
    noPosAmt_0_1.set(PositionCurrency_14);
    PositionAmountData_NoPosAmt_14.insert(PositionCurrency_14.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_14);

    msg.addGroup(noPosAmt_0_1);
  }
  {
    FIX50SP2::PositionReport::NoPosAmt noPosAmt_0_2;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_15;
    FIX::PosAmt PosAmt_15;
    PosAmt_15.setString("17271018");
    noPosAmt_0_2.set(PosAmt_15);
    PositionAmountData_NoPosAmt_15.insert(PosAmt_15.getString());
    FIX::PosAmtType PosAmtType_15("STRING_CMTM");
    noPosAmt_0_2.set(PosAmtType_15);
    PositionAmountData_NoPosAmt_15.insert(PosAmtType_15.getString());
    FIX::PositionCurrency PositionCurrency_15("STRING_1631670108");
    noPosAmt_0_2.set(PositionCurrency_15);
    PositionAmountData_NoPosAmt_15.insert(PositionCurrency_15.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_15);

    msg.addGroup(noPosAmt_0_2);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::PositionReport::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_8;
    FIX::LongQty LongQty_8;
    LongQty_8.setString("16072571");
    noPositions_0_0.set(LongQty_8);
    PositionQty_NoPositions_8.insert(LongQty_8.getString());
    FIX::PosQtyStatus PosQtyStatus_8(1);
    noPositions_0_0.set(PosQtyStatus_8);
    PositionQty_NoPositions_8.insert(PosQtyStatus_8.getString());
    FIX::PosType PosType_8("STRING_FIN");
    noPositions_0_0.set(PosType_8);
    PositionQty_NoPositions_8.insert(PosType_8.getString());
    FIX::QuantityDate QuantityDate_8("LOCALMKTDATE_382519483");
    noPositions_0_0.set(QuantityDate_8);
    PositionQty_NoPositions_8.insert(QuantityDate_8.getString());
    FIX::ShortQty ShortQty_8;
    ShortQty_8.setString("17195249");
    noPositions_0_0.set(ShortQty_8);
    PositionQty_NoPositions_8.insert(ShortQty_8.getString());
    all_values.push_back(PositionQty_NoPositions_8);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_93;
      FIX::NestedPartyID NestedPartyID_93("STRING_1156256031");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_93);
      NestedParties_NoNestedPartyIDs_93.insert(NestedPartyID_93.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_93('2');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_93);
      NestedParties_NoNestedPartyIDs_93.insert(NestedPartyIDSource_93.getString());
      FIX::NestedPartyRole NestedPartyRole_93(859581655);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_93);
      NestedParties_NoNestedPartyIDs_93.insert(NestedPartyRole_93.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_93);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_174;
        FIX::NestedPartySubID NestedPartySubID_174("STRING_1486947924");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_174);
        NstdPtysSubGrp_NoNestedPartySubIDs_174.insert(NestedPartySubID_174.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_174(186053352);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_174);
        NstdPtysSubGrp_NoNestedPartySubIDs_174.insert(NestedPartySubIDType_174.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_174);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_175;
        FIX::NestedPartySubID NestedPartySubID_175("STRING_108682313");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_175);
        NstdPtysSubGrp_NoNestedPartySubIDs_175.insert(NestedPartySubID_175.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_175(1367407632);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_175);
        NstdPtysSubGrp_NoNestedPartySubIDs_175.insert(NestedPartySubIDType_175.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_175);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_94;
      FIX::NestedPartyID NestedPartyID_94("STRING_880598965");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_94);
      NestedParties_NoNestedPartyIDs_94.insert(NestedPartyID_94.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_94('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_94);
      NestedParties_NoNestedPartyIDs_94.insert(NestedPartyIDSource_94.getString());
      FIX::NestedPartyRole NestedPartyRole_94(320714842);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_94);
      NestedParties_NoNestedPartyIDs_94.insert(NestedPartyRole_94.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_94);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_176;
        FIX::NestedPartySubID NestedPartySubID_176("STRING_281219217");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_176);
        NstdPtysSubGrp_NoNestedPartySubIDs_176.insert(NestedPartySubID_176.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_176(421132921);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_176);
        NstdPtysSubGrp_NoNestedPartySubIDs_176.insert(NestedPartySubIDType_176.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_176);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_177;
        FIX::NestedPartySubID NestedPartySubID_177("STRING_1970511973");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_177);
        NstdPtysSubGrp_NoNestedPartySubIDs_177.insert(NestedPartySubID_177.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_177(1830241426);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_177);
        NstdPtysSubGrp_NoNestedPartySubIDs_177.insert(NestedPartySubIDType_177.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_177);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_178;
        FIX::NestedPartySubID NestedPartySubID_178("STRING_570032160");
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubID_178);
        NstdPtysSubGrp_NoNestedPartySubIDs_178.insert(NestedPartySubID_178.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_178(556291505);
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubIDType_178);
        NstdPtysSubGrp_NoNestedPartySubIDs_178.insert(NestedPartySubIDType_178.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_178);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_95;
      FIX::NestedPartyID NestedPartyID_95("STRING_1242325487");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_95);
      NestedParties_NoNestedPartyIDs_95.insert(NestedPartyID_95.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_95('1');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_95);
      NestedParties_NoNestedPartyIDs_95.insert(NestedPartyIDSource_95.getString());
      FIX::NestedPartyRole NestedPartyRole_95(327675700);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_95);
      NestedParties_NoNestedPartyIDs_95.insert(NestedPartyRole_95.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_95);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_179;
        FIX::NestedPartySubID NestedPartySubID_179("STRING_1401144568");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_179);
        NstdPtysSubGrp_NoNestedPartySubIDs_179.insert(NestedPartySubID_179.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_179(1959345808);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_179);
        NstdPtysSubGrp_NoNestedPartySubIDs_179.insert(NestedPartySubIDType_179.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_179);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_180;
        FIX::NestedPartySubID NestedPartySubID_180("STRING_1481924786");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_180);
        NstdPtysSubGrp_NoNestedPartySubIDs_180.insert(NestedPartySubID_180.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_180(860918075);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_180);
        NstdPtysSubGrp_NoNestedPartySubIDs_180.insert(NestedPartySubIDType_180.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_180);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noPositions_0_0);
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
