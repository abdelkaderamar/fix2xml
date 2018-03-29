#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/TradeCaptureReportRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradeCaptureReportRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::TradeCaptureReportRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReportRequest_0;
  FIX::ClOrdID ClOrdID_52("STRING_566242898");
  msg.set(ClOrdID_52);
  TradeCaptureReportRequest_0.insert(ClOrdID_52.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_27("LOCALMKTDATE_1030740763");
  msg.set(ClearingBusinessDate_27);
  TradeCaptureReportRequest_0.insert(ClearingBusinessDate_27.getString());
  FIX::EncodedText EncodedText_104("DATA_860851042");
  msg.set(EncodedText_104);
  TradeCaptureReportRequest_0.insert(EncodedText_104.getString());
  FIX::EncodedTextLen EncodedTextLen_104(98359062);
  msg.set(EncodedTextLen_104);
  TradeCaptureReportRequest_0.insert(EncodedTextLen_104.getString());
  FIX::ExecID ExecID_26("STRING_1696704233");
  msg.set(ExecID_26);
  TradeCaptureReportRequest_0.insert(ExecID_26.getString());
  FIX::ExecType ExecType_3('F');
  msg.set(ExecType_3);
  TradeCaptureReportRequest_0.insert(ExecType_3.getString());
  FIX::FirmTradeID FirmTradeID_8("STRING_1306215231");
  msg.set(FirmTradeID_8);
  TradeCaptureReportRequest_0.insert(FirmTradeID_8.getString());
  FIX::MatchStatus MatchStatus_12('0');
  msg.set(MatchStatus_12);
  TradeCaptureReportRequest_0.insert(MatchStatus_12.getString());
  FIX::MessageEventSource MessageEventSource_6("STRING_1804715336");
  msg.set(MessageEventSource_6);
  TradeCaptureReportRequest_0.insert(MessageEventSource_6.getString());
  FIX::MultiLegReportingType MultiLegReportingType_6('1');
  msg.set(MultiLegReportingType_6);
  TradeCaptureReportRequest_0.insert(MultiLegReportingType_6.getString());
  FIX::OrderID OrderID_37("STRING_621017850");
  msg.set(OrderID_37);
  TradeCaptureReportRequest_0.insert(OrderID_37.getString());
  FIX::ResponseDestination ResponseDestination_5("STRING_281414158");
  msg.set(ResponseDestination_5);
  TradeCaptureReportRequest_0.insert(ResponseDestination_5.getString());
  FIX::ResponseTransportType ResponseTransportType_5(0);
  msg.set(ResponseTransportType_5);
  TradeCaptureReportRequest_0.insert(ResponseTransportType_5.getString());
  FIX::SecondaryFirmTradeID SecondaryFirmTradeID_2("STRING_1342862381");
  msg.set(SecondaryFirmTradeID_2);
  TradeCaptureReportRequest_0.insert(SecondaryFirmTradeID_2.getString());
  FIX::SecondaryTradeID SecondaryTradeID_2("STRING_1181182077");
  msg.set(SecondaryTradeID_2);
  TradeCaptureReportRequest_0.insert(SecondaryTradeID_2.getString());
  FIX::SecondaryTradeReportID SecondaryTradeReportID_16("STRING_1849752305");
  msg.set(SecondaryTradeReportID_16);
  TradeCaptureReportRequest_0.insert(SecondaryTradeReportID_16.getString());
  FIX::SecondaryTrdType SecondaryTrdType_2(1101863062);
  msg.set(SecondaryTrdType_2);
  TradeCaptureReportRequest_0.insert(SecondaryTrdType_2.getString());
  FIX::Side Side_55('E');
  msg.set(Side_55);
  TradeCaptureReportRequest_0.insert(Side_55.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_15('1');
  msg.set(SubscriptionRequestType_15);
  TradeCaptureReportRequest_0.insert(SubscriptionRequestType_15.getString());
  FIX::Text Text_104("STRING_1668374968");
  msg.set(Text_104);
  TradeCaptureReportRequest_0.insert(Text_104.getString());
  FIX::TimeBracket TimeBracket_6("STRING_1983746715");
  msg.set(TimeBracket_6);
  TradeCaptureReportRequest_0.insert(TimeBracket_6.getString());
  FIX::TradeHandlingInstr TradeHandlingInstr_2('3');
  msg.set(TradeHandlingInstr_2);
  TradeCaptureReportRequest_0.insert(TradeHandlingInstr_2.getString());
  FIX::TradeID TradeID_9("STRING_1919471675");
  msg.set(TradeID_9);
  TradeCaptureReportRequest_0.insert(TradeID_9.getString());
  FIX::TradeInputDevice TradeInputDevice_6("STRING_306939114");
  msg.set(TradeInputDevice_6);
  TradeCaptureReportRequest_0.insert(TradeInputDevice_6.getString());
  FIX::TradeInputSource TradeInputSource_8("STRING_1960456803");
  msg.set(TradeInputSource_8);
  TradeCaptureReportRequest_0.insert(TradeInputSource_8.getString());
  FIX::TradeLinkID TradeLinkID_2("STRING_1857139503");
  msg.set(TradeLinkID_2);
  TradeCaptureReportRequest_0.insert(TradeLinkID_2.getString());
  FIX::TradeReportID TradeReportID_16("STRING_1791534691");
  msg.set(TradeReportID_16);
  TradeCaptureReportRequest_0.insert(TradeReportID_16.getString());
  FIX::TradeRequestID TradeRequestID_1("STRING_250870664");
  msg.set(TradeRequestID_1);
  TradeCaptureReportRequest_0.insert(TradeRequestID_1.getString());
  FIX::TradeRequestType TradeRequestType_0(4);
  msg.set(TradeRequestType_0);
  TradeCaptureReportRequest_0.insert(TradeRequestType_0.getString());
  FIX::TradingSessionID TradingSessionID_122("STRING_5");
  msg.set(TradingSessionID_122);
  TradeCaptureReportRequest_0.insert(TradingSessionID_122.getString());
  FIX::TradingSessionSubID TradingSessionSubID_122("STRING_3");
  msg.set(TradingSessionSubID_122);
  TradeCaptureReportRequest_0.insert(TradingSessionSubID_122.getString());
  FIX::TransferReason TransferReason_2("STRING_1933826932");
  msg.set(TransferReason_2);
  TradeCaptureReportRequest_0.insert(TransferReason_2.getString());
  FIX::TrdMatchID TrdMatchID_3("STRING_1148590679");
  msg.set(TrdMatchID_3);
  TradeCaptureReportRequest_0.insert(TrdMatchID_3.getString());
  FIX::TrdSubType TrdSubType_5(37);
  msg.set(TrdSubType_5);
  TradeCaptureReportRequest_0.insert(TrdSubType_5.getString());
  FIX::TrdType TrdType_8(15);
  msg.set(TrdType_8);
  TradeCaptureReportRequest_0.insert(TrdType_8.getString());
  all_values.push_back(TradeCaptureReportRequest_0);

  all_compo_names.insert("TradeCaptureReportRequest");

  // FinancingDetails
  multiset<string> FinancingDetails_31;
  FIX::AgreementCurrency AgreementCurrency_31("JPY");
  msg.set(AgreementCurrency_31);
  FinancingDetails_31.insert(AgreementCurrency_31.getString());
  FIX::AgreementDate AgreementDate_31("LOCALMKTDATE_1190917578");
  msg.set(AgreementDate_31);
  FinancingDetails_31.insert(AgreementDate_31.getString());
  FIX::AgreementDesc AgreementDesc_31("STRING_1439710521");
  msg.set(AgreementDesc_31);
  FinancingDetails_31.insert(AgreementDesc_31.getString());
  FIX::AgreementID AgreementID_31("STRING_1178723032");
  msg.set(AgreementID_31);
  FinancingDetails_31.insert(AgreementID_31.getString());
  FIX::DeliveryType DeliveryType_31(0);
  msg.set(DeliveryType_31);
  FinancingDetails_31.insert(DeliveryType_31.getString());
  FIX::EndDate EndDate_31("LOCALMKTDATE_2060728372");
  msg.set(EndDate_31);
  FinancingDetails_31.insert(EndDate_31.getString());
  FIX::MarginRatio MarginRatio_31;
  MarginRatio_31.setString("71.910000");
  msg.set(MarginRatio_31);
  FinancingDetails_31.insert(MarginRatio_31.getString());
  FIX::StartDate StartDate_31("LOCALMKTDATE_1692091432");
  msg.set(StartDate_31);
  FinancingDetails_31.insert(StartDate_31.getString());
  FIX::TerminationType TerminationType_31(2);
  msg.set(TerminationType_31);
  FinancingDetails_31.insert(TerminationType_31.getString());
  all_values.push_back(FinancingDetails_31);
  all_compo_names.insert("FinancingDetails");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::TradeCaptureReportRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_152;
    FIX::EncodedLegIssuer EncodedLegIssuer_152("DATA_1394360089");
    noLegs_0_0.set(EncodedLegIssuer_152);
    InstrumentLeg_152.insert(EncodedLegIssuer_152.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_152(210486519);
    noLegs_0_0.set(EncodedLegIssuerLen_152);
    InstrumentLeg_152.insert(EncodedLegIssuerLen_152.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_152("DATA_1335711249");
    noLegs_0_0.set(EncodedLegSecurityDesc_152);
    InstrumentLeg_152.insert(EncodedLegSecurityDesc_152.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_152(91951302);
    noLegs_0_0.set(EncodedLegSecurityDescLen_152);
    InstrumentLeg_152.insert(EncodedLegSecurityDescLen_152.getString());
    FIX::LegCFICode LegCFICode_152("STRING_1878861487");
    noLegs_0_0.set(LegCFICode_152);
    InstrumentLeg_152.insert(LegCFICode_152.getString());
    FIX::LegContractMultiplier LegContractMultiplier_152;
    LegContractMultiplier_152.setString("11719743");
    noLegs_0_0.set(LegContractMultiplier_152);
    InstrumentLeg_152.insert(LegContractMultiplier_152.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_152(1482985485);
    noLegs_0_0.set(LegContractMultiplierUnit_152);
    InstrumentLeg_152.insert(LegContractMultiplierUnit_152.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_152("MONTHYEAR_1650849514");
    noLegs_0_0.set(LegContractSettlMonth_152);
    InstrumentLeg_152.insert(LegContractSettlMonth_152.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_152("COUNTRY_1478913430");
    noLegs_0_0.set(LegCountryOfIssue_152);
    InstrumentLeg_152.insert(LegCountryOfIssue_152.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_152("LOCALMKTDATE_1295958641");
    noLegs_0_0.set(LegCouponPaymentDate_152);
    InstrumentLeg_152.insert(LegCouponPaymentDate_152.getString());
    FIX::LegCouponRate LegCouponRate_152;
    LegCouponRate_152.setString("53.690000");
    noLegs_0_0.set(LegCouponRate_152);
    InstrumentLeg_152.insert(LegCouponRate_152.getString());
    FIX::LegCreditRating LegCreditRating_152("STRING_1122964474");
    noLegs_0_0.set(LegCreditRating_152);
    InstrumentLeg_152.insert(LegCreditRating_152.getString());
    FIX::LegCurrency LegCurrency_152("CAN");
    noLegs_0_0.set(LegCurrency_152);
    InstrumentLeg_152.insert(LegCurrency_152.getString());
    FIX::LegDatedDate LegDatedDate_152("LOCALMKTDATE_1240814390");
    noLegs_0_0.set(LegDatedDate_152);
    InstrumentLeg_152.insert(LegDatedDate_152.getString());
    FIX::LegExerciseStyle LegExerciseStyle_152(893054814);
    noLegs_0_0.set(LegExerciseStyle_152);
    InstrumentLeg_152.insert(LegExerciseStyle_152.getString());
    FIX::LegFactor LegFactor_152;
    LegFactor_152.setString("3669490");
    noLegs_0_0.set(LegFactor_152);
    InstrumentLeg_152.insert(LegFactor_152.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_152(241921422);
    noLegs_0_0.set(LegFlowScheduleType_152);
    InstrumentLeg_152.insert(LegFlowScheduleType_152.getString());
    FIX::LegInstrRegistry LegInstrRegistry_152("STRING_1100131365");
    noLegs_0_0.set(LegInstrRegistry_152);
    InstrumentLeg_152.insert(LegInstrRegistry_152.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_152("LOCALMKTDATE_251651386");
    noLegs_0_0.set(LegInterestAccrualDate_152);
    InstrumentLeg_152.insert(LegInterestAccrualDate_152.getString());
    FIX::LegIssueDate LegIssueDate_152("LOCALMKTDATE_939732687");
    noLegs_0_0.set(LegIssueDate_152);
    InstrumentLeg_152.insert(LegIssueDate_152.getString());
    FIX::LegIssuer LegIssuer_152("STRING_474139061");
    noLegs_0_0.set(LegIssuer_152);
    InstrumentLeg_152.insert(LegIssuer_152.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_152("STRING_1442568964");
    noLegs_0_0.set(LegLocaleOfIssue_152);
    InstrumentLeg_152.insert(LegLocaleOfIssue_152.getString());
    FIX::LegMaturityDate LegMaturityDate_152("LOCALMKTDATE_231959560");
    noLegs_0_0.set(LegMaturityDate_152);
    InstrumentLeg_152.insert(LegMaturityDate_152.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_152("MONTHYEAR_1652862093");
    noLegs_0_0.set(LegMaturityMonthYear_152);
    InstrumentLeg_152.insert(LegMaturityMonthYear_152.getString());
    FIX::LegMaturityTime LegMaturityTime_152("TZTIMEONLY_241297212");
    noLegs_0_0.set(LegMaturityTime_152);
    InstrumentLeg_152.insert(LegMaturityTime_152.getString());
    FIX::LegOptAttribute LegOptAttribute_152('1');
    noLegs_0_0.set(LegOptAttribute_152);
    InstrumentLeg_152.insert(LegOptAttribute_152.getString());
    FIX::LegOptionRatio LegOptionRatio_152;
    LegOptionRatio_152.setString("9655156");
    noLegs_0_0.set(LegOptionRatio_152);
    InstrumentLeg_152.insert(LegOptionRatio_152.getString());
    FIX::LegPool LegPool_152("STRING_1933388644");
    noLegs_0_0.set(LegPool_152);
    InstrumentLeg_152.insert(LegPool_152.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_152("STRING_1401311389");
    noLegs_0_0.set(LegPriceUnitOfMeasure_152);
    InstrumentLeg_152.insert(LegPriceUnitOfMeasure_152.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_152;
    LegPriceUnitOfMeasureQty_152.setString("14593512");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_152);
    InstrumentLeg_152.insert(LegPriceUnitOfMeasureQty_152.getString());
    FIX::LegProduct LegProduct_152(1180265086);
    noLegs_0_0.set(LegProduct_152);
    InstrumentLeg_152.insert(LegProduct_152.getString());
    FIX::LegPutOrCall LegPutOrCall_152(1611797908);
    noLegs_0_0.set(LegPutOrCall_152);
    InstrumentLeg_152.insert(LegPutOrCall_152.getString());
    FIX::LegRatioQty LegRatioQty_152;
    LegRatioQty_152.setString("6475788");
    noLegs_0_0.set(LegRatioQty_152);
    InstrumentLeg_152.insert(LegRatioQty_152.getString());
    FIX::LegRedemptionDate LegRedemptionDate_152("LOCALMKTDATE_1272216388");
    noLegs_0_0.set(LegRedemptionDate_152);
    InstrumentLeg_152.insert(LegRedemptionDate_152.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_152("STRING_1343175747");
    noLegs_0_0.set(LegRepoCollateralSecurityType_152);
    InstrumentLeg_152.insert(LegRepoCollateralSecurityType_152.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_152;
    LegRepurchaseRate_152.setString("31.740000");
    noLegs_0_0.set(LegRepurchaseRate_152);
    InstrumentLeg_152.insert(LegRepurchaseRate_152.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_152(607718226);
    noLegs_0_0.set(LegRepurchaseTerm_152);
    InstrumentLeg_152.insert(LegRepurchaseTerm_152.getString());
    FIX::LegSecurityDesc LegSecurityDesc_152("STRING_846541613");
    noLegs_0_0.set(LegSecurityDesc_152);
    InstrumentLeg_152.insert(LegSecurityDesc_152.getString());
    FIX::LegSecurityExchange LegSecurityExchange_152("EXCHANGE_1150982957");
    noLegs_0_0.set(LegSecurityExchange_152);
    InstrumentLeg_152.insert(LegSecurityExchange_152.getString());
    FIX::LegSecurityID LegSecurityID_152("STRING_1903676867");
    noLegs_0_0.set(LegSecurityID_152);
    InstrumentLeg_152.insert(LegSecurityID_152.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_152("STRING_59563334");
    noLegs_0_0.set(LegSecurityIDSource_152);
    InstrumentLeg_152.insert(LegSecurityIDSource_152.getString());
    FIX::LegSecuritySubType LegSecuritySubType_152("STRING_126463783");
    noLegs_0_0.set(LegSecuritySubType_152);
    InstrumentLeg_152.insert(LegSecuritySubType_152.getString());
    FIX::LegSecurityType LegSecurityType_152("STRING_1303022524");
    noLegs_0_0.set(LegSecurityType_152);
    InstrumentLeg_152.insert(LegSecurityType_152.getString());
    FIX::LegSide LegSide_152('6');
    noLegs_0_0.set(LegSide_152);
    InstrumentLeg_152.insert(LegSide_152.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_152("STRING_1367278173");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_152);
    InstrumentLeg_152.insert(LegStateOrProvinceOfIssue_152.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_152("CHF");
    noLegs_0_0.set(LegStrikeCurrency_152);
    InstrumentLeg_152.insert(LegStrikeCurrency_152.getString());
    FIX::LegStrikePrice LegStrikePrice_152;
    LegStrikePrice_152.setString("16091995");
    noLegs_0_0.set(LegStrikePrice_152);
    InstrumentLeg_152.insert(LegStrikePrice_152.getString());
    FIX::LegSymbol LegSymbol_152("STRING_1148725055");
    noLegs_0_0.set(LegSymbol_152);
    InstrumentLeg_152.insert(LegSymbol_152.getString());
    FIX::LegSymbolSfx LegSymbolSfx_152("STRING_1258769515");
    noLegs_0_0.set(LegSymbolSfx_152);
    InstrumentLeg_152.insert(LegSymbolSfx_152.getString());
    FIX::LegTimeUnit LegTimeUnit_152("STRING_401448634");
    noLegs_0_0.set(LegTimeUnit_152);
    InstrumentLeg_152.insert(LegTimeUnit_152.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_152("STRING_1622864116");
    noLegs_0_0.set(LegUnitOfMeasure_152);
    InstrumentLeg_152.insert(LegUnitOfMeasure_152.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_152;
    LegUnitOfMeasureQty_152.setString("5538548");
    noLegs_0_0.set(LegUnitOfMeasureQty_152);
    InstrumentLeg_152.insert(LegUnitOfMeasureQty_152.getString());
    all_values.push_back(InstrumentLeg_152);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_295;
      FIX::LegSecurityAltID LegSecurityAltID_295("STRING_1128242562");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_295);
      LegSecAltIDGrp_NoLegSecurityAltID_295.insert(LegSecurityAltID_295.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_295("STRING_795152044");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_295);
      LegSecAltIDGrp_NoLegSecurityAltID_295.insert(LegSecurityAltIDSource_295.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_295);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_153;
    FIX::EncodedLegIssuer EncodedLegIssuer_153("DATA_778612479");
    noLegs_0_1.set(EncodedLegIssuer_153);
    InstrumentLeg_153.insert(EncodedLegIssuer_153.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_153(2093758198);
    noLegs_0_1.set(EncodedLegIssuerLen_153);
    InstrumentLeg_153.insert(EncodedLegIssuerLen_153.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_153("DATA_581057041");
    noLegs_0_1.set(EncodedLegSecurityDesc_153);
    InstrumentLeg_153.insert(EncodedLegSecurityDesc_153.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_153(32440221);
    noLegs_0_1.set(EncodedLegSecurityDescLen_153);
    InstrumentLeg_153.insert(EncodedLegSecurityDescLen_153.getString());
    FIX::LegCFICode LegCFICode_153("STRING_1405625807");
    noLegs_0_1.set(LegCFICode_153);
    InstrumentLeg_153.insert(LegCFICode_153.getString());
    FIX::LegContractMultiplier LegContractMultiplier_153;
    LegContractMultiplier_153.setString("17613221");
    noLegs_0_1.set(LegContractMultiplier_153);
    InstrumentLeg_153.insert(LegContractMultiplier_153.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_153(1644238129);
    noLegs_0_1.set(LegContractMultiplierUnit_153);
    InstrumentLeg_153.insert(LegContractMultiplierUnit_153.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_153("MONTHYEAR_2053204665");
    noLegs_0_1.set(LegContractSettlMonth_153);
    InstrumentLeg_153.insert(LegContractSettlMonth_153.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_153("COUNTRY_886054867");
    noLegs_0_1.set(LegCountryOfIssue_153);
    InstrumentLeg_153.insert(LegCountryOfIssue_153.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_153("LOCALMKTDATE_839930229");
    noLegs_0_1.set(LegCouponPaymentDate_153);
    InstrumentLeg_153.insert(LegCouponPaymentDate_153.getString());
    FIX::LegCouponRate LegCouponRate_153;
    LegCouponRate_153.setString("41.910000");
    noLegs_0_1.set(LegCouponRate_153);
    InstrumentLeg_153.insert(LegCouponRate_153.getString());
    FIX::LegCreditRating LegCreditRating_153("STRING_1493773093");
    noLegs_0_1.set(LegCreditRating_153);
    InstrumentLeg_153.insert(LegCreditRating_153.getString());
    FIX::LegCurrency LegCurrency_153("USD");
    noLegs_0_1.set(LegCurrency_153);
    InstrumentLeg_153.insert(LegCurrency_153.getString());
    FIX::LegDatedDate LegDatedDate_153("LOCALMKTDATE_1249966312");
    noLegs_0_1.set(LegDatedDate_153);
    InstrumentLeg_153.insert(LegDatedDate_153.getString());
    FIX::LegExerciseStyle LegExerciseStyle_153(1746035177);
    noLegs_0_1.set(LegExerciseStyle_153);
    InstrumentLeg_153.insert(LegExerciseStyle_153.getString());
    FIX::LegFactor LegFactor_153;
    LegFactor_153.setString("8552372");
    noLegs_0_1.set(LegFactor_153);
    InstrumentLeg_153.insert(LegFactor_153.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_153(405505189);
    noLegs_0_1.set(LegFlowScheduleType_153);
    InstrumentLeg_153.insert(LegFlowScheduleType_153.getString());
    FIX::LegInstrRegistry LegInstrRegistry_153("STRING_238720618");
    noLegs_0_1.set(LegInstrRegistry_153);
    InstrumentLeg_153.insert(LegInstrRegistry_153.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_153("LOCALMKTDATE_75031809");
    noLegs_0_1.set(LegInterestAccrualDate_153);
    InstrumentLeg_153.insert(LegInterestAccrualDate_153.getString());
    FIX::LegIssueDate LegIssueDate_153("LOCALMKTDATE_454098879");
    noLegs_0_1.set(LegIssueDate_153);
    InstrumentLeg_153.insert(LegIssueDate_153.getString());
    FIX::LegIssuer LegIssuer_153("STRING_1245838747");
    noLegs_0_1.set(LegIssuer_153);
    InstrumentLeg_153.insert(LegIssuer_153.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_153("STRING_1684231404");
    noLegs_0_1.set(LegLocaleOfIssue_153);
    InstrumentLeg_153.insert(LegLocaleOfIssue_153.getString());
    FIX::LegMaturityDate LegMaturityDate_153("LOCALMKTDATE_1602823935");
    noLegs_0_1.set(LegMaturityDate_153);
    InstrumentLeg_153.insert(LegMaturityDate_153.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_153("MONTHYEAR_357124615");
    noLegs_0_1.set(LegMaturityMonthYear_153);
    InstrumentLeg_153.insert(LegMaturityMonthYear_153.getString());
    FIX::LegMaturityTime LegMaturityTime_153("TZTIMEONLY_2085680039");
    noLegs_0_1.set(LegMaturityTime_153);
    InstrumentLeg_153.insert(LegMaturityTime_153.getString());
    FIX::LegOptAttribute LegOptAttribute_153('1');
    noLegs_0_1.set(LegOptAttribute_153);
    InstrumentLeg_153.insert(LegOptAttribute_153.getString());
    FIX::LegOptionRatio LegOptionRatio_153;
    LegOptionRatio_153.setString("9109794");
    noLegs_0_1.set(LegOptionRatio_153);
    InstrumentLeg_153.insert(LegOptionRatio_153.getString());
    FIX::LegPool LegPool_153("STRING_571604586");
    noLegs_0_1.set(LegPool_153);
    InstrumentLeg_153.insert(LegPool_153.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_153("STRING_58963317");
    noLegs_0_1.set(LegPriceUnitOfMeasure_153);
    InstrumentLeg_153.insert(LegPriceUnitOfMeasure_153.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_153;
    LegPriceUnitOfMeasureQty_153.setString("17061314");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_153);
    InstrumentLeg_153.insert(LegPriceUnitOfMeasureQty_153.getString());
    FIX::LegProduct LegProduct_153(1350217065);
    noLegs_0_1.set(LegProduct_153);
    InstrumentLeg_153.insert(LegProduct_153.getString());
    FIX::LegPutOrCall LegPutOrCall_153(5237868);
    noLegs_0_1.set(LegPutOrCall_153);
    InstrumentLeg_153.insert(LegPutOrCall_153.getString());
    FIX::LegRatioQty LegRatioQty_153;
    LegRatioQty_153.setString("1397048");
    noLegs_0_1.set(LegRatioQty_153);
    InstrumentLeg_153.insert(LegRatioQty_153.getString());
    FIX::LegRedemptionDate LegRedemptionDate_153("LOCALMKTDATE_1382657286");
    noLegs_0_1.set(LegRedemptionDate_153);
    InstrumentLeg_153.insert(LegRedemptionDate_153.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_153("STRING_1410863675");
    noLegs_0_1.set(LegRepoCollateralSecurityType_153);
    InstrumentLeg_153.insert(LegRepoCollateralSecurityType_153.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_153;
    LegRepurchaseRate_153.setString("70.110000");
    noLegs_0_1.set(LegRepurchaseRate_153);
    InstrumentLeg_153.insert(LegRepurchaseRate_153.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_153(879411768);
    noLegs_0_1.set(LegRepurchaseTerm_153);
    InstrumentLeg_153.insert(LegRepurchaseTerm_153.getString());
    FIX::LegSecurityDesc LegSecurityDesc_153("STRING_1316584692");
    noLegs_0_1.set(LegSecurityDesc_153);
    InstrumentLeg_153.insert(LegSecurityDesc_153.getString());
    FIX::LegSecurityExchange LegSecurityExchange_153("EXCHANGE_639598231");
    noLegs_0_1.set(LegSecurityExchange_153);
    InstrumentLeg_153.insert(LegSecurityExchange_153.getString());
    FIX::LegSecurityID LegSecurityID_153("STRING_1719341997");
    noLegs_0_1.set(LegSecurityID_153);
    InstrumentLeg_153.insert(LegSecurityID_153.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_153("STRING_894375235");
    noLegs_0_1.set(LegSecurityIDSource_153);
    InstrumentLeg_153.insert(LegSecurityIDSource_153.getString());
    FIX::LegSecuritySubType LegSecuritySubType_153("STRING_2133371324");
    noLegs_0_1.set(LegSecuritySubType_153);
    InstrumentLeg_153.insert(LegSecuritySubType_153.getString());
    FIX::LegSecurityType LegSecurityType_153("STRING_1258330191");
    noLegs_0_1.set(LegSecurityType_153);
    InstrumentLeg_153.insert(LegSecurityType_153.getString());
    FIX::LegSide LegSide_153('1');
    noLegs_0_1.set(LegSide_153);
    InstrumentLeg_153.insert(LegSide_153.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_153("STRING_1235853989");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_153);
    InstrumentLeg_153.insert(LegStateOrProvinceOfIssue_153.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_153("EUR");
    noLegs_0_1.set(LegStrikeCurrency_153);
    InstrumentLeg_153.insert(LegStrikeCurrency_153.getString());
    FIX::LegStrikePrice LegStrikePrice_153;
    LegStrikePrice_153.setString("16413591");
    noLegs_0_1.set(LegStrikePrice_153);
    InstrumentLeg_153.insert(LegStrikePrice_153.getString());
    FIX::LegSymbol LegSymbol_153("STRING_1095602339");
    noLegs_0_1.set(LegSymbol_153);
    InstrumentLeg_153.insert(LegSymbol_153.getString());
    FIX::LegSymbolSfx LegSymbolSfx_153("STRING_405934180");
    noLegs_0_1.set(LegSymbolSfx_153);
    InstrumentLeg_153.insert(LegSymbolSfx_153.getString());
    FIX::LegTimeUnit LegTimeUnit_153("STRING_2095458057");
    noLegs_0_1.set(LegTimeUnit_153);
    InstrumentLeg_153.insert(LegTimeUnit_153.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_153("STRING_193957438");
    noLegs_0_1.set(LegUnitOfMeasure_153);
    InstrumentLeg_153.insert(LegUnitOfMeasure_153.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_153;
    LegUnitOfMeasureQty_153.setString("20901655");
    noLegs_0_1.set(LegUnitOfMeasureQty_153);
    InstrumentLeg_153.insert(LegUnitOfMeasureQty_153.getString());
    all_values.push_back(InstrumentLeg_153);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_296;
      FIX::LegSecurityAltID LegSecurityAltID_296("STRING_551082053");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_296);
      LegSecAltIDGrp_NoLegSecurityAltID_296.insert(LegSecurityAltID_296.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_296("STRING_2028361976");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_296);
      LegSecAltIDGrp_NoLegSecurityAltID_296.insert(LegSecurityAltIDSource_296.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_296);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_297;
      FIX::LegSecurityAltID LegSecurityAltID_297("STRING_481519100");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_297);
      LegSecAltIDGrp_NoLegSecurityAltID_297.insert(LegSecurityAltID_297.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_297("STRING_1462061500");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_297);
      LegSecAltIDGrp_NoLegSecurityAltID_297.insert(LegSecurityAltIDSource_297.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_297);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_102;
  FIX::AttachmentPoint AttachmentPoint_102;
  AttachmentPoint_102.setString("29.140000");
  msg.set(AttachmentPoint_102);
  Instrument_102.insert(AttachmentPoint_102.getString());
  FIX::CFICode CFICode_107("STRING_540482417");
  msg.set(CFICode_107);
  Instrument_102.insert(CFICode_107.getString());
  FIX::CPProgram CPProgram_102(1);
  msg.set(CPProgram_102);
  Instrument_102.insert(CPProgram_102.getString());
  FIX::CPRegType CPRegType_102("STRING_1802699979");
  msg.set(CPRegType_102);
  Instrument_102.insert(CPRegType_102.getString());
  FIX::CapPrice CapPrice_102;
  CapPrice_102.setString("5457202");
  msg.set(CapPrice_102);
  Instrument_102.insert(CapPrice_102.getString());
  FIX::ContractMultiplier ContractMultiplier_102;
  ContractMultiplier_102.setString("11604142");
  msg.set(ContractMultiplier_102);
  Instrument_102.insert(ContractMultiplier_102.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_102(2);
  msg.set(ContractMultiplierUnit_102);
  Instrument_102.insert(ContractMultiplierUnit_102.getString());
  FIX::ContractSettlMonth ContractSettlMonth_102("MONTHYEAR_1956583960");
  msg.set(ContractSettlMonth_102);
  Instrument_102.insert(ContractSettlMonth_102.getString());
  FIX::CountryOfIssue CountryOfIssue_102("COUNTRY_913957592");
  msg.set(CountryOfIssue_102);
  Instrument_102.insert(CountryOfIssue_102.getString());
  FIX::CouponPaymentDate CouponPaymentDate_102("LOCALMKTDATE_1917285386");
  msg.set(CouponPaymentDate_102);
  Instrument_102.insert(CouponPaymentDate_102.getString());
  FIX::CouponRate CouponRate_102;
  CouponRate_102.setString("50.040000");
  msg.set(CouponRate_102);
  Instrument_102.insert(CouponRate_102.getString());
  FIX::CreditRating CreditRating_102("STRING_1553555823");
  msg.set(CreditRating_102);
  Instrument_102.insert(CreditRating_102.getString());
  FIX::DatedDate DatedDate_102("LOCALMKTDATE_1489143735");
  msg.set(DatedDate_102);
  Instrument_102.insert(DatedDate_102.getString());
  FIX::DetachmentPoint DetachmentPoint_102;
  DetachmentPoint_102.setString("2.400000");
  msg.set(DetachmentPoint_102);
  Instrument_102.insert(DetachmentPoint_102.getString());
  FIX::EncodedIssuer EncodedIssuer_102("DATA_1539443499");
  msg.set(EncodedIssuer_102);
  Instrument_102.insert(EncodedIssuer_102.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_102(599990278);
  msg.set(EncodedIssuerLen_102);
  Instrument_102.insert(EncodedIssuerLen_102.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_102("DATA_1495725328");
  msg.set(EncodedSecurityDesc_102);
  Instrument_102.insert(EncodedSecurityDesc_102.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_102(627813840);
  msg.set(EncodedSecurityDescLen_102);
  Instrument_102.insert(EncodedSecurityDescLen_102.getString());
  FIX::ExerciseStyle ExerciseStyle_102(2);
  msg.set(ExerciseStyle_102);
  Instrument_102.insert(ExerciseStyle_102.getString());
  FIX::Factor Factor_102;
  Factor_102.setString("18266276");
  msg.set(Factor_102);
  Instrument_102.insert(Factor_102.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_102(true);
  msg.set(FlexProductEligibilityIndicator_102);
  Instrument_102.insert(FlexProductEligibilityIndicator_102.getString());
  FIX::FlexibleIndicator FlexibleIndicator_102(true);
  msg.set(FlexibleIndicator_102);
  Instrument_102.insert(FlexibleIndicator_102.getString());
  FIX::FloorPrice FloorPrice_102;
  FloorPrice_102.setString("850782");
  msg.set(FloorPrice_102);
  Instrument_102.insert(FloorPrice_102.getString());
  FIX::FlowScheduleType FlowScheduleType_102(0);
  msg.set(FlowScheduleType_102);
  Instrument_102.insert(FlowScheduleType_102.getString());
  FIX::InstrRegistry InstrRegistry_102("STRING_598948128");
  msg.set(InstrRegistry_102);
  Instrument_102.insert(InstrRegistry_102.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_102('2');
  msg.set(InstrmtAssignmentMethod_102);
  Instrument_102.insert(InstrmtAssignmentMethod_102.getString());
  FIX::InterestAccrualDate InterestAccrualDate_102("LOCALMKTDATE_1620462124");
  msg.set(InterestAccrualDate_102);
  Instrument_102.insert(InterestAccrualDate_102.getString());
  FIX::IssueDate IssueDate_102("LOCALMKTDATE_1150030182");
  msg.set(IssueDate_102);
  Instrument_102.insert(IssueDate_102.getString());
  FIX::Issuer Issuer_102("STRING_2056122145");
  msg.set(Issuer_102);
  Instrument_102.insert(Issuer_102.getString());
  FIX::ListMethod ListMethod_102(0);
  msg.set(ListMethod_102);
  Instrument_102.insert(ListMethod_102.getString());
  FIX::LocaleOfIssue LocaleOfIssue_102("STRING_464608034");
  msg.set(LocaleOfIssue_102);
  Instrument_102.insert(LocaleOfIssue_102.getString());
  FIX::MaturityDate MaturityDate_102("LOCALMKTDATE_361121411");
  msg.set(MaturityDate_102);
  Instrument_102.insert(MaturityDate_102.getString());
  FIX::MaturityMonthYear MaturityMonthYear_102("MONTHYEAR_494979994");
  msg.set(MaturityMonthYear_102);
  Instrument_102.insert(MaturityMonthYear_102.getString());
  FIX::MaturityTime MaturityTime_102("TZTIMEONLY_1485317378");
  msg.set(MaturityTime_102);
  Instrument_102.insert(MaturityTime_102.getString());
  FIX::MinPriceIncrement MinPriceIncrement_102;
  MinPriceIncrement_102.setString("163377");
  msg.set(MinPriceIncrement_102);
  Instrument_102.insert(MinPriceIncrement_102.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_102;
  MinPriceIncrementAmount_102.setString("10407002");
  msg.set(MinPriceIncrementAmount_102);
  Instrument_102.insert(MinPriceIncrementAmount_102.getString());
  FIX::NTPositionLimit NTPositionLimit_102(498247959);
  msg.set(NTPositionLimit_102);
  Instrument_102.insert(NTPositionLimit_102.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_102;
  NotionalPercentageOutstanding_102.setString("13.600000");
  msg.set(NotionalPercentageOutstanding_102);
  Instrument_102.insert(NotionalPercentageOutstanding_102.getString());
  FIX::OptAttribute OptAttribute_102('8');
  msg.set(OptAttribute_102);
  Instrument_102.insert(OptAttribute_102.getString());
  FIX::OptPayoutAmount OptPayoutAmount_102;
  OptPayoutAmount_102.setString("14122055");
  msg.set(OptPayoutAmount_102);
  Instrument_102.insert(OptPayoutAmount_102.getString());
  FIX::OptPayoutType OptPayoutType_102(3);
  msg.set(OptPayoutType_102);
  Instrument_102.insert(OptPayoutType_102.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_102;
  OriginalNotionalPercentageOutstanding_102.setString("55.960000");
  msg.set(OriginalNotionalPercentageOutstanding_102);
  Instrument_102.insert(OriginalNotionalPercentageOutstanding_102.getString());
  FIX::Pool Pool_102("STRING_818277726");
  msg.set(Pool_102);
  Instrument_102.insert(Pool_102.getString());
  FIX::PositionLimit PositionLimit_102(165673185);
  msg.set(PositionLimit_102);
  Instrument_102.insert(PositionLimit_102.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_102("STRING_STD");
  msg.set(PriceQuoteMethod_102);
  Instrument_102.insert(PriceQuoteMethod_102.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_102("STRING_210237577");
  msg.set(PriceUnitOfMeasure_102);
  Instrument_102.insert(PriceUnitOfMeasure_102.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_102;
  PriceUnitOfMeasureQty_102.setString("7656634");
  msg.set(PriceUnitOfMeasureQty_102);
  Instrument_102.insert(PriceUnitOfMeasureQty_102.getString());
  FIX::Product Product_110(7);
  msg.set(Product_110);
  Instrument_102.insert(Product_110.getString());
  FIX::ProductComplex ProductComplex_102("STRING_838051418");
  msg.set(ProductComplex_102);
  Instrument_102.insert(ProductComplex_102.getString());
  FIX::PutOrCall PutOrCall_102(1);
  msg.set(PutOrCall_102);
  Instrument_102.insert(PutOrCall_102.getString());
  FIX::RedemptionDate RedemptionDate_102("LOCALMKTDATE_875447920");
  msg.set(RedemptionDate_102);
  Instrument_102.insert(RedemptionDate_102.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_102("STRING_959740788");
  msg.set(RepoCollateralSecurityType_102);
  Instrument_102.insert(RepoCollateralSecurityType_102.getString());
  FIX::RepurchaseRate RepurchaseRate_102;
  RepurchaseRate_102.setString("25.050000");
  msg.set(RepurchaseRate_102);
  Instrument_102.insert(RepurchaseRate_102.getString());
  FIX::RepurchaseTerm RepurchaseTerm_102(960526152);
  msg.set(RepurchaseTerm_102);
  Instrument_102.insert(RepurchaseTerm_102.getString());
  FIX::RestructuringType RestructuringType_102("STRING_FR");
  msg.set(RestructuringType_102);
  Instrument_102.insert(RestructuringType_102.getString());
  FIX::SecurityDesc SecurityDesc_102("STRING_1078990633");
  msg.set(SecurityDesc_102);
  Instrument_102.insert(SecurityDesc_102.getString());
  FIX::SecurityExchange SecurityExchange_102("EXCHANGE_988286321");
  msg.set(SecurityExchange_102);
  Instrument_102.insert(SecurityExchange_102.getString());
  FIX::SecurityGroup SecurityGroup_102("STRING_502383045");
  msg.set(SecurityGroup_102);
  Instrument_102.insert(SecurityGroup_102.getString());
  FIX::SecurityID SecurityID_102("STRING_81537167");
  msg.set(SecurityID_102);
  Instrument_102.insert(SecurityID_102.getString());
  FIX::SecurityIDSource SecurityIDSource_102("STRING_L");
  msg.set(SecurityIDSource_102);
  Instrument_102.insert(SecurityIDSource_102.getString());
  FIX::SecurityStatus SecurityStatus_103("STRING_2");
  msg.set(SecurityStatus_103);
  Instrument_102.insert(SecurityStatus_103.getString());
  FIX::SecuritySubType SecuritySubType_106("STRING_546145202");
  msg.set(SecuritySubType_106);
  Instrument_102.insert(SecuritySubType_106.getString());
  FIX::SecurityType SecurityType_110("STRING_MBS");
  msg.set(SecurityType_110);
  Instrument_102.insert(SecurityType_110.getString());
  FIX::Seniority Seniority_102("STRING_SB");
  msg.set(Seniority_102);
  Instrument_102.insert(Seniority_102.getString());
  FIX::SettlMethod SettlMethod_102('C');
  msg.set(SettlMethod_102);
  Instrument_102.insert(SettlMethod_102.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_102("STRING_1274383971");
  msg.set(SettleOnOpenFlag_102);
  Instrument_102.insert(SettleOnOpenFlag_102.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_102("STRING_1992560895");
  msg.set(StateOrProvinceOfIssue_102);
  Instrument_102.insert(StateOrProvinceOfIssue_102.getString());
  FIX::StrikeCurrency StrikeCurrency_102("JPY");
  msg.set(StrikeCurrency_102);
  Instrument_102.insert(StrikeCurrency_102.getString());
  FIX::StrikeMultiplier StrikeMultiplier_102;
  StrikeMultiplier_102.setString("6948778");
  msg.set(StrikeMultiplier_102);
  Instrument_102.insert(StrikeMultiplier_102.getString());
  FIX::StrikePrice StrikePrice_102;
  StrikePrice_102.setString("17944324");
  msg.set(StrikePrice_102);
  Instrument_102.insert(StrikePrice_102.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_102(3);
  msg.set(StrikePriceBoundaryMethod_102);
  Instrument_102.insert(StrikePriceBoundaryMethod_102.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_102;
  StrikePriceBoundaryPrecision_102.setString("97.870000");
  msg.set(StrikePriceBoundaryPrecision_102);
  Instrument_102.insert(StrikePriceBoundaryPrecision_102.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_102(1);
  msg.set(StrikePriceDeterminationMethod_102);
  Instrument_102.insert(StrikePriceDeterminationMethod_102.getString());
  FIX::StrikeValue StrikeValue_102;
  StrikeValue_102.setString("11707979");
  msg.set(StrikeValue_102);
  Instrument_102.insert(StrikeValue_102.getString());
  FIX::Symbol Symbol_102("STRING_223458328");
  msg.set(Symbol_102);
  Instrument_102.insert(Symbol_102.getString());
  FIX::SymbolSfx SymbolSfx_102("STRING_CD");
  msg.set(SymbolSfx_102);
  Instrument_102.insert(SymbolSfx_102.getString());
  FIX::TimeUnit TimeUnit_102("STRING_D");
  msg.set(TimeUnit_102);
  Instrument_102.insert(TimeUnit_102.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_102(1);
  msg.set(UnderlyingPriceDeterminationMethod_102);
  Instrument_102.insert(UnderlyingPriceDeterminationMethod_102.getString());
  FIX::UnitOfMeasure UnitOfMeasure_102("STRING_lbs");
  msg.set(UnitOfMeasure_102);
  Instrument_102.insert(UnitOfMeasure_102.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_102;
  UnitOfMeasureQty_102.setString("20115132");
  msg.set(UnitOfMeasureQty_102);
  Instrument_102.insert(UnitOfMeasureQty_102.getString());
  FIX::ValuationMethod ValuationMethod_102("STRING_CDS");
  msg.set(ValuationMethod_102);
  Instrument_102.insert(ValuationMethod_102.getString());
  all_values.push_back(Instrument_102);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReportRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_202;
    FIX::ComplexEventCondition ComplexEventCondition_202(1);
    noComplexEvents_0_0.set(ComplexEventCondition_202);
    ComplexEvents_NoComplexEvents_202.insert(ComplexEventCondition_202.getString());
    FIX::ComplexEventPrice ComplexEventPrice_202;
    ComplexEventPrice_202.setString("11082526");
    noComplexEvents_0_0.set(ComplexEventPrice_202);
    ComplexEvents_NoComplexEvents_202.insert(ComplexEventPrice_202.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_202(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_202);
    ComplexEvents_NoComplexEvents_202.insert(ComplexEventPriceBoundaryMethod_202.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_202;
    ComplexEventPriceBoundaryPrecision_202.setString("27.370000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_202);
    ComplexEvents_NoComplexEvents_202.insert(ComplexEventPriceBoundaryPrecision_202.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_202(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_202);
    ComplexEvents_NoComplexEvents_202.insert(ComplexEventPriceTimeType_202.getString());
    FIX::ComplexEventType ComplexEventType_202(6);
    noComplexEvents_0_0.set(ComplexEventType_202);
    ComplexEvents_NoComplexEvents_202.insert(ComplexEventType_202.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_202;
    ComplexOptPayoutAmount_202.setString("15045999");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_202);
    ComplexEvents_NoComplexEvents_202.insert(ComplexOptPayoutAmount_202.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_202);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_405;
      FIX::ComplexEventEndDate ComplexEventEndDate_405(FIX::UTCTIMESTAMP(19, 40, 19, 3, 1, 2002));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_405);
      ComplexEventDates_NoComplexEventDates_405.insert(ComplexEventEndDate_405.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_405(FIX::UTCTIMESTAMP(4, 45, 5, 2, 9, 2000));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_405);
      ComplexEventDates_NoComplexEventDates_405.insert(ComplexEventStartDate_405.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_405);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_820;
        FIX::ComplexEventEndTime ComplexEventEndTime_820(FIX::UTCTIMEONLY(16, 34, 29));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_820);
        ComplexEventTimes_NoComplexEventTimes_820.insert(ComplexEventEndTime_820.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_820(FIX::UTCTIMEONLY(1, 17, 0));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_820);
        ComplexEventTimes_NoComplexEventTimes_820.insert(ComplexEventStartTime_820.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_820);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_406;
      FIX::ComplexEventEndDate ComplexEventEndDate_406(FIX::UTCTIMESTAMP(10, 5, 27, 11, 12, 2012));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_406);
      ComplexEventDates_NoComplexEventDates_406.insert(ComplexEventEndDate_406.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_406(FIX::UTCTIMESTAMP(7, 31, 47, 22, 3, 2015));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_406);
      ComplexEventDates_NoComplexEventDates_406.insert(ComplexEventStartDate_406.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_406);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_821;
        FIX::ComplexEventEndTime ComplexEventEndTime_821(FIX::UTCTIMEONLY(7, 45, 43));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_821);
        ComplexEventTimes_NoComplexEventTimes_821.insert(ComplexEventEndTime_821.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_821(FIX::UTCTIMEONLY(17, 53, 56));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_821);
        ComplexEventTimes_NoComplexEventTimes_821.insert(ComplexEventStartTime_821.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_821);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_822;
        FIX::ComplexEventEndTime ComplexEventEndTime_822(FIX::UTCTIMEONLY(21, 23, 3));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_822);
        ComplexEventTimes_NoComplexEventTimes_822.insert(ComplexEventEndTime_822.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_822(FIX::UTCTIMEONLY(0, 12, 53));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_822);
        ComplexEventTimes_NoComplexEventTimes_822.insert(ComplexEventStartTime_822.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_822);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_823;
        FIX::ComplexEventEndTime ComplexEventEndTime_823(FIX::UTCTIMEONLY(22, 51, 13));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_823);
        ComplexEventTimes_NoComplexEventTimes_823.insert(ComplexEventEndTime_823.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_823(FIX::UTCTIMEONLY(6, 37, 13));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_823);
        ComplexEventTimes_NoComplexEventTimes_823.insert(ComplexEventStartTime_823.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_823);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_203;
    FIX::ComplexEventCondition ComplexEventCondition_203(2);
    noComplexEvents_0_1.set(ComplexEventCondition_203);
    ComplexEvents_NoComplexEvents_203.insert(ComplexEventCondition_203.getString());
    FIX::ComplexEventPrice ComplexEventPrice_203;
    ComplexEventPrice_203.setString("18180495");
    noComplexEvents_0_1.set(ComplexEventPrice_203);
    ComplexEvents_NoComplexEvents_203.insert(ComplexEventPrice_203.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_203(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_203);
    ComplexEvents_NoComplexEvents_203.insert(ComplexEventPriceBoundaryMethod_203.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_203;
    ComplexEventPriceBoundaryPrecision_203.setString("79.750000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_203);
    ComplexEvents_NoComplexEvents_203.insert(ComplexEventPriceBoundaryPrecision_203.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_203(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_203);
    ComplexEvents_NoComplexEvents_203.insert(ComplexEventPriceTimeType_203.getString());
    FIX::ComplexEventType ComplexEventType_203(9);
    noComplexEvents_0_1.set(ComplexEventType_203);
    ComplexEvents_NoComplexEvents_203.insert(ComplexEventType_203.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_203;
    ComplexOptPayoutAmount_203.setString("16356859");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_203);
    ComplexEvents_NoComplexEvents_203.insert(ComplexOptPayoutAmount_203.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_203);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_407;
      FIX::ComplexEventEndDate ComplexEventEndDate_407(FIX::UTCTIMESTAMP(0, 7, 45, 14, 1, 2004));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_407);
      ComplexEventDates_NoComplexEventDates_407.insert(ComplexEventEndDate_407.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_407(FIX::UTCTIMESTAMP(1, 57, 11, 14, 2, 2017));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_407);
      ComplexEventDates_NoComplexEventDates_407.insert(ComplexEventStartDate_407.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_407);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_824;
        FIX::ComplexEventEndTime ComplexEventEndTime_824(FIX::UTCTIMEONLY(2, 22, 8));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_824);
        ComplexEventTimes_NoComplexEventTimes_824.insert(ComplexEventEndTime_824.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_824(FIX::UTCTIMEONLY(9, 45, 41));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_824);
        ComplexEventTimes_NoComplexEventTimes_824.insert(ComplexEventStartTime_824.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_824);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_408;
      FIX::ComplexEventEndDate ComplexEventEndDate_408(FIX::UTCTIMESTAMP(1, 33, 6, 4, 10, 2015));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_408);
      ComplexEventDates_NoComplexEventDates_408.insert(ComplexEventEndDate_408.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_408(FIX::UTCTIMESTAMP(21, 46, 55, 10, 9, 2011));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_408);
      ComplexEventDates_NoComplexEventDates_408.insert(ComplexEventStartDate_408.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_408);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_825;
        FIX::ComplexEventEndTime ComplexEventEndTime_825(FIX::UTCTIMEONLY(12, 33, 39));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_825);
        ComplexEventTimes_NoComplexEventTimes_825.insert(ComplexEventEndTime_825.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_825(FIX::UTCTIMEONLY(15, 54, 13));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_825);
        ComplexEventTimes_NoComplexEventTimes_825.insert(ComplexEventStartTime_825.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_825);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_826;
        FIX::ComplexEventEndTime ComplexEventEndTime_826(FIX::UTCTIMEONLY(8, 28, 3));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_826);
        ComplexEventTimes_NoComplexEventTimes_826.insert(ComplexEventEndTime_826.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_826(FIX::UTCTIMEONLY(1, 40, 41));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_826);
        ComplexEventTimes_NoComplexEventTimes_826.insert(ComplexEventStartTime_826.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_826);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_827;
        FIX::ComplexEventEndTime ComplexEventEndTime_827(FIX::UTCTIMEONLY(22, 7, 49));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_827);
        ComplexEventTimes_NoComplexEventTimes_827.insert(ComplexEventEndTime_827.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_827(FIX::UTCTIMEONLY(20, 23, 14));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_827);
        ComplexEventTimes_NoComplexEventTimes_827.insert(ComplexEventStartTime_827.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_827);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_409;
      FIX::ComplexEventEndDate ComplexEventEndDate_409(FIX::UTCTIMESTAMP(1, 1, 56, 13, 1, 2014));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_409);
      ComplexEventDates_NoComplexEventDates_409.insert(ComplexEventEndDate_409.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_409(FIX::UTCTIMESTAMP(12, 58, 20, 10, 2, 2000));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_409);
      ComplexEventDates_NoComplexEventDates_409.insert(ComplexEventStartDate_409.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_409);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_828;
        FIX::ComplexEventEndTime ComplexEventEndTime_828(FIX::UTCTIMEONLY(19, 43, 30));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_828);
        ComplexEventTimes_NoComplexEventTimes_828.insert(ComplexEventEndTime_828.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_828(FIX::UTCTIMEONLY(8, 3, 5));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_828);
        ComplexEventTimes_NoComplexEventTimes_828.insert(ComplexEventStartTime_828.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_828);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradeCaptureReportRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_203;
    FIX::EventDate EventDate_203("LOCALMKTDATE_2054645173");
    noEvents_0_0.set(EventDate_203);
    EvntGrp_NoEvents_203.insert(EventDate_203.getString());
    FIX::EventPx EventPx_203;
    EventPx_203.setString("683223");
    noEvents_0_0.set(EventPx_203);
    EvntGrp_NoEvents_203.insert(EventPx_203.getString());
    FIX::EventText EventText_203("STRING_2084757749");
    noEvents_0_0.set(EventText_203);
    EvntGrp_NoEvents_203.insert(EventText_203.getString());
    FIX::EventTime EventTime_203(FIX::UTCTIMESTAMP(0, 44, 45, 6, 10, 2016));
    noEvents_0_0.set(EventTime_203);
    EvntGrp_NoEvents_203.insert(EventTime_203.getString());
    FIX::EventType EventType_203(7);
    noEvents_0_0.set(EventType_203);
    EvntGrp_NoEvents_203.insert(EventType_203.getString());
    all_values.push_back(EvntGrp_NoEvents_203);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_204;
    FIX::EventDate EventDate_204("LOCALMKTDATE_988576498");
    noEvents_0_1.set(EventDate_204);
    EvntGrp_NoEvents_204.insert(EventDate_204.getString());
    FIX::EventPx EventPx_204;
    EventPx_204.setString("18376074");
    noEvents_0_1.set(EventPx_204);
    EvntGrp_NoEvents_204.insert(EventPx_204.getString());
    FIX::EventText EventText_204("STRING_1993420358");
    noEvents_0_1.set(EventText_204);
    EvntGrp_NoEvents_204.insert(EventText_204.getString());
    FIX::EventTime EventTime_204(FIX::UTCTIMESTAMP(2, 28, 51, 4, 6, 2008));
    noEvents_0_1.set(EventTime_204);
    EvntGrp_NoEvents_204.insert(EventTime_204.getString());
    FIX::EventType EventType_204(12);
    noEvents_0_1.set(EventType_204);
    EvntGrp_NoEvents_204.insert(EventType_204.getString());
    all_values.push_back(EvntGrp_NoEvents_204);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_215;
    FIX::InstrumentPartyID InstrumentPartyID_215("STRING_601911381");
    noInstrumentParties_0_0.set(InstrumentPartyID_215);
    InstrumentParties_NoInstrumentParties_215.insert(InstrumentPartyID_215.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_215('4');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_215);
    InstrumentParties_NoInstrumentParties_215.insert(InstrumentPartyIDSource_215.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_215(91726387);
    noInstrumentParties_0_0.set(InstrumentPartyRole_215);
    InstrumentParties_NoInstrumentParties_215.insert(InstrumentPartyRole_215.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_215);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_422;
      FIX::InstrumentPartySubID InstrumentPartySubID_422("STRING_395831915");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_422);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_422.insert(InstrumentPartySubID_422.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_422(883019770);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_422);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_422.insert(InstrumentPartySubIDType_422.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_422);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_423;
      FIX::InstrumentPartySubID InstrumentPartySubID_423("STRING_597433969");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_423);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_423.insert(InstrumentPartySubID_423.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_423(1932609795);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_423);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_423.insert(InstrumentPartySubIDType_423.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_423);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradeCaptureReportRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_193;
    FIX::SecurityAltID SecurityAltID_193("STRING_665756333");
    noSecurityAltID_0_0.set(SecurityAltID_193);
    SecAltIDGrp_NoSecurityAltID_193.insert(SecurityAltID_193.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_193("STRING_1869883897");
    noSecurityAltID_0_0.set(SecurityAltIDSource_193);
    SecAltIDGrp_NoSecurityAltID_193.insert(SecurityAltIDSource_193.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_193);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_204;
  FIX::SecurityXML SecurityXML_205("XMLDATA_882135466");
  msg.set(SecurityXML_205);
  FIX::SecurityXMLLen SecurityXMLLen_102(1592915958);
  msg.set(SecurityXMLLen_102);
  FIX::SecurityXMLSchema SecurityXMLSchema_102("STRING_769673293");
  msg.set(SecurityXMLSchema_102);
  SecurityXML_204.insert(SecurityXMLSchema_102.getString());
  all_values.push_back(SecurityXML_204);
  all_compo_names.insert("SecurityXML");

  // InstrumentExtension
  multiset<string> InstrumentExtension_19;
  FIX::DeliveryForm DeliveryForm_19(2);
  msg.set(DeliveryForm_19);
  InstrumentExtension_19.insert(DeliveryForm_19.getString());
  FIX::PctAtRisk PctAtRisk_19;
  PctAtRisk_19.setString("56.800000");
  msg.set(PctAtRisk_19);
  InstrumentExtension_19.insert(PctAtRisk_19.getString());
  all_values.push_back(InstrumentExtension_19);
  all_compo_names.insert("InstrumentExtension");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_37;
    FIX::InstrAttribType InstrAttribType_37(10);
    noInstrAttrib_0_0.set(InstrAttribType_37);
    AttrbGrp_NoInstrAttrib_37.insert(InstrAttribType_37.getString());
    FIX::InstrAttribValue InstrAttribValue_37("STRING_1614454166");
    noInstrAttrib_0_0.set(InstrAttribValue_37);
    AttrbGrp_NoInstrAttrib_37.insert(InstrAttribValue_37.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_37);
    all_compo_names.insert("AttrbGrp.NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::TradeCaptureReportRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_162;
    FIX::PartyID PartyID_162("STRING_2140588423");
    noPartyIDs_0_0.set(PartyID_162);
    Parties_NoPartyIDs_162.insert(PartyID_162.getString());
    FIX::PartyIDSource PartyIDSource_162('4');
    noPartyIDs_0_0.set(PartyIDSource_162);
    Parties_NoPartyIDs_162.insert(PartyIDSource_162.getString());
    FIX::PartyRole PartyRole_162(47);
    noPartyIDs_0_0.set(PartyRole_162);
    Parties_NoPartyIDs_162.insert(PartyRole_162.getString());
    all_values.push_back(Parties_NoPartyIDs_162);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_346;
      FIX::PartySubID PartySubID_346("STRING_1646520985");
      noPartySubIDs_0_1_0.set(PartySubID_346);
      PtysSubGrp_NoPartySubIDs_346.insert(PartySubID_346.getString());
      FIX::PartySubIDType PartySubIDType_346(25);
      noPartySubIDs_0_1_0.set(PartySubIDType_346);
      PtysSubGrp_NoPartySubIDs_346.insert(PartySubIDType_346.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_346);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_347;
      FIX::PartySubID PartySubID_347("STRING_1068480093");
      noPartySubIDs_0_1_1.set(PartySubID_347);
      PtysSubGrp_NoPartySubIDs_347.insert(PartySubID_347.getString());
      FIX::PartySubIDType PartySubIDType_347(26);
      noPartySubIDs_0_1_1.set(PartySubIDType_347);
      PtysSubGrp_NoPartySubIDs_347.insert(PartySubIDType_347.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_347);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_163;
    FIX::PartyID PartyID_163("STRING_1870661762");
    noPartyIDs_0_1.set(PartyID_163);
    Parties_NoPartyIDs_163.insert(PartyID_163.getString());
    FIX::PartyIDSource PartyIDSource_163('9');
    noPartyIDs_0_1.set(PartyIDSource_163);
    Parties_NoPartyIDs_163.insert(PartyIDSource_163.getString());
    FIX::PartyRole PartyRole_163(73);
    noPartyIDs_0_1.set(PartyRole_163);
    Parties_NoPartyIDs_163.insert(PartyRole_163.getString());
    all_values.push_back(Parties_NoPartyIDs_163);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_348;
      FIX::PartySubID PartySubID_348("STRING_334431204");
      noPartySubIDs_1_1_0.set(PartySubID_348);
      PtysSubGrp_NoPartySubIDs_348.insert(PartySubID_348.getString());
      FIX::PartySubIDType PartySubIDType_348(17);
      noPartySubIDs_1_1_0.set(PartySubIDType_348);
      PtysSubGrp_NoPartySubIDs_348.insert(PartySubIDType_348.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_348);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // TrdCapDtGrp
  // Group TrdCapDtGrp.NoDates
  {
    FIX50SP2::TradeCaptureReportRequest::NoDates noDates_0_0;
    // TrdCapDtGrp.NoDates
    multiset<string> TrdCapDtGrp_NoDates_0;
    FIX::LastUpdateTime LastUpdateTime_8(FIX::UTCTIMESTAMP(17, 49, 7, 25, 8, 2012));
    noDates_0_0.set(LastUpdateTime_8);
    TrdCapDtGrp_NoDates_0.insert(LastUpdateTime_8.getString());
    FIX::TradeDate TradeDate_30("LOCALMKTDATE_786590963");
    noDates_0_0.set(TradeDate_30);
    TrdCapDtGrp_NoDates_0.insert(TradeDate_30.getString());
    FIX::TransactTime TransactTime_75(FIX::UTCTIMESTAMP(1, 47, 13, 16, 9, 2013));
    noDates_0_0.set(TransactTime_75);
    TrdCapDtGrp_NoDates_0.insert(TransactTime_75.getString());
    all_values.push_back(TrdCapDtGrp_NoDates_0);
    all_compo_names.insert("TrdCapDtGrp.NoDates");

    msg.addGroup(noDates_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::TradeCaptureReportRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_149;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_149("DATA_524541272");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_149);
    UnderlyingInstrument_149.insert(EncodedUnderlyingIssuer_149.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_149(1963068807);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_149);
    UnderlyingInstrument_149.insert(EncodedUnderlyingIssuerLen_149.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_149("DATA_218827003");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_149);
    UnderlyingInstrument_149.insert(EncodedUnderlyingSecurityDesc_149.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_149(2128694529);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_149);
    UnderlyingInstrument_149.insert(EncodedUnderlyingSecurityDescLen_149.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_149;
    UnderlyingAdjustedQuantity_149.setString("14621061");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_149);
    UnderlyingInstrument_149.insert(UnderlyingAdjustedQuantity_149.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_149;
    UnderlyingAllocationPercent_149.setString("48.750000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_149);
    UnderlyingInstrument_149.insert(UnderlyingAllocationPercent_149.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_149;
    UnderlyingAttachmentPoint_149.setString("9.750000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_149);
    UnderlyingInstrument_149.insert(UnderlyingAttachmentPoint_149.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_149("STRING_675453851");
    noUnderlyings_0_0.set(UnderlyingCFICode_149);
    UnderlyingInstrument_149.insert(UnderlyingCFICode_149.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_149("STRING_1717472990");
    noUnderlyings_0_0.set(UnderlyingCPProgram_149);
    UnderlyingInstrument_149.insert(UnderlyingCPProgram_149.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_149("STRING_903421392");
    noUnderlyings_0_0.set(UnderlyingCPRegType_149);
    UnderlyingInstrument_149.insert(UnderlyingCPRegType_149.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_149;
    UnderlyingCapValue_149.setString("9624655");
    noUnderlyings_0_0.set(UnderlyingCapValue_149);
    UnderlyingInstrument_149.insert(UnderlyingCapValue_149.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_149;
    UnderlyingCashAmount_149.setString("20425624");
    noUnderlyings_0_0.set(UnderlyingCashAmount_149);
    UnderlyingInstrument_149.insert(UnderlyingCashAmount_149.getString());
    FIX::UnderlyingCashType UnderlyingCashType_149("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_149);
    UnderlyingInstrument_149.insert(UnderlyingCashType_149.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_149;
    UnderlyingContractMultiplier_149.setString("13412036");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_149);
    UnderlyingInstrument_149.insert(UnderlyingContractMultiplier_149.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_149(14367957);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_149);
    UnderlyingInstrument_149.insert(UnderlyingContractMultiplierUnit_149.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_149("COUNTRY_1968115715");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_149);
    UnderlyingInstrument_149.insert(UnderlyingCountryOfIssue_149.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_149("LOCALMKTDATE_455477823");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_149);
    UnderlyingInstrument_149.insert(UnderlyingCouponPaymentDate_149.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_149;
    UnderlyingCouponRate_149.setString("10.470000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_149);
    UnderlyingInstrument_149.insert(UnderlyingCouponRate_149.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_149("STRING_336021334");
    noUnderlyings_0_0.set(UnderlyingCreditRating_149);
    UnderlyingInstrument_149.insert(UnderlyingCreditRating_149.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_149("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_149);
    UnderlyingInstrument_149.insert(UnderlyingCurrency_149.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_149;
    UnderlyingCurrentValue_149.setString("5738108");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_149);
    UnderlyingInstrument_149.insert(UnderlyingCurrentValue_149.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_149;
    UnderlyingDetachmentPoint_149.setString("42.830000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_149);
    UnderlyingInstrument_149.insert(UnderlyingDetachmentPoint_149.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_149;
    UnderlyingDirtyPrice_149.setString("7939985");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_149);
    UnderlyingInstrument_149.insert(UnderlyingDirtyPrice_149.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_149;
    UnderlyingEndPrice_149.setString("15812736");
    noUnderlyings_0_0.set(UnderlyingEndPrice_149);
    UnderlyingInstrument_149.insert(UnderlyingEndPrice_149.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_149;
    UnderlyingEndValue_149.setString("13749798");
    noUnderlyings_0_0.set(UnderlyingEndValue_149);
    UnderlyingInstrument_149.insert(UnderlyingEndValue_149.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_149(1829705968);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_149);
    UnderlyingInstrument_149.insert(UnderlyingExerciseStyle_149.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_149;
    UnderlyingFXRate_149.setString("4510931");
    noUnderlyings_0_0.set(UnderlyingFXRate_149);
    UnderlyingInstrument_149.insert(UnderlyingFXRate_149.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_149('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_149);
    UnderlyingInstrument_149.insert(UnderlyingFXRateCalc_149.getString());
    FIX::UnderlyingFactor UnderlyingFactor_149;
    UnderlyingFactor_149.setString("1849002");
    noUnderlyings_0_0.set(UnderlyingFactor_149);
    UnderlyingInstrument_149.insert(UnderlyingFactor_149.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_149(319329354);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_149);
    UnderlyingInstrument_149.insert(UnderlyingFlowScheduleType_149.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_149("STRING_283473971");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_149);
    UnderlyingInstrument_149.insert(UnderlyingInstrRegistry_149.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_149("LOCALMKTDATE_485410");
    noUnderlyings_0_0.set(UnderlyingIssueDate_149);
    UnderlyingInstrument_149.insert(UnderlyingIssueDate_149.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_149("STRING_538156357");
    noUnderlyings_0_0.set(UnderlyingIssuer_149);
    UnderlyingInstrument_149.insert(UnderlyingIssuer_149.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_149("STRING_264684852");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_149);
    UnderlyingInstrument_149.insert(UnderlyingLocaleOfIssue_149.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_149("LOCALMKTDATE_1462591555");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_149);
    UnderlyingInstrument_149.insert(UnderlyingMaturityDate_149.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_149("MONTHYEAR_384967585");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_149);
    UnderlyingInstrument_149.insert(UnderlyingMaturityMonthYear_149.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_149("TZTIMEONLY_1314375827");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_149);
    UnderlyingInstrument_149.insert(UnderlyingMaturityTime_149.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_149;
    UnderlyingNotionalPercentageOutstanding_149.setString("54.060000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_149);
    UnderlyingInstrument_149.insert(UnderlyingNotionalPercentageOutstanding_149.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_149('2');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_149);
    UnderlyingInstrument_149.insert(UnderlyingOptAttribute_149.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_149;
    UnderlyingOriginalNotionalPercentageOutstanding_149.setString("35.710000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_149);
    UnderlyingInstrument_149.insert(UnderlyingOriginalNotionalPercentageOutstanding_149.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_149("STRING_953027300");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_149);
    UnderlyingInstrument_149.insert(UnderlyingPriceUnitOfMeasure_149.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_149;
    UnderlyingPriceUnitOfMeasureQty_149.setString("19975194");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_149);
    UnderlyingInstrument_149.insert(UnderlyingPriceUnitOfMeasureQty_149.getString());
    FIX::UnderlyingProduct UnderlyingProduct_149(1308166167);
    noUnderlyings_0_0.set(UnderlyingProduct_149);
    UnderlyingInstrument_149.insert(UnderlyingProduct_149.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_149(146747274);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_149);
    UnderlyingInstrument_149.insert(UnderlyingPutOrCall_149.getString());
    FIX::UnderlyingPx UnderlyingPx_149;
    UnderlyingPx_149.setString("20118873");
    noUnderlyings_0_0.set(UnderlyingPx_149);
    UnderlyingInstrument_149.insert(UnderlyingPx_149.getString());
    FIX::UnderlyingQty UnderlyingQty_149;
    UnderlyingQty_149.setString("11287982");
    noUnderlyings_0_0.set(UnderlyingQty_149);
    UnderlyingInstrument_149.insert(UnderlyingQty_149.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_149("LOCALMKTDATE_602225097");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_149);
    UnderlyingInstrument_149.insert(UnderlyingRedemptionDate_149.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_149("STRING_595494769");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_149);
    UnderlyingInstrument_149.insert(UnderlyingRepoCollateralSecurityType_149.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_149;
    UnderlyingRepurchaseRate_149.setString("95.690000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_149);
    UnderlyingInstrument_149.insert(UnderlyingRepurchaseRate_149.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_149(962158417);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_149);
    UnderlyingInstrument_149.insert(UnderlyingRepurchaseTerm_149.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_149("STRING_561581591");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_149);
    UnderlyingInstrument_149.insert(UnderlyingRestructuringType_149.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_149("STRING_2038630420");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_149);
    UnderlyingInstrument_149.insert(UnderlyingSecurityDesc_149.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_149("EXCHANGE_2108682700");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_149);
    UnderlyingInstrument_149.insert(UnderlyingSecurityExchange_149.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_149("STRING_1355580146");
    noUnderlyings_0_0.set(UnderlyingSecurityID_149);
    UnderlyingInstrument_149.insert(UnderlyingSecurityID_149.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_149("STRING_1472420432");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_149);
    UnderlyingInstrument_149.insert(UnderlyingSecurityIDSource_149.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_149("STRING_1336178903");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_149);
    UnderlyingInstrument_149.insert(UnderlyingSecuritySubType_149.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_149("STRING_1037802466");
    noUnderlyings_0_0.set(UnderlyingSecurityType_149);
    UnderlyingInstrument_149.insert(UnderlyingSecurityType_149.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_149("STRING_1923513544");
    noUnderlyings_0_0.set(UnderlyingSeniority_149);
    UnderlyingInstrument_149.insert(UnderlyingSeniority_149.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_149("STRING_1095111602");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_149);
    UnderlyingInstrument_149.insert(UnderlyingSettlMethod_149.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_149(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_149);
    UnderlyingInstrument_149.insert(UnderlyingSettlementType_149.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_149;
    UnderlyingStartValue_149.setString("953592");
    noUnderlyings_0_0.set(UnderlyingStartValue_149);
    UnderlyingInstrument_149.insert(UnderlyingStartValue_149.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_149("STRING_1378585573");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_149);
    UnderlyingInstrument_149.insert(UnderlyingStateOrProvinceOfIssue_149.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_149("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_149);
    UnderlyingInstrument_149.insert(UnderlyingStrikeCurrency_149.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_149;
    UnderlyingStrikePrice_149.setString("16432704");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_149);
    UnderlyingInstrument_149.insert(UnderlyingStrikePrice_149.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_149("STRING_538296034");
    noUnderlyings_0_0.set(UnderlyingSymbol_149);
    UnderlyingInstrument_149.insert(UnderlyingSymbol_149.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_149("STRING_1018483193");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_149);
    UnderlyingInstrument_149.insert(UnderlyingSymbolSfx_149.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_149("STRING_810162605");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_149);
    UnderlyingInstrument_149.insert(UnderlyingTimeUnit_149.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_149("STRING_528857792");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_149);
    UnderlyingInstrument_149.insert(UnderlyingUnitOfMeasure_149.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_149;
    UnderlyingUnitOfMeasureQty_149.setString("9734401");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_149);
    UnderlyingInstrument_149.insert(UnderlyingUnitOfMeasureQty_149.getString());
    all_values.push_back(UnderlyingInstrument_149);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_299;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_299("STRING_1481885093");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_299);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_299.insert(UnderlyingSecurityAltID_299.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_299("STRING_823475885");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_299);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_299.insert(UnderlyingSecurityAltIDSource_299.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_299);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_300;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_300("STRING_41158696");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_300);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_300.insert(UnderlyingSecurityAltID_300.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_300("STRING_1628632367");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_300);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_300.insert(UnderlyingSecurityAltIDSource_300.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_300);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_301;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_301("STRING_687879607");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_301);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_301.insert(UnderlyingSecurityAltID_301.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_301("STRING_1169956931");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_301);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_301.insert(UnderlyingSecurityAltIDSource_301.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_301);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_289;
      FIX::UnderlyingStipType UnderlyingStipType_289("STRING_1283374376");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_289);
      UnderlyingStipulations_NoUnderlyingStips_289.insert(UnderlyingStipType_289.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_289("STRING_487292852");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_289);
      UnderlyingStipulations_NoUnderlyingStips_289.insert(UnderlyingStipValue_289.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_289);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_288;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_288("STRING_1844955967");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_288);
      UndlyInstrumentParties_NoUndlyInstrumentParties_288.insert(UnderlyingInstrumentPartyID_288.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_288('3');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_288);
      UndlyInstrumentParties_NoUndlyInstrumentParties_288.insert(UnderlyingInstrumentPartyIDSource_288.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_288(1006731285);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_288);
      UndlyInstrumentParties_NoUndlyInstrumentParties_288.insert(UnderlyingInstrumentPartyRole_288.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_288);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_575;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_575("STRING_1850860056");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_575);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_575.insert(UnderlyingInstrumentPartySubID_575.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_575(195426540);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_575);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_575.insert(UnderlyingInstrumentPartySubIDType_575.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_575);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_576;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_576("STRING_2090854931");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_576);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_576.insert(UnderlyingInstrumentPartySubID_576.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_576(1626889953);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_576);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_576.insert(UnderlyingInstrumentPartySubIDType_576.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_576);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_289;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_289("STRING_1290538142");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_289);
      UndlyInstrumentParties_NoUndlyInstrumentParties_289.insert(UnderlyingInstrumentPartyID_289.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_289('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_289);
      UndlyInstrumentParties_NoUndlyInstrumentParties_289.insert(UnderlyingInstrumentPartyIDSource_289.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_289(1722249204);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_289);
      UndlyInstrumentParties_NoUndlyInstrumentParties_289.insert(UnderlyingInstrumentPartyRole_289.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_289);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_577;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_577("STRING_241778479");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_577);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_577.insert(UnderlyingInstrumentPartySubID_577.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_577(208281164);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_577);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_577.insert(UnderlyingInstrumentPartySubIDType_577.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_577);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_578;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_578("STRING_17426845");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_578);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_578.insert(UnderlyingInstrumentPartySubID_578.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_578(780074514);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_578);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_578.insert(UnderlyingInstrumentPartySubIDType_578.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_578);
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
