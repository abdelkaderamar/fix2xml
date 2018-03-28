#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/TradeCaptureReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradeCaptureReport, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::TradeCaptureReport msg;

  list<multiset<string>> all_values;
  multiset<string> TradeCaptureReport_0;
  FIX::AsOfIndicator AsOfIndicator_0('1');
  msg.set(AsOfIndicator_0);
  TradeCaptureReport_0.insert(AsOfIndicator_0.getString());
  FIX::AvgPx AvgPx_9;
  AvgPx_9.setString("15821171");
  msg.set(AvgPx_9);
  TradeCaptureReport_0.insert(AvgPx_9.getString());
  FIX::AvgPxIndicator AvgPxIndicator_4(2);
  msg.set(AvgPxIndicator_4);
  TradeCaptureReport_0.insert(AvgPxIndicator_4.getString());
  FIX::CalculatedCcyLastQty CalculatedCcyLastQty_1;
  CalculatedCcyLastQty_1.setString("9526395");
  msg.set(CalculatedCcyLastQty_1);
  TradeCaptureReport_0.insert(CalculatedCcyLastQty_1.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_25("LOCALMKTDATE_1751176127");
  msg.set(ClearingBusinessDate_25);
  TradeCaptureReport_0.insert(ClearingBusinessDate_25.getString());
  FIX::CopyMsgIndicator CopyMsgIndicator_2(false);
  msg.set(CopyMsgIndicator_2);
  TradeCaptureReport_0.insert(CopyMsgIndicator_2.getString());
  FIX::Currency Currency_68("GBP");
  msg.set(Currency_68);
  TradeCaptureReport_0.insert(Currency_68.getString());
  FIX::CurrencyRatio CurrencyRatio_0;
  CurrencyRatio_0.setString("8481684");
  msg.set(CurrencyRatio_0);
  TradeCaptureReport_0.insert(CurrencyRatio_0.getString());
  FIX::DividendYield DividendYield_1;
  DividendYield_1.setString("79.290000");
  msg.set(DividendYield_1);
  TradeCaptureReport_0.insert(DividendYield_1.getString());
  FIX::ExecID ExecID_23("STRING_2007791484");
  msg.set(ExecID_23);
  TradeCaptureReport_0.insert(ExecID_23.getString());
  FIX::ExecRestatementReason ExecRestatementReason_1(8);
  msg.set(ExecRestatementReason_1);
  TradeCaptureReport_0.insert(ExecRestatementReason_1.getString());
  FIX::ExecType ExecType_1('B');
  msg.set(ExecType_1);
  TradeCaptureReport_0.insert(ExecType_1.getString());
  FIX::FeeMultiplier FeeMultiplier_0;
  FeeMultiplier_0.setString("5681288");
  msg.set(FeeMultiplier_0);
  TradeCaptureReport_0.insert(FeeMultiplier_0.getString());
  FIX::FirmTradeID FirmTradeID_7("STRING_1430117215");
  msg.set(FirmTradeID_7);
  TradeCaptureReport_0.insert(FirmTradeID_7.getString());
  FIX::GrossTradeAmt GrossTradeAmt_5;
  GrossTradeAmt_5.setString("13784407");
  msg.set(GrossTradeAmt_5);
  TradeCaptureReport_0.insert(GrossTradeAmt_5.getString());
  FIX::LastForwardPoints LastForwardPoints_1;
  LastForwardPoints_1.setString("7507860");
  msg.set(LastForwardPoints_1);
  TradeCaptureReport_0.insert(LastForwardPoints_1.getString());
  FIX::LastMkt LastMkt_6("EXCHANGE_839762398");
  msg.set(LastMkt_6);
  TradeCaptureReport_0.insert(LastMkt_6.getString());
  FIX::LastParPx LastParPx_9;
  LastParPx_9.setString("12495670");
  msg.set(LastParPx_9);
  TradeCaptureReport_0.insert(LastParPx_9.getString());
  FIX::LastPx LastPx_16;
  LastPx_16.setString("9121830");
  msg.set(LastPx_16);
  TradeCaptureReport_0.insert(LastPx_16.getString());
  FIX::LastQty LastQty_10;
  LastQty_10.setString("15992224");
  msg.set(LastQty_10);
  TradeCaptureReport_0.insert(LastQty_10.getString());
  FIX::LastRptRequested LastRptRequested_3(false);
  msg.set(LastRptRequested_3);
  TradeCaptureReport_0.insert(LastRptRequested_3.getString());
  FIX::LastSpotRate LastSpotRate_1;
  LastSpotRate_1.setString("246715");
  msg.set(LastSpotRate_1);
  TradeCaptureReport_0.insert(LastSpotRate_1.getString());
  FIX::LastSwapPoints LastSwapPoints_1;
  LastSwapPoints_1.setString("19609123");
  msg.set(LastSwapPoints_1);
  TradeCaptureReport_0.insert(LastSwapPoints_1.getString());
  FIX::LastUpdateTime LastUpdateTime_6(FIX::UTCTIMESTAMP(3, 50, 21, 12, 10, 2009));
  msg.set(LastUpdateTime_6);
  TradeCaptureReport_0.insert(LastUpdateTime_6.getString());
  FIX::MarketID MarketID_24("EXCHANGE_681354146");
  msg.set(MarketID_24);
  TradeCaptureReport_0.insert(MarketID_24.getString());
  FIX::MarketSegmentID MarketSegmentID_24("STRING_1430572363");
  msg.set(MarketSegmentID_24);
  TradeCaptureReport_0.insert(MarketSegmentID_24.getString());
  FIX::MatchStatus MatchStatus_11('0');
  msg.set(MatchStatus_11);
  TradeCaptureReport_0.insert(MatchStatus_11.getString());
  FIX::MatchType MatchType_44("STRING_AQ");
  msg.set(MatchType_44);
  TradeCaptureReport_0.insert(MatchType_44.getString());
  FIX::MessageEventSource MessageEventSource_4("STRING_1034264842");
  msg.set(MessageEventSource_4);
  TradeCaptureReport_0.insert(MessageEventSource_4.getString());
  FIX::MultiLegReportingType MultiLegReportingType_4('1');
  msg.set(MultiLegReportingType_4);
  TradeCaptureReport_0.insert(MultiLegReportingType_4.getString());
  FIX::OrigSecondaryTradeID OrigSecondaryTradeID_0("STRING_1171700529");
  msg.set(OrigSecondaryTradeID_0);
  TradeCaptureReport_0.insert(OrigSecondaryTradeID_0.getString());
  FIX::OrigTradeDate OrigTradeDate_0("LOCALMKTDATE_1114226371");
  msg.set(OrigTradeDate_0);
  TradeCaptureReport_0.insert(OrigTradeDate_0.getString());
  FIX::OrigTradeHandlingInstr OrigTradeHandlingInstr_0('1');
  msg.set(OrigTradeHandlingInstr_0);
  TradeCaptureReport_0.insert(OrigTradeHandlingInstr_0.getString());
  FIX::OrigTradeID OrigTradeID_0("STRING_1448718459");
  msg.set(OrigTradeID_0);
  TradeCaptureReport_0.insert(OrigTradeID_0.getString());
  FIX::PreviouslyReported PreviouslyReported_3(false);
  msg.set(PreviouslyReported_3);
  TradeCaptureReport_0.insert(PreviouslyReported_3.getString());
  FIX::PriceType PriceType_45(7);
  msg.set(PriceType_45);
  TradeCaptureReport_0.insert(PriceType_45.getString());
  FIX::PublishTrdIndicator PublishTrdIndicator_0(true);
  msg.set(PublishTrdIndicator_0);
  TradeCaptureReport_0.insert(PublishTrdIndicator_0.getString());
  FIX::QtyType QtyType_26(2);
  msg.set(QtyType_26);
  TradeCaptureReport_0.insert(QtyType_26.getString());
  FIX::RejectText RejectText_0("STRING_23080241");
  msg.set(RejectText_0);
  TradeCaptureReport_0.insert(RejectText_0.getString());
  FIX::ReportedPxDiff ReportedPxDiff_0(true);
  msg.set(ReportedPxDiff_0);
  TradeCaptureReport_0.insert(ReportedPxDiff_0.getString());
  FIX::RiskFreeRate RiskFreeRate_3;
  RiskFreeRate_3.setString("1459654");
  msg.set(RiskFreeRate_3);
  TradeCaptureReport_0.insert(RiskFreeRate_3.getString());
  FIX::RndPx RndPx_3;
  RndPx_3.setString("8628426");
  msg.set(RndPx_3);
  TradeCaptureReport_0.insert(RndPx_3.getString());
  FIX::SecondaryExecID SecondaryExecID_8("STRING_439893775");
  msg.set(SecondaryExecID_8);
  TradeCaptureReport_0.insert(SecondaryExecID_8.getString());
  FIX::SecondaryFirmTradeID SecondaryFirmTradeID_0("STRING_1058148516");
  msg.set(SecondaryFirmTradeID_0);
  TradeCaptureReport_0.insert(SecondaryFirmTradeID_0.getString());
  FIX::SecondaryTradeID SecondaryTradeID_0("STRING_314581475");
  msg.set(SecondaryTradeID_0);
  TradeCaptureReport_0.insert(SecondaryTradeID_0.getString());
  FIX::SecondaryTradeReportID SecondaryTradeReportID_10("STRING_507774290");
  msg.set(SecondaryTradeReportID_10);
  TradeCaptureReport_0.insert(SecondaryTradeReportID_10.getString());
  FIX::SecondaryTradeReportRefID SecondaryTradeReportRefID_0("STRING_1082820082");
  msg.set(SecondaryTradeReportRefID_0);
  TradeCaptureReport_0.insert(SecondaryTradeReportRefID_0.getString());
  FIX::SecondaryTrdType SecondaryTrdType_0(128010159);
  msg.set(SecondaryTrdType_0);
  TradeCaptureReport_0.insert(SecondaryTrdType_0.getString());
  FIX::SettlCurrency SettlCurrency_36("CAN");
  msg.set(SettlCurrency_36);
  TradeCaptureReport_0.insert(SettlCurrency_36.getString());
  FIX::SettlDate SettlDate_47("LOCALMKTDATE_1153844670");
  msg.set(SettlDate_47);
  TradeCaptureReport_0.insert(SettlDate_47.getString());
  FIX::SettlSessID SettlSessID_12("STRING_ITD");
  msg.set(SettlSessID_12);
  TradeCaptureReport_0.insert(SettlSessID_12.getString());
  FIX::SettlSessSubID SettlSessSubID_11("STRING_1477503825");
  msg.set(SettlSessSubID_11);
  TradeCaptureReport_0.insert(SettlSessSubID_11.getString());
  FIX::SettlType SettlType_36("STRING_7");
  msg.set(SettlType_36);
  TradeCaptureReport_0.insert(SettlType_36.getString());
  FIX::ShortSaleReason ShortSaleReason_0(3);
  msg.set(ShortSaleReason_0);
  TradeCaptureReport_0.insert(ShortSaleReason_0.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_13('0');
  msg.set(SubscriptionRequestType_13);
  TradeCaptureReport_0.insert(SubscriptionRequestType_13.getString());
  FIX::TZTransactTime TZTransactTime_0("TZTIMESTAMP_285388567");
  msg.set(TZTransactTime_0);
  TradeCaptureReport_0.insert(TZTransactTime_0.getString());
  FIX::TierCode TierCode_0("STRING_1684885171");
  msg.set(TierCode_0);
  TradeCaptureReport_0.insert(TierCode_0.getString());
  FIX::TotNumTradeReports TotNumTradeReports_0(1645368053);
  msg.set(TotNumTradeReports_0);
  TradeCaptureReport_0.insert(TotNumTradeReports_0.getString());
  FIX::TradeDate TradeDate_27("LOCALMKTDATE_1319653409");
  msg.set(TradeDate_27);
  TradeCaptureReport_0.insert(TradeDate_27.getString());
  FIX::TradeHandlingInstr TradeHandlingInstr_0('3');
  msg.set(TradeHandlingInstr_0);
  TradeCaptureReport_0.insert(TradeHandlingInstr_0.getString());
  FIX::TradeID TradeID_9("STRING_669584934");
  msg.set(TradeID_9);
  TradeCaptureReport_0.insert(TradeID_9.getString());
  FIX::TradeLegRefID TradeLegRefID_0("STRING_286396132");
  msg.set(TradeLegRefID_0);
  TradeCaptureReport_0.insert(TradeLegRefID_0.getString());
  FIX::TradeLinkID TradeLinkID_0("STRING_1840790083");
  msg.set(TradeLinkID_0);
  TradeCaptureReport_0.insert(TradeLinkID_0.getString());
  FIX::TradePublishIndicator TradePublishIndicator_0(0);
  msg.set(TradePublishIndicator_0);
  TradeCaptureReport_0.insert(TradePublishIndicator_0.getString());
  FIX::TradeReportID TradeReportID_10("STRING_1260930339");
  msg.set(TradeReportID_10);
  TradeCaptureReport_0.insert(TradeReportID_10.getString());
  FIX::TradeReportRefID TradeReportRefID_0("STRING_433753109");
  msg.set(TradeReportRefID_0);
  TradeCaptureReport_0.insert(TradeReportRefID_0.getString());
  FIX::TradeReportTransType TradeReportTransType_0(3);
  msg.set(TradeReportTransType_0);
  TradeCaptureReport_0.insert(TradeReportTransType_0.getString());
  FIX::TradeReportType TradeReportType_0(3);
  msg.set(TradeReportType_0);
  TradeCaptureReport_0.insert(TradeReportType_0.getString());
  FIX::TradeRequestID TradeRequestID_0("STRING_456833350");
  msg.set(TradeRequestID_0);
  TradeCaptureReport_0.insert(TradeRequestID_0.getString());
  FIX::TransactTime TransactTime_65(FIX::UTCTIMESTAMP(3, 50, 39, 8, 2, 2003));
  msg.set(TransactTime_65);
  TradeCaptureReport_0.insert(TransactTime_65.getString());
  FIX::TransferReason TransferReason_0("STRING_795560178");
  msg.set(TransferReason_0);
  TradeCaptureReport_0.insert(TransferReason_0.getString());
  FIX::TrdMatchID TrdMatchID_1("STRING_1762267625");
  msg.set(TrdMatchID_1);
  TradeCaptureReport_0.insert(TrdMatchID_1.getString());
  FIX::TrdRptStatus TrdRptStatus_0(0);
  msg.set(TrdRptStatus_0);
  TradeCaptureReport_0.insert(TrdRptStatus_0.getString());
  FIX::TrdSubType TrdSubType_3(1);
  msg.set(TrdSubType_3);
  TradeCaptureReport_0.insert(TrdSubType_3.getString());
  FIX::TrdType TrdType_8(17);
  msg.set(TrdType_8);
  TradeCaptureReport_0.insert(TrdType_8.getString());
  FIX::UnderlyingSettlementDate UnderlyingSettlementDate_2("LOCALMKTDATE_2137117872");
  msg.set(UnderlyingSettlementDate_2);
  TradeCaptureReport_0.insert(UnderlyingSettlementDate_2.getString());
  FIX::UnderlyingTradingSessionID UnderlyingTradingSessionID_0("STRING_144941160");
  msg.set(UnderlyingTradingSessionID_0);
  TradeCaptureReport_0.insert(UnderlyingTradingSessionID_0.getString());
  FIX::UnderlyingTradingSessionSubID UnderlyingTradingSessionSubID_0("STRING_1770928498");
  msg.set(UnderlyingTradingSessionSubID_0);
  TradeCaptureReport_0.insert(UnderlyingTradingSessionSubID_0.getString());
  FIX::UnsolicitedIndicator UnsolicitedIndicator_3(false);
  msg.set(UnsolicitedIndicator_3);
  TradeCaptureReport_0.insert(UnsolicitedIndicator_3.getString());
  FIX::VenueType VenueType_0('P');
  msg.set(VenueType_0);
  TradeCaptureReport_0.insert(VenueType_0.getString());
  FIX::Volatility Volatility_1;
  Volatility_1.setString("20563170");
  msg.set(Volatility_1);
  TradeCaptureReport_0.insert(Volatility_1.getString());
  all_values.push_back(TradeCaptureReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_19;
  FIX::ApplID ApplID_19("STRING_1584701917");
  msg.set(ApplID_19);
  ApplicationSequenceControl_19.insert(ApplID_19.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_19(1801683537);
  msg.set(ApplLastSeqNum_19);
  ApplicationSequenceControl_19.insert(ApplLastSeqNum_19.getString());
  FIX::ApplResendFlag ApplResendFlag_19(false);
  msg.set(ApplResendFlag_19);
  ApplicationSequenceControl_19.insert(ApplResendFlag_19.getString());
  FIX::ApplSeqNum ApplSeqNum_19(1849713514);
  msg.set(ApplSeqNum_19);
  ApplicationSequenceControl_19.insert(ApplSeqNum_19.getString());
  all_values.push_back(ApplicationSequenceControl_19);

  // FinancingDetails
  multiset<string> FinancingDetails_27;
  FIX::AgreementCurrency AgreementCurrency_27("EUR");
  msg.set(AgreementCurrency_27);
  FinancingDetails_27.insert(AgreementCurrency_27.getString());
  FIX::AgreementDate AgreementDate_27("LOCALMKTDATE_1543019949");
  msg.set(AgreementDate_27);
  FinancingDetails_27.insert(AgreementDate_27.getString());
  FIX::AgreementDesc AgreementDesc_27("STRING_294604569");
  msg.set(AgreementDesc_27);
  FinancingDetails_27.insert(AgreementDesc_27.getString());
  FIX::AgreementID AgreementID_27("STRING_628329651");
  msg.set(AgreementID_27);
  FinancingDetails_27.insert(AgreementID_27.getString());
  FIX::DeliveryType DeliveryType_27(2);
  msg.set(DeliveryType_27);
  FinancingDetails_27.insert(DeliveryType_27.getString());
  FIX::EndDate EndDate_27("LOCALMKTDATE_224793934");
  msg.set(EndDate_27);
  FinancingDetails_27.insert(EndDate_27.getString());
  FIX::MarginRatio MarginRatio_27;
  MarginRatio_27.setString("94.140000");
  msg.set(MarginRatio_27);
  FinancingDetails_27.insert(MarginRatio_27.getString());
  FIX::StartDate StartDate_27("LOCALMKTDATE_286122760");
  msg.set(StartDate_27);
  FinancingDetails_27.insert(StartDate_27.getString());
  FIX::TerminationType TerminationType_27(3);
  msg.set(TerminationType_27);
  FinancingDetails_27.insert(TerminationType_27.getString());
  all_values.push_back(FinancingDetails_27);

  // Instrument
  multiset<string> Instrument_89;
  FIX::AttachmentPoint AttachmentPoint_89;
  AttachmentPoint_89.setString("46.410000");
  msg.set(AttachmentPoint_89);
  Instrument_89.insert(AttachmentPoint_89.getString());
  FIX::CFICode CFICode_94("STRING_1605798750");
  msg.set(CFICode_94);
  Instrument_89.insert(CFICode_94.getString());
  FIX::CPProgram CPProgram_89(2);
  msg.set(CPProgram_89);
  Instrument_89.insert(CPProgram_89.getString());
  FIX::CPRegType CPRegType_89("STRING_1799254737");
  msg.set(CPRegType_89);
  Instrument_89.insert(CPRegType_89.getString());
  FIX::CapPrice CapPrice_89;
  CapPrice_89.setString("10925725");
  msg.set(CapPrice_89);
  Instrument_89.insert(CapPrice_89.getString());
  FIX::ContractMultiplier ContractMultiplier_89;
  ContractMultiplier_89.setString("11213878");
  msg.set(ContractMultiplier_89);
  Instrument_89.insert(ContractMultiplier_89.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_89(1);
  msg.set(ContractMultiplierUnit_89);
  Instrument_89.insert(ContractMultiplierUnit_89.getString());
  FIX::ContractSettlMonth ContractSettlMonth_89("MONTHYEAR_707356545");
  msg.set(ContractSettlMonth_89);
  Instrument_89.insert(ContractSettlMonth_89.getString());
  FIX::CountryOfIssue CountryOfIssue_89("COUNTRY_1394836486");
  msg.set(CountryOfIssue_89);
  Instrument_89.insert(CountryOfIssue_89.getString());
  FIX::CouponPaymentDate CouponPaymentDate_89("LOCALMKTDATE_1262252250");
  msg.set(CouponPaymentDate_89);
  Instrument_89.insert(CouponPaymentDate_89.getString());
  FIX::CouponRate CouponRate_89;
  CouponRate_89.setString("51.920000");
  msg.set(CouponRate_89);
  Instrument_89.insert(CouponRate_89.getString());
  FIX::CreditRating CreditRating_89("STRING_1384470710");
  msg.set(CreditRating_89);
  Instrument_89.insert(CreditRating_89.getString());
  FIX::DatedDate DatedDate_89("LOCALMKTDATE_1407193411");
  msg.set(DatedDate_89);
  Instrument_89.insert(DatedDate_89.getString());
  FIX::DetachmentPoint DetachmentPoint_89;
  DetachmentPoint_89.setString("0.420000");
  msg.set(DetachmentPoint_89);
  Instrument_89.insert(DetachmentPoint_89.getString());
  FIX::EncodedIssuer EncodedIssuer_89("DATA_1284287456");
  msg.set(EncodedIssuer_89);
  Instrument_89.insert(EncodedIssuer_89.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_89(1563508895);
  msg.set(EncodedIssuerLen_89);
  Instrument_89.insert(EncodedIssuerLen_89.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_89("DATA_1008263460");
  msg.set(EncodedSecurityDesc_89);
  Instrument_89.insert(EncodedSecurityDesc_89.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_89(721505725);
  msg.set(EncodedSecurityDescLen_89);
  Instrument_89.insert(EncodedSecurityDescLen_89.getString());
  FIX::ExerciseStyle ExerciseStyle_89(0);
  msg.set(ExerciseStyle_89);
  Instrument_89.insert(ExerciseStyle_89.getString());
  FIX::Factor Factor_89;
  Factor_89.setString("892666");
  msg.set(Factor_89);
  Instrument_89.insert(Factor_89.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_89(false);
  msg.set(FlexProductEligibilityIndicator_89);
  Instrument_89.insert(FlexProductEligibilityIndicator_89.getString());
  FIX::FlexibleIndicator FlexibleIndicator_89(false);
  msg.set(FlexibleIndicator_89);
  Instrument_89.insert(FlexibleIndicator_89.getString());
  FIX::FloorPrice FloorPrice_89;
  FloorPrice_89.setString("16041495");
  msg.set(FloorPrice_89);
  Instrument_89.insert(FloorPrice_89.getString());
  FIX::FlowScheduleType FlowScheduleType_89(0);
  msg.set(FlowScheduleType_89);
  Instrument_89.insert(FlowScheduleType_89.getString());
  FIX::InstrRegistry InstrRegistry_89("STRING_1836098176");
  msg.set(InstrRegistry_89);
  Instrument_89.insert(InstrRegistry_89.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_89('8');
  msg.set(InstrmtAssignmentMethod_89);
  Instrument_89.insert(InstrmtAssignmentMethod_89.getString());
  FIX::InterestAccrualDate InterestAccrualDate_89("LOCALMKTDATE_1796044950");
  msg.set(InterestAccrualDate_89);
  Instrument_89.insert(InterestAccrualDate_89.getString());
  FIX::IssueDate IssueDate_89("LOCALMKTDATE_2060892111");
  msg.set(IssueDate_89);
  Instrument_89.insert(IssueDate_89.getString());
  FIX::Issuer Issuer_89("STRING_1369435015");
  msg.set(Issuer_89);
  Instrument_89.insert(Issuer_89.getString());
  FIX::ListMethod ListMethod_89(0);
  msg.set(ListMethod_89);
  Instrument_89.insert(ListMethod_89.getString());
  FIX::LocaleOfIssue LocaleOfIssue_89("STRING_1406202181");
  msg.set(LocaleOfIssue_89);
  Instrument_89.insert(LocaleOfIssue_89.getString());
  FIX::MaturityDate MaturityDate_89("LOCALMKTDATE_1308466009");
  msg.set(MaturityDate_89);
  Instrument_89.insert(MaturityDate_89.getString());
  FIX::MaturityMonthYear MaturityMonthYear_89("MONTHYEAR_1540482813");
  msg.set(MaturityMonthYear_89);
  Instrument_89.insert(MaturityMonthYear_89.getString());
  FIX::MaturityTime MaturityTime_89("TZTIMEONLY_311922162");
  msg.set(MaturityTime_89);
  Instrument_89.insert(MaturityTime_89.getString());
  FIX::MinPriceIncrement MinPriceIncrement_89;
  MinPriceIncrement_89.setString("9602370");
  msg.set(MinPriceIncrement_89);
  Instrument_89.insert(MinPriceIncrement_89.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_89;
  MinPriceIncrementAmount_89.setString("4855717");
  msg.set(MinPriceIncrementAmount_89);
  Instrument_89.insert(MinPriceIncrementAmount_89.getString());
  FIX::NTPositionLimit NTPositionLimit_89(1433309992);
  msg.set(NTPositionLimit_89);
  Instrument_89.insert(NTPositionLimit_89.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_89;
  NotionalPercentageOutstanding_89.setString("83.660000");
  msg.set(NotionalPercentageOutstanding_89);
  Instrument_89.insert(NotionalPercentageOutstanding_89.getString());
  FIX::OptAttribute OptAttribute_89('1');
  msg.set(OptAttribute_89);
  Instrument_89.insert(OptAttribute_89.getString());
  FIX::OptPayoutAmount OptPayoutAmount_89;
  OptPayoutAmount_89.setString("6806628");
  msg.set(OptPayoutAmount_89);
  Instrument_89.insert(OptPayoutAmount_89.getString());
  FIX::OptPayoutType OptPayoutType_89(3);
  msg.set(OptPayoutType_89);
  Instrument_89.insert(OptPayoutType_89.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_89;
  OriginalNotionalPercentageOutstanding_89.setString("98.220000");
  msg.set(OriginalNotionalPercentageOutstanding_89);
  Instrument_89.insert(OriginalNotionalPercentageOutstanding_89.getString());
  FIX::Pool Pool_89("STRING_2065133541");
  msg.set(Pool_89);
  Instrument_89.insert(Pool_89.getString());
  FIX::PositionLimit PositionLimit_89(1929530379);
  msg.set(PositionLimit_89);
  Instrument_89.insert(PositionLimit_89.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_89("STRING_STD");
  msg.set(PriceQuoteMethod_89);
  Instrument_89.insert(PriceQuoteMethod_89.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_89("STRING_1201937349");
  msg.set(PriceUnitOfMeasure_89);
  Instrument_89.insert(PriceUnitOfMeasure_89.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_89;
  PriceUnitOfMeasureQty_89.setString("13455556");
  msg.set(PriceUnitOfMeasureQty_89);
  Instrument_89.insert(PriceUnitOfMeasureQty_89.getString());
  FIX::Product Product_97(12);
  msg.set(Product_97);
  Instrument_89.insert(Product_97.getString());
  FIX::ProductComplex ProductComplex_89("STRING_1923443074");
  msg.set(ProductComplex_89);
  Instrument_89.insert(ProductComplex_89.getString());
  FIX::PutOrCall PutOrCall_89(0);
  msg.set(PutOrCall_89);
  Instrument_89.insert(PutOrCall_89.getString());
  FIX::RedemptionDate RedemptionDate_89("LOCALMKTDATE_570906315");
  msg.set(RedemptionDate_89);
  Instrument_89.insert(RedemptionDate_89.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_89("STRING_199695017");
  msg.set(RepoCollateralSecurityType_89);
  Instrument_89.insert(RepoCollateralSecurityType_89.getString());
  FIX::RepurchaseRate RepurchaseRate_89;
  RepurchaseRate_89.setString("43.700000");
  msg.set(RepurchaseRate_89);
  Instrument_89.insert(RepurchaseRate_89.getString());
  FIX::RepurchaseTerm RepurchaseTerm_89(27572266);
  msg.set(RepurchaseTerm_89);
  Instrument_89.insert(RepurchaseTerm_89.getString());
  FIX::RestructuringType RestructuringType_89("STRING_MR");
  msg.set(RestructuringType_89);
  Instrument_89.insert(RestructuringType_89.getString());
  FIX::SecurityDesc SecurityDesc_89("STRING_1645888898");
  msg.set(SecurityDesc_89);
  Instrument_89.insert(SecurityDesc_89.getString());
  FIX::SecurityExchange SecurityExchange_89("EXCHANGE_112567867");
  msg.set(SecurityExchange_89);
  Instrument_89.insert(SecurityExchange_89.getString());
  FIX::SecurityGroup SecurityGroup_89("STRING_1815011859");
  msg.set(SecurityGroup_89);
  Instrument_89.insert(SecurityGroup_89.getString());
  FIX::SecurityID SecurityID_89("STRING_1559297361");
  msg.set(SecurityID_89);
  Instrument_89.insert(SecurityID_89.getString());
  FIX::SecurityIDSource SecurityIDSource_89("STRING_A");
  msg.set(SecurityIDSource_89);
  Instrument_89.insert(SecurityIDSource_89.getString());
  FIX::SecurityStatus SecurityStatus_90("STRING_1");
  msg.set(SecurityStatus_90);
  Instrument_89.insert(SecurityStatus_90.getString());
  FIX::SecuritySubType SecuritySubType_93("STRING_818015894");
  msg.set(SecuritySubType_93);
  Instrument_89.insert(SecuritySubType_93.getString());
  FIX::SecurityType SecurityType_97("STRING_BA");
  msg.set(SecurityType_97);
  Instrument_89.insert(SecurityType_97.getString());
  FIX::Seniority Seniority_89("STRING_SR");
  msg.set(Seniority_89);
  Instrument_89.insert(Seniority_89.getString());
  FIX::SettlMethod SettlMethod_89('C');
  msg.set(SettlMethod_89);
  Instrument_89.insert(SettlMethod_89.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_89("STRING_1603222342");
  msg.set(SettleOnOpenFlag_89);
  Instrument_89.insert(SettleOnOpenFlag_89.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_89("STRING_1628266820");
  msg.set(StateOrProvinceOfIssue_89);
  Instrument_89.insert(StateOrProvinceOfIssue_89.getString());
  FIX::StrikeCurrency StrikeCurrency_89("USD");
  msg.set(StrikeCurrency_89);
  Instrument_89.insert(StrikeCurrency_89.getString());
  FIX::StrikeMultiplier StrikeMultiplier_89;
  StrikeMultiplier_89.setString("6737114");
  msg.set(StrikeMultiplier_89);
  Instrument_89.insert(StrikeMultiplier_89.getString());
  FIX::StrikePrice StrikePrice_89;
  StrikePrice_89.setString("10964272");
  msg.set(StrikePrice_89);
  Instrument_89.insert(StrikePrice_89.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_89(5);
  msg.set(StrikePriceBoundaryMethod_89);
  Instrument_89.insert(StrikePriceBoundaryMethod_89.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_89;
  StrikePriceBoundaryPrecision_89.setString("12.720000");
  msg.set(StrikePriceBoundaryPrecision_89);
  Instrument_89.insert(StrikePriceBoundaryPrecision_89.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_89(2);
  msg.set(StrikePriceDeterminationMethod_89);
  Instrument_89.insert(StrikePriceDeterminationMethod_89.getString());
  FIX::StrikeValue StrikeValue_89;
  StrikeValue_89.setString("11676907");
  msg.set(StrikeValue_89);
  Instrument_89.insert(StrikeValue_89.getString());
  FIX::Symbol Symbol_89("STRING_668517488");
  msg.set(Symbol_89);
  Instrument_89.insert(Symbol_89.getString());
  FIX::SymbolSfx SymbolSfx_89("STRING_WI");
  msg.set(SymbolSfx_89);
  Instrument_89.insert(SymbolSfx_89.getString());
  FIX::TimeUnit TimeUnit_89("STRING_Yr");
  msg.set(TimeUnit_89);
  Instrument_89.insert(TimeUnit_89.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_89(2);
  msg.set(UnderlyingPriceDeterminationMethod_89);
  Instrument_89.insert(UnderlyingPriceDeterminationMethod_89.getString());
  FIX::UnitOfMeasure UnitOfMeasure_89("STRING_oz_tr");
  msg.set(UnitOfMeasure_89);
  Instrument_89.insert(UnitOfMeasure_89.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_89;
  UnitOfMeasureQty_89.setString("7815435");
  msg.set(UnitOfMeasureQty_89);
  Instrument_89.insert(UnitOfMeasureQty_89.getString());
  FIX::ValuationMethod ValuationMethod_89("STRING_EQTY");
  msg.set(ValuationMethod_89);
  Instrument_89.insert(ValuationMethod_89.getString());
  all_values.push_back(Instrument_89);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_170;
    FIX::ComplexEventCondition ComplexEventCondition_170(2);
    noComplexEvents_0_0.set(ComplexEventCondition_170);
    ComplexEvents_NoComplexEvents_170.insert(ComplexEventCondition_170.getString());
    FIX::ComplexEventPrice ComplexEventPrice_170;
    ComplexEventPrice_170.setString("17486357");
    noComplexEvents_0_0.set(ComplexEventPrice_170);
    ComplexEvents_NoComplexEvents_170.insert(ComplexEventPrice_170.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_170(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_170);
    ComplexEvents_NoComplexEvents_170.insert(ComplexEventPriceBoundaryMethod_170.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_170;
    ComplexEventPriceBoundaryPrecision_170.setString("94.740000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_170);
    ComplexEvents_NoComplexEvents_170.insert(ComplexEventPriceBoundaryPrecision_170.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_170(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_170);
    ComplexEvents_NoComplexEvents_170.insert(ComplexEventPriceTimeType_170.getString());
    FIX::ComplexEventType ComplexEventType_170(4);
    noComplexEvents_0_0.set(ComplexEventType_170);
    ComplexEvents_NoComplexEvents_170.insert(ComplexEventType_170.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_170;
    ComplexOptPayoutAmount_170.setString("16490368");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_170);
    ComplexEvents_NoComplexEvents_170.insert(ComplexOptPayoutAmount_170.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_170);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_341;
      FIX::ComplexEventEndDate ComplexEventEndDate_341(FIX::UTCTIMESTAMP(10, 53, 33, 2, 8, 2011));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_341);
      ComplexEventDates_NoComplexEventDates_341.insert(ComplexEventEndDate_341.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_341(FIX::UTCTIMESTAMP(0, 55, 3, 17, 8, 2011));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_341);
      ComplexEventDates_NoComplexEventDates_341.insert(ComplexEventStartDate_341.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_341);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_695;
        FIX::ComplexEventEndTime ComplexEventEndTime_695(FIX::UTCTIMEONLY(20, 20, 12));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_695);
        ComplexEventTimes_NoComplexEventTimes_695.insert(ComplexEventEndTime_695.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_695(FIX::UTCTIMEONLY(22, 25, 0));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_695);
        ComplexEventTimes_NoComplexEventTimes_695.insert(ComplexEventStartTime_695.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_695);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_696;
        FIX::ComplexEventEndTime ComplexEventEndTime_696(FIX::UTCTIMEONLY(23, 21, 31));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_696);
        ComplexEventTimes_NoComplexEventTimes_696.insert(ComplexEventEndTime_696.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_696(FIX::UTCTIMEONLY(13, 47, 38));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_696);
        ComplexEventTimes_NoComplexEventTimes_696.insert(ComplexEventStartTime_696.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_696);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_697;
        FIX::ComplexEventEndTime ComplexEventEndTime_697(FIX::UTCTIMEONLY(21, 23, 12));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_697);
        ComplexEventTimes_NoComplexEventTimes_697.insert(ComplexEventEndTime_697.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_697(FIX::UTCTIMEONLY(23, 57, 11));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_697);
        ComplexEventTimes_NoComplexEventTimes_697.insert(ComplexEventStartTime_697.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_697);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_171;
    FIX::ComplexEventCondition ComplexEventCondition_171(2);
    noComplexEvents_0_1.set(ComplexEventCondition_171);
    ComplexEvents_NoComplexEvents_171.insert(ComplexEventCondition_171.getString());
    FIX::ComplexEventPrice ComplexEventPrice_171;
    ComplexEventPrice_171.setString("19742648");
    noComplexEvents_0_1.set(ComplexEventPrice_171);
    ComplexEvents_NoComplexEvents_171.insert(ComplexEventPrice_171.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_171(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_171);
    ComplexEvents_NoComplexEvents_171.insert(ComplexEventPriceBoundaryMethod_171.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_171;
    ComplexEventPriceBoundaryPrecision_171.setString("14.120000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_171);
    ComplexEvents_NoComplexEvents_171.insert(ComplexEventPriceBoundaryPrecision_171.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_171(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_171);
    ComplexEvents_NoComplexEvents_171.insert(ComplexEventPriceTimeType_171.getString());
    FIX::ComplexEventType ComplexEventType_171(3);
    noComplexEvents_0_1.set(ComplexEventType_171);
    ComplexEvents_NoComplexEvents_171.insert(ComplexEventType_171.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_171;
    ComplexOptPayoutAmount_171.setString("935991");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_171);
    ComplexEvents_NoComplexEvents_171.insert(ComplexOptPayoutAmount_171.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_171);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_342;
      FIX::ComplexEventEndDate ComplexEventEndDate_342(FIX::UTCTIMESTAMP(2, 3, 5, 12, 9, 2003));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_342);
      ComplexEventDates_NoComplexEventDates_342.insert(ComplexEventEndDate_342.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_342(FIX::UTCTIMESTAMP(19, 10, 49, 9, 12, 2000));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_342);
      ComplexEventDates_NoComplexEventDates_342.insert(ComplexEventStartDate_342.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_342);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_698;
        FIX::ComplexEventEndTime ComplexEventEndTime_698(FIX::UTCTIMEONLY(13, 7, 6));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_698);
        ComplexEventTimes_NoComplexEventTimes_698.insert(ComplexEventEndTime_698.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_698(FIX::UTCTIMEONLY(10, 55, 51));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_698);
        ComplexEventTimes_NoComplexEventTimes_698.insert(ComplexEventStartTime_698.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_698);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_699;
        FIX::ComplexEventEndTime ComplexEventEndTime_699(FIX::UTCTIMEONLY(15, 6, 9));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_699);
        ComplexEventTimes_NoComplexEventTimes_699.insert(ComplexEventEndTime_699.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_699(FIX::UTCTIMEONLY(21, 14, 13));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_699);
        ComplexEventTimes_NoComplexEventTimes_699.insert(ComplexEventStartTime_699.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_699);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_343;
      FIX::ComplexEventEndDate ComplexEventEndDate_343(FIX::UTCTIMESTAMP(16, 16, 54, 0, 1, 2013));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_343);
      ComplexEventDates_NoComplexEventDates_343.insert(ComplexEventEndDate_343.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_343(FIX::UTCTIMESTAMP(11, 54, 19, 20, 10, 2005));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_343);
      ComplexEventDates_NoComplexEventDates_343.insert(ComplexEventStartDate_343.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_343);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_700;
        FIX::ComplexEventEndTime ComplexEventEndTime_700(FIX::UTCTIMEONLY(16, 59, 2));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_700);
        ComplexEventTimes_NoComplexEventTimes_700.insert(ComplexEventEndTime_700.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_700(FIX::UTCTIMEONLY(9, 58, 56));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_700);
        ComplexEventTimes_NoComplexEventTimes_700.insert(ComplexEventStartTime_700.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_700);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::TradeCaptureReport::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_172;
    FIX::ComplexEventCondition ComplexEventCondition_172(1);
    noComplexEvents_0_2.set(ComplexEventCondition_172);
    ComplexEvents_NoComplexEvents_172.insert(ComplexEventCondition_172.getString());
    FIX::ComplexEventPrice ComplexEventPrice_172;
    ComplexEventPrice_172.setString("5443968");
    noComplexEvents_0_2.set(ComplexEventPrice_172);
    ComplexEvents_NoComplexEvents_172.insert(ComplexEventPrice_172.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_172(5);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_172);
    ComplexEvents_NoComplexEvents_172.insert(ComplexEventPriceBoundaryMethod_172.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_172;
    ComplexEventPriceBoundaryPrecision_172.setString("7.350000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_172);
    ComplexEvents_NoComplexEvents_172.insert(ComplexEventPriceBoundaryPrecision_172.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_172(2);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_172);
    ComplexEvents_NoComplexEvents_172.insert(ComplexEventPriceTimeType_172.getString());
    FIX::ComplexEventType ComplexEventType_172(5);
    noComplexEvents_0_2.set(ComplexEventType_172);
    ComplexEvents_NoComplexEvents_172.insert(ComplexEventType_172.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_172;
    ComplexOptPayoutAmount_172.setString("3998814");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_172);
    ComplexEvents_NoComplexEvents_172.insert(ComplexOptPayoutAmount_172.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_172);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_344;
      FIX::ComplexEventEndDate ComplexEventEndDate_344(FIX::UTCTIMESTAMP(14, 13, 54, 10, 6, 2002));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_344);
      ComplexEventDates_NoComplexEventDates_344.insert(ComplexEventEndDate_344.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_344(FIX::UTCTIMESTAMP(4, 32, 3, 5, 6, 2008));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_344);
      ComplexEventDates_NoComplexEventDates_344.insert(ComplexEventStartDate_344.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_344);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_701;
        FIX::ComplexEventEndTime ComplexEventEndTime_701(FIX::UTCTIMEONLY(18, 0, 40));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_701);
        ComplexEventTimes_NoComplexEventTimes_701.insert(ComplexEventEndTime_701.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_701(FIX::UTCTIMEONLY(21, 30, 51));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_701);
        ComplexEventTimes_NoComplexEventTimes_701.insert(ComplexEventStartTime_701.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_701);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_702;
        FIX::ComplexEventEndTime ComplexEventEndTime_702(FIX::UTCTIMEONLY(23, 45, 26));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_702);
        ComplexEventTimes_NoComplexEventTimes_702.insert(ComplexEventEndTime_702.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_702(FIX::UTCTIMEONLY(20, 47, 48));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_702);
        ComplexEventTimes_NoComplexEventTimes_702.insert(ComplexEventStartTime_702.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_702);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_345;
      FIX::ComplexEventEndDate ComplexEventEndDate_345(FIX::UTCTIMESTAMP(17, 1, 51, 12, 11, 2003));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_345);
      ComplexEventDates_NoComplexEventDates_345.insert(ComplexEventEndDate_345.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_345(FIX::UTCTIMESTAMP(19, 45, 28, 12, 4, 2000));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_345);
      ComplexEventDates_NoComplexEventDates_345.insert(ComplexEventStartDate_345.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_345);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_703;
        FIX::ComplexEventEndTime ComplexEventEndTime_703(FIX::UTCTIMEONLY(17, 21, 36));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_703);
        ComplexEventTimes_NoComplexEventTimes_703.insert(ComplexEventEndTime_703.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_703(FIX::UTCTIMEONLY(10, 6, 3));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_703);
        ComplexEventTimes_NoComplexEventTimes_703.insert(ComplexEventStartTime_703.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_703);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_704;
        FIX::ComplexEventEndTime ComplexEventEndTime_704(FIX::UTCTIMEONLY(18, 40, 11));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_704);
        ComplexEventTimes_NoComplexEventTimes_704.insert(ComplexEventEndTime_704.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_704(FIX::UTCTIMEONLY(12, 58, 30));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_704);
        ComplexEventTimes_NoComplexEventTimes_704.insert(ComplexEventStartTime_704.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_704);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_705;
        FIX::ComplexEventEndTime ComplexEventEndTime_705(FIX::UTCTIMEONLY(20, 31, 17));
        noComplexEventTimes_2_1_2_2.set(ComplexEventEndTime_705);
        ComplexEventTimes_NoComplexEventTimes_705.insert(ComplexEventEndTime_705.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_705(FIX::UTCTIMEONLY(10, 30, 44));
        noComplexEventTimes_2_1_2_2.set(ComplexEventStartTime_705);
        ComplexEventTimes_NoComplexEventTimes_705.insert(ComplexEventStartTime_705.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_705);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_346;
      FIX::ComplexEventEndDate ComplexEventEndDate_346(FIX::UTCTIMESTAMP(16, 12, 37, 23, 12, 2004));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_346);
      ComplexEventDates_NoComplexEventDates_346.insert(ComplexEventEndDate_346.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_346(FIX::UTCTIMESTAMP(20, 19, 8, 0, 6, 2008));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_346);
      ComplexEventDates_NoComplexEventDates_346.insert(ComplexEventStartDate_346.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_346);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_706;
        FIX::ComplexEventEndTime ComplexEventEndTime_706(FIX::UTCTIMEONLY(12, 27, 49));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_706);
        ComplexEventTimes_NoComplexEventTimes_706.insert(ComplexEventEndTime_706.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_706(FIX::UTCTIMEONLY(19, 39, 32));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_706);
        ComplexEventTimes_NoComplexEventTimes_706.insert(ComplexEventStartTime_706.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_706);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_707;
        FIX::ComplexEventEndTime ComplexEventEndTime_707(FIX::UTCTIMEONLY(23, 55, 30));
        noComplexEventTimes_2_2_2_1.set(ComplexEventEndTime_707);
        ComplexEventTimes_NoComplexEventTimes_707.insert(ComplexEventEndTime_707.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_707(FIX::UTCTIMEONLY(9, 0, 8));
        noComplexEventTimes_2_2_2_1.set(ComplexEventStartTime_707);
        ComplexEventTimes_NoComplexEventTimes_707.insert(ComplexEventStartTime_707.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_707);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_708;
        FIX::ComplexEventEndTime ComplexEventEndTime_708(FIX::UTCTIMEONLY(4, 20, 31));
        noComplexEventTimes_2_2_2_2.set(ComplexEventEndTime_708);
        ComplexEventTimes_NoComplexEventTimes_708.insert(ComplexEventEndTime_708.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_708(FIX::UTCTIMEONLY(11, 29, 23));
        noComplexEventTimes_2_2_2_2.set(ComplexEventStartTime_708);
        ComplexEventTimes_NoComplexEventTimes_708.insert(ComplexEventStartTime_708.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_708);

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradeCaptureReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_172;
    FIX::EventDate EventDate_172("LOCALMKTDATE_353380960");
    noEvents_0_0.set(EventDate_172);
    EvntGrp_NoEvents_172.insert(EventDate_172.getString());
    FIX::EventPx EventPx_172;
    EventPx_172.setString("18812797");
    noEvents_0_0.set(EventPx_172);
    EvntGrp_NoEvents_172.insert(EventPx_172.getString());
    FIX::EventText EventText_172("STRING_1053136971");
    noEvents_0_0.set(EventText_172);
    EvntGrp_NoEvents_172.insert(EventText_172.getString());
    FIX::EventTime EventTime_172(FIX::UTCTIMESTAMP(1, 30, 3, 10, 2, 2016));
    noEvents_0_0.set(EventTime_172);
    EvntGrp_NoEvents_172.insert(EventTime_172.getString());
    FIX::EventType EventType_172(5);
    noEvents_0_0.set(EventType_172);
    EvntGrp_NoEvents_172.insert(EventType_172.getString());
    all_values.push_back(EvntGrp_NoEvents_172);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_173;
    FIX::EventDate EventDate_173("LOCALMKTDATE_1669977285");
    noEvents_0_1.set(EventDate_173);
    EvntGrp_NoEvents_173.insert(EventDate_173.getString());
    FIX::EventPx EventPx_173;
    EventPx_173.setString("7336467");
    noEvents_0_1.set(EventPx_173);
    EvntGrp_NoEvents_173.insert(EventPx_173.getString());
    FIX::EventText EventText_173("STRING_1990864328");
    noEvents_0_1.set(EventText_173);
    EvntGrp_NoEvents_173.insert(EventText_173.getString());
    FIX::EventTime EventTime_173(FIX::UTCTIMESTAMP(15, 55, 28, 27, 10, 2016));
    noEvents_0_1.set(EventTime_173);
    EvntGrp_NoEvents_173.insert(EventTime_173.getString());
    FIX::EventType EventType_173(99);
    noEvents_0_1.set(EventType_173);
    EvntGrp_NoEvents_173.insert(EventType_173.getString());
    all_values.push_back(EvntGrp_NoEvents_173);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_170;
    FIX::InstrumentPartyID InstrumentPartyID_170("STRING_93146917");
    noInstrumentParties_0_0.set(InstrumentPartyID_170);
    InstrumentParties_NoInstrumentParties_170.insert(InstrumentPartyID_170.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_170('9');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_170);
    InstrumentParties_NoInstrumentParties_170.insert(InstrumentPartyIDSource_170.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_170(376735439);
    noInstrumentParties_0_0.set(InstrumentPartyRole_170);
    InstrumentParties_NoInstrumentParties_170.insert(InstrumentPartyRole_170.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_170);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346;
      FIX::InstrumentPartySubID InstrumentPartySubID_346("STRING_1121106227");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_346);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346.insert(InstrumentPartySubID_346.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_346(1469076208);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_346);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346.insert(InstrumentPartySubIDType_346.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347;
      FIX::InstrumentPartySubID InstrumentPartySubID_347("STRING_6129883");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_347);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347.insert(InstrumentPartySubID_347.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_347(1534870674);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_347);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347.insert(InstrumentPartySubIDType_347.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_171;
    FIX::InstrumentPartyID InstrumentPartyID_171("STRING_1822457169");
    noInstrumentParties_0_1.set(InstrumentPartyID_171);
    InstrumentParties_NoInstrumentParties_171.insert(InstrumentPartyID_171.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_171('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_171);
    InstrumentParties_NoInstrumentParties_171.insert(InstrumentPartyIDSource_171.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_171(440523998);
    noInstrumentParties_0_1.set(InstrumentPartyRole_171);
    InstrumentParties_NoInstrumentParties_171.insert(InstrumentPartyRole_171.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_171);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348;
      FIX::InstrumentPartySubID InstrumentPartySubID_348("STRING_1030844084");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_348);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348.insert(InstrumentPartySubID_348.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_348(783526808);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_348);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348.insert(InstrumentPartySubIDType_348.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349;
      FIX::InstrumentPartySubID InstrumentPartySubID_349("STRING_273236910");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_349);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349.insert(InstrumentPartySubID_349.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_349(1076785346);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_349);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349.insert(InstrumentPartySubIDType_349.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::TradeCaptureReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_172;
    FIX::InstrumentPartyID InstrumentPartyID_172("STRING_1054170178");
    noInstrumentParties_0_2.set(InstrumentPartyID_172);
    InstrumentParties_NoInstrumentParties_172.insert(InstrumentPartyID_172.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_172('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_172);
    InstrumentParties_NoInstrumentParties_172.insert(InstrumentPartyIDSource_172.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_172(999545102);
    noInstrumentParties_0_2.set(InstrumentPartyRole_172);
    InstrumentParties_NoInstrumentParties_172.insert(InstrumentPartyRole_172.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_172);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350;
      FIX::InstrumentPartySubID InstrumentPartySubID_350("STRING_845943458");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_350);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350.insert(InstrumentPartySubID_350.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_350(842925782);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_350);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350.insert(InstrumentPartySubIDType_350.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351;
      FIX::InstrumentPartySubID InstrumentPartySubID_351("STRING_1236228393");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_351);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351.insert(InstrumentPartySubID_351.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_351(1087691586);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_351);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351.insert(InstrumentPartySubIDType_351.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_352;
      FIX::InstrumentPartySubID InstrumentPartySubID_352("STRING_586483429");
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubID_352);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_352.insert(InstrumentPartySubID_352.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_352(125368853);
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubIDType_352);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_352.insert(InstrumentPartySubIDType_352.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_352);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradeCaptureReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_188;
    FIX::SecurityAltID SecurityAltID_188("STRING_1002161062");
    noSecurityAltID_0_0.set(SecurityAltID_188);
    SecAltIDGrp_NoSecurityAltID_188.insert(SecurityAltID_188.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_188("STRING_1588258821");
    noSecurityAltID_0_0.set(SecurityAltIDSource_188);
    SecAltIDGrp_NoSecurityAltID_188.insert(SecurityAltIDSource_188.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_188);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_178;
  FIX::SecurityXML SecurityXML_179("XMLDATA_1233157308");
  msg.set(SecurityXML_179);
  FIX::SecurityXMLLen SecurityXMLLen_89(999692390);
  msg.set(SecurityXMLLen_89);
  FIX::SecurityXMLSchema SecurityXMLSchema_89("STRING_1681405738");
  msg.set(SecurityXMLSchema_89);
  SecurityXML_178.insert(SecurityXMLSchema_89.getString());
  all_values.push_back(SecurityXML_178);

  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::TradeCaptureReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_13;
    FIX::PosAmt PosAmt_13;
    PosAmt_13.setString("13764278");
    noPosAmt_0_0.set(PosAmt_13);
    PositionAmountData_NoPosAmt_13.insert(PosAmt_13.getString());
    FIX::PosAmtType PosAmtType_13("STRING_CMTM");
    noPosAmt_0_0.set(PosAmtType_13);
    PositionAmountData_NoPosAmt_13.insert(PosAmtType_13.getString());
    FIX::PositionCurrency PositionCurrency_13("STRING_1151851118");
    noPosAmt_0_0.set(PositionCurrency_13);
    PositionAmountData_NoPosAmt_13.insert(PositionCurrency_13.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_13);

    msg.addGroup(noPosAmt_0_0);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::TradeCaptureReport::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_11;
    FIX::RootPartyID RootPartyID_11("STRING_585958802");
    noRootPartyIDs_0_0.set(RootPartyID_11);
    RootParties_NoRootPartyIDs_11.insert(RootPartyID_11.getString());
    FIX::RootPartyIDSource RootPartyIDSource_11('5');
    noRootPartyIDs_0_0.set(RootPartyIDSource_11);
    RootParties_NoRootPartyIDs_11.insert(RootPartyIDSource_11.getString());
    FIX::RootPartyRole RootPartyRole_11(372993910);
    noRootPartyIDs_0_0.set(RootPartyRole_11);
    RootParties_NoRootPartyIDs_11.insert(RootPartyRole_11.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_11);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_29;
      FIX::RootPartySubID RootPartySubID_29("STRING_979762143");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_29);
      RootSubParties_NoRootPartySubIDs_29.insert(RootPartySubID_29.getString());
      FIX::RootPartySubIDType RootPartySubIDType_29(2043254745);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_29);
      RootSubParties_NoRootPartySubIDs_29.insert(RootPartySubIDType_29.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_29);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_32;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_32("CAN");
  msg.set(BenchmarkCurveCurrency_32);
  SpreadOrBenchmarkCurveData_32.insert(BenchmarkCurveCurrency_32.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_32("STRING_OTHER");
  msg.set(BenchmarkCurveName_32);
  SpreadOrBenchmarkCurveData_32.insert(BenchmarkCurveName_32.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_32("STRING_286030571");
  msg.set(BenchmarkCurvePoint_32);
  SpreadOrBenchmarkCurveData_32.insert(BenchmarkCurvePoint_32.getString());
  FIX::BenchmarkPrice BenchmarkPrice_32;
  BenchmarkPrice_32.setString("6699754");
  msg.set(BenchmarkPrice_32);
  SpreadOrBenchmarkCurveData_32.insert(BenchmarkPrice_32.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_32(281304681);
  msg.set(BenchmarkPriceType_32);
  SpreadOrBenchmarkCurveData_32.insert(BenchmarkPriceType_32.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_32("STRING_1285575673");
  msg.set(BenchmarkSecurityID_32);
  SpreadOrBenchmarkCurveData_32.insert(BenchmarkSecurityID_32.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_32("STRING_1246639296");
  msg.set(BenchmarkSecurityIDSource_32);
  SpreadOrBenchmarkCurveData_32.insert(BenchmarkSecurityIDSource_32.getString());
  FIX::Spread Spread_32;
  Spread_32.setString("11272481");
  msg.set(Spread_32);
  SpreadOrBenchmarkCurveData_32.insert(Spread_32.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_32);

  // TrdCapRptSideGrp
  // Group TrdCapRptSideGrp.NoSides
  {
    FIX50SP2::TradeCaptureReport::NoSides noSides_0_0;
    // TrdCapRptSideGrp.NoSides
    multiset<string> TrdCapRptSideGrp_NoSides_0;
    FIX::Account Account_42("STRING_335384041");
    noSides_0_0.set(Account_42);
    TrdCapRptSideGrp_NoSides_0.insert(Account_42.getString());
    FIX::AccountType AccountType_35(6);
    noSides_0_0.set(AccountType_35);
    TrdCapRptSideGrp_NoSides_0.insert(AccountType_35.getString());
    FIX::AccruedInterestAmt AccruedInterestAmt_10;
    AccruedInterestAmt_10.setString("5675012");
    noSides_0_0.set(AccruedInterestAmt_10);
    TrdCapRptSideGrp_NoSides_0.insert(AccruedInterestAmt_10.getString());
    FIX::AccruedInterestRate AccruedInterestRate_5;
    AccruedInterestRate_5.setString("28.940000");
    noSides_0_0.set(AccruedInterestRate_5);
    TrdCapRptSideGrp_NoSides_0.insert(AccruedInterestRate_5.getString());
    FIX::AcctIDSource AcctIDSource_35(2);
    noSides_0_0.set(AcctIDSource_35);
    TrdCapRptSideGrp_NoSides_0.insert(AcctIDSource_35.getString());
    FIX::AggressorIndicator AggressorIndicator_1(false);
    noSides_0_0.set(AggressorIndicator_1);
    TrdCapRptSideGrp_NoSides_0.insert(AggressorIndicator_1.getString());
    FIX::AllocID AllocID_18("STRING_2049011716");
    noSides_0_0.set(AllocID_18);
    TrdCapRptSideGrp_NoSides_0.insert(AllocID_18.getString());
    FIX::ComplianceID ComplianceID_12("STRING_1005579695");
    noSides_0_0.set(ComplianceID_12);
    TrdCapRptSideGrp_NoSides_0.insert(ComplianceID_12.getString());
    FIX::Concession Concession_5;
    Concession_5.setString("4218710");
    noSides_0_0.set(Concession_5);
    TrdCapRptSideGrp_NoSides_0.insert(Concession_5.getString());
    FIX::CustOrderCapacity CustOrderCapacity_17(3);
    noSides_0_0.set(CustOrderCapacity_17);
    TrdCapRptSideGrp_NoSides_0.insert(CustOrderCapacity_17.getString());
    FIX::EncodedText EncodedText_100("DATA_1036324586");
    noSides_0_0.set(EncodedText_100);
    TrdCapRptSideGrp_NoSides_0.insert(EncodedText_100.getString());
    FIX::EncodedTextLen EncodedTextLen_100(1798298870);
    noSides_0_0.set(EncodedTextLen_100);
    TrdCapRptSideGrp_NoSides_0.insert(EncodedTextLen_100.getString());
    FIX::EndAccruedInterestAmt EndAccruedInterestAmt_10;
    EndAccruedInterestAmt_10.setString("152790");
    noSides_0_0.set(EndAccruedInterestAmt_10);
    TrdCapRptSideGrp_NoSides_0.insert(EndAccruedInterestAmt_10.getString());
    FIX::EndCash EndCash_10;
    EndCash_10.setString("406920");
    noSides_0_0.set(EndCash_10);
    TrdCapRptSideGrp_NoSides_0.insert(EndCash_10.getString());
    FIX::ExDate ExDate_2("LOCALMKTDATE_348835611");
    noSides_0_0.set(ExDate_2);
    TrdCapRptSideGrp_NoSides_0.insert(ExDate_2.getString());
    FIX::ExchangeRule ExchangeRule_0("STRING_601237880");
    noSides_0_0.set(ExchangeRule_0);
    TrdCapRptSideGrp_NoSides_0.insert(ExchangeRule_0.getString());
    FIX::ExchangeSpecialInstructions ExchangeSpecialInstructions_0("STRING_579930202");
    noSides_0_0.set(ExchangeSpecialInstructions_0);
    TrdCapRptSideGrp_NoSides_0.insert(ExchangeSpecialInstructions_0.getString());
    FIX::InterestAtMaturity InterestAtMaturity_5;
    InterestAtMaturity_5.setString("7218295");
    noSides_0_0.set(InterestAtMaturity_5);
    TrdCapRptSideGrp_NoSides_0.insert(InterestAtMaturity_5.getString());
    FIX::NetGrossInd NetGrossInd_9(2);
    noSides_0_0.set(NetGrossInd_9);
    TrdCapRptSideGrp_NoSides_0.insert(NetGrossInd_9.getString());
    FIX::NetMoney NetMoney_5;
    NetMoney_5.setString("15596923");
    noSides_0_0.set(NetMoney_5);
    TrdCapRptSideGrp_NoSides_0.insert(NetMoney_5.getString());
    FIX::NumDaysInterest NumDaysInterest_5(617600619);
    noSides_0_0.set(NumDaysInterest_5);
    TrdCapRptSideGrp_NoSides_0.insert(NumDaysInterest_5.getString());
    FIX::OddLot OddLot_0(true);
    noSides_0_0.set(OddLot_0);
    TrdCapRptSideGrp_NoSides_0.insert(OddLot_0.getString());
    FIX::OrderCategory OrderCategory_1('8');
    noSides_0_0.set(OrderCategory_1);
    TrdCapRptSideGrp_NoSides_0.insert(OrderCategory_1.getString());
    FIX::OrderDelay OrderDelay_0(786608626);
    noSides_0_0.set(OrderDelay_0);
    TrdCapRptSideGrp_NoSides_0.insert(OrderDelay_0.getString());
    FIX::OrderDelayUnit OrderDelayUnit_0(1);
    noSides_0_0.set(OrderDelayUnit_0);
    TrdCapRptSideGrp_NoSides_0.insert(OrderDelayUnit_0.getString());
    FIX::PositionEffect PositionEffect_14('C');
    noSides_0_0.set(PositionEffect_14);
    TrdCapRptSideGrp_NoSides_0.insert(PositionEffect_14.getString());
    FIX::PreallocMethod PreallocMethod_11('1');
    noSides_0_0.set(PreallocMethod_11);
    TrdCapRptSideGrp_NoSides_0.insert(PreallocMethod_11.getString());
    FIX::ProcessCode ProcessCode_12('3');
    noSides_0_0.set(ProcessCode_12);
    TrdCapRptSideGrp_NoSides_0.insert(ProcessCode_12.getString());
    FIX::RptSeq RptSeq_6(944628778);
    noSides_0_0.set(RptSeq_6);
    TrdCapRptSideGrp_NoSides_0.insert(RptSeq_6.getString());
    FIX::SettlCurrAmt SettlCurrAmt_10;
    SettlCurrAmt_10.setString("476777");
    noSides_0_0.set(SettlCurrAmt_10);
    TrdCapRptSideGrp_NoSides_0.insert(SettlCurrAmt_10.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_10;
    SettlCurrFxRate_10.setString("16889919");
    noSides_0_0.set(SettlCurrFxRate_10);
    TrdCapRptSideGrp_NoSides_0.insert(SettlCurrFxRate_10.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_10('M');
    noSides_0_0.set(SettlCurrFxRateCalc_10);
    TrdCapRptSideGrp_NoSides_0.insert(SettlCurrFxRateCalc_10.getString());
    FIX::Side Side_50('6');
    noSides_0_0.set(Side_50);
    TrdCapRptSideGrp_NoSides_0.insert(Side_50.getString());
    FIX::SideCurrency SideCurrency_0("USD");
    noSides_0_0.set(SideCurrency_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideCurrency_0.getString());
    FIX::SideExecID SideExecID_0("STRING_2035039912");
    noSides_0_0.set(SideExecID_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideExecID_0.getString());
    FIX::SideFillStationCd SideFillStationCd_0("STRING_1678671832");
    noSides_0_0.set(SideFillStationCd_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideFillStationCd_0.getString());
    FIX::SideGrossTradeAmt SideGrossTradeAmt_0;
    SideGrossTradeAmt_0.setString("16422937");
    noSides_0_0.set(SideGrossTradeAmt_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideGrossTradeAmt_0.getString());
    FIX::SideLastQty SideLastQty_0(893135959);
    noSides_0_0.set(SideLastQty_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideLastQty_0.getString());
    FIX::SideLiquidityInd SideLiquidityInd_0(2100542873);
    noSides_0_0.set(SideLiquidityInd_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideLiquidityInd_0.getString());
    FIX::SideMultiLegReportingType SideMultiLegReportingType_0(2);
    noSides_0_0.set(SideMultiLegReportingType_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideMultiLegReportingType_0.getString());
    FIX::SideReasonCd SideReasonCd_0("STRING_1929460546");
    noSides_0_0.set(SideReasonCd_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideReasonCd_0.getString());
    FIX::SideSettlCurrency SideSettlCurrency_0("USD");
    noSides_0_0.set(SideSettlCurrency_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideSettlCurrency_0.getString());
    FIX::SideTradeReportID SideTradeReportID_0("STRING_1970152603");
    noSides_0_0.set(SideTradeReportID_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideTradeReportID_0.getString());
    FIX::SideTrdSubTyp SideTrdSubTyp_0(2100193707);
    noSides_0_0.set(SideTrdSubTyp_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideTrdSubTyp_0.getString());
    FIX::SolicitedFlag SolicitedFlag_11(true);
    noSides_0_0.set(SolicitedFlag_11);
    TrdCapRptSideGrp_NoSides_0.insert(SolicitedFlag_11.getString());
    FIX::StartCash StartCash_10;
    StartCash_10.setString("4025991");
    noSides_0_0.set(StartCash_10);
    TrdCapRptSideGrp_NoSides_0.insert(StartCash_10.getString());
    FIX::Text Text_100("STRING_674539581");
    noSides_0_0.set(Text_100);
    TrdCapRptSideGrp_NoSides_0.insert(Text_100.getString());
    FIX::TimeBracket TimeBracket_1("STRING_473899919");
    noSides_0_0.set(TimeBracket_1);
    TrdCapRptSideGrp_NoSides_0.insert(TimeBracket_1.getString());
    FIX::TotalTakedown TotalTakedown_5;
    TotalTakedown_5.setString("19622915");
    noSides_0_0.set(TotalTakedown_5);
    TrdCapRptSideGrp_NoSides_0.insert(TotalTakedown_5.getString());
    FIX::TradeAllocIndicator TradeAllocIndicator_0(0);
    noSides_0_0.set(TradeAllocIndicator_0);
    TrdCapRptSideGrp_NoSides_0.insert(TradeAllocIndicator_0.getString());
    FIX::TradeInputDevice TradeInputDevice_1("STRING_610267813");
    noSides_0_0.set(TradeInputDevice_1);
    TrdCapRptSideGrp_NoSides_0.insert(TradeInputDevice_1.getString());
    FIX::TradeInputSource TradeInputSource_3("STRING_990305502");
    noSides_0_0.set(TradeInputSource_3);
    TrdCapRptSideGrp_NoSides_0.insert(TradeInputSource_3.getString());
    FIX::TradingSessionID TradingSessionID_92("STRING_5");
    noSides_0_0.set(TradingSessionID_92);
    TrdCapRptSideGrp_NoSides_0.insert(TradingSessionID_92.getString());
    FIX::TradingSessionSubID TradingSessionSubID_92("STRING_1");
    noSides_0_0.set(TradingSessionSubID_92);
    TrdCapRptSideGrp_NoSides_0.insert(TradingSessionSubID_92.getString());
    all_values.push_back(TrdCapRptSideGrp_NoSides_0);

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_13;
      FIX::ClearingInstruction ClearingInstruction_13(11);
      noClearingInstructions_0_1_0.set(ClearingInstruction_13);
      ClrInstGrp_NoClearingInstructions_13.insert(ClearingInstruction_13.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_13);

      noSides_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoClearingInstructions noClearingInstructions_0_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_14;
      FIX::ClearingInstruction ClearingInstruction_14(8);
      noClearingInstructions_0_1_1.set(ClearingInstruction_14);
      ClrInstGrp_NoClearingInstructions_14.insert(ClearingInstruction_14.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_14);

      noSides_0_0.addGroup(noClearingInstructions_0_1_1);
    }
    // CommissionData
    multiset<string> CommissionData_20;
    FIX::CommCurrency CommCurrency_20("CHF");
    noSides_0_0.set(CommCurrency_20);
    CommissionData_20.insert(CommCurrency_20.getString());
    FIX::CommType CommType_23('4');
    noSides_0_0.set(CommType_23);
    CommissionData_20.insert(CommType_23.getString());
    FIX::Commission Commission_23;
    Commission_23.setString("7654529");
    noSides_0_0.set(Commission_23);
    CommissionData_20.insert(Commission_23.getString());
    FIX::FundRenewWaiv FundRenewWaiv_20('N');
    noSides_0_0.set(FundRenewWaiv_20);
    CommissionData_20.insert(FundRenewWaiv_20.getString());
    all_values.push_back(CommissionData_20);

    // ContAmtGrp
    // Group ContAmtGrp.NoContAmts
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoContAmts noContAmts_0_1_0;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_2;
      FIX::ContAmtCurr ContAmtCurr_2("CHF");
      noContAmts_0_1_0.set(ContAmtCurr_2);
      ContAmtGrp_NoContAmts_2.insert(ContAmtCurr_2.getString());
      FIX::ContAmtType ContAmtType_2(12);
      noContAmts_0_1_0.set(ContAmtType_2);
      ContAmtGrp_NoContAmts_2.insert(ContAmtType_2.getString());
      FIX::ContAmtValue ContAmtValue_2;
      ContAmtValue_2.setString("20010287");
      noContAmts_0_1_0.set(ContAmtValue_2);
      ContAmtGrp_NoContAmts_2.insert(ContAmtValue_2.getString());
      all_values.push_back(ContAmtGrp_NoContAmts_2);

      noSides_0_0.addGroup(noContAmts_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoContAmts noContAmts_0_1_1;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_3;
      FIX::ContAmtCurr ContAmtCurr_3("CHF");
      noContAmts_0_1_1.set(ContAmtCurr_3);
      ContAmtGrp_NoContAmts_3.insert(ContAmtCurr_3.getString());
      FIX::ContAmtType ContAmtType_3(8);
      noContAmts_0_1_1.set(ContAmtType_3);
      ContAmtGrp_NoContAmts_3.insert(ContAmtType_3.getString());
      FIX::ContAmtValue ContAmtValue_3;
      ContAmtValue_3.setString("17246592");
      noContAmts_0_1_1.set(ContAmtValue_3);
      ContAmtGrp_NoContAmts_3.insert(ContAmtValue_3.getString());
      all_values.push_back(ContAmtGrp_NoContAmts_3);

      noSides_0_0.addGroup(noContAmts_0_1_1);
    }
    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_23;
      FIX::MiscFeeAmt MiscFeeAmt_23;
      MiscFeeAmt_23.setString("20243120");
      noMiscFees_0_1_0.set(MiscFeeAmt_23);
      MiscFeesGrp_NoMiscFees_23.insert(MiscFeeAmt_23.getString());
      FIX::MiscFeeBasis MiscFeeBasis_23(2);
      noMiscFees_0_1_0.set(MiscFeeBasis_23);
      MiscFeesGrp_NoMiscFees_23.insert(MiscFeeBasis_23.getString());
      FIX::MiscFeeCurr MiscFeeCurr_23("GBP");
      noMiscFees_0_1_0.set(MiscFeeCurr_23);
      MiscFeesGrp_NoMiscFees_23.insert(MiscFeeCurr_23.getString());
      FIX::MiscFeeType MiscFeeType_23("STRING_5");
      noMiscFees_0_1_0.set(MiscFeeType_23);
      MiscFeesGrp_NoMiscFees_23.insert(MiscFeeType_23.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_23);

      noSides_0_0.addGroup(noMiscFees_0_1_0);
    }
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_151;
      FIX::PartyID PartyID_151("STRING_2044989265");
      noPartyIDs_0_1_0.set(PartyID_151);
      Parties_NoPartyIDs_151.insert(PartyID_151.getString());
      FIX::PartyIDSource PartyIDSource_151('A');
      noPartyIDs_0_1_0.set(PartyIDSource_151);
      Parties_NoPartyIDs_151.insert(PartyIDSource_151.getString());
      FIX::PartyRole PartyRole_151(82);
      noPartyIDs_0_1_0.set(PartyRole_151);
      Parties_NoPartyIDs_151.insert(PartyRole_151.getString());
      all_values.push_back(Parties_NoPartyIDs_151);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_304;
        FIX::PartySubID PartySubID_304("STRING_607557105");
        noPartySubIDs_0_0_2_0.set(PartySubID_304);
        PtysSubGrp_NoPartySubIDs_304.insert(PartySubID_304.getString());
        FIX::PartySubIDType PartySubIDType_304(29);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_304);
        PtysSubGrp_NoPartySubIDs_304.insert(PartySubIDType_304.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_304);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_305;
        FIX::PartySubID PartySubID_305("STRING_1540439709");
        noPartySubIDs_0_0_2_1.set(PartySubID_305);
        PtysSubGrp_NoPartySubIDs_305.insert(PartySubID_305.getString());
        FIX::PartySubIDType PartySubIDType_305(5);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_305);
        PtysSubGrp_NoPartySubIDs_305.insert(PartySubIDType_305.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_305);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_152;
      FIX::PartyID PartyID_152("STRING_34146312");
      noPartyIDs_0_1_1.set(PartyID_152);
      Parties_NoPartyIDs_152.insert(PartyID_152.getString());
      FIX::PartyIDSource PartyIDSource_152('C');
      noPartyIDs_0_1_1.set(PartyIDSource_152);
      Parties_NoPartyIDs_152.insert(PartyIDSource_152.getString());
      FIX::PartyRole PartyRole_152(58);
      noPartyIDs_0_1_1.set(PartyRole_152);
      Parties_NoPartyIDs_152.insert(PartyRole_152.getString());
      all_values.push_back(Parties_NoPartyIDs_152);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_306;
        FIX::PartySubID PartySubID_306("STRING_120777895");
        noPartySubIDs_0_1_2_0.set(PartySubID_306);
        PtysSubGrp_NoPartySubIDs_306.insert(PartySubID_306.getString());
        FIX::PartySubIDType PartySubIDType_306(28);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_306);
        PtysSubGrp_NoPartySubIDs_306.insert(PartySubIDType_306.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_306);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_1);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails noSettlDetails_0_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_5;
      FIX::SettlObligSource SettlObligSource_5('3');
      noSettlDetails_0_1_0.set(SettlObligSource_5);
      SettlDetails_NoSettlDetails_5.insert(SettlObligSource_5.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_5);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_46;
        FIX::SettlPartyID SettlPartyID_46("STRING_1145055538");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_46);
        SettlParties_NoSettlPartyIDs_46.insert(SettlPartyID_46.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_46('1');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_46);
        SettlParties_NoSettlPartyIDs_46.insert(SettlPartyIDSource_46.getString());
        FIX::SettlPartyRole SettlPartyRole_46(1759025277);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_46);
        SettlParties_NoSettlPartyIDs_46.insert(SettlPartyRole_46.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_46);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_99;
          FIX::SettlPartySubID SettlPartySubID_99("STRING_2014720935");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_99);
          SettlPtysSubGrp_NoSettlPartySubIDs_99.insert(SettlPartySubID_99.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_99(542830706);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_99);
          SettlPtysSubGrp_NoSettlPartySubIDs_99.insert(SettlPartySubIDType_99.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_99);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_100;
          FIX::SettlPartySubID SettlPartySubID_100("STRING_517429913");
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubID_100);
          SettlPtysSubGrp_NoSettlPartySubIDs_100.insert(SettlPartySubID_100.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_100(1346517391);
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubIDType_100);
          SettlPtysSubGrp_NoSettlPartySubIDs_100.insert(SettlPartySubIDType_100.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_100);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      noSides_0_0.addGroup(noSettlDetails_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails noSettlDetails_0_1_1;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_6;
      FIX::SettlObligSource SettlObligSource_6('2');
      noSettlDetails_0_1_1.set(SettlObligSource_6);
      SettlDetails_NoSettlDetails_6.insert(SettlObligSource_6.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_6);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_47;
        FIX::SettlPartyID SettlPartyID_47("STRING_631023907");
        noSettlPartyIDs_0_1_2_0.set(SettlPartyID_47);
        SettlParties_NoSettlPartyIDs_47.insert(SettlPartyID_47.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_47('1');
        noSettlPartyIDs_0_1_2_0.set(SettlPartyIDSource_47);
        SettlParties_NoSettlPartyIDs_47.insert(SettlPartyIDSource_47.getString());
        FIX::SettlPartyRole SettlPartyRole_47(1867201901);
        noSettlPartyIDs_0_1_2_0.set(SettlPartyRole_47);
        SettlParties_NoSettlPartyIDs_47.insert(SettlPartyRole_47.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_47);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_101;
          FIX::SettlPartySubID SettlPartySubID_101("STRING_1888254117");
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubID_101);
          SettlPtysSubGrp_NoSettlPartySubIDs_101.insert(SettlPartySubID_101.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_101(1484453504);
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubIDType_101);
          SettlPtysSubGrp_NoSettlPartySubIDs_101.insert(SettlPartySubIDType_101.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_101);

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_0);
        }
        noSettlDetails_0_1_1.addGroup(noSettlPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_48;
        FIX::SettlPartyID SettlPartyID_48("STRING_1841256300");
        noSettlPartyIDs_0_1_2_1.set(SettlPartyID_48);
        SettlParties_NoSettlPartyIDs_48.insert(SettlPartyID_48.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_48('2');
        noSettlPartyIDs_0_1_2_1.set(SettlPartyIDSource_48);
        SettlParties_NoSettlPartyIDs_48.insert(SettlPartyIDSource_48.getString());
        FIX::SettlPartyRole SettlPartyRole_48(2092010609);
        noSettlPartyIDs_0_1_2_1.set(SettlPartyRole_48);
        SettlParties_NoSettlPartyIDs_48.insert(SettlPartyRole_48.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_48);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_102;
          FIX::SettlPartySubID SettlPartySubID_102("STRING_1788983609");
          noSettlPartySubIDs_0_1_1_3_0.set(SettlPartySubID_102);
          SettlPtysSubGrp_NoSettlPartySubIDs_102.insert(SettlPartySubID_102.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_102(1240379050);
          noSettlPartySubIDs_0_1_1_3_0.set(SettlPartySubIDType_102);
          SettlPtysSubGrp_NoSettlPartySubIDs_102.insert(SettlPartySubIDType_102.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_102);

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_103;
          FIX::SettlPartySubID SettlPartySubID_103("STRING_910370438");
          noSettlPartySubIDs_0_1_1_3_1.set(SettlPartySubID_103);
          SettlPtysSubGrp_NoSettlPartySubIDs_103.insert(SettlPartySubID_103.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_103(1775096439);
          noSettlPartySubIDs_0_1_1_3_1.set(SettlPartySubIDType_103);
          SettlPtysSubGrp_NoSettlPartySubIDs_103.insert(SettlPartySubIDType_103.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_103);

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_104;
          FIX::SettlPartySubID SettlPartySubID_104("STRING_2021671255");
          noSettlPartySubIDs_0_1_1_3_2.set(SettlPartySubID_104);
          SettlPtysSubGrp_NoSettlPartySubIDs_104.insert(SettlPartySubID_104.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_104(1991373035);
          noSettlPartySubIDs_0_1_1_3_2.set(SettlPartySubIDType_104);
          SettlPtysSubGrp_NoSettlPartySubIDs_104.insert(SettlPartySubIDType_104.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_104);

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_2);
        }
        noSettlDetails_0_1_1.addGroup(noSettlPartyIDs_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_1_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_49;
        FIX::SettlPartyID SettlPartyID_49("STRING_1895874335");
        noSettlPartyIDs_0_1_2_2.set(SettlPartyID_49);
        SettlParties_NoSettlPartyIDs_49.insert(SettlPartyID_49.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_49('1');
        noSettlPartyIDs_0_1_2_2.set(SettlPartyIDSource_49);
        SettlParties_NoSettlPartyIDs_49.insert(SettlPartyIDSource_49.getString());
        FIX::SettlPartyRole SettlPartyRole_49(2086882147);
        noSettlPartyIDs_0_1_2_2.set(SettlPartyRole_49);
        SettlParties_NoSettlPartyIDs_49.insert(SettlPartyRole_49.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_49);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_105;
          FIX::SettlPartySubID SettlPartySubID_105("STRING_1178929239");
          noSettlPartySubIDs_0_1_2_3_0.set(SettlPartySubID_105);
          SettlPtysSubGrp_NoSettlPartySubIDs_105.insert(SettlPartySubID_105.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_105(1084454037);
          noSettlPartySubIDs_0_1_2_3_0.set(SettlPartySubIDType_105);
          SettlPtysSubGrp_NoSettlPartySubIDs_105.insert(SettlPartySubIDType_105.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_105);

          noSettlPartyIDs_0_1_2_2.addGroup(noSettlPartySubIDs_0_1_2_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_106;
          FIX::SettlPartySubID SettlPartySubID_106("STRING_252158459");
          noSettlPartySubIDs_0_1_2_3_1.set(SettlPartySubID_106);
          SettlPtysSubGrp_NoSettlPartySubIDs_106.insert(SettlPartySubID_106.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_106(790470868);
          noSettlPartySubIDs_0_1_2_3_1.set(SettlPartySubIDType_106);
          SettlPtysSubGrp_NoSettlPartySubIDs_106.insert(SettlPartySubIDType_106.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_106);

          noSettlPartyIDs_0_1_2_2.addGroup(noSettlPartySubIDs_0_1_2_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_107;
          FIX::SettlPartySubID SettlPartySubID_107("STRING_2024708314");
          noSettlPartySubIDs_0_1_2_3_2.set(SettlPartySubID_107);
          SettlPtysSubGrp_NoSettlPartySubIDs_107.insert(SettlPartySubID_107.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_107(119395746);
          noSettlPartySubIDs_0_1_2_3_2.set(SettlPartySubIDType_107);
          SettlPtysSubGrp_NoSettlPartySubIDs_107.insert(SettlPartySubIDType_107.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_107);

          noSettlPartyIDs_0_1_2_2.addGroup(noSettlPartySubIDs_0_1_2_3_2);
        }
        noSettlDetails_0_1_1.addGroup(noSettlPartyIDs_0_1_2_2);
      }
      noSides_0_0.addGroup(noSettlDetails_0_1_1);
    }
    // SideTrdRegTS
    // Group SideTrdRegTS.NoSideTrdRegTS
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSideTrdRegTS noSideTrdRegTS_0_1_0;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_0;
      FIX::SideTrdRegTimestamp SideTrdRegTimestamp_0(FIX::UTCTIMESTAMP(2, 8, 5, 21, 4, 2008));
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestamp_0);
      SideTrdRegTS_NoSideTrdRegTS_0.insert(SideTrdRegTimestamp_0.getString());
      FIX::SideTrdRegTimestampSrc SideTrdRegTimestampSrc_0("STRING_539523400");
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestampSrc_0);
      SideTrdRegTS_NoSideTrdRegTS_0.insert(SideTrdRegTimestampSrc_0.getString());
      FIX::SideTrdRegTimestampType SideTrdRegTimestampType_0(1336996048);
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestampType_0);
      SideTrdRegTS_NoSideTrdRegTS_0.insert(SideTrdRegTimestampType_0.getString());
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_0);

      noSides_0_0.addGroup(noSideTrdRegTS_0_1_0);
    }
    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_48;
      FIX::StipulationType StipulationType_48("STRING_MAXBAL");
      noStipulations_0_1_0.set(StipulationType_48);
      Stipulations_NoStipulations_48.insert(StipulationType_48.getString());
      FIX::StipulationValue StipulationValue_48("STRING_1585539948");
      noStipulations_0_1_0.set(StipulationValue_48);
      Stipulations_NoStipulations_48.insert(StipulationValue_48.getString());
      all_values.push_back(Stipulations_NoStipulations_48);

      noSides_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_49;
      FIX::StipulationType StipulationType_49("STRING_TRDVAR");
      noStipulations_0_1_1.set(StipulationType_49);
      Stipulations_NoStipulations_49.insert(StipulationType_49.getString());
      FIX::StipulationValue StipulationValue_49("STRING_1109520179");
      noStipulations_0_1_1.set(StipulationValue_49);
      Stipulations_NoStipulations_49.insert(StipulationValue_49.getString());
      all_values.push_back(Stipulations_NoStipulations_49);

      noSides_0_0.addGroup(noStipulations_0_1_1);
    }
    // TradeReportOrderDetail
    multiset<string> TradeReportOrderDetail_0;
    FIX::BookingType BookingType_24(1);
    noSides_0_0.set(BookingType_24);
    TradeReportOrderDetail_0.insert(BookingType_24.getString());
    FIX::ClOrdID ClOrdID_47("STRING_553523206");
    noSides_0_0.set(ClOrdID_47);
    TradeReportOrderDetail_0.insert(ClOrdID_47.getString());
    FIX::CumQty CumQty_5;
    CumQty_5.setString("20198906");
    noSides_0_0.set(CumQty_5);
    TradeReportOrderDetail_0.insert(CumQty_5.getString());
    FIX::ExecInst ExecInst_13("MULTIPLECHARVALUE_L");
    noSides_0_0.set(ExecInst_13);
    TradeReportOrderDetail_0.insert(ExecInst_13.getString());
    FIX::ExpireTime ExpireTime_25(FIX::UTCTIMESTAMP(5, 8, 59, 8, 3, 2013));
    noSides_0_0.set(ExpireTime_25);
    TradeReportOrderDetail_0.insert(ExpireTime_25.getString());
    FIX::LeavesQty LeavesQty_4;
    LeavesQty_4.setString("7401488");
    noSides_0_0.set(LeavesQty_4);
    TradeReportOrderDetail_0.insert(LeavesQty_4.getString());
    FIX::ListID ListID_24("STRING_968045029");
    noSides_0_0.set(ListID_24);
    TradeReportOrderDetail_0.insert(ListID_24.getString());
    FIX::LotType LotType_28('4');
    noSides_0_0.set(LotType_28);
    TradeReportOrderDetail_0.insert(LotType_28.getString());
    FIX::OrdStatus OrdStatus_5('5');
    noSides_0_0.set(OrdStatus_5);
    TradeReportOrderDetail_0.insert(OrdStatus_5.getString());
    FIX::OrdType OrdType_70('9');
    noSides_0_0.set(OrdType_70);
    TradeReportOrderDetail_0.insert(OrdType_70.getString());
    FIX::OrderCapacity OrderCapacity_28('R');
    noSides_0_0.set(OrderCapacity_28);
    TradeReportOrderDetail_0.insert(OrderCapacity_28.getString());
    FIX::OrderID OrderID_34("STRING_1012028140");
    noSides_0_0.set(OrderID_34);
    TradeReportOrderDetail_0.insert(OrderID_34.getString());
    FIX::OrderInputDevice OrderInputDevice_0("STRING_405870266");
    noSides_0_0.set(OrderInputDevice_0);
    TradeReportOrderDetail_0.insert(OrderInputDevice_0.getString());
    FIX::OrderRestrictions OrderRestrictions_23("MULTIPLECHARVALUE_2");
    noSides_0_0.set(OrderRestrictions_23);
    TradeReportOrderDetail_0.insert(OrderRestrictions_23.getString());
    FIX::OrigCustOrderCapacity OrigCustOrderCapacity_0(2);
    noSides_0_0.set(OrigCustOrderCapacity_0);
    TradeReportOrderDetail_0.insert(OrigCustOrderCapacity_0.getString());
    FIX::OrigOrdModTime OrigOrdModTime_7(FIX::UTCTIMESTAMP(13, 23, 43, 2, 3, 2010));
    noSides_0_0.set(OrigOrdModTime_7);
    TradeReportOrderDetail_0.insert(OrigOrdModTime_7.getString());
    FIX::Price Price_25;
    Price_25.setString("6856493");
    noSides_0_0.set(Price_25);
    TradeReportOrderDetail_0.insert(Price_25.getString());
    FIX::RefOrdIDReason RefOrdIDReason_0(1);
    noSides_0_0.set(RefOrdIDReason_0);
    TradeReportOrderDetail_0.insert(RefOrdIDReason_0.getString());
    FIX::RefOrderID RefOrderID_3("STRING_90179647");
    noSides_0_0.set(RefOrderID_3);
    TradeReportOrderDetail_0.insert(RefOrderID_3.getString());
    FIX::RefOrderIDSource RefOrderIDSource_3('1');
    noSides_0_0.set(RefOrderIDSource_3);
    TradeReportOrderDetail_0.insert(RefOrderIDSource_3.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_40("STRING_590889119");
    noSides_0_0.set(SecondaryClOrdID_40);
    TradeReportOrderDetail_0.insert(SecondaryClOrdID_40.getString());
    FIX::SecondaryOrderID SecondaryOrderID_24("STRING_2110070264");
    noSides_0_0.set(SecondaryOrderID_24);
    TradeReportOrderDetail_0.insert(SecondaryOrderID_24.getString());
    FIX::StopPx StopPx_8;
    StopPx_8.setString("6198582");
    noSides_0_0.set(StopPx_8);
    TradeReportOrderDetail_0.insert(StopPx_8.getString());
    FIX::TimeInForce TimeInForce_54('2');
    noSides_0_0.set(TimeInForce_54);
    TradeReportOrderDetail_0.insert(TimeInForce_54.getString());
    FIX::TransBkdTime TransBkdTime_5(FIX::UTCTIMESTAMP(18, 24, 37, 20, 8, 2011));
    noSides_0_0.set(TransBkdTime_5);
    TradeReportOrderDetail_0.insert(TransBkdTime_5.getString());
    all_values.push_back(TradeReportOrderDetail_0);

    // DisplayInstruction
    multiset<string> DisplayInstruction_8;
    FIX::DisplayHighQty DisplayHighQty_8;
    DisplayHighQty_8.setString("7593496");
    noSides_0_0.set(DisplayHighQty_8);
    DisplayInstruction_8.insert(DisplayHighQty_8.getString());
    FIX::DisplayLowQty DisplayLowQty_8;
    DisplayLowQty_8.setString("11229253");
    noSides_0_0.set(DisplayLowQty_8);
    DisplayInstruction_8.insert(DisplayLowQty_8.getString());
    FIX::DisplayMethod DisplayMethod_8('4');
    noSides_0_0.set(DisplayMethod_8);
    DisplayInstruction_8.insert(DisplayMethod_8.getString());
    FIX::DisplayMinIncr DisplayMinIncr_8;
    DisplayMinIncr_8.setString("18467903");
    noSides_0_0.set(DisplayMinIncr_8);
    DisplayInstruction_8.insert(DisplayMinIncr_8.getString());
    FIX::DisplayQty DisplayQty_8;
    DisplayQty_8.setString("19793033");
    noSides_0_0.set(DisplayQty_8);
    DisplayInstruction_8.insert(DisplayQty_8.getString());
    FIX::DisplayWhen DisplayWhen_8('2');
    noSides_0_0.set(DisplayWhen_8);
    DisplayInstruction_8.insert(DisplayWhen_8.getString());
    FIX::RefreshQty RefreshQty_8;
    RefreshQty_8.setString("1051770");
    noSides_0_0.set(RefreshQty_8);
    DisplayInstruction_8.insert(RefreshQty_8.getString());
    FIX::SecondaryDisplayQty SecondaryDisplayQty_8;
    SecondaryDisplayQty_8.setString("2936746");
    noSides_0_0.set(SecondaryDisplayQty_8);
    DisplayInstruction_8.insert(SecondaryDisplayQty_8.getString());
    all_values.push_back(DisplayInstruction_8);

    // OrderQtyData
    multiset<string> OrderQtyData_24;
    FIX::CashOrderQty CashOrderQty_24;
    CashOrderQty_24.setString("8806020");
    noSides_0_0.set(CashOrderQty_24);
    OrderQtyData_24.insert(CashOrderQty_24.getString());
    FIX::OrderPercent OrderPercent_24;
    OrderPercent_24.setString("6.670000");
    noSides_0_0.set(OrderPercent_24);
    OrderQtyData_24.insert(OrderPercent_24.getString());
    FIX::OrderQty OrderQty_32;
    OrderQty_32.setString("2042716");
    noSides_0_0.set(OrderQty_32);
    OrderQtyData_24.insert(OrderQty_32.getString());
    FIX::RoundingDirection RoundingDirection_24('0');
    noSides_0_0.set(RoundingDirection_24);
    OrderQtyData_24.insert(RoundingDirection_24.getString());
    FIX::RoundingModulus RoundingModulus_24;
    RoundingModulus_24.setString("13553477");
    noSides_0_0.set(RoundingModulus_24);
    OrderQtyData_24.insert(RoundingModulus_24.getString());
    all_values.push_back(OrderQtyData_24);

    // TrdAllocGrp
    // Group TrdAllocGrp.NoAllocs
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoAllocs noAllocs_0_1_0;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_0;
      FIX::AllocAccount AllocAccount_34("STRING_812944673");
      noAllocs_0_1_0.set(AllocAccount_34);
      TrdAllocGrp_NoAllocs_0.insert(AllocAccount_34.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_34(336007198);
      noAllocs_0_1_0.set(AllocAcctIDSource_34);
      TrdAllocGrp_NoAllocs_0.insert(AllocAcctIDSource_34.getString());
      FIX::AllocClearingFeeIndicator AllocClearingFeeIndicator_0("STRING_2137513960");
      noAllocs_0_1_0.set(AllocClearingFeeIndicator_0);
      TrdAllocGrp_NoAllocs_0.insert(AllocClearingFeeIndicator_0.getString());
      FIX::AllocCustomerCapacity AllocCustomerCapacity_8("STRING_850310587");
      noAllocs_0_1_0.set(AllocCustomerCapacity_8);
      TrdAllocGrp_NoAllocs_0.insert(AllocCustomerCapacity_8.getString());
      FIX::AllocMethod AllocMethod_5(3);
      noAllocs_0_1_0.set(AllocMethod_5);
      TrdAllocGrp_NoAllocs_0.insert(AllocMethod_5.getString());
      FIX::AllocQty AllocQty_32;
      AllocQty_32.setString("19027195");
      noAllocs_0_1_0.set(AllocQty_32);
      TrdAllocGrp_NoAllocs_0.insert(AllocQty_32.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_28("USD");
      noAllocs_0_1_0.set(AllocSettlCurrency_28);
      TrdAllocGrp_NoAllocs_0.insert(AllocSettlCurrency_28.getString());
      FIX::IndividualAllocID IndividualAllocID_33("STRING_375094151");
      noAllocs_0_1_0.set(IndividualAllocID_33);
      TrdAllocGrp_NoAllocs_0.insert(IndividualAllocID_33.getString());
      FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_8("STRING_312315991");
      noAllocs_0_1_0.set(SecondaryIndividualAllocID_8);
      TrdAllocGrp_NoAllocs_0.insert(SecondaryIndividualAllocID_8.getString());
      all_values.push_back(TrdAllocGrp_NoAllocs_0);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_38;
        FIX::Nested2PartyID Nested2PartyID_38("STRING_1597995809");
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyID_38);
        NestedParties2_NoNested2PartyIDs_38.insert(Nested2PartyID_38.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_38('1');
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyIDSource_38);
        NestedParties2_NoNested2PartyIDs_38.insert(Nested2PartyIDSource_38.getString());
        FIX::Nested2PartyRole Nested2PartyRole_38(1549717913);
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyRole_38);
        NestedParties2_NoNested2PartyIDs_38.insert(Nested2PartyRole_38.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_38);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_80;
          FIX::Nested2PartySubID Nested2PartySubID_80("STRING_484441182");
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubID_80);
          NstdPtys2SubGrp_NoNested2PartySubIDs_80.insert(Nested2PartySubID_80.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_80(1624444636);
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubIDType_80);
          NstdPtys2SubGrp_NoNested2PartySubIDs_80.insert(Nested2PartySubIDType_80.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_80);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        noAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      noSides_0_0.addGroup(noAllocs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoAllocs noAllocs_0_1_1;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_1;
      FIX::AllocAccount AllocAccount_35("STRING_1166352");
      noAllocs_0_1_1.set(AllocAccount_35);
      TrdAllocGrp_NoAllocs_1.insert(AllocAccount_35.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_35(1607366548);
      noAllocs_0_1_1.set(AllocAcctIDSource_35);
      TrdAllocGrp_NoAllocs_1.insert(AllocAcctIDSource_35.getString());
      FIX::AllocClearingFeeIndicator AllocClearingFeeIndicator_1("STRING_169061271");
      noAllocs_0_1_1.set(AllocClearingFeeIndicator_1);
      TrdAllocGrp_NoAllocs_1.insert(AllocClearingFeeIndicator_1.getString());
      FIX::AllocCustomerCapacity AllocCustomerCapacity_9("STRING_1847956738");
      noAllocs_0_1_1.set(AllocCustomerCapacity_9);
      TrdAllocGrp_NoAllocs_1.insert(AllocCustomerCapacity_9.getString());
      FIX::AllocMethod AllocMethod_6(3);
      noAllocs_0_1_1.set(AllocMethod_6);
      TrdAllocGrp_NoAllocs_1.insert(AllocMethod_6.getString());
      FIX::AllocQty AllocQty_33;
      AllocQty_33.setString("18731896");
      noAllocs_0_1_1.set(AllocQty_33);
      TrdAllocGrp_NoAllocs_1.insert(AllocQty_33.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_29("CHF");
      noAllocs_0_1_1.set(AllocSettlCurrency_29);
      TrdAllocGrp_NoAllocs_1.insert(AllocSettlCurrency_29.getString());
      FIX::IndividualAllocID IndividualAllocID_34("STRING_606308046");
      noAllocs_0_1_1.set(IndividualAllocID_34);
      TrdAllocGrp_NoAllocs_1.insert(IndividualAllocID_34.getString());
      FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_9("STRING_266150761");
      noAllocs_0_1_1.set(SecondaryIndividualAllocID_9);
      TrdAllocGrp_NoAllocs_1.insert(SecondaryIndividualAllocID_9.getString());
      all_values.push_back(TrdAllocGrp_NoAllocs_1);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_39;
        FIX::Nested2PartyID Nested2PartyID_39("STRING_695030961");
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyID_39);
        NestedParties2_NoNested2PartyIDs_39.insert(Nested2PartyID_39.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_39('1');
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyIDSource_39);
        NestedParties2_NoNested2PartyIDs_39.insert(Nested2PartyIDSource_39.getString());
        FIX::Nested2PartyRole Nested2PartyRole_39(1241513557);
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyRole_39);
        NestedParties2_NoNested2PartyIDs_39.insert(Nested2PartyRole_39.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_39);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_81;
          FIX::Nested2PartySubID Nested2PartySubID_81("STRING_1957505690");
          noNested2PartySubIDs_0_1_0_3_0.set(Nested2PartySubID_81);
          NstdPtys2SubGrp_NoNested2PartySubIDs_81.insert(Nested2PartySubID_81.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_81(1231543870);
          noNested2PartySubIDs_0_1_0_3_0.set(Nested2PartySubIDType_81);
          NstdPtys2SubGrp_NoNested2PartySubIDs_81.insert(Nested2PartySubIDType_81.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_81);

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_0);
        }
        noAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_40;
        FIX::Nested2PartyID Nested2PartyID_40("STRING_210802574");
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyID_40);
        NestedParties2_NoNested2PartyIDs_40.insert(Nested2PartyID_40.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_40('2');
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyIDSource_40);
        NestedParties2_NoNested2PartyIDs_40.insert(Nested2PartyIDSource_40.getString());
        FIX::Nested2PartyRole Nested2PartyRole_40(986779751);
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyRole_40);
        NestedParties2_NoNested2PartyIDs_40.insert(Nested2PartyRole_40.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_40);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_82;
          FIX::Nested2PartySubID Nested2PartySubID_82("STRING_624982349");
          noNested2PartySubIDs_0_1_1_3_0.set(Nested2PartySubID_82);
          NstdPtys2SubGrp_NoNested2PartySubIDs_82.insert(Nested2PartySubID_82.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_82(1361873902);
          noNested2PartySubIDs_0_1_1_3_0.set(Nested2PartySubIDType_82);
          NstdPtys2SubGrp_NoNested2PartySubIDs_82.insert(Nested2PartySubIDType_82.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_82);

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_83;
          FIX::Nested2PartySubID Nested2PartySubID_83("STRING_1964318271");
          noNested2PartySubIDs_0_1_1_3_1.set(Nested2PartySubID_83);
          NstdPtys2SubGrp_NoNested2PartySubIDs_83.insert(Nested2PartySubID_83.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_83(692638785);
          noNested2PartySubIDs_0_1_1_3_1.set(Nested2PartySubIDType_83);
          NstdPtys2SubGrp_NoNested2PartySubIDs_83.insert(Nested2PartySubIDType_83.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_83);

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_84;
          FIX::Nested2PartySubID Nested2PartySubID_84("STRING_812386063");
          noNested2PartySubIDs_0_1_1_3_2.set(Nested2PartySubID_84);
          NstdPtys2SubGrp_NoNested2PartySubIDs_84.insert(Nested2PartySubID_84.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_84(848910458);
          noNested2PartySubIDs_0_1_1_3_2.set(Nested2PartySubIDType_84);
          NstdPtys2SubGrp_NoNested2PartySubIDs_84.insert(Nested2PartySubIDType_84.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_84);

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_2);
        }
        noAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_1);
      }
      noSides_0_0.addGroup(noAllocs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoAllocs noAllocs_0_1_2;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_2;
      FIX::AllocAccount AllocAccount_36("STRING_94873050");
      noAllocs_0_1_2.set(AllocAccount_36);
      TrdAllocGrp_NoAllocs_2.insert(AllocAccount_36.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_36(54202805);
      noAllocs_0_1_2.set(AllocAcctIDSource_36);
      TrdAllocGrp_NoAllocs_2.insert(AllocAcctIDSource_36.getString());
      FIX::AllocClearingFeeIndicator AllocClearingFeeIndicator_2("STRING_1333351640");
      noAllocs_0_1_2.set(AllocClearingFeeIndicator_2);
      TrdAllocGrp_NoAllocs_2.insert(AllocClearingFeeIndicator_2.getString());
      FIX::AllocCustomerCapacity AllocCustomerCapacity_10("STRING_1719317686");
      noAllocs_0_1_2.set(AllocCustomerCapacity_10);
      TrdAllocGrp_NoAllocs_2.insert(AllocCustomerCapacity_10.getString());
      FIX::AllocMethod AllocMethod_7(3);
      noAllocs_0_1_2.set(AllocMethod_7);
      TrdAllocGrp_NoAllocs_2.insert(AllocMethod_7.getString());
      FIX::AllocQty AllocQty_34;
      AllocQty_34.setString("7932345");
      noAllocs_0_1_2.set(AllocQty_34);
      TrdAllocGrp_NoAllocs_2.insert(AllocQty_34.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_30("CHF");
      noAllocs_0_1_2.set(AllocSettlCurrency_30);
      TrdAllocGrp_NoAllocs_2.insert(AllocSettlCurrency_30.getString());
      FIX::IndividualAllocID IndividualAllocID_35("STRING_84937106");
      noAllocs_0_1_2.set(IndividualAllocID_35);
      TrdAllocGrp_NoAllocs_2.insert(IndividualAllocID_35.getString());
      FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_10("STRING_1614085003");
      noAllocs_0_1_2.set(SecondaryIndividualAllocID_10);
      TrdAllocGrp_NoAllocs_2.insert(SecondaryIndividualAllocID_10.getString());
      all_values.push_back(TrdAllocGrp_NoAllocs_2);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_41;
        FIX::Nested2PartyID Nested2PartyID_41("STRING_1817798009");
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyID_41);
        NestedParties2_NoNested2PartyIDs_41.insert(Nested2PartyID_41.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_41('7');
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyIDSource_41);
        NestedParties2_NoNested2PartyIDs_41.insert(Nested2PartyIDSource_41.getString());
        FIX::Nested2PartyRole Nested2PartyRole_41(1975126750);
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyRole_41);
        NestedParties2_NoNested2PartyIDs_41.insert(Nested2PartyRole_41.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_41);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_85;
          FIX::Nested2PartySubID Nested2PartySubID_85("STRING_767940362");
          noNested2PartySubIDs_0_2_0_3_0.set(Nested2PartySubID_85);
          NstdPtys2SubGrp_NoNested2PartySubIDs_85.insert(Nested2PartySubID_85.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_85(1449141594);
          noNested2PartySubIDs_0_2_0_3_0.set(Nested2PartySubIDType_85);
          NstdPtys2SubGrp_NoNested2PartySubIDs_85.insert(Nested2PartySubIDType_85.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_85);

          noNested2PartyIDs_0_2_2_0.addGroup(noNested2PartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_86;
          FIX::Nested2PartySubID Nested2PartySubID_86("STRING_701476822");
          noNested2PartySubIDs_0_2_0_3_1.set(Nested2PartySubID_86);
          NstdPtys2SubGrp_NoNested2PartySubIDs_86.insert(Nested2PartySubID_86.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_86(128432349);
          noNested2PartySubIDs_0_2_0_3_1.set(Nested2PartySubIDType_86);
          NstdPtys2SubGrp_NoNested2PartySubIDs_86.insert(Nested2PartySubIDType_86.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_86);

          noNested2PartyIDs_0_2_2_0.addGroup(noNested2PartySubIDs_0_2_0_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_87;
          FIX::Nested2PartySubID Nested2PartySubID_87("STRING_1259163636");
          noNested2PartySubIDs_0_2_0_3_2.set(Nested2PartySubID_87);
          NstdPtys2SubGrp_NoNested2PartySubIDs_87.insert(Nested2PartySubID_87.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_87(1933020692);
          noNested2PartySubIDs_0_2_0_3_2.set(Nested2PartySubIDType_87);
          NstdPtys2SubGrp_NoNested2PartySubIDs_87.insert(Nested2PartySubIDType_87.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_87);

          noNested2PartyIDs_0_2_2_0.addGroup(noNested2PartySubIDs_0_2_0_3_2);
        }
        noAllocs_0_1_2.addGroup(noNested2PartyIDs_0_2_2_0);
      }
      noSides_0_0.addGroup(noAllocs_0_1_2);
    }
    msg.addGroup(noSides_0_0);
  }
  // TrdInstrmtLegGrp
  // Group TrdInstrmtLegGrp.NoLegs
  {
    FIX50SP2::TradeCaptureReport::NoLegs noLegs_0_0;
    // TrdInstrmtLegGrp.NoLegs
    multiset<string> TrdInstrmtLegGrp_NoLegs_0;
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_3;
    LegCalculatedCcyLastQty_3.setString("14953725");
    noLegs_0_0.set(LegCalculatedCcyLastQty_3);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegCalculatedCcyLastQty_3.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_8(772316795);
    noLegs_0_0.set(LegCoveredOrUncovered_8);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegCoveredOrUncovered_8.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_8;
    LegCurrencyRatio_8.setString("19912372");
    noLegs_0_0.set(LegCurrencyRatio_8);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegCurrencyRatio_8.getString());
    FIX::LegDividendYield LegDividendYield_8;
    LegDividendYield_8.setString("48.730000");
    noLegs_0_0.set(LegDividendYield_8);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegDividendYield_8.getString());
    FIX::LegExecInst LegExecInst_8("MULTIPLECHARVALUE_2134190697");
    noLegs_0_0.set(LegExecInst_8);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegExecInst_8.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_3;
    LegGrossTradeAmt_3.setString("18080718");
    noLegs_0_0.set(LegGrossTradeAmt_3);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegGrossTradeAmt_3.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_3;
    LegLastForwardPoints_3.setString("6655100");
    noLegs_0_0.set(LegLastForwardPoints_3);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegLastForwardPoints_3.getString());
    FIX::LegLastPx LegLastPx_3;
    LegLastPx_3.setString("7990931");
    noLegs_0_0.set(LegLastPx_3);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegLastPx_3.getString());
    FIX::LegLastQty LegLastQty_3;
    LegLastQty_3.setString("5094986");
    noLegs_0_0.set(LegLastQty_3);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegLastQty_3.getString());
    FIX::LegNumber LegNumber_0(760383060);
    noLegs_0_0.set(LegNumber_0);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegNumber_0.getString());
    FIX::LegPositionEffect LegPositionEffect_8('8');
    noLegs_0_0.set(LegPositionEffect_8);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegPositionEffect_8.getString());
    FIX::LegQty LegQty_23;
    LegQty_23.setString("18428502");
    noLegs_0_0.set(LegQty_23);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegQty_23.getString());
    FIX::LegRefID LegRefID_21("STRING_332217098");
    noLegs_0_0.set(LegRefID_21);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegRefID_21.getString());
    FIX::LegReportID LegReportID_0("STRING_908665076");
    noLegs_0_0.set(LegReportID_0);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegReportID_0.getString());
    FIX::LegSettlCurrency LegSettlCurrency_8("EUR");
    noLegs_0_0.set(LegSettlCurrency_8);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegSettlCurrency_8.getString());
    FIX::LegSettlDate LegSettlDate_23("LOCALMKTDATE_664507323");
    noLegs_0_0.set(LegSettlDate_23);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegSettlDate_23.getString());
    FIX::LegSettlType LegSettlType_28('5');
    noLegs_0_0.set(LegSettlType_28);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegSettlType_28.getString());
    FIX::LegSwapType LegSwapType_28(4);
    noLegs_0_0.set(LegSwapType_28);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegSwapType_28.getString());
    FIX::LegVolatility LegVolatility_8;
    LegVolatility_8.setString("2259996");
    noLegs_0_0.set(LegVolatility_8);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegVolatility_8.getString());
    all_values.push_back(TrdInstrmtLegGrp_NoLegs_0);

    // InstrumentLeg
    multiset<string> InstrumentLeg_133;
    FIX::EncodedLegIssuer EncodedLegIssuer_133("DATA_243852639");
    noLegs_0_0.set(EncodedLegIssuer_133);
    InstrumentLeg_133.insert(EncodedLegIssuer_133.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_133(1760106811);
    noLegs_0_0.set(EncodedLegIssuerLen_133);
    InstrumentLeg_133.insert(EncodedLegIssuerLen_133.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_133("DATA_53642767");
    noLegs_0_0.set(EncodedLegSecurityDesc_133);
    InstrumentLeg_133.insert(EncodedLegSecurityDesc_133.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_133(1851299552);
    noLegs_0_0.set(EncodedLegSecurityDescLen_133);
    InstrumentLeg_133.insert(EncodedLegSecurityDescLen_133.getString());
    FIX::LegCFICode LegCFICode_133("STRING_380563525");
    noLegs_0_0.set(LegCFICode_133);
    InstrumentLeg_133.insert(LegCFICode_133.getString());
    FIX::LegContractMultiplier LegContractMultiplier_133;
    LegContractMultiplier_133.setString("15027843");
    noLegs_0_0.set(LegContractMultiplier_133);
    InstrumentLeg_133.insert(LegContractMultiplier_133.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_133(405292726);
    noLegs_0_0.set(LegContractMultiplierUnit_133);
    InstrumentLeg_133.insert(LegContractMultiplierUnit_133.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_133("MONTHYEAR_508995875");
    noLegs_0_0.set(LegContractSettlMonth_133);
    InstrumentLeg_133.insert(LegContractSettlMonth_133.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_133("COUNTRY_614464349");
    noLegs_0_0.set(LegCountryOfIssue_133);
    InstrumentLeg_133.insert(LegCountryOfIssue_133.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_133("LOCALMKTDATE_190829771");
    noLegs_0_0.set(LegCouponPaymentDate_133);
    InstrumentLeg_133.insert(LegCouponPaymentDate_133.getString());
    FIX::LegCouponRate LegCouponRate_133;
    LegCouponRate_133.setString("7.980000");
    noLegs_0_0.set(LegCouponRate_133);
    InstrumentLeg_133.insert(LegCouponRate_133.getString());
    FIX::LegCreditRating LegCreditRating_133("STRING_2109836873");
    noLegs_0_0.set(LegCreditRating_133);
    InstrumentLeg_133.insert(LegCreditRating_133.getString());
    FIX::LegCurrency LegCurrency_133("JPY");
    noLegs_0_0.set(LegCurrency_133);
    InstrumentLeg_133.insert(LegCurrency_133.getString());
    FIX::LegDatedDate LegDatedDate_133("LOCALMKTDATE_2082708098");
    noLegs_0_0.set(LegDatedDate_133);
    InstrumentLeg_133.insert(LegDatedDate_133.getString());
    FIX::LegExerciseStyle LegExerciseStyle_133(949853616);
    noLegs_0_0.set(LegExerciseStyle_133);
    InstrumentLeg_133.insert(LegExerciseStyle_133.getString());
    FIX::LegFactor LegFactor_133;
    LegFactor_133.setString("3525725");
    noLegs_0_0.set(LegFactor_133);
    InstrumentLeg_133.insert(LegFactor_133.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_133(600734460);
    noLegs_0_0.set(LegFlowScheduleType_133);
    InstrumentLeg_133.insert(LegFlowScheduleType_133.getString());
    FIX::LegInstrRegistry LegInstrRegistry_133("STRING_1748946729");
    noLegs_0_0.set(LegInstrRegistry_133);
    InstrumentLeg_133.insert(LegInstrRegistry_133.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_133("LOCALMKTDATE_862071172");
    noLegs_0_0.set(LegInterestAccrualDate_133);
    InstrumentLeg_133.insert(LegInterestAccrualDate_133.getString());
    FIX::LegIssueDate LegIssueDate_133("LOCALMKTDATE_1361117520");
    noLegs_0_0.set(LegIssueDate_133);
    InstrumentLeg_133.insert(LegIssueDate_133.getString());
    FIX::LegIssuer LegIssuer_133("STRING_454758999");
    noLegs_0_0.set(LegIssuer_133);
    InstrumentLeg_133.insert(LegIssuer_133.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_133("STRING_557437802");
    noLegs_0_0.set(LegLocaleOfIssue_133);
    InstrumentLeg_133.insert(LegLocaleOfIssue_133.getString());
    FIX::LegMaturityDate LegMaturityDate_133("LOCALMKTDATE_1693334618");
    noLegs_0_0.set(LegMaturityDate_133);
    InstrumentLeg_133.insert(LegMaturityDate_133.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_133("MONTHYEAR_1363424075");
    noLegs_0_0.set(LegMaturityMonthYear_133);
    InstrumentLeg_133.insert(LegMaturityMonthYear_133.getString());
    FIX::LegMaturityTime LegMaturityTime_133("TZTIMEONLY_1046038974");
    noLegs_0_0.set(LegMaturityTime_133);
    InstrumentLeg_133.insert(LegMaturityTime_133.getString());
    FIX::LegOptAttribute LegOptAttribute_133('1');
    noLegs_0_0.set(LegOptAttribute_133);
    InstrumentLeg_133.insert(LegOptAttribute_133.getString());
    FIX::LegOptionRatio LegOptionRatio_133;
    LegOptionRatio_133.setString("20279313");
    noLegs_0_0.set(LegOptionRatio_133);
    InstrumentLeg_133.insert(LegOptionRatio_133.getString());
    FIX::LegPool LegPool_133("STRING_1619577251");
    noLegs_0_0.set(LegPool_133);
    InstrumentLeg_133.insert(LegPool_133.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_133("STRING_1306160787");
    noLegs_0_0.set(LegPriceUnitOfMeasure_133);
    InstrumentLeg_133.insert(LegPriceUnitOfMeasure_133.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_133;
    LegPriceUnitOfMeasureQty_133.setString("1064474");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_133);
    InstrumentLeg_133.insert(LegPriceUnitOfMeasureQty_133.getString());
    FIX::LegProduct LegProduct_133(1863429890);
    noLegs_0_0.set(LegProduct_133);
    InstrumentLeg_133.insert(LegProduct_133.getString());
    FIX::LegPutOrCall LegPutOrCall_133(918783950);
    noLegs_0_0.set(LegPutOrCall_133);
    InstrumentLeg_133.insert(LegPutOrCall_133.getString());
    FIX::LegRatioQty LegRatioQty_133;
    LegRatioQty_133.setString("1600901");
    noLegs_0_0.set(LegRatioQty_133);
    InstrumentLeg_133.insert(LegRatioQty_133.getString());
    FIX::LegRedemptionDate LegRedemptionDate_133("LOCALMKTDATE_1567245794");
    noLegs_0_0.set(LegRedemptionDate_133);
    InstrumentLeg_133.insert(LegRedemptionDate_133.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_133("STRING_1299347475");
    noLegs_0_0.set(LegRepoCollateralSecurityType_133);
    InstrumentLeg_133.insert(LegRepoCollateralSecurityType_133.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_133;
    LegRepurchaseRate_133.setString("45.450000");
    noLegs_0_0.set(LegRepurchaseRate_133);
    InstrumentLeg_133.insert(LegRepurchaseRate_133.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_133(1972538521);
    noLegs_0_0.set(LegRepurchaseTerm_133);
    InstrumentLeg_133.insert(LegRepurchaseTerm_133.getString());
    FIX::LegSecurityDesc LegSecurityDesc_133("STRING_1808343350");
    noLegs_0_0.set(LegSecurityDesc_133);
    InstrumentLeg_133.insert(LegSecurityDesc_133.getString());
    FIX::LegSecurityExchange LegSecurityExchange_133("EXCHANGE_129855246");
    noLegs_0_0.set(LegSecurityExchange_133);
    InstrumentLeg_133.insert(LegSecurityExchange_133.getString());
    FIX::LegSecurityID LegSecurityID_133("STRING_15884644");
    noLegs_0_0.set(LegSecurityID_133);
    InstrumentLeg_133.insert(LegSecurityID_133.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_133("STRING_509090501");
    noLegs_0_0.set(LegSecurityIDSource_133);
    InstrumentLeg_133.insert(LegSecurityIDSource_133.getString());
    FIX::LegSecuritySubType LegSecuritySubType_133("STRING_92208471");
    noLegs_0_0.set(LegSecuritySubType_133);
    InstrumentLeg_133.insert(LegSecuritySubType_133.getString());
    FIX::LegSecurityType LegSecurityType_133("STRING_979031210");
    noLegs_0_0.set(LegSecurityType_133);
    InstrumentLeg_133.insert(LegSecurityType_133.getString());
    FIX::LegSide LegSide_133('1');
    noLegs_0_0.set(LegSide_133);
    InstrumentLeg_133.insert(LegSide_133.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_133("STRING_27432921");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_133);
    InstrumentLeg_133.insert(LegStateOrProvinceOfIssue_133.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_133("CHF");
    noLegs_0_0.set(LegStrikeCurrency_133);
    InstrumentLeg_133.insert(LegStrikeCurrency_133.getString());
    FIX::LegStrikePrice LegStrikePrice_133;
    LegStrikePrice_133.setString("6281673");
    noLegs_0_0.set(LegStrikePrice_133);
    InstrumentLeg_133.insert(LegStrikePrice_133.getString());
    FIX::LegSymbol LegSymbol_133("STRING_1530347907");
    noLegs_0_0.set(LegSymbol_133);
    InstrumentLeg_133.insert(LegSymbol_133.getString());
    FIX::LegSymbolSfx LegSymbolSfx_133("STRING_268234913");
    noLegs_0_0.set(LegSymbolSfx_133);
    InstrumentLeg_133.insert(LegSymbolSfx_133.getString());
    FIX::LegTimeUnit LegTimeUnit_133("STRING_1989284901");
    noLegs_0_0.set(LegTimeUnit_133);
    InstrumentLeg_133.insert(LegTimeUnit_133.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_133("STRING_1985106907");
    noLegs_0_0.set(LegUnitOfMeasure_133);
    InstrumentLeg_133.insert(LegUnitOfMeasure_133.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_133;
    LegUnitOfMeasureQty_133.setString("8256727");
    noLegs_0_0.set(LegUnitOfMeasureQty_133);
    InstrumentLeg_133.insert(LegUnitOfMeasureQty_133.getString());
    all_values.push_back(InstrumentLeg_133);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_270;
      FIX::LegSecurityAltID LegSecurityAltID_270("STRING_1201047334");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_270);
      LegSecAltIDGrp_NoLegSecurityAltID_270.insert(LegSecurityAltID_270.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_270("STRING_1871711690");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_270);
      LegSecAltIDGrp_NoLegSecurityAltID_270.insert(LegSecurityAltIDSource_270.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_270);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_58;
      FIX::LegStipulationType LegStipulationType_58("STRING_1081495085");
      noLegStipulations_0_1_0.set(LegStipulationType_58);
      LegStipulations_NoLegStipulations_58.insert(LegStipulationType_58.getString());
      FIX::LegStipulationValue LegStipulationValue_58("STRING_1343805293");
      noLegStipulations_0_1_0.set(LegStipulationValue_58);
      LegStipulations_NoLegStipulations_58.insert(LegStipulationValue_58.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_58);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_59;
      FIX::LegStipulationType LegStipulationType_59("STRING_312776387");
      noLegStipulations_0_1_1.set(LegStipulationType_59);
      LegStipulations_NoLegStipulations_59.insert(LegStipulationType_59.getString());
      FIX::LegStipulationValue LegStipulationValue_59("STRING_1187942501");
      noLegStipulations_0_1_1.set(LegStipulationValue_59);
      LegStipulations_NoLegStipulations_59.insert(LegStipulationValue_59.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_59);

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_131;
      FIX::NestedPartyID NestedPartyID_131("STRING_1231560337");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_131);
      NestedParties_NoNestedPartyIDs_131.insert(NestedPartyID_131.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_131('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_131);
      NestedParties_NoNestedPartyIDs_131.insert(NestedPartyIDSource_131.getString());
      FIX::NestedPartyRole NestedPartyRole_131(479513682);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_131);
      NestedParties_NoNestedPartyIDs_131.insert(NestedPartyRole_131.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_131);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_263;
        FIX::NestedPartySubID NestedPartySubID_263("STRING_863423582");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_263);
        NstdPtysSubGrp_NoNestedPartySubIDs_263.insert(NestedPartySubID_263.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_263(304568555);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_263);
        NstdPtysSubGrp_NoNestedPartySubIDs_263.insert(NestedPartySubIDType_263.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_263);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    // TradeCapLegUnderlyingsGrp
    // Group TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_0_1_0;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_0;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_0("STRING_993278828");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegCFICode_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegCFICode_0.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_0("LOCALMKTDATE_320453199");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityDate_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegMaturityDate_0.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_0("MONTHYEAR_553374368");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityMonthYear_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegMaturityMonthYear_0.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_0("TZTIMEONLY_1085487300");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityTime_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegMaturityTime_0.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_0('1');
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegOptAttribute_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegOptAttribute_0.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_0(1754449224);
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegPutOrCall_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegPutOrCall_0.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_0("STRING_1112920221");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityDesc_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecurityDesc_0.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_0("STRING_1080885588");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityExchange_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecurityExchange_0.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_0("STRING_1160612965");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityID_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecurityID_0.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_0("STRING_1741087603");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityIDSource_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecurityIDSource_0.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_0("STRING_463749848");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecuritySubType_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecuritySubType_0.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_0("STRING_1428847879");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityType_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecurityType_0.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_0;
      UnderlyingLegStrikePrice_0.setString("15828888");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegStrikePrice_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegStrikePrice_0.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_0("STRING_301373107");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSymbol_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSymbol_0.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_0("STRING_107036947");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSymbolSfx_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSymbolSfx_0.getString());
      all_values.push_back(UnderlyingLegInstrument_0);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_0("STRING_1502420441");
        noUnderlyingLegSecurityAltID_0_0_2_0.set(UnderlyingLegSecurityAltID_0);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0.insert(UnderlyingLegSecurityAltID_0.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_0("STRING_1978748637");
        noUnderlyingLegSecurityAltID_0_0_2_0.set(UnderlyingLegSecurityAltIDSource_0);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0.insert(UnderlyingLegSecurityAltIDSource_0.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0);

        noOfLegUnderlyings_0_1_0.addGroup(noUnderlyingLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_1("STRING_2124640328");
        noUnderlyingLegSecurityAltID_0_0_2_1.set(UnderlyingLegSecurityAltID_1);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1.insert(UnderlyingLegSecurityAltID_1.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_1("STRING_436431879");
        noUnderlyingLegSecurityAltID_0_0_2_1.set(UnderlyingLegSecurityAltIDSource_1);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1.insert(UnderlyingLegSecurityAltIDSource_1.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1);

        noOfLegUnderlyings_0_1_0.addGroup(noUnderlyingLegSecurityAltID_0_0_2_1);
      }
      noLegs_0_0.addGroup(noOfLegUnderlyings_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoLegs noLegs_0_1;
    // TrdInstrmtLegGrp.NoLegs
    multiset<string> TrdInstrmtLegGrp_NoLegs_1;
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_4;
    LegCalculatedCcyLastQty_4.setString("11750702");
    noLegs_0_1.set(LegCalculatedCcyLastQty_4);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegCalculatedCcyLastQty_4.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_9(289933068);
    noLegs_0_1.set(LegCoveredOrUncovered_9);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegCoveredOrUncovered_9.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_9;
    LegCurrencyRatio_9.setString("16243743");
    noLegs_0_1.set(LegCurrencyRatio_9);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegCurrencyRatio_9.getString());
    FIX::LegDividendYield LegDividendYield_9;
    LegDividendYield_9.setString("81.700000");
    noLegs_0_1.set(LegDividendYield_9);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegDividendYield_9.getString());
    FIX::LegExecInst LegExecInst_9("MULTIPLECHARVALUE_1521493405");
    noLegs_0_1.set(LegExecInst_9);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegExecInst_9.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_4;
    LegGrossTradeAmt_4.setString("8249234");
    noLegs_0_1.set(LegGrossTradeAmt_4);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegGrossTradeAmt_4.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_4;
    LegLastForwardPoints_4.setString("5668518");
    noLegs_0_1.set(LegLastForwardPoints_4);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegLastForwardPoints_4.getString());
    FIX::LegLastPx LegLastPx_4;
    LegLastPx_4.setString("19049175");
    noLegs_0_1.set(LegLastPx_4);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegLastPx_4.getString());
    FIX::LegLastQty LegLastQty_4;
    LegLastQty_4.setString("16883469");
    noLegs_0_1.set(LegLastQty_4);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegLastQty_4.getString());
    FIX::LegNumber LegNumber_1(871420408);
    noLegs_0_1.set(LegNumber_1);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegNumber_1.getString());
    FIX::LegPositionEffect LegPositionEffect_9('1');
    noLegs_0_1.set(LegPositionEffect_9);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegPositionEffect_9.getString());
    FIX::LegQty LegQty_24;
    LegQty_24.setString("5341421");
    noLegs_0_1.set(LegQty_24);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegQty_24.getString());
    FIX::LegRefID LegRefID_22("STRING_1191873608");
    noLegs_0_1.set(LegRefID_22);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegRefID_22.getString());
    FIX::LegReportID LegReportID_1("STRING_355092158");
    noLegs_0_1.set(LegReportID_1);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegReportID_1.getString());
    FIX::LegSettlCurrency LegSettlCurrency_9("USD");
    noLegs_0_1.set(LegSettlCurrency_9);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegSettlCurrency_9.getString());
    FIX::LegSettlDate LegSettlDate_24("LOCALMKTDATE_2109541382");
    noLegs_0_1.set(LegSettlDate_24);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegSettlDate_24.getString());
    FIX::LegSettlType LegSettlType_29('5');
    noLegs_0_1.set(LegSettlType_29);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegSettlType_29.getString());
    FIX::LegSwapType LegSwapType_29(4);
    noLegs_0_1.set(LegSwapType_29);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegSwapType_29.getString());
    FIX::LegVolatility LegVolatility_9;
    LegVolatility_9.setString("11226707");
    noLegs_0_1.set(LegVolatility_9);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegVolatility_9.getString());
    all_values.push_back(TrdInstrmtLegGrp_NoLegs_1);

    // InstrumentLeg
    multiset<string> InstrumentLeg_134;
    FIX::EncodedLegIssuer EncodedLegIssuer_134("DATA_178670008");
    noLegs_0_1.set(EncodedLegIssuer_134);
    InstrumentLeg_134.insert(EncodedLegIssuer_134.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_134(1888509806);
    noLegs_0_1.set(EncodedLegIssuerLen_134);
    InstrumentLeg_134.insert(EncodedLegIssuerLen_134.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_134("DATA_404034931");
    noLegs_0_1.set(EncodedLegSecurityDesc_134);
    InstrumentLeg_134.insert(EncodedLegSecurityDesc_134.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_134(1761558865);
    noLegs_0_1.set(EncodedLegSecurityDescLen_134);
    InstrumentLeg_134.insert(EncodedLegSecurityDescLen_134.getString());
    FIX::LegCFICode LegCFICode_134("STRING_42399265");
    noLegs_0_1.set(LegCFICode_134);
    InstrumentLeg_134.insert(LegCFICode_134.getString());
    FIX::LegContractMultiplier LegContractMultiplier_134;
    LegContractMultiplier_134.setString("5110718");
    noLegs_0_1.set(LegContractMultiplier_134);
    InstrumentLeg_134.insert(LegContractMultiplier_134.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_134(584616297);
    noLegs_0_1.set(LegContractMultiplierUnit_134);
    InstrumentLeg_134.insert(LegContractMultiplierUnit_134.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_134("MONTHYEAR_1544819707");
    noLegs_0_1.set(LegContractSettlMonth_134);
    InstrumentLeg_134.insert(LegContractSettlMonth_134.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_134("COUNTRY_342336867");
    noLegs_0_1.set(LegCountryOfIssue_134);
    InstrumentLeg_134.insert(LegCountryOfIssue_134.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_134("LOCALMKTDATE_561772977");
    noLegs_0_1.set(LegCouponPaymentDate_134);
    InstrumentLeg_134.insert(LegCouponPaymentDate_134.getString());
    FIX::LegCouponRate LegCouponRate_134;
    LegCouponRate_134.setString("15.860000");
    noLegs_0_1.set(LegCouponRate_134);
    InstrumentLeg_134.insert(LegCouponRate_134.getString());
    FIX::LegCreditRating LegCreditRating_134("STRING_1517407149");
    noLegs_0_1.set(LegCreditRating_134);
    InstrumentLeg_134.insert(LegCreditRating_134.getString());
    FIX::LegCurrency LegCurrency_134("JPY");
    noLegs_0_1.set(LegCurrency_134);
    InstrumentLeg_134.insert(LegCurrency_134.getString());
    FIX::LegDatedDate LegDatedDate_134("LOCALMKTDATE_1604745320");
    noLegs_0_1.set(LegDatedDate_134);
    InstrumentLeg_134.insert(LegDatedDate_134.getString());
    FIX::LegExerciseStyle LegExerciseStyle_134(225715803);
    noLegs_0_1.set(LegExerciseStyle_134);
    InstrumentLeg_134.insert(LegExerciseStyle_134.getString());
    FIX::LegFactor LegFactor_134;
    LegFactor_134.setString("1355820");
    noLegs_0_1.set(LegFactor_134);
    InstrumentLeg_134.insert(LegFactor_134.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_134(24113525);
    noLegs_0_1.set(LegFlowScheduleType_134);
    InstrumentLeg_134.insert(LegFlowScheduleType_134.getString());
    FIX::LegInstrRegistry LegInstrRegistry_134("STRING_2130633373");
    noLegs_0_1.set(LegInstrRegistry_134);
    InstrumentLeg_134.insert(LegInstrRegistry_134.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_134("LOCALMKTDATE_1823929087");
    noLegs_0_1.set(LegInterestAccrualDate_134);
    InstrumentLeg_134.insert(LegInterestAccrualDate_134.getString());
    FIX::LegIssueDate LegIssueDate_134("LOCALMKTDATE_895533933");
    noLegs_0_1.set(LegIssueDate_134);
    InstrumentLeg_134.insert(LegIssueDate_134.getString());
    FIX::LegIssuer LegIssuer_134("STRING_1932351163");
    noLegs_0_1.set(LegIssuer_134);
    InstrumentLeg_134.insert(LegIssuer_134.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_134("STRING_210587619");
    noLegs_0_1.set(LegLocaleOfIssue_134);
    InstrumentLeg_134.insert(LegLocaleOfIssue_134.getString());
    FIX::LegMaturityDate LegMaturityDate_134("LOCALMKTDATE_2087407541");
    noLegs_0_1.set(LegMaturityDate_134);
    InstrumentLeg_134.insert(LegMaturityDate_134.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_134("MONTHYEAR_139959674");
    noLegs_0_1.set(LegMaturityMonthYear_134);
    InstrumentLeg_134.insert(LegMaturityMonthYear_134.getString());
    FIX::LegMaturityTime LegMaturityTime_134("TZTIMEONLY_1830217099");
    noLegs_0_1.set(LegMaturityTime_134);
    InstrumentLeg_134.insert(LegMaturityTime_134.getString());
    FIX::LegOptAttribute LegOptAttribute_134('2');
    noLegs_0_1.set(LegOptAttribute_134);
    InstrumentLeg_134.insert(LegOptAttribute_134.getString());
    FIX::LegOptionRatio LegOptionRatio_134;
    LegOptionRatio_134.setString("1020174");
    noLegs_0_1.set(LegOptionRatio_134);
    InstrumentLeg_134.insert(LegOptionRatio_134.getString());
    FIX::LegPool LegPool_134("STRING_267799505");
    noLegs_0_1.set(LegPool_134);
    InstrumentLeg_134.insert(LegPool_134.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_134("STRING_1708558222");
    noLegs_0_1.set(LegPriceUnitOfMeasure_134);
    InstrumentLeg_134.insert(LegPriceUnitOfMeasure_134.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_134;
    LegPriceUnitOfMeasureQty_134.setString("12246881");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_134);
    InstrumentLeg_134.insert(LegPriceUnitOfMeasureQty_134.getString());
    FIX::LegProduct LegProduct_134(446469513);
    noLegs_0_1.set(LegProduct_134);
    InstrumentLeg_134.insert(LegProduct_134.getString());
    FIX::LegPutOrCall LegPutOrCall_134(1449584380);
    noLegs_0_1.set(LegPutOrCall_134);
    InstrumentLeg_134.insert(LegPutOrCall_134.getString());
    FIX::LegRatioQty LegRatioQty_134;
    LegRatioQty_134.setString("16287230");
    noLegs_0_1.set(LegRatioQty_134);
    InstrumentLeg_134.insert(LegRatioQty_134.getString());
    FIX::LegRedemptionDate LegRedemptionDate_134("LOCALMKTDATE_60544730");
    noLegs_0_1.set(LegRedemptionDate_134);
    InstrumentLeg_134.insert(LegRedemptionDate_134.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_134("STRING_1491983646");
    noLegs_0_1.set(LegRepoCollateralSecurityType_134);
    InstrumentLeg_134.insert(LegRepoCollateralSecurityType_134.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_134;
    LegRepurchaseRate_134.setString("49.170000");
    noLegs_0_1.set(LegRepurchaseRate_134);
    InstrumentLeg_134.insert(LegRepurchaseRate_134.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_134(645161027);
    noLegs_0_1.set(LegRepurchaseTerm_134);
    InstrumentLeg_134.insert(LegRepurchaseTerm_134.getString());
    FIX::LegSecurityDesc LegSecurityDesc_134("STRING_889319705");
    noLegs_0_1.set(LegSecurityDesc_134);
    InstrumentLeg_134.insert(LegSecurityDesc_134.getString());
    FIX::LegSecurityExchange LegSecurityExchange_134("EXCHANGE_334648136");
    noLegs_0_1.set(LegSecurityExchange_134);
    InstrumentLeg_134.insert(LegSecurityExchange_134.getString());
    FIX::LegSecurityID LegSecurityID_134("STRING_1206934005");
    noLegs_0_1.set(LegSecurityID_134);
    InstrumentLeg_134.insert(LegSecurityID_134.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_134("STRING_723087643");
    noLegs_0_1.set(LegSecurityIDSource_134);
    InstrumentLeg_134.insert(LegSecurityIDSource_134.getString());
    FIX::LegSecuritySubType LegSecuritySubType_134("STRING_1852055286");
    noLegs_0_1.set(LegSecuritySubType_134);
    InstrumentLeg_134.insert(LegSecuritySubType_134.getString());
    FIX::LegSecurityType LegSecurityType_134("STRING_2058640050");
    noLegs_0_1.set(LegSecurityType_134);
    InstrumentLeg_134.insert(LegSecurityType_134.getString());
    FIX::LegSide LegSide_134('3');
    noLegs_0_1.set(LegSide_134);
    InstrumentLeg_134.insert(LegSide_134.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_134("STRING_1309316958");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_134);
    InstrumentLeg_134.insert(LegStateOrProvinceOfIssue_134.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_134("EUR");
    noLegs_0_1.set(LegStrikeCurrency_134);
    InstrumentLeg_134.insert(LegStrikeCurrency_134.getString());
    FIX::LegStrikePrice LegStrikePrice_134;
    LegStrikePrice_134.setString("13334304");
    noLegs_0_1.set(LegStrikePrice_134);
    InstrumentLeg_134.insert(LegStrikePrice_134.getString());
    FIX::LegSymbol LegSymbol_134("STRING_120021931");
    noLegs_0_1.set(LegSymbol_134);
    InstrumentLeg_134.insert(LegSymbol_134.getString());
    FIX::LegSymbolSfx LegSymbolSfx_134("STRING_1993257489");
    noLegs_0_1.set(LegSymbolSfx_134);
    InstrumentLeg_134.insert(LegSymbolSfx_134.getString());
    FIX::LegTimeUnit LegTimeUnit_134("STRING_81480768");
    noLegs_0_1.set(LegTimeUnit_134);
    InstrumentLeg_134.insert(LegTimeUnit_134.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_134("STRING_2052373094");
    noLegs_0_1.set(LegUnitOfMeasure_134);
    InstrumentLeg_134.insert(LegUnitOfMeasure_134.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_134;
    LegUnitOfMeasureQty_134.setString("563614");
    noLegs_0_1.set(LegUnitOfMeasureQty_134);
    InstrumentLeg_134.insert(LegUnitOfMeasureQty_134.getString());
    all_values.push_back(InstrumentLeg_134);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_271;
      FIX::LegSecurityAltID LegSecurityAltID_271("STRING_44849120");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_271);
      LegSecAltIDGrp_NoLegSecurityAltID_271.insert(LegSecurityAltID_271.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_271("STRING_1886578560");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_271);
      LegSecAltIDGrp_NoLegSecurityAltID_271.insert(LegSecurityAltIDSource_271.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_271);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_272;
      FIX::LegSecurityAltID LegSecurityAltID_272("STRING_305202925");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_272);
      LegSecAltIDGrp_NoLegSecurityAltID_272.insert(LegSecurityAltID_272.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_272("STRING_146866529");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_272);
      LegSecAltIDGrp_NoLegSecurityAltID_272.insert(LegSecurityAltIDSource_272.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_272);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_60;
      FIX::LegStipulationType LegStipulationType_60("STRING_2013761147");
      noLegStipulations_1_1_0.set(LegStipulationType_60);
      LegStipulations_NoLegStipulations_60.insert(LegStipulationType_60.getString());
      FIX::LegStipulationValue LegStipulationValue_60("STRING_1371554637");
      noLegStipulations_1_1_0.set(LegStipulationValue_60);
      LegStipulations_NoLegStipulations_60.insert(LegStipulationValue_60.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_60);

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_132;
      FIX::NestedPartyID NestedPartyID_132("STRING_1315861880");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_132);
      NestedParties_NoNestedPartyIDs_132.insert(NestedPartyID_132.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_132('8');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_132);
      NestedParties_NoNestedPartyIDs_132.insert(NestedPartyIDSource_132.getString());
      FIX::NestedPartyRole NestedPartyRole_132(513908661);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_132);
      NestedParties_NoNestedPartyIDs_132.insert(NestedPartyRole_132.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_132);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_264;
        FIX::NestedPartySubID NestedPartySubID_264("STRING_845105298");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_264);
        NstdPtysSubGrp_NoNestedPartySubIDs_264.insert(NestedPartySubID_264.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_264(1159069688);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_264);
        NstdPtysSubGrp_NoNestedPartySubIDs_264.insert(NestedPartySubIDType_264.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_264);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    // TradeCapLegUnderlyingsGrp
    // Group TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_1_1_0;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_1;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_1("STRING_1179753435");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegCFICode_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegCFICode_1.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_1("LOCALMKTDATE_218520045");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegMaturityDate_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegMaturityDate_1.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_1("MONTHYEAR_125285578");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegMaturityMonthYear_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegMaturityMonthYear_1.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_1("TZTIMEONLY_884325073");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegMaturityTime_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegMaturityTime_1.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_1('1');
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegOptAttribute_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegOptAttribute_1.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_1(159031891);
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegPutOrCall_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegPutOrCall_1.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_1("STRING_46158383");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecurityDesc_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecurityDesc_1.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_1("STRING_266548653");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecurityExchange_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecurityExchange_1.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_1("STRING_328360293");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecurityID_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecurityID_1.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_1("STRING_1379588866");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecurityIDSource_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecurityIDSource_1.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_1("STRING_386570584");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecuritySubType_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecuritySubType_1.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_1("STRING_174134134");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecurityType_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecurityType_1.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_1;
      UnderlyingLegStrikePrice_1.setString("14610696");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegStrikePrice_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegStrikePrice_1.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_1("STRING_291460031");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSymbol_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSymbol_1.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_1("STRING_230495594");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSymbolSfx_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSymbolSfx_1.getString());
      all_values.push_back(UnderlyingLegInstrument_1);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_0_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_2("STRING_336309151");
        noUnderlyingLegSecurityAltID_1_0_2_0.set(UnderlyingLegSecurityAltID_2);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2.insert(UnderlyingLegSecurityAltID_2.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_2("STRING_2117074154");
        noUnderlyingLegSecurityAltID_1_0_2_0.set(UnderlyingLegSecurityAltIDSource_2);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2.insert(UnderlyingLegSecurityAltIDSource_2.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2);

        noOfLegUnderlyings_1_1_0.addGroup(noUnderlyingLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_0_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_3("STRING_1787677222");
        noUnderlyingLegSecurityAltID_1_0_2_1.set(UnderlyingLegSecurityAltID_3);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3.insert(UnderlyingLegSecurityAltID_3.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_3("STRING_483175680");
        noUnderlyingLegSecurityAltID_1_0_2_1.set(UnderlyingLegSecurityAltIDSource_3);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3.insert(UnderlyingLegSecurityAltIDSource_3.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3);

        noOfLegUnderlyings_1_1_0.addGroup(noUnderlyingLegSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_0_2_2;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_4("STRING_2123968571");
        noUnderlyingLegSecurityAltID_1_0_2_2.set(UnderlyingLegSecurityAltID_4);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4.insert(UnderlyingLegSecurityAltID_4.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_4("STRING_1653954721");
        noUnderlyingLegSecurityAltID_1_0_2_2.set(UnderlyingLegSecurityAltIDSource_4);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4.insert(UnderlyingLegSecurityAltIDSource_4.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4);

        noOfLegUnderlyings_1_1_0.addGroup(noUnderlyingLegSecurityAltID_1_0_2_2);
      }
      noLegs_0_1.addGroup(noOfLegUnderlyings_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_1_1_1;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_2;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_2("STRING_1854730318");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegCFICode_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegCFICode_2.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_2("LOCALMKTDATE_429848854");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegMaturityDate_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegMaturityDate_2.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_2("MONTHYEAR_822332953");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegMaturityMonthYear_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegMaturityMonthYear_2.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_2("TZTIMEONLY_560040699");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegMaturityTime_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegMaturityTime_2.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_2('9');
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegOptAttribute_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegOptAttribute_2.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_2(1482694831);
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegPutOrCall_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegPutOrCall_2.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_2("STRING_1405145997");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecurityDesc_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecurityDesc_2.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_2("STRING_2102827203");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecurityExchange_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecurityExchange_2.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_2("STRING_884892766");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecurityID_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecurityID_2.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_2("STRING_437415784");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecurityIDSource_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecurityIDSource_2.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_2("STRING_173863601");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecuritySubType_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecuritySubType_2.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_2("STRING_1010178344");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecurityType_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecurityType_2.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_2;
      UnderlyingLegStrikePrice_2.setString("13217408");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegStrikePrice_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegStrikePrice_2.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_2("STRING_303540049");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSymbol_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSymbol_2.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_2("STRING_1169210236");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSymbolSfx_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSymbolSfx_2.getString());
      all_values.push_back(UnderlyingLegInstrument_2);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_1_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_5;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_5("STRING_570088702");
        noUnderlyingLegSecurityAltID_1_1_2_0.set(UnderlyingLegSecurityAltID_5);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_5.insert(UnderlyingLegSecurityAltID_5.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_5("STRING_1497570529");
        noUnderlyingLegSecurityAltID_1_1_2_0.set(UnderlyingLegSecurityAltIDSource_5);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_5.insert(UnderlyingLegSecurityAltIDSource_5.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_5);

        noOfLegUnderlyings_1_1_1.addGroup(noUnderlyingLegSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_1_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_6;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_6("STRING_600004458");
        noUnderlyingLegSecurityAltID_1_1_2_1.set(UnderlyingLegSecurityAltID_6);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_6.insert(UnderlyingLegSecurityAltID_6.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_6("STRING_956659287");
        noUnderlyingLegSecurityAltID_1_1_2_1.set(UnderlyingLegSecurityAltIDSource_6);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_6.insert(UnderlyingLegSecurityAltIDSource_6.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_6);

        noOfLegUnderlyings_1_1_1.addGroup(noUnderlyingLegSecurityAltID_1_1_2_1);
      }
      noLegs_0_1.addGroup(noOfLegUnderlyings_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_1_1_2;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_3;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_3("STRING_1671704663");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegCFICode_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegCFICode_3.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_3("LOCALMKTDATE_2061074093");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegMaturityDate_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegMaturityDate_3.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_3("MONTHYEAR_1248119318");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegMaturityMonthYear_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegMaturityMonthYear_3.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_3("TZTIMEONLY_1902200257");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegMaturityTime_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegMaturityTime_3.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_3('1');
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegOptAttribute_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegOptAttribute_3.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_3(1584428469);
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegPutOrCall_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegPutOrCall_3.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_3("STRING_1871790764");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSecurityDesc_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSecurityDesc_3.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_3("STRING_1036258315");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSecurityExchange_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSecurityExchange_3.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_3("STRING_2067604150");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSecurityID_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSecurityID_3.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_3("STRING_1848275687");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSecurityIDSource_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSecurityIDSource_3.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_3("STRING_542729389");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSecuritySubType_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSecuritySubType_3.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_3("STRING_1774850820");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSecurityType_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSecurityType_3.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_3;
      UnderlyingLegStrikePrice_3.setString("1306408");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegStrikePrice_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegStrikePrice_3.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_3("STRING_1365062342");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSymbol_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSymbol_3.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_3("STRING_187407871");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSymbolSfx_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSymbolSfx_3.getString());
      all_values.push_back(UnderlyingLegInstrument_3);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_2_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_7;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_7("STRING_700273526");
        noUnderlyingLegSecurityAltID_1_2_2_0.set(UnderlyingLegSecurityAltID_7);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_7.insert(UnderlyingLegSecurityAltID_7.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_7("STRING_1592553868");
        noUnderlyingLegSecurityAltID_1_2_2_0.set(UnderlyingLegSecurityAltIDSource_7);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_7.insert(UnderlyingLegSecurityAltIDSource_7.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_7);

        noOfLegUnderlyings_1_1_2.addGroup(noUnderlyingLegSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_2_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_8;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_8("STRING_1029741964");
        noUnderlyingLegSecurityAltID_1_2_2_1.set(UnderlyingLegSecurityAltID_8);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_8.insert(UnderlyingLegSecurityAltID_8.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_8("STRING_1585166292");
        noUnderlyingLegSecurityAltID_1_2_2_1.set(UnderlyingLegSecurityAltIDSource_8);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_8.insert(UnderlyingLegSecurityAltIDSource_8.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_8);

        noOfLegUnderlyings_1_1_2.addGroup(noUnderlyingLegSecurityAltID_1_2_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_2_2_2;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_9;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_9("STRING_2029969653");
        noUnderlyingLegSecurityAltID_1_2_2_2.set(UnderlyingLegSecurityAltID_9);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_9.insert(UnderlyingLegSecurityAltID_9.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_9("STRING_1203605565");
        noUnderlyingLegSecurityAltID_1_2_2_2.set(UnderlyingLegSecurityAltIDSource_9);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_9.insert(UnderlyingLegSecurityAltIDSource_9.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_9);

        noOfLegUnderlyings_1_1_2.addGroup(noUnderlyingLegSecurityAltID_1_2_2_2);
      }
      noLegs_0_1.addGroup(noOfLegUnderlyings_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::TradeCaptureReport::NoLegs noLegs_0_2;
    // TrdInstrmtLegGrp.NoLegs
    multiset<string> TrdInstrmtLegGrp_NoLegs_2;
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_5;
    LegCalculatedCcyLastQty_5.setString("4478609");
    noLegs_0_2.set(LegCalculatedCcyLastQty_5);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegCalculatedCcyLastQty_5.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_10(1204226862);
    noLegs_0_2.set(LegCoveredOrUncovered_10);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegCoveredOrUncovered_10.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_10;
    LegCurrencyRatio_10.setString("15071456");
    noLegs_0_2.set(LegCurrencyRatio_10);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegCurrencyRatio_10.getString());
    FIX::LegDividendYield LegDividendYield_10;
    LegDividendYield_10.setString("12.250000");
    noLegs_0_2.set(LegDividendYield_10);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegDividendYield_10.getString());
    FIX::LegExecInst LegExecInst_10("MULTIPLECHARVALUE_424642455");
    noLegs_0_2.set(LegExecInst_10);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegExecInst_10.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_5;
    LegGrossTradeAmt_5.setString("20772343");
    noLegs_0_2.set(LegGrossTradeAmt_5);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegGrossTradeAmt_5.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_5;
    LegLastForwardPoints_5.setString("9671581");
    noLegs_0_2.set(LegLastForwardPoints_5);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegLastForwardPoints_5.getString());
    FIX::LegLastPx LegLastPx_5;
    LegLastPx_5.setString("10246469");
    noLegs_0_2.set(LegLastPx_5);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegLastPx_5.getString());
    FIX::LegLastQty LegLastQty_5;
    LegLastQty_5.setString("8864099");
    noLegs_0_2.set(LegLastQty_5);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegLastQty_5.getString());
    FIX::LegNumber LegNumber_2(491379121);
    noLegs_0_2.set(LegNumber_2);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegNumber_2.getString());
    FIX::LegPositionEffect LegPositionEffect_10('9');
    noLegs_0_2.set(LegPositionEffect_10);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegPositionEffect_10.getString());
    FIX::LegQty LegQty_25;
    LegQty_25.setString("21345292");
    noLegs_0_2.set(LegQty_25);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegQty_25.getString());
    FIX::LegRefID LegRefID_23("STRING_246095730");
    noLegs_0_2.set(LegRefID_23);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegRefID_23.getString());
    FIX::LegReportID LegReportID_2("STRING_186818452");
    noLegs_0_2.set(LegReportID_2);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegReportID_2.getString());
    FIX::LegSettlCurrency LegSettlCurrency_10("GBP");
    noLegs_0_2.set(LegSettlCurrency_10);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegSettlCurrency_10.getString());
    FIX::LegSettlDate LegSettlDate_25("LOCALMKTDATE_1223076767");
    noLegs_0_2.set(LegSettlDate_25);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegSettlDate_25.getString());
    FIX::LegSettlType LegSettlType_30('1');
    noLegs_0_2.set(LegSettlType_30);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegSettlType_30.getString());
    FIX::LegSwapType LegSwapType_30(4);
    noLegs_0_2.set(LegSwapType_30);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegSwapType_30.getString());
    FIX::LegVolatility LegVolatility_10;
    LegVolatility_10.setString("17658061");
    noLegs_0_2.set(LegVolatility_10);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegVolatility_10.getString());
    all_values.push_back(TrdInstrmtLegGrp_NoLegs_2);

    // InstrumentLeg
    multiset<string> InstrumentLeg_135;
    FIX::EncodedLegIssuer EncodedLegIssuer_135("DATA_1118961769");
    noLegs_0_2.set(EncodedLegIssuer_135);
    InstrumentLeg_135.insert(EncodedLegIssuer_135.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_135(1949319427);
    noLegs_0_2.set(EncodedLegIssuerLen_135);
    InstrumentLeg_135.insert(EncodedLegIssuerLen_135.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_135("DATA_983384851");
    noLegs_0_2.set(EncodedLegSecurityDesc_135);
    InstrumentLeg_135.insert(EncodedLegSecurityDesc_135.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_135(1306369640);
    noLegs_0_2.set(EncodedLegSecurityDescLen_135);
    InstrumentLeg_135.insert(EncodedLegSecurityDescLen_135.getString());
    FIX::LegCFICode LegCFICode_135("STRING_876234188");
    noLegs_0_2.set(LegCFICode_135);
    InstrumentLeg_135.insert(LegCFICode_135.getString());
    FIX::LegContractMultiplier LegContractMultiplier_135;
    LegContractMultiplier_135.setString("16836583");
    noLegs_0_2.set(LegContractMultiplier_135);
    InstrumentLeg_135.insert(LegContractMultiplier_135.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_135(751439860);
    noLegs_0_2.set(LegContractMultiplierUnit_135);
    InstrumentLeg_135.insert(LegContractMultiplierUnit_135.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_135("MONTHYEAR_1905976152");
    noLegs_0_2.set(LegContractSettlMonth_135);
    InstrumentLeg_135.insert(LegContractSettlMonth_135.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_135("COUNTRY_1121341021");
    noLegs_0_2.set(LegCountryOfIssue_135);
    InstrumentLeg_135.insert(LegCountryOfIssue_135.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_135("LOCALMKTDATE_633925865");
    noLegs_0_2.set(LegCouponPaymentDate_135);
    InstrumentLeg_135.insert(LegCouponPaymentDate_135.getString());
    FIX::LegCouponRate LegCouponRate_135;
    LegCouponRate_135.setString("80.690000");
    noLegs_0_2.set(LegCouponRate_135);
    InstrumentLeg_135.insert(LegCouponRate_135.getString());
    FIX::LegCreditRating LegCreditRating_135("STRING_1569202010");
    noLegs_0_2.set(LegCreditRating_135);
    InstrumentLeg_135.insert(LegCreditRating_135.getString());
    FIX::LegCurrency LegCurrency_135("CHF");
    noLegs_0_2.set(LegCurrency_135);
    InstrumentLeg_135.insert(LegCurrency_135.getString());
    FIX::LegDatedDate LegDatedDate_135("LOCALMKTDATE_1038789587");
    noLegs_0_2.set(LegDatedDate_135);
    InstrumentLeg_135.insert(LegDatedDate_135.getString());
    FIX::LegExerciseStyle LegExerciseStyle_135(115311535);
    noLegs_0_2.set(LegExerciseStyle_135);
    InstrumentLeg_135.insert(LegExerciseStyle_135.getString());
    FIX::LegFactor LegFactor_135;
    LegFactor_135.setString("2515107");
    noLegs_0_2.set(LegFactor_135);
    InstrumentLeg_135.insert(LegFactor_135.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_135(2005947693);
    noLegs_0_2.set(LegFlowScheduleType_135);
    InstrumentLeg_135.insert(LegFlowScheduleType_135.getString());
    FIX::LegInstrRegistry LegInstrRegistry_135("STRING_1139958448");
    noLegs_0_2.set(LegInstrRegistry_135);
    InstrumentLeg_135.insert(LegInstrRegistry_135.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_135("LOCALMKTDATE_1137920659");
    noLegs_0_2.set(LegInterestAccrualDate_135);
    InstrumentLeg_135.insert(LegInterestAccrualDate_135.getString());
    FIX::LegIssueDate LegIssueDate_135("LOCALMKTDATE_349843166");
    noLegs_0_2.set(LegIssueDate_135);
    InstrumentLeg_135.insert(LegIssueDate_135.getString());
    FIX::LegIssuer LegIssuer_135("STRING_2078195807");
    noLegs_0_2.set(LegIssuer_135);
    InstrumentLeg_135.insert(LegIssuer_135.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_135("STRING_1124966284");
    noLegs_0_2.set(LegLocaleOfIssue_135);
    InstrumentLeg_135.insert(LegLocaleOfIssue_135.getString());
    FIX::LegMaturityDate LegMaturityDate_135("LOCALMKTDATE_595938897");
    noLegs_0_2.set(LegMaturityDate_135);
    InstrumentLeg_135.insert(LegMaturityDate_135.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_135("MONTHYEAR_117530611");
    noLegs_0_2.set(LegMaturityMonthYear_135);
    InstrumentLeg_135.insert(LegMaturityMonthYear_135.getString());
    FIX::LegMaturityTime LegMaturityTime_135("TZTIMEONLY_548956731");
    noLegs_0_2.set(LegMaturityTime_135);
    InstrumentLeg_135.insert(LegMaturityTime_135.getString());
    FIX::LegOptAttribute LegOptAttribute_135('5');
    noLegs_0_2.set(LegOptAttribute_135);
    InstrumentLeg_135.insert(LegOptAttribute_135.getString());
    FIX::LegOptionRatio LegOptionRatio_135;
    LegOptionRatio_135.setString("13406073");
    noLegs_0_2.set(LegOptionRatio_135);
    InstrumentLeg_135.insert(LegOptionRatio_135.getString());
    FIX::LegPool LegPool_135("STRING_2040551328");
    noLegs_0_2.set(LegPool_135);
    InstrumentLeg_135.insert(LegPool_135.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_135("STRING_237536629");
    noLegs_0_2.set(LegPriceUnitOfMeasure_135);
    InstrumentLeg_135.insert(LegPriceUnitOfMeasure_135.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_135;
    LegPriceUnitOfMeasureQty_135.setString("9589298");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_135);
    InstrumentLeg_135.insert(LegPriceUnitOfMeasureQty_135.getString());
    FIX::LegProduct LegProduct_135(1012029449);
    noLegs_0_2.set(LegProduct_135);
    InstrumentLeg_135.insert(LegProduct_135.getString());
    FIX::LegPutOrCall LegPutOrCall_135(39372409);
    noLegs_0_2.set(LegPutOrCall_135);
    InstrumentLeg_135.insert(LegPutOrCall_135.getString());
    FIX::LegRatioQty LegRatioQty_135;
    LegRatioQty_135.setString("19423147");
    noLegs_0_2.set(LegRatioQty_135);
    InstrumentLeg_135.insert(LegRatioQty_135.getString());
    FIX::LegRedemptionDate LegRedemptionDate_135("LOCALMKTDATE_170915441");
    noLegs_0_2.set(LegRedemptionDate_135);
    InstrumentLeg_135.insert(LegRedemptionDate_135.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_135("STRING_915606597");
    noLegs_0_2.set(LegRepoCollateralSecurityType_135);
    InstrumentLeg_135.insert(LegRepoCollateralSecurityType_135.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_135;
    LegRepurchaseRate_135.setString("94.670000");
    noLegs_0_2.set(LegRepurchaseRate_135);
    InstrumentLeg_135.insert(LegRepurchaseRate_135.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_135(922355302);
    noLegs_0_2.set(LegRepurchaseTerm_135);
    InstrumentLeg_135.insert(LegRepurchaseTerm_135.getString());
    FIX::LegSecurityDesc LegSecurityDesc_135("STRING_674099101");
    noLegs_0_2.set(LegSecurityDesc_135);
    InstrumentLeg_135.insert(LegSecurityDesc_135.getString());
    FIX::LegSecurityExchange LegSecurityExchange_135("EXCHANGE_452346840");
    noLegs_0_2.set(LegSecurityExchange_135);
    InstrumentLeg_135.insert(LegSecurityExchange_135.getString());
    FIX::LegSecurityID LegSecurityID_135("STRING_1556281167");
    noLegs_0_2.set(LegSecurityID_135);
    InstrumentLeg_135.insert(LegSecurityID_135.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_135("STRING_1636197170");
    noLegs_0_2.set(LegSecurityIDSource_135);
    InstrumentLeg_135.insert(LegSecurityIDSource_135.getString());
    FIX::LegSecuritySubType LegSecuritySubType_135("STRING_2021548851");
    noLegs_0_2.set(LegSecuritySubType_135);
    InstrumentLeg_135.insert(LegSecuritySubType_135.getString());
    FIX::LegSecurityType LegSecurityType_135("STRING_1246950247");
    noLegs_0_2.set(LegSecurityType_135);
    InstrumentLeg_135.insert(LegSecurityType_135.getString());
    FIX::LegSide LegSide_135('1');
    noLegs_0_2.set(LegSide_135);
    InstrumentLeg_135.insert(LegSide_135.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_135("STRING_912854790");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_135);
    InstrumentLeg_135.insert(LegStateOrProvinceOfIssue_135.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_135("USD");
    noLegs_0_2.set(LegStrikeCurrency_135);
    InstrumentLeg_135.insert(LegStrikeCurrency_135.getString());
    FIX::LegStrikePrice LegStrikePrice_135;
    LegStrikePrice_135.setString("7713188");
    noLegs_0_2.set(LegStrikePrice_135);
    InstrumentLeg_135.insert(LegStrikePrice_135.getString());
    FIX::LegSymbol LegSymbol_135("STRING_354736583");
    noLegs_0_2.set(LegSymbol_135);
    InstrumentLeg_135.insert(LegSymbol_135.getString());
    FIX::LegSymbolSfx LegSymbolSfx_135("STRING_1199904919");
    noLegs_0_2.set(LegSymbolSfx_135);
    InstrumentLeg_135.insert(LegSymbolSfx_135.getString());
    FIX::LegTimeUnit LegTimeUnit_135("STRING_1121162002");
    noLegs_0_2.set(LegTimeUnit_135);
    InstrumentLeg_135.insert(LegTimeUnit_135.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_135("STRING_285448742");
    noLegs_0_2.set(LegUnitOfMeasure_135);
    InstrumentLeg_135.insert(LegUnitOfMeasure_135.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_135;
    LegUnitOfMeasureQty_135.setString("1773875");
    noLegs_0_2.set(LegUnitOfMeasureQty_135);
    InstrumentLeg_135.insert(LegUnitOfMeasureQty_135.getString());
    all_values.push_back(InstrumentLeg_135);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_273;
      FIX::LegSecurityAltID LegSecurityAltID_273("STRING_402979353");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_273);
      LegSecAltIDGrp_NoLegSecurityAltID_273.insert(LegSecurityAltID_273.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_273("STRING_726344287");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_273);
      LegSecAltIDGrp_NoLegSecurityAltID_273.insert(LegSecurityAltIDSource_273.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_273);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_274;
      FIX::LegSecurityAltID LegSecurityAltID_274("STRING_135958995");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_274);
      LegSecAltIDGrp_NoLegSecurityAltID_274.insert(LegSecurityAltID_274.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_274("STRING_1743586731");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_274);
      LegSecAltIDGrp_NoLegSecurityAltID_274.insert(LegSecurityAltIDSource_274.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_274);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_2_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_61;
      FIX::LegStipulationType LegStipulationType_61("STRING_373495624");
      noLegStipulations_2_1_0.set(LegStipulationType_61);
      LegStipulations_NoLegStipulations_61.insert(LegStipulationType_61.getString());
      FIX::LegStipulationValue LegStipulationValue_61("STRING_555032970");
      noLegStipulations_2_1_0.set(LegStipulationValue_61);
      LegStipulations_NoLegStipulations_61.insert(LegStipulationValue_61.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_61);

      noLegs_0_2.addGroup(noLegStipulations_2_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_133;
      FIX::NestedPartyID NestedPartyID_133("STRING_412868033");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_133);
      NestedParties_NoNestedPartyIDs_133.insert(NestedPartyID_133.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_133('3');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_133);
      NestedParties_NoNestedPartyIDs_133.insert(NestedPartyIDSource_133.getString());
      FIX::NestedPartyRole NestedPartyRole_133(1802356859);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_133);
      NestedParties_NoNestedPartyIDs_133.insert(NestedPartyRole_133.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_133);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_265;
        FIX::NestedPartySubID NestedPartySubID_265("STRING_1828353527");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_265);
        NstdPtysSubGrp_NoNestedPartySubIDs_265.insert(NestedPartySubID_265.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_265(577228513);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_265);
        NstdPtysSubGrp_NoNestedPartySubIDs_265.insert(NestedPartySubIDType_265.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_265);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_266;
        FIX::NestedPartySubID NestedPartySubID_266("STRING_2002573731");
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubID_266);
        NstdPtysSubGrp_NoNestedPartySubIDs_266.insert(NestedPartySubID_266.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_266(133216720);
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubIDType_266);
        NstdPtysSubGrp_NoNestedPartySubIDs_266.insert(NestedPartySubIDType_266.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_266);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_267;
        FIX::NestedPartySubID NestedPartySubID_267("STRING_2133509680");
        noNestedPartySubIDs_2_0_2_2.set(NestedPartySubID_267);
        NstdPtysSubGrp_NoNestedPartySubIDs_267.insert(NestedPartySubID_267.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_267(1491287253);
        noNestedPartySubIDs_2_0_2_2.set(NestedPartySubIDType_267);
        NstdPtysSubGrp_NoNestedPartySubIDs_267.insert(NestedPartySubIDType_267.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_267);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_2);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_134;
      FIX::NestedPartyID NestedPartyID_134("STRING_7281923");
      noNestedPartyIDs_2_1_1.set(NestedPartyID_134);
      NestedParties_NoNestedPartyIDs_134.insert(NestedPartyID_134.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_134('1');
      noNestedPartyIDs_2_1_1.set(NestedPartyIDSource_134);
      NestedParties_NoNestedPartyIDs_134.insert(NestedPartyIDSource_134.getString());
      FIX::NestedPartyRole NestedPartyRole_134(1301760810);
      noNestedPartyIDs_2_1_1.set(NestedPartyRole_134);
      NestedParties_NoNestedPartyIDs_134.insert(NestedPartyRole_134.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_134);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_268;
        FIX::NestedPartySubID NestedPartySubID_268("STRING_447754414");
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubID_268);
        NstdPtysSubGrp_NoNestedPartySubIDs_268.insert(NestedPartySubID_268.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_268(1363745071);
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubIDType_268);
        NstdPtysSubGrp_NoNestedPartySubIDs_268.insert(NestedPartySubIDType_268.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_268);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_269;
        FIX::NestedPartySubID NestedPartySubID_269("STRING_1691455549");
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubID_269);
        NstdPtysSubGrp_NoNestedPartySubIDs_269.insert(NestedPartySubID_269.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_269(802490997);
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubIDType_269);
        NstdPtysSubGrp_NoNestedPartySubIDs_269.insert(NestedPartySubIDType_269.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_269);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_270;
        FIX::NestedPartySubID NestedPartySubID_270("STRING_416166342");
        noNestedPartySubIDs_2_1_2_2.set(NestedPartySubID_270);
        NstdPtysSubGrp_NoNestedPartySubIDs_270.insert(NestedPartySubID_270.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_270(665133904);
        noNestedPartySubIDs_2_1_2_2.set(NestedPartySubIDType_270);
        NstdPtysSubGrp_NoNestedPartySubIDs_270.insert(NestedPartySubIDType_270.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_270);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_2);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_135;
      FIX::NestedPartyID NestedPartyID_135("STRING_1087939739");
      noNestedPartyIDs_2_1_2.set(NestedPartyID_135);
      NestedParties_NoNestedPartyIDs_135.insert(NestedPartyID_135.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_135('5');
      noNestedPartyIDs_2_1_2.set(NestedPartyIDSource_135);
      NestedParties_NoNestedPartyIDs_135.insert(NestedPartyIDSource_135.getString());
      FIX::NestedPartyRole NestedPartyRole_135(234751155);
      noNestedPartyIDs_2_1_2.set(NestedPartyRole_135);
      NestedParties_NoNestedPartyIDs_135.insert(NestedPartyRole_135.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_135);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_271;
        FIX::NestedPartySubID NestedPartySubID_271("STRING_1319898186");
        noNestedPartySubIDs_2_2_2_0.set(NestedPartySubID_271);
        NstdPtysSubGrp_NoNestedPartySubIDs_271.insert(NestedPartySubID_271.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_271(370710150);
        noNestedPartySubIDs_2_2_2_0.set(NestedPartySubIDType_271);
        NstdPtysSubGrp_NoNestedPartySubIDs_271.insert(NestedPartySubIDType_271.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_271);

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_272;
        FIX::NestedPartySubID NestedPartySubID_272("STRING_1087022176");
        noNestedPartySubIDs_2_2_2_1.set(NestedPartySubID_272);
        NstdPtysSubGrp_NoNestedPartySubIDs_272.insert(NestedPartySubID_272.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_272(1939310154);
        noNestedPartySubIDs_2_2_2_1.set(NestedPartySubIDType_272);
        NstdPtysSubGrp_NoNestedPartySubIDs_272.insert(NestedPartySubIDType_272.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_272);

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_273;
        FIX::NestedPartySubID NestedPartySubID_273("STRING_744205775");
        noNestedPartySubIDs_2_2_2_2.set(NestedPartySubID_273);
        NstdPtysSubGrp_NoNestedPartySubIDs_273.insert(NestedPartySubID_273.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_273(1642055146);
        noNestedPartySubIDs_2_2_2_2.set(NestedPartySubIDType_273);
        NstdPtysSubGrp_NoNestedPartySubIDs_273.insert(NestedPartySubIDType_273.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_273);

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_2);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_2);
    }
    // TradeCapLegUnderlyingsGrp
    // Group TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_2_1_0;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_4;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_4("STRING_1157073808");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegCFICode_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegCFICode_4.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_4("LOCALMKTDATE_1991919207");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegMaturityDate_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegMaturityDate_4.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_4("MONTHYEAR_1078141134");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegMaturityMonthYear_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegMaturityMonthYear_4.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_4("TZTIMEONLY_338064791");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegMaturityTime_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegMaturityTime_4.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_4('1');
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegOptAttribute_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegOptAttribute_4.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_4(1655369647);
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegPutOrCall_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegPutOrCall_4.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_4("STRING_193154874");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSecurityDesc_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSecurityDesc_4.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_4("STRING_1806005806");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSecurityExchange_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSecurityExchange_4.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_4("STRING_1641395680");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSecurityID_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSecurityID_4.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_4("STRING_1684442128");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSecurityIDSource_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSecurityIDSource_4.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_4("STRING_1813287729");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSecuritySubType_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSecuritySubType_4.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_4("STRING_726888312");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSecurityType_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSecurityType_4.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_4;
      UnderlyingLegStrikePrice_4.setString("8387192");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegStrikePrice_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegStrikePrice_4.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_4("STRING_585940795");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSymbol_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSymbol_4.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_4("STRING_1174642726");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSymbolSfx_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSymbolSfx_4.getString());
      all_values.push_back(UnderlyingLegInstrument_4);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_2_0_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_10;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_10("STRING_129912696");
        noUnderlyingLegSecurityAltID_2_0_2_0.set(UnderlyingLegSecurityAltID_10);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_10.insert(UnderlyingLegSecurityAltID_10.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_10("STRING_1977133724");
        noUnderlyingLegSecurityAltID_2_0_2_0.set(UnderlyingLegSecurityAltIDSource_10);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_10.insert(UnderlyingLegSecurityAltIDSource_10.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_10);

        noOfLegUnderlyings_2_1_0.addGroup(noUnderlyingLegSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_2_0_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_11;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_11("STRING_471147056");
        noUnderlyingLegSecurityAltID_2_0_2_1.set(UnderlyingLegSecurityAltID_11);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_11.insert(UnderlyingLegSecurityAltID_11.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_11("STRING_795046600");
        noUnderlyingLegSecurityAltID_2_0_2_1.set(UnderlyingLegSecurityAltIDSource_11);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_11.insert(UnderlyingLegSecurityAltIDSource_11.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_11);

        noOfLegUnderlyings_2_1_0.addGroup(noUnderlyingLegSecurityAltID_2_0_2_1);
      }
      noLegs_0_2.addGroup(noOfLegUnderlyings_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::TradeCaptureReport::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_19;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_19("MULTIPLESTRINGVALUE_RSV");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(DeskOrderHandlingInst_19.getString());
    FIX::DeskType DeskType_19("STRING_S");
    noTrdRegTimestamps_0_0.set(DeskType_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(DeskType_19.getString());
    FIX::DeskTypeSource DeskTypeSource_19(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(DeskTypeSource_19.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_19(FIX::UTCTIMESTAMP(2, 16, 38, 5, 7, 2000));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(TrdRegTimestamp_19.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_19("STRING_1154303842");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(TrdRegTimestampOrigin_19.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_19(7);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(TrdRegTimestampType_19.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_19);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_20;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_20("MULTIPLESTRINGVALUE_OVD");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_20);
    TrdRegTimestamps_NoTrdRegTimestamps_20.insert(DeskOrderHandlingInst_20.getString());
    FIX::DeskType DeskType_20("STRING_PT");
    noTrdRegTimestamps_0_1.set(DeskType_20);
    TrdRegTimestamps_NoTrdRegTimestamps_20.insert(DeskType_20.getString());
    FIX::DeskTypeSource DeskTypeSource_20(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_20);
    TrdRegTimestamps_NoTrdRegTimestamps_20.insert(DeskTypeSource_20.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_20(FIX::UTCTIMESTAMP(3, 58, 8, 27, 1, 2012));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_20);
    TrdRegTimestamps_NoTrdRegTimestamps_20.insert(TrdRegTimestamp_20.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_20("STRING_2061201278");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_20);
    TrdRegTimestamps_NoTrdRegTimestamps_20.insert(TrdRegTimestampOrigin_20.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_20(2);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_20);
    TrdRegTimestamps_NoTrdRegTimestamps_20.insert(TrdRegTimestampType_20.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_20);

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::TradeCaptureReport::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_21;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_21("MULTIPLESTRINGVALUE_TS");
    noTrdRegTimestamps_0_2.set(DeskOrderHandlingInst_21);
    TrdRegTimestamps_NoTrdRegTimestamps_21.insert(DeskOrderHandlingInst_21.getString());
    FIX::DeskType DeskType_21("STRING_A");
    noTrdRegTimestamps_0_2.set(DeskType_21);
    TrdRegTimestamps_NoTrdRegTimestamps_21.insert(DeskType_21.getString());
    FIX::DeskTypeSource DeskTypeSource_21(1);
    noTrdRegTimestamps_0_2.set(DeskTypeSource_21);
    TrdRegTimestamps_NoTrdRegTimestamps_21.insert(DeskTypeSource_21.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_21(FIX::UTCTIMESTAMP(15, 4, 10, 10, 1, 2008));
    noTrdRegTimestamps_0_2.set(TrdRegTimestamp_21);
    TrdRegTimestamps_NoTrdRegTimestamps_21.insert(TrdRegTimestamp_21.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_21("STRING_1741661846");
    noTrdRegTimestamps_0_2.set(TrdRegTimestampOrigin_21);
    TrdRegTimestamps_NoTrdRegTimestamps_21.insert(TrdRegTimestampOrigin_21.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_21(4);
    noTrdRegTimestamps_0_2.set(TrdRegTimestampType_21);
    TrdRegTimestamps_NoTrdRegTimestamps_21.insert(TrdRegTimestampType_21.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_21);

    msg.addGroup(noTrdRegTimestamps_0_2);
  }
  // TrdRepIndicatorsGrp
  // Group TrdRepIndicatorsGrp.NoTrdRepIndicators
  {
    FIX50SP2::TradeCaptureReport::NoTrdRepIndicators noTrdRepIndicators_0_0;
    // TrdRepIndicatorsGrp.NoTrdRepIndicators
    multiset<string> TrdRepIndicatorsGrp_NoTrdRepIndicators_0;
    FIX::TrdRepIndicator TrdRepIndicator_0(false);
    noTrdRepIndicators_0_0.set(TrdRepIndicator_0);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_0.insert(TrdRepIndicator_0.getString());
    FIX::TrdRepPartyRole TrdRepPartyRole_0(1327638312);
    noTrdRepIndicators_0_0.set(TrdRepPartyRole_0);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_0.insert(TrdRepPartyRole_0.getString());
    all_values.push_back(TrdRepIndicatorsGrp_NoTrdRepIndicators_0);

    msg.addGroup(noTrdRepIndicators_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::TradeCaptureReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_128;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_128("DATA_1075330119");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_128);
    UnderlyingInstrument_128.insert(EncodedUnderlyingIssuer_128.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_128(334458506);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_128);
    UnderlyingInstrument_128.insert(EncodedUnderlyingIssuerLen_128.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_128("DATA_877215198");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_128);
    UnderlyingInstrument_128.insert(EncodedUnderlyingSecurityDesc_128.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_128(1458197527);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_128);
    UnderlyingInstrument_128.insert(EncodedUnderlyingSecurityDescLen_128.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_128;
    UnderlyingAdjustedQuantity_128.setString("18268271");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_128);
    UnderlyingInstrument_128.insert(UnderlyingAdjustedQuantity_128.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_128;
    UnderlyingAllocationPercent_128.setString("51.300000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_128);
    UnderlyingInstrument_128.insert(UnderlyingAllocationPercent_128.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_128;
    UnderlyingAttachmentPoint_128.setString("9.350000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_128);
    UnderlyingInstrument_128.insert(UnderlyingAttachmentPoint_128.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_128("STRING_1364866998");
    noUnderlyings_0_0.set(UnderlyingCFICode_128);
    UnderlyingInstrument_128.insert(UnderlyingCFICode_128.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_128("STRING_960457220");
    noUnderlyings_0_0.set(UnderlyingCPProgram_128);
    UnderlyingInstrument_128.insert(UnderlyingCPProgram_128.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_128("STRING_733616375");
    noUnderlyings_0_0.set(UnderlyingCPRegType_128);
    UnderlyingInstrument_128.insert(UnderlyingCPRegType_128.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_128;
    UnderlyingCapValue_128.setString("4398653");
    noUnderlyings_0_0.set(UnderlyingCapValue_128);
    UnderlyingInstrument_128.insert(UnderlyingCapValue_128.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_128;
    UnderlyingCashAmount_128.setString("4971433");
    noUnderlyings_0_0.set(UnderlyingCashAmount_128);
    UnderlyingInstrument_128.insert(UnderlyingCashAmount_128.getString());
    FIX::UnderlyingCashType UnderlyingCashType_128("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_128);
    UnderlyingInstrument_128.insert(UnderlyingCashType_128.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_128;
    UnderlyingContractMultiplier_128.setString("3535829");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_128);
    UnderlyingInstrument_128.insert(UnderlyingContractMultiplier_128.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_128(619770359);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_128);
    UnderlyingInstrument_128.insert(UnderlyingContractMultiplierUnit_128.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_128("COUNTRY_2131366606");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_128);
    UnderlyingInstrument_128.insert(UnderlyingCountryOfIssue_128.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_128("LOCALMKTDATE_322281311");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_128);
    UnderlyingInstrument_128.insert(UnderlyingCouponPaymentDate_128.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_128;
    UnderlyingCouponRate_128.setString("0.230000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_128);
    UnderlyingInstrument_128.insert(UnderlyingCouponRate_128.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_128("STRING_1099729512");
    noUnderlyings_0_0.set(UnderlyingCreditRating_128);
    UnderlyingInstrument_128.insert(UnderlyingCreditRating_128.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_128("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_128);
    UnderlyingInstrument_128.insert(UnderlyingCurrency_128.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_128;
    UnderlyingCurrentValue_128.setString("9856822");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_128);
    UnderlyingInstrument_128.insert(UnderlyingCurrentValue_128.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_128;
    UnderlyingDetachmentPoint_128.setString("94.170000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_128);
    UnderlyingInstrument_128.insert(UnderlyingDetachmentPoint_128.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_128;
    UnderlyingDirtyPrice_128.setString("18497966");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_128);
    UnderlyingInstrument_128.insert(UnderlyingDirtyPrice_128.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_128;
    UnderlyingEndPrice_128.setString("11326602");
    noUnderlyings_0_0.set(UnderlyingEndPrice_128);
    UnderlyingInstrument_128.insert(UnderlyingEndPrice_128.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_128;
    UnderlyingEndValue_128.setString("18608512");
    noUnderlyings_0_0.set(UnderlyingEndValue_128);
    UnderlyingInstrument_128.insert(UnderlyingEndValue_128.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_128(1032721289);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_128);
    UnderlyingInstrument_128.insert(UnderlyingExerciseStyle_128.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_128;
    UnderlyingFXRate_128.setString("4802019");
    noUnderlyings_0_0.set(UnderlyingFXRate_128);
    UnderlyingInstrument_128.insert(UnderlyingFXRate_128.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_128('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_128);
    UnderlyingInstrument_128.insert(UnderlyingFXRateCalc_128.getString());
    FIX::UnderlyingFactor UnderlyingFactor_128;
    UnderlyingFactor_128.setString("2128759");
    noUnderlyings_0_0.set(UnderlyingFactor_128);
    UnderlyingInstrument_128.insert(UnderlyingFactor_128.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_128(670362691);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_128);
    UnderlyingInstrument_128.insert(UnderlyingFlowScheduleType_128.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_128("STRING_411817931");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_128);
    UnderlyingInstrument_128.insert(UnderlyingInstrRegistry_128.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_128("LOCALMKTDATE_547334459");
    noUnderlyings_0_0.set(UnderlyingIssueDate_128);
    UnderlyingInstrument_128.insert(UnderlyingIssueDate_128.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_128("STRING_1547577889");
    noUnderlyings_0_0.set(UnderlyingIssuer_128);
    UnderlyingInstrument_128.insert(UnderlyingIssuer_128.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_128("STRING_1870015459");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_128);
    UnderlyingInstrument_128.insert(UnderlyingLocaleOfIssue_128.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_128("LOCALMKTDATE_226677950");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_128);
    UnderlyingInstrument_128.insert(UnderlyingMaturityDate_128.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_128("MONTHYEAR_489669371");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_128);
    UnderlyingInstrument_128.insert(UnderlyingMaturityMonthYear_128.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_128("TZTIMEONLY_1071482746");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_128);
    UnderlyingInstrument_128.insert(UnderlyingMaturityTime_128.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_128;
    UnderlyingNotionalPercentageOutstanding_128.setString("49.490000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_128);
    UnderlyingInstrument_128.insert(UnderlyingNotionalPercentageOutstanding_128.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_128('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_128);
    UnderlyingInstrument_128.insert(UnderlyingOptAttribute_128.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_128;
    UnderlyingOriginalNotionalPercentageOutstanding_128.setString("91.220000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_128);
    UnderlyingInstrument_128.insert(UnderlyingOriginalNotionalPercentageOutstanding_128.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_128("STRING_2031410287");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_128);
    UnderlyingInstrument_128.insert(UnderlyingPriceUnitOfMeasure_128.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_128;
    UnderlyingPriceUnitOfMeasureQty_128.setString("19472699");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_128);
    UnderlyingInstrument_128.insert(UnderlyingPriceUnitOfMeasureQty_128.getString());
    FIX::UnderlyingProduct UnderlyingProduct_128(502785601);
    noUnderlyings_0_0.set(UnderlyingProduct_128);
    UnderlyingInstrument_128.insert(UnderlyingProduct_128.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_128(237509607);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_128);
    UnderlyingInstrument_128.insert(UnderlyingPutOrCall_128.getString());
    FIX::UnderlyingPx UnderlyingPx_128;
    UnderlyingPx_128.setString("4195566");
    noUnderlyings_0_0.set(UnderlyingPx_128);
    UnderlyingInstrument_128.insert(UnderlyingPx_128.getString());
    FIX::UnderlyingQty UnderlyingQty_128;
    UnderlyingQty_128.setString("4866685");
    noUnderlyings_0_0.set(UnderlyingQty_128);
    UnderlyingInstrument_128.insert(UnderlyingQty_128.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_128("LOCALMKTDATE_559790918");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_128);
    UnderlyingInstrument_128.insert(UnderlyingRedemptionDate_128.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_128("STRING_1291866718");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_128);
    UnderlyingInstrument_128.insert(UnderlyingRepoCollateralSecurityType_128.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_128;
    UnderlyingRepurchaseRate_128.setString("80.720000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_128);
    UnderlyingInstrument_128.insert(UnderlyingRepurchaseRate_128.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_128(1321917629);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_128);
    UnderlyingInstrument_128.insert(UnderlyingRepurchaseTerm_128.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_128("STRING_1064279357");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_128);
    UnderlyingInstrument_128.insert(UnderlyingRestructuringType_128.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_128("STRING_424596658");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_128);
    UnderlyingInstrument_128.insert(UnderlyingSecurityDesc_128.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_128("EXCHANGE_1441107046");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_128);
    UnderlyingInstrument_128.insert(UnderlyingSecurityExchange_128.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_128("STRING_766592368");
    noUnderlyings_0_0.set(UnderlyingSecurityID_128);
    UnderlyingInstrument_128.insert(UnderlyingSecurityID_128.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_128("STRING_1557256875");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_128);
    UnderlyingInstrument_128.insert(UnderlyingSecurityIDSource_128.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_128("STRING_1154474662");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_128);
    UnderlyingInstrument_128.insert(UnderlyingSecuritySubType_128.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_128("STRING_1799313658");
    noUnderlyings_0_0.set(UnderlyingSecurityType_128);
    UnderlyingInstrument_128.insert(UnderlyingSecurityType_128.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_128("STRING_2037458861");
    noUnderlyings_0_0.set(UnderlyingSeniority_128);
    UnderlyingInstrument_128.insert(UnderlyingSeniority_128.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_128("STRING_490962474");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_128);
    UnderlyingInstrument_128.insert(UnderlyingSettlMethod_128.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_128(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_128);
    UnderlyingInstrument_128.insert(UnderlyingSettlementType_128.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_128;
    UnderlyingStartValue_128.setString("5603379");
    noUnderlyings_0_0.set(UnderlyingStartValue_128);
    UnderlyingInstrument_128.insert(UnderlyingStartValue_128.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_128("STRING_902780406");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_128);
    UnderlyingInstrument_128.insert(UnderlyingStateOrProvinceOfIssue_128.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_128("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_128);
    UnderlyingInstrument_128.insert(UnderlyingStrikeCurrency_128.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_128;
    UnderlyingStrikePrice_128.setString("6253122");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_128);
    UnderlyingInstrument_128.insert(UnderlyingStrikePrice_128.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_128("STRING_638718373");
    noUnderlyings_0_0.set(UnderlyingSymbol_128);
    UnderlyingInstrument_128.insert(UnderlyingSymbol_128.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_128("STRING_450101516");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_128);
    UnderlyingInstrument_128.insert(UnderlyingSymbolSfx_128.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_128("STRING_1696794963");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_128);
    UnderlyingInstrument_128.insert(UnderlyingTimeUnit_128.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_128("STRING_82779674");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_128);
    UnderlyingInstrument_128.insert(UnderlyingUnitOfMeasure_128.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_128;
    UnderlyingUnitOfMeasureQty_128.setString("19002281");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_128);
    UnderlyingInstrument_128.insert(UnderlyingUnitOfMeasureQty_128.getString());
    all_values.push_back(UnderlyingInstrument_128);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_262;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_262("STRING_2114189961");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_262);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_262.insert(UnderlyingSecurityAltID_262.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_262("STRING_1700014444");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_262);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_262.insert(UnderlyingSecurityAltIDSource_262.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_262);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_263;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_263("STRING_1857196039");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_263);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_263.insert(UnderlyingSecurityAltID_263.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_263("STRING_204215920");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_263);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_263.insert(UnderlyingSecurityAltIDSource_263.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_263);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_264;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_264("STRING_2119571139");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_264);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_264.insert(UnderlyingSecurityAltID_264.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_264("STRING_196380950");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_264);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_264.insert(UnderlyingSecurityAltIDSource_264.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_264);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_251;
      FIX::UnderlyingStipType UnderlyingStipType_251("STRING_1263954210");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_251);
      UnderlyingStipulations_NoUnderlyingStips_251.insert(UnderlyingStipType_251.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_251("STRING_1782779022");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_251);
      UnderlyingStipulations_NoUnderlyingStips_251.insert(UnderlyingStipValue_251.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_251);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_252;
      FIX::UnderlyingStipType UnderlyingStipType_252("STRING_2085924468");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_252);
      UnderlyingStipulations_NoUnderlyingStips_252.insert(UnderlyingStipType_252.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_252("STRING_180749919");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_252);
      UnderlyingStipulations_NoUnderlyingStips_252.insert(UnderlyingStipValue_252.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_252);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_254;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_254("STRING_1379547867");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_254);
      UndlyInstrumentParties_NoUndlyInstrumentParties_254.insert(UnderlyingInstrumentPartyID_254.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_254('9');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_254);
      UndlyInstrumentParties_NoUndlyInstrumentParties_254.insert(UnderlyingInstrumentPartyIDSource_254.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_254(1617148908);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_254);
      UndlyInstrumentParties_NoUndlyInstrumentParties_254.insert(UnderlyingInstrumentPartyRole_254.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_254);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_513("STRING_599172298");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_513);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513.insert(UnderlyingInstrumentPartySubID_513.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_513(1507124121);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_513);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513.insert(UnderlyingInstrumentPartySubIDType_513.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_514("STRING_877501355");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_514);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514.insert(UnderlyingInstrumentPartySubID_514.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_514(463878261);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_514);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514.insert(UnderlyingInstrumentPartySubIDType_514.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_515("STRING_2067462026");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_515);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515.insert(UnderlyingInstrumentPartySubID_515.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_515(1780281761);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_515);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515.insert(UnderlyingInstrumentPartySubIDType_515.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_129;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_129("DATA_875918684");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_129);
    UnderlyingInstrument_129.insert(EncodedUnderlyingIssuer_129.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_129(2027894171);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_129);
    UnderlyingInstrument_129.insert(EncodedUnderlyingIssuerLen_129.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_129("DATA_258110330");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_129);
    UnderlyingInstrument_129.insert(EncodedUnderlyingSecurityDesc_129.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_129(1514637058);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_129);
    UnderlyingInstrument_129.insert(EncodedUnderlyingSecurityDescLen_129.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_129;
    UnderlyingAdjustedQuantity_129.setString("3305120");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_129);
    UnderlyingInstrument_129.insert(UnderlyingAdjustedQuantity_129.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_129;
    UnderlyingAllocationPercent_129.setString("52.940000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_129);
    UnderlyingInstrument_129.insert(UnderlyingAllocationPercent_129.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_129;
    UnderlyingAttachmentPoint_129.setString("67.320000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_129);
    UnderlyingInstrument_129.insert(UnderlyingAttachmentPoint_129.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_129("STRING_83256500");
    noUnderlyings_0_1.set(UnderlyingCFICode_129);
    UnderlyingInstrument_129.insert(UnderlyingCFICode_129.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_129("STRING_1161832083");
    noUnderlyings_0_1.set(UnderlyingCPProgram_129);
    UnderlyingInstrument_129.insert(UnderlyingCPProgram_129.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_129("STRING_1564123046");
    noUnderlyings_0_1.set(UnderlyingCPRegType_129);
    UnderlyingInstrument_129.insert(UnderlyingCPRegType_129.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_129;
    UnderlyingCapValue_129.setString("17832709");
    noUnderlyings_0_1.set(UnderlyingCapValue_129);
    UnderlyingInstrument_129.insert(UnderlyingCapValue_129.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_129;
    UnderlyingCashAmount_129.setString("8715444");
    noUnderlyings_0_1.set(UnderlyingCashAmount_129);
    UnderlyingInstrument_129.insert(UnderlyingCashAmount_129.getString());
    FIX::UnderlyingCashType UnderlyingCashType_129("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_129);
    UnderlyingInstrument_129.insert(UnderlyingCashType_129.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_129;
    UnderlyingContractMultiplier_129.setString("17553584");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_129);
    UnderlyingInstrument_129.insert(UnderlyingContractMultiplier_129.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_129(1067925425);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_129);
    UnderlyingInstrument_129.insert(UnderlyingContractMultiplierUnit_129.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_129("COUNTRY_384862157");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_129);
    UnderlyingInstrument_129.insert(UnderlyingCountryOfIssue_129.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_129("LOCALMKTDATE_871828997");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_129);
    UnderlyingInstrument_129.insert(UnderlyingCouponPaymentDate_129.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_129;
    UnderlyingCouponRate_129.setString("7.990000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_129);
    UnderlyingInstrument_129.insert(UnderlyingCouponRate_129.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_129("STRING_323302978");
    noUnderlyings_0_1.set(UnderlyingCreditRating_129);
    UnderlyingInstrument_129.insert(UnderlyingCreditRating_129.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_129("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_129);
    UnderlyingInstrument_129.insert(UnderlyingCurrency_129.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_129;
    UnderlyingCurrentValue_129.setString("17028508");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_129);
    UnderlyingInstrument_129.insert(UnderlyingCurrentValue_129.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_129;
    UnderlyingDetachmentPoint_129.setString("12.050000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_129);
    UnderlyingInstrument_129.insert(UnderlyingDetachmentPoint_129.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_129;
    UnderlyingDirtyPrice_129.setString("2327780");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_129);
    UnderlyingInstrument_129.insert(UnderlyingDirtyPrice_129.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_129;
    UnderlyingEndPrice_129.setString("20893897");
    noUnderlyings_0_1.set(UnderlyingEndPrice_129);
    UnderlyingInstrument_129.insert(UnderlyingEndPrice_129.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_129;
    UnderlyingEndValue_129.setString("4516098");
    noUnderlyings_0_1.set(UnderlyingEndValue_129);
    UnderlyingInstrument_129.insert(UnderlyingEndValue_129.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_129(1739902214);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_129);
    UnderlyingInstrument_129.insert(UnderlyingExerciseStyle_129.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_129;
    UnderlyingFXRate_129.setString("8194074");
    noUnderlyings_0_1.set(UnderlyingFXRate_129);
    UnderlyingInstrument_129.insert(UnderlyingFXRate_129.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_129('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_129);
    UnderlyingInstrument_129.insert(UnderlyingFXRateCalc_129.getString());
    FIX::UnderlyingFactor UnderlyingFactor_129;
    UnderlyingFactor_129.setString("16598805");
    noUnderlyings_0_1.set(UnderlyingFactor_129);
    UnderlyingInstrument_129.insert(UnderlyingFactor_129.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_129(452205547);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_129);
    UnderlyingInstrument_129.insert(UnderlyingFlowScheduleType_129.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_129("STRING_1791406801");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_129);
    UnderlyingInstrument_129.insert(UnderlyingInstrRegistry_129.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_129("LOCALMKTDATE_1540291115");
    noUnderlyings_0_1.set(UnderlyingIssueDate_129);
    UnderlyingInstrument_129.insert(UnderlyingIssueDate_129.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_129("STRING_710315877");
    noUnderlyings_0_1.set(UnderlyingIssuer_129);
    UnderlyingInstrument_129.insert(UnderlyingIssuer_129.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_129("STRING_1158560211");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_129);
    UnderlyingInstrument_129.insert(UnderlyingLocaleOfIssue_129.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_129("LOCALMKTDATE_1870803155");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_129);
    UnderlyingInstrument_129.insert(UnderlyingMaturityDate_129.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_129("MONTHYEAR_517737523");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_129);
    UnderlyingInstrument_129.insert(UnderlyingMaturityMonthYear_129.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_129("TZTIMEONLY_608493295");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_129);
    UnderlyingInstrument_129.insert(UnderlyingMaturityTime_129.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_129;
    UnderlyingNotionalPercentageOutstanding_129.setString("96.550000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_129);
    UnderlyingInstrument_129.insert(UnderlyingNotionalPercentageOutstanding_129.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_129('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_129);
    UnderlyingInstrument_129.insert(UnderlyingOptAttribute_129.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_129;
    UnderlyingOriginalNotionalPercentageOutstanding_129.setString("26.930000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_129);
    UnderlyingInstrument_129.insert(UnderlyingOriginalNotionalPercentageOutstanding_129.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_129("STRING_1589846951");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_129);
    UnderlyingInstrument_129.insert(UnderlyingPriceUnitOfMeasure_129.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_129;
    UnderlyingPriceUnitOfMeasureQty_129.setString("4036304");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_129);
    UnderlyingInstrument_129.insert(UnderlyingPriceUnitOfMeasureQty_129.getString());
    FIX::UnderlyingProduct UnderlyingProduct_129(1793471660);
    noUnderlyings_0_1.set(UnderlyingProduct_129);
    UnderlyingInstrument_129.insert(UnderlyingProduct_129.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_129(1197721739);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_129);
    UnderlyingInstrument_129.insert(UnderlyingPutOrCall_129.getString());
    FIX::UnderlyingPx UnderlyingPx_129;
    UnderlyingPx_129.setString("14715558");
    noUnderlyings_0_1.set(UnderlyingPx_129);
    UnderlyingInstrument_129.insert(UnderlyingPx_129.getString());
    FIX::UnderlyingQty UnderlyingQty_129;
    UnderlyingQty_129.setString("308501");
    noUnderlyings_0_1.set(UnderlyingQty_129);
    UnderlyingInstrument_129.insert(UnderlyingQty_129.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_129("LOCALMKTDATE_2069550736");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_129);
    UnderlyingInstrument_129.insert(UnderlyingRedemptionDate_129.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_129("STRING_27293010");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_129);
    UnderlyingInstrument_129.insert(UnderlyingRepoCollateralSecurityType_129.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_129;
    UnderlyingRepurchaseRate_129.setString("31.470000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_129);
    UnderlyingInstrument_129.insert(UnderlyingRepurchaseRate_129.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_129(974646005);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_129);
    UnderlyingInstrument_129.insert(UnderlyingRepurchaseTerm_129.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_129("STRING_790405842");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_129);
    UnderlyingInstrument_129.insert(UnderlyingRestructuringType_129.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_129("STRING_2057003992");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_129);
    UnderlyingInstrument_129.insert(UnderlyingSecurityDesc_129.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_129("EXCHANGE_827083562");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_129);
    UnderlyingInstrument_129.insert(UnderlyingSecurityExchange_129.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_129("STRING_1023183935");
    noUnderlyings_0_1.set(UnderlyingSecurityID_129);
    UnderlyingInstrument_129.insert(UnderlyingSecurityID_129.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_129("STRING_1998910070");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_129);
    UnderlyingInstrument_129.insert(UnderlyingSecurityIDSource_129.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_129("STRING_1278693417");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_129);
    UnderlyingInstrument_129.insert(UnderlyingSecuritySubType_129.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_129("STRING_615602501");
    noUnderlyings_0_1.set(UnderlyingSecurityType_129);
    UnderlyingInstrument_129.insert(UnderlyingSecurityType_129.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_129("STRING_670833856");
    noUnderlyings_0_1.set(UnderlyingSeniority_129);
    UnderlyingInstrument_129.insert(UnderlyingSeniority_129.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_129("STRING_46697886");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_129);
    UnderlyingInstrument_129.insert(UnderlyingSettlMethod_129.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_129(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_129);
    UnderlyingInstrument_129.insert(UnderlyingSettlementType_129.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_129;
    UnderlyingStartValue_129.setString("11230394");
    noUnderlyings_0_1.set(UnderlyingStartValue_129);
    UnderlyingInstrument_129.insert(UnderlyingStartValue_129.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_129("STRING_1838104687");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_129);
    UnderlyingInstrument_129.insert(UnderlyingStateOrProvinceOfIssue_129.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_129("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_129);
    UnderlyingInstrument_129.insert(UnderlyingStrikeCurrency_129.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_129;
    UnderlyingStrikePrice_129.setString("8491812");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_129);
    UnderlyingInstrument_129.insert(UnderlyingStrikePrice_129.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_129("STRING_1391610068");
    noUnderlyings_0_1.set(UnderlyingSymbol_129);
    UnderlyingInstrument_129.insert(UnderlyingSymbol_129.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_129("STRING_203609156");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_129);
    UnderlyingInstrument_129.insert(UnderlyingSymbolSfx_129.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_129("STRING_1457674545");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_129);
    UnderlyingInstrument_129.insert(UnderlyingTimeUnit_129.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_129("STRING_1198186075");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_129);
    UnderlyingInstrument_129.insert(UnderlyingUnitOfMeasure_129.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_129;
    UnderlyingUnitOfMeasureQty_129.setString("18831787");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_129);
    UnderlyingInstrument_129.insert(UnderlyingUnitOfMeasureQty_129.getString());
    all_values.push_back(UnderlyingInstrument_129);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_265;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_265("STRING_640549379");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_265);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_265.insert(UnderlyingSecurityAltID_265.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_265("STRING_139325548");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_265);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_265.insert(UnderlyingSecurityAltIDSource_265.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_265);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_266;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_266("STRING_1128795251");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_266);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_266.insert(UnderlyingSecurityAltID_266.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_266("STRING_1838271118");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_266);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_266.insert(UnderlyingSecurityAltIDSource_266.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_266);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_267;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_267("STRING_1610881407");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_267);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_267.insert(UnderlyingSecurityAltID_267.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_267("STRING_1159645420");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_267);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_267.insert(UnderlyingSecurityAltIDSource_267.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_267);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_253;
      FIX::UnderlyingStipType UnderlyingStipType_253("STRING_1638174417");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_253);
      UnderlyingStipulations_NoUnderlyingStips_253.insert(UnderlyingStipType_253.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_253("STRING_1513798568");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_253);
      UnderlyingStipulations_NoUnderlyingStips_253.insert(UnderlyingStipValue_253.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_253);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_255;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_255("STRING_281096611");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_255);
      UndlyInstrumentParties_NoUndlyInstrumentParties_255.insert(UnderlyingInstrumentPartyID_255.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_255('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_255);
      UndlyInstrumentParties_NoUndlyInstrumentParties_255.insert(UnderlyingInstrumentPartyIDSource_255.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_255(1414584126);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_255);
      UndlyInstrumentParties_NoUndlyInstrumentParties_255.insert(UnderlyingInstrumentPartyRole_255.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_255);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_516("STRING_1274745335");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_516);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516.insert(UnderlyingInstrumentPartySubID_516.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_516(545793896);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_516);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516.insert(UnderlyingInstrumentPartySubIDType_516.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_256;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_256("STRING_1919883047");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_256);
      UndlyInstrumentParties_NoUndlyInstrumentParties_256.insert(UnderlyingInstrumentPartyID_256.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_256('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_256);
      UndlyInstrumentParties_NoUndlyInstrumentParties_256.insert(UnderlyingInstrumentPartyIDSource_256.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_256(592491782);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_256);
      UndlyInstrumentParties_NoUndlyInstrumentParties_256.insert(UnderlyingInstrumentPartyRole_256.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_256);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_517("STRING_921134946");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_517);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517.insert(UnderlyingInstrumentPartySubID_517.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_517(283112821);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_517);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517.insert(UnderlyingInstrumentPartySubIDType_517.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_518("STRING_1568689405");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_518);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518.insert(UnderlyingInstrumentPartySubID_518.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_518(607006578);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_518);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518.insert(UnderlyingInstrumentPartySubIDType_518.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_27;
  FIX::Yield Yield_27;
  Yield_27.setString("40.710000");
  msg.set(Yield_27);
  YieldData_27.insert(Yield_27.getString());
  FIX::YieldCalcDate YieldCalcDate_27("LOCALMKTDATE_812815825");
  msg.set(YieldCalcDate_27);
  YieldData_27.insert(YieldCalcDate_27.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_27("LOCALMKTDATE_810615734");
  msg.set(YieldRedemptionDate_27);
  YieldData_27.insert(YieldRedemptionDate_27.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_27;
  YieldRedemptionPrice_27.setString("4424849");
  msg.set(YieldRedemptionPrice_27);
  YieldData_27.insert(YieldRedemptionPrice_27.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_27(2011001900);
  msg.set(YieldRedemptionPriceType_27);
  YieldData_27.insert(YieldRedemptionPriceType_27.getString());
  FIX::YieldType YieldType_27("STRING_CALL");
  msg.set(YieldType_27);
  YieldData_27.insert(YieldType_27.getString());
  all_values.push_back(YieldData_27);


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
