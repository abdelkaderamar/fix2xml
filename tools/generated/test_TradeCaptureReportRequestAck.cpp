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
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReportRequestAck_0;
  FIX::EncodedText EncodedText_105("DATA_1226764358");
  msg.set(EncodedText_105);
  TradeCaptureReportRequestAck_0.insert(EncodedText_105.getString());
  FIX::EncodedTextLen EncodedTextLen_105(827589450);
  msg.set(EncodedTextLen_105);
  TradeCaptureReportRequestAck_0.insert(EncodedTextLen_105.getString());
  FIX::FirmTradeID FirmTradeID_9("STRING_1308932306");
  msg.set(FirmTradeID_9);
  TradeCaptureReportRequestAck_0.insert(FirmTradeID_9.getString());
  FIX::MessageEventSource MessageEventSource_7("STRING_52720830");
  msg.set(MessageEventSource_7);
  TradeCaptureReportRequestAck_0.insert(MessageEventSource_7.getString());
  FIX::MultiLegReportingType MultiLegReportingType_7('3');
  msg.set(MultiLegReportingType_7);
  TradeCaptureReportRequestAck_0.insert(MultiLegReportingType_7.getString());
  FIX::ResponseDestination ResponseDestination_6("STRING_643333751");
  msg.set(ResponseDestination_6);
  TradeCaptureReportRequestAck_0.insert(ResponseDestination_6.getString());
  FIX::ResponseTransportType ResponseTransportType_6(1);
  msg.set(ResponseTransportType_6);
  TradeCaptureReportRequestAck_0.insert(ResponseTransportType_6.getString());
  FIX::SecondaryFirmTradeID SecondaryFirmTradeID_3("STRING_1749224322");
  msg.set(SecondaryFirmTradeID_3);
  TradeCaptureReportRequestAck_0.insert(SecondaryFirmTradeID_3.getString());
  FIX::SecondaryTradeID SecondaryTradeID_3("STRING_124482470");
  msg.set(SecondaryTradeID_3);
  TradeCaptureReportRequestAck_0.insert(SecondaryTradeID_3.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_16('0');
  msg.set(SubscriptionRequestType_16);
  TradeCaptureReportRequestAck_0.insert(SubscriptionRequestType_16.getString());
  FIX::Text Text_105("STRING_771697605");
  msg.set(Text_105);
  TradeCaptureReportRequestAck_0.insert(Text_105.getString());
  FIX::TotNumTradeReports TotNumTradeReports_1(207856286);
  msg.set(TotNumTradeReports_1);
  TradeCaptureReportRequestAck_0.insert(TotNumTradeReports_1.getString());
  FIX::TradeID TradeID_10("STRING_699967050");
  msg.set(TradeID_10);
  TradeCaptureReportRequestAck_0.insert(TradeID_10.getString());
  FIX::TradeRequestID TradeRequestID_2("STRING_1258990458");
  msg.set(TradeRequestID_2);
  TradeCaptureReportRequestAck_0.insert(TradeRequestID_2.getString());
  FIX::TradeRequestResult TradeRequestResult_0(0);
  msg.set(TradeRequestResult_0);
  TradeCaptureReportRequestAck_0.insert(TradeRequestResult_0.getString());
  FIX::TradeRequestStatus TradeRequestStatus_0(2);
  msg.set(TradeRequestStatus_0);
  TradeCaptureReportRequestAck_0.insert(TradeRequestStatus_0.getString());
  FIX::TradeRequestType TradeRequestType_1(2);
  msg.set(TradeRequestType_1);
  TradeCaptureReportRequestAck_0.insert(TradeRequestType_1.getString());
  all_values.push_back(TradeCaptureReportRequestAck_0);

  all_compo_names.insert("TradeCaptureReportRequestAck");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_154;
    FIX::EncodedLegIssuer EncodedLegIssuer_154("DATA_1450491834");
    noLegs_0_0.set(EncodedLegIssuer_154);
    InstrumentLeg_154.insert(EncodedLegIssuer_154.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_154(1340806491);
    noLegs_0_0.set(EncodedLegIssuerLen_154);
    InstrumentLeg_154.insert(EncodedLegIssuerLen_154.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_154("DATA_308062697");
    noLegs_0_0.set(EncodedLegSecurityDesc_154);
    InstrumentLeg_154.insert(EncodedLegSecurityDesc_154.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_154(1393863117);
    noLegs_0_0.set(EncodedLegSecurityDescLen_154);
    InstrumentLeg_154.insert(EncodedLegSecurityDescLen_154.getString());
    FIX::LegCFICode LegCFICode_154("STRING_820212796");
    noLegs_0_0.set(LegCFICode_154);
    InstrumentLeg_154.insert(LegCFICode_154.getString());
    FIX::LegContractMultiplier LegContractMultiplier_154;
    LegContractMultiplier_154.setString("15986008");
    noLegs_0_0.set(LegContractMultiplier_154);
    InstrumentLeg_154.insert(LegContractMultiplier_154.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_154(412453469);
    noLegs_0_0.set(LegContractMultiplierUnit_154);
    InstrumentLeg_154.insert(LegContractMultiplierUnit_154.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_154("MONTHYEAR_394978352");
    noLegs_0_0.set(LegContractSettlMonth_154);
    InstrumentLeg_154.insert(LegContractSettlMonth_154.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_154("COUNTRY_2120240907");
    noLegs_0_0.set(LegCountryOfIssue_154);
    InstrumentLeg_154.insert(LegCountryOfIssue_154.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_154("LOCALMKTDATE_654231949");
    noLegs_0_0.set(LegCouponPaymentDate_154);
    InstrumentLeg_154.insert(LegCouponPaymentDate_154.getString());
    FIX::LegCouponRate LegCouponRate_154;
    LegCouponRate_154.setString("95.160000");
    noLegs_0_0.set(LegCouponRate_154);
    InstrumentLeg_154.insert(LegCouponRate_154.getString());
    FIX::LegCreditRating LegCreditRating_154("STRING_2137667752");
    noLegs_0_0.set(LegCreditRating_154);
    InstrumentLeg_154.insert(LegCreditRating_154.getString());
    FIX::LegCurrency LegCurrency_154("USD");
    noLegs_0_0.set(LegCurrency_154);
    InstrumentLeg_154.insert(LegCurrency_154.getString());
    FIX::LegDatedDate LegDatedDate_154("LOCALMKTDATE_817773554");
    noLegs_0_0.set(LegDatedDate_154);
    InstrumentLeg_154.insert(LegDatedDate_154.getString());
    FIX::LegExerciseStyle LegExerciseStyle_154(595755121);
    noLegs_0_0.set(LegExerciseStyle_154);
    InstrumentLeg_154.insert(LegExerciseStyle_154.getString());
    FIX::LegFactor LegFactor_154;
    LegFactor_154.setString("18827447");
    noLegs_0_0.set(LegFactor_154);
    InstrumentLeg_154.insert(LegFactor_154.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_154(378355533);
    noLegs_0_0.set(LegFlowScheduleType_154);
    InstrumentLeg_154.insert(LegFlowScheduleType_154.getString());
    FIX::LegInstrRegistry LegInstrRegistry_154("STRING_1239088873");
    noLegs_0_0.set(LegInstrRegistry_154);
    InstrumentLeg_154.insert(LegInstrRegistry_154.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_154("LOCALMKTDATE_611457772");
    noLegs_0_0.set(LegInterestAccrualDate_154);
    InstrumentLeg_154.insert(LegInterestAccrualDate_154.getString());
    FIX::LegIssueDate LegIssueDate_154("LOCALMKTDATE_2127579855");
    noLegs_0_0.set(LegIssueDate_154);
    InstrumentLeg_154.insert(LegIssueDate_154.getString());
    FIX::LegIssuer LegIssuer_154("STRING_1363571343");
    noLegs_0_0.set(LegIssuer_154);
    InstrumentLeg_154.insert(LegIssuer_154.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_154("STRING_28050447");
    noLegs_0_0.set(LegLocaleOfIssue_154);
    InstrumentLeg_154.insert(LegLocaleOfIssue_154.getString());
    FIX::LegMaturityDate LegMaturityDate_154("LOCALMKTDATE_751793813");
    noLegs_0_0.set(LegMaturityDate_154);
    InstrumentLeg_154.insert(LegMaturityDate_154.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_154("MONTHYEAR_1571427630");
    noLegs_0_0.set(LegMaturityMonthYear_154);
    InstrumentLeg_154.insert(LegMaturityMonthYear_154.getString());
    FIX::LegMaturityTime LegMaturityTime_154("TZTIMEONLY_728017497");
    noLegs_0_0.set(LegMaturityTime_154);
    InstrumentLeg_154.insert(LegMaturityTime_154.getString());
    FIX::LegOptAttribute LegOptAttribute_154('2');
    noLegs_0_0.set(LegOptAttribute_154);
    InstrumentLeg_154.insert(LegOptAttribute_154.getString());
    FIX::LegOptionRatio LegOptionRatio_154;
    LegOptionRatio_154.setString("6773325");
    noLegs_0_0.set(LegOptionRatio_154);
    InstrumentLeg_154.insert(LegOptionRatio_154.getString());
    FIX::LegPool LegPool_154("STRING_1125456867");
    noLegs_0_0.set(LegPool_154);
    InstrumentLeg_154.insert(LegPool_154.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_154("STRING_1500730705");
    noLegs_0_0.set(LegPriceUnitOfMeasure_154);
    InstrumentLeg_154.insert(LegPriceUnitOfMeasure_154.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_154;
    LegPriceUnitOfMeasureQty_154.setString("7899686");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_154);
    InstrumentLeg_154.insert(LegPriceUnitOfMeasureQty_154.getString());
    FIX::LegProduct LegProduct_154(428465053);
    noLegs_0_0.set(LegProduct_154);
    InstrumentLeg_154.insert(LegProduct_154.getString());
    FIX::LegPutOrCall LegPutOrCall_154(694053548);
    noLegs_0_0.set(LegPutOrCall_154);
    InstrumentLeg_154.insert(LegPutOrCall_154.getString());
    FIX::LegRatioQty LegRatioQty_154;
    LegRatioQty_154.setString("10980313");
    noLegs_0_0.set(LegRatioQty_154);
    InstrumentLeg_154.insert(LegRatioQty_154.getString());
    FIX::LegRedemptionDate LegRedemptionDate_154("LOCALMKTDATE_1822328171");
    noLegs_0_0.set(LegRedemptionDate_154);
    InstrumentLeg_154.insert(LegRedemptionDate_154.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_154("STRING_1514266344");
    noLegs_0_0.set(LegRepoCollateralSecurityType_154);
    InstrumentLeg_154.insert(LegRepoCollateralSecurityType_154.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_154;
    LegRepurchaseRate_154.setString("85.480000");
    noLegs_0_0.set(LegRepurchaseRate_154);
    InstrumentLeg_154.insert(LegRepurchaseRate_154.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_154(87297992);
    noLegs_0_0.set(LegRepurchaseTerm_154);
    InstrumentLeg_154.insert(LegRepurchaseTerm_154.getString());
    FIX::LegSecurityDesc LegSecurityDesc_154("STRING_1909244696");
    noLegs_0_0.set(LegSecurityDesc_154);
    InstrumentLeg_154.insert(LegSecurityDesc_154.getString());
    FIX::LegSecurityExchange LegSecurityExchange_154("EXCHANGE_521905807");
    noLegs_0_0.set(LegSecurityExchange_154);
    InstrumentLeg_154.insert(LegSecurityExchange_154.getString());
    FIX::LegSecurityID LegSecurityID_154("STRING_741529941");
    noLegs_0_0.set(LegSecurityID_154);
    InstrumentLeg_154.insert(LegSecurityID_154.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_154("STRING_365020565");
    noLegs_0_0.set(LegSecurityIDSource_154);
    InstrumentLeg_154.insert(LegSecurityIDSource_154.getString());
    FIX::LegSecuritySubType LegSecuritySubType_154("STRING_512089912");
    noLegs_0_0.set(LegSecuritySubType_154);
    InstrumentLeg_154.insert(LegSecuritySubType_154.getString());
    FIX::LegSecurityType LegSecurityType_154("STRING_28352756");
    noLegs_0_0.set(LegSecurityType_154);
    InstrumentLeg_154.insert(LegSecurityType_154.getString());
    FIX::LegSide LegSide_154('4');
    noLegs_0_0.set(LegSide_154);
    InstrumentLeg_154.insert(LegSide_154.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_154("STRING_1329863466");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_154);
    InstrumentLeg_154.insert(LegStateOrProvinceOfIssue_154.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_154("JPY");
    noLegs_0_0.set(LegStrikeCurrency_154);
    InstrumentLeg_154.insert(LegStrikeCurrency_154.getString());
    FIX::LegStrikePrice LegStrikePrice_154;
    LegStrikePrice_154.setString("17082189");
    noLegs_0_0.set(LegStrikePrice_154);
    InstrumentLeg_154.insert(LegStrikePrice_154.getString());
    FIX::LegSymbol LegSymbol_154("STRING_1863196751");
    noLegs_0_0.set(LegSymbol_154);
    InstrumentLeg_154.insert(LegSymbol_154.getString());
    FIX::LegSymbolSfx LegSymbolSfx_154("STRING_394279621");
    noLegs_0_0.set(LegSymbolSfx_154);
    InstrumentLeg_154.insert(LegSymbolSfx_154.getString());
    FIX::LegTimeUnit LegTimeUnit_154("STRING_1688315207");
    noLegs_0_0.set(LegTimeUnit_154);
    InstrumentLeg_154.insert(LegTimeUnit_154.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_154("STRING_1079284446");
    noLegs_0_0.set(LegUnitOfMeasure_154);
    InstrumentLeg_154.insert(LegUnitOfMeasure_154.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_154;
    LegUnitOfMeasureQty_154.setString("4223300");
    noLegs_0_0.set(LegUnitOfMeasureQty_154);
    InstrumentLeg_154.insert(LegUnitOfMeasureQty_154.getString());
    all_values.push_back(InstrumentLeg_154);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_298;
      FIX::LegSecurityAltID LegSecurityAltID_298("STRING_503228428");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_298);
      LegSecAltIDGrp_NoLegSecurityAltID_298.insert(LegSecurityAltID_298.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_298("STRING_1150347565");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_298);
      LegSecAltIDGrp_NoLegSecurityAltID_298.insert(LegSecurityAltIDSource_298.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_298);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_299;
      FIX::LegSecurityAltID LegSecurityAltID_299("STRING_155925995");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_299);
      LegSecAltIDGrp_NoLegSecurityAltID_299.insert(LegSecurityAltID_299.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_299("STRING_1180560930");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_299);
      LegSecAltIDGrp_NoLegSecurityAltID_299.insert(LegSecurityAltIDSource_299.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_299);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_300;
      FIX::LegSecurityAltID LegSecurityAltID_300("STRING_128320784");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_300);
      LegSecAltIDGrp_NoLegSecurityAltID_300.insert(LegSecurityAltID_300.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_300("STRING_1656656700");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_300);
      LegSecAltIDGrp_NoLegSecurityAltID_300.insert(LegSecurityAltIDSource_300.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_300);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_155;
    FIX::EncodedLegIssuer EncodedLegIssuer_155("DATA_1970529588");
    noLegs_0_1.set(EncodedLegIssuer_155);
    InstrumentLeg_155.insert(EncodedLegIssuer_155.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_155(556785838);
    noLegs_0_1.set(EncodedLegIssuerLen_155);
    InstrumentLeg_155.insert(EncodedLegIssuerLen_155.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_155("DATA_203226601");
    noLegs_0_1.set(EncodedLegSecurityDesc_155);
    InstrumentLeg_155.insert(EncodedLegSecurityDesc_155.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_155(921077296);
    noLegs_0_1.set(EncodedLegSecurityDescLen_155);
    InstrumentLeg_155.insert(EncodedLegSecurityDescLen_155.getString());
    FIX::LegCFICode LegCFICode_155("STRING_231630361");
    noLegs_0_1.set(LegCFICode_155);
    InstrumentLeg_155.insert(LegCFICode_155.getString());
    FIX::LegContractMultiplier LegContractMultiplier_155;
    LegContractMultiplier_155.setString("17174929");
    noLegs_0_1.set(LegContractMultiplier_155);
    InstrumentLeg_155.insert(LegContractMultiplier_155.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_155(1470225844);
    noLegs_0_1.set(LegContractMultiplierUnit_155);
    InstrumentLeg_155.insert(LegContractMultiplierUnit_155.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_155("MONTHYEAR_318928353");
    noLegs_0_1.set(LegContractSettlMonth_155);
    InstrumentLeg_155.insert(LegContractSettlMonth_155.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_155("COUNTRY_1479253994");
    noLegs_0_1.set(LegCountryOfIssue_155);
    InstrumentLeg_155.insert(LegCountryOfIssue_155.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_155("LOCALMKTDATE_1992131652");
    noLegs_0_1.set(LegCouponPaymentDate_155);
    InstrumentLeg_155.insert(LegCouponPaymentDate_155.getString());
    FIX::LegCouponRate LegCouponRate_155;
    LegCouponRate_155.setString("82.950000");
    noLegs_0_1.set(LegCouponRate_155);
    InstrumentLeg_155.insert(LegCouponRate_155.getString());
    FIX::LegCreditRating LegCreditRating_155("STRING_1844274559");
    noLegs_0_1.set(LegCreditRating_155);
    InstrumentLeg_155.insert(LegCreditRating_155.getString());
    FIX::LegCurrency LegCurrency_155("CHF");
    noLegs_0_1.set(LegCurrency_155);
    InstrumentLeg_155.insert(LegCurrency_155.getString());
    FIX::LegDatedDate LegDatedDate_155("LOCALMKTDATE_1891835350");
    noLegs_0_1.set(LegDatedDate_155);
    InstrumentLeg_155.insert(LegDatedDate_155.getString());
    FIX::LegExerciseStyle LegExerciseStyle_155(1686601382);
    noLegs_0_1.set(LegExerciseStyle_155);
    InstrumentLeg_155.insert(LegExerciseStyle_155.getString());
    FIX::LegFactor LegFactor_155;
    LegFactor_155.setString("17129189");
    noLegs_0_1.set(LegFactor_155);
    InstrumentLeg_155.insert(LegFactor_155.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_155(1674657199);
    noLegs_0_1.set(LegFlowScheduleType_155);
    InstrumentLeg_155.insert(LegFlowScheduleType_155.getString());
    FIX::LegInstrRegistry LegInstrRegistry_155("STRING_1247336734");
    noLegs_0_1.set(LegInstrRegistry_155);
    InstrumentLeg_155.insert(LegInstrRegistry_155.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_155("LOCALMKTDATE_1428632032");
    noLegs_0_1.set(LegInterestAccrualDate_155);
    InstrumentLeg_155.insert(LegInterestAccrualDate_155.getString());
    FIX::LegIssueDate LegIssueDate_155("LOCALMKTDATE_2068936820");
    noLegs_0_1.set(LegIssueDate_155);
    InstrumentLeg_155.insert(LegIssueDate_155.getString());
    FIX::LegIssuer LegIssuer_155("STRING_788168293");
    noLegs_0_1.set(LegIssuer_155);
    InstrumentLeg_155.insert(LegIssuer_155.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_155("STRING_360432831");
    noLegs_0_1.set(LegLocaleOfIssue_155);
    InstrumentLeg_155.insert(LegLocaleOfIssue_155.getString());
    FIX::LegMaturityDate LegMaturityDate_155("LOCALMKTDATE_343783240");
    noLegs_0_1.set(LegMaturityDate_155);
    InstrumentLeg_155.insert(LegMaturityDate_155.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_155("MONTHYEAR_1080793665");
    noLegs_0_1.set(LegMaturityMonthYear_155);
    InstrumentLeg_155.insert(LegMaturityMonthYear_155.getString());
    FIX::LegMaturityTime LegMaturityTime_155("TZTIMEONLY_863661259");
    noLegs_0_1.set(LegMaturityTime_155);
    InstrumentLeg_155.insert(LegMaturityTime_155.getString());
    FIX::LegOptAttribute LegOptAttribute_155('1');
    noLegs_0_1.set(LegOptAttribute_155);
    InstrumentLeg_155.insert(LegOptAttribute_155.getString());
    FIX::LegOptionRatio LegOptionRatio_155;
    LegOptionRatio_155.setString("12367196");
    noLegs_0_1.set(LegOptionRatio_155);
    InstrumentLeg_155.insert(LegOptionRatio_155.getString());
    FIX::LegPool LegPool_155("STRING_2044222189");
    noLegs_0_1.set(LegPool_155);
    InstrumentLeg_155.insert(LegPool_155.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_155("STRING_1622451590");
    noLegs_0_1.set(LegPriceUnitOfMeasure_155);
    InstrumentLeg_155.insert(LegPriceUnitOfMeasure_155.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_155;
    LegPriceUnitOfMeasureQty_155.setString("7458927");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_155);
    InstrumentLeg_155.insert(LegPriceUnitOfMeasureQty_155.getString());
    FIX::LegProduct LegProduct_155(1867268130);
    noLegs_0_1.set(LegProduct_155);
    InstrumentLeg_155.insert(LegProduct_155.getString());
    FIX::LegPutOrCall LegPutOrCall_155(31753780);
    noLegs_0_1.set(LegPutOrCall_155);
    InstrumentLeg_155.insert(LegPutOrCall_155.getString());
    FIX::LegRatioQty LegRatioQty_155;
    LegRatioQty_155.setString("9491193");
    noLegs_0_1.set(LegRatioQty_155);
    InstrumentLeg_155.insert(LegRatioQty_155.getString());
    FIX::LegRedemptionDate LegRedemptionDate_155("LOCALMKTDATE_640861778");
    noLegs_0_1.set(LegRedemptionDate_155);
    InstrumentLeg_155.insert(LegRedemptionDate_155.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_155("STRING_263384141");
    noLegs_0_1.set(LegRepoCollateralSecurityType_155);
    InstrumentLeg_155.insert(LegRepoCollateralSecurityType_155.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_155;
    LegRepurchaseRate_155.setString("86.110000");
    noLegs_0_1.set(LegRepurchaseRate_155);
    InstrumentLeg_155.insert(LegRepurchaseRate_155.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_155(2111087623);
    noLegs_0_1.set(LegRepurchaseTerm_155);
    InstrumentLeg_155.insert(LegRepurchaseTerm_155.getString());
    FIX::LegSecurityDesc LegSecurityDesc_155("STRING_582312494");
    noLegs_0_1.set(LegSecurityDesc_155);
    InstrumentLeg_155.insert(LegSecurityDesc_155.getString());
    FIX::LegSecurityExchange LegSecurityExchange_155("EXCHANGE_1998382605");
    noLegs_0_1.set(LegSecurityExchange_155);
    InstrumentLeg_155.insert(LegSecurityExchange_155.getString());
    FIX::LegSecurityID LegSecurityID_155("STRING_1955735627");
    noLegs_0_1.set(LegSecurityID_155);
    InstrumentLeg_155.insert(LegSecurityID_155.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_155("STRING_1642770789");
    noLegs_0_1.set(LegSecurityIDSource_155);
    InstrumentLeg_155.insert(LegSecurityIDSource_155.getString());
    FIX::LegSecuritySubType LegSecuritySubType_155("STRING_1695173516");
    noLegs_0_1.set(LegSecuritySubType_155);
    InstrumentLeg_155.insert(LegSecuritySubType_155.getString());
    FIX::LegSecurityType LegSecurityType_155("STRING_164989895");
    noLegs_0_1.set(LegSecurityType_155);
    InstrumentLeg_155.insert(LegSecurityType_155.getString());
    FIX::LegSide LegSide_155('5');
    noLegs_0_1.set(LegSide_155);
    InstrumentLeg_155.insert(LegSide_155.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_155("STRING_1439525218");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_155);
    InstrumentLeg_155.insert(LegStateOrProvinceOfIssue_155.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_155("JPY");
    noLegs_0_1.set(LegStrikeCurrency_155);
    InstrumentLeg_155.insert(LegStrikeCurrency_155.getString());
    FIX::LegStrikePrice LegStrikePrice_155;
    LegStrikePrice_155.setString("9666987");
    noLegs_0_1.set(LegStrikePrice_155);
    InstrumentLeg_155.insert(LegStrikePrice_155.getString());
    FIX::LegSymbol LegSymbol_155("STRING_951444363");
    noLegs_0_1.set(LegSymbol_155);
    InstrumentLeg_155.insert(LegSymbol_155.getString());
    FIX::LegSymbolSfx LegSymbolSfx_155("STRING_1578165507");
    noLegs_0_1.set(LegSymbolSfx_155);
    InstrumentLeg_155.insert(LegSymbolSfx_155.getString());
    FIX::LegTimeUnit LegTimeUnit_155("STRING_888151941");
    noLegs_0_1.set(LegTimeUnit_155);
    InstrumentLeg_155.insert(LegTimeUnit_155.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_155("STRING_1739612656");
    noLegs_0_1.set(LegUnitOfMeasure_155);
    InstrumentLeg_155.insert(LegUnitOfMeasure_155.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_155;
    LegUnitOfMeasureQty_155.setString("19385983");
    noLegs_0_1.set(LegUnitOfMeasureQty_155);
    InstrumentLeg_155.insert(LegUnitOfMeasureQty_155.getString());
    all_values.push_back(InstrumentLeg_155);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_301;
      FIX::LegSecurityAltID LegSecurityAltID_301("STRING_672922673");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_301);
      LegSecAltIDGrp_NoLegSecurityAltID_301.insert(LegSecurityAltID_301.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_301("STRING_654775949");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_301);
      LegSecAltIDGrp_NoLegSecurityAltID_301.insert(LegSecurityAltIDSource_301.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_301);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_302;
      FIX::LegSecurityAltID LegSecurityAltID_302("STRING_578582339");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_302);
      LegSecAltIDGrp_NoLegSecurityAltID_302.insert(LegSecurityAltID_302.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_302("STRING_1909642333");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_302);
      LegSecAltIDGrp_NoLegSecurityAltID_302.insert(LegSecurityAltIDSource_302.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_302);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_156;
    FIX::EncodedLegIssuer EncodedLegIssuer_156("DATA_551514491");
    noLegs_0_2.set(EncodedLegIssuer_156);
    InstrumentLeg_156.insert(EncodedLegIssuer_156.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_156(53550281);
    noLegs_0_2.set(EncodedLegIssuerLen_156);
    InstrumentLeg_156.insert(EncodedLegIssuerLen_156.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_156("DATA_508051398");
    noLegs_0_2.set(EncodedLegSecurityDesc_156);
    InstrumentLeg_156.insert(EncodedLegSecurityDesc_156.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_156(271298973);
    noLegs_0_2.set(EncodedLegSecurityDescLen_156);
    InstrumentLeg_156.insert(EncodedLegSecurityDescLen_156.getString());
    FIX::LegCFICode LegCFICode_156("STRING_85304061");
    noLegs_0_2.set(LegCFICode_156);
    InstrumentLeg_156.insert(LegCFICode_156.getString());
    FIX::LegContractMultiplier LegContractMultiplier_156;
    LegContractMultiplier_156.setString("14571707");
    noLegs_0_2.set(LegContractMultiplier_156);
    InstrumentLeg_156.insert(LegContractMultiplier_156.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_156(912160751);
    noLegs_0_2.set(LegContractMultiplierUnit_156);
    InstrumentLeg_156.insert(LegContractMultiplierUnit_156.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_156("MONTHYEAR_348688202");
    noLegs_0_2.set(LegContractSettlMonth_156);
    InstrumentLeg_156.insert(LegContractSettlMonth_156.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_156("COUNTRY_1976299322");
    noLegs_0_2.set(LegCountryOfIssue_156);
    InstrumentLeg_156.insert(LegCountryOfIssue_156.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_156("LOCALMKTDATE_875764726");
    noLegs_0_2.set(LegCouponPaymentDate_156);
    InstrumentLeg_156.insert(LegCouponPaymentDate_156.getString());
    FIX::LegCouponRate LegCouponRate_156;
    LegCouponRate_156.setString("6.960000");
    noLegs_0_2.set(LegCouponRate_156);
    InstrumentLeg_156.insert(LegCouponRate_156.getString());
    FIX::LegCreditRating LegCreditRating_156("STRING_1827198279");
    noLegs_0_2.set(LegCreditRating_156);
    InstrumentLeg_156.insert(LegCreditRating_156.getString());
    FIX::LegCurrency LegCurrency_156("USD");
    noLegs_0_2.set(LegCurrency_156);
    InstrumentLeg_156.insert(LegCurrency_156.getString());
    FIX::LegDatedDate LegDatedDate_156("LOCALMKTDATE_1374888147");
    noLegs_0_2.set(LegDatedDate_156);
    InstrumentLeg_156.insert(LegDatedDate_156.getString());
    FIX::LegExerciseStyle LegExerciseStyle_156(849006600);
    noLegs_0_2.set(LegExerciseStyle_156);
    InstrumentLeg_156.insert(LegExerciseStyle_156.getString());
    FIX::LegFactor LegFactor_156;
    LegFactor_156.setString("10103860");
    noLegs_0_2.set(LegFactor_156);
    InstrumentLeg_156.insert(LegFactor_156.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_156(666929718);
    noLegs_0_2.set(LegFlowScheduleType_156);
    InstrumentLeg_156.insert(LegFlowScheduleType_156.getString());
    FIX::LegInstrRegistry LegInstrRegistry_156("STRING_553114230");
    noLegs_0_2.set(LegInstrRegistry_156);
    InstrumentLeg_156.insert(LegInstrRegistry_156.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_156("LOCALMKTDATE_1159919505");
    noLegs_0_2.set(LegInterestAccrualDate_156);
    InstrumentLeg_156.insert(LegInterestAccrualDate_156.getString());
    FIX::LegIssueDate LegIssueDate_156("LOCALMKTDATE_1633628487");
    noLegs_0_2.set(LegIssueDate_156);
    InstrumentLeg_156.insert(LegIssueDate_156.getString());
    FIX::LegIssuer LegIssuer_156("STRING_1504558593");
    noLegs_0_2.set(LegIssuer_156);
    InstrumentLeg_156.insert(LegIssuer_156.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_156("STRING_590601364");
    noLegs_0_2.set(LegLocaleOfIssue_156);
    InstrumentLeg_156.insert(LegLocaleOfIssue_156.getString());
    FIX::LegMaturityDate LegMaturityDate_156("LOCALMKTDATE_374296781");
    noLegs_0_2.set(LegMaturityDate_156);
    InstrumentLeg_156.insert(LegMaturityDate_156.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_156("MONTHYEAR_1096687602");
    noLegs_0_2.set(LegMaturityMonthYear_156);
    InstrumentLeg_156.insert(LegMaturityMonthYear_156.getString());
    FIX::LegMaturityTime LegMaturityTime_156("TZTIMEONLY_381716054");
    noLegs_0_2.set(LegMaturityTime_156);
    InstrumentLeg_156.insert(LegMaturityTime_156.getString());
    FIX::LegOptAttribute LegOptAttribute_156('1');
    noLegs_0_2.set(LegOptAttribute_156);
    InstrumentLeg_156.insert(LegOptAttribute_156.getString());
    FIX::LegOptionRatio LegOptionRatio_156;
    LegOptionRatio_156.setString("17696102");
    noLegs_0_2.set(LegOptionRatio_156);
    InstrumentLeg_156.insert(LegOptionRatio_156.getString());
    FIX::LegPool LegPool_156("STRING_1036492004");
    noLegs_0_2.set(LegPool_156);
    InstrumentLeg_156.insert(LegPool_156.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_156("STRING_37330653");
    noLegs_0_2.set(LegPriceUnitOfMeasure_156);
    InstrumentLeg_156.insert(LegPriceUnitOfMeasure_156.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_156;
    LegPriceUnitOfMeasureQty_156.setString("15317689");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_156);
    InstrumentLeg_156.insert(LegPriceUnitOfMeasureQty_156.getString());
    FIX::LegProduct LegProduct_156(1588006495);
    noLegs_0_2.set(LegProduct_156);
    InstrumentLeg_156.insert(LegProduct_156.getString());
    FIX::LegPutOrCall LegPutOrCall_156(90880934);
    noLegs_0_2.set(LegPutOrCall_156);
    InstrumentLeg_156.insert(LegPutOrCall_156.getString());
    FIX::LegRatioQty LegRatioQty_156;
    LegRatioQty_156.setString("20398203");
    noLegs_0_2.set(LegRatioQty_156);
    InstrumentLeg_156.insert(LegRatioQty_156.getString());
    FIX::LegRedemptionDate LegRedemptionDate_156("LOCALMKTDATE_1859305468");
    noLegs_0_2.set(LegRedemptionDate_156);
    InstrumentLeg_156.insert(LegRedemptionDate_156.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_156("STRING_176184995");
    noLegs_0_2.set(LegRepoCollateralSecurityType_156);
    InstrumentLeg_156.insert(LegRepoCollateralSecurityType_156.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_156;
    LegRepurchaseRate_156.setString("74.220000");
    noLegs_0_2.set(LegRepurchaseRate_156);
    InstrumentLeg_156.insert(LegRepurchaseRate_156.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_156(623982571);
    noLegs_0_2.set(LegRepurchaseTerm_156);
    InstrumentLeg_156.insert(LegRepurchaseTerm_156.getString());
    FIX::LegSecurityDesc LegSecurityDesc_156("STRING_524873197");
    noLegs_0_2.set(LegSecurityDesc_156);
    InstrumentLeg_156.insert(LegSecurityDesc_156.getString());
    FIX::LegSecurityExchange LegSecurityExchange_156("EXCHANGE_1178323097");
    noLegs_0_2.set(LegSecurityExchange_156);
    InstrumentLeg_156.insert(LegSecurityExchange_156.getString());
    FIX::LegSecurityID LegSecurityID_156("STRING_1499747298");
    noLegs_0_2.set(LegSecurityID_156);
    InstrumentLeg_156.insert(LegSecurityID_156.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_156("STRING_1455873894");
    noLegs_0_2.set(LegSecurityIDSource_156);
    InstrumentLeg_156.insert(LegSecurityIDSource_156.getString());
    FIX::LegSecuritySubType LegSecuritySubType_156("STRING_858037728");
    noLegs_0_2.set(LegSecuritySubType_156);
    InstrumentLeg_156.insert(LegSecuritySubType_156.getString());
    FIX::LegSecurityType LegSecurityType_156("STRING_36280355");
    noLegs_0_2.set(LegSecurityType_156);
    InstrumentLeg_156.insert(LegSecurityType_156.getString());
    FIX::LegSide LegSide_156('1');
    noLegs_0_2.set(LegSide_156);
    InstrumentLeg_156.insert(LegSide_156.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_156("STRING_85442228");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_156);
    InstrumentLeg_156.insert(LegStateOrProvinceOfIssue_156.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_156("CHF");
    noLegs_0_2.set(LegStrikeCurrency_156);
    InstrumentLeg_156.insert(LegStrikeCurrency_156.getString());
    FIX::LegStrikePrice LegStrikePrice_156;
    LegStrikePrice_156.setString("7523719");
    noLegs_0_2.set(LegStrikePrice_156);
    InstrumentLeg_156.insert(LegStrikePrice_156.getString());
    FIX::LegSymbol LegSymbol_156("STRING_1438401186");
    noLegs_0_2.set(LegSymbol_156);
    InstrumentLeg_156.insert(LegSymbol_156.getString());
    FIX::LegSymbolSfx LegSymbolSfx_156("STRING_1904983620");
    noLegs_0_2.set(LegSymbolSfx_156);
    InstrumentLeg_156.insert(LegSymbolSfx_156.getString());
    FIX::LegTimeUnit LegTimeUnit_156("STRING_238516785");
    noLegs_0_2.set(LegTimeUnit_156);
    InstrumentLeg_156.insert(LegTimeUnit_156.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_156("STRING_795476131");
    noLegs_0_2.set(LegUnitOfMeasure_156);
    InstrumentLeg_156.insert(LegUnitOfMeasure_156.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_156;
    LegUnitOfMeasureQty_156.setString("3481013");
    noLegs_0_2.set(LegUnitOfMeasureQty_156);
    InstrumentLeg_156.insert(LegUnitOfMeasureQty_156.getString());
    all_values.push_back(InstrumentLeg_156);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_303;
      FIX::LegSecurityAltID LegSecurityAltID_303("STRING_1892163733");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_303);
      LegSecAltIDGrp_NoLegSecurityAltID_303.insert(LegSecurityAltID_303.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_303("STRING_729817391");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_303);
      LegSecAltIDGrp_NoLegSecurityAltID_303.insert(LegSecurityAltIDSource_303.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_303);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_304;
      FIX::LegSecurityAltID LegSecurityAltID_304("STRING_71561881");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_304);
      LegSecAltIDGrp_NoLegSecurityAltID_304.insert(LegSecurityAltID_304.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_304("STRING_1514290361");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_304);
      LegSecAltIDGrp_NoLegSecurityAltID_304.insert(LegSecurityAltIDSource_304.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_304);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_305;
      FIX::LegSecurityAltID LegSecurityAltID_305("STRING_1766309395");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_305);
      LegSecAltIDGrp_NoLegSecurityAltID_305.insert(LegSecurityAltID_305.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_305("STRING_108892534");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_305);
      LegSecAltIDGrp_NoLegSecurityAltID_305.insert(LegSecurityAltIDSource_305.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_305);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_103;
  FIX::AttachmentPoint AttachmentPoint_103;
  AttachmentPoint_103.setString("56.740000");
  msg.set(AttachmentPoint_103);
  Instrument_103.insert(AttachmentPoint_103.getString());
  FIX::CFICode CFICode_108("STRING_1206832242");
  msg.set(CFICode_108);
  Instrument_103.insert(CFICode_108.getString());
  FIX::CPProgram CPProgram_103(2);
  msg.set(CPProgram_103);
  Instrument_103.insert(CPProgram_103.getString());
  FIX::CPRegType CPRegType_103("STRING_790912385");
  msg.set(CPRegType_103);
  Instrument_103.insert(CPRegType_103.getString());
  FIX::CapPrice CapPrice_103;
  CapPrice_103.setString("9186540");
  msg.set(CapPrice_103);
  Instrument_103.insert(CapPrice_103.getString());
  FIX::ContractMultiplier ContractMultiplier_103;
  ContractMultiplier_103.setString("3759584");
  msg.set(ContractMultiplier_103);
  Instrument_103.insert(ContractMultiplier_103.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_103(0);
  msg.set(ContractMultiplierUnit_103);
  Instrument_103.insert(ContractMultiplierUnit_103.getString());
  FIX::ContractSettlMonth ContractSettlMonth_103("MONTHYEAR_1542636634");
  msg.set(ContractSettlMonth_103);
  Instrument_103.insert(ContractSettlMonth_103.getString());
  FIX::CountryOfIssue CountryOfIssue_103("COUNTRY_900831662");
  msg.set(CountryOfIssue_103);
  Instrument_103.insert(CountryOfIssue_103.getString());
  FIX::CouponPaymentDate CouponPaymentDate_103("LOCALMKTDATE_1171259256");
  msg.set(CouponPaymentDate_103);
  Instrument_103.insert(CouponPaymentDate_103.getString());
  FIX::CouponRate CouponRate_103;
  CouponRate_103.setString("2.840000");
  msg.set(CouponRate_103);
  Instrument_103.insert(CouponRate_103.getString());
  FIX::CreditRating CreditRating_103("STRING_209221908");
  msg.set(CreditRating_103);
  Instrument_103.insert(CreditRating_103.getString());
  FIX::DatedDate DatedDate_103("LOCALMKTDATE_2029296985");
  msg.set(DatedDate_103);
  Instrument_103.insert(DatedDate_103.getString());
  FIX::DetachmentPoint DetachmentPoint_103;
  DetachmentPoint_103.setString("6.390000");
  msg.set(DetachmentPoint_103);
  Instrument_103.insert(DetachmentPoint_103.getString());
  FIX::EncodedIssuer EncodedIssuer_103("DATA_2091383640");
  msg.set(EncodedIssuer_103);
  Instrument_103.insert(EncodedIssuer_103.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_103(2114739213);
  msg.set(EncodedIssuerLen_103);
  Instrument_103.insert(EncodedIssuerLen_103.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_103("DATA_1816467595");
  msg.set(EncodedSecurityDesc_103);
  Instrument_103.insert(EncodedSecurityDesc_103.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_103(688964107);
  msg.set(EncodedSecurityDescLen_103);
  Instrument_103.insert(EncodedSecurityDescLen_103.getString());
  FIX::ExerciseStyle ExerciseStyle_103(0);
  msg.set(ExerciseStyle_103);
  Instrument_103.insert(ExerciseStyle_103.getString());
  FIX::Factor Factor_103;
  Factor_103.setString("11073851");
  msg.set(Factor_103);
  Instrument_103.insert(Factor_103.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_103(false);
  msg.set(FlexProductEligibilityIndicator_103);
  Instrument_103.insert(FlexProductEligibilityIndicator_103.getString());
  FIX::FlexibleIndicator FlexibleIndicator_103(true);
  msg.set(FlexibleIndicator_103);
  Instrument_103.insert(FlexibleIndicator_103.getString());
  FIX::FloorPrice FloorPrice_103;
  FloorPrice_103.setString("19028612");
  msg.set(FloorPrice_103);
  Instrument_103.insert(FloorPrice_103.getString());
  FIX::FlowScheduleType FlowScheduleType_103(1);
  msg.set(FlowScheduleType_103);
  Instrument_103.insert(FlowScheduleType_103.getString());
  FIX::InstrRegistry InstrRegistry_103("STRING_1570957863");
  msg.set(InstrRegistry_103);
  Instrument_103.insert(InstrRegistry_103.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_103('1');
  msg.set(InstrmtAssignmentMethod_103);
  Instrument_103.insert(InstrmtAssignmentMethod_103.getString());
  FIX::InterestAccrualDate InterestAccrualDate_103("LOCALMKTDATE_1524382808");
  msg.set(InterestAccrualDate_103);
  Instrument_103.insert(InterestAccrualDate_103.getString());
  FIX::IssueDate IssueDate_103("LOCALMKTDATE_1642519744");
  msg.set(IssueDate_103);
  Instrument_103.insert(IssueDate_103.getString());
  FIX::Issuer Issuer_103("STRING_1014348063");
  msg.set(Issuer_103);
  Instrument_103.insert(Issuer_103.getString());
  FIX::ListMethod ListMethod_103(1);
  msg.set(ListMethod_103);
  Instrument_103.insert(ListMethod_103.getString());
  FIX::LocaleOfIssue LocaleOfIssue_103("STRING_1751412278");
  msg.set(LocaleOfIssue_103);
  Instrument_103.insert(LocaleOfIssue_103.getString());
  FIX::MaturityDate MaturityDate_103("LOCALMKTDATE_1912923737");
  msg.set(MaturityDate_103);
  Instrument_103.insert(MaturityDate_103.getString());
  FIX::MaturityMonthYear MaturityMonthYear_103("MONTHYEAR_202557150");
  msg.set(MaturityMonthYear_103);
  Instrument_103.insert(MaturityMonthYear_103.getString());
  FIX::MaturityTime MaturityTime_103("TZTIMEONLY_1951185747");
  msg.set(MaturityTime_103);
  Instrument_103.insert(MaturityTime_103.getString());
  FIX::MinPriceIncrement MinPriceIncrement_103;
  MinPriceIncrement_103.setString("5563524");
  msg.set(MinPriceIncrement_103);
  Instrument_103.insert(MinPriceIncrement_103.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_103;
  MinPriceIncrementAmount_103.setString("11212112");
  msg.set(MinPriceIncrementAmount_103);
  Instrument_103.insert(MinPriceIncrementAmount_103.getString());
  FIX::NTPositionLimit NTPositionLimit_103(179660564);
  msg.set(NTPositionLimit_103);
  Instrument_103.insert(NTPositionLimit_103.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_103;
  NotionalPercentageOutstanding_103.setString("86.340000");
  msg.set(NotionalPercentageOutstanding_103);
  Instrument_103.insert(NotionalPercentageOutstanding_103.getString());
  FIX::OptAttribute OptAttribute_103('5');
  msg.set(OptAttribute_103);
  Instrument_103.insert(OptAttribute_103.getString());
  FIX::OptPayoutAmount OptPayoutAmount_103;
  OptPayoutAmount_103.setString("10804922");
  msg.set(OptPayoutAmount_103);
  Instrument_103.insert(OptPayoutAmount_103.getString());
  FIX::OptPayoutType OptPayoutType_103(2);
  msg.set(OptPayoutType_103);
  Instrument_103.insert(OptPayoutType_103.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_103;
  OriginalNotionalPercentageOutstanding_103.setString("44.820000");
  msg.set(OriginalNotionalPercentageOutstanding_103);
  Instrument_103.insert(OriginalNotionalPercentageOutstanding_103.getString());
  FIX::Pool Pool_103("STRING_1289714134");
  msg.set(Pool_103);
  Instrument_103.insert(Pool_103.getString());
  FIX::PositionLimit PositionLimit_103(1602361227);
  msg.set(PositionLimit_103);
  Instrument_103.insert(PositionLimit_103.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_103("STRING_INT");
  msg.set(PriceQuoteMethod_103);
  Instrument_103.insert(PriceQuoteMethod_103.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_103("STRING_1233614126");
  msg.set(PriceUnitOfMeasure_103);
  Instrument_103.insert(PriceUnitOfMeasure_103.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_103;
  PriceUnitOfMeasureQty_103.setString("15696167");
  msg.set(PriceUnitOfMeasureQty_103);
  Instrument_103.insert(PriceUnitOfMeasureQty_103.getString());
  FIX::Product Product_111(1);
  msg.set(Product_111);
  Instrument_103.insert(Product_111.getString());
  FIX::ProductComplex ProductComplex_103("STRING_1922578233");
  msg.set(ProductComplex_103);
  Instrument_103.insert(ProductComplex_103.getString());
  FIX::PutOrCall PutOrCall_103(1);
  msg.set(PutOrCall_103);
  Instrument_103.insert(PutOrCall_103.getString());
  FIX::RedemptionDate RedemptionDate_103("LOCALMKTDATE_971330555");
  msg.set(RedemptionDate_103);
  Instrument_103.insert(RedemptionDate_103.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_103("STRING_221558664");
  msg.set(RepoCollateralSecurityType_103);
  Instrument_103.insert(RepoCollateralSecurityType_103.getString());
  FIX::RepurchaseRate RepurchaseRate_103;
  RepurchaseRate_103.setString("49.520000");
  msg.set(RepurchaseRate_103);
  Instrument_103.insert(RepurchaseRate_103.getString());
  FIX::RepurchaseTerm RepurchaseTerm_103(726708172);
  msg.set(RepurchaseTerm_103);
  Instrument_103.insert(RepurchaseTerm_103.getString());
  FIX::RestructuringType RestructuringType_103("STRING_MR");
  msg.set(RestructuringType_103);
  Instrument_103.insert(RestructuringType_103.getString());
  FIX::SecurityDesc SecurityDesc_103("STRING_523379167");
  msg.set(SecurityDesc_103);
  Instrument_103.insert(SecurityDesc_103.getString());
  FIX::SecurityExchange SecurityExchange_103("EXCHANGE_226765874");
  msg.set(SecurityExchange_103);
  Instrument_103.insert(SecurityExchange_103.getString());
  FIX::SecurityGroup SecurityGroup_103("STRING_393023241");
  msg.set(SecurityGroup_103);
  Instrument_103.insert(SecurityGroup_103.getString());
  FIX::SecurityID SecurityID_103("STRING_18415263");
  msg.set(SecurityID_103);
  Instrument_103.insert(SecurityID_103.getString());
  FIX::SecurityIDSource SecurityIDSource_103("STRING_L");
  msg.set(SecurityIDSource_103);
  Instrument_103.insert(SecurityIDSource_103.getString());
  FIX::SecurityStatus SecurityStatus_104("STRING_1");
  msg.set(SecurityStatus_104);
  Instrument_103.insert(SecurityStatus_104.getString());
  FIX::SecuritySubType SecuritySubType_107("STRING_1769827541");
  msg.set(SecuritySubType_107);
  Instrument_103.insert(SecuritySubType_107.getString());
  FIX::SecurityType SecurityType_111("STRING_TAXA");
  msg.set(SecurityType_111);
  Instrument_103.insert(SecurityType_111.getString());
  FIX::Seniority Seniority_103("STRING_SR");
  msg.set(Seniority_103);
  Instrument_103.insert(Seniority_103.getString());
  FIX::SettlMethod SettlMethod_103('P');
  msg.set(SettlMethod_103);
  Instrument_103.insert(SettlMethod_103.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_103("STRING_1562906502");
  msg.set(SettleOnOpenFlag_103);
  Instrument_103.insert(SettleOnOpenFlag_103.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_103("STRING_712516511");
  msg.set(StateOrProvinceOfIssue_103);
  Instrument_103.insert(StateOrProvinceOfIssue_103.getString());
  FIX::StrikeCurrency StrikeCurrency_103("JPY");
  msg.set(StrikeCurrency_103);
  Instrument_103.insert(StrikeCurrency_103.getString());
  FIX::StrikeMultiplier StrikeMultiplier_103;
  StrikeMultiplier_103.setString("12288807");
  msg.set(StrikeMultiplier_103);
  Instrument_103.insert(StrikeMultiplier_103.getString());
  FIX::StrikePrice StrikePrice_103;
  StrikePrice_103.setString("6861987");
  msg.set(StrikePrice_103);
  Instrument_103.insert(StrikePrice_103.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_103(4);
  msg.set(StrikePriceBoundaryMethod_103);
  Instrument_103.insert(StrikePriceBoundaryMethod_103.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_103;
  StrikePriceBoundaryPrecision_103.setString("15.440000");
  msg.set(StrikePriceBoundaryPrecision_103);
  Instrument_103.insert(StrikePriceBoundaryPrecision_103.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_103(2);
  msg.set(StrikePriceDeterminationMethod_103);
  Instrument_103.insert(StrikePriceDeterminationMethod_103.getString());
  FIX::StrikeValue StrikeValue_103;
  StrikeValue_103.setString("11401369");
  msg.set(StrikeValue_103);
  Instrument_103.insert(StrikeValue_103.getString());
  FIX::Symbol Symbol_103("STRING_687623018");
  msg.set(Symbol_103);
  Instrument_103.insert(Symbol_103.getString());
  FIX::SymbolSfx SymbolSfx_103("STRING_WI");
  msg.set(SymbolSfx_103);
  Instrument_103.insert(SymbolSfx_103.getString());
  FIX::TimeUnit TimeUnit_103("STRING_S");
  msg.set(TimeUnit_103);
  Instrument_103.insert(TimeUnit_103.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_103(4);
  msg.set(UnderlyingPriceDeterminationMethod_103);
  Instrument_103.insert(UnderlyingPriceDeterminationMethod_103.getString());
  FIX::UnitOfMeasure UnitOfMeasure_103("STRING_MWh");
  msg.set(UnitOfMeasure_103);
  Instrument_103.insert(UnitOfMeasure_103.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_103;
  UnitOfMeasureQty_103.setString("7040307");
  msg.set(UnitOfMeasureQty_103);
  Instrument_103.insert(UnitOfMeasureQty_103.getString());
  FIX::ValuationMethod ValuationMethod_103("STRING_CDSD");
  msg.set(ValuationMethod_103);
  Instrument_103.insert(ValuationMethod_103.getString());
  all_values.push_back(Instrument_103);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_204;
    FIX::ComplexEventCondition ComplexEventCondition_204(1);
    noComplexEvents_0_0.set(ComplexEventCondition_204);
    ComplexEvents_NoComplexEvents_204.insert(ComplexEventCondition_204.getString());
    FIX::ComplexEventPrice ComplexEventPrice_204;
    ComplexEventPrice_204.setString("1021235");
    noComplexEvents_0_0.set(ComplexEventPrice_204);
    ComplexEvents_NoComplexEvents_204.insert(ComplexEventPrice_204.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_204(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_204);
    ComplexEvents_NoComplexEvents_204.insert(ComplexEventPriceBoundaryMethod_204.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_204;
    ComplexEventPriceBoundaryPrecision_204.setString("12.290000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_204);
    ComplexEvents_NoComplexEvents_204.insert(ComplexEventPriceBoundaryPrecision_204.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_204(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_204);
    ComplexEvents_NoComplexEvents_204.insert(ComplexEventPriceTimeType_204.getString());
    FIX::ComplexEventType ComplexEventType_204(9);
    noComplexEvents_0_0.set(ComplexEventType_204);
    ComplexEvents_NoComplexEvents_204.insert(ComplexEventType_204.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_204;
    ComplexOptPayoutAmount_204.setString("1982464");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_204);
    ComplexEvents_NoComplexEvents_204.insert(ComplexOptPayoutAmount_204.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_204);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_410;
      FIX::ComplexEventEndDate ComplexEventEndDate_410(FIX::UTCTIMESTAMP(17, 30, 33, 26, 1, 2012));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_410);
      ComplexEventDates_NoComplexEventDates_410.insert(ComplexEventEndDate_410.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_410(FIX::UTCTIMESTAMP(20, 46, 46, 23, 7, 2011));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_410);
      ComplexEventDates_NoComplexEventDates_410.insert(ComplexEventStartDate_410.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_410);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_829;
        FIX::ComplexEventEndTime ComplexEventEndTime_829(FIX::UTCTIMEONLY(6, 23, 19));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_829);
        ComplexEventTimes_NoComplexEventTimes_829.insert(ComplexEventEndTime_829.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_829(FIX::UTCTIMEONLY(9, 6, 19));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_829);
        ComplexEventTimes_NoComplexEventTimes_829.insert(ComplexEventStartTime_829.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_829);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_830;
        FIX::ComplexEventEndTime ComplexEventEndTime_830(FIX::UTCTIMEONLY(20, 36, 32));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_830);
        ComplexEventTimes_NoComplexEventTimes_830.insert(ComplexEventEndTime_830.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_830(FIX::UTCTIMEONLY(3, 44, 40));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_830);
        ComplexEventTimes_NoComplexEventTimes_830.insert(ComplexEventStartTime_830.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_830);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_411;
      FIX::ComplexEventEndDate ComplexEventEndDate_411(FIX::UTCTIMESTAMP(18, 11, 35, 20, 4, 2012));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_411);
      ComplexEventDates_NoComplexEventDates_411.insert(ComplexEventEndDate_411.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_411(FIX::UTCTIMESTAMP(16, 50, 10, 23, 1, 2014));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_411);
      ComplexEventDates_NoComplexEventDates_411.insert(ComplexEventStartDate_411.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_411);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_831;
        FIX::ComplexEventEndTime ComplexEventEndTime_831(FIX::UTCTIMEONLY(20, 15, 31));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_831);
        ComplexEventTimes_NoComplexEventTimes_831.insert(ComplexEventEndTime_831.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_831(FIX::UTCTIMEONLY(17, 37, 54));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_831);
        ComplexEventTimes_NoComplexEventTimes_831.insert(ComplexEventStartTime_831.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_831);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_412;
      FIX::ComplexEventEndDate ComplexEventEndDate_412(FIX::UTCTIMESTAMP(22, 30, 17, 3, 10, 2011));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_412);
      ComplexEventDates_NoComplexEventDates_412.insert(ComplexEventEndDate_412.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_412(FIX::UTCTIMESTAMP(11, 15, 43, 15, 1, 2004));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_412);
      ComplexEventDates_NoComplexEventDates_412.insert(ComplexEventStartDate_412.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_412);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_832;
        FIX::ComplexEventEndTime ComplexEventEndTime_832(FIX::UTCTIMEONLY(14, 9, 50));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_832);
        ComplexEventTimes_NoComplexEventTimes_832.insert(ComplexEventEndTime_832.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_832(FIX::UTCTIMEONLY(21, 28, 9));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_832);
        ComplexEventTimes_NoComplexEventTimes_832.insert(ComplexEventStartTime_832.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_832);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_833;
        FIX::ComplexEventEndTime ComplexEventEndTime_833(FIX::UTCTIMEONLY(5, 25, 56));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_833);
        ComplexEventTimes_NoComplexEventTimes_833.insert(ComplexEventEndTime_833.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_833(FIX::UTCTIMEONLY(10, 26, 10));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_833);
        ComplexEventTimes_NoComplexEventTimes_833.insert(ComplexEventStartTime_833.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_833);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_205;
    FIX::ComplexEventCondition ComplexEventCondition_205(1);
    noComplexEvents_0_1.set(ComplexEventCondition_205);
    ComplexEvents_NoComplexEvents_205.insert(ComplexEventCondition_205.getString());
    FIX::ComplexEventPrice ComplexEventPrice_205;
    ComplexEventPrice_205.setString("20914363");
    noComplexEvents_0_1.set(ComplexEventPrice_205);
    ComplexEvents_NoComplexEvents_205.insert(ComplexEventPrice_205.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_205(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_205);
    ComplexEvents_NoComplexEvents_205.insert(ComplexEventPriceBoundaryMethod_205.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_205;
    ComplexEventPriceBoundaryPrecision_205.setString("72.070000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_205);
    ComplexEvents_NoComplexEvents_205.insert(ComplexEventPriceBoundaryPrecision_205.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_205(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_205);
    ComplexEvents_NoComplexEvents_205.insert(ComplexEventPriceTimeType_205.getString());
    FIX::ComplexEventType ComplexEventType_205(1);
    noComplexEvents_0_1.set(ComplexEventType_205);
    ComplexEvents_NoComplexEvents_205.insert(ComplexEventType_205.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_205;
    ComplexOptPayoutAmount_205.setString("6732261");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_205);
    ComplexEvents_NoComplexEvents_205.insert(ComplexOptPayoutAmount_205.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_205);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_413;
      FIX::ComplexEventEndDate ComplexEventEndDate_413(FIX::UTCTIMESTAMP(12, 46, 12, 4, 2, 2001));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_413);
      ComplexEventDates_NoComplexEventDates_413.insert(ComplexEventEndDate_413.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_413(FIX::UTCTIMESTAMP(15, 40, 43, 13, 2, 2003));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_413);
      ComplexEventDates_NoComplexEventDates_413.insert(ComplexEventStartDate_413.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_413);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_834;
        FIX::ComplexEventEndTime ComplexEventEndTime_834(FIX::UTCTIMEONLY(8, 39, 23));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_834);
        ComplexEventTimes_NoComplexEventTimes_834.insert(ComplexEventEndTime_834.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_834(FIX::UTCTIMEONLY(1, 41, 2));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_834);
        ComplexEventTimes_NoComplexEventTimes_834.insert(ComplexEventStartTime_834.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_834);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_835;
        FIX::ComplexEventEndTime ComplexEventEndTime_835(FIX::UTCTIMEONLY(17, 35, 35));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_835);
        ComplexEventTimes_NoComplexEventTimes_835.insert(ComplexEventEndTime_835.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_835(FIX::UTCTIMEONLY(5, 8, 56));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_835);
        ComplexEventTimes_NoComplexEventTimes_835.insert(ComplexEventStartTime_835.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_835);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_205;
    FIX::EventDate EventDate_205("LOCALMKTDATE_1234471669");
    noEvents_0_0.set(EventDate_205);
    EvntGrp_NoEvents_205.insert(EventDate_205.getString());
    FIX::EventPx EventPx_205;
    EventPx_205.setString("5032616");
    noEvents_0_0.set(EventPx_205);
    EvntGrp_NoEvents_205.insert(EventPx_205.getString());
    FIX::EventText EventText_205("STRING_2107288871");
    noEvents_0_0.set(EventText_205);
    EvntGrp_NoEvents_205.insert(EventText_205.getString());
    FIX::EventTime EventTime_205(FIX::UTCTIMESTAMP(23, 34, 38, 3, 4, 2001));
    noEvents_0_0.set(EventTime_205);
    EvntGrp_NoEvents_205.insert(EventTime_205.getString());
    FIX::EventType EventType_205(1);
    noEvents_0_0.set(EventType_205);
    EvntGrp_NoEvents_205.insert(EventType_205.getString());
    all_values.push_back(EvntGrp_NoEvents_205);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_206;
    FIX::EventDate EventDate_206("LOCALMKTDATE_437060288");
    noEvents_0_1.set(EventDate_206);
    EvntGrp_NoEvents_206.insert(EventDate_206.getString());
    FIX::EventPx EventPx_206;
    EventPx_206.setString("1765705");
    noEvents_0_1.set(EventPx_206);
    EvntGrp_NoEvents_206.insert(EventPx_206.getString());
    FIX::EventText EventText_206("STRING_1497486394");
    noEvents_0_1.set(EventText_206);
    EvntGrp_NoEvents_206.insert(EventText_206.getString());
    FIX::EventTime EventTime_206(FIX::UTCTIMESTAMP(5, 6, 50, 1, 12, 2001));
    noEvents_0_1.set(EventTime_206);
    EvntGrp_NoEvents_206.insert(EventTime_206.getString());
    FIX::EventType EventType_206(9);
    noEvents_0_1.set(EventType_206);
    EvntGrp_NoEvents_206.insert(EventType_206.getString());
    all_values.push_back(EvntGrp_NoEvents_206);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_216;
    FIX::InstrumentPartyID InstrumentPartyID_216("STRING_1412930872");
    noInstrumentParties_0_0.set(InstrumentPartyID_216);
    InstrumentParties_NoInstrumentParties_216.insert(InstrumentPartyID_216.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_216('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_216);
    InstrumentParties_NoInstrumentParties_216.insert(InstrumentPartyIDSource_216.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_216(1438847027);
    noInstrumentParties_0_0.set(InstrumentPartyRole_216);
    InstrumentParties_NoInstrumentParties_216.insert(InstrumentPartyRole_216.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_216);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_424;
      FIX::InstrumentPartySubID InstrumentPartySubID_424("STRING_57469328");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_424);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_424.insert(InstrumentPartySubID_424.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_424(1419131867);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_424);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_424.insert(InstrumentPartySubIDType_424.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_424);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_425;
      FIX::InstrumentPartySubID InstrumentPartySubID_425("STRING_550656512");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_425);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_425.insert(InstrumentPartySubID_425.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_425(2134481706);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_425);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_425.insert(InstrumentPartySubIDType_425.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_425);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_426;
      FIX::InstrumentPartySubID InstrumentPartySubID_426("STRING_506119888");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_426);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_426.insert(InstrumentPartySubID_426.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_426(1053918127);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_426);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_426.insert(InstrumentPartySubIDType_426.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_426);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_217;
    FIX::InstrumentPartyID InstrumentPartyID_217("STRING_2094286929");
    noInstrumentParties_0_1.set(InstrumentPartyID_217);
    InstrumentParties_NoInstrumentParties_217.insert(InstrumentPartyID_217.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_217('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_217);
    InstrumentParties_NoInstrumentParties_217.insert(InstrumentPartyIDSource_217.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_217(138841390);
    noInstrumentParties_0_1.set(InstrumentPartyRole_217);
    InstrumentParties_NoInstrumentParties_217.insert(InstrumentPartyRole_217.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_217);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_427;
      FIX::InstrumentPartySubID InstrumentPartySubID_427("STRING_1452281932");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_427);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_427.insert(InstrumentPartySubID_427.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_427(1326392597);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_427);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_427.insert(InstrumentPartySubIDType_427.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_427);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_428;
      FIX::InstrumentPartySubID InstrumentPartySubID_428("STRING_772979691");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_428);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_428.insert(InstrumentPartySubID_428.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_428(549871317);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_428);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_428.insert(InstrumentPartySubIDType_428.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_428);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_429;
      FIX::InstrumentPartySubID InstrumentPartySubID_429("STRING_1179977489");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_429);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_429.insert(InstrumentPartySubID_429.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_429(1210039979);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_429);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_429.insert(InstrumentPartySubIDType_429.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_429);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_194;
    FIX::SecurityAltID SecurityAltID_194("STRING_529980236");
    noSecurityAltID_0_0.set(SecurityAltID_194);
    SecAltIDGrp_NoSecurityAltID_194.insert(SecurityAltID_194.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_194("STRING_680355746");
    noSecurityAltID_0_0.set(SecurityAltIDSource_194);
    SecAltIDGrp_NoSecurityAltID_194.insert(SecurityAltIDSource_194.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_194);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_195;
    FIX::SecurityAltID SecurityAltID_195("STRING_26798390");
    noSecurityAltID_0_1.set(SecurityAltID_195);
    SecAltIDGrp_NoSecurityAltID_195.insert(SecurityAltID_195.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_195("STRING_1228186982");
    noSecurityAltID_0_1.set(SecurityAltIDSource_195);
    SecAltIDGrp_NoSecurityAltID_195.insert(SecurityAltIDSource_195.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_195);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_196;
    FIX::SecurityAltID SecurityAltID_196("STRING_2109205336");
    noSecurityAltID_0_2.set(SecurityAltID_196);
    SecAltIDGrp_NoSecurityAltID_196.insert(SecurityAltID_196.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_196("STRING_1098913296");
    noSecurityAltID_0_2.set(SecurityAltIDSource_196);
    SecAltIDGrp_NoSecurityAltID_196.insert(SecurityAltIDSource_196.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_196);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_206;
  FIX::SecurityXML SecurityXML_207("XMLDATA_1458756505");
  msg.set(SecurityXML_207);
  FIX::SecurityXMLLen SecurityXMLLen_103(1410635559);
  msg.set(SecurityXMLLen_103);
  FIX::SecurityXMLSchema SecurityXMLSchema_103("STRING_633874096");
  msg.set(SecurityXMLSchema_103);
  SecurityXML_206.insert(SecurityXMLSchema_103.getString());
  all_values.push_back(SecurityXML_206);
  all_compo_names.insert("SecurityXML");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_150;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_150("DATA_676082783");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_150);
    UnderlyingInstrument_150.insert(EncodedUnderlyingIssuer_150.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_150(208003891);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_150);
    UnderlyingInstrument_150.insert(EncodedUnderlyingIssuerLen_150.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_150("DATA_734424556");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_150);
    UnderlyingInstrument_150.insert(EncodedUnderlyingSecurityDesc_150.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_150(217046940);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_150);
    UnderlyingInstrument_150.insert(EncodedUnderlyingSecurityDescLen_150.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_150;
    UnderlyingAdjustedQuantity_150.setString("2654732");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_150);
    UnderlyingInstrument_150.insert(UnderlyingAdjustedQuantity_150.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_150;
    UnderlyingAllocationPercent_150.setString("27.750000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_150);
    UnderlyingInstrument_150.insert(UnderlyingAllocationPercent_150.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_150;
    UnderlyingAttachmentPoint_150.setString("34.520000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_150);
    UnderlyingInstrument_150.insert(UnderlyingAttachmentPoint_150.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_150("STRING_252471277");
    noUnderlyings_0_0.set(UnderlyingCFICode_150);
    UnderlyingInstrument_150.insert(UnderlyingCFICode_150.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_150("STRING_512192664");
    noUnderlyings_0_0.set(UnderlyingCPProgram_150);
    UnderlyingInstrument_150.insert(UnderlyingCPProgram_150.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_150("STRING_1821621579");
    noUnderlyings_0_0.set(UnderlyingCPRegType_150);
    UnderlyingInstrument_150.insert(UnderlyingCPRegType_150.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_150;
    UnderlyingCapValue_150.setString("1992745");
    noUnderlyings_0_0.set(UnderlyingCapValue_150);
    UnderlyingInstrument_150.insert(UnderlyingCapValue_150.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_150;
    UnderlyingCashAmount_150.setString("6481425");
    noUnderlyings_0_0.set(UnderlyingCashAmount_150);
    UnderlyingInstrument_150.insert(UnderlyingCashAmount_150.getString());
    FIX::UnderlyingCashType UnderlyingCashType_150("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_150);
    UnderlyingInstrument_150.insert(UnderlyingCashType_150.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_150;
    UnderlyingContractMultiplier_150.setString("1677621");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_150);
    UnderlyingInstrument_150.insert(UnderlyingContractMultiplier_150.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_150(2100424530);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_150);
    UnderlyingInstrument_150.insert(UnderlyingContractMultiplierUnit_150.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_150("COUNTRY_1139371919");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_150);
    UnderlyingInstrument_150.insert(UnderlyingCountryOfIssue_150.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_150("LOCALMKTDATE_940741806");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_150);
    UnderlyingInstrument_150.insert(UnderlyingCouponPaymentDate_150.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_150;
    UnderlyingCouponRate_150.setString("21.990000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_150);
    UnderlyingInstrument_150.insert(UnderlyingCouponRate_150.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_150("STRING_171865761");
    noUnderlyings_0_0.set(UnderlyingCreditRating_150);
    UnderlyingInstrument_150.insert(UnderlyingCreditRating_150.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_150("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_150);
    UnderlyingInstrument_150.insert(UnderlyingCurrency_150.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_150;
    UnderlyingCurrentValue_150.setString("7018459");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_150);
    UnderlyingInstrument_150.insert(UnderlyingCurrentValue_150.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_150;
    UnderlyingDetachmentPoint_150.setString("38.840000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_150);
    UnderlyingInstrument_150.insert(UnderlyingDetachmentPoint_150.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_150;
    UnderlyingDirtyPrice_150.setString("12560524");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_150);
    UnderlyingInstrument_150.insert(UnderlyingDirtyPrice_150.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_150;
    UnderlyingEndPrice_150.setString("19300329");
    noUnderlyings_0_0.set(UnderlyingEndPrice_150);
    UnderlyingInstrument_150.insert(UnderlyingEndPrice_150.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_150;
    UnderlyingEndValue_150.setString("6453755");
    noUnderlyings_0_0.set(UnderlyingEndValue_150);
    UnderlyingInstrument_150.insert(UnderlyingEndValue_150.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_150(207482143);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_150);
    UnderlyingInstrument_150.insert(UnderlyingExerciseStyle_150.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_150;
    UnderlyingFXRate_150.setString("12413058");
    noUnderlyings_0_0.set(UnderlyingFXRate_150);
    UnderlyingInstrument_150.insert(UnderlyingFXRate_150.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_150('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_150);
    UnderlyingInstrument_150.insert(UnderlyingFXRateCalc_150.getString());
    FIX::UnderlyingFactor UnderlyingFactor_150;
    UnderlyingFactor_150.setString("8413562");
    noUnderlyings_0_0.set(UnderlyingFactor_150);
    UnderlyingInstrument_150.insert(UnderlyingFactor_150.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_150(536883365);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_150);
    UnderlyingInstrument_150.insert(UnderlyingFlowScheduleType_150.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_150("STRING_584610267");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_150);
    UnderlyingInstrument_150.insert(UnderlyingInstrRegistry_150.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_150("LOCALMKTDATE_1049360130");
    noUnderlyings_0_0.set(UnderlyingIssueDate_150);
    UnderlyingInstrument_150.insert(UnderlyingIssueDate_150.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_150("STRING_1271307921");
    noUnderlyings_0_0.set(UnderlyingIssuer_150);
    UnderlyingInstrument_150.insert(UnderlyingIssuer_150.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_150("STRING_801657207");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_150);
    UnderlyingInstrument_150.insert(UnderlyingLocaleOfIssue_150.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_150("LOCALMKTDATE_1314833349");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_150);
    UnderlyingInstrument_150.insert(UnderlyingMaturityDate_150.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_150("MONTHYEAR_1277380697");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_150);
    UnderlyingInstrument_150.insert(UnderlyingMaturityMonthYear_150.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_150("TZTIMEONLY_1569360660");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_150);
    UnderlyingInstrument_150.insert(UnderlyingMaturityTime_150.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_150;
    UnderlyingNotionalPercentageOutstanding_150.setString("46.260000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_150);
    UnderlyingInstrument_150.insert(UnderlyingNotionalPercentageOutstanding_150.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_150('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_150);
    UnderlyingInstrument_150.insert(UnderlyingOptAttribute_150.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_150;
    UnderlyingOriginalNotionalPercentageOutstanding_150.setString("85.910000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_150);
    UnderlyingInstrument_150.insert(UnderlyingOriginalNotionalPercentageOutstanding_150.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_150("STRING_1766579185");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_150);
    UnderlyingInstrument_150.insert(UnderlyingPriceUnitOfMeasure_150.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_150;
    UnderlyingPriceUnitOfMeasureQty_150.setString("2902323");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_150);
    UnderlyingInstrument_150.insert(UnderlyingPriceUnitOfMeasureQty_150.getString());
    FIX::UnderlyingProduct UnderlyingProduct_150(1056477913);
    noUnderlyings_0_0.set(UnderlyingProduct_150);
    UnderlyingInstrument_150.insert(UnderlyingProduct_150.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_150(1934341300);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_150);
    UnderlyingInstrument_150.insert(UnderlyingPutOrCall_150.getString());
    FIX::UnderlyingPx UnderlyingPx_150;
    UnderlyingPx_150.setString("2431731");
    noUnderlyings_0_0.set(UnderlyingPx_150);
    UnderlyingInstrument_150.insert(UnderlyingPx_150.getString());
    FIX::UnderlyingQty UnderlyingQty_150;
    UnderlyingQty_150.setString("483661");
    noUnderlyings_0_0.set(UnderlyingQty_150);
    UnderlyingInstrument_150.insert(UnderlyingQty_150.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_150("LOCALMKTDATE_727599458");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_150);
    UnderlyingInstrument_150.insert(UnderlyingRedemptionDate_150.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_150("STRING_745985392");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_150);
    UnderlyingInstrument_150.insert(UnderlyingRepoCollateralSecurityType_150.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_150;
    UnderlyingRepurchaseRate_150.setString("19.460000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_150);
    UnderlyingInstrument_150.insert(UnderlyingRepurchaseRate_150.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_150(730897596);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_150);
    UnderlyingInstrument_150.insert(UnderlyingRepurchaseTerm_150.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_150("STRING_1975239496");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_150);
    UnderlyingInstrument_150.insert(UnderlyingRestructuringType_150.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_150("STRING_922077943");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_150);
    UnderlyingInstrument_150.insert(UnderlyingSecurityDesc_150.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_150("EXCHANGE_1414551480");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_150);
    UnderlyingInstrument_150.insert(UnderlyingSecurityExchange_150.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_150("STRING_1083808343");
    noUnderlyings_0_0.set(UnderlyingSecurityID_150);
    UnderlyingInstrument_150.insert(UnderlyingSecurityID_150.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_150("STRING_704627274");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_150);
    UnderlyingInstrument_150.insert(UnderlyingSecurityIDSource_150.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_150("STRING_2059927052");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_150);
    UnderlyingInstrument_150.insert(UnderlyingSecuritySubType_150.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_150("STRING_1291290486");
    noUnderlyings_0_0.set(UnderlyingSecurityType_150);
    UnderlyingInstrument_150.insert(UnderlyingSecurityType_150.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_150("STRING_1945933110");
    noUnderlyings_0_0.set(UnderlyingSeniority_150);
    UnderlyingInstrument_150.insert(UnderlyingSeniority_150.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_150("STRING_1968454536");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_150);
    UnderlyingInstrument_150.insert(UnderlyingSettlMethod_150.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_150(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_150);
    UnderlyingInstrument_150.insert(UnderlyingSettlementType_150.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_150;
    UnderlyingStartValue_150.setString("3353328");
    noUnderlyings_0_0.set(UnderlyingStartValue_150);
    UnderlyingInstrument_150.insert(UnderlyingStartValue_150.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_150("STRING_405581156");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_150);
    UnderlyingInstrument_150.insert(UnderlyingStateOrProvinceOfIssue_150.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_150("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_150);
    UnderlyingInstrument_150.insert(UnderlyingStrikeCurrency_150.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_150;
    UnderlyingStrikePrice_150.setString("12072383");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_150);
    UnderlyingInstrument_150.insert(UnderlyingStrikePrice_150.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_150("STRING_201872908");
    noUnderlyings_0_0.set(UnderlyingSymbol_150);
    UnderlyingInstrument_150.insert(UnderlyingSymbol_150.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_150("STRING_736537798");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_150);
    UnderlyingInstrument_150.insert(UnderlyingSymbolSfx_150.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_150("STRING_629115375");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_150);
    UnderlyingInstrument_150.insert(UnderlyingTimeUnit_150.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_150("STRING_1769177535");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_150);
    UnderlyingInstrument_150.insert(UnderlyingUnitOfMeasure_150.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_150;
    UnderlyingUnitOfMeasureQty_150.setString("3786275");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_150);
    UnderlyingInstrument_150.insert(UnderlyingUnitOfMeasureQty_150.getString());
    all_values.push_back(UnderlyingInstrument_150);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_302;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_302("STRING_1388273072");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_302);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_302.insert(UnderlyingSecurityAltID_302.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_302("STRING_668859822");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_302);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_302.insert(UnderlyingSecurityAltIDSource_302.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_302);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_303;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_303("STRING_781608232");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_303);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_303.insert(UnderlyingSecurityAltID_303.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_303("STRING_1175130725");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_303);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_303.insert(UnderlyingSecurityAltIDSource_303.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_303);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_304;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_304("STRING_912033015");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_304);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_304.insert(UnderlyingSecurityAltID_304.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_304("STRING_829974417");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_304);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_304.insert(UnderlyingSecurityAltIDSource_304.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_304);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_290;
      FIX::UnderlyingStipType UnderlyingStipType_290("STRING_1658018407");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_290);
      UnderlyingStipulations_NoUnderlyingStips_290.insert(UnderlyingStipType_290.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_290("STRING_1050206363");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_290);
      UnderlyingStipulations_NoUnderlyingStips_290.insert(UnderlyingStipValue_290.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_290);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_291;
      FIX::UnderlyingStipType UnderlyingStipType_291("STRING_486144131");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_291);
      UnderlyingStipulations_NoUnderlyingStips_291.insert(UnderlyingStipType_291.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_291("STRING_1485774256");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_291);
      UnderlyingStipulations_NoUnderlyingStips_291.insert(UnderlyingStipValue_291.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_291);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_290;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_290("STRING_1900695611");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_290);
      UndlyInstrumentParties_NoUndlyInstrumentParties_290.insert(UnderlyingInstrumentPartyID_290.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_290('4');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_290);
      UndlyInstrumentParties_NoUndlyInstrumentParties_290.insert(UnderlyingInstrumentPartyIDSource_290.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_290(529427932);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_290);
      UndlyInstrumentParties_NoUndlyInstrumentParties_290.insert(UnderlyingInstrumentPartyRole_290.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_290);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_579;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_579("STRING_1713389438");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_579);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_579.insert(UnderlyingInstrumentPartySubID_579.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_579(327877395);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_579);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_579.insert(UnderlyingInstrumentPartySubIDType_579.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_579);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_151;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_151("DATA_1634109904");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_151);
    UnderlyingInstrument_151.insert(EncodedUnderlyingIssuer_151.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_151(1698552515);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_151);
    UnderlyingInstrument_151.insert(EncodedUnderlyingIssuerLen_151.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_151("DATA_663210223");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_151);
    UnderlyingInstrument_151.insert(EncodedUnderlyingSecurityDesc_151.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_151(2039691060);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_151);
    UnderlyingInstrument_151.insert(EncodedUnderlyingSecurityDescLen_151.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_151;
    UnderlyingAdjustedQuantity_151.setString("5855920");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_151);
    UnderlyingInstrument_151.insert(UnderlyingAdjustedQuantity_151.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_151;
    UnderlyingAllocationPercent_151.setString("73.240000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_151);
    UnderlyingInstrument_151.insert(UnderlyingAllocationPercent_151.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_151;
    UnderlyingAttachmentPoint_151.setString("57.760000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_151);
    UnderlyingInstrument_151.insert(UnderlyingAttachmentPoint_151.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_151("STRING_787464983");
    noUnderlyings_0_1.set(UnderlyingCFICode_151);
    UnderlyingInstrument_151.insert(UnderlyingCFICode_151.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_151("STRING_858905123");
    noUnderlyings_0_1.set(UnderlyingCPProgram_151);
    UnderlyingInstrument_151.insert(UnderlyingCPProgram_151.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_151("STRING_1728561151");
    noUnderlyings_0_1.set(UnderlyingCPRegType_151);
    UnderlyingInstrument_151.insert(UnderlyingCPRegType_151.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_151;
    UnderlyingCapValue_151.setString("4091588");
    noUnderlyings_0_1.set(UnderlyingCapValue_151);
    UnderlyingInstrument_151.insert(UnderlyingCapValue_151.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_151;
    UnderlyingCashAmount_151.setString("12375326");
    noUnderlyings_0_1.set(UnderlyingCashAmount_151);
    UnderlyingInstrument_151.insert(UnderlyingCashAmount_151.getString());
    FIX::UnderlyingCashType UnderlyingCashType_151("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_151);
    UnderlyingInstrument_151.insert(UnderlyingCashType_151.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_151;
    UnderlyingContractMultiplier_151.setString("17974319");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_151);
    UnderlyingInstrument_151.insert(UnderlyingContractMultiplier_151.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_151(1906392457);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_151);
    UnderlyingInstrument_151.insert(UnderlyingContractMultiplierUnit_151.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_151("COUNTRY_87816055");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_151);
    UnderlyingInstrument_151.insert(UnderlyingCountryOfIssue_151.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_151("LOCALMKTDATE_825079020");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_151);
    UnderlyingInstrument_151.insert(UnderlyingCouponPaymentDate_151.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_151;
    UnderlyingCouponRate_151.setString("18.240000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_151);
    UnderlyingInstrument_151.insert(UnderlyingCouponRate_151.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_151("STRING_917790472");
    noUnderlyings_0_1.set(UnderlyingCreditRating_151);
    UnderlyingInstrument_151.insert(UnderlyingCreditRating_151.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_151("GBP");
    noUnderlyings_0_1.set(UnderlyingCurrency_151);
    UnderlyingInstrument_151.insert(UnderlyingCurrency_151.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_151;
    UnderlyingCurrentValue_151.setString("19679968");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_151);
    UnderlyingInstrument_151.insert(UnderlyingCurrentValue_151.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_151;
    UnderlyingDetachmentPoint_151.setString("96.870000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_151);
    UnderlyingInstrument_151.insert(UnderlyingDetachmentPoint_151.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_151;
    UnderlyingDirtyPrice_151.setString("16672508");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_151);
    UnderlyingInstrument_151.insert(UnderlyingDirtyPrice_151.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_151;
    UnderlyingEndPrice_151.setString("17927974");
    noUnderlyings_0_1.set(UnderlyingEndPrice_151);
    UnderlyingInstrument_151.insert(UnderlyingEndPrice_151.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_151;
    UnderlyingEndValue_151.setString("8196816");
    noUnderlyings_0_1.set(UnderlyingEndValue_151);
    UnderlyingInstrument_151.insert(UnderlyingEndValue_151.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_151(2089349791);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_151);
    UnderlyingInstrument_151.insert(UnderlyingExerciseStyle_151.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_151;
    UnderlyingFXRate_151.setString("1747417");
    noUnderlyings_0_1.set(UnderlyingFXRate_151);
    UnderlyingInstrument_151.insert(UnderlyingFXRate_151.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_151('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_151);
    UnderlyingInstrument_151.insert(UnderlyingFXRateCalc_151.getString());
    FIX::UnderlyingFactor UnderlyingFactor_151;
    UnderlyingFactor_151.setString("16552555");
    noUnderlyings_0_1.set(UnderlyingFactor_151);
    UnderlyingInstrument_151.insert(UnderlyingFactor_151.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_151(502619174);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_151);
    UnderlyingInstrument_151.insert(UnderlyingFlowScheduleType_151.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_151("STRING_2119446923");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_151);
    UnderlyingInstrument_151.insert(UnderlyingInstrRegistry_151.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_151("LOCALMKTDATE_1206324449");
    noUnderlyings_0_1.set(UnderlyingIssueDate_151);
    UnderlyingInstrument_151.insert(UnderlyingIssueDate_151.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_151("STRING_1165829397");
    noUnderlyings_0_1.set(UnderlyingIssuer_151);
    UnderlyingInstrument_151.insert(UnderlyingIssuer_151.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_151("STRING_2011654335");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_151);
    UnderlyingInstrument_151.insert(UnderlyingLocaleOfIssue_151.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_151("LOCALMKTDATE_1791916524");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_151);
    UnderlyingInstrument_151.insert(UnderlyingMaturityDate_151.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_151("MONTHYEAR_1288196721");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_151);
    UnderlyingInstrument_151.insert(UnderlyingMaturityMonthYear_151.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_151("TZTIMEONLY_963616463");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_151);
    UnderlyingInstrument_151.insert(UnderlyingMaturityTime_151.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_151;
    UnderlyingNotionalPercentageOutstanding_151.setString("78.590000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_151);
    UnderlyingInstrument_151.insert(UnderlyingNotionalPercentageOutstanding_151.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_151('2');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_151);
    UnderlyingInstrument_151.insert(UnderlyingOptAttribute_151.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_151;
    UnderlyingOriginalNotionalPercentageOutstanding_151.setString("39.670000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_151);
    UnderlyingInstrument_151.insert(UnderlyingOriginalNotionalPercentageOutstanding_151.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_151("STRING_841056730");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_151);
    UnderlyingInstrument_151.insert(UnderlyingPriceUnitOfMeasure_151.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_151;
    UnderlyingPriceUnitOfMeasureQty_151.setString("12371508");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_151);
    UnderlyingInstrument_151.insert(UnderlyingPriceUnitOfMeasureQty_151.getString());
    FIX::UnderlyingProduct UnderlyingProduct_151(1998385437);
    noUnderlyings_0_1.set(UnderlyingProduct_151);
    UnderlyingInstrument_151.insert(UnderlyingProduct_151.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_151(491005025);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_151);
    UnderlyingInstrument_151.insert(UnderlyingPutOrCall_151.getString());
    FIX::UnderlyingPx UnderlyingPx_151;
    UnderlyingPx_151.setString("9960596");
    noUnderlyings_0_1.set(UnderlyingPx_151);
    UnderlyingInstrument_151.insert(UnderlyingPx_151.getString());
    FIX::UnderlyingQty UnderlyingQty_151;
    UnderlyingQty_151.setString("20862014");
    noUnderlyings_0_1.set(UnderlyingQty_151);
    UnderlyingInstrument_151.insert(UnderlyingQty_151.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_151("LOCALMKTDATE_1316084045");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_151);
    UnderlyingInstrument_151.insert(UnderlyingRedemptionDate_151.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_151("STRING_1667001464");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_151);
    UnderlyingInstrument_151.insert(UnderlyingRepoCollateralSecurityType_151.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_151;
    UnderlyingRepurchaseRate_151.setString("83.170000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_151);
    UnderlyingInstrument_151.insert(UnderlyingRepurchaseRate_151.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_151(1896409600);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_151);
    UnderlyingInstrument_151.insert(UnderlyingRepurchaseTerm_151.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_151("STRING_1848478048");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_151);
    UnderlyingInstrument_151.insert(UnderlyingRestructuringType_151.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_151("STRING_677021505");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_151);
    UnderlyingInstrument_151.insert(UnderlyingSecurityDesc_151.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_151("EXCHANGE_815395639");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_151);
    UnderlyingInstrument_151.insert(UnderlyingSecurityExchange_151.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_151("STRING_1368245240");
    noUnderlyings_0_1.set(UnderlyingSecurityID_151);
    UnderlyingInstrument_151.insert(UnderlyingSecurityID_151.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_151("STRING_322335351");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_151);
    UnderlyingInstrument_151.insert(UnderlyingSecurityIDSource_151.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_151("STRING_1635077290");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_151);
    UnderlyingInstrument_151.insert(UnderlyingSecuritySubType_151.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_151("STRING_1310111384");
    noUnderlyings_0_1.set(UnderlyingSecurityType_151);
    UnderlyingInstrument_151.insert(UnderlyingSecurityType_151.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_151("STRING_497077130");
    noUnderlyings_0_1.set(UnderlyingSeniority_151);
    UnderlyingInstrument_151.insert(UnderlyingSeniority_151.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_151("STRING_2120414308");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_151);
    UnderlyingInstrument_151.insert(UnderlyingSettlMethod_151.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_151(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_151);
    UnderlyingInstrument_151.insert(UnderlyingSettlementType_151.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_151;
    UnderlyingStartValue_151.setString("9996963");
    noUnderlyings_0_1.set(UnderlyingStartValue_151);
    UnderlyingInstrument_151.insert(UnderlyingStartValue_151.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_151("STRING_2092377583");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_151);
    UnderlyingInstrument_151.insert(UnderlyingStateOrProvinceOfIssue_151.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_151("CAN");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_151);
    UnderlyingInstrument_151.insert(UnderlyingStrikeCurrency_151.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_151;
    UnderlyingStrikePrice_151.setString("19565482");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_151);
    UnderlyingInstrument_151.insert(UnderlyingStrikePrice_151.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_151("STRING_1668640642");
    noUnderlyings_0_1.set(UnderlyingSymbol_151);
    UnderlyingInstrument_151.insert(UnderlyingSymbol_151.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_151("STRING_1306238775");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_151);
    UnderlyingInstrument_151.insert(UnderlyingSymbolSfx_151.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_151("STRING_772681086");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_151);
    UnderlyingInstrument_151.insert(UnderlyingTimeUnit_151.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_151("STRING_2100538502");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_151);
    UnderlyingInstrument_151.insert(UnderlyingUnitOfMeasure_151.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_151;
    UnderlyingUnitOfMeasureQty_151.setString("13058569");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_151);
    UnderlyingInstrument_151.insert(UnderlyingUnitOfMeasureQty_151.getString());
    all_values.push_back(UnderlyingInstrument_151);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_305;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_305("STRING_794111584");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_305);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_305.insert(UnderlyingSecurityAltID_305.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_305("STRING_395524154");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_305);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_305.insert(UnderlyingSecurityAltIDSource_305.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_305);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_306;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_306("STRING_1168276843");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_306);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_306.insert(UnderlyingSecurityAltID_306.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_306("STRING_1285116609");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_306);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_306.insert(UnderlyingSecurityAltIDSource_306.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_306);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_307;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_307("STRING_1391583794");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_307);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_307.insert(UnderlyingSecurityAltID_307.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_307("STRING_1106994687");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_307);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_307.insert(UnderlyingSecurityAltIDSource_307.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_307);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_292;
      FIX::UnderlyingStipType UnderlyingStipType_292("STRING_911101611");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_292);
      UnderlyingStipulations_NoUnderlyingStips_292.insert(UnderlyingStipType_292.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_292("STRING_1963503004");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_292);
      UnderlyingStipulations_NoUnderlyingStips_292.insert(UnderlyingStipValue_292.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_292);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_291;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_291("STRING_612096011");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_291);
      UndlyInstrumentParties_NoUndlyInstrumentParties_291.insert(UnderlyingInstrumentPartyID_291.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_291('4');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_291);
      UndlyInstrumentParties_NoUndlyInstrumentParties_291.insert(UnderlyingInstrumentPartyIDSource_291.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_291(1018038598);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_291);
      UndlyInstrumentParties_NoUndlyInstrumentParties_291.insert(UnderlyingInstrumentPartyRole_291.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_291);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_580;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_580("STRING_815376213");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_580);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_580.insert(UnderlyingInstrumentPartySubID_580.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_580(505632240);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_580);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_580.insert(UnderlyingInstrumentPartySubIDType_580.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_580);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_581;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_581("STRING_1142968988");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_581);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_581.insert(UnderlyingInstrumentPartySubID_581.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_581(1312453343);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_581);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_581.insert(UnderlyingInstrumentPartySubIDType_581.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_581);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_582;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_582("STRING_478562900");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_582);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_582.insert(UnderlyingInstrumentPartySubID_582.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_582(1960852305);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_582);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_582.insert(UnderlyingInstrumentPartySubIDType_582.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_582);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_292;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_292("STRING_164666000");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_292);
      UndlyInstrumentParties_NoUndlyInstrumentParties_292.insert(UnderlyingInstrumentPartyID_292.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_292('4');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_292);
      UndlyInstrumentParties_NoUndlyInstrumentParties_292.insert(UnderlyingInstrumentPartyIDSource_292.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_292(1837576424);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_292);
      UndlyInstrumentParties_NoUndlyInstrumentParties_292.insert(UnderlyingInstrumentPartyRole_292.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_292);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_583;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_583("STRING_232521459");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_583);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_583.insert(UnderlyingInstrumentPartySubID_583.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_583(1358733418);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_583);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_583.insert(UnderlyingInstrumentPartySubIDType_583.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_583);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_584;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_584("STRING_1488946828");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_584);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_584.insert(UnderlyingInstrumentPartySubID_584.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_584(1005202545);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_584);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_584.insert(UnderlyingInstrumentPartySubIDType_584.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_584);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_293;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_293("STRING_1311788272");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_293);
      UndlyInstrumentParties_NoUndlyInstrumentParties_293.insert(UnderlyingInstrumentPartyID_293.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_293('6');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_293);
      UndlyInstrumentParties_NoUndlyInstrumentParties_293.insert(UnderlyingInstrumentPartyIDSource_293.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_293(175093951);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_293);
      UndlyInstrumentParties_NoUndlyInstrumentParties_293.insert(UnderlyingInstrumentPartyRole_293.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_293);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_585;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_585("STRING_1042844306");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_585);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_585.insert(UnderlyingInstrumentPartySubID_585.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_585(1343370794);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_585);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_585.insert(UnderlyingInstrumentPartySubIDType_585.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_585);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_586;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_586("STRING_1243532817");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_586);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_586.insert(UnderlyingInstrumentPartySubID_586.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_586(286944453);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_586);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_586.insert(UnderlyingInstrumentPartySubIDType_586.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_586);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_587;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_587("STRING_302881833");
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubID_587);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_587.insert(UnderlyingInstrumentPartySubID_587.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_587(1697249823);
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubIDType_587);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_587.insert(UnderlyingInstrumentPartySubIDType_587.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_587);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
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
