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
  multiset<string> TradeCaptureReportRequest_0;
  FIX::ClOrdID ClOrdID_48("STRING_1337685283");
  msg.set(ClOrdID_48);
  TradeCaptureReportRequest_0.insert(ClOrdID_48.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_27("LOCALMKTDATE_404497934");
  msg.set(ClearingBusinessDate_27);
  TradeCaptureReportRequest_0.insert(ClearingBusinessDate_27.getString());
  FIX::EncodedText EncodedText_92("DATA_603099807");
  msg.set(EncodedText_92);
  TradeCaptureReportRequest_0.insert(EncodedText_92.getString());
  FIX::EncodedTextLen EncodedTextLen_92(1993998134);
  msg.set(EncodedTextLen_92);
  TradeCaptureReportRequest_0.insert(EncodedTextLen_92.getString());
  FIX::ExecID ExecID_20("STRING_469787130");
  msg.set(ExecID_20);
  TradeCaptureReportRequest_0.insert(ExecID_20.getString());
  FIX::ExecType ExecType_3('K');
  msg.set(ExecType_3);
  TradeCaptureReportRequest_0.insert(ExecType_3.getString());
  FIX::FirmTradeID FirmTradeID_8("STRING_500921767");
  msg.set(FirmTradeID_8);
  TradeCaptureReportRequest_0.insert(FirmTradeID_8.getString());
  FIX::MatchStatus MatchStatus_14('1');
  msg.set(MatchStatus_14);
  TradeCaptureReportRequest_0.insert(MatchStatus_14.getString());
  FIX::MessageEventSource MessageEventSource_6("STRING_438631482");
  msg.set(MessageEventSource_6);
  TradeCaptureReportRequest_0.insert(MessageEventSource_6.getString());
  FIX::MultiLegReportingType MultiLegReportingType_6('3');
  msg.set(MultiLegReportingType_6);
  TradeCaptureReportRequest_0.insert(MultiLegReportingType_6.getString());
  FIX::OrderID OrderID_35("STRING_295091754");
  msg.set(OrderID_35);
  TradeCaptureReportRequest_0.insert(OrderID_35.getString());
  FIX::ResponseDestination ResponseDestination_5("STRING_1855669228");
  msg.set(ResponseDestination_5);
  TradeCaptureReportRequest_0.insert(ResponseDestination_5.getString());
  FIX::ResponseTransportType ResponseTransportType_5(0);
  msg.set(ResponseTransportType_5);
  TradeCaptureReportRequest_0.insert(ResponseTransportType_5.getString());
  FIX::SecondaryFirmTradeID SecondaryFirmTradeID_2("STRING_1388555672");
  msg.set(SecondaryFirmTradeID_2);
  TradeCaptureReportRequest_0.insert(SecondaryFirmTradeID_2.getString());
  FIX::SecondaryTradeID SecondaryTradeID_2("STRING_482029664");
  msg.set(SecondaryTradeID_2);
  TradeCaptureReportRequest_0.insert(SecondaryTradeID_2.getString());
  FIX::SecondaryTradeReportID SecondaryTradeReportID_15("STRING_2032433478");
  msg.set(SecondaryTradeReportID_15);
  TradeCaptureReportRequest_0.insert(SecondaryTradeReportID_15.getString());
  FIX::SecondaryTrdType SecondaryTrdType_2(1494234294);
  msg.set(SecondaryTrdType_2);
  TradeCaptureReportRequest_0.insert(SecondaryTrdType_2.getString());
  FIX::Side Side_46('3');
  msg.set(Side_46);
  TradeCaptureReportRequest_0.insert(Side_46.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_15('1');
  msg.set(SubscriptionRequestType_15);
  TradeCaptureReportRequest_0.insert(SubscriptionRequestType_15.getString());
  FIX::Text Text_92("STRING_944559882");
  msg.set(Text_92);
  TradeCaptureReportRequest_0.insert(Text_92.getString());
  FIX::TimeBracket TimeBracket_3("STRING_1280467157");
  msg.set(TimeBracket_3);
  TradeCaptureReportRequest_0.insert(TimeBracket_3.getString());
  FIX::TradeHandlingInstr TradeHandlingInstr_2('4');
  msg.set(TradeHandlingInstr_2);
  TradeCaptureReportRequest_0.insert(TradeHandlingInstr_2.getString());
  FIX::TradeID TradeID_9("STRING_1480130319");
  msg.set(TradeID_9);
  TradeCaptureReportRequest_0.insert(TradeID_9.getString());
  FIX::TradeInputDevice TradeInputDevice_3("STRING_1651343781");
  msg.set(TradeInputDevice_3);
  TradeCaptureReportRequest_0.insert(TradeInputDevice_3.getString());
  FIX::TradeInputSource TradeInputSource_5("STRING_854274814");
  msg.set(TradeInputSource_5);
  TradeCaptureReportRequest_0.insert(TradeInputSource_5.getString());
  FIX::TradeLinkID TradeLinkID_2("STRING_1130937375");
  msg.set(TradeLinkID_2);
  TradeCaptureReportRequest_0.insert(TradeLinkID_2.getString());
  FIX::TradeReportID TradeReportID_15("STRING_152568400");
  msg.set(TradeReportID_15);
  TradeCaptureReportRequest_0.insert(TradeReportID_15.getString());
  FIX::TradeRequestID TradeRequestID_1("STRING_1177530655");
  msg.set(TradeRequestID_1);
  TradeCaptureReportRequest_0.insert(TradeRequestID_1.getString());
  FIX::TradeRequestType TradeRequestType_0(4);
  msg.set(TradeRequestType_0);
  TradeCaptureReportRequest_0.insert(TradeRequestType_0.getString());
  FIX::TradingSessionID TradingSessionID_92("STRING_2");
  msg.set(TradingSessionID_92);
  TradeCaptureReportRequest_0.insert(TradingSessionID_92.getString());
  FIX::TradingSessionSubID TradingSessionSubID_92("STRING_2");
  msg.set(TradingSessionSubID_92);
  TradeCaptureReportRequest_0.insert(TradingSessionSubID_92.getString());
  FIX::TransferReason TransferReason_2("STRING_1575020343");
  msg.set(TransferReason_2);
  TradeCaptureReportRequest_0.insert(TransferReason_2.getString());
  FIX::TrdMatchID TrdMatchID_3("STRING_1271392846");
  msg.set(TrdMatchID_3);
  TradeCaptureReportRequest_0.insert(TrdMatchID_3.getString());
  FIX::TrdSubType TrdSubType_5(22);
  msg.set(TrdSubType_5);
  TradeCaptureReportRequest_0.insert(TrdSubType_5.getString());
  FIX::TrdType TrdType_7(37);
  msg.set(TrdType_7);
  TradeCaptureReportRequest_0.insert(TrdType_7.getString());
  all_values.push_back(TradeCaptureReportRequest_0);

  // FinancingDetails
  multiset<string> FinancingDetails_32;
  FIX::AgreementCurrency AgreementCurrency_32("USD");
  msg.set(AgreementCurrency_32);
  FinancingDetails_32.insert(AgreementCurrency_32.getString());
  FIX::AgreementDate AgreementDate_32("LOCALMKTDATE_1922456596");
  msg.set(AgreementDate_32);
  FinancingDetails_32.insert(AgreementDate_32.getString());
  FIX::AgreementDesc AgreementDesc_32("STRING_431296716");
  msg.set(AgreementDesc_32);
  FinancingDetails_32.insert(AgreementDesc_32.getString());
  FIX::AgreementID AgreementID_32("STRING_2104119522");
  msg.set(AgreementID_32);
  FinancingDetails_32.insert(AgreementID_32.getString());
  FIX::DeliveryType DeliveryType_32(0);
  msg.set(DeliveryType_32);
  FinancingDetails_32.insert(DeliveryType_32.getString());
  FIX::EndDate EndDate_32("LOCALMKTDATE_726388470");
  msg.set(EndDate_32);
  FinancingDetails_32.insert(EndDate_32.getString());
  FIX::MarginRatio MarginRatio_32;
  MarginRatio_32.setString("51.020000");
  msg.set(MarginRatio_32);
  FinancingDetails_32.insert(MarginRatio_32.getString());
  FIX::StartDate StartDate_32("LOCALMKTDATE_842542842");
  msg.set(StartDate_32);
  FinancingDetails_32.insert(StartDate_32.getString());
  FIX::TerminationType TerminationType_32(3);
  msg.set(TerminationType_32);
  FinancingDetails_32.insert(TerminationType_32.getString());
  all_values.push_back(FinancingDetails_32);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::TradeCaptureReportRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_146;
    FIX::EncodedLegIssuer EncodedLegIssuer_146("DATA_727492673");
    noLegs_0_0.set(EncodedLegIssuer_146);
    InstrumentLeg_146.insert(EncodedLegIssuer_146.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_146(1461694789);
    noLegs_0_0.set(EncodedLegIssuerLen_146);
    InstrumentLeg_146.insert(EncodedLegIssuerLen_146.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_146("DATA_1772867840");
    noLegs_0_0.set(EncodedLegSecurityDesc_146);
    InstrumentLeg_146.insert(EncodedLegSecurityDesc_146.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_146(1652147652);
    noLegs_0_0.set(EncodedLegSecurityDescLen_146);
    InstrumentLeg_146.insert(EncodedLegSecurityDescLen_146.getString());
    FIX::LegCFICode LegCFICode_146("STRING_258771023");
    noLegs_0_0.set(LegCFICode_146);
    InstrumentLeg_146.insert(LegCFICode_146.getString());
    FIX::LegContractMultiplier LegContractMultiplier_146;
    LegContractMultiplier_146.setString("9058513");
    noLegs_0_0.set(LegContractMultiplier_146);
    InstrumentLeg_146.insert(LegContractMultiplier_146.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_146(132938048);
    noLegs_0_0.set(LegContractMultiplierUnit_146);
    InstrumentLeg_146.insert(LegContractMultiplierUnit_146.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_146("MONTHYEAR_1738901342");
    noLegs_0_0.set(LegContractSettlMonth_146);
    InstrumentLeg_146.insert(LegContractSettlMonth_146.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_146("COUNTRY_409711483");
    noLegs_0_0.set(LegCountryOfIssue_146);
    InstrumentLeg_146.insert(LegCountryOfIssue_146.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_146("LOCALMKTDATE_987212862");
    noLegs_0_0.set(LegCouponPaymentDate_146);
    InstrumentLeg_146.insert(LegCouponPaymentDate_146.getString());
    FIX::LegCouponRate LegCouponRate_146;
    LegCouponRate_146.setString("50.690000");
    noLegs_0_0.set(LegCouponRate_146);
    InstrumentLeg_146.insert(LegCouponRate_146.getString());
    FIX::LegCreditRating LegCreditRating_146("STRING_562279883");
    noLegs_0_0.set(LegCreditRating_146);
    InstrumentLeg_146.insert(LegCreditRating_146.getString());
    FIX::LegCurrency LegCurrency_146("CAN");
    noLegs_0_0.set(LegCurrency_146);
    InstrumentLeg_146.insert(LegCurrency_146.getString());
    FIX::LegDatedDate LegDatedDate_146("LOCALMKTDATE_1429174794");
    noLegs_0_0.set(LegDatedDate_146);
    InstrumentLeg_146.insert(LegDatedDate_146.getString());
    FIX::LegExerciseStyle LegExerciseStyle_146(1222548053);
    noLegs_0_0.set(LegExerciseStyle_146);
    InstrumentLeg_146.insert(LegExerciseStyle_146.getString());
    FIX::LegFactor LegFactor_146;
    LegFactor_146.setString("3872268");
    noLegs_0_0.set(LegFactor_146);
    InstrumentLeg_146.insert(LegFactor_146.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_146(553083992);
    noLegs_0_0.set(LegFlowScheduleType_146);
    InstrumentLeg_146.insert(LegFlowScheduleType_146.getString());
    FIX::LegInstrRegistry LegInstrRegistry_146("STRING_883452395");
    noLegs_0_0.set(LegInstrRegistry_146);
    InstrumentLeg_146.insert(LegInstrRegistry_146.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_146("LOCALMKTDATE_1808761653");
    noLegs_0_0.set(LegInterestAccrualDate_146);
    InstrumentLeg_146.insert(LegInterestAccrualDate_146.getString());
    FIX::LegIssueDate LegIssueDate_146("LOCALMKTDATE_146780321");
    noLegs_0_0.set(LegIssueDate_146);
    InstrumentLeg_146.insert(LegIssueDate_146.getString());
    FIX::LegIssuer LegIssuer_146("STRING_401456788");
    noLegs_0_0.set(LegIssuer_146);
    InstrumentLeg_146.insert(LegIssuer_146.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_146("STRING_1583734602");
    noLegs_0_0.set(LegLocaleOfIssue_146);
    InstrumentLeg_146.insert(LegLocaleOfIssue_146.getString());
    FIX::LegMaturityDate LegMaturityDate_146("LOCALMKTDATE_578077037");
    noLegs_0_0.set(LegMaturityDate_146);
    InstrumentLeg_146.insert(LegMaturityDate_146.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_146("MONTHYEAR_358092662");
    noLegs_0_0.set(LegMaturityMonthYear_146);
    InstrumentLeg_146.insert(LegMaturityMonthYear_146.getString());
    FIX::LegMaturityTime LegMaturityTime_146("TZTIMEONLY_1681221610");
    noLegs_0_0.set(LegMaturityTime_146);
    InstrumentLeg_146.insert(LegMaturityTime_146.getString());
    FIX::LegOptAttribute LegOptAttribute_146('1');
    noLegs_0_0.set(LegOptAttribute_146);
    InstrumentLeg_146.insert(LegOptAttribute_146.getString());
    FIX::LegOptionRatio LegOptionRatio_146;
    LegOptionRatio_146.setString("229141");
    noLegs_0_0.set(LegOptionRatio_146);
    InstrumentLeg_146.insert(LegOptionRatio_146.getString());
    FIX::LegPool LegPool_146("STRING_376280805");
    noLegs_0_0.set(LegPool_146);
    InstrumentLeg_146.insert(LegPool_146.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_146("STRING_1271926002");
    noLegs_0_0.set(LegPriceUnitOfMeasure_146);
    InstrumentLeg_146.insert(LegPriceUnitOfMeasure_146.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_146;
    LegPriceUnitOfMeasureQty_146.setString("1697652");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_146);
    InstrumentLeg_146.insert(LegPriceUnitOfMeasureQty_146.getString());
    FIX::LegProduct LegProduct_146(1103773478);
    noLegs_0_0.set(LegProduct_146);
    InstrumentLeg_146.insert(LegProduct_146.getString());
    FIX::LegPutOrCall LegPutOrCall_146(586137143);
    noLegs_0_0.set(LegPutOrCall_146);
    InstrumentLeg_146.insert(LegPutOrCall_146.getString());
    FIX::LegRatioQty LegRatioQty_146;
    LegRatioQty_146.setString("19426330");
    noLegs_0_0.set(LegRatioQty_146);
    InstrumentLeg_146.insert(LegRatioQty_146.getString());
    FIX::LegRedemptionDate LegRedemptionDate_146("LOCALMKTDATE_608437482");
    noLegs_0_0.set(LegRedemptionDate_146);
    InstrumentLeg_146.insert(LegRedemptionDate_146.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_146("STRING_844908166");
    noLegs_0_0.set(LegRepoCollateralSecurityType_146);
    InstrumentLeg_146.insert(LegRepoCollateralSecurityType_146.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_146;
    LegRepurchaseRate_146.setString("7.770000");
    noLegs_0_0.set(LegRepurchaseRate_146);
    InstrumentLeg_146.insert(LegRepurchaseRate_146.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_146(741375530);
    noLegs_0_0.set(LegRepurchaseTerm_146);
    InstrumentLeg_146.insert(LegRepurchaseTerm_146.getString());
    FIX::LegSecurityDesc LegSecurityDesc_146("STRING_436325860");
    noLegs_0_0.set(LegSecurityDesc_146);
    InstrumentLeg_146.insert(LegSecurityDesc_146.getString());
    FIX::LegSecurityExchange LegSecurityExchange_146("EXCHANGE_1110712260");
    noLegs_0_0.set(LegSecurityExchange_146);
    InstrumentLeg_146.insert(LegSecurityExchange_146.getString());
    FIX::LegSecurityID LegSecurityID_146("STRING_1728588393");
    noLegs_0_0.set(LegSecurityID_146);
    InstrumentLeg_146.insert(LegSecurityID_146.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_146("STRING_1158680930");
    noLegs_0_0.set(LegSecurityIDSource_146);
    InstrumentLeg_146.insert(LegSecurityIDSource_146.getString());
    FIX::LegSecuritySubType LegSecuritySubType_146("STRING_1672992143");
    noLegs_0_0.set(LegSecuritySubType_146);
    InstrumentLeg_146.insert(LegSecuritySubType_146.getString());
    FIX::LegSecurityType LegSecurityType_146("STRING_1745848263");
    noLegs_0_0.set(LegSecurityType_146);
    InstrumentLeg_146.insert(LegSecurityType_146.getString());
    FIX::LegSide LegSide_146('2');
    noLegs_0_0.set(LegSide_146);
    InstrumentLeg_146.insert(LegSide_146.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_146("STRING_954683290");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_146);
    InstrumentLeg_146.insert(LegStateOrProvinceOfIssue_146.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_146("CAN");
    noLegs_0_0.set(LegStrikeCurrency_146);
    InstrumentLeg_146.insert(LegStrikeCurrency_146.getString());
    FIX::LegStrikePrice LegStrikePrice_146;
    LegStrikePrice_146.setString("15077672");
    noLegs_0_0.set(LegStrikePrice_146);
    InstrumentLeg_146.insert(LegStrikePrice_146.getString());
    FIX::LegSymbol LegSymbol_146("STRING_1704365063");
    noLegs_0_0.set(LegSymbol_146);
    InstrumentLeg_146.insert(LegSymbol_146.getString());
    FIX::LegSymbolSfx LegSymbolSfx_146("STRING_19392240");
    noLegs_0_0.set(LegSymbolSfx_146);
    InstrumentLeg_146.insert(LegSymbolSfx_146.getString());
    FIX::LegTimeUnit LegTimeUnit_146("STRING_1654547603");
    noLegs_0_0.set(LegTimeUnit_146);
    InstrumentLeg_146.insert(LegTimeUnit_146.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_146("STRING_2105821851");
    noLegs_0_0.set(LegUnitOfMeasure_146);
    InstrumentLeg_146.insert(LegUnitOfMeasure_146.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_146;
    LegUnitOfMeasureQty_146.setString("16031268");
    noLegs_0_0.set(LegUnitOfMeasureQty_146);
    InstrumentLeg_146.insert(LegUnitOfMeasureQty_146.getString());
    all_values.push_back(InstrumentLeg_146);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_285;
      FIX::LegSecurityAltID LegSecurityAltID_285("STRING_316430866");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_285);
      LegSecAltIDGrp_NoLegSecurityAltID_285.insert(LegSecurityAltID_285.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_285("STRING_1136864805");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_285);
      LegSecAltIDGrp_NoLegSecurityAltID_285.insert(LegSecurityAltIDSource_285.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_285);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_147;
    FIX::EncodedLegIssuer EncodedLegIssuer_147("DATA_1389606501");
    noLegs_0_1.set(EncodedLegIssuer_147);
    InstrumentLeg_147.insert(EncodedLegIssuer_147.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_147(339344983);
    noLegs_0_1.set(EncodedLegIssuerLen_147);
    InstrumentLeg_147.insert(EncodedLegIssuerLen_147.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_147("DATA_1513145610");
    noLegs_0_1.set(EncodedLegSecurityDesc_147);
    InstrumentLeg_147.insert(EncodedLegSecurityDesc_147.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_147(514048855);
    noLegs_0_1.set(EncodedLegSecurityDescLen_147);
    InstrumentLeg_147.insert(EncodedLegSecurityDescLen_147.getString());
    FIX::LegCFICode LegCFICode_147("STRING_509110218");
    noLegs_0_1.set(LegCFICode_147);
    InstrumentLeg_147.insert(LegCFICode_147.getString());
    FIX::LegContractMultiplier LegContractMultiplier_147;
    LegContractMultiplier_147.setString("4694354");
    noLegs_0_1.set(LegContractMultiplier_147);
    InstrumentLeg_147.insert(LegContractMultiplier_147.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_147(1100185999);
    noLegs_0_1.set(LegContractMultiplierUnit_147);
    InstrumentLeg_147.insert(LegContractMultiplierUnit_147.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_147("MONTHYEAR_304259646");
    noLegs_0_1.set(LegContractSettlMonth_147);
    InstrumentLeg_147.insert(LegContractSettlMonth_147.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_147("COUNTRY_1077872922");
    noLegs_0_1.set(LegCountryOfIssue_147);
    InstrumentLeg_147.insert(LegCountryOfIssue_147.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_147("LOCALMKTDATE_1945094165");
    noLegs_0_1.set(LegCouponPaymentDate_147);
    InstrumentLeg_147.insert(LegCouponPaymentDate_147.getString());
    FIX::LegCouponRate LegCouponRate_147;
    LegCouponRate_147.setString("4.240000");
    noLegs_0_1.set(LegCouponRate_147);
    InstrumentLeg_147.insert(LegCouponRate_147.getString());
    FIX::LegCreditRating LegCreditRating_147("STRING_1819248452");
    noLegs_0_1.set(LegCreditRating_147);
    InstrumentLeg_147.insert(LegCreditRating_147.getString());
    FIX::LegCurrency LegCurrency_147("USD");
    noLegs_0_1.set(LegCurrency_147);
    InstrumentLeg_147.insert(LegCurrency_147.getString());
    FIX::LegDatedDate LegDatedDate_147("LOCALMKTDATE_1400353197");
    noLegs_0_1.set(LegDatedDate_147);
    InstrumentLeg_147.insert(LegDatedDate_147.getString());
    FIX::LegExerciseStyle LegExerciseStyle_147(1392617308);
    noLegs_0_1.set(LegExerciseStyle_147);
    InstrumentLeg_147.insert(LegExerciseStyle_147.getString());
    FIX::LegFactor LegFactor_147;
    LegFactor_147.setString("16414811");
    noLegs_0_1.set(LegFactor_147);
    InstrumentLeg_147.insert(LegFactor_147.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_147(998717812);
    noLegs_0_1.set(LegFlowScheduleType_147);
    InstrumentLeg_147.insert(LegFlowScheduleType_147.getString());
    FIX::LegInstrRegistry LegInstrRegistry_147("STRING_1363504719");
    noLegs_0_1.set(LegInstrRegistry_147);
    InstrumentLeg_147.insert(LegInstrRegistry_147.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_147("LOCALMKTDATE_448680822");
    noLegs_0_1.set(LegInterestAccrualDate_147);
    InstrumentLeg_147.insert(LegInterestAccrualDate_147.getString());
    FIX::LegIssueDate LegIssueDate_147("LOCALMKTDATE_1819630480");
    noLegs_0_1.set(LegIssueDate_147);
    InstrumentLeg_147.insert(LegIssueDate_147.getString());
    FIX::LegIssuer LegIssuer_147("STRING_1721618954");
    noLegs_0_1.set(LegIssuer_147);
    InstrumentLeg_147.insert(LegIssuer_147.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_147("STRING_1956448104");
    noLegs_0_1.set(LegLocaleOfIssue_147);
    InstrumentLeg_147.insert(LegLocaleOfIssue_147.getString());
    FIX::LegMaturityDate LegMaturityDate_147("LOCALMKTDATE_1376511896");
    noLegs_0_1.set(LegMaturityDate_147);
    InstrumentLeg_147.insert(LegMaturityDate_147.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_147("MONTHYEAR_1741011194");
    noLegs_0_1.set(LegMaturityMonthYear_147);
    InstrumentLeg_147.insert(LegMaturityMonthYear_147.getString());
    FIX::LegMaturityTime LegMaturityTime_147("TZTIMEONLY_1463512060");
    noLegs_0_1.set(LegMaturityTime_147);
    InstrumentLeg_147.insert(LegMaturityTime_147.getString());
    FIX::LegOptAttribute LegOptAttribute_147('1');
    noLegs_0_1.set(LegOptAttribute_147);
    InstrumentLeg_147.insert(LegOptAttribute_147.getString());
    FIX::LegOptionRatio LegOptionRatio_147;
    LegOptionRatio_147.setString("11966543");
    noLegs_0_1.set(LegOptionRatio_147);
    InstrumentLeg_147.insert(LegOptionRatio_147.getString());
    FIX::LegPool LegPool_147("STRING_1548653053");
    noLegs_0_1.set(LegPool_147);
    InstrumentLeg_147.insert(LegPool_147.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_147("STRING_1651280965");
    noLegs_0_1.set(LegPriceUnitOfMeasure_147);
    InstrumentLeg_147.insert(LegPriceUnitOfMeasure_147.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_147;
    LegPriceUnitOfMeasureQty_147.setString("1860355");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_147);
    InstrumentLeg_147.insert(LegPriceUnitOfMeasureQty_147.getString());
    FIX::LegProduct LegProduct_147(790775906);
    noLegs_0_1.set(LegProduct_147);
    InstrumentLeg_147.insert(LegProduct_147.getString());
    FIX::LegPutOrCall LegPutOrCall_147(1990625948);
    noLegs_0_1.set(LegPutOrCall_147);
    InstrumentLeg_147.insert(LegPutOrCall_147.getString());
    FIX::LegRatioQty LegRatioQty_147;
    LegRatioQty_147.setString("16991811");
    noLegs_0_1.set(LegRatioQty_147);
    InstrumentLeg_147.insert(LegRatioQty_147.getString());
    FIX::LegRedemptionDate LegRedemptionDate_147("LOCALMKTDATE_1304824761");
    noLegs_0_1.set(LegRedemptionDate_147);
    InstrumentLeg_147.insert(LegRedemptionDate_147.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_147("STRING_352252519");
    noLegs_0_1.set(LegRepoCollateralSecurityType_147);
    InstrumentLeg_147.insert(LegRepoCollateralSecurityType_147.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_147;
    LegRepurchaseRate_147.setString("29.480000");
    noLegs_0_1.set(LegRepurchaseRate_147);
    InstrumentLeg_147.insert(LegRepurchaseRate_147.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_147(257527112);
    noLegs_0_1.set(LegRepurchaseTerm_147);
    InstrumentLeg_147.insert(LegRepurchaseTerm_147.getString());
    FIX::LegSecurityDesc LegSecurityDesc_147("STRING_656512165");
    noLegs_0_1.set(LegSecurityDesc_147);
    InstrumentLeg_147.insert(LegSecurityDesc_147.getString());
    FIX::LegSecurityExchange LegSecurityExchange_147("EXCHANGE_1099005870");
    noLegs_0_1.set(LegSecurityExchange_147);
    InstrumentLeg_147.insert(LegSecurityExchange_147.getString());
    FIX::LegSecurityID LegSecurityID_147("STRING_55137630");
    noLegs_0_1.set(LegSecurityID_147);
    InstrumentLeg_147.insert(LegSecurityID_147.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_147("STRING_1661772589");
    noLegs_0_1.set(LegSecurityIDSource_147);
    InstrumentLeg_147.insert(LegSecurityIDSource_147.getString());
    FIX::LegSecuritySubType LegSecuritySubType_147("STRING_770770674");
    noLegs_0_1.set(LegSecuritySubType_147);
    InstrumentLeg_147.insert(LegSecuritySubType_147.getString());
    FIX::LegSecurityType LegSecurityType_147("STRING_289074008");
    noLegs_0_1.set(LegSecurityType_147);
    InstrumentLeg_147.insert(LegSecurityType_147.getString());
    FIX::LegSide LegSide_147('1');
    noLegs_0_1.set(LegSide_147);
    InstrumentLeg_147.insert(LegSide_147.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_147("STRING_23640224");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_147);
    InstrumentLeg_147.insert(LegStateOrProvinceOfIssue_147.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_147("GBP");
    noLegs_0_1.set(LegStrikeCurrency_147);
    InstrumentLeg_147.insert(LegStrikeCurrency_147.getString());
    FIX::LegStrikePrice LegStrikePrice_147;
    LegStrikePrice_147.setString("10223580");
    noLegs_0_1.set(LegStrikePrice_147);
    InstrumentLeg_147.insert(LegStrikePrice_147.getString());
    FIX::LegSymbol LegSymbol_147("STRING_897712387");
    noLegs_0_1.set(LegSymbol_147);
    InstrumentLeg_147.insert(LegSymbol_147.getString());
    FIX::LegSymbolSfx LegSymbolSfx_147("STRING_1572939980");
    noLegs_0_1.set(LegSymbolSfx_147);
    InstrumentLeg_147.insert(LegSymbolSfx_147.getString());
    FIX::LegTimeUnit LegTimeUnit_147("STRING_694504869");
    noLegs_0_1.set(LegTimeUnit_147);
    InstrumentLeg_147.insert(LegTimeUnit_147.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_147("STRING_471847693");
    noLegs_0_1.set(LegUnitOfMeasure_147);
    InstrumentLeg_147.insert(LegUnitOfMeasure_147.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_147;
    LegUnitOfMeasureQty_147.setString("13819044");
    noLegs_0_1.set(LegUnitOfMeasureQty_147);
    InstrumentLeg_147.insert(LegUnitOfMeasureQty_147.getString());
    all_values.push_back(InstrumentLeg_147);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_286;
      FIX::LegSecurityAltID LegSecurityAltID_286("STRING_65375239");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_286);
      LegSecAltIDGrp_NoLegSecurityAltID_286.insert(LegSecurityAltID_286.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_286("STRING_697932848");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_286);
      LegSecAltIDGrp_NoLegSecurityAltID_286.insert(LegSecurityAltIDSource_286.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_286);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_287;
      FIX::LegSecurityAltID LegSecurityAltID_287("STRING_1258383216");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_287);
      LegSecAltIDGrp_NoLegSecurityAltID_287.insert(LegSecurityAltID_287.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_287("STRING_1262029628");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_287);
      LegSecAltIDGrp_NoLegSecurityAltID_287.insert(LegSecurityAltIDSource_287.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_287);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_288;
      FIX::LegSecurityAltID LegSecurityAltID_288("STRING_99102253");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_288);
      LegSecAltIDGrp_NoLegSecurityAltID_288.insert(LegSecurityAltID_288.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_288("STRING_762180534");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_288);
      LegSecAltIDGrp_NoLegSecurityAltID_288.insert(LegSecurityAltIDSource_288.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_288);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_148;
    FIX::EncodedLegIssuer EncodedLegIssuer_148("DATA_1448065174");
    noLegs_0_2.set(EncodedLegIssuer_148);
    InstrumentLeg_148.insert(EncodedLegIssuer_148.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_148(889878159);
    noLegs_0_2.set(EncodedLegIssuerLen_148);
    InstrumentLeg_148.insert(EncodedLegIssuerLen_148.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_148("DATA_605322834");
    noLegs_0_2.set(EncodedLegSecurityDesc_148);
    InstrumentLeg_148.insert(EncodedLegSecurityDesc_148.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_148(999762682);
    noLegs_0_2.set(EncodedLegSecurityDescLen_148);
    InstrumentLeg_148.insert(EncodedLegSecurityDescLen_148.getString());
    FIX::LegCFICode LegCFICode_148("STRING_47219273");
    noLegs_0_2.set(LegCFICode_148);
    InstrumentLeg_148.insert(LegCFICode_148.getString());
    FIX::LegContractMultiplier LegContractMultiplier_148;
    LegContractMultiplier_148.setString("9575753");
    noLegs_0_2.set(LegContractMultiplier_148);
    InstrumentLeg_148.insert(LegContractMultiplier_148.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_148(1020895630);
    noLegs_0_2.set(LegContractMultiplierUnit_148);
    InstrumentLeg_148.insert(LegContractMultiplierUnit_148.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_148("MONTHYEAR_304746385");
    noLegs_0_2.set(LegContractSettlMonth_148);
    InstrumentLeg_148.insert(LegContractSettlMonth_148.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_148("COUNTRY_1614087519");
    noLegs_0_2.set(LegCountryOfIssue_148);
    InstrumentLeg_148.insert(LegCountryOfIssue_148.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_148("LOCALMKTDATE_2119901500");
    noLegs_0_2.set(LegCouponPaymentDate_148);
    InstrumentLeg_148.insert(LegCouponPaymentDate_148.getString());
    FIX::LegCouponRate LegCouponRate_148;
    LegCouponRate_148.setString("40.150000");
    noLegs_0_2.set(LegCouponRate_148);
    InstrumentLeg_148.insert(LegCouponRate_148.getString());
    FIX::LegCreditRating LegCreditRating_148("STRING_1128376460");
    noLegs_0_2.set(LegCreditRating_148);
    InstrumentLeg_148.insert(LegCreditRating_148.getString());
    FIX::LegCurrency LegCurrency_148("CHF");
    noLegs_0_2.set(LegCurrency_148);
    InstrumentLeg_148.insert(LegCurrency_148.getString());
    FIX::LegDatedDate LegDatedDate_148("LOCALMKTDATE_611154438");
    noLegs_0_2.set(LegDatedDate_148);
    InstrumentLeg_148.insert(LegDatedDate_148.getString());
    FIX::LegExerciseStyle LegExerciseStyle_148(766828751);
    noLegs_0_2.set(LegExerciseStyle_148);
    InstrumentLeg_148.insert(LegExerciseStyle_148.getString());
    FIX::LegFactor LegFactor_148;
    LegFactor_148.setString("1831656");
    noLegs_0_2.set(LegFactor_148);
    InstrumentLeg_148.insert(LegFactor_148.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_148(1735413596);
    noLegs_0_2.set(LegFlowScheduleType_148);
    InstrumentLeg_148.insert(LegFlowScheduleType_148.getString());
    FIX::LegInstrRegistry LegInstrRegistry_148("STRING_1789186787");
    noLegs_0_2.set(LegInstrRegistry_148);
    InstrumentLeg_148.insert(LegInstrRegistry_148.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_148("LOCALMKTDATE_1080878078");
    noLegs_0_2.set(LegInterestAccrualDate_148);
    InstrumentLeg_148.insert(LegInterestAccrualDate_148.getString());
    FIX::LegIssueDate LegIssueDate_148("LOCALMKTDATE_1160869928");
    noLegs_0_2.set(LegIssueDate_148);
    InstrumentLeg_148.insert(LegIssueDate_148.getString());
    FIX::LegIssuer LegIssuer_148("STRING_336208008");
    noLegs_0_2.set(LegIssuer_148);
    InstrumentLeg_148.insert(LegIssuer_148.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_148("STRING_1552725771");
    noLegs_0_2.set(LegLocaleOfIssue_148);
    InstrumentLeg_148.insert(LegLocaleOfIssue_148.getString());
    FIX::LegMaturityDate LegMaturityDate_148("LOCALMKTDATE_395290717");
    noLegs_0_2.set(LegMaturityDate_148);
    InstrumentLeg_148.insert(LegMaturityDate_148.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_148("MONTHYEAR_259741125");
    noLegs_0_2.set(LegMaturityMonthYear_148);
    InstrumentLeg_148.insert(LegMaturityMonthYear_148.getString());
    FIX::LegMaturityTime LegMaturityTime_148("TZTIMEONLY_1618101011");
    noLegs_0_2.set(LegMaturityTime_148);
    InstrumentLeg_148.insert(LegMaturityTime_148.getString());
    FIX::LegOptAttribute LegOptAttribute_148('1');
    noLegs_0_2.set(LegOptAttribute_148);
    InstrumentLeg_148.insert(LegOptAttribute_148.getString());
    FIX::LegOptionRatio LegOptionRatio_148;
    LegOptionRatio_148.setString("15181243");
    noLegs_0_2.set(LegOptionRatio_148);
    InstrumentLeg_148.insert(LegOptionRatio_148.getString());
    FIX::LegPool LegPool_148("STRING_732646991");
    noLegs_0_2.set(LegPool_148);
    InstrumentLeg_148.insert(LegPool_148.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_148("STRING_1192325819");
    noLegs_0_2.set(LegPriceUnitOfMeasure_148);
    InstrumentLeg_148.insert(LegPriceUnitOfMeasure_148.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_148;
    LegPriceUnitOfMeasureQty_148.setString("1328212");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_148);
    InstrumentLeg_148.insert(LegPriceUnitOfMeasureQty_148.getString());
    FIX::LegProduct LegProduct_148(33228518);
    noLegs_0_2.set(LegProduct_148);
    InstrumentLeg_148.insert(LegProduct_148.getString());
    FIX::LegPutOrCall LegPutOrCall_148(2082203978);
    noLegs_0_2.set(LegPutOrCall_148);
    InstrumentLeg_148.insert(LegPutOrCall_148.getString());
    FIX::LegRatioQty LegRatioQty_148;
    LegRatioQty_148.setString("7381440");
    noLegs_0_2.set(LegRatioQty_148);
    InstrumentLeg_148.insert(LegRatioQty_148.getString());
    FIX::LegRedemptionDate LegRedemptionDate_148("LOCALMKTDATE_1032991200");
    noLegs_0_2.set(LegRedemptionDate_148);
    InstrumentLeg_148.insert(LegRedemptionDate_148.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_148("STRING_2129423251");
    noLegs_0_2.set(LegRepoCollateralSecurityType_148);
    InstrumentLeg_148.insert(LegRepoCollateralSecurityType_148.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_148;
    LegRepurchaseRate_148.setString("94.160000");
    noLegs_0_2.set(LegRepurchaseRate_148);
    InstrumentLeg_148.insert(LegRepurchaseRate_148.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_148(2053886831);
    noLegs_0_2.set(LegRepurchaseTerm_148);
    InstrumentLeg_148.insert(LegRepurchaseTerm_148.getString());
    FIX::LegSecurityDesc LegSecurityDesc_148("STRING_286685989");
    noLegs_0_2.set(LegSecurityDesc_148);
    InstrumentLeg_148.insert(LegSecurityDesc_148.getString());
    FIX::LegSecurityExchange LegSecurityExchange_148("EXCHANGE_1162323287");
    noLegs_0_2.set(LegSecurityExchange_148);
    InstrumentLeg_148.insert(LegSecurityExchange_148.getString());
    FIX::LegSecurityID LegSecurityID_148("STRING_2026304683");
    noLegs_0_2.set(LegSecurityID_148);
    InstrumentLeg_148.insert(LegSecurityID_148.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_148("STRING_646570004");
    noLegs_0_2.set(LegSecurityIDSource_148);
    InstrumentLeg_148.insert(LegSecurityIDSource_148.getString());
    FIX::LegSecuritySubType LegSecuritySubType_148("STRING_143216099");
    noLegs_0_2.set(LegSecuritySubType_148);
    InstrumentLeg_148.insert(LegSecuritySubType_148.getString());
    FIX::LegSecurityType LegSecurityType_148("STRING_622009562");
    noLegs_0_2.set(LegSecurityType_148);
    InstrumentLeg_148.insert(LegSecurityType_148.getString());
    FIX::LegSide LegSide_148('1');
    noLegs_0_2.set(LegSide_148);
    InstrumentLeg_148.insert(LegSide_148.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_148("STRING_754370538");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_148);
    InstrumentLeg_148.insert(LegStateOrProvinceOfIssue_148.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_148("EUR");
    noLegs_0_2.set(LegStrikeCurrency_148);
    InstrumentLeg_148.insert(LegStrikeCurrency_148.getString());
    FIX::LegStrikePrice LegStrikePrice_148;
    LegStrikePrice_148.setString("3423004");
    noLegs_0_2.set(LegStrikePrice_148);
    InstrumentLeg_148.insert(LegStrikePrice_148.getString());
    FIX::LegSymbol LegSymbol_148("STRING_1030541453");
    noLegs_0_2.set(LegSymbol_148);
    InstrumentLeg_148.insert(LegSymbol_148.getString());
    FIX::LegSymbolSfx LegSymbolSfx_148("STRING_412088150");
    noLegs_0_2.set(LegSymbolSfx_148);
    InstrumentLeg_148.insert(LegSymbolSfx_148.getString());
    FIX::LegTimeUnit LegTimeUnit_148("STRING_1503170415");
    noLegs_0_2.set(LegTimeUnit_148);
    InstrumentLeg_148.insert(LegTimeUnit_148.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_148("STRING_1366749461");
    noLegs_0_2.set(LegUnitOfMeasure_148);
    InstrumentLeg_148.insert(LegUnitOfMeasure_148.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_148;
    LegUnitOfMeasureQty_148.setString("19648139");
    noLegs_0_2.set(LegUnitOfMeasureQty_148);
    InstrumentLeg_148.insert(LegUnitOfMeasureQty_148.getString());
    all_values.push_back(InstrumentLeg_148);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_289;
      FIX::LegSecurityAltID LegSecurityAltID_289("STRING_1626490587");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_289);
      LegSecAltIDGrp_NoLegSecurityAltID_289.insert(LegSecurityAltID_289.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_289("STRING_1435431284");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_289);
      LegSecAltIDGrp_NoLegSecurityAltID_289.insert(LegSecurityAltIDSource_289.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_289);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_290;
      FIX::LegSecurityAltID LegSecurityAltID_290("STRING_844201049");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_290);
      LegSecAltIDGrp_NoLegSecurityAltID_290.insert(LegSecurityAltID_290.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_290("STRING_997131281");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_290);
      LegSecAltIDGrp_NoLegSecurityAltID_290.insert(LegSecurityAltIDSource_290.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_290);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_97;
  FIX::AttachmentPoint AttachmentPoint_97;
  AttachmentPoint_97.setString("46.280000");
  msg.set(AttachmentPoint_97);
  Instrument_97.insert(AttachmentPoint_97.getString());
  FIX::CFICode CFICode_102("STRING_2036526868");
  msg.set(CFICode_102);
  Instrument_97.insert(CFICode_102.getString());
  FIX::CPProgram CPProgram_97(2);
  msg.set(CPProgram_97);
  Instrument_97.insert(CPProgram_97.getString());
  FIX::CPRegType CPRegType_97("STRING_53823146");
  msg.set(CPRegType_97);
  Instrument_97.insert(CPRegType_97.getString());
  FIX::CapPrice CapPrice_97;
  CapPrice_97.setString("19712471");
  msg.set(CapPrice_97);
  Instrument_97.insert(CapPrice_97.getString());
  FIX::ContractMultiplier ContractMultiplier_97;
  ContractMultiplier_97.setString("18680965");
  msg.set(ContractMultiplier_97);
  Instrument_97.insert(ContractMultiplier_97.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_97(2);
  msg.set(ContractMultiplierUnit_97);
  Instrument_97.insert(ContractMultiplierUnit_97.getString());
  FIX::ContractSettlMonth ContractSettlMonth_97("MONTHYEAR_1953186802");
  msg.set(ContractSettlMonth_97);
  Instrument_97.insert(ContractSettlMonth_97.getString());
  FIX::CountryOfIssue CountryOfIssue_97("COUNTRY_1416332339");
  msg.set(CountryOfIssue_97);
  Instrument_97.insert(CountryOfIssue_97.getString());
  FIX::CouponPaymentDate CouponPaymentDate_97("LOCALMKTDATE_993217529");
  msg.set(CouponPaymentDate_97);
  Instrument_97.insert(CouponPaymentDate_97.getString());
  FIX::CouponRate CouponRate_97;
  CouponRate_97.setString("91.430000");
  msg.set(CouponRate_97);
  Instrument_97.insert(CouponRate_97.getString());
  FIX::CreditRating CreditRating_97("STRING_431171978");
  msg.set(CreditRating_97);
  Instrument_97.insert(CreditRating_97.getString());
  FIX::DatedDate DatedDate_97("LOCALMKTDATE_872038565");
  msg.set(DatedDate_97);
  Instrument_97.insert(DatedDate_97.getString());
  FIX::DetachmentPoint DetachmentPoint_97;
  DetachmentPoint_97.setString("91.480000");
  msg.set(DetachmentPoint_97);
  Instrument_97.insert(DetachmentPoint_97.getString());
  FIX::EncodedIssuer EncodedIssuer_97("DATA_574388078");
  msg.set(EncodedIssuer_97);
  Instrument_97.insert(EncodedIssuer_97.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_97(1494048127);
  msg.set(EncodedIssuerLen_97);
  Instrument_97.insert(EncodedIssuerLen_97.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_97("DATA_2034487176");
  msg.set(EncodedSecurityDesc_97);
  Instrument_97.insert(EncodedSecurityDesc_97.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_97(1328758616);
  msg.set(EncodedSecurityDescLen_97);
  Instrument_97.insert(EncodedSecurityDescLen_97.getString());
  FIX::ExerciseStyle ExerciseStyle_97(1);
  msg.set(ExerciseStyle_97);
  Instrument_97.insert(ExerciseStyle_97.getString());
  FIX::Factor Factor_97;
  Factor_97.setString("13656972");
  msg.set(Factor_97);
  Instrument_97.insert(Factor_97.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_97(true);
  msg.set(FlexProductEligibilityIndicator_97);
  Instrument_97.insert(FlexProductEligibilityIndicator_97.getString());
  FIX::FlexibleIndicator FlexibleIndicator_97(true);
  msg.set(FlexibleIndicator_97);
  Instrument_97.insert(FlexibleIndicator_97.getString());
  FIX::FloorPrice FloorPrice_97;
  FloorPrice_97.setString("17777853");
  msg.set(FloorPrice_97);
  Instrument_97.insert(FloorPrice_97.getString());
  FIX::FlowScheduleType FlowScheduleType_97(4);
  msg.set(FlowScheduleType_97);
  Instrument_97.insert(FlowScheduleType_97.getString());
  FIX::InstrRegistry InstrRegistry_97("STRING_985210059");
  msg.set(InstrRegistry_97);
  Instrument_97.insert(InstrRegistry_97.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_97('1');
  msg.set(InstrmtAssignmentMethod_97);
  Instrument_97.insert(InstrmtAssignmentMethod_97.getString());
  FIX::InterestAccrualDate InterestAccrualDate_97("LOCALMKTDATE_777723353");
  msg.set(InterestAccrualDate_97);
  Instrument_97.insert(InterestAccrualDate_97.getString());
  FIX::IssueDate IssueDate_97("LOCALMKTDATE_464216998");
  msg.set(IssueDate_97);
  Instrument_97.insert(IssueDate_97.getString());
  FIX::Issuer Issuer_97("STRING_883063307");
  msg.set(Issuer_97);
  Instrument_97.insert(Issuer_97.getString());
  FIX::ListMethod ListMethod_97(1);
  msg.set(ListMethod_97);
  Instrument_97.insert(ListMethod_97.getString());
  FIX::LocaleOfIssue LocaleOfIssue_97("STRING_1461348279");
  msg.set(LocaleOfIssue_97);
  Instrument_97.insert(LocaleOfIssue_97.getString());
  FIX::MaturityDate MaturityDate_97("LOCALMKTDATE_903657935");
  msg.set(MaturityDate_97);
  Instrument_97.insert(MaturityDate_97.getString());
  FIX::MaturityMonthYear MaturityMonthYear_97("MONTHYEAR_1510967623");
  msg.set(MaturityMonthYear_97);
  Instrument_97.insert(MaturityMonthYear_97.getString());
  FIX::MaturityTime MaturityTime_97("TZTIMEONLY_443817140");
  msg.set(MaturityTime_97);
  Instrument_97.insert(MaturityTime_97.getString());
  FIX::MinPriceIncrement MinPriceIncrement_97;
  MinPriceIncrement_97.setString("9574810");
  msg.set(MinPriceIncrement_97);
  Instrument_97.insert(MinPriceIncrement_97.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_97;
  MinPriceIncrementAmount_97.setString("13347311");
  msg.set(MinPriceIncrementAmount_97);
  Instrument_97.insert(MinPriceIncrementAmount_97.getString());
  FIX::NTPositionLimit NTPositionLimit_97(164430064);
  msg.set(NTPositionLimit_97);
  Instrument_97.insert(NTPositionLimit_97.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_97;
  NotionalPercentageOutstanding_97.setString("54.280000");
  msg.set(NotionalPercentageOutstanding_97);
  Instrument_97.insert(NotionalPercentageOutstanding_97.getString());
  FIX::OptAttribute OptAttribute_97('1');
  msg.set(OptAttribute_97);
  Instrument_97.insert(OptAttribute_97.getString());
  FIX::OptPayoutAmount OptPayoutAmount_97;
  OptPayoutAmount_97.setString("15807624");
  msg.set(OptPayoutAmount_97);
  Instrument_97.insert(OptPayoutAmount_97.getString());
  FIX::OptPayoutType OptPayoutType_97(2);
  msg.set(OptPayoutType_97);
  Instrument_97.insert(OptPayoutType_97.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_97;
  OriginalNotionalPercentageOutstanding_97.setString("34.720000");
  msg.set(OriginalNotionalPercentageOutstanding_97);
  Instrument_97.insert(OriginalNotionalPercentageOutstanding_97.getString());
  FIX::Pool Pool_97("STRING_2011934382");
  msg.set(Pool_97);
  Instrument_97.insert(Pool_97.getString());
  FIX::PositionLimit PositionLimit_97(1762067874);
  msg.set(PositionLimit_97);
  Instrument_97.insert(PositionLimit_97.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_97("STRING_STD");
  msg.set(PriceQuoteMethod_97);
  Instrument_97.insert(PriceQuoteMethod_97.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_97("STRING_438838812");
  msg.set(PriceUnitOfMeasure_97);
  Instrument_97.insert(PriceUnitOfMeasure_97.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_97;
  PriceUnitOfMeasureQty_97.setString("11086323");
  msg.set(PriceUnitOfMeasureQty_97);
  Instrument_97.insert(PriceUnitOfMeasureQty_97.getString());
  FIX::Product Product_105(12);
  msg.set(Product_105);
  Instrument_97.insert(Product_105.getString());
  FIX::ProductComplex ProductComplex_97("STRING_1767597428");
  msg.set(ProductComplex_97);
  Instrument_97.insert(ProductComplex_97.getString());
  FIX::PutOrCall PutOrCall_97(1);
  msg.set(PutOrCall_97);
  Instrument_97.insert(PutOrCall_97.getString());
  FIX::RedemptionDate RedemptionDate_97("LOCALMKTDATE_1076999748");
  msg.set(RedemptionDate_97);
  Instrument_97.insert(RedemptionDate_97.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_97("STRING_1291172882");
  msg.set(RepoCollateralSecurityType_97);
  Instrument_97.insert(RepoCollateralSecurityType_97.getString());
  FIX::RepurchaseRate RepurchaseRate_97;
  RepurchaseRate_97.setString("57.450000");
  msg.set(RepurchaseRate_97);
  Instrument_97.insert(RepurchaseRate_97.getString());
  FIX::RepurchaseTerm RepurchaseTerm_97(707301497);
  msg.set(RepurchaseTerm_97);
  Instrument_97.insert(RepurchaseTerm_97.getString());
  FIX::RestructuringType RestructuringType_97("STRING_FR");
  msg.set(RestructuringType_97);
  Instrument_97.insert(RestructuringType_97.getString());
  FIX::SecurityDesc SecurityDesc_97("STRING_300222156");
  msg.set(SecurityDesc_97);
  Instrument_97.insert(SecurityDesc_97.getString());
  FIX::SecurityExchange SecurityExchange_97("EXCHANGE_154933520");
  msg.set(SecurityExchange_97);
  Instrument_97.insert(SecurityExchange_97.getString());
  FIX::SecurityGroup SecurityGroup_97("STRING_948158457");
  msg.set(SecurityGroup_97);
  Instrument_97.insert(SecurityGroup_97.getString());
  FIX::SecurityID SecurityID_97("STRING_764439155");
  msg.set(SecurityID_97);
  Instrument_97.insert(SecurityID_97.getString());
  FIX::SecurityIDSource SecurityIDSource_97("STRING_1");
  msg.set(SecurityIDSource_97);
  Instrument_97.insert(SecurityIDSource_97.getString());
  FIX::SecurityStatus SecurityStatus_98("STRING_1");
  msg.set(SecurityStatus_98);
  Instrument_97.insert(SecurityStatus_98.getString());
  FIX::SecuritySubType SecuritySubType_101("STRING_78303786");
  msg.set(SecuritySubType_101);
  Instrument_97.insert(SecuritySubType_101.getString());
  FIX::SecurityType SecurityType_105("STRING_TERM");
  msg.set(SecurityType_105);
  Instrument_97.insert(SecurityType_105.getString());
  FIX::Seniority Seniority_97("STRING_SB");
  msg.set(Seniority_97);
  Instrument_97.insert(Seniority_97.getString());
  FIX::SettlMethod SettlMethod_97('P');
  msg.set(SettlMethod_97);
  Instrument_97.insert(SettlMethod_97.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_97("STRING_751652197");
  msg.set(SettleOnOpenFlag_97);
  Instrument_97.insert(SettleOnOpenFlag_97.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_97("STRING_1120814362");
  msg.set(StateOrProvinceOfIssue_97);
  Instrument_97.insert(StateOrProvinceOfIssue_97.getString());
  FIX::StrikeCurrency StrikeCurrency_97("CHF");
  msg.set(StrikeCurrency_97);
  Instrument_97.insert(StrikeCurrency_97.getString());
  FIX::StrikeMultiplier StrikeMultiplier_97;
  StrikeMultiplier_97.setString("1137650");
  msg.set(StrikeMultiplier_97);
  Instrument_97.insert(StrikeMultiplier_97.getString());
  FIX::StrikePrice StrikePrice_97;
  StrikePrice_97.setString("1198297");
  msg.set(StrikePrice_97);
  Instrument_97.insert(StrikePrice_97.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_97(2);
  msg.set(StrikePriceBoundaryMethod_97);
  Instrument_97.insert(StrikePriceBoundaryMethod_97.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_97;
  StrikePriceBoundaryPrecision_97.setString("85.160000");
  msg.set(StrikePriceBoundaryPrecision_97);
  Instrument_97.insert(StrikePriceBoundaryPrecision_97.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_97(1);
  msg.set(StrikePriceDeterminationMethod_97);
  Instrument_97.insert(StrikePriceDeterminationMethod_97.getString());
  FIX::StrikeValue StrikeValue_97;
  StrikeValue_97.setString("11530775");
  msg.set(StrikeValue_97);
  Instrument_97.insert(StrikeValue_97.getString());
  FIX::Symbol Symbol_97("STRING_1170887488");
  msg.set(Symbol_97);
  Instrument_97.insert(Symbol_97.getString());
  FIX::SymbolSfx SymbolSfx_97("STRING_CD");
  msg.set(SymbolSfx_97);
  Instrument_97.insert(SymbolSfx_97.getString());
  FIX::TimeUnit TimeUnit_97("STRING_S");
  msg.set(TimeUnit_97);
  Instrument_97.insert(TimeUnit_97.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_97(2);
  msg.set(UnderlyingPriceDeterminationMethod_97);
  Instrument_97.insert(UnderlyingPriceDeterminationMethod_97.getString());
  FIX::UnitOfMeasure UnitOfMeasure_97("STRING_Alw");
  msg.set(UnitOfMeasure_97);
  Instrument_97.insert(UnitOfMeasure_97.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_97;
  UnitOfMeasureQty_97.setString("19582613");
  msg.set(UnitOfMeasureQty_97);
  Instrument_97.insert(UnitOfMeasureQty_97.getString());
  FIX::ValuationMethod ValuationMethod_97("STRING_FUTDA");
  msg.set(ValuationMethod_97);
  Instrument_97.insert(ValuationMethod_97.getString());
  all_values.push_back(Instrument_97);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReportRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_179;
    FIX::ComplexEventCondition ComplexEventCondition_179(2);
    noComplexEvents_0_0.set(ComplexEventCondition_179);
    ComplexEvents_NoComplexEvents_179.insert(ComplexEventCondition_179.getString());
    FIX::ComplexEventPrice ComplexEventPrice_179;
    ComplexEventPrice_179.setString("5190075");
    noComplexEvents_0_0.set(ComplexEventPrice_179);
    ComplexEvents_NoComplexEvents_179.insert(ComplexEventPrice_179.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_179(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_179);
    ComplexEvents_NoComplexEvents_179.insert(ComplexEventPriceBoundaryMethod_179.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_179;
    ComplexEventPriceBoundaryPrecision_179.setString("56.190000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_179);
    ComplexEvents_NoComplexEvents_179.insert(ComplexEventPriceBoundaryPrecision_179.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_179(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_179);
    ComplexEvents_NoComplexEvents_179.insert(ComplexEventPriceTimeType_179.getString());
    FIX::ComplexEventType ComplexEventType_179(6);
    noComplexEvents_0_0.set(ComplexEventType_179);
    ComplexEvents_NoComplexEvents_179.insert(ComplexEventType_179.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_179;
    ComplexOptPayoutAmount_179.setString("1904511");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_179);
    ComplexEvents_NoComplexEvents_179.insert(ComplexOptPayoutAmount_179.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_179);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_362;
      FIX::ComplexEventEndDate ComplexEventEndDate_362(FIX::UTCTIMESTAMP(9, 30, 9, 20, 12, 2001));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_362);
      ComplexEventDates_NoComplexEventDates_362.insert(ComplexEventEndDate_362.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_362(FIX::UTCTIMESTAMP(8, 35, 57, 19, 12, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_362);
      ComplexEventDates_NoComplexEventDates_362.insert(ComplexEventStartDate_362.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_362);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_729;
        FIX::ComplexEventEndTime ComplexEventEndTime_729(FIX::UTCTIMEONLY(22, 27, 12));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_729);
        ComplexEventTimes_NoComplexEventTimes_729.insert(ComplexEventEndTime_729.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_729(FIX::UTCTIMEONLY(9, 21, 30));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_729);
        ComplexEventTimes_NoComplexEventTimes_729.insert(ComplexEventStartTime_729.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_729);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_730;
        FIX::ComplexEventEndTime ComplexEventEndTime_730(FIX::UTCTIMEONLY(0, 41, 59));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_730);
        ComplexEventTimes_NoComplexEventTimes_730.insert(ComplexEventEndTime_730.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_730(FIX::UTCTIMEONLY(1, 26, 22));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_730);
        ComplexEventTimes_NoComplexEventTimes_730.insert(ComplexEventStartTime_730.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_730);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_731;
        FIX::ComplexEventEndTime ComplexEventEndTime_731(FIX::UTCTIMEONLY(3, 44, 19));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_731);
        ComplexEventTimes_NoComplexEventTimes_731.insert(ComplexEventEndTime_731.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_731(FIX::UTCTIMEONLY(20, 43, 14));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_731);
        ComplexEventTimes_NoComplexEventTimes_731.insert(ComplexEventStartTime_731.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_731);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_363;
      FIX::ComplexEventEndDate ComplexEventEndDate_363(FIX::UTCTIMESTAMP(10, 11, 15, 25, 2, 2003));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_363);
      ComplexEventDates_NoComplexEventDates_363.insert(ComplexEventEndDate_363.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_363(FIX::UTCTIMESTAMP(4, 34, 21, 19, 8, 2006));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_363);
      ComplexEventDates_NoComplexEventDates_363.insert(ComplexEventStartDate_363.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_363);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_732;
        FIX::ComplexEventEndTime ComplexEventEndTime_732(FIX::UTCTIMEONLY(10, 22, 11));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_732);
        ComplexEventTimes_NoComplexEventTimes_732.insert(ComplexEventEndTime_732.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_732(FIX::UTCTIMEONLY(11, 29, 11));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_732);
        ComplexEventTimes_NoComplexEventTimes_732.insert(ComplexEventStartTime_732.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_732);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_733;
        FIX::ComplexEventEndTime ComplexEventEndTime_733(FIX::UTCTIMEONLY(8, 48, 25));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_733);
        ComplexEventTimes_NoComplexEventTimes_733.insert(ComplexEventEndTime_733.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_733(FIX::UTCTIMEONLY(8, 0, 17));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_733);
        ComplexEventTimes_NoComplexEventTimes_733.insert(ComplexEventStartTime_733.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_733);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_734;
        FIX::ComplexEventEndTime ComplexEventEndTime_734(FIX::UTCTIMEONLY(22, 20, 12));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_734);
        ComplexEventTimes_NoComplexEventTimes_734.insert(ComplexEventEndTime_734.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_734(FIX::UTCTIMEONLY(14, 27, 44));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_734);
        ComplexEventTimes_NoComplexEventTimes_734.insert(ComplexEventStartTime_734.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_734);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradeCaptureReportRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_193;
    FIX::EventDate EventDate_193("LOCALMKTDATE_1549788362");
    noEvents_0_0.set(EventDate_193);
    EvntGrp_NoEvents_193.insert(EventDate_193.getString());
    FIX::EventPx EventPx_193;
    EventPx_193.setString("6416527");
    noEvents_0_0.set(EventPx_193);
    EvntGrp_NoEvents_193.insert(EventPx_193.getString());
    FIX::EventText EventText_193("STRING_338930309");
    noEvents_0_0.set(EventText_193);
    EvntGrp_NoEvents_193.insert(EventText_193.getString());
    FIX::EventTime EventTime_193(FIX::UTCTIMESTAMP(7, 10, 25, 6, 9, 2012));
    noEvents_0_0.set(EventTime_193);
    EvntGrp_NoEvents_193.insert(EventTime_193.getString());
    FIX::EventType EventType_193(4);
    noEvents_0_0.set(EventType_193);
    EvntGrp_NoEvents_193.insert(EventType_193.getString());
    all_values.push_back(EvntGrp_NoEvents_193);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_190;
    FIX::InstrumentPartyID InstrumentPartyID_190("STRING_1508480457");
    noInstrumentParties_0_0.set(InstrumentPartyID_190);
    InstrumentParties_NoInstrumentParties_190.insert(InstrumentPartyID_190.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_190('3');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_190);
    InstrumentParties_NoInstrumentParties_190.insert(InstrumentPartyIDSource_190.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_190(37661141);
    noInstrumentParties_0_0.set(InstrumentPartyRole_190);
    InstrumentParties_NoInstrumentParties_190.insert(InstrumentPartyRole_190.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_190);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_396;
      FIX::InstrumentPartySubID InstrumentPartySubID_396("STRING_700179035");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_396);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_396.insert(InstrumentPartySubID_396.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_396(1234222507);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_396);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_396.insert(InstrumentPartySubIDType_396.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_396);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_191;
    FIX::InstrumentPartyID InstrumentPartyID_191("STRING_1833056052");
    noInstrumentParties_0_1.set(InstrumentPartyID_191);
    InstrumentParties_NoInstrumentParties_191.insert(InstrumentPartyID_191.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_191('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_191);
    InstrumentParties_NoInstrumentParties_191.insert(InstrumentPartyIDSource_191.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_191(1910827567);
    noInstrumentParties_0_1.set(InstrumentPartyRole_191);
    InstrumentParties_NoInstrumentParties_191.insert(InstrumentPartyRole_191.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_191);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_397;
      FIX::InstrumentPartySubID InstrumentPartySubID_397("STRING_484082703");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_397);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_397.insert(InstrumentPartySubID_397.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_397(1668770350);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_397);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_397.insert(InstrumentPartySubIDType_397.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_397);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_192;
    FIX::InstrumentPartyID InstrumentPartyID_192("STRING_1568615801");
    noInstrumentParties_0_2.set(InstrumentPartyID_192);
    InstrumentParties_NoInstrumentParties_192.insert(InstrumentPartyID_192.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_192('8');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_192);
    InstrumentParties_NoInstrumentParties_192.insert(InstrumentPartyIDSource_192.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_192(1455933397);
    noInstrumentParties_0_2.set(InstrumentPartyRole_192);
    InstrumentParties_NoInstrumentParties_192.insert(InstrumentPartyRole_192.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_192);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_398;
      FIX::InstrumentPartySubID InstrumentPartySubID_398("STRING_31054235");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_398);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_398.insert(InstrumentPartySubID_398.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_398(1243603093);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_398);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_398.insert(InstrumentPartySubIDType_398.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_398);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_399;
      FIX::InstrumentPartySubID InstrumentPartySubID_399("STRING_848721905");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_399);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_399.insert(InstrumentPartySubID_399.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_399(1580842597);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_399);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_399.insert(InstrumentPartySubIDType_399.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_399);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradeCaptureReportRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_212;
    FIX::SecurityAltID SecurityAltID_212("STRING_1187652214");
    noSecurityAltID_0_0.set(SecurityAltID_212);
    SecAltIDGrp_NoSecurityAltID_212.insert(SecurityAltID_212.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_212("STRING_288393942");
    noSecurityAltID_0_0.set(SecurityAltIDSource_212);
    SecAltIDGrp_NoSecurityAltID_212.insert(SecurityAltIDSource_212.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_212);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_213;
    FIX::SecurityAltID SecurityAltID_213("STRING_1898590362");
    noSecurityAltID_0_1.set(SecurityAltID_213);
    SecAltIDGrp_NoSecurityAltID_213.insert(SecurityAltID_213.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_213("STRING_1762458584");
    noSecurityAltID_0_1.set(SecurityAltIDSource_213);
    SecAltIDGrp_NoSecurityAltID_213.insert(SecurityAltIDSource_213.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_213);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_194;
  FIX::SecurityXML SecurityXML_195("XMLDATA_802298047");
  msg.set(SecurityXML_195);
  FIX::SecurityXMLLen SecurityXMLLen_97(320313148);
  msg.set(SecurityXMLLen_97);
  FIX::SecurityXMLSchema SecurityXMLSchema_97("STRING_1017826508");
  msg.set(SecurityXMLSchema_97);
  SecurityXML_194.insert(SecurityXMLSchema_97.getString());
  all_values.push_back(SecurityXML_194);

  // InstrumentExtension
  multiset<string> InstrumentExtension_18;
  FIX::DeliveryForm DeliveryForm_18(2);
  msg.set(DeliveryForm_18);
  InstrumentExtension_18.insert(DeliveryForm_18.getString());
  FIX::PctAtRisk PctAtRisk_18;
  PctAtRisk_18.setString("89.710000");
  msg.set(PctAtRisk_18);
  InstrumentExtension_18.insert(PctAtRisk_18.getString());
  all_values.push_back(InstrumentExtension_18);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_37;
    FIX::InstrAttribType InstrAttribType_37(25);
    noInstrAttrib_0_0.set(InstrAttribType_37);
    AttrbGrp_NoInstrAttrib_37.insert(InstrAttribType_37.getString());
    FIX::InstrAttribValue InstrAttribValue_37("STRING_1533385978");
    noInstrAttrib_0_0.set(InstrAttribValue_37);
    AttrbGrp_NoInstrAttrib_37.insert(InstrAttribValue_37.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_37);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_38;
    FIX::InstrAttribType InstrAttribType_38(26);
    noInstrAttrib_0_1.set(InstrAttribType_38);
    AttrbGrp_NoInstrAttrib_38.insert(InstrAttribType_38.getString());
    FIX::InstrAttribValue InstrAttribValue_38("STRING_1271612613");
    noInstrAttrib_0_1.set(InstrAttribValue_38);
    AttrbGrp_NoInstrAttrib_38.insert(InstrAttribValue_38.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_38);

    msg.addGroup(noInstrAttrib_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrAttrib noInstrAttrib_0_2;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_39;
    FIX::InstrAttribType InstrAttribType_39(26);
    noInstrAttrib_0_2.set(InstrAttribType_39);
    AttrbGrp_NoInstrAttrib_39.insert(InstrAttribType_39.getString());
    FIX::InstrAttribValue InstrAttribValue_39("STRING_1123324644");
    noInstrAttrib_0_2.set(InstrAttribValue_39);
    AttrbGrp_NoInstrAttrib_39.insert(InstrAttribValue_39.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_39);

    msg.addGroup(noInstrAttrib_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::TradeCaptureReportRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_143;
    FIX::PartyID PartyID_143("STRING_2000580872");
    noPartyIDs_0_0.set(PartyID_143);
    Parties_NoPartyIDs_143.insert(PartyID_143.getString());
    FIX::PartyIDSource PartyIDSource_143('C');
    noPartyIDs_0_0.set(PartyIDSource_143);
    Parties_NoPartyIDs_143.insert(PartyIDSource_143.getString());
    FIX::PartyRole PartyRole_143(36);
    noPartyIDs_0_0.set(PartyRole_143);
    Parties_NoPartyIDs_143.insert(PartyRole_143.getString());
    all_values.push_back(Parties_NoPartyIDs_143);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_290;
      FIX::PartySubID PartySubID_290("STRING_407955266");
      noPartySubIDs_0_1_0.set(PartySubID_290);
      PtysSubGrp_NoPartySubIDs_290.insert(PartySubID_290.getString());
      FIX::PartySubIDType PartySubIDType_290(18);
      noPartySubIDs_0_1_0.set(PartySubIDType_290);
      PtysSubGrp_NoPartySubIDs_290.insert(PartySubIDType_290.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_290);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_291;
      FIX::PartySubID PartySubID_291("STRING_1190827063");
      noPartySubIDs_0_1_1.set(PartySubID_291);
      PtysSubGrp_NoPartySubIDs_291.insert(PartySubID_291.getString());
      FIX::PartySubIDType PartySubIDType_291(22);
      noPartySubIDs_0_1_1.set(PartySubIDType_291);
      PtysSubGrp_NoPartySubIDs_291.insert(PartySubIDType_291.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_291);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_144;
    FIX::PartyID PartyID_144("STRING_611550979");
    noPartyIDs_0_1.set(PartyID_144);
    Parties_NoPartyIDs_144.insert(PartyID_144.getString());
    FIX::PartyIDSource PartyIDSource_144('2');
    noPartyIDs_0_1.set(PartyIDSource_144);
    Parties_NoPartyIDs_144.insert(PartyIDSource_144.getString());
    FIX::PartyRole PartyRole_144(83);
    noPartyIDs_0_1.set(PartyRole_144);
    Parties_NoPartyIDs_144.insert(PartyRole_144.getString());
    all_values.push_back(Parties_NoPartyIDs_144);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_292;
      FIX::PartySubID PartySubID_292("STRING_655240247");
      noPartySubIDs_1_1_0.set(PartySubID_292);
      PtysSubGrp_NoPartySubIDs_292.insert(PartySubID_292.getString());
      FIX::PartySubIDType PartySubIDType_292(24);
      noPartySubIDs_1_1_0.set(PartySubIDType_292);
      PtysSubGrp_NoPartySubIDs_292.insert(PartySubIDType_292.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_292);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_293;
      FIX::PartySubID PartySubID_293("STRING_500441451");
      noPartySubIDs_1_1_1.set(PartySubID_293);
      PtysSubGrp_NoPartySubIDs_293.insert(PartySubID_293.getString());
      FIX::PartySubIDType PartySubIDType_293(16);
      noPartySubIDs_1_1_1.set(PartySubIDType_293);
      PtysSubGrp_NoPartySubIDs_293.insert(PartySubIDType_293.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_293);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // TrdCapDtGrp
  // Group TrdCapDtGrp.NoDates
  {
    FIX50SP2::TradeCaptureReportRequest::NoDates noDates_0_0;
    // TrdCapDtGrp.NoDates
    multiset<string> TrdCapDtGrp_NoDates_0;
    FIX::LastUpdateTime LastUpdateTime_8(FIX::UTCTIMESTAMP(13, 13, 36, 21, 2, 2012));
    noDates_0_0.set(LastUpdateTime_8);
    TrdCapDtGrp_NoDates_0.insert(LastUpdateTime_8.getString());
    FIX::TradeDate TradeDate_27("LOCALMKTDATE_468856829");
    noDates_0_0.set(TradeDate_27);
    TrdCapDtGrp_NoDates_0.insert(TradeDate_27.getString());
    FIX::TransactTime TransactTime_72(FIX::UTCTIMESTAMP(6, 3, 41, 6, 9, 2011));
    noDates_0_0.set(TransactTime_72);
    TrdCapDtGrp_NoDates_0.insert(TransactTime_72.getString());
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
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_143("DATA_82250063");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_143);
    UnderlyingInstrument_143.insert(EncodedUnderlyingIssuer_143.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_143(1587499953);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_143);
    UnderlyingInstrument_143.insert(EncodedUnderlyingIssuerLen_143.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_143("DATA_1144250856");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_143);
    UnderlyingInstrument_143.insert(EncodedUnderlyingSecurityDesc_143.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_143(1182945115);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_143);
    UnderlyingInstrument_143.insert(EncodedUnderlyingSecurityDescLen_143.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_143;
    UnderlyingAdjustedQuantity_143.setString("6308433");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_143);
    UnderlyingInstrument_143.insert(UnderlyingAdjustedQuantity_143.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_143;
    UnderlyingAllocationPercent_143.setString("58.720000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_143);
    UnderlyingInstrument_143.insert(UnderlyingAllocationPercent_143.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_143;
    UnderlyingAttachmentPoint_143.setString("60.940000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_143);
    UnderlyingInstrument_143.insert(UnderlyingAttachmentPoint_143.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_143("STRING_1852724667");
    noUnderlyings_0_0.set(UnderlyingCFICode_143);
    UnderlyingInstrument_143.insert(UnderlyingCFICode_143.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_143("STRING_1820663981");
    noUnderlyings_0_0.set(UnderlyingCPProgram_143);
    UnderlyingInstrument_143.insert(UnderlyingCPProgram_143.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_143("STRING_1107285331");
    noUnderlyings_0_0.set(UnderlyingCPRegType_143);
    UnderlyingInstrument_143.insert(UnderlyingCPRegType_143.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_143;
    UnderlyingCapValue_143.setString("3604812");
    noUnderlyings_0_0.set(UnderlyingCapValue_143);
    UnderlyingInstrument_143.insert(UnderlyingCapValue_143.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_143;
    UnderlyingCashAmount_143.setString("3709606");
    noUnderlyings_0_0.set(UnderlyingCashAmount_143);
    UnderlyingInstrument_143.insert(UnderlyingCashAmount_143.getString());
    FIX::UnderlyingCashType UnderlyingCashType_143("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_143);
    UnderlyingInstrument_143.insert(UnderlyingCashType_143.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_143;
    UnderlyingContractMultiplier_143.setString("13041154");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_143);
    UnderlyingInstrument_143.insert(UnderlyingContractMultiplier_143.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_143(819847590);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_143);
    UnderlyingInstrument_143.insert(UnderlyingContractMultiplierUnit_143.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_143("COUNTRY_1723143171");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_143);
    UnderlyingInstrument_143.insert(UnderlyingCountryOfIssue_143.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_143("LOCALMKTDATE_902564046");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_143);
    UnderlyingInstrument_143.insert(UnderlyingCouponPaymentDate_143.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_143;
    UnderlyingCouponRate_143.setString("77.230000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_143);
    UnderlyingInstrument_143.insert(UnderlyingCouponRate_143.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_143("STRING_708902419");
    noUnderlyings_0_0.set(UnderlyingCreditRating_143);
    UnderlyingInstrument_143.insert(UnderlyingCreditRating_143.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_143("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_143);
    UnderlyingInstrument_143.insert(UnderlyingCurrency_143.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_143;
    UnderlyingCurrentValue_143.setString("16935863");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_143);
    UnderlyingInstrument_143.insert(UnderlyingCurrentValue_143.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_143;
    UnderlyingDetachmentPoint_143.setString("51.810000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_143);
    UnderlyingInstrument_143.insert(UnderlyingDetachmentPoint_143.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_143;
    UnderlyingDirtyPrice_143.setString("5304609");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_143);
    UnderlyingInstrument_143.insert(UnderlyingDirtyPrice_143.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_143;
    UnderlyingEndPrice_143.setString("4198886");
    noUnderlyings_0_0.set(UnderlyingEndPrice_143);
    UnderlyingInstrument_143.insert(UnderlyingEndPrice_143.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_143;
    UnderlyingEndValue_143.setString("13175609");
    noUnderlyings_0_0.set(UnderlyingEndValue_143);
    UnderlyingInstrument_143.insert(UnderlyingEndValue_143.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_143(1927683769);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_143);
    UnderlyingInstrument_143.insert(UnderlyingExerciseStyle_143.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_143;
    UnderlyingFXRate_143.setString("2695157");
    noUnderlyings_0_0.set(UnderlyingFXRate_143);
    UnderlyingInstrument_143.insert(UnderlyingFXRate_143.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_143('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_143);
    UnderlyingInstrument_143.insert(UnderlyingFXRateCalc_143.getString());
    FIX::UnderlyingFactor UnderlyingFactor_143;
    UnderlyingFactor_143.setString("10305201");
    noUnderlyings_0_0.set(UnderlyingFactor_143);
    UnderlyingInstrument_143.insert(UnderlyingFactor_143.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_143(1005811311);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_143);
    UnderlyingInstrument_143.insert(UnderlyingFlowScheduleType_143.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_143("STRING_1949981851");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_143);
    UnderlyingInstrument_143.insert(UnderlyingInstrRegistry_143.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_143("LOCALMKTDATE_470536452");
    noUnderlyings_0_0.set(UnderlyingIssueDate_143);
    UnderlyingInstrument_143.insert(UnderlyingIssueDate_143.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_143("STRING_2578519");
    noUnderlyings_0_0.set(UnderlyingIssuer_143);
    UnderlyingInstrument_143.insert(UnderlyingIssuer_143.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_143("STRING_985443318");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_143);
    UnderlyingInstrument_143.insert(UnderlyingLocaleOfIssue_143.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_143("LOCALMKTDATE_1101379821");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_143);
    UnderlyingInstrument_143.insert(UnderlyingMaturityDate_143.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_143("MONTHYEAR_863234391");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_143);
    UnderlyingInstrument_143.insert(UnderlyingMaturityMonthYear_143.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_143("TZTIMEONLY_632455765");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_143);
    UnderlyingInstrument_143.insert(UnderlyingMaturityTime_143.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_143;
    UnderlyingNotionalPercentageOutstanding_143.setString("8.400000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_143);
    UnderlyingInstrument_143.insert(UnderlyingNotionalPercentageOutstanding_143.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_143('5');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_143);
    UnderlyingInstrument_143.insert(UnderlyingOptAttribute_143.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_143;
    UnderlyingOriginalNotionalPercentageOutstanding_143.setString("10.960000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_143);
    UnderlyingInstrument_143.insert(UnderlyingOriginalNotionalPercentageOutstanding_143.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_143("STRING_1167102107");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_143);
    UnderlyingInstrument_143.insert(UnderlyingPriceUnitOfMeasure_143.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_143;
    UnderlyingPriceUnitOfMeasureQty_143.setString("9073753");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_143);
    UnderlyingInstrument_143.insert(UnderlyingPriceUnitOfMeasureQty_143.getString());
    FIX::UnderlyingProduct UnderlyingProduct_143(1199984231);
    noUnderlyings_0_0.set(UnderlyingProduct_143);
    UnderlyingInstrument_143.insert(UnderlyingProduct_143.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_143(323733916);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_143);
    UnderlyingInstrument_143.insert(UnderlyingPutOrCall_143.getString());
    FIX::UnderlyingPx UnderlyingPx_143;
    UnderlyingPx_143.setString("17272229");
    noUnderlyings_0_0.set(UnderlyingPx_143);
    UnderlyingInstrument_143.insert(UnderlyingPx_143.getString());
    FIX::UnderlyingQty UnderlyingQty_143;
    UnderlyingQty_143.setString("7756437");
    noUnderlyings_0_0.set(UnderlyingQty_143);
    UnderlyingInstrument_143.insert(UnderlyingQty_143.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_143("LOCALMKTDATE_1226297963");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_143);
    UnderlyingInstrument_143.insert(UnderlyingRedemptionDate_143.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_143("STRING_1168786994");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_143);
    UnderlyingInstrument_143.insert(UnderlyingRepoCollateralSecurityType_143.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_143;
    UnderlyingRepurchaseRate_143.setString("61.740000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_143);
    UnderlyingInstrument_143.insert(UnderlyingRepurchaseRate_143.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_143(334532666);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_143);
    UnderlyingInstrument_143.insert(UnderlyingRepurchaseTerm_143.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_143("STRING_388106527");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_143);
    UnderlyingInstrument_143.insert(UnderlyingRestructuringType_143.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_143("STRING_1030648838");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_143);
    UnderlyingInstrument_143.insert(UnderlyingSecurityDesc_143.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_143("EXCHANGE_2059107847");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_143);
    UnderlyingInstrument_143.insert(UnderlyingSecurityExchange_143.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_143("STRING_918567495");
    noUnderlyings_0_0.set(UnderlyingSecurityID_143);
    UnderlyingInstrument_143.insert(UnderlyingSecurityID_143.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_143("STRING_1450537532");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_143);
    UnderlyingInstrument_143.insert(UnderlyingSecurityIDSource_143.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_143("STRING_1229185175");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_143);
    UnderlyingInstrument_143.insert(UnderlyingSecuritySubType_143.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_143("STRING_698767616");
    noUnderlyings_0_0.set(UnderlyingSecurityType_143);
    UnderlyingInstrument_143.insert(UnderlyingSecurityType_143.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_143("STRING_1720053252");
    noUnderlyings_0_0.set(UnderlyingSeniority_143);
    UnderlyingInstrument_143.insert(UnderlyingSeniority_143.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_143("STRING_949433316");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_143);
    UnderlyingInstrument_143.insert(UnderlyingSettlMethod_143.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_143(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_143);
    UnderlyingInstrument_143.insert(UnderlyingSettlementType_143.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_143;
    UnderlyingStartValue_143.setString("5783809");
    noUnderlyings_0_0.set(UnderlyingStartValue_143);
    UnderlyingInstrument_143.insert(UnderlyingStartValue_143.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_143("STRING_751931519");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_143);
    UnderlyingInstrument_143.insert(UnderlyingStateOrProvinceOfIssue_143.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_143("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_143);
    UnderlyingInstrument_143.insert(UnderlyingStrikeCurrency_143.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_143;
    UnderlyingStrikePrice_143.setString("17373748");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_143);
    UnderlyingInstrument_143.insert(UnderlyingStrikePrice_143.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_143("STRING_1153720387");
    noUnderlyings_0_0.set(UnderlyingSymbol_143);
    UnderlyingInstrument_143.insert(UnderlyingSymbol_143.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_143("STRING_1444193826");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_143);
    UnderlyingInstrument_143.insert(UnderlyingSymbolSfx_143.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_143("STRING_222346955");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_143);
    UnderlyingInstrument_143.insert(UnderlyingTimeUnit_143.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_143("STRING_1960341228");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_143);
    UnderlyingInstrument_143.insert(UnderlyingUnitOfMeasure_143.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_143;
    UnderlyingUnitOfMeasureQty_143.setString("19806085");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_143);
    UnderlyingInstrument_143.insert(UnderlyingUnitOfMeasureQty_143.getString());
    all_values.push_back(UnderlyingInstrument_143);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_291;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_291("STRING_979959687");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_291);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_291.insert(UnderlyingSecurityAltID_291.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_291("STRING_740500232");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_291);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_291.insert(UnderlyingSecurityAltIDSource_291.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_291);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_292;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_292("STRING_1014588635");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_292);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_292.insert(UnderlyingSecurityAltID_292.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_292("STRING_1303693604");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_292);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_292.insert(UnderlyingSecurityAltIDSource_292.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_292);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_270;
      FIX::UnderlyingStipType UnderlyingStipType_270("STRING_1790232389");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_270);
      UnderlyingStipulations_NoUnderlyingStips_270.insert(UnderlyingStipType_270.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_270("STRING_382507919");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_270);
      UnderlyingStipulations_NoUnderlyingStips_270.insert(UnderlyingStipValue_270.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_270);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_293;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_293("STRING_1127294915");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_293);
      UndlyInstrumentParties_NoUndlyInstrumentParties_293.insert(UnderlyingInstrumentPartyID_293.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_293('7');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_293);
      UndlyInstrumentParties_NoUndlyInstrumentParties_293.insert(UnderlyingInstrumentPartyIDSource_293.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_293(1877133024);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_293);
      UndlyInstrumentParties_NoUndlyInstrumentParties_293.insert(UnderlyingInstrumentPartyRole_293.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_293);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_556;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_556("STRING_628664785");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_556);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_556.insert(UnderlyingInstrumentPartySubID_556.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_556(648216871);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_556);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_556.insert(UnderlyingInstrumentPartySubIDType_556.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_556);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_557;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_557("STRING_1460997637");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_557);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_557.insert(UnderlyingInstrumentPartySubID_557.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_557(1857849960);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_557);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_557.insert(UnderlyingInstrumentPartySubIDType_557.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_557);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_558;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_558("STRING_1346984487");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_558);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_558.insert(UnderlyingInstrumentPartySubID_558.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_558(1033567242);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_558);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_558.insert(UnderlyingInstrumentPartySubIDType_558.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_558);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_294;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_294("STRING_659799628");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_294);
      UndlyInstrumentParties_NoUndlyInstrumentParties_294.insert(UnderlyingInstrumentPartyID_294.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_294('9');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_294);
      UndlyInstrumentParties_NoUndlyInstrumentParties_294.insert(UnderlyingInstrumentPartyIDSource_294.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_294(1611948157);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_294);
      UndlyInstrumentParties_NoUndlyInstrumentParties_294.insert(UnderlyingInstrumentPartyRole_294.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_294);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_559;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_559("STRING_981129168");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_559);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_559.insert(UnderlyingInstrumentPartySubID_559.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_559(45423944);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_559);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_559.insert(UnderlyingInstrumentPartySubIDType_559.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_559);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_560;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_560("STRING_1001622338");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_560);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_560.insert(UnderlyingInstrumentPartySubID_560.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_560(2134849556);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_560);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_560.insert(UnderlyingInstrumentPartySubIDType_560.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_560);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_295;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_295("STRING_1489617771");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_295);
      UndlyInstrumentParties_NoUndlyInstrumentParties_295.insert(UnderlyingInstrumentPartyID_295.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_295('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_295);
      UndlyInstrumentParties_NoUndlyInstrumentParties_295.insert(UnderlyingInstrumentPartyIDSource_295.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_295(1947707136);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_295);
      UndlyInstrumentParties_NoUndlyInstrumentParties_295.insert(UnderlyingInstrumentPartyRole_295.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_295);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_561;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_561("STRING_1038573696");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_561);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_561.insert(UnderlyingInstrumentPartySubID_561.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_561(780183175);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_561);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_561.insert(UnderlyingInstrumentPartySubIDType_561.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_561);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_562;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_562("STRING_2063242906");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_562);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_562.insert(UnderlyingInstrumentPartySubID_562.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_562(2053162331);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_562);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_562.insert(UnderlyingInstrumentPartySubIDType_562.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_562);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_563;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_563("STRING_2083876779");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_563);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_563.insert(UnderlyingInstrumentPartySubID_563.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_563(235998761);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_563);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_563.insert(UnderlyingInstrumentPartySubIDType_563.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_563);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_144;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_144("DATA_1695911073");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_144);
    UnderlyingInstrument_144.insert(EncodedUnderlyingIssuer_144.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_144(318901050);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_144);
    UnderlyingInstrument_144.insert(EncodedUnderlyingIssuerLen_144.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_144("DATA_1725025258");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_144);
    UnderlyingInstrument_144.insert(EncodedUnderlyingSecurityDesc_144.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_144(675722340);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_144);
    UnderlyingInstrument_144.insert(EncodedUnderlyingSecurityDescLen_144.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_144;
    UnderlyingAdjustedQuantity_144.setString("10359416");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_144);
    UnderlyingInstrument_144.insert(UnderlyingAdjustedQuantity_144.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_144;
    UnderlyingAllocationPercent_144.setString("46.350000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_144);
    UnderlyingInstrument_144.insert(UnderlyingAllocationPercent_144.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_144;
    UnderlyingAttachmentPoint_144.setString("24.460000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_144);
    UnderlyingInstrument_144.insert(UnderlyingAttachmentPoint_144.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_144("STRING_1664606421");
    noUnderlyings_0_1.set(UnderlyingCFICode_144);
    UnderlyingInstrument_144.insert(UnderlyingCFICode_144.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_144("STRING_2102891506");
    noUnderlyings_0_1.set(UnderlyingCPProgram_144);
    UnderlyingInstrument_144.insert(UnderlyingCPProgram_144.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_144("STRING_2147180083");
    noUnderlyings_0_1.set(UnderlyingCPRegType_144);
    UnderlyingInstrument_144.insert(UnderlyingCPRegType_144.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_144;
    UnderlyingCapValue_144.setString("13749727");
    noUnderlyings_0_1.set(UnderlyingCapValue_144);
    UnderlyingInstrument_144.insert(UnderlyingCapValue_144.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_144;
    UnderlyingCashAmount_144.setString("13023923");
    noUnderlyings_0_1.set(UnderlyingCashAmount_144);
    UnderlyingInstrument_144.insert(UnderlyingCashAmount_144.getString());
    FIX::UnderlyingCashType UnderlyingCashType_144("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_144);
    UnderlyingInstrument_144.insert(UnderlyingCashType_144.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_144;
    UnderlyingContractMultiplier_144.setString("20347723");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_144);
    UnderlyingInstrument_144.insert(UnderlyingContractMultiplier_144.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_144(83697300);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_144);
    UnderlyingInstrument_144.insert(UnderlyingContractMultiplierUnit_144.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_144("COUNTRY_497728187");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_144);
    UnderlyingInstrument_144.insert(UnderlyingCountryOfIssue_144.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_144("LOCALMKTDATE_1299019862");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_144);
    UnderlyingInstrument_144.insert(UnderlyingCouponPaymentDate_144.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_144;
    UnderlyingCouponRate_144.setString("64.680000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_144);
    UnderlyingInstrument_144.insert(UnderlyingCouponRate_144.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_144("STRING_543152131");
    noUnderlyings_0_1.set(UnderlyingCreditRating_144);
    UnderlyingInstrument_144.insert(UnderlyingCreditRating_144.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_144("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_144);
    UnderlyingInstrument_144.insert(UnderlyingCurrency_144.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_144;
    UnderlyingCurrentValue_144.setString("20327699");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_144);
    UnderlyingInstrument_144.insert(UnderlyingCurrentValue_144.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_144;
    UnderlyingDetachmentPoint_144.setString("78.450000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_144);
    UnderlyingInstrument_144.insert(UnderlyingDetachmentPoint_144.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_144;
    UnderlyingDirtyPrice_144.setString("8524158");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_144);
    UnderlyingInstrument_144.insert(UnderlyingDirtyPrice_144.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_144;
    UnderlyingEndPrice_144.setString("12080289");
    noUnderlyings_0_1.set(UnderlyingEndPrice_144);
    UnderlyingInstrument_144.insert(UnderlyingEndPrice_144.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_144;
    UnderlyingEndValue_144.setString("2682178");
    noUnderlyings_0_1.set(UnderlyingEndValue_144);
    UnderlyingInstrument_144.insert(UnderlyingEndValue_144.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_144(1632599040);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_144);
    UnderlyingInstrument_144.insert(UnderlyingExerciseStyle_144.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_144;
    UnderlyingFXRate_144.setString("11237881");
    noUnderlyings_0_1.set(UnderlyingFXRate_144);
    UnderlyingInstrument_144.insert(UnderlyingFXRate_144.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_144('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_144);
    UnderlyingInstrument_144.insert(UnderlyingFXRateCalc_144.getString());
    FIX::UnderlyingFactor UnderlyingFactor_144;
    UnderlyingFactor_144.setString("15689921");
    noUnderlyings_0_1.set(UnderlyingFactor_144);
    UnderlyingInstrument_144.insert(UnderlyingFactor_144.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_144(1359786947);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_144);
    UnderlyingInstrument_144.insert(UnderlyingFlowScheduleType_144.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_144("STRING_1869807650");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_144);
    UnderlyingInstrument_144.insert(UnderlyingInstrRegistry_144.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_144("LOCALMKTDATE_1887893222");
    noUnderlyings_0_1.set(UnderlyingIssueDate_144);
    UnderlyingInstrument_144.insert(UnderlyingIssueDate_144.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_144("STRING_937328558");
    noUnderlyings_0_1.set(UnderlyingIssuer_144);
    UnderlyingInstrument_144.insert(UnderlyingIssuer_144.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_144("STRING_398046342");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_144);
    UnderlyingInstrument_144.insert(UnderlyingLocaleOfIssue_144.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_144("LOCALMKTDATE_776351210");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_144);
    UnderlyingInstrument_144.insert(UnderlyingMaturityDate_144.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_144("MONTHYEAR_244519545");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_144);
    UnderlyingInstrument_144.insert(UnderlyingMaturityMonthYear_144.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_144("TZTIMEONLY_1084228788");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_144);
    UnderlyingInstrument_144.insert(UnderlyingMaturityTime_144.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_144;
    UnderlyingNotionalPercentageOutstanding_144.setString("39.830000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_144);
    UnderlyingInstrument_144.insert(UnderlyingNotionalPercentageOutstanding_144.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_144('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_144);
    UnderlyingInstrument_144.insert(UnderlyingOptAttribute_144.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_144;
    UnderlyingOriginalNotionalPercentageOutstanding_144.setString("52.240000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_144);
    UnderlyingInstrument_144.insert(UnderlyingOriginalNotionalPercentageOutstanding_144.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_144("STRING_1668446716");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_144);
    UnderlyingInstrument_144.insert(UnderlyingPriceUnitOfMeasure_144.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_144;
    UnderlyingPriceUnitOfMeasureQty_144.setString("15023197");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_144);
    UnderlyingInstrument_144.insert(UnderlyingPriceUnitOfMeasureQty_144.getString());
    FIX::UnderlyingProduct UnderlyingProduct_144(2117188901);
    noUnderlyings_0_1.set(UnderlyingProduct_144);
    UnderlyingInstrument_144.insert(UnderlyingProduct_144.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_144(1555735430);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_144);
    UnderlyingInstrument_144.insert(UnderlyingPutOrCall_144.getString());
    FIX::UnderlyingPx UnderlyingPx_144;
    UnderlyingPx_144.setString("15860170");
    noUnderlyings_0_1.set(UnderlyingPx_144);
    UnderlyingInstrument_144.insert(UnderlyingPx_144.getString());
    FIX::UnderlyingQty UnderlyingQty_144;
    UnderlyingQty_144.setString("4674334");
    noUnderlyings_0_1.set(UnderlyingQty_144);
    UnderlyingInstrument_144.insert(UnderlyingQty_144.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_144("LOCALMKTDATE_707271644");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_144);
    UnderlyingInstrument_144.insert(UnderlyingRedemptionDate_144.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_144("STRING_503359870");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_144);
    UnderlyingInstrument_144.insert(UnderlyingRepoCollateralSecurityType_144.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_144;
    UnderlyingRepurchaseRate_144.setString("55.720000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_144);
    UnderlyingInstrument_144.insert(UnderlyingRepurchaseRate_144.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_144(860430196);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_144);
    UnderlyingInstrument_144.insert(UnderlyingRepurchaseTerm_144.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_144("STRING_1555552246");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_144);
    UnderlyingInstrument_144.insert(UnderlyingRestructuringType_144.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_144("STRING_895871826");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_144);
    UnderlyingInstrument_144.insert(UnderlyingSecurityDesc_144.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_144("EXCHANGE_90074393");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_144);
    UnderlyingInstrument_144.insert(UnderlyingSecurityExchange_144.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_144("STRING_260484463");
    noUnderlyings_0_1.set(UnderlyingSecurityID_144);
    UnderlyingInstrument_144.insert(UnderlyingSecurityID_144.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_144("STRING_2103900755");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_144);
    UnderlyingInstrument_144.insert(UnderlyingSecurityIDSource_144.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_144("STRING_358292287");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_144);
    UnderlyingInstrument_144.insert(UnderlyingSecuritySubType_144.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_144("STRING_1893083503");
    noUnderlyings_0_1.set(UnderlyingSecurityType_144);
    UnderlyingInstrument_144.insert(UnderlyingSecurityType_144.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_144("STRING_1080205293");
    noUnderlyings_0_1.set(UnderlyingSeniority_144);
    UnderlyingInstrument_144.insert(UnderlyingSeniority_144.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_144("STRING_532188864");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_144);
    UnderlyingInstrument_144.insert(UnderlyingSettlMethod_144.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_144(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_144);
    UnderlyingInstrument_144.insert(UnderlyingSettlementType_144.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_144;
    UnderlyingStartValue_144.setString("2925085");
    noUnderlyings_0_1.set(UnderlyingStartValue_144);
    UnderlyingInstrument_144.insert(UnderlyingStartValue_144.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_144("STRING_254512866");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_144);
    UnderlyingInstrument_144.insert(UnderlyingStateOrProvinceOfIssue_144.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_144("CHF");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_144);
    UnderlyingInstrument_144.insert(UnderlyingStrikeCurrency_144.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_144;
    UnderlyingStrikePrice_144.setString("6525592");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_144);
    UnderlyingInstrument_144.insert(UnderlyingStrikePrice_144.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_144("STRING_1831352810");
    noUnderlyings_0_1.set(UnderlyingSymbol_144);
    UnderlyingInstrument_144.insert(UnderlyingSymbol_144.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_144("STRING_1474356696");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_144);
    UnderlyingInstrument_144.insert(UnderlyingSymbolSfx_144.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_144("STRING_1736787997");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_144);
    UnderlyingInstrument_144.insert(UnderlyingTimeUnit_144.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_144("STRING_2124826793");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_144);
    UnderlyingInstrument_144.insert(UnderlyingUnitOfMeasure_144.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_144;
    UnderlyingUnitOfMeasureQty_144.setString("16742840");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_144);
    UnderlyingInstrument_144.insert(UnderlyingUnitOfMeasureQty_144.getString());
    all_values.push_back(UnderlyingInstrument_144);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_293;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_293("STRING_1645789862");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_293);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_293.insert(UnderlyingSecurityAltID_293.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_293("STRING_1029120201");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_293);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_293.insert(UnderlyingSecurityAltIDSource_293.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_293);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_294;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_294("STRING_642934826");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_294);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_294.insert(UnderlyingSecurityAltID_294.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_294("STRING_1054041644");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_294);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_294.insert(UnderlyingSecurityAltIDSource_294.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_294);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_295;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_295("STRING_467653602");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_295);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_295.insert(UnderlyingSecurityAltID_295.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_295("STRING_1110368267");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_295);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_295.insert(UnderlyingSecurityAltIDSource_295.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_295);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_271;
      FIX::UnderlyingStipType UnderlyingStipType_271("STRING_971013472");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_271);
      UnderlyingStipulations_NoUnderlyingStips_271.insert(UnderlyingStipType_271.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_271("STRING_2120953839");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_271);
      UnderlyingStipulations_NoUnderlyingStips_271.insert(UnderlyingStipValue_271.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_271);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_272;
      FIX::UnderlyingStipType UnderlyingStipType_272("STRING_474259837");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_272);
      UnderlyingStipulations_NoUnderlyingStips_272.insert(UnderlyingStipType_272.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_272("STRING_379082071");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_272);
      UnderlyingStipulations_NoUnderlyingStips_272.insert(UnderlyingStipValue_272.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_272);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_273;
      FIX::UnderlyingStipType UnderlyingStipType_273("STRING_869342017");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_273);
      UnderlyingStipulations_NoUnderlyingStips_273.insert(UnderlyingStipType_273.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_273("STRING_564334231");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_273);
      UnderlyingStipulations_NoUnderlyingStips_273.insert(UnderlyingStipValue_273.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_273);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_296;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_296("STRING_825759124");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_296);
      UndlyInstrumentParties_NoUndlyInstrumentParties_296.insert(UnderlyingInstrumentPartyID_296.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_296('9');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_296);
      UndlyInstrumentParties_NoUndlyInstrumentParties_296.insert(UnderlyingInstrumentPartyIDSource_296.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_296(385166389);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_296);
      UndlyInstrumentParties_NoUndlyInstrumentParties_296.insert(UnderlyingInstrumentPartyRole_296.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_296);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_564;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_564("STRING_1454815382");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_564);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_564.insert(UnderlyingInstrumentPartySubID_564.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_564(1699758415);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_564);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_564.insert(UnderlyingInstrumentPartySubIDType_564.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_564);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_565;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_565("STRING_50989363");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_565);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_565.insert(UnderlyingInstrumentPartySubID_565.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_565(1709328248);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_565);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_565.insert(UnderlyingInstrumentPartySubIDType_565.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_565);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_566;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_566("STRING_607276368");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_566);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_566.insert(UnderlyingInstrumentPartySubID_566.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_566(1280826514);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_566);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_566.insert(UnderlyingInstrumentPartySubIDType_566.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_566);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_297;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_297("STRING_214403808");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_297);
      UndlyInstrumentParties_NoUndlyInstrumentParties_297.insert(UnderlyingInstrumentPartyID_297.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_297('2');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_297);
      UndlyInstrumentParties_NoUndlyInstrumentParties_297.insert(UnderlyingInstrumentPartyIDSource_297.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_297(607699562);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_297);
      UndlyInstrumentParties_NoUndlyInstrumentParties_297.insert(UnderlyingInstrumentPartyRole_297.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_297);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_567;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_567("STRING_268488676");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_567);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_567.insert(UnderlyingInstrumentPartySubID_567.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_567(134500013);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_567);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_567.insert(UnderlyingInstrumentPartySubIDType_567.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_567);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_568;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_568("STRING_476937730");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_568);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_568.insert(UnderlyingInstrumentPartySubID_568.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_568(1914278538);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_568);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_568.insert(UnderlyingInstrumentPartySubIDType_568.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_568);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_298;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_298("STRING_1163620214");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_298);
      UndlyInstrumentParties_NoUndlyInstrumentParties_298.insert(UnderlyingInstrumentPartyID_298.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_298('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_298);
      UndlyInstrumentParties_NoUndlyInstrumentParties_298.insert(UnderlyingInstrumentPartyIDSource_298.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_298(820836534);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_298);
      UndlyInstrumentParties_NoUndlyInstrumentParties_298.insert(UnderlyingInstrumentPartyRole_298.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_298);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_569;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_569("STRING_82757176");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_569);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_569.insert(UnderlyingInstrumentPartySubID_569.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_569(434666175);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_569);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_569.insert(UnderlyingInstrumentPartySubIDType_569.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_569);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
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
