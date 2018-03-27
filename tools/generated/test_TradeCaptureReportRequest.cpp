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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::TradeCaptureReportRequest msg;

  list<multiset<string>> all_values;
  multiset<string> TradeCaptureReportRequest_0;
  FIX::ClOrdID ClOrdID_49("STRING_462966166");
  msg.set(ClOrdID_49);
  TradeCaptureReportRequest_0.insert(ClOrdID_49.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_27("LOCALMKTDATE_1419805478");
  msg.set(ClearingBusinessDate_27);
  TradeCaptureReportRequest_0.insert(ClearingBusinessDate_27.getString());
  FIX::EncodedText EncodedText_98("DATA_888972658");
  msg.set(EncodedText_98);
  TradeCaptureReportRequest_0.insert(EncodedText_98.getString());
  FIX::EncodedTextLen EncodedTextLen_98(203477806);
  msg.set(EncodedTextLen_98);
  TradeCaptureReportRequest_0.insert(EncodedTextLen_98.getString());
  FIX::ExecID ExecID_24("STRING_937754394");
  msg.set(ExecID_24);
  TradeCaptureReportRequest_0.insert(ExecID_24.getString());
  FIX::ExecType ExecType_3('I');
  msg.set(ExecType_3);
  TradeCaptureReportRequest_0.insert(ExecType_3.getString());
  FIX::FirmTradeID FirmTradeID_10("STRING_2080192539");
  msg.set(FirmTradeID_10);
  TradeCaptureReportRequest_0.insert(FirmTradeID_10.getString());
  FIX::MatchStatus MatchStatus_13('0');
  msg.set(MatchStatus_13);
  TradeCaptureReportRequest_0.insert(MatchStatus_13.getString());
  FIX::MessageEventSource MessageEventSource_6("STRING_443122882");
  msg.set(MessageEventSource_6);
  TradeCaptureReportRequest_0.insert(MessageEventSource_6.getString());
  FIX::MultiLegReportingType MultiLegReportingType_6('3');
  msg.set(MultiLegReportingType_6);
  TradeCaptureReportRequest_0.insert(MultiLegReportingType_6.getString());
  FIX::OrderID OrderID_33("STRING_1296930707");
  msg.set(OrderID_33);
  TradeCaptureReportRequest_0.insert(OrderID_33.getString());
  FIX::ResponseDestination ResponseDestination_5("STRING_801220501");
  msg.set(ResponseDestination_5);
  TradeCaptureReportRequest_0.insert(ResponseDestination_5.getString());
  FIX::ResponseTransportType ResponseTransportType_5(1);
  msg.set(ResponseTransportType_5);
  TradeCaptureReportRequest_0.insert(ResponseTransportType_5.getString());
  FIX::SecondaryFirmTradeID SecondaryFirmTradeID_2("STRING_2123950917");
  msg.set(SecondaryFirmTradeID_2);
  TradeCaptureReportRequest_0.insert(SecondaryFirmTradeID_2.getString());
  FIX::SecondaryTradeID SecondaryTradeID_2("STRING_132639151");
  msg.set(SecondaryTradeID_2);
  TradeCaptureReportRequest_0.insert(SecondaryTradeID_2.getString());
  FIX::SecondaryTradeReportID SecondaryTradeReportID_15("STRING_736311372");
  msg.set(SecondaryTradeReportID_15);
  TradeCaptureReportRequest_0.insert(SecondaryTradeReportID_15.getString());
  FIX::SecondaryTrdType SecondaryTrdType_2(1157935543);
  msg.set(SecondaryTrdType_2);
  TradeCaptureReportRequest_0.insert(SecondaryTrdType_2.getString());
  FIX::Side Side_52('2');
  msg.set(Side_52);
  TradeCaptureReportRequest_0.insert(Side_52.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_15('0');
  msg.set(SubscriptionRequestType_15);
  TradeCaptureReportRequest_0.insert(SubscriptionRequestType_15.getString());
  FIX::Text Text_98("STRING_620921359");
  msg.set(Text_98);
  TradeCaptureReportRequest_0.insert(Text_98.getString());
  FIX::TimeBracket TimeBracket_3("STRING_1580359697");
  msg.set(TimeBracket_3);
  TradeCaptureReportRequest_0.insert(TimeBracket_3.getString());
  FIX::TradeHandlingInstr TradeHandlingInstr_2('3');
  msg.set(TradeHandlingInstr_2);
  TradeCaptureReportRequest_0.insert(TradeHandlingInstr_2.getString());
  FIX::TradeID TradeID_11("STRING_1046639693");
  msg.set(TradeID_11);
  TradeCaptureReportRequest_0.insert(TradeID_11.getString());
  FIX::TradeInputDevice TradeInputDevice_3("STRING_101690408");
  msg.set(TradeInputDevice_3);
  TradeCaptureReportRequest_0.insert(TradeInputDevice_3.getString());
  FIX::TradeInputSource TradeInputSource_5("STRING_873028163");
  msg.set(TradeInputSource_5);
  TradeCaptureReportRequest_0.insert(TradeInputSource_5.getString());
  FIX::TradeLinkID TradeLinkID_2("STRING_687294138");
  msg.set(TradeLinkID_2);
  TradeCaptureReportRequest_0.insert(TradeLinkID_2.getString());
  FIX::TradeReportID TradeReportID_15("STRING_1941329024");
  msg.set(TradeReportID_15);
  TradeCaptureReportRequest_0.insert(TradeReportID_15.getString());
  FIX::TradeRequestID TradeRequestID_1("STRING_770771034");
  msg.set(TradeRequestID_1);
  TradeCaptureReportRequest_0.insert(TradeRequestID_1.getString());
  FIX::TradeRequestType TradeRequestType_0(0);
  msg.set(TradeRequestType_0);
  TradeCaptureReportRequest_0.insert(TradeRequestType_0.getString());
  FIX::TradingSessionID TradingSessionID_102("STRING_3");
  msg.set(TradingSessionID_102);
  TradeCaptureReportRequest_0.insert(TradingSessionID_102.getString());
  FIX::TradingSessionSubID TradingSessionSubID_102("STRING_7");
  msg.set(TradingSessionSubID_102);
  TradeCaptureReportRequest_0.insert(TradingSessionSubID_102.getString());
  FIX::TransferReason TransferReason_2("STRING_223618359");
  msg.set(TransferReason_2);
  TradeCaptureReportRequest_0.insert(TransferReason_2.getString());
  FIX::TrdMatchID TrdMatchID_3("STRING_868652636");
  msg.set(TrdMatchID_3);
  TradeCaptureReportRequest_0.insert(TrdMatchID_3.getString());
  FIX::TrdSubType TrdSubType_5(25);
  msg.set(TrdSubType_5);
  TradeCaptureReportRequest_0.insert(TrdSubType_5.getString());
  FIX::TrdType TrdType_8(38);
  msg.set(TrdType_8);
  TradeCaptureReportRequest_0.insert(TrdType_8.getString());
  all_values.push_back(TradeCaptureReportRequest_0);

  // FinancingDetails
  multiset<string> FinancingDetails_32;
  FIX::AgreementCurrency AgreementCurrency_32("CAN");
  msg.set(AgreementCurrency_32);
  FinancingDetails_32.insert(AgreementCurrency_32.getString());
  FIX::AgreementDate AgreementDate_32("LOCALMKTDATE_359805056");
  msg.set(AgreementDate_32);
  FinancingDetails_32.insert(AgreementDate_32.getString());
  FIX::AgreementDesc AgreementDesc_32("STRING_377643703");
  msg.set(AgreementDesc_32);
  FinancingDetails_32.insert(AgreementDesc_32.getString());
  FIX::AgreementID AgreementID_32("STRING_1306416040");
  msg.set(AgreementID_32);
  FinancingDetails_32.insert(AgreementID_32.getString());
  FIX::DeliveryType DeliveryType_32(0);
  msg.set(DeliveryType_32);
  FinancingDetails_32.insert(DeliveryType_32.getString());
  FIX::EndDate EndDate_32("LOCALMKTDATE_1674574410");
  msg.set(EndDate_32);
  FinancingDetails_32.insert(EndDate_32.getString());
  FIX::MarginRatio MarginRatio_32;
  MarginRatio_32.setString("65.410000");
  msg.set(MarginRatio_32);
  FinancingDetails_32.insert(MarginRatio_32.getString());
  FIX::StartDate StartDate_32("LOCALMKTDATE_2146824941");
  msg.set(StartDate_32);
  FinancingDetails_32.insert(StartDate_32.getString());
  FIX::TerminationType TerminationType_32(4);
  msg.set(TerminationType_32);
  FinancingDetails_32.insert(TerminationType_32.getString());
  all_values.push_back(FinancingDetails_32);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::TradeCaptureReportRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_121;
    FIX::EncodedLegIssuer EncodedLegIssuer_121("DATA_735652666");
    noLegs_0_0.set(EncodedLegIssuer_121);
    InstrumentLeg_121.insert(EncodedLegIssuer_121.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_121(661493574);
    noLegs_0_0.set(EncodedLegIssuerLen_121);
    InstrumentLeg_121.insert(EncodedLegIssuerLen_121.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_121("DATA_2025527789");
    noLegs_0_0.set(EncodedLegSecurityDesc_121);
    InstrumentLeg_121.insert(EncodedLegSecurityDesc_121.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_121(1134999295);
    noLegs_0_0.set(EncodedLegSecurityDescLen_121);
    InstrumentLeg_121.insert(EncodedLegSecurityDescLen_121.getString());
    FIX::LegCFICode LegCFICode_121("STRING_1282414933");
    noLegs_0_0.set(LegCFICode_121);
    InstrumentLeg_121.insert(LegCFICode_121.getString());
    FIX::LegContractMultiplier LegContractMultiplier_121;
    LegContractMultiplier_121.setString("14584038");
    noLegs_0_0.set(LegContractMultiplier_121);
    InstrumentLeg_121.insert(LegContractMultiplier_121.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_121(1482771646);
    noLegs_0_0.set(LegContractMultiplierUnit_121);
    InstrumentLeg_121.insert(LegContractMultiplierUnit_121.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_121("MONTHYEAR_181570979");
    noLegs_0_0.set(LegContractSettlMonth_121);
    InstrumentLeg_121.insert(LegContractSettlMonth_121.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_121("COUNTRY_1560094246");
    noLegs_0_0.set(LegCountryOfIssue_121);
    InstrumentLeg_121.insert(LegCountryOfIssue_121.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_121("LOCALMKTDATE_208316161");
    noLegs_0_0.set(LegCouponPaymentDate_121);
    InstrumentLeg_121.insert(LegCouponPaymentDate_121.getString());
    FIX::LegCouponRate LegCouponRate_121;
    LegCouponRate_121.setString("51.170000");
    noLegs_0_0.set(LegCouponRate_121);
    InstrumentLeg_121.insert(LegCouponRate_121.getString());
    FIX::LegCreditRating LegCreditRating_121("STRING_1353939623");
    noLegs_0_0.set(LegCreditRating_121);
    InstrumentLeg_121.insert(LegCreditRating_121.getString());
    FIX::LegCurrency LegCurrency_121("JPY");
    noLegs_0_0.set(LegCurrency_121);
    InstrumentLeg_121.insert(LegCurrency_121.getString());
    FIX::LegDatedDate LegDatedDate_121("LOCALMKTDATE_802786781");
    noLegs_0_0.set(LegDatedDate_121);
    InstrumentLeg_121.insert(LegDatedDate_121.getString());
    FIX::LegExerciseStyle LegExerciseStyle_121(675875178);
    noLegs_0_0.set(LegExerciseStyle_121);
    InstrumentLeg_121.insert(LegExerciseStyle_121.getString());
    FIX::LegFactor LegFactor_121;
    LegFactor_121.setString("8531356");
    noLegs_0_0.set(LegFactor_121);
    InstrumentLeg_121.insert(LegFactor_121.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_121(1671439418);
    noLegs_0_0.set(LegFlowScheduleType_121);
    InstrumentLeg_121.insert(LegFlowScheduleType_121.getString());
    FIX::LegInstrRegistry LegInstrRegistry_121("STRING_1261635819");
    noLegs_0_0.set(LegInstrRegistry_121);
    InstrumentLeg_121.insert(LegInstrRegistry_121.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_121("LOCALMKTDATE_1280231834");
    noLegs_0_0.set(LegInterestAccrualDate_121);
    InstrumentLeg_121.insert(LegInterestAccrualDate_121.getString());
    FIX::LegIssueDate LegIssueDate_121("LOCALMKTDATE_1330362801");
    noLegs_0_0.set(LegIssueDate_121);
    InstrumentLeg_121.insert(LegIssueDate_121.getString());
    FIX::LegIssuer LegIssuer_121("STRING_2124928977");
    noLegs_0_0.set(LegIssuer_121);
    InstrumentLeg_121.insert(LegIssuer_121.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_121("STRING_1640036891");
    noLegs_0_0.set(LegLocaleOfIssue_121);
    InstrumentLeg_121.insert(LegLocaleOfIssue_121.getString());
    FIX::LegMaturityDate LegMaturityDate_121("LOCALMKTDATE_1708006504");
    noLegs_0_0.set(LegMaturityDate_121);
    InstrumentLeg_121.insert(LegMaturityDate_121.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_121("MONTHYEAR_1283861369");
    noLegs_0_0.set(LegMaturityMonthYear_121);
    InstrumentLeg_121.insert(LegMaturityMonthYear_121.getString());
    FIX::LegMaturityTime LegMaturityTime_121("TZTIMEONLY_865707779");
    noLegs_0_0.set(LegMaturityTime_121);
    InstrumentLeg_121.insert(LegMaturityTime_121.getString());
    FIX::LegOptAttribute LegOptAttribute_121('1');
    noLegs_0_0.set(LegOptAttribute_121);
    InstrumentLeg_121.insert(LegOptAttribute_121.getString());
    FIX::LegOptionRatio LegOptionRatio_121;
    LegOptionRatio_121.setString("12440142");
    noLegs_0_0.set(LegOptionRatio_121);
    InstrumentLeg_121.insert(LegOptionRatio_121.getString());
    FIX::LegPool LegPool_121("STRING_865049072");
    noLegs_0_0.set(LegPool_121);
    InstrumentLeg_121.insert(LegPool_121.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_121("STRING_738655298");
    noLegs_0_0.set(LegPriceUnitOfMeasure_121);
    InstrumentLeg_121.insert(LegPriceUnitOfMeasure_121.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_121;
    LegPriceUnitOfMeasureQty_121.setString("13368063");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_121);
    InstrumentLeg_121.insert(LegPriceUnitOfMeasureQty_121.getString());
    FIX::LegProduct LegProduct_121(1600701738);
    noLegs_0_0.set(LegProduct_121);
    InstrumentLeg_121.insert(LegProduct_121.getString());
    FIX::LegPutOrCall LegPutOrCall_121(1400148873);
    noLegs_0_0.set(LegPutOrCall_121);
    InstrumentLeg_121.insert(LegPutOrCall_121.getString());
    FIX::LegRatioQty LegRatioQty_121;
    LegRatioQty_121.setString("12148504");
    noLegs_0_0.set(LegRatioQty_121);
    InstrumentLeg_121.insert(LegRatioQty_121.getString());
    FIX::LegRedemptionDate LegRedemptionDate_121("LOCALMKTDATE_588217385");
    noLegs_0_0.set(LegRedemptionDate_121);
    InstrumentLeg_121.insert(LegRedemptionDate_121.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_121("STRING_535080158");
    noLegs_0_0.set(LegRepoCollateralSecurityType_121);
    InstrumentLeg_121.insert(LegRepoCollateralSecurityType_121.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_121;
    LegRepurchaseRate_121.setString("6.370000");
    noLegs_0_0.set(LegRepurchaseRate_121);
    InstrumentLeg_121.insert(LegRepurchaseRate_121.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_121(2070989031);
    noLegs_0_0.set(LegRepurchaseTerm_121);
    InstrumentLeg_121.insert(LegRepurchaseTerm_121.getString());
    FIX::LegSecurityDesc LegSecurityDesc_121("STRING_716651137");
    noLegs_0_0.set(LegSecurityDesc_121);
    InstrumentLeg_121.insert(LegSecurityDesc_121.getString());
    FIX::LegSecurityExchange LegSecurityExchange_121("EXCHANGE_2085864883");
    noLegs_0_0.set(LegSecurityExchange_121);
    InstrumentLeg_121.insert(LegSecurityExchange_121.getString());
    FIX::LegSecurityID LegSecurityID_121("STRING_131821544");
    noLegs_0_0.set(LegSecurityID_121);
    InstrumentLeg_121.insert(LegSecurityID_121.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_121("STRING_1585516255");
    noLegs_0_0.set(LegSecurityIDSource_121);
    InstrumentLeg_121.insert(LegSecurityIDSource_121.getString());
    FIX::LegSecuritySubType LegSecuritySubType_121("STRING_1292320858");
    noLegs_0_0.set(LegSecuritySubType_121);
    InstrumentLeg_121.insert(LegSecuritySubType_121.getString());
    FIX::LegSecurityType LegSecurityType_121("STRING_1110908739");
    noLegs_0_0.set(LegSecurityType_121);
    InstrumentLeg_121.insert(LegSecurityType_121.getString());
    FIX::LegSide LegSide_121('6');
    noLegs_0_0.set(LegSide_121);
    InstrumentLeg_121.insert(LegSide_121.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_121("STRING_2095107640");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_121);
    InstrumentLeg_121.insert(LegStateOrProvinceOfIssue_121.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_121("JPY");
    noLegs_0_0.set(LegStrikeCurrency_121);
    InstrumentLeg_121.insert(LegStrikeCurrency_121.getString());
    FIX::LegStrikePrice LegStrikePrice_121;
    LegStrikePrice_121.setString("16190634");
    noLegs_0_0.set(LegStrikePrice_121);
    InstrumentLeg_121.insert(LegStrikePrice_121.getString());
    FIX::LegSymbol LegSymbol_121("STRING_900936089");
    noLegs_0_0.set(LegSymbol_121);
    InstrumentLeg_121.insert(LegSymbol_121.getString());
    FIX::LegSymbolSfx LegSymbolSfx_121("STRING_53433772");
    noLegs_0_0.set(LegSymbolSfx_121);
    InstrumentLeg_121.insert(LegSymbolSfx_121.getString());
    FIX::LegTimeUnit LegTimeUnit_121("STRING_801942563");
    noLegs_0_0.set(LegTimeUnit_121);
    InstrumentLeg_121.insert(LegTimeUnit_121.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_121("STRING_878381418");
    noLegs_0_0.set(LegUnitOfMeasure_121);
    InstrumentLeg_121.insert(LegUnitOfMeasure_121.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_121;
    LegUnitOfMeasureQty_121.setString("16934706");
    noLegs_0_0.set(LegUnitOfMeasureQty_121);
    InstrumentLeg_121.insert(LegUnitOfMeasureQty_121.getString());
    all_values.push_back(InstrumentLeg_121);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_219;
      FIX::LegSecurityAltID LegSecurityAltID_219("STRING_14759139");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_219);
      LegSecAltIDGrp_NoLegSecurityAltID_219.insert(LegSecurityAltID_219.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_219("STRING_411694794");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_219);
      LegSecAltIDGrp_NoLegSecurityAltID_219.insert(LegSecurityAltIDSource_219.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_219);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_220;
      FIX::LegSecurityAltID LegSecurityAltID_220("STRING_1597562686");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_220);
      LegSecAltIDGrp_NoLegSecurityAltID_220.insert(LegSecurityAltID_220.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_220("STRING_1258773401");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_220);
      LegSecAltIDGrp_NoLegSecurityAltID_220.insert(LegSecurityAltIDSource_220.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_220);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_122;
    FIX::EncodedLegIssuer EncodedLegIssuer_122("DATA_1276743867");
    noLegs_0_1.set(EncodedLegIssuer_122);
    InstrumentLeg_122.insert(EncodedLegIssuer_122.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_122(188734337);
    noLegs_0_1.set(EncodedLegIssuerLen_122);
    InstrumentLeg_122.insert(EncodedLegIssuerLen_122.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_122("DATA_448096059");
    noLegs_0_1.set(EncodedLegSecurityDesc_122);
    InstrumentLeg_122.insert(EncodedLegSecurityDesc_122.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_122(729961957);
    noLegs_0_1.set(EncodedLegSecurityDescLen_122);
    InstrumentLeg_122.insert(EncodedLegSecurityDescLen_122.getString());
    FIX::LegCFICode LegCFICode_122("STRING_1588883210");
    noLegs_0_1.set(LegCFICode_122);
    InstrumentLeg_122.insert(LegCFICode_122.getString());
    FIX::LegContractMultiplier LegContractMultiplier_122;
    LegContractMultiplier_122.setString("16629465");
    noLegs_0_1.set(LegContractMultiplier_122);
    InstrumentLeg_122.insert(LegContractMultiplier_122.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_122(1318179343);
    noLegs_0_1.set(LegContractMultiplierUnit_122);
    InstrumentLeg_122.insert(LegContractMultiplierUnit_122.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_122("MONTHYEAR_2123963368");
    noLegs_0_1.set(LegContractSettlMonth_122);
    InstrumentLeg_122.insert(LegContractSettlMonth_122.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_122("COUNTRY_41233495");
    noLegs_0_1.set(LegCountryOfIssue_122);
    InstrumentLeg_122.insert(LegCountryOfIssue_122.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_122("LOCALMKTDATE_1241684726");
    noLegs_0_1.set(LegCouponPaymentDate_122);
    InstrumentLeg_122.insert(LegCouponPaymentDate_122.getString());
    FIX::LegCouponRate LegCouponRate_122;
    LegCouponRate_122.setString("8.580000");
    noLegs_0_1.set(LegCouponRate_122);
    InstrumentLeg_122.insert(LegCouponRate_122.getString());
    FIX::LegCreditRating LegCreditRating_122("STRING_2127098378");
    noLegs_0_1.set(LegCreditRating_122);
    InstrumentLeg_122.insert(LegCreditRating_122.getString());
    FIX::LegCurrency LegCurrency_122("CHF");
    noLegs_0_1.set(LegCurrency_122);
    InstrumentLeg_122.insert(LegCurrency_122.getString());
    FIX::LegDatedDate LegDatedDate_122("LOCALMKTDATE_1271935589");
    noLegs_0_1.set(LegDatedDate_122);
    InstrumentLeg_122.insert(LegDatedDate_122.getString());
    FIX::LegExerciseStyle LegExerciseStyle_122(336931362);
    noLegs_0_1.set(LegExerciseStyle_122);
    InstrumentLeg_122.insert(LegExerciseStyle_122.getString());
    FIX::LegFactor LegFactor_122;
    LegFactor_122.setString("1987133");
    noLegs_0_1.set(LegFactor_122);
    InstrumentLeg_122.insert(LegFactor_122.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_122(1219559581);
    noLegs_0_1.set(LegFlowScheduleType_122);
    InstrumentLeg_122.insert(LegFlowScheduleType_122.getString());
    FIX::LegInstrRegistry LegInstrRegistry_122("STRING_2123715280");
    noLegs_0_1.set(LegInstrRegistry_122);
    InstrumentLeg_122.insert(LegInstrRegistry_122.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_122("LOCALMKTDATE_1119398968");
    noLegs_0_1.set(LegInterestAccrualDate_122);
    InstrumentLeg_122.insert(LegInterestAccrualDate_122.getString());
    FIX::LegIssueDate LegIssueDate_122("LOCALMKTDATE_691139343");
    noLegs_0_1.set(LegIssueDate_122);
    InstrumentLeg_122.insert(LegIssueDate_122.getString());
    FIX::LegIssuer LegIssuer_122("STRING_877167721");
    noLegs_0_1.set(LegIssuer_122);
    InstrumentLeg_122.insert(LegIssuer_122.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_122("STRING_1172832740");
    noLegs_0_1.set(LegLocaleOfIssue_122);
    InstrumentLeg_122.insert(LegLocaleOfIssue_122.getString());
    FIX::LegMaturityDate LegMaturityDate_122("LOCALMKTDATE_1493081906");
    noLegs_0_1.set(LegMaturityDate_122);
    InstrumentLeg_122.insert(LegMaturityDate_122.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_122("MONTHYEAR_1755549139");
    noLegs_0_1.set(LegMaturityMonthYear_122);
    InstrumentLeg_122.insert(LegMaturityMonthYear_122.getString());
    FIX::LegMaturityTime LegMaturityTime_122("TZTIMEONLY_718819756");
    noLegs_0_1.set(LegMaturityTime_122);
    InstrumentLeg_122.insert(LegMaturityTime_122.getString());
    FIX::LegOptAttribute LegOptAttribute_122('1');
    noLegs_0_1.set(LegOptAttribute_122);
    InstrumentLeg_122.insert(LegOptAttribute_122.getString());
    FIX::LegOptionRatio LegOptionRatio_122;
    LegOptionRatio_122.setString("17703082");
    noLegs_0_1.set(LegOptionRatio_122);
    InstrumentLeg_122.insert(LegOptionRatio_122.getString());
    FIX::LegPool LegPool_122("STRING_1130514550");
    noLegs_0_1.set(LegPool_122);
    InstrumentLeg_122.insert(LegPool_122.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_122("STRING_1305626364");
    noLegs_0_1.set(LegPriceUnitOfMeasure_122);
    InstrumentLeg_122.insert(LegPriceUnitOfMeasure_122.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_122;
    LegPriceUnitOfMeasureQty_122.setString("8815980");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_122);
    InstrumentLeg_122.insert(LegPriceUnitOfMeasureQty_122.getString());
    FIX::LegProduct LegProduct_122(259774769);
    noLegs_0_1.set(LegProduct_122);
    InstrumentLeg_122.insert(LegProduct_122.getString());
    FIX::LegPutOrCall LegPutOrCall_122(1494360701);
    noLegs_0_1.set(LegPutOrCall_122);
    InstrumentLeg_122.insert(LegPutOrCall_122.getString());
    FIX::LegRatioQty LegRatioQty_122;
    LegRatioQty_122.setString("13296940");
    noLegs_0_1.set(LegRatioQty_122);
    InstrumentLeg_122.insert(LegRatioQty_122.getString());
    FIX::LegRedemptionDate LegRedemptionDate_122("LOCALMKTDATE_989736727");
    noLegs_0_1.set(LegRedemptionDate_122);
    InstrumentLeg_122.insert(LegRedemptionDate_122.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_122("STRING_935760263");
    noLegs_0_1.set(LegRepoCollateralSecurityType_122);
    InstrumentLeg_122.insert(LegRepoCollateralSecurityType_122.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_122;
    LegRepurchaseRate_122.setString("69.480000");
    noLegs_0_1.set(LegRepurchaseRate_122);
    InstrumentLeg_122.insert(LegRepurchaseRate_122.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_122(160432422);
    noLegs_0_1.set(LegRepurchaseTerm_122);
    InstrumentLeg_122.insert(LegRepurchaseTerm_122.getString());
    FIX::LegSecurityDesc LegSecurityDesc_122("STRING_912239983");
    noLegs_0_1.set(LegSecurityDesc_122);
    InstrumentLeg_122.insert(LegSecurityDesc_122.getString());
    FIX::LegSecurityExchange LegSecurityExchange_122("EXCHANGE_886390443");
    noLegs_0_1.set(LegSecurityExchange_122);
    InstrumentLeg_122.insert(LegSecurityExchange_122.getString());
    FIX::LegSecurityID LegSecurityID_122("STRING_1402117148");
    noLegs_0_1.set(LegSecurityID_122);
    InstrumentLeg_122.insert(LegSecurityID_122.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_122("STRING_1605370841");
    noLegs_0_1.set(LegSecurityIDSource_122);
    InstrumentLeg_122.insert(LegSecurityIDSource_122.getString());
    FIX::LegSecuritySubType LegSecuritySubType_122("STRING_866005173");
    noLegs_0_1.set(LegSecuritySubType_122);
    InstrumentLeg_122.insert(LegSecuritySubType_122.getString());
    FIX::LegSecurityType LegSecurityType_122("STRING_628139771");
    noLegs_0_1.set(LegSecurityType_122);
    InstrumentLeg_122.insert(LegSecurityType_122.getString());
    FIX::LegSide LegSide_122('1');
    noLegs_0_1.set(LegSide_122);
    InstrumentLeg_122.insert(LegSide_122.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_122("STRING_2137940762");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_122);
    InstrumentLeg_122.insert(LegStateOrProvinceOfIssue_122.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_122("GBP");
    noLegs_0_1.set(LegStrikeCurrency_122);
    InstrumentLeg_122.insert(LegStrikeCurrency_122.getString());
    FIX::LegStrikePrice LegStrikePrice_122;
    LegStrikePrice_122.setString("12100166");
    noLegs_0_1.set(LegStrikePrice_122);
    InstrumentLeg_122.insert(LegStrikePrice_122.getString());
    FIX::LegSymbol LegSymbol_122("STRING_941302766");
    noLegs_0_1.set(LegSymbol_122);
    InstrumentLeg_122.insert(LegSymbol_122.getString());
    FIX::LegSymbolSfx LegSymbolSfx_122("STRING_907163008");
    noLegs_0_1.set(LegSymbolSfx_122);
    InstrumentLeg_122.insert(LegSymbolSfx_122.getString());
    FIX::LegTimeUnit LegTimeUnit_122("STRING_1901156038");
    noLegs_0_1.set(LegTimeUnit_122);
    InstrumentLeg_122.insert(LegTimeUnit_122.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_122("STRING_1818470487");
    noLegs_0_1.set(LegUnitOfMeasure_122);
    InstrumentLeg_122.insert(LegUnitOfMeasure_122.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_122;
    LegUnitOfMeasureQty_122.setString("20799957");
    noLegs_0_1.set(LegUnitOfMeasureQty_122);
    InstrumentLeg_122.insert(LegUnitOfMeasureQty_122.getString());
    all_values.push_back(InstrumentLeg_122);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_221;
      FIX::LegSecurityAltID LegSecurityAltID_221("STRING_1426535978");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_221);
      LegSecAltIDGrp_NoLegSecurityAltID_221.insert(LegSecurityAltID_221.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_221("STRING_651331857");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_221);
      LegSecAltIDGrp_NoLegSecurityAltID_221.insert(LegSecurityAltIDSource_221.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_221);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_222;
      FIX::LegSecurityAltID LegSecurityAltID_222("STRING_954817974");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_222);
      LegSecAltIDGrp_NoLegSecurityAltID_222.insert(LegSecurityAltID_222.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_222("STRING_1049360608");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_222);
      LegSecAltIDGrp_NoLegSecurityAltID_222.insert(LegSecurityAltIDSource_222.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_222);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_91;
  FIX::AttachmentPoint AttachmentPoint_91;
  AttachmentPoint_91.setString("64.070000");
  msg.set(AttachmentPoint_91);
  Instrument_91.insert(AttachmentPoint_91.getString());
  FIX::CFICode CFICode_98("STRING_112960690");
  msg.set(CFICode_98);
  Instrument_91.insert(CFICode_98.getString());
  FIX::CPProgram CPProgram_91(99);
  msg.set(CPProgram_91);
  Instrument_91.insert(CPProgram_91.getString());
  FIX::CPRegType CPRegType_91("STRING_2041621177");
  msg.set(CPRegType_91);
  Instrument_91.insert(CPRegType_91.getString());
  FIX::CapPrice CapPrice_91;
  CapPrice_91.setString("16073213");
  msg.set(CapPrice_91);
  Instrument_91.insert(CapPrice_91.getString());
  FIX::ContractMultiplier ContractMultiplier_91;
  ContractMultiplier_91.setString("11131690");
  msg.set(ContractMultiplier_91);
  Instrument_91.insert(ContractMultiplier_91.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_91(0);
  msg.set(ContractMultiplierUnit_91);
  Instrument_91.insert(ContractMultiplierUnit_91.getString());
  FIX::ContractSettlMonth ContractSettlMonth_91("MONTHYEAR_395598006");
  msg.set(ContractSettlMonth_91);
  Instrument_91.insert(ContractSettlMonth_91.getString());
  FIX::CountryOfIssue CountryOfIssue_91("COUNTRY_1958326029");
  msg.set(CountryOfIssue_91);
  Instrument_91.insert(CountryOfIssue_91.getString());
  FIX::CouponPaymentDate CouponPaymentDate_91("LOCALMKTDATE_1044306678");
  msg.set(CouponPaymentDate_91);
  Instrument_91.insert(CouponPaymentDate_91.getString());
  FIX::CouponRate CouponRate_91;
  CouponRate_91.setString("79.890000");
  msg.set(CouponRate_91);
  Instrument_91.insert(CouponRate_91.getString());
  FIX::CreditRating CreditRating_91("STRING_697232824");
  msg.set(CreditRating_91);
  Instrument_91.insert(CreditRating_91.getString());
  FIX::DatedDate DatedDate_91("LOCALMKTDATE_298940178");
  msg.set(DatedDate_91);
  Instrument_91.insert(DatedDate_91.getString());
  FIX::DetachmentPoint DetachmentPoint_91;
  DetachmentPoint_91.setString("51.830000");
  msg.set(DetachmentPoint_91);
  Instrument_91.insert(DetachmentPoint_91.getString());
  FIX::EncodedIssuer EncodedIssuer_91("DATA_1563237997");
  msg.set(EncodedIssuer_91);
  Instrument_91.insert(EncodedIssuer_91.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_91(927079950);
  msg.set(EncodedIssuerLen_91);
  Instrument_91.insert(EncodedIssuerLen_91.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_91("DATA_354775841");
  msg.set(EncodedSecurityDesc_91);
  Instrument_91.insert(EncodedSecurityDesc_91.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_91(1553695112);
  msg.set(EncodedSecurityDescLen_91);
  Instrument_91.insert(EncodedSecurityDescLen_91.getString());
  FIX::ExerciseStyle ExerciseStyle_91(0);
  msg.set(ExerciseStyle_91);
  Instrument_91.insert(ExerciseStyle_91.getString());
  FIX::Factor Factor_91;
  Factor_91.setString("1425398");
  msg.set(Factor_91);
  Instrument_91.insert(Factor_91.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_91(false);
  msg.set(FlexProductEligibilityIndicator_91);
  Instrument_91.insert(FlexProductEligibilityIndicator_91.getString());
  FIX::FlexibleIndicator FlexibleIndicator_91(true);
  msg.set(FlexibleIndicator_91);
  Instrument_91.insert(FlexibleIndicator_91.getString());
  FIX::FloorPrice FloorPrice_91;
  FloorPrice_91.setString("10497028");
  msg.set(FloorPrice_91);
  Instrument_91.insert(FloorPrice_91.getString());
  FIX::FlowScheduleType FlowScheduleType_91(0);
  msg.set(FlowScheduleType_91);
  Instrument_91.insert(FlowScheduleType_91.getString());
  FIX::InstrRegistry InstrRegistry_91("STRING_356957041");
  msg.set(InstrRegistry_91);
  Instrument_91.insert(InstrRegistry_91.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_91('9');
  msg.set(InstrmtAssignmentMethod_91);
  Instrument_91.insert(InstrmtAssignmentMethod_91.getString());
  FIX::InterestAccrualDate InterestAccrualDate_91("LOCALMKTDATE_1616654846");
  msg.set(InterestAccrualDate_91);
  Instrument_91.insert(InterestAccrualDate_91.getString());
  FIX::IssueDate IssueDate_91("LOCALMKTDATE_1783493019");
  msg.set(IssueDate_91);
  Instrument_91.insert(IssueDate_91.getString());
  FIX::Issuer Issuer_91("STRING_1633546848");
  msg.set(Issuer_91);
  Instrument_91.insert(Issuer_91.getString());
  FIX::ListMethod ListMethod_91(0);
  msg.set(ListMethod_91);
  Instrument_91.insert(ListMethod_91.getString());
  FIX::LocaleOfIssue LocaleOfIssue_91("STRING_685369979");
  msg.set(LocaleOfIssue_91);
  Instrument_91.insert(LocaleOfIssue_91.getString());
  FIX::MaturityDate MaturityDate_91("LOCALMKTDATE_1267909608");
  msg.set(MaturityDate_91);
  Instrument_91.insert(MaturityDate_91.getString());
  FIX::MaturityMonthYear MaturityMonthYear_91("MONTHYEAR_536949862");
  msg.set(MaturityMonthYear_91);
  Instrument_91.insert(MaturityMonthYear_91.getString());
  FIX::MaturityTime MaturityTime_91("TZTIMEONLY_468844970");
  msg.set(MaturityTime_91);
  Instrument_91.insert(MaturityTime_91.getString());
  FIX::MinPriceIncrement MinPriceIncrement_91;
  MinPriceIncrement_91.setString("11620471");
  msg.set(MinPriceIncrement_91);
  Instrument_91.insert(MinPriceIncrement_91.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_91;
  MinPriceIncrementAmount_91.setString("21442712");
  msg.set(MinPriceIncrementAmount_91);
  Instrument_91.insert(MinPriceIncrementAmount_91.getString());
  FIX::NTPositionLimit NTPositionLimit_91(1582014051);
  msg.set(NTPositionLimit_91);
  Instrument_91.insert(NTPositionLimit_91.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_91;
  NotionalPercentageOutstanding_91.setString("13.930000");
  msg.set(NotionalPercentageOutstanding_91);
  Instrument_91.insert(NotionalPercentageOutstanding_91.getString());
  FIX::OptAttribute OptAttribute_91('3');
  msg.set(OptAttribute_91);
  Instrument_91.insert(OptAttribute_91.getString());
  FIX::OptPayoutAmount OptPayoutAmount_91;
  OptPayoutAmount_91.setString("13928564");
  msg.set(OptPayoutAmount_91);
  Instrument_91.insert(OptPayoutAmount_91.getString());
  FIX::OptPayoutType OptPayoutType_91(1);
  msg.set(OptPayoutType_91);
  Instrument_91.insert(OptPayoutType_91.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_91;
  OriginalNotionalPercentageOutstanding_91.setString("36.010000");
  msg.set(OriginalNotionalPercentageOutstanding_91);
  Instrument_91.insert(OriginalNotionalPercentageOutstanding_91.getString());
  FIX::Pool Pool_91("STRING_2090089256");
  msg.set(Pool_91);
  Instrument_91.insert(Pool_91.getString());
  FIX::PositionLimit PositionLimit_91(1241684601);
  msg.set(PositionLimit_91);
  Instrument_91.insert(PositionLimit_91.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_91("STRING_STD");
  msg.set(PriceQuoteMethod_91);
  Instrument_91.insert(PriceQuoteMethod_91.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_91("STRING_1505843605");
  msg.set(PriceUnitOfMeasure_91);
  Instrument_91.insert(PriceUnitOfMeasure_91.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_91;
  PriceUnitOfMeasureQty_91.setString("212809");
  msg.set(PriceUnitOfMeasureQty_91);
  Instrument_91.insert(PriceUnitOfMeasureQty_91.getString());
  FIX::Product Product_101(7);
  msg.set(Product_101);
  Instrument_91.insert(Product_101.getString());
  FIX::ProductComplex ProductComplex_91("STRING_912055069");
  msg.set(ProductComplex_91);
  Instrument_91.insert(ProductComplex_91.getString());
  FIX::PutOrCall PutOrCall_91(1);
  msg.set(PutOrCall_91);
  Instrument_91.insert(PutOrCall_91.getString());
  FIX::RedemptionDate RedemptionDate_91("LOCALMKTDATE_815780859");
  msg.set(RedemptionDate_91);
  Instrument_91.insert(RedemptionDate_91.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_91("STRING_1528283229");
  msg.set(RepoCollateralSecurityType_91);
  Instrument_91.insert(RepoCollateralSecurityType_91.getString());
  FIX::RepurchaseRate RepurchaseRate_91;
  RepurchaseRate_91.setString("85.410000");
  msg.set(RepurchaseRate_91);
  Instrument_91.insert(RepurchaseRate_91.getString());
  FIX::RepurchaseTerm RepurchaseTerm_91(1865483750);
  msg.set(RepurchaseTerm_91);
  Instrument_91.insert(RepurchaseTerm_91.getString());
  FIX::RestructuringType RestructuringType_91("STRING_XR");
  msg.set(RestructuringType_91);
  Instrument_91.insert(RestructuringType_91.getString());
  FIX::SecurityDesc SecurityDesc_91("STRING_808875582");
  msg.set(SecurityDesc_91);
  Instrument_91.insert(SecurityDesc_91.getString());
  FIX::SecurityExchange SecurityExchange_91("EXCHANGE_700215093");
  msg.set(SecurityExchange_91);
  Instrument_91.insert(SecurityExchange_91.getString());
  FIX::SecurityGroup SecurityGroup_91("STRING_1367354977");
  msg.set(SecurityGroup_91);
  Instrument_91.insert(SecurityGroup_91.getString());
  FIX::SecurityID SecurityID_91("STRING_444884953");
  msg.set(SecurityID_91);
  Instrument_91.insert(SecurityID_91.getString());
  FIX::SecurityIDSource SecurityIDSource_91("STRING_5");
  msg.set(SecurityIDSource_91);
  Instrument_91.insert(SecurityIDSource_91.getString());
  FIX::SecurityStatus SecurityStatus_92("STRING_1");
  msg.set(SecurityStatus_92);
  Instrument_91.insert(SecurityStatus_92.getString());
  FIX::SecuritySubType SecuritySubType_96("STRING_1130254932");
  msg.set(SecuritySubType_96);
  Instrument_91.insert(SecuritySubType_96.getString());
  FIX::SecurityType SecurityType_101("STRING_CTB");
  msg.set(SecurityType_101);
  Instrument_91.insert(SecurityType_101.getString());
  FIX::Seniority Seniority_91("STRING_SR");
  msg.set(Seniority_91);
  Instrument_91.insert(Seniority_91.getString());
  FIX::SettlMethod SettlMethod_91('C');
  msg.set(SettlMethod_91);
  Instrument_91.insert(SettlMethod_91.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_91("STRING_468751391");
  msg.set(SettleOnOpenFlag_91);
  Instrument_91.insert(SettleOnOpenFlag_91.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_91("STRING_177597970");
  msg.set(StateOrProvinceOfIssue_91);
  Instrument_91.insert(StateOrProvinceOfIssue_91.getString());
  FIX::StrikeCurrency StrikeCurrency_91("GBP");
  msg.set(StrikeCurrency_91);
  Instrument_91.insert(StrikeCurrency_91.getString());
  FIX::StrikeMultiplier StrikeMultiplier_91;
  StrikeMultiplier_91.setString("5699835");
  msg.set(StrikeMultiplier_91);
  Instrument_91.insert(StrikeMultiplier_91.getString());
  FIX::StrikePrice StrikePrice_91;
  StrikePrice_91.setString("2790030");
  msg.set(StrikePrice_91);
  Instrument_91.insert(StrikePrice_91.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_91(5);
  msg.set(StrikePriceBoundaryMethod_91);
  Instrument_91.insert(StrikePriceBoundaryMethod_91.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_91;
  StrikePriceBoundaryPrecision_91.setString("35.340000");
  msg.set(StrikePriceBoundaryPrecision_91);
  Instrument_91.insert(StrikePriceBoundaryPrecision_91.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_91(2);
  msg.set(StrikePriceDeterminationMethod_91);
  Instrument_91.insert(StrikePriceDeterminationMethod_91.getString());
  FIX::StrikeValue StrikeValue_91;
  StrikeValue_91.setString("4041345");
  msg.set(StrikeValue_91);
  Instrument_91.insert(StrikeValue_91.getString());
  FIX::Symbol Symbol_91("STRING_441188670");
  msg.set(Symbol_91);
  Instrument_91.insert(Symbol_91.getString());
  FIX::SymbolSfx SymbolSfx_91("STRING_WI");
  msg.set(SymbolSfx_91);
  Instrument_91.insert(SymbolSfx_91.getString());
  FIX::TimeUnit TimeUnit_91("STRING_Yr");
  msg.set(TimeUnit_91);
  Instrument_91.insert(TimeUnit_91.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_91(1);
  msg.set(UnderlyingPriceDeterminationMethod_91);
  Instrument_91.insert(UnderlyingPriceDeterminationMethod_91.getString());
  FIX::UnitOfMeasure UnitOfMeasure_91("STRING_tn");
  msg.set(UnitOfMeasure_91);
  Instrument_91.insert(UnitOfMeasure_91.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_91;
  UnitOfMeasureQty_91.setString("1913637");
  msg.set(UnitOfMeasureQty_91);
  Instrument_91.insert(UnitOfMeasureQty_91.getString());
  FIX::ValuationMethod ValuationMethod_91("STRING_FUTDA");
  msg.set(ValuationMethod_91);
  Instrument_91.insert(ValuationMethod_91.getString());
  all_values.push_back(Instrument_91);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReportRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_169;
    FIX::ComplexEventCondition ComplexEventCondition_169(2);
    noComplexEvents_0_0.set(ComplexEventCondition_169);
    ComplexEvents_NoComplexEvents_169.insert(ComplexEventCondition_169.getString());
    FIX::ComplexEventPrice ComplexEventPrice_169;
    ComplexEventPrice_169.setString("16482106");
    noComplexEvents_0_0.set(ComplexEventPrice_169);
    ComplexEvents_NoComplexEvents_169.insert(ComplexEventPrice_169.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_169(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_169);
    ComplexEvents_NoComplexEvents_169.insert(ComplexEventPriceBoundaryMethod_169.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_169;
    ComplexEventPriceBoundaryPrecision_169.setString("78.790000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_169);
    ComplexEvents_NoComplexEvents_169.insert(ComplexEventPriceBoundaryPrecision_169.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_169(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_169);
    ComplexEvents_NoComplexEvents_169.insert(ComplexEventPriceTimeType_169.getString());
    FIX::ComplexEventType ComplexEventType_169(6);
    noComplexEvents_0_0.set(ComplexEventType_169);
    ComplexEvents_NoComplexEvents_169.insert(ComplexEventType_169.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_169;
    ComplexOptPayoutAmount_169.setString("18970428");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_169);
    ComplexEvents_NoComplexEvents_169.insert(ComplexOptPayoutAmount_169.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_169);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_354;
      FIX::ComplexEventEndDate ComplexEventEndDate_354(FIX::UTCTIMESTAMP(13, 31, 0, 0, 112004));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_354);
      ComplexEventDates_NoComplexEventDates_354.insert(ComplexEventEndDate_354.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_354(FIX::UTCTIMESTAMP(18, 32, 47, 1, 112004));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_354);
      ComplexEventDates_NoComplexEventDates_354.insert(ComplexEventStartDate_354.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_354);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_703;
        FIX::ComplexEventEndTime ComplexEventEndTime_703(FIX::UTCTIMEONLY(15, 29, 37));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_703);
        ComplexEventTimes_NoComplexEventTimes_703.insert(ComplexEventEndTime_703.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_703(FIX::UTCTIMEONLY(13, 36, 29));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_703);
        ComplexEventTimes_NoComplexEventTimes_703.insert(ComplexEventStartTime_703.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_703);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_355;
      FIX::ComplexEventEndDate ComplexEventEndDate_355(FIX::UTCTIMESTAMP(18, 6, 13, 1, 12008));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_355);
      ComplexEventDates_NoComplexEventDates_355.insert(ComplexEventEndDate_355.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_355(FIX::UTCTIMESTAMP(20, 16, 25, 20, 12005));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_355);
      ComplexEventDates_NoComplexEventDates_355.insert(ComplexEventStartDate_355.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_355);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_704;
        FIX::ComplexEventEndTime ComplexEventEndTime_704(FIX::UTCTIMEONLY(5, 43, 36));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_704);
        ComplexEventTimes_NoComplexEventTimes_704.insert(ComplexEventEndTime_704.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_704(FIX::UTCTIMEONLY(21, 33, 23));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_704);
        ComplexEventTimes_NoComplexEventTimes_704.insert(ComplexEventStartTime_704.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_704);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_705;
        FIX::ComplexEventEndTime ComplexEventEndTime_705(FIX::UTCTIMEONLY(12, 53, 59));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_705);
        ComplexEventTimes_NoComplexEventTimes_705.insert(ComplexEventEndTime_705.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_705(FIX::UTCTIMEONLY(22, 36, 30));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_705);
        ComplexEventTimes_NoComplexEventTimes_705.insert(ComplexEventStartTime_705.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_705);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_706;
        FIX::ComplexEventEndTime ComplexEventEndTime_706(FIX::UTCTIMEONLY(18, 28, 17));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_706);
        ComplexEventTimes_NoComplexEventTimes_706.insert(ComplexEventEndTime_706.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_706(FIX::UTCTIMEONLY(16, 56, 21));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_706);
        ComplexEventTimes_NoComplexEventTimes_706.insert(ComplexEventStartTime_706.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_706);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_356;
      FIX::ComplexEventEndDate ComplexEventEndDate_356(FIX::UTCTIMESTAMP(12, 46, 48, 24, 22011));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_356);
      ComplexEventDates_NoComplexEventDates_356.insert(ComplexEventEndDate_356.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_356(FIX::UTCTIMESTAMP(18, 34, 18, 24, 12009));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_356);
      ComplexEventDates_NoComplexEventDates_356.insert(ComplexEventStartDate_356.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_356);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_707;
        FIX::ComplexEventEndTime ComplexEventEndTime_707(FIX::UTCTIMEONLY(15, 56, 10));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_707);
        ComplexEventTimes_NoComplexEventTimes_707.insert(ComplexEventEndTime_707.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_707(FIX::UTCTIMEONLY(6, 38, 34));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_707);
        ComplexEventTimes_NoComplexEventTimes_707.insert(ComplexEventStartTime_707.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_707);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_708;
        FIX::ComplexEventEndTime ComplexEventEndTime_708(FIX::UTCTIMEONLY(0, 54, 28));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_708);
        ComplexEventTimes_NoComplexEventTimes_708.insert(ComplexEventEndTime_708.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_708(FIX::UTCTIMEONLY(22, 24, 4));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_708);
        ComplexEventTimes_NoComplexEventTimes_708.insert(ComplexEventStartTime_708.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_708);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_709;
        FIX::ComplexEventEndTime ComplexEventEndTime_709(FIX::UTCTIMEONLY(16, 42, 2));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_709);
        ComplexEventTimes_NoComplexEventTimes_709.insert(ComplexEventEndTime_709.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_709(FIX::UTCTIMEONLY(19, 54, 53));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_709);
        ComplexEventTimes_NoComplexEventTimes_709.insert(ComplexEventStartTime_709.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_709);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradeCaptureReportRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_174;
    FIX::EventDate EventDate_174("LOCALMKTDATE_1860495208");
    noEvents_0_0.set(EventDate_174);
    EvntGrp_NoEvents_174.insert(EventDate_174.getString());
    FIX::EventPx EventPx_174;
    EventPx_174.setString("8135515");
    noEvents_0_0.set(EventPx_174);
    EvntGrp_NoEvents_174.insert(EventPx_174.getString());
    FIX::EventText EventText_174("STRING_609620757");
    noEvents_0_0.set(EventText_174);
    EvntGrp_NoEvents_174.insert(EventText_174.getString());
    FIX::EventTime EventTime_174(FIX::UTCTIMESTAMP(14, 0, 19, 14, 102003));
    noEvents_0_0.set(EventTime_174);
    EvntGrp_NoEvents_174.insert(EventTime_174.getString());
    FIX::EventType EventType_174(3);
    noEvents_0_0.set(EventType_174);
    EvntGrp_NoEvents_174.insert(EventType_174.getString());
    all_values.push_back(EvntGrp_NoEvents_174);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_175;
    FIX::EventDate EventDate_175("LOCALMKTDATE_1500485275");
    noEvents_0_1.set(EventDate_175);
    EvntGrp_NoEvents_175.insert(EventDate_175.getString());
    FIX::EventPx EventPx_175;
    EventPx_175.setString("10151067");
    noEvents_0_1.set(EventPx_175);
    EvntGrp_NoEvents_175.insert(EventPx_175.getString());
    FIX::EventText EventText_175("STRING_1685140348");
    noEvents_0_1.set(EventText_175);
    EvntGrp_NoEvents_175.insert(EventText_175.getString());
    FIX::EventTime EventTime_175(FIX::UTCTIMESTAMP(23, 22, 26, 18, 12000));
    noEvents_0_1.set(EventTime_175);
    EvntGrp_NoEvents_175.insert(EventTime_175.getString());
    FIX::EventType EventType_175(3);
    noEvents_0_1.set(EventType_175);
    EvntGrp_NoEvents_175.insert(EventType_175.getString());
    all_values.push_back(EvntGrp_NoEvents_175);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_176;
    FIX::EventDate EventDate_176("LOCALMKTDATE_2136231250");
    noEvents_0_2.set(EventDate_176);
    EvntGrp_NoEvents_176.insert(EventDate_176.getString());
    FIX::EventPx EventPx_176;
    EventPx_176.setString("6524374");
    noEvents_0_2.set(EventPx_176);
    EvntGrp_NoEvents_176.insert(EventPx_176.getString());
    FIX::EventText EventText_176("STRING_824140236");
    noEvents_0_2.set(EventText_176);
    EvntGrp_NoEvents_176.insert(EventText_176.getString());
    FIX::EventTime EventTime_176(FIX::UTCTIMESTAMP(2, 47, 58, 23, 92001));
    noEvents_0_2.set(EventTime_176);
    EvntGrp_NoEvents_176.insert(EventTime_176.getString());
    FIX::EventType EventType_176(12);
    noEvents_0_2.set(EventType_176);
    EvntGrp_NoEvents_176.insert(EventType_176.getString());
    all_values.push_back(EvntGrp_NoEvents_176);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_178;
    FIX::InstrumentPartyID InstrumentPartyID_178("STRING_1655994867");
    noInstrumentParties_0_0.set(InstrumentPartyID_178);
    InstrumentParties_NoInstrumentParties_178.insert(InstrumentPartyID_178.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_178('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_178);
    InstrumentParties_NoInstrumentParties_178.insert(InstrumentPartyIDSource_178.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_178(1630730813);
    noInstrumentParties_0_0.set(InstrumentPartyRole_178);
    InstrumentParties_NoInstrumentParties_178.insert(InstrumentPartyRole_178.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_178);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_357;
      FIX::InstrumentPartySubID InstrumentPartySubID_357("STRING_276870903");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_357);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_357.insert(InstrumentPartySubID_357.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_357(1411902762);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_357);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_357.insert(InstrumentPartySubIDType_357.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_357);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_358;
      FIX::InstrumentPartySubID InstrumentPartySubID_358("STRING_1404740039");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_358);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_358.insert(InstrumentPartySubID_358.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_358(9170157);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_358);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_358.insert(InstrumentPartySubIDType_358.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_358);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_359;
      FIX::InstrumentPartySubID InstrumentPartySubID_359("STRING_764904390");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_359);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_359.insert(InstrumentPartySubID_359.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_359(272363150);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_359);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_359.insert(InstrumentPartySubIDType_359.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_359);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_179;
    FIX::InstrumentPartyID InstrumentPartyID_179("STRING_1694310505");
    noInstrumentParties_0_1.set(InstrumentPartyID_179);
    InstrumentParties_NoInstrumentParties_179.insert(InstrumentPartyID_179.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_179('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_179);
    InstrumentParties_NoInstrumentParties_179.insert(InstrumentPartyIDSource_179.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_179(1532277853);
    noInstrumentParties_0_1.set(InstrumentPartyRole_179);
    InstrumentParties_NoInstrumentParties_179.insert(InstrumentPartyRole_179.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_179);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_360;
      FIX::InstrumentPartySubID InstrumentPartySubID_360("STRING_892441246");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_360);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_360.insert(InstrumentPartySubID_360.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_360(1175501351);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_360);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_360.insert(InstrumentPartySubIDType_360.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_360);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_180;
    FIX::InstrumentPartyID InstrumentPartyID_180("STRING_1421861187");
    noInstrumentParties_0_2.set(InstrumentPartyID_180);
    InstrumentParties_NoInstrumentParties_180.insert(InstrumentPartyID_180.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_180('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_180);
    InstrumentParties_NoInstrumentParties_180.insert(InstrumentPartyIDSource_180.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_180(453623405);
    noInstrumentParties_0_2.set(InstrumentPartyRole_180);
    InstrumentParties_NoInstrumentParties_180.insert(InstrumentPartyRole_180.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_180);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_361;
      FIX::InstrumentPartySubID InstrumentPartySubID_361("STRING_779991202");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_361);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_361.insert(InstrumentPartySubID_361.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_361(1277763641);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_361);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_361.insert(InstrumentPartySubIDType_361.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_361);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_362;
      FIX::InstrumentPartySubID InstrumentPartySubID_362("STRING_105225626");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_362);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_362.insert(InstrumentPartySubID_362.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_362(1976736396);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_362);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_362.insert(InstrumentPartySubIDType_362.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_362);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_363;
      FIX::InstrumentPartySubID InstrumentPartySubID_363("STRING_2086280248");
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubID_363);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_363.insert(InstrumentPartySubID_363.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_363(1236005664);
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubIDType_363);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_363.insert(InstrumentPartySubIDType_363.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_363);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradeCaptureReportRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_187;
    FIX::SecurityAltID SecurityAltID_187("STRING_522118756");
    noSecurityAltID_0_0.set(SecurityAltID_187);
    SecAltIDGrp_NoSecurityAltID_187.insert(SecurityAltID_187.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_187("STRING_2079797263");
    noSecurityAltID_0_0.set(SecurityAltIDSource_187);
    SecAltIDGrp_NoSecurityAltID_187.insert(SecurityAltIDSource_187.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_187);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_188;
    FIX::SecurityAltID SecurityAltID_188("STRING_1910524246");
    noSecurityAltID_0_1.set(SecurityAltID_188);
    SecAltIDGrp_NoSecurityAltID_188.insert(SecurityAltID_188.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_188("STRING_1715061669");
    noSecurityAltID_0_1.set(SecurityAltIDSource_188);
    SecAltIDGrp_NoSecurityAltID_188.insert(SecurityAltIDSource_188.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_188);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_189;
    FIX::SecurityAltID SecurityAltID_189("STRING_1588308483");
    noSecurityAltID_0_2.set(SecurityAltID_189);
    SecAltIDGrp_NoSecurityAltID_189.insert(SecurityAltID_189.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_189("STRING_1307291632");
    noSecurityAltID_0_2.set(SecurityAltIDSource_189);
    SecAltIDGrp_NoSecurityAltID_189.insert(SecurityAltIDSource_189.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_189);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_182;
  FIX::SecurityXML SecurityXML_183("XMLDATA_1198308835");
  msg.set(SecurityXML_183);
  FIX::SecurityXMLLen SecurityXMLLen_91(367666473);
  msg.set(SecurityXMLLen_91);
  FIX::SecurityXMLSchema SecurityXMLSchema_91("STRING_1584162535");
  msg.set(SecurityXMLSchema_91);
  SecurityXML_182.insert(SecurityXMLSchema_91.getString());
  all_values.push_back(SecurityXML_182);

  // InstrumentExtension
  multiset<string> InstrumentExtension_18;
  FIX::DeliveryForm DeliveryForm_18(2);
  msg.set(DeliveryForm_18);
  InstrumentExtension_18.insert(DeliveryForm_18.getString());
  FIX::PctAtRisk PctAtRisk_18;
  PctAtRisk_18.setString("65.130000");
  msg.set(PctAtRisk_18);
  InstrumentExtension_18.insert(PctAtRisk_18.getString());
  all_values.push_back(InstrumentExtension_18);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_38;
    FIX::InstrAttribType InstrAttribType_38(99);
    noInstrAttrib_0_0.set(InstrAttribType_38);
    AttrbGrp_NoInstrAttrib_38.insert(InstrAttribType_38.getString());
    FIX::InstrAttribValue InstrAttribValue_38("STRING_2044769663");
    noInstrAttrib_0_0.set(InstrAttribValue_38);
    AttrbGrp_NoInstrAttrib_38.insert(InstrAttribValue_38.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_38);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_39;
    FIX::InstrAttribType InstrAttribType_39(11);
    noInstrAttrib_0_1.set(InstrAttribType_39);
    AttrbGrp_NoInstrAttrib_39.insert(InstrAttribType_39.getString());
    FIX::InstrAttribValue InstrAttribValue_39("STRING_354841039");
    noInstrAttrib_0_1.set(InstrAttribValue_39);
    AttrbGrp_NoInstrAttrib_39.insert(InstrAttribValue_39.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_39);

    msg.addGroup(noInstrAttrib_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrAttrib noInstrAttrib_0_2;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_40;
    FIX::InstrAttribType InstrAttribType_40(99);
    noInstrAttrib_0_2.set(InstrAttribType_40);
    AttrbGrp_NoInstrAttrib_40.insert(InstrAttribType_40.getString());
    FIX::InstrAttribValue InstrAttribValue_40("STRING_269690202");
    noInstrAttrib_0_2.set(InstrAttribValue_40);
    AttrbGrp_NoInstrAttrib_40.insert(InstrAttribValue_40.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_40);

    msg.addGroup(noInstrAttrib_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::TradeCaptureReportRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_153;
    FIX::PartyID PartyID_153("STRING_457581572");
    noPartyIDs_0_0.set(PartyID_153);
    Parties_NoPartyIDs_153.insert(PartyID_153.getString());
    FIX::PartyIDSource PartyIDSource_153('9');
    noPartyIDs_0_0.set(PartyIDSource_153);
    Parties_NoPartyIDs_153.insert(PartyIDSource_153.getString());
    FIX::PartyRole PartyRole_153(2);
    noPartyIDs_0_0.set(PartyRole_153);
    Parties_NoPartyIDs_153.insert(PartyRole_153.getString());
    all_values.push_back(Parties_NoPartyIDs_153);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_301;
      FIX::PartySubID PartySubID_301("STRING_954676531");
      noPartySubIDs_0_1_0.set(PartySubID_301);
      PtysSubGrp_NoPartySubIDs_301.insert(PartySubID_301.getString());
      FIX::PartySubIDType PartySubIDType_301(31);
      noPartySubIDs_0_1_0.set(PartySubIDType_301);
      PtysSubGrp_NoPartySubIDs_301.insert(PartySubIDType_301.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_301);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_302;
      FIX::PartySubID PartySubID_302("STRING_41484971");
      noPartySubIDs_0_1_1.set(PartySubID_302);
      PtysSubGrp_NoPartySubIDs_302.insert(PartySubID_302.getString());
      FIX::PartySubIDType PartySubIDType_302(7);
      noPartySubIDs_0_1_1.set(PartySubIDType_302);
      PtysSubGrp_NoPartySubIDs_302.insert(PartySubIDType_302.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_302);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_303;
      FIX::PartySubID PartySubID_303("STRING_1984080015");
      noPartySubIDs_0_1_2.set(PartySubID_303);
      PtysSubGrp_NoPartySubIDs_303.insert(PartySubID_303.getString());
      FIX::PartySubIDType PartySubIDType_303(32);
      noPartySubIDs_0_1_2.set(PartySubIDType_303);
      PtysSubGrp_NoPartySubIDs_303.insert(PartySubIDType_303.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_303);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_154;
    FIX::PartyID PartyID_154("STRING_148424173");
    noPartyIDs_0_1.set(PartyID_154);
    Parties_NoPartyIDs_154.insert(PartyID_154.getString());
    FIX::PartyIDSource PartyIDSource_154('7');
    noPartyIDs_0_1.set(PartyIDSource_154);
    Parties_NoPartyIDs_154.insert(PartyIDSource_154.getString());
    FIX::PartyRole PartyRole_154(26);
    noPartyIDs_0_1.set(PartyRole_154);
    Parties_NoPartyIDs_154.insert(PartyRole_154.getString());
    all_values.push_back(Parties_NoPartyIDs_154);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_304;
      FIX::PartySubID PartySubID_304("STRING_1136491521");
      noPartySubIDs_1_1_0.set(PartySubID_304);
      PtysSubGrp_NoPartySubIDs_304.insert(PartySubID_304.getString());
      FIX::PartySubIDType PartySubIDType_304(3);
      noPartySubIDs_1_1_0.set(PartySubIDType_304);
      PtysSubGrp_NoPartySubIDs_304.insert(PartySubIDType_304.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_304);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_305;
      FIX::PartySubID PartySubID_305("STRING_1669046272");
      noPartySubIDs_1_1_1.set(PartySubID_305);
      PtysSubGrp_NoPartySubIDs_305.insert(PartySubID_305.getString());
      FIX::PartySubIDType PartySubIDType_305(30);
      noPartySubIDs_1_1_1.set(PartySubIDType_305);
      PtysSubGrp_NoPartySubIDs_305.insert(PartySubIDType_305.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_305);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_155;
    FIX::PartyID PartyID_155("STRING_1268287185");
    noPartyIDs_0_2.set(PartyID_155);
    Parties_NoPartyIDs_155.insert(PartyID_155.getString());
    FIX::PartyIDSource PartyIDSource_155('7');
    noPartyIDs_0_2.set(PartyIDSource_155);
    Parties_NoPartyIDs_155.insert(PartyIDSource_155.getString());
    FIX::PartyRole PartyRole_155(75);
    noPartyIDs_0_2.set(PartyRole_155);
    Parties_NoPartyIDs_155.insert(PartyRole_155.getString());
    all_values.push_back(Parties_NoPartyIDs_155);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_306;
      FIX::PartySubID PartySubID_306("STRING_1661635610");
      noPartySubIDs_2_1_0.set(PartySubID_306);
      PtysSubGrp_NoPartySubIDs_306.insert(PartySubID_306.getString());
      FIX::PartySubIDType PartySubIDType_306(2);
      noPartySubIDs_2_1_0.set(PartySubIDType_306);
      PtysSubGrp_NoPartySubIDs_306.insert(PartySubIDType_306.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_306);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_307;
      FIX::PartySubID PartySubID_307("STRING_811163826");
      noPartySubIDs_2_1_1.set(PartySubID_307);
      PtysSubGrp_NoPartySubIDs_307.insert(PartySubID_307.getString());
      FIX::PartySubIDType PartySubIDType_307(10);
      noPartySubIDs_2_1_1.set(PartySubIDType_307);
      PtysSubGrp_NoPartySubIDs_307.insert(PartySubIDType_307.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_307);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_308;
      FIX::PartySubID PartySubID_308("STRING_318986988");
      noPartySubIDs_2_1_2.set(PartySubID_308);
      PtysSubGrp_NoPartySubIDs_308.insert(PartySubID_308.getString());
      FIX::PartySubIDType PartySubIDType_308(26);
      noPartySubIDs_2_1_2.set(PartySubIDType_308);
      PtysSubGrp_NoPartySubIDs_308.insert(PartySubIDType_308.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_308);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // TrdCapDtGrp
  // Group TrdCapDtGrp.NoDates
  {
    FIX50SP2::TradeCaptureReportRequest::NoDates noDates_0_0;
    // TrdCapDtGrp.NoDates
    multiset<string> TrdCapDtGrp_NoDates_0;
    FIX::LastUpdateTime LastUpdateTime_7(FIX::UTCTIMESTAMP(23, 59, 32, 8, 62009));
    noDates_0_0.set(LastUpdateTime_7);
    TrdCapDtGrp_NoDates_0.insert(LastUpdateTime_7.getString());
    FIX::TradeDate TradeDate_30("LOCALMKTDATE_1647983188");
    noDates_0_0.set(TradeDate_30);
    TrdCapDtGrp_NoDates_0.insert(TradeDate_30.getString());
    FIX::TransactTime TransactTime_66(FIX::UTCTIMESTAMP(12, 35, 13, 1, 112013));
    noDates_0_0.set(TransactTime_66);
    TrdCapDtGrp_NoDates_0.insert(TransactTime_66.getString());
    all_values.push_back(TrdCapDtGrp_NoDates_0);

    msg.addGroup(noDates_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::TradeCaptureReportRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_143;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_143("DATA_1847038352");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_143);
    UnderlyingInstrument_143.insert(EncodedUnderlyingIssuer_143.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_143(656449971);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_143);
    UnderlyingInstrument_143.insert(EncodedUnderlyingIssuerLen_143.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_143("DATA_1898048206");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_143);
    UnderlyingInstrument_143.insert(EncodedUnderlyingSecurityDesc_143.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_143(2143337857);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_143);
    UnderlyingInstrument_143.insert(EncodedUnderlyingSecurityDescLen_143.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_143;
    UnderlyingAdjustedQuantity_143.setString("19247371");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_143);
    UnderlyingInstrument_143.insert(UnderlyingAdjustedQuantity_143.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_143;
    UnderlyingAllocationPercent_143.setString("73.040000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_143);
    UnderlyingInstrument_143.insert(UnderlyingAllocationPercent_143.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_143;
    UnderlyingAttachmentPoint_143.setString("62.500000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_143);
    UnderlyingInstrument_143.insert(UnderlyingAttachmentPoint_143.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_143("STRING_1508268643");
    noUnderlyings_0_0.set(UnderlyingCFICode_143);
    UnderlyingInstrument_143.insert(UnderlyingCFICode_143.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_143("STRING_1301429266");
    noUnderlyings_0_0.set(UnderlyingCPProgram_143);
    UnderlyingInstrument_143.insert(UnderlyingCPProgram_143.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_143("STRING_1055143688");
    noUnderlyings_0_0.set(UnderlyingCPRegType_143);
    UnderlyingInstrument_143.insert(UnderlyingCPRegType_143.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_143;
    UnderlyingCapValue_143.setString("1719488");
    noUnderlyings_0_0.set(UnderlyingCapValue_143);
    UnderlyingInstrument_143.insert(UnderlyingCapValue_143.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_143;
    UnderlyingCashAmount_143.setString("7128672");
    noUnderlyings_0_0.set(UnderlyingCashAmount_143);
    UnderlyingInstrument_143.insert(UnderlyingCashAmount_143.getString());
    FIX::UnderlyingCashType UnderlyingCashType_143("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_143);
    UnderlyingInstrument_143.insert(UnderlyingCashType_143.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_143;
    UnderlyingContractMultiplier_143.setString("13379536");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_143);
    UnderlyingInstrument_143.insert(UnderlyingContractMultiplier_143.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_143(1553869091);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_143);
    UnderlyingInstrument_143.insert(UnderlyingContractMultiplierUnit_143.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_143("COUNTRY_1962807867");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_143);
    UnderlyingInstrument_143.insert(UnderlyingCountryOfIssue_143.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_143("LOCALMKTDATE_1603757189");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_143);
    UnderlyingInstrument_143.insert(UnderlyingCouponPaymentDate_143.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_143;
    UnderlyingCouponRate_143.setString("88.630000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_143);
    UnderlyingInstrument_143.insert(UnderlyingCouponRate_143.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_143("STRING_2095552799");
    noUnderlyings_0_0.set(UnderlyingCreditRating_143);
    UnderlyingInstrument_143.insert(UnderlyingCreditRating_143.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_143("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_143);
    UnderlyingInstrument_143.insert(UnderlyingCurrency_143.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_143;
    UnderlyingCurrentValue_143.setString("10354906");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_143);
    UnderlyingInstrument_143.insert(UnderlyingCurrentValue_143.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_143;
    UnderlyingDetachmentPoint_143.setString("26.500000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_143);
    UnderlyingInstrument_143.insert(UnderlyingDetachmentPoint_143.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_143;
    UnderlyingDirtyPrice_143.setString("8710633");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_143);
    UnderlyingInstrument_143.insert(UnderlyingDirtyPrice_143.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_143;
    UnderlyingEndPrice_143.setString("10353305");
    noUnderlyings_0_0.set(UnderlyingEndPrice_143);
    UnderlyingInstrument_143.insert(UnderlyingEndPrice_143.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_143;
    UnderlyingEndValue_143.setString("20819922");
    noUnderlyings_0_0.set(UnderlyingEndValue_143);
    UnderlyingInstrument_143.insert(UnderlyingEndValue_143.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_143(955134626);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_143);
    UnderlyingInstrument_143.insert(UnderlyingExerciseStyle_143.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_143;
    UnderlyingFXRate_143.setString("11835947");
    noUnderlyings_0_0.set(UnderlyingFXRate_143);
    UnderlyingInstrument_143.insert(UnderlyingFXRate_143.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_143('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_143);
    UnderlyingInstrument_143.insert(UnderlyingFXRateCalc_143.getString());
    FIX::UnderlyingFactor UnderlyingFactor_143;
    UnderlyingFactor_143.setString("15416062");
    noUnderlyings_0_0.set(UnderlyingFactor_143);
    UnderlyingInstrument_143.insert(UnderlyingFactor_143.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_143(1412596666);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_143);
    UnderlyingInstrument_143.insert(UnderlyingFlowScheduleType_143.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_143("STRING_344610092");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_143);
    UnderlyingInstrument_143.insert(UnderlyingInstrRegistry_143.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_143("LOCALMKTDATE_50572571");
    noUnderlyings_0_0.set(UnderlyingIssueDate_143);
    UnderlyingInstrument_143.insert(UnderlyingIssueDate_143.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_143("STRING_1163161225");
    noUnderlyings_0_0.set(UnderlyingIssuer_143);
    UnderlyingInstrument_143.insert(UnderlyingIssuer_143.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_143("STRING_340464301");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_143);
    UnderlyingInstrument_143.insert(UnderlyingLocaleOfIssue_143.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_143("LOCALMKTDATE_1975309728");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_143);
    UnderlyingInstrument_143.insert(UnderlyingMaturityDate_143.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_143("MONTHYEAR_802954881");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_143);
    UnderlyingInstrument_143.insert(UnderlyingMaturityMonthYear_143.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_143("TZTIMEONLY_69296904");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_143);
    UnderlyingInstrument_143.insert(UnderlyingMaturityTime_143.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_143;
    UnderlyingNotionalPercentageOutstanding_143.setString("47.230000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_143);
    UnderlyingInstrument_143.insert(UnderlyingNotionalPercentageOutstanding_143.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_143('2');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_143);
    UnderlyingInstrument_143.insert(UnderlyingOptAttribute_143.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_143;
    UnderlyingOriginalNotionalPercentageOutstanding_143.setString("5.920000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_143);
    UnderlyingInstrument_143.insert(UnderlyingOriginalNotionalPercentageOutstanding_143.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_143("STRING_1508043544");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_143);
    UnderlyingInstrument_143.insert(UnderlyingPriceUnitOfMeasure_143.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_143;
    UnderlyingPriceUnitOfMeasureQty_143.setString("6697677");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_143);
    UnderlyingInstrument_143.insert(UnderlyingPriceUnitOfMeasureQty_143.getString());
    FIX::UnderlyingProduct UnderlyingProduct_143(351087621);
    noUnderlyings_0_0.set(UnderlyingProduct_143);
    UnderlyingInstrument_143.insert(UnderlyingProduct_143.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_143(698513582);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_143);
    UnderlyingInstrument_143.insert(UnderlyingPutOrCall_143.getString());
    FIX::UnderlyingPx UnderlyingPx_143;
    UnderlyingPx_143.setString("761531");
    noUnderlyings_0_0.set(UnderlyingPx_143);
    UnderlyingInstrument_143.insert(UnderlyingPx_143.getString());
    FIX::UnderlyingQty UnderlyingQty_143;
    UnderlyingQty_143.setString("1664118");
    noUnderlyings_0_0.set(UnderlyingQty_143);
    UnderlyingInstrument_143.insert(UnderlyingQty_143.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_143("LOCALMKTDATE_154787124");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_143);
    UnderlyingInstrument_143.insert(UnderlyingRedemptionDate_143.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_143("STRING_781122050");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_143);
    UnderlyingInstrument_143.insert(UnderlyingRepoCollateralSecurityType_143.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_143;
    UnderlyingRepurchaseRate_143.setString("9.920000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_143);
    UnderlyingInstrument_143.insert(UnderlyingRepurchaseRate_143.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_143(1251700234);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_143);
    UnderlyingInstrument_143.insert(UnderlyingRepurchaseTerm_143.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_143("STRING_1548395663");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_143);
    UnderlyingInstrument_143.insert(UnderlyingRestructuringType_143.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_143("STRING_1149971607");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_143);
    UnderlyingInstrument_143.insert(UnderlyingSecurityDesc_143.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_143("EXCHANGE_1849112884");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_143);
    UnderlyingInstrument_143.insert(UnderlyingSecurityExchange_143.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_143("STRING_271975348");
    noUnderlyings_0_0.set(UnderlyingSecurityID_143);
    UnderlyingInstrument_143.insert(UnderlyingSecurityID_143.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_143("STRING_37818545");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_143);
    UnderlyingInstrument_143.insert(UnderlyingSecurityIDSource_143.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_143("STRING_1783621441");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_143);
    UnderlyingInstrument_143.insert(UnderlyingSecuritySubType_143.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_143("STRING_1227109975");
    noUnderlyings_0_0.set(UnderlyingSecurityType_143);
    UnderlyingInstrument_143.insert(UnderlyingSecurityType_143.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_143("STRING_1221413277");
    noUnderlyings_0_0.set(UnderlyingSeniority_143);
    UnderlyingInstrument_143.insert(UnderlyingSeniority_143.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_143("STRING_281193181");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_143);
    UnderlyingInstrument_143.insert(UnderlyingSettlMethod_143.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_143(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_143);
    UnderlyingInstrument_143.insert(UnderlyingSettlementType_143.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_143;
    UnderlyingStartValue_143.setString("4865262");
    noUnderlyings_0_0.set(UnderlyingStartValue_143);
    UnderlyingInstrument_143.insert(UnderlyingStartValue_143.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_143("STRING_625803273");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_143);
    UnderlyingInstrument_143.insert(UnderlyingStateOrProvinceOfIssue_143.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_143("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_143);
    UnderlyingInstrument_143.insert(UnderlyingStrikeCurrency_143.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_143;
    UnderlyingStrikePrice_143.setString("9662675");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_143);
    UnderlyingInstrument_143.insert(UnderlyingStrikePrice_143.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_143("STRING_499631226");
    noUnderlyings_0_0.set(UnderlyingSymbol_143);
    UnderlyingInstrument_143.insert(UnderlyingSymbol_143.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_143("STRING_305158754");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_143);
    UnderlyingInstrument_143.insert(UnderlyingSymbolSfx_143.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_143("STRING_1035564479");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_143);
    UnderlyingInstrument_143.insert(UnderlyingTimeUnit_143.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_143("STRING_1835725949");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_143);
    UnderlyingInstrument_143.insert(UnderlyingUnitOfMeasure_143.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_143;
    UnderlyingUnitOfMeasureQty_143.setString("2620592");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_143);
    UnderlyingInstrument_143.insert(UnderlyingUnitOfMeasureQty_143.getString());
    all_values.push_back(UnderlyingInstrument_143);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_291;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_291("STRING_1196285845");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_291);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_291.insert(UnderlyingSecurityAltID_291.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_291("STRING_931826997");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_291);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_291.insert(UnderlyingSecurityAltIDSource_291.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_291);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_292;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_292("STRING_363609045");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_292);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_292.insert(UnderlyingSecurityAltID_292.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_292("STRING_1894799428");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_292);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_292.insert(UnderlyingSecurityAltIDSource_292.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_292);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_293;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_293("STRING_1007980185");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_293);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_293.insert(UnderlyingSecurityAltID_293.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_293("STRING_530020886");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_293);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_293.insert(UnderlyingSecurityAltIDSource_293.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_293);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_280;
      FIX::UnderlyingStipType UnderlyingStipType_280("STRING_1789102235");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_280);
      UnderlyingStipulations_NoUnderlyingStips_280.insert(UnderlyingStipType_280.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_280("STRING_644501878");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_280);
      UnderlyingStipulations_NoUnderlyingStips_280.insert(UnderlyingStipValue_280.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_280);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_281;
      FIX::UnderlyingStipType UnderlyingStipType_281("STRING_1153803138");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_281);
      UnderlyingStipulations_NoUnderlyingStips_281.insert(UnderlyingStipType_281.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_281("STRING_1190014250");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_281);
      UnderlyingStipulations_NoUnderlyingStips_281.insert(UnderlyingStipValue_281.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_281);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_289;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_289("STRING_855432374");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_289);
      UndlyInstrumentParties_NoUndlyInstrumentParties_289.insert(UnderlyingInstrumentPartyID_289.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_289('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_289);
      UndlyInstrumentParties_NoUndlyInstrumentParties_289.insert(UnderlyingInstrumentPartyIDSource_289.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_289(1832292031);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_289);
      UndlyInstrumentParties_NoUndlyInstrumentParties_289.insert(UnderlyingInstrumentPartyRole_289.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_289);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_573;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_573("STRING_541615926");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_573);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_573.insert(UnderlyingInstrumentPartySubID_573.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_573(906221660);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_573);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_573.insert(UnderlyingInstrumentPartySubIDType_573.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_573);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_574;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_574("STRING_772763349");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_574);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_574.insert(UnderlyingInstrumentPartySubID_574.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_574(1162848501);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_574);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_574.insert(UnderlyingInstrumentPartySubIDType_574.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_574);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_290;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_290("STRING_1392747956");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_290);
      UndlyInstrumentParties_NoUndlyInstrumentParties_290.insert(UnderlyingInstrumentPartyID_290.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_290('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_290);
      UndlyInstrumentParties_NoUndlyInstrumentParties_290.insert(UnderlyingInstrumentPartyIDSource_290.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_290(1834653647);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_290);
      UndlyInstrumentParties_NoUndlyInstrumentParties_290.insert(UnderlyingInstrumentPartyRole_290.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_290);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_575;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_575("STRING_217350549");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_575);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_575.insert(UnderlyingInstrumentPartySubID_575.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_575(186801226);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_575);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_575.insert(UnderlyingInstrumentPartySubIDType_575.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_575);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_576;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_576("STRING_1200110583");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_576);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_576.insert(UnderlyingInstrumentPartySubID_576.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_576(1252915028);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_576);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_576.insert(UnderlyingInstrumentPartySubIDType_576.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_576);

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
