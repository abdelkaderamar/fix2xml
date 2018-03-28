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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::TradeCaptureReport msg;

  list<multiset<string>> all_values;
  multiset<string> TradeCaptureReport_0;
  FIX::AsOfIndicator AsOfIndicator_0('0');
  msg.set(AsOfIndicator_0);
  TradeCaptureReport_0.insert(AsOfIndicator_0.getString());
  FIX::AvgPx AvgPx_8;
  AvgPx_8.setString("6413000");
  msg.set(AvgPx_8);
  TradeCaptureReport_0.insert(AvgPx_8.getString());
  FIX::AvgPxIndicator AvgPxIndicator_4(0);
  msg.set(AvgPxIndicator_4);
  TradeCaptureReport_0.insert(AvgPxIndicator_4.getString());
  FIX::CalculatedCcyLastQty CalculatedCcyLastQty_1;
  CalculatedCcyLastQty_1.setString("10325937");
  msg.set(CalculatedCcyLastQty_1);
  TradeCaptureReport_0.insert(CalculatedCcyLastQty_1.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_25("LOCALMKTDATE_2046757044");
  msg.set(ClearingBusinessDate_25);
  TradeCaptureReport_0.insert(ClearingBusinessDate_25.getString());
  FIX::CopyMsgIndicator CopyMsgIndicator_2(false);
  msg.set(CopyMsgIndicator_2);
  TradeCaptureReport_0.insert(CopyMsgIndicator_2.getString());
  FIX::Currency Currency_71("USD");
  msg.set(Currency_71);
  TradeCaptureReport_0.insert(Currency_71.getString());
  FIX::CurrencyRatio CurrencyRatio_0;
  CurrencyRatio_0.setString("17604982");
  msg.set(CurrencyRatio_0);
  TradeCaptureReport_0.insert(CurrencyRatio_0.getString());
  FIX::DividendYield DividendYield_1;
  DividendYield_1.setString("19.410000");
  msg.set(DividendYield_1);
  TradeCaptureReport_0.insert(DividendYield_1.getString());
  FIX::ExecID ExecID_18("STRING_314625884");
  msg.set(ExecID_18);
  TradeCaptureReport_0.insert(ExecID_18.getString());
  FIX::ExecRestatementReason ExecRestatementReason_1(4);
  msg.set(ExecRestatementReason_1);
  TradeCaptureReport_0.insert(ExecRestatementReason_1.getString());
  FIX::ExecType ExecType_1('G');
  msg.set(ExecType_1);
  TradeCaptureReport_0.insert(ExecType_1.getString());
  FIX::FeeMultiplier FeeMultiplier_0;
  FeeMultiplier_0.setString("386959");
  msg.set(FeeMultiplier_0);
  TradeCaptureReport_0.insert(FeeMultiplier_0.getString());
  FIX::FirmTradeID FirmTradeID_6("STRING_1180578815");
  msg.set(FirmTradeID_6);
  TradeCaptureReport_0.insert(FirmTradeID_6.getString());
  FIX::GrossTradeAmt GrossTradeAmt_5;
  GrossTradeAmt_5.setString("12374769");
  msg.set(GrossTradeAmt_5);
  TradeCaptureReport_0.insert(GrossTradeAmt_5.getString());
  FIX::LastForwardPoints LastForwardPoints_1;
  LastForwardPoints_1.setString("17515143");
  msg.set(LastForwardPoints_1);
  TradeCaptureReport_0.insert(LastForwardPoints_1.getString());
  FIX::LastMkt LastMkt_6("EXCHANGE_367364697");
  msg.set(LastMkt_6);
  TradeCaptureReport_0.insert(LastMkt_6.getString());
  FIX::LastParPx LastParPx_8;
  LastParPx_8.setString("17247128");
  msg.set(LastParPx_8);
  TradeCaptureReport_0.insert(LastParPx_8.getString());
  FIX::LastPx LastPx_12;
  LastPx_12.setString("4530096");
  msg.set(LastPx_12);
  TradeCaptureReport_0.insert(LastPx_12.getString());
  FIX::LastQty LastQty_9;
  LastQty_9.setString("18787846");
  msg.set(LastQty_9);
  TradeCaptureReport_0.insert(LastQty_9.getString());
  FIX::LastRptRequested LastRptRequested_3(false);
  msg.set(LastRptRequested_3);
  TradeCaptureReport_0.insert(LastRptRequested_3.getString());
  FIX::LastSpotRate LastSpotRate_1;
  LastSpotRate_1.setString("11141684");
  msg.set(LastSpotRate_1);
  TradeCaptureReport_0.insert(LastSpotRate_1.getString());
  FIX::LastSwapPoints LastSwapPoints_1;
  LastSwapPoints_1.setString("20785529");
  msg.set(LastSwapPoints_1);
  TradeCaptureReport_0.insert(LastSwapPoints_1.getString());
  FIX::LastUpdateTime LastUpdateTime_6(FIX::UTCTIMESTAMP(2, 11, 38, 19, 10, 2003));
  msg.set(LastUpdateTime_6);
  TradeCaptureReport_0.insert(LastUpdateTime_6.getString());
  FIX::MarketID MarketID_23("EXCHANGE_865836238");
  msg.set(MarketID_23);
  TradeCaptureReport_0.insert(MarketID_23.getString());
  FIX::MarketSegmentID MarketSegmentID_23("STRING_1050320099");
  msg.set(MarketSegmentID_23);
  TradeCaptureReport_0.insert(MarketSegmentID_23.getString());
  FIX::MatchStatus MatchStatus_12('0');
  msg.set(MatchStatus_12);
  TradeCaptureReport_0.insert(MatchStatus_12.getString());
  FIX::MatchType MatchType_47("STRING_2");
  msg.set(MatchType_47);
  TradeCaptureReport_0.insert(MatchType_47.getString());
  FIX::MessageEventSource MessageEventSource_4("STRING_949593495");
  msg.set(MessageEventSource_4);
  TradeCaptureReport_0.insert(MessageEventSource_4.getString());
  FIX::MultiLegReportingType MultiLegReportingType_4('1');
  msg.set(MultiLegReportingType_4);
  TradeCaptureReport_0.insert(MultiLegReportingType_4.getString());
  FIX::OrigSecondaryTradeID OrigSecondaryTradeID_0("STRING_1067918438");
  msg.set(OrigSecondaryTradeID_0);
  TradeCaptureReport_0.insert(OrigSecondaryTradeID_0.getString());
  FIX::OrigTradeDate OrigTradeDate_0("LOCALMKTDATE_494989393");
  msg.set(OrigTradeDate_0);
  TradeCaptureReport_0.insert(OrigTradeDate_0.getString());
  FIX::OrigTradeHandlingInstr OrigTradeHandlingInstr_0('1');
  msg.set(OrigTradeHandlingInstr_0);
  TradeCaptureReport_0.insert(OrigTradeHandlingInstr_0.getString());
  FIX::OrigTradeID OrigTradeID_0("STRING_4666731");
  msg.set(OrigTradeID_0);
  TradeCaptureReport_0.insert(OrigTradeID_0.getString());
  FIX::PreviouslyReported PreviouslyReported_3(false);
  msg.set(PreviouslyReported_3);
  TradeCaptureReport_0.insert(PreviouslyReported_3.getString());
  FIX::PriceType PriceType_42(19);
  msg.set(PriceType_42);
  TradeCaptureReport_0.insert(PriceType_42.getString());
  FIX::PublishTrdIndicator PublishTrdIndicator_0(false);
  msg.set(PublishTrdIndicator_0);
  TradeCaptureReport_0.insert(PublishTrdIndicator_0.getString());
  FIX::QtyType QtyType_26(2);
  msg.set(QtyType_26);
  TradeCaptureReport_0.insert(QtyType_26.getString());
  FIX::RejectText RejectText_0("STRING_355020981");
  msg.set(RejectText_0);
  TradeCaptureReport_0.insert(RejectText_0.getString());
  FIX::ReportedPxDiff ReportedPxDiff_0(true);
  msg.set(ReportedPxDiff_0);
  TradeCaptureReport_0.insert(ReportedPxDiff_0.getString());
  FIX::RiskFreeRate RiskFreeRate_3;
  RiskFreeRate_3.setString("4523419");
  msg.set(RiskFreeRate_3);
  TradeCaptureReport_0.insert(RiskFreeRate_3.getString());
  FIX::RndPx RndPx_3;
  RndPx_3.setString("7223856");
  msg.set(RndPx_3);
  TradeCaptureReport_0.insert(RndPx_3.getString());
  FIX::SecondaryExecID SecondaryExecID_7("STRING_1985481490");
  msg.set(SecondaryExecID_7);
  TradeCaptureReport_0.insert(SecondaryExecID_7.getString());
  FIX::SecondaryFirmTradeID SecondaryFirmTradeID_0("STRING_905351568");
  msg.set(SecondaryFirmTradeID_0);
  TradeCaptureReport_0.insert(SecondaryFirmTradeID_0.getString());
  FIX::SecondaryTradeID SecondaryTradeID_0("STRING_453686632");
  msg.set(SecondaryTradeID_0);
  TradeCaptureReport_0.insert(SecondaryTradeID_0.getString());
  FIX::SecondaryTradeReportID SecondaryTradeReportID_13("STRING_579862517");
  msg.set(SecondaryTradeReportID_13);
  TradeCaptureReport_0.insert(SecondaryTradeReportID_13.getString());
  FIX::SecondaryTradeReportRefID SecondaryTradeReportRefID_0("STRING_2019519969");
  msg.set(SecondaryTradeReportRefID_0);
  TradeCaptureReport_0.insert(SecondaryTradeReportRefID_0.getString());
  FIX::SecondaryTrdType SecondaryTrdType_0(384755917);
  msg.set(SecondaryTrdType_0);
  TradeCaptureReport_0.insert(SecondaryTrdType_0.getString());
  FIX::SettlCurrency SettlCurrency_32("CAN");
  msg.set(SettlCurrency_32);
  TradeCaptureReport_0.insert(SettlCurrency_32.getString());
  FIX::SettlDate SettlDate_46("LOCALMKTDATE_98476000");
  msg.set(SettlDate_46);
  TradeCaptureReport_0.insert(SettlDate_46.getString());
  FIX::SettlSessID SettlSessID_12("STRING_ETH");
  msg.set(SettlSessID_12);
  TradeCaptureReport_0.insert(SettlSessID_12.getString());
  FIX::SettlSessSubID SettlSessSubID_11("STRING_1456762971");
  msg.set(SettlSessSubID_11);
  TradeCaptureReport_0.insert(SettlSessSubID_11.getString());
  FIX::SettlType SettlType_30("STRING_2");
  msg.set(SettlType_30);
  TradeCaptureReport_0.insert(SettlType_30.getString());
  FIX::ShortSaleReason ShortSaleReason_0(1);
  msg.set(ShortSaleReason_0);
  TradeCaptureReport_0.insert(ShortSaleReason_0.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_13('2');
  msg.set(SubscriptionRequestType_13);
  TradeCaptureReport_0.insert(SubscriptionRequestType_13.getString());
  FIX::TZTransactTime TZTransactTime_0("TZTIMESTAMP_1557816193");
  msg.set(TZTransactTime_0);
  TradeCaptureReport_0.insert(TZTransactTime_0.getString());
  FIX::TierCode TierCode_0("STRING_479859206");
  msg.set(TierCode_0);
  TradeCaptureReport_0.insert(TierCode_0.getString());
  FIX::TotNumTradeReports TotNumTradeReports_0(2073545576);
  msg.set(TotNumTradeReports_0);
  TradeCaptureReport_0.insert(TotNumTradeReports_0.getString());
  FIX::TradeDate TradeDate_25("LOCALMKTDATE_359926040");
  msg.set(TradeDate_25);
  TradeCaptureReport_0.insert(TradeDate_25.getString());
  FIX::TradeHandlingInstr TradeHandlingInstr_0('3');
  msg.set(TradeHandlingInstr_0);
  TradeCaptureReport_0.insert(TradeHandlingInstr_0.getString());
  FIX::TradeID TradeID_7("STRING_993980366");
  msg.set(TradeID_7);
  TradeCaptureReport_0.insert(TradeID_7.getString());
  FIX::TradeLegRefID TradeLegRefID_0("STRING_854915433");
  msg.set(TradeLegRefID_0);
  TradeCaptureReport_0.insert(TradeLegRefID_0.getString());
  FIX::TradeLinkID TradeLinkID_0("STRING_1752857621");
  msg.set(TradeLinkID_0);
  TradeCaptureReport_0.insert(TradeLinkID_0.getString());
  FIX::TradePublishIndicator TradePublishIndicator_0(2);
  msg.set(TradePublishIndicator_0);
  TradeCaptureReport_0.insert(TradePublishIndicator_0.getString());
  FIX::TradeReportID TradeReportID_13("STRING_1664530711");
  msg.set(TradeReportID_13);
  TradeCaptureReport_0.insert(TradeReportID_13.getString());
  FIX::TradeReportRefID TradeReportRefID_0("STRING_927299787");
  msg.set(TradeReportRefID_0);
  TradeCaptureReport_0.insert(TradeReportRefID_0.getString());
  FIX::TradeReportTransType TradeReportTransType_0(0);
  msg.set(TradeReportTransType_0);
  TradeCaptureReport_0.insert(TradeReportTransType_0.getString());
  FIX::TradeReportType TradeReportType_0(1);
  msg.set(TradeReportType_0);
  TradeCaptureReport_0.insert(TradeReportType_0.getString());
  FIX::TradeRequestID TradeRequestID_0("STRING_1282320768");
  msg.set(TradeRequestID_0);
  TradeCaptureReport_0.insert(TradeRequestID_0.getString());
  FIX::TransactTime TransactTime_70(FIX::UTCTIMESTAMP(7, 6, 24, 15, 3, 2011));
  msg.set(TransactTime_70);
  TradeCaptureReport_0.insert(TransactTime_70.getString());
  FIX::TransferReason TransferReason_0("STRING_1595088128");
  msg.set(TransferReason_0);
  TradeCaptureReport_0.insert(TransferReason_0.getString());
  FIX::TrdMatchID TrdMatchID_1("STRING_695665348");
  msg.set(TrdMatchID_1);
  TradeCaptureReport_0.insert(TrdMatchID_1.getString());
  FIX::TrdRptStatus TrdRptStatus_0(1);
  msg.set(TrdRptStatus_0);
  TradeCaptureReport_0.insert(TrdRptStatus_0.getString());
  FIX::TrdSubType TrdSubType_3(35);
  msg.set(TrdSubType_3);
  TradeCaptureReport_0.insert(TrdSubType_3.getString());
  FIX::TrdType TrdType_5(26);
  msg.set(TrdType_5);
  TradeCaptureReport_0.insert(TrdType_5.getString());
  FIX::UnderlyingSettlementDate UnderlyingSettlementDate_5("LOCALMKTDATE_159594363");
  msg.set(UnderlyingSettlementDate_5);
  TradeCaptureReport_0.insert(UnderlyingSettlementDate_5.getString());
  FIX::UnderlyingTradingSessionID UnderlyingTradingSessionID_0("STRING_822436183");
  msg.set(UnderlyingTradingSessionID_0);
  TradeCaptureReport_0.insert(UnderlyingTradingSessionID_0.getString());
  FIX::UnderlyingTradingSessionSubID UnderlyingTradingSessionSubID_0("STRING_1301637442");
  msg.set(UnderlyingTradingSessionSubID_0);
  TradeCaptureReport_0.insert(UnderlyingTradingSessionSubID_0.getString());
  FIX::UnsolicitedIndicator UnsolicitedIndicator_3(true);
  msg.set(UnsolicitedIndicator_3);
  TradeCaptureReport_0.insert(UnsolicitedIndicator_3.getString());
  FIX::VenueType VenueType_0('E');
  msg.set(VenueType_0);
  TradeCaptureReport_0.insert(VenueType_0.getString());
  FIX::Volatility Volatility_1;
  Volatility_1.setString("7119699");
  msg.set(Volatility_1);
  TradeCaptureReport_0.insert(Volatility_1.getString());
  all_values.push_back(TradeCaptureReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_19;
  FIX::ApplID ApplID_19("STRING_267551381");
  msg.set(ApplID_19);
  ApplicationSequenceControl_19.insert(ApplID_19.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_19(923613672);
  msg.set(ApplLastSeqNum_19);
  ApplicationSequenceControl_19.insert(ApplLastSeqNum_19.getString());
  FIX::ApplResendFlag ApplResendFlag_19(false);
  msg.set(ApplResendFlag_19);
  ApplicationSequenceControl_19.insert(ApplResendFlag_19.getString());
  FIX::ApplSeqNum ApplSeqNum_19(503660684);
  msg.set(ApplSeqNum_19);
  ApplicationSequenceControl_19.insert(ApplSeqNum_19.getString());
  all_values.push_back(ApplicationSequenceControl_19);

  // FinancingDetails
  multiset<string> FinancingDetails_31;
  FIX::AgreementCurrency AgreementCurrency_31("CHF");
  msg.set(AgreementCurrency_31);
  FinancingDetails_31.insert(AgreementCurrency_31.getString());
  FIX::AgreementDate AgreementDate_31("LOCALMKTDATE_109034658");
  msg.set(AgreementDate_31);
  FinancingDetails_31.insert(AgreementDate_31.getString());
  FIX::AgreementDesc AgreementDesc_31("STRING_768757488");
  msg.set(AgreementDesc_31);
  FinancingDetails_31.insert(AgreementDesc_31.getString());
  FIX::AgreementID AgreementID_31("STRING_1443858524");
  msg.set(AgreementID_31);
  FinancingDetails_31.insert(AgreementID_31.getString());
  FIX::DeliveryType DeliveryType_31(1);
  msg.set(DeliveryType_31);
  FinancingDetails_31.insert(DeliveryType_31.getString());
  FIX::EndDate EndDate_31("LOCALMKTDATE_790696303");
  msg.set(EndDate_31);
  FinancingDetails_31.insert(EndDate_31.getString());
  FIX::MarginRatio MarginRatio_31;
  MarginRatio_31.setString("68.130000");
  msg.set(MarginRatio_31);
  FinancingDetails_31.insert(MarginRatio_31.getString());
  FIX::StartDate StartDate_31("LOCALMKTDATE_171171565");
  msg.set(StartDate_31);
  FinancingDetails_31.insert(StartDate_31.getString());
  FIX::TerminationType TerminationType_31(2);
  msg.set(TerminationType_31);
  FinancingDetails_31.insert(TerminationType_31.getString());
  all_values.push_back(FinancingDetails_31);

  // Instrument
  multiset<string> Instrument_95;
  FIX::AttachmentPoint AttachmentPoint_95;
  AttachmentPoint_95.setString("34.040000");
  msg.set(AttachmentPoint_95);
  Instrument_95.insert(AttachmentPoint_95.getString());
  FIX::CFICode CFICode_100("STRING_28394363");
  msg.set(CFICode_100);
  Instrument_95.insert(CFICode_100.getString());
  FIX::CPProgram CPProgram_95(1);
  msg.set(CPProgram_95);
  Instrument_95.insert(CPProgram_95.getString());
  FIX::CPRegType CPRegType_95("STRING_55001563");
  msg.set(CPRegType_95);
  Instrument_95.insert(CPRegType_95.getString());
  FIX::CapPrice CapPrice_95;
  CapPrice_95.setString("3393037");
  msg.set(CapPrice_95);
  Instrument_95.insert(CapPrice_95.getString());
  FIX::ContractMultiplier ContractMultiplier_95;
  ContractMultiplier_95.setString("18946769");
  msg.set(ContractMultiplier_95);
  Instrument_95.insert(ContractMultiplier_95.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_95(1);
  msg.set(ContractMultiplierUnit_95);
  Instrument_95.insert(ContractMultiplierUnit_95.getString());
  FIX::ContractSettlMonth ContractSettlMonth_95("MONTHYEAR_1034969141");
  msg.set(ContractSettlMonth_95);
  Instrument_95.insert(ContractSettlMonth_95.getString());
  FIX::CountryOfIssue CountryOfIssue_95("COUNTRY_669316661");
  msg.set(CountryOfIssue_95);
  Instrument_95.insert(CountryOfIssue_95.getString());
  FIX::CouponPaymentDate CouponPaymentDate_95("LOCALMKTDATE_1015762904");
  msg.set(CouponPaymentDate_95);
  Instrument_95.insert(CouponPaymentDate_95.getString());
  FIX::CouponRate CouponRate_95;
  CouponRate_95.setString("4.900000");
  msg.set(CouponRate_95);
  Instrument_95.insert(CouponRate_95.getString());
  FIX::CreditRating CreditRating_95("STRING_828911024");
  msg.set(CreditRating_95);
  Instrument_95.insert(CreditRating_95.getString());
  FIX::DatedDate DatedDate_95("LOCALMKTDATE_1838199087");
  msg.set(DatedDate_95);
  Instrument_95.insert(DatedDate_95.getString());
  FIX::DetachmentPoint DetachmentPoint_95;
  DetachmentPoint_95.setString("42.840000");
  msg.set(DetachmentPoint_95);
  Instrument_95.insert(DetachmentPoint_95.getString());
  FIX::EncodedIssuer EncodedIssuer_95("DATA_616603199");
  msg.set(EncodedIssuer_95);
  Instrument_95.insert(EncodedIssuer_95.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_95(688267183);
  msg.set(EncodedIssuerLen_95);
  Instrument_95.insert(EncodedIssuerLen_95.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_95("DATA_1695234272");
  msg.set(EncodedSecurityDesc_95);
  Instrument_95.insert(EncodedSecurityDesc_95.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_95(884154580);
  msg.set(EncodedSecurityDescLen_95);
  Instrument_95.insert(EncodedSecurityDescLen_95.getString());
  FIX::ExerciseStyle ExerciseStyle_95(1);
  msg.set(ExerciseStyle_95);
  Instrument_95.insert(ExerciseStyle_95.getString());
  FIX::Factor Factor_95;
  Factor_95.setString("6196466");
  msg.set(Factor_95);
  Instrument_95.insert(Factor_95.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_95(true);
  msg.set(FlexProductEligibilityIndicator_95);
  Instrument_95.insert(FlexProductEligibilityIndicator_95.getString());
  FIX::FlexibleIndicator FlexibleIndicator_95(true);
  msg.set(FlexibleIndicator_95);
  Instrument_95.insert(FlexibleIndicator_95.getString());
  FIX::FloorPrice FloorPrice_95;
  FloorPrice_95.setString("3989744");
  msg.set(FloorPrice_95);
  Instrument_95.insert(FloorPrice_95.getString());
  FIX::FlowScheduleType FlowScheduleType_95(2);
  msg.set(FlowScheduleType_95);
  Instrument_95.insert(FlowScheduleType_95.getString());
  FIX::InstrRegistry InstrRegistry_95("STRING_3265087");
  msg.set(InstrRegistry_95);
  Instrument_95.insert(InstrRegistry_95.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_95('1');
  msg.set(InstrmtAssignmentMethod_95);
  Instrument_95.insert(InstrmtAssignmentMethod_95.getString());
  FIX::InterestAccrualDate InterestAccrualDate_95("LOCALMKTDATE_385700719");
  msg.set(InterestAccrualDate_95);
  Instrument_95.insert(InterestAccrualDate_95.getString());
  FIX::IssueDate IssueDate_95("LOCALMKTDATE_793961390");
  msg.set(IssueDate_95);
  Instrument_95.insert(IssueDate_95.getString());
  FIX::Issuer Issuer_95("STRING_1504566154");
  msg.set(Issuer_95);
  Instrument_95.insert(Issuer_95.getString());
  FIX::ListMethod ListMethod_95(0);
  msg.set(ListMethod_95);
  Instrument_95.insert(ListMethod_95.getString());
  FIX::LocaleOfIssue LocaleOfIssue_95("STRING_1867365175");
  msg.set(LocaleOfIssue_95);
  Instrument_95.insert(LocaleOfIssue_95.getString());
  FIX::MaturityDate MaturityDate_95("LOCALMKTDATE_1983999558");
  msg.set(MaturityDate_95);
  Instrument_95.insert(MaturityDate_95.getString());
  FIX::MaturityMonthYear MaturityMonthYear_95("MONTHYEAR_585266647");
  msg.set(MaturityMonthYear_95);
  Instrument_95.insert(MaturityMonthYear_95.getString());
  FIX::MaturityTime MaturityTime_95("TZTIMEONLY_913990637");
  msg.set(MaturityTime_95);
  Instrument_95.insert(MaturityTime_95.getString());
  FIX::MinPriceIncrement MinPriceIncrement_95;
  MinPriceIncrement_95.setString("20390011");
  msg.set(MinPriceIncrement_95);
  Instrument_95.insert(MinPriceIncrement_95.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_95;
  MinPriceIncrementAmount_95.setString("9245704");
  msg.set(MinPriceIncrementAmount_95);
  Instrument_95.insert(MinPriceIncrementAmount_95.getString());
  FIX::NTPositionLimit NTPositionLimit_95(661183941);
  msg.set(NTPositionLimit_95);
  Instrument_95.insert(NTPositionLimit_95.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_95;
  NotionalPercentageOutstanding_95.setString("71.660000");
  msg.set(NotionalPercentageOutstanding_95);
  Instrument_95.insert(NotionalPercentageOutstanding_95.getString());
  FIX::OptAttribute OptAttribute_95('1');
  msg.set(OptAttribute_95);
  Instrument_95.insert(OptAttribute_95.getString());
  FIX::OptPayoutAmount OptPayoutAmount_95;
  OptPayoutAmount_95.setString("13305006");
  msg.set(OptPayoutAmount_95);
  Instrument_95.insert(OptPayoutAmount_95.getString());
  FIX::OptPayoutType OptPayoutType_95(2);
  msg.set(OptPayoutType_95);
  Instrument_95.insert(OptPayoutType_95.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_95;
  OriginalNotionalPercentageOutstanding_95.setString("64.240000");
  msg.set(OriginalNotionalPercentageOutstanding_95);
  Instrument_95.insert(OriginalNotionalPercentageOutstanding_95.getString());
  FIX::Pool Pool_95("STRING_11927978");
  msg.set(Pool_95);
  Instrument_95.insert(Pool_95.getString());
  FIX::PositionLimit PositionLimit_95(100601861);
  msg.set(PositionLimit_95);
  Instrument_95.insert(PositionLimit_95.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_95("STRING_INX");
  msg.set(PriceQuoteMethod_95);
  Instrument_95.insert(PriceQuoteMethod_95.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_95("STRING_628531177");
  msg.set(PriceUnitOfMeasure_95);
  Instrument_95.insert(PriceUnitOfMeasure_95.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_95;
  PriceUnitOfMeasureQty_95.setString("7888690");
  msg.set(PriceUnitOfMeasureQty_95);
  Instrument_95.insert(PriceUnitOfMeasureQty_95.getString());
  FIX::Product Product_103(13);
  msg.set(Product_103);
  Instrument_95.insert(Product_103.getString());
  FIX::ProductComplex ProductComplex_95("STRING_1512685757");
  msg.set(ProductComplex_95);
  Instrument_95.insert(ProductComplex_95.getString());
  FIX::PutOrCall PutOrCall_95(1);
  msg.set(PutOrCall_95);
  Instrument_95.insert(PutOrCall_95.getString());
  FIX::RedemptionDate RedemptionDate_95("LOCALMKTDATE_644344336");
  msg.set(RedemptionDate_95);
  Instrument_95.insert(RedemptionDate_95.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_95("STRING_753017374");
  msg.set(RepoCollateralSecurityType_95);
  Instrument_95.insert(RepoCollateralSecurityType_95.getString());
  FIX::RepurchaseRate RepurchaseRate_95;
  RepurchaseRate_95.setString("74.980000");
  msg.set(RepurchaseRate_95);
  Instrument_95.insert(RepurchaseRate_95.getString());
  FIX::RepurchaseTerm RepurchaseTerm_95(1043318801);
  msg.set(RepurchaseTerm_95);
  Instrument_95.insert(RepurchaseTerm_95.getString());
  FIX::RestructuringType RestructuringType_95("STRING_FR");
  msg.set(RestructuringType_95);
  Instrument_95.insert(RestructuringType_95.getString());
  FIX::SecurityDesc SecurityDesc_95("STRING_1638522585");
  msg.set(SecurityDesc_95);
  Instrument_95.insert(SecurityDesc_95.getString());
  FIX::SecurityExchange SecurityExchange_95("EXCHANGE_738668141");
  msg.set(SecurityExchange_95);
  Instrument_95.insert(SecurityExchange_95.getString());
  FIX::SecurityGroup SecurityGroup_95("STRING_488084368");
  msg.set(SecurityGroup_95);
  Instrument_95.insert(SecurityGroup_95.getString());
  FIX::SecurityID SecurityID_95("STRING_285000327");
  msg.set(SecurityID_95);
  Instrument_95.insert(SecurityID_95.getString());
  FIX::SecurityIDSource SecurityIDSource_95("STRING_4");
  msg.set(SecurityIDSource_95);
  Instrument_95.insert(SecurityIDSource_95.getString());
  FIX::SecurityStatus SecurityStatus_96("STRING_1");
  msg.set(SecurityStatus_96);
  Instrument_95.insert(SecurityStatus_96.getString());
  FIX::SecuritySubType SecuritySubType_99("STRING_4881854");
  msg.set(SecuritySubType_99);
  Instrument_95.insert(SecuritySubType_99.getString());
  FIX::SecurityType SecurityType_103("STRING_MPP");
  msg.set(SecurityType_103);
  Instrument_95.insert(SecurityType_103.getString());
  FIX::Seniority Seniority_95("STRING_SB");
  msg.set(Seniority_95);
  Instrument_95.insert(Seniority_95.getString());
  FIX::SettlMethod SettlMethod_95('C');
  msg.set(SettlMethod_95);
  Instrument_95.insert(SettlMethod_95.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_95("STRING_1971267680");
  msg.set(SettleOnOpenFlag_95);
  Instrument_95.insert(SettleOnOpenFlag_95.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_95("STRING_407310093");
  msg.set(StateOrProvinceOfIssue_95);
  Instrument_95.insert(StateOrProvinceOfIssue_95.getString());
  FIX::StrikeCurrency StrikeCurrency_95("JPY");
  msg.set(StrikeCurrency_95);
  Instrument_95.insert(StrikeCurrency_95.getString());
  FIX::StrikeMultiplier StrikeMultiplier_95;
  StrikeMultiplier_95.setString("2193660");
  msg.set(StrikeMultiplier_95);
  Instrument_95.insert(StrikeMultiplier_95.getString());
  FIX::StrikePrice StrikePrice_95;
  StrikePrice_95.setString("7630733");
  msg.set(StrikePrice_95);
  Instrument_95.insert(StrikePrice_95.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_95(1);
  msg.set(StrikePriceBoundaryMethod_95);
  Instrument_95.insert(StrikePriceBoundaryMethod_95.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_95;
  StrikePriceBoundaryPrecision_95.setString("24.520000");
  msg.set(StrikePriceBoundaryPrecision_95);
  Instrument_95.insert(StrikePriceBoundaryPrecision_95.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_95(2);
  msg.set(StrikePriceDeterminationMethod_95);
  Instrument_95.insert(StrikePriceDeterminationMethod_95.getString());
  FIX::StrikeValue StrikeValue_95;
  StrikeValue_95.setString("18758794");
  msg.set(StrikeValue_95);
  Instrument_95.insert(StrikeValue_95.getString());
  FIX::Symbol Symbol_95("STRING_189995865");
  msg.set(Symbol_95);
  Instrument_95.insert(Symbol_95.getString());
  FIX::SymbolSfx SymbolSfx_95("STRING_WI");
  msg.set(SymbolSfx_95);
  Instrument_95.insert(SymbolSfx_95.getString());
  FIX::TimeUnit TimeUnit_95("STRING_D");
  msg.set(TimeUnit_95);
  Instrument_95.insert(TimeUnit_95.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_95(3);
  msg.set(UnderlyingPriceDeterminationMethod_95);
  Instrument_95.insert(UnderlyingPriceDeterminationMethod_95.getString());
  FIX::UnitOfMeasure UnitOfMeasure_95("STRING_tn");
  msg.set(UnitOfMeasure_95);
  Instrument_95.insert(UnitOfMeasure_95.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_95;
  UnitOfMeasureQty_95.setString("7705311");
  msg.set(UnitOfMeasureQty_95);
  Instrument_95.insert(UnitOfMeasureQty_95.getString());
  FIX::ValuationMethod ValuationMethod_95("STRING_FUT");
  msg.set(ValuationMethod_95);
  Instrument_95.insert(ValuationMethod_95.getString());
  all_values.push_back(Instrument_95);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_176;
    FIX::ComplexEventCondition ComplexEventCondition_176(1);
    noComplexEvents_0_0.set(ComplexEventCondition_176);
    ComplexEvents_NoComplexEvents_176.insert(ComplexEventCondition_176.getString());
    FIX::ComplexEventPrice ComplexEventPrice_176;
    ComplexEventPrice_176.setString("19023566");
    noComplexEvents_0_0.set(ComplexEventPrice_176);
    ComplexEvents_NoComplexEvents_176.insert(ComplexEventPrice_176.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_176(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_176);
    ComplexEvents_NoComplexEvents_176.insert(ComplexEventPriceBoundaryMethod_176.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_176;
    ComplexEventPriceBoundaryPrecision_176.setString("75.630000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_176);
    ComplexEvents_NoComplexEvents_176.insert(ComplexEventPriceBoundaryPrecision_176.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_176(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_176);
    ComplexEvents_NoComplexEvents_176.insert(ComplexEventPriceTimeType_176.getString());
    FIX::ComplexEventType ComplexEventType_176(9);
    noComplexEvents_0_0.set(ComplexEventType_176);
    ComplexEvents_NoComplexEvents_176.insert(ComplexEventType_176.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_176;
    ComplexOptPayoutAmount_176.setString("343442");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_176);
    ComplexEvents_NoComplexEvents_176.insert(ComplexOptPayoutAmount_176.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_176);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_358;
      FIX::ComplexEventEndDate ComplexEventEndDate_358(FIX::UTCTIMESTAMP(17, 46, 39, 21, 11, 2012));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_358);
      ComplexEventDates_NoComplexEventDates_358.insert(ComplexEventEndDate_358.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_358(FIX::UTCTIMESTAMP(8, 40, 21, 20, 9, 2010));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_358);
      ComplexEventDates_NoComplexEventDates_358.insert(ComplexEventStartDate_358.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_358);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_721;
        FIX::ComplexEventEndTime ComplexEventEndTime_721(FIX::UTCTIMEONLY(5, 18, 19));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_721);
        ComplexEventTimes_NoComplexEventTimes_721.insert(ComplexEventEndTime_721.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_721(FIX::UTCTIMEONLY(3, 25, 32));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_721);
        ComplexEventTimes_NoComplexEventTimes_721.insert(ComplexEventStartTime_721.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_721);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_722;
        FIX::ComplexEventEndTime ComplexEventEndTime_722(FIX::UTCTIMEONLY(5, 19, 13));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_722);
        ComplexEventTimes_NoComplexEventTimes_722.insert(ComplexEventEndTime_722.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_722(FIX::UTCTIMEONLY(10, 15, 46));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_722);
        ComplexEventTimes_NoComplexEventTimes_722.insert(ComplexEventStartTime_722.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_722);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_359;
      FIX::ComplexEventEndDate ComplexEventEndDate_359(FIX::UTCTIMESTAMP(20, 33, 33, 13, 8, 2016));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_359);
      ComplexEventDates_NoComplexEventDates_359.insert(ComplexEventEndDate_359.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_359(FIX::UTCTIMESTAMP(20, 26, 8, 12, 3, 2011));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_359);
      ComplexEventDates_NoComplexEventDates_359.insert(ComplexEventStartDate_359.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_359);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_723;
        FIX::ComplexEventEndTime ComplexEventEndTime_723(FIX::UTCTIMEONLY(4, 32, 42));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_723);
        ComplexEventTimes_NoComplexEventTimes_723.insert(ComplexEventEndTime_723.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_723(FIX::UTCTIMEONLY(11, 59, 39));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_723);
        ComplexEventTimes_NoComplexEventTimes_723.insert(ComplexEventStartTime_723.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_723);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_724;
        FIX::ComplexEventEndTime ComplexEventEndTime_724(FIX::UTCTIMEONLY(20, 58, 2));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_724);
        ComplexEventTimes_NoComplexEventTimes_724.insert(ComplexEventEndTime_724.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_724(FIX::UTCTIMEONLY(13, 17, 1));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_724);
        ComplexEventTimes_NoComplexEventTimes_724.insert(ComplexEventStartTime_724.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_724);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_177;
    FIX::ComplexEventCondition ComplexEventCondition_177(2);
    noComplexEvents_0_1.set(ComplexEventCondition_177);
    ComplexEvents_NoComplexEvents_177.insert(ComplexEventCondition_177.getString());
    FIX::ComplexEventPrice ComplexEventPrice_177;
    ComplexEventPrice_177.setString("1887916");
    noComplexEvents_0_1.set(ComplexEventPrice_177);
    ComplexEvents_NoComplexEvents_177.insert(ComplexEventPrice_177.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_177(2);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_177);
    ComplexEvents_NoComplexEvents_177.insert(ComplexEventPriceBoundaryMethod_177.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_177;
    ComplexEventPriceBoundaryPrecision_177.setString("50.200000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_177);
    ComplexEvents_NoComplexEvents_177.insert(ComplexEventPriceBoundaryPrecision_177.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_177(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_177);
    ComplexEvents_NoComplexEvents_177.insert(ComplexEventPriceTimeType_177.getString());
    FIX::ComplexEventType ComplexEventType_177(2);
    noComplexEvents_0_1.set(ComplexEventType_177);
    ComplexEvents_NoComplexEvents_177.insert(ComplexEventType_177.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_177;
    ComplexOptPayoutAmount_177.setString("8008527");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_177);
    ComplexEvents_NoComplexEvents_177.insert(ComplexOptPayoutAmount_177.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_177);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_360;
      FIX::ComplexEventEndDate ComplexEventEndDate_360(FIX::UTCTIMESTAMP(20, 59, 30, 6, 11, 2002));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_360);
      ComplexEventDates_NoComplexEventDates_360.insert(ComplexEventEndDate_360.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_360(FIX::UTCTIMESTAMP(7, 16, 55, 21, 9, 2013));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_360);
      ComplexEventDates_NoComplexEventDates_360.insert(ComplexEventStartDate_360.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_360);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_725;
        FIX::ComplexEventEndTime ComplexEventEndTime_725(FIX::UTCTIMEONLY(15, 43, 55));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_725);
        ComplexEventTimes_NoComplexEventTimes_725.insert(ComplexEventEndTime_725.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_725(FIX::UTCTIMEONLY(8, 4, 59));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_725);
        ComplexEventTimes_NoComplexEventTimes_725.insert(ComplexEventStartTime_725.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_725);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_726;
        FIX::ComplexEventEndTime ComplexEventEndTime_726(FIX::UTCTIMEONLY(10, 17, 19));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_726);
        ComplexEventTimes_NoComplexEventTimes_726.insert(ComplexEventEndTime_726.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_726(FIX::UTCTIMEONLY(18, 58, 33));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_726);
        ComplexEventTimes_NoComplexEventTimes_726.insert(ComplexEventStartTime_726.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_726);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradeCaptureReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_190;
    FIX::EventDate EventDate_190("LOCALMKTDATE_1621954674");
    noEvents_0_0.set(EventDate_190);
    EvntGrp_NoEvents_190.insert(EventDate_190.getString());
    FIX::EventPx EventPx_190;
    EventPx_190.setString("20290698");
    noEvents_0_0.set(EventPx_190);
    EvntGrp_NoEvents_190.insert(EventPx_190.getString());
    FIX::EventText EventText_190("STRING_1804012238");
    noEvents_0_0.set(EventText_190);
    EvntGrp_NoEvents_190.insert(EventText_190.getString());
    FIX::EventTime EventTime_190(FIX::UTCTIMESTAMP(23, 14, 58, 14, 11, 2012));
    noEvents_0_0.set(EventTime_190);
    EvntGrp_NoEvents_190.insert(EventTime_190.getString());
    FIX::EventType EventType_190(4);
    noEvents_0_0.set(EventType_190);
    EvntGrp_NoEvents_190.insert(EventType_190.getString());
    all_values.push_back(EvntGrp_NoEvents_190);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_191;
    FIX::EventDate EventDate_191("LOCALMKTDATE_1870021302");
    noEvents_0_1.set(EventDate_191);
    EvntGrp_NoEvents_191.insert(EventDate_191.getString());
    FIX::EventPx EventPx_191;
    EventPx_191.setString("13967202");
    noEvents_0_1.set(EventPx_191);
    EvntGrp_NoEvents_191.insert(EventPx_191.getString());
    FIX::EventText EventText_191("STRING_1078199468");
    noEvents_0_1.set(EventText_191);
    EvntGrp_NoEvents_191.insert(EventText_191.getString());
    FIX::EventTime EventTime_191(FIX::UTCTIMESTAMP(8, 51, 30, 22, 4, 2005));
    noEvents_0_1.set(EventTime_191);
    EvntGrp_NoEvents_191.insert(EventTime_191.getString());
    FIX::EventType EventType_191(2);
    noEvents_0_1.set(EventType_191);
    EvntGrp_NoEvents_191.insert(EventType_191.getString());
    all_values.push_back(EvntGrp_NoEvents_191);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_188;
    FIX::InstrumentPartyID InstrumentPartyID_188("STRING_694578741");
    noInstrumentParties_0_0.set(InstrumentPartyID_188);
    InstrumentParties_NoInstrumentParties_188.insert(InstrumentPartyID_188.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_188('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_188);
    InstrumentParties_NoInstrumentParties_188.insert(InstrumentPartyIDSource_188.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_188(370119817);
    noInstrumentParties_0_0.set(InstrumentPartyRole_188);
    InstrumentParties_NoInstrumentParties_188.insert(InstrumentPartyRole_188.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_188);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_394;
      FIX::InstrumentPartySubID InstrumentPartySubID_394("STRING_1766356005");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_394);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_394.insert(InstrumentPartySubID_394.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_394(1196025215);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_394);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_394.insert(InstrumentPartySubIDType_394.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_394);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradeCaptureReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_210;
    FIX::SecurityAltID SecurityAltID_210("STRING_1707632093");
    noSecurityAltID_0_0.set(SecurityAltID_210);
    SecAltIDGrp_NoSecurityAltID_210.insert(SecurityAltID_210.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_210("STRING_670496242");
    noSecurityAltID_0_0.set(SecurityAltIDSource_210);
    SecAltIDGrp_NoSecurityAltID_210.insert(SecurityAltIDSource_210.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_210);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_190;
  FIX::SecurityXML SecurityXML_191("XMLDATA_572073001");
  msg.set(SecurityXML_191);
  FIX::SecurityXMLLen SecurityXMLLen_95(1364160683);
  msg.set(SecurityXMLLen_95);
  FIX::SecurityXMLSchema SecurityXMLSchema_95("STRING_1768370707");
  msg.set(SecurityXMLSchema_95);
  SecurityXML_190.insert(SecurityXMLSchema_95.getString());
  all_values.push_back(SecurityXML_190);

  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::TradeCaptureReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_11;
    FIX::PosAmt PosAmt_11;
    PosAmt_11.setString("626835");
    noPosAmt_0_0.set(PosAmt_11);
    PositionAmountData_NoPosAmt_11.insert(PosAmt_11.getString());
    FIX::PosAmtType PosAmtType_11("STRING_CPN");
    noPosAmt_0_0.set(PosAmtType_11);
    PositionAmountData_NoPosAmt_11.insert(PosAmtType_11.getString());
    FIX::PositionCurrency PositionCurrency_11("STRING_1482301694");
    noPosAmt_0_0.set(PositionCurrency_11);
    PositionAmountData_NoPosAmt_11.insert(PositionCurrency_11.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_11);

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_12;
    FIX::PosAmt PosAmt_12;
    PosAmt_12.setString("8616145");
    noPosAmt_0_1.set(PosAmt_12);
    PositionAmountData_NoPosAmt_12.insert(PosAmt_12.getString());
    FIX::PosAmtType PosAmtType_12("STRING_IMTM");
    noPosAmt_0_1.set(PosAmtType_12);
    PositionAmountData_NoPosAmt_12.insert(PosAmtType_12.getString());
    FIX::PositionCurrency PositionCurrency_12("STRING_1241110049");
    noPosAmt_0_1.set(PositionCurrency_12);
    PositionAmountData_NoPosAmt_12.insert(PositionCurrency_12.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_12);

    msg.addGroup(noPosAmt_0_1);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::TradeCaptureReport::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_13;
    FIX::RootPartyID RootPartyID_13("STRING_1686058660");
    noRootPartyIDs_0_0.set(RootPartyID_13);
    RootParties_NoRootPartyIDs_13.insert(RootPartyID_13.getString());
    FIX::RootPartyIDSource RootPartyIDSource_13('1');
    noRootPartyIDs_0_0.set(RootPartyIDSource_13);
    RootParties_NoRootPartyIDs_13.insert(RootPartyIDSource_13.getString());
    FIX::RootPartyRole RootPartyRole_13(814003201);
    noRootPartyIDs_0_0.set(RootPartyRole_13);
    RootParties_NoRootPartyIDs_13.insert(RootPartyRole_13.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_13);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_27;
      FIX::RootPartySubID RootPartySubID_27("STRING_1822286900");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_27);
      RootSubParties_NoRootPartySubIDs_27.insert(RootPartySubID_27.getString());
      FIX::RootPartySubIDType RootPartySubIDType_27(1202275172);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_27);
      RootSubParties_NoRootPartySubIDs_27.insert(RootPartySubIDType_27.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_27);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_28;
      FIX::RootPartySubID RootPartySubID_28("STRING_1460828075");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_28);
      RootSubParties_NoRootPartySubIDs_28.insert(RootPartySubID_28.getString());
      FIX::RootPartySubIDType RootPartySubIDType_28(1919582771);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_28);
      RootSubParties_NoRootPartySubIDs_28.insert(RootPartySubIDType_28.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_28);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_29;
      FIX::RootPartySubID RootPartySubID_29("STRING_1649304727");
      noRootPartySubIDs_0_1_2.set(RootPartySubID_29);
      RootSubParties_NoRootPartySubIDs_29.insert(RootPartySubID_29.getString());
      FIX::RootPartySubIDType RootPartySubIDType_29(52225189);
      noRootPartySubIDs_0_1_2.set(RootPartySubIDType_29);
      RootSubParties_NoRootPartySubIDs_29.insert(RootPartySubIDType_29.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_29);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_14;
    FIX::RootPartyID RootPartyID_14("STRING_117166281");
    noRootPartyIDs_0_1.set(RootPartyID_14);
    RootParties_NoRootPartyIDs_14.insert(RootPartyID_14.getString());
    FIX::RootPartyIDSource RootPartyIDSource_14('1');
    noRootPartyIDs_0_1.set(RootPartyIDSource_14);
    RootParties_NoRootPartyIDs_14.insert(RootPartyIDSource_14.getString());
    FIX::RootPartyRole RootPartyRole_14(1185255567);
    noRootPartyIDs_0_1.set(RootPartyRole_14);
    RootParties_NoRootPartyIDs_14.insert(RootPartyRole_14.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_14);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_30;
      FIX::RootPartySubID RootPartySubID_30("STRING_426389304");
      noRootPartySubIDs_1_1_0.set(RootPartySubID_30);
      RootSubParties_NoRootPartySubIDs_30.insert(RootPartySubID_30.getString());
      FIX::RootPartySubIDType RootPartySubIDType_30(804127924);
      noRootPartySubIDs_1_1_0.set(RootPartySubIDType_30);
      RootSubParties_NoRootPartySubIDs_30.insert(RootPartySubIDType_30.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_30);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_31;
      FIX::RootPartySubID RootPartySubID_31("STRING_1683311314");
      noRootPartySubIDs_1_1_1.set(RootPartySubID_31);
      RootSubParties_NoRootPartySubIDs_31.insert(RootPartySubID_31.getString());
      FIX::RootPartySubIDType RootPartySubIDType_31(1116876060);
      noRootPartySubIDs_1_1_1.set(RootPartySubIDType_31);
      RootSubParties_NoRootPartySubIDs_31.insert(RootPartySubIDType_31.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_31);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_32;
      FIX::RootPartySubID RootPartySubID_32("STRING_364276369");
      noRootPartySubIDs_1_1_2.set(RootPartySubID_32);
      RootSubParties_NoRootPartySubIDs_32.insert(RootPartySubID_32.getString());
      FIX::RootPartySubIDType RootPartySubIDType_32(206323908);
      noRootPartySubIDs_1_1_2.set(RootPartySubIDType_32);
      RootSubParties_NoRootPartySubIDs_32.insert(RootPartySubIDType_32.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_32);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_1);
  }
  {
    FIX50SP2::TradeCaptureReport::NoRootPartyIDs noRootPartyIDs_0_2;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_15;
    FIX::RootPartyID RootPartyID_15("STRING_1688949061");
    noRootPartyIDs_0_2.set(RootPartyID_15);
    RootParties_NoRootPartyIDs_15.insert(RootPartyID_15.getString());
    FIX::RootPartyIDSource RootPartyIDSource_15('1');
    noRootPartyIDs_0_2.set(RootPartyIDSource_15);
    RootParties_NoRootPartyIDs_15.insert(RootPartyIDSource_15.getString());
    FIX::RootPartyRole RootPartyRole_15(1974694615);
    noRootPartyIDs_0_2.set(RootPartyRole_15);
    RootParties_NoRootPartyIDs_15.insert(RootPartyRole_15.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_15);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_33;
      FIX::RootPartySubID RootPartySubID_33("STRING_1791120641");
      noRootPartySubIDs_2_1_0.set(RootPartySubID_33);
      RootSubParties_NoRootPartySubIDs_33.insert(RootPartySubID_33.getString());
      FIX::RootPartySubIDType RootPartySubIDType_33(1871399933);
      noRootPartySubIDs_2_1_0.set(RootPartySubIDType_33);
      RootSubParties_NoRootPartySubIDs_33.insert(RootPartySubIDType_33.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_33);

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_34;
      FIX::RootPartySubID RootPartySubID_34("STRING_1323263891");
      noRootPartySubIDs_2_1_1.set(RootPartySubID_34);
      RootSubParties_NoRootPartySubIDs_34.insert(RootPartySubID_34.getString());
      FIX::RootPartySubIDType RootPartySubIDType_34(505251565);
      noRootPartySubIDs_2_1_1.set(RootPartySubIDType_34);
      RootSubParties_NoRootPartySubIDs_34.insert(RootPartySubIDType_34.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_34);

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_35;
      FIX::RootPartySubID RootPartySubID_35("STRING_13254696");
      noRootPartySubIDs_2_1_2.set(RootPartySubID_35);
      RootSubParties_NoRootPartySubIDs_35.insert(RootPartySubID_35.getString());
      FIX::RootPartySubIDType RootPartySubIDType_35(416890293);
      noRootPartySubIDs_2_1_2.set(RootPartySubIDType_35);
      RootSubParties_NoRootPartySubIDs_35.insert(RootPartySubIDType_35.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_35);

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_32;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_32("CAN");
  msg.set(BenchmarkCurveCurrency_32);
  SpreadOrBenchmarkCurveData_32.insert(BenchmarkCurveCurrency_32.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_32("STRING_Euribor");
  msg.set(BenchmarkCurveName_32);
  SpreadOrBenchmarkCurveData_32.insert(BenchmarkCurveName_32.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_32("STRING_1903406992");
  msg.set(BenchmarkCurvePoint_32);
  SpreadOrBenchmarkCurveData_32.insert(BenchmarkCurvePoint_32.getString());
  FIX::BenchmarkPrice BenchmarkPrice_32;
  BenchmarkPrice_32.setString("20817587");
  msg.set(BenchmarkPrice_32);
  SpreadOrBenchmarkCurveData_32.insert(BenchmarkPrice_32.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_32(263519415);
  msg.set(BenchmarkPriceType_32);
  SpreadOrBenchmarkCurveData_32.insert(BenchmarkPriceType_32.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_32("STRING_958198516");
  msg.set(BenchmarkSecurityID_32);
  SpreadOrBenchmarkCurveData_32.insert(BenchmarkSecurityID_32.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_32("STRING_1395103189");
  msg.set(BenchmarkSecurityIDSource_32);
  SpreadOrBenchmarkCurveData_32.insert(BenchmarkSecurityIDSource_32.getString());
  FIX::Spread Spread_32;
  Spread_32.setString("356185");
  msg.set(Spread_32);
  SpreadOrBenchmarkCurveData_32.insert(Spread_32.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_32);

  // TrdCapRptSideGrp
  // Group TrdCapRptSideGrp.NoSides
  {
    FIX50SP2::TradeCaptureReport::NoSides noSides_0_0;
    // TrdCapRptSideGrp.NoSides
    multiset<string> TrdCapRptSideGrp_NoSides_0;
    FIX::Account Account_40("STRING_1447328378");
    noSides_0_0.set(Account_40);
    TrdCapRptSideGrp_NoSides_0.insert(Account_40.getString());
    FIX::AccountType AccountType_35(8);
    noSides_0_0.set(AccountType_35);
    TrdCapRptSideGrp_NoSides_0.insert(AccountType_35.getString());
    FIX::AccruedInterestAmt AccruedInterestAmt_10;
    AccruedInterestAmt_10.setString("6564194");
    noSides_0_0.set(AccruedInterestAmt_10);
    TrdCapRptSideGrp_NoSides_0.insert(AccruedInterestAmt_10.getString());
    FIX::AccruedInterestRate AccruedInterestRate_5;
    AccruedInterestRate_5.setString("2.980000");
    noSides_0_0.set(AccruedInterestRate_5);
    TrdCapRptSideGrp_NoSides_0.insert(AccruedInterestRate_5.getString());
    FIX::AcctIDSource AcctIDSource_33(4);
    noSides_0_0.set(AcctIDSource_33);
    TrdCapRptSideGrp_NoSides_0.insert(AcctIDSource_33.getString());
    FIX::AggressorIndicator AggressorIndicator_1(true);
    noSides_0_0.set(AggressorIndicator_1);
    TrdCapRptSideGrp_NoSides_0.insert(AggressorIndicator_1.getString());
    FIX::AllocID AllocID_17("STRING_1289228222");
    noSides_0_0.set(AllocID_17);
    TrdCapRptSideGrp_NoSides_0.insert(AllocID_17.getString());
    FIX::ComplianceID ComplianceID_12("STRING_175898585");
    noSides_0_0.set(ComplianceID_12);
    TrdCapRptSideGrp_NoSides_0.insert(ComplianceID_12.getString());
    FIX::Concession Concession_5;
    Concession_5.setString("522011");
    noSides_0_0.set(Concession_5);
    TrdCapRptSideGrp_NoSides_0.insert(Concession_5.getString());
    FIX::CustOrderCapacity CustOrderCapacity_16(1);
    noSides_0_0.set(CustOrderCapacity_16);
    TrdCapRptSideGrp_NoSides_0.insert(CustOrderCapacity_16.getString());
    FIX::EncodedText EncodedText_90("DATA_382222494");
    noSides_0_0.set(EncodedText_90);
    TrdCapRptSideGrp_NoSides_0.insert(EncodedText_90.getString());
    FIX::EncodedTextLen EncodedTextLen_90(1741150194);
    noSides_0_0.set(EncodedTextLen_90);
    TrdCapRptSideGrp_NoSides_0.insert(EncodedTextLen_90.getString());
    FIX::EndAccruedInterestAmt EndAccruedInterestAmt_10;
    EndAccruedInterestAmt_10.setString("12344579");
    noSides_0_0.set(EndAccruedInterestAmt_10);
    TrdCapRptSideGrp_NoSides_0.insert(EndAccruedInterestAmt_10.getString());
    FIX::EndCash EndCash_10;
    EndCash_10.setString("2094334");
    noSides_0_0.set(EndCash_10);
    TrdCapRptSideGrp_NoSides_0.insert(EndCash_10.getString());
    FIX::ExDate ExDate_2("LOCALMKTDATE_1582112391");
    noSides_0_0.set(ExDate_2);
    TrdCapRptSideGrp_NoSides_0.insert(ExDate_2.getString());
    FIX::ExchangeRule ExchangeRule_0("STRING_878094990");
    noSides_0_0.set(ExchangeRule_0);
    TrdCapRptSideGrp_NoSides_0.insert(ExchangeRule_0.getString());
    FIX::ExchangeSpecialInstructions ExchangeSpecialInstructions_0("STRING_2080833394");
    noSides_0_0.set(ExchangeSpecialInstructions_0);
    TrdCapRptSideGrp_NoSides_0.insert(ExchangeSpecialInstructions_0.getString());
    FIX::InterestAtMaturity InterestAtMaturity_5;
    InterestAtMaturity_5.setString("7578926");
    noSides_0_0.set(InterestAtMaturity_5);
    TrdCapRptSideGrp_NoSides_0.insert(InterestAtMaturity_5.getString());
    FIX::NetGrossInd NetGrossInd_5(2);
    noSides_0_0.set(NetGrossInd_5);
    TrdCapRptSideGrp_NoSides_0.insert(NetGrossInd_5.getString());
    FIX::NetMoney NetMoney_5;
    NetMoney_5.setString("20940880");
    noSides_0_0.set(NetMoney_5);
    TrdCapRptSideGrp_NoSides_0.insert(NetMoney_5.getString());
    FIX::NumDaysInterest NumDaysInterest_5(1174782928);
    noSides_0_0.set(NumDaysInterest_5);
    TrdCapRptSideGrp_NoSides_0.insert(NumDaysInterest_5.getString());
    FIX::OddLot OddLot_0(true);
    noSides_0_0.set(OddLot_0);
    TrdCapRptSideGrp_NoSides_0.insert(OddLot_0.getString());
    FIX::OrderCategory OrderCategory_1('6');
    noSides_0_0.set(OrderCategory_1);
    TrdCapRptSideGrp_NoSides_0.insert(OrderCategory_1.getString());
    FIX::OrderDelay OrderDelay_0(1763499090);
    noSides_0_0.set(OrderDelay_0);
    TrdCapRptSideGrp_NoSides_0.insert(OrderDelay_0.getString());
    FIX::OrderDelayUnit OrderDelayUnit_0(14);
    noSides_0_0.set(OrderDelayUnit_0);
    TrdCapRptSideGrp_NoSides_0.insert(OrderDelayUnit_0.getString());
    FIX::PositionEffect PositionEffect_13('N');
    noSides_0_0.set(PositionEffect_13);
    TrdCapRptSideGrp_NoSides_0.insert(PositionEffect_13.getString());
    FIX::PreallocMethod PreallocMethod_10('1');
    noSides_0_0.set(PreallocMethod_10);
    TrdCapRptSideGrp_NoSides_0.insert(PreallocMethod_10.getString());
    FIX::ProcessCode ProcessCode_14('6');
    noSides_0_0.set(ProcessCode_14);
    TrdCapRptSideGrp_NoSides_0.insert(ProcessCode_14.getString());
    FIX::RptSeq RptSeq_3(827812455);
    noSides_0_0.set(RptSeq_3);
    TrdCapRptSideGrp_NoSides_0.insert(RptSeq_3.getString());
    FIX::SettlCurrAmt SettlCurrAmt_11;
    SettlCurrAmt_11.setString("20626370");
    noSides_0_0.set(SettlCurrAmt_11);
    TrdCapRptSideGrp_NoSides_0.insert(SettlCurrAmt_11.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_11;
    SettlCurrFxRate_11.setString("14994081");
    noSides_0_0.set(SettlCurrFxRate_11);
    TrdCapRptSideGrp_NoSides_0.insert(SettlCurrFxRate_11.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_11('M');
    noSides_0_0.set(SettlCurrFxRateCalc_11);
    TrdCapRptSideGrp_NoSides_0.insert(SettlCurrFxRateCalc_11.getString());
    FIX::Side Side_44('9');
    noSides_0_0.set(Side_44);
    TrdCapRptSideGrp_NoSides_0.insert(Side_44.getString());
    FIX::SideCurrency SideCurrency_0("GBP");
    noSides_0_0.set(SideCurrency_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideCurrency_0.getString());
    FIX::SideExecID SideExecID_0("STRING_708009135");
    noSides_0_0.set(SideExecID_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideExecID_0.getString());
    FIX::SideFillStationCd SideFillStationCd_0("STRING_1091152642");
    noSides_0_0.set(SideFillStationCd_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideFillStationCd_0.getString());
    FIX::SideGrossTradeAmt SideGrossTradeAmt_0;
    SideGrossTradeAmt_0.setString("19019857");
    noSides_0_0.set(SideGrossTradeAmt_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideGrossTradeAmt_0.getString());
    FIX::SideLastQty SideLastQty_0(883907720);
    noSides_0_0.set(SideLastQty_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideLastQty_0.getString());
    FIX::SideLiquidityInd SideLiquidityInd_0(1143353775);
    noSides_0_0.set(SideLiquidityInd_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideLiquidityInd_0.getString());
    FIX::SideMultiLegReportingType SideMultiLegReportingType_0(1);
    noSides_0_0.set(SideMultiLegReportingType_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideMultiLegReportingType_0.getString());
    FIX::SideReasonCd SideReasonCd_0("STRING_1266130214");
    noSides_0_0.set(SideReasonCd_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideReasonCd_0.getString());
    FIX::SideSettlCurrency SideSettlCurrency_0("EUR");
    noSides_0_0.set(SideSettlCurrency_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideSettlCurrency_0.getString());
    FIX::SideTradeReportID SideTradeReportID_0("STRING_1475563676");
    noSides_0_0.set(SideTradeReportID_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideTradeReportID_0.getString());
    FIX::SideTrdSubTyp SideTrdSubTyp_0(171649064);
    noSides_0_0.set(SideTrdSubTyp_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideTrdSubTyp_0.getString());
    FIX::SolicitedFlag SolicitedFlag_10(false);
    noSides_0_0.set(SolicitedFlag_10);
    TrdCapRptSideGrp_NoSides_0.insert(SolicitedFlag_10.getString());
    FIX::StartCash StartCash_10;
    StartCash_10.setString("14089134");
    noSides_0_0.set(StartCash_10);
    TrdCapRptSideGrp_NoSides_0.insert(StartCash_10.getString());
    FIX::Text Text_90("STRING_929541699");
    noSides_0_0.set(Text_90);
    TrdCapRptSideGrp_NoSides_0.insert(Text_90.getString());
    FIX::TimeBracket TimeBracket_1("STRING_608938896");
    noSides_0_0.set(TimeBracket_1);
    TrdCapRptSideGrp_NoSides_0.insert(TimeBracket_1.getString());
    FIX::TotalTakedown TotalTakedown_5;
    TotalTakedown_5.setString("13555178");
    noSides_0_0.set(TotalTakedown_5);
    TrdCapRptSideGrp_NoSides_0.insert(TotalTakedown_5.getString());
    FIX::TradeAllocIndicator TradeAllocIndicator_0(1);
    noSides_0_0.set(TradeAllocIndicator_0);
    TrdCapRptSideGrp_NoSides_0.insert(TradeAllocIndicator_0.getString());
    FIX::TradeInputDevice TradeInputDevice_1("STRING_934205594");
    noSides_0_0.set(TradeInputDevice_1);
    TrdCapRptSideGrp_NoSides_0.insert(TradeInputDevice_1.getString());
    FIX::TradeInputSource TradeInputSource_3("STRING_853952017");
    noSides_0_0.set(TradeInputSource_3);
    TrdCapRptSideGrp_NoSides_0.insert(TradeInputSource_3.getString());
    FIX::TradingSessionID TradingSessionID_90("STRING_1");
    noSides_0_0.set(TradingSessionID_90);
    TrdCapRptSideGrp_NoSides_0.insert(TradingSessionID_90.getString());
    FIX::TradingSessionSubID TradingSessionSubID_90("STRING_4");
    noSides_0_0.set(TradingSessionSubID_90);
    TrdCapRptSideGrp_NoSides_0.insert(TradingSessionSubID_90.getString());
    all_values.push_back(TrdCapRptSideGrp_NoSides_0);

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_13;
      FIX::ClearingInstruction ClearingInstruction_13(7);
      noClearingInstructions_0_1_0.set(ClearingInstruction_13);
      ClrInstGrp_NoClearingInstructions_13.insert(ClearingInstruction_13.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_13);

      noSides_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    // CommissionData
    multiset<string> CommissionData_18;
    FIX::CommCurrency CommCurrency_18("EUR");
    noSides_0_0.set(CommCurrency_18);
    CommissionData_18.insert(CommCurrency_18.getString());
    FIX::CommType CommType_21('4');
    noSides_0_0.set(CommType_21);
    CommissionData_18.insert(CommType_21.getString());
    FIX::Commission Commission_21;
    Commission_21.setString("14067087");
    noSides_0_0.set(Commission_21);
    CommissionData_18.insert(Commission_21.getString());
    FIX::FundRenewWaiv FundRenewWaiv_18('Y');
    noSides_0_0.set(FundRenewWaiv_18);
    CommissionData_18.insert(FundRenewWaiv_18.getString());
    all_values.push_back(CommissionData_18);

    // ContAmtGrp
    // Group ContAmtGrp.NoContAmts
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoContAmts noContAmts_0_1_0;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_2;
      FIX::ContAmtCurr ContAmtCurr_2("EUR");
      noContAmts_0_1_0.set(ContAmtCurr_2);
      ContAmtGrp_NoContAmts_2.insert(ContAmtCurr_2.getString());
      FIX::ContAmtType ContAmtType_2(2);
      noContAmts_0_1_0.set(ContAmtType_2);
      ContAmtGrp_NoContAmts_2.insert(ContAmtType_2.getString());
      FIX::ContAmtValue ContAmtValue_2;
      ContAmtValue_2.setString("3587216");
      noContAmts_0_1_0.set(ContAmtValue_2);
      ContAmtGrp_NoContAmts_2.insert(ContAmtValue_2.getString());
      all_values.push_back(ContAmtGrp_NoContAmts_2);

      noSides_0_0.addGroup(noContAmts_0_1_0);
    }
    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_24;
      FIX::MiscFeeAmt MiscFeeAmt_24;
      MiscFeeAmt_24.setString("10273997");
      noMiscFees_0_1_0.set(MiscFeeAmt_24);
      MiscFeesGrp_NoMiscFees_24.insert(MiscFeeAmt_24.getString());
      FIX::MiscFeeBasis MiscFeeBasis_24(0);
      noMiscFees_0_1_0.set(MiscFeeBasis_24);
      MiscFeesGrp_NoMiscFees_24.insert(MiscFeeBasis_24.getString());
      FIX::MiscFeeCurr MiscFeeCurr_24("EUR");
      noMiscFees_0_1_0.set(MiscFeeCurr_24);
      MiscFeesGrp_NoMiscFees_24.insert(MiscFeeCurr_24.getString());
      FIX::MiscFeeType MiscFeeType_24("STRING_2");
      noMiscFees_0_1_0.set(MiscFeeType_24);
      MiscFeesGrp_NoMiscFees_24.insert(MiscFeeType_24.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_24);

      noSides_0_0.addGroup(noMiscFees_0_1_0);
    }
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_141;
      FIX::PartyID PartyID_141("STRING_1621609989");
      noPartyIDs_0_1_0.set(PartyID_141);
      Parties_NoPartyIDs_141.insert(PartyID_141.getString());
      FIX::PartyIDSource PartyIDSource_141('3');
      noPartyIDs_0_1_0.set(PartyIDSource_141);
      Parties_NoPartyIDs_141.insert(PartyIDSource_141.getString());
      FIX::PartyRole PartyRole_141(76);
      noPartyIDs_0_1_0.set(PartyRole_141);
      Parties_NoPartyIDs_141.insert(PartyRole_141.getString());
      all_values.push_back(Parties_NoPartyIDs_141);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_286;
        FIX::PartySubID PartySubID_286("STRING_1192802831");
        noPartySubIDs_0_0_2_0.set(PartySubID_286);
        PtysSubGrp_NoPartySubIDs_286.insert(PartySubID_286.getString());
        FIX::PartySubIDType PartySubIDType_286(18);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_286);
        PtysSubGrp_NoPartySubIDs_286.insert(PartySubIDType_286.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_286);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails noSettlDetails_0_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_5;
      FIX::SettlObligSource SettlObligSource_5('2');
      noSettlDetails_0_1_0.set(SettlObligSource_5);
      SettlDetails_NoSettlDetails_5.insert(SettlObligSource_5.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_5);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_57;
        FIX::SettlPartyID SettlPartyID_57("STRING_945025999");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_57);
        SettlParties_NoSettlPartyIDs_57.insert(SettlPartyID_57.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_57('7');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_57);
        SettlParties_NoSettlPartyIDs_57.insert(SettlPartyIDSource_57.getString());
        FIX::SettlPartyRole SettlPartyRole_57(1001543288);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_57);
        SettlParties_NoSettlPartyIDs_57.insert(SettlPartyRole_57.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_57);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_124;
          FIX::SettlPartySubID SettlPartySubID_124("STRING_174891512");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_124);
          SettlPtysSubGrp_NoSettlPartySubIDs_124.insert(SettlPartySubID_124.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_124(908843836);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_124);
          SettlPtysSubGrp_NoSettlPartySubIDs_124.insert(SettlPartySubIDType_124.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_124);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_125;
          FIX::SettlPartySubID SettlPartySubID_125("STRING_198677373");
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubID_125);
          SettlPtysSubGrp_NoSettlPartySubIDs_125.insert(SettlPartySubID_125.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_125(1689919835);
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubIDType_125);
          SettlPtysSubGrp_NoSettlPartySubIDs_125.insert(SettlPartySubIDType_125.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_125);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_58;
        FIX::SettlPartyID SettlPartyID_58("STRING_168068890");
        noSettlPartyIDs_0_0_2_1.set(SettlPartyID_58);
        SettlParties_NoSettlPartyIDs_58.insert(SettlPartyID_58.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_58('1');
        noSettlPartyIDs_0_0_2_1.set(SettlPartyIDSource_58);
        SettlParties_NoSettlPartyIDs_58.insert(SettlPartyIDSource_58.getString());
        FIX::SettlPartyRole SettlPartyRole_58(1125402727);
        noSettlPartyIDs_0_0_2_1.set(SettlPartyRole_58);
        SettlParties_NoSettlPartyIDs_58.insert(SettlPartyRole_58.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_58);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_126;
          FIX::SettlPartySubID SettlPartySubID_126("STRING_1148213059");
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubID_126);
          SettlPtysSubGrp_NoSettlPartySubIDs_126.insert(SettlPartySubID_126.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_126(1268894753);
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubIDType_126);
          SettlPtysSubGrp_NoSettlPartySubIDs_126.insert(SettlPartySubIDType_126.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_126);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_127;
          FIX::SettlPartySubID SettlPartySubID_127("STRING_1941843133");
          noSettlPartySubIDs_0_0_1_3_1.set(SettlPartySubID_127);
          SettlPtysSubGrp_NoSettlPartySubIDs_127.insert(SettlPartySubID_127.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_127(610119879);
          noSettlPartySubIDs_0_0_1_3_1.set(SettlPartySubIDType_127);
          SettlPtysSubGrp_NoSettlPartySubIDs_127.insert(SettlPartySubIDType_127.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_127);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_1);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
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
        multiset<string> SettlParties_NoSettlPartyIDs_59;
        FIX::SettlPartyID SettlPartyID_59("STRING_1480033349");
        noSettlPartyIDs_0_1_2_0.set(SettlPartyID_59);
        SettlParties_NoSettlPartyIDs_59.insert(SettlPartyID_59.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_59('2');
        noSettlPartyIDs_0_1_2_0.set(SettlPartyIDSource_59);
        SettlParties_NoSettlPartyIDs_59.insert(SettlPartyIDSource_59.getString());
        FIX::SettlPartyRole SettlPartyRole_59(1388046946);
        noSettlPartyIDs_0_1_2_0.set(SettlPartyRole_59);
        SettlParties_NoSettlPartyIDs_59.insert(SettlPartyRole_59.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_59);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_128;
          FIX::SettlPartySubID SettlPartySubID_128("STRING_1916467155");
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubID_128);
          SettlPtysSubGrp_NoSettlPartySubIDs_128.insert(SettlPartySubID_128.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_128(1651308078);
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubIDType_128);
          SettlPtysSubGrp_NoSettlPartySubIDs_128.insert(SettlPartySubIDType_128.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_128);

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_0);
        }
        noSettlDetails_0_1_1.addGroup(noSettlPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_60;
        FIX::SettlPartyID SettlPartyID_60("STRING_1287930980");
        noSettlPartyIDs_0_1_2_1.set(SettlPartyID_60);
        SettlParties_NoSettlPartyIDs_60.insert(SettlPartyID_60.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_60('6');
        noSettlPartyIDs_0_1_2_1.set(SettlPartyIDSource_60);
        SettlParties_NoSettlPartyIDs_60.insert(SettlPartyIDSource_60.getString());
        FIX::SettlPartyRole SettlPartyRole_60(696627261);
        noSettlPartyIDs_0_1_2_1.set(SettlPartyRole_60);
        SettlParties_NoSettlPartyIDs_60.insert(SettlPartyRole_60.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_60);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_129;
          FIX::SettlPartySubID SettlPartySubID_129("STRING_743097253");
          noSettlPartySubIDs_0_1_1_3_0.set(SettlPartySubID_129);
          SettlPtysSubGrp_NoSettlPartySubIDs_129.insert(SettlPartySubID_129.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_129(1846271071);
          noSettlPartySubIDs_0_1_1_3_0.set(SettlPartySubIDType_129);
          SettlPtysSubGrp_NoSettlPartySubIDs_129.insert(SettlPartySubIDType_129.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_129);

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_130;
          FIX::SettlPartySubID SettlPartySubID_130("STRING_326020690");
          noSettlPartySubIDs_0_1_1_3_1.set(SettlPartySubID_130);
          SettlPtysSubGrp_NoSettlPartySubIDs_130.insert(SettlPartySubID_130.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_130(1688123252);
          noSettlPartySubIDs_0_1_1_3_1.set(SettlPartySubIDType_130);
          SettlPtysSubGrp_NoSettlPartySubIDs_130.insert(SettlPartySubIDType_130.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_130);

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_131;
          FIX::SettlPartySubID SettlPartySubID_131("STRING_421287656");
          noSettlPartySubIDs_0_1_1_3_2.set(SettlPartySubID_131);
          SettlPtysSubGrp_NoSettlPartySubIDs_131.insert(SettlPartySubID_131.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_131(1327563978);
          noSettlPartySubIDs_0_1_1_3_2.set(SettlPartySubIDType_131);
          SettlPtysSubGrp_NoSettlPartySubIDs_131.insert(SettlPartySubIDType_131.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_131);

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_2);
        }
        noSettlDetails_0_1_1.addGroup(noSettlPartyIDs_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_1_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_61;
        FIX::SettlPartyID SettlPartyID_61("STRING_772326886");
        noSettlPartyIDs_0_1_2_2.set(SettlPartyID_61);
        SettlParties_NoSettlPartyIDs_61.insert(SettlPartyID_61.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_61('5');
        noSettlPartyIDs_0_1_2_2.set(SettlPartyIDSource_61);
        SettlParties_NoSettlPartyIDs_61.insert(SettlPartyIDSource_61.getString());
        FIX::SettlPartyRole SettlPartyRole_61(88924166);
        noSettlPartyIDs_0_1_2_2.set(SettlPartyRole_61);
        SettlParties_NoSettlPartyIDs_61.insert(SettlPartyRole_61.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_61);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_132;
          FIX::SettlPartySubID SettlPartySubID_132("STRING_138615355");
          noSettlPartySubIDs_0_1_2_3_0.set(SettlPartySubID_132);
          SettlPtysSubGrp_NoSettlPartySubIDs_132.insert(SettlPartySubID_132.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_132(256993056);
          noSettlPartySubIDs_0_1_2_3_0.set(SettlPartySubIDType_132);
          SettlPtysSubGrp_NoSettlPartySubIDs_132.insert(SettlPartySubIDType_132.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_132);

          noSettlPartyIDs_0_1_2_2.addGroup(noSettlPartySubIDs_0_1_2_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_133;
          FIX::SettlPartySubID SettlPartySubID_133("STRING_264328910");
          noSettlPartySubIDs_0_1_2_3_1.set(SettlPartySubID_133);
          SettlPtysSubGrp_NoSettlPartySubIDs_133.insert(SettlPartySubID_133.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_133(1264018082);
          noSettlPartySubIDs_0_1_2_3_1.set(SettlPartySubIDType_133);
          SettlPtysSubGrp_NoSettlPartySubIDs_133.insert(SettlPartySubIDType_133.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_133);

          noSettlPartyIDs_0_1_2_2.addGroup(noSettlPartySubIDs_0_1_2_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_134;
          FIX::SettlPartySubID SettlPartySubID_134("STRING_1840114571");
          noSettlPartySubIDs_0_1_2_3_2.set(SettlPartySubID_134);
          SettlPtysSubGrp_NoSettlPartySubIDs_134.insert(SettlPartySubID_134.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_134(1412541970);
          noSettlPartySubIDs_0_1_2_3_2.set(SettlPartySubIDType_134);
          SettlPtysSubGrp_NoSettlPartySubIDs_134.insert(SettlPartySubIDType_134.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_134);

          noSettlPartyIDs_0_1_2_2.addGroup(noSettlPartySubIDs_0_1_2_3_2);
        }
        noSettlDetails_0_1_1.addGroup(noSettlPartyIDs_0_1_2_2);
      }
      noSides_0_0.addGroup(noSettlDetails_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails noSettlDetails_0_1_2;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_7;
      FIX::SettlObligSource SettlObligSource_7('1');
      noSettlDetails_0_1_2.set(SettlObligSource_7);
      SettlDetails_NoSettlDetails_7.insert(SettlObligSource_7.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_7);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_62;
        FIX::SettlPartyID SettlPartyID_62("STRING_2022661849");
        noSettlPartyIDs_0_2_2_0.set(SettlPartyID_62);
        SettlParties_NoSettlPartyIDs_62.insert(SettlPartyID_62.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_62('5');
        noSettlPartyIDs_0_2_2_0.set(SettlPartyIDSource_62);
        SettlParties_NoSettlPartyIDs_62.insert(SettlPartyIDSource_62.getString());
        FIX::SettlPartyRole SettlPartyRole_62(783425288);
        noSettlPartyIDs_0_2_2_0.set(SettlPartyRole_62);
        SettlParties_NoSettlPartyIDs_62.insert(SettlPartyRole_62.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_62);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_135;
          FIX::SettlPartySubID SettlPartySubID_135("STRING_829097206");
          noSettlPartySubIDs_0_2_0_3_0.set(SettlPartySubID_135);
          SettlPtysSubGrp_NoSettlPartySubIDs_135.insert(SettlPartySubID_135.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_135(23988586);
          noSettlPartySubIDs_0_2_0_3_0.set(SettlPartySubIDType_135);
          SettlPtysSubGrp_NoSettlPartySubIDs_135.insert(SettlPartySubIDType_135.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_135);

          noSettlPartyIDs_0_2_2_0.addGroup(noSettlPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_136;
          FIX::SettlPartySubID SettlPartySubID_136("STRING_2052655720");
          noSettlPartySubIDs_0_2_0_3_1.set(SettlPartySubID_136);
          SettlPtysSubGrp_NoSettlPartySubIDs_136.insert(SettlPartySubID_136.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_136(598080714);
          noSettlPartySubIDs_0_2_0_3_1.set(SettlPartySubIDType_136);
          SettlPtysSubGrp_NoSettlPartySubIDs_136.insert(SettlPartySubIDType_136.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_136);

          noSettlPartyIDs_0_2_2_0.addGroup(noSettlPartySubIDs_0_2_0_3_1);
        }
        noSettlDetails_0_1_2.addGroup(noSettlPartyIDs_0_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_2_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_63;
        FIX::SettlPartyID SettlPartyID_63("STRING_1675296664");
        noSettlPartyIDs_0_2_2_1.set(SettlPartyID_63);
        SettlParties_NoSettlPartyIDs_63.insert(SettlPartyID_63.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_63('1');
        noSettlPartyIDs_0_2_2_1.set(SettlPartyIDSource_63);
        SettlParties_NoSettlPartyIDs_63.insert(SettlPartyIDSource_63.getString());
        FIX::SettlPartyRole SettlPartyRole_63(1250103985);
        noSettlPartyIDs_0_2_2_1.set(SettlPartyRole_63);
        SettlParties_NoSettlPartyIDs_63.insert(SettlPartyRole_63.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_63);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_137;
          FIX::SettlPartySubID SettlPartySubID_137("STRING_1532976090");
          noSettlPartySubIDs_0_2_1_3_0.set(SettlPartySubID_137);
          SettlPtysSubGrp_NoSettlPartySubIDs_137.insert(SettlPartySubID_137.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_137(1993201238);
          noSettlPartySubIDs_0_2_1_3_0.set(SettlPartySubIDType_137);
          SettlPtysSubGrp_NoSettlPartySubIDs_137.insert(SettlPartySubIDType_137.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_137);

          noSettlPartyIDs_0_2_2_1.addGroup(noSettlPartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_138;
          FIX::SettlPartySubID SettlPartySubID_138("STRING_2070711349");
          noSettlPartySubIDs_0_2_1_3_1.set(SettlPartySubID_138);
          SettlPtysSubGrp_NoSettlPartySubIDs_138.insert(SettlPartySubID_138.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_138(1858996780);
          noSettlPartySubIDs_0_2_1_3_1.set(SettlPartySubIDType_138);
          SettlPtysSubGrp_NoSettlPartySubIDs_138.insert(SettlPartySubIDType_138.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_138);

          noSettlPartyIDs_0_2_2_1.addGroup(noSettlPartySubIDs_0_2_1_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_139;
          FIX::SettlPartySubID SettlPartySubID_139("STRING_1533840842");
          noSettlPartySubIDs_0_2_1_3_2.set(SettlPartySubID_139);
          SettlPtysSubGrp_NoSettlPartySubIDs_139.insert(SettlPartySubID_139.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_139(344515357);
          noSettlPartySubIDs_0_2_1_3_2.set(SettlPartySubIDType_139);
          SettlPtysSubGrp_NoSettlPartySubIDs_139.insert(SettlPartySubIDType_139.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_139);

          noSettlPartyIDs_0_2_2_1.addGroup(noSettlPartySubIDs_0_2_1_3_2);
        }
        noSettlDetails_0_1_2.addGroup(noSettlPartyIDs_0_2_2_1);
      }
      noSides_0_0.addGroup(noSettlDetails_0_1_2);
    }
    // SideTrdRegTS
    // Group SideTrdRegTS.NoSideTrdRegTS
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSideTrdRegTS noSideTrdRegTS_0_1_0;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_0;
      FIX::SideTrdRegTimestamp SideTrdRegTimestamp_0(FIX::UTCTIMESTAMP(5, 17, 1, 12, 6, 2015));
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestamp_0);
      SideTrdRegTS_NoSideTrdRegTS_0.insert(SideTrdRegTimestamp_0.getString());
      FIX::SideTrdRegTimestampSrc SideTrdRegTimestampSrc_0("STRING_195844315");
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestampSrc_0);
      SideTrdRegTS_NoSideTrdRegTS_0.insert(SideTrdRegTimestampSrc_0.getString());
      FIX::SideTrdRegTimestampType SideTrdRegTimestampType_0(1077625256);
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestampType_0);
      SideTrdRegTS_NoSideTrdRegTS_0.insert(SideTrdRegTimestampType_0.getString());
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_0);

      noSides_0_0.addGroup(noSideTrdRegTS_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSideTrdRegTS noSideTrdRegTS_0_1_1;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_1;
      FIX::SideTrdRegTimestamp SideTrdRegTimestamp_1(FIX::UTCTIMESTAMP(7, 5, 34, 11, 2, 2014));
      noSideTrdRegTS_0_1_1.set(SideTrdRegTimestamp_1);
      SideTrdRegTS_NoSideTrdRegTS_1.insert(SideTrdRegTimestamp_1.getString());
      FIX::SideTrdRegTimestampSrc SideTrdRegTimestampSrc_1("STRING_1944610750");
      noSideTrdRegTS_0_1_1.set(SideTrdRegTimestampSrc_1);
      SideTrdRegTS_NoSideTrdRegTS_1.insert(SideTrdRegTimestampSrc_1.getString());
      FIX::SideTrdRegTimestampType SideTrdRegTimestampType_1(1372029539);
      noSideTrdRegTS_0_1_1.set(SideTrdRegTimestampType_1);
      SideTrdRegTS_NoSideTrdRegTS_1.insert(SideTrdRegTimestampType_1.getString());
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_1);

      noSides_0_0.addGroup(noSideTrdRegTS_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSideTrdRegTS noSideTrdRegTS_0_1_2;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_2;
      FIX::SideTrdRegTimestamp SideTrdRegTimestamp_2(FIX::UTCTIMESTAMP(8, 56, 0, 21, 2, 2010));
      noSideTrdRegTS_0_1_2.set(SideTrdRegTimestamp_2);
      SideTrdRegTS_NoSideTrdRegTS_2.insert(SideTrdRegTimestamp_2.getString());
      FIX::SideTrdRegTimestampSrc SideTrdRegTimestampSrc_2("STRING_1491029392");
      noSideTrdRegTS_0_1_2.set(SideTrdRegTimestampSrc_2);
      SideTrdRegTS_NoSideTrdRegTS_2.insert(SideTrdRegTimestampSrc_2.getString());
      FIX::SideTrdRegTimestampType SideTrdRegTimestampType_2(1047510534);
      noSideTrdRegTS_0_1_2.set(SideTrdRegTimestampType_2);
      SideTrdRegTS_NoSideTrdRegTS_2.insert(SideTrdRegTimestampType_2.getString());
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_2);

      noSides_0_0.addGroup(noSideTrdRegTS_0_1_2);
    }
    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_53;
      FIX::StipulationType StipulationType_53("STRING_PPM");
      noStipulations_0_1_0.set(StipulationType_53);
      Stipulations_NoStipulations_53.insert(StipulationType_53.getString());
      FIX::StipulationValue StipulationValue_53("STRING_1392025891");
      noStipulations_0_1_0.set(StipulationValue_53);
      Stipulations_NoStipulations_53.insert(StipulationValue_53.getString());
      all_values.push_back(Stipulations_NoStipulations_53);

      noSides_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_54;
      FIX::StipulationType StipulationType_54("STRING_WAL");
      noStipulations_0_1_1.set(StipulationType_54);
      Stipulations_NoStipulations_54.insert(StipulationType_54.getString());
      FIX::StipulationValue StipulationValue_54("STRING_1036070667");
      noStipulations_0_1_1.set(StipulationValue_54);
      Stipulations_NoStipulations_54.insert(StipulationValue_54.getString());
      all_values.push_back(Stipulations_NoStipulations_54);

      noSides_0_0.addGroup(noStipulations_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoStipulations noStipulations_0_1_2;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_55;
      FIX::StipulationType StipulationType_55("STRING_WHOLE");
      noStipulations_0_1_2.set(StipulationType_55);
      Stipulations_NoStipulations_55.insert(StipulationType_55.getString());
      FIX::StipulationValue StipulationValue_55("STRING_2104340762");
      noStipulations_0_1_2.set(StipulationValue_55);
      Stipulations_NoStipulations_55.insert(StipulationValue_55.getString());
      all_values.push_back(Stipulations_NoStipulations_55);

      noSides_0_0.addGroup(noStipulations_0_1_2);
    }
    // TradeReportOrderDetail
    multiset<string> TradeReportOrderDetail_0;
    FIX::BookingType BookingType_27(2);
    noSides_0_0.set(BookingType_27);
    TradeReportOrderDetail_0.insert(BookingType_27.getString());
    FIX::ClOrdID ClOrdID_46("STRING_1264546649");
    noSides_0_0.set(ClOrdID_46);
    TradeReportOrderDetail_0.insert(ClOrdID_46.getString());
    FIX::CumQty CumQty_4;
    CumQty_4.setString("13418514");
    noSides_0_0.set(CumQty_4);
    TradeReportOrderDetail_0.insert(CumQty_4.getString());
    FIX::ExecInst ExecInst_11("MULTIPLECHARVALUE_q");
    noSides_0_0.set(ExecInst_11);
    TradeReportOrderDetail_0.insert(ExecInst_11.getString());
    FIX::ExpireTime ExpireTime_24(FIX::UTCTIMESTAMP(0, 5, 7, 25, 9, 2004));
    noSides_0_0.set(ExpireTime_24);
    TradeReportOrderDetail_0.insert(ExpireTime_24.getString());
    FIX::LeavesQty LeavesQty_3;
    LeavesQty_3.setString("371660");
    noSides_0_0.set(LeavesQty_3);
    TradeReportOrderDetail_0.insert(LeavesQty_3.getString());
    FIX::ListID ListID_23("STRING_200119988");
    noSides_0_0.set(ListID_23);
    TradeReportOrderDetail_0.insert(ListID_23.getString());
    FIX::LotType LotType_25('1');
    noSides_0_0.set(LotType_25);
    TradeReportOrderDetail_0.insert(LotType_25.getString());
    FIX::OrdStatus OrdStatus_4('0');
    noSides_0_0.set(OrdStatus_4);
    TradeReportOrderDetail_0.insert(OrdStatus_4.getString());
    FIX::OrdType OrdType_71('2');
    noSides_0_0.set(OrdType_71);
    TradeReportOrderDetail_0.insert(OrdType_71.getString());
    FIX::OrderCapacity OrderCapacity_30('I');
    noSides_0_0.set(OrderCapacity_30);
    TradeReportOrderDetail_0.insert(OrderCapacity_30.getString());
    FIX::OrderID OrderID_33("STRING_161554473");
    noSides_0_0.set(OrderID_33);
    TradeReportOrderDetail_0.insert(OrderID_33.getString());
    FIX::OrderInputDevice OrderInputDevice_0("STRING_687530537");
    noSides_0_0.set(OrderInputDevice_0);
    TradeReportOrderDetail_0.insert(OrderInputDevice_0.getString());
    FIX::OrderRestrictions OrderRestrictions_28("MULTIPLECHARVALUE_5");
    noSides_0_0.set(OrderRestrictions_28);
    TradeReportOrderDetail_0.insert(OrderRestrictions_28.getString());
    FIX::OrigCustOrderCapacity OrigCustOrderCapacity_0(4);
    noSides_0_0.set(OrigCustOrderCapacity_0);
    TradeReportOrderDetail_0.insert(OrigCustOrderCapacity_0.getString());
    FIX::OrigOrdModTime OrigOrdModTime_6(FIX::UTCTIMESTAMP(18, 33, 34, 20, 6, 2007));
    noSides_0_0.set(OrigOrdModTime_6);
    TradeReportOrderDetail_0.insert(OrigOrdModTime_6.getString());
    FIX::Price Price_24;
    Price_24.setString("19568604");
    noSides_0_0.set(Price_24);
    TradeReportOrderDetail_0.insert(Price_24.getString());
    FIX::RefOrdIDReason RefOrdIDReason_0(0);
    noSides_0_0.set(RefOrdIDReason_0);
    TradeReportOrderDetail_0.insert(RefOrdIDReason_0.getString());
    FIX::RefOrderID RefOrderID_4("STRING_1783738753");
    noSides_0_0.set(RefOrderID_4);
    TradeReportOrderDetail_0.insert(RefOrderID_4.getString());
    FIX::RefOrderIDSource RefOrderIDSource_4('2');
    noSides_0_0.set(RefOrderIDSource_4);
    TradeReportOrderDetail_0.insert(RefOrderIDSource_4.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_39("STRING_880189854");
    noSides_0_0.set(SecondaryClOrdID_39);
    TradeReportOrderDetail_0.insert(SecondaryClOrdID_39.getString());
    FIX::SecondaryOrderID SecondaryOrderID_24("STRING_978106553");
    noSides_0_0.set(SecondaryOrderID_24);
    TradeReportOrderDetail_0.insert(SecondaryOrderID_24.getString());
    FIX::StopPx StopPx_9;
    StopPx_9.setString("12399447");
    noSides_0_0.set(StopPx_9);
    TradeReportOrderDetail_0.insert(StopPx_9.getString());
    FIX::TimeInForce TimeInForce_47('0');
    noSides_0_0.set(TimeInForce_47);
    TradeReportOrderDetail_0.insert(TimeInForce_47.getString());
    FIX::TransBkdTime TransBkdTime_4(FIX::UTCTIMESTAMP(6, 9, 10, 14, 9, 2014));
    noSides_0_0.set(TransBkdTime_4);
    TradeReportOrderDetail_0.insert(TransBkdTime_4.getString());
    all_values.push_back(TradeReportOrderDetail_0);

    // DisplayInstruction
    multiset<string> DisplayInstruction_9;
    FIX::DisplayHighQty DisplayHighQty_9;
    DisplayHighQty_9.setString("18220875");
    noSides_0_0.set(DisplayHighQty_9);
    DisplayInstruction_9.insert(DisplayHighQty_9.getString());
    FIX::DisplayLowQty DisplayLowQty_9;
    DisplayLowQty_9.setString("19037938");
    noSides_0_0.set(DisplayLowQty_9);
    DisplayInstruction_9.insert(DisplayLowQty_9.getString());
    FIX::DisplayMethod DisplayMethod_9('2');
    noSides_0_0.set(DisplayMethod_9);
    DisplayInstruction_9.insert(DisplayMethod_9.getString());
    FIX::DisplayMinIncr DisplayMinIncr_9;
    DisplayMinIncr_9.setString("16693613");
    noSides_0_0.set(DisplayMinIncr_9);
    DisplayInstruction_9.insert(DisplayMinIncr_9.getString());
    FIX::DisplayQty DisplayQty_9;
    DisplayQty_9.setString("9583394");
    noSides_0_0.set(DisplayQty_9);
    DisplayInstruction_9.insert(DisplayQty_9.getString());
    FIX::DisplayWhen DisplayWhen_9('2');
    noSides_0_0.set(DisplayWhen_9);
    DisplayInstruction_9.insert(DisplayWhen_9.getString());
    FIX::RefreshQty RefreshQty_9;
    RefreshQty_9.setString("2094082");
    noSides_0_0.set(RefreshQty_9);
    DisplayInstruction_9.insert(RefreshQty_9.getString());
    FIX::SecondaryDisplayQty SecondaryDisplayQty_9;
    SecondaryDisplayQty_9.setString("16581968");
    noSides_0_0.set(SecondaryDisplayQty_9);
    DisplayInstruction_9.insert(SecondaryDisplayQty_9.getString());
    all_values.push_back(DisplayInstruction_9);

    // OrderQtyData
    multiset<string> OrderQtyData_23;
    FIX::CashOrderQty CashOrderQty_23;
    CashOrderQty_23.setString("6854944");
    noSides_0_0.set(CashOrderQty_23);
    OrderQtyData_23.insert(CashOrderQty_23.getString());
    FIX::OrderPercent OrderPercent_23;
    OrderPercent_23.setString("80.010000");
    noSides_0_0.set(OrderPercent_23);
    OrderQtyData_23.insert(OrderPercent_23.getString());
    FIX::OrderQty OrderQty_34;
    OrderQty_34.setString("17016000");
    noSides_0_0.set(OrderQty_34);
    OrderQtyData_23.insert(OrderQty_34.getString());
    FIX::RoundingDirection RoundingDirection_23('1');
    noSides_0_0.set(RoundingDirection_23);
    OrderQtyData_23.insert(RoundingDirection_23.getString());
    FIX::RoundingModulus RoundingModulus_23;
    RoundingModulus_23.setString("19732301");
    noSides_0_0.set(RoundingModulus_23);
    OrderQtyData_23.insert(RoundingModulus_23.getString());
    all_values.push_back(OrderQtyData_23);

    // TrdAllocGrp
    // Group TrdAllocGrp.NoAllocs
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoAllocs noAllocs_0_1_0;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_0;
      FIX::AllocAccount AllocAccount_32("STRING_301765036");
      noAllocs_0_1_0.set(AllocAccount_32);
      TrdAllocGrp_NoAllocs_0.insert(AllocAccount_32.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_32(1652628147);
      noAllocs_0_1_0.set(AllocAcctIDSource_32);
      TrdAllocGrp_NoAllocs_0.insert(AllocAcctIDSource_32.getString());
      FIX::AllocClearingFeeIndicator AllocClearingFeeIndicator_0("STRING_284282961");
      noAllocs_0_1_0.set(AllocClearingFeeIndicator_0);
      TrdAllocGrp_NoAllocs_0.insert(AllocClearingFeeIndicator_0.getString());
      FIX::AllocCustomerCapacity AllocCustomerCapacity_10("STRING_2064891890");
      noAllocs_0_1_0.set(AllocCustomerCapacity_10);
      TrdAllocGrp_NoAllocs_0.insert(AllocCustomerCapacity_10.getString());
      FIX::AllocMethod AllocMethod_6(3);
      noAllocs_0_1_0.set(AllocMethod_6);
      TrdAllocGrp_NoAllocs_0.insert(AllocMethod_6.getString());
      FIX::AllocQty AllocQty_30;
      AllocQty_30.setString("1119351");
      noAllocs_0_1_0.set(AllocQty_30);
      TrdAllocGrp_NoAllocs_0.insert(AllocQty_30.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_25("CAN");
      noAllocs_0_1_0.set(AllocSettlCurrency_25);
      TrdAllocGrp_NoAllocs_0.insert(AllocSettlCurrency_25.getString());
      FIX::IndividualAllocID IndividualAllocID_31("STRING_1351879862");
      noAllocs_0_1_0.set(IndividualAllocID_31);
      TrdAllocGrp_NoAllocs_0.insert(IndividualAllocID_31.getString());
      FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_10("STRING_990695267");
      noAllocs_0_1_0.set(SecondaryIndividualAllocID_10);
      TrdAllocGrp_NoAllocs_0.insert(SecondaryIndividualAllocID_10.getString());
      all_values.push_back(TrdAllocGrp_NoAllocs_0);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_69;
        FIX::Nested2PartyID Nested2PartyID_69("STRING_368225508");
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyID_69);
        NestedParties2_NoNested2PartyIDs_69.insert(Nested2PartyID_69.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_69('1');
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyIDSource_69);
        NestedParties2_NoNested2PartyIDs_69.insert(Nested2PartyIDSource_69.getString());
        FIX::Nested2PartyRole Nested2PartyRole_69(1308830448);
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyRole_69);
        NestedParties2_NoNested2PartyIDs_69.insert(Nested2PartyRole_69.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_69);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_134;
          FIX::Nested2PartySubID Nested2PartySubID_134("STRING_27461960");
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubID_134);
          NstdPtys2SubGrp_NoNested2PartySubIDs_134.insert(Nested2PartySubID_134.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_134(1285221156);
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubIDType_134);
          NstdPtys2SubGrp_NoNested2PartySubIDs_134.insert(Nested2PartySubIDType_134.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_134);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_135;
          FIX::Nested2PartySubID Nested2PartySubID_135("STRING_1664797061");
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubID_135);
          NstdPtys2SubGrp_NoNested2PartySubIDs_135.insert(Nested2PartySubID_135.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_135(1931255777);
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubIDType_135);
          NstdPtys2SubGrp_NoNested2PartySubIDs_135.insert(Nested2PartySubIDType_135.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_135);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_136;
          FIX::Nested2PartySubID Nested2PartySubID_136("STRING_523323782");
          noNested2PartySubIDs_0_0_0_3_2.set(Nested2PartySubID_136);
          NstdPtys2SubGrp_NoNested2PartySubIDs_136.insert(Nested2PartySubID_136.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_136(1186674744);
          noNested2PartySubIDs_0_0_0_3_2.set(Nested2PartySubIDType_136);
          NstdPtys2SubGrp_NoNested2PartySubIDs_136.insert(Nested2PartySubIDType_136.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_136);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_2);
        }
        noAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_70;
        FIX::Nested2PartyID Nested2PartyID_70("STRING_742111578");
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyID_70);
        NestedParties2_NoNested2PartyIDs_70.insert(Nested2PartyID_70.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_70('2');
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyIDSource_70);
        NestedParties2_NoNested2PartyIDs_70.insert(Nested2PartyIDSource_70.getString());
        FIX::Nested2PartyRole Nested2PartyRole_70(1396082965);
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyRole_70);
        NestedParties2_NoNested2PartyIDs_70.insert(Nested2PartyRole_70.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_70);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_137;
          FIX::Nested2PartySubID Nested2PartySubID_137("STRING_608475287");
          noNested2PartySubIDs_0_0_1_3_0.set(Nested2PartySubID_137);
          NstdPtys2SubGrp_NoNested2PartySubIDs_137.insert(Nested2PartySubID_137.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_137(371287318);
          noNested2PartySubIDs_0_0_1_3_0.set(Nested2PartySubIDType_137);
          NstdPtys2SubGrp_NoNested2PartySubIDs_137.insert(Nested2PartySubIDType_137.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_137);

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_138;
          FIX::Nested2PartySubID Nested2PartySubID_138("STRING_1954424874");
          noNested2PartySubIDs_0_0_1_3_1.set(Nested2PartySubID_138);
          NstdPtys2SubGrp_NoNested2PartySubIDs_138.insert(Nested2PartySubID_138.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_138(1479833886);
          noNested2PartySubIDs_0_0_1_3_1.set(Nested2PartySubIDType_138);
          NstdPtys2SubGrp_NoNested2PartySubIDs_138.insert(Nested2PartySubIDType_138.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_138);

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_139;
          FIX::Nested2PartySubID Nested2PartySubID_139("STRING_197033826");
          noNested2PartySubIDs_0_0_1_3_2.set(Nested2PartySubID_139);
          NstdPtys2SubGrp_NoNested2PartySubIDs_139.insert(Nested2PartySubID_139.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_139(281847403);
          noNested2PartySubIDs_0_0_1_3_2.set(Nested2PartySubIDType_139);
          NstdPtys2SubGrp_NoNested2PartySubIDs_139.insert(Nested2PartySubIDType_139.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_139);

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_2);
        }
        noAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_1);
      }
      noSides_0_0.addGroup(noAllocs_0_1_0);
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
    LegCalculatedCcyLastQty_3.setString("18496619");
    noLegs_0_0.set(LegCalculatedCcyLastQty_3);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegCalculatedCcyLastQty_3.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_9(566130365);
    noLegs_0_0.set(LegCoveredOrUncovered_9);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegCoveredOrUncovered_9.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_9;
    LegCurrencyRatio_9.setString("16990071");
    noLegs_0_0.set(LegCurrencyRatio_9);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegCurrencyRatio_9.getString());
    FIX::LegDividendYield LegDividendYield_9;
    LegDividendYield_9.setString("15.770000");
    noLegs_0_0.set(LegDividendYield_9);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegDividendYield_9.getString());
    FIX::LegExecInst LegExecInst_9("MULTIPLECHARVALUE_678065471");
    noLegs_0_0.set(LegExecInst_9);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegExecInst_9.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_3;
    LegGrossTradeAmt_3.setString("3491216");
    noLegs_0_0.set(LegGrossTradeAmt_3);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegGrossTradeAmt_3.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_3;
    LegLastForwardPoints_3.setString("11105677");
    noLegs_0_0.set(LegLastForwardPoints_3);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegLastForwardPoints_3.getString());
    FIX::LegLastPx LegLastPx_3;
    LegLastPx_3.setString("20299453");
    noLegs_0_0.set(LegLastPx_3);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegLastPx_3.getString());
    FIX::LegLastQty LegLastQty_3;
    LegLastQty_3.setString("13398168");
    noLegs_0_0.set(LegLastQty_3);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegLastQty_3.getString());
    FIX::LegNumber LegNumber_0(332689853);
    noLegs_0_0.set(LegNumber_0);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegNumber_0.getString());
    FIX::LegPositionEffect LegPositionEffect_9('2');
    noLegs_0_0.set(LegPositionEffect_9);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegPositionEffect_9.getString());
    FIX::LegQty LegQty_24;
    LegQty_24.setString("2703064");
    noLegs_0_0.set(LegQty_24);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegQty_24.getString());
    FIX::LegRefID LegRefID_21("STRING_1641520302");
    noLegs_0_0.set(LegRefID_21);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegRefID_21.getString());
    FIX::LegReportID LegReportID_0("STRING_93396660");
    noLegs_0_0.set(LegReportID_0);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegReportID_0.getString());
    FIX::LegSettlCurrency LegSettlCurrency_9("JPY");
    noLegs_0_0.set(LegSettlCurrency_9);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegSettlCurrency_9.getString());
    FIX::LegSettlDate LegSettlDate_24("LOCALMKTDATE_1758193721");
    noLegs_0_0.set(LegSettlDate_24);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegSettlDate_24.getString());
    FIX::LegSettlType LegSettlType_31('8');
    noLegs_0_0.set(LegSettlType_31);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegSettlType_31.getString());
    FIX::LegSwapType LegSwapType_31(1);
    noLegs_0_0.set(LegSwapType_31);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegSwapType_31.getString());
    FIX::LegVolatility LegVolatility_9;
    LegVolatility_9.setString("7973848");
    noLegs_0_0.set(LegVolatility_9);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegVolatility_9.getString());
    all_values.push_back(TrdInstrmtLegGrp_NoLegs_0);

    // InstrumentLeg
    multiset<string> InstrumentLeg_141;
    FIX::EncodedLegIssuer EncodedLegIssuer_141("DATA_823652156");
    noLegs_0_0.set(EncodedLegIssuer_141);
    InstrumentLeg_141.insert(EncodedLegIssuer_141.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_141(1225562473);
    noLegs_0_0.set(EncodedLegIssuerLen_141);
    InstrumentLeg_141.insert(EncodedLegIssuerLen_141.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_141("DATA_45984135");
    noLegs_0_0.set(EncodedLegSecurityDesc_141);
    InstrumentLeg_141.insert(EncodedLegSecurityDesc_141.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_141(1076476969);
    noLegs_0_0.set(EncodedLegSecurityDescLen_141);
    InstrumentLeg_141.insert(EncodedLegSecurityDescLen_141.getString());
    FIX::LegCFICode LegCFICode_141("STRING_1834037760");
    noLegs_0_0.set(LegCFICode_141);
    InstrumentLeg_141.insert(LegCFICode_141.getString());
    FIX::LegContractMultiplier LegContractMultiplier_141;
    LegContractMultiplier_141.setString("4172714");
    noLegs_0_0.set(LegContractMultiplier_141);
    InstrumentLeg_141.insert(LegContractMultiplier_141.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_141(883418195);
    noLegs_0_0.set(LegContractMultiplierUnit_141);
    InstrumentLeg_141.insert(LegContractMultiplierUnit_141.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_141("MONTHYEAR_1166387999");
    noLegs_0_0.set(LegContractSettlMonth_141);
    InstrumentLeg_141.insert(LegContractSettlMonth_141.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_141("COUNTRY_614305280");
    noLegs_0_0.set(LegCountryOfIssue_141);
    InstrumentLeg_141.insert(LegCountryOfIssue_141.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_141("LOCALMKTDATE_1165265599");
    noLegs_0_0.set(LegCouponPaymentDate_141);
    InstrumentLeg_141.insert(LegCouponPaymentDate_141.getString());
    FIX::LegCouponRate LegCouponRate_141;
    LegCouponRate_141.setString("32.740000");
    noLegs_0_0.set(LegCouponRate_141);
    InstrumentLeg_141.insert(LegCouponRate_141.getString());
    FIX::LegCreditRating LegCreditRating_141("STRING_316483605");
    noLegs_0_0.set(LegCreditRating_141);
    InstrumentLeg_141.insert(LegCreditRating_141.getString());
    FIX::LegCurrency LegCurrency_141("CAN");
    noLegs_0_0.set(LegCurrency_141);
    InstrumentLeg_141.insert(LegCurrency_141.getString());
    FIX::LegDatedDate LegDatedDate_141("LOCALMKTDATE_1307545182");
    noLegs_0_0.set(LegDatedDate_141);
    InstrumentLeg_141.insert(LegDatedDate_141.getString());
    FIX::LegExerciseStyle LegExerciseStyle_141(261977787);
    noLegs_0_0.set(LegExerciseStyle_141);
    InstrumentLeg_141.insert(LegExerciseStyle_141.getString());
    FIX::LegFactor LegFactor_141;
    LegFactor_141.setString("7011484");
    noLegs_0_0.set(LegFactor_141);
    InstrumentLeg_141.insert(LegFactor_141.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_141(270629269);
    noLegs_0_0.set(LegFlowScheduleType_141);
    InstrumentLeg_141.insert(LegFlowScheduleType_141.getString());
    FIX::LegInstrRegistry LegInstrRegistry_141("STRING_144439472");
    noLegs_0_0.set(LegInstrRegistry_141);
    InstrumentLeg_141.insert(LegInstrRegistry_141.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_141("LOCALMKTDATE_2040965285");
    noLegs_0_0.set(LegInterestAccrualDate_141);
    InstrumentLeg_141.insert(LegInterestAccrualDate_141.getString());
    FIX::LegIssueDate LegIssueDate_141("LOCALMKTDATE_603319123");
    noLegs_0_0.set(LegIssueDate_141);
    InstrumentLeg_141.insert(LegIssueDate_141.getString());
    FIX::LegIssuer LegIssuer_141("STRING_395126666");
    noLegs_0_0.set(LegIssuer_141);
    InstrumentLeg_141.insert(LegIssuer_141.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_141("STRING_163788126");
    noLegs_0_0.set(LegLocaleOfIssue_141);
    InstrumentLeg_141.insert(LegLocaleOfIssue_141.getString());
    FIX::LegMaturityDate LegMaturityDate_141("LOCALMKTDATE_97355777");
    noLegs_0_0.set(LegMaturityDate_141);
    InstrumentLeg_141.insert(LegMaturityDate_141.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_141("MONTHYEAR_488523327");
    noLegs_0_0.set(LegMaturityMonthYear_141);
    InstrumentLeg_141.insert(LegMaturityMonthYear_141.getString());
    FIX::LegMaturityTime LegMaturityTime_141("TZTIMEONLY_461556575");
    noLegs_0_0.set(LegMaturityTime_141);
    InstrumentLeg_141.insert(LegMaturityTime_141.getString());
    FIX::LegOptAttribute LegOptAttribute_141('8');
    noLegs_0_0.set(LegOptAttribute_141);
    InstrumentLeg_141.insert(LegOptAttribute_141.getString());
    FIX::LegOptionRatio LegOptionRatio_141;
    LegOptionRatio_141.setString("992334");
    noLegs_0_0.set(LegOptionRatio_141);
    InstrumentLeg_141.insert(LegOptionRatio_141.getString());
    FIX::LegPool LegPool_141("STRING_543097154");
    noLegs_0_0.set(LegPool_141);
    InstrumentLeg_141.insert(LegPool_141.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_141("STRING_31711532");
    noLegs_0_0.set(LegPriceUnitOfMeasure_141);
    InstrumentLeg_141.insert(LegPriceUnitOfMeasure_141.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_141;
    LegPriceUnitOfMeasureQty_141.setString("8966182");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_141);
    InstrumentLeg_141.insert(LegPriceUnitOfMeasureQty_141.getString());
    FIX::LegProduct LegProduct_141(1366749310);
    noLegs_0_0.set(LegProduct_141);
    InstrumentLeg_141.insert(LegProduct_141.getString());
    FIX::LegPutOrCall LegPutOrCall_141(1257274005);
    noLegs_0_0.set(LegPutOrCall_141);
    InstrumentLeg_141.insert(LegPutOrCall_141.getString());
    FIX::LegRatioQty LegRatioQty_141;
    LegRatioQty_141.setString("9426023");
    noLegs_0_0.set(LegRatioQty_141);
    InstrumentLeg_141.insert(LegRatioQty_141.getString());
    FIX::LegRedemptionDate LegRedemptionDate_141("LOCALMKTDATE_295742632");
    noLegs_0_0.set(LegRedemptionDate_141);
    InstrumentLeg_141.insert(LegRedemptionDate_141.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_141("STRING_943828118");
    noLegs_0_0.set(LegRepoCollateralSecurityType_141);
    InstrumentLeg_141.insert(LegRepoCollateralSecurityType_141.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_141;
    LegRepurchaseRate_141.setString("38.080000");
    noLegs_0_0.set(LegRepurchaseRate_141);
    InstrumentLeg_141.insert(LegRepurchaseRate_141.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_141(1179160827);
    noLegs_0_0.set(LegRepurchaseTerm_141);
    InstrumentLeg_141.insert(LegRepurchaseTerm_141.getString());
    FIX::LegSecurityDesc LegSecurityDesc_141("STRING_2110216117");
    noLegs_0_0.set(LegSecurityDesc_141);
    InstrumentLeg_141.insert(LegSecurityDesc_141.getString());
    FIX::LegSecurityExchange LegSecurityExchange_141("EXCHANGE_1974179088");
    noLegs_0_0.set(LegSecurityExchange_141);
    InstrumentLeg_141.insert(LegSecurityExchange_141.getString());
    FIX::LegSecurityID LegSecurityID_141("STRING_196942778");
    noLegs_0_0.set(LegSecurityID_141);
    InstrumentLeg_141.insert(LegSecurityID_141.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_141("STRING_763235743");
    noLegs_0_0.set(LegSecurityIDSource_141);
    InstrumentLeg_141.insert(LegSecurityIDSource_141.getString());
    FIX::LegSecuritySubType LegSecuritySubType_141("STRING_143179045");
    noLegs_0_0.set(LegSecuritySubType_141);
    InstrumentLeg_141.insert(LegSecuritySubType_141.getString());
    FIX::LegSecurityType LegSecurityType_141("STRING_1928338742");
    noLegs_0_0.set(LegSecurityType_141);
    InstrumentLeg_141.insert(LegSecurityType_141.getString());
    FIX::LegSide LegSide_141('1');
    noLegs_0_0.set(LegSide_141);
    InstrumentLeg_141.insert(LegSide_141.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_141("STRING_1450724227");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_141);
    InstrumentLeg_141.insert(LegStateOrProvinceOfIssue_141.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_141("GBP");
    noLegs_0_0.set(LegStrikeCurrency_141);
    InstrumentLeg_141.insert(LegStrikeCurrency_141.getString());
    FIX::LegStrikePrice LegStrikePrice_141;
    LegStrikePrice_141.setString("17213534");
    noLegs_0_0.set(LegStrikePrice_141);
    InstrumentLeg_141.insert(LegStrikePrice_141.getString());
    FIX::LegSymbol LegSymbol_141("STRING_187272354");
    noLegs_0_0.set(LegSymbol_141);
    InstrumentLeg_141.insert(LegSymbol_141.getString());
    FIX::LegSymbolSfx LegSymbolSfx_141("STRING_1709892575");
    noLegs_0_0.set(LegSymbolSfx_141);
    InstrumentLeg_141.insert(LegSymbolSfx_141.getString());
    FIX::LegTimeUnit LegTimeUnit_141("STRING_177188972");
    noLegs_0_0.set(LegTimeUnit_141);
    InstrumentLeg_141.insert(LegTimeUnit_141.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_141("STRING_582399020");
    noLegs_0_0.set(LegUnitOfMeasure_141);
    InstrumentLeg_141.insert(LegUnitOfMeasure_141.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_141;
    LegUnitOfMeasureQty_141.setString("18736807");
    noLegs_0_0.set(LegUnitOfMeasureQty_141);
    InstrumentLeg_141.insert(LegUnitOfMeasureQty_141.getString());
    all_values.push_back(InstrumentLeg_141);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_274;
      FIX::LegSecurityAltID LegSecurityAltID_274("STRING_1070922347");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_274);
      LegSecAltIDGrp_NoLegSecurityAltID_274.insert(LegSecurityAltID_274.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_274("STRING_187753629");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_274);
      LegSecAltIDGrp_NoLegSecurityAltID_274.insert(LegSecurityAltIDSource_274.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_274);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_275;
      FIX::LegSecurityAltID LegSecurityAltID_275("STRING_1151158336");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_275);
      LegSecAltIDGrp_NoLegSecurityAltID_275.insert(LegSecurityAltID_275.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_275("STRING_1170155748");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_275);
      LegSecAltIDGrp_NoLegSecurityAltID_275.insert(LegSecurityAltIDSource_275.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_275);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_67;
      FIX::LegStipulationType LegStipulationType_67("STRING_1182869868");
      noLegStipulations_0_1_0.set(LegStipulationType_67);
      LegStipulations_NoLegStipulations_67.insert(LegStipulationType_67.getString());
      FIX::LegStipulationValue LegStipulationValue_67("STRING_2066773966");
      noLegStipulations_0_1_0.set(LegStipulationValue_67);
      LegStipulations_NoLegStipulations_67.insert(LegStipulationValue_67.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_67);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_68;
      FIX::LegStipulationType LegStipulationType_68("STRING_2097600093");
      noLegStipulations_0_1_1.set(LegStipulationType_68);
      LegStipulations_NoLegStipulations_68.insert(LegStipulationType_68.getString());
      FIX::LegStipulationValue LegStipulationValue_68("STRING_292660226");
      noLegStipulations_0_1_1.set(LegStipulationValue_68);
      LegStipulations_NoLegStipulations_68.insert(LegStipulationValue_68.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_68);

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_0_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_69;
      FIX::LegStipulationType LegStipulationType_69("STRING_861892672");
      noLegStipulations_0_1_2.set(LegStipulationType_69);
      LegStipulations_NoLegStipulations_69.insert(LegStipulationType_69.getString());
      FIX::LegStipulationValue LegStipulationValue_69("STRING_245859077");
      noLegStipulations_0_1_2.set(LegStipulationValue_69);
      LegStipulations_NoLegStipulations_69.insert(LegStipulationValue_69.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_69);

      noLegs_0_0.addGroup(noLegStipulations_0_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_121;
      FIX::NestedPartyID NestedPartyID_121("STRING_74282832");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_121);
      NestedParties_NoNestedPartyIDs_121.insert(NestedPartyID_121.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_121('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_121);
      NestedParties_NoNestedPartyIDs_121.insert(NestedPartyIDSource_121.getString());
      FIX::NestedPartyRole NestedPartyRole_121(1199220813);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_121);
      NestedParties_NoNestedPartyIDs_121.insert(NestedPartyRole_121.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_121);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_237;
        FIX::NestedPartySubID NestedPartySubID_237("STRING_1621962683");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_237);
        NstdPtysSubGrp_NoNestedPartySubIDs_237.insert(NestedPartySubID_237.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_237(1962456556);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_237);
        NstdPtysSubGrp_NoNestedPartySubIDs_237.insert(NestedPartySubIDType_237.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_237);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_122;
      FIX::NestedPartyID NestedPartyID_122("STRING_44157317");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_122);
      NestedParties_NoNestedPartyIDs_122.insert(NestedPartyID_122.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_122('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_122);
      NestedParties_NoNestedPartyIDs_122.insert(NestedPartyIDSource_122.getString());
      FIX::NestedPartyRole NestedPartyRole_122(930235442);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_122);
      NestedParties_NoNestedPartyIDs_122.insert(NestedPartyRole_122.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_122);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_238;
        FIX::NestedPartySubID NestedPartySubID_238("STRING_1445650659");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_238);
        NstdPtysSubGrp_NoNestedPartySubIDs_238.insert(NestedPartySubID_238.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_238(599162732);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_238);
        NstdPtysSubGrp_NoNestedPartySubIDs_238.insert(NestedPartySubIDType_238.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_238);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_239;
        FIX::NestedPartySubID NestedPartySubID_239("STRING_1068751394");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_239);
        NstdPtysSubGrp_NoNestedPartySubIDs_239.insert(NestedPartySubID_239.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_239(1632923013);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_239);
        NstdPtysSubGrp_NoNestedPartySubIDs_239.insert(NestedPartySubIDType_239.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_239);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    // TradeCapLegUnderlyingsGrp
    // Group TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_0_1_0;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_0;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_0("STRING_1245940366");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegCFICode_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegCFICode_0.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_0("LOCALMKTDATE_67838386");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityDate_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegMaturityDate_0.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_0("MONTHYEAR_2035252361");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityMonthYear_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegMaturityMonthYear_0.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_0("TZTIMEONLY_1520485115");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityTime_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegMaturityTime_0.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_0('1');
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegOptAttribute_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegOptAttribute_0.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_0(75522342);
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegPutOrCall_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegPutOrCall_0.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_0("STRING_524159803");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityDesc_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecurityDesc_0.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_0("STRING_161432833");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityExchange_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecurityExchange_0.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_0("STRING_806373125");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityID_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecurityID_0.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_0("STRING_1707029672");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityIDSource_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecurityIDSource_0.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_0("STRING_80723152");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecuritySubType_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecuritySubType_0.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_0("STRING_756489571");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityType_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecurityType_0.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_0;
      UnderlyingLegStrikePrice_0.setString("19996898");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegStrikePrice_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegStrikePrice_0.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_0("STRING_942615824");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSymbol_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSymbol_0.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_0("STRING_1002348648");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSymbolSfx_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSymbolSfx_0.getString());
      all_values.push_back(UnderlyingLegInstrument_0);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_0("STRING_1016898657");
        noUnderlyingLegSecurityAltID_0_0_2_0.set(UnderlyingLegSecurityAltID_0);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0.insert(UnderlyingLegSecurityAltID_0.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_0("STRING_279884905");
        noUnderlyingLegSecurityAltID_0_0_2_0.set(UnderlyingLegSecurityAltIDSource_0);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0.insert(UnderlyingLegSecurityAltIDSource_0.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0);

        noOfLegUnderlyings_0_1_0.addGroup(noUnderlyingLegSecurityAltID_0_0_2_0);
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
    LegCalculatedCcyLastQty_4.setString("1404317");
    noLegs_0_1.set(LegCalculatedCcyLastQty_4);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegCalculatedCcyLastQty_4.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_10(917876929);
    noLegs_0_1.set(LegCoveredOrUncovered_10);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegCoveredOrUncovered_10.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_10;
    LegCurrencyRatio_10.setString("19018475");
    noLegs_0_1.set(LegCurrencyRatio_10);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegCurrencyRatio_10.getString());
    FIX::LegDividendYield LegDividendYield_10;
    LegDividendYield_10.setString("83.150000");
    noLegs_0_1.set(LegDividendYield_10);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegDividendYield_10.getString());
    FIX::LegExecInst LegExecInst_10("MULTIPLECHARVALUE_962034247");
    noLegs_0_1.set(LegExecInst_10);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegExecInst_10.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_4;
    LegGrossTradeAmt_4.setString("11571817");
    noLegs_0_1.set(LegGrossTradeAmt_4);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegGrossTradeAmt_4.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_4;
    LegLastForwardPoints_4.setString("8856401");
    noLegs_0_1.set(LegLastForwardPoints_4);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegLastForwardPoints_4.getString());
    FIX::LegLastPx LegLastPx_4;
    LegLastPx_4.setString("3094321");
    noLegs_0_1.set(LegLastPx_4);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegLastPx_4.getString());
    FIX::LegLastQty LegLastQty_4;
    LegLastQty_4.setString("4553487");
    noLegs_0_1.set(LegLastQty_4);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegLastQty_4.getString());
    FIX::LegNumber LegNumber_1(1484802841);
    noLegs_0_1.set(LegNumber_1);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegNumber_1.getString());
    FIX::LegPositionEffect LegPositionEffect_10('1');
    noLegs_0_1.set(LegPositionEffect_10);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegPositionEffect_10.getString());
    FIX::LegQty LegQty_25;
    LegQty_25.setString("20882717");
    noLegs_0_1.set(LegQty_25);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegQty_25.getString());
    FIX::LegRefID LegRefID_22("STRING_1646374501");
    noLegs_0_1.set(LegRefID_22);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegRefID_22.getString());
    FIX::LegReportID LegReportID_1("STRING_476640256");
    noLegs_0_1.set(LegReportID_1);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegReportID_1.getString());
    FIX::LegSettlCurrency LegSettlCurrency_10("CAN");
    noLegs_0_1.set(LegSettlCurrency_10);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegSettlCurrency_10.getString());
    FIX::LegSettlDate LegSettlDate_25("LOCALMKTDATE_1997125371");
    noLegs_0_1.set(LegSettlDate_25);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegSettlDate_25.getString());
    FIX::LegSettlType LegSettlType_32('1');
    noLegs_0_1.set(LegSettlType_32);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegSettlType_32.getString());
    FIX::LegSwapType LegSwapType_32(2);
    noLegs_0_1.set(LegSwapType_32);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegSwapType_32.getString());
    FIX::LegVolatility LegVolatility_10;
    LegVolatility_10.setString("3738015");
    noLegs_0_1.set(LegVolatility_10);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegVolatility_10.getString());
    all_values.push_back(TrdInstrmtLegGrp_NoLegs_1);

    // InstrumentLeg
    multiset<string> InstrumentLeg_142;
    FIX::EncodedLegIssuer EncodedLegIssuer_142("DATA_1308820049");
    noLegs_0_1.set(EncodedLegIssuer_142);
    InstrumentLeg_142.insert(EncodedLegIssuer_142.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_142(268555035);
    noLegs_0_1.set(EncodedLegIssuerLen_142);
    InstrumentLeg_142.insert(EncodedLegIssuerLen_142.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_142("DATA_2080831198");
    noLegs_0_1.set(EncodedLegSecurityDesc_142);
    InstrumentLeg_142.insert(EncodedLegSecurityDesc_142.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_142(1389543201);
    noLegs_0_1.set(EncodedLegSecurityDescLen_142);
    InstrumentLeg_142.insert(EncodedLegSecurityDescLen_142.getString());
    FIX::LegCFICode LegCFICode_142("STRING_1025044606");
    noLegs_0_1.set(LegCFICode_142);
    InstrumentLeg_142.insert(LegCFICode_142.getString());
    FIX::LegContractMultiplier LegContractMultiplier_142;
    LegContractMultiplier_142.setString("19330374");
    noLegs_0_1.set(LegContractMultiplier_142);
    InstrumentLeg_142.insert(LegContractMultiplier_142.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_142(184675377);
    noLegs_0_1.set(LegContractMultiplierUnit_142);
    InstrumentLeg_142.insert(LegContractMultiplierUnit_142.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_142("MONTHYEAR_2027393254");
    noLegs_0_1.set(LegContractSettlMonth_142);
    InstrumentLeg_142.insert(LegContractSettlMonth_142.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_142("COUNTRY_874248394");
    noLegs_0_1.set(LegCountryOfIssue_142);
    InstrumentLeg_142.insert(LegCountryOfIssue_142.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_142("LOCALMKTDATE_1201574034");
    noLegs_0_1.set(LegCouponPaymentDate_142);
    InstrumentLeg_142.insert(LegCouponPaymentDate_142.getString());
    FIX::LegCouponRate LegCouponRate_142;
    LegCouponRate_142.setString("45.120000");
    noLegs_0_1.set(LegCouponRate_142);
    InstrumentLeg_142.insert(LegCouponRate_142.getString());
    FIX::LegCreditRating LegCreditRating_142("STRING_1014680153");
    noLegs_0_1.set(LegCreditRating_142);
    InstrumentLeg_142.insert(LegCreditRating_142.getString());
    FIX::LegCurrency LegCurrency_142("CAN");
    noLegs_0_1.set(LegCurrency_142);
    InstrumentLeg_142.insert(LegCurrency_142.getString());
    FIX::LegDatedDate LegDatedDate_142("LOCALMKTDATE_970084820");
    noLegs_0_1.set(LegDatedDate_142);
    InstrumentLeg_142.insert(LegDatedDate_142.getString());
    FIX::LegExerciseStyle LegExerciseStyle_142(934001563);
    noLegs_0_1.set(LegExerciseStyle_142);
    InstrumentLeg_142.insert(LegExerciseStyle_142.getString());
    FIX::LegFactor LegFactor_142;
    LegFactor_142.setString("10713401");
    noLegs_0_1.set(LegFactor_142);
    InstrumentLeg_142.insert(LegFactor_142.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_142(1855724929);
    noLegs_0_1.set(LegFlowScheduleType_142);
    InstrumentLeg_142.insert(LegFlowScheduleType_142.getString());
    FIX::LegInstrRegistry LegInstrRegistry_142("STRING_1243433707");
    noLegs_0_1.set(LegInstrRegistry_142);
    InstrumentLeg_142.insert(LegInstrRegistry_142.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_142("LOCALMKTDATE_1526688902");
    noLegs_0_1.set(LegInterestAccrualDate_142);
    InstrumentLeg_142.insert(LegInterestAccrualDate_142.getString());
    FIX::LegIssueDate LegIssueDate_142("LOCALMKTDATE_1193044123");
    noLegs_0_1.set(LegIssueDate_142);
    InstrumentLeg_142.insert(LegIssueDate_142.getString());
    FIX::LegIssuer LegIssuer_142("STRING_474133597");
    noLegs_0_1.set(LegIssuer_142);
    InstrumentLeg_142.insert(LegIssuer_142.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_142("STRING_1467476998");
    noLegs_0_1.set(LegLocaleOfIssue_142);
    InstrumentLeg_142.insert(LegLocaleOfIssue_142.getString());
    FIX::LegMaturityDate LegMaturityDate_142("LOCALMKTDATE_691934976");
    noLegs_0_1.set(LegMaturityDate_142);
    InstrumentLeg_142.insert(LegMaturityDate_142.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_142("MONTHYEAR_950773853");
    noLegs_0_1.set(LegMaturityMonthYear_142);
    InstrumentLeg_142.insert(LegMaturityMonthYear_142.getString());
    FIX::LegMaturityTime LegMaturityTime_142("TZTIMEONLY_1476103480");
    noLegs_0_1.set(LegMaturityTime_142);
    InstrumentLeg_142.insert(LegMaturityTime_142.getString());
    FIX::LegOptAttribute LegOptAttribute_142('7');
    noLegs_0_1.set(LegOptAttribute_142);
    InstrumentLeg_142.insert(LegOptAttribute_142.getString());
    FIX::LegOptionRatio LegOptionRatio_142;
    LegOptionRatio_142.setString("8004155");
    noLegs_0_1.set(LegOptionRatio_142);
    InstrumentLeg_142.insert(LegOptionRatio_142.getString());
    FIX::LegPool LegPool_142("STRING_476007048");
    noLegs_0_1.set(LegPool_142);
    InstrumentLeg_142.insert(LegPool_142.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_142("STRING_1688260101");
    noLegs_0_1.set(LegPriceUnitOfMeasure_142);
    InstrumentLeg_142.insert(LegPriceUnitOfMeasure_142.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_142;
    LegPriceUnitOfMeasureQty_142.setString("11742171");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_142);
    InstrumentLeg_142.insert(LegPriceUnitOfMeasureQty_142.getString());
    FIX::LegProduct LegProduct_142(1784827097);
    noLegs_0_1.set(LegProduct_142);
    InstrumentLeg_142.insert(LegProduct_142.getString());
    FIX::LegPutOrCall LegPutOrCall_142(1956815136);
    noLegs_0_1.set(LegPutOrCall_142);
    InstrumentLeg_142.insert(LegPutOrCall_142.getString());
    FIX::LegRatioQty LegRatioQty_142;
    LegRatioQty_142.setString("11075646");
    noLegs_0_1.set(LegRatioQty_142);
    InstrumentLeg_142.insert(LegRatioQty_142.getString());
    FIX::LegRedemptionDate LegRedemptionDate_142("LOCALMKTDATE_1026886650");
    noLegs_0_1.set(LegRedemptionDate_142);
    InstrumentLeg_142.insert(LegRedemptionDate_142.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_142("STRING_834376094");
    noLegs_0_1.set(LegRepoCollateralSecurityType_142);
    InstrumentLeg_142.insert(LegRepoCollateralSecurityType_142.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_142;
    LegRepurchaseRate_142.setString("84.530000");
    noLegs_0_1.set(LegRepurchaseRate_142);
    InstrumentLeg_142.insert(LegRepurchaseRate_142.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_142(1211562027);
    noLegs_0_1.set(LegRepurchaseTerm_142);
    InstrumentLeg_142.insert(LegRepurchaseTerm_142.getString());
    FIX::LegSecurityDesc LegSecurityDesc_142("STRING_714285700");
    noLegs_0_1.set(LegSecurityDesc_142);
    InstrumentLeg_142.insert(LegSecurityDesc_142.getString());
    FIX::LegSecurityExchange LegSecurityExchange_142("EXCHANGE_1767366848");
    noLegs_0_1.set(LegSecurityExchange_142);
    InstrumentLeg_142.insert(LegSecurityExchange_142.getString());
    FIX::LegSecurityID LegSecurityID_142("STRING_265652414");
    noLegs_0_1.set(LegSecurityID_142);
    InstrumentLeg_142.insert(LegSecurityID_142.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_142("STRING_874080212");
    noLegs_0_1.set(LegSecurityIDSource_142);
    InstrumentLeg_142.insert(LegSecurityIDSource_142.getString());
    FIX::LegSecuritySubType LegSecuritySubType_142("STRING_634563353");
    noLegs_0_1.set(LegSecuritySubType_142);
    InstrumentLeg_142.insert(LegSecuritySubType_142.getString());
    FIX::LegSecurityType LegSecurityType_142("STRING_237619730");
    noLegs_0_1.set(LegSecurityType_142);
    InstrumentLeg_142.insert(LegSecurityType_142.getString());
    FIX::LegSide LegSide_142('7');
    noLegs_0_1.set(LegSide_142);
    InstrumentLeg_142.insert(LegSide_142.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_142("STRING_1604648174");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_142);
    InstrumentLeg_142.insert(LegStateOrProvinceOfIssue_142.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_142("EUR");
    noLegs_0_1.set(LegStrikeCurrency_142);
    InstrumentLeg_142.insert(LegStrikeCurrency_142.getString());
    FIX::LegStrikePrice LegStrikePrice_142;
    LegStrikePrice_142.setString("13128894");
    noLegs_0_1.set(LegStrikePrice_142);
    InstrumentLeg_142.insert(LegStrikePrice_142.getString());
    FIX::LegSymbol LegSymbol_142("STRING_267571352");
    noLegs_0_1.set(LegSymbol_142);
    InstrumentLeg_142.insert(LegSymbol_142.getString());
    FIX::LegSymbolSfx LegSymbolSfx_142("STRING_1238784092");
    noLegs_0_1.set(LegSymbolSfx_142);
    InstrumentLeg_142.insert(LegSymbolSfx_142.getString());
    FIX::LegTimeUnit LegTimeUnit_142("STRING_358449930");
    noLegs_0_1.set(LegTimeUnit_142);
    InstrumentLeg_142.insert(LegTimeUnit_142.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_142("STRING_741704949");
    noLegs_0_1.set(LegUnitOfMeasure_142);
    InstrumentLeg_142.insert(LegUnitOfMeasure_142.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_142;
    LegUnitOfMeasureQty_142.setString("5587774");
    noLegs_0_1.set(LegUnitOfMeasureQty_142);
    InstrumentLeg_142.insert(LegUnitOfMeasureQty_142.getString());
    all_values.push_back(InstrumentLeg_142);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_276;
      FIX::LegSecurityAltID LegSecurityAltID_276("STRING_1692478802");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_276);
      LegSecAltIDGrp_NoLegSecurityAltID_276.insert(LegSecurityAltID_276.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_276("STRING_2034880923");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_276);
      LegSecAltIDGrp_NoLegSecurityAltID_276.insert(LegSecurityAltIDSource_276.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_276);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_277;
      FIX::LegSecurityAltID LegSecurityAltID_277("STRING_1128979450");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_277);
      LegSecAltIDGrp_NoLegSecurityAltID_277.insert(LegSecurityAltID_277.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_277("STRING_345410730");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_277);
      LegSecAltIDGrp_NoLegSecurityAltID_277.insert(LegSecurityAltIDSource_277.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_277);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_70;
      FIX::LegStipulationType LegStipulationType_70("STRING_669755903");
      noLegStipulations_1_1_0.set(LegStipulationType_70);
      LegStipulations_NoLegStipulations_70.insert(LegStipulationType_70.getString());
      FIX::LegStipulationValue LegStipulationValue_70("STRING_1519627832");
      noLegStipulations_1_1_0.set(LegStipulationValue_70);
      LegStipulations_NoLegStipulations_70.insert(LegStipulationValue_70.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_70);

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_1_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_71;
      FIX::LegStipulationType LegStipulationType_71("STRING_747772");
      noLegStipulations_1_1_1.set(LegStipulationType_71);
      LegStipulations_NoLegStipulations_71.insert(LegStipulationType_71.getString());
      FIX::LegStipulationValue LegStipulationValue_71("STRING_479087391");
      noLegStipulations_1_1_1.set(LegStipulationValue_71);
      LegStipulations_NoLegStipulations_71.insert(LegStipulationValue_71.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_71);

      noLegs_0_1.addGroup(noLegStipulations_1_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_123;
      FIX::NestedPartyID NestedPartyID_123("STRING_1027634422");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_123);
      NestedParties_NoNestedPartyIDs_123.insert(NestedPartyID_123.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_123('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_123);
      NestedParties_NoNestedPartyIDs_123.insert(NestedPartyIDSource_123.getString());
      FIX::NestedPartyRole NestedPartyRole_123(1372827291);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_123);
      NestedParties_NoNestedPartyIDs_123.insert(NestedPartyRole_123.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_123);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_240;
        FIX::NestedPartySubID NestedPartySubID_240("STRING_2027749186");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_240);
        NstdPtysSubGrp_NoNestedPartySubIDs_240.insert(NestedPartySubID_240.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_240(992710491);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_240);
        NstdPtysSubGrp_NoNestedPartySubIDs_240.insert(NestedPartySubIDType_240.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_240);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_241;
        FIX::NestedPartySubID NestedPartySubID_241("STRING_357365215");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_241);
        NstdPtysSubGrp_NoNestedPartySubIDs_241.insert(NestedPartySubID_241.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_241(754345750);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_241);
        NstdPtysSubGrp_NoNestedPartySubIDs_241.insert(NestedPartySubIDType_241.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_241);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_242;
        FIX::NestedPartySubID NestedPartySubID_242("STRING_1627273844");
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubID_242);
        NstdPtysSubGrp_NoNestedPartySubIDs_242.insert(NestedPartySubID_242.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_242(594984945);
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubIDType_242);
        NstdPtysSubGrp_NoNestedPartySubIDs_242.insert(NestedPartySubIDType_242.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_242);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_124;
      FIX::NestedPartyID NestedPartyID_124("STRING_1542584416");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_124);
      NestedParties_NoNestedPartyIDs_124.insert(NestedPartyID_124.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_124('1');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_124);
      NestedParties_NoNestedPartyIDs_124.insert(NestedPartyIDSource_124.getString());
      FIX::NestedPartyRole NestedPartyRole_124(1766606238);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_124);
      NestedParties_NoNestedPartyIDs_124.insert(NestedPartyRole_124.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_124);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_243;
        FIX::NestedPartySubID NestedPartySubID_243("STRING_249844178");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_243);
        NstdPtysSubGrp_NoNestedPartySubIDs_243.insert(NestedPartySubID_243.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_243(2034177590);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_243);
        NstdPtysSubGrp_NoNestedPartySubIDs_243.insert(NestedPartySubIDType_243.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_243);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_125;
      FIX::NestedPartyID NestedPartyID_125("STRING_345980049");
      noNestedPartyIDs_1_1_2.set(NestedPartyID_125);
      NestedParties_NoNestedPartyIDs_125.insert(NestedPartyID_125.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_125('6');
      noNestedPartyIDs_1_1_2.set(NestedPartyIDSource_125);
      NestedParties_NoNestedPartyIDs_125.insert(NestedPartyIDSource_125.getString());
      FIX::NestedPartyRole NestedPartyRole_125(628398891);
      noNestedPartyIDs_1_1_2.set(NestedPartyRole_125);
      NestedParties_NoNestedPartyIDs_125.insert(NestedPartyRole_125.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_125);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_244;
        FIX::NestedPartySubID NestedPartySubID_244("STRING_1658679015");
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubID_244);
        NstdPtysSubGrp_NoNestedPartySubIDs_244.insert(NestedPartySubID_244.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_244(173394045);
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubIDType_244);
        NstdPtysSubGrp_NoNestedPartySubIDs_244.insert(NestedPartySubIDType_244.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_244);

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_245;
        FIX::NestedPartySubID NestedPartySubID_245("STRING_792154767");
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubID_245);
        NstdPtysSubGrp_NoNestedPartySubIDs_245.insert(NestedPartySubID_245.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_245(640174818);
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubIDType_245);
        NstdPtysSubGrp_NoNestedPartySubIDs_245.insert(NestedPartySubIDType_245.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_245);

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_246;
        FIX::NestedPartySubID NestedPartySubID_246("STRING_518804775");
        noNestedPartySubIDs_1_2_2_2.set(NestedPartySubID_246);
        NstdPtysSubGrp_NoNestedPartySubIDs_246.insert(NestedPartySubID_246.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_246(1155559090);
        noNestedPartySubIDs_1_2_2_2.set(NestedPartySubIDType_246);
        NstdPtysSubGrp_NoNestedPartySubIDs_246.insert(NestedPartySubIDType_246.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_246);

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_2);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    // TradeCapLegUnderlyingsGrp
    // Group TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_1_1_0;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_1;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_1("STRING_2038432608");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegCFICode_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegCFICode_1.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_1("LOCALMKTDATE_1156306862");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegMaturityDate_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegMaturityDate_1.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_1("MONTHYEAR_1789018113");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegMaturityMonthYear_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegMaturityMonthYear_1.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_1("TZTIMEONLY_370657797");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegMaturityTime_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegMaturityTime_1.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_1('3');
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegOptAttribute_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegOptAttribute_1.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_1(954997950);
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegPutOrCall_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegPutOrCall_1.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_1("STRING_1743485088");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecurityDesc_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecurityDesc_1.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_1("STRING_128170437");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecurityExchange_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecurityExchange_1.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_1("STRING_835263488");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecurityID_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecurityID_1.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_1("STRING_588711931");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecurityIDSource_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecurityIDSource_1.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_1("STRING_485535653");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecuritySubType_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecuritySubType_1.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_1("STRING_1589609239");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecurityType_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecurityType_1.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_1;
      UnderlyingLegStrikePrice_1.setString("685021");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegStrikePrice_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegStrikePrice_1.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_1("STRING_1080520598");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSymbol_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSymbol_1.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_1("STRING_984710007");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSymbolSfx_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSymbolSfx_1.getString());
      all_values.push_back(UnderlyingLegInstrument_1);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_0_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_1("STRING_699643189");
        noUnderlyingLegSecurityAltID_1_0_2_0.set(UnderlyingLegSecurityAltID_1);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1.insert(UnderlyingLegSecurityAltID_1.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_1("STRING_91905964");
        noUnderlyingLegSecurityAltID_1_0_2_0.set(UnderlyingLegSecurityAltIDSource_1);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1.insert(UnderlyingLegSecurityAltIDSource_1.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1);

        noOfLegUnderlyings_1_1_0.addGroup(noUnderlyingLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_0_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_2("STRING_1402784676");
        noUnderlyingLegSecurityAltID_1_0_2_1.set(UnderlyingLegSecurityAltID_2);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2.insert(UnderlyingLegSecurityAltID_2.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_2("STRING_586337131");
        noUnderlyingLegSecurityAltID_1_0_2_1.set(UnderlyingLegSecurityAltIDSource_2);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2.insert(UnderlyingLegSecurityAltIDSource_2.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2);

        noOfLegUnderlyings_1_1_0.addGroup(noUnderlyingLegSecurityAltID_1_0_2_1);
      }
      noLegs_0_1.addGroup(noOfLegUnderlyings_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_1_1_1;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_2;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_2("STRING_437886014");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegCFICode_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegCFICode_2.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_2("LOCALMKTDATE_2011078785");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegMaturityDate_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegMaturityDate_2.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_2("MONTHYEAR_1214736023");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegMaturityMonthYear_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegMaturityMonthYear_2.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_2("TZTIMEONLY_1342643506");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegMaturityTime_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegMaturityTime_2.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_2('1');
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegOptAttribute_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegOptAttribute_2.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_2(1388130068);
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegPutOrCall_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegPutOrCall_2.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_2("STRING_2134798273");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecurityDesc_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecurityDesc_2.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_2("STRING_14965322");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecurityExchange_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecurityExchange_2.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_2("STRING_1906934844");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecurityID_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecurityID_2.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_2("STRING_1142873715");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecurityIDSource_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecurityIDSource_2.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_2("STRING_1324896044");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecuritySubType_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecuritySubType_2.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_2("STRING_1797883804");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecurityType_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecurityType_2.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_2;
      UnderlyingLegStrikePrice_2.setString("1516969");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegStrikePrice_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegStrikePrice_2.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_2("STRING_966430509");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSymbol_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSymbol_2.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_2("STRING_21057953");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSymbolSfx_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSymbolSfx_2.getString());
      all_values.push_back(UnderlyingLegInstrument_2);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_1_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_3("STRING_1921428459");
        noUnderlyingLegSecurityAltID_1_1_2_0.set(UnderlyingLegSecurityAltID_3);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3.insert(UnderlyingLegSecurityAltID_3.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_3("STRING_1764543042");
        noUnderlyingLegSecurityAltID_1_1_2_0.set(UnderlyingLegSecurityAltIDSource_3);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3.insert(UnderlyingLegSecurityAltIDSource_3.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3);

        noOfLegUnderlyings_1_1_1.addGroup(noUnderlyingLegSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_1_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_4("STRING_316325002");
        noUnderlyingLegSecurityAltID_1_1_2_1.set(UnderlyingLegSecurityAltID_4);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4.insert(UnderlyingLegSecurityAltID_4.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_4("STRING_609208300");
        noUnderlyingLegSecurityAltID_1_1_2_1.set(UnderlyingLegSecurityAltIDSource_4);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4.insert(UnderlyingLegSecurityAltIDSource_4.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4);

        noOfLegUnderlyings_1_1_1.addGroup(noUnderlyingLegSecurityAltID_1_1_2_1);
      }
      noLegs_0_1.addGroup(noOfLegUnderlyings_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_1_1_2;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_3;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_3("STRING_205771325");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegCFICode_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegCFICode_3.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_3("LOCALMKTDATE_801860655");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegMaturityDate_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegMaturityDate_3.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_3("MONTHYEAR_51333891");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegMaturityMonthYear_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegMaturityMonthYear_3.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_3("TZTIMEONLY_274273453");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegMaturityTime_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegMaturityTime_3.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_3('1');
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegOptAttribute_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegOptAttribute_3.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_3(1036043898);
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegPutOrCall_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegPutOrCall_3.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_3("STRING_1427213952");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSecurityDesc_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSecurityDesc_3.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_3("STRING_434540795");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSecurityExchange_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSecurityExchange_3.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_3("STRING_1127949862");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSecurityID_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSecurityID_3.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_3("STRING_682514980");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSecurityIDSource_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSecurityIDSource_3.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_3("STRING_1020877926");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSecuritySubType_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSecuritySubType_3.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_3("STRING_1565835876");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSecurityType_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSecurityType_3.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_3;
      UnderlyingLegStrikePrice_3.setString("5461101");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegStrikePrice_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegStrikePrice_3.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_3("STRING_88130301");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSymbol_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSymbol_3.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_3("STRING_760995734");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSymbolSfx_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSymbolSfx_3.getString());
      all_values.push_back(UnderlyingLegInstrument_3);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_2_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_5;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_5("STRING_1476260370");
        noUnderlyingLegSecurityAltID_1_2_2_0.set(UnderlyingLegSecurityAltID_5);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_5.insert(UnderlyingLegSecurityAltID_5.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_5("STRING_748310359");
        noUnderlyingLegSecurityAltID_1_2_2_0.set(UnderlyingLegSecurityAltIDSource_5);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_5.insert(UnderlyingLegSecurityAltIDSource_5.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_5);

        noOfLegUnderlyings_1_1_2.addGroup(noUnderlyingLegSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_2_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_6;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_6("STRING_2083349592");
        noUnderlyingLegSecurityAltID_1_2_2_1.set(UnderlyingLegSecurityAltID_6);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_6.insert(UnderlyingLegSecurityAltID_6.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_6("STRING_1235711566");
        noUnderlyingLegSecurityAltID_1_2_2_1.set(UnderlyingLegSecurityAltIDSource_6);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_6.insert(UnderlyingLegSecurityAltIDSource_6.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_6);

        noOfLegUnderlyings_1_1_2.addGroup(noUnderlyingLegSecurityAltID_1_2_2_1);
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
    LegCalculatedCcyLastQty_5.setString("18911840");
    noLegs_0_2.set(LegCalculatedCcyLastQty_5);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegCalculatedCcyLastQty_5.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_11(1260761988);
    noLegs_0_2.set(LegCoveredOrUncovered_11);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegCoveredOrUncovered_11.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_11;
    LegCurrencyRatio_11.setString("8861117");
    noLegs_0_2.set(LegCurrencyRatio_11);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegCurrencyRatio_11.getString());
    FIX::LegDividendYield LegDividendYield_11;
    LegDividendYield_11.setString("10.030000");
    noLegs_0_2.set(LegDividendYield_11);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegDividendYield_11.getString());
    FIX::LegExecInst LegExecInst_11("MULTIPLECHARVALUE_79708849");
    noLegs_0_2.set(LegExecInst_11);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegExecInst_11.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_5;
    LegGrossTradeAmt_5.setString("9071696");
    noLegs_0_2.set(LegGrossTradeAmt_5);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegGrossTradeAmt_5.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_5;
    LegLastForwardPoints_5.setString("835519");
    noLegs_0_2.set(LegLastForwardPoints_5);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegLastForwardPoints_5.getString());
    FIX::LegLastPx LegLastPx_5;
    LegLastPx_5.setString("20011373");
    noLegs_0_2.set(LegLastPx_5);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegLastPx_5.getString());
    FIX::LegLastQty LegLastQty_5;
    LegLastQty_5.setString("5242290");
    noLegs_0_2.set(LegLastQty_5);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegLastQty_5.getString());
    FIX::LegNumber LegNumber_2(399876923);
    noLegs_0_2.set(LegNumber_2);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegNumber_2.getString());
    FIX::LegPositionEffect LegPositionEffect_11('4');
    noLegs_0_2.set(LegPositionEffect_11);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegPositionEffect_11.getString());
    FIX::LegQty LegQty_26;
    LegQty_26.setString("7300003");
    noLegs_0_2.set(LegQty_26);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegQty_26.getString());
    FIX::LegRefID LegRefID_23("STRING_1201737578");
    noLegs_0_2.set(LegRefID_23);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegRefID_23.getString());
    FIX::LegReportID LegReportID_2("STRING_514195852");
    noLegs_0_2.set(LegReportID_2);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegReportID_2.getString());
    FIX::LegSettlCurrency LegSettlCurrency_11("USD");
    noLegs_0_2.set(LegSettlCurrency_11);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegSettlCurrency_11.getString());
    FIX::LegSettlDate LegSettlDate_26("LOCALMKTDATE_1550239750");
    noLegs_0_2.set(LegSettlDate_26);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegSettlDate_26.getString());
    FIX::LegSettlType LegSettlType_33('2');
    noLegs_0_2.set(LegSettlType_33);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegSettlType_33.getString());
    FIX::LegSwapType LegSwapType_33(5);
    noLegs_0_2.set(LegSwapType_33);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegSwapType_33.getString());
    FIX::LegVolatility LegVolatility_11;
    LegVolatility_11.setString("5307059");
    noLegs_0_2.set(LegVolatility_11);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegVolatility_11.getString());
    all_values.push_back(TrdInstrmtLegGrp_NoLegs_2);

    // InstrumentLeg
    multiset<string> InstrumentLeg_143;
    FIX::EncodedLegIssuer EncodedLegIssuer_143("DATA_966519133");
    noLegs_0_2.set(EncodedLegIssuer_143);
    InstrumentLeg_143.insert(EncodedLegIssuer_143.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_143(244570258);
    noLegs_0_2.set(EncodedLegIssuerLen_143);
    InstrumentLeg_143.insert(EncodedLegIssuerLen_143.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_143("DATA_2096541841");
    noLegs_0_2.set(EncodedLegSecurityDesc_143);
    InstrumentLeg_143.insert(EncodedLegSecurityDesc_143.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_143(1512629250);
    noLegs_0_2.set(EncodedLegSecurityDescLen_143);
    InstrumentLeg_143.insert(EncodedLegSecurityDescLen_143.getString());
    FIX::LegCFICode LegCFICode_143("STRING_332700559");
    noLegs_0_2.set(LegCFICode_143);
    InstrumentLeg_143.insert(LegCFICode_143.getString());
    FIX::LegContractMultiplier LegContractMultiplier_143;
    LegContractMultiplier_143.setString("7100539");
    noLegs_0_2.set(LegContractMultiplier_143);
    InstrumentLeg_143.insert(LegContractMultiplier_143.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_143(1433529872);
    noLegs_0_2.set(LegContractMultiplierUnit_143);
    InstrumentLeg_143.insert(LegContractMultiplierUnit_143.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_143("MONTHYEAR_1808960929");
    noLegs_0_2.set(LegContractSettlMonth_143);
    InstrumentLeg_143.insert(LegContractSettlMonth_143.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_143("COUNTRY_1458364287");
    noLegs_0_2.set(LegCountryOfIssue_143);
    InstrumentLeg_143.insert(LegCountryOfIssue_143.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_143("LOCALMKTDATE_1369395817");
    noLegs_0_2.set(LegCouponPaymentDate_143);
    InstrumentLeg_143.insert(LegCouponPaymentDate_143.getString());
    FIX::LegCouponRate LegCouponRate_143;
    LegCouponRate_143.setString("88.470000");
    noLegs_0_2.set(LegCouponRate_143);
    InstrumentLeg_143.insert(LegCouponRate_143.getString());
    FIX::LegCreditRating LegCreditRating_143("STRING_1202064713");
    noLegs_0_2.set(LegCreditRating_143);
    InstrumentLeg_143.insert(LegCreditRating_143.getString());
    FIX::LegCurrency LegCurrency_143("CHF");
    noLegs_0_2.set(LegCurrency_143);
    InstrumentLeg_143.insert(LegCurrency_143.getString());
    FIX::LegDatedDate LegDatedDate_143("LOCALMKTDATE_1097462069");
    noLegs_0_2.set(LegDatedDate_143);
    InstrumentLeg_143.insert(LegDatedDate_143.getString());
    FIX::LegExerciseStyle LegExerciseStyle_143(562383007);
    noLegs_0_2.set(LegExerciseStyle_143);
    InstrumentLeg_143.insert(LegExerciseStyle_143.getString());
    FIX::LegFactor LegFactor_143;
    LegFactor_143.setString("5429865");
    noLegs_0_2.set(LegFactor_143);
    InstrumentLeg_143.insert(LegFactor_143.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_143(1181013989);
    noLegs_0_2.set(LegFlowScheduleType_143);
    InstrumentLeg_143.insert(LegFlowScheduleType_143.getString());
    FIX::LegInstrRegistry LegInstrRegistry_143("STRING_416036668");
    noLegs_0_2.set(LegInstrRegistry_143);
    InstrumentLeg_143.insert(LegInstrRegistry_143.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_143("LOCALMKTDATE_1067215666");
    noLegs_0_2.set(LegInterestAccrualDate_143);
    InstrumentLeg_143.insert(LegInterestAccrualDate_143.getString());
    FIX::LegIssueDate LegIssueDate_143("LOCALMKTDATE_1580890912");
    noLegs_0_2.set(LegIssueDate_143);
    InstrumentLeg_143.insert(LegIssueDate_143.getString());
    FIX::LegIssuer LegIssuer_143("STRING_878898629");
    noLegs_0_2.set(LegIssuer_143);
    InstrumentLeg_143.insert(LegIssuer_143.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_143("STRING_1797216061");
    noLegs_0_2.set(LegLocaleOfIssue_143);
    InstrumentLeg_143.insert(LegLocaleOfIssue_143.getString());
    FIX::LegMaturityDate LegMaturityDate_143("LOCALMKTDATE_635144843");
    noLegs_0_2.set(LegMaturityDate_143);
    InstrumentLeg_143.insert(LegMaturityDate_143.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_143("MONTHYEAR_1393094481");
    noLegs_0_2.set(LegMaturityMonthYear_143);
    InstrumentLeg_143.insert(LegMaturityMonthYear_143.getString());
    FIX::LegMaturityTime LegMaturityTime_143("TZTIMEONLY_654006262");
    noLegs_0_2.set(LegMaturityTime_143);
    InstrumentLeg_143.insert(LegMaturityTime_143.getString());
    FIX::LegOptAttribute LegOptAttribute_143('1');
    noLegs_0_2.set(LegOptAttribute_143);
    InstrumentLeg_143.insert(LegOptAttribute_143.getString());
    FIX::LegOptionRatio LegOptionRatio_143;
    LegOptionRatio_143.setString("7958505");
    noLegs_0_2.set(LegOptionRatio_143);
    InstrumentLeg_143.insert(LegOptionRatio_143.getString());
    FIX::LegPool LegPool_143("STRING_938010414");
    noLegs_0_2.set(LegPool_143);
    InstrumentLeg_143.insert(LegPool_143.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_143("STRING_795472359");
    noLegs_0_2.set(LegPriceUnitOfMeasure_143);
    InstrumentLeg_143.insert(LegPriceUnitOfMeasure_143.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_143;
    LegPriceUnitOfMeasureQty_143.setString("13265565");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_143);
    InstrumentLeg_143.insert(LegPriceUnitOfMeasureQty_143.getString());
    FIX::LegProduct LegProduct_143(1904529547);
    noLegs_0_2.set(LegProduct_143);
    InstrumentLeg_143.insert(LegProduct_143.getString());
    FIX::LegPutOrCall LegPutOrCall_143(1040042617);
    noLegs_0_2.set(LegPutOrCall_143);
    InstrumentLeg_143.insert(LegPutOrCall_143.getString());
    FIX::LegRatioQty LegRatioQty_143;
    LegRatioQty_143.setString("12756147");
    noLegs_0_2.set(LegRatioQty_143);
    InstrumentLeg_143.insert(LegRatioQty_143.getString());
    FIX::LegRedemptionDate LegRedemptionDate_143("LOCALMKTDATE_1269675150");
    noLegs_0_2.set(LegRedemptionDate_143);
    InstrumentLeg_143.insert(LegRedemptionDate_143.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_143("STRING_1372743176");
    noLegs_0_2.set(LegRepoCollateralSecurityType_143);
    InstrumentLeg_143.insert(LegRepoCollateralSecurityType_143.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_143;
    LegRepurchaseRate_143.setString("86.680000");
    noLegs_0_2.set(LegRepurchaseRate_143);
    InstrumentLeg_143.insert(LegRepurchaseRate_143.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_143(555721374);
    noLegs_0_2.set(LegRepurchaseTerm_143);
    InstrumentLeg_143.insert(LegRepurchaseTerm_143.getString());
    FIX::LegSecurityDesc LegSecurityDesc_143("STRING_1034220458");
    noLegs_0_2.set(LegSecurityDesc_143);
    InstrumentLeg_143.insert(LegSecurityDesc_143.getString());
    FIX::LegSecurityExchange LegSecurityExchange_143("EXCHANGE_1296549307");
    noLegs_0_2.set(LegSecurityExchange_143);
    InstrumentLeg_143.insert(LegSecurityExchange_143.getString());
    FIX::LegSecurityID LegSecurityID_143("STRING_1925117191");
    noLegs_0_2.set(LegSecurityID_143);
    InstrumentLeg_143.insert(LegSecurityID_143.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_143("STRING_1931409305");
    noLegs_0_2.set(LegSecurityIDSource_143);
    InstrumentLeg_143.insert(LegSecurityIDSource_143.getString());
    FIX::LegSecuritySubType LegSecuritySubType_143("STRING_351130372");
    noLegs_0_2.set(LegSecuritySubType_143);
    InstrumentLeg_143.insert(LegSecuritySubType_143.getString());
    FIX::LegSecurityType LegSecurityType_143("STRING_260307701");
    noLegs_0_2.set(LegSecurityType_143);
    InstrumentLeg_143.insert(LegSecurityType_143.getString());
    FIX::LegSide LegSide_143('1');
    noLegs_0_2.set(LegSide_143);
    InstrumentLeg_143.insert(LegSide_143.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_143("STRING_1448592441");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_143);
    InstrumentLeg_143.insert(LegStateOrProvinceOfIssue_143.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_143("GBP");
    noLegs_0_2.set(LegStrikeCurrency_143);
    InstrumentLeg_143.insert(LegStrikeCurrency_143.getString());
    FIX::LegStrikePrice LegStrikePrice_143;
    LegStrikePrice_143.setString("4821227");
    noLegs_0_2.set(LegStrikePrice_143);
    InstrumentLeg_143.insert(LegStrikePrice_143.getString());
    FIX::LegSymbol LegSymbol_143("STRING_1238727376");
    noLegs_0_2.set(LegSymbol_143);
    InstrumentLeg_143.insert(LegSymbol_143.getString());
    FIX::LegSymbolSfx LegSymbolSfx_143("STRING_1029944842");
    noLegs_0_2.set(LegSymbolSfx_143);
    InstrumentLeg_143.insert(LegSymbolSfx_143.getString());
    FIX::LegTimeUnit LegTimeUnit_143("STRING_2063013695");
    noLegs_0_2.set(LegTimeUnit_143);
    InstrumentLeg_143.insert(LegTimeUnit_143.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_143("STRING_2117626005");
    noLegs_0_2.set(LegUnitOfMeasure_143);
    InstrumentLeg_143.insert(LegUnitOfMeasure_143.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_143;
    LegUnitOfMeasureQty_143.setString("6796772");
    noLegs_0_2.set(LegUnitOfMeasureQty_143);
    InstrumentLeg_143.insert(LegUnitOfMeasureQty_143.getString());
    all_values.push_back(InstrumentLeg_143);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_278;
      FIX::LegSecurityAltID LegSecurityAltID_278("STRING_1363236838");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_278);
      LegSecAltIDGrp_NoLegSecurityAltID_278.insert(LegSecurityAltID_278.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_278("STRING_1333683518");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_278);
      LegSecAltIDGrp_NoLegSecurityAltID_278.insert(LegSecurityAltIDSource_278.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_278);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_279;
      FIX::LegSecurityAltID LegSecurityAltID_279("STRING_2122454918");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_279);
      LegSecAltIDGrp_NoLegSecurityAltID_279.insert(LegSecurityAltID_279.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_279("STRING_11603773");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_279);
      LegSecAltIDGrp_NoLegSecurityAltID_279.insert(LegSecurityAltIDSource_279.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_279);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_280;
      FIX::LegSecurityAltID LegSecurityAltID_280("STRING_124210284");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_280);
      LegSecAltIDGrp_NoLegSecurityAltID_280.insert(LegSecurityAltID_280.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_280("STRING_770443629");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_280);
      LegSecAltIDGrp_NoLegSecurityAltID_280.insert(LegSecurityAltIDSource_280.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_280);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_2_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_72;
      FIX::LegStipulationType LegStipulationType_72("STRING_2028739832");
      noLegStipulations_2_1_0.set(LegStipulationType_72);
      LegStipulations_NoLegStipulations_72.insert(LegStipulationType_72.getString());
      FIX::LegStipulationValue LegStipulationValue_72("STRING_1810486246");
      noLegStipulations_2_1_0.set(LegStipulationValue_72);
      LegStipulations_NoLegStipulations_72.insert(LegStipulationValue_72.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_72);

      noLegs_0_2.addGroup(noLegStipulations_2_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_126;
      FIX::NestedPartyID NestedPartyID_126("STRING_1150931334");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_126);
      NestedParties_NoNestedPartyIDs_126.insert(NestedPartyID_126.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_126('1');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_126);
      NestedParties_NoNestedPartyIDs_126.insert(NestedPartyIDSource_126.getString());
      FIX::NestedPartyRole NestedPartyRole_126(304476433);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_126);
      NestedParties_NoNestedPartyIDs_126.insert(NestedPartyRole_126.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_126);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_247;
        FIX::NestedPartySubID NestedPartySubID_247("STRING_2069966232");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_247);
        NstdPtysSubGrp_NoNestedPartySubIDs_247.insert(NestedPartySubID_247.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_247(1601025740);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_247);
        NstdPtysSubGrp_NoNestedPartySubIDs_247.insert(NestedPartySubIDType_247.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_247);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    // TradeCapLegUnderlyingsGrp
    // Group TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_2_1_0;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_4;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_4("STRING_1853891890");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegCFICode_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegCFICode_4.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_4("LOCALMKTDATE_1952156112");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegMaturityDate_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegMaturityDate_4.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_4("MONTHYEAR_1744593953");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegMaturityMonthYear_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegMaturityMonthYear_4.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_4("TZTIMEONLY_1273634469");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegMaturityTime_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegMaturityTime_4.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_4('1');
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegOptAttribute_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegOptAttribute_4.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_4(419801013);
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegPutOrCall_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegPutOrCall_4.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_4("STRING_1236363645");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSecurityDesc_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSecurityDesc_4.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_4("STRING_1735387689");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSecurityExchange_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSecurityExchange_4.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_4("STRING_1658528389");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSecurityID_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSecurityID_4.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_4("STRING_118824839");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSecurityIDSource_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSecurityIDSource_4.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_4("STRING_1650917736");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSecuritySubType_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSecuritySubType_4.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_4("STRING_1628670746");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSecurityType_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSecurityType_4.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_4;
      UnderlyingLegStrikePrice_4.setString("7985020");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegStrikePrice_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegStrikePrice_4.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_4("STRING_54108979");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSymbol_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSymbol_4.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_4("STRING_844423936");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSymbolSfx_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSymbolSfx_4.getString());
      all_values.push_back(UnderlyingLegInstrument_4);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_2_0_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_7;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_7("STRING_29080249");
        noUnderlyingLegSecurityAltID_2_0_2_0.set(UnderlyingLegSecurityAltID_7);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_7.insert(UnderlyingLegSecurityAltID_7.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_7("STRING_856027709");
        noUnderlyingLegSecurityAltID_2_0_2_0.set(UnderlyingLegSecurityAltIDSource_7);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_7.insert(UnderlyingLegSecurityAltIDSource_7.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_7);

        noOfLegUnderlyings_2_1_0.addGroup(noUnderlyingLegSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_2_0_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_8;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_8("STRING_108912250");
        noUnderlyingLegSecurityAltID_2_0_2_1.set(UnderlyingLegSecurityAltID_8);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_8.insert(UnderlyingLegSecurityAltID_8.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_8("STRING_799523878");
        noUnderlyingLegSecurityAltID_2_0_2_1.set(UnderlyingLegSecurityAltIDSource_8);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_8.insert(UnderlyingLegSecurityAltIDSource_8.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_8);

        noOfLegUnderlyings_2_1_0.addGroup(noUnderlyingLegSecurityAltID_2_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_2_0_2_2;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_9;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_9("STRING_46704381");
        noUnderlyingLegSecurityAltID_2_0_2_2.set(UnderlyingLegSecurityAltID_9);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_9.insert(UnderlyingLegSecurityAltID_9.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_9("STRING_2137652082");
        noUnderlyingLegSecurityAltID_2_0_2_2.set(UnderlyingLegSecurityAltIDSource_9);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_9.insert(UnderlyingLegSecurityAltIDSource_9.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_9);

        noOfLegUnderlyings_2_1_0.addGroup(noUnderlyingLegSecurityAltID_2_0_2_2);
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
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_18;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_18("MULTIPLESTRINGVALUE_RSV");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(DeskOrderHandlingInst_18.getString());
    FIX::DeskType DeskType_18("STRING_PF");
    noTrdRegTimestamps_0_0.set(DeskType_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(DeskType_18.getString());
    FIX::DeskTypeSource DeskTypeSource_18(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(DeskTypeSource_18.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_18(FIX::UTCTIMESTAMP(20, 15, 19, 20, 6, 2006));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(TrdRegTimestamp_18.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_18("STRING_1781665385");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(TrdRegTimestampOrigin_18.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_18(6);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(TrdRegTimestampType_18.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_18);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  // TrdRepIndicatorsGrp
  // Group TrdRepIndicatorsGrp.NoTrdRepIndicators
  {
    FIX50SP2::TradeCaptureReport::NoTrdRepIndicators noTrdRepIndicators_0_0;
    // TrdRepIndicatorsGrp.NoTrdRepIndicators
    multiset<string> TrdRepIndicatorsGrp_NoTrdRepIndicators_0;
    FIX::TrdRepIndicator TrdRepIndicator_0(true);
    noTrdRepIndicators_0_0.set(TrdRepIndicator_0);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_0.insert(TrdRepIndicator_0.getString());
    FIX::TrdRepPartyRole TrdRepPartyRole_0(1489677543);
    noTrdRepIndicators_0_0.set(TrdRepPartyRole_0);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_0.insert(TrdRepPartyRole_0.getString());
    all_values.push_back(TrdRepIndicatorsGrp_NoTrdRepIndicators_0);

    msg.addGroup(noTrdRepIndicators_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoTrdRepIndicators noTrdRepIndicators_0_1;
    // TrdRepIndicatorsGrp.NoTrdRepIndicators
    multiset<string> TrdRepIndicatorsGrp_NoTrdRepIndicators_1;
    FIX::TrdRepIndicator TrdRepIndicator_1(false);
    noTrdRepIndicators_0_1.set(TrdRepIndicator_1);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_1.insert(TrdRepIndicator_1.getString());
    FIX::TrdRepPartyRole TrdRepPartyRole_1(1712511139);
    noTrdRepIndicators_0_1.set(TrdRepPartyRole_1);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_1.insert(TrdRepPartyRole_1.getString());
    all_values.push_back(TrdRepIndicatorsGrp_NoTrdRepIndicators_1);

    msg.addGroup(noTrdRepIndicators_0_1);
  }
  {
    FIX50SP2::TradeCaptureReport::NoTrdRepIndicators noTrdRepIndicators_0_2;
    // TrdRepIndicatorsGrp.NoTrdRepIndicators
    multiset<string> TrdRepIndicatorsGrp_NoTrdRepIndicators_2;
    FIX::TrdRepIndicator TrdRepIndicator_2(true);
    noTrdRepIndicators_0_2.set(TrdRepIndicator_2);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_2.insert(TrdRepIndicator_2.getString());
    FIX::TrdRepPartyRole TrdRepPartyRole_2(420289819);
    noTrdRepIndicators_0_2.set(TrdRepPartyRole_2);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_2.insert(TrdRepPartyRole_2.getString());
    all_values.push_back(TrdRepIndicatorsGrp_NoTrdRepIndicators_2);

    msg.addGroup(noTrdRepIndicators_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::TradeCaptureReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_139;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_139("DATA_259520830");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_139);
    UnderlyingInstrument_139.insert(EncodedUnderlyingIssuer_139.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_139(474398798);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_139);
    UnderlyingInstrument_139.insert(EncodedUnderlyingIssuerLen_139.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_139("DATA_2038122173");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_139);
    UnderlyingInstrument_139.insert(EncodedUnderlyingSecurityDesc_139.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_139(244222795);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_139);
    UnderlyingInstrument_139.insert(EncodedUnderlyingSecurityDescLen_139.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_139;
    UnderlyingAdjustedQuantity_139.setString("5034790");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_139);
    UnderlyingInstrument_139.insert(UnderlyingAdjustedQuantity_139.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_139;
    UnderlyingAllocationPercent_139.setString("62.340000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_139);
    UnderlyingInstrument_139.insert(UnderlyingAllocationPercent_139.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_139;
    UnderlyingAttachmentPoint_139.setString("50.450000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_139);
    UnderlyingInstrument_139.insert(UnderlyingAttachmentPoint_139.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_139("STRING_1303002925");
    noUnderlyings_0_0.set(UnderlyingCFICode_139);
    UnderlyingInstrument_139.insert(UnderlyingCFICode_139.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_139("STRING_793370616");
    noUnderlyings_0_0.set(UnderlyingCPProgram_139);
    UnderlyingInstrument_139.insert(UnderlyingCPProgram_139.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_139("STRING_343303479");
    noUnderlyings_0_0.set(UnderlyingCPRegType_139);
    UnderlyingInstrument_139.insert(UnderlyingCPRegType_139.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_139;
    UnderlyingCapValue_139.setString("17655294");
    noUnderlyings_0_0.set(UnderlyingCapValue_139);
    UnderlyingInstrument_139.insert(UnderlyingCapValue_139.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_139;
    UnderlyingCashAmount_139.setString("13063664");
    noUnderlyings_0_0.set(UnderlyingCashAmount_139);
    UnderlyingInstrument_139.insert(UnderlyingCashAmount_139.getString());
    FIX::UnderlyingCashType UnderlyingCashType_139("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_139);
    UnderlyingInstrument_139.insert(UnderlyingCashType_139.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_139;
    UnderlyingContractMultiplier_139.setString("11163180");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_139);
    UnderlyingInstrument_139.insert(UnderlyingContractMultiplier_139.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_139(2123838638);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_139);
    UnderlyingInstrument_139.insert(UnderlyingContractMultiplierUnit_139.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_139("COUNTRY_37188428");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_139);
    UnderlyingInstrument_139.insert(UnderlyingCountryOfIssue_139.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_139("LOCALMKTDATE_389589191");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_139);
    UnderlyingInstrument_139.insert(UnderlyingCouponPaymentDate_139.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_139;
    UnderlyingCouponRate_139.setString("93.090000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_139);
    UnderlyingInstrument_139.insert(UnderlyingCouponRate_139.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_139("STRING_74259860");
    noUnderlyings_0_0.set(UnderlyingCreditRating_139);
    UnderlyingInstrument_139.insert(UnderlyingCreditRating_139.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_139("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_139);
    UnderlyingInstrument_139.insert(UnderlyingCurrency_139.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_139;
    UnderlyingCurrentValue_139.setString("18559252");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_139);
    UnderlyingInstrument_139.insert(UnderlyingCurrentValue_139.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_139;
    UnderlyingDetachmentPoint_139.setString("61.660000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_139);
    UnderlyingInstrument_139.insert(UnderlyingDetachmentPoint_139.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_139;
    UnderlyingDirtyPrice_139.setString("16520077");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_139);
    UnderlyingInstrument_139.insert(UnderlyingDirtyPrice_139.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_139;
    UnderlyingEndPrice_139.setString("19099079");
    noUnderlyings_0_0.set(UnderlyingEndPrice_139);
    UnderlyingInstrument_139.insert(UnderlyingEndPrice_139.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_139;
    UnderlyingEndValue_139.setString("11122600");
    noUnderlyings_0_0.set(UnderlyingEndValue_139);
    UnderlyingInstrument_139.insert(UnderlyingEndValue_139.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_139(421379866);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_139);
    UnderlyingInstrument_139.insert(UnderlyingExerciseStyle_139.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_139;
    UnderlyingFXRate_139.setString("14749354");
    noUnderlyings_0_0.set(UnderlyingFXRate_139);
    UnderlyingInstrument_139.insert(UnderlyingFXRate_139.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_139('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_139);
    UnderlyingInstrument_139.insert(UnderlyingFXRateCalc_139.getString());
    FIX::UnderlyingFactor UnderlyingFactor_139;
    UnderlyingFactor_139.setString("8416696");
    noUnderlyings_0_0.set(UnderlyingFactor_139);
    UnderlyingInstrument_139.insert(UnderlyingFactor_139.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_139(521150077);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_139);
    UnderlyingInstrument_139.insert(UnderlyingFlowScheduleType_139.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_139("STRING_832799625");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_139);
    UnderlyingInstrument_139.insert(UnderlyingInstrRegistry_139.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_139("LOCALMKTDATE_1316068484");
    noUnderlyings_0_0.set(UnderlyingIssueDate_139);
    UnderlyingInstrument_139.insert(UnderlyingIssueDate_139.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_139("STRING_411788603");
    noUnderlyings_0_0.set(UnderlyingIssuer_139);
    UnderlyingInstrument_139.insert(UnderlyingIssuer_139.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_139("STRING_1077022421");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_139);
    UnderlyingInstrument_139.insert(UnderlyingLocaleOfIssue_139.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_139("LOCALMKTDATE_1819547532");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_139);
    UnderlyingInstrument_139.insert(UnderlyingMaturityDate_139.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_139("MONTHYEAR_1158454837");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_139);
    UnderlyingInstrument_139.insert(UnderlyingMaturityMonthYear_139.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_139("TZTIMEONLY_1430157466");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_139);
    UnderlyingInstrument_139.insert(UnderlyingMaturityTime_139.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_139;
    UnderlyingNotionalPercentageOutstanding_139.setString("68.090000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_139);
    UnderlyingInstrument_139.insert(UnderlyingNotionalPercentageOutstanding_139.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_139('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_139);
    UnderlyingInstrument_139.insert(UnderlyingOptAttribute_139.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_139;
    UnderlyingOriginalNotionalPercentageOutstanding_139.setString("9.460000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_139);
    UnderlyingInstrument_139.insert(UnderlyingOriginalNotionalPercentageOutstanding_139.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_139("STRING_593112563");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_139);
    UnderlyingInstrument_139.insert(UnderlyingPriceUnitOfMeasure_139.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_139;
    UnderlyingPriceUnitOfMeasureQty_139.setString("11107082");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_139);
    UnderlyingInstrument_139.insert(UnderlyingPriceUnitOfMeasureQty_139.getString());
    FIX::UnderlyingProduct UnderlyingProduct_139(1110380545);
    noUnderlyings_0_0.set(UnderlyingProduct_139);
    UnderlyingInstrument_139.insert(UnderlyingProduct_139.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_139(1709430567);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_139);
    UnderlyingInstrument_139.insert(UnderlyingPutOrCall_139.getString());
    FIX::UnderlyingPx UnderlyingPx_139;
    UnderlyingPx_139.setString("10870632");
    noUnderlyings_0_0.set(UnderlyingPx_139);
    UnderlyingInstrument_139.insert(UnderlyingPx_139.getString());
    FIX::UnderlyingQty UnderlyingQty_139;
    UnderlyingQty_139.setString("11475689");
    noUnderlyings_0_0.set(UnderlyingQty_139);
    UnderlyingInstrument_139.insert(UnderlyingQty_139.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_139("LOCALMKTDATE_2099019758");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_139);
    UnderlyingInstrument_139.insert(UnderlyingRedemptionDate_139.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_139("STRING_1334432515");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_139);
    UnderlyingInstrument_139.insert(UnderlyingRepoCollateralSecurityType_139.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_139;
    UnderlyingRepurchaseRate_139.setString("88.340000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_139);
    UnderlyingInstrument_139.insert(UnderlyingRepurchaseRate_139.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_139(1468288378);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_139);
    UnderlyingInstrument_139.insert(UnderlyingRepurchaseTerm_139.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_139("STRING_1657488609");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_139);
    UnderlyingInstrument_139.insert(UnderlyingRestructuringType_139.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_139("STRING_930270432");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_139);
    UnderlyingInstrument_139.insert(UnderlyingSecurityDesc_139.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_139("EXCHANGE_1090870896");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_139);
    UnderlyingInstrument_139.insert(UnderlyingSecurityExchange_139.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_139("STRING_1162012744");
    noUnderlyings_0_0.set(UnderlyingSecurityID_139);
    UnderlyingInstrument_139.insert(UnderlyingSecurityID_139.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_139("STRING_692694780");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_139);
    UnderlyingInstrument_139.insert(UnderlyingSecurityIDSource_139.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_139("STRING_55647309");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_139);
    UnderlyingInstrument_139.insert(UnderlyingSecuritySubType_139.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_139("STRING_1583392611");
    noUnderlyings_0_0.set(UnderlyingSecurityType_139);
    UnderlyingInstrument_139.insert(UnderlyingSecurityType_139.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_139("STRING_20146620");
    noUnderlyings_0_0.set(UnderlyingSeniority_139);
    UnderlyingInstrument_139.insert(UnderlyingSeniority_139.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_139("STRING_628926104");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_139);
    UnderlyingInstrument_139.insert(UnderlyingSettlMethod_139.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_139(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_139);
    UnderlyingInstrument_139.insert(UnderlyingSettlementType_139.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_139;
    UnderlyingStartValue_139.setString("5412966");
    noUnderlyings_0_0.set(UnderlyingStartValue_139);
    UnderlyingInstrument_139.insert(UnderlyingStartValue_139.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_139("STRING_1461725730");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_139);
    UnderlyingInstrument_139.insert(UnderlyingStateOrProvinceOfIssue_139.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_139("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_139);
    UnderlyingInstrument_139.insert(UnderlyingStrikeCurrency_139.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_139;
    UnderlyingStrikePrice_139.setString("3912645");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_139);
    UnderlyingInstrument_139.insert(UnderlyingStrikePrice_139.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_139("STRING_1265711017");
    noUnderlyings_0_0.set(UnderlyingSymbol_139);
    UnderlyingInstrument_139.insert(UnderlyingSymbol_139.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_139("STRING_2111540138");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_139);
    UnderlyingInstrument_139.insert(UnderlyingSymbolSfx_139.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_139("STRING_1821421969");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_139);
    UnderlyingInstrument_139.insert(UnderlyingTimeUnit_139.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_139("STRING_93294179");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_139);
    UnderlyingInstrument_139.insert(UnderlyingUnitOfMeasure_139.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_139;
    UnderlyingUnitOfMeasureQty_139.setString("19158819");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_139);
    UnderlyingInstrument_139.insert(UnderlyingUnitOfMeasureQty_139.getString());
    all_values.push_back(UnderlyingInstrument_139);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_284;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_284("STRING_686406742");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_284);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_284.insert(UnderlyingSecurityAltID_284.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_284("STRING_879106512");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_284);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_284.insert(UnderlyingSecurityAltIDSource_284.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_284);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_285;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_285("STRING_410296165");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_285);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_285.insert(UnderlyingSecurityAltID_285.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_285("STRING_248353661");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_285);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_285.insert(UnderlyingSecurityAltIDSource_285.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_285);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_262;
      FIX::UnderlyingStipType UnderlyingStipType_262("STRING_1557865138");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_262);
      UnderlyingStipulations_NoUnderlyingStips_262.insert(UnderlyingStipType_262.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_262("STRING_199889771");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_262);
      UnderlyingStipulations_NoUnderlyingStips_262.insert(UnderlyingStipValue_262.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_262);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_283;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_283("STRING_632210324");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_283);
      UndlyInstrumentParties_NoUndlyInstrumentParties_283.insert(UnderlyingInstrumentPartyID_283.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_283('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_283);
      UndlyInstrumentParties_NoUndlyInstrumentParties_283.insert(UnderlyingInstrumentPartyIDSource_283.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_283(663123546);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_283);
      UndlyInstrumentParties_NoUndlyInstrumentParties_283.insert(UnderlyingInstrumentPartyRole_283.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_283);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_535;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_535("STRING_611565397");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_535);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_535.insert(UnderlyingInstrumentPartySubID_535.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_535(1825136291);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_535);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_535.insert(UnderlyingInstrumentPartySubIDType_535.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_535);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_536;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_536("STRING_107691889");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_536);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_536.insert(UnderlyingInstrumentPartySubID_536.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_536(667212706);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_536);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_536.insert(UnderlyingInstrumentPartySubIDType_536.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_536);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_537;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_537("STRING_1261045254");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_537);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_537.insert(UnderlyingInstrumentPartySubID_537.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_537(127838509);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_537);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_537.insert(UnderlyingInstrumentPartySubIDType_537.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_537);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_284;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_284("STRING_1296138810");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_284);
      UndlyInstrumentParties_NoUndlyInstrumentParties_284.insert(UnderlyingInstrumentPartyID_284.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_284('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_284);
      UndlyInstrumentParties_NoUndlyInstrumentParties_284.insert(UnderlyingInstrumentPartyIDSource_284.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_284(669135207);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_284);
      UndlyInstrumentParties_NoUndlyInstrumentParties_284.insert(UnderlyingInstrumentPartyRole_284.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_284);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_538;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_538("STRING_984787388");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_538);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_538.insert(UnderlyingInstrumentPartySubID_538.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_538(1622220508);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_538);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_538.insert(UnderlyingInstrumentPartySubIDType_538.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_538);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_539;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_539("STRING_1001645395");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_539);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_539.insert(UnderlyingInstrumentPartySubID_539.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_539(103014758);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_539);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_539.insert(UnderlyingInstrumentPartySubIDType_539.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_539);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_285;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_285("STRING_1586276999");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_285);
      UndlyInstrumentParties_NoUndlyInstrumentParties_285.insert(UnderlyingInstrumentPartyID_285.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_285('6');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_285);
      UndlyInstrumentParties_NoUndlyInstrumentParties_285.insert(UnderlyingInstrumentPartyIDSource_285.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_285(196308937);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_285);
      UndlyInstrumentParties_NoUndlyInstrumentParties_285.insert(UnderlyingInstrumentPartyRole_285.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_285);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_540;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_540("STRING_2122982984");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_540);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_540.insert(UnderlyingInstrumentPartySubID_540.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_540(882715679);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_540);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_540.insert(UnderlyingInstrumentPartySubIDType_540.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_540);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_541;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_541("STRING_86298159");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_541);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_541.insert(UnderlyingInstrumentPartySubID_541.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_541(385795501);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_541);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_541.insert(UnderlyingInstrumentPartySubIDType_541.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_541);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_542("STRING_1131069340");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_542);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542.insert(UnderlyingInstrumentPartySubID_542.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_542(2052467877);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_542);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542.insert(UnderlyingInstrumentPartySubIDType_542.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_140;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_140("DATA_1943660640");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_140);
    UnderlyingInstrument_140.insert(EncodedUnderlyingIssuer_140.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_140(1330959111);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_140);
    UnderlyingInstrument_140.insert(EncodedUnderlyingIssuerLen_140.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_140("DATA_1058102814");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_140);
    UnderlyingInstrument_140.insert(EncodedUnderlyingSecurityDesc_140.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_140(428387316);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_140);
    UnderlyingInstrument_140.insert(EncodedUnderlyingSecurityDescLen_140.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_140;
    UnderlyingAdjustedQuantity_140.setString("8516536");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_140);
    UnderlyingInstrument_140.insert(UnderlyingAdjustedQuantity_140.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_140;
    UnderlyingAllocationPercent_140.setString("63.610000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_140);
    UnderlyingInstrument_140.insert(UnderlyingAllocationPercent_140.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_140;
    UnderlyingAttachmentPoint_140.setString("80.730000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_140);
    UnderlyingInstrument_140.insert(UnderlyingAttachmentPoint_140.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_140("STRING_1463219009");
    noUnderlyings_0_1.set(UnderlyingCFICode_140);
    UnderlyingInstrument_140.insert(UnderlyingCFICode_140.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_140("STRING_1398879004");
    noUnderlyings_0_1.set(UnderlyingCPProgram_140);
    UnderlyingInstrument_140.insert(UnderlyingCPProgram_140.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_140("STRING_2098559962");
    noUnderlyings_0_1.set(UnderlyingCPRegType_140);
    UnderlyingInstrument_140.insert(UnderlyingCPRegType_140.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_140;
    UnderlyingCapValue_140.setString("21304317");
    noUnderlyings_0_1.set(UnderlyingCapValue_140);
    UnderlyingInstrument_140.insert(UnderlyingCapValue_140.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_140;
    UnderlyingCashAmount_140.setString("5124406");
    noUnderlyings_0_1.set(UnderlyingCashAmount_140);
    UnderlyingInstrument_140.insert(UnderlyingCashAmount_140.getString());
    FIX::UnderlyingCashType UnderlyingCashType_140("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_140);
    UnderlyingInstrument_140.insert(UnderlyingCashType_140.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_140;
    UnderlyingContractMultiplier_140.setString("12790868");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_140);
    UnderlyingInstrument_140.insert(UnderlyingContractMultiplier_140.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_140(2051064513);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_140);
    UnderlyingInstrument_140.insert(UnderlyingContractMultiplierUnit_140.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_140("COUNTRY_748050031");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_140);
    UnderlyingInstrument_140.insert(UnderlyingCountryOfIssue_140.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_140("LOCALMKTDATE_1889467770");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_140);
    UnderlyingInstrument_140.insert(UnderlyingCouponPaymentDate_140.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_140;
    UnderlyingCouponRate_140.setString("82.530000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_140);
    UnderlyingInstrument_140.insert(UnderlyingCouponRate_140.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_140("STRING_222786891");
    noUnderlyings_0_1.set(UnderlyingCreditRating_140);
    UnderlyingInstrument_140.insert(UnderlyingCreditRating_140.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_140("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_140);
    UnderlyingInstrument_140.insert(UnderlyingCurrency_140.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_140;
    UnderlyingCurrentValue_140.setString("18090638");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_140);
    UnderlyingInstrument_140.insert(UnderlyingCurrentValue_140.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_140;
    UnderlyingDetachmentPoint_140.setString("32.340000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_140);
    UnderlyingInstrument_140.insert(UnderlyingDetachmentPoint_140.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_140;
    UnderlyingDirtyPrice_140.setString("11876919");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_140);
    UnderlyingInstrument_140.insert(UnderlyingDirtyPrice_140.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_140;
    UnderlyingEndPrice_140.setString("10162555");
    noUnderlyings_0_1.set(UnderlyingEndPrice_140);
    UnderlyingInstrument_140.insert(UnderlyingEndPrice_140.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_140;
    UnderlyingEndValue_140.setString("13947125");
    noUnderlyings_0_1.set(UnderlyingEndValue_140);
    UnderlyingInstrument_140.insert(UnderlyingEndValue_140.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_140(2070407627);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_140);
    UnderlyingInstrument_140.insert(UnderlyingExerciseStyle_140.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_140;
    UnderlyingFXRate_140.setString("11025536");
    noUnderlyings_0_1.set(UnderlyingFXRate_140);
    UnderlyingInstrument_140.insert(UnderlyingFXRate_140.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_140('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_140);
    UnderlyingInstrument_140.insert(UnderlyingFXRateCalc_140.getString());
    FIX::UnderlyingFactor UnderlyingFactor_140;
    UnderlyingFactor_140.setString("10539933");
    noUnderlyings_0_1.set(UnderlyingFactor_140);
    UnderlyingInstrument_140.insert(UnderlyingFactor_140.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_140(1007537925);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_140);
    UnderlyingInstrument_140.insert(UnderlyingFlowScheduleType_140.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_140("STRING_1576685064");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_140);
    UnderlyingInstrument_140.insert(UnderlyingInstrRegistry_140.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_140("LOCALMKTDATE_237468782");
    noUnderlyings_0_1.set(UnderlyingIssueDate_140);
    UnderlyingInstrument_140.insert(UnderlyingIssueDate_140.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_140("STRING_2065640740");
    noUnderlyings_0_1.set(UnderlyingIssuer_140);
    UnderlyingInstrument_140.insert(UnderlyingIssuer_140.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_140("STRING_2005072381");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_140);
    UnderlyingInstrument_140.insert(UnderlyingLocaleOfIssue_140.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_140("LOCALMKTDATE_1089122394");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_140);
    UnderlyingInstrument_140.insert(UnderlyingMaturityDate_140.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_140("MONTHYEAR_1639383453");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_140);
    UnderlyingInstrument_140.insert(UnderlyingMaturityMonthYear_140.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_140("TZTIMEONLY_1848456806");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_140);
    UnderlyingInstrument_140.insert(UnderlyingMaturityTime_140.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_140;
    UnderlyingNotionalPercentageOutstanding_140.setString("77.550000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_140);
    UnderlyingInstrument_140.insert(UnderlyingNotionalPercentageOutstanding_140.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_140('8');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_140);
    UnderlyingInstrument_140.insert(UnderlyingOptAttribute_140.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_140;
    UnderlyingOriginalNotionalPercentageOutstanding_140.setString("31.200000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_140);
    UnderlyingInstrument_140.insert(UnderlyingOriginalNotionalPercentageOutstanding_140.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_140("STRING_387805822");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_140);
    UnderlyingInstrument_140.insert(UnderlyingPriceUnitOfMeasure_140.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_140;
    UnderlyingPriceUnitOfMeasureQty_140.setString("14032194");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_140);
    UnderlyingInstrument_140.insert(UnderlyingPriceUnitOfMeasureQty_140.getString());
    FIX::UnderlyingProduct UnderlyingProduct_140(1878447943);
    noUnderlyings_0_1.set(UnderlyingProduct_140);
    UnderlyingInstrument_140.insert(UnderlyingProduct_140.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_140(1666892700);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_140);
    UnderlyingInstrument_140.insert(UnderlyingPutOrCall_140.getString());
    FIX::UnderlyingPx UnderlyingPx_140;
    UnderlyingPx_140.setString("13068002");
    noUnderlyings_0_1.set(UnderlyingPx_140);
    UnderlyingInstrument_140.insert(UnderlyingPx_140.getString());
    FIX::UnderlyingQty UnderlyingQty_140;
    UnderlyingQty_140.setString("4790143");
    noUnderlyings_0_1.set(UnderlyingQty_140);
    UnderlyingInstrument_140.insert(UnderlyingQty_140.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_140("LOCALMKTDATE_1408876822");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_140);
    UnderlyingInstrument_140.insert(UnderlyingRedemptionDate_140.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_140("STRING_47684889");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_140);
    UnderlyingInstrument_140.insert(UnderlyingRepoCollateralSecurityType_140.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_140;
    UnderlyingRepurchaseRate_140.setString("12.180000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_140);
    UnderlyingInstrument_140.insert(UnderlyingRepurchaseRate_140.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_140(5022691);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_140);
    UnderlyingInstrument_140.insert(UnderlyingRepurchaseTerm_140.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_140("STRING_1039067901");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_140);
    UnderlyingInstrument_140.insert(UnderlyingRestructuringType_140.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_140("STRING_363381460");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_140);
    UnderlyingInstrument_140.insert(UnderlyingSecurityDesc_140.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_140("EXCHANGE_1424235926");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_140);
    UnderlyingInstrument_140.insert(UnderlyingSecurityExchange_140.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_140("STRING_79276201");
    noUnderlyings_0_1.set(UnderlyingSecurityID_140);
    UnderlyingInstrument_140.insert(UnderlyingSecurityID_140.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_140("STRING_1379636998");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_140);
    UnderlyingInstrument_140.insert(UnderlyingSecurityIDSource_140.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_140("STRING_671464849");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_140);
    UnderlyingInstrument_140.insert(UnderlyingSecuritySubType_140.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_140("STRING_2200181");
    noUnderlyings_0_1.set(UnderlyingSecurityType_140);
    UnderlyingInstrument_140.insert(UnderlyingSecurityType_140.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_140("STRING_334707046");
    noUnderlyings_0_1.set(UnderlyingSeniority_140);
    UnderlyingInstrument_140.insert(UnderlyingSeniority_140.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_140("STRING_304489273");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_140);
    UnderlyingInstrument_140.insert(UnderlyingSettlMethod_140.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_140(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_140);
    UnderlyingInstrument_140.insert(UnderlyingSettlementType_140.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_140;
    UnderlyingStartValue_140.setString("13422449");
    noUnderlyings_0_1.set(UnderlyingStartValue_140);
    UnderlyingInstrument_140.insert(UnderlyingStartValue_140.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_140("STRING_1881174338");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_140);
    UnderlyingInstrument_140.insert(UnderlyingStateOrProvinceOfIssue_140.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_140("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_140);
    UnderlyingInstrument_140.insert(UnderlyingStrikeCurrency_140.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_140;
    UnderlyingStrikePrice_140.setString("17387630");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_140);
    UnderlyingInstrument_140.insert(UnderlyingStrikePrice_140.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_140("STRING_235301029");
    noUnderlyings_0_1.set(UnderlyingSymbol_140);
    UnderlyingInstrument_140.insert(UnderlyingSymbol_140.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_140("STRING_752301869");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_140);
    UnderlyingInstrument_140.insert(UnderlyingSymbolSfx_140.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_140("STRING_1439736229");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_140);
    UnderlyingInstrument_140.insert(UnderlyingTimeUnit_140.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_140("STRING_640158785");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_140);
    UnderlyingInstrument_140.insert(UnderlyingUnitOfMeasure_140.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_140;
    UnderlyingUnitOfMeasureQty_140.setString("16430806");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_140);
    UnderlyingInstrument_140.insert(UnderlyingUnitOfMeasureQty_140.getString());
    all_values.push_back(UnderlyingInstrument_140);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_286;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_286("STRING_1027964607");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_286);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_286.insert(UnderlyingSecurityAltID_286.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_286("STRING_898816449");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_286);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_286.insert(UnderlyingSecurityAltIDSource_286.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_286);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_263;
      FIX::UnderlyingStipType UnderlyingStipType_263("STRING_547373659");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_263);
      UnderlyingStipulations_NoUnderlyingStips_263.insert(UnderlyingStipType_263.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_263("STRING_58133085");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_263);
      UnderlyingStipulations_NoUnderlyingStips_263.insert(UnderlyingStipValue_263.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_263);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_264;
      FIX::UnderlyingStipType UnderlyingStipType_264("STRING_1301764323");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_264);
      UnderlyingStipulations_NoUnderlyingStips_264.insert(UnderlyingStipType_264.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_264("STRING_1956250481");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_264);
      UnderlyingStipulations_NoUnderlyingStips_264.insert(UnderlyingStipValue_264.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_264);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_265;
      FIX::UnderlyingStipType UnderlyingStipType_265("STRING_105817974");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_265);
      UnderlyingStipulations_NoUnderlyingStips_265.insert(UnderlyingStipType_265.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_265("STRING_2003565541");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_265);
      UnderlyingStipulations_NoUnderlyingStips_265.insert(UnderlyingStipValue_265.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_265);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_286;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_286("STRING_1144885875");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_286);
      UndlyInstrumentParties_NoUndlyInstrumentParties_286.insert(UnderlyingInstrumentPartyID_286.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_286('2');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_286);
      UndlyInstrumentParties_NoUndlyInstrumentParties_286.insert(UnderlyingInstrumentPartyIDSource_286.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_286(1238025451);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_286);
      UndlyInstrumentParties_NoUndlyInstrumentParties_286.insert(UnderlyingInstrumentPartyRole_286.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_286);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_543("STRING_1599100351");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_543);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543.insert(UnderlyingInstrumentPartySubID_543.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_543(1909490300);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_543);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543.insert(UnderlyingInstrumentPartySubIDType_543.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_544("STRING_1226362258");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_544);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544.insert(UnderlyingInstrumentPartySubID_544.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_544(1933807398);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_544);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544.insert(UnderlyingInstrumentPartySubIDType_544.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_545("STRING_66495925");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_545);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545.insert(UnderlyingInstrumentPartySubID_545.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_545(135072110);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_545);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545.insert(UnderlyingInstrumentPartySubIDType_545.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_287;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_287("STRING_1128568722");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_287);
      UndlyInstrumentParties_NoUndlyInstrumentParties_287.insert(UnderlyingInstrumentPartyID_287.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_287('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_287);
      UndlyInstrumentParties_NoUndlyInstrumentParties_287.insert(UnderlyingInstrumentPartyIDSource_287.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_287(1428734393);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_287);
      UndlyInstrumentParties_NoUndlyInstrumentParties_287.insert(UnderlyingInstrumentPartyRole_287.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_287);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_546("STRING_1538949686");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_546);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546.insert(UnderlyingInstrumentPartySubID_546.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_546(1664035423);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_546);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546.insert(UnderlyingInstrumentPartySubIDType_546.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_547("STRING_993789007");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_547);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547.insert(UnderlyingInstrumentPartySubID_547.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_547(831202267);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_547);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547.insert(UnderlyingInstrumentPartySubIDType_547.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_548;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_548("STRING_156710560");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_548);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_548.insert(UnderlyingInstrumentPartySubID_548.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_548(489386037);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_548);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_548.insert(UnderlyingInstrumentPartySubIDType_548.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_548);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_27;
  FIX::Yield Yield_27;
  Yield_27.setString("79.680000");
  msg.set(Yield_27);
  YieldData_27.insert(Yield_27.getString());
  FIX::YieldCalcDate YieldCalcDate_27("LOCALMKTDATE_1184675167");
  msg.set(YieldCalcDate_27);
  YieldData_27.insert(YieldCalcDate_27.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_27("LOCALMKTDATE_1388202486");
  msg.set(YieldRedemptionDate_27);
  YieldData_27.insert(YieldRedemptionDate_27.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_27;
  YieldRedemptionPrice_27.setString("5982543");
  msg.set(YieldRedemptionPrice_27);
  YieldData_27.insert(YieldRedemptionPrice_27.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_27(1732048827);
  msg.set(YieldRedemptionPriceType_27);
  YieldData_27.insert(YieldRedemptionPriceType_27.getString());
  FIX::YieldType YieldType_27("STRING_LASTYEAR");
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
