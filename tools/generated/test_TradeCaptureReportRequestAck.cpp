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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::TradeCaptureReportRequestAck msg;

  list<multiset<string>> all_values;
  multiset<string> TradeCaptureReportRequestAck_0;
  FIX::EncodedText EncodedText_93("DATA_454803641");
  msg.set(EncodedText_93);
  TradeCaptureReportRequestAck_0.insert(EncodedText_93.getString());
  FIX::EncodedTextLen EncodedTextLen_93(56227367);
  msg.set(EncodedTextLen_93);
  TradeCaptureReportRequestAck_0.insert(EncodedTextLen_93.getString());
  FIX::FirmTradeID FirmTradeID_9("STRING_908926013");
  msg.set(FirmTradeID_9);
  TradeCaptureReportRequestAck_0.insert(FirmTradeID_9.getString());
  FIX::MessageEventSource MessageEventSource_7("STRING_833885712");
  msg.set(MessageEventSource_7);
  TradeCaptureReportRequestAck_0.insert(MessageEventSource_7.getString());
  FIX::MultiLegReportingType MultiLegReportingType_7('1');
  msg.set(MultiLegReportingType_7);
  TradeCaptureReportRequestAck_0.insert(MultiLegReportingType_7.getString());
  FIX::ResponseDestination ResponseDestination_6("STRING_1473260244");
  msg.set(ResponseDestination_6);
  TradeCaptureReportRequestAck_0.insert(ResponseDestination_6.getString());
  FIX::ResponseTransportType ResponseTransportType_6(0);
  msg.set(ResponseTransportType_6);
  TradeCaptureReportRequestAck_0.insert(ResponseTransportType_6.getString());
  FIX::SecondaryFirmTradeID SecondaryFirmTradeID_3("STRING_1751328509");
  msg.set(SecondaryFirmTradeID_3);
  TradeCaptureReportRequestAck_0.insert(SecondaryFirmTradeID_3.getString());
  FIX::SecondaryTradeID SecondaryTradeID_3("STRING_248403114");
  msg.set(SecondaryTradeID_3);
  TradeCaptureReportRequestAck_0.insert(SecondaryTradeID_3.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_16('0');
  msg.set(SubscriptionRequestType_16);
  TradeCaptureReportRequestAck_0.insert(SubscriptionRequestType_16.getString());
  FIX::Text Text_93("STRING_1509809279");
  msg.set(Text_93);
  TradeCaptureReportRequestAck_0.insert(Text_93.getString());
  FIX::TotNumTradeReports TotNumTradeReports_1(1703218496);
  msg.set(TotNumTradeReports_1);
  TradeCaptureReportRequestAck_0.insert(TotNumTradeReports_1.getString());
  FIX::TradeID TradeID_10("STRING_1410893403");
  msg.set(TradeID_10);
  TradeCaptureReportRequestAck_0.insert(TradeID_10.getString());
  FIX::TradeRequestID TradeRequestID_2("STRING_1560798642");
  msg.set(TradeRequestID_2);
  TradeCaptureReportRequestAck_0.insert(TradeRequestID_2.getString());
  FIX::TradeRequestResult TradeRequestResult_0(2);
  msg.set(TradeRequestResult_0);
  TradeCaptureReportRequestAck_0.insert(TradeRequestResult_0.getString());
  FIX::TradeRequestStatus TradeRequestStatus_0(0);
  msg.set(TradeRequestStatus_0);
  TradeCaptureReportRequestAck_0.insert(TradeRequestStatus_0.getString());
  FIX::TradeRequestType TradeRequestType_1(3);
  msg.set(TradeRequestType_1);
  TradeCaptureReportRequestAck_0.insert(TradeRequestType_1.getString());
  all_values.push_back(TradeCaptureReportRequestAck_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_149;
    FIX::EncodedLegIssuer EncodedLegIssuer_149("DATA_161831653");
    noLegs_0_0.set(EncodedLegIssuer_149);
    InstrumentLeg_149.insert(EncodedLegIssuer_149.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_149(1301841070);
    noLegs_0_0.set(EncodedLegIssuerLen_149);
    InstrumentLeg_149.insert(EncodedLegIssuerLen_149.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_149("DATA_1283175062");
    noLegs_0_0.set(EncodedLegSecurityDesc_149);
    InstrumentLeg_149.insert(EncodedLegSecurityDesc_149.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_149(430320329);
    noLegs_0_0.set(EncodedLegSecurityDescLen_149);
    InstrumentLeg_149.insert(EncodedLegSecurityDescLen_149.getString());
    FIX::LegCFICode LegCFICode_149("STRING_1436341083");
    noLegs_0_0.set(LegCFICode_149);
    InstrumentLeg_149.insert(LegCFICode_149.getString());
    FIX::LegContractMultiplier LegContractMultiplier_149;
    LegContractMultiplier_149.setString("17601127");
    noLegs_0_0.set(LegContractMultiplier_149);
    InstrumentLeg_149.insert(LegContractMultiplier_149.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_149(197115219);
    noLegs_0_0.set(LegContractMultiplierUnit_149);
    InstrumentLeg_149.insert(LegContractMultiplierUnit_149.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_149("MONTHYEAR_452477650");
    noLegs_0_0.set(LegContractSettlMonth_149);
    InstrumentLeg_149.insert(LegContractSettlMonth_149.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_149("COUNTRY_732501701");
    noLegs_0_0.set(LegCountryOfIssue_149);
    InstrumentLeg_149.insert(LegCountryOfIssue_149.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_149("LOCALMKTDATE_1017951754");
    noLegs_0_0.set(LegCouponPaymentDate_149);
    InstrumentLeg_149.insert(LegCouponPaymentDate_149.getString());
    FIX::LegCouponRate LegCouponRate_149;
    LegCouponRate_149.setString("14.670000");
    noLegs_0_0.set(LegCouponRate_149);
    InstrumentLeg_149.insert(LegCouponRate_149.getString());
    FIX::LegCreditRating LegCreditRating_149("STRING_815258877");
    noLegs_0_0.set(LegCreditRating_149);
    InstrumentLeg_149.insert(LegCreditRating_149.getString());
    FIX::LegCurrency LegCurrency_149("JPY");
    noLegs_0_0.set(LegCurrency_149);
    InstrumentLeg_149.insert(LegCurrency_149.getString());
    FIX::LegDatedDate LegDatedDate_149("LOCALMKTDATE_871486244");
    noLegs_0_0.set(LegDatedDate_149);
    InstrumentLeg_149.insert(LegDatedDate_149.getString());
    FIX::LegExerciseStyle LegExerciseStyle_149(214060294);
    noLegs_0_0.set(LegExerciseStyle_149);
    InstrumentLeg_149.insert(LegExerciseStyle_149.getString());
    FIX::LegFactor LegFactor_149;
    LegFactor_149.setString("12249571");
    noLegs_0_0.set(LegFactor_149);
    InstrumentLeg_149.insert(LegFactor_149.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_149(1797055629);
    noLegs_0_0.set(LegFlowScheduleType_149);
    InstrumentLeg_149.insert(LegFlowScheduleType_149.getString());
    FIX::LegInstrRegistry LegInstrRegistry_149("STRING_1687320538");
    noLegs_0_0.set(LegInstrRegistry_149);
    InstrumentLeg_149.insert(LegInstrRegistry_149.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_149("LOCALMKTDATE_550925771");
    noLegs_0_0.set(LegInterestAccrualDate_149);
    InstrumentLeg_149.insert(LegInterestAccrualDate_149.getString());
    FIX::LegIssueDate LegIssueDate_149("LOCALMKTDATE_1400900490");
    noLegs_0_0.set(LegIssueDate_149);
    InstrumentLeg_149.insert(LegIssueDate_149.getString());
    FIX::LegIssuer LegIssuer_149("STRING_1935723652");
    noLegs_0_0.set(LegIssuer_149);
    InstrumentLeg_149.insert(LegIssuer_149.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_149("STRING_262060759");
    noLegs_0_0.set(LegLocaleOfIssue_149);
    InstrumentLeg_149.insert(LegLocaleOfIssue_149.getString());
    FIX::LegMaturityDate LegMaturityDate_149("LOCALMKTDATE_763226121");
    noLegs_0_0.set(LegMaturityDate_149);
    InstrumentLeg_149.insert(LegMaturityDate_149.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_149("MONTHYEAR_1491458500");
    noLegs_0_0.set(LegMaturityMonthYear_149);
    InstrumentLeg_149.insert(LegMaturityMonthYear_149.getString());
    FIX::LegMaturityTime LegMaturityTime_149("TZTIMEONLY_1672954162");
    noLegs_0_0.set(LegMaturityTime_149);
    InstrumentLeg_149.insert(LegMaturityTime_149.getString());
    FIX::LegOptAttribute LegOptAttribute_149('1');
    noLegs_0_0.set(LegOptAttribute_149);
    InstrumentLeg_149.insert(LegOptAttribute_149.getString());
    FIX::LegOptionRatio LegOptionRatio_149;
    LegOptionRatio_149.setString("6090379");
    noLegs_0_0.set(LegOptionRatio_149);
    InstrumentLeg_149.insert(LegOptionRatio_149.getString());
    FIX::LegPool LegPool_149("STRING_1543640285");
    noLegs_0_0.set(LegPool_149);
    InstrumentLeg_149.insert(LegPool_149.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_149("STRING_870682623");
    noLegs_0_0.set(LegPriceUnitOfMeasure_149);
    InstrumentLeg_149.insert(LegPriceUnitOfMeasure_149.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_149;
    LegPriceUnitOfMeasureQty_149.setString("20885048");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_149);
    InstrumentLeg_149.insert(LegPriceUnitOfMeasureQty_149.getString());
    FIX::LegProduct LegProduct_149(1705471938);
    noLegs_0_0.set(LegProduct_149);
    InstrumentLeg_149.insert(LegProduct_149.getString());
    FIX::LegPutOrCall LegPutOrCall_149(25040045);
    noLegs_0_0.set(LegPutOrCall_149);
    InstrumentLeg_149.insert(LegPutOrCall_149.getString());
    FIX::LegRatioQty LegRatioQty_149;
    LegRatioQty_149.setString("12241962");
    noLegs_0_0.set(LegRatioQty_149);
    InstrumentLeg_149.insert(LegRatioQty_149.getString());
    FIX::LegRedemptionDate LegRedemptionDate_149("LOCALMKTDATE_2135792268");
    noLegs_0_0.set(LegRedemptionDate_149);
    InstrumentLeg_149.insert(LegRedemptionDate_149.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_149("STRING_1461381128");
    noLegs_0_0.set(LegRepoCollateralSecurityType_149);
    InstrumentLeg_149.insert(LegRepoCollateralSecurityType_149.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_149;
    LegRepurchaseRate_149.setString("54.110000");
    noLegs_0_0.set(LegRepurchaseRate_149);
    InstrumentLeg_149.insert(LegRepurchaseRate_149.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_149(185423839);
    noLegs_0_0.set(LegRepurchaseTerm_149);
    InstrumentLeg_149.insert(LegRepurchaseTerm_149.getString());
    FIX::LegSecurityDesc LegSecurityDesc_149("STRING_1913858778");
    noLegs_0_0.set(LegSecurityDesc_149);
    InstrumentLeg_149.insert(LegSecurityDesc_149.getString());
    FIX::LegSecurityExchange LegSecurityExchange_149("EXCHANGE_1569327113");
    noLegs_0_0.set(LegSecurityExchange_149);
    InstrumentLeg_149.insert(LegSecurityExchange_149.getString());
    FIX::LegSecurityID LegSecurityID_149("STRING_1203375593");
    noLegs_0_0.set(LegSecurityID_149);
    InstrumentLeg_149.insert(LegSecurityID_149.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_149("STRING_1850126597");
    noLegs_0_0.set(LegSecurityIDSource_149);
    InstrumentLeg_149.insert(LegSecurityIDSource_149.getString());
    FIX::LegSecuritySubType LegSecuritySubType_149("STRING_237102342");
    noLegs_0_0.set(LegSecuritySubType_149);
    InstrumentLeg_149.insert(LegSecuritySubType_149.getString());
    FIX::LegSecurityType LegSecurityType_149("STRING_508509875");
    noLegs_0_0.set(LegSecurityType_149);
    InstrumentLeg_149.insert(LegSecurityType_149.getString());
    FIX::LegSide LegSide_149('9');
    noLegs_0_0.set(LegSide_149);
    InstrumentLeg_149.insert(LegSide_149.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_149("STRING_1108588587");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_149);
    InstrumentLeg_149.insert(LegStateOrProvinceOfIssue_149.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_149("EUR");
    noLegs_0_0.set(LegStrikeCurrency_149);
    InstrumentLeg_149.insert(LegStrikeCurrency_149.getString());
    FIX::LegStrikePrice LegStrikePrice_149;
    LegStrikePrice_149.setString("7581605");
    noLegs_0_0.set(LegStrikePrice_149);
    InstrumentLeg_149.insert(LegStrikePrice_149.getString());
    FIX::LegSymbol LegSymbol_149("STRING_262407060");
    noLegs_0_0.set(LegSymbol_149);
    InstrumentLeg_149.insert(LegSymbol_149.getString());
    FIX::LegSymbolSfx LegSymbolSfx_149("STRING_1869597354");
    noLegs_0_0.set(LegSymbolSfx_149);
    InstrumentLeg_149.insert(LegSymbolSfx_149.getString());
    FIX::LegTimeUnit LegTimeUnit_149("STRING_11577410");
    noLegs_0_0.set(LegTimeUnit_149);
    InstrumentLeg_149.insert(LegTimeUnit_149.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_149("STRING_50647064");
    noLegs_0_0.set(LegUnitOfMeasure_149);
    InstrumentLeg_149.insert(LegUnitOfMeasure_149.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_149;
    LegUnitOfMeasureQty_149.setString("21316581");
    noLegs_0_0.set(LegUnitOfMeasureQty_149);
    InstrumentLeg_149.insert(LegUnitOfMeasureQty_149.getString());
    all_values.push_back(InstrumentLeg_149);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_291;
      FIX::LegSecurityAltID LegSecurityAltID_291("STRING_1542105565");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_291);
      LegSecAltIDGrp_NoLegSecurityAltID_291.insert(LegSecurityAltID_291.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_291("STRING_1657128627");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_291);
      LegSecAltIDGrp_NoLegSecurityAltID_291.insert(LegSecurityAltIDSource_291.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_291);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_292;
      FIX::LegSecurityAltID LegSecurityAltID_292("STRING_951344646");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_292);
      LegSecAltIDGrp_NoLegSecurityAltID_292.insert(LegSecurityAltID_292.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_292("STRING_3659865");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_292);
      LegSecAltIDGrp_NoLegSecurityAltID_292.insert(LegSecurityAltIDSource_292.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_292);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_293;
      FIX::LegSecurityAltID LegSecurityAltID_293("STRING_1053285264");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_293);
      LegSecAltIDGrp_NoLegSecurityAltID_293.insert(LegSecurityAltID_293.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_293("STRING_1822027269");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_293);
      LegSecAltIDGrp_NoLegSecurityAltID_293.insert(LegSecurityAltIDSource_293.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_293);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_150;
    FIX::EncodedLegIssuer EncodedLegIssuer_150("DATA_2092164718");
    noLegs_0_1.set(EncodedLegIssuer_150);
    InstrumentLeg_150.insert(EncodedLegIssuer_150.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_150(611273555);
    noLegs_0_1.set(EncodedLegIssuerLen_150);
    InstrumentLeg_150.insert(EncodedLegIssuerLen_150.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_150("DATA_1847067314");
    noLegs_0_1.set(EncodedLegSecurityDesc_150);
    InstrumentLeg_150.insert(EncodedLegSecurityDesc_150.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_150(1168877337);
    noLegs_0_1.set(EncodedLegSecurityDescLen_150);
    InstrumentLeg_150.insert(EncodedLegSecurityDescLen_150.getString());
    FIX::LegCFICode LegCFICode_150("STRING_599582175");
    noLegs_0_1.set(LegCFICode_150);
    InstrumentLeg_150.insert(LegCFICode_150.getString());
    FIX::LegContractMultiplier LegContractMultiplier_150;
    LegContractMultiplier_150.setString("11609647");
    noLegs_0_1.set(LegContractMultiplier_150);
    InstrumentLeg_150.insert(LegContractMultiplier_150.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_150(2005702749);
    noLegs_0_1.set(LegContractMultiplierUnit_150);
    InstrumentLeg_150.insert(LegContractMultiplierUnit_150.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_150("MONTHYEAR_785006014");
    noLegs_0_1.set(LegContractSettlMonth_150);
    InstrumentLeg_150.insert(LegContractSettlMonth_150.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_150("COUNTRY_927339925");
    noLegs_0_1.set(LegCountryOfIssue_150);
    InstrumentLeg_150.insert(LegCountryOfIssue_150.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_150("LOCALMKTDATE_1427546214");
    noLegs_0_1.set(LegCouponPaymentDate_150);
    InstrumentLeg_150.insert(LegCouponPaymentDate_150.getString());
    FIX::LegCouponRate LegCouponRate_150;
    LegCouponRate_150.setString("16.080000");
    noLegs_0_1.set(LegCouponRate_150);
    InstrumentLeg_150.insert(LegCouponRate_150.getString());
    FIX::LegCreditRating LegCreditRating_150("STRING_629982874");
    noLegs_0_1.set(LegCreditRating_150);
    InstrumentLeg_150.insert(LegCreditRating_150.getString());
    FIX::LegCurrency LegCurrency_150("EUR");
    noLegs_0_1.set(LegCurrency_150);
    InstrumentLeg_150.insert(LegCurrency_150.getString());
    FIX::LegDatedDate LegDatedDate_150("LOCALMKTDATE_723697284");
    noLegs_0_1.set(LegDatedDate_150);
    InstrumentLeg_150.insert(LegDatedDate_150.getString());
    FIX::LegExerciseStyle LegExerciseStyle_150(625753495);
    noLegs_0_1.set(LegExerciseStyle_150);
    InstrumentLeg_150.insert(LegExerciseStyle_150.getString());
    FIX::LegFactor LegFactor_150;
    LegFactor_150.setString("10719780");
    noLegs_0_1.set(LegFactor_150);
    InstrumentLeg_150.insert(LegFactor_150.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_150(2042368867);
    noLegs_0_1.set(LegFlowScheduleType_150);
    InstrumentLeg_150.insert(LegFlowScheduleType_150.getString());
    FIX::LegInstrRegistry LegInstrRegistry_150("STRING_1383914063");
    noLegs_0_1.set(LegInstrRegistry_150);
    InstrumentLeg_150.insert(LegInstrRegistry_150.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_150("LOCALMKTDATE_1334385064");
    noLegs_0_1.set(LegInterestAccrualDate_150);
    InstrumentLeg_150.insert(LegInterestAccrualDate_150.getString());
    FIX::LegIssueDate LegIssueDate_150("LOCALMKTDATE_1764482574");
    noLegs_0_1.set(LegIssueDate_150);
    InstrumentLeg_150.insert(LegIssueDate_150.getString());
    FIX::LegIssuer LegIssuer_150("STRING_1395491473");
    noLegs_0_1.set(LegIssuer_150);
    InstrumentLeg_150.insert(LegIssuer_150.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_150("STRING_1385032129");
    noLegs_0_1.set(LegLocaleOfIssue_150);
    InstrumentLeg_150.insert(LegLocaleOfIssue_150.getString());
    FIX::LegMaturityDate LegMaturityDate_150("LOCALMKTDATE_1748657039");
    noLegs_0_1.set(LegMaturityDate_150);
    InstrumentLeg_150.insert(LegMaturityDate_150.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_150("MONTHYEAR_22811356");
    noLegs_0_1.set(LegMaturityMonthYear_150);
    InstrumentLeg_150.insert(LegMaturityMonthYear_150.getString());
    FIX::LegMaturityTime LegMaturityTime_150("TZTIMEONLY_779654046");
    noLegs_0_1.set(LegMaturityTime_150);
    InstrumentLeg_150.insert(LegMaturityTime_150.getString());
    FIX::LegOptAttribute LegOptAttribute_150('1');
    noLegs_0_1.set(LegOptAttribute_150);
    InstrumentLeg_150.insert(LegOptAttribute_150.getString());
    FIX::LegOptionRatio LegOptionRatio_150;
    LegOptionRatio_150.setString("9741560");
    noLegs_0_1.set(LegOptionRatio_150);
    InstrumentLeg_150.insert(LegOptionRatio_150.getString());
    FIX::LegPool LegPool_150("STRING_783313911");
    noLegs_0_1.set(LegPool_150);
    InstrumentLeg_150.insert(LegPool_150.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_150("STRING_164103635");
    noLegs_0_1.set(LegPriceUnitOfMeasure_150);
    InstrumentLeg_150.insert(LegPriceUnitOfMeasure_150.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_150;
    LegPriceUnitOfMeasureQty_150.setString("6486996");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_150);
    InstrumentLeg_150.insert(LegPriceUnitOfMeasureQty_150.getString());
    FIX::LegProduct LegProduct_150(727994982);
    noLegs_0_1.set(LegProduct_150);
    InstrumentLeg_150.insert(LegProduct_150.getString());
    FIX::LegPutOrCall LegPutOrCall_150(775377190);
    noLegs_0_1.set(LegPutOrCall_150);
    InstrumentLeg_150.insert(LegPutOrCall_150.getString());
    FIX::LegRatioQty LegRatioQty_150;
    LegRatioQty_150.setString("3482832");
    noLegs_0_1.set(LegRatioQty_150);
    InstrumentLeg_150.insert(LegRatioQty_150.getString());
    FIX::LegRedemptionDate LegRedemptionDate_150("LOCALMKTDATE_1896872319");
    noLegs_0_1.set(LegRedemptionDate_150);
    InstrumentLeg_150.insert(LegRedemptionDate_150.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_150("STRING_1374959365");
    noLegs_0_1.set(LegRepoCollateralSecurityType_150);
    InstrumentLeg_150.insert(LegRepoCollateralSecurityType_150.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_150;
    LegRepurchaseRate_150.setString("80.840000");
    noLegs_0_1.set(LegRepurchaseRate_150);
    InstrumentLeg_150.insert(LegRepurchaseRate_150.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_150(1755091420);
    noLegs_0_1.set(LegRepurchaseTerm_150);
    InstrumentLeg_150.insert(LegRepurchaseTerm_150.getString());
    FIX::LegSecurityDesc LegSecurityDesc_150("STRING_12481732");
    noLegs_0_1.set(LegSecurityDesc_150);
    InstrumentLeg_150.insert(LegSecurityDesc_150.getString());
    FIX::LegSecurityExchange LegSecurityExchange_150("EXCHANGE_289104361");
    noLegs_0_1.set(LegSecurityExchange_150);
    InstrumentLeg_150.insert(LegSecurityExchange_150.getString());
    FIX::LegSecurityID LegSecurityID_150("STRING_1035153986");
    noLegs_0_1.set(LegSecurityID_150);
    InstrumentLeg_150.insert(LegSecurityID_150.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_150("STRING_2000863340");
    noLegs_0_1.set(LegSecurityIDSource_150);
    InstrumentLeg_150.insert(LegSecurityIDSource_150.getString());
    FIX::LegSecuritySubType LegSecuritySubType_150("STRING_919087235");
    noLegs_0_1.set(LegSecuritySubType_150);
    InstrumentLeg_150.insert(LegSecuritySubType_150.getString());
    FIX::LegSecurityType LegSecurityType_150("STRING_552318895");
    noLegs_0_1.set(LegSecurityType_150);
    InstrumentLeg_150.insert(LegSecurityType_150.getString());
    FIX::LegSide LegSide_150('2');
    noLegs_0_1.set(LegSide_150);
    InstrumentLeg_150.insert(LegSide_150.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_150("STRING_1642784520");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_150);
    InstrumentLeg_150.insert(LegStateOrProvinceOfIssue_150.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_150("CAN");
    noLegs_0_1.set(LegStrikeCurrency_150);
    InstrumentLeg_150.insert(LegStrikeCurrency_150.getString());
    FIX::LegStrikePrice LegStrikePrice_150;
    LegStrikePrice_150.setString("15376697");
    noLegs_0_1.set(LegStrikePrice_150);
    InstrumentLeg_150.insert(LegStrikePrice_150.getString());
    FIX::LegSymbol LegSymbol_150("STRING_414502806");
    noLegs_0_1.set(LegSymbol_150);
    InstrumentLeg_150.insert(LegSymbol_150.getString());
    FIX::LegSymbolSfx LegSymbolSfx_150("STRING_461666948");
    noLegs_0_1.set(LegSymbolSfx_150);
    InstrumentLeg_150.insert(LegSymbolSfx_150.getString());
    FIX::LegTimeUnit LegTimeUnit_150("STRING_1154668665");
    noLegs_0_1.set(LegTimeUnit_150);
    InstrumentLeg_150.insert(LegTimeUnit_150.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_150("STRING_1809994279");
    noLegs_0_1.set(LegUnitOfMeasure_150);
    InstrumentLeg_150.insert(LegUnitOfMeasure_150.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_150;
    LegUnitOfMeasureQty_150.setString("18466990");
    noLegs_0_1.set(LegUnitOfMeasureQty_150);
    InstrumentLeg_150.insert(LegUnitOfMeasureQty_150.getString());
    all_values.push_back(InstrumentLeg_150);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_294;
      FIX::LegSecurityAltID LegSecurityAltID_294("STRING_1832805636");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_294);
      LegSecAltIDGrp_NoLegSecurityAltID_294.insert(LegSecurityAltID_294.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_294("STRING_478869475");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_294);
      LegSecAltIDGrp_NoLegSecurityAltID_294.insert(LegSecurityAltIDSource_294.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_294);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_295;
      FIX::LegSecurityAltID LegSecurityAltID_295("STRING_2014144076");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_295);
      LegSecAltIDGrp_NoLegSecurityAltID_295.insert(LegSecurityAltID_295.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_295("STRING_659477990");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_295);
      LegSecAltIDGrp_NoLegSecurityAltID_295.insert(LegSecurityAltIDSource_295.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_295);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_151;
    FIX::EncodedLegIssuer EncodedLegIssuer_151("DATA_1262183386");
    noLegs_0_2.set(EncodedLegIssuer_151);
    InstrumentLeg_151.insert(EncodedLegIssuer_151.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_151(30764063);
    noLegs_0_2.set(EncodedLegIssuerLen_151);
    InstrumentLeg_151.insert(EncodedLegIssuerLen_151.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_151("DATA_1308177614");
    noLegs_0_2.set(EncodedLegSecurityDesc_151);
    InstrumentLeg_151.insert(EncodedLegSecurityDesc_151.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_151(1990178368);
    noLegs_0_2.set(EncodedLegSecurityDescLen_151);
    InstrumentLeg_151.insert(EncodedLegSecurityDescLen_151.getString());
    FIX::LegCFICode LegCFICode_151("STRING_806141254");
    noLegs_0_2.set(LegCFICode_151);
    InstrumentLeg_151.insert(LegCFICode_151.getString());
    FIX::LegContractMultiplier LegContractMultiplier_151;
    LegContractMultiplier_151.setString("16564609");
    noLegs_0_2.set(LegContractMultiplier_151);
    InstrumentLeg_151.insert(LegContractMultiplier_151.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_151(1739567040);
    noLegs_0_2.set(LegContractMultiplierUnit_151);
    InstrumentLeg_151.insert(LegContractMultiplierUnit_151.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_151("MONTHYEAR_33616971");
    noLegs_0_2.set(LegContractSettlMonth_151);
    InstrumentLeg_151.insert(LegContractSettlMonth_151.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_151("COUNTRY_1018225339");
    noLegs_0_2.set(LegCountryOfIssue_151);
    InstrumentLeg_151.insert(LegCountryOfIssue_151.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_151("LOCALMKTDATE_1347174812");
    noLegs_0_2.set(LegCouponPaymentDate_151);
    InstrumentLeg_151.insert(LegCouponPaymentDate_151.getString());
    FIX::LegCouponRate LegCouponRate_151;
    LegCouponRate_151.setString("87.030000");
    noLegs_0_2.set(LegCouponRate_151);
    InstrumentLeg_151.insert(LegCouponRate_151.getString());
    FIX::LegCreditRating LegCreditRating_151("STRING_1307329700");
    noLegs_0_2.set(LegCreditRating_151);
    InstrumentLeg_151.insert(LegCreditRating_151.getString());
    FIX::LegCurrency LegCurrency_151("CHF");
    noLegs_0_2.set(LegCurrency_151);
    InstrumentLeg_151.insert(LegCurrency_151.getString());
    FIX::LegDatedDate LegDatedDate_151("LOCALMKTDATE_78933288");
    noLegs_0_2.set(LegDatedDate_151);
    InstrumentLeg_151.insert(LegDatedDate_151.getString());
    FIX::LegExerciseStyle LegExerciseStyle_151(787164046);
    noLegs_0_2.set(LegExerciseStyle_151);
    InstrumentLeg_151.insert(LegExerciseStyle_151.getString());
    FIX::LegFactor LegFactor_151;
    LegFactor_151.setString("1022659");
    noLegs_0_2.set(LegFactor_151);
    InstrumentLeg_151.insert(LegFactor_151.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_151(1721717808);
    noLegs_0_2.set(LegFlowScheduleType_151);
    InstrumentLeg_151.insert(LegFlowScheduleType_151.getString());
    FIX::LegInstrRegistry LegInstrRegistry_151("STRING_1965236436");
    noLegs_0_2.set(LegInstrRegistry_151);
    InstrumentLeg_151.insert(LegInstrRegistry_151.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_151("LOCALMKTDATE_1377031454");
    noLegs_0_2.set(LegInterestAccrualDate_151);
    InstrumentLeg_151.insert(LegInterestAccrualDate_151.getString());
    FIX::LegIssueDate LegIssueDate_151("LOCALMKTDATE_1111903899");
    noLegs_0_2.set(LegIssueDate_151);
    InstrumentLeg_151.insert(LegIssueDate_151.getString());
    FIX::LegIssuer LegIssuer_151("STRING_232255594");
    noLegs_0_2.set(LegIssuer_151);
    InstrumentLeg_151.insert(LegIssuer_151.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_151("STRING_1838698402");
    noLegs_0_2.set(LegLocaleOfIssue_151);
    InstrumentLeg_151.insert(LegLocaleOfIssue_151.getString());
    FIX::LegMaturityDate LegMaturityDate_151("LOCALMKTDATE_119088917");
    noLegs_0_2.set(LegMaturityDate_151);
    InstrumentLeg_151.insert(LegMaturityDate_151.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_151("MONTHYEAR_2042249874");
    noLegs_0_2.set(LegMaturityMonthYear_151);
    InstrumentLeg_151.insert(LegMaturityMonthYear_151.getString());
    FIX::LegMaturityTime LegMaturityTime_151("TZTIMEONLY_1537913831");
    noLegs_0_2.set(LegMaturityTime_151);
    InstrumentLeg_151.insert(LegMaturityTime_151.getString());
    FIX::LegOptAttribute LegOptAttribute_151('8');
    noLegs_0_2.set(LegOptAttribute_151);
    InstrumentLeg_151.insert(LegOptAttribute_151.getString());
    FIX::LegOptionRatio LegOptionRatio_151;
    LegOptionRatio_151.setString("17275718");
    noLegs_0_2.set(LegOptionRatio_151);
    InstrumentLeg_151.insert(LegOptionRatio_151.getString());
    FIX::LegPool LegPool_151("STRING_2016783306");
    noLegs_0_2.set(LegPool_151);
    InstrumentLeg_151.insert(LegPool_151.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_151("STRING_741591402");
    noLegs_0_2.set(LegPriceUnitOfMeasure_151);
    InstrumentLeg_151.insert(LegPriceUnitOfMeasure_151.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_151;
    LegPriceUnitOfMeasureQty_151.setString("2395662");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_151);
    InstrumentLeg_151.insert(LegPriceUnitOfMeasureQty_151.getString());
    FIX::LegProduct LegProduct_151(1131483044);
    noLegs_0_2.set(LegProduct_151);
    InstrumentLeg_151.insert(LegProduct_151.getString());
    FIX::LegPutOrCall LegPutOrCall_151(772355465);
    noLegs_0_2.set(LegPutOrCall_151);
    InstrumentLeg_151.insert(LegPutOrCall_151.getString());
    FIX::LegRatioQty LegRatioQty_151;
    LegRatioQty_151.setString("15477438");
    noLegs_0_2.set(LegRatioQty_151);
    InstrumentLeg_151.insert(LegRatioQty_151.getString());
    FIX::LegRedemptionDate LegRedemptionDate_151("LOCALMKTDATE_974177765");
    noLegs_0_2.set(LegRedemptionDate_151);
    InstrumentLeg_151.insert(LegRedemptionDate_151.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_151("STRING_1578496719");
    noLegs_0_2.set(LegRepoCollateralSecurityType_151);
    InstrumentLeg_151.insert(LegRepoCollateralSecurityType_151.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_151;
    LegRepurchaseRate_151.setString("10.740000");
    noLegs_0_2.set(LegRepurchaseRate_151);
    InstrumentLeg_151.insert(LegRepurchaseRate_151.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_151(566261157);
    noLegs_0_2.set(LegRepurchaseTerm_151);
    InstrumentLeg_151.insert(LegRepurchaseTerm_151.getString());
    FIX::LegSecurityDesc LegSecurityDesc_151("STRING_1612113691");
    noLegs_0_2.set(LegSecurityDesc_151);
    InstrumentLeg_151.insert(LegSecurityDesc_151.getString());
    FIX::LegSecurityExchange LegSecurityExchange_151("EXCHANGE_2074946413");
    noLegs_0_2.set(LegSecurityExchange_151);
    InstrumentLeg_151.insert(LegSecurityExchange_151.getString());
    FIX::LegSecurityID LegSecurityID_151("STRING_1913435969");
    noLegs_0_2.set(LegSecurityID_151);
    InstrumentLeg_151.insert(LegSecurityID_151.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_151("STRING_1658212394");
    noLegs_0_2.set(LegSecurityIDSource_151);
    InstrumentLeg_151.insert(LegSecurityIDSource_151.getString());
    FIX::LegSecuritySubType LegSecuritySubType_151("STRING_1234792466");
    noLegs_0_2.set(LegSecuritySubType_151);
    InstrumentLeg_151.insert(LegSecuritySubType_151.getString());
    FIX::LegSecurityType LegSecurityType_151("STRING_797472");
    noLegs_0_2.set(LegSecurityType_151);
    InstrumentLeg_151.insert(LegSecurityType_151.getString());
    FIX::LegSide LegSide_151('1');
    noLegs_0_2.set(LegSide_151);
    InstrumentLeg_151.insert(LegSide_151.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_151("STRING_1313725754");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_151);
    InstrumentLeg_151.insert(LegStateOrProvinceOfIssue_151.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_151("USD");
    noLegs_0_2.set(LegStrikeCurrency_151);
    InstrumentLeg_151.insert(LegStrikeCurrency_151.getString());
    FIX::LegStrikePrice LegStrikePrice_151;
    LegStrikePrice_151.setString("8879599");
    noLegs_0_2.set(LegStrikePrice_151);
    InstrumentLeg_151.insert(LegStrikePrice_151.getString());
    FIX::LegSymbol LegSymbol_151("STRING_605714307");
    noLegs_0_2.set(LegSymbol_151);
    InstrumentLeg_151.insert(LegSymbol_151.getString());
    FIX::LegSymbolSfx LegSymbolSfx_151("STRING_889504518");
    noLegs_0_2.set(LegSymbolSfx_151);
    InstrumentLeg_151.insert(LegSymbolSfx_151.getString());
    FIX::LegTimeUnit LegTimeUnit_151("STRING_1999863813");
    noLegs_0_2.set(LegTimeUnit_151);
    InstrumentLeg_151.insert(LegTimeUnit_151.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_151("STRING_837969901");
    noLegs_0_2.set(LegUnitOfMeasure_151);
    InstrumentLeg_151.insert(LegUnitOfMeasure_151.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_151;
    LegUnitOfMeasureQty_151.setString("5807192");
    noLegs_0_2.set(LegUnitOfMeasureQty_151);
    InstrumentLeg_151.insert(LegUnitOfMeasureQty_151.getString());
    all_values.push_back(InstrumentLeg_151);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_296;
      FIX::LegSecurityAltID LegSecurityAltID_296("STRING_732736127");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_296);
      LegSecAltIDGrp_NoLegSecurityAltID_296.insert(LegSecurityAltID_296.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_296("STRING_2118633103");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_296);
      LegSecAltIDGrp_NoLegSecurityAltID_296.insert(LegSecurityAltIDSource_296.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_296);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_297;
      FIX::LegSecurityAltID LegSecurityAltID_297("STRING_846400056");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_297);
      LegSecAltIDGrp_NoLegSecurityAltID_297.insert(LegSecurityAltID_297.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_297("STRING_312824341");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_297);
      LegSecAltIDGrp_NoLegSecurityAltID_297.insert(LegSecurityAltIDSource_297.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_297);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_298;
      FIX::LegSecurityAltID LegSecurityAltID_298("STRING_1987932761");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_298);
      LegSecAltIDGrp_NoLegSecurityAltID_298.insert(LegSecurityAltID_298.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_298("STRING_1587991458");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_298);
      LegSecAltIDGrp_NoLegSecurityAltID_298.insert(LegSecurityAltIDSource_298.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_298);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_98;
  FIX::AttachmentPoint AttachmentPoint_98;
  AttachmentPoint_98.setString("5.460000");
  msg.set(AttachmentPoint_98);
  Instrument_98.insert(AttachmentPoint_98.getString());
  FIX::CFICode CFICode_103("STRING_971932158");
  msg.set(CFICode_103);
  Instrument_98.insert(CFICode_103.getString());
  FIX::CPProgram CPProgram_98(2);
  msg.set(CPProgram_98);
  Instrument_98.insert(CPProgram_98.getString());
  FIX::CPRegType CPRegType_98("STRING_2100134364");
  msg.set(CPRegType_98);
  Instrument_98.insert(CPRegType_98.getString());
  FIX::CapPrice CapPrice_98;
  CapPrice_98.setString("19461099");
  msg.set(CapPrice_98);
  Instrument_98.insert(CapPrice_98.getString());
  FIX::ContractMultiplier ContractMultiplier_98;
  ContractMultiplier_98.setString("17913599");
  msg.set(ContractMultiplier_98);
  Instrument_98.insert(ContractMultiplier_98.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_98(1);
  msg.set(ContractMultiplierUnit_98);
  Instrument_98.insert(ContractMultiplierUnit_98.getString());
  FIX::ContractSettlMonth ContractSettlMonth_98("MONTHYEAR_364887432");
  msg.set(ContractSettlMonth_98);
  Instrument_98.insert(ContractSettlMonth_98.getString());
  FIX::CountryOfIssue CountryOfIssue_98("COUNTRY_1255990038");
  msg.set(CountryOfIssue_98);
  Instrument_98.insert(CountryOfIssue_98.getString());
  FIX::CouponPaymentDate CouponPaymentDate_98("LOCALMKTDATE_936834556");
  msg.set(CouponPaymentDate_98);
  Instrument_98.insert(CouponPaymentDate_98.getString());
  FIX::CouponRate CouponRate_98;
  CouponRate_98.setString("97.530000");
  msg.set(CouponRate_98);
  Instrument_98.insert(CouponRate_98.getString());
  FIX::CreditRating CreditRating_98("STRING_766718785");
  msg.set(CreditRating_98);
  Instrument_98.insert(CreditRating_98.getString());
  FIX::DatedDate DatedDate_98("LOCALMKTDATE_24143374");
  msg.set(DatedDate_98);
  Instrument_98.insert(DatedDate_98.getString());
  FIX::DetachmentPoint DetachmentPoint_98;
  DetachmentPoint_98.setString("72.260000");
  msg.set(DetachmentPoint_98);
  Instrument_98.insert(DetachmentPoint_98.getString());
  FIX::EncodedIssuer EncodedIssuer_98("DATA_176925927");
  msg.set(EncodedIssuer_98);
  Instrument_98.insert(EncodedIssuer_98.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_98(1337869128);
  msg.set(EncodedIssuerLen_98);
  Instrument_98.insert(EncodedIssuerLen_98.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_98("DATA_919598744");
  msg.set(EncodedSecurityDesc_98);
  Instrument_98.insert(EncodedSecurityDesc_98.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_98(1836882639);
  msg.set(EncodedSecurityDescLen_98);
  Instrument_98.insert(EncodedSecurityDescLen_98.getString());
  FIX::ExerciseStyle ExerciseStyle_98(1);
  msg.set(ExerciseStyle_98);
  Instrument_98.insert(ExerciseStyle_98.getString());
  FIX::Factor Factor_98;
  Factor_98.setString("15253130");
  msg.set(Factor_98);
  Instrument_98.insert(Factor_98.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_98(true);
  msg.set(FlexProductEligibilityIndicator_98);
  Instrument_98.insert(FlexProductEligibilityIndicator_98.getString());
  FIX::FlexibleIndicator FlexibleIndicator_98(false);
  msg.set(FlexibleIndicator_98);
  Instrument_98.insert(FlexibleIndicator_98.getString());
  FIX::FloorPrice FloorPrice_98;
  FloorPrice_98.setString("2157993");
  msg.set(FloorPrice_98);
  Instrument_98.insert(FloorPrice_98.getString());
  FIX::FlowScheduleType FlowScheduleType_98(2);
  msg.set(FlowScheduleType_98);
  Instrument_98.insert(FlowScheduleType_98.getString());
  FIX::InstrRegistry InstrRegistry_98("STRING_2049678290");
  msg.set(InstrRegistry_98);
  Instrument_98.insert(InstrRegistry_98.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_98('9');
  msg.set(InstrmtAssignmentMethod_98);
  Instrument_98.insert(InstrmtAssignmentMethod_98.getString());
  FIX::InterestAccrualDate InterestAccrualDate_98("LOCALMKTDATE_1130772238");
  msg.set(InterestAccrualDate_98);
  Instrument_98.insert(InterestAccrualDate_98.getString());
  FIX::IssueDate IssueDate_98("LOCALMKTDATE_748594698");
  msg.set(IssueDate_98);
  Instrument_98.insert(IssueDate_98.getString());
  FIX::Issuer Issuer_98("STRING_1261359774");
  msg.set(Issuer_98);
  Instrument_98.insert(Issuer_98.getString());
  FIX::ListMethod ListMethod_98(1);
  msg.set(ListMethod_98);
  Instrument_98.insert(ListMethod_98.getString());
  FIX::LocaleOfIssue LocaleOfIssue_98("STRING_189102509");
  msg.set(LocaleOfIssue_98);
  Instrument_98.insert(LocaleOfIssue_98.getString());
  FIX::MaturityDate MaturityDate_98("LOCALMKTDATE_1813750320");
  msg.set(MaturityDate_98);
  Instrument_98.insert(MaturityDate_98.getString());
  FIX::MaturityMonthYear MaturityMonthYear_98("MONTHYEAR_1943153509");
  msg.set(MaturityMonthYear_98);
  Instrument_98.insert(MaturityMonthYear_98.getString());
  FIX::MaturityTime MaturityTime_98("TZTIMEONLY_401965785");
  msg.set(MaturityTime_98);
  Instrument_98.insert(MaturityTime_98.getString());
  FIX::MinPriceIncrement MinPriceIncrement_98;
  MinPriceIncrement_98.setString("17664010");
  msg.set(MinPriceIncrement_98);
  Instrument_98.insert(MinPriceIncrement_98.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_98;
  MinPriceIncrementAmount_98.setString("17417797");
  msg.set(MinPriceIncrementAmount_98);
  Instrument_98.insert(MinPriceIncrementAmount_98.getString());
  FIX::NTPositionLimit NTPositionLimit_98(45842132);
  msg.set(NTPositionLimit_98);
  Instrument_98.insert(NTPositionLimit_98.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_98;
  NotionalPercentageOutstanding_98.setString("91.790000");
  msg.set(NotionalPercentageOutstanding_98);
  Instrument_98.insert(NotionalPercentageOutstanding_98.getString());
  FIX::OptAttribute OptAttribute_98('2');
  msg.set(OptAttribute_98);
  Instrument_98.insert(OptAttribute_98.getString());
  FIX::OptPayoutAmount OptPayoutAmount_98;
  OptPayoutAmount_98.setString("13018321");
  msg.set(OptPayoutAmount_98);
  Instrument_98.insert(OptPayoutAmount_98.getString());
  FIX::OptPayoutType OptPayoutType_98(3);
  msg.set(OptPayoutType_98);
  Instrument_98.insert(OptPayoutType_98.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_98;
  OriginalNotionalPercentageOutstanding_98.setString("33.220000");
  msg.set(OriginalNotionalPercentageOutstanding_98);
  Instrument_98.insert(OriginalNotionalPercentageOutstanding_98.getString());
  FIX::Pool Pool_98("STRING_2068550956");
  msg.set(Pool_98);
  Instrument_98.insert(Pool_98.getString());
  FIX::PositionLimit PositionLimit_98(1589267109);
  msg.set(PositionLimit_98);
  Instrument_98.insert(PositionLimit_98.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_98("STRING_STD");
  msg.set(PriceQuoteMethod_98);
  Instrument_98.insert(PriceQuoteMethod_98.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_98("STRING_97993235");
  msg.set(PriceUnitOfMeasure_98);
  Instrument_98.insert(PriceUnitOfMeasure_98.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_98;
  PriceUnitOfMeasureQty_98.setString("7796525");
  msg.set(PriceUnitOfMeasureQty_98);
  Instrument_98.insert(PriceUnitOfMeasureQty_98.getString());
  FIX::Product Product_106(5);
  msg.set(Product_106);
  Instrument_98.insert(Product_106.getString());
  FIX::ProductComplex ProductComplex_98("STRING_1934875874");
  msg.set(ProductComplex_98);
  Instrument_98.insert(ProductComplex_98.getString());
  FIX::PutOrCall PutOrCall_98(1);
  msg.set(PutOrCall_98);
  Instrument_98.insert(PutOrCall_98.getString());
  FIX::RedemptionDate RedemptionDate_98("LOCALMKTDATE_519088696");
  msg.set(RedemptionDate_98);
  Instrument_98.insert(RedemptionDate_98.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_98("STRING_366295736");
  msg.set(RepoCollateralSecurityType_98);
  Instrument_98.insert(RepoCollateralSecurityType_98.getString());
  FIX::RepurchaseRate RepurchaseRate_98;
  RepurchaseRate_98.setString("35.420000");
  msg.set(RepurchaseRate_98);
  Instrument_98.insert(RepurchaseRate_98.getString());
  FIX::RepurchaseTerm RepurchaseTerm_98(734888001);
  msg.set(RepurchaseTerm_98);
  Instrument_98.insert(RepurchaseTerm_98.getString());
  FIX::RestructuringType RestructuringType_98("STRING_XR");
  msg.set(RestructuringType_98);
  Instrument_98.insert(RestructuringType_98.getString());
  FIX::SecurityDesc SecurityDesc_98("STRING_690918184");
  msg.set(SecurityDesc_98);
  Instrument_98.insert(SecurityDesc_98.getString());
  FIX::SecurityExchange SecurityExchange_98("EXCHANGE_1683423433");
  msg.set(SecurityExchange_98);
  Instrument_98.insert(SecurityExchange_98.getString());
  FIX::SecurityGroup SecurityGroup_98("STRING_509207109");
  msg.set(SecurityGroup_98);
  Instrument_98.insert(SecurityGroup_98.getString());
  FIX::SecurityID SecurityID_98("STRING_1439512883");
  msg.set(SecurityID_98);
  Instrument_98.insert(SecurityID_98.getString());
  FIX::SecurityIDSource SecurityIDSource_98("STRING_2");
  msg.set(SecurityIDSource_98);
  Instrument_98.insert(SecurityIDSource_98.getString());
  FIX::SecurityStatus SecurityStatus_99("STRING_1");
  msg.set(SecurityStatus_99);
  Instrument_98.insert(SecurityStatus_99.getString());
  FIX::SecuritySubType SecuritySubType_102("STRING_1628615392");
  msg.set(SecuritySubType_102);
  Instrument_98.insert(SecuritySubType_102.getString());
  FIX::SecurityType SecurityType_106("STRING_TERM");
  msg.set(SecurityType_106);
  Instrument_98.insert(SecurityType_106.getString());
  FIX::Seniority Seniority_98("STRING_SR");
  msg.set(Seniority_98);
  Instrument_98.insert(Seniority_98.getString());
  FIX::SettlMethod SettlMethod_98('P');
  msg.set(SettlMethod_98);
  Instrument_98.insert(SettlMethod_98.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_98("STRING_82483620");
  msg.set(SettleOnOpenFlag_98);
  Instrument_98.insert(SettleOnOpenFlag_98.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_98("STRING_870394458");
  msg.set(StateOrProvinceOfIssue_98);
  Instrument_98.insert(StateOrProvinceOfIssue_98.getString());
  FIX::StrikeCurrency StrikeCurrency_98("EUR");
  msg.set(StrikeCurrency_98);
  Instrument_98.insert(StrikeCurrency_98.getString());
  FIX::StrikeMultiplier StrikeMultiplier_98;
  StrikeMultiplier_98.setString("8295780");
  msg.set(StrikeMultiplier_98);
  Instrument_98.insert(StrikeMultiplier_98.getString());
  FIX::StrikePrice StrikePrice_98;
  StrikePrice_98.setString("12307718");
  msg.set(StrikePrice_98);
  Instrument_98.insert(StrikePrice_98.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_98(2);
  msg.set(StrikePriceBoundaryMethod_98);
  Instrument_98.insert(StrikePriceBoundaryMethod_98.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_98;
  StrikePriceBoundaryPrecision_98.setString("13.490000");
  msg.set(StrikePriceBoundaryPrecision_98);
  Instrument_98.insert(StrikePriceBoundaryPrecision_98.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_98(1);
  msg.set(StrikePriceDeterminationMethod_98);
  Instrument_98.insert(StrikePriceDeterminationMethod_98.getString());
  FIX::StrikeValue StrikeValue_98;
  StrikeValue_98.setString("17176799");
  msg.set(StrikeValue_98);
  Instrument_98.insert(StrikeValue_98.getString());
  FIX::Symbol Symbol_98("STRING_1141261897");
  msg.set(Symbol_98);
  Instrument_98.insert(Symbol_98.getString());
  FIX::SymbolSfx SymbolSfx_98("STRING_WI");
  msg.set(SymbolSfx_98);
  Instrument_98.insert(SymbolSfx_98.getString());
  FIX::TimeUnit TimeUnit_98("STRING_D");
  msg.set(TimeUnit_98);
  Instrument_98.insert(TimeUnit_98.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_98(2);
  msg.set(UnderlyingPriceDeterminationMethod_98);
  Instrument_98.insert(UnderlyingPriceDeterminationMethod_98.getString());
  FIX::UnitOfMeasure UnitOfMeasure_98("STRING_USD");
  msg.set(UnitOfMeasure_98);
  Instrument_98.insert(UnitOfMeasure_98.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_98;
  UnitOfMeasureQty_98.setString("12078469");
  msg.set(UnitOfMeasureQty_98);
  Instrument_98.insert(UnitOfMeasureQty_98.getString());
  FIX::ValuationMethod ValuationMethod_98("STRING_FUTDA");
  msg.set(ValuationMethod_98);
  Instrument_98.insert(ValuationMethod_98.getString());
  all_values.push_back(Instrument_98);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_180;
    FIX::ComplexEventCondition ComplexEventCondition_180(2);
    noComplexEvents_0_0.set(ComplexEventCondition_180);
    ComplexEvents_NoComplexEvents_180.insert(ComplexEventCondition_180.getString());
    FIX::ComplexEventPrice ComplexEventPrice_180;
    ComplexEventPrice_180.setString("13890142");
    noComplexEvents_0_0.set(ComplexEventPrice_180);
    ComplexEvents_NoComplexEvents_180.insert(ComplexEventPrice_180.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_180(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_180);
    ComplexEvents_NoComplexEvents_180.insert(ComplexEventPriceBoundaryMethod_180.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_180;
    ComplexEventPriceBoundaryPrecision_180.setString("49.980000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_180);
    ComplexEvents_NoComplexEvents_180.insert(ComplexEventPriceBoundaryPrecision_180.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_180(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_180);
    ComplexEvents_NoComplexEvents_180.insert(ComplexEventPriceTimeType_180.getString());
    FIX::ComplexEventType ComplexEventType_180(8);
    noComplexEvents_0_0.set(ComplexEventType_180);
    ComplexEvents_NoComplexEvents_180.insert(ComplexEventType_180.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_180;
    ComplexOptPayoutAmount_180.setString("19795178");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_180);
    ComplexEvents_NoComplexEvents_180.insert(ComplexOptPayoutAmount_180.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_180);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_364;
      FIX::ComplexEventEndDate ComplexEventEndDate_364(FIX::UTCTIMESTAMP(1, 7, 53, 22, 8, 2003));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_364);
      ComplexEventDates_NoComplexEventDates_364.insert(ComplexEventEndDate_364.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_364(FIX::UTCTIMESTAMP(2, 30, 40, 20, 8, 2004));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_364);
      ComplexEventDates_NoComplexEventDates_364.insert(ComplexEventStartDate_364.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_364);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_735;
        FIX::ComplexEventEndTime ComplexEventEndTime_735(FIX::UTCTIMEONLY(20, 35, 50));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_735);
        ComplexEventTimes_NoComplexEventTimes_735.insert(ComplexEventEndTime_735.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_735(FIX::UTCTIMEONLY(10, 39, 20));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_735);
        ComplexEventTimes_NoComplexEventTimes_735.insert(ComplexEventStartTime_735.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_735);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_736;
        FIX::ComplexEventEndTime ComplexEventEndTime_736(FIX::UTCTIMEONLY(10, 10, 57));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_736);
        ComplexEventTimes_NoComplexEventTimes_736.insert(ComplexEventEndTime_736.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_736(FIX::UTCTIMEONLY(0, 30, 37));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_736);
        ComplexEventTimes_NoComplexEventTimes_736.insert(ComplexEventStartTime_736.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_736);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_737;
        FIX::ComplexEventEndTime ComplexEventEndTime_737(FIX::UTCTIMEONLY(7, 44, 16));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_737);
        ComplexEventTimes_NoComplexEventTimes_737.insert(ComplexEventEndTime_737.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_737(FIX::UTCTIMEONLY(3, 20, 37));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_737);
        ComplexEventTimes_NoComplexEventTimes_737.insert(ComplexEventStartTime_737.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_737);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_365;
      FIX::ComplexEventEndDate ComplexEventEndDate_365(FIX::UTCTIMESTAMP(18, 9, 21, 10, 2, 2000));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_365);
      ComplexEventDates_NoComplexEventDates_365.insert(ComplexEventEndDate_365.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_365(FIX::UTCTIMESTAMP(1, 47, 4, 15, 2, 2008));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_365);
      ComplexEventDates_NoComplexEventDates_365.insert(ComplexEventStartDate_365.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_365);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_738;
        FIX::ComplexEventEndTime ComplexEventEndTime_738(FIX::UTCTIMEONLY(22, 54, 50));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_738);
        ComplexEventTimes_NoComplexEventTimes_738.insert(ComplexEventEndTime_738.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_738(FIX::UTCTIMEONLY(18, 21, 17));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_738);
        ComplexEventTimes_NoComplexEventTimes_738.insert(ComplexEventStartTime_738.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_738);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_739;
        FIX::ComplexEventEndTime ComplexEventEndTime_739(FIX::UTCTIMEONLY(8, 54, 34));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_739);
        ComplexEventTimes_NoComplexEventTimes_739.insert(ComplexEventEndTime_739.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_739(FIX::UTCTIMEONLY(13, 46, 19));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_739);
        ComplexEventTimes_NoComplexEventTimes_739.insert(ComplexEventStartTime_739.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_739);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_366;
      FIX::ComplexEventEndDate ComplexEventEndDate_366(FIX::UTCTIMESTAMP(9, 28, 0, 23, 10, 2001));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_366);
      ComplexEventDates_NoComplexEventDates_366.insert(ComplexEventEndDate_366.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_366(FIX::UTCTIMESTAMP(11, 52, 46, 26, 7, 2010));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_366);
      ComplexEventDates_NoComplexEventDates_366.insert(ComplexEventStartDate_366.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_366);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_740;
        FIX::ComplexEventEndTime ComplexEventEndTime_740(FIX::UTCTIMEONLY(0, 8, 41));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_740);
        ComplexEventTimes_NoComplexEventTimes_740.insert(ComplexEventEndTime_740.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_740(FIX::UTCTIMEONLY(15, 2, 45));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_740);
        ComplexEventTimes_NoComplexEventTimes_740.insert(ComplexEventStartTime_740.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_740);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_741;
        FIX::ComplexEventEndTime ComplexEventEndTime_741(FIX::UTCTIMEONLY(3, 31, 47));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_741);
        ComplexEventTimes_NoComplexEventTimes_741.insert(ComplexEventEndTime_741.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_741(FIX::UTCTIMEONLY(9, 26, 4));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_741);
        ComplexEventTimes_NoComplexEventTimes_741.insert(ComplexEventStartTime_741.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_741);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_181;
    FIX::ComplexEventCondition ComplexEventCondition_181(1);
    noComplexEvents_0_1.set(ComplexEventCondition_181);
    ComplexEvents_NoComplexEvents_181.insert(ComplexEventCondition_181.getString());
    FIX::ComplexEventPrice ComplexEventPrice_181;
    ComplexEventPrice_181.setString("2545934");
    noComplexEvents_0_1.set(ComplexEventPrice_181);
    ComplexEvents_NoComplexEvents_181.insert(ComplexEventPrice_181.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_181(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_181);
    ComplexEvents_NoComplexEvents_181.insert(ComplexEventPriceBoundaryMethod_181.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_181;
    ComplexEventPriceBoundaryPrecision_181.setString("39.000000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_181);
    ComplexEvents_NoComplexEvents_181.insert(ComplexEventPriceBoundaryPrecision_181.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_181(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_181);
    ComplexEvents_NoComplexEvents_181.insert(ComplexEventPriceTimeType_181.getString());
    FIX::ComplexEventType ComplexEventType_181(1);
    noComplexEvents_0_1.set(ComplexEventType_181);
    ComplexEvents_NoComplexEvents_181.insert(ComplexEventType_181.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_181;
    ComplexOptPayoutAmount_181.setString("16652333");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_181);
    ComplexEvents_NoComplexEvents_181.insert(ComplexOptPayoutAmount_181.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_181);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_367;
      FIX::ComplexEventEndDate ComplexEventEndDate_367(FIX::UTCTIMESTAMP(10, 41, 47, 20, 8, 2007));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_367);
      ComplexEventDates_NoComplexEventDates_367.insert(ComplexEventEndDate_367.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_367(FIX::UTCTIMESTAMP(11, 10, 16, 19, 2, 2017));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_367);
      ComplexEventDates_NoComplexEventDates_367.insert(ComplexEventStartDate_367.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_367);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_742;
        FIX::ComplexEventEndTime ComplexEventEndTime_742(FIX::UTCTIMEONLY(2, 12, 5));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_742);
        ComplexEventTimes_NoComplexEventTimes_742.insert(ComplexEventEndTime_742.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_742(FIX::UTCTIMEONLY(1, 31, 3));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_742);
        ComplexEventTimes_NoComplexEventTimes_742.insert(ComplexEventStartTime_742.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_742);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_743;
        FIX::ComplexEventEndTime ComplexEventEndTime_743(FIX::UTCTIMEONLY(6, 19, 34));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_743);
        ComplexEventTimes_NoComplexEventTimes_743.insert(ComplexEventEndTime_743.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_743(FIX::UTCTIMEONLY(16, 19, 36));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_743);
        ComplexEventTimes_NoComplexEventTimes_743.insert(ComplexEventStartTime_743.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_743);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_744;
        FIX::ComplexEventEndTime ComplexEventEndTime_744(FIX::UTCTIMEONLY(17, 9, 48));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_744);
        ComplexEventTimes_NoComplexEventTimes_744.insert(ComplexEventEndTime_744.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_744(FIX::UTCTIMEONLY(21, 49, 16));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_744);
        ComplexEventTimes_NoComplexEventTimes_744.insert(ComplexEventStartTime_744.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_744);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_182;
    FIX::ComplexEventCondition ComplexEventCondition_182(1);
    noComplexEvents_0_2.set(ComplexEventCondition_182);
    ComplexEvents_NoComplexEvents_182.insert(ComplexEventCondition_182.getString());
    FIX::ComplexEventPrice ComplexEventPrice_182;
    ComplexEventPrice_182.setString("16827487");
    noComplexEvents_0_2.set(ComplexEventPrice_182);
    ComplexEvents_NoComplexEvents_182.insert(ComplexEventPrice_182.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_182(4);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_182);
    ComplexEvents_NoComplexEvents_182.insert(ComplexEventPriceBoundaryMethod_182.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_182;
    ComplexEventPriceBoundaryPrecision_182.setString("88.280000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_182);
    ComplexEvents_NoComplexEvents_182.insert(ComplexEventPriceBoundaryPrecision_182.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_182(2);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_182);
    ComplexEvents_NoComplexEvents_182.insert(ComplexEventPriceTimeType_182.getString());
    FIX::ComplexEventType ComplexEventType_182(7);
    noComplexEvents_0_2.set(ComplexEventType_182);
    ComplexEvents_NoComplexEvents_182.insert(ComplexEventType_182.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_182;
    ComplexOptPayoutAmount_182.setString("21463898");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_182);
    ComplexEvents_NoComplexEvents_182.insert(ComplexOptPayoutAmount_182.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_182);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_368;
      FIX::ComplexEventEndDate ComplexEventEndDate_368(FIX::UTCTIMESTAMP(1, 28, 49, 15, 12, 2008));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_368);
      ComplexEventDates_NoComplexEventDates_368.insert(ComplexEventEndDate_368.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_368(FIX::UTCTIMESTAMP(6, 3, 46, 14, 12, 2016));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_368);
      ComplexEventDates_NoComplexEventDates_368.insert(ComplexEventStartDate_368.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_368);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_745;
        FIX::ComplexEventEndTime ComplexEventEndTime_745(FIX::UTCTIMEONLY(3, 20, 36));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_745);
        ComplexEventTimes_NoComplexEventTimes_745.insert(ComplexEventEndTime_745.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_745(FIX::UTCTIMEONLY(9, 26, 53));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_745);
        ComplexEventTimes_NoComplexEventTimes_745.insert(ComplexEventStartTime_745.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_745);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_746;
        FIX::ComplexEventEndTime ComplexEventEndTime_746(FIX::UTCTIMEONLY(17, 18, 1));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_746);
        ComplexEventTimes_NoComplexEventTimes_746.insert(ComplexEventEndTime_746.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_746(FIX::UTCTIMEONLY(18, 2, 36));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_746);
        ComplexEventTimes_NoComplexEventTimes_746.insert(ComplexEventStartTime_746.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_746);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_369;
      FIX::ComplexEventEndDate ComplexEventEndDate_369(FIX::UTCTIMESTAMP(8, 56, 25, 19, 9, 2013));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_369);
      ComplexEventDates_NoComplexEventDates_369.insert(ComplexEventEndDate_369.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_369(FIX::UTCTIMESTAMP(18, 4, 10, 12, 9, 2002));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_369);
      ComplexEventDates_NoComplexEventDates_369.insert(ComplexEventStartDate_369.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_369);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_747;
        FIX::ComplexEventEndTime ComplexEventEndTime_747(FIX::UTCTIMEONLY(3, 11, 9));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_747);
        ComplexEventTimes_NoComplexEventTimes_747.insert(ComplexEventEndTime_747.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_747(FIX::UTCTIMEONLY(12, 27, 26));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_747);
        ComplexEventTimes_NoComplexEventTimes_747.insert(ComplexEventStartTime_747.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_747);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_194;
    FIX::EventDate EventDate_194("LOCALMKTDATE_864387044");
    noEvents_0_0.set(EventDate_194);
    EvntGrp_NoEvents_194.insert(EventDate_194.getString());
    FIX::EventPx EventPx_194;
    EventPx_194.setString("19840324");
    noEvents_0_0.set(EventPx_194);
    EvntGrp_NoEvents_194.insert(EventPx_194.getString());
    FIX::EventText EventText_194("STRING_1608761499");
    noEvents_0_0.set(EventText_194);
    EvntGrp_NoEvents_194.insert(EventText_194.getString());
    FIX::EventTime EventTime_194(FIX::UTCTIMESTAMP(7, 33, 35, 3, 10, 2011));
    noEvents_0_0.set(EventTime_194);
    EvntGrp_NoEvents_194.insert(EventTime_194.getString());
    FIX::EventType EventType_194(6);
    noEvents_0_0.set(EventType_194);
    EvntGrp_NoEvents_194.insert(EventType_194.getString());
    all_values.push_back(EvntGrp_NoEvents_194);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_193;
    FIX::InstrumentPartyID InstrumentPartyID_193("STRING_1876263859");
    noInstrumentParties_0_0.set(InstrumentPartyID_193);
    InstrumentParties_NoInstrumentParties_193.insert(InstrumentPartyID_193.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_193('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_193);
    InstrumentParties_NoInstrumentParties_193.insert(InstrumentPartyIDSource_193.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_193(693965416);
    noInstrumentParties_0_0.set(InstrumentPartyRole_193);
    InstrumentParties_NoInstrumentParties_193.insert(InstrumentPartyRole_193.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_193);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_400;
      FIX::InstrumentPartySubID InstrumentPartySubID_400("STRING_1298007383");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_400);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_400.insert(InstrumentPartySubID_400.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_400(2039155046);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_400);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_400.insert(InstrumentPartySubIDType_400.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_400);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_401;
      FIX::InstrumentPartySubID InstrumentPartySubID_401("STRING_1277613898");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_401);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_401.insert(InstrumentPartySubID_401.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_401(1917968407);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_401);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_401.insert(InstrumentPartySubIDType_401.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_401);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_402;
      FIX::InstrumentPartySubID InstrumentPartySubID_402("STRING_1243905326");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_402);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_402.insert(InstrumentPartySubID_402.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_402(1295893129);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_402);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_402.insert(InstrumentPartySubIDType_402.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_402);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_194;
    FIX::InstrumentPartyID InstrumentPartyID_194("STRING_660133231");
    noInstrumentParties_0_1.set(InstrumentPartyID_194);
    InstrumentParties_NoInstrumentParties_194.insert(InstrumentPartyID_194.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_194('3');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_194);
    InstrumentParties_NoInstrumentParties_194.insert(InstrumentPartyIDSource_194.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_194(1101741652);
    noInstrumentParties_0_1.set(InstrumentPartyRole_194);
    InstrumentParties_NoInstrumentParties_194.insert(InstrumentPartyRole_194.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_194);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_403;
      FIX::InstrumentPartySubID InstrumentPartySubID_403("STRING_2062076462");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_403);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_403.insert(InstrumentPartySubID_403.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_403(1949606224);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_403);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_403.insert(InstrumentPartySubIDType_403.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_403);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_404;
      FIX::InstrumentPartySubID InstrumentPartySubID_404("STRING_2084650447");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_404);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_404.insert(InstrumentPartySubID_404.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_404(864727100);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_404);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_404.insert(InstrumentPartySubIDType_404.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_404);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_214;
    FIX::SecurityAltID SecurityAltID_214("STRING_801553844");
    noSecurityAltID_0_0.set(SecurityAltID_214);
    SecAltIDGrp_NoSecurityAltID_214.insert(SecurityAltID_214.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_214("STRING_701275856");
    noSecurityAltID_0_0.set(SecurityAltIDSource_214);
    SecAltIDGrp_NoSecurityAltID_214.insert(SecurityAltIDSource_214.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_214);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_215;
    FIX::SecurityAltID SecurityAltID_215("STRING_991630872");
    noSecurityAltID_0_1.set(SecurityAltID_215);
    SecAltIDGrp_NoSecurityAltID_215.insert(SecurityAltID_215.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_215("STRING_1802331582");
    noSecurityAltID_0_1.set(SecurityAltIDSource_215);
    SecAltIDGrp_NoSecurityAltID_215.insert(SecurityAltIDSource_215.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_215);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_216;
    FIX::SecurityAltID SecurityAltID_216("STRING_1796352927");
    noSecurityAltID_0_2.set(SecurityAltID_216);
    SecAltIDGrp_NoSecurityAltID_216.insert(SecurityAltID_216.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_216("STRING_332345978");
    noSecurityAltID_0_2.set(SecurityAltIDSource_216);
    SecAltIDGrp_NoSecurityAltID_216.insert(SecurityAltIDSource_216.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_216);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_196;
  FIX::SecurityXML SecurityXML_197("XMLDATA_1748728569");
  msg.set(SecurityXML_197);
  FIX::SecurityXMLLen SecurityXMLLen_98(952545447);
  msg.set(SecurityXMLLen_98);
  FIX::SecurityXMLSchema SecurityXMLSchema_98("STRING_1285945691");
  msg.set(SecurityXMLSchema_98);
  SecurityXML_196.insert(SecurityXMLSchema_98.getString());
  all_values.push_back(SecurityXML_196);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_145;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_145("DATA_1925138332");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_145);
    UnderlyingInstrument_145.insert(EncodedUnderlyingIssuer_145.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_145(420806696);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_145);
    UnderlyingInstrument_145.insert(EncodedUnderlyingIssuerLen_145.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_145("DATA_1609768004");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_145);
    UnderlyingInstrument_145.insert(EncodedUnderlyingSecurityDesc_145.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_145(1447359250);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_145);
    UnderlyingInstrument_145.insert(EncodedUnderlyingSecurityDescLen_145.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_145;
    UnderlyingAdjustedQuantity_145.setString("11147721");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_145);
    UnderlyingInstrument_145.insert(UnderlyingAdjustedQuantity_145.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_145;
    UnderlyingAllocationPercent_145.setString("7.940000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_145);
    UnderlyingInstrument_145.insert(UnderlyingAllocationPercent_145.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_145;
    UnderlyingAttachmentPoint_145.setString("29.850000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_145);
    UnderlyingInstrument_145.insert(UnderlyingAttachmentPoint_145.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_145("STRING_1006443510");
    noUnderlyings_0_0.set(UnderlyingCFICode_145);
    UnderlyingInstrument_145.insert(UnderlyingCFICode_145.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_145("STRING_48351044");
    noUnderlyings_0_0.set(UnderlyingCPProgram_145);
    UnderlyingInstrument_145.insert(UnderlyingCPProgram_145.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_145("STRING_368367744");
    noUnderlyings_0_0.set(UnderlyingCPRegType_145);
    UnderlyingInstrument_145.insert(UnderlyingCPRegType_145.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_145;
    UnderlyingCapValue_145.setString("1028651");
    noUnderlyings_0_0.set(UnderlyingCapValue_145);
    UnderlyingInstrument_145.insert(UnderlyingCapValue_145.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_145;
    UnderlyingCashAmount_145.setString("13442441");
    noUnderlyings_0_0.set(UnderlyingCashAmount_145);
    UnderlyingInstrument_145.insert(UnderlyingCashAmount_145.getString());
    FIX::UnderlyingCashType UnderlyingCashType_145("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_145);
    UnderlyingInstrument_145.insert(UnderlyingCashType_145.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_145;
    UnderlyingContractMultiplier_145.setString("4413611");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_145);
    UnderlyingInstrument_145.insert(UnderlyingContractMultiplier_145.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_145(298502177);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_145);
    UnderlyingInstrument_145.insert(UnderlyingContractMultiplierUnit_145.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_145("COUNTRY_763615948");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_145);
    UnderlyingInstrument_145.insert(UnderlyingCountryOfIssue_145.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_145("LOCALMKTDATE_355953963");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_145);
    UnderlyingInstrument_145.insert(UnderlyingCouponPaymentDate_145.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_145;
    UnderlyingCouponRate_145.setString("47.530000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_145);
    UnderlyingInstrument_145.insert(UnderlyingCouponRate_145.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_145("STRING_700782748");
    noUnderlyings_0_0.set(UnderlyingCreditRating_145);
    UnderlyingInstrument_145.insert(UnderlyingCreditRating_145.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_145("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_145);
    UnderlyingInstrument_145.insert(UnderlyingCurrency_145.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_145;
    UnderlyingCurrentValue_145.setString("15023365");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_145);
    UnderlyingInstrument_145.insert(UnderlyingCurrentValue_145.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_145;
    UnderlyingDetachmentPoint_145.setString("69.200000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_145);
    UnderlyingInstrument_145.insert(UnderlyingDetachmentPoint_145.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_145;
    UnderlyingDirtyPrice_145.setString("4751249");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_145);
    UnderlyingInstrument_145.insert(UnderlyingDirtyPrice_145.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_145;
    UnderlyingEndPrice_145.setString("11571845");
    noUnderlyings_0_0.set(UnderlyingEndPrice_145);
    UnderlyingInstrument_145.insert(UnderlyingEndPrice_145.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_145;
    UnderlyingEndValue_145.setString("15708261");
    noUnderlyings_0_0.set(UnderlyingEndValue_145);
    UnderlyingInstrument_145.insert(UnderlyingEndValue_145.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_145(807470977);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_145);
    UnderlyingInstrument_145.insert(UnderlyingExerciseStyle_145.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_145;
    UnderlyingFXRate_145.setString("7584294");
    noUnderlyings_0_0.set(UnderlyingFXRate_145);
    UnderlyingInstrument_145.insert(UnderlyingFXRate_145.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_145('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_145);
    UnderlyingInstrument_145.insert(UnderlyingFXRateCalc_145.getString());
    FIX::UnderlyingFactor UnderlyingFactor_145;
    UnderlyingFactor_145.setString("20934166");
    noUnderlyings_0_0.set(UnderlyingFactor_145);
    UnderlyingInstrument_145.insert(UnderlyingFactor_145.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_145(491933593);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_145);
    UnderlyingInstrument_145.insert(UnderlyingFlowScheduleType_145.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_145("STRING_153542682");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_145);
    UnderlyingInstrument_145.insert(UnderlyingInstrRegistry_145.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_145("LOCALMKTDATE_366739716");
    noUnderlyings_0_0.set(UnderlyingIssueDate_145);
    UnderlyingInstrument_145.insert(UnderlyingIssueDate_145.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_145("STRING_2101701597");
    noUnderlyings_0_0.set(UnderlyingIssuer_145);
    UnderlyingInstrument_145.insert(UnderlyingIssuer_145.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_145("STRING_1600901933");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_145);
    UnderlyingInstrument_145.insert(UnderlyingLocaleOfIssue_145.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_145("LOCALMKTDATE_1481511828");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_145);
    UnderlyingInstrument_145.insert(UnderlyingMaturityDate_145.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_145("MONTHYEAR_872438743");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_145);
    UnderlyingInstrument_145.insert(UnderlyingMaturityMonthYear_145.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_145("TZTIMEONLY_51301270");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_145);
    UnderlyingInstrument_145.insert(UnderlyingMaturityTime_145.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_145;
    UnderlyingNotionalPercentageOutstanding_145.setString("16.900000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_145);
    UnderlyingInstrument_145.insert(UnderlyingNotionalPercentageOutstanding_145.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_145('9');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_145);
    UnderlyingInstrument_145.insert(UnderlyingOptAttribute_145.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_145;
    UnderlyingOriginalNotionalPercentageOutstanding_145.setString("90.150000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_145);
    UnderlyingInstrument_145.insert(UnderlyingOriginalNotionalPercentageOutstanding_145.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_145("STRING_443336878");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_145);
    UnderlyingInstrument_145.insert(UnderlyingPriceUnitOfMeasure_145.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_145;
    UnderlyingPriceUnitOfMeasureQty_145.setString("1175503");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_145);
    UnderlyingInstrument_145.insert(UnderlyingPriceUnitOfMeasureQty_145.getString());
    FIX::UnderlyingProduct UnderlyingProduct_145(1448169991);
    noUnderlyings_0_0.set(UnderlyingProduct_145);
    UnderlyingInstrument_145.insert(UnderlyingProduct_145.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_145(884698028);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_145);
    UnderlyingInstrument_145.insert(UnderlyingPutOrCall_145.getString());
    FIX::UnderlyingPx UnderlyingPx_145;
    UnderlyingPx_145.setString("4160524");
    noUnderlyings_0_0.set(UnderlyingPx_145);
    UnderlyingInstrument_145.insert(UnderlyingPx_145.getString());
    FIX::UnderlyingQty UnderlyingQty_145;
    UnderlyingQty_145.setString("643022");
    noUnderlyings_0_0.set(UnderlyingQty_145);
    UnderlyingInstrument_145.insert(UnderlyingQty_145.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_145("LOCALMKTDATE_1240651991");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_145);
    UnderlyingInstrument_145.insert(UnderlyingRedemptionDate_145.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_145("STRING_516677242");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_145);
    UnderlyingInstrument_145.insert(UnderlyingRepoCollateralSecurityType_145.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_145;
    UnderlyingRepurchaseRate_145.setString("50.390000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_145);
    UnderlyingInstrument_145.insert(UnderlyingRepurchaseRate_145.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_145(313849407);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_145);
    UnderlyingInstrument_145.insert(UnderlyingRepurchaseTerm_145.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_145("STRING_171369");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_145);
    UnderlyingInstrument_145.insert(UnderlyingRestructuringType_145.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_145("STRING_119937983");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_145);
    UnderlyingInstrument_145.insert(UnderlyingSecurityDesc_145.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_145("EXCHANGE_88322679");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_145);
    UnderlyingInstrument_145.insert(UnderlyingSecurityExchange_145.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_145("STRING_475296368");
    noUnderlyings_0_0.set(UnderlyingSecurityID_145);
    UnderlyingInstrument_145.insert(UnderlyingSecurityID_145.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_145("STRING_1277122510");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_145);
    UnderlyingInstrument_145.insert(UnderlyingSecurityIDSource_145.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_145("STRING_1659148878");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_145);
    UnderlyingInstrument_145.insert(UnderlyingSecuritySubType_145.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_145("STRING_1282767345");
    noUnderlyings_0_0.set(UnderlyingSecurityType_145);
    UnderlyingInstrument_145.insert(UnderlyingSecurityType_145.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_145("STRING_2035551958");
    noUnderlyings_0_0.set(UnderlyingSeniority_145);
    UnderlyingInstrument_145.insert(UnderlyingSeniority_145.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_145("STRING_2035036877");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_145);
    UnderlyingInstrument_145.insert(UnderlyingSettlMethod_145.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_145(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_145);
    UnderlyingInstrument_145.insert(UnderlyingSettlementType_145.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_145;
    UnderlyingStartValue_145.setString("3800019");
    noUnderlyings_0_0.set(UnderlyingStartValue_145);
    UnderlyingInstrument_145.insert(UnderlyingStartValue_145.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_145("STRING_41095911");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_145);
    UnderlyingInstrument_145.insert(UnderlyingStateOrProvinceOfIssue_145.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_145("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_145);
    UnderlyingInstrument_145.insert(UnderlyingStrikeCurrency_145.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_145;
    UnderlyingStrikePrice_145.setString("16419978");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_145);
    UnderlyingInstrument_145.insert(UnderlyingStrikePrice_145.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_145("STRING_929468262");
    noUnderlyings_0_0.set(UnderlyingSymbol_145);
    UnderlyingInstrument_145.insert(UnderlyingSymbol_145.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_145("STRING_1206658596");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_145);
    UnderlyingInstrument_145.insert(UnderlyingSymbolSfx_145.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_145("STRING_1693299115");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_145);
    UnderlyingInstrument_145.insert(UnderlyingTimeUnit_145.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_145("STRING_1269939953");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_145);
    UnderlyingInstrument_145.insert(UnderlyingUnitOfMeasure_145.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_145;
    UnderlyingUnitOfMeasureQty_145.setString("21274483");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_145);
    UnderlyingInstrument_145.insert(UnderlyingUnitOfMeasureQty_145.getString());
    all_values.push_back(UnderlyingInstrument_145);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_296;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_296("STRING_1713276831");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_296);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_296.insert(UnderlyingSecurityAltID_296.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_296("STRING_97515048");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_296);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_296.insert(UnderlyingSecurityAltIDSource_296.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_296);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_274;
      FIX::UnderlyingStipType UnderlyingStipType_274("STRING_450491211");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_274);
      UnderlyingStipulations_NoUnderlyingStips_274.insert(UnderlyingStipType_274.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_274("STRING_513567537");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_274);
      UnderlyingStipulations_NoUnderlyingStips_274.insert(UnderlyingStipValue_274.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_274);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_275;
      FIX::UnderlyingStipType UnderlyingStipType_275("STRING_1477956764");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_275);
      UnderlyingStipulations_NoUnderlyingStips_275.insert(UnderlyingStipType_275.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_275("STRING_1691143203");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_275);
      UnderlyingStipulations_NoUnderlyingStips_275.insert(UnderlyingStipValue_275.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_275);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_276;
      FIX::UnderlyingStipType UnderlyingStipType_276("STRING_1030244780");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_276);
      UnderlyingStipulations_NoUnderlyingStips_276.insert(UnderlyingStipType_276.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_276("STRING_95558156");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_276);
      UnderlyingStipulations_NoUnderlyingStips_276.insert(UnderlyingStipValue_276.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_276);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_299;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_299("STRING_1030416149");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_299);
      UndlyInstrumentParties_NoUndlyInstrumentParties_299.insert(UnderlyingInstrumentPartyID_299.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_299('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_299);
      UndlyInstrumentParties_NoUndlyInstrumentParties_299.insert(UnderlyingInstrumentPartyIDSource_299.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_299(2093315289);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_299);
      UndlyInstrumentParties_NoUndlyInstrumentParties_299.insert(UnderlyingInstrumentPartyRole_299.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_299);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_570;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_570("STRING_1492618649");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_570);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_570.insert(UnderlyingInstrumentPartySubID_570.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_570(1604980519);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_570);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_570.insert(UnderlyingInstrumentPartySubIDType_570.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_570);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_571;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_571("STRING_640996214");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_571);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_571.insert(UnderlyingInstrumentPartySubID_571.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_571(1380686959);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_571);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_571.insert(UnderlyingInstrumentPartySubIDType_571.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_571);

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
