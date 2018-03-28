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
  FIX::ClOrdID ClOrdID_49("STRING_504765715");
  msg.set(ClOrdID_49);
  TradeCaptureReportRequest_0.insert(ClOrdID_49.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_27("LOCALMKTDATE_1383438963");
  msg.set(ClearingBusinessDate_27);
  TradeCaptureReportRequest_0.insert(ClearingBusinessDate_27.getString());
  FIX::EncodedText EncodedText_102("DATA_36615887");
  msg.set(EncodedText_102);
  TradeCaptureReportRequest_0.insert(EncodedText_102.getString());
  FIX::EncodedTextLen EncodedTextLen_102(2120491001);
  msg.set(EncodedTextLen_102);
  TradeCaptureReportRequest_0.insert(EncodedTextLen_102.getString());
  FIX::ExecID ExecID_25("STRING_423345040");
  msg.set(ExecID_25);
  TradeCaptureReportRequest_0.insert(ExecID_25.getString());
  FIX::ExecType ExecType_3('F');
  msg.set(ExecType_3);
  TradeCaptureReportRequest_0.insert(ExecType_3.getString());
  FIX::FirmTradeID FirmTradeID_9("STRING_1233623725");
  msg.set(FirmTradeID_9);
  TradeCaptureReportRequest_0.insert(FirmTradeID_9.getString());
  FIX::MatchStatus MatchStatus_13('1');
  msg.set(MatchStatus_13);
  TradeCaptureReportRequest_0.insert(MatchStatus_13.getString());
  FIX::MessageEventSource MessageEventSource_6("STRING_533338261");
  msg.set(MessageEventSource_6);
  TradeCaptureReportRequest_0.insert(MessageEventSource_6.getString());
  FIX::MultiLegReportingType MultiLegReportingType_6('2');
  msg.set(MultiLegReportingType_6);
  TradeCaptureReportRequest_0.insert(MultiLegReportingType_6.getString());
  FIX::OrderID OrderID_36("STRING_169390848");
  msg.set(OrderID_36);
  TradeCaptureReportRequest_0.insert(OrderID_36.getString());
  FIX::ResponseDestination ResponseDestination_5("STRING_1162087928");
  msg.set(ResponseDestination_5);
  TradeCaptureReportRequest_0.insert(ResponseDestination_5.getString());
  FIX::ResponseTransportType ResponseTransportType_5(1);
  msg.set(ResponseTransportType_5);
  TradeCaptureReportRequest_0.insert(ResponseTransportType_5.getString());
  FIX::SecondaryFirmTradeID SecondaryFirmTradeID_2("STRING_1381270190");
  msg.set(SecondaryFirmTradeID_2);
  TradeCaptureReportRequest_0.insert(SecondaryFirmTradeID_2.getString());
  FIX::SecondaryTradeID SecondaryTradeID_2("STRING_429116846");
  msg.set(SecondaryTradeID_2);
  TradeCaptureReportRequest_0.insert(SecondaryTradeID_2.getString());
  FIX::SecondaryTradeReportID SecondaryTradeReportID_12("STRING_2058527289");
  msg.set(SecondaryTradeReportID_12);
  TradeCaptureReportRequest_0.insert(SecondaryTradeReportID_12.getString());
  FIX::SecondaryTrdType SecondaryTrdType_2(1950665518);
  msg.set(SecondaryTrdType_2);
  TradeCaptureReportRequest_0.insert(SecondaryTrdType_2.getString());
  FIX::Side Side_52('4');
  msg.set(Side_52);
  TradeCaptureReportRequest_0.insert(Side_52.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_15('1');
  msg.set(SubscriptionRequestType_15);
  TradeCaptureReportRequest_0.insert(SubscriptionRequestType_15.getString());
  FIX::Text Text_102("STRING_1989300235");
  msg.set(Text_102);
  TradeCaptureReportRequest_0.insert(Text_102.getString());
  FIX::TimeBracket TimeBracket_3("STRING_501934432");
  msg.set(TimeBracket_3);
  TradeCaptureReportRequest_0.insert(TimeBracket_3.getString());
  FIX::TradeHandlingInstr TradeHandlingInstr_2('2');
  msg.set(TradeHandlingInstr_2);
  TradeCaptureReportRequest_0.insert(TradeHandlingInstr_2.getString());
  FIX::TradeID TradeID_11("STRING_1979792049");
  msg.set(TradeID_11);
  TradeCaptureReportRequest_0.insert(TradeID_11.getString());
  FIX::TradeInputDevice TradeInputDevice_3("STRING_146856460");
  msg.set(TradeInputDevice_3);
  TradeCaptureReportRequest_0.insert(TradeInputDevice_3.getString());
  FIX::TradeInputSource TradeInputSource_5("STRING_508542454");
  msg.set(TradeInputSource_5);
  TradeCaptureReportRequest_0.insert(TradeInputSource_5.getString());
  FIX::TradeLinkID TradeLinkID_2("STRING_424440131");
  msg.set(TradeLinkID_2);
  TradeCaptureReportRequest_0.insert(TradeLinkID_2.getString());
  FIX::TradeReportID TradeReportID_12("STRING_725290171");
  msg.set(TradeReportID_12);
  TradeCaptureReportRequest_0.insert(TradeReportID_12.getString());
  FIX::TradeRequestID TradeRequestID_1("STRING_572920543");
  msg.set(TradeRequestID_1);
  TradeCaptureReportRequest_0.insert(TradeRequestID_1.getString());
  FIX::TradeRequestType TradeRequestType_0(1);
  msg.set(TradeRequestType_0);
  TradeCaptureReportRequest_0.insert(TradeRequestType_0.getString());
  FIX::TradingSessionID TradingSessionID_94("STRING_3");
  msg.set(TradingSessionID_94);
  TradeCaptureReportRequest_0.insert(TradingSessionID_94.getString());
  FIX::TradingSessionSubID TradingSessionSubID_94("STRING_2");
  msg.set(TradingSessionSubID_94);
  TradeCaptureReportRequest_0.insert(TradingSessionSubID_94.getString());
  FIX::TransferReason TransferReason_2("STRING_1919167686");
  msg.set(TransferReason_2);
  TradeCaptureReportRequest_0.insert(TransferReason_2.getString());
  FIX::TrdMatchID TrdMatchID_3("STRING_763922277");
  msg.set(TrdMatchID_3);
  TradeCaptureReportRequest_0.insert(TrdMatchID_3.getString());
  FIX::TrdSubType TrdSubType_5(10);
  msg.set(TrdSubType_5);
  TradeCaptureReportRequest_0.insert(TrdSubType_5.getString());
  FIX::TrdType TrdType_10(54);
  msg.set(TrdType_10);
  TradeCaptureReportRequest_0.insert(TrdType_10.getString());
  all_values.push_back(TradeCaptureReportRequest_0);

  // FinancingDetails
  multiset<string> FinancingDetails_28;
  FIX::AgreementCurrency AgreementCurrency_28("EUR");
  msg.set(AgreementCurrency_28);
  FinancingDetails_28.insert(AgreementCurrency_28.getString());
  FIX::AgreementDate AgreementDate_28("LOCALMKTDATE_978315117");
  msg.set(AgreementDate_28);
  FinancingDetails_28.insert(AgreementDate_28.getString());
  FIX::AgreementDesc AgreementDesc_28("STRING_2095077570");
  msg.set(AgreementDesc_28);
  FinancingDetails_28.insert(AgreementDesc_28.getString());
  FIX::AgreementID AgreementID_28("STRING_1908159015");
  msg.set(AgreementID_28);
  FinancingDetails_28.insert(AgreementID_28.getString());
  FIX::DeliveryType DeliveryType_28(1);
  msg.set(DeliveryType_28);
  FinancingDetails_28.insert(DeliveryType_28.getString());
  FIX::EndDate EndDate_28("LOCALMKTDATE_116984770");
  msg.set(EndDate_28);
  FinancingDetails_28.insert(EndDate_28.getString());
  FIX::MarginRatio MarginRatio_28;
  MarginRatio_28.setString("32.950000");
  msg.set(MarginRatio_28);
  FinancingDetails_28.insert(MarginRatio_28.getString());
  FIX::StartDate StartDate_28("LOCALMKTDATE_231871266");
  msg.set(StartDate_28);
  FinancingDetails_28.insert(StartDate_28.getString());
  FIX::TerminationType TerminationType_28(1);
  msg.set(TerminationType_28);
  FinancingDetails_28.insert(TerminationType_28.getString());
  all_values.push_back(FinancingDetails_28);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::TradeCaptureReportRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_137;
    FIX::EncodedLegIssuer EncodedLegIssuer_137("DATA_142914907");
    noLegs_0_0.set(EncodedLegIssuer_137);
    InstrumentLeg_137.insert(EncodedLegIssuer_137.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_137(1301436830);
    noLegs_0_0.set(EncodedLegIssuerLen_137);
    InstrumentLeg_137.insert(EncodedLegIssuerLen_137.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_137("DATA_2044872480");
    noLegs_0_0.set(EncodedLegSecurityDesc_137);
    InstrumentLeg_137.insert(EncodedLegSecurityDesc_137.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_137(1068813887);
    noLegs_0_0.set(EncodedLegSecurityDescLen_137);
    InstrumentLeg_137.insert(EncodedLegSecurityDescLen_137.getString());
    FIX::LegCFICode LegCFICode_137("STRING_1143253417");
    noLegs_0_0.set(LegCFICode_137);
    InstrumentLeg_137.insert(LegCFICode_137.getString());
    FIX::LegContractMultiplier LegContractMultiplier_137;
    LegContractMultiplier_137.setString("3993232");
    noLegs_0_0.set(LegContractMultiplier_137);
    InstrumentLeg_137.insert(LegContractMultiplier_137.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_137(1465723399);
    noLegs_0_0.set(LegContractMultiplierUnit_137);
    InstrumentLeg_137.insert(LegContractMultiplierUnit_137.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_137("MONTHYEAR_975561818");
    noLegs_0_0.set(LegContractSettlMonth_137);
    InstrumentLeg_137.insert(LegContractSettlMonth_137.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_137("COUNTRY_546179725");
    noLegs_0_0.set(LegCountryOfIssue_137);
    InstrumentLeg_137.insert(LegCountryOfIssue_137.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_137("LOCALMKTDATE_1974265854");
    noLegs_0_0.set(LegCouponPaymentDate_137);
    InstrumentLeg_137.insert(LegCouponPaymentDate_137.getString());
    FIX::LegCouponRate LegCouponRate_137;
    LegCouponRate_137.setString("19.500000");
    noLegs_0_0.set(LegCouponRate_137);
    InstrumentLeg_137.insert(LegCouponRate_137.getString());
    FIX::LegCreditRating LegCreditRating_137("STRING_1271469896");
    noLegs_0_0.set(LegCreditRating_137);
    InstrumentLeg_137.insert(LegCreditRating_137.getString());
    FIX::LegCurrency LegCurrency_137("CAN");
    noLegs_0_0.set(LegCurrency_137);
    InstrumentLeg_137.insert(LegCurrency_137.getString());
    FIX::LegDatedDate LegDatedDate_137("LOCALMKTDATE_651953211");
    noLegs_0_0.set(LegDatedDate_137);
    InstrumentLeg_137.insert(LegDatedDate_137.getString());
    FIX::LegExerciseStyle LegExerciseStyle_137(1243236603);
    noLegs_0_0.set(LegExerciseStyle_137);
    InstrumentLeg_137.insert(LegExerciseStyle_137.getString());
    FIX::LegFactor LegFactor_137;
    LegFactor_137.setString("4386043");
    noLegs_0_0.set(LegFactor_137);
    InstrumentLeg_137.insert(LegFactor_137.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_137(1415875488);
    noLegs_0_0.set(LegFlowScheduleType_137);
    InstrumentLeg_137.insert(LegFlowScheduleType_137.getString());
    FIX::LegInstrRegistry LegInstrRegistry_137("STRING_2123386343");
    noLegs_0_0.set(LegInstrRegistry_137);
    InstrumentLeg_137.insert(LegInstrRegistry_137.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_137("LOCALMKTDATE_183295702");
    noLegs_0_0.set(LegInterestAccrualDate_137);
    InstrumentLeg_137.insert(LegInterestAccrualDate_137.getString());
    FIX::LegIssueDate LegIssueDate_137("LOCALMKTDATE_455659158");
    noLegs_0_0.set(LegIssueDate_137);
    InstrumentLeg_137.insert(LegIssueDate_137.getString());
    FIX::LegIssuer LegIssuer_137("STRING_1350723449");
    noLegs_0_0.set(LegIssuer_137);
    InstrumentLeg_137.insert(LegIssuer_137.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_137("STRING_1161610819");
    noLegs_0_0.set(LegLocaleOfIssue_137);
    InstrumentLeg_137.insert(LegLocaleOfIssue_137.getString());
    FIX::LegMaturityDate LegMaturityDate_137("LOCALMKTDATE_403253080");
    noLegs_0_0.set(LegMaturityDate_137);
    InstrumentLeg_137.insert(LegMaturityDate_137.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_137("MONTHYEAR_1111398816");
    noLegs_0_0.set(LegMaturityMonthYear_137);
    InstrumentLeg_137.insert(LegMaturityMonthYear_137.getString());
    FIX::LegMaturityTime LegMaturityTime_137("TZTIMEONLY_595892964");
    noLegs_0_0.set(LegMaturityTime_137);
    InstrumentLeg_137.insert(LegMaturityTime_137.getString());
    FIX::LegOptAttribute LegOptAttribute_137('5');
    noLegs_0_0.set(LegOptAttribute_137);
    InstrumentLeg_137.insert(LegOptAttribute_137.getString());
    FIX::LegOptionRatio LegOptionRatio_137;
    LegOptionRatio_137.setString("20341621");
    noLegs_0_0.set(LegOptionRatio_137);
    InstrumentLeg_137.insert(LegOptionRatio_137.getString());
    FIX::LegPool LegPool_137("STRING_827764230");
    noLegs_0_0.set(LegPool_137);
    InstrumentLeg_137.insert(LegPool_137.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_137("STRING_2018492810");
    noLegs_0_0.set(LegPriceUnitOfMeasure_137);
    InstrumentLeg_137.insert(LegPriceUnitOfMeasure_137.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_137;
    LegPriceUnitOfMeasureQty_137.setString("12385586");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_137);
    InstrumentLeg_137.insert(LegPriceUnitOfMeasureQty_137.getString());
    FIX::LegProduct LegProduct_137(970679137);
    noLegs_0_0.set(LegProduct_137);
    InstrumentLeg_137.insert(LegProduct_137.getString());
    FIX::LegPutOrCall LegPutOrCall_137(1172445992);
    noLegs_0_0.set(LegPutOrCall_137);
    InstrumentLeg_137.insert(LegPutOrCall_137.getString());
    FIX::LegRatioQty LegRatioQty_137;
    LegRatioQty_137.setString("11359474");
    noLegs_0_0.set(LegRatioQty_137);
    InstrumentLeg_137.insert(LegRatioQty_137.getString());
    FIX::LegRedemptionDate LegRedemptionDate_137("LOCALMKTDATE_2039493025");
    noLegs_0_0.set(LegRedemptionDate_137);
    InstrumentLeg_137.insert(LegRedemptionDate_137.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_137("STRING_168215762");
    noLegs_0_0.set(LegRepoCollateralSecurityType_137);
    InstrumentLeg_137.insert(LegRepoCollateralSecurityType_137.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_137;
    LegRepurchaseRate_137.setString("7.010000");
    noLegs_0_0.set(LegRepurchaseRate_137);
    InstrumentLeg_137.insert(LegRepurchaseRate_137.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_137(1357732776);
    noLegs_0_0.set(LegRepurchaseTerm_137);
    InstrumentLeg_137.insert(LegRepurchaseTerm_137.getString());
    FIX::LegSecurityDesc LegSecurityDesc_137("STRING_1143777580");
    noLegs_0_0.set(LegSecurityDesc_137);
    InstrumentLeg_137.insert(LegSecurityDesc_137.getString());
    FIX::LegSecurityExchange LegSecurityExchange_137("EXCHANGE_2081450426");
    noLegs_0_0.set(LegSecurityExchange_137);
    InstrumentLeg_137.insert(LegSecurityExchange_137.getString());
    FIX::LegSecurityID LegSecurityID_137("STRING_1184514982");
    noLegs_0_0.set(LegSecurityID_137);
    InstrumentLeg_137.insert(LegSecurityID_137.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_137("STRING_396295882");
    noLegs_0_0.set(LegSecurityIDSource_137);
    InstrumentLeg_137.insert(LegSecurityIDSource_137.getString());
    FIX::LegSecuritySubType LegSecuritySubType_137("STRING_1205436674");
    noLegs_0_0.set(LegSecuritySubType_137);
    InstrumentLeg_137.insert(LegSecuritySubType_137.getString());
    FIX::LegSecurityType LegSecurityType_137("STRING_1584217732");
    noLegs_0_0.set(LegSecurityType_137);
    InstrumentLeg_137.insert(LegSecurityType_137.getString());
    FIX::LegSide LegSide_137('1');
    noLegs_0_0.set(LegSide_137);
    InstrumentLeg_137.insert(LegSide_137.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_137("STRING_1857389885");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_137);
    InstrumentLeg_137.insert(LegStateOrProvinceOfIssue_137.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_137("USD");
    noLegs_0_0.set(LegStrikeCurrency_137);
    InstrumentLeg_137.insert(LegStrikeCurrency_137.getString());
    FIX::LegStrikePrice LegStrikePrice_137;
    LegStrikePrice_137.setString("11257817");
    noLegs_0_0.set(LegStrikePrice_137);
    InstrumentLeg_137.insert(LegStrikePrice_137.getString());
    FIX::LegSymbol LegSymbol_137("STRING_655873382");
    noLegs_0_0.set(LegSymbol_137);
    InstrumentLeg_137.insert(LegSymbol_137.getString());
    FIX::LegSymbolSfx LegSymbolSfx_137("STRING_1685116169");
    noLegs_0_0.set(LegSymbolSfx_137);
    InstrumentLeg_137.insert(LegSymbolSfx_137.getString());
    FIX::LegTimeUnit LegTimeUnit_137("STRING_1581440884");
    noLegs_0_0.set(LegTimeUnit_137);
    InstrumentLeg_137.insert(LegTimeUnit_137.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_137("STRING_2006596831");
    noLegs_0_0.set(LegUnitOfMeasure_137);
    InstrumentLeg_137.insert(LegUnitOfMeasure_137.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_137;
    LegUnitOfMeasureQty_137.setString("6992433");
    noLegs_0_0.set(LegUnitOfMeasureQty_137);
    InstrumentLeg_137.insert(LegUnitOfMeasureQty_137.getString());
    all_values.push_back(InstrumentLeg_137);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_278;
      FIX::LegSecurityAltID LegSecurityAltID_278("STRING_970511999");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_278);
      LegSecAltIDGrp_NoLegSecurityAltID_278.insert(LegSecurityAltID_278.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_278("STRING_1295136305");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_278);
      LegSecAltIDGrp_NoLegSecurityAltID_278.insert(LegSecurityAltIDSource_278.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_278);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_279;
      FIX::LegSecurityAltID LegSecurityAltID_279("STRING_357448166");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_279);
      LegSecAltIDGrp_NoLegSecurityAltID_279.insert(LegSecurityAltID_279.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_279("STRING_857190462");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_279);
      LegSecAltIDGrp_NoLegSecurityAltID_279.insert(LegSecurityAltIDSource_279.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_279);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_280;
      FIX::LegSecurityAltID LegSecurityAltID_280("STRING_2122900535");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_280);
      LegSecAltIDGrp_NoLegSecurityAltID_280.insert(LegSecurityAltID_280.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_280("STRING_228457328");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_280);
      LegSecAltIDGrp_NoLegSecurityAltID_280.insert(LegSecurityAltIDSource_280.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_280);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_138;
    FIX::EncodedLegIssuer EncodedLegIssuer_138("DATA_2095749066");
    noLegs_0_1.set(EncodedLegIssuer_138);
    InstrumentLeg_138.insert(EncodedLegIssuer_138.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_138(946096025);
    noLegs_0_1.set(EncodedLegIssuerLen_138);
    InstrumentLeg_138.insert(EncodedLegIssuerLen_138.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_138("DATA_1400903320");
    noLegs_0_1.set(EncodedLegSecurityDesc_138);
    InstrumentLeg_138.insert(EncodedLegSecurityDesc_138.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_138(1084212855);
    noLegs_0_1.set(EncodedLegSecurityDescLen_138);
    InstrumentLeg_138.insert(EncodedLegSecurityDescLen_138.getString());
    FIX::LegCFICode LegCFICode_138("STRING_838105402");
    noLegs_0_1.set(LegCFICode_138);
    InstrumentLeg_138.insert(LegCFICode_138.getString());
    FIX::LegContractMultiplier LegContractMultiplier_138;
    LegContractMultiplier_138.setString("15691190");
    noLegs_0_1.set(LegContractMultiplier_138);
    InstrumentLeg_138.insert(LegContractMultiplier_138.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_138(471999908);
    noLegs_0_1.set(LegContractMultiplierUnit_138);
    InstrumentLeg_138.insert(LegContractMultiplierUnit_138.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_138("MONTHYEAR_48354530");
    noLegs_0_1.set(LegContractSettlMonth_138);
    InstrumentLeg_138.insert(LegContractSettlMonth_138.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_138("COUNTRY_565413015");
    noLegs_0_1.set(LegCountryOfIssue_138);
    InstrumentLeg_138.insert(LegCountryOfIssue_138.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_138("LOCALMKTDATE_405966686");
    noLegs_0_1.set(LegCouponPaymentDate_138);
    InstrumentLeg_138.insert(LegCouponPaymentDate_138.getString());
    FIX::LegCouponRate LegCouponRate_138;
    LegCouponRate_138.setString("95.130000");
    noLegs_0_1.set(LegCouponRate_138);
    InstrumentLeg_138.insert(LegCouponRate_138.getString());
    FIX::LegCreditRating LegCreditRating_138("STRING_961708897");
    noLegs_0_1.set(LegCreditRating_138);
    InstrumentLeg_138.insert(LegCreditRating_138.getString());
    FIX::LegCurrency LegCurrency_138("CHF");
    noLegs_0_1.set(LegCurrency_138);
    InstrumentLeg_138.insert(LegCurrency_138.getString());
    FIX::LegDatedDate LegDatedDate_138("LOCALMKTDATE_2024925053");
    noLegs_0_1.set(LegDatedDate_138);
    InstrumentLeg_138.insert(LegDatedDate_138.getString());
    FIX::LegExerciseStyle LegExerciseStyle_138(1321309598);
    noLegs_0_1.set(LegExerciseStyle_138);
    InstrumentLeg_138.insert(LegExerciseStyle_138.getString());
    FIX::LegFactor LegFactor_138;
    LegFactor_138.setString("13495742");
    noLegs_0_1.set(LegFactor_138);
    InstrumentLeg_138.insert(LegFactor_138.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_138(1379261871);
    noLegs_0_1.set(LegFlowScheduleType_138);
    InstrumentLeg_138.insert(LegFlowScheduleType_138.getString());
    FIX::LegInstrRegistry LegInstrRegistry_138("STRING_299607676");
    noLegs_0_1.set(LegInstrRegistry_138);
    InstrumentLeg_138.insert(LegInstrRegistry_138.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_138("LOCALMKTDATE_2005447666");
    noLegs_0_1.set(LegInterestAccrualDate_138);
    InstrumentLeg_138.insert(LegInterestAccrualDate_138.getString());
    FIX::LegIssueDate LegIssueDate_138("LOCALMKTDATE_916894392");
    noLegs_0_1.set(LegIssueDate_138);
    InstrumentLeg_138.insert(LegIssueDate_138.getString());
    FIX::LegIssuer LegIssuer_138("STRING_1881048560");
    noLegs_0_1.set(LegIssuer_138);
    InstrumentLeg_138.insert(LegIssuer_138.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_138("STRING_1864560850");
    noLegs_0_1.set(LegLocaleOfIssue_138);
    InstrumentLeg_138.insert(LegLocaleOfIssue_138.getString());
    FIX::LegMaturityDate LegMaturityDate_138("LOCALMKTDATE_1616137733");
    noLegs_0_1.set(LegMaturityDate_138);
    InstrumentLeg_138.insert(LegMaturityDate_138.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_138("MONTHYEAR_1718258876");
    noLegs_0_1.set(LegMaturityMonthYear_138);
    InstrumentLeg_138.insert(LegMaturityMonthYear_138.getString());
    FIX::LegMaturityTime LegMaturityTime_138("TZTIMEONLY_687589201");
    noLegs_0_1.set(LegMaturityTime_138);
    InstrumentLeg_138.insert(LegMaturityTime_138.getString());
    FIX::LegOptAttribute LegOptAttribute_138('7');
    noLegs_0_1.set(LegOptAttribute_138);
    InstrumentLeg_138.insert(LegOptAttribute_138.getString());
    FIX::LegOptionRatio LegOptionRatio_138;
    LegOptionRatio_138.setString("20757070");
    noLegs_0_1.set(LegOptionRatio_138);
    InstrumentLeg_138.insert(LegOptionRatio_138.getString());
    FIX::LegPool LegPool_138("STRING_1544779664");
    noLegs_0_1.set(LegPool_138);
    InstrumentLeg_138.insert(LegPool_138.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_138("STRING_739207277");
    noLegs_0_1.set(LegPriceUnitOfMeasure_138);
    InstrumentLeg_138.insert(LegPriceUnitOfMeasure_138.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_138;
    LegPriceUnitOfMeasureQty_138.setString("1566807");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_138);
    InstrumentLeg_138.insert(LegPriceUnitOfMeasureQty_138.getString());
    FIX::LegProduct LegProduct_138(1493045082);
    noLegs_0_1.set(LegProduct_138);
    InstrumentLeg_138.insert(LegProduct_138.getString());
    FIX::LegPutOrCall LegPutOrCall_138(1685303302);
    noLegs_0_1.set(LegPutOrCall_138);
    InstrumentLeg_138.insert(LegPutOrCall_138.getString());
    FIX::LegRatioQty LegRatioQty_138;
    LegRatioQty_138.setString("15575840");
    noLegs_0_1.set(LegRatioQty_138);
    InstrumentLeg_138.insert(LegRatioQty_138.getString());
    FIX::LegRedemptionDate LegRedemptionDate_138("LOCALMKTDATE_429774289");
    noLegs_0_1.set(LegRedemptionDate_138);
    InstrumentLeg_138.insert(LegRedemptionDate_138.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_138("STRING_375925056");
    noLegs_0_1.set(LegRepoCollateralSecurityType_138);
    InstrumentLeg_138.insert(LegRepoCollateralSecurityType_138.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_138;
    LegRepurchaseRate_138.setString("94.770000");
    noLegs_0_1.set(LegRepurchaseRate_138);
    InstrumentLeg_138.insert(LegRepurchaseRate_138.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_138(901774197);
    noLegs_0_1.set(LegRepurchaseTerm_138);
    InstrumentLeg_138.insert(LegRepurchaseTerm_138.getString());
    FIX::LegSecurityDesc LegSecurityDesc_138("STRING_424279587");
    noLegs_0_1.set(LegSecurityDesc_138);
    InstrumentLeg_138.insert(LegSecurityDesc_138.getString());
    FIX::LegSecurityExchange LegSecurityExchange_138("EXCHANGE_1544632492");
    noLegs_0_1.set(LegSecurityExchange_138);
    InstrumentLeg_138.insert(LegSecurityExchange_138.getString());
    FIX::LegSecurityID LegSecurityID_138("STRING_1307740883");
    noLegs_0_1.set(LegSecurityID_138);
    InstrumentLeg_138.insert(LegSecurityID_138.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_138("STRING_1657149100");
    noLegs_0_1.set(LegSecurityIDSource_138);
    InstrumentLeg_138.insert(LegSecurityIDSource_138.getString());
    FIX::LegSecuritySubType LegSecuritySubType_138("STRING_358857741");
    noLegs_0_1.set(LegSecuritySubType_138);
    InstrumentLeg_138.insert(LegSecuritySubType_138.getString());
    FIX::LegSecurityType LegSecurityType_138("STRING_771660596");
    noLegs_0_1.set(LegSecurityType_138);
    InstrumentLeg_138.insert(LegSecurityType_138.getString());
    FIX::LegSide LegSide_138('1');
    noLegs_0_1.set(LegSide_138);
    InstrumentLeg_138.insert(LegSide_138.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_138("STRING_236299146");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_138);
    InstrumentLeg_138.insert(LegStateOrProvinceOfIssue_138.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_138("EUR");
    noLegs_0_1.set(LegStrikeCurrency_138);
    InstrumentLeg_138.insert(LegStrikeCurrency_138.getString());
    FIX::LegStrikePrice LegStrikePrice_138;
    LegStrikePrice_138.setString("16155610");
    noLegs_0_1.set(LegStrikePrice_138);
    InstrumentLeg_138.insert(LegStrikePrice_138.getString());
    FIX::LegSymbol LegSymbol_138("STRING_245094222");
    noLegs_0_1.set(LegSymbol_138);
    InstrumentLeg_138.insert(LegSymbol_138.getString());
    FIX::LegSymbolSfx LegSymbolSfx_138("STRING_1386807351");
    noLegs_0_1.set(LegSymbolSfx_138);
    InstrumentLeg_138.insert(LegSymbolSfx_138.getString());
    FIX::LegTimeUnit LegTimeUnit_138("STRING_384971762");
    noLegs_0_1.set(LegTimeUnit_138);
    InstrumentLeg_138.insert(LegTimeUnit_138.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_138("STRING_2126142782");
    noLegs_0_1.set(LegUnitOfMeasure_138);
    InstrumentLeg_138.insert(LegUnitOfMeasure_138.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_138;
    LegUnitOfMeasureQty_138.setString("11038845");
    noLegs_0_1.set(LegUnitOfMeasureQty_138);
    InstrumentLeg_138.insert(LegUnitOfMeasureQty_138.getString());
    all_values.push_back(InstrumentLeg_138);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_281;
      FIX::LegSecurityAltID LegSecurityAltID_281("STRING_1696918010");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_281);
      LegSecAltIDGrp_NoLegSecurityAltID_281.insert(LegSecurityAltID_281.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_281("STRING_1791473755");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_281);
      LegSecAltIDGrp_NoLegSecurityAltID_281.insert(LegSecurityAltIDSource_281.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_281);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_282;
      FIX::LegSecurityAltID LegSecurityAltID_282("STRING_617416237");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_282);
      LegSecAltIDGrp_NoLegSecurityAltID_282.insert(LegSecurityAltID_282.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_282("STRING_1625141404");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_282);
      LegSecAltIDGrp_NoLegSecurityAltID_282.insert(LegSecurityAltIDSource_282.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_282);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_139;
    FIX::EncodedLegIssuer EncodedLegIssuer_139("DATA_1188769771");
    noLegs_0_2.set(EncodedLegIssuer_139);
    InstrumentLeg_139.insert(EncodedLegIssuer_139.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_139(1356623515);
    noLegs_0_2.set(EncodedLegIssuerLen_139);
    InstrumentLeg_139.insert(EncodedLegIssuerLen_139.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_139("DATA_1781822126");
    noLegs_0_2.set(EncodedLegSecurityDesc_139);
    InstrumentLeg_139.insert(EncodedLegSecurityDesc_139.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_139(534331205);
    noLegs_0_2.set(EncodedLegSecurityDescLen_139);
    InstrumentLeg_139.insert(EncodedLegSecurityDescLen_139.getString());
    FIX::LegCFICode LegCFICode_139("STRING_894443169");
    noLegs_0_2.set(LegCFICode_139);
    InstrumentLeg_139.insert(LegCFICode_139.getString());
    FIX::LegContractMultiplier LegContractMultiplier_139;
    LegContractMultiplier_139.setString("11919225");
    noLegs_0_2.set(LegContractMultiplier_139);
    InstrumentLeg_139.insert(LegContractMultiplier_139.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_139(964105495);
    noLegs_0_2.set(LegContractMultiplierUnit_139);
    InstrumentLeg_139.insert(LegContractMultiplierUnit_139.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_139("MONTHYEAR_1270368226");
    noLegs_0_2.set(LegContractSettlMonth_139);
    InstrumentLeg_139.insert(LegContractSettlMonth_139.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_139("COUNTRY_23658349");
    noLegs_0_2.set(LegCountryOfIssue_139);
    InstrumentLeg_139.insert(LegCountryOfIssue_139.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_139("LOCALMKTDATE_1865879692");
    noLegs_0_2.set(LegCouponPaymentDate_139);
    InstrumentLeg_139.insert(LegCouponPaymentDate_139.getString());
    FIX::LegCouponRate LegCouponRate_139;
    LegCouponRate_139.setString("78.130000");
    noLegs_0_2.set(LegCouponRate_139);
    InstrumentLeg_139.insert(LegCouponRate_139.getString());
    FIX::LegCreditRating LegCreditRating_139("STRING_1568290841");
    noLegs_0_2.set(LegCreditRating_139);
    InstrumentLeg_139.insert(LegCreditRating_139.getString());
    FIX::LegCurrency LegCurrency_139("CHF");
    noLegs_0_2.set(LegCurrency_139);
    InstrumentLeg_139.insert(LegCurrency_139.getString());
    FIX::LegDatedDate LegDatedDate_139("LOCALMKTDATE_1927148583");
    noLegs_0_2.set(LegDatedDate_139);
    InstrumentLeg_139.insert(LegDatedDate_139.getString());
    FIX::LegExerciseStyle LegExerciseStyle_139(1797797524);
    noLegs_0_2.set(LegExerciseStyle_139);
    InstrumentLeg_139.insert(LegExerciseStyle_139.getString());
    FIX::LegFactor LegFactor_139;
    LegFactor_139.setString("13835823");
    noLegs_0_2.set(LegFactor_139);
    InstrumentLeg_139.insert(LegFactor_139.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_139(15964081);
    noLegs_0_2.set(LegFlowScheduleType_139);
    InstrumentLeg_139.insert(LegFlowScheduleType_139.getString());
    FIX::LegInstrRegistry LegInstrRegistry_139("STRING_1743284070");
    noLegs_0_2.set(LegInstrRegistry_139);
    InstrumentLeg_139.insert(LegInstrRegistry_139.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_139("LOCALMKTDATE_764941999");
    noLegs_0_2.set(LegInterestAccrualDate_139);
    InstrumentLeg_139.insert(LegInterestAccrualDate_139.getString());
    FIX::LegIssueDate LegIssueDate_139("LOCALMKTDATE_1631525099");
    noLegs_0_2.set(LegIssueDate_139);
    InstrumentLeg_139.insert(LegIssueDate_139.getString());
    FIX::LegIssuer LegIssuer_139("STRING_1988378292");
    noLegs_0_2.set(LegIssuer_139);
    InstrumentLeg_139.insert(LegIssuer_139.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_139("STRING_4265702");
    noLegs_0_2.set(LegLocaleOfIssue_139);
    InstrumentLeg_139.insert(LegLocaleOfIssue_139.getString());
    FIX::LegMaturityDate LegMaturityDate_139("LOCALMKTDATE_2016496862");
    noLegs_0_2.set(LegMaturityDate_139);
    InstrumentLeg_139.insert(LegMaturityDate_139.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_139("MONTHYEAR_1967037426");
    noLegs_0_2.set(LegMaturityMonthYear_139);
    InstrumentLeg_139.insert(LegMaturityMonthYear_139.getString());
    FIX::LegMaturityTime LegMaturityTime_139("TZTIMEONLY_1108150256");
    noLegs_0_2.set(LegMaturityTime_139);
    InstrumentLeg_139.insert(LegMaturityTime_139.getString());
    FIX::LegOptAttribute LegOptAttribute_139('1');
    noLegs_0_2.set(LegOptAttribute_139);
    InstrumentLeg_139.insert(LegOptAttribute_139.getString());
    FIX::LegOptionRatio LegOptionRatio_139;
    LegOptionRatio_139.setString("15164717");
    noLegs_0_2.set(LegOptionRatio_139);
    InstrumentLeg_139.insert(LegOptionRatio_139.getString());
    FIX::LegPool LegPool_139("STRING_752140363");
    noLegs_0_2.set(LegPool_139);
    InstrumentLeg_139.insert(LegPool_139.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_139("STRING_340055299");
    noLegs_0_2.set(LegPriceUnitOfMeasure_139);
    InstrumentLeg_139.insert(LegPriceUnitOfMeasure_139.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_139;
    LegPriceUnitOfMeasureQty_139.setString("9941295");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_139);
    InstrumentLeg_139.insert(LegPriceUnitOfMeasureQty_139.getString());
    FIX::LegProduct LegProduct_139(1940910134);
    noLegs_0_2.set(LegProduct_139);
    InstrumentLeg_139.insert(LegProduct_139.getString());
    FIX::LegPutOrCall LegPutOrCall_139(1696678814);
    noLegs_0_2.set(LegPutOrCall_139);
    InstrumentLeg_139.insert(LegPutOrCall_139.getString());
    FIX::LegRatioQty LegRatioQty_139;
    LegRatioQty_139.setString("6284680");
    noLegs_0_2.set(LegRatioQty_139);
    InstrumentLeg_139.insert(LegRatioQty_139.getString());
    FIX::LegRedemptionDate LegRedemptionDate_139("LOCALMKTDATE_327757691");
    noLegs_0_2.set(LegRedemptionDate_139);
    InstrumentLeg_139.insert(LegRedemptionDate_139.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_139("STRING_443638335");
    noLegs_0_2.set(LegRepoCollateralSecurityType_139);
    InstrumentLeg_139.insert(LegRepoCollateralSecurityType_139.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_139;
    LegRepurchaseRate_139.setString("5.420000");
    noLegs_0_2.set(LegRepurchaseRate_139);
    InstrumentLeg_139.insert(LegRepurchaseRate_139.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_139(1291863186);
    noLegs_0_2.set(LegRepurchaseTerm_139);
    InstrumentLeg_139.insert(LegRepurchaseTerm_139.getString());
    FIX::LegSecurityDesc LegSecurityDesc_139("STRING_1714006561");
    noLegs_0_2.set(LegSecurityDesc_139);
    InstrumentLeg_139.insert(LegSecurityDesc_139.getString());
    FIX::LegSecurityExchange LegSecurityExchange_139("EXCHANGE_1844048892");
    noLegs_0_2.set(LegSecurityExchange_139);
    InstrumentLeg_139.insert(LegSecurityExchange_139.getString());
    FIX::LegSecurityID LegSecurityID_139("STRING_1010259231");
    noLegs_0_2.set(LegSecurityID_139);
    InstrumentLeg_139.insert(LegSecurityID_139.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_139("STRING_1261170726");
    noLegs_0_2.set(LegSecurityIDSource_139);
    InstrumentLeg_139.insert(LegSecurityIDSource_139.getString());
    FIX::LegSecuritySubType LegSecuritySubType_139("STRING_1264856085");
    noLegs_0_2.set(LegSecuritySubType_139);
    InstrumentLeg_139.insert(LegSecuritySubType_139.getString());
    FIX::LegSecurityType LegSecurityType_139("STRING_2036396159");
    noLegs_0_2.set(LegSecurityType_139);
    InstrumentLeg_139.insert(LegSecurityType_139.getString());
    FIX::LegSide LegSide_139('3');
    noLegs_0_2.set(LegSide_139);
    InstrumentLeg_139.insert(LegSide_139.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_139("STRING_1044521020");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_139);
    InstrumentLeg_139.insert(LegStateOrProvinceOfIssue_139.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_139("CHF");
    noLegs_0_2.set(LegStrikeCurrency_139);
    InstrumentLeg_139.insert(LegStrikeCurrency_139.getString());
    FIX::LegStrikePrice LegStrikePrice_139;
    LegStrikePrice_139.setString("10604851");
    noLegs_0_2.set(LegStrikePrice_139);
    InstrumentLeg_139.insert(LegStrikePrice_139.getString());
    FIX::LegSymbol LegSymbol_139("STRING_1282510457");
    noLegs_0_2.set(LegSymbol_139);
    InstrumentLeg_139.insert(LegSymbol_139.getString());
    FIX::LegSymbolSfx LegSymbolSfx_139("STRING_319041008");
    noLegs_0_2.set(LegSymbolSfx_139);
    InstrumentLeg_139.insert(LegSymbolSfx_139.getString());
    FIX::LegTimeUnit LegTimeUnit_139("STRING_544526553");
    noLegs_0_2.set(LegTimeUnit_139);
    InstrumentLeg_139.insert(LegTimeUnit_139.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_139("STRING_1123405101");
    noLegs_0_2.set(LegUnitOfMeasure_139);
    InstrumentLeg_139.insert(LegUnitOfMeasure_139.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_139;
    LegUnitOfMeasureQty_139.setString("3233067");
    noLegs_0_2.set(LegUnitOfMeasureQty_139);
    InstrumentLeg_139.insert(LegUnitOfMeasureQty_139.getString());
    all_values.push_back(InstrumentLeg_139);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_283;
      FIX::LegSecurityAltID LegSecurityAltID_283("STRING_942958879");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_283);
      LegSecAltIDGrp_NoLegSecurityAltID_283.insert(LegSecurityAltID_283.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_283("STRING_1431456967");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_283);
      LegSecAltIDGrp_NoLegSecurityAltID_283.insert(LegSecurityAltIDSource_283.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_283);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_91;
  FIX::AttachmentPoint AttachmentPoint_91;
  AttachmentPoint_91.setString("88.290000");
  msg.set(AttachmentPoint_91);
  Instrument_91.insert(AttachmentPoint_91.getString());
  FIX::CFICode CFICode_96("STRING_311947019");
  msg.set(CFICode_96);
  Instrument_91.insert(CFICode_96.getString());
  FIX::CPProgram CPProgram_91(1);
  msg.set(CPProgram_91);
  Instrument_91.insert(CPProgram_91.getString());
  FIX::CPRegType CPRegType_91("STRING_476234128");
  msg.set(CPRegType_91);
  Instrument_91.insert(CPRegType_91.getString());
  FIX::CapPrice CapPrice_91;
  CapPrice_91.setString("13060765");
  msg.set(CapPrice_91);
  Instrument_91.insert(CapPrice_91.getString());
  FIX::ContractMultiplier ContractMultiplier_91;
  ContractMultiplier_91.setString("19770238");
  msg.set(ContractMultiplier_91);
  Instrument_91.insert(ContractMultiplier_91.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_91(1);
  msg.set(ContractMultiplierUnit_91);
  Instrument_91.insert(ContractMultiplierUnit_91.getString());
  FIX::ContractSettlMonth ContractSettlMonth_91("MONTHYEAR_1934544585");
  msg.set(ContractSettlMonth_91);
  Instrument_91.insert(ContractSettlMonth_91.getString());
  FIX::CountryOfIssue CountryOfIssue_91("COUNTRY_157297859");
  msg.set(CountryOfIssue_91);
  Instrument_91.insert(CountryOfIssue_91.getString());
  FIX::CouponPaymentDate CouponPaymentDate_91("LOCALMKTDATE_469067629");
  msg.set(CouponPaymentDate_91);
  Instrument_91.insert(CouponPaymentDate_91.getString());
  FIX::CouponRate CouponRate_91;
  CouponRate_91.setString("14.790000");
  msg.set(CouponRate_91);
  Instrument_91.insert(CouponRate_91.getString());
  FIX::CreditRating CreditRating_91("STRING_1449161046");
  msg.set(CreditRating_91);
  Instrument_91.insert(CreditRating_91.getString());
  FIX::DatedDate DatedDate_91("LOCALMKTDATE_35590543");
  msg.set(DatedDate_91);
  Instrument_91.insert(DatedDate_91.getString());
  FIX::DetachmentPoint DetachmentPoint_91;
  DetachmentPoint_91.setString("67.230000");
  msg.set(DetachmentPoint_91);
  Instrument_91.insert(DetachmentPoint_91.getString());
  FIX::EncodedIssuer EncodedIssuer_91("DATA_311936629");
  msg.set(EncodedIssuer_91);
  Instrument_91.insert(EncodedIssuer_91.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_91(1296761269);
  msg.set(EncodedIssuerLen_91);
  Instrument_91.insert(EncodedIssuerLen_91.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_91("DATA_421389161");
  msg.set(EncodedSecurityDesc_91);
  Instrument_91.insert(EncodedSecurityDesc_91.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_91(200849140);
  msg.set(EncodedSecurityDescLen_91);
  Instrument_91.insert(EncodedSecurityDescLen_91.getString());
  FIX::ExerciseStyle ExerciseStyle_91(0);
  msg.set(ExerciseStyle_91);
  Instrument_91.insert(ExerciseStyle_91.getString());
  FIX::Factor Factor_91;
  Factor_91.setString("14659101");
  msg.set(Factor_91);
  Instrument_91.insert(Factor_91.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_91(false);
  msg.set(FlexProductEligibilityIndicator_91);
  Instrument_91.insert(FlexProductEligibilityIndicator_91.getString());
  FIX::FlexibleIndicator FlexibleIndicator_91(true);
  msg.set(FlexibleIndicator_91);
  Instrument_91.insert(FlexibleIndicator_91.getString());
  FIX::FloorPrice FloorPrice_91;
  FloorPrice_91.setString("3789116");
  msg.set(FloorPrice_91);
  Instrument_91.insert(FloorPrice_91.getString());
  FIX::FlowScheduleType FlowScheduleType_91(4);
  msg.set(FlowScheduleType_91);
  Instrument_91.insert(FlowScheduleType_91.getString());
  FIX::InstrRegistry InstrRegistry_91("STRING_1487901631");
  msg.set(InstrRegistry_91);
  Instrument_91.insert(InstrRegistry_91.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_91('9');
  msg.set(InstrmtAssignmentMethod_91);
  Instrument_91.insert(InstrmtAssignmentMethod_91.getString());
  FIX::InterestAccrualDate InterestAccrualDate_91("LOCALMKTDATE_2145991085");
  msg.set(InterestAccrualDate_91);
  Instrument_91.insert(InterestAccrualDate_91.getString());
  FIX::IssueDate IssueDate_91("LOCALMKTDATE_1811208342");
  msg.set(IssueDate_91);
  Instrument_91.insert(IssueDate_91.getString());
  FIX::Issuer Issuer_91("STRING_1336977956");
  msg.set(Issuer_91);
  Instrument_91.insert(Issuer_91.getString());
  FIX::ListMethod ListMethod_91(0);
  msg.set(ListMethod_91);
  Instrument_91.insert(ListMethod_91.getString());
  FIX::LocaleOfIssue LocaleOfIssue_91("STRING_1095181661");
  msg.set(LocaleOfIssue_91);
  Instrument_91.insert(LocaleOfIssue_91.getString());
  FIX::MaturityDate MaturityDate_91("LOCALMKTDATE_1473156785");
  msg.set(MaturityDate_91);
  Instrument_91.insert(MaturityDate_91.getString());
  FIX::MaturityMonthYear MaturityMonthYear_91("MONTHYEAR_1253413335");
  msg.set(MaturityMonthYear_91);
  Instrument_91.insert(MaturityMonthYear_91.getString());
  FIX::MaturityTime MaturityTime_91("TZTIMEONLY_1131295343");
  msg.set(MaturityTime_91);
  Instrument_91.insert(MaturityTime_91.getString());
  FIX::MinPriceIncrement MinPriceIncrement_91;
  MinPriceIncrement_91.setString("19493909");
  msg.set(MinPriceIncrement_91);
  Instrument_91.insert(MinPriceIncrement_91.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_91;
  MinPriceIncrementAmount_91.setString("4120062");
  msg.set(MinPriceIncrementAmount_91);
  Instrument_91.insert(MinPriceIncrementAmount_91.getString());
  FIX::NTPositionLimit NTPositionLimit_91(960835511);
  msg.set(NTPositionLimit_91);
  Instrument_91.insert(NTPositionLimit_91.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_91;
  NotionalPercentageOutstanding_91.setString("2.070000");
  msg.set(NotionalPercentageOutstanding_91);
  Instrument_91.insert(NotionalPercentageOutstanding_91.getString());
  FIX::OptAttribute OptAttribute_91('1');
  msg.set(OptAttribute_91);
  Instrument_91.insert(OptAttribute_91.getString());
  FIX::OptPayoutAmount OptPayoutAmount_91;
  OptPayoutAmount_91.setString("11181333");
  msg.set(OptPayoutAmount_91);
  Instrument_91.insert(OptPayoutAmount_91.getString());
  FIX::OptPayoutType OptPayoutType_91(2);
  msg.set(OptPayoutType_91);
  Instrument_91.insert(OptPayoutType_91.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_91;
  OriginalNotionalPercentageOutstanding_91.setString("86.660000");
  msg.set(OriginalNotionalPercentageOutstanding_91);
  Instrument_91.insert(OriginalNotionalPercentageOutstanding_91.getString());
  FIX::Pool Pool_91("STRING_419810768");
  msg.set(Pool_91);
  Instrument_91.insert(Pool_91.getString());
  FIX::PositionLimit PositionLimit_91(331994732);
  msg.set(PositionLimit_91);
  Instrument_91.insert(PositionLimit_91.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_91("STRING_INT");
  msg.set(PriceQuoteMethod_91);
  Instrument_91.insert(PriceQuoteMethod_91.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_91("STRING_731747397");
  msg.set(PriceUnitOfMeasure_91);
  Instrument_91.insert(PriceUnitOfMeasure_91.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_91;
  PriceUnitOfMeasureQty_91.setString("16287560");
  msg.set(PriceUnitOfMeasureQty_91);
  Instrument_91.insert(PriceUnitOfMeasureQty_91.getString());
  FIX::Product Product_99(2);
  msg.set(Product_99);
  Instrument_91.insert(Product_99.getString());
  FIX::ProductComplex ProductComplex_91("STRING_932596537");
  msg.set(ProductComplex_91);
  Instrument_91.insert(ProductComplex_91.getString());
  FIX::PutOrCall PutOrCall_91(0);
  msg.set(PutOrCall_91);
  Instrument_91.insert(PutOrCall_91.getString());
  FIX::RedemptionDate RedemptionDate_91("LOCALMKTDATE_702867436");
  msg.set(RedemptionDate_91);
  Instrument_91.insert(RedemptionDate_91.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_91("STRING_672672064");
  msg.set(RepoCollateralSecurityType_91);
  Instrument_91.insert(RepoCollateralSecurityType_91.getString());
  FIX::RepurchaseRate RepurchaseRate_91;
  RepurchaseRate_91.setString("9.410000");
  msg.set(RepurchaseRate_91);
  Instrument_91.insert(RepurchaseRate_91.getString());
  FIX::RepurchaseTerm RepurchaseTerm_91(1081779072);
  msg.set(RepurchaseTerm_91);
  Instrument_91.insert(RepurchaseTerm_91.getString());
  FIX::RestructuringType RestructuringType_91("STRING_FR");
  msg.set(RestructuringType_91);
  Instrument_91.insert(RestructuringType_91.getString());
  FIX::SecurityDesc SecurityDesc_91("STRING_1605312572");
  msg.set(SecurityDesc_91);
  Instrument_91.insert(SecurityDesc_91.getString());
  FIX::SecurityExchange SecurityExchange_91("EXCHANGE_2005217261");
  msg.set(SecurityExchange_91);
  Instrument_91.insert(SecurityExchange_91.getString());
  FIX::SecurityGroup SecurityGroup_91("STRING_1693765485");
  msg.set(SecurityGroup_91);
  Instrument_91.insert(SecurityGroup_91.getString());
  FIX::SecurityID SecurityID_91("STRING_1269037266");
  msg.set(SecurityID_91);
  Instrument_91.insert(SecurityID_91.getString());
  FIX::SecurityIDSource SecurityIDSource_91("STRING_8");
  msg.set(SecurityIDSource_91);
  Instrument_91.insert(SecurityIDSource_91.getString());
  FIX::SecurityStatus SecurityStatus_92("STRING_2");
  msg.set(SecurityStatus_92);
  Instrument_91.insert(SecurityStatus_92.getString());
  FIX::SecuritySubType SecuritySubType_95("STRING_216735279");
  msg.set(SecuritySubType_95);
  Instrument_91.insert(SecuritySubType_95.getString());
  FIX::SecurityType SecurityType_99("STRING_TMCP");
  msg.set(SecurityType_99);
  Instrument_91.insert(SecurityType_99.getString());
  FIX::Seniority Seniority_91("STRING_SB");
  msg.set(Seniority_91);
  Instrument_91.insert(Seniority_91.getString());
  FIX::SettlMethod SettlMethod_91('C');
  msg.set(SettlMethod_91);
  Instrument_91.insert(SettlMethod_91.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_91("STRING_322291972");
  msg.set(SettleOnOpenFlag_91);
  Instrument_91.insert(SettleOnOpenFlag_91.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_91("STRING_5684090");
  msg.set(StateOrProvinceOfIssue_91);
  Instrument_91.insert(StateOrProvinceOfIssue_91.getString());
  FIX::StrikeCurrency StrikeCurrency_91("JPY");
  msg.set(StrikeCurrency_91);
  Instrument_91.insert(StrikeCurrency_91.getString());
  FIX::StrikeMultiplier StrikeMultiplier_91;
  StrikeMultiplier_91.setString("2047512");
  msg.set(StrikeMultiplier_91);
  Instrument_91.insert(StrikeMultiplier_91.getString());
  FIX::StrikePrice StrikePrice_91;
  StrikePrice_91.setString("12795158");
  msg.set(StrikePrice_91);
  Instrument_91.insert(StrikePrice_91.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_91(2);
  msg.set(StrikePriceBoundaryMethod_91);
  Instrument_91.insert(StrikePriceBoundaryMethod_91.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_91;
  StrikePriceBoundaryPrecision_91.setString("99.440000");
  msg.set(StrikePriceBoundaryPrecision_91);
  Instrument_91.insert(StrikePriceBoundaryPrecision_91.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_91(1);
  msg.set(StrikePriceDeterminationMethod_91);
  Instrument_91.insert(StrikePriceDeterminationMethod_91.getString());
  FIX::StrikeValue StrikeValue_91;
  StrikeValue_91.setString("7780274");
  msg.set(StrikeValue_91);
  Instrument_91.insert(StrikeValue_91.getString());
  FIX::Symbol Symbol_91("STRING_826838038");
  msg.set(Symbol_91);
  Instrument_91.insert(Symbol_91.getString());
  FIX::SymbolSfx SymbolSfx_91("STRING_WI");
  msg.set(SymbolSfx_91);
  Instrument_91.insert(SymbolSfx_91.getString());
  FIX::TimeUnit TimeUnit_91("STRING_D");
  msg.set(TimeUnit_91);
  Instrument_91.insert(TimeUnit_91.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_91(2);
  msg.set(UnderlyingPriceDeterminationMethod_91);
  Instrument_91.insert(UnderlyingPriceDeterminationMethod_91.getString());
  FIX::UnitOfMeasure UnitOfMeasure_91("STRING_Bbl");
  msg.set(UnitOfMeasure_91);
  Instrument_91.insert(UnitOfMeasure_91.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_91;
  UnitOfMeasureQty_91.setString("13553337");
  msg.set(UnitOfMeasureQty_91);
  Instrument_91.insert(UnitOfMeasureQty_91.getString());
  FIX::ValuationMethod ValuationMethod_91("STRING_CDSD");
  msg.set(ValuationMethod_91);
  Instrument_91.insert(ValuationMethod_91.getString());
  all_values.push_back(Instrument_91);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReportRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_176;
    FIX::ComplexEventCondition ComplexEventCondition_176(1);
    noComplexEvents_0_0.set(ComplexEventCondition_176);
    ComplexEvents_NoComplexEvents_176.insert(ComplexEventCondition_176.getString());
    FIX::ComplexEventPrice ComplexEventPrice_176;
    ComplexEventPrice_176.setString("18484418");
    noComplexEvents_0_0.set(ComplexEventPrice_176);
    ComplexEvents_NoComplexEvents_176.insert(ComplexEventPrice_176.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_176(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_176);
    ComplexEvents_NoComplexEvents_176.insert(ComplexEventPriceBoundaryMethod_176.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_176;
    ComplexEventPriceBoundaryPrecision_176.setString("36.380000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_176);
    ComplexEvents_NoComplexEvents_176.insert(ComplexEventPriceBoundaryPrecision_176.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_176(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_176);
    ComplexEvents_NoComplexEvents_176.insert(ComplexEventPriceTimeType_176.getString());
    FIX::ComplexEventType ComplexEventType_176(5);
    noComplexEvents_0_0.set(ComplexEventType_176);
    ComplexEvents_NoComplexEvents_176.insert(ComplexEventType_176.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_176;
    ComplexOptPayoutAmount_176.setString("521272");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_176);
    ComplexEvents_NoComplexEvents_176.insert(ComplexOptPayoutAmount_176.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_176);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_351;
      FIX::ComplexEventEndDate ComplexEventEndDate_351(FIX::UTCTIMESTAMP(15, 43, 7, 5, 12, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_351);
      ComplexEventDates_NoComplexEventDates_351.insert(ComplexEventEndDate_351.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_351(FIX::UTCTIMESTAMP(3, 15, 29, 8, 4, 2015));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_351);
      ComplexEventDates_NoComplexEventDates_351.insert(ComplexEventStartDate_351.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_351);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_720;
        FIX::ComplexEventEndTime ComplexEventEndTime_720(FIX::UTCTIMEONLY(23, 40, 42));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_720);
        ComplexEventTimes_NoComplexEventTimes_720.insert(ComplexEventEndTime_720.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_720(FIX::UTCTIMEONLY(21, 44, 37));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_720);
        ComplexEventTimes_NoComplexEventTimes_720.insert(ComplexEventStartTime_720.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_720);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_721;
        FIX::ComplexEventEndTime ComplexEventEndTime_721(FIX::UTCTIMEONLY(21, 5, 29));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_721);
        ComplexEventTimes_NoComplexEventTimes_721.insert(ComplexEventEndTime_721.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_721(FIX::UTCTIMEONLY(19, 5, 0));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_721);
        ComplexEventTimes_NoComplexEventTimes_721.insert(ComplexEventStartTime_721.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_721);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_352;
      FIX::ComplexEventEndDate ComplexEventEndDate_352(FIX::UTCTIMESTAMP(20, 43, 17, 25, 11, 2015));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_352);
      ComplexEventDates_NoComplexEventDates_352.insert(ComplexEventEndDate_352.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_352(FIX::UTCTIMESTAMP(18, 23, 12, 18, 3, 2010));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_352);
      ComplexEventDates_NoComplexEventDates_352.insert(ComplexEventStartDate_352.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_352);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_722;
        FIX::ComplexEventEndTime ComplexEventEndTime_722(FIX::UTCTIMEONLY(21, 16, 30));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_722);
        ComplexEventTimes_NoComplexEventTimes_722.insert(ComplexEventEndTime_722.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_722(FIX::UTCTIMEONLY(13, 14, 8));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_722);
        ComplexEventTimes_NoComplexEventTimes_722.insert(ComplexEventStartTime_722.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_722);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_723;
        FIX::ComplexEventEndTime ComplexEventEndTime_723(FIX::UTCTIMEONLY(4, 6, 21));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_723);
        ComplexEventTimes_NoComplexEventTimes_723.insert(ComplexEventEndTime_723.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_723(FIX::UTCTIMEONLY(17, 26, 48));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_723);
        ComplexEventTimes_NoComplexEventTimes_723.insert(ComplexEventStartTime_723.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_723);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_724;
        FIX::ComplexEventEndTime ComplexEventEndTime_724(FIX::UTCTIMEONLY(2, 23, 52));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_724);
        ComplexEventTimes_NoComplexEventTimes_724.insert(ComplexEventEndTime_724.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_724(FIX::UTCTIMEONLY(9, 0, 50));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_724);
        ComplexEventTimes_NoComplexEventTimes_724.insert(ComplexEventStartTime_724.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_724);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_177;
    FIX::ComplexEventCondition ComplexEventCondition_177(2);
    noComplexEvents_0_1.set(ComplexEventCondition_177);
    ComplexEvents_NoComplexEvents_177.insert(ComplexEventCondition_177.getString());
    FIX::ComplexEventPrice ComplexEventPrice_177;
    ComplexEventPrice_177.setString("11924043");
    noComplexEvents_0_1.set(ComplexEventPrice_177);
    ComplexEvents_NoComplexEvents_177.insert(ComplexEventPrice_177.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_177(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_177);
    ComplexEvents_NoComplexEvents_177.insert(ComplexEventPriceBoundaryMethod_177.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_177;
    ComplexEventPriceBoundaryPrecision_177.setString("9.460000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_177);
    ComplexEvents_NoComplexEvents_177.insert(ComplexEventPriceBoundaryPrecision_177.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_177(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_177);
    ComplexEvents_NoComplexEvents_177.insert(ComplexEventPriceTimeType_177.getString());
    FIX::ComplexEventType ComplexEventType_177(8);
    noComplexEvents_0_1.set(ComplexEventType_177);
    ComplexEvents_NoComplexEvents_177.insert(ComplexEventType_177.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_177;
    ComplexOptPayoutAmount_177.setString("14040878");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_177);
    ComplexEvents_NoComplexEvents_177.insert(ComplexOptPayoutAmount_177.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_177);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_353;
      FIX::ComplexEventEndDate ComplexEventEndDate_353(FIX::UTCTIMESTAMP(10, 48, 12, 11, 7, 2015));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_353);
      ComplexEventDates_NoComplexEventDates_353.insert(ComplexEventEndDate_353.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_353(FIX::UTCTIMESTAMP(10, 19, 16, 14, 1, 2004));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_353);
      ComplexEventDates_NoComplexEventDates_353.insert(ComplexEventStartDate_353.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_353);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_725;
        FIX::ComplexEventEndTime ComplexEventEndTime_725(FIX::UTCTIMEONLY(12, 57, 55));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_725);
        ComplexEventTimes_NoComplexEventTimes_725.insert(ComplexEventEndTime_725.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_725(FIX::UTCTIMEONLY(11, 55, 1));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_725);
        ComplexEventTimes_NoComplexEventTimes_725.insert(ComplexEventStartTime_725.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_725);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_726;
        FIX::ComplexEventEndTime ComplexEventEndTime_726(FIX::UTCTIMEONLY(10, 55, 36));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_726);
        ComplexEventTimes_NoComplexEventTimes_726.insert(ComplexEventEndTime_726.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_726(FIX::UTCTIMEONLY(0, 30, 57));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_726);
        ComplexEventTimes_NoComplexEventTimes_726.insert(ComplexEventStartTime_726.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_726);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_354;
      FIX::ComplexEventEndDate ComplexEventEndDate_354(FIX::UTCTIMESTAMP(4, 37, 34, 23, 9, 2005));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_354);
      ComplexEventDates_NoComplexEventDates_354.insert(ComplexEventEndDate_354.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_354(FIX::UTCTIMESTAMP(22, 6, 54, 5, 7, 2016));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_354);
      ComplexEventDates_NoComplexEventDates_354.insert(ComplexEventStartDate_354.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_354);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_727;
        FIX::ComplexEventEndTime ComplexEventEndTime_727(FIX::UTCTIMEONLY(8, 25, 40));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_727);
        ComplexEventTimes_NoComplexEventTimes_727.insert(ComplexEventEndTime_727.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_727(FIX::UTCTIMEONLY(12, 28, 44));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_727);
        ComplexEventTimes_NoComplexEventTimes_727.insert(ComplexEventStartTime_727.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_727);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_728;
        FIX::ComplexEventEndTime ComplexEventEndTime_728(FIX::UTCTIMEONLY(18, 40, 19));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_728);
        ComplexEventTimes_NoComplexEventTimes_728.insert(ComplexEventEndTime_728.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_728(FIX::UTCTIMEONLY(20, 49, 0));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_728);
        ComplexEventTimes_NoComplexEventTimes_728.insert(ComplexEventStartTime_728.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_728);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_729;
        FIX::ComplexEventEndTime ComplexEventEndTime_729(FIX::UTCTIMEONLY(10, 29, 15));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_729);
        ComplexEventTimes_NoComplexEventTimes_729.insert(ComplexEventEndTime_729.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_729(FIX::UTCTIMEONLY(1, 2, 44));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_729);
        ComplexEventTimes_NoComplexEventTimes_729.insert(ComplexEventStartTime_729.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_729);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradeCaptureReportRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_176;
    FIX::EventDate EventDate_176("LOCALMKTDATE_1682424188");
    noEvents_0_0.set(EventDate_176);
    EvntGrp_NoEvents_176.insert(EventDate_176.getString());
    FIX::EventPx EventPx_176;
    EventPx_176.setString("13480941");
    noEvents_0_0.set(EventPx_176);
    EvntGrp_NoEvents_176.insert(EventPx_176.getString());
    FIX::EventText EventText_176("STRING_83306305");
    noEvents_0_0.set(EventText_176);
    EvntGrp_NoEvents_176.insert(EventText_176.getString());
    FIX::EventTime EventTime_176(FIX::UTCTIMESTAMP(11, 0, 27, 19, 2, 2000));
    noEvents_0_0.set(EventTime_176);
    EvntGrp_NoEvents_176.insert(EventTime_176.getString());
    FIX::EventType EventType_176(16);
    noEvents_0_0.set(EventType_176);
    EvntGrp_NoEvents_176.insert(EventType_176.getString());
    all_values.push_back(EvntGrp_NoEvents_176);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_175;
    FIX::InstrumentPartyID InstrumentPartyID_175("STRING_469006580");
    noInstrumentParties_0_0.set(InstrumentPartyID_175);
    InstrumentParties_NoInstrumentParties_175.insert(InstrumentPartyID_175.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_175('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_175);
    InstrumentParties_NoInstrumentParties_175.insert(InstrumentPartyIDSource_175.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_175(931084376);
    noInstrumentParties_0_0.set(InstrumentPartyRole_175);
    InstrumentParties_NoInstrumentParties_175.insert(InstrumentPartyRole_175.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_175);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_355;
      FIX::InstrumentPartySubID InstrumentPartySubID_355("STRING_867877771");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_355);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_355.insert(InstrumentPartySubID_355.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_355(976735755);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_355);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_355.insert(InstrumentPartySubIDType_355.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_355);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_356;
      FIX::InstrumentPartySubID InstrumentPartySubID_356("STRING_1417001633");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_356);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_356.insert(InstrumentPartySubID_356.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_356(1058001231);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_356);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_356.insert(InstrumentPartySubIDType_356.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_356);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_357;
      FIX::InstrumentPartySubID InstrumentPartySubID_357("STRING_118252856");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_357);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_357.insert(InstrumentPartySubID_357.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_357(1013536785);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_357);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_357.insert(InstrumentPartySubIDType_357.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_357);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_176;
    FIX::InstrumentPartyID InstrumentPartyID_176("STRING_1154561313");
    noInstrumentParties_0_1.set(InstrumentPartyID_176);
    InstrumentParties_NoInstrumentParties_176.insert(InstrumentPartyID_176.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_176('5');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_176);
    InstrumentParties_NoInstrumentParties_176.insert(InstrumentPartyIDSource_176.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_176(1033250654);
    noInstrumentParties_0_1.set(InstrumentPartyRole_176);
    InstrumentParties_NoInstrumentParties_176.insert(InstrumentPartyRole_176.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_176);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_358;
      FIX::InstrumentPartySubID InstrumentPartySubID_358("STRING_1213112184");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_358);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_358.insert(InstrumentPartySubID_358.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_358(149312168);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_358);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_358.insert(InstrumentPartySubIDType_358.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_358);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_177;
    FIX::InstrumentPartyID InstrumentPartyID_177("STRING_656505943");
    noInstrumentParties_0_2.set(InstrumentPartyID_177);
    InstrumentParties_NoInstrumentParties_177.insert(InstrumentPartyID_177.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_177('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_177);
    InstrumentParties_NoInstrumentParties_177.insert(InstrumentPartyIDSource_177.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_177(1430999192);
    noInstrumentParties_0_2.set(InstrumentPartyRole_177);
    InstrumentParties_NoInstrumentParties_177.insert(InstrumentPartyRole_177.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_177);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_359;
      FIX::InstrumentPartySubID InstrumentPartySubID_359("STRING_981716018");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_359);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_359.insert(InstrumentPartySubID_359.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_359(1514305497);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_359);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_359.insert(InstrumentPartySubIDType_359.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_359);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_360;
      FIX::InstrumentPartySubID InstrumentPartySubID_360("STRING_712273526");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_360);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_360.insert(InstrumentPartySubID_360.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_360(1527237877);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_360);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_360.insert(InstrumentPartySubIDType_360.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_360);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradeCaptureReportRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_190;
    FIX::SecurityAltID SecurityAltID_190("STRING_1840335593");
    noSecurityAltID_0_0.set(SecurityAltID_190);
    SecAltIDGrp_NoSecurityAltID_190.insert(SecurityAltID_190.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_190("STRING_235769521");
    noSecurityAltID_0_0.set(SecurityAltIDSource_190);
    SecAltIDGrp_NoSecurityAltID_190.insert(SecurityAltIDSource_190.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_190);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_182;
  FIX::SecurityXML SecurityXML_183("XMLDATA_655362795");
  msg.set(SecurityXML_183);
  FIX::SecurityXMLLen SecurityXMLLen_91(543747045);
  msg.set(SecurityXMLLen_91);
  FIX::SecurityXMLSchema SecurityXMLSchema_91("STRING_1251784756");
  msg.set(SecurityXMLSchema_91);
  SecurityXML_182.insert(SecurityXMLSchema_91.getString());
  all_values.push_back(SecurityXML_182);

  // InstrumentExtension
  multiset<string> InstrumentExtension_17;
  FIX::DeliveryForm DeliveryForm_17(1);
  msg.set(DeliveryForm_17);
  InstrumentExtension_17.insert(DeliveryForm_17.getString());
  FIX::PctAtRisk PctAtRisk_17;
  PctAtRisk_17.setString("36.250000");
  msg.set(PctAtRisk_17);
  InstrumentExtension_17.insert(PctAtRisk_17.getString());
  all_values.push_back(InstrumentExtension_17);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_32;
    FIX::InstrAttribType InstrAttribType_32(9);
    noInstrAttrib_0_0.set(InstrAttribType_32);
    AttrbGrp_NoInstrAttrib_32.insert(InstrAttribType_32.getString());
    FIX::InstrAttribValue InstrAttribValue_32("STRING_40070808");
    noInstrAttrib_0_0.set(InstrAttribValue_32);
    AttrbGrp_NoInstrAttrib_32.insert(InstrAttribValue_32.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_32);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_33;
    FIX::InstrAttribType InstrAttribType_33(10);
    noInstrAttrib_0_1.set(InstrAttribType_33);
    AttrbGrp_NoInstrAttrib_33.insert(InstrAttribType_33.getString());
    FIX::InstrAttribValue InstrAttribValue_33("STRING_1140393803");
    noInstrAttrib_0_1.set(InstrAttribValue_33);
    AttrbGrp_NoInstrAttrib_33.insert(InstrAttribValue_33.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_33);

    msg.addGroup(noInstrAttrib_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::TradeCaptureReportRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_155;
    FIX::PartyID PartyID_155("STRING_758603542");
    noPartyIDs_0_0.set(PartyID_155);
    Parties_NoPartyIDs_155.insert(PartyID_155.getString());
    FIX::PartyIDSource PartyIDSource_155('4');
    noPartyIDs_0_0.set(PartyIDSource_155);
    Parties_NoPartyIDs_155.insert(PartyIDSource_155.getString());
    FIX::PartyRole PartyRole_155(7);
    noPartyIDs_0_0.set(PartyRole_155);
    Parties_NoPartyIDs_155.insert(PartyRole_155.getString());
    all_values.push_back(Parties_NoPartyIDs_155);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_310;
      FIX::PartySubID PartySubID_310("STRING_1801051958");
      noPartySubIDs_0_1_0.set(PartySubID_310);
      PtysSubGrp_NoPartySubIDs_310.insert(PartySubID_310.getString());
      FIX::PartySubIDType PartySubIDType_310(3);
      noPartySubIDs_0_1_0.set(PartySubIDType_310);
      PtysSubGrp_NoPartySubIDs_310.insert(PartySubIDType_310.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_310);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_311;
      FIX::PartySubID PartySubID_311("STRING_1530628416");
      noPartySubIDs_0_1_1.set(PartySubID_311);
      PtysSubGrp_NoPartySubIDs_311.insert(PartySubID_311.getString());
      FIX::PartySubIDType PartySubIDType_311(10);
      noPartySubIDs_0_1_1.set(PartySubIDType_311);
      PtysSubGrp_NoPartySubIDs_311.insert(PartySubIDType_311.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_311);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_156;
    FIX::PartyID PartyID_156("STRING_1505688400");
    noPartyIDs_0_1.set(PartyID_156);
    Parties_NoPartyIDs_156.insert(PartyID_156.getString());
    FIX::PartyIDSource PartyIDSource_156('1');
    noPartyIDs_0_1.set(PartyIDSource_156);
    Parties_NoPartyIDs_156.insert(PartyIDSource_156.getString());
    FIX::PartyRole PartyRole_156(80);
    noPartyIDs_0_1.set(PartyRole_156);
    Parties_NoPartyIDs_156.insert(PartyRole_156.getString());
    all_values.push_back(Parties_NoPartyIDs_156);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_312;
      FIX::PartySubID PartySubID_312("STRING_231097194");
      noPartySubIDs_1_1_0.set(PartySubID_312);
      PtysSubGrp_NoPartySubIDs_312.insert(PartySubID_312.getString());
      FIX::PartySubIDType PartySubIDType_312(16);
      noPartySubIDs_1_1_0.set(PartySubIDType_312);
      PtysSubGrp_NoPartySubIDs_312.insert(PartySubIDType_312.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_312);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_313;
      FIX::PartySubID PartySubID_313("STRING_156025793");
      noPartySubIDs_1_1_1.set(PartySubID_313);
      PtysSubGrp_NoPartySubIDs_313.insert(PartySubID_313.getString());
      FIX::PartySubIDType PartySubIDType_313(18);
      noPartySubIDs_1_1_1.set(PartySubIDType_313);
      PtysSubGrp_NoPartySubIDs_313.insert(PartySubIDType_313.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_313);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_157;
    FIX::PartyID PartyID_157("STRING_861772562");
    noPartyIDs_0_2.set(PartyID_157);
    Parties_NoPartyIDs_157.insert(PartyID_157.getString());
    FIX::PartyIDSource PartyIDSource_157('D');
    noPartyIDs_0_2.set(PartyIDSource_157);
    Parties_NoPartyIDs_157.insert(PartyIDSource_157.getString());
    FIX::PartyRole PartyRole_157(32);
    noPartyIDs_0_2.set(PartyRole_157);
    Parties_NoPartyIDs_157.insert(PartyRole_157.getString());
    all_values.push_back(Parties_NoPartyIDs_157);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_314;
      FIX::PartySubID PartySubID_314("STRING_664692478");
      noPartySubIDs_2_1_0.set(PartySubID_314);
      PtysSubGrp_NoPartySubIDs_314.insert(PartySubID_314.getString());
      FIX::PartySubIDType PartySubIDType_314(31);
      noPartySubIDs_2_1_0.set(PartySubIDType_314);
      PtysSubGrp_NoPartySubIDs_314.insert(PartySubIDType_314.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_314);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // TrdCapDtGrp
  // Group TrdCapDtGrp.NoDates
  {
    FIX50SP2::TradeCaptureReportRequest::NoDates noDates_0_0;
    // TrdCapDtGrp.NoDates
    multiset<string> TrdCapDtGrp_NoDates_0;
    FIX::LastUpdateTime LastUpdateTime_8(FIX::UTCTIMESTAMP(1, 19, 19, 13, 3, 2000));
    noDates_0_0.set(LastUpdateTime_8);
    TrdCapDtGrp_NoDates_0.insert(LastUpdateTime_8.getString());
    FIX::TradeDate TradeDate_29("LOCALMKTDATE_1542382938");
    noDates_0_0.set(TradeDate_29);
    TrdCapDtGrp_NoDates_0.insert(TradeDate_29.getString());
    FIX::TransactTime TransactTime_67(FIX::UTCTIMESTAMP(6, 36, 0, 13, 1, 2010));
    noDates_0_0.set(TransactTime_67);
    TrdCapDtGrp_NoDates_0.insert(TransactTime_67.getString());
    all_values.push_back(TrdCapDtGrp_NoDates_0);

    msg.addGroup(noDates_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoDates noDates_0_1;
    // TrdCapDtGrp.NoDates
    multiset<string> TrdCapDtGrp_NoDates_1;
    FIX::LastUpdateTime LastUpdateTime_9(FIX::UTCTIMESTAMP(21, 39, 14, 5, 10, 2009));
    noDates_0_1.set(LastUpdateTime_9);
    TrdCapDtGrp_NoDates_1.insert(LastUpdateTime_9.getString());
    FIX::TradeDate TradeDate_30("LOCALMKTDATE_1377835591");
    noDates_0_1.set(TradeDate_30);
    TrdCapDtGrp_NoDates_1.insert(TradeDate_30.getString());
    FIX::TransactTime TransactTime_68(FIX::UTCTIMESTAMP(5, 14, 52, 17, 1, 2013));
    noDates_0_1.set(TransactTime_68);
    TrdCapDtGrp_NoDates_1.insert(TransactTime_68.getString());
    all_values.push_back(TrdCapDtGrp_NoDates_1);

    msg.addGroup(noDates_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoDates noDates_0_2;
    // TrdCapDtGrp.NoDates
    multiset<string> TrdCapDtGrp_NoDates_2;
    FIX::LastUpdateTime LastUpdateTime_10(FIX::UTCTIMESTAMP(22, 32, 7, 5, 10, 2013));
    noDates_0_2.set(LastUpdateTime_10);
    TrdCapDtGrp_NoDates_2.insert(LastUpdateTime_10.getString());
    FIX::TradeDate TradeDate_31("LOCALMKTDATE_1063882456");
    noDates_0_2.set(TradeDate_31);
    TrdCapDtGrp_NoDates_2.insert(TradeDate_31.getString());
    FIX::TransactTime TransactTime_69(FIX::UTCTIMESTAMP(6, 10, 47, 22, 12, 2012));
    noDates_0_2.set(TransactTime_69);
    TrdCapDtGrp_NoDates_2.insert(TransactTime_69.getString());
    all_values.push_back(TrdCapDtGrp_NoDates_2);

    msg.addGroup(noDates_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::TradeCaptureReportRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_131;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_131("DATA_27658967");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_131);
    UnderlyingInstrument_131.insert(EncodedUnderlyingIssuer_131.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_131(275908213);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_131);
    UnderlyingInstrument_131.insert(EncodedUnderlyingIssuerLen_131.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_131("DATA_971507933");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_131);
    UnderlyingInstrument_131.insert(EncodedUnderlyingSecurityDesc_131.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_131(1360691101);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_131);
    UnderlyingInstrument_131.insert(EncodedUnderlyingSecurityDescLen_131.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_131;
    UnderlyingAdjustedQuantity_131.setString("14977180");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_131);
    UnderlyingInstrument_131.insert(UnderlyingAdjustedQuantity_131.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_131;
    UnderlyingAllocationPercent_131.setString("90.460000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_131);
    UnderlyingInstrument_131.insert(UnderlyingAllocationPercent_131.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_131;
    UnderlyingAttachmentPoint_131.setString("79.200000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_131);
    UnderlyingInstrument_131.insert(UnderlyingAttachmentPoint_131.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_131("STRING_728069953");
    noUnderlyings_0_0.set(UnderlyingCFICode_131);
    UnderlyingInstrument_131.insert(UnderlyingCFICode_131.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_131("STRING_1889057232");
    noUnderlyings_0_0.set(UnderlyingCPProgram_131);
    UnderlyingInstrument_131.insert(UnderlyingCPProgram_131.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_131("STRING_1410113653");
    noUnderlyings_0_0.set(UnderlyingCPRegType_131);
    UnderlyingInstrument_131.insert(UnderlyingCPRegType_131.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_131;
    UnderlyingCapValue_131.setString("21152352");
    noUnderlyings_0_0.set(UnderlyingCapValue_131);
    UnderlyingInstrument_131.insert(UnderlyingCapValue_131.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_131;
    UnderlyingCashAmount_131.setString("2345144");
    noUnderlyings_0_0.set(UnderlyingCashAmount_131);
    UnderlyingInstrument_131.insert(UnderlyingCashAmount_131.getString());
    FIX::UnderlyingCashType UnderlyingCashType_131("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_131);
    UnderlyingInstrument_131.insert(UnderlyingCashType_131.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_131;
    UnderlyingContractMultiplier_131.setString("20196093");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_131);
    UnderlyingInstrument_131.insert(UnderlyingContractMultiplier_131.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_131(1907425000);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_131);
    UnderlyingInstrument_131.insert(UnderlyingContractMultiplierUnit_131.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_131("COUNTRY_423268831");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_131);
    UnderlyingInstrument_131.insert(UnderlyingCountryOfIssue_131.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_131("LOCALMKTDATE_1821249586");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_131);
    UnderlyingInstrument_131.insert(UnderlyingCouponPaymentDate_131.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_131;
    UnderlyingCouponRate_131.setString("16.040000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_131);
    UnderlyingInstrument_131.insert(UnderlyingCouponRate_131.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_131("STRING_139077570");
    noUnderlyings_0_0.set(UnderlyingCreditRating_131);
    UnderlyingInstrument_131.insert(UnderlyingCreditRating_131.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_131("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_131);
    UnderlyingInstrument_131.insert(UnderlyingCurrency_131.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_131;
    UnderlyingCurrentValue_131.setString("7375400");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_131);
    UnderlyingInstrument_131.insert(UnderlyingCurrentValue_131.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_131;
    UnderlyingDetachmentPoint_131.setString("28.470000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_131);
    UnderlyingInstrument_131.insert(UnderlyingDetachmentPoint_131.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_131;
    UnderlyingDirtyPrice_131.setString("1849450");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_131);
    UnderlyingInstrument_131.insert(UnderlyingDirtyPrice_131.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_131;
    UnderlyingEndPrice_131.setString("8297760");
    noUnderlyings_0_0.set(UnderlyingEndPrice_131);
    UnderlyingInstrument_131.insert(UnderlyingEndPrice_131.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_131;
    UnderlyingEndValue_131.setString("19765763");
    noUnderlyings_0_0.set(UnderlyingEndValue_131);
    UnderlyingInstrument_131.insert(UnderlyingEndValue_131.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_131(1101330005);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_131);
    UnderlyingInstrument_131.insert(UnderlyingExerciseStyle_131.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_131;
    UnderlyingFXRate_131.setString("1814668");
    noUnderlyings_0_0.set(UnderlyingFXRate_131);
    UnderlyingInstrument_131.insert(UnderlyingFXRate_131.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_131('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_131);
    UnderlyingInstrument_131.insert(UnderlyingFXRateCalc_131.getString());
    FIX::UnderlyingFactor UnderlyingFactor_131;
    UnderlyingFactor_131.setString("9446323");
    noUnderlyings_0_0.set(UnderlyingFactor_131);
    UnderlyingInstrument_131.insert(UnderlyingFactor_131.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_131(323240834);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_131);
    UnderlyingInstrument_131.insert(UnderlyingFlowScheduleType_131.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_131("STRING_1199164432");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_131);
    UnderlyingInstrument_131.insert(UnderlyingInstrRegistry_131.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_131("LOCALMKTDATE_1220540578");
    noUnderlyings_0_0.set(UnderlyingIssueDate_131);
    UnderlyingInstrument_131.insert(UnderlyingIssueDate_131.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_131("STRING_1294748767");
    noUnderlyings_0_0.set(UnderlyingIssuer_131);
    UnderlyingInstrument_131.insert(UnderlyingIssuer_131.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_131("STRING_412371885");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_131);
    UnderlyingInstrument_131.insert(UnderlyingLocaleOfIssue_131.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_131("LOCALMKTDATE_570774940");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_131);
    UnderlyingInstrument_131.insert(UnderlyingMaturityDate_131.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_131("MONTHYEAR_1179604165");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_131);
    UnderlyingInstrument_131.insert(UnderlyingMaturityMonthYear_131.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_131("TZTIMEONLY_293146157");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_131);
    UnderlyingInstrument_131.insert(UnderlyingMaturityTime_131.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_131;
    UnderlyingNotionalPercentageOutstanding_131.setString("48.940000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_131);
    UnderlyingInstrument_131.insert(UnderlyingNotionalPercentageOutstanding_131.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_131('9');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_131);
    UnderlyingInstrument_131.insert(UnderlyingOptAttribute_131.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_131;
    UnderlyingOriginalNotionalPercentageOutstanding_131.setString("98.110000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_131);
    UnderlyingInstrument_131.insert(UnderlyingOriginalNotionalPercentageOutstanding_131.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_131("STRING_1266596473");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_131);
    UnderlyingInstrument_131.insert(UnderlyingPriceUnitOfMeasure_131.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_131;
    UnderlyingPriceUnitOfMeasureQty_131.setString("11556921");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_131);
    UnderlyingInstrument_131.insert(UnderlyingPriceUnitOfMeasureQty_131.getString());
    FIX::UnderlyingProduct UnderlyingProduct_131(1445287633);
    noUnderlyings_0_0.set(UnderlyingProduct_131);
    UnderlyingInstrument_131.insert(UnderlyingProduct_131.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_131(1138722157);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_131);
    UnderlyingInstrument_131.insert(UnderlyingPutOrCall_131.getString());
    FIX::UnderlyingPx UnderlyingPx_131;
    UnderlyingPx_131.setString("9156335");
    noUnderlyings_0_0.set(UnderlyingPx_131);
    UnderlyingInstrument_131.insert(UnderlyingPx_131.getString());
    FIX::UnderlyingQty UnderlyingQty_131;
    UnderlyingQty_131.setString("18685564");
    noUnderlyings_0_0.set(UnderlyingQty_131);
    UnderlyingInstrument_131.insert(UnderlyingQty_131.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_131("LOCALMKTDATE_812488095");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_131);
    UnderlyingInstrument_131.insert(UnderlyingRedemptionDate_131.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_131("STRING_246241495");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_131);
    UnderlyingInstrument_131.insert(UnderlyingRepoCollateralSecurityType_131.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_131;
    UnderlyingRepurchaseRate_131.setString("40.350000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_131);
    UnderlyingInstrument_131.insert(UnderlyingRepurchaseRate_131.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_131(348818486);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_131);
    UnderlyingInstrument_131.insert(UnderlyingRepurchaseTerm_131.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_131("STRING_1380310201");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_131);
    UnderlyingInstrument_131.insert(UnderlyingRestructuringType_131.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_131("STRING_597690387");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_131);
    UnderlyingInstrument_131.insert(UnderlyingSecurityDesc_131.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_131("EXCHANGE_949031334");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_131);
    UnderlyingInstrument_131.insert(UnderlyingSecurityExchange_131.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_131("STRING_1565255298");
    noUnderlyings_0_0.set(UnderlyingSecurityID_131);
    UnderlyingInstrument_131.insert(UnderlyingSecurityID_131.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_131("STRING_1427466401");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_131);
    UnderlyingInstrument_131.insert(UnderlyingSecurityIDSource_131.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_131("STRING_778124004");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_131);
    UnderlyingInstrument_131.insert(UnderlyingSecuritySubType_131.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_131("STRING_519101655");
    noUnderlyings_0_0.set(UnderlyingSecurityType_131);
    UnderlyingInstrument_131.insert(UnderlyingSecurityType_131.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_131("STRING_1608933221");
    noUnderlyings_0_0.set(UnderlyingSeniority_131);
    UnderlyingInstrument_131.insert(UnderlyingSeniority_131.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_131("STRING_1949629469");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_131);
    UnderlyingInstrument_131.insert(UnderlyingSettlMethod_131.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_131(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_131);
    UnderlyingInstrument_131.insert(UnderlyingSettlementType_131.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_131;
    UnderlyingStartValue_131.setString("19321740");
    noUnderlyings_0_0.set(UnderlyingStartValue_131);
    UnderlyingInstrument_131.insert(UnderlyingStartValue_131.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_131("STRING_1001310254");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_131);
    UnderlyingInstrument_131.insert(UnderlyingStateOrProvinceOfIssue_131.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_131("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_131);
    UnderlyingInstrument_131.insert(UnderlyingStrikeCurrency_131.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_131;
    UnderlyingStrikePrice_131.setString("14136821");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_131);
    UnderlyingInstrument_131.insert(UnderlyingStrikePrice_131.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_131("STRING_1107565891");
    noUnderlyings_0_0.set(UnderlyingSymbol_131);
    UnderlyingInstrument_131.insert(UnderlyingSymbol_131.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_131("STRING_111559691");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_131);
    UnderlyingInstrument_131.insert(UnderlyingSymbolSfx_131.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_131("STRING_1706828297");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_131);
    UnderlyingInstrument_131.insert(UnderlyingTimeUnit_131.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_131("STRING_258927137");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_131);
    UnderlyingInstrument_131.insert(UnderlyingUnitOfMeasure_131.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_131;
    UnderlyingUnitOfMeasureQty_131.setString("10327374");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_131);
    UnderlyingInstrument_131.insert(UnderlyingUnitOfMeasureQty_131.getString());
    all_values.push_back(UnderlyingInstrument_131);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_270;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_270("STRING_1525523610");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_270);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_270.insert(UnderlyingSecurityAltID_270.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_270("STRING_40945980");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_270);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_270.insert(UnderlyingSecurityAltIDSource_270.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_270);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_271;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_271("STRING_560408445");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_271);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_271.insert(UnderlyingSecurityAltID_271.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_271("STRING_516762119");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_271);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_271.insert(UnderlyingSecurityAltIDSource_271.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_271);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_256;
      FIX::UnderlyingStipType UnderlyingStipType_256("STRING_281481262");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_256);
      UnderlyingStipulations_NoUnderlyingStips_256.insert(UnderlyingStipType_256.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_256("STRING_1329250214");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_256);
      UnderlyingStipulations_NoUnderlyingStips_256.insert(UnderlyingStipValue_256.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_256);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_257;
      FIX::UnderlyingStipType UnderlyingStipType_257("STRING_1202821013");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_257);
      UnderlyingStipulations_NoUnderlyingStips_257.insert(UnderlyingStipType_257.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_257("STRING_141631649");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_257);
      UnderlyingStipulations_NoUnderlyingStips_257.insert(UnderlyingStipValue_257.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_257);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_260;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_260("STRING_435647566");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_260);
      UndlyInstrumentParties_NoUndlyInstrumentParties_260.insert(UnderlyingInstrumentPartyID_260.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_260('7');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_260);
      UndlyInstrumentParties_NoUndlyInstrumentParties_260.insert(UnderlyingInstrumentPartyIDSource_260.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_260(479616387);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_260);
      UndlyInstrumentParties_NoUndlyInstrumentParties_260.insert(UnderlyingInstrumentPartyRole_260.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_260);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_524("STRING_19304789");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_524);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524.insert(UnderlyingInstrumentPartySubID_524.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_524(1257740391);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_524);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524.insert(UnderlyingInstrumentPartySubIDType_524.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_525("STRING_372520872");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_525);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525.insert(UnderlyingInstrumentPartySubID_525.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_525(1628238010);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_525);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525.insert(UnderlyingInstrumentPartySubIDType_525.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_526("STRING_1059886212");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_526);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526.insert(UnderlyingInstrumentPartySubID_526.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_526(1836254893);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_526);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526.insert(UnderlyingInstrumentPartySubIDType_526.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_261;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_261("STRING_1412928417");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_261);
      UndlyInstrumentParties_NoUndlyInstrumentParties_261.insert(UnderlyingInstrumentPartyID_261.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_261('2');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_261);
      UndlyInstrumentParties_NoUndlyInstrumentParties_261.insert(UnderlyingInstrumentPartyIDSource_261.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_261(225562195);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_261);
      UndlyInstrumentParties_NoUndlyInstrumentParties_261.insert(UnderlyingInstrumentPartyRole_261.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_261);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_527("STRING_1327394958");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_527);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527.insert(UnderlyingInstrumentPartySubID_527.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_527(1333128086);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_527);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527.insert(UnderlyingInstrumentPartySubIDType_527.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_528("STRING_456443634");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_528);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528.insert(UnderlyingInstrumentPartySubID_528.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_528(886739607);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_528);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528.insert(UnderlyingInstrumentPartySubIDType_528.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_262;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_262("STRING_1592055223");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_262);
      UndlyInstrumentParties_NoUndlyInstrumentParties_262.insert(UnderlyingInstrumentPartyID_262.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_262('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_262);
      UndlyInstrumentParties_NoUndlyInstrumentParties_262.insert(UnderlyingInstrumentPartyIDSource_262.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_262(1860419);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_262);
      UndlyInstrumentParties_NoUndlyInstrumentParties_262.insert(UnderlyingInstrumentPartyRole_262.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_262);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_529("STRING_1530127056");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_529);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529.insert(UnderlyingInstrumentPartySubID_529.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_529(562268864);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_529);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529.insert(UnderlyingInstrumentPartySubIDType_529.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_132;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_132("DATA_1486857305");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_132);
    UnderlyingInstrument_132.insert(EncodedUnderlyingIssuer_132.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_132(339222926);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_132);
    UnderlyingInstrument_132.insert(EncodedUnderlyingIssuerLen_132.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_132("DATA_843750126");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_132);
    UnderlyingInstrument_132.insert(EncodedUnderlyingSecurityDesc_132.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_132(668623872);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_132);
    UnderlyingInstrument_132.insert(EncodedUnderlyingSecurityDescLen_132.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_132;
    UnderlyingAdjustedQuantity_132.setString("15420439");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_132);
    UnderlyingInstrument_132.insert(UnderlyingAdjustedQuantity_132.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_132;
    UnderlyingAllocationPercent_132.setString("17.750000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_132);
    UnderlyingInstrument_132.insert(UnderlyingAllocationPercent_132.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_132;
    UnderlyingAttachmentPoint_132.setString("89.250000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_132);
    UnderlyingInstrument_132.insert(UnderlyingAttachmentPoint_132.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_132("STRING_1977691506");
    noUnderlyings_0_1.set(UnderlyingCFICode_132);
    UnderlyingInstrument_132.insert(UnderlyingCFICode_132.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_132("STRING_1724703811");
    noUnderlyings_0_1.set(UnderlyingCPProgram_132);
    UnderlyingInstrument_132.insert(UnderlyingCPProgram_132.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_132("STRING_678825312");
    noUnderlyings_0_1.set(UnderlyingCPRegType_132);
    UnderlyingInstrument_132.insert(UnderlyingCPRegType_132.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_132;
    UnderlyingCapValue_132.setString("18311107");
    noUnderlyings_0_1.set(UnderlyingCapValue_132);
    UnderlyingInstrument_132.insert(UnderlyingCapValue_132.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_132;
    UnderlyingCashAmount_132.setString("17440086");
    noUnderlyings_0_1.set(UnderlyingCashAmount_132);
    UnderlyingInstrument_132.insert(UnderlyingCashAmount_132.getString());
    FIX::UnderlyingCashType UnderlyingCashType_132("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_132);
    UnderlyingInstrument_132.insert(UnderlyingCashType_132.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_132;
    UnderlyingContractMultiplier_132.setString("561479");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_132);
    UnderlyingInstrument_132.insert(UnderlyingContractMultiplier_132.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_132(1224762962);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_132);
    UnderlyingInstrument_132.insert(UnderlyingContractMultiplierUnit_132.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_132("COUNTRY_848968267");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_132);
    UnderlyingInstrument_132.insert(UnderlyingCountryOfIssue_132.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_132("LOCALMKTDATE_1892402841");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_132);
    UnderlyingInstrument_132.insert(UnderlyingCouponPaymentDate_132.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_132;
    UnderlyingCouponRate_132.setString("77.310000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_132);
    UnderlyingInstrument_132.insert(UnderlyingCouponRate_132.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_132("STRING_762681086");
    noUnderlyings_0_1.set(UnderlyingCreditRating_132);
    UnderlyingInstrument_132.insert(UnderlyingCreditRating_132.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_132("JPY");
    noUnderlyings_0_1.set(UnderlyingCurrency_132);
    UnderlyingInstrument_132.insert(UnderlyingCurrency_132.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_132;
    UnderlyingCurrentValue_132.setString("20900760");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_132);
    UnderlyingInstrument_132.insert(UnderlyingCurrentValue_132.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_132;
    UnderlyingDetachmentPoint_132.setString("94.750000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_132);
    UnderlyingInstrument_132.insert(UnderlyingDetachmentPoint_132.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_132;
    UnderlyingDirtyPrice_132.setString("12915353");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_132);
    UnderlyingInstrument_132.insert(UnderlyingDirtyPrice_132.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_132;
    UnderlyingEndPrice_132.setString("8293320");
    noUnderlyings_0_1.set(UnderlyingEndPrice_132);
    UnderlyingInstrument_132.insert(UnderlyingEndPrice_132.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_132;
    UnderlyingEndValue_132.setString("7481810");
    noUnderlyings_0_1.set(UnderlyingEndValue_132);
    UnderlyingInstrument_132.insert(UnderlyingEndValue_132.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_132(633232737);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_132);
    UnderlyingInstrument_132.insert(UnderlyingExerciseStyle_132.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_132;
    UnderlyingFXRate_132.setString("8311924");
    noUnderlyings_0_1.set(UnderlyingFXRate_132);
    UnderlyingInstrument_132.insert(UnderlyingFXRate_132.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_132('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_132);
    UnderlyingInstrument_132.insert(UnderlyingFXRateCalc_132.getString());
    FIX::UnderlyingFactor UnderlyingFactor_132;
    UnderlyingFactor_132.setString("158761");
    noUnderlyings_0_1.set(UnderlyingFactor_132);
    UnderlyingInstrument_132.insert(UnderlyingFactor_132.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_132(1393461286);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_132);
    UnderlyingInstrument_132.insert(UnderlyingFlowScheduleType_132.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_132("STRING_1057649894");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_132);
    UnderlyingInstrument_132.insert(UnderlyingInstrRegistry_132.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_132("LOCALMKTDATE_355099071");
    noUnderlyings_0_1.set(UnderlyingIssueDate_132);
    UnderlyingInstrument_132.insert(UnderlyingIssueDate_132.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_132("STRING_89727765");
    noUnderlyings_0_1.set(UnderlyingIssuer_132);
    UnderlyingInstrument_132.insert(UnderlyingIssuer_132.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_132("STRING_1726273766");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_132);
    UnderlyingInstrument_132.insert(UnderlyingLocaleOfIssue_132.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_132("LOCALMKTDATE_1897143011");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_132);
    UnderlyingInstrument_132.insert(UnderlyingMaturityDate_132.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_132("MONTHYEAR_1075109540");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_132);
    UnderlyingInstrument_132.insert(UnderlyingMaturityMonthYear_132.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_132("TZTIMEONLY_1925482691");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_132);
    UnderlyingInstrument_132.insert(UnderlyingMaturityTime_132.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_132;
    UnderlyingNotionalPercentageOutstanding_132.setString("8.700000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_132);
    UnderlyingInstrument_132.insert(UnderlyingNotionalPercentageOutstanding_132.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_132('6');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_132);
    UnderlyingInstrument_132.insert(UnderlyingOptAttribute_132.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_132;
    UnderlyingOriginalNotionalPercentageOutstanding_132.setString("43.550000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_132);
    UnderlyingInstrument_132.insert(UnderlyingOriginalNotionalPercentageOutstanding_132.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_132("STRING_1410977945");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_132);
    UnderlyingInstrument_132.insert(UnderlyingPriceUnitOfMeasure_132.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_132;
    UnderlyingPriceUnitOfMeasureQty_132.setString("2488546");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_132);
    UnderlyingInstrument_132.insert(UnderlyingPriceUnitOfMeasureQty_132.getString());
    FIX::UnderlyingProduct UnderlyingProduct_132(245906410);
    noUnderlyings_0_1.set(UnderlyingProduct_132);
    UnderlyingInstrument_132.insert(UnderlyingProduct_132.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_132(1467125893);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_132);
    UnderlyingInstrument_132.insert(UnderlyingPutOrCall_132.getString());
    FIX::UnderlyingPx UnderlyingPx_132;
    UnderlyingPx_132.setString("14736176");
    noUnderlyings_0_1.set(UnderlyingPx_132);
    UnderlyingInstrument_132.insert(UnderlyingPx_132.getString());
    FIX::UnderlyingQty UnderlyingQty_132;
    UnderlyingQty_132.setString("10948746");
    noUnderlyings_0_1.set(UnderlyingQty_132);
    UnderlyingInstrument_132.insert(UnderlyingQty_132.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_132("LOCALMKTDATE_1212045086");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_132);
    UnderlyingInstrument_132.insert(UnderlyingRedemptionDate_132.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_132("STRING_1963825350");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_132);
    UnderlyingInstrument_132.insert(UnderlyingRepoCollateralSecurityType_132.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_132;
    UnderlyingRepurchaseRate_132.setString("57.630000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_132);
    UnderlyingInstrument_132.insert(UnderlyingRepurchaseRate_132.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_132(1182526475);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_132);
    UnderlyingInstrument_132.insert(UnderlyingRepurchaseTerm_132.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_132("STRING_651433377");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_132);
    UnderlyingInstrument_132.insert(UnderlyingRestructuringType_132.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_132("STRING_1800148159");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_132);
    UnderlyingInstrument_132.insert(UnderlyingSecurityDesc_132.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_132("EXCHANGE_338652302");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_132);
    UnderlyingInstrument_132.insert(UnderlyingSecurityExchange_132.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_132("STRING_1942968686");
    noUnderlyings_0_1.set(UnderlyingSecurityID_132);
    UnderlyingInstrument_132.insert(UnderlyingSecurityID_132.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_132("STRING_481996514");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_132);
    UnderlyingInstrument_132.insert(UnderlyingSecurityIDSource_132.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_132("STRING_1086833352");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_132);
    UnderlyingInstrument_132.insert(UnderlyingSecuritySubType_132.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_132("STRING_428717775");
    noUnderlyings_0_1.set(UnderlyingSecurityType_132);
    UnderlyingInstrument_132.insert(UnderlyingSecurityType_132.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_132("STRING_1313188936");
    noUnderlyings_0_1.set(UnderlyingSeniority_132);
    UnderlyingInstrument_132.insert(UnderlyingSeniority_132.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_132("STRING_657625941");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_132);
    UnderlyingInstrument_132.insert(UnderlyingSettlMethod_132.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_132(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_132);
    UnderlyingInstrument_132.insert(UnderlyingSettlementType_132.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_132;
    UnderlyingStartValue_132.setString("5591665");
    noUnderlyings_0_1.set(UnderlyingStartValue_132);
    UnderlyingInstrument_132.insert(UnderlyingStartValue_132.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_132("STRING_1715275835");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_132);
    UnderlyingInstrument_132.insert(UnderlyingStateOrProvinceOfIssue_132.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_132("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_132);
    UnderlyingInstrument_132.insert(UnderlyingStrikeCurrency_132.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_132;
    UnderlyingStrikePrice_132.setString("12940659");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_132);
    UnderlyingInstrument_132.insert(UnderlyingStrikePrice_132.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_132("STRING_549352355");
    noUnderlyings_0_1.set(UnderlyingSymbol_132);
    UnderlyingInstrument_132.insert(UnderlyingSymbol_132.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_132("STRING_1724003880");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_132);
    UnderlyingInstrument_132.insert(UnderlyingSymbolSfx_132.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_132("STRING_1072064996");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_132);
    UnderlyingInstrument_132.insert(UnderlyingTimeUnit_132.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_132("STRING_129219577");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_132);
    UnderlyingInstrument_132.insert(UnderlyingUnitOfMeasure_132.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_132;
    UnderlyingUnitOfMeasureQty_132.setString("2288499");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_132);
    UnderlyingInstrument_132.insert(UnderlyingUnitOfMeasureQty_132.getString());
    all_values.push_back(UnderlyingInstrument_132);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_272;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_272("STRING_1540197522");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_272);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_272.insert(UnderlyingSecurityAltID_272.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_272("STRING_477704593");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_272);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_272.insert(UnderlyingSecurityAltIDSource_272.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_272);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_273;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_273("STRING_1774795761");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_273);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_273.insert(UnderlyingSecurityAltID_273.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_273("STRING_859839768");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_273);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_273.insert(UnderlyingSecurityAltIDSource_273.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_273);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_274;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_274("STRING_1951322212");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_274);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_274.insert(UnderlyingSecurityAltID_274.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_274("STRING_722186790");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_274);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_274.insert(UnderlyingSecurityAltIDSource_274.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_274);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_258;
      FIX::UnderlyingStipType UnderlyingStipType_258("STRING_1767663914");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_258);
      UnderlyingStipulations_NoUnderlyingStips_258.insert(UnderlyingStipType_258.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_258("STRING_432258906");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_258);
      UnderlyingStipulations_NoUnderlyingStips_258.insert(UnderlyingStipValue_258.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_258);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_259;
      FIX::UnderlyingStipType UnderlyingStipType_259("STRING_1106927681");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_259);
      UnderlyingStipulations_NoUnderlyingStips_259.insert(UnderlyingStipType_259.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_259("STRING_271613643");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_259);
      UnderlyingStipulations_NoUnderlyingStips_259.insert(UnderlyingStipValue_259.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_259);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_260;
      FIX::UnderlyingStipType UnderlyingStipType_260("STRING_84923417");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_260);
      UnderlyingStipulations_NoUnderlyingStips_260.insert(UnderlyingStipType_260.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_260("STRING_1445579983");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_260);
      UnderlyingStipulations_NoUnderlyingStips_260.insert(UnderlyingStipValue_260.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_260);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_263;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_263("STRING_566919932");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_263);
      UndlyInstrumentParties_NoUndlyInstrumentParties_263.insert(UnderlyingInstrumentPartyID_263.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_263('3');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_263);
      UndlyInstrumentParties_NoUndlyInstrumentParties_263.insert(UnderlyingInstrumentPartyIDSource_263.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_263(495816456);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_263);
      UndlyInstrumentParties_NoUndlyInstrumentParties_263.insert(UnderlyingInstrumentPartyRole_263.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_263);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_530("STRING_1042555629");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_530);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530.insert(UnderlyingInstrumentPartySubID_530.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_530(940410376);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_530);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530.insert(UnderlyingInstrumentPartySubIDType_530.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_133;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_133("DATA_291791795");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_133);
    UnderlyingInstrument_133.insert(EncodedUnderlyingIssuer_133.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_133(610347816);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_133);
    UnderlyingInstrument_133.insert(EncodedUnderlyingIssuerLen_133.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_133("DATA_1740103368");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_133);
    UnderlyingInstrument_133.insert(EncodedUnderlyingSecurityDesc_133.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_133(940686135);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_133);
    UnderlyingInstrument_133.insert(EncodedUnderlyingSecurityDescLen_133.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_133;
    UnderlyingAdjustedQuantity_133.setString("19044137");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_133);
    UnderlyingInstrument_133.insert(UnderlyingAdjustedQuantity_133.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_133;
    UnderlyingAllocationPercent_133.setString("20.750000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_133);
    UnderlyingInstrument_133.insert(UnderlyingAllocationPercent_133.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_133;
    UnderlyingAttachmentPoint_133.setString("63.680000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_133);
    UnderlyingInstrument_133.insert(UnderlyingAttachmentPoint_133.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_133("STRING_828995117");
    noUnderlyings_0_2.set(UnderlyingCFICode_133);
    UnderlyingInstrument_133.insert(UnderlyingCFICode_133.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_133("STRING_271191652");
    noUnderlyings_0_2.set(UnderlyingCPProgram_133);
    UnderlyingInstrument_133.insert(UnderlyingCPProgram_133.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_133("STRING_746056304");
    noUnderlyings_0_2.set(UnderlyingCPRegType_133);
    UnderlyingInstrument_133.insert(UnderlyingCPRegType_133.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_133;
    UnderlyingCapValue_133.setString("2104008");
    noUnderlyings_0_2.set(UnderlyingCapValue_133);
    UnderlyingInstrument_133.insert(UnderlyingCapValue_133.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_133;
    UnderlyingCashAmount_133.setString("18113891");
    noUnderlyings_0_2.set(UnderlyingCashAmount_133);
    UnderlyingInstrument_133.insert(UnderlyingCashAmount_133.getString());
    FIX::UnderlyingCashType UnderlyingCashType_133("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_133);
    UnderlyingInstrument_133.insert(UnderlyingCashType_133.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_133;
    UnderlyingContractMultiplier_133.setString("19851965");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_133);
    UnderlyingInstrument_133.insert(UnderlyingContractMultiplier_133.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_133(523745294);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_133);
    UnderlyingInstrument_133.insert(UnderlyingContractMultiplierUnit_133.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_133("COUNTRY_1027599461");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_133);
    UnderlyingInstrument_133.insert(UnderlyingCountryOfIssue_133.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_133("LOCALMKTDATE_559899723");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_133);
    UnderlyingInstrument_133.insert(UnderlyingCouponPaymentDate_133.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_133;
    UnderlyingCouponRate_133.setString("65.010000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_133);
    UnderlyingInstrument_133.insert(UnderlyingCouponRate_133.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_133("STRING_647779728");
    noUnderlyings_0_2.set(UnderlyingCreditRating_133);
    UnderlyingInstrument_133.insert(UnderlyingCreditRating_133.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_133("GBP");
    noUnderlyings_0_2.set(UnderlyingCurrency_133);
    UnderlyingInstrument_133.insert(UnderlyingCurrency_133.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_133;
    UnderlyingCurrentValue_133.setString("9193933");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_133);
    UnderlyingInstrument_133.insert(UnderlyingCurrentValue_133.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_133;
    UnderlyingDetachmentPoint_133.setString("20.470000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_133);
    UnderlyingInstrument_133.insert(UnderlyingDetachmentPoint_133.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_133;
    UnderlyingDirtyPrice_133.setString("8531705");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_133);
    UnderlyingInstrument_133.insert(UnderlyingDirtyPrice_133.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_133;
    UnderlyingEndPrice_133.setString("9864920");
    noUnderlyings_0_2.set(UnderlyingEndPrice_133);
    UnderlyingInstrument_133.insert(UnderlyingEndPrice_133.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_133;
    UnderlyingEndValue_133.setString("16440019");
    noUnderlyings_0_2.set(UnderlyingEndValue_133);
    UnderlyingInstrument_133.insert(UnderlyingEndValue_133.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_133(1238100206);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_133);
    UnderlyingInstrument_133.insert(UnderlyingExerciseStyle_133.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_133;
    UnderlyingFXRate_133.setString("14823085");
    noUnderlyings_0_2.set(UnderlyingFXRate_133);
    UnderlyingInstrument_133.insert(UnderlyingFXRate_133.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_133('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_133);
    UnderlyingInstrument_133.insert(UnderlyingFXRateCalc_133.getString());
    FIX::UnderlyingFactor UnderlyingFactor_133;
    UnderlyingFactor_133.setString("1331721");
    noUnderlyings_0_2.set(UnderlyingFactor_133);
    UnderlyingInstrument_133.insert(UnderlyingFactor_133.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_133(275235238);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_133);
    UnderlyingInstrument_133.insert(UnderlyingFlowScheduleType_133.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_133("STRING_1668418995");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_133);
    UnderlyingInstrument_133.insert(UnderlyingInstrRegistry_133.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_133("LOCALMKTDATE_743520003");
    noUnderlyings_0_2.set(UnderlyingIssueDate_133);
    UnderlyingInstrument_133.insert(UnderlyingIssueDate_133.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_133("STRING_2015338606");
    noUnderlyings_0_2.set(UnderlyingIssuer_133);
    UnderlyingInstrument_133.insert(UnderlyingIssuer_133.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_133("STRING_461621482");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_133);
    UnderlyingInstrument_133.insert(UnderlyingLocaleOfIssue_133.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_133("LOCALMKTDATE_500450124");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_133);
    UnderlyingInstrument_133.insert(UnderlyingMaturityDate_133.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_133("MONTHYEAR_9827033");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_133);
    UnderlyingInstrument_133.insert(UnderlyingMaturityMonthYear_133.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_133("TZTIMEONLY_978827850");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_133);
    UnderlyingInstrument_133.insert(UnderlyingMaturityTime_133.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_133;
    UnderlyingNotionalPercentageOutstanding_133.setString("52.410000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_133);
    UnderlyingInstrument_133.insert(UnderlyingNotionalPercentageOutstanding_133.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_133('2');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_133);
    UnderlyingInstrument_133.insert(UnderlyingOptAttribute_133.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_133;
    UnderlyingOriginalNotionalPercentageOutstanding_133.setString("41.550000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_133);
    UnderlyingInstrument_133.insert(UnderlyingOriginalNotionalPercentageOutstanding_133.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_133("STRING_1539846061");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_133);
    UnderlyingInstrument_133.insert(UnderlyingPriceUnitOfMeasure_133.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_133;
    UnderlyingPriceUnitOfMeasureQty_133.setString("20924078");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_133);
    UnderlyingInstrument_133.insert(UnderlyingPriceUnitOfMeasureQty_133.getString());
    FIX::UnderlyingProduct UnderlyingProduct_133(801161404);
    noUnderlyings_0_2.set(UnderlyingProduct_133);
    UnderlyingInstrument_133.insert(UnderlyingProduct_133.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_133(1377558994);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_133);
    UnderlyingInstrument_133.insert(UnderlyingPutOrCall_133.getString());
    FIX::UnderlyingPx UnderlyingPx_133;
    UnderlyingPx_133.setString("4686695");
    noUnderlyings_0_2.set(UnderlyingPx_133);
    UnderlyingInstrument_133.insert(UnderlyingPx_133.getString());
    FIX::UnderlyingQty UnderlyingQty_133;
    UnderlyingQty_133.setString("18287608");
    noUnderlyings_0_2.set(UnderlyingQty_133);
    UnderlyingInstrument_133.insert(UnderlyingQty_133.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_133("LOCALMKTDATE_1937458717");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_133);
    UnderlyingInstrument_133.insert(UnderlyingRedemptionDate_133.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_133("STRING_916816007");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_133);
    UnderlyingInstrument_133.insert(UnderlyingRepoCollateralSecurityType_133.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_133;
    UnderlyingRepurchaseRate_133.setString("69.460000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_133);
    UnderlyingInstrument_133.insert(UnderlyingRepurchaseRate_133.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_133(782133699);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_133);
    UnderlyingInstrument_133.insert(UnderlyingRepurchaseTerm_133.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_133("STRING_324406541");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_133);
    UnderlyingInstrument_133.insert(UnderlyingRestructuringType_133.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_133("STRING_1248450317");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_133);
    UnderlyingInstrument_133.insert(UnderlyingSecurityDesc_133.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_133("EXCHANGE_1859215746");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_133);
    UnderlyingInstrument_133.insert(UnderlyingSecurityExchange_133.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_133("STRING_1177577059");
    noUnderlyings_0_2.set(UnderlyingSecurityID_133);
    UnderlyingInstrument_133.insert(UnderlyingSecurityID_133.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_133("STRING_87458722");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_133);
    UnderlyingInstrument_133.insert(UnderlyingSecurityIDSource_133.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_133("STRING_1355734077");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_133);
    UnderlyingInstrument_133.insert(UnderlyingSecuritySubType_133.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_133("STRING_268193617");
    noUnderlyings_0_2.set(UnderlyingSecurityType_133);
    UnderlyingInstrument_133.insert(UnderlyingSecurityType_133.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_133("STRING_1569767232");
    noUnderlyings_0_2.set(UnderlyingSeniority_133);
    UnderlyingInstrument_133.insert(UnderlyingSeniority_133.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_133("STRING_584877628");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_133);
    UnderlyingInstrument_133.insert(UnderlyingSettlMethod_133.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_133(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_133);
    UnderlyingInstrument_133.insert(UnderlyingSettlementType_133.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_133;
    UnderlyingStartValue_133.setString("18450024");
    noUnderlyings_0_2.set(UnderlyingStartValue_133);
    UnderlyingInstrument_133.insert(UnderlyingStartValue_133.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_133("STRING_105812975");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_133);
    UnderlyingInstrument_133.insert(UnderlyingStateOrProvinceOfIssue_133.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_133("USD");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_133);
    UnderlyingInstrument_133.insert(UnderlyingStrikeCurrency_133.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_133;
    UnderlyingStrikePrice_133.setString("5674344");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_133);
    UnderlyingInstrument_133.insert(UnderlyingStrikePrice_133.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_133("STRING_1645335931");
    noUnderlyings_0_2.set(UnderlyingSymbol_133);
    UnderlyingInstrument_133.insert(UnderlyingSymbol_133.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_133("STRING_1722684461");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_133);
    UnderlyingInstrument_133.insert(UnderlyingSymbolSfx_133.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_133("STRING_1546262308");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_133);
    UnderlyingInstrument_133.insert(UnderlyingTimeUnit_133.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_133("STRING_827297524");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_133);
    UnderlyingInstrument_133.insert(UnderlyingUnitOfMeasure_133.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_133;
    UnderlyingUnitOfMeasureQty_133.setString("20037031");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_133);
    UnderlyingInstrument_133.insert(UnderlyingUnitOfMeasureQty_133.getString());
    all_values.push_back(UnderlyingInstrument_133);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_275;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_275("STRING_219659937");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_275);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_275.insert(UnderlyingSecurityAltID_275.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_275("STRING_1948627357");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_275);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_275.insert(UnderlyingSecurityAltIDSource_275.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_275);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_276;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_276("STRING_1924824220");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_276);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_276.insert(UnderlyingSecurityAltID_276.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_276("STRING_1597218931");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_276);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_276.insert(UnderlyingSecurityAltIDSource_276.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_276);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_277;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_277("STRING_269813215");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_277);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_277.insert(UnderlyingSecurityAltID_277.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_277("STRING_1606101438");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_277);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_277.insert(UnderlyingSecurityAltIDSource_277.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_277);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_261;
      FIX::UnderlyingStipType UnderlyingStipType_261("STRING_1186629222");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_261);
      UnderlyingStipulations_NoUnderlyingStips_261.insert(UnderlyingStipType_261.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_261("STRING_1935158384");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_261);
      UnderlyingStipulations_NoUnderlyingStips_261.insert(UnderlyingStipValue_261.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_261);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_262;
      FIX::UnderlyingStipType UnderlyingStipType_262("STRING_21844052");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_262);
      UnderlyingStipulations_NoUnderlyingStips_262.insert(UnderlyingStipType_262.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_262("STRING_1511035764");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_262);
      UnderlyingStipulations_NoUnderlyingStips_262.insert(UnderlyingStipValue_262.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_262);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_264;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_264("STRING_1881059798");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_264);
      UndlyInstrumentParties_NoUndlyInstrumentParties_264.insert(UnderlyingInstrumentPartyID_264.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_264('5');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_264);
      UndlyInstrumentParties_NoUndlyInstrumentParties_264.insert(UnderlyingInstrumentPartyIDSource_264.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_264(1123583776);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_264);
      UndlyInstrumentParties_NoUndlyInstrumentParties_264.insert(UnderlyingInstrumentPartyRole_264.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_264);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_531("STRING_809322793");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_531);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531.insert(UnderlyingInstrumentPartySubID_531.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_531(545867360);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_531);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531.insert(UnderlyingInstrumentPartySubIDType_531.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_265;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_265("STRING_1674187855");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_265);
      UndlyInstrumentParties_NoUndlyInstrumentParties_265.insert(UnderlyingInstrumentPartyID_265.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_265('1');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_265);
      UndlyInstrumentParties_NoUndlyInstrumentParties_265.insert(UnderlyingInstrumentPartyIDSource_265.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_265(243386182);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_265);
      UndlyInstrumentParties_NoUndlyInstrumentParties_265.insert(UnderlyingInstrumentPartyRole_265.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_265);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_532;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_532("STRING_208090757");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_532);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_532.insert(UnderlyingInstrumentPartySubID_532.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_532(1956243610);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_532);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_532.insert(UnderlyingInstrumentPartySubIDType_532.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_532);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_533;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_533("STRING_199951641");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_533);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_533.insert(UnderlyingInstrumentPartySubID_533.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_533(1853426688);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_533);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_533.insert(UnderlyingInstrumentPartySubIDType_533.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_533);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_266;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_266("STRING_1531444423");
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyID_266);
      UndlyInstrumentParties_NoUndlyInstrumentParties_266.insert(UnderlyingInstrumentPartyID_266.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_266('1');
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyIDSource_266);
      UndlyInstrumentParties_NoUndlyInstrumentParties_266.insert(UnderlyingInstrumentPartyIDSource_266.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_266(533240565);
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyRole_266);
      UndlyInstrumentParties_NoUndlyInstrumentParties_266.insert(UnderlyingInstrumentPartyRole_266.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_266);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_534;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_534("STRING_722393117");
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubID_534);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_534.insert(UnderlyingInstrumentPartySubID_534.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_534(752900502);
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubIDType_534);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_534.insert(UnderlyingInstrumentPartySubIDType_534.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_534);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_535;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_535("STRING_1188807630");
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubID_535);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_535.insert(UnderlyingInstrumentPartySubID_535.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_535(499733689);
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubIDType_535);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_535.insert(UnderlyingInstrumentPartySubIDType_535.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_535);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_2);
    }
    msg.addGroup(noUnderlyings_0_2);
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
