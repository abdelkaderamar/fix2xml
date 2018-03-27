#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/TradeCaptureReportRequestAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradeCaptureReportRequestAck, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::TradeCaptureReportRequestAck msg;

  list<multiset<string>> all_values;
  multiset<string> TradeCaptureReportRequestAck_0;
  FIX::EncodedText EncodedText_99("DATA_2022527175");
  msg.set(EncodedText_99);
  TradeCaptureReportRequestAck_0.insert(EncodedText_99.getString());
  FIX::EncodedTextLen EncodedTextLen_99(1462169837);
  msg.set(EncodedTextLen_99);
  TradeCaptureReportRequestAck_0.insert(EncodedTextLen_99.getString());
  FIX::FirmTradeID FirmTradeID_11("STRING_1265436452");
  msg.set(FirmTradeID_11);
  TradeCaptureReportRequestAck_0.insert(FirmTradeID_11.getString());
  FIX::MessageEventSource MessageEventSource_7("STRING_1071329373");
  msg.set(MessageEventSource_7);
  TradeCaptureReportRequestAck_0.insert(MessageEventSource_7.getString());
  FIX::MultiLegReportingType MultiLegReportingType_7('1');
  msg.set(MultiLegReportingType_7);
  TradeCaptureReportRequestAck_0.insert(MultiLegReportingType_7.getString());
  FIX::ResponseDestination ResponseDestination_6("STRING_1629045497");
  msg.set(ResponseDestination_6);
  TradeCaptureReportRequestAck_0.insert(ResponseDestination_6.getString());
  FIX::ResponseTransportType ResponseTransportType_6(1);
  msg.set(ResponseTransportType_6);
  TradeCaptureReportRequestAck_0.insert(ResponseTransportType_6.getString());
  FIX::SecondaryFirmTradeID SecondaryFirmTradeID_3("STRING_1254493371");
  msg.set(SecondaryFirmTradeID_3);
  TradeCaptureReportRequestAck_0.insert(SecondaryFirmTradeID_3.getString());
  FIX::SecondaryTradeID SecondaryTradeID_3("STRING_11582735");
  msg.set(SecondaryTradeID_3);
  TradeCaptureReportRequestAck_0.insert(SecondaryTradeID_3.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_16('1');
  msg.set(SubscriptionRequestType_16);
  TradeCaptureReportRequestAck_0.insert(SubscriptionRequestType_16.getString());
  FIX::Text Text_99("STRING_896111959");
  msg.set(Text_99);
  TradeCaptureReportRequestAck_0.insert(Text_99.getString());
  FIX::TotNumTradeReports TotNumTradeReports_1(656084613);
  msg.set(TotNumTradeReports_1);
  TradeCaptureReportRequestAck_0.insert(TotNumTradeReports_1.getString());
  FIX::TradeID TradeID_12("STRING_1874551195");
  msg.set(TradeID_12);
  TradeCaptureReportRequestAck_0.insert(TradeID_12.getString());
  FIX::TradeRequestID TradeRequestID_2("STRING_2086126209");
  msg.set(TradeRequestID_2);
  TradeCaptureReportRequestAck_0.insert(TradeRequestID_2.getString());
  FIX::TradeRequestResult TradeRequestResult_0(0);
  msg.set(TradeRequestResult_0);
  TradeCaptureReportRequestAck_0.insert(TradeRequestResult_0.getString());
  FIX::TradeRequestStatus TradeRequestStatus_0(1);
  msg.set(TradeRequestStatus_0);
  TradeCaptureReportRequestAck_0.insert(TradeRequestStatus_0.getString());
  FIX::TradeRequestType TradeRequestType_1(0);
  msg.set(TradeRequestType_1);
  TradeCaptureReportRequestAck_0.insert(TradeRequestType_1.getString());
  all_values.push_back(TradeCaptureReportRequestAck_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_123;
    FIX::EncodedLegIssuer EncodedLegIssuer_123("DATA_1074070088");
    noLegs_0_0.set(EncodedLegIssuer_123);
    InstrumentLeg_123.insert(EncodedLegIssuer_123.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_123(1942248086);
    noLegs_0_0.set(EncodedLegIssuerLen_123);
    InstrumentLeg_123.insert(EncodedLegIssuerLen_123.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_123("DATA_894104494");
    noLegs_0_0.set(EncodedLegSecurityDesc_123);
    InstrumentLeg_123.insert(EncodedLegSecurityDesc_123.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_123(1846833437);
    noLegs_0_0.set(EncodedLegSecurityDescLen_123);
    InstrumentLeg_123.insert(EncodedLegSecurityDescLen_123.getString());
    FIX::LegCFICode LegCFICode_123("STRING_957612939");
    noLegs_0_0.set(LegCFICode_123);
    InstrumentLeg_123.insert(LegCFICode_123.getString());
    FIX::LegContractMultiplier LegContractMultiplier_123;
    LegContractMultiplier_123.setString("1393688");
    noLegs_0_0.set(LegContractMultiplier_123);
    InstrumentLeg_123.insert(LegContractMultiplier_123.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_123(1097916412);
    noLegs_0_0.set(LegContractMultiplierUnit_123);
    InstrumentLeg_123.insert(LegContractMultiplierUnit_123.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_123("MONTHYEAR_644782939");
    noLegs_0_0.set(LegContractSettlMonth_123);
    InstrumentLeg_123.insert(LegContractSettlMonth_123.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_123("COUNTRY_1034320632");
    noLegs_0_0.set(LegCountryOfIssue_123);
    InstrumentLeg_123.insert(LegCountryOfIssue_123.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_123("LOCALMKTDATE_1315266961");
    noLegs_0_0.set(LegCouponPaymentDate_123);
    InstrumentLeg_123.insert(LegCouponPaymentDate_123.getString());
    FIX::LegCouponRate LegCouponRate_123;
    LegCouponRate_123.setString("41.650000");
    noLegs_0_0.set(LegCouponRate_123);
    InstrumentLeg_123.insert(LegCouponRate_123.getString());
    FIX::LegCreditRating LegCreditRating_123("STRING_86947568");
    noLegs_0_0.set(LegCreditRating_123);
    InstrumentLeg_123.insert(LegCreditRating_123.getString());
    FIX::LegCurrency LegCurrency_123("USD");
    noLegs_0_0.set(LegCurrency_123);
    InstrumentLeg_123.insert(LegCurrency_123.getString());
    FIX::LegDatedDate LegDatedDate_123("LOCALMKTDATE_1549117405");
    noLegs_0_0.set(LegDatedDate_123);
    InstrumentLeg_123.insert(LegDatedDate_123.getString());
    FIX::LegExerciseStyle LegExerciseStyle_123(1686134794);
    noLegs_0_0.set(LegExerciseStyle_123);
    InstrumentLeg_123.insert(LegExerciseStyle_123.getString());
    FIX::LegFactor LegFactor_123;
    LegFactor_123.setString("17779570");
    noLegs_0_0.set(LegFactor_123);
    InstrumentLeg_123.insert(LegFactor_123.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_123(1795630591);
    noLegs_0_0.set(LegFlowScheduleType_123);
    InstrumentLeg_123.insert(LegFlowScheduleType_123.getString());
    FIX::LegInstrRegistry LegInstrRegistry_123("STRING_1167696643");
    noLegs_0_0.set(LegInstrRegistry_123);
    InstrumentLeg_123.insert(LegInstrRegistry_123.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_123("LOCALMKTDATE_449118570");
    noLegs_0_0.set(LegInterestAccrualDate_123);
    InstrumentLeg_123.insert(LegInterestAccrualDate_123.getString());
    FIX::LegIssueDate LegIssueDate_123("LOCALMKTDATE_902640315");
    noLegs_0_0.set(LegIssueDate_123);
    InstrumentLeg_123.insert(LegIssueDate_123.getString());
    FIX::LegIssuer LegIssuer_123("STRING_1179279378");
    noLegs_0_0.set(LegIssuer_123);
    InstrumentLeg_123.insert(LegIssuer_123.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_123("STRING_1169866627");
    noLegs_0_0.set(LegLocaleOfIssue_123);
    InstrumentLeg_123.insert(LegLocaleOfIssue_123.getString());
    FIX::LegMaturityDate LegMaturityDate_123("LOCALMKTDATE_1798752274");
    noLegs_0_0.set(LegMaturityDate_123);
    InstrumentLeg_123.insert(LegMaturityDate_123.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_123("MONTHYEAR_1835363991");
    noLegs_0_0.set(LegMaturityMonthYear_123);
    InstrumentLeg_123.insert(LegMaturityMonthYear_123.getString());
    FIX::LegMaturityTime LegMaturityTime_123("TZTIMEONLY_896934174");
    noLegs_0_0.set(LegMaturityTime_123);
    InstrumentLeg_123.insert(LegMaturityTime_123.getString());
    FIX::LegOptAttribute LegOptAttribute_123('1');
    noLegs_0_0.set(LegOptAttribute_123);
    InstrumentLeg_123.insert(LegOptAttribute_123.getString());
    FIX::LegOptionRatio LegOptionRatio_123;
    LegOptionRatio_123.setString("21384384");
    noLegs_0_0.set(LegOptionRatio_123);
    InstrumentLeg_123.insert(LegOptionRatio_123.getString());
    FIX::LegPool LegPool_123("STRING_1479434095");
    noLegs_0_0.set(LegPool_123);
    InstrumentLeg_123.insert(LegPool_123.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_123("STRING_990543348");
    noLegs_0_0.set(LegPriceUnitOfMeasure_123);
    InstrumentLeg_123.insert(LegPriceUnitOfMeasure_123.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_123;
    LegPriceUnitOfMeasureQty_123.setString("21263212");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_123);
    InstrumentLeg_123.insert(LegPriceUnitOfMeasureQty_123.getString());
    FIX::LegProduct LegProduct_123(406020536);
    noLegs_0_0.set(LegProduct_123);
    InstrumentLeg_123.insert(LegProduct_123.getString());
    FIX::LegPutOrCall LegPutOrCall_123(785307786);
    noLegs_0_0.set(LegPutOrCall_123);
    InstrumentLeg_123.insert(LegPutOrCall_123.getString());
    FIX::LegRatioQty LegRatioQty_123;
    LegRatioQty_123.setString("8729421");
    noLegs_0_0.set(LegRatioQty_123);
    InstrumentLeg_123.insert(LegRatioQty_123.getString());
    FIX::LegRedemptionDate LegRedemptionDate_123("LOCALMKTDATE_105370325");
    noLegs_0_0.set(LegRedemptionDate_123);
    InstrumentLeg_123.insert(LegRedemptionDate_123.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_123("STRING_1742920726");
    noLegs_0_0.set(LegRepoCollateralSecurityType_123);
    InstrumentLeg_123.insert(LegRepoCollateralSecurityType_123.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_123;
    LegRepurchaseRate_123.setString("9.260000");
    noLegs_0_0.set(LegRepurchaseRate_123);
    InstrumentLeg_123.insert(LegRepurchaseRate_123.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_123(1203286737);
    noLegs_0_0.set(LegRepurchaseTerm_123);
    InstrumentLeg_123.insert(LegRepurchaseTerm_123.getString());
    FIX::LegSecurityDesc LegSecurityDesc_123("STRING_240220017");
    noLegs_0_0.set(LegSecurityDesc_123);
    InstrumentLeg_123.insert(LegSecurityDesc_123.getString());
    FIX::LegSecurityExchange LegSecurityExchange_123("EXCHANGE_2046631558");
    noLegs_0_0.set(LegSecurityExchange_123);
    InstrumentLeg_123.insert(LegSecurityExchange_123.getString());
    FIX::LegSecurityID LegSecurityID_123("STRING_371070051");
    noLegs_0_0.set(LegSecurityID_123);
    InstrumentLeg_123.insert(LegSecurityID_123.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_123("STRING_1071804182");
    noLegs_0_0.set(LegSecurityIDSource_123);
    InstrumentLeg_123.insert(LegSecurityIDSource_123.getString());
    FIX::LegSecuritySubType LegSecuritySubType_123("STRING_2133579126");
    noLegs_0_0.set(LegSecuritySubType_123);
    InstrumentLeg_123.insert(LegSecuritySubType_123.getString());
    FIX::LegSecurityType LegSecurityType_123("STRING_791768393");
    noLegs_0_0.set(LegSecurityType_123);
    InstrumentLeg_123.insert(LegSecurityType_123.getString());
    FIX::LegSide LegSide_123('1');
    noLegs_0_0.set(LegSide_123);
    InstrumentLeg_123.insert(LegSide_123.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_123("STRING_1535212883");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_123);
    InstrumentLeg_123.insert(LegStateOrProvinceOfIssue_123.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_123("JPY");
    noLegs_0_0.set(LegStrikeCurrency_123);
    InstrumentLeg_123.insert(LegStrikeCurrency_123.getString());
    FIX::LegStrikePrice LegStrikePrice_123;
    LegStrikePrice_123.setString("11833598");
    noLegs_0_0.set(LegStrikePrice_123);
    InstrumentLeg_123.insert(LegStrikePrice_123.getString());
    FIX::LegSymbol LegSymbol_123("STRING_1498116182");
    noLegs_0_0.set(LegSymbol_123);
    InstrumentLeg_123.insert(LegSymbol_123.getString());
    FIX::LegSymbolSfx LegSymbolSfx_123("STRING_1858023862");
    noLegs_0_0.set(LegSymbolSfx_123);
    InstrumentLeg_123.insert(LegSymbolSfx_123.getString());
    FIX::LegTimeUnit LegTimeUnit_123("STRING_2086000142");
    noLegs_0_0.set(LegTimeUnit_123);
    InstrumentLeg_123.insert(LegTimeUnit_123.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_123("STRING_529911912");
    noLegs_0_0.set(LegUnitOfMeasure_123);
    InstrumentLeg_123.insert(LegUnitOfMeasure_123.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_123;
    LegUnitOfMeasureQty_123.setString("8804068");
    noLegs_0_0.set(LegUnitOfMeasureQty_123);
    InstrumentLeg_123.insert(LegUnitOfMeasureQty_123.getString());
    all_values.push_back(InstrumentLeg_123);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_223;
      FIX::LegSecurityAltID LegSecurityAltID_223("STRING_217792255");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_223);
      LegSecAltIDGrp_NoLegSecurityAltID_223.insert(LegSecurityAltID_223.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_223("STRING_1777341016");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_223);
      LegSecAltIDGrp_NoLegSecurityAltID_223.insert(LegSecurityAltIDSource_223.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_223);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_224;
      FIX::LegSecurityAltID LegSecurityAltID_224("STRING_1327179955");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_224);
      LegSecAltIDGrp_NoLegSecurityAltID_224.insert(LegSecurityAltID_224.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_224("STRING_208747050");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_224);
      LegSecAltIDGrp_NoLegSecurityAltID_224.insert(LegSecurityAltIDSource_224.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_224);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_124;
    FIX::EncodedLegIssuer EncodedLegIssuer_124("DATA_1109291464");
    noLegs_0_1.set(EncodedLegIssuer_124);
    InstrumentLeg_124.insert(EncodedLegIssuer_124.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_124(170239655);
    noLegs_0_1.set(EncodedLegIssuerLen_124);
    InstrumentLeg_124.insert(EncodedLegIssuerLen_124.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_124("DATA_187584678");
    noLegs_0_1.set(EncodedLegSecurityDesc_124);
    InstrumentLeg_124.insert(EncodedLegSecurityDesc_124.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_124(1515312000);
    noLegs_0_1.set(EncodedLegSecurityDescLen_124);
    InstrumentLeg_124.insert(EncodedLegSecurityDescLen_124.getString());
    FIX::LegCFICode LegCFICode_124("STRING_955547442");
    noLegs_0_1.set(LegCFICode_124);
    InstrumentLeg_124.insert(LegCFICode_124.getString());
    FIX::LegContractMultiplier LegContractMultiplier_124;
    LegContractMultiplier_124.setString("10605268");
    noLegs_0_1.set(LegContractMultiplier_124);
    InstrumentLeg_124.insert(LegContractMultiplier_124.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_124(1620682325);
    noLegs_0_1.set(LegContractMultiplierUnit_124);
    InstrumentLeg_124.insert(LegContractMultiplierUnit_124.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_124("MONTHYEAR_550984520");
    noLegs_0_1.set(LegContractSettlMonth_124);
    InstrumentLeg_124.insert(LegContractSettlMonth_124.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_124("COUNTRY_2072837727");
    noLegs_0_1.set(LegCountryOfIssue_124);
    InstrumentLeg_124.insert(LegCountryOfIssue_124.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_124("LOCALMKTDATE_676485415");
    noLegs_0_1.set(LegCouponPaymentDate_124);
    InstrumentLeg_124.insert(LegCouponPaymentDate_124.getString());
    FIX::LegCouponRate LegCouponRate_124;
    LegCouponRate_124.setString("45.370000");
    noLegs_0_1.set(LegCouponRate_124);
    InstrumentLeg_124.insert(LegCouponRate_124.getString());
    FIX::LegCreditRating LegCreditRating_124("STRING_1971985638");
    noLegs_0_1.set(LegCreditRating_124);
    InstrumentLeg_124.insert(LegCreditRating_124.getString());
    FIX::LegCurrency LegCurrency_124("EUR");
    noLegs_0_1.set(LegCurrency_124);
    InstrumentLeg_124.insert(LegCurrency_124.getString());
    FIX::LegDatedDate LegDatedDate_124("LOCALMKTDATE_1958081116");
    noLegs_0_1.set(LegDatedDate_124);
    InstrumentLeg_124.insert(LegDatedDate_124.getString());
    FIX::LegExerciseStyle LegExerciseStyle_124(1839323859);
    noLegs_0_1.set(LegExerciseStyle_124);
    InstrumentLeg_124.insert(LegExerciseStyle_124.getString());
    FIX::LegFactor LegFactor_124;
    LegFactor_124.setString("14939569");
    noLegs_0_1.set(LegFactor_124);
    InstrumentLeg_124.insert(LegFactor_124.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_124(1345810352);
    noLegs_0_1.set(LegFlowScheduleType_124);
    InstrumentLeg_124.insert(LegFlowScheduleType_124.getString());
    FIX::LegInstrRegistry LegInstrRegistry_124("STRING_22259750");
    noLegs_0_1.set(LegInstrRegistry_124);
    InstrumentLeg_124.insert(LegInstrRegistry_124.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_124("LOCALMKTDATE_755378589");
    noLegs_0_1.set(LegInterestAccrualDate_124);
    InstrumentLeg_124.insert(LegInterestAccrualDate_124.getString());
    FIX::LegIssueDate LegIssueDate_124("LOCALMKTDATE_381686531");
    noLegs_0_1.set(LegIssueDate_124);
    InstrumentLeg_124.insert(LegIssueDate_124.getString());
    FIX::LegIssuer LegIssuer_124("STRING_1520375932");
    noLegs_0_1.set(LegIssuer_124);
    InstrumentLeg_124.insert(LegIssuer_124.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_124("STRING_465918804");
    noLegs_0_1.set(LegLocaleOfIssue_124);
    InstrumentLeg_124.insert(LegLocaleOfIssue_124.getString());
    FIX::LegMaturityDate LegMaturityDate_124("LOCALMKTDATE_320203025");
    noLegs_0_1.set(LegMaturityDate_124);
    InstrumentLeg_124.insert(LegMaturityDate_124.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_124("MONTHYEAR_2050287844");
    noLegs_0_1.set(LegMaturityMonthYear_124);
    InstrumentLeg_124.insert(LegMaturityMonthYear_124.getString());
    FIX::LegMaturityTime LegMaturityTime_124("TZTIMEONLY_1346325646");
    noLegs_0_1.set(LegMaturityTime_124);
    InstrumentLeg_124.insert(LegMaturityTime_124.getString());
    FIX::LegOptAttribute LegOptAttribute_124('2');
    noLegs_0_1.set(LegOptAttribute_124);
    InstrumentLeg_124.insert(LegOptAttribute_124.getString());
    FIX::LegOptionRatio LegOptionRatio_124;
    LegOptionRatio_124.setString("1205964");
    noLegs_0_1.set(LegOptionRatio_124);
    InstrumentLeg_124.insert(LegOptionRatio_124.getString());
    FIX::LegPool LegPool_124("STRING_976183014");
    noLegs_0_1.set(LegPool_124);
    InstrumentLeg_124.insert(LegPool_124.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_124("STRING_1237168100");
    noLegs_0_1.set(LegPriceUnitOfMeasure_124);
    InstrumentLeg_124.insert(LegPriceUnitOfMeasure_124.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_124;
    LegPriceUnitOfMeasureQty_124.setString("3293435");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_124);
    InstrumentLeg_124.insert(LegPriceUnitOfMeasureQty_124.getString());
    FIX::LegProduct LegProduct_124(2085474478);
    noLegs_0_1.set(LegProduct_124);
    InstrumentLeg_124.insert(LegProduct_124.getString());
    FIX::LegPutOrCall LegPutOrCall_124(1407407756);
    noLegs_0_1.set(LegPutOrCall_124);
    InstrumentLeg_124.insert(LegPutOrCall_124.getString());
    FIX::LegRatioQty LegRatioQty_124;
    LegRatioQty_124.setString("5169281");
    noLegs_0_1.set(LegRatioQty_124);
    InstrumentLeg_124.insert(LegRatioQty_124.getString());
    FIX::LegRedemptionDate LegRedemptionDate_124("LOCALMKTDATE_1453302830");
    noLegs_0_1.set(LegRedemptionDate_124);
    InstrumentLeg_124.insert(LegRedemptionDate_124.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_124("STRING_215471550");
    noLegs_0_1.set(LegRepoCollateralSecurityType_124);
    InstrumentLeg_124.insert(LegRepoCollateralSecurityType_124.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_124;
    LegRepurchaseRate_124.setString("49.810000");
    noLegs_0_1.set(LegRepurchaseRate_124);
    InstrumentLeg_124.insert(LegRepurchaseRate_124.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_124(926501508);
    noLegs_0_1.set(LegRepurchaseTerm_124);
    InstrumentLeg_124.insert(LegRepurchaseTerm_124.getString());
    FIX::LegSecurityDesc LegSecurityDesc_124("STRING_766456070");
    noLegs_0_1.set(LegSecurityDesc_124);
    InstrumentLeg_124.insert(LegSecurityDesc_124.getString());
    FIX::LegSecurityExchange LegSecurityExchange_124("EXCHANGE_1502809061");
    noLegs_0_1.set(LegSecurityExchange_124);
    InstrumentLeg_124.insert(LegSecurityExchange_124.getString());
    FIX::LegSecurityID LegSecurityID_124("STRING_1602986923");
    noLegs_0_1.set(LegSecurityID_124);
    InstrumentLeg_124.insert(LegSecurityID_124.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_124("STRING_1557660607");
    noLegs_0_1.set(LegSecurityIDSource_124);
    InstrumentLeg_124.insert(LegSecurityIDSource_124.getString());
    FIX::LegSecuritySubType LegSecuritySubType_124("STRING_1327311051");
    noLegs_0_1.set(LegSecuritySubType_124);
    InstrumentLeg_124.insert(LegSecuritySubType_124.getString());
    FIX::LegSecurityType LegSecurityType_124("STRING_503058741");
    noLegs_0_1.set(LegSecurityType_124);
    InstrumentLeg_124.insert(LegSecurityType_124.getString());
    FIX::LegSide LegSide_124('1');
    noLegs_0_1.set(LegSide_124);
    InstrumentLeg_124.insert(LegSide_124.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_124("STRING_1137908519");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_124);
    InstrumentLeg_124.insert(LegStateOrProvinceOfIssue_124.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_124("CAN");
    noLegs_0_1.set(LegStrikeCurrency_124);
    InstrumentLeg_124.insert(LegStrikeCurrency_124.getString());
    FIX::LegStrikePrice LegStrikePrice_124;
    LegStrikePrice_124.setString("3362352");
    noLegs_0_1.set(LegStrikePrice_124);
    InstrumentLeg_124.insert(LegStrikePrice_124.getString());
    FIX::LegSymbol LegSymbol_124("STRING_217158702");
    noLegs_0_1.set(LegSymbol_124);
    InstrumentLeg_124.insert(LegSymbol_124.getString());
    FIX::LegSymbolSfx LegSymbolSfx_124("STRING_1375037565");
    noLegs_0_1.set(LegSymbolSfx_124);
    InstrumentLeg_124.insert(LegSymbolSfx_124.getString());
    FIX::LegTimeUnit LegTimeUnit_124("STRING_717921754");
    noLegs_0_1.set(LegTimeUnit_124);
    InstrumentLeg_124.insert(LegTimeUnit_124.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_124("STRING_1737534634");
    noLegs_0_1.set(LegUnitOfMeasure_124);
    InstrumentLeg_124.insert(LegUnitOfMeasure_124.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_124;
    LegUnitOfMeasureQty_124.setString("18409563");
    noLegs_0_1.set(LegUnitOfMeasureQty_124);
    InstrumentLeg_124.insert(LegUnitOfMeasureQty_124.getString());
    all_values.push_back(InstrumentLeg_124);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_225;
      FIX::LegSecurityAltID LegSecurityAltID_225("STRING_1640338830");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_225);
      LegSecAltIDGrp_NoLegSecurityAltID_225.insert(LegSecurityAltID_225.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_225("STRING_1039798367");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_225);
      LegSecAltIDGrp_NoLegSecurityAltID_225.insert(LegSecurityAltIDSource_225.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_225);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_92;
  FIX::AttachmentPoint AttachmentPoint_92;
  AttachmentPoint_92.setString("29.240000");
  msg.set(AttachmentPoint_92);
  Instrument_92.insert(AttachmentPoint_92.getString());
  FIX::CFICode CFICode_99("STRING_1760935281");
  msg.set(CFICode_99);
  Instrument_92.insert(CFICode_99.getString());
  FIX::CPProgram CPProgram_92(99);
  msg.set(CPProgram_92);
  Instrument_92.insert(CPProgram_92.getString());
  FIX::CPRegType CPRegType_92("STRING_37797377");
  msg.set(CPRegType_92);
  Instrument_92.insert(CPRegType_92.getString());
  FIX::CapPrice CapPrice_92;
  CapPrice_92.setString("20902787");
  msg.set(CapPrice_92);
  Instrument_92.insert(CapPrice_92.getString());
  FIX::ContractMultiplier ContractMultiplier_92;
  ContractMultiplier_92.setString("19539722");
  msg.set(ContractMultiplier_92);
  Instrument_92.insert(ContractMultiplier_92.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_92(1);
  msg.set(ContractMultiplierUnit_92);
  Instrument_92.insert(ContractMultiplierUnit_92.getString());
  FIX::ContractSettlMonth ContractSettlMonth_92("MONTHYEAR_459723315");
  msg.set(ContractSettlMonth_92);
  Instrument_92.insert(ContractSettlMonth_92.getString());
  FIX::CountryOfIssue CountryOfIssue_92("COUNTRY_1259791394");
  msg.set(CountryOfIssue_92);
  Instrument_92.insert(CountryOfIssue_92.getString());
  FIX::CouponPaymentDate CouponPaymentDate_92("LOCALMKTDATE_1660676683");
  msg.set(CouponPaymentDate_92);
  Instrument_92.insert(CouponPaymentDate_92.getString());
  FIX::CouponRate CouponRate_92;
  CouponRate_92.setString("82.960000");
  msg.set(CouponRate_92);
  Instrument_92.insert(CouponRate_92.getString());
  FIX::CreditRating CreditRating_92("STRING_38809254");
  msg.set(CreditRating_92);
  Instrument_92.insert(CreditRating_92.getString());
  FIX::DatedDate DatedDate_92("LOCALMKTDATE_279649105");
  msg.set(DatedDate_92);
  Instrument_92.insert(DatedDate_92.getString());
  FIX::DetachmentPoint DetachmentPoint_92;
  DetachmentPoint_92.setString("37.090000");
  msg.set(DetachmentPoint_92);
  Instrument_92.insert(DetachmentPoint_92.getString());
  FIX::EncodedIssuer EncodedIssuer_92("DATA_1641796177");
  msg.set(EncodedIssuer_92);
  Instrument_92.insert(EncodedIssuer_92.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_92(1837309712);
  msg.set(EncodedIssuerLen_92);
  Instrument_92.insert(EncodedIssuerLen_92.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_92("DATA_572331112");
  msg.set(EncodedSecurityDesc_92);
  Instrument_92.insert(EncodedSecurityDesc_92.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_92(2144854918);
  msg.set(EncodedSecurityDescLen_92);
  Instrument_92.insert(EncodedSecurityDescLen_92.getString());
  FIX::ExerciseStyle ExerciseStyle_92(0);
  msg.set(ExerciseStyle_92);
  Instrument_92.insert(ExerciseStyle_92.getString());
  FIX::Factor Factor_92;
  Factor_92.setString("17102396");
  msg.set(Factor_92);
  Instrument_92.insert(Factor_92.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_92(true);
  msg.set(FlexProductEligibilityIndicator_92);
  Instrument_92.insert(FlexProductEligibilityIndicator_92.getString());
  FIX::FlexibleIndicator FlexibleIndicator_92(false);
  msg.set(FlexibleIndicator_92);
  Instrument_92.insert(FlexibleIndicator_92.getString());
  FIX::FloorPrice FloorPrice_92;
  FloorPrice_92.setString("20464748");
  msg.set(FloorPrice_92);
  Instrument_92.insert(FloorPrice_92.getString());
  FIX::FlowScheduleType FlowScheduleType_92(4);
  msg.set(FlowScheduleType_92);
  Instrument_92.insert(FlowScheduleType_92.getString());
  FIX::InstrRegistry InstrRegistry_92("STRING_810224634");
  msg.set(InstrRegistry_92);
  Instrument_92.insert(InstrRegistry_92.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_92('6');
  msg.set(InstrmtAssignmentMethod_92);
  Instrument_92.insert(InstrmtAssignmentMethod_92.getString());
  FIX::InterestAccrualDate InterestAccrualDate_92("LOCALMKTDATE_2146963558");
  msg.set(InterestAccrualDate_92);
  Instrument_92.insert(InterestAccrualDate_92.getString());
  FIX::IssueDate IssueDate_92("LOCALMKTDATE_503697355");
  msg.set(IssueDate_92);
  Instrument_92.insert(IssueDate_92.getString());
  FIX::Issuer Issuer_92("STRING_1655037741");
  msg.set(Issuer_92);
  Instrument_92.insert(Issuer_92.getString());
  FIX::ListMethod ListMethod_92(0);
  msg.set(ListMethod_92);
  Instrument_92.insert(ListMethod_92.getString());
  FIX::LocaleOfIssue LocaleOfIssue_92("STRING_1543495722");
  msg.set(LocaleOfIssue_92);
  Instrument_92.insert(LocaleOfIssue_92.getString());
  FIX::MaturityDate MaturityDate_92("LOCALMKTDATE_455667018");
  msg.set(MaturityDate_92);
  Instrument_92.insert(MaturityDate_92.getString());
  FIX::MaturityMonthYear MaturityMonthYear_92("MONTHYEAR_1253270374");
  msg.set(MaturityMonthYear_92);
  Instrument_92.insert(MaturityMonthYear_92.getString());
  FIX::MaturityTime MaturityTime_92("TZTIMEONLY_1411993456");
  msg.set(MaturityTime_92);
  Instrument_92.insert(MaturityTime_92.getString());
  FIX::MinPriceIncrement MinPriceIncrement_92;
  MinPriceIncrement_92.setString("4934643");
  msg.set(MinPriceIncrement_92);
  Instrument_92.insert(MinPriceIncrement_92.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_92;
  MinPriceIncrementAmount_92.setString("11960655");
  msg.set(MinPriceIncrementAmount_92);
  Instrument_92.insert(MinPriceIncrementAmount_92.getString());
  FIX::NTPositionLimit NTPositionLimit_92(1218482020);
  msg.set(NTPositionLimit_92);
  Instrument_92.insert(NTPositionLimit_92.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_92;
  NotionalPercentageOutstanding_92.setString("95.280000");
  msg.set(NotionalPercentageOutstanding_92);
  Instrument_92.insert(NotionalPercentageOutstanding_92.getString());
  FIX::OptAttribute OptAttribute_92('1');
  msg.set(OptAttribute_92);
  Instrument_92.insert(OptAttribute_92.getString());
  FIX::OptPayoutAmount OptPayoutAmount_92;
  OptPayoutAmount_92.setString("3307897");
  msg.set(OptPayoutAmount_92);
  Instrument_92.insert(OptPayoutAmount_92.getString());
  FIX::OptPayoutType OptPayoutType_92(3);
  msg.set(OptPayoutType_92);
  Instrument_92.insert(OptPayoutType_92.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_92;
  OriginalNotionalPercentageOutstanding_92.setString("34.720000");
  msg.set(OriginalNotionalPercentageOutstanding_92);
  Instrument_92.insert(OriginalNotionalPercentageOutstanding_92.getString());
  FIX::Pool Pool_92("STRING_369599021");
  msg.set(Pool_92);
  Instrument_92.insert(Pool_92.getString());
  FIX::PositionLimit PositionLimit_92(1731511668);
  msg.set(PositionLimit_92);
  Instrument_92.insert(PositionLimit_92.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_92("STRING_INT");
  msg.set(PriceQuoteMethod_92);
  Instrument_92.insert(PriceQuoteMethod_92.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_92("STRING_2011395198");
  msg.set(PriceUnitOfMeasure_92);
  Instrument_92.insert(PriceUnitOfMeasure_92.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_92;
  PriceUnitOfMeasureQty_92.setString("14213377");
  msg.set(PriceUnitOfMeasureQty_92);
  Instrument_92.insert(PriceUnitOfMeasureQty_92.getString());
  FIX::Product Product_102(5);
  msg.set(Product_102);
  Instrument_92.insert(Product_102.getString());
  FIX::ProductComplex ProductComplex_92("STRING_2008766469");
  msg.set(ProductComplex_92);
  Instrument_92.insert(ProductComplex_92.getString());
  FIX::PutOrCall PutOrCall_92(0);
  msg.set(PutOrCall_92);
  Instrument_92.insert(PutOrCall_92.getString());
  FIX::RedemptionDate RedemptionDate_92("LOCALMKTDATE_925590630");
  msg.set(RedemptionDate_92);
  Instrument_92.insert(RedemptionDate_92.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_92("STRING_53553043");
  msg.set(RepoCollateralSecurityType_92);
  Instrument_92.insert(RepoCollateralSecurityType_92.getString());
  FIX::RepurchaseRate RepurchaseRate_92;
  RepurchaseRate_92.setString("65.430000");
  msg.set(RepurchaseRate_92);
  Instrument_92.insert(RepurchaseRate_92.getString());
  FIX::RepurchaseTerm RepurchaseTerm_92(824581838);
  msg.set(RepurchaseTerm_92);
  Instrument_92.insert(RepurchaseTerm_92.getString());
  FIX::RestructuringType RestructuringType_92("STRING_FR");
  msg.set(RestructuringType_92);
  Instrument_92.insert(RestructuringType_92.getString());
  FIX::SecurityDesc SecurityDesc_92("STRING_482277530");
  msg.set(SecurityDesc_92);
  Instrument_92.insert(SecurityDesc_92.getString());
  FIX::SecurityExchange SecurityExchange_92("EXCHANGE_1441494800");
  msg.set(SecurityExchange_92);
  Instrument_92.insert(SecurityExchange_92.getString());
  FIX::SecurityGroup SecurityGroup_92("STRING_462461878");
  msg.set(SecurityGroup_92);
  Instrument_92.insert(SecurityGroup_92.getString());
  FIX::SecurityID SecurityID_92("STRING_985974885");
  msg.set(SecurityID_92);
  Instrument_92.insert(SecurityID_92.getString());
  FIX::SecurityIDSource SecurityIDSource_92("STRING_2");
  msg.set(SecurityIDSource_92);
  Instrument_92.insert(SecurityIDSource_92.getString());
  FIX::SecurityStatus SecurityStatus_93("STRING_2");
  msg.set(SecurityStatus_93);
  Instrument_92.insert(SecurityStatus_93.getString());
  FIX::SecuritySubType SecuritySubType_97("STRING_381986960");
  msg.set(SecuritySubType_97);
  Instrument_92.insert(SecuritySubType_97.getString());
  FIX::SecurityType SecurityType_102("STRING_STRUCT");
  msg.set(SecurityType_102);
  Instrument_92.insert(SecurityType_102.getString());
  FIX::Seniority Seniority_92("STRING_SD");
  msg.set(Seniority_92);
  Instrument_92.insert(Seniority_92.getString());
  FIX::SettlMethod SettlMethod_92('C');
  msg.set(SettlMethod_92);
  Instrument_92.insert(SettlMethod_92.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_92("STRING_1898180306");
  msg.set(SettleOnOpenFlag_92);
  Instrument_92.insert(SettleOnOpenFlag_92.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_92("STRING_256649206");
  msg.set(StateOrProvinceOfIssue_92);
  Instrument_92.insert(StateOrProvinceOfIssue_92.getString());
  FIX::StrikeCurrency StrikeCurrency_92("USD");
  msg.set(StrikeCurrency_92);
  Instrument_92.insert(StrikeCurrency_92.getString());
  FIX::StrikeMultiplier StrikeMultiplier_92;
  StrikeMultiplier_92.setString("19124380");
  msg.set(StrikeMultiplier_92);
  Instrument_92.insert(StrikeMultiplier_92.getString());
  FIX::StrikePrice StrikePrice_92;
  StrikePrice_92.setString("11957685");
  msg.set(StrikePrice_92);
  Instrument_92.insert(StrikePrice_92.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_92(2);
  msg.set(StrikePriceBoundaryMethod_92);
  Instrument_92.insert(StrikePriceBoundaryMethod_92.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_92;
  StrikePriceBoundaryPrecision_92.setString("78.540000");
  msg.set(StrikePriceBoundaryPrecision_92);
  Instrument_92.insert(StrikePriceBoundaryPrecision_92.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_92(4);
  msg.set(StrikePriceDeterminationMethod_92);
  Instrument_92.insert(StrikePriceDeterminationMethod_92.getString());
  FIX::StrikeValue StrikeValue_92;
  StrikeValue_92.setString("5777731");
  msg.set(StrikeValue_92);
  Instrument_92.insert(StrikeValue_92.getString());
  FIX::Symbol Symbol_92("STRING_2100941388");
  msg.set(Symbol_92);
  Instrument_92.insert(Symbol_92.getString());
  FIX::SymbolSfx SymbolSfx_92("STRING_CD");
  msg.set(SymbolSfx_92);
  Instrument_92.insert(SymbolSfx_92.getString());
  FIX::TimeUnit TimeUnit_92("STRING_Mo");
  msg.set(TimeUnit_92);
  Instrument_92.insert(TimeUnit_92.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_92(4);
  msg.set(UnderlyingPriceDeterminationMethod_92);
  Instrument_92.insert(UnderlyingPriceDeterminationMethod_92.getString());
  FIX::UnitOfMeasure UnitOfMeasure_92("STRING_Alw");
  msg.set(UnitOfMeasure_92);
  Instrument_92.insert(UnitOfMeasure_92.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_92;
  UnitOfMeasureQty_92.setString("884930");
  msg.set(UnitOfMeasureQty_92);
  Instrument_92.insert(UnitOfMeasureQty_92.getString());
  FIX::ValuationMethod ValuationMethod_92("STRING_CDSD");
  msg.set(ValuationMethod_92);
  Instrument_92.insert(ValuationMethod_92.getString());
  all_values.push_back(Instrument_92);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_170;
    FIX::ComplexEventCondition ComplexEventCondition_170(2);
    noComplexEvents_0_0.set(ComplexEventCondition_170);
    ComplexEvents_NoComplexEvents_170.insert(ComplexEventCondition_170.getString());
    FIX::ComplexEventPrice ComplexEventPrice_170;
    ComplexEventPrice_170.setString("9189812");
    noComplexEvents_0_0.set(ComplexEventPrice_170);
    ComplexEvents_NoComplexEvents_170.insert(ComplexEventPrice_170.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_170(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_170);
    ComplexEvents_NoComplexEvents_170.insert(ComplexEventPriceBoundaryMethod_170.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_170;
    ComplexEventPriceBoundaryPrecision_170.setString("34.570000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_170);
    ComplexEvents_NoComplexEvents_170.insert(ComplexEventPriceBoundaryPrecision_170.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_170(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_170);
    ComplexEvents_NoComplexEvents_170.insert(ComplexEventPriceTimeType_170.getString());
    FIX::ComplexEventType ComplexEventType_170(9);
    noComplexEvents_0_0.set(ComplexEventType_170);
    ComplexEvents_NoComplexEvents_170.insert(ComplexEventType_170.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_170;
    ComplexOptPayoutAmount_170.setString("12287983");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_170);
    ComplexEvents_NoComplexEvents_170.insert(ComplexOptPayoutAmount_170.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_170);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_357;
      FIX::ComplexEventEndDate ComplexEventEndDate_357(FIX::UTCTIMESTAMP(6, 56, 25, 2, 42005));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_357);
      ComplexEventDates_NoComplexEventDates_357.insert(ComplexEventEndDate_357.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_357(FIX::UTCTIMESTAMP(9, 13, 5, 27, 122008));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_357);
      ComplexEventDates_NoComplexEventDates_357.insert(ComplexEventStartDate_357.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_357);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_710;
        FIX::ComplexEventEndTime ComplexEventEndTime_710(FIX::UTCTIMEONLY(18, 42, 7));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_710);
        ComplexEventTimes_NoComplexEventTimes_710.insert(ComplexEventEndTime_710.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_710(FIX::UTCTIMEONLY(21, 56, 20));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_710);
        ComplexEventTimes_NoComplexEventTimes_710.insert(ComplexEventStartTime_710.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_710);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_358;
      FIX::ComplexEventEndDate ComplexEventEndDate_358(FIX::UTCTIMESTAMP(4, 50, 57, 11, 82006));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_358);
      ComplexEventDates_NoComplexEventDates_358.insert(ComplexEventEndDate_358.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_358(FIX::UTCTIMESTAMP(23, 54, 57, 16, 102012));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_358);
      ComplexEventDates_NoComplexEventDates_358.insert(ComplexEventStartDate_358.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_358);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_711;
        FIX::ComplexEventEndTime ComplexEventEndTime_711(FIX::UTCTIMEONLY(13, 32, 4));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_711);
        ComplexEventTimes_NoComplexEventTimes_711.insert(ComplexEventEndTime_711.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_711(FIX::UTCTIMEONLY(8, 37, 37));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_711);
        ComplexEventTimes_NoComplexEventTimes_711.insert(ComplexEventStartTime_711.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_711);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_177;
    FIX::EventDate EventDate_177("LOCALMKTDATE_485253167");
    noEvents_0_0.set(EventDate_177);
    EvntGrp_NoEvents_177.insert(EventDate_177.getString());
    FIX::EventPx EventPx_177;
    EventPx_177.setString("11102739");
    noEvents_0_0.set(EventPx_177);
    EvntGrp_NoEvents_177.insert(EventPx_177.getString());
    FIX::EventText EventText_177("STRING_538299251");
    noEvents_0_0.set(EventText_177);
    EvntGrp_NoEvents_177.insert(EventText_177.getString());
    FIX::EventTime EventTime_177(FIX::UTCTIMESTAMP(0, 59, 5, 21, 42001));
    noEvents_0_0.set(EventTime_177);
    EvntGrp_NoEvents_177.insert(EventTime_177.getString());
    FIX::EventType EventType_177(7);
    noEvents_0_0.set(EventType_177);
    EvntGrp_NoEvents_177.insert(EventType_177.getString());
    all_values.push_back(EvntGrp_NoEvents_177);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_181;
    FIX::InstrumentPartyID InstrumentPartyID_181("STRING_12113827");
    noInstrumentParties_0_0.set(InstrumentPartyID_181);
    InstrumentParties_NoInstrumentParties_181.insert(InstrumentPartyID_181.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_181('5');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_181);
    InstrumentParties_NoInstrumentParties_181.insert(InstrumentPartyIDSource_181.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_181(1480437791);
    noInstrumentParties_0_0.set(InstrumentPartyRole_181);
    InstrumentParties_NoInstrumentParties_181.insert(InstrumentPartyRole_181.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_181);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_364;
      FIX::InstrumentPartySubID InstrumentPartySubID_364("STRING_329347665");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_364);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_364.insert(InstrumentPartySubID_364.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_364(1732405628);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_364);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_364.insert(InstrumentPartySubIDType_364.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_364);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_182;
    FIX::InstrumentPartyID InstrumentPartyID_182("STRING_1729011571");
    noInstrumentParties_0_1.set(InstrumentPartyID_182);
    InstrumentParties_NoInstrumentParties_182.insert(InstrumentPartyID_182.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_182('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_182);
    InstrumentParties_NoInstrumentParties_182.insert(InstrumentPartyIDSource_182.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_182(6859992);
    noInstrumentParties_0_1.set(InstrumentPartyRole_182);
    InstrumentParties_NoInstrumentParties_182.insert(InstrumentPartyRole_182.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_182);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_365;
      FIX::InstrumentPartySubID InstrumentPartySubID_365("STRING_214159181");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_365);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_365.insert(InstrumentPartySubID_365.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_365(140650718);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_365);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_365.insert(InstrumentPartySubIDType_365.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_365);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_366;
      FIX::InstrumentPartySubID InstrumentPartySubID_366("STRING_530634743");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_366);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_366.insert(InstrumentPartySubID_366.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_366(240757486);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_366);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_366.insert(InstrumentPartySubIDType_366.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_366);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_367;
      FIX::InstrumentPartySubID InstrumentPartySubID_367("STRING_980039258");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_367);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_367.insert(InstrumentPartySubID_367.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_367(1054215175);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_367);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_367.insert(InstrumentPartySubIDType_367.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_367);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_183;
    FIX::InstrumentPartyID InstrumentPartyID_183("STRING_855785483");
    noInstrumentParties_0_2.set(InstrumentPartyID_183);
    InstrumentParties_NoInstrumentParties_183.insert(InstrumentPartyID_183.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_183('9');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_183);
    InstrumentParties_NoInstrumentParties_183.insert(InstrumentPartyIDSource_183.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_183(2000750647);
    noInstrumentParties_0_2.set(InstrumentPartyRole_183);
    InstrumentParties_NoInstrumentParties_183.insert(InstrumentPartyRole_183.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_183);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_368;
      FIX::InstrumentPartySubID InstrumentPartySubID_368("STRING_2065589058");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_368);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_368.insert(InstrumentPartySubID_368.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_368(391566250);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_368);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_368.insert(InstrumentPartySubIDType_368.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_368);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_369;
      FIX::InstrumentPartySubID InstrumentPartySubID_369("STRING_839595287");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_369);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_369.insert(InstrumentPartySubID_369.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_369(104386907);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_369);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_369.insert(InstrumentPartySubIDType_369.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_369);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_190;
    FIX::SecurityAltID SecurityAltID_190("STRING_695570384");
    noSecurityAltID_0_0.set(SecurityAltID_190);
    SecAltIDGrp_NoSecurityAltID_190.insert(SecurityAltID_190.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_190("STRING_1274705504");
    noSecurityAltID_0_0.set(SecurityAltIDSource_190);
    SecAltIDGrp_NoSecurityAltID_190.insert(SecurityAltIDSource_190.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_190);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_184;
  FIX::SecurityXML SecurityXML_185("XMLDATA_1445635405");
  msg.set(SecurityXML_185);
  FIX::SecurityXMLLen SecurityXMLLen_92(568577252);
  msg.set(SecurityXMLLen_92);
  FIX::SecurityXMLSchema SecurityXMLSchema_92("STRING_1524401010");
  msg.set(SecurityXMLSchema_92);
  SecurityXML_184.insert(SecurityXMLSchema_92.getString());
  all_values.push_back(SecurityXML_184);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_144;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_144("DATA_580691079");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_144);
    UnderlyingInstrument_144.insert(EncodedUnderlyingIssuer_144.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_144(2082271769);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_144);
    UnderlyingInstrument_144.insert(EncodedUnderlyingIssuerLen_144.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_144("DATA_278849371");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_144);
    UnderlyingInstrument_144.insert(EncodedUnderlyingSecurityDesc_144.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_144(808784025);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_144);
    UnderlyingInstrument_144.insert(EncodedUnderlyingSecurityDescLen_144.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_144;
    UnderlyingAdjustedQuantity_144.setString("2641357");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_144);
    UnderlyingInstrument_144.insert(UnderlyingAdjustedQuantity_144.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_144;
    UnderlyingAllocationPercent_144.setString("50.000000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_144);
    UnderlyingInstrument_144.insert(UnderlyingAllocationPercent_144.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_144;
    UnderlyingAttachmentPoint_144.setString("19.480000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_144);
    UnderlyingInstrument_144.insert(UnderlyingAttachmentPoint_144.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_144("STRING_1622242428");
    noUnderlyings_0_0.set(UnderlyingCFICode_144);
    UnderlyingInstrument_144.insert(UnderlyingCFICode_144.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_144("STRING_2018114992");
    noUnderlyings_0_0.set(UnderlyingCPProgram_144);
    UnderlyingInstrument_144.insert(UnderlyingCPProgram_144.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_144("STRING_866863559");
    noUnderlyings_0_0.set(UnderlyingCPRegType_144);
    UnderlyingInstrument_144.insert(UnderlyingCPRegType_144.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_144;
    UnderlyingCapValue_144.setString("18364016");
    noUnderlyings_0_0.set(UnderlyingCapValue_144);
    UnderlyingInstrument_144.insert(UnderlyingCapValue_144.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_144;
    UnderlyingCashAmount_144.setString("112820");
    noUnderlyings_0_0.set(UnderlyingCashAmount_144);
    UnderlyingInstrument_144.insert(UnderlyingCashAmount_144.getString());
    FIX::UnderlyingCashType UnderlyingCashType_144("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_144);
    UnderlyingInstrument_144.insert(UnderlyingCashType_144.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_144;
    UnderlyingContractMultiplier_144.setString("20771590");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_144);
    UnderlyingInstrument_144.insert(UnderlyingContractMultiplier_144.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_144(991321321);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_144);
    UnderlyingInstrument_144.insert(UnderlyingContractMultiplierUnit_144.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_144("COUNTRY_304229829");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_144);
    UnderlyingInstrument_144.insert(UnderlyingCountryOfIssue_144.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_144("LOCALMKTDATE_785460930");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_144);
    UnderlyingInstrument_144.insert(UnderlyingCouponPaymentDate_144.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_144;
    UnderlyingCouponRate_144.setString("64.080000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_144);
    UnderlyingInstrument_144.insert(UnderlyingCouponRate_144.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_144("STRING_157496828");
    noUnderlyings_0_0.set(UnderlyingCreditRating_144);
    UnderlyingInstrument_144.insert(UnderlyingCreditRating_144.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_144("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_144);
    UnderlyingInstrument_144.insert(UnderlyingCurrency_144.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_144;
    UnderlyingCurrentValue_144.setString("5490630");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_144);
    UnderlyingInstrument_144.insert(UnderlyingCurrentValue_144.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_144;
    UnderlyingDetachmentPoint_144.setString("12.200000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_144);
    UnderlyingInstrument_144.insert(UnderlyingDetachmentPoint_144.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_144;
    UnderlyingDirtyPrice_144.setString("19691287");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_144);
    UnderlyingInstrument_144.insert(UnderlyingDirtyPrice_144.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_144;
    UnderlyingEndPrice_144.setString("11650917");
    noUnderlyings_0_0.set(UnderlyingEndPrice_144);
    UnderlyingInstrument_144.insert(UnderlyingEndPrice_144.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_144;
    UnderlyingEndValue_144.setString("15141816");
    noUnderlyings_0_0.set(UnderlyingEndValue_144);
    UnderlyingInstrument_144.insert(UnderlyingEndValue_144.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_144(1096350582);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_144);
    UnderlyingInstrument_144.insert(UnderlyingExerciseStyle_144.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_144;
    UnderlyingFXRate_144.setString("4632434");
    noUnderlyings_0_0.set(UnderlyingFXRate_144);
    UnderlyingInstrument_144.insert(UnderlyingFXRate_144.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_144('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_144);
    UnderlyingInstrument_144.insert(UnderlyingFXRateCalc_144.getString());
    FIX::UnderlyingFactor UnderlyingFactor_144;
    UnderlyingFactor_144.setString("4732679");
    noUnderlyings_0_0.set(UnderlyingFactor_144);
    UnderlyingInstrument_144.insert(UnderlyingFactor_144.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_144(1409138712);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_144);
    UnderlyingInstrument_144.insert(UnderlyingFlowScheduleType_144.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_144("STRING_515966288");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_144);
    UnderlyingInstrument_144.insert(UnderlyingInstrRegistry_144.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_144("LOCALMKTDATE_408056065");
    noUnderlyings_0_0.set(UnderlyingIssueDate_144);
    UnderlyingInstrument_144.insert(UnderlyingIssueDate_144.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_144("STRING_1687988084");
    noUnderlyings_0_0.set(UnderlyingIssuer_144);
    UnderlyingInstrument_144.insert(UnderlyingIssuer_144.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_144("STRING_1324750313");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_144);
    UnderlyingInstrument_144.insert(UnderlyingLocaleOfIssue_144.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_144("LOCALMKTDATE_672191851");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_144);
    UnderlyingInstrument_144.insert(UnderlyingMaturityDate_144.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_144("MONTHYEAR_1551759436");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_144);
    UnderlyingInstrument_144.insert(UnderlyingMaturityMonthYear_144.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_144("TZTIMEONLY_1715062262");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_144);
    UnderlyingInstrument_144.insert(UnderlyingMaturityTime_144.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_144;
    UnderlyingNotionalPercentageOutstanding_144.setString("6.310000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_144);
    UnderlyingInstrument_144.insert(UnderlyingNotionalPercentageOutstanding_144.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_144('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_144);
    UnderlyingInstrument_144.insert(UnderlyingOptAttribute_144.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_144;
    UnderlyingOriginalNotionalPercentageOutstanding_144.setString("21.730000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_144);
    UnderlyingInstrument_144.insert(UnderlyingOriginalNotionalPercentageOutstanding_144.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_144("STRING_1983352241");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_144);
    UnderlyingInstrument_144.insert(UnderlyingPriceUnitOfMeasure_144.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_144;
    UnderlyingPriceUnitOfMeasureQty_144.setString("14336728");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_144);
    UnderlyingInstrument_144.insert(UnderlyingPriceUnitOfMeasureQty_144.getString());
    FIX::UnderlyingProduct UnderlyingProduct_144(1831940475);
    noUnderlyings_0_0.set(UnderlyingProduct_144);
    UnderlyingInstrument_144.insert(UnderlyingProduct_144.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_144(1913027688);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_144);
    UnderlyingInstrument_144.insert(UnderlyingPutOrCall_144.getString());
    FIX::UnderlyingPx UnderlyingPx_144;
    UnderlyingPx_144.setString("2775105");
    noUnderlyings_0_0.set(UnderlyingPx_144);
    UnderlyingInstrument_144.insert(UnderlyingPx_144.getString());
    FIX::UnderlyingQty UnderlyingQty_144;
    UnderlyingQty_144.setString("21361703");
    noUnderlyings_0_0.set(UnderlyingQty_144);
    UnderlyingInstrument_144.insert(UnderlyingQty_144.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_144("LOCALMKTDATE_551004971");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_144);
    UnderlyingInstrument_144.insert(UnderlyingRedemptionDate_144.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_144("STRING_76663276");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_144);
    UnderlyingInstrument_144.insert(UnderlyingRepoCollateralSecurityType_144.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_144;
    UnderlyingRepurchaseRate_144.setString("34.840000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_144);
    UnderlyingInstrument_144.insert(UnderlyingRepurchaseRate_144.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_144(530020904);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_144);
    UnderlyingInstrument_144.insert(UnderlyingRepurchaseTerm_144.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_144("STRING_1941405095");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_144);
    UnderlyingInstrument_144.insert(UnderlyingRestructuringType_144.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_144("STRING_695246562");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_144);
    UnderlyingInstrument_144.insert(UnderlyingSecurityDesc_144.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_144("EXCHANGE_1348632124");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_144);
    UnderlyingInstrument_144.insert(UnderlyingSecurityExchange_144.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_144("STRING_1763050173");
    noUnderlyings_0_0.set(UnderlyingSecurityID_144);
    UnderlyingInstrument_144.insert(UnderlyingSecurityID_144.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_144("STRING_1860338289");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_144);
    UnderlyingInstrument_144.insert(UnderlyingSecurityIDSource_144.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_144("STRING_715330081");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_144);
    UnderlyingInstrument_144.insert(UnderlyingSecuritySubType_144.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_144("STRING_711917107");
    noUnderlyings_0_0.set(UnderlyingSecurityType_144);
    UnderlyingInstrument_144.insert(UnderlyingSecurityType_144.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_144("STRING_176098126");
    noUnderlyings_0_0.set(UnderlyingSeniority_144);
    UnderlyingInstrument_144.insert(UnderlyingSeniority_144.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_144("STRING_650605290");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_144);
    UnderlyingInstrument_144.insert(UnderlyingSettlMethod_144.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_144(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_144);
    UnderlyingInstrument_144.insert(UnderlyingSettlementType_144.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_144;
    UnderlyingStartValue_144.setString("15852368");
    noUnderlyings_0_0.set(UnderlyingStartValue_144);
    UnderlyingInstrument_144.insert(UnderlyingStartValue_144.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_144("STRING_1166571578");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_144);
    UnderlyingInstrument_144.insert(UnderlyingStateOrProvinceOfIssue_144.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_144("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_144);
    UnderlyingInstrument_144.insert(UnderlyingStrikeCurrency_144.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_144;
    UnderlyingStrikePrice_144.setString("3438382");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_144);
    UnderlyingInstrument_144.insert(UnderlyingStrikePrice_144.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_144("STRING_117949321");
    noUnderlyings_0_0.set(UnderlyingSymbol_144);
    UnderlyingInstrument_144.insert(UnderlyingSymbol_144.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_144("STRING_530017062");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_144);
    UnderlyingInstrument_144.insert(UnderlyingSymbolSfx_144.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_144("STRING_2058900506");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_144);
    UnderlyingInstrument_144.insert(UnderlyingTimeUnit_144.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_144("STRING_264899952");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_144);
    UnderlyingInstrument_144.insert(UnderlyingUnitOfMeasure_144.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_144;
    UnderlyingUnitOfMeasureQty_144.setString("19524078");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_144);
    UnderlyingInstrument_144.insert(UnderlyingUnitOfMeasureQty_144.getString());
    all_values.push_back(UnderlyingInstrument_144);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_294;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_294("STRING_100768545");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_294);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_294.insert(UnderlyingSecurityAltID_294.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_294("STRING_1238597038");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_294);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_294.insert(UnderlyingSecurityAltIDSource_294.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_294);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_295;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_295("STRING_30315858");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_295);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_295.insert(UnderlyingSecurityAltID_295.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_295("STRING_2013796234");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_295);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_295.insert(UnderlyingSecurityAltIDSource_295.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_295);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_296;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_296("STRING_1516107554");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_296);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_296.insert(UnderlyingSecurityAltID_296.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_296("STRING_19002514");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_296);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_296.insert(UnderlyingSecurityAltIDSource_296.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_296);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_282;
      FIX::UnderlyingStipType UnderlyingStipType_282("STRING_1592770830");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_282);
      UnderlyingStipulations_NoUnderlyingStips_282.insert(UnderlyingStipType_282.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_282("STRING_165185998");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_282);
      UnderlyingStipulations_NoUnderlyingStips_282.insert(UnderlyingStipValue_282.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_282);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_283;
      FIX::UnderlyingStipType UnderlyingStipType_283("STRING_947338461");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_283);
      UnderlyingStipulations_NoUnderlyingStips_283.insert(UnderlyingStipType_283.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_283("STRING_1386692278");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_283);
      UnderlyingStipulations_NoUnderlyingStips_283.insert(UnderlyingStipValue_283.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_283);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_291;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_291("STRING_148486937");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_291);
      UndlyInstrumentParties_NoUndlyInstrumentParties_291.insert(UnderlyingInstrumentPartyID_291.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_291('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_291);
      UndlyInstrumentParties_NoUndlyInstrumentParties_291.insert(UnderlyingInstrumentPartyIDSource_291.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_291(573287201);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_291);
      UndlyInstrumentParties_NoUndlyInstrumentParties_291.insert(UnderlyingInstrumentPartyRole_291.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_291);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_577;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_577("STRING_1714175911");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_577);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_577.insert(UnderlyingInstrumentPartySubID_577.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_577(749385327);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_577);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_577.insert(UnderlyingInstrumentPartySubIDType_577.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_577);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_578;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_578("STRING_1514422309");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_578);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_578.insert(UnderlyingInstrumentPartySubID_578.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_578(751877315);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_578);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_578.insert(UnderlyingInstrumentPartySubIDType_578.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_578);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_292;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_292("STRING_187138518");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_292);
      UndlyInstrumentParties_NoUndlyInstrumentParties_292.insert(UnderlyingInstrumentPartyID_292.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_292('5');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_292);
      UndlyInstrumentParties_NoUndlyInstrumentParties_292.insert(UnderlyingInstrumentPartyIDSource_292.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_292(197634784);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_292);
      UndlyInstrumentParties_NoUndlyInstrumentParties_292.insert(UnderlyingInstrumentPartyRole_292.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_292);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_579;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_579("STRING_877348484");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_579);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_579.insert(UnderlyingInstrumentPartySubID_579.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_579(315584105);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_579);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_579.insert(UnderlyingInstrumentPartySubIDType_579.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_579);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_580;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_580("STRING_1842896855");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_580);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_580.insert(UnderlyingInstrumentPartySubID_580.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_580(788765342);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_580);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_580.insert(UnderlyingInstrumentPartySubIDType_580.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_580);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_145;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_145("DATA_580484058");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_145);
    UnderlyingInstrument_145.insert(EncodedUnderlyingIssuer_145.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_145(1647821050);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_145);
    UnderlyingInstrument_145.insert(EncodedUnderlyingIssuerLen_145.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_145("DATA_1134624373");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_145);
    UnderlyingInstrument_145.insert(EncodedUnderlyingSecurityDesc_145.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_145(681252603);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_145);
    UnderlyingInstrument_145.insert(EncodedUnderlyingSecurityDescLen_145.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_145;
    UnderlyingAdjustedQuantity_145.setString("7389344");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_145);
    UnderlyingInstrument_145.insert(UnderlyingAdjustedQuantity_145.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_145;
    UnderlyingAllocationPercent_145.setString("2.310000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_145);
    UnderlyingInstrument_145.insert(UnderlyingAllocationPercent_145.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_145;
    UnderlyingAttachmentPoint_145.setString("51.890000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_145);
    UnderlyingInstrument_145.insert(UnderlyingAttachmentPoint_145.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_145("STRING_107558346");
    noUnderlyings_0_1.set(UnderlyingCFICode_145);
    UnderlyingInstrument_145.insert(UnderlyingCFICode_145.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_145("STRING_1183942745");
    noUnderlyings_0_1.set(UnderlyingCPProgram_145);
    UnderlyingInstrument_145.insert(UnderlyingCPProgram_145.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_145("STRING_964882746");
    noUnderlyings_0_1.set(UnderlyingCPRegType_145);
    UnderlyingInstrument_145.insert(UnderlyingCPRegType_145.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_145;
    UnderlyingCapValue_145.setString("17003291");
    noUnderlyings_0_1.set(UnderlyingCapValue_145);
    UnderlyingInstrument_145.insert(UnderlyingCapValue_145.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_145;
    UnderlyingCashAmount_145.setString("13491287");
    noUnderlyings_0_1.set(UnderlyingCashAmount_145);
    UnderlyingInstrument_145.insert(UnderlyingCashAmount_145.getString());
    FIX::UnderlyingCashType UnderlyingCashType_145("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_145);
    UnderlyingInstrument_145.insert(UnderlyingCashType_145.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_145;
    UnderlyingContractMultiplier_145.setString("9395378");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_145);
    UnderlyingInstrument_145.insert(UnderlyingContractMultiplier_145.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_145(62077655);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_145);
    UnderlyingInstrument_145.insert(UnderlyingContractMultiplierUnit_145.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_145("COUNTRY_2060708145");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_145);
    UnderlyingInstrument_145.insert(UnderlyingCountryOfIssue_145.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_145("LOCALMKTDATE_1941796610");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_145);
    UnderlyingInstrument_145.insert(UnderlyingCouponPaymentDate_145.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_145;
    UnderlyingCouponRate_145.setString("48.560000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_145);
    UnderlyingInstrument_145.insert(UnderlyingCouponRate_145.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_145("STRING_777041516");
    noUnderlyings_0_1.set(UnderlyingCreditRating_145);
    UnderlyingInstrument_145.insert(UnderlyingCreditRating_145.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_145("GBP");
    noUnderlyings_0_1.set(UnderlyingCurrency_145);
    UnderlyingInstrument_145.insert(UnderlyingCurrency_145.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_145;
    UnderlyingCurrentValue_145.setString("1439801");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_145);
    UnderlyingInstrument_145.insert(UnderlyingCurrentValue_145.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_145;
    UnderlyingDetachmentPoint_145.setString("25.400000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_145);
    UnderlyingInstrument_145.insert(UnderlyingDetachmentPoint_145.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_145;
    UnderlyingDirtyPrice_145.setString("15718887");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_145);
    UnderlyingInstrument_145.insert(UnderlyingDirtyPrice_145.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_145;
    UnderlyingEndPrice_145.setString("6774904");
    noUnderlyings_0_1.set(UnderlyingEndPrice_145);
    UnderlyingInstrument_145.insert(UnderlyingEndPrice_145.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_145;
    UnderlyingEndValue_145.setString("3105173");
    noUnderlyings_0_1.set(UnderlyingEndValue_145);
    UnderlyingInstrument_145.insert(UnderlyingEndValue_145.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_145(737284846);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_145);
    UnderlyingInstrument_145.insert(UnderlyingExerciseStyle_145.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_145;
    UnderlyingFXRate_145.setString("15548389");
    noUnderlyings_0_1.set(UnderlyingFXRate_145);
    UnderlyingInstrument_145.insert(UnderlyingFXRate_145.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_145('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_145);
    UnderlyingInstrument_145.insert(UnderlyingFXRateCalc_145.getString());
    FIX::UnderlyingFactor UnderlyingFactor_145;
    UnderlyingFactor_145.setString("4326980");
    noUnderlyings_0_1.set(UnderlyingFactor_145);
    UnderlyingInstrument_145.insert(UnderlyingFactor_145.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_145(196120595);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_145);
    UnderlyingInstrument_145.insert(UnderlyingFlowScheduleType_145.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_145("STRING_1206585488");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_145);
    UnderlyingInstrument_145.insert(UnderlyingInstrRegistry_145.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_145("LOCALMKTDATE_2080519103");
    noUnderlyings_0_1.set(UnderlyingIssueDate_145);
    UnderlyingInstrument_145.insert(UnderlyingIssueDate_145.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_145("STRING_1330744968");
    noUnderlyings_0_1.set(UnderlyingIssuer_145);
    UnderlyingInstrument_145.insert(UnderlyingIssuer_145.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_145("STRING_1887838091");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_145);
    UnderlyingInstrument_145.insert(UnderlyingLocaleOfIssue_145.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_145("LOCALMKTDATE_671969895");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_145);
    UnderlyingInstrument_145.insert(UnderlyingMaturityDate_145.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_145("MONTHYEAR_348201551");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_145);
    UnderlyingInstrument_145.insert(UnderlyingMaturityMonthYear_145.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_145("TZTIMEONLY_287919633");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_145);
    UnderlyingInstrument_145.insert(UnderlyingMaturityTime_145.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_145;
    UnderlyingNotionalPercentageOutstanding_145.setString("82.410000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_145);
    UnderlyingInstrument_145.insert(UnderlyingNotionalPercentageOutstanding_145.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_145('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_145);
    UnderlyingInstrument_145.insert(UnderlyingOptAttribute_145.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_145;
    UnderlyingOriginalNotionalPercentageOutstanding_145.setString("23.790000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_145);
    UnderlyingInstrument_145.insert(UnderlyingOriginalNotionalPercentageOutstanding_145.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_145("STRING_332373770");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_145);
    UnderlyingInstrument_145.insert(UnderlyingPriceUnitOfMeasure_145.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_145;
    UnderlyingPriceUnitOfMeasureQty_145.setString("7337893");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_145);
    UnderlyingInstrument_145.insert(UnderlyingPriceUnitOfMeasureQty_145.getString());
    FIX::UnderlyingProduct UnderlyingProduct_145(1017539939);
    noUnderlyings_0_1.set(UnderlyingProduct_145);
    UnderlyingInstrument_145.insert(UnderlyingProduct_145.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_145(1271911576);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_145);
    UnderlyingInstrument_145.insert(UnderlyingPutOrCall_145.getString());
    FIX::UnderlyingPx UnderlyingPx_145;
    UnderlyingPx_145.setString("7958670");
    noUnderlyings_0_1.set(UnderlyingPx_145);
    UnderlyingInstrument_145.insert(UnderlyingPx_145.getString());
    FIX::UnderlyingQty UnderlyingQty_145;
    UnderlyingQty_145.setString("9307644");
    noUnderlyings_0_1.set(UnderlyingQty_145);
    UnderlyingInstrument_145.insert(UnderlyingQty_145.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_145("LOCALMKTDATE_1066224538");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_145);
    UnderlyingInstrument_145.insert(UnderlyingRedemptionDate_145.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_145("STRING_1431231903");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_145);
    UnderlyingInstrument_145.insert(UnderlyingRepoCollateralSecurityType_145.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_145;
    UnderlyingRepurchaseRate_145.setString("59.520000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_145);
    UnderlyingInstrument_145.insert(UnderlyingRepurchaseRate_145.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_145(427229763);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_145);
    UnderlyingInstrument_145.insert(UnderlyingRepurchaseTerm_145.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_145("STRING_668498439");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_145);
    UnderlyingInstrument_145.insert(UnderlyingRestructuringType_145.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_145("STRING_1851786129");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_145);
    UnderlyingInstrument_145.insert(UnderlyingSecurityDesc_145.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_145("EXCHANGE_540112303");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_145);
    UnderlyingInstrument_145.insert(UnderlyingSecurityExchange_145.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_145("STRING_92903493");
    noUnderlyings_0_1.set(UnderlyingSecurityID_145);
    UnderlyingInstrument_145.insert(UnderlyingSecurityID_145.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_145("STRING_381792899");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_145);
    UnderlyingInstrument_145.insert(UnderlyingSecurityIDSource_145.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_145("STRING_850629628");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_145);
    UnderlyingInstrument_145.insert(UnderlyingSecuritySubType_145.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_145("STRING_830188339");
    noUnderlyings_0_1.set(UnderlyingSecurityType_145);
    UnderlyingInstrument_145.insert(UnderlyingSecurityType_145.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_145("STRING_1936631800");
    noUnderlyings_0_1.set(UnderlyingSeniority_145);
    UnderlyingInstrument_145.insert(UnderlyingSeniority_145.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_145("STRING_1476731058");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_145);
    UnderlyingInstrument_145.insert(UnderlyingSettlMethod_145.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_145(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_145);
    UnderlyingInstrument_145.insert(UnderlyingSettlementType_145.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_145;
    UnderlyingStartValue_145.setString("21327523");
    noUnderlyings_0_1.set(UnderlyingStartValue_145);
    UnderlyingInstrument_145.insert(UnderlyingStartValue_145.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_145("STRING_535832898");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_145);
    UnderlyingInstrument_145.insert(UnderlyingStateOrProvinceOfIssue_145.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_145("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_145);
    UnderlyingInstrument_145.insert(UnderlyingStrikeCurrency_145.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_145;
    UnderlyingStrikePrice_145.setString("2761873");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_145);
    UnderlyingInstrument_145.insert(UnderlyingStrikePrice_145.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_145("STRING_1867891744");
    noUnderlyings_0_1.set(UnderlyingSymbol_145);
    UnderlyingInstrument_145.insert(UnderlyingSymbol_145.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_145("STRING_1664215268");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_145);
    UnderlyingInstrument_145.insert(UnderlyingSymbolSfx_145.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_145("STRING_564106974");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_145);
    UnderlyingInstrument_145.insert(UnderlyingTimeUnit_145.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_145("STRING_499936337");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_145);
    UnderlyingInstrument_145.insert(UnderlyingUnitOfMeasure_145.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_145;
    UnderlyingUnitOfMeasureQty_145.setString("10488759");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_145);
    UnderlyingInstrument_145.insert(UnderlyingUnitOfMeasureQty_145.getString());
    all_values.push_back(UnderlyingInstrument_145);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_297;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_297("STRING_832310107");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_297);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_297.insert(UnderlyingSecurityAltID_297.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_297("STRING_1782665308");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_297);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_297.insert(UnderlyingSecurityAltIDSource_297.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_297);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_298;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_298("STRING_686965645");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_298);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_298.insert(UnderlyingSecurityAltID_298.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_298("STRING_2104221684");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_298);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_298.insert(UnderlyingSecurityAltIDSource_298.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_298);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_284;
      FIX::UnderlyingStipType UnderlyingStipType_284("STRING_1617730081");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_284);
      UnderlyingStipulations_NoUnderlyingStips_284.insert(UnderlyingStipType_284.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_284("STRING_1022962574");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_284);
      UnderlyingStipulations_NoUnderlyingStips_284.insert(UnderlyingStipValue_284.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_284);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_293;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_293("STRING_1178052385");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_293);
      UndlyInstrumentParties_NoUndlyInstrumentParties_293.insert(UnderlyingInstrumentPartyID_293.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_293('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_293);
      UndlyInstrumentParties_NoUndlyInstrumentParties_293.insert(UnderlyingInstrumentPartyIDSource_293.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_293(383295400);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_293);
      UndlyInstrumentParties_NoUndlyInstrumentParties_293.insert(UnderlyingInstrumentPartyRole_293.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_293);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_581;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_581("STRING_1990304641");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_581);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_581.insert(UnderlyingInstrumentPartySubID_581.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_581(476198893);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_581);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_581.insert(UnderlyingInstrumentPartySubIDType_581.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_581);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_582;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_582("STRING_1264147765");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_582);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_582.insert(UnderlyingInstrumentPartySubID_582.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_582(693450621);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_582);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_582.insert(UnderlyingInstrumentPartySubIDType_582.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_582);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_583;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_583("STRING_1306387233");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_583);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_583.insert(UnderlyingInstrumentPartySubID_583.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_583(1053295918);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_583);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_583.insert(UnderlyingInstrumentPartySubIDType_583.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_583);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
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
