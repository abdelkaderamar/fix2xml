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
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReport_0;
  FIX::AsOfIndicator AsOfIndicator_0('1');
  msg.set(AsOfIndicator_0);
  TradeCaptureReport_0.insert(AsOfIndicator_0.getString());
  FIX::AvgPx AvgPx_7;
  AvgPx_7.setString("5013914");
  msg.set(AvgPx_7);
  TradeCaptureReport_0.insert(AvgPx_7.getString());
  FIX::AvgPxIndicator AvgPxIndicator_4(2);
  msg.set(AvgPxIndicator_4);
  TradeCaptureReport_0.insert(AvgPxIndicator_4.getString());
  FIX::CalculatedCcyLastQty CalculatedCcyLastQty_1;
  CalculatedCcyLastQty_1.setString("11341071");
  msg.set(CalculatedCcyLastQty_1);
  TradeCaptureReport_0.insert(CalculatedCcyLastQty_1.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_25("LOCALMKTDATE_864435297");
  msg.set(ClearingBusinessDate_25);
  TradeCaptureReport_0.insert(ClearingBusinessDate_25.getString());
  FIX::CopyMsgIndicator CopyMsgIndicator_2(true);
  msg.set(CopyMsgIndicator_2);
  TradeCaptureReport_0.insert(CopyMsgIndicator_2.getString());
  FIX::Currency Currency_76("JPY");
  msg.set(Currency_76);
  TradeCaptureReport_0.insert(Currency_76.getString());
  FIX::CurrencyRatio CurrencyRatio_0;
  CurrencyRatio_0.setString("16636851");
  msg.set(CurrencyRatio_0);
  TradeCaptureReport_0.insert(CurrencyRatio_0.getString());
  FIX::DividendYield DividendYield_1;
  DividendYield_1.setString("61.690000");
  msg.set(DividendYield_1);
  TradeCaptureReport_0.insert(DividendYield_1.getString());
  FIX::ExecID ExecID_24("STRING_356532365");
  msg.set(ExecID_24);
  TradeCaptureReport_0.insert(ExecID_24.getString());
  FIX::ExecRestatementReason ExecRestatementReason_1(1);
  msg.set(ExecRestatementReason_1);
  TradeCaptureReport_0.insert(ExecRestatementReason_1.getString());
  FIX::ExecType ExecType_1('7');
  msg.set(ExecType_1);
  TradeCaptureReport_0.insert(ExecType_1.getString());
  FIX::FeeMultiplier FeeMultiplier_0;
  FeeMultiplier_0.setString("14102635");
  msg.set(FeeMultiplier_0);
  TradeCaptureReport_0.insert(FeeMultiplier_0.getString());
  FIX::FirmTradeID FirmTradeID_6("STRING_2082365230");
  msg.set(FirmTradeID_6);
  TradeCaptureReport_0.insert(FirmTradeID_6.getString());
  FIX::GrossTradeAmt GrossTradeAmt_5;
  GrossTradeAmt_5.setString("11239200");
  msg.set(GrossTradeAmt_5);
  TradeCaptureReport_0.insert(GrossTradeAmt_5.getString());
  FIX::LastForwardPoints LastForwardPoints_1;
  LastForwardPoints_1.setString("2781255");
  msg.set(LastForwardPoints_1);
  TradeCaptureReport_0.insert(LastForwardPoints_1.getString());
  FIX::LastMkt LastMkt_6("EXCHANGE_1498868800");
  msg.set(LastMkt_6);
  TradeCaptureReport_0.insert(LastMkt_6.getString());
  FIX::LastParPx LastParPx_8;
  LastParPx_8.setString("2589583");
  msg.set(LastParPx_8);
  TradeCaptureReport_0.insert(LastParPx_8.getString());
  FIX::LastPx LastPx_13;
  LastPx_13.setString("12762327");
  msg.set(LastPx_13);
  TradeCaptureReport_0.insert(LastPx_13.getString());
  FIX::LastQty LastQty_9;
  LastQty_9.setString("222447");
  msg.set(LastQty_9);
  TradeCaptureReport_0.insert(LastQty_9.getString());
  FIX::LastRptRequested LastRptRequested_3(true);
  msg.set(LastRptRequested_3);
  TradeCaptureReport_0.insert(LastRptRequested_3.getString());
  FIX::LastSpotRate LastSpotRate_1;
  LastSpotRate_1.setString("13068793");
  msg.set(LastSpotRate_1);
  TradeCaptureReport_0.insert(LastSpotRate_1.getString());
  FIX::LastSwapPoints LastSwapPoints_1;
  LastSwapPoints_1.setString("868020");
  msg.set(LastSwapPoints_1);
  TradeCaptureReport_0.insert(LastSwapPoints_1.getString());
  FIX::LastUpdateTime LastUpdateTime_6(FIX::UTCTIMESTAMP(17, 40, 22, 11, 4, 2009));
  msg.set(LastUpdateTime_6);
  TradeCaptureReport_0.insert(LastUpdateTime_6.getString());
  FIX::MarketID MarketID_27("EXCHANGE_233051176");
  msg.set(MarketID_27);
  TradeCaptureReport_0.insert(MarketID_27.getString());
  FIX::MarketSegmentID MarketSegmentID_27("STRING_1085994647");
  msg.set(MarketSegmentID_27);
  TradeCaptureReport_0.insert(MarketSegmentID_27.getString());
  FIX::MatchStatus MatchStatus_10('0');
  msg.set(MatchStatus_10);
  TradeCaptureReport_0.insert(MatchStatus_10.getString());
  FIX::MatchType MatchType_66("STRING_MT");
  msg.set(MatchType_66);
  TradeCaptureReport_0.insert(MatchType_66.getString());
  FIX::MessageEventSource MessageEventSource_4("STRING_1950429944");
  msg.set(MessageEventSource_4);
  TradeCaptureReport_0.insert(MessageEventSource_4.getString());
  FIX::MultiLegReportingType MultiLegReportingType_4('2');
  msg.set(MultiLegReportingType_4);
  TradeCaptureReport_0.insert(MultiLegReportingType_4.getString());
  FIX::OrigSecondaryTradeID OrigSecondaryTradeID_0("STRING_1095506437");
  msg.set(OrigSecondaryTradeID_0);
  TradeCaptureReport_0.insert(OrigSecondaryTradeID_0.getString());
  FIX::OrigTradeDate OrigTradeDate_0("LOCALMKTDATE_758359415");
  msg.set(OrigTradeDate_0);
  TradeCaptureReport_0.insert(OrigTradeDate_0.getString());
  FIX::OrigTradeHandlingInstr OrigTradeHandlingInstr_0('1');
  msg.set(OrigTradeHandlingInstr_0);
  TradeCaptureReport_0.insert(OrigTradeHandlingInstr_0.getString());
  FIX::OrigTradeID OrigTradeID_0("STRING_957278958");
  msg.set(OrigTradeID_0);
  TradeCaptureReport_0.insert(OrigTradeID_0.getString());
  FIX::PreviouslyReported PreviouslyReported_3(true);
  msg.set(PreviouslyReported_3);
  TradeCaptureReport_0.insert(PreviouslyReported_3.getString());
  FIX::PriceType PriceType_50(9);
  msg.set(PriceType_50);
  TradeCaptureReport_0.insert(PriceType_50.getString());
  FIX::PublishTrdIndicator PublishTrdIndicator_0(false);
  msg.set(PublishTrdIndicator_0);
  TradeCaptureReport_0.insert(PublishTrdIndicator_0.getString());
  FIX::QtyType QtyType_29(1);
  msg.set(QtyType_29);
  TradeCaptureReport_0.insert(QtyType_29.getString());
  FIX::RejectText RejectText_0("STRING_427467286");
  msg.set(RejectText_0);
  TradeCaptureReport_0.insert(RejectText_0.getString());
  FIX::ReportedPxDiff ReportedPxDiff_0(false);
  msg.set(ReportedPxDiff_0);
  TradeCaptureReport_0.insert(ReportedPxDiff_0.getString());
  FIX::RiskFreeRate RiskFreeRate_3;
  RiskFreeRate_3.setString("6557972");
  msg.set(RiskFreeRate_3);
  TradeCaptureReport_0.insert(RiskFreeRate_3.getString());
  FIX::RndPx RndPx_3;
  RndPx_3.setString("19263360");
  msg.set(RndPx_3);
  TradeCaptureReport_0.insert(RndPx_3.getString());
  FIX::SecondaryExecID SecondaryExecID_7("STRING_1746797939");
  msg.set(SecondaryExecID_7);
  TradeCaptureReport_0.insert(SecondaryExecID_7.getString());
  FIX::SecondaryFirmTradeID SecondaryFirmTradeID_0("STRING_1932030000");
  msg.set(SecondaryFirmTradeID_0);
  TradeCaptureReport_0.insert(SecondaryFirmTradeID_0.getString());
  FIX::SecondaryTradeID SecondaryTradeID_0("STRING_1948580836");
  msg.set(SecondaryTradeID_0);
  TradeCaptureReport_0.insert(SecondaryTradeID_0.getString());
  FIX::SecondaryTradeReportID SecondaryTradeReportID_14("STRING_915657576");
  msg.set(SecondaryTradeReportID_14);
  TradeCaptureReport_0.insert(SecondaryTradeReportID_14.getString());
  FIX::SecondaryTradeReportRefID SecondaryTradeReportRefID_0("STRING_1091425682");
  msg.set(SecondaryTradeReportRefID_0);
  TradeCaptureReport_0.insert(SecondaryTradeReportRefID_0.getString());
  FIX::SecondaryTrdType SecondaryTrdType_0(2035382896);
  msg.set(SecondaryTrdType_0);
  TradeCaptureReport_0.insert(SecondaryTrdType_0.getString());
  FIX::SettlCurrency SettlCurrency_36("CAN");
  msg.set(SettlCurrency_36);
  TradeCaptureReport_0.insert(SettlCurrency_36.getString());
  FIX::SettlDate SettlDate_54("LOCALMKTDATE_182194308");
  msg.set(SettlDate_54);
  TradeCaptureReport_0.insert(SettlDate_54.getString());
  FIX::SettlSessID SettlSessID_12("STRING_EOD");
  msg.set(SettlSessID_12);
  TradeCaptureReport_0.insert(SettlSessID_12.getString());
  FIX::SettlSessSubID SettlSessSubID_11("STRING_699788250");
  msg.set(SettlSessSubID_11);
  TradeCaptureReport_0.insert(SettlSessSubID_11.getString());
  FIX::SettlType SettlType_38("STRING_3");
  msg.set(SettlType_38);
  TradeCaptureReport_0.insert(SettlType_38.getString());
  FIX::ShortSaleReason ShortSaleReason_0(4);
  msg.set(ShortSaleReason_0);
  TradeCaptureReport_0.insert(ShortSaleReason_0.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_13('1');
  msg.set(SubscriptionRequestType_13);
  TradeCaptureReport_0.insert(SubscriptionRequestType_13.getString());
  FIX::TZTransactTime TZTransactTime_0("TZTIMESTAMP_1852792202");
  msg.set(TZTransactTime_0);
  TradeCaptureReport_0.insert(TZTransactTime_0.getString());
  FIX::TierCode TierCode_0("STRING_975537936");
  msg.set(TierCode_0);
  TradeCaptureReport_0.insert(TierCode_0.getString());
  FIX::TotNumTradeReports TotNumTradeReports_0(152514064);
  msg.set(TotNumTradeReports_0);
  TradeCaptureReport_0.insert(TotNumTradeReports_0.getString());
  FIX::TradeDate TradeDate_28("LOCALMKTDATE_1655738499");
  msg.set(TradeDate_28);
  TradeCaptureReport_0.insert(TradeDate_28.getString());
  FIX::TradeHandlingInstr TradeHandlingInstr_0('4');
  msg.set(TradeHandlingInstr_0);
  TradeCaptureReport_0.insert(TradeHandlingInstr_0.getString());
  FIX::TradeID TradeID_7("STRING_1248020501");
  msg.set(TradeID_7);
  TradeCaptureReport_0.insert(TradeID_7.getString());
  FIX::TradeLegRefID TradeLegRefID_0("STRING_266614266");
  msg.set(TradeLegRefID_0);
  TradeCaptureReport_0.insert(TradeLegRefID_0.getString());
  FIX::TradeLinkID TradeLinkID_0("STRING_1079968672");
  msg.set(TradeLinkID_0);
  TradeCaptureReport_0.insert(TradeLinkID_0.getString());
  FIX::TradePublishIndicator TradePublishIndicator_0(0);
  msg.set(TradePublishIndicator_0);
  TradeCaptureReport_0.insert(TradePublishIndicator_0.getString());
  FIX::TradeReportID TradeReportID_14("STRING_1381506046");
  msg.set(TradeReportID_14);
  TradeCaptureReport_0.insert(TradeReportID_14.getString());
  FIX::TradeReportRefID TradeReportRefID_0("STRING_1572554377");
  msg.set(TradeReportRefID_0);
  TradeCaptureReport_0.insert(TradeReportRefID_0.getString());
  FIX::TradeReportTransType TradeReportTransType_0(5);
  msg.set(TradeReportTransType_0);
  TradeCaptureReport_0.insert(TradeReportTransType_0.getString());
  FIX::TradeReportType TradeReportType_0(12);
  msg.set(TradeReportType_0);
  TradeCaptureReport_0.insert(TradeReportType_0.getString());
  FIX::TradeRequestID TradeRequestID_0("STRING_2000021663");
  msg.set(TradeRequestID_0);
  TradeCaptureReport_0.insert(TradeRequestID_0.getString());
  FIX::TransactTime TransactTime_73(FIX::UTCTIMESTAMP(6, 42, 49, 14, 3, 2005));
  msg.set(TransactTime_73);
  TradeCaptureReport_0.insert(TransactTime_73.getString());
  FIX::TransferReason TransferReason_0("STRING_1143463416");
  msg.set(TransferReason_0);
  TradeCaptureReport_0.insert(TransferReason_0.getString());
  FIX::TrdMatchID TrdMatchID_1("STRING_1467870538");
  msg.set(TrdMatchID_1);
  TradeCaptureReport_0.insert(TrdMatchID_1.getString());
  FIX::TrdRptStatus TrdRptStatus_0(0);
  msg.set(TrdRptStatus_0);
  TradeCaptureReport_0.insert(TrdRptStatus_0.getString());
  FIX::TrdSubType TrdSubType_3(26);
  msg.set(TrdSubType_3);
  TradeCaptureReport_0.insert(TrdSubType_3.getString());
  FIX::TrdType TrdType_6(2);
  msg.set(TrdType_6);
  TradeCaptureReport_0.insert(TrdType_6.getString());
  FIX::UnderlyingSettlementDate UnderlyingSettlementDate_2("LOCALMKTDATE_1531119754");
  msg.set(UnderlyingSettlementDate_2);
  TradeCaptureReport_0.insert(UnderlyingSettlementDate_2.getString());
  FIX::UnderlyingTradingSessionID UnderlyingTradingSessionID_0("STRING_1851878358");
  msg.set(UnderlyingTradingSessionID_0);
  TradeCaptureReport_0.insert(UnderlyingTradingSessionID_0.getString());
  FIX::UnderlyingTradingSessionSubID UnderlyingTradingSessionSubID_0("STRING_269378754");
  msg.set(UnderlyingTradingSessionSubID_0);
  TradeCaptureReport_0.insert(UnderlyingTradingSessionSubID_0.getString());
  FIX::UnsolicitedIndicator UnsolicitedIndicator_3(false);
  msg.set(UnsolicitedIndicator_3);
  TradeCaptureReport_0.insert(UnsolicitedIndicator_3.getString());
  FIX::VenueType VenueType_0('E');
  msg.set(VenueType_0);
  TradeCaptureReport_0.insert(VenueType_0.getString());
  FIX::Volatility Volatility_1;
  Volatility_1.setString("21221709");
  msg.set(Volatility_1);
  TradeCaptureReport_0.insert(Volatility_1.getString());
  all_values.push_back(TradeCaptureReport_0);

  all_compo_names.insert("TradeCaptureReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_19;
  FIX::ApplID ApplID_19("STRING_229771547");
  msg.set(ApplID_19);
  ApplicationSequenceControl_19.insert(ApplID_19.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_19(789748201);
  msg.set(ApplLastSeqNum_19);
  ApplicationSequenceControl_19.insert(ApplLastSeqNum_19.getString());
  FIX::ApplResendFlag ApplResendFlag_19(true);
  msg.set(ApplResendFlag_19);
  ApplicationSequenceControl_19.insert(ApplResendFlag_19.getString());
  FIX::ApplSeqNum ApplSeqNum_19(1499424117);
  msg.set(ApplSeqNum_19);
  ApplicationSequenceControl_19.insert(ApplSeqNum_19.getString());
  all_values.push_back(ApplicationSequenceControl_19);
  all_compo_names.insert("ApplicationSequenceControl");

  // FinancingDetails
  multiset<string> FinancingDetails_30;
  FIX::AgreementCurrency AgreementCurrency_30("JPY");
  msg.set(AgreementCurrency_30);
  FinancingDetails_30.insert(AgreementCurrency_30.getString());
  FIX::AgreementDate AgreementDate_30("LOCALMKTDATE_431909141");
  msg.set(AgreementDate_30);
  FinancingDetails_30.insert(AgreementDate_30.getString());
  FIX::AgreementDesc AgreementDesc_30("STRING_2095584513");
  msg.set(AgreementDesc_30);
  FinancingDetails_30.insert(AgreementDesc_30.getString());
  FIX::AgreementID AgreementID_30("STRING_1131062472");
  msg.set(AgreementID_30);
  FinancingDetails_30.insert(AgreementID_30.getString());
  FIX::DeliveryType DeliveryType_30(2);
  msg.set(DeliveryType_30);
  FinancingDetails_30.insert(DeliveryType_30.getString());
  FIX::EndDate EndDate_30("LOCALMKTDATE_369836292");
  msg.set(EndDate_30);
  FinancingDetails_30.insert(EndDate_30.getString());
  FIX::MarginRatio MarginRatio_30;
  MarginRatio_30.setString("65.640000");
  msg.set(MarginRatio_30);
  FinancingDetails_30.insert(MarginRatio_30.getString());
  FIX::StartDate StartDate_30("LOCALMKTDATE_1857001534");
  msg.set(StartDate_30);
  FinancingDetails_30.insert(StartDate_30.getString());
  FIX::TerminationType TerminationType_30(3);
  msg.set(TerminationType_30);
  FinancingDetails_30.insert(TerminationType_30.getString());
  all_values.push_back(FinancingDetails_30);
  all_compo_names.insert("FinancingDetails");

  // Instrument
  multiset<string> Instrument_100;
  FIX::AttachmentPoint AttachmentPoint_100;
  AttachmentPoint_100.setString("79.470000");
  msg.set(AttachmentPoint_100);
  Instrument_100.insert(AttachmentPoint_100.getString());
  FIX::CFICode CFICode_105("STRING_1488391988");
  msg.set(CFICode_105);
  Instrument_100.insert(CFICode_105.getString());
  FIX::CPProgram CPProgram_100(2);
  msg.set(CPProgram_100);
  Instrument_100.insert(CPProgram_100.getString());
  FIX::CPRegType CPRegType_100("STRING_1062285681");
  msg.set(CPRegType_100);
  Instrument_100.insert(CPRegType_100.getString());
  FIX::CapPrice CapPrice_100;
  CapPrice_100.setString("9208796");
  msg.set(CapPrice_100);
  Instrument_100.insert(CapPrice_100.getString());
  FIX::ContractMultiplier ContractMultiplier_100;
  ContractMultiplier_100.setString("19178803");
  msg.set(ContractMultiplier_100);
  Instrument_100.insert(ContractMultiplier_100.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_100(2);
  msg.set(ContractMultiplierUnit_100);
  Instrument_100.insert(ContractMultiplierUnit_100.getString());
  FIX::ContractSettlMonth ContractSettlMonth_100("MONTHYEAR_241266521");
  msg.set(ContractSettlMonth_100);
  Instrument_100.insert(ContractSettlMonth_100.getString());
  FIX::CountryOfIssue CountryOfIssue_100("COUNTRY_621962416");
  msg.set(CountryOfIssue_100);
  Instrument_100.insert(CountryOfIssue_100.getString());
  FIX::CouponPaymentDate CouponPaymentDate_100("LOCALMKTDATE_1210355558");
  msg.set(CouponPaymentDate_100);
  Instrument_100.insert(CouponPaymentDate_100.getString());
  FIX::CouponRate CouponRate_100;
  CouponRate_100.setString("13.680000");
  msg.set(CouponRate_100);
  Instrument_100.insert(CouponRate_100.getString());
  FIX::CreditRating CreditRating_100("STRING_5598523");
  msg.set(CreditRating_100);
  Instrument_100.insert(CreditRating_100.getString());
  FIX::DatedDate DatedDate_100("LOCALMKTDATE_914750268");
  msg.set(DatedDate_100);
  Instrument_100.insert(DatedDate_100.getString());
  FIX::DetachmentPoint DetachmentPoint_100;
  DetachmentPoint_100.setString("64.740000");
  msg.set(DetachmentPoint_100);
  Instrument_100.insert(DetachmentPoint_100.getString());
  FIX::EncodedIssuer EncodedIssuer_100("DATA_1407315782");
  msg.set(EncodedIssuer_100);
  Instrument_100.insert(EncodedIssuer_100.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_100(1551984405);
  msg.set(EncodedIssuerLen_100);
  Instrument_100.insert(EncodedIssuerLen_100.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_100("DATA_2135397431");
  msg.set(EncodedSecurityDesc_100);
  Instrument_100.insert(EncodedSecurityDesc_100.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_100(1637087329);
  msg.set(EncodedSecurityDescLen_100);
  Instrument_100.insert(EncodedSecurityDescLen_100.getString());
  FIX::ExerciseStyle ExerciseStyle_100(2);
  msg.set(ExerciseStyle_100);
  Instrument_100.insert(ExerciseStyle_100.getString());
  FIX::Factor Factor_100;
  Factor_100.setString("16183395");
  msg.set(Factor_100);
  Instrument_100.insert(Factor_100.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_100(true);
  msg.set(FlexProductEligibilityIndicator_100);
  Instrument_100.insert(FlexProductEligibilityIndicator_100.getString());
  FIX::FlexibleIndicator FlexibleIndicator_100(true);
  msg.set(FlexibleIndicator_100);
  Instrument_100.insert(FlexibleIndicator_100.getString());
  FIX::FloorPrice FloorPrice_100;
  FloorPrice_100.setString("13678960");
  msg.set(FloorPrice_100);
  Instrument_100.insert(FloorPrice_100.getString());
  FIX::FlowScheduleType FlowScheduleType_100(4);
  msg.set(FlowScheduleType_100);
  Instrument_100.insert(FlowScheduleType_100.getString());
  FIX::InstrRegistry InstrRegistry_100("STRING_32634878");
  msg.set(InstrRegistry_100);
  Instrument_100.insert(InstrRegistry_100.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_100('3');
  msg.set(InstrmtAssignmentMethod_100);
  Instrument_100.insert(InstrmtAssignmentMethod_100.getString());
  FIX::InterestAccrualDate InterestAccrualDate_100("LOCALMKTDATE_1277916810");
  msg.set(InterestAccrualDate_100);
  Instrument_100.insert(InterestAccrualDate_100.getString());
  FIX::IssueDate IssueDate_100("LOCALMKTDATE_402471170");
  msg.set(IssueDate_100);
  Instrument_100.insert(IssueDate_100.getString());
  FIX::Issuer Issuer_100("STRING_1094231406");
  msg.set(Issuer_100);
  Instrument_100.insert(Issuer_100.getString());
  FIX::ListMethod ListMethod_100(0);
  msg.set(ListMethod_100);
  Instrument_100.insert(ListMethod_100.getString());
  FIX::LocaleOfIssue LocaleOfIssue_100("STRING_534398873");
  msg.set(LocaleOfIssue_100);
  Instrument_100.insert(LocaleOfIssue_100.getString());
  FIX::MaturityDate MaturityDate_100("LOCALMKTDATE_2104479353");
  msg.set(MaturityDate_100);
  Instrument_100.insert(MaturityDate_100.getString());
  FIX::MaturityMonthYear MaturityMonthYear_100("MONTHYEAR_328343036");
  msg.set(MaturityMonthYear_100);
  Instrument_100.insert(MaturityMonthYear_100.getString());
  FIX::MaturityTime MaturityTime_100("TZTIMEONLY_27732277");
  msg.set(MaturityTime_100);
  Instrument_100.insert(MaturityTime_100.getString());
  FIX::MinPriceIncrement MinPriceIncrement_100;
  MinPriceIncrement_100.setString("10192813");
  msg.set(MinPriceIncrement_100);
  Instrument_100.insert(MinPriceIncrement_100.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_100;
  MinPriceIncrementAmount_100.setString("12492226");
  msg.set(MinPriceIncrementAmount_100);
  Instrument_100.insert(MinPriceIncrementAmount_100.getString());
  FIX::NTPositionLimit NTPositionLimit_100(1945612606);
  msg.set(NTPositionLimit_100);
  Instrument_100.insert(NTPositionLimit_100.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_100;
  NotionalPercentageOutstanding_100.setString("68.370000");
  msg.set(NotionalPercentageOutstanding_100);
  Instrument_100.insert(NotionalPercentageOutstanding_100.getString());
  FIX::OptAttribute OptAttribute_100('1');
  msg.set(OptAttribute_100);
  Instrument_100.insert(OptAttribute_100.getString());
  FIX::OptPayoutAmount OptPayoutAmount_100;
  OptPayoutAmount_100.setString("4200913");
  msg.set(OptPayoutAmount_100);
  Instrument_100.insert(OptPayoutAmount_100.getString());
  FIX::OptPayoutType OptPayoutType_100(1);
  msg.set(OptPayoutType_100);
  Instrument_100.insert(OptPayoutType_100.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_100;
  OriginalNotionalPercentageOutstanding_100.setString("69.070000");
  msg.set(OriginalNotionalPercentageOutstanding_100);
  Instrument_100.insert(OriginalNotionalPercentageOutstanding_100.getString());
  FIX::Pool Pool_100("STRING_425689898");
  msg.set(Pool_100);
  Instrument_100.insert(Pool_100.getString());
  FIX::PositionLimit PositionLimit_100(1055169015);
  msg.set(PositionLimit_100);
  Instrument_100.insert(PositionLimit_100.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_100("STRING_INT");
  msg.set(PriceQuoteMethod_100);
  Instrument_100.insert(PriceQuoteMethod_100.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_100("STRING_1833005680");
  msg.set(PriceUnitOfMeasure_100);
  Instrument_100.insert(PriceUnitOfMeasure_100.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_100;
  PriceUnitOfMeasureQty_100.setString("4596697");
  msg.set(PriceUnitOfMeasureQty_100);
  Instrument_100.insert(PriceUnitOfMeasureQty_100.getString());
  FIX::Product Product_108(1);
  msg.set(Product_108);
  Instrument_100.insert(Product_108.getString());
  FIX::ProductComplex ProductComplex_100("STRING_1322609361");
  msg.set(ProductComplex_100);
  Instrument_100.insert(ProductComplex_100.getString());
  FIX::PutOrCall PutOrCall_100(1);
  msg.set(PutOrCall_100);
  Instrument_100.insert(PutOrCall_100.getString());
  FIX::RedemptionDate RedemptionDate_100("LOCALMKTDATE_706333109");
  msg.set(RedemptionDate_100);
  Instrument_100.insert(RedemptionDate_100.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_100("STRING_164153511");
  msg.set(RepoCollateralSecurityType_100);
  Instrument_100.insert(RepoCollateralSecurityType_100.getString());
  FIX::RepurchaseRate RepurchaseRate_100;
  RepurchaseRate_100.setString("27.440000");
  msg.set(RepurchaseRate_100);
  Instrument_100.insert(RepurchaseRate_100.getString());
  FIX::RepurchaseTerm RepurchaseTerm_100(2074229126);
  msg.set(RepurchaseTerm_100);
  Instrument_100.insert(RepurchaseTerm_100.getString());
  FIX::RestructuringType RestructuringType_100("STRING_MM");
  msg.set(RestructuringType_100);
  Instrument_100.insert(RestructuringType_100.getString());
  FIX::SecurityDesc SecurityDesc_100("STRING_771087622");
  msg.set(SecurityDesc_100);
  Instrument_100.insert(SecurityDesc_100.getString());
  FIX::SecurityExchange SecurityExchange_100("EXCHANGE_278220320");
  msg.set(SecurityExchange_100);
  Instrument_100.insert(SecurityExchange_100.getString());
  FIX::SecurityGroup SecurityGroup_100("STRING_715523612");
  msg.set(SecurityGroup_100);
  Instrument_100.insert(SecurityGroup_100.getString());
  FIX::SecurityID SecurityID_100("STRING_1173558792");
  msg.set(SecurityID_100);
  Instrument_100.insert(SecurityID_100.getString());
  FIX::SecurityIDSource SecurityIDSource_100("STRING_A");
  msg.set(SecurityIDSource_100);
  Instrument_100.insert(SecurityIDSource_100.getString());
  FIX::SecurityStatus SecurityStatus_101("STRING_1");
  msg.set(SecurityStatus_101);
  Instrument_100.insert(SecurityStatus_101.getString());
  FIX::SecuritySubType SecuritySubType_104("STRING_1707957665");
  msg.set(SecuritySubType_104);
  Instrument_100.insert(SecuritySubType_104.getString());
  FIX::SecurityType SecurityType_108("STRING_XCN");
  msg.set(SecurityType_108);
  Instrument_100.insert(SecurityType_108.getString());
  FIX::Seniority Seniority_100("STRING_SD");
  msg.set(Seniority_100);
  Instrument_100.insert(Seniority_100.getString());
  FIX::SettlMethod SettlMethod_100('C');
  msg.set(SettlMethod_100);
  Instrument_100.insert(SettlMethod_100.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_100("STRING_201245171");
  msg.set(SettleOnOpenFlag_100);
  Instrument_100.insert(SettleOnOpenFlag_100.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_100("STRING_1133040363");
  msg.set(StateOrProvinceOfIssue_100);
  Instrument_100.insert(StateOrProvinceOfIssue_100.getString());
  FIX::StrikeCurrency StrikeCurrency_100("GBP");
  msg.set(StrikeCurrency_100);
  Instrument_100.insert(StrikeCurrency_100.getString());
  FIX::StrikeMultiplier StrikeMultiplier_100;
  StrikeMultiplier_100.setString("4760459");
  msg.set(StrikeMultiplier_100);
  Instrument_100.insert(StrikeMultiplier_100.getString());
  FIX::StrikePrice StrikePrice_100;
  StrikePrice_100.setString("19539102");
  msg.set(StrikePrice_100);
  Instrument_100.insert(StrikePrice_100.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_100(1);
  msg.set(StrikePriceBoundaryMethod_100);
  Instrument_100.insert(StrikePriceBoundaryMethod_100.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_100;
  StrikePriceBoundaryPrecision_100.setString("28.100000");
  msg.set(StrikePriceBoundaryPrecision_100);
  Instrument_100.insert(StrikePriceBoundaryPrecision_100.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_100(3);
  msg.set(StrikePriceDeterminationMethod_100);
  Instrument_100.insert(StrikePriceDeterminationMethod_100.getString());
  FIX::StrikeValue StrikeValue_100;
  StrikeValue_100.setString("3268961");
  msg.set(StrikeValue_100);
  Instrument_100.insert(StrikeValue_100.getString());
  FIX::Symbol Symbol_100("STRING_810462544");
  msg.set(Symbol_100);
  Instrument_100.insert(Symbol_100.getString());
  FIX::SymbolSfx SymbolSfx_100("STRING_CD");
  msg.set(SymbolSfx_100);
  Instrument_100.insert(SymbolSfx_100.getString());
  FIX::TimeUnit TimeUnit_100("STRING_Wk");
  msg.set(TimeUnit_100);
  Instrument_100.insert(TimeUnit_100.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_100(2);
  msg.set(UnderlyingPriceDeterminationMethod_100);
  Instrument_100.insert(UnderlyingPriceDeterminationMethod_100.getString());
  FIX::UnitOfMeasure UnitOfMeasure_100("STRING_MMbbl");
  msg.set(UnitOfMeasure_100);
  Instrument_100.insert(UnitOfMeasure_100.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_100;
  UnitOfMeasureQty_100.setString("14404846");
  msg.set(UnitOfMeasureQty_100);
  Instrument_100.insert(UnitOfMeasureQty_100.getString());
  FIX::ValuationMethod ValuationMethod_100("STRING_EQTY");
  msg.set(ValuationMethod_100);
  Instrument_100.insert(ValuationMethod_100.getString());
  all_values.push_back(Instrument_100);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_200;
    FIX::ComplexEventCondition ComplexEventCondition_200(2);
    noComplexEvents_0_0.set(ComplexEventCondition_200);
    ComplexEvents_NoComplexEvents_200.insert(ComplexEventCondition_200.getString());
    FIX::ComplexEventPrice ComplexEventPrice_200;
    ComplexEventPrice_200.setString("5315346");
    noComplexEvents_0_0.set(ComplexEventPrice_200);
    ComplexEvents_NoComplexEvents_200.insert(ComplexEventPrice_200.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_200(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_200);
    ComplexEvents_NoComplexEvents_200.insert(ComplexEventPriceBoundaryMethod_200.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_200;
    ComplexEventPriceBoundaryPrecision_200.setString("13.450000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_200);
    ComplexEvents_NoComplexEvents_200.insert(ComplexEventPriceBoundaryPrecision_200.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_200(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_200);
    ComplexEvents_NoComplexEvents_200.insert(ComplexEventPriceTimeType_200.getString());
    FIX::ComplexEventType ComplexEventType_200(9);
    noComplexEvents_0_0.set(ComplexEventType_200);
    ComplexEvents_NoComplexEvents_200.insert(ComplexEventType_200.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_200;
    ComplexOptPayoutAmount_200.setString("19761001");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_200);
    ComplexEvents_NoComplexEvents_200.insert(ComplexOptPayoutAmount_200.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_200);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_400;
      FIX::ComplexEventEndDate ComplexEventEndDate_400(FIX::UTCTIMESTAMP(3, 41, 42, 10, 5, 2003));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_400);
      ComplexEventDates_NoComplexEventDates_400.insert(ComplexEventEndDate_400.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_400(FIX::UTCTIMESTAMP(5, 59, 11, 24, 2, 2003));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_400);
      ComplexEventDates_NoComplexEventDates_400.insert(ComplexEventStartDate_400.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_400);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_813;
        FIX::ComplexEventEndTime ComplexEventEndTime_813(FIX::UTCTIMEONLY(15, 39, 7));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_813);
        ComplexEventTimes_NoComplexEventTimes_813.insert(ComplexEventEndTime_813.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_813(FIX::UTCTIMEONLY(15, 37, 16));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_813);
        ComplexEventTimes_NoComplexEventTimes_813.insert(ComplexEventStartTime_813.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_813);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_401;
      FIX::ComplexEventEndDate ComplexEventEndDate_401(FIX::UTCTIMESTAMP(14, 48, 28, 4, 10, 2008));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_401);
      ComplexEventDates_NoComplexEventDates_401.insert(ComplexEventEndDate_401.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_401(FIX::UTCTIMESTAMP(3, 45, 37, 21, 12, 2004));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_401);
      ComplexEventDates_NoComplexEventDates_401.insert(ComplexEventStartDate_401.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_401);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_814;
        FIX::ComplexEventEndTime ComplexEventEndTime_814(FIX::UTCTIMEONLY(3, 21, 41));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_814);
        ComplexEventTimes_NoComplexEventTimes_814.insert(ComplexEventEndTime_814.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_814(FIX::UTCTIMEONLY(11, 38, 31));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_814);
        ComplexEventTimes_NoComplexEventTimes_814.insert(ComplexEventStartTime_814.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_814);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_815;
        FIX::ComplexEventEndTime ComplexEventEndTime_815(FIX::UTCTIMEONLY(5, 10, 27));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_815);
        ComplexEventTimes_NoComplexEventTimes_815.insert(ComplexEventEndTime_815.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_815(FIX::UTCTIMEONLY(1, 57, 55));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_815);
        ComplexEventTimes_NoComplexEventTimes_815.insert(ComplexEventStartTime_815.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_815);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradeCaptureReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_199;
    FIX::EventDate EventDate_199("LOCALMKTDATE_2109668303");
    noEvents_0_0.set(EventDate_199);
    EvntGrp_NoEvents_199.insert(EventDate_199.getString());
    FIX::EventPx EventPx_199;
    EventPx_199.setString("14330397");
    noEvents_0_0.set(EventPx_199);
    EvntGrp_NoEvents_199.insert(EventPx_199.getString());
    FIX::EventText EventText_199("STRING_1083324632");
    noEvents_0_0.set(EventText_199);
    EvntGrp_NoEvents_199.insert(EventText_199.getString());
    FIX::EventTime EventTime_199(FIX::UTCTIMESTAMP(13, 10, 40, 4, 12, 2009));
    noEvents_0_0.set(EventTime_199);
    EvntGrp_NoEvents_199.insert(EventTime_199.getString());
    FIX::EventType EventType_199(2);
    noEvents_0_0.set(EventType_199);
    EvntGrp_NoEvents_199.insert(EventType_199.getString());
    all_values.push_back(EvntGrp_NoEvents_199);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_209;
    FIX::InstrumentPartyID InstrumentPartyID_209("STRING_33018383");
    noInstrumentParties_0_0.set(InstrumentPartyID_209);
    InstrumentParties_NoInstrumentParties_209.insert(InstrumentPartyID_209.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_209('8');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_209);
    InstrumentParties_NoInstrumentParties_209.insert(InstrumentPartyIDSource_209.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_209(1866408173);
    noInstrumentParties_0_0.set(InstrumentPartyRole_209);
    InstrumentParties_NoInstrumentParties_209.insert(InstrumentPartyRole_209.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_209);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_407;
      FIX::InstrumentPartySubID InstrumentPartySubID_407("STRING_348939269");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_407);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_407.insert(InstrumentPartySubID_407.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_407(2098979195);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_407);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_407.insert(InstrumentPartySubIDType_407.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_407);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_408;
      FIX::InstrumentPartySubID InstrumentPartySubID_408("STRING_1938764406");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_408);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_408.insert(InstrumentPartySubID_408.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_408(1989939592);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_408);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_408.insert(InstrumentPartySubIDType_408.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_408);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_409;
      FIX::InstrumentPartySubID InstrumentPartySubID_409("STRING_733725425");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_409);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_409.insert(InstrumentPartySubID_409.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_409(2097468397);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_409);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_409.insert(InstrumentPartySubIDType_409.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_409);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_210;
    FIX::InstrumentPartyID InstrumentPartyID_210("STRING_167761144");
    noInstrumentParties_0_1.set(InstrumentPartyID_210);
    InstrumentParties_NoInstrumentParties_210.insert(InstrumentPartyID_210.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_210('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_210);
    InstrumentParties_NoInstrumentParties_210.insert(InstrumentPartyIDSource_210.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_210(1190601879);
    noInstrumentParties_0_1.set(InstrumentPartyRole_210);
    InstrumentParties_NoInstrumentParties_210.insert(InstrumentPartyRole_210.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_210);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_410;
      FIX::InstrumentPartySubID InstrumentPartySubID_410("STRING_645358050");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_410);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_410.insert(InstrumentPartySubID_410.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_410(658649481);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_410);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_410.insert(InstrumentPartySubIDType_410.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_410);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_411;
      FIX::InstrumentPartySubID InstrumentPartySubID_411("STRING_1466410829");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_411);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_411.insert(InstrumentPartySubID_411.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_411(271926498);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_411);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_411.insert(InstrumentPartySubIDType_411.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_411);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_412;
      FIX::InstrumentPartySubID InstrumentPartySubID_412("STRING_533064925");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_412);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_412.insert(InstrumentPartySubID_412.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_412(1428595484);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_412);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_412.insert(InstrumentPartySubIDType_412.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_412);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::TradeCaptureReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_211;
    FIX::InstrumentPartyID InstrumentPartyID_211("STRING_1704966294");
    noInstrumentParties_0_2.set(InstrumentPartyID_211);
    InstrumentParties_NoInstrumentParties_211.insert(InstrumentPartyID_211.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_211('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_211);
    InstrumentParties_NoInstrumentParties_211.insert(InstrumentPartyIDSource_211.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_211(1919619868);
    noInstrumentParties_0_2.set(InstrumentPartyRole_211);
    InstrumentParties_NoInstrumentParties_211.insert(InstrumentPartyRole_211.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_211);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_413;
      FIX::InstrumentPartySubID InstrumentPartySubID_413("STRING_1589756219");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_413);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_413.insert(InstrumentPartySubID_413.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_413(826723380);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_413);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_413.insert(InstrumentPartySubIDType_413.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_413);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_414;
      FIX::InstrumentPartySubID InstrumentPartySubID_414("STRING_743676436");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_414);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_414.insert(InstrumentPartySubID_414.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_414(1989739066);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_414);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_414.insert(InstrumentPartySubIDType_414.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_414);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_415;
      FIX::InstrumentPartySubID InstrumentPartySubID_415("STRING_1661560149");
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubID_415);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_415.insert(InstrumentPartySubID_415.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_415(459177489);
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubIDType_415);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_415.insert(InstrumentPartySubIDType_415.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_415);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

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
    FIX::SecurityAltID SecurityAltID_188("STRING_1694578533");
    noSecurityAltID_0_0.set(SecurityAltID_188);
    SecAltIDGrp_NoSecurityAltID_188.insert(SecurityAltID_188.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_188("STRING_1335926065");
    noSecurityAltID_0_0.set(SecurityAltIDSource_188);
    SecAltIDGrp_NoSecurityAltID_188.insert(SecurityAltIDSource_188.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_188);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_189;
    FIX::SecurityAltID SecurityAltID_189("STRING_1512559427");
    noSecurityAltID_0_1.set(SecurityAltID_189);
    SecAltIDGrp_NoSecurityAltID_189.insert(SecurityAltID_189.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_189("STRING_1622502543");
    noSecurityAltID_0_1.set(SecurityAltIDSource_189);
    SecAltIDGrp_NoSecurityAltID_189.insert(SecurityAltIDSource_189.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_189);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_200;
  FIX::SecurityXML SecurityXML_201("XMLDATA_1684865334");
  msg.set(SecurityXML_201);
  FIX::SecurityXMLLen SecurityXMLLen_100(1464054974);
  msg.set(SecurityXMLLen_100);
  FIX::SecurityXMLSchema SecurityXMLSchema_100("STRING_1413783301");
  msg.set(SecurityXMLSchema_100);
  SecurityXML_200.insert(SecurityXMLSchema_100.getString());
  all_values.push_back(SecurityXML_200);
  all_compo_names.insert("SecurityXML");

  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::TradeCaptureReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_12;
    FIX::PosAmt PosAmt_12;
    PosAmt_12.setString("502967");
    noPosAmt_0_0.set(PosAmt_12);
    PositionAmountData_NoPosAmt_12.insert(PosAmt_12.getString());
    FIX::PosAmtType PosAmtType_12("STRING_IACPN");
    noPosAmt_0_0.set(PosAmtType_12);
    PositionAmountData_NoPosAmt_12.insert(PosAmtType_12.getString());
    FIX::PositionCurrency PositionCurrency_12("STRING_1695082422");
    noPosAmt_0_0.set(PositionCurrency_12);
    PositionAmountData_NoPosAmt_12.insert(PositionCurrency_12.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_12);
    all_compo_names.insert("PositionAmountData.NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_13;
    FIX::PosAmt PosAmt_13;
    PosAmt_13.setString("20335494");
    noPosAmt_0_1.set(PosAmt_13);
    PositionAmountData_NoPosAmt_13.insert(PosAmt_13.getString());
    FIX::PosAmtType PosAmtType_13("STRING_SETL");
    noPosAmt_0_1.set(PosAmtType_13);
    PositionAmountData_NoPosAmt_13.insert(PosAmtType_13.getString());
    FIX::PositionCurrency PositionCurrency_13("STRING_770909706");
    noPosAmt_0_1.set(PositionCurrency_13);
    PositionAmountData_NoPosAmt_13.insert(PositionCurrency_13.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_13);
    all_compo_names.insert("PositionAmountData.NoPosAmt");

    msg.addGroup(noPosAmt_0_1);
  }
  {
    FIX50SP2::TradeCaptureReport::NoPosAmt noPosAmt_0_2;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_14;
    FIX::PosAmt PosAmt_14;
    PosAmt_14.setString("5314238");
    noPosAmt_0_2.set(PosAmt_14);
    PositionAmountData_NoPosAmt_14.insert(PosAmt_14.getString());
    FIX::PosAmtType PosAmtType_14("STRING_SMTM");
    noPosAmt_0_2.set(PosAmtType_14);
    PositionAmountData_NoPosAmt_14.insert(PosAmtType_14.getString());
    FIX::PositionCurrency PositionCurrency_14("STRING_89836887");
    noPosAmt_0_2.set(PositionCurrency_14);
    PositionAmountData_NoPosAmt_14.insert(PositionCurrency_14.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_14);
    all_compo_names.insert("PositionAmountData.NoPosAmt");

    msg.addGroup(noPosAmt_0_2);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::TradeCaptureReport::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_8;
    FIX::RootPartyID RootPartyID_8("STRING_1598600688");
    noRootPartyIDs_0_0.set(RootPartyID_8);
    RootParties_NoRootPartyIDs_8.insert(RootPartyID_8.getString());
    FIX::RootPartyIDSource RootPartyIDSource_8('1');
    noRootPartyIDs_0_0.set(RootPartyIDSource_8);
    RootParties_NoRootPartyIDs_8.insert(RootPartyIDSource_8.getString());
    FIX::RootPartyRole RootPartyRole_8(360833017);
    noRootPartyIDs_0_0.set(RootPartyRole_8);
    RootParties_NoRootPartyIDs_8.insert(RootPartyRole_8.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_8);
    all_compo_names.insert("RootParties.NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_15;
      FIX::RootPartySubID RootPartySubID_15("STRING_1290568592");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_15);
      RootSubParties_NoRootPartySubIDs_15.insert(RootPartySubID_15.getString());
      FIX::RootPartySubIDType RootPartySubIDType_15(420391356);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_15);
      RootSubParties_NoRootPartySubIDs_15.insert(RootPartySubIDType_15.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_15);
      all_compo_names.insert("RootSubParties.NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_16;
      FIX::RootPartySubID RootPartySubID_16("STRING_509779168");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_16);
      RootSubParties_NoRootPartySubIDs_16.insert(RootPartySubID_16.getString());
      FIX::RootPartySubIDType RootPartySubIDType_16(2117291972);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_16);
      RootSubParties_NoRootPartySubIDs_16.insert(RootPartySubIDType_16.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_16);
      all_compo_names.insert("RootSubParties.NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_34;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_34("USD");
  msg.set(BenchmarkCurveCurrency_34);
  SpreadOrBenchmarkCurveData_34.insert(BenchmarkCurveCurrency_34.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_34("STRING_SONIA");
  msg.set(BenchmarkCurveName_34);
  SpreadOrBenchmarkCurveData_34.insert(BenchmarkCurveName_34.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_34("STRING_1623245282");
  msg.set(BenchmarkCurvePoint_34);
  SpreadOrBenchmarkCurveData_34.insert(BenchmarkCurvePoint_34.getString());
  FIX::BenchmarkPrice BenchmarkPrice_34;
  BenchmarkPrice_34.setString("21456694");
  msg.set(BenchmarkPrice_34);
  SpreadOrBenchmarkCurveData_34.insert(BenchmarkPrice_34.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_34(1178463358);
  msg.set(BenchmarkPriceType_34);
  SpreadOrBenchmarkCurveData_34.insert(BenchmarkPriceType_34.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_34("STRING_811687699");
  msg.set(BenchmarkSecurityID_34);
  SpreadOrBenchmarkCurveData_34.insert(BenchmarkSecurityID_34.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_34("STRING_1510745267");
  msg.set(BenchmarkSecurityIDSource_34);
  SpreadOrBenchmarkCurveData_34.insert(BenchmarkSecurityIDSource_34.getString());
  FIX::Spread Spread_34;
  Spread_34.setString("6534822");
  msg.set(Spread_34);
  SpreadOrBenchmarkCurveData_34.insert(Spread_34.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_34);
  all_compo_names.insert("SpreadOrBenchmarkCurveData");

  // TrdCapRptSideGrp
  // Group TrdCapRptSideGrp.NoSides
  {
    FIX50SP2::TradeCaptureReport::NoSides noSides_0_0;
    // TrdCapRptSideGrp.NoSides
    multiset<string> TrdCapRptSideGrp_NoSides_0;
    FIX::Account Account_45("STRING_827316593");
    noSides_0_0.set(Account_45);
    TrdCapRptSideGrp_NoSides_0.insert(Account_45.getString());
    FIX::AccountType AccountType_38(7);
    noSides_0_0.set(AccountType_38);
    TrdCapRptSideGrp_NoSides_0.insert(AccountType_38.getString());
    FIX::AccruedInterestAmt AccruedInterestAmt_10;
    AccruedInterestAmt_10.setString("18763906");
    noSides_0_0.set(AccruedInterestAmt_10);
    TrdCapRptSideGrp_NoSides_0.insert(AccruedInterestAmt_10.getString());
    FIX::AccruedInterestRate AccruedInterestRate_5;
    AccruedInterestRate_5.setString("33.440000");
    noSides_0_0.set(AccruedInterestRate_5);
    TrdCapRptSideGrp_NoSides_0.insert(AccruedInterestRate_5.getString());
    FIX::AcctIDSource AcctIDSource_38(1);
    noSides_0_0.set(AcctIDSource_38);
    TrdCapRptSideGrp_NoSides_0.insert(AcctIDSource_38.getString());
    FIX::AggressorIndicator AggressorIndicator_1(false);
    noSides_0_0.set(AggressorIndicator_1);
    TrdCapRptSideGrp_NoSides_0.insert(AggressorIndicator_1.getString());
    FIX::AllocID AllocID_21("STRING_763679167");
    noSides_0_0.set(AllocID_21);
    TrdCapRptSideGrp_NoSides_0.insert(AllocID_21.getString());
    FIX::ComplianceID ComplianceID_12("STRING_1690436240");
    noSides_0_0.set(ComplianceID_12);
    TrdCapRptSideGrp_NoSides_0.insert(ComplianceID_12.getString());
    FIX::Concession Concession_5;
    Concession_5.setString("474154");
    noSides_0_0.set(Concession_5);
    TrdCapRptSideGrp_NoSides_0.insert(Concession_5.getString());
    FIX::CustOrderCapacity CustOrderCapacity_20(1);
    noSides_0_0.set(CustOrderCapacity_20);
    TrdCapRptSideGrp_NoSides_0.insert(CustOrderCapacity_20.getString());
    FIX::EncodedText EncodedText_100("DATA_608488355");
    noSides_0_0.set(EncodedText_100);
    TrdCapRptSideGrp_NoSides_0.insert(EncodedText_100.getString());
    FIX::EncodedTextLen EncodedTextLen_100(137252383);
    noSides_0_0.set(EncodedTextLen_100);
    TrdCapRptSideGrp_NoSides_0.insert(EncodedTextLen_100.getString());
    FIX::EndAccruedInterestAmt EndAccruedInterestAmt_10;
    EndAccruedInterestAmt_10.setString("20984534");
    noSides_0_0.set(EndAccruedInterestAmt_10);
    TrdCapRptSideGrp_NoSides_0.insert(EndAccruedInterestAmt_10.getString());
    FIX::EndCash EndCash_10;
    EndCash_10.setString("596053");
    noSides_0_0.set(EndCash_10);
    TrdCapRptSideGrp_NoSides_0.insert(EndCash_10.getString());
    FIX::ExDate ExDate_2("LOCALMKTDATE_1655684755");
    noSides_0_0.set(ExDate_2);
    TrdCapRptSideGrp_NoSides_0.insert(ExDate_2.getString());
    FIX::ExchangeRule ExchangeRule_0("STRING_311802780");
    noSides_0_0.set(ExchangeRule_0);
    TrdCapRptSideGrp_NoSides_0.insert(ExchangeRule_0.getString());
    FIX::ExchangeSpecialInstructions ExchangeSpecialInstructions_0("STRING_1127111992");
    noSides_0_0.set(ExchangeSpecialInstructions_0);
    TrdCapRptSideGrp_NoSides_0.insert(ExchangeSpecialInstructions_0.getString());
    FIX::InterestAtMaturity InterestAtMaturity_5;
    InterestAtMaturity_5.setString("7987696");
    noSides_0_0.set(InterestAtMaturity_5);
    TrdCapRptSideGrp_NoSides_0.insert(InterestAtMaturity_5.getString());
    FIX::NetGrossInd NetGrossInd_9(1);
    noSides_0_0.set(NetGrossInd_9);
    TrdCapRptSideGrp_NoSides_0.insert(NetGrossInd_9.getString());
    FIX::NetMoney NetMoney_5;
    NetMoney_5.setString("16368911");
    noSides_0_0.set(NetMoney_5);
    TrdCapRptSideGrp_NoSides_0.insert(NetMoney_5.getString());
    FIX::NumDaysInterest NumDaysInterest_5(768578023);
    noSides_0_0.set(NumDaysInterest_5);
    TrdCapRptSideGrp_NoSides_0.insert(NumDaysInterest_5.getString());
    FIX::OddLot OddLot_0(false);
    noSides_0_0.set(OddLot_0);
    TrdCapRptSideGrp_NoSides_0.insert(OddLot_0.getString());
    FIX::OrderCategory OrderCategory_1('6');
    noSides_0_0.set(OrderCategory_1);
    TrdCapRptSideGrp_NoSides_0.insert(OrderCategory_1.getString());
    FIX::OrderDelay OrderDelay_0(252462849);
    noSides_0_0.set(OrderDelay_0);
    TrdCapRptSideGrp_NoSides_0.insert(OrderDelay_0.getString());
    FIX::OrderDelayUnit OrderDelayUnit_0(15);
    noSides_0_0.set(OrderDelayUnit_0);
    TrdCapRptSideGrp_NoSides_0.insert(OrderDelayUnit_0.getString());
    FIX::PositionEffect PositionEffect_17('O');
    noSides_0_0.set(PositionEffect_17);
    TrdCapRptSideGrp_NoSides_0.insert(PositionEffect_17.getString());
    FIX::PreallocMethod PreallocMethod_14('1');
    noSides_0_0.set(PreallocMethod_14);
    TrdCapRptSideGrp_NoSides_0.insert(PreallocMethod_14.getString());
    FIX::ProcessCode ProcessCode_13('3');
    noSides_0_0.set(ProcessCode_13);
    TrdCapRptSideGrp_NoSides_0.insert(ProcessCode_13.getString());
    FIX::RptSeq RptSeq_4(1350373205);
    noSides_0_0.set(RptSeq_4);
    TrdCapRptSideGrp_NoSides_0.insert(RptSeq_4.getString());
    FIX::SettlCurrAmt SettlCurrAmt_9;
    SettlCurrAmt_9.setString("20844084");
    noSides_0_0.set(SettlCurrAmt_9);
    TrdCapRptSideGrp_NoSides_0.insert(SettlCurrAmt_9.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_9;
    SettlCurrFxRate_9.setString("3852969");
    noSides_0_0.set(SettlCurrFxRate_9);
    TrdCapRptSideGrp_NoSides_0.insert(SettlCurrFxRate_9.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_9('M');
    noSides_0_0.set(SettlCurrFxRateCalc_9);
    TrdCapRptSideGrp_NoSides_0.insert(SettlCurrFxRateCalc_9.getString());
    FIX::Side Side_50('2');
    noSides_0_0.set(Side_50);
    TrdCapRptSideGrp_NoSides_0.insert(Side_50.getString());
    FIX::SideCurrency SideCurrency_0("EUR");
    noSides_0_0.set(SideCurrency_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideCurrency_0.getString());
    FIX::SideExecID SideExecID_0("STRING_1140256679");
    noSides_0_0.set(SideExecID_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideExecID_0.getString());
    FIX::SideFillStationCd SideFillStationCd_0("STRING_1538193451");
    noSides_0_0.set(SideFillStationCd_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideFillStationCd_0.getString());
    FIX::SideGrossTradeAmt SideGrossTradeAmt_0;
    SideGrossTradeAmt_0.setString("16714986");
    noSides_0_0.set(SideGrossTradeAmt_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideGrossTradeAmt_0.getString());
    FIX::SideLastQty SideLastQty_0(683209271);
    noSides_0_0.set(SideLastQty_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideLastQty_0.getString());
    FIX::SideLiquidityInd SideLiquidityInd_0(1585608947);
    noSides_0_0.set(SideLiquidityInd_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideLiquidityInd_0.getString());
    FIX::SideMultiLegReportingType SideMultiLegReportingType_0(2);
    noSides_0_0.set(SideMultiLegReportingType_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideMultiLegReportingType_0.getString());
    FIX::SideReasonCd SideReasonCd_0("STRING_1291697626");
    noSides_0_0.set(SideReasonCd_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideReasonCd_0.getString());
    FIX::SideSettlCurrency SideSettlCurrency_0("CHF");
    noSides_0_0.set(SideSettlCurrency_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideSettlCurrency_0.getString());
    FIX::SideTradeReportID SideTradeReportID_0("STRING_1351303021");
    noSides_0_0.set(SideTradeReportID_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideTradeReportID_0.getString());
    FIX::SideTrdSubTyp SideTrdSubTyp_0(1231062438);
    noSides_0_0.set(SideTrdSubTyp_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideTrdSubTyp_0.getString());
    FIX::SolicitedFlag SolicitedFlag_14(false);
    noSides_0_0.set(SolicitedFlag_14);
    TrdCapRptSideGrp_NoSides_0.insert(SolicitedFlag_14.getString());
    FIX::StartCash StartCash_10;
    StartCash_10.setString("3309313");
    noSides_0_0.set(StartCash_10);
    TrdCapRptSideGrp_NoSides_0.insert(StartCash_10.getString());
    FIX::Text Text_100("STRING_2029832138");
    noSides_0_0.set(Text_100);
    TrdCapRptSideGrp_NoSides_0.insert(Text_100.getString());
    FIX::TimeBracket TimeBracket_1("STRING_1814084733");
    noSides_0_0.set(TimeBracket_1);
    TrdCapRptSideGrp_NoSides_0.insert(TimeBracket_1.getString());
    FIX::TotalTakedown TotalTakedown_5;
    TotalTakedown_5.setString("19678225");
    noSides_0_0.set(TotalTakedown_5);
    TrdCapRptSideGrp_NoSides_0.insert(TotalTakedown_5.getString());
    FIX::TradeAllocIndicator TradeAllocIndicator_0(1);
    noSides_0_0.set(TradeAllocIndicator_0);
    TrdCapRptSideGrp_NoSides_0.insert(TradeAllocIndicator_0.getString());
    FIX::TradeInputDevice TradeInputDevice_1("STRING_1562863014");
    noSides_0_0.set(TradeInputDevice_1);
    TrdCapRptSideGrp_NoSides_0.insert(TradeInputDevice_1.getString());
    FIX::TradeInputSource TradeInputSource_3("STRING_1809264623");
    noSides_0_0.set(TradeInputSource_3);
    TrdCapRptSideGrp_NoSides_0.insert(TradeInputSource_3.getString());
    FIX::TradingSessionID TradingSessionID_117("STRING_5");
    noSides_0_0.set(TradingSessionID_117);
    TrdCapRptSideGrp_NoSides_0.insert(TradingSessionID_117.getString());
    FIX::TradingSessionSubID TradingSessionSubID_117("STRING_6");
    noSides_0_0.set(TradingSessionSubID_117);
    TrdCapRptSideGrp_NoSides_0.insert(TradingSessionSubID_117.getString());
    all_values.push_back(TrdCapRptSideGrp_NoSides_0);
    all_compo_names.insert("TrdCapRptSideGrp.NoSides");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_7;
      FIX::ClearingInstruction ClearingInstruction_7(4);
      noClearingInstructions_0_1_0.set(ClearingInstruction_7);
      ClrInstGrp_NoClearingInstructions_7.insert(ClearingInstruction_7.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_7);
      all_compo_names.insert("ClrInstGrp.NoClearingInstructions");

      noSides_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    // CommissionData
    multiset<string> CommissionData_22;
    FIX::CommCurrency CommCurrency_22("CHF");
    noSides_0_0.set(CommCurrency_22);
    CommissionData_22.insert(CommCurrency_22.getString());
    FIX::CommType CommType_25('4');
    noSides_0_0.set(CommType_25);
    CommissionData_22.insert(CommType_25.getString());
    FIX::Commission Commission_25;
    Commission_25.setString("12089275");
    noSides_0_0.set(Commission_25);
    CommissionData_22.insert(Commission_25.getString());
    FIX::FundRenewWaiv FundRenewWaiv_22('N');
    noSides_0_0.set(FundRenewWaiv_22);
    CommissionData_22.insert(FundRenewWaiv_22.getString());
    all_values.push_back(CommissionData_22);
    all_compo_names.insert("CommissionData");

    // ContAmtGrp
    // Group ContAmtGrp.NoContAmts
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoContAmts noContAmts_0_1_0;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_1;
      FIX::ContAmtCurr ContAmtCurr_1("EUR");
      noContAmts_0_1_0.set(ContAmtCurr_1);
      ContAmtGrp_NoContAmts_1.insert(ContAmtCurr_1.getString());
      FIX::ContAmtType ContAmtType_1(11);
      noContAmts_0_1_0.set(ContAmtType_1);
      ContAmtGrp_NoContAmts_1.insert(ContAmtType_1.getString());
      FIX::ContAmtValue ContAmtValue_1;
      ContAmtValue_1.setString("7138413");
      noContAmts_0_1_0.set(ContAmtValue_1);
      ContAmtGrp_NoContAmts_1.insert(ContAmtValue_1.getString());
      all_values.push_back(ContAmtGrp_NoContAmts_1);
      all_compo_names.insert("ContAmtGrp.NoContAmts");

      noSides_0_0.addGroup(noContAmts_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoContAmts noContAmts_0_1_1;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_2;
      FIX::ContAmtCurr ContAmtCurr_2("USD");
      noContAmts_0_1_1.set(ContAmtCurr_2);
      ContAmtGrp_NoContAmts_2.insert(ContAmtCurr_2.getString());
      FIX::ContAmtType ContAmtType_2(10);
      noContAmts_0_1_1.set(ContAmtType_2);
      ContAmtGrp_NoContAmts_2.insert(ContAmtType_2.getString());
      FIX::ContAmtValue ContAmtValue_2;
      ContAmtValue_2.setString("21329408");
      noContAmts_0_1_1.set(ContAmtValue_2);
      ContAmtGrp_NoContAmts_2.insert(ContAmtValue_2.getString());
      all_values.push_back(ContAmtGrp_NoContAmts_2);
      all_compo_names.insert("ContAmtGrp.NoContAmts");

      noSides_0_0.addGroup(noContAmts_0_1_1);
    }
    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_21;
      FIX::MiscFeeAmt MiscFeeAmt_21;
      MiscFeeAmt_21.setString("18748279");
      noMiscFees_0_1_0.set(MiscFeeAmt_21);
      MiscFeesGrp_NoMiscFees_21.insert(MiscFeeAmt_21.getString());
      FIX::MiscFeeBasis MiscFeeBasis_21(0);
      noMiscFees_0_1_0.set(MiscFeeBasis_21);
      MiscFeesGrp_NoMiscFees_21.insert(MiscFeeBasis_21.getString());
      FIX::MiscFeeCurr MiscFeeCurr_21("CHF");
      noMiscFees_0_1_0.set(MiscFeeCurr_21);
      MiscFeesGrp_NoMiscFees_21.insert(MiscFeeCurr_21.getString());
      FIX::MiscFeeType MiscFeeType_21("STRING_14");
      noMiscFees_0_1_0.set(MiscFeeType_21);
      MiscFeesGrp_NoMiscFees_21.insert(MiscFeeType_21.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_21);
      all_compo_names.insert("MiscFeesGrp.NoMiscFees");

      noSides_0_0.addGroup(noMiscFees_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoMiscFees noMiscFees_0_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_22;
      FIX::MiscFeeAmt MiscFeeAmt_22;
      MiscFeeAmt_22.setString("4828941");
      noMiscFees_0_1_1.set(MiscFeeAmt_22);
      MiscFeesGrp_NoMiscFees_22.insert(MiscFeeAmt_22.getString());
      FIX::MiscFeeBasis MiscFeeBasis_22(0);
      noMiscFees_0_1_1.set(MiscFeeBasis_22);
      MiscFeesGrp_NoMiscFees_22.insert(MiscFeeBasis_22.getString());
      FIX::MiscFeeCurr MiscFeeCurr_22("EUR");
      noMiscFees_0_1_1.set(MiscFeeCurr_22);
      MiscFeesGrp_NoMiscFees_22.insert(MiscFeeCurr_22.getString());
      FIX::MiscFeeType MiscFeeType_22("STRING_13");
      noMiscFees_0_1_1.set(MiscFeeType_22);
      MiscFeesGrp_NoMiscFees_22.insert(MiscFeeType_22.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_22);
      all_compo_names.insert("MiscFeesGrp.NoMiscFees");

      noSides_0_0.addGroup(noMiscFees_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoMiscFees noMiscFees_0_1_2;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_23;
      FIX::MiscFeeAmt MiscFeeAmt_23;
      MiscFeeAmt_23.setString("9194160");
      noMiscFees_0_1_2.set(MiscFeeAmt_23);
      MiscFeesGrp_NoMiscFees_23.insert(MiscFeeAmt_23.getString());
      FIX::MiscFeeBasis MiscFeeBasis_23(1);
      noMiscFees_0_1_2.set(MiscFeeBasis_23);
      MiscFeesGrp_NoMiscFees_23.insert(MiscFeeBasis_23.getString());
      FIX::MiscFeeCurr MiscFeeCurr_23("USD");
      noMiscFees_0_1_2.set(MiscFeeCurr_23);
      MiscFeesGrp_NoMiscFees_23.insert(MiscFeeCurr_23.getString());
      FIX::MiscFeeType MiscFeeType_23("STRING_6");
      noMiscFees_0_1_2.set(MiscFeeType_23);
      MiscFeesGrp_NoMiscFees_23.insert(MiscFeeType_23.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_23);
      all_compo_names.insert("MiscFeesGrp.NoMiscFees");

      noSides_0_0.addGroup(noMiscFees_0_1_2);
    }
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_151;
      FIX::PartyID PartyID_151("STRING_382965876");
      noPartyIDs_0_1_0.set(PartyID_151);
      Parties_NoPartyIDs_151.insert(PartyID_151.getString());
      FIX::PartyIDSource PartyIDSource_151('6');
      noPartyIDs_0_1_0.set(PartyIDSource_151);
      Parties_NoPartyIDs_151.insert(PartyIDSource_151.getString());
      FIX::PartyRole PartyRole_151(21);
      noPartyIDs_0_1_0.set(PartyRole_151);
      Parties_NoPartyIDs_151.insert(PartyRole_151.getString());
      all_values.push_back(Parties_NoPartyIDs_151);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_320;
        FIX::PartySubID PartySubID_320("STRING_1200193278");
        noPartySubIDs_0_0_2_0.set(PartySubID_320);
        PtysSubGrp_NoPartySubIDs_320.insert(PartySubID_320.getString());
        FIX::PartySubIDType PartySubIDType_320(18);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_320);
        PtysSubGrp_NoPartySubIDs_320.insert(PartySubIDType_320.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_320);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_321;
        FIX::PartySubID PartySubID_321("STRING_767541327");
        noPartySubIDs_0_0_2_1.set(PartySubID_321);
        PtysSubGrp_NoPartySubIDs_321.insert(PartySubID_321.getString());
        FIX::PartySubIDType PartySubIDType_321(6);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_321);
        PtysSubGrp_NoPartySubIDs_321.insert(PartySubIDType_321.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_321);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_152;
      FIX::PartyID PartyID_152("STRING_1659359748");
      noPartyIDs_0_1_1.set(PartyID_152);
      Parties_NoPartyIDs_152.insert(PartyID_152.getString());
      FIX::PartyIDSource PartyIDSource_152('9');
      noPartyIDs_0_1_1.set(PartyIDSource_152);
      Parties_NoPartyIDs_152.insert(PartyIDSource_152.getString());
      FIX::PartyRole PartyRole_152(72);
      noPartyIDs_0_1_1.set(PartyRole_152);
      Parties_NoPartyIDs_152.insert(PartyRole_152.getString());
      all_values.push_back(Parties_NoPartyIDs_152);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_322;
        FIX::PartySubID PartySubID_322("STRING_1633349346");
        noPartySubIDs_0_1_2_0.set(PartySubID_322);
        PtysSubGrp_NoPartySubIDs_322.insert(PartySubID_322.getString());
        FIX::PartySubIDType PartySubIDType_322(10);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_322);
        PtysSubGrp_NoPartySubIDs_322.insert(PartySubIDType_322.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_322);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_323;
        FIX::PartySubID PartySubID_323("STRING_116465243");
        noPartySubIDs_0_1_2_1.set(PartySubID_323);
        PtysSubGrp_NoPartySubIDs_323.insert(PartySubID_323.getString());
        FIX::PartySubIDType PartySubIDType_323(4);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_323);
        PtysSubGrp_NoPartySubIDs_323.insert(PartySubIDType_323.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_323);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_324;
        FIX::PartySubID PartySubID_324("STRING_749858713");
        noPartySubIDs_0_1_2_2.set(PartySubID_324);
        PtysSubGrp_NoPartySubIDs_324.insert(PartySubID_324.getString());
        FIX::PartySubIDType PartySubIDType_324(29);
        noPartySubIDs_0_1_2_2.set(PartySubIDType_324);
        PtysSubGrp_NoPartySubIDs_324.insert(PartySubIDType_324.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_324);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_2);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_153;
      FIX::PartyID PartyID_153("STRING_171616822");
      noPartyIDs_0_1_2.set(PartyID_153);
      Parties_NoPartyIDs_153.insert(PartyID_153.getString());
      FIX::PartyIDSource PartyIDSource_153('E');
      noPartyIDs_0_1_2.set(PartyIDSource_153);
      Parties_NoPartyIDs_153.insert(PartyIDSource_153.getString());
      FIX::PartyRole PartyRole_153(85);
      noPartyIDs_0_1_2.set(PartyRole_153);
      Parties_NoPartyIDs_153.insert(PartyRole_153.getString());
      all_values.push_back(Parties_NoPartyIDs_153);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_325;
        FIX::PartySubID PartySubID_325("STRING_1943847349");
        noPartySubIDs_0_2_2_0.set(PartySubID_325);
        PtysSubGrp_NoPartySubIDs_325.insert(PartySubID_325.getString());
        FIX::PartySubIDType PartySubIDType_325(29);
        noPartySubIDs_0_2_2_0.set(PartySubIDType_325);
        PtysSubGrp_NoPartySubIDs_325.insert(PartySubIDType_325.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_325);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_326;
        FIX::PartySubID PartySubID_326("STRING_356570229");
        noPartySubIDs_0_2_2_1.set(PartySubID_326);
        PtysSubGrp_NoPartySubIDs_326.insert(PartySubID_326.getString());
        FIX::PartySubIDType PartySubIDType_326(18);
        noPartySubIDs_0_2_2_1.set(PartySubIDType_326);
        PtysSubGrp_NoPartySubIDs_326.insert(PartySubIDType_326.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_326);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_1);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails noSettlDetails_0_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_7;
      FIX::SettlObligSource SettlObligSource_7('2');
      noSettlDetails_0_1_0.set(SettlObligSource_7);
      SettlDetails_NoSettlDetails_7.insert(SettlObligSource_7.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_7);
      all_compo_names.insert("SettlDetails.NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_42;
        FIX::SettlPartyID SettlPartyID_42("STRING_485991987");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_42);
        SettlParties_NoSettlPartyIDs_42.insert(SettlPartyID_42.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_42('1');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_42);
        SettlParties_NoSettlPartyIDs_42.insert(SettlPartyIDSource_42.getString());
        FIX::SettlPartyRole SettlPartyRole_42(658080960);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_42);
        SettlParties_NoSettlPartyIDs_42.insert(SettlPartyRole_42.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_42);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_81;
          FIX::SettlPartySubID SettlPartySubID_81("STRING_1596753306");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_81);
          SettlPtysSubGrp_NoSettlPartySubIDs_81.insert(SettlPartySubID_81.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_81(102490731);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_81);
          SettlPtysSubGrp_NoSettlPartySubIDs_81.insert(SettlPartySubIDType_81.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_81);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      noSides_0_0.addGroup(noSettlDetails_0_1_0);
    }
    // SideTrdRegTS
    // Group SideTrdRegTS.NoSideTrdRegTS
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSideTrdRegTS noSideTrdRegTS_0_1_0;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_0;
      FIX::SideTrdRegTimestamp SideTrdRegTimestamp_0(FIX::UTCTIMESTAMP(18, 1, 39, 13, 1, 2006));
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestamp_0);
      SideTrdRegTS_NoSideTrdRegTS_0.insert(SideTrdRegTimestamp_0.getString());
      FIX::SideTrdRegTimestampSrc SideTrdRegTimestampSrc_0("STRING_1837280443");
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestampSrc_0);
      SideTrdRegTS_NoSideTrdRegTS_0.insert(SideTrdRegTimestampSrc_0.getString());
      FIX::SideTrdRegTimestampType SideTrdRegTimestampType_0(702594259);
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestampType_0);
      SideTrdRegTS_NoSideTrdRegTS_0.insert(SideTrdRegTimestampType_0.getString());
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_0);
      all_compo_names.insert("SideTrdRegTS.NoSideTrdRegTS");

      noSides_0_0.addGroup(noSideTrdRegTS_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSideTrdRegTS noSideTrdRegTS_0_1_1;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_1;
      FIX::SideTrdRegTimestamp SideTrdRegTimestamp_1(FIX::UTCTIMESTAMP(20, 33, 43, 14, 6, 2006));
      noSideTrdRegTS_0_1_1.set(SideTrdRegTimestamp_1);
      SideTrdRegTS_NoSideTrdRegTS_1.insert(SideTrdRegTimestamp_1.getString());
      FIX::SideTrdRegTimestampSrc SideTrdRegTimestampSrc_1("STRING_86995751");
      noSideTrdRegTS_0_1_1.set(SideTrdRegTimestampSrc_1);
      SideTrdRegTS_NoSideTrdRegTS_1.insert(SideTrdRegTimestampSrc_1.getString());
      FIX::SideTrdRegTimestampType SideTrdRegTimestampType_1(1688627338);
      noSideTrdRegTS_0_1_1.set(SideTrdRegTimestampType_1);
      SideTrdRegTS_NoSideTrdRegTS_1.insert(SideTrdRegTimestampType_1.getString());
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_1);
      all_compo_names.insert("SideTrdRegTS.NoSideTrdRegTS");

      noSides_0_0.addGroup(noSideTrdRegTS_0_1_1);
    }
    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_56;
      FIX::StipulationType StipulationType_56("STRING_INTERNALQTY");
      noStipulations_0_1_0.set(StipulationType_56);
      Stipulations_NoStipulations_56.insert(StipulationType_56.getString());
      FIX::StipulationValue StipulationValue_56("STRING_256923442");
      noStipulations_0_1_0.set(StipulationValue_56);
      Stipulations_NoStipulations_56.insert(StipulationValue_56.getString());
      all_values.push_back(Stipulations_NoStipulations_56);
      all_compo_names.insert("Stipulations.NoStipulations");

      noSides_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_57;
      FIX::StipulationType StipulationType_57("STRING_MINDNOM");
      noStipulations_0_1_1.set(StipulationType_57);
      Stipulations_NoStipulations_57.insert(StipulationType_57.getString());
      FIX::StipulationValue StipulationValue_57("STRING_1047723709");
      noStipulations_0_1_1.set(StipulationValue_57);
      Stipulations_NoStipulations_57.insert(StipulationValue_57.getString());
      all_values.push_back(Stipulations_NoStipulations_57);
      all_compo_names.insert("Stipulations.NoStipulations");

      noSides_0_0.addGroup(noStipulations_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoStipulations noStipulations_0_1_2;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_58;
      FIX::StipulationType StipulationType_58("STRING_WAM");
      noStipulations_0_1_2.set(StipulationType_58);
      Stipulations_NoStipulations_58.insert(StipulationType_58.getString());
      FIX::StipulationValue StipulationValue_58("STRING_216955158");
      noStipulations_0_1_2.set(StipulationValue_58);
      Stipulations_NoStipulations_58.insert(StipulationValue_58.getString());
      all_values.push_back(Stipulations_NoStipulations_58);
      all_compo_names.insert("Stipulations.NoStipulations");

      noSides_0_0.addGroup(noStipulations_0_1_2);
    }
    // TradeReportOrderDetail
    multiset<string> TradeReportOrderDetail_0;
    FIX::BookingType BookingType_34(2);
    noSides_0_0.set(BookingType_34);
    TradeReportOrderDetail_0.insert(BookingType_34.getString());
    FIX::ClOrdID ClOrdID_47("STRING_1190119487");
    noSides_0_0.set(ClOrdID_47);
    TradeReportOrderDetail_0.insert(ClOrdID_47.getString());
    FIX::CumQty CumQty_3;
    CumQty_3.setString("10211521");
    noSides_0_0.set(CumQty_3);
    TradeReportOrderDetail_0.insert(CumQty_3.getString());
    FIX::ExecInst ExecInst_13("MULTIPLECHARVALUE_5");
    noSides_0_0.set(ExecInst_13);
    TradeReportOrderDetail_0.insert(ExecInst_13.getString());
    FIX::ExpireTime ExpireTime_25(FIX::UTCTIMESTAMP(12, 48, 48, 13, 8, 2007));
    noSides_0_0.set(ExpireTime_25);
    TradeReportOrderDetail_0.insert(ExpireTime_25.getString());
    FIX::LeavesQty LeavesQty_2;
    LeavesQty_2.setString("1382797");
    noSides_0_0.set(LeavesQty_2);
    TradeReportOrderDetail_0.insert(LeavesQty_2.getString());
    FIX::ListID ListID_26("STRING_1838856038");
    noSides_0_0.set(ListID_26);
    TradeReportOrderDetail_0.insert(ListID_26.getString());
    FIX::LotType LotType_36('2');
    noSides_0_0.set(LotType_36);
    TradeReportOrderDetail_0.insert(LotType_36.getString());
    FIX::OrdStatus OrdStatus_3('1');
    noSides_0_0.set(OrdStatus_3);
    TradeReportOrderDetail_0.insert(OrdStatus_3.getString());
    FIX::OrdType OrdType_93('1');
    noSides_0_0.set(OrdType_93);
    TradeReportOrderDetail_0.insert(OrdType_93.getString());
    FIX::OrderCapacity OrderCapacity_36('P');
    noSides_0_0.set(OrderCapacity_36);
    TradeReportOrderDetail_0.insert(OrderCapacity_36.getString());
    FIX::OrderID OrderID_32("STRING_145843286");
    noSides_0_0.set(OrderID_32);
    TradeReportOrderDetail_0.insert(OrderID_32.getString());
    FIX::OrderInputDevice OrderInputDevice_0("STRING_1823912635");
    noSides_0_0.set(OrderInputDevice_0);
    TradeReportOrderDetail_0.insert(OrderInputDevice_0.getString());
    FIX::OrderRestrictions OrderRestrictions_33("MULTIPLECHARVALUE_F");
    noSides_0_0.set(OrderRestrictions_33);
    TradeReportOrderDetail_0.insert(OrderRestrictions_33.getString());
    FIX::OrigCustOrderCapacity OrigCustOrderCapacity_0(4);
    noSides_0_0.set(OrigCustOrderCapacity_0);
    TradeReportOrderDetail_0.insert(OrigCustOrderCapacity_0.getString());
    FIX::OrigOrdModTime OrigOrdModTime_5(FIX::UTCTIMESTAMP(7, 34, 27, 20, 9, 2006));
    noSides_0_0.set(OrigOrdModTime_5);
    TradeReportOrderDetail_0.insert(OrigOrdModTime_5.getString());
    FIX::Price Price_26;
    Price_26.setString("16122861");
    noSides_0_0.set(Price_26);
    TradeReportOrderDetail_0.insert(Price_26.getString());
    FIX::RefOrdIDReason RefOrdIDReason_0(2);
    noSides_0_0.set(RefOrdIDReason_0);
    TradeReportOrderDetail_0.insert(RefOrdIDReason_0.getString());
    FIX::RefOrderID RefOrderID_5("STRING_287547637");
    noSides_0_0.set(RefOrderID_5);
    TradeReportOrderDetail_0.insert(RefOrderID_5.getString());
    FIX::RefOrderIDSource RefOrderIDSource_5('2');
    noSides_0_0.set(RefOrderIDSource_5);
    TradeReportOrderDetail_0.insert(RefOrderIDSource_5.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_40("STRING_1410848423");
    noSides_0_0.set(SecondaryClOrdID_40);
    TradeReportOrderDetail_0.insert(SecondaryClOrdID_40.getString());
    FIX::SecondaryOrderID SecondaryOrderID_24("STRING_1308699791");
    noSides_0_0.set(SecondaryOrderID_24);
    TradeReportOrderDetail_0.insert(SecondaryOrderID_24.getString());
    FIX::StopPx StopPx_10;
    StopPx_10.setString("9391901");
    noSides_0_0.set(StopPx_10);
    TradeReportOrderDetail_0.insert(StopPx_10.getString());
    FIX::TimeInForce TimeInForce_74('3');
    noSides_0_0.set(TimeInForce_74);
    TradeReportOrderDetail_0.insert(TimeInForce_74.getString());
    FIX::TransBkdTime TransBkdTime_4(FIX::UTCTIMESTAMP(14, 42, 4, 21, 8, 2004));
    noSides_0_0.set(TransBkdTime_4);
    TradeReportOrderDetail_0.insert(TransBkdTime_4.getString());
    all_values.push_back(TradeReportOrderDetail_0);
    all_compo_names.insert("TradeReportOrderDetail");

    // DisplayInstruction
    multiset<string> DisplayInstruction_10;
    FIX::DisplayHighQty DisplayHighQty_10;
    DisplayHighQty_10.setString("10298238");
    noSides_0_0.set(DisplayHighQty_10);
    DisplayInstruction_10.insert(DisplayHighQty_10.getString());
    FIX::DisplayLowQty DisplayLowQty_10;
    DisplayLowQty_10.setString("6991098");
    noSides_0_0.set(DisplayLowQty_10);
    DisplayInstruction_10.insert(DisplayLowQty_10.getString());
    FIX::DisplayMethod DisplayMethod_10('4');
    noSides_0_0.set(DisplayMethod_10);
    DisplayInstruction_10.insert(DisplayMethod_10.getString());
    FIX::DisplayMinIncr DisplayMinIncr_10;
    DisplayMinIncr_10.setString("16532523");
    noSides_0_0.set(DisplayMinIncr_10);
    DisplayInstruction_10.insert(DisplayMinIncr_10.getString());
    FIX::DisplayQty DisplayQty_10;
    DisplayQty_10.setString("16584868");
    noSides_0_0.set(DisplayQty_10);
    DisplayInstruction_10.insert(DisplayQty_10.getString());
    FIX::DisplayWhen DisplayWhen_10('2');
    noSides_0_0.set(DisplayWhen_10);
    DisplayInstruction_10.insert(DisplayWhen_10.getString());
    FIX::RefreshQty RefreshQty_10;
    RefreshQty_10.setString("13296813");
    noSides_0_0.set(RefreshQty_10);
    DisplayInstruction_10.insert(RefreshQty_10.getString());
    FIX::SecondaryDisplayQty SecondaryDisplayQty_10;
    SecondaryDisplayQty_10.setString("16924875");
    noSides_0_0.set(SecondaryDisplayQty_10);
    DisplayInstruction_10.insert(SecondaryDisplayQty_10.getString());
    all_values.push_back(DisplayInstruction_10);
    all_compo_names.insert("DisplayInstruction");

    // OrderQtyData
    multiset<string> OrderQtyData_25;
    FIX::CashOrderQty CashOrderQty_25;
    CashOrderQty_25.setString("4848943");
    noSides_0_0.set(CashOrderQty_25);
    OrderQtyData_25.insert(CashOrderQty_25.getString());
    FIX::OrderPercent OrderPercent_25;
    OrderPercent_25.setString("29.600000");
    noSides_0_0.set(OrderPercent_25);
    OrderQtyData_25.insert(OrderPercent_25.getString());
    FIX::OrderQty OrderQty_35;
    OrderQty_35.setString("18134839");
    noSides_0_0.set(OrderQty_35);
    OrderQtyData_25.insert(OrderQty_35.getString());
    FIX::RoundingDirection RoundingDirection_25('2');
    noSides_0_0.set(RoundingDirection_25);
    OrderQtyData_25.insert(RoundingDirection_25.getString());
    FIX::RoundingModulus RoundingModulus_25;
    RoundingModulus_25.setString("11500622");
    noSides_0_0.set(RoundingModulus_25);
    OrderQtyData_25.insert(RoundingModulus_25.getString());
    all_values.push_back(OrderQtyData_25);
    all_compo_names.insert("OrderQtyData");

    // TrdAllocGrp
    // Group TrdAllocGrp.NoAllocs
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoAllocs noAllocs_0_1_0;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_0;
      FIX::AllocAccount AllocAccount_38("STRING_1752835323");
      noAllocs_0_1_0.set(AllocAccount_38);
      TrdAllocGrp_NoAllocs_0.insert(AllocAccount_38.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_38(1220654745);
      noAllocs_0_1_0.set(AllocAcctIDSource_38);
      TrdAllocGrp_NoAllocs_0.insert(AllocAcctIDSource_38.getString());
      FIX::AllocClearingFeeIndicator AllocClearingFeeIndicator_0("STRING_1842848808");
      noAllocs_0_1_0.set(AllocClearingFeeIndicator_0);
      TrdAllocGrp_NoAllocs_0.insert(AllocClearingFeeIndicator_0.getString());
      FIX::AllocCustomerCapacity AllocCustomerCapacity_7("STRING_1973564258");
      noAllocs_0_1_0.set(AllocCustomerCapacity_7);
      TrdAllocGrp_NoAllocs_0.insert(AllocCustomerCapacity_7.getString());
      FIX::AllocMethod AllocMethod_4(2);
      noAllocs_0_1_0.set(AllocMethod_4);
      TrdAllocGrp_NoAllocs_0.insert(AllocMethod_4.getString());
      FIX::AllocQty AllocQty_36;
      AllocQty_36.setString("12464684");
      noAllocs_0_1_0.set(AllocQty_36);
      TrdAllocGrp_NoAllocs_0.insert(AllocQty_36.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_32("EUR");
      noAllocs_0_1_0.set(AllocSettlCurrency_32);
      TrdAllocGrp_NoAllocs_0.insert(AllocSettlCurrency_32.getString());
      FIX::IndividualAllocID IndividualAllocID_37("STRING_38175015");
      noAllocs_0_1_0.set(IndividualAllocID_37);
      TrdAllocGrp_NoAllocs_0.insert(IndividualAllocID_37.getString());
      FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_7("STRING_1792904027");
      noAllocs_0_1_0.set(SecondaryIndividualAllocID_7);
      TrdAllocGrp_NoAllocs_0.insert(SecondaryIndividualAllocID_7.getString());
      all_values.push_back(TrdAllocGrp_NoAllocs_0);
      all_compo_names.insert("TrdAllocGrp.NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_34;
        FIX::Nested2PartyID Nested2PartyID_34("STRING_353361341");
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyID_34);
        NestedParties2_NoNested2PartyIDs_34.insert(Nested2PartyID_34.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_34('2');
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyIDSource_34);
        NestedParties2_NoNested2PartyIDs_34.insert(Nested2PartyIDSource_34.getString());
        FIX::Nested2PartyRole Nested2PartyRole_34(177967525);
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyRole_34);
        NestedParties2_NoNested2PartyIDs_34.insert(Nested2PartyRole_34.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_34);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_72;
          FIX::Nested2PartySubID Nested2PartySubID_72("STRING_1006777348");
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubID_72);
          NstdPtys2SubGrp_NoNested2PartySubIDs_72.insert(Nested2PartySubID_72.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_72(1933004951);
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubIDType_72);
          NstdPtys2SubGrp_NoNested2PartySubIDs_72.insert(Nested2PartySubIDType_72.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_72);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_73;
          FIX::Nested2PartySubID Nested2PartySubID_73("STRING_574153054");
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubID_73);
          NstdPtys2SubGrp_NoNested2PartySubIDs_73.insert(Nested2PartySubID_73.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_73(1705887217);
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubIDType_73);
          NstdPtys2SubGrp_NoNested2PartySubIDs_73.insert(Nested2PartySubIDType_73.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_73);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_74;
          FIX::Nested2PartySubID Nested2PartySubID_74("STRING_233949042");
          noNested2PartySubIDs_0_0_0_3_2.set(Nested2PartySubID_74);
          NstdPtys2SubGrp_NoNested2PartySubIDs_74.insert(Nested2PartySubID_74.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_74(79921793);
          noNested2PartySubIDs_0_0_0_3_2.set(Nested2PartySubIDType_74);
          NstdPtys2SubGrp_NoNested2PartySubIDs_74.insert(Nested2PartySubIDType_74.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_74);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_2);
        }
        noAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_35;
        FIX::Nested2PartyID Nested2PartyID_35("STRING_1216890443");
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyID_35);
        NestedParties2_NoNested2PartyIDs_35.insert(Nested2PartyID_35.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_35('8');
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyIDSource_35);
        NestedParties2_NoNested2PartyIDs_35.insert(Nested2PartyIDSource_35.getString());
        FIX::Nested2PartyRole Nested2PartyRole_35(1409603168);
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyRole_35);
        NestedParties2_NoNested2PartyIDs_35.insert(Nested2PartyRole_35.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_35);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_75;
          FIX::Nested2PartySubID Nested2PartySubID_75("STRING_1313114367");
          noNested2PartySubIDs_0_0_1_3_0.set(Nested2PartySubID_75);
          NstdPtys2SubGrp_NoNested2PartySubIDs_75.insert(Nested2PartySubID_75.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_75(72552480);
          noNested2PartySubIDs_0_0_1_3_0.set(Nested2PartySubIDType_75);
          NstdPtys2SubGrp_NoNested2PartySubIDs_75.insert(Nested2PartySubIDType_75.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_75);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_76;
          FIX::Nested2PartySubID Nested2PartySubID_76("STRING_427894638");
          noNested2PartySubIDs_0_0_1_3_1.set(Nested2PartySubID_76);
          NstdPtys2SubGrp_NoNested2PartySubIDs_76.insert(Nested2PartySubID_76.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_76(1229775634);
          noNested2PartySubIDs_0_0_1_3_1.set(Nested2PartySubIDType_76);
          NstdPtys2SubGrp_NoNested2PartySubIDs_76.insert(Nested2PartySubIDType_76.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_76);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_77;
          FIX::Nested2PartySubID Nested2PartySubID_77("STRING_1222614747");
          noNested2PartySubIDs_0_0_1_3_2.set(Nested2PartySubID_77);
          NstdPtys2SubGrp_NoNested2PartySubIDs_77.insert(Nested2PartySubID_77.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_77(658457340);
          noNested2PartySubIDs_0_0_1_3_2.set(Nested2PartySubIDType_77);
          NstdPtys2SubGrp_NoNested2PartySubIDs_77.insert(Nested2PartySubIDType_77.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_77);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_2);
        }
        noAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_1);
      }
      noSides_0_0.addGroup(noAllocs_0_1_0);
    }
    msg.addGroup(noSides_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoSides noSides_0_1;
    // TrdCapRptSideGrp.NoSides
    multiset<string> TrdCapRptSideGrp_NoSides_1;
    FIX::Account Account_46("STRING_835127309");
    noSides_0_1.set(Account_46);
    TrdCapRptSideGrp_NoSides_1.insert(Account_46.getString());
    FIX::AccountType AccountType_39(6);
    noSides_0_1.set(AccountType_39);
    TrdCapRptSideGrp_NoSides_1.insert(AccountType_39.getString());
    FIX::AccruedInterestAmt AccruedInterestAmt_11;
    AccruedInterestAmt_11.setString("3538225");
    noSides_0_1.set(AccruedInterestAmt_11);
    TrdCapRptSideGrp_NoSides_1.insert(AccruedInterestAmt_11.getString());
    FIX::AccruedInterestRate AccruedInterestRate_6;
    AccruedInterestRate_6.setString("79.190000");
    noSides_0_1.set(AccruedInterestRate_6);
    TrdCapRptSideGrp_NoSides_1.insert(AccruedInterestRate_6.getString());
    FIX::AcctIDSource AcctIDSource_39(4);
    noSides_0_1.set(AcctIDSource_39);
    TrdCapRptSideGrp_NoSides_1.insert(AcctIDSource_39.getString());
    FIX::AggressorIndicator AggressorIndicator_2(false);
    noSides_0_1.set(AggressorIndicator_2);
    TrdCapRptSideGrp_NoSides_1.insert(AggressorIndicator_2.getString());
    FIX::AllocID AllocID_22("STRING_1898136953");
    noSides_0_1.set(AllocID_22);
    TrdCapRptSideGrp_NoSides_1.insert(AllocID_22.getString());
    FIX::ComplianceID ComplianceID_13("STRING_325923104");
    noSides_0_1.set(ComplianceID_13);
    TrdCapRptSideGrp_NoSides_1.insert(ComplianceID_13.getString());
    FIX::Concession Concession_6;
    Concession_6.setString("16384659");
    noSides_0_1.set(Concession_6);
    TrdCapRptSideGrp_NoSides_1.insert(Concession_6.getString());
    FIX::CustOrderCapacity CustOrderCapacity_21(1);
    noSides_0_1.set(CustOrderCapacity_21);
    TrdCapRptSideGrp_NoSides_1.insert(CustOrderCapacity_21.getString());
    FIX::EncodedText EncodedText_101("DATA_1034616553");
    noSides_0_1.set(EncodedText_101);
    TrdCapRptSideGrp_NoSides_1.insert(EncodedText_101.getString());
    FIX::EncodedTextLen EncodedTextLen_101(1991827333);
    noSides_0_1.set(EncodedTextLen_101);
    TrdCapRptSideGrp_NoSides_1.insert(EncodedTextLen_101.getString());
    FIX::EndAccruedInterestAmt EndAccruedInterestAmt_11;
    EndAccruedInterestAmt_11.setString("17601113");
    noSides_0_1.set(EndAccruedInterestAmt_11);
    TrdCapRptSideGrp_NoSides_1.insert(EndAccruedInterestAmt_11.getString());
    FIX::EndCash EndCash_11;
    EndCash_11.setString("12125840");
    noSides_0_1.set(EndCash_11);
    TrdCapRptSideGrp_NoSides_1.insert(EndCash_11.getString());
    FIX::ExDate ExDate_3("LOCALMKTDATE_1536156512");
    noSides_0_1.set(ExDate_3);
    TrdCapRptSideGrp_NoSides_1.insert(ExDate_3.getString());
    FIX::ExchangeRule ExchangeRule_1("STRING_619405033");
    noSides_0_1.set(ExchangeRule_1);
    TrdCapRptSideGrp_NoSides_1.insert(ExchangeRule_1.getString());
    FIX::ExchangeSpecialInstructions ExchangeSpecialInstructions_1("STRING_998105381");
    noSides_0_1.set(ExchangeSpecialInstructions_1);
    TrdCapRptSideGrp_NoSides_1.insert(ExchangeSpecialInstructions_1.getString());
    FIX::InterestAtMaturity InterestAtMaturity_6;
    InterestAtMaturity_6.setString("21103095");
    noSides_0_1.set(InterestAtMaturity_6);
    TrdCapRptSideGrp_NoSides_1.insert(InterestAtMaturity_6.getString());
    FIX::NetGrossInd NetGrossInd_10(1);
    noSides_0_1.set(NetGrossInd_10);
    TrdCapRptSideGrp_NoSides_1.insert(NetGrossInd_10.getString());
    FIX::NetMoney NetMoney_6;
    NetMoney_6.setString("12320544");
    noSides_0_1.set(NetMoney_6);
    TrdCapRptSideGrp_NoSides_1.insert(NetMoney_6.getString());
    FIX::NumDaysInterest NumDaysInterest_6(42747711);
    noSides_0_1.set(NumDaysInterest_6);
    TrdCapRptSideGrp_NoSides_1.insert(NumDaysInterest_6.getString());
    FIX::OddLot OddLot_1(false);
    noSides_0_1.set(OddLot_1);
    TrdCapRptSideGrp_NoSides_1.insert(OddLot_1.getString());
    FIX::OrderCategory OrderCategory_2('8');
    noSides_0_1.set(OrderCategory_2);
    TrdCapRptSideGrp_NoSides_1.insert(OrderCategory_2.getString());
    FIX::OrderDelay OrderDelay_1(1452350879);
    noSides_0_1.set(OrderDelay_1);
    TrdCapRptSideGrp_NoSides_1.insert(OrderDelay_1.getString());
    FIX::OrderDelayUnit OrderDelayUnit_1(2);
    noSides_0_1.set(OrderDelayUnit_1);
    TrdCapRptSideGrp_NoSides_1.insert(OrderDelayUnit_1.getString());
    FIX::PositionEffect PositionEffect_18('D');
    noSides_0_1.set(PositionEffect_18);
    TrdCapRptSideGrp_NoSides_1.insert(PositionEffect_18.getString());
    FIX::PreallocMethod PreallocMethod_15('1');
    noSides_0_1.set(PreallocMethod_15);
    TrdCapRptSideGrp_NoSides_1.insert(PreallocMethod_15.getString());
    FIX::ProcessCode ProcessCode_14('4');
    noSides_0_1.set(ProcessCode_14);
    TrdCapRptSideGrp_NoSides_1.insert(ProcessCode_14.getString());
    FIX::RptSeq RptSeq_5(308197195);
    noSides_0_1.set(RptSeq_5);
    TrdCapRptSideGrp_NoSides_1.insert(RptSeq_5.getString());
    FIX::SettlCurrAmt SettlCurrAmt_10;
    SettlCurrAmt_10.setString("6000344");
    noSides_0_1.set(SettlCurrAmt_10);
    TrdCapRptSideGrp_NoSides_1.insert(SettlCurrAmt_10.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_10;
    SettlCurrFxRate_10.setString("10954617");
    noSides_0_1.set(SettlCurrFxRate_10);
    TrdCapRptSideGrp_NoSides_1.insert(SettlCurrFxRate_10.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_10('M');
    noSides_0_1.set(SettlCurrFxRateCalc_10);
    TrdCapRptSideGrp_NoSides_1.insert(SettlCurrFxRateCalc_10.getString());
    FIX::Side Side_51('G');
    noSides_0_1.set(Side_51);
    TrdCapRptSideGrp_NoSides_1.insert(Side_51.getString());
    FIX::SideCurrency SideCurrency_1("USD");
    noSides_0_1.set(SideCurrency_1);
    TrdCapRptSideGrp_NoSides_1.insert(SideCurrency_1.getString());
    FIX::SideExecID SideExecID_1("STRING_552324882");
    noSides_0_1.set(SideExecID_1);
    TrdCapRptSideGrp_NoSides_1.insert(SideExecID_1.getString());
    FIX::SideFillStationCd SideFillStationCd_1("STRING_902091539");
    noSides_0_1.set(SideFillStationCd_1);
    TrdCapRptSideGrp_NoSides_1.insert(SideFillStationCd_1.getString());
    FIX::SideGrossTradeAmt SideGrossTradeAmt_1;
    SideGrossTradeAmt_1.setString("15551857");
    noSides_0_1.set(SideGrossTradeAmt_1);
    TrdCapRptSideGrp_NoSides_1.insert(SideGrossTradeAmt_1.getString());
    FIX::SideLastQty SideLastQty_1(878247986);
    noSides_0_1.set(SideLastQty_1);
    TrdCapRptSideGrp_NoSides_1.insert(SideLastQty_1.getString());
    FIX::SideLiquidityInd SideLiquidityInd_1(393073884);
    noSides_0_1.set(SideLiquidityInd_1);
    TrdCapRptSideGrp_NoSides_1.insert(SideLiquidityInd_1.getString());
    FIX::SideMultiLegReportingType SideMultiLegReportingType_1(1);
    noSides_0_1.set(SideMultiLegReportingType_1);
    TrdCapRptSideGrp_NoSides_1.insert(SideMultiLegReportingType_1.getString());
    FIX::SideReasonCd SideReasonCd_1("STRING_1912864539");
    noSides_0_1.set(SideReasonCd_1);
    TrdCapRptSideGrp_NoSides_1.insert(SideReasonCd_1.getString());
    FIX::SideSettlCurrency SideSettlCurrency_1("USD");
    noSides_0_1.set(SideSettlCurrency_1);
    TrdCapRptSideGrp_NoSides_1.insert(SideSettlCurrency_1.getString());
    FIX::SideTradeReportID SideTradeReportID_1("STRING_977964969");
    noSides_0_1.set(SideTradeReportID_1);
    TrdCapRptSideGrp_NoSides_1.insert(SideTradeReportID_1.getString());
    FIX::SideTrdSubTyp SideTrdSubTyp_1(1773574081);
    noSides_0_1.set(SideTrdSubTyp_1);
    TrdCapRptSideGrp_NoSides_1.insert(SideTrdSubTyp_1.getString());
    FIX::SolicitedFlag SolicitedFlag_15(false);
    noSides_0_1.set(SolicitedFlag_15);
    TrdCapRptSideGrp_NoSides_1.insert(SolicitedFlag_15.getString());
    FIX::StartCash StartCash_11;
    StartCash_11.setString("19760703");
    noSides_0_1.set(StartCash_11);
    TrdCapRptSideGrp_NoSides_1.insert(StartCash_11.getString());
    FIX::Text Text_101("STRING_1736399999");
    noSides_0_1.set(Text_101);
    TrdCapRptSideGrp_NoSides_1.insert(Text_101.getString());
    FIX::TimeBracket TimeBracket_2("STRING_1361100734");
    noSides_0_1.set(TimeBracket_2);
    TrdCapRptSideGrp_NoSides_1.insert(TimeBracket_2.getString());
    FIX::TotalTakedown TotalTakedown_6;
    TotalTakedown_6.setString("10606411");
    noSides_0_1.set(TotalTakedown_6);
    TrdCapRptSideGrp_NoSides_1.insert(TotalTakedown_6.getString());
    FIX::TradeAllocIndicator TradeAllocIndicator_1(3);
    noSides_0_1.set(TradeAllocIndicator_1);
    TrdCapRptSideGrp_NoSides_1.insert(TradeAllocIndicator_1.getString());
    FIX::TradeInputDevice TradeInputDevice_2("STRING_608316131");
    noSides_0_1.set(TradeInputDevice_2);
    TrdCapRptSideGrp_NoSides_1.insert(TradeInputDevice_2.getString());
    FIX::TradeInputSource TradeInputSource_4("STRING_973431967");
    noSides_0_1.set(TradeInputSource_4);
    TrdCapRptSideGrp_NoSides_1.insert(TradeInputSource_4.getString());
    FIX::TradingSessionID TradingSessionID_118("STRING_1");
    noSides_0_1.set(TradingSessionID_118);
    TrdCapRptSideGrp_NoSides_1.insert(TradingSessionID_118.getString());
    FIX::TradingSessionSubID TradingSessionSubID_118("STRING_5");
    noSides_0_1.set(TradingSessionSubID_118);
    TrdCapRptSideGrp_NoSides_1.insert(TradingSessionSubID_118.getString());
    all_values.push_back(TrdCapRptSideGrp_NoSides_1);
    all_compo_names.insert("TrdCapRptSideGrp.NoSides");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoClearingInstructions noClearingInstructions_1_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_8;
      FIX::ClearingInstruction ClearingInstruction_8(2);
      noClearingInstructions_1_1_0.set(ClearingInstruction_8);
      ClrInstGrp_NoClearingInstructions_8.insert(ClearingInstruction_8.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_8);
      all_compo_names.insert("ClrInstGrp.NoClearingInstructions");

      noSides_0_1.addGroup(noClearingInstructions_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoClearingInstructions noClearingInstructions_1_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_9;
      FIX::ClearingInstruction ClearingInstruction_9(1);
      noClearingInstructions_1_1_1.set(ClearingInstruction_9);
      ClrInstGrp_NoClearingInstructions_9.insert(ClearingInstruction_9.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_9);
      all_compo_names.insert("ClrInstGrp.NoClearingInstructions");

      noSides_0_1.addGroup(noClearingInstructions_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoClearingInstructions noClearingInstructions_1_1_2;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_10;
      FIX::ClearingInstruction ClearingInstruction_10(12);
      noClearingInstructions_1_1_2.set(ClearingInstruction_10);
      ClrInstGrp_NoClearingInstructions_10.insert(ClearingInstruction_10.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_10);
      all_compo_names.insert("ClrInstGrp.NoClearingInstructions");

      noSides_0_1.addGroup(noClearingInstructions_1_1_2);
    }
    // CommissionData
    multiset<string> CommissionData_23;
    FIX::CommCurrency CommCurrency_23("USD");
    noSides_0_1.set(CommCurrency_23);
    CommissionData_23.insert(CommCurrency_23.getString());
    FIX::CommType CommType_26('2');
    noSides_0_1.set(CommType_26);
    CommissionData_23.insert(CommType_26.getString());
    FIX::Commission Commission_26;
    Commission_26.setString("19572894");
    noSides_0_1.set(Commission_26);
    CommissionData_23.insert(Commission_26.getString());
    FIX::FundRenewWaiv FundRenewWaiv_23('N');
    noSides_0_1.set(FundRenewWaiv_23);
    CommissionData_23.insert(FundRenewWaiv_23.getString());
    all_values.push_back(CommissionData_23);
    all_compo_names.insert("CommissionData");

    // ContAmtGrp
    // Group ContAmtGrp.NoContAmts
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoContAmts noContAmts_1_1_0;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_3;
      FIX::ContAmtCurr ContAmtCurr_3("USD");
      noContAmts_1_1_0.set(ContAmtCurr_3);
      ContAmtGrp_NoContAmts_3.insert(ContAmtCurr_3.getString());
      FIX::ContAmtType ContAmtType_3(7);
      noContAmts_1_1_0.set(ContAmtType_3);
      ContAmtGrp_NoContAmts_3.insert(ContAmtType_3.getString());
      FIX::ContAmtValue ContAmtValue_3;
      ContAmtValue_3.setString("12403786");
      noContAmts_1_1_0.set(ContAmtValue_3);
      ContAmtGrp_NoContAmts_3.insert(ContAmtValue_3.getString());
      all_values.push_back(ContAmtGrp_NoContAmts_3);
      all_compo_names.insert("ContAmtGrp.NoContAmts");

      noSides_0_1.addGroup(noContAmts_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoContAmts noContAmts_1_1_1;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_4;
      FIX::ContAmtCurr ContAmtCurr_4("CHF");
      noContAmts_1_1_1.set(ContAmtCurr_4);
      ContAmtGrp_NoContAmts_4.insert(ContAmtCurr_4.getString());
      FIX::ContAmtType ContAmtType_4(3);
      noContAmts_1_1_1.set(ContAmtType_4);
      ContAmtGrp_NoContAmts_4.insert(ContAmtType_4.getString());
      FIX::ContAmtValue ContAmtValue_4;
      ContAmtValue_4.setString("8367918");
      noContAmts_1_1_1.set(ContAmtValue_4);
      ContAmtGrp_NoContAmts_4.insert(ContAmtValue_4.getString());
      all_values.push_back(ContAmtGrp_NoContAmts_4);
      all_compo_names.insert("ContAmtGrp.NoContAmts");

      noSides_0_1.addGroup(noContAmts_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoContAmts noContAmts_1_1_2;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_5;
      FIX::ContAmtCurr ContAmtCurr_5("CHF");
      noContAmts_1_1_2.set(ContAmtCurr_5);
      ContAmtGrp_NoContAmts_5.insert(ContAmtCurr_5.getString());
      FIX::ContAmtType ContAmtType_5(12);
      noContAmts_1_1_2.set(ContAmtType_5);
      ContAmtGrp_NoContAmts_5.insert(ContAmtType_5.getString());
      FIX::ContAmtValue ContAmtValue_5;
      ContAmtValue_5.setString("11190810");
      noContAmts_1_1_2.set(ContAmtValue_5);
      ContAmtGrp_NoContAmts_5.insert(ContAmtValue_5.getString());
      all_values.push_back(ContAmtGrp_NoContAmts_5);
      all_compo_names.insert("ContAmtGrp.NoContAmts");

      noSides_0_1.addGroup(noContAmts_1_1_2);
    }
    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoMiscFees noMiscFees_1_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_24;
      FIX::MiscFeeAmt MiscFeeAmt_24;
      MiscFeeAmt_24.setString("517986");
      noMiscFees_1_1_0.set(MiscFeeAmt_24);
      MiscFeesGrp_NoMiscFees_24.insert(MiscFeeAmt_24.getString());
      FIX::MiscFeeBasis MiscFeeBasis_24(2);
      noMiscFees_1_1_0.set(MiscFeeBasis_24);
      MiscFeesGrp_NoMiscFees_24.insert(MiscFeeBasis_24.getString());
      FIX::MiscFeeCurr MiscFeeCurr_24("CAN");
      noMiscFees_1_1_0.set(MiscFeeCurr_24);
      MiscFeesGrp_NoMiscFees_24.insert(MiscFeeCurr_24.getString());
      FIX::MiscFeeType MiscFeeType_24("STRING_1");
      noMiscFees_1_1_0.set(MiscFeeType_24);
      MiscFeesGrp_NoMiscFees_24.insert(MiscFeeType_24.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_24);
      all_compo_names.insert("MiscFeesGrp.NoMiscFees");

      noSides_0_1.addGroup(noMiscFees_1_1_0);
    }
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_154;
      FIX::PartyID PartyID_154("STRING_767477638");
      noPartyIDs_1_1_0.set(PartyID_154);
      Parties_NoPartyIDs_154.insert(PartyID_154.getString());
      FIX::PartyIDSource PartyIDSource_154('G');
      noPartyIDs_1_1_0.set(PartyIDSource_154);
      Parties_NoPartyIDs_154.insert(PartyIDSource_154.getString());
      FIX::PartyRole PartyRole_154(51);
      noPartyIDs_1_1_0.set(PartyRole_154);
      Parties_NoPartyIDs_154.insert(PartyRole_154.getString());
      all_values.push_back(Parties_NoPartyIDs_154);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_327;
        FIX::PartySubID PartySubID_327("STRING_465386743");
        noPartySubIDs_1_0_2_0.set(PartySubID_327);
        PtysSubGrp_NoPartySubIDs_327.insert(PartySubID_327.getString());
        FIX::PartySubIDType PartySubIDType_327(27);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_327);
        PtysSubGrp_NoPartySubIDs_327.insert(PartySubIDType_327.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_327);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_328;
        FIX::PartySubID PartySubID_328("STRING_142897756");
        noPartySubIDs_1_0_2_1.set(PartySubID_328);
        PtysSubGrp_NoPartySubIDs_328.insert(PartySubID_328.getString());
        FIX::PartySubIDType PartySubIDType_328(5);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_328);
        PtysSubGrp_NoPartySubIDs_328.insert(PartySubIDType_328.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_328);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_329;
        FIX::PartySubID PartySubID_329("STRING_1466696479");
        noPartySubIDs_1_0_2_2.set(PartySubID_329);
        PtysSubGrp_NoPartySubIDs_329.insert(PartySubID_329.getString());
        FIX::PartySubIDType PartySubIDType_329(18);
        noPartySubIDs_1_0_2_2.set(PartySubIDType_329);
        PtysSubGrp_NoPartySubIDs_329.insert(PartySubIDType_329.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_329);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_2);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_155;
      FIX::PartyID PartyID_155("STRING_1919487538");
      noPartyIDs_1_1_1.set(PartyID_155);
      Parties_NoPartyIDs_155.insert(PartyID_155.getString());
      FIX::PartyIDSource PartyIDSource_155('G');
      noPartyIDs_1_1_1.set(PartyIDSource_155);
      Parties_NoPartyIDs_155.insert(PartyIDSource_155.getString());
      FIX::PartyRole PartyRole_155(75);
      noPartyIDs_1_1_1.set(PartyRole_155);
      Parties_NoPartyIDs_155.insert(PartyRole_155.getString());
      all_values.push_back(Parties_NoPartyIDs_155);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_330;
        FIX::PartySubID PartySubID_330("STRING_1047762922");
        noPartySubIDs_1_1_2_0.set(PartySubID_330);
        PtysSubGrp_NoPartySubIDs_330.insert(PartySubID_330.getString());
        FIX::PartySubIDType PartySubIDType_330(30);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_330);
        PtysSubGrp_NoPartySubIDs_330.insert(PartySubIDType_330.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_330);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_331;
        FIX::PartySubID PartySubID_331("STRING_577678562");
        noPartySubIDs_1_1_2_1.set(PartySubID_331);
        PtysSubGrp_NoPartySubIDs_331.insert(PartySubID_331.getString());
        FIX::PartySubIDType PartySubIDType_331(12);
        noPartySubIDs_1_1_2_1.set(PartySubIDType_331);
        PtysSubGrp_NoPartySubIDs_331.insert(PartySubIDType_331.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_331);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs noPartyIDs_1_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_156;
      FIX::PartyID PartyID_156("STRING_413488689");
      noPartyIDs_1_1_2.set(PartyID_156);
      Parties_NoPartyIDs_156.insert(PartyID_156.getString());
      FIX::PartyIDSource PartyIDSource_156('3');
      noPartyIDs_1_1_2.set(PartyIDSource_156);
      Parties_NoPartyIDs_156.insert(PartyIDSource_156.getString());
      FIX::PartyRole PartyRole_156(80);
      noPartyIDs_1_1_2.set(PartyRole_156);
      Parties_NoPartyIDs_156.insert(PartyRole_156.getString());
      all_values.push_back(Parties_NoPartyIDs_156);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_332;
        FIX::PartySubID PartySubID_332("STRING_1877352690");
        noPartySubIDs_1_2_2_0.set(PartySubID_332);
        PtysSubGrp_NoPartySubIDs_332.insert(PartySubID_332.getString());
        FIX::PartySubIDType PartySubIDType_332(27);
        noPartySubIDs_1_2_2_0.set(PartySubIDType_332);
        PtysSubGrp_NoPartySubIDs_332.insert(PartySubIDType_332.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_332);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_333;
        FIX::PartySubID PartySubID_333("STRING_2062040737");
        noPartySubIDs_1_2_2_1.set(PartySubID_333);
        PtysSubGrp_NoPartySubIDs_333.insert(PartySubID_333.getString());
        FIX::PartySubIDType PartySubIDType_333(1);
        noPartySubIDs_1_2_2_1.set(PartySubIDType_333);
        PtysSubGrp_NoPartySubIDs_333.insert(PartySubIDType_333.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_333);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_1);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_2);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails noSettlDetails_1_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_8;
      FIX::SettlObligSource SettlObligSource_8('1');
      noSettlDetails_1_1_0.set(SettlObligSource_8);
      SettlDetails_NoSettlDetails_8.insert(SettlObligSource_8.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_8);
      all_compo_names.insert("SettlDetails.NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_43;
        FIX::SettlPartyID SettlPartyID_43("STRING_600763619");
        noSettlPartyIDs_1_0_2_0.set(SettlPartyID_43);
        SettlParties_NoSettlPartyIDs_43.insert(SettlPartyID_43.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_43('1');
        noSettlPartyIDs_1_0_2_0.set(SettlPartyIDSource_43);
        SettlParties_NoSettlPartyIDs_43.insert(SettlPartyIDSource_43.getString());
        FIX::SettlPartyRole SettlPartyRole_43(232608008);
        noSettlPartyIDs_1_0_2_0.set(SettlPartyRole_43);
        SettlParties_NoSettlPartyIDs_43.insert(SettlPartyRole_43.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_43);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_82;
          FIX::SettlPartySubID SettlPartySubID_82("STRING_1942196936");
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubID_82);
          SettlPtysSubGrp_NoSettlPartySubIDs_82.insert(SettlPartySubID_82.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_82(1461520300);
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubIDType_82);
          SettlPtysSubGrp_NoSettlPartySubIDs_82.insert(SettlPartySubIDType_82.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_82);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_83;
          FIX::SettlPartySubID SettlPartySubID_83("STRING_477106874");
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubID_83);
          SettlPtysSubGrp_NoSettlPartySubIDs_83.insert(SettlPartySubID_83.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_83(1905518186);
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubIDType_83);
          SettlPtysSubGrp_NoSettlPartySubIDs_83.insert(SettlPartySubIDType_83.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_83);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_1);
        }
        noSettlDetails_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      noSides_0_1.addGroup(noSettlDetails_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails noSettlDetails_1_1_1;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_9;
      FIX::SettlObligSource SettlObligSource_9('1');
      noSettlDetails_1_1_1.set(SettlObligSource_9);
      SettlDetails_NoSettlDetails_9.insert(SettlObligSource_9.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_9);
      all_compo_names.insert("SettlDetails.NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_44;
        FIX::SettlPartyID SettlPartyID_44("STRING_1224731017");
        noSettlPartyIDs_1_1_2_0.set(SettlPartyID_44);
        SettlParties_NoSettlPartyIDs_44.insert(SettlPartyID_44.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_44('1');
        noSettlPartyIDs_1_1_2_0.set(SettlPartyIDSource_44);
        SettlParties_NoSettlPartyIDs_44.insert(SettlPartyIDSource_44.getString());
        FIX::SettlPartyRole SettlPartyRole_44(716905799);
        noSettlPartyIDs_1_1_2_0.set(SettlPartyRole_44);
        SettlParties_NoSettlPartyIDs_44.insert(SettlPartyRole_44.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_44);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_84;
          FIX::SettlPartySubID SettlPartySubID_84("STRING_1871955754");
          noSettlPartySubIDs_1_1_0_3_0.set(SettlPartySubID_84);
          SettlPtysSubGrp_NoSettlPartySubIDs_84.insert(SettlPartySubID_84.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_84(695210083);
          noSettlPartySubIDs_1_1_0_3_0.set(SettlPartySubIDType_84);
          SettlPtysSubGrp_NoSettlPartySubIDs_84.insert(SettlPartySubIDType_84.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_84);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_85;
          FIX::SettlPartySubID SettlPartySubID_85("STRING_604647127");
          noSettlPartySubIDs_1_1_0_3_1.set(SettlPartySubID_85);
          SettlPtysSubGrp_NoSettlPartySubIDs_85.insert(SettlPartySubID_85.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_85(1279684916);
          noSettlPartySubIDs_1_1_0_3_1.set(SettlPartySubIDType_85);
          SettlPtysSubGrp_NoSettlPartySubIDs_85.insert(SettlPartySubIDType_85.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_85);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_86;
          FIX::SettlPartySubID SettlPartySubID_86("STRING_1272888645");
          noSettlPartySubIDs_1_1_0_3_2.set(SettlPartySubID_86);
          SettlPtysSubGrp_NoSettlPartySubIDs_86.insert(SettlPartySubID_86.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_86(1024311900);
          noSettlPartySubIDs_1_1_0_3_2.set(SettlPartySubIDType_86);
          SettlPtysSubGrp_NoSettlPartySubIDs_86.insert(SettlPartySubIDType_86.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_86);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_2);
        }
        noSettlDetails_1_1_1.addGroup(noSettlPartyIDs_1_1_2_0);
      }
      noSides_0_1.addGroup(noSettlDetails_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails noSettlDetails_1_1_2;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_10;
      FIX::SettlObligSource SettlObligSource_10('3');
      noSettlDetails_1_1_2.set(SettlObligSource_10);
      SettlDetails_NoSettlDetails_10.insert(SettlObligSource_10.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_10);
      all_compo_names.insert("SettlDetails.NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_45;
        FIX::SettlPartyID SettlPartyID_45("STRING_1379765622");
        noSettlPartyIDs_1_2_2_0.set(SettlPartyID_45);
        SettlParties_NoSettlPartyIDs_45.insert(SettlPartyID_45.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_45('1');
        noSettlPartyIDs_1_2_2_0.set(SettlPartyIDSource_45);
        SettlParties_NoSettlPartyIDs_45.insert(SettlPartyIDSource_45.getString());
        FIX::SettlPartyRole SettlPartyRole_45(269744449);
        noSettlPartyIDs_1_2_2_0.set(SettlPartyRole_45);
        SettlParties_NoSettlPartyIDs_45.insert(SettlPartyRole_45.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_45);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_87;
          FIX::SettlPartySubID SettlPartySubID_87("STRING_1857460232");
          noSettlPartySubIDs_1_2_0_3_0.set(SettlPartySubID_87);
          SettlPtysSubGrp_NoSettlPartySubIDs_87.insert(SettlPartySubID_87.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_87(51412124);
          noSettlPartySubIDs_1_2_0_3_0.set(SettlPartySubIDType_87);
          SettlPtysSubGrp_NoSettlPartySubIDs_87.insert(SettlPartySubIDType_87.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_87);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_2_2_0.addGroup(noSettlPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_88;
          FIX::SettlPartySubID SettlPartySubID_88("STRING_366566098");
          noSettlPartySubIDs_1_2_0_3_1.set(SettlPartySubID_88);
          SettlPtysSubGrp_NoSettlPartySubIDs_88.insert(SettlPartySubID_88.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_88(350002351);
          noSettlPartySubIDs_1_2_0_3_1.set(SettlPartySubIDType_88);
          SettlPtysSubGrp_NoSettlPartySubIDs_88.insert(SettlPartySubIDType_88.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_88);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_2_2_0.addGroup(noSettlPartySubIDs_1_2_0_3_1);
        }
        noSettlDetails_1_1_2.addGroup(noSettlPartyIDs_1_2_2_0);
      }
      noSides_0_1.addGroup(noSettlDetails_1_1_2);
    }
    // SideTrdRegTS
    // Group SideTrdRegTS.NoSideTrdRegTS
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSideTrdRegTS noSideTrdRegTS_1_1_0;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_2;
      FIX::SideTrdRegTimestamp SideTrdRegTimestamp_2(FIX::UTCTIMESTAMP(2, 11, 28, 6, 9, 2012));
      noSideTrdRegTS_1_1_0.set(SideTrdRegTimestamp_2);
      SideTrdRegTS_NoSideTrdRegTS_2.insert(SideTrdRegTimestamp_2.getString());
      FIX::SideTrdRegTimestampSrc SideTrdRegTimestampSrc_2("STRING_94192941");
      noSideTrdRegTS_1_1_0.set(SideTrdRegTimestampSrc_2);
      SideTrdRegTS_NoSideTrdRegTS_2.insert(SideTrdRegTimestampSrc_2.getString());
      FIX::SideTrdRegTimestampType SideTrdRegTimestampType_2(667605213);
      noSideTrdRegTS_1_1_0.set(SideTrdRegTimestampType_2);
      SideTrdRegTS_NoSideTrdRegTS_2.insert(SideTrdRegTimestampType_2.getString());
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_2);
      all_compo_names.insert("SideTrdRegTS.NoSideTrdRegTS");

      noSides_0_1.addGroup(noSideTrdRegTS_1_1_0);
    }
    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoStipulations noStipulations_1_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_59;
      FIX::StipulationType StipulationType_59("STRING_SECTYPE");
      noStipulations_1_1_0.set(StipulationType_59);
      Stipulations_NoStipulations_59.insert(StipulationType_59.getString());
      FIX::StipulationValue StipulationValue_59("STRING_77243146");
      noStipulations_1_1_0.set(StipulationValue_59);
      Stipulations_NoStipulations_59.insert(StipulationValue_59.getString());
      all_values.push_back(Stipulations_NoStipulations_59);
      all_compo_names.insert("Stipulations.NoStipulations");

      noSides_0_1.addGroup(noStipulations_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoStipulations noStipulations_1_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_60;
      FIX::StipulationType StipulationType_60("STRING_MAXORDQTY");
      noStipulations_1_1_1.set(StipulationType_60);
      Stipulations_NoStipulations_60.insert(StipulationType_60.getString());
      FIX::StipulationValue StipulationValue_60("STRING_875808164");
      noStipulations_1_1_1.set(StipulationValue_60);
      Stipulations_NoStipulations_60.insert(StipulationValue_60.getString());
      all_values.push_back(Stipulations_NoStipulations_60);
      all_compo_names.insert("Stipulations.NoStipulations");

      noSides_0_1.addGroup(noStipulations_1_1_1);
    }
    // TradeReportOrderDetail
    multiset<string> TradeReportOrderDetail_1;
    FIX::BookingType BookingType_35(2);
    noSides_0_1.set(BookingType_35);
    TradeReportOrderDetail_1.insert(BookingType_35.getString());
    FIX::ClOrdID ClOrdID_48("STRING_1665690866");
    noSides_0_1.set(ClOrdID_48);
    TradeReportOrderDetail_1.insert(ClOrdID_48.getString());
    FIX::CumQty CumQty_4;
    CumQty_4.setString("14804552");
    noSides_0_1.set(CumQty_4);
    TradeReportOrderDetail_1.insert(CumQty_4.getString());
    FIX::ExecInst ExecInst_14("MULTIPLECHARVALUE_G");
    noSides_0_1.set(ExecInst_14);
    TradeReportOrderDetail_1.insert(ExecInst_14.getString());
    FIX::ExpireTime ExpireTime_26(FIX::UTCTIMESTAMP(8, 5, 31, 6, 1, 2002));
    noSides_0_1.set(ExpireTime_26);
    TradeReportOrderDetail_1.insert(ExpireTime_26.getString());
    FIX::LeavesQty LeavesQty_3;
    LeavesQty_3.setString("2963822");
    noSides_0_1.set(LeavesQty_3);
    TradeReportOrderDetail_1.insert(LeavesQty_3.getString());
    FIX::ListID ListID_27("STRING_132486205");
    noSides_0_1.set(ListID_27);
    TradeReportOrderDetail_1.insert(ListID_27.getString());
    FIX::LotType LotType_37('2');
    noSides_0_1.set(LotType_37);
    TradeReportOrderDetail_1.insert(LotType_37.getString());
    FIX::OrdStatus OrdStatus_4('8');
    noSides_0_1.set(OrdStatus_4);
    TradeReportOrderDetail_1.insert(OrdStatus_4.getString());
    FIX::OrdType OrdType_94('L');
    noSides_0_1.set(OrdType_94);
    TradeReportOrderDetail_1.insert(OrdType_94.getString());
    FIX::OrderCapacity OrderCapacity_37('A');
    noSides_0_1.set(OrderCapacity_37);
    TradeReportOrderDetail_1.insert(OrderCapacity_37.getString());
    FIX::OrderID OrderID_33("STRING_1630278110");
    noSides_0_1.set(OrderID_33);
    TradeReportOrderDetail_1.insert(OrderID_33.getString());
    FIX::OrderInputDevice OrderInputDevice_1("STRING_1023933670");
    noSides_0_1.set(OrderInputDevice_1);
    TradeReportOrderDetail_1.insert(OrderInputDevice_1.getString());
    FIX::OrderRestrictions OrderRestrictions_34("MULTIPLECHARVALUE_4");
    noSides_0_1.set(OrderRestrictions_34);
    TradeReportOrderDetail_1.insert(OrderRestrictions_34.getString());
    FIX::OrigCustOrderCapacity OrigCustOrderCapacity_1(3);
    noSides_0_1.set(OrigCustOrderCapacity_1);
    TradeReportOrderDetail_1.insert(OrigCustOrderCapacity_1.getString());
    FIX::OrigOrdModTime OrigOrdModTime_6(FIX::UTCTIMESTAMP(23, 52, 33, 16, 5, 2000));
    noSides_0_1.set(OrigOrdModTime_6);
    TradeReportOrderDetail_1.insert(OrigOrdModTime_6.getString());
    FIX::Price Price_27;
    Price_27.setString("7258563");
    noSides_0_1.set(Price_27);
    TradeReportOrderDetail_1.insert(Price_27.getString());
    FIX::RefOrdIDReason RefOrdIDReason_1(2);
    noSides_0_1.set(RefOrdIDReason_1);
    TradeReportOrderDetail_1.insert(RefOrdIDReason_1.getString());
    FIX::RefOrderID RefOrderID_6("STRING_1501533488");
    noSides_0_1.set(RefOrderID_6);
    TradeReportOrderDetail_1.insert(RefOrderID_6.getString());
    FIX::RefOrderIDSource RefOrderIDSource_6('1');
    noSides_0_1.set(RefOrderIDSource_6);
    TradeReportOrderDetail_1.insert(RefOrderIDSource_6.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_41("STRING_512780369");
    noSides_0_1.set(SecondaryClOrdID_41);
    TradeReportOrderDetail_1.insert(SecondaryClOrdID_41.getString());
    FIX::SecondaryOrderID SecondaryOrderID_25("STRING_834505131");
    noSides_0_1.set(SecondaryOrderID_25);
    TradeReportOrderDetail_1.insert(SecondaryOrderID_25.getString());
    FIX::StopPx StopPx_11;
    StopPx_11.setString("16089717");
    noSides_0_1.set(StopPx_11);
    TradeReportOrderDetail_1.insert(StopPx_11.getString());
    FIX::TimeInForce TimeInForce_75('3');
    noSides_0_1.set(TimeInForce_75);
    TradeReportOrderDetail_1.insert(TimeInForce_75.getString());
    FIX::TransBkdTime TransBkdTime_5(FIX::UTCTIMESTAMP(17, 56, 54, 13, 6, 2007));
    noSides_0_1.set(TransBkdTime_5);
    TradeReportOrderDetail_1.insert(TransBkdTime_5.getString());
    all_values.push_back(TradeReportOrderDetail_1);
    all_compo_names.insert("TradeReportOrderDetail");

    // DisplayInstruction
    multiset<string> DisplayInstruction_11;
    FIX::DisplayHighQty DisplayHighQty_11;
    DisplayHighQty_11.setString("6435740");
    noSides_0_1.set(DisplayHighQty_11);
    DisplayInstruction_11.insert(DisplayHighQty_11.getString());
    FIX::DisplayLowQty DisplayLowQty_11;
    DisplayLowQty_11.setString("15927237");
    noSides_0_1.set(DisplayLowQty_11);
    DisplayInstruction_11.insert(DisplayLowQty_11.getString());
    FIX::DisplayMethod DisplayMethod_11('4');
    noSides_0_1.set(DisplayMethod_11);
    DisplayInstruction_11.insert(DisplayMethod_11.getString());
    FIX::DisplayMinIncr DisplayMinIncr_11;
    DisplayMinIncr_11.setString("11260626");
    noSides_0_1.set(DisplayMinIncr_11);
    DisplayInstruction_11.insert(DisplayMinIncr_11.getString());
    FIX::DisplayQty DisplayQty_11;
    DisplayQty_11.setString("6139104");
    noSides_0_1.set(DisplayQty_11);
    DisplayInstruction_11.insert(DisplayQty_11.getString());
    FIX::DisplayWhen DisplayWhen_11('2');
    noSides_0_1.set(DisplayWhen_11);
    DisplayInstruction_11.insert(DisplayWhen_11.getString());
    FIX::RefreshQty RefreshQty_11;
    RefreshQty_11.setString("25126");
    noSides_0_1.set(RefreshQty_11);
    DisplayInstruction_11.insert(RefreshQty_11.getString());
    FIX::SecondaryDisplayQty SecondaryDisplayQty_11;
    SecondaryDisplayQty_11.setString("15317313");
    noSides_0_1.set(SecondaryDisplayQty_11);
    DisplayInstruction_11.insert(SecondaryDisplayQty_11.getString());
    all_values.push_back(DisplayInstruction_11);
    all_compo_names.insert("DisplayInstruction");

    // OrderQtyData
    multiset<string> OrderQtyData_26;
    FIX::CashOrderQty CashOrderQty_26;
    CashOrderQty_26.setString("16853236");
    noSides_0_1.set(CashOrderQty_26);
    OrderQtyData_26.insert(CashOrderQty_26.getString());
    FIX::OrderPercent OrderPercent_26;
    OrderPercent_26.setString("47.330000");
    noSides_0_1.set(OrderPercent_26);
    OrderQtyData_26.insert(OrderPercent_26.getString());
    FIX::OrderQty OrderQty_36;
    OrderQty_36.setString("15127393");
    noSides_0_1.set(OrderQty_36);
    OrderQtyData_26.insert(OrderQty_36.getString());
    FIX::RoundingDirection RoundingDirection_26('2');
    noSides_0_1.set(RoundingDirection_26);
    OrderQtyData_26.insert(RoundingDirection_26.getString());
    FIX::RoundingModulus RoundingModulus_26;
    RoundingModulus_26.setString("6694060");
    noSides_0_1.set(RoundingModulus_26);
    OrderQtyData_26.insert(RoundingModulus_26.getString());
    all_values.push_back(OrderQtyData_26);
    all_compo_names.insert("OrderQtyData");

    // TrdAllocGrp
    // Group TrdAllocGrp.NoAllocs
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoAllocs noAllocs_1_1_0;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_1;
      FIX::AllocAccount AllocAccount_39("STRING_1479933408");
      noAllocs_1_1_0.set(AllocAccount_39);
      TrdAllocGrp_NoAllocs_1.insert(AllocAccount_39.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_39(1295131422);
      noAllocs_1_1_0.set(AllocAcctIDSource_39);
      TrdAllocGrp_NoAllocs_1.insert(AllocAcctIDSource_39.getString());
      FIX::AllocClearingFeeIndicator AllocClearingFeeIndicator_1("STRING_739725232");
      noAllocs_1_1_0.set(AllocClearingFeeIndicator_1);
      TrdAllocGrp_NoAllocs_1.insert(AllocClearingFeeIndicator_1.getString());
      FIX::AllocCustomerCapacity AllocCustomerCapacity_8("STRING_327022911");
      noAllocs_1_1_0.set(AllocCustomerCapacity_8);
      TrdAllocGrp_NoAllocs_1.insert(AllocCustomerCapacity_8.getString());
      FIX::AllocMethod AllocMethod_5(1);
      noAllocs_1_1_0.set(AllocMethod_5);
      TrdAllocGrp_NoAllocs_1.insert(AllocMethod_5.getString());
      FIX::AllocQty AllocQty_37;
      AllocQty_37.setString("12672968");
      noAllocs_1_1_0.set(AllocQty_37);
      TrdAllocGrp_NoAllocs_1.insert(AllocQty_37.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_33("JPY");
      noAllocs_1_1_0.set(AllocSettlCurrency_33);
      TrdAllocGrp_NoAllocs_1.insert(AllocSettlCurrency_33.getString());
      FIX::IndividualAllocID IndividualAllocID_38("STRING_728784974");
      noAllocs_1_1_0.set(IndividualAllocID_38);
      TrdAllocGrp_NoAllocs_1.insert(IndividualAllocID_38.getString());
      FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_8("STRING_2143679514");
      noAllocs_1_1_0.set(SecondaryIndividualAllocID_8);
      TrdAllocGrp_NoAllocs_1.insert(SecondaryIndividualAllocID_8.getString());
      all_values.push_back(TrdAllocGrp_NoAllocs_1);
      all_compo_names.insert("TrdAllocGrp.NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_36;
        FIX::Nested2PartyID Nested2PartyID_36("STRING_817363231");
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyID_36);
        NestedParties2_NoNested2PartyIDs_36.insert(Nested2PartyID_36.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_36('4');
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyIDSource_36);
        NestedParties2_NoNested2PartyIDs_36.insert(Nested2PartyIDSource_36.getString());
        FIX::Nested2PartyRole Nested2PartyRole_36(1309345615);
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyRole_36);
        NestedParties2_NoNested2PartyIDs_36.insert(Nested2PartyRole_36.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_36);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_78;
          FIX::Nested2PartySubID Nested2PartySubID_78("STRING_424155652");
          noNested2PartySubIDs_1_0_0_3_0.set(Nested2PartySubID_78);
          NstdPtys2SubGrp_NoNested2PartySubIDs_78.insert(Nested2PartySubID_78.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_78(239598457);
          noNested2PartySubIDs_1_0_0_3_0.set(Nested2PartySubIDType_78);
          NstdPtys2SubGrp_NoNested2PartySubIDs_78.insert(Nested2PartySubIDType_78.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_78);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_79;
          FIX::Nested2PartySubID Nested2PartySubID_79("STRING_1972025191");
          noNested2PartySubIDs_1_0_0_3_1.set(Nested2PartySubID_79);
          NstdPtys2SubGrp_NoNested2PartySubIDs_79.insert(Nested2PartySubID_79.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_79(2016879426);
          noNested2PartySubIDs_1_0_0_3_1.set(Nested2PartySubIDType_79);
          NstdPtys2SubGrp_NoNested2PartySubIDs_79.insert(Nested2PartySubIDType_79.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_79);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_1);
        }
        noAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_37;
        FIX::Nested2PartyID Nested2PartyID_37("STRING_1980283340");
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyID_37);
        NestedParties2_NoNested2PartyIDs_37.insert(Nested2PartyID_37.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_37('9');
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyIDSource_37);
        NestedParties2_NoNested2PartyIDs_37.insert(Nested2PartyIDSource_37.getString());
        FIX::Nested2PartyRole Nested2PartyRole_37(483306244);
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyRole_37);
        NestedParties2_NoNested2PartyIDs_37.insert(Nested2PartyRole_37.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_37);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_80;
          FIX::Nested2PartySubID Nested2PartySubID_80("STRING_953116842");
          noNested2PartySubIDs_1_0_1_3_0.set(Nested2PartySubID_80);
          NstdPtys2SubGrp_NoNested2PartySubIDs_80.insert(Nested2PartySubID_80.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_80(2015037553);
          noNested2PartySubIDs_1_0_1_3_0.set(Nested2PartySubIDType_80);
          NstdPtys2SubGrp_NoNested2PartySubIDs_80.insert(Nested2PartySubIDType_80.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_80);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_1.addGroup(noNested2PartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_81;
          FIX::Nested2PartySubID Nested2PartySubID_81("STRING_594119045");
          noNested2PartySubIDs_1_0_1_3_1.set(Nested2PartySubID_81);
          NstdPtys2SubGrp_NoNested2PartySubIDs_81.insert(Nested2PartySubID_81.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_81(168237927);
          noNested2PartySubIDs_1_0_1_3_1.set(Nested2PartySubIDType_81);
          NstdPtys2SubGrp_NoNested2PartySubIDs_81.insert(Nested2PartySubIDType_81.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_81);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_1.addGroup(noNested2PartySubIDs_1_0_1_3_1);
        }
        noAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_1);
      }
      noSides_0_1.addGroup(noAllocs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoAllocs noAllocs_1_1_1;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_2;
      FIX::AllocAccount AllocAccount_40("STRING_1380293214");
      noAllocs_1_1_1.set(AllocAccount_40);
      TrdAllocGrp_NoAllocs_2.insert(AllocAccount_40.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_40(2049960086);
      noAllocs_1_1_1.set(AllocAcctIDSource_40);
      TrdAllocGrp_NoAllocs_2.insert(AllocAcctIDSource_40.getString());
      FIX::AllocClearingFeeIndicator AllocClearingFeeIndicator_2("STRING_837644026");
      noAllocs_1_1_1.set(AllocClearingFeeIndicator_2);
      TrdAllocGrp_NoAllocs_2.insert(AllocClearingFeeIndicator_2.getString());
      FIX::AllocCustomerCapacity AllocCustomerCapacity_9("STRING_1394162088");
      noAllocs_1_1_1.set(AllocCustomerCapacity_9);
      TrdAllocGrp_NoAllocs_2.insert(AllocCustomerCapacity_9.getString());
      FIX::AllocMethod AllocMethod_6(1);
      noAllocs_1_1_1.set(AllocMethod_6);
      TrdAllocGrp_NoAllocs_2.insert(AllocMethod_6.getString());
      FIX::AllocQty AllocQty_38;
      AllocQty_38.setString("21327754");
      noAllocs_1_1_1.set(AllocQty_38);
      TrdAllocGrp_NoAllocs_2.insert(AllocQty_38.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_34("JPY");
      noAllocs_1_1_1.set(AllocSettlCurrency_34);
      TrdAllocGrp_NoAllocs_2.insert(AllocSettlCurrency_34.getString());
      FIX::IndividualAllocID IndividualAllocID_39("STRING_634473063");
      noAllocs_1_1_1.set(IndividualAllocID_39);
      TrdAllocGrp_NoAllocs_2.insert(IndividualAllocID_39.getString());
      FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_9("STRING_1253700515");
      noAllocs_1_1_1.set(SecondaryIndividualAllocID_9);
      TrdAllocGrp_NoAllocs_2.insert(SecondaryIndividualAllocID_9.getString());
      all_values.push_back(TrdAllocGrp_NoAllocs_2);
      all_compo_names.insert("TrdAllocGrp.NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_38;
        FIX::Nested2PartyID Nested2PartyID_38("STRING_2118159457");
        noNested2PartyIDs_1_1_2_0.set(Nested2PartyID_38);
        NestedParties2_NoNested2PartyIDs_38.insert(Nested2PartyID_38.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_38('1');
        noNested2PartyIDs_1_1_2_0.set(Nested2PartyIDSource_38);
        NestedParties2_NoNested2PartyIDs_38.insert(Nested2PartyIDSource_38.getString());
        FIX::Nested2PartyRole Nested2PartyRole_38(397948257);
        noNested2PartyIDs_1_1_2_0.set(Nested2PartyRole_38);
        NestedParties2_NoNested2PartyIDs_38.insert(Nested2PartyRole_38.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_38);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_82;
          FIX::Nested2PartySubID Nested2PartySubID_82("STRING_652365073");
          noNested2PartySubIDs_1_1_0_3_0.set(Nested2PartySubID_82);
          NstdPtys2SubGrp_NoNested2PartySubIDs_82.insert(Nested2PartySubID_82.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_82(881507980);
          noNested2PartySubIDs_1_1_0_3_0.set(Nested2PartySubIDType_82);
          NstdPtys2SubGrp_NoNested2PartySubIDs_82.insert(Nested2PartySubIDType_82.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_82);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_0.addGroup(noNested2PartySubIDs_1_1_0_3_0);
        }
        noAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_39;
        FIX::Nested2PartyID Nested2PartyID_39("STRING_1808012846");
        noNested2PartyIDs_1_1_2_1.set(Nested2PartyID_39);
        NestedParties2_NoNested2PartyIDs_39.insert(Nested2PartyID_39.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_39('1');
        noNested2PartyIDs_1_1_2_1.set(Nested2PartyIDSource_39);
        NestedParties2_NoNested2PartyIDs_39.insert(Nested2PartyIDSource_39.getString());
        FIX::Nested2PartyRole Nested2PartyRole_39(1305663632);
        noNested2PartyIDs_1_1_2_1.set(Nested2PartyRole_39);
        NestedParties2_NoNested2PartyIDs_39.insert(Nested2PartyRole_39.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_39);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_83;
          FIX::Nested2PartySubID Nested2PartySubID_83("STRING_1805357725");
          noNested2PartySubIDs_1_1_1_3_0.set(Nested2PartySubID_83);
          NstdPtys2SubGrp_NoNested2PartySubIDs_83.insert(Nested2PartySubID_83.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_83(1175059410);
          noNested2PartySubIDs_1_1_1_3_0.set(Nested2PartySubIDType_83);
          NstdPtys2SubGrp_NoNested2PartySubIDs_83.insert(Nested2PartySubIDType_83.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_83);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_1.addGroup(noNested2PartySubIDs_1_1_1_3_0);
        }
        noAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_40;
        FIX::Nested2PartyID Nested2PartyID_40("STRING_1880410995");
        noNested2PartyIDs_1_1_2_2.set(Nested2PartyID_40);
        NestedParties2_NoNested2PartyIDs_40.insert(Nested2PartyID_40.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_40('6');
        noNested2PartyIDs_1_1_2_2.set(Nested2PartyIDSource_40);
        NestedParties2_NoNested2PartyIDs_40.insert(Nested2PartyIDSource_40.getString());
        FIX::Nested2PartyRole Nested2PartyRole_40(1658365654);
        noNested2PartyIDs_1_1_2_2.set(Nested2PartyRole_40);
        NestedParties2_NoNested2PartyIDs_40.insert(Nested2PartyRole_40.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_40);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_84;
          FIX::Nested2PartySubID Nested2PartySubID_84("STRING_1561595102");
          noNested2PartySubIDs_1_1_2_3_0.set(Nested2PartySubID_84);
          NstdPtys2SubGrp_NoNested2PartySubIDs_84.insert(Nested2PartySubID_84.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_84(1525919560);
          noNested2PartySubIDs_1_1_2_3_0.set(Nested2PartySubIDType_84);
          NstdPtys2SubGrp_NoNested2PartySubIDs_84.insert(Nested2PartySubIDType_84.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_84);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_2.addGroup(noNested2PartySubIDs_1_1_2_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_85;
          FIX::Nested2PartySubID Nested2PartySubID_85("STRING_1383325430");
          noNested2PartySubIDs_1_1_2_3_1.set(Nested2PartySubID_85);
          NstdPtys2SubGrp_NoNested2PartySubIDs_85.insert(Nested2PartySubID_85.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_85(1729833029);
          noNested2PartySubIDs_1_1_2_3_1.set(Nested2PartySubIDType_85);
          NstdPtys2SubGrp_NoNested2PartySubIDs_85.insert(Nested2PartySubIDType_85.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_85);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_2.addGroup(noNested2PartySubIDs_1_1_2_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_2_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_86;
          FIX::Nested2PartySubID Nested2PartySubID_86("STRING_758729126");
          noNested2PartySubIDs_1_1_2_3_2.set(Nested2PartySubID_86);
          NstdPtys2SubGrp_NoNested2PartySubIDs_86.insert(Nested2PartySubID_86.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_86(1285801868);
          noNested2PartySubIDs_1_1_2_3_2.set(Nested2PartySubIDType_86);
          NstdPtys2SubGrp_NoNested2PartySubIDs_86.insert(Nested2PartySubIDType_86.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_86);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_2.addGroup(noNested2PartySubIDs_1_1_2_3_2);
        }
        noAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_2);
      }
      noSides_0_1.addGroup(noAllocs_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoAllocs noAllocs_1_1_2;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_3;
      FIX::AllocAccount AllocAccount_41("STRING_419993407");
      noAllocs_1_1_2.set(AllocAccount_41);
      TrdAllocGrp_NoAllocs_3.insert(AllocAccount_41.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_41(5407566);
      noAllocs_1_1_2.set(AllocAcctIDSource_41);
      TrdAllocGrp_NoAllocs_3.insert(AllocAcctIDSource_41.getString());
      FIX::AllocClearingFeeIndicator AllocClearingFeeIndicator_3("STRING_520728066");
      noAllocs_1_1_2.set(AllocClearingFeeIndicator_3);
      TrdAllocGrp_NoAllocs_3.insert(AllocClearingFeeIndicator_3.getString());
      FIX::AllocCustomerCapacity AllocCustomerCapacity_10("STRING_405285208");
      noAllocs_1_1_2.set(AllocCustomerCapacity_10);
      TrdAllocGrp_NoAllocs_3.insert(AllocCustomerCapacity_10.getString());
      FIX::AllocMethod AllocMethod_7(2);
      noAllocs_1_1_2.set(AllocMethod_7);
      TrdAllocGrp_NoAllocs_3.insert(AllocMethod_7.getString());
      FIX::AllocQty AllocQty_39;
      AllocQty_39.setString("826771");
      noAllocs_1_1_2.set(AllocQty_39);
      TrdAllocGrp_NoAllocs_3.insert(AllocQty_39.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_35("EUR");
      noAllocs_1_1_2.set(AllocSettlCurrency_35);
      TrdAllocGrp_NoAllocs_3.insert(AllocSettlCurrency_35.getString());
      FIX::IndividualAllocID IndividualAllocID_40("STRING_484429567");
      noAllocs_1_1_2.set(IndividualAllocID_40);
      TrdAllocGrp_NoAllocs_3.insert(IndividualAllocID_40.getString());
      FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_10("STRING_1010434080");
      noAllocs_1_1_2.set(SecondaryIndividualAllocID_10);
      TrdAllocGrp_NoAllocs_3.insert(SecondaryIndividualAllocID_10.getString());
      all_values.push_back(TrdAllocGrp_NoAllocs_3);
      all_compo_names.insert("TrdAllocGrp.NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_2_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_41;
        FIX::Nested2PartyID Nested2PartyID_41("STRING_882377825");
        noNested2PartyIDs_1_2_2_0.set(Nested2PartyID_41);
        NestedParties2_NoNested2PartyIDs_41.insert(Nested2PartyID_41.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_41('1');
        noNested2PartyIDs_1_2_2_0.set(Nested2PartyIDSource_41);
        NestedParties2_NoNested2PartyIDs_41.insert(Nested2PartyIDSource_41.getString());
        FIX::Nested2PartyRole Nested2PartyRole_41(1732878668);
        noNested2PartyIDs_1_2_2_0.set(Nested2PartyRole_41);
        NestedParties2_NoNested2PartyIDs_41.insert(Nested2PartyRole_41.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_41);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_87;
          FIX::Nested2PartySubID Nested2PartySubID_87("STRING_1169630508");
          noNested2PartySubIDs_1_2_0_3_0.set(Nested2PartySubID_87);
          NstdPtys2SubGrp_NoNested2PartySubIDs_87.insert(Nested2PartySubID_87.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_87(1566211202);
          noNested2PartySubIDs_1_2_0_3_0.set(Nested2PartySubIDType_87);
          NstdPtys2SubGrp_NoNested2PartySubIDs_87.insert(Nested2PartySubIDType_87.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_87);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_2_2_0.addGroup(noNested2PartySubIDs_1_2_0_3_0);
        }
        noAllocs_1_1_2.addGroup(noNested2PartyIDs_1_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_2_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_42;
        FIX::Nested2PartyID Nested2PartyID_42("STRING_922065790");
        noNested2PartyIDs_1_2_2_1.set(Nested2PartyID_42);
        NestedParties2_NoNested2PartyIDs_42.insert(Nested2PartyID_42.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_42('1');
        noNested2PartyIDs_1_2_2_1.set(Nested2PartyIDSource_42);
        NestedParties2_NoNested2PartyIDs_42.insert(Nested2PartyIDSource_42.getString());
        FIX::Nested2PartyRole Nested2PartyRole_42(1224085279);
        noNested2PartyIDs_1_2_2_1.set(Nested2PartyRole_42);
        NestedParties2_NoNested2PartyIDs_42.insert(Nested2PartyRole_42.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_42);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_88;
          FIX::Nested2PartySubID Nested2PartySubID_88("STRING_802685510");
          noNested2PartySubIDs_1_2_1_3_0.set(Nested2PartySubID_88);
          NstdPtys2SubGrp_NoNested2PartySubIDs_88.insert(Nested2PartySubID_88.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_88(1832563539);
          noNested2PartySubIDs_1_2_1_3_0.set(Nested2PartySubIDType_88);
          NstdPtys2SubGrp_NoNested2PartySubIDs_88.insert(Nested2PartySubIDType_88.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_88);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_2_2_1.addGroup(noNested2PartySubIDs_1_2_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_89;
          FIX::Nested2PartySubID Nested2PartySubID_89("STRING_1608007207");
          noNested2PartySubIDs_1_2_1_3_1.set(Nested2PartySubID_89);
          NstdPtys2SubGrp_NoNested2PartySubIDs_89.insert(Nested2PartySubID_89.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_89(1591891895);
          noNested2PartySubIDs_1_2_1_3_1.set(Nested2PartySubIDType_89);
          NstdPtys2SubGrp_NoNested2PartySubIDs_89.insert(Nested2PartySubIDType_89.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_89);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_2_2_1.addGroup(noNested2PartySubIDs_1_2_1_3_1);
        }
        noAllocs_1_1_2.addGroup(noNested2PartyIDs_1_2_2_1);
      }
      noSides_0_1.addGroup(noAllocs_1_1_2);
    }
    msg.addGroup(noSides_0_1);
  }
  {
    FIX50SP2::TradeCaptureReport::NoSides noSides_0_2;
    // TrdCapRptSideGrp.NoSides
    multiset<string> TrdCapRptSideGrp_NoSides_2;
    FIX::Account Account_47("STRING_1246674993");
    noSides_0_2.set(Account_47);
    TrdCapRptSideGrp_NoSides_2.insert(Account_47.getString());
    FIX::AccountType AccountType_40(6);
    noSides_0_2.set(AccountType_40);
    TrdCapRptSideGrp_NoSides_2.insert(AccountType_40.getString());
    FIX::AccruedInterestAmt AccruedInterestAmt_12;
    AccruedInterestAmt_12.setString("8277336");
    noSides_0_2.set(AccruedInterestAmt_12);
    TrdCapRptSideGrp_NoSides_2.insert(AccruedInterestAmt_12.getString());
    FIX::AccruedInterestRate AccruedInterestRate_7;
    AccruedInterestRate_7.setString("43.740000");
    noSides_0_2.set(AccruedInterestRate_7);
    TrdCapRptSideGrp_NoSides_2.insert(AccruedInterestRate_7.getString());
    FIX::AcctIDSource AcctIDSource_40(99);
    noSides_0_2.set(AcctIDSource_40);
    TrdCapRptSideGrp_NoSides_2.insert(AcctIDSource_40.getString());
    FIX::AggressorIndicator AggressorIndicator_3(false);
    noSides_0_2.set(AggressorIndicator_3);
    TrdCapRptSideGrp_NoSides_2.insert(AggressorIndicator_3.getString());
    FIX::AllocID AllocID_23("STRING_1249017782");
    noSides_0_2.set(AllocID_23);
    TrdCapRptSideGrp_NoSides_2.insert(AllocID_23.getString());
    FIX::ComplianceID ComplianceID_14("STRING_1750579812");
    noSides_0_2.set(ComplianceID_14);
    TrdCapRptSideGrp_NoSides_2.insert(ComplianceID_14.getString());
    FIX::Concession Concession_7;
    Concession_7.setString("4867799");
    noSides_0_2.set(Concession_7);
    TrdCapRptSideGrp_NoSides_2.insert(Concession_7.getString());
    FIX::CustOrderCapacity CustOrderCapacity_22(3);
    noSides_0_2.set(CustOrderCapacity_22);
    TrdCapRptSideGrp_NoSides_2.insert(CustOrderCapacity_22.getString());
    FIX::EncodedText EncodedText_102("DATA_1742391050");
    noSides_0_2.set(EncodedText_102);
    TrdCapRptSideGrp_NoSides_2.insert(EncodedText_102.getString());
    FIX::EncodedTextLen EncodedTextLen_102(569457140);
    noSides_0_2.set(EncodedTextLen_102);
    TrdCapRptSideGrp_NoSides_2.insert(EncodedTextLen_102.getString());
    FIX::EndAccruedInterestAmt EndAccruedInterestAmt_12;
    EndAccruedInterestAmt_12.setString("5465776");
    noSides_0_2.set(EndAccruedInterestAmt_12);
    TrdCapRptSideGrp_NoSides_2.insert(EndAccruedInterestAmt_12.getString());
    FIX::EndCash EndCash_12;
    EndCash_12.setString("8404191");
    noSides_0_2.set(EndCash_12);
    TrdCapRptSideGrp_NoSides_2.insert(EndCash_12.getString());
    FIX::ExDate ExDate_4("LOCALMKTDATE_1053886707");
    noSides_0_2.set(ExDate_4);
    TrdCapRptSideGrp_NoSides_2.insert(ExDate_4.getString());
    FIX::ExchangeRule ExchangeRule_2("STRING_1557011693");
    noSides_0_2.set(ExchangeRule_2);
    TrdCapRptSideGrp_NoSides_2.insert(ExchangeRule_2.getString());
    FIX::ExchangeSpecialInstructions ExchangeSpecialInstructions_2("STRING_1920932751");
    noSides_0_2.set(ExchangeSpecialInstructions_2);
    TrdCapRptSideGrp_NoSides_2.insert(ExchangeSpecialInstructions_2.getString());
    FIX::InterestAtMaturity InterestAtMaturity_7;
    InterestAtMaturity_7.setString("19362645");
    noSides_0_2.set(InterestAtMaturity_7);
    TrdCapRptSideGrp_NoSides_2.insert(InterestAtMaturity_7.getString());
    FIX::NetGrossInd NetGrossInd_11(2);
    noSides_0_2.set(NetGrossInd_11);
    TrdCapRptSideGrp_NoSides_2.insert(NetGrossInd_11.getString());
    FIX::NetMoney NetMoney_7;
    NetMoney_7.setString("15063277");
    noSides_0_2.set(NetMoney_7);
    TrdCapRptSideGrp_NoSides_2.insert(NetMoney_7.getString());
    FIX::NumDaysInterest NumDaysInterest_7(1552666690);
    noSides_0_2.set(NumDaysInterest_7);
    TrdCapRptSideGrp_NoSides_2.insert(NumDaysInterest_7.getString());
    FIX::OddLot OddLot_2(true);
    noSides_0_2.set(OddLot_2);
    TrdCapRptSideGrp_NoSides_2.insert(OddLot_2.getString());
    FIX::OrderCategory OrderCategory_3('1');
    noSides_0_2.set(OrderCategory_3);
    TrdCapRptSideGrp_NoSides_2.insert(OrderCategory_3.getString());
    FIX::OrderDelay OrderDelay_2(327248832);
    noSides_0_2.set(OrderDelay_2);
    TrdCapRptSideGrp_NoSides_2.insert(OrderDelay_2.getString());
    FIX::OrderDelayUnit OrderDelayUnit_2(3);
    noSides_0_2.set(OrderDelayUnit_2);
    TrdCapRptSideGrp_NoSides_2.insert(OrderDelayUnit_2.getString());
    FIX::PositionEffect PositionEffect_19('O');
    noSides_0_2.set(PositionEffect_19);
    TrdCapRptSideGrp_NoSides_2.insert(PositionEffect_19.getString());
    FIX::PreallocMethod PreallocMethod_16('0');
    noSides_0_2.set(PreallocMethod_16);
    TrdCapRptSideGrp_NoSides_2.insert(PreallocMethod_16.getString());
    FIX::ProcessCode ProcessCode_15('6');
    noSides_0_2.set(ProcessCode_15);
    TrdCapRptSideGrp_NoSides_2.insert(ProcessCode_15.getString());
    FIX::RptSeq RptSeq_6(1834220495);
    noSides_0_2.set(RptSeq_6);
    TrdCapRptSideGrp_NoSides_2.insert(RptSeq_6.getString());
    FIX::SettlCurrAmt SettlCurrAmt_11;
    SettlCurrAmt_11.setString("18848975");
    noSides_0_2.set(SettlCurrAmt_11);
    TrdCapRptSideGrp_NoSides_2.insert(SettlCurrAmt_11.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_11;
    SettlCurrFxRate_11.setString("12576281");
    noSides_0_2.set(SettlCurrFxRate_11);
    TrdCapRptSideGrp_NoSides_2.insert(SettlCurrFxRate_11.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_11('M');
    noSides_0_2.set(SettlCurrFxRateCalc_11);
    TrdCapRptSideGrp_NoSides_2.insert(SettlCurrFxRateCalc_11.getString());
    FIX::Side Side_52('7');
    noSides_0_2.set(Side_52);
    TrdCapRptSideGrp_NoSides_2.insert(Side_52.getString());
    FIX::SideCurrency SideCurrency_2("EUR");
    noSides_0_2.set(SideCurrency_2);
    TrdCapRptSideGrp_NoSides_2.insert(SideCurrency_2.getString());
    FIX::SideExecID SideExecID_2("STRING_321545660");
    noSides_0_2.set(SideExecID_2);
    TrdCapRptSideGrp_NoSides_2.insert(SideExecID_2.getString());
    FIX::SideFillStationCd SideFillStationCd_2("STRING_2051413711");
    noSides_0_2.set(SideFillStationCd_2);
    TrdCapRptSideGrp_NoSides_2.insert(SideFillStationCd_2.getString());
    FIX::SideGrossTradeAmt SideGrossTradeAmt_2;
    SideGrossTradeAmt_2.setString("8639703");
    noSides_0_2.set(SideGrossTradeAmt_2);
    TrdCapRptSideGrp_NoSides_2.insert(SideGrossTradeAmt_2.getString());
    FIX::SideLastQty SideLastQty_2(2072125472);
    noSides_0_2.set(SideLastQty_2);
    TrdCapRptSideGrp_NoSides_2.insert(SideLastQty_2.getString());
    FIX::SideLiquidityInd SideLiquidityInd_2(390710026);
    noSides_0_2.set(SideLiquidityInd_2);
    TrdCapRptSideGrp_NoSides_2.insert(SideLiquidityInd_2.getString());
    FIX::SideMultiLegReportingType SideMultiLegReportingType_2(3);
    noSides_0_2.set(SideMultiLegReportingType_2);
    TrdCapRptSideGrp_NoSides_2.insert(SideMultiLegReportingType_2.getString());
    FIX::SideReasonCd SideReasonCd_2("STRING_1667032874");
    noSides_0_2.set(SideReasonCd_2);
    TrdCapRptSideGrp_NoSides_2.insert(SideReasonCd_2.getString());
    FIX::SideSettlCurrency SideSettlCurrency_2("JPY");
    noSides_0_2.set(SideSettlCurrency_2);
    TrdCapRptSideGrp_NoSides_2.insert(SideSettlCurrency_2.getString());
    FIX::SideTradeReportID SideTradeReportID_2("STRING_359968382");
    noSides_0_2.set(SideTradeReportID_2);
    TrdCapRptSideGrp_NoSides_2.insert(SideTradeReportID_2.getString());
    FIX::SideTrdSubTyp SideTrdSubTyp_2(2014053874);
    noSides_0_2.set(SideTrdSubTyp_2);
    TrdCapRptSideGrp_NoSides_2.insert(SideTrdSubTyp_2.getString());
    FIX::SolicitedFlag SolicitedFlag_16(false);
    noSides_0_2.set(SolicitedFlag_16);
    TrdCapRptSideGrp_NoSides_2.insert(SolicitedFlag_16.getString());
    FIX::StartCash StartCash_12;
    StartCash_12.setString("1334174");
    noSides_0_2.set(StartCash_12);
    TrdCapRptSideGrp_NoSides_2.insert(StartCash_12.getString());
    FIX::Text Text_102("STRING_1802834758");
    noSides_0_2.set(Text_102);
    TrdCapRptSideGrp_NoSides_2.insert(Text_102.getString());
    FIX::TimeBracket TimeBracket_3("STRING_1245524704");
    noSides_0_2.set(TimeBracket_3);
    TrdCapRptSideGrp_NoSides_2.insert(TimeBracket_3.getString());
    FIX::TotalTakedown TotalTakedown_7;
    TotalTakedown_7.setString("16397452");
    noSides_0_2.set(TotalTakedown_7);
    TrdCapRptSideGrp_NoSides_2.insert(TotalTakedown_7.getString());
    FIX::TradeAllocIndicator TradeAllocIndicator_2(0);
    noSides_0_2.set(TradeAllocIndicator_2);
    TrdCapRptSideGrp_NoSides_2.insert(TradeAllocIndicator_2.getString());
    FIX::TradeInputDevice TradeInputDevice_3("STRING_1186300920");
    noSides_0_2.set(TradeInputDevice_3);
    TrdCapRptSideGrp_NoSides_2.insert(TradeInputDevice_3.getString());
    FIX::TradeInputSource TradeInputSource_5("STRING_417316933");
    noSides_0_2.set(TradeInputSource_5);
    TrdCapRptSideGrp_NoSides_2.insert(TradeInputSource_5.getString());
    FIX::TradingSessionID TradingSessionID_119("STRING_1");
    noSides_0_2.set(TradingSessionID_119);
    TrdCapRptSideGrp_NoSides_2.insert(TradingSessionID_119.getString());
    FIX::TradingSessionSubID TradingSessionSubID_119("STRING_1");
    noSides_0_2.set(TradingSessionSubID_119);
    TrdCapRptSideGrp_NoSides_2.insert(TradingSessionSubID_119.getString());
    all_values.push_back(TrdCapRptSideGrp_NoSides_2);
    all_compo_names.insert("TrdCapRptSideGrp.NoSides");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoClearingInstructions noClearingInstructions_2_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_11;
      FIX::ClearingInstruction ClearingInstruction_11(13);
      noClearingInstructions_2_1_0.set(ClearingInstruction_11);
      ClrInstGrp_NoClearingInstructions_11.insert(ClearingInstruction_11.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_11);
      all_compo_names.insert("ClrInstGrp.NoClearingInstructions");

      noSides_0_2.addGroup(noClearingInstructions_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoClearingInstructions noClearingInstructions_2_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_12;
      FIX::ClearingInstruction ClearingInstruction_12(6);
      noClearingInstructions_2_1_1.set(ClearingInstruction_12);
      ClrInstGrp_NoClearingInstructions_12.insert(ClearingInstruction_12.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_12);
      all_compo_names.insert("ClrInstGrp.NoClearingInstructions");

      noSides_0_2.addGroup(noClearingInstructions_2_1_1);
    }
    // CommissionData
    multiset<string> CommissionData_24;
    FIX::CommCurrency CommCurrency_24("JPY");
    noSides_0_2.set(CommCurrency_24);
    CommissionData_24.insert(CommCurrency_24.getString());
    FIX::CommType CommType_27('4');
    noSides_0_2.set(CommType_27);
    CommissionData_24.insert(CommType_27.getString());
    FIX::Commission Commission_27;
    Commission_27.setString("10391225");
    noSides_0_2.set(Commission_27);
    CommissionData_24.insert(Commission_27.getString());
    FIX::FundRenewWaiv FundRenewWaiv_24('Y');
    noSides_0_2.set(FundRenewWaiv_24);
    CommissionData_24.insert(FundRenewWaiv_24.getString());
    all_values.push_back(CommissionData_24);
    all_compo_names.insert("CommissionData");

    // ContAmtGrp
    // Group ContAmtGrp.NoContAmts
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoContAmts noContAmts_2_1_0;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_6;
      FIX::ContAmtCurr ContAmtCurr_6("CHF");
      noContAmts_2_1_0.set(ContAmtCurr_6);
      ContAmtGrp_NoContAmts_6.insert(ContAmtCurr_6.getString());
      FIX::ContAmtType ContAmtType_6(6);
      noContAmts_2_1_0.set(ContAmtType_6);
      ContAmtGrp_NoContAmts_6.insert(ContAmtType_6.getString());
      FIX::ContAmtValue ContAmtValue_6;
      ContAmtValue_6.setString("15180454");
      noContAmts_2_1_0.set(ContAmtValue_6);
      ContAmtGrp_NoContAmts_6.insert(ContAmtValue_6.getString());
      all_values.push_back(ContAmtGrp_NoContAmts_6);
      all_compo_names.insert("ContAmtGrp.NoContAmts");

      noSides_0_2.addGroup(noContAmts_2_1_0);
    }
    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoMiscFees noMiscFees_2_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_25;
      FIX::MiscFeeAmt MiscFeeAmt_25;
      MiscFeeAmt_25.setString("12052342");
      noMiscFees_2_1_0.set(MiscFeeAmt_25);
      MiscFeesGrp_NoMiscFees_25.insert(MiscFeeAmt_25.getString());
      FIX::MiscFeeBasis MiscFeeBasis_25(1);
      noMiscFees_2_1_0.set(MiscFeeBasis_25);
      MiscFeesGrp_NoMiscFees_25.insert(MiscFeeBasis_25.getString());
      FIX::MiscFeeCurr MiscFeeCurr_25("CAN");
      noMiscFees_2_1_0.set(MiscFeeCurr_25);
      MiscFeesGrp_NoMiscFees_25.insert(MiscFeeCurr_25.getString());
      FIX::MiscFeeType MiscFeeType_25("STRING_12");
      noMiscFees_2_1_0.set(MiscFeeType_25);
      MiscFeesGrp_NoMiscFees_25.insert(MiscFeeType_25.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_25);
      all_compo_names.insert("MiscFeesGrp.NoMiscFees");

      noSides_0_2.addGroup(noMiscFees_2_1_0);
    }
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_157;
      FIX::PartyID PartyID_157("STRING_2031971679");
      noPartyIDs_2_1_0.set(PartyID_157);
      Parties_NoPartyIDs_157.insert(PartyID_157.getString());
      FIX::PartyIDSource PartyIDSource_157('G');
      noPartyIDs_2_1_0.set(PartyIDSource_157);
      Parties_NoPartyIDs_157.insert(PartyIDSource_157.getString());
      FIX::PartyRole PartyRole_157(35);
      noPartyIDs_2_1_0.set(PartyRole_157);
      Parties_NoPartyIDs_157.insert(PartyRole_157.getString());
      all_values.push_back(Parties_NoPartyIDs_157);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_334;
        FIX::PartySubID PartySubID_334("STRING_83655246");
        noPartySubIDs_2_0_2_0.set(PartySubID_334);
        PtysSubGrp_NoPartySubIDs_334.insert(PartySubID_334.getString());
        FIX::PartySubIDType PartySubIDType_334(26);
        noPartySubIDs_2_0_2_0.set(PartySubIDType_334);
        PtysSubGrp_NoPartySubIDs_334.insert(PartySubIDType_334.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_334);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_335;
        FIX::PartySubID PartySubID_335("STRING_747856942");
        noPartySubIDs_2_0_2_1.set(PartySubID_335);
        PtysSubGrp_NoPartySubIDs_335.insert(PartySubID_335.getString());
        FIX::PartySubIDType PartySubIDType_335(8);
        noPartySubIDs_2_0_2_1.set(PartySubIDType_335);
        PtysSubGrp_NoPartySubIDs_335.insert(PartySubIDType_335.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_335);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_336;
        FIX::PartySubID PartySubID_336("STRING_294645495");
        noPartySubIDs_2_0_2_2.set(PartySubID_336);
        PtysSubGrp_NoPartySubIDs_336.insert(PartySubID_336.getString());
        FIX::PartySubIDType PartySubIDType_336(27);
        noPartySubIDs_2_0_2_2.set(PartySubIDType_336);
        PtysSubGrp_NoPartySubIDs_336.insert(PartySubIDType_336.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_336);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_2);
      }
      noSides_0_2.addGroup(noPartyIDs_2_1_0);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails noSettlDetails_2_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_11;
      FIX::SettlObligSource SettlObligSource_11('2');
      noSettlDetails_2_1_0.set(SettlObligSource_11);
      SettlDetails_NoSettlDetails_11.insert(SettlObligSource_11.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_11);
      all_compo_names.insert("SettlDetails.NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_46;
        FIX::SettlPartyID SettlPartyID_46("STRING_1034395713");
        noSettlPartyIDs_2_0_2_0.set(SettlPartyID_46);
        SettlParties_NoSettlPartyIDs_46.insert(SettlPartyID_46.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_46('8');
        noSettlPartyIDs_2_0_2_0.set(SettlPartyIDSource_46);
        SettlParties_NoSettlPartyIDs_46.insert(SettlPartyIDSource_46.getString());
        FIX::SettlPartyRole SettlPartyRole_46(1349884256);
        noSettlPartyIDs_2_0_2_0.set(SettlPartyRole_46);
        SettlParties_NoSettlPartyIDs_46.insert(SettlPartyRole_46.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_46);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_89;
          FIX::SettlPartySubID SettlPartySubID_89("STRING_1858452701");
          noSettlPartySubIDs_2_0_0_3_0.set(SettlPartySubID_89);
          SettlPtysSubGrp_NoSettlPartySubIDs_89.insert(SettlPartySubID_89.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_89(1475828631);
          noSettlPartySubIDs_2_0_0_3_0.set(SettlPartySubIDType_89);
          SettlPtysSubGrp_NoSettlPartySubIDs_89.insert(SettlPartySubIDType_89.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_89);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_2_0_2_0.addGroup(noSettlPartySubIDs_2_0_0_3_0);
        }
        noSettlDetails_2_1_0.addGroup(noSettlPartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_47;
        FIX::SettlPartyID SettlPartyID_47("STRING_770222293");
        noSettlPartyIDs_2_0_2_1.set(SettlPartyID_47);
        SettlParties_NoSettlPartyIDs_47.insert(SettlPartyID_47.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_47('3');
        noSettlPartyIDs_2_0_2_1.set(SettlPartyIDSource_47);
        SettlParties_NoSettlPartyIDs_47.insert(SettlPartyIDSource_47.getString());
        FIX::SettlPartyRole SettlPartyRole_47(1923318666);
        noSettlPartyIDs_2_0_2_1.set(SettlPartyRole_47);
        SettlParties_NoSettlPartyIDs_47.insert(SettlPartyRole_47.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_47);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_90;
          FIX::SettlPartySubID SettlPartySubID_90("STRING_1883089692");
          noSettlPartySubIDs_2_0_1_3_0.set(SettlPartySubID_90);
          SettlPtysSubGrp_NoSettlPartySubIDs_90.insert(SettlPartySubID_90.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_90(147966877);
          noSettlPartySubIDs_2_0_1_3_0.set(SettlPartySubIDType_90);
          SettlPtysSubGrp_NoSettlPartySubIDs_90.insert(SettlPartySubIDType_90.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_90);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_2_0_2_1.addGroup(noSettlPartySubIDs_2_0_1_3_0);
        }
        noSettlDetails_2_1_0.addGroup(noSettlPartyIDs_2_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_0_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_48;
        FIX::SettlPartyID SettlPartyID_48("STRING_642497191");
        noSettlPartyIDs_2_0_2_2.set(SettlPartyID_48);
        SettlParties_NoSettlPartyIDs_48.insert(SettlPartyID_48.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_48('1');
        noSettlPartyIDs_2_0_2_2.set(SettlPartyIDSource_48);
        SettlParties_NoSettlPartyIDs_48.insert(SettlPartyIDSource_48.getString());
        FIX::SettlPartyRole SettlPartyRole_48(39647962);
        noSettlPartyIDs_2_0_2_2.set(SettlPartyRole_48);
        SettlParties_NoSettlPartyIDs_48.insert(SettlPartyRole_48.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_48);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_91;
          FIX::SettlPartySubID SettlPartySubID_91("STRING_135676422");
          noSettlPartySubIDs_2_0_2_3_0.set(SettlPartySubID_91);
          SettlPtysSubGrp_NoSettlPartySubIDs_91.insert(SettlPartySubID_91.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_91(291297430);
          noSettlPartySubIDs_2_0_2_3_0.set(SettlPartySubIDType_91);
          SettlPtysSubGrp_NoSettlPartySubIDs_91.insert(SettlPartySubIDType_91.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_91);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_2_0_2_2.addGroup(noSettlPartySubIDs_2_0_2_3_0);
        }
        noSettlDetails_2_1_0.addGroup(noSettlPartyIDs_2_0_2_2);
      }
      noSides_0_2.addGroup(noSettlDetails_2_1_0);
    }
    // SideTrdRegTS
    // Group SideTrdRegTS.NoSideTrdRegTS
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSideTrdRegTS noSideTrdRegTS_2_1_0;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_3;
      FIX::SideTrdRegTimestamp SideTrdRegTimestamp_3(FIX::UTCTIMESTAMP(8, 29, 58, 2, 4, 2015));
      noSideTrdRegTS_2_1_0.set(SideTrdRegTimestamp_3);
      SideTrdRegTS_NoSideTrdRegTS_3.insert(SideTrdRegTimestamp_3.getString());
      FIX::SideTrdRegTimestampSrc SideTrdRegTimestampSrc_3("STRING_848338441");
      noSideTrdRegTS_2_1_0.set(SideTrdRegTimestampSrc_3);
      SideTrdRegTS_NoSideTrdRegTS_3.insert(SideTrdRegTimestampSrc_3.getString());
      FIX::SideTrdRegTimestampType SideTrdRegTimestampType_3(968239037);
      noSideTrdRegTS_2_1_0.set(SideTrdRegTimestampType_3);
      SideTrdRegTS_NoSideTrdRegTS_3.insert(SideTrdRegTimestampType_3.getString());
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_3);
      all_compo_names.insert("SideTrdRegTS.NoSideTrdRegTS");

      noSides_0_2.addGroup(noSideTrdRegTS_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSideTrdRegTS noSideTrdRegTS_2_1_1;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_4;
      FIX::SideTrdRegTimestamp SideTrdRegTimestamp_4(FIX::UTCTIMESTAMP(3, 33, 1, 18, 6, 2017));
      noSideTrdRegTS_2_1_1.set(SideTrdRegTimestamp_4);
      SideTrdRegTS_NoSideTrdRegTS_4.insert(SideTrdRegTimestamp_4.getString());
      FIX::SideTrdRegTimestampSrc SideTrdRegTimestampSrc_4("STRING_2092257003");
      noSideTrdRegTS_2_1_1.set(SideTrdRegTimestampSrc_4);
      SideTrdRegTS_NoSideTrdRegTS_4.insert(SideTrdRegTimestampSrc_4.getString());
      FIX::SideTrdRegTimestampType SideTrdRegTimestampType_4(1446781572);
      noSideTrdRegTS_2_1_1.set(SideTrdRegTimestampType_4);
      SideTrdRegTS_NoSideTrdRegTS_4.insert(SideTrdRegTimestampType_4.getString());
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_4);
      all_compo_names.insert("SideTrdRegTS.NoSideTrdRegTS");

      noSides_0_2.addGroup(noSideTrdRegTS_2_1_1);
    }
    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoStipulations noStipulations_2_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_61;
      FIX::StipulationType StipulationType_61("STRING_PXSOURCE");
      noStipulations_2_1_0.set(StipulationType_61);
      Stipulations_NoStipulations_61.insert(StipulationType_61.getString());
      FIX::StipulationValue StipulationValue_61("STRING_1222616590");
      noStipulations_2_1_0.set(StipulationValue_61);
      Stipulations_NoStipulations_61.insert(StipulationValue_61.getString());
      all_values.push_back(Stipulations_NoStipulations_61);
      all_compo_names.insert("Stipulations.NoStipulations");

      noSides_0_2.addGroup(noStipulations_2_1_0);
    }
    // TradeReportOrderDetail
    multiset<string> TradeReportOrderDetail_2;
    FIX::BookingType BookingType_36(1);
    noSides_0_2.set(BookingType_36);
    TradeReportOrderDetail_2.insert(BookingType_36.getString());
    FIX::ClOrdID ClOrdID_49("STRING_45423597");
    noSides_0_2.set(ClOrdID_49);
    TradeReportOrderDetail_2.insert(ClOrdID_49.getString());
    FIX::CumQty CumQty_5;
    CumQty_5.setString("13705834");
    noSides_0_2.set(CumQty_5);
    TradeReportOrderDetail_2.insert(CumQty_5.getString());
    FIX::ExecInst ExecInst_15("MULTIPLECHARVALUE_R");
    noSides_0_2.set(ExecInst_15);
    TradeReportOrderDetail_2.insert(ExecInst_15.getString());
    FIX::ExpireTime ExpireTime_27(FIX::UTCTIMESTAMP(21, 3, 8, 24, 4, 2016));
    noSides_0_2.set(ExpireTime_27);
    TradeReportOrderDetail_2.insert(ExpireTime_27.getString());
    FIX::LeavesQty LeavesQty_4;
    LeavesQty_4.setString("2304095");
    noSides_0_2.set(LeavesQty_4);
    TradeReportOrderDetail_2.insert(LeavesQty_4.getString());
    FIX::ListID ListID_28("STRING_385825292");
    noSides_0_2.set(ListID_28);
    TradeReportOrderDetail_2.insert(ListID_28.getString());
    FIX::LotType LotType_38('3');
    noSides_0_2.set(LotType_38);
    TradeReportOrderDetail_2.insert(LotType_38.getString());
    FIX::OrdStatus OrdStatus_5('C');
    noSides_0_2.set(OrdStatus_5);
    TradeReportOrderDetail_2.insert(OrdStatus_5.getString());
    FIX::OrdType OrdType_95('C');
    noSides_0_2.set(OrdType_95);
    TradeReportOrderDetail_2.insert(OrdType_95.getString());
    FIX::OrderCapacity OrderCapacity_38('R');
    noSides_0_2.set(OrderCapacity_38);
    TradeReportOrderDetail_2.insert(OrderCapacity_38.getString());
    FIX::OrderID OrderID_34("STRING_1632440983");
    noSides_0_2.set(OrderID_34);
    TradeReportOrderDetail_2.insert(OrderID_34.getString());
    FIX::OrderInputDevice OrderInputDevice_2("STRING_39179792");
    noSides_0_2.set(OrderInputDevice_2);
    TradeReportOrderDetail_2.insert(OrderInputDevice_2.getString());
    FIX::OrderRestrictions OrderRestrictions_35("MULTIPLECHARVALUE_2");
    noSides_0_2.set(OrderRestrictions_35);
    TradeReportOrderDetail_2.insert(OrderRestrictions_35.getString());
    FIX::OrigCustOrderCapacity OrigCustOrderCapacity_2(3);
    noSides_0_2.set(OrigCustOrderCapacity_2);
    TradeReportOrderDetail_2.insert(OrigCustOrderCapacity_2.getString());
    FIX::OrigOrdModTime OrigOrdModTime_7(FIX::UTCTIMESTAMP(10, 24, 26, 27, 8, 2006));
    noSides_0_2.set(OrigOrdModTime_7);
    TradeReportOrderDetail_2.insert(OrigOrdModTime_7.getString());
    FIX::Price Price_28;
    Price_28.setString("17538646");
    noSides_0_2.set(Price_28);
    TradeReportOrderDetail_2.insert(Price_28.getString());
    FIX::RefOrdIDReason RefOrdIDReason_2(0);
    noSides_0_2.set(RefOrdIDReason_2);
    TradeReportOrderDetail_2.insert(RefOrdIDReason_2.getString());
    FIX::RefOrderID RefOrderID_7("STRING_1300599580");
    noSides_0_2.set(RefOrderID_7);
    TradeReportOrderDetail_2.insert(RefOrderID_7.getString());
    FIX::RefOrderIDSource RefOrderIDSource_7('0');
    noSides_0_2.set(RefOrderIDSource_7);
    TradeReportOrderDetail_2.insert(RefOrderIDSource_7.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_42("STRING_1580733969");
    noSides_0_2.set(SecondaryClOrdID_42);
    TradeReportOrderDetail_2.insert(SecondaryClOrdID_42.getString());
    FIX::SecondaryOrderID SecondaryOrderID_26("STRING_523699399");
    noSides_0_2.set(SecondaryOrderID_26);
    TradeReportOrderDetail_2.insert(SecondaryOrderID_26.getString());
    FIX::StopPx StopPx_12;
    StopPx_12.setString("14503812");
    noSides_0_2.set(StopPx_12);
    TradeReportOrderDetail_2.insert(StopPx_12.getString());
    FIX::TimeInForce TimeInForce_76('7');
    noSides_0_2.set(TimeInForce_76);
    TradeReportOrderDetail_2.insert(TimeInForce_76.getString());
    FIX::TransBkdTime TransBkdTime_6(FIX::UTCTIMESTAMP(8, 27, 41, 3, 8, 2013));
    noSides_0_2.set(TransBkdTime_6);
    TradeReportOrderDetail_2.insert(TransBkdTime_6.getString());
    all_values.push_back(TradeReportOrderDetail_2);
    all_compo_names.insert("TradeReportOrderDetail");

    // DisplayInstruction
    multiset<string> DisplayInstruction_12;
    FIX::DisplayHighQty DisplayHighQty_12;
    DisplayHighQty_12.setString("18934697");
    noSides_0_2.set(DisplayHighQty_12);
    DisplayInstruction_12.insert(DisplayHighQty_12.getString());
    FIX::DisplayLowQty DisplayLowQty_12;
    DisplayLowQty_12.setString("13773313");
    noSides_0_2.set(DisplayLowQty_12);
    DisplayInstruction_12.insert(DisplayLowQty_12.getString());
    FIX::DisplayMethod DisplayMethod_12('4');
    noSides_0_2.set(DisplayMethod_12);
    DisplayInstruction_12.insert(DisplayMethod_12.getString());
    FIX::DisplayMinIncr DisplayMinIncr_12;
    DisplayMinIncr_12.setString("9644105");
    noSides_0_2.set(DisplayMinIncr_12);
    DisplayInstruction_12.insert(DisplayMinIncr_12.getString());
    FIX::DisplayQty DisplayQty_12;
    DisplayQty_12.setString("15415601");
    noSides_0_2.set(DisplayQty_12);
    DisplayInstruction_12.insert(DisplayQty_12.getString());
    FIX::DisplayWhen DisplayWhen_12('1');
    noSides_0_2.set(DisplayWhen_12);
    DisplayInstruction_12.insert(DisplayWhen_12.getString());
    FIX::RefreshQty RefreshQty_12;
    RefreshQty_12.setString("10035903");
    noSides_0_2.set(RefreshQty_12);
    DisplayInstruction_12.insert(RefreshQty_12.getString());
    FIX::SecondaryDisplayQty SecondaryDisplayQty_12;
    SecondaryDisplayQty_12.setString("12050315");
    noSides_0_2.set(SecondaryDisplayQty_12);
    DisplayInstruction_12.insert(SecondaryDisplayQty_12.getString());
    all_values.push_back(DisplayInstruction_12);
    all_compo_names.insert("DisplayInstruction");

    // OrderQtyData
    multiset<string> OrderQtyData_27;
    FIX::CashOrderQty CashOrderQty_27;
    CashOrderQty_27.setString("8868770");
    noSides_0_2.set(CashOrderQty_27);
    OrderQtyData_27.insert(CashOrderQty_27.getString());
    FIX::OrderPercent OrderPercent_27;
    OrderPercent_27.setString("24.560000");
    noSides_0_2.set(OrderPercent_27);
    OrderQtyData_27.insert(OrderPercent_27.getString());
    FIX::OrderQty OrderQty_37;
    OrderQty_37.setString("14021411");
    noSides_0_2.set(OrderQty_37);
    OrderQtyData_27.insert(OrderQty_37.getString());
    FIX::RoundingDirection RoundingDirection_27('2');
    noSides_0_2.set(RoundingDirection_27);
    OrderQtyData_27.insert(RoundingDirection_27.getString());
    FIX::RoundingModulus RoundingModulus_27;
    RoundingModulus_27.setString("4425238");
    noSides_0_2.set(RoundingModulus_27);
    OrderQtyData_27.insert(RoundingModulus_27.getString());
    all_values.push_back(OrderQtyData_27);
    all_compo_names.insert("OrderQtyData");

    // TrdAllocGrp
    // Group TrdAllocGrp.NoAllocs
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoAllocs noAllocs_2_1_0;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_4;
      FIX::AllocAccount AllocAccount_42("STRING_1245605665");
      noAllocs_2_1_0.set(AllocAccount_42);
      TrdAllocGrp_NoAllocs_4.insert(AllocAccount_42.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_42(520506865);
      noAllocs_2_1_0.set(AllocAcctIDSource_42);
      TrdAllocGrp_NoAllocs_4.insert(AllocAcctIDSource_42.getString());
      FIX::AllocClearingFeeIndicator AllocClearingFeeIndicator_4("STRING_1598898078");
      noAllocs_2_1_0.set(AllocClearingFeeIndicator_4);
      TrdAllocGrp_NoAllocs_4.insert(AllocClearingFeeIndicator_4.getString());
      FIX::AllocCustomerCapacity AllocCustomerCapacity_11("STRING_633432389");
      noAllocs_2_1_0.set(AllocCustomerCapacity_11);
      TrdAllocGrp_NoAllocs_4.insert(AllocCustomerCapacity_11.getString());
      FIX::AllocMethod AllocMethod_8(3);
      noAllocs_2_1_0.set(AllocMethod_8);
      TrdAllocGrp_NoAllocs_4.insert(AllocMethod_8.getString());
      FIX::AllocQty AllocQty_40;
      AllocQty_40.setString("18060306");
      noAllocs_2_1_0.set(AllocQty_40);
      TrdAllocGrp_NoAllocs_4.insert(AllocQty_40.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_36("CAN");
      noAllocs_2_1_0.set(AllocSettlCurrency_36);
      TrdAllocGrp_NoAllocs_4.insert(AllocSettlCurrency_36.getString());
      FIX::IndividualAllocID IndividualAllocID_41("STRING_1108928228");
      noAllocs_2_1_0.set(IndividualAllocID_41);
      TrdAllocGrp_NoAllocs_4.insert(IndividualAllocID_41.getString());
      FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_11("STRING_1169797858");
      noAllocs_2_1_0.set(SecondaryIndividualAllocID_11);
      TrdAllocGrp_NoAllocs_4.insert(SecondaryIndividualAllocID_11.getString());
      all_values.push_back(TrdAllocGrp_NoAllocs_4);
      all_compo_names.insert("TrdAllocGrp.NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_2_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_43;
        FIX::Nested2PartyID Nested2PartyID_43("STRING_168005948");
        noNested2PartyIDs_2_0_2_0.set(Nested2PartyID_43);
        NestedParties2_NoNested2PartyIDs_43.insert(Nested2PartyID_43.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_43('1');
        noNested2PartyIDs_2_0_2_0.set(Nested2PartyIDSource_43);
        NestedParties2_NoNested2PartyIDs_43.insert(Nested2PartyIDSource_43.getString());
        FIX::Nested2PartyRole Nested2PartyRole_43(1471745419);
        noNested2PartyIDs_2_0_2_0.set(Nested2PartyRole_43);
        NestedParties2_NoNested2PartyIDs_43.insert(Nested2PartyRole_43.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_43);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_90;
          FIX::Nested2PartySubID Nested2PartySubID_90("STRING_1324007917");
          noNested2PartySubIDs_2_0_0_3_0.set(Nested2PartySubID_90);
          NstdPtys2SubGrp_NoNested2PartySubIDs_90.insert(Nested2PartySubID_90.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_90(1042647408);
          noNested2PartySubIDs_2_0_0_3_0.set(Nested2PartySubIDType_90);
          NstdPtys2SubGrp_NoNested2PartySubIDs_90.insert(Nested2PartySubIDType_90.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_90);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_91;
          FIX::Nested2PartySubID Nested2PartySubID_91("STRING_1421636574");
          noNested2PartySubIDs_2_0_0_3_1.set(Nested2PartySubID_91);
          NstdPtys2SubGrp_NoNested2PartySubIDs_91.insert(Nested2PartySubID_91.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_91(553855651);
          noNested2PartySubIDs_2_0_0_3_1.set(Nested2PartySubIDType_91);
          NstdPtys2SubGrp_NoNested2PartySubIDs_91.insert(Nested2PartySubIDType_91.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_91);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_1);
        }
        noAllocs_2_1_0.addGroup(noNested2PartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_2_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_44;
        FIX::Nested2PartyID Nested2PartyID_44("STRING_1397651939");
        noNested2PartyIDs_2_0_2_1.set(Nested2PartyID_44);
        NestedParties2_NoNested2PartyIDs_44.insert(Nested2PartyID_44.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_44('2');
        noNested2PartyIDs_2_0_2_1.set(Nested2PartyIDSource_44);
        NestedParties2_NoNested2PartyIDs_44.insert(Nested2PartyIDSource_44.getString());
        FIX::Nested2PartyRole Nested2PartyRole_44(2095415833);
        noNested2PartyIDs_2_0_2_1.set(Nested2PartyRole_44);
        NestedParties2_NoNested2PartyIDs_44.insert(Nested2PartyRole_44.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_44);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_92;
          FIX::Nested2PartySubID Nested2PartySubID_92("STRING_1242153794");
          noNested2PartySubIDs_2_0_1_3_0.set(Nested2PartySubID_92);
          NstdPtys2SubGrp_NoNested2PartySubIDs_92.insert(Nested2PartySubID_92.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_92(1152963716);
          noNested2PartySubIDs_2_0_1_3_0.set(Nested2PartySubIDType_92);
          NstdPtys2SubGrp_NoNested2PartySubIDs_92.insert(Nested2PartySubIDType_92.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_92);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_2_0_2_1.addGroup(noNested2PartySubIDs_2_0_1_3_0);
        }
        noAllocs_2_1_0.addGroup(noNested2PartyIDs_2_0_2_1);
      }
      noSides_0_2.addGroup(noAllocs_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoAllocs noAllocs_2_1_1;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_5;
      FIX::AllocAccount AllocAccount_43("STRING_2124490834");
      noAllocs_2_1_1.set(AllocAccount_43);
      TrdAllocGrp_NoAllocs_5.insert(AllocAccount_43.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_43(905992602);
      noAllocs_2_1_1.set(AllocAcctIDSource_43);
      TrdAllocGrp_NoAllocs_5.insert(AllocAcctIDSource_43.getString());
      FIX::AllocClearingFeeIndicator AllocClearingFeeIndicator_5("STRING_407621208");
      noAllocs_2_1_1.set(AllocClearingFeeIndicator_5);
      TrdAllocGrp_NoAllocs_5.insert(AllocClearingFeeIndicator_5.getString());
      FIX::AllocCustomerCapacity AllocCustomerCapacity_12("STRING_2144603680");
      noAllocs_2_1_1.set(AllocCustomerCapacity_12);
      TrdAllocGrp_NoAllocs_5.insert(AllocCustomerCapacity_12.getString());
      FIX::AllocMethod AllocMethod_9(2);
      noAllocs_2_1_1.set(AllocMethod_9);
      TrdAllocGrp_NoAllocs_5.insert(AllocMethod_9.getString());
      FIX::AllocQty AllocQty_41;
      AllocQty_41.setString("2526546");
      noAllocs_2_1_1.set(AllocQty_41);
      TrdAllocGrp_NoAllocs_5.insert(AllocQty_41.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_37("GBP");
      noAllocs_2_1_1.set(AllocSettlCurrency_37);
      TrdAllocGrp_NoAllocs_5.insert(AllocSettlCurrency_37.getString());
      FIX::IndividualAllocID IndividualAllocID_42("STRING_1851552746");
      noAllocs_2_1_1.set(IndividualAllocID_42);
      TrdAllocGrp_NoAllocs_5.insert(IndividualAllocID_42.getString());
      FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_12("STRING_1876158086");
      noAllocs_2_1_1.set(SecondaryIndividualAllocID_12);
      TrdAllocGrp_NoAllocs_5.insert(SecondaryIndividualAllocID_12.getString());
      all_values.push_back(TrdAllocGrp_NoAllocs_5);
      all_compo_names.insert("TrdAllocGrp.NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_2_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_45;
        FIX::Nested2PartyID Nested2PartyID_45("STRING_1510099702");
        noNested2PartyIDs_2_1_2_0.set(Nested2PartyID_45);
        NestedParties2_NoNested2PartyIDs_45.insert(Nested2PartyID_45.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_45('1');
        noNested2PartyIDs_2_1_2_0.set(Nested2PartyIDSource_45);
        NestedParties2_NoNested2PartyIDs_45.insert(Nested2PartyIDSource_45.getString());
        FIX::Nested2PartyRole Nested2PartyRole_45(1739968336);
        noNested2PartyIDs_2_1_2_0.set(Nested2PartyRole_45);
        NestedParties2_NoNested2PartyIDs_45.insert(Nested2PartyRole_45.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_45);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_93;
          FIX::Nested2PartySubID Nested2PartySubID_93("STRING_965155008");
          noNested2PartySubIDs_2_1_0_3_0.set(Nested2PartySubID_93);
          NstdPtys2SubGrp_NoNested2PartySubIDs_93.insert(Nested2PartySubID_93.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_93(1723737714);
          noNested2PartySubIDs_2_1_0_3_0.set(Nested2PartySubIDType_93);
          NstdPtys2SubGrp_NoNested2PartySubIDs_93.insert(Nested2PartySubIDType_93.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_93);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_2_1_2_0.addGroup(noNested2PartySubIDs_2_1_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_94;
          FIX::Nested2PartySubID Nested2PartySubID_94("STRING_639550230");
          noNested2PartySubIDs_2_1_0_3_1.set(Nested2PartySubID_94);
          NstdPtys2SubGrp_NoNested2PartySubIDs_94.insert(Nested2PartySubID_94.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_94(748641966);
          noNested2PartySubIDs_2_1_0_3_1.set(Nested2PartySubIDType_94);
          NstdPtys2SubGrp_NoNested2PartySubIDs_94.insert(Nested2PartySubIDType_94.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_94);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_2_1_2_0.addGroup(noNested2PartySubIDs_2_1_0_3_1);
        }
        noAllocs_2_1_1.addGroup(noNested2PartyIDs_2_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_2_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_46;
        FIX::Nested2PartyID Nested2PartyID_46("STRING_1047999485");
        noNested2PartyIDs_2_1_2_1.set(Nested2PartyID_46);
        NestedParties2_NoNested2PartyIDs_46.insert(Nested2PartyID_46.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_46('1');
        noNested2PartyIDs_2_1_2_1.set(Nested2PartyIDSource_46);
        NestedParties2_NoNested2PartyIDs_46.insert(Nested2PartyIDSource_46.getString());
        FIX::Nested2PartyRole Nested2PartyRole_46(2072649883);
        noNested2PartyIDs_2_1_2_1.set(Nested2PartyRole_46);
        NestedParties2_NoNested2PartyIDs_46.insert(Nested2PartyRole_46.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_46);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_95;
          FIX::Nested2PartySubID Nested2PartySubID_95("STRING_1589353595");
          noNested2PartySubIDs_2_1_1_3_0.set(Nested2PartySubID_95);
          NstdPtys2SubGrp_NoNested2PartySubIDs_95.insert(Nested2PartySubID_95.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_95(479021887);
          noNested2PartySubIDs_2_1_1_3_0.set(Nested2PartySubIDType_95);
          NstdPtys2SubGrp_NoNested2PartySubIDs_95.insert(Nested2PartySubIDType_95.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_95);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_2_1_2_1.addGroup(noNested2PartySubIDs_2_1_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_96;
          FIX::Nested2PartySubID Nested2PartySubID_96("STRING_1340815184");
          noNested2PartySubIDs_2_1_1_3_1.set(Nested2PartySubID_96);
          NstdPtys2SubGrp_NoNested2PartySubIDs_96.insert(Nested2PartySubID_96.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_96(1827917059);
          noNested2PartySubIDs_2_1_1_3_1.set(Nested2PartySubIDType_96);
          NstdPtys2SubGrp_NoNested2PartySubIDs_96.insert(Nested2PartySubIDType_96.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_96);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_2_1_2_1.addGroup(noNested2PartySubIDs_2_1_1_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_97;
          FIX::Nested2PartySubID Nested2PartySubID_97("STRING_426954072");
          noNested2PartySubIDs_2_1_1_3_2.set(Nested2PartySubID_97);
          NstdPtys2SubGrp_NoNested2PartySubIDs_97.insert(Nested2PartySubID_97.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_97(430945342);
          noNested2PartySubIDs_2_1_1_3_2.set(Nested2PartySubIDType_97);
          NstdPtys2SubGrp_NoNested2PartySubIDs_97.insert(Nested2PartySubIDType_97.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_97);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_2_1_2_1.addGroup(noNested2PartySubIDs_2_1_1_3_2);
        }
        noAllocs_2_1_1.addGroup(noNested2PartyIDs_2_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_2_1_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_47;
        FIX::Nested2PartyID Nested2PartyID_47("STRING_922587205");
        noNested2PartyIDs_2_1_2_2.set(Nested2PartyID_47);
        NestedParties2_NoNested2PartyIDs_47.insert(Nested2PartyID_47.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_47('1');
        noNested2PartyIDs_2_1_2_2.set(Nested2PartyIDSource_47);
        NestedParties2_NoNested2PartyIDs_47.insert(Nested2PartyIDSource_47.getString());
        FIX::Nested2PartyRole Nested2PartyRole_47(407952528);
        noNested2PartyIDs_2_1_2_2.set(Nested2PartyRole_47);
        NestedParties2_NoNested2PartyIDs_47.insert(Nested2PartyRole_47.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_47);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_98;
          FIX::Nested2PartySubID Nested2PartySubID_98("STRING_1987538997");
          noNested2PartySubIDs_2_1_2_3_0.set(Nested2PartySubID_98);
          NstdPtys2SubGrp_NoNested2PartySubIDs_98.insert(Nested2PartySubID_98.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_98(405072560);
          noNested2PartySubIDs_2_1_2_3_0.set(Nested2PartySubIDType_98);
          NstdPtys2SubGrp_NoNested2PartySubIDs_98.insert(Nested2PartySubIDType_98.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_98);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_2_1_2_2.addGroup(noNested2PartySubIDs_2_1_2_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_99;
          FIX::Nested2PartySubID Nested2PartySubID_99("STRING_1029612637");
          noNested2PartySubIDs_2_1_2_3_1.set(Nested2PartySubID_99);
          NstdPtys2SubGrp_NoNested2PartySubIDs_99.insert(Nested2PartySubID_99.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_99(92710017);
          noNested2PartySubIDs_2_1_2_3_1.set(Nested2PartySubIDType_99);
          NstdPtys2SubGrp_NoNested2PartySubIDs_99.insert(Nested2PartySubIDType_99.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_99);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_2_1_2_2.addGroup(noNested2PartySubIDs_2_1_2_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_100;
          FIX::Nested2PartySubID Nested2PartySubID_100("STRING_1647798257");
          noNested2PartySubIDs_2_1_2_3_2.set(Nested2PartySubID_100);
          NstdPtys2SubGrp_NoNested2PartySubIDs_100.insert(Nested2PartySubID_100.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_100(751152331);
          noNested2PartySubIDs_2_1_2_3_2.set(Nested2PartySubIDType_100);
          NstdPtys2SubGrp_NoNested2PartySubIDs_100.insert(Nested2PartySubIDType_100.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_100);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_2_1_2_2.addGroup(noNested2PartySubIDs_2_1_2_3_2);
        }
        noAllocs_2_1_1.addGroup(noNested2PartyIDs_2_1_2_2);
      }
      noSides_0_2.addGroup(noAllocs_2_1_1);
    }
    msg.addGroup(noSides_0_2);
  }
  // TrdInstrmtLegGrp
  // Group TrdInstrmtLegGrp.NoLegs
  {
    FIX50SP2::TradeCaptureReport::NoLegs noLegs_0_0;
    // TrdInstrmtLegGrp.NoLegs
    multiset<string> TrdInstrmtLegGrp_NoLegs_0;
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_1;
    LegCalculatedCcyLastQty_1.setString("13764726");
    noLegs_0_0.set(LegCalculatedCcyLastQty_1);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegCalculatedCcyLastQty_1.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_4(146314822);
    noLegs_0_0.set(LegCoveredOrUncovered_4);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegCoveredOrUncovered_4.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_4;
    LegCurrencyRatio_4.setString("13068788");
    noLegs_0_0.set(LegCurrencyRatio_4);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegCurrencyRatio_4.getString());
    FIX::LegDividendYield LegDividendYield_4;
    LegDividendYield_4.setString("98.450000");
    noLegs_0_0.set(LegDividendYield_4);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegDividendYield_4.getString());
    FIX::LegExecInst LegExecInst_4("MULTIPLECHARVALUE_1886283159");
    noLegs_0_0.set(LegExecInst_4);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegExecInst_4.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_1;
    LegGrossTradeAmt_1.setString("17784231");
    noLegs_0_0.set(LegGrossTradeAmt_1);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegGrossTradeAmt_1.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_1;
    LegLastForwardPoints_1.setString("21369848");
    noLegs_0_0.set(LegLastForwardPoints_1);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegLastForwardPoints_1.getString());
    FIX::LegLastPx LegLastPx_1;
    LegLastPx_1.setString("14625372");
    noLegs_0_0.set(LegLastPx_1);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegLastPx_1.getString());
    FIX::LegLastQty LegLastQty_1;
    LegLastQty_1.setString("2704896");
    noLegs_0_0.set(LegLastQty_1);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegLastQty_1.getString());
    FIX::LegNumber LegNumber_0(738143171);
    noLegs_0_0.set(LegNumber_0);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegNumber_0.getString());
    FIX::LegPositionEffect LegPositionEffect_4('3');
    noLegs_0_0.set(LegPositionEffect_4);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegPositionEffect_4.getString());
    FIX::LegQty LegQty_18;
    LegQty_18.setString("4382067");
    noLegs_0_0.set(LegQty_18);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegQty_18.getString());
    FIX::LegRefID LegRefID_17("STRING_663309407");
    noLegs_0_0.set(LegRefID_17);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegRefID_17.getString());
    FIX::LegReportID LegReportID_0("STRING_306216308");
    noLegs_0_0.set(LegReportID_0);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegReportID_0.getString());
    FIX::LegSettlCurrency LegSettlCurrency_4("USD");
    noLegs_0_0.set(LegSettlCurrency_4);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegSettlCurrency_4.getString());
    FIX::LegSettlDate LegSettlDate_18("LOCALMKTDATE_1647031493");
    noLegs_0_0.set(LegSettlDate_18);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegSettlDate_18.getString());
    FIX::LegSettlType LegSettlType_28('1');
    noLegs_0_0.set(LegSettlType_28);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegSettlType_28.getString());
    FIX::LegSwapType LegSwapType_28(4);
    noLegs_0_0.set(LegSwapType_28);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegSwapType_28.getString());
    FIX::LegVolatility LegVolatility_4;
    LegVolatility_4.setString("20779768");
    noLegs_0_0.set(LegVolatility_4);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegVolatility_4.getString());
    all_values.push_back(TrdInstrmtLegGrp_NoLegs_0);
    all_compo_names.insert("TrdInstrmtLegGrp.NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_150;
    FIX::EncodedLegIssuer EncodedLegIssuer_150("DATA_483097266");
    noLegs_0_0.set(EncodedLegIssuer_150);
    InstrumentLeg_150.insert(EncodedLegIssuer_150.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_150(1001719507);
    noLegs_0_0.set(EncodedLegIssuerLen_150);
    InstrumentLeg_150.insert(EncodedLegIssuerLen_150.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_150("DATA_338445715");
    noLegs_0_0.set(EncodedLegSecurityDesc_150);
    InstrumentLeg_150.insert(EncodedLegSecurityDesc_150.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_150(164193426);
    noLegs_0_0.set(EncodedLegSecurityDescLen_150);
    InstrumentLeg_150.insert(EncodedLegSecurityDescLen_150.getString());
    FIX::LegCFICode LegCFICode_150("STRING_841774856");
    noLegs_0_0.set(LegCFICode_150);
    InstrumentLeg_150.insert(LegCFICode_150.getString());
    FIX::LegContractMultiplier LegContractMultiplier_150;
    LegContractMultiplier_150.setString("7435182");
    noLegs_0_0.set(LegContractMultiplier_150);
    InstrumentLeg_150.insert(LegContractMultiplier_150.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_150(1193806063);
    noLegs_0_0.set(LegContractMultiplierUnit_150);
    InstrumentLeg_150.insert(LegContractMultiplierUnit_150.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_150("MONTHYEAR_934484873");
    noLegs_0_0.set(LegContractSettlMonth_150);
    InstrumentLeg_150.insert(LegContractSettlMonth_150.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_150("COUNTRY_243832885");
    noLegs_0_0.set(LegCountryOfIssue_150);
    InstrumentLeg_150.insert(LegCountryOfIssue_150.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_150("LOCALMKTDATE_1944958394");
    noLegs_0_0.set(LegCouponPaymentDate_150);
    InstrumentLeg_150.insert(LegCouponPaymentDate_150.getString());
    FIX::LegCouponRate LegCouponRate_150;
    LegCouponRate_150.setString("39.890000");
    noLegs_0_0.set(LegCouponRate_150);
    InstrumentLeg_150.insert(LegCouponRate_150.getString());
    FIX::LegCreditRating LegCreditRating_150("STRING_1620305581");
    noLegs_0_0.set(LegCreditRating_150);
    InstrumentLeg_150.insert(LegCreditRating_150.getString());
    FIX::LegCurrency LegCurrency_150("CAN");
    noLegs_0_0.set(LegCurrency_150);
    InstrumentLeg_150.insert(LegCurrency_150.getString());
    FIX::LegDatedDate LegDatedDate_150("LOCALMKTDATE_644651779");
    noLegs_0_0.set(LegDatedDate_150);
    InstrumentLeg_150.insert(LegDatedDate_150.getString());
    FIX::LegExerciseStyle LegExerciseStyle_150(1830072728);
    noLegs_0_0.set(LegExerciseStyle_150);
    InstrumentLeg_150.insert(LegExerciseStyle_150.getString());
    FIX::LegFactor LegFactor_150;
    LegFactor_150.setString("16690822");
    noLegs_0_0.set(LegFactor_150);
    InstrumentLeg_150.insert(LegFactor_150.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_150(634152984);
    noLegs_0_0.set(LegFlowScheduleType_150);
    InstrumentLeg_150.insert(LegFlowScheduleType_150.getString());
    FIX::LegInstrRegistry LegInstrRegistry_150("STRING_1145126305");
    noLegs_0_0.set(LegInstrRegistry_150);
    InstrumentLeg_150.insert(LegInstrRegistry_150.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_150("LOCALMKTDATE_1939571941");
    noLegs_0_0.set(LegInterestAccrualDate_150);
    InstrumentLeg_150.insert(LegInterestAccrualDate_150.getString());
    FIX::LegIssueDate LegIssueDate_150("LOCALMKTDATE_1372296156");
    noLegs_0_0.set(LegIssueDate_150);
    InstrumentLeg_150.insert(LegIssueDate_150.getString());
    FIX::LegIssuer LegIssuer_150("STRING_1508179368");
    noLegs_0_0.set(LegIssuer_150);
    InstrumentLeg_150.insert(LegIssuer_150.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_150("STRING_230294996");
    noLegs_0_0.set(LegLocaleOfIssue_150);
    InstrumentLeg_150.insert(LegLocaleOfIssue_150.getString());
    FIX::LegMaturityDate LegMaturityDate_150("LOCALMKTDATE_2035605563");
    noLegs_0_0.set(LegMaturityDate_150);
    InstrumentLeg_150.insert(LegMaturityDate_150.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_150("MONTHYEAR_1814395677");
    noLegs_0_0.set(LegMaturityMonthYear_150);
    InstrumentLeg_150.insert(LegMaturityMonthYear_150.getString());
    FIX::LegMaturityTime LegMaturityTime_150("TZTIMEONLY_110371646");
    noLegs_0_0.set(LegMaturityTime_150);
    InstrumentLeg_150.insert(LegMaturityTime_150.getString());
    FIX::LegOptAttribute LegOptAttribute_150('1');
    noLegs_0_0.set(LegOptAttribute_150);
    InstrumentLeg_150.insert(LegOptAttribute_150.getString());
    FIX::LegOptionRatio LegOptionRatio_150;
    LegOptionRatio_150.setString("13139435");
    noLegs_0_0.set(LegOptionRatio_150);
    InstrumentLeg_150.insert(LegOptionRatio_150.getString());
    FIX::LegPool LegPool_150("STRING_1818365355");
    noLegs_0_0.set(LegPool_150);
    InstrumentLeg_150.insert(LegPool_150.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_150("STRING_452254927");
    noLegs_0_0.set(LegPriceUnitOfMeasure_150);
    InstrumentLeg_150.insert(LegPriceUnitOfMeasure_150.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_150;
    LegPriceUnitOfMeasureQty_150.setString("12444367");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_150);
    InstrumentLeg_150.insert(LegPriceUnitOfMeasureQty_150.getString());
    FIX::LegProduct LegProduct_150(153978974);
    noLegs_0_0.set(LegProduct_150);
    InstrumentLeg_150.insert(LegProduct_150.getString());
    FIX::LegPutOrCall LegPutOrCall_150(1453974434);
    noLegs_0_0.set(LegPutOrCall_150);
    InstrumentLeg_150.insert(LegPutOrCall_150.getString());
    FIX::LegRatioQty LegRatioQty_150;
    LegRatioQty_150.setString("15828824");
    noLegs_0_0.set(LegRatioQty_150);
    InstrumentLeg_150.insert(LegRatioQty_150.getString());
    FIX::LegRedemptionDate LegRedemptionDate_150("LOCALMKTDATE_318172400");
    noLegs_0_0.set(LegRedemptionDate_150);
    InstrumentLeg_150.insert(LegRedemptionDate_150.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_150("STRING_148265642");
    noLegs_0_0.set(LegRepoCollateralSecurityType_150);
    InstrumentLeg_150.insert(LegRepoCollateralSecurityType_150.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_150;
    LegRepurchaseRate_150.setString("70.520000");
    noLegs_0_0.set(LegRepurchaseRate_150);
    InstrumentLeg_150.insert(LegRepurchaseRate_150.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_150(1511978464);
    noLegs_0_0.set(LegRepurchaseTerm_150);
    InstrumentLeg_150.insert(LegRepurchaseTerm_150.getString());
    FIX::LegSecurityDesc LegSecurityDesc_150("STRING_1082750516");
    noLegs_0_0.set(LegSecurityDesc_150);
    InstrumentLeg_150.insert(LegSecurityDesc_150.getString());
    FIX::LegSecurityExchange LegSecurityExchange_150("EXCHANGE_422749938");
    noLegs_0_0.set(LegSecurityExchange_150);
    InstrumentLeg_150.insert(LegSecurityExchange_150.getString());
    FIX::LegSecurityID LegSecurityID_150("STRING_1309453210");
    noLegs_0_0.set(LegSecurityID_150);
    InstrumentLeg_150.insert(LegSecurityID_150.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_150("STRING_1814014505");
    noLegs_0_0.set(LegSecurityIDSource_150);
    InstrumentLeg_150.insert(LegSecurityIDSource_150.getString());
    FIX::LegSecuritySubType LegSecuritySubType_150("STRING_2043055519");
    noLegs_0_0.set(LegSecuritySubType_150);
    InstrumentLeg_150.insert(LegSecuritySubType_150.getString());
    FIX::LegSecurityType LegSecurityType_150("STRING_1253242779");
    noLegs_0_0.set(LegSecurityType_150);
    InstrumentLeg_150.insert(LegSecurityType_150.getString());
    FIX::LegSide LegSide_150('1');
    noLegs_0_0.set(LegSide_150);
    InstrumentLeg_150.insert(LegSide_150.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_150("STRING_540223650");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_150);
    InstrumentLeg_150.insert(LegStateOrProvinceOfIssue_150.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_150("JPY");
    noLegs_0_0.set(LegStrikeCurrency_150);
    InstrumentLeg_150.insert(LegStrikeCurrency_150.getString());
    FIX::LegStrikePrice LegStrikePrice_150;
    LegStrikePrice_150.setString("11743766");
    noLegs_0_0.set(LegStrikePrice_150);
    InstrumentLeg_150.insert(LegStrikePrice_150.getString());
    FIX::LegSymbol LegSymbol_150("STRING_2080958165");
    noLegs_0_0.set(LegSymbol_150);
    InstrumentLeg_150.insert(LegSymbol_150.getString());
    FIX::LegSymbolSfx LegSymbolSfx_150("STRING_1018360570");
    noLegs_0_0.set(LegSymbolSfx_150);
    InstrumentLeg_150.insert(LegSymbolSfx_150.getString());
    FIX::LegTimeUnit LegTimeUnit_150("STRING_399189143");
    noLegs_0_0.set(LegTimeUnit_150);
    InstrumentLeg_150.insert(LegTimeUnit_150.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_150("STRING_1441653885");
    noLegs_0_0.set(LegUnitOfMeasure_150);
    InstrumentLeg_150.insert(LegUnitOfMeasure_150.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_150;
    LegUnitOfMeasureQty_150.setString("12486555");
    noLegs_0_0.set(LegUnitOfMeasureQty_150);
    InstrumentLeg_150.insert(LegUnitOfMeasureQty_150.getString());
    all_values.push_back(InstrumentLeg_150);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_291;
      FIX::LegSecurityAltID LegSecurityAltID_291("STRING_1108565914");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_291);
      LegSecAltIDGrp_NoLegSecurityAltID_291.insert(LegSecurityAltID_291.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_291("STRING_1359027213");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_291);
      LegSecAltIDGrp_NoLegSecurityAltID_291.insert(LegSecurityAltIDSource_291.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_291);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_292;
      FIX::LegSecurityAltID LegSecurityAltID_292("STRING_1317764267");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_292);
      LegSecAltIDGrp_NoLegSecurityAltID_292.insert(LegSecurityAltID_292.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_292("STRING_275025788");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_292);
      LegSecAltIDGrp_NoLegSecurityAltID_292.insert(LegSecurityAltIDSource_292.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_292);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_293;
      FIX::LegSecurityAltID LegSecurityAltID_293("STRING_1029908920");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_293);
      LegSecAltIDGrp_NoLegSecurityAltID_293.insert(LegSecurityAltID_293.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_293("STRING_1770019194");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_293);
      LegSecAltIDGrp_NoLegSecurityAltID_293.insert(LegSecurityAltIDSource_293.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_293);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_65;
      FIX::LegStipulationType LegStipulationType_65("STRING_1183887894");
      noLegStipulations_0_1_0.set(LegStipulationType_65);
      LegStipulations_NoLegStipulations_65.insert(LegStipulationType_65.getString());
      FIX::LegStipulationValue LegStipulationValue_65("STRING_1076509981");
      noLegStipulations_0_1_0.set(LegStipulationValue_65);
      LegStipulations_NoLegStipulations_65.insert(LegStipulationValue_65.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_65);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_128;
      FIX::NestedPartyID NestedPartyID_128("STRING_1502060295");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_128);
      NestedParties_NoNestedPartyIDs_128.insert(NestedPartyID_128.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_128('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_128);
      NestedParties_NoNestedPartyIDs_128.insert(NestedPartyIDSource_128.getString());
      FIX::NestedPartyRole NestedPartyRole_128(1133778326);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_128);
      NestedParties_NoNestedPartyIDs_128.insert(NestedPartyRole_128.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_128);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_275;
        FIX::NestedPartySubID NestedPartySubID_275("STRING_160042491");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_275);
        NstdPtysSubGrp_NoNestedPartySubIDs_275.insert(NestedPartySubID_275.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_275(1556528264);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_275);
        NstdPtysSubGrp_NoNestedPartySubIDs_275.insert(NestedPartySubIDType_275.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_275);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_276;
        FIX::NestedPartySubID NestedPartySubID_276("STRING_28524673");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_276);
        NstdPtysSubGrp_NoNestedPartySubIDs_276.insert(NestedPartySubID_276.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_276(1974056997);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_276);
        NstdPtysSubGrp_NoNestedPartySubIDs_276.insert(NestedPartySubIDType_276.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_276);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_277;
        FIX::NestedPartySubID NestedPartySubID_277("STRING_1452100136");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_277);
        NstdPtysSubGrp_NoNestedPartySubIDs_277.insert(NestedPartySubID_277.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_277(1281767453);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_277);
        NstdPtysSubGrp_NoNestedPartySubIDs_277.insert(NestedPartySubIDType_277.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_277);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_129;
      FIX::NestedPartyID NestedPartyID_129("STRING_1531247014");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_129);
      NestedParties_NoNestedPartyIDs_129.insert(NestedPartyID_129.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_129('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_129);
      NestedParties_NoNestedPartyIDs_129.insert(NestedPartyIDSource_129.getString());
      FIX::NestedPartyRole NestedPartyRole_129(70115664);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_129);
      NestedParties_NoNestedPartyIDs_129.insert(NestedPartyRole_129.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_129);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_278;
        FIX::NestedPartySubID NestedPartySubID_278("STRING_1019216773");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_278);
        NstdPtysSubGrp_NoNestedPartySubIDs_278.insert(NestedPartySubID_278.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_278(3590181);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_278);
        NstdPtysSubGrp_NoNestedPartySubIDs_278.insert(NestedPartySubIDType_278.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_278);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
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
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_0("STRING_1418405916");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegCFICode_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegCFICode_0.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_0("LOCALMKTDATE_1445244067");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityDate_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegMaturityDate_0.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_0("MONTHYEAR_729568131");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityMonthYear_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegMaturityMonthYear_0.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_0("TZTIMEONLY_1705716974");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityTime_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegMaturityTime_0.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_0('4');
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegOptAttribute_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegOptAttribute_0.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_0(2088595344);
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegPutOrCall_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegPutOrCall_0.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_0("STRING_875997593");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityDesc_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecurityDesc_0.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_0("STRING_681352122");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityExchange_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecurityExchange_0.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_0("STRING_971020616");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityID_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecurityID_0.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_0("STRING_498533140");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityIDSource_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecurityIDSource_0.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_0("STRING_53330971");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecuritySubType_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecuritySubType_0.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_0("STRING_7424863");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityType_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecurityType_0.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_0;
      UnderlyingLegStrikePrice_0.setString("15750431");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegStrikePrice_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegStrikePrice_0.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_0("STRING_1008192245");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSymbol_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSymbol_0.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_0("STRING_1509485158");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSymbolSfx_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSymbolSfx_0.getString());
      all_values.push_back(UnderlyingLegInstrument_0);
      all_compo_names.insert("UnderlyingLegInstrument");

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_0("STRING_2141970572");
        noUnderlyingLegSecurityAltID_0_0_2_0.set(UnderlyingLegSecurityAltID_0);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0.insert(UnderlyingLegSecurityAltID_0.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_0("STRING_228556621");
        noUnderlyingLegSecurityAltID_0_0_2_0.set(UnderlyingLegSecurityAltIDSource_0);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0.insert(UnderlyingLegSecurityAltIDSource_0.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0);
        all_compo_names.insert("UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_0_1_0.addGroup(noUnderlyingLegSecurityAltID_0_0_2_0);
      }
      noLegs_0_0.addGroup(noOfLegUnderlyings_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_0_1_1;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_1;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_1("STRING_812377588");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegCFICode_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegCFICode_1.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_1("LOCALMKTDATE_1551015188");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegMaturityDate_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegMaturityDate_1.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_1("MONTHYEAR_257081294");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegMaturityMonthYear_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegMaturityMonthYear_1.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_1("TZTIMEONLY_638950937");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegMaturityTime_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegMaturityTime_1.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_1('8');
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegOptAttribute_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegOptAttribute_1.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_1(1538848747);
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegPutOrCall_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegPutOrCall_1.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_1("STRING_22714303");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecurityDesc_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecurityDesc_1.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_1("STRING_700471815");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecurityExchange_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecurityExchange_1.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_1("STRING_1608964412");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecurityID_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecurityID_1.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_1("STRING_632749945");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecurityIDSource_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecurityIDSource_1.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_1("STRING_1719688588");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecuritySubType_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecuritySubType_1.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_1("STRING_1612554593");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecurityType_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecurityType_1.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_1;
      UnderlyingLegStrikePrice_1.setString("1136625");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegStrikePrice_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegStrikePrice_1.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_1("STRING_990610857");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSymbol_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSymbol_1.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_1("STRING_910315012");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSymbolSfx_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSymbolSfx_1.getString());
      all_values.push_back(UnderlyingLegInstrument_1);
      all_compo_names.insert("UnderlyingLegInstrument");

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_1_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_1("STRING_548844183");
        noUnderlyingLegSecurityAltID_0_1_2_0.set(UnderlyingLegSecurityAltID_1);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1.insert(UnderlyingLegSecurityAltID_1.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_1("STRING_1316641346");
        noUnderlyingLegSecurityAltID_0_1_2_0.set(UnderlyingLegSecurityAltIDSource_1);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1.insert(UnderlyingLegSecurityAltIDSource_1.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1);
        all_compo_names.insert("UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_0_1_1.addGroup(noUnderlyingLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_1_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_2("STRING_784342337");
        noUnderlyingLegSecurityAltID_0_1_2_1.set(UnderlyingLegSecurityAltID_2);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2.insert(UnderlyingLegSecurityAltID_2.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_2("STRING_1424841777");
        noUnderlyingLegSecurityAltID_0_1_2_1.set(UnderlyingLegSecurityAltIDSource_2);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2.insert(UnderlyingLegSecurityAltIDSource_2.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2);
        all_compo_names.insert("UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_0_1_1.addGroup(noUnderlyingLegSecurityAltID_0_1_2_1);
      }
      noLegs_0_0.addGroup(noOfLegUnderlyings_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::TradeCaptureReport::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_17;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_17("MULTIPLESTRINGVALUE_AON");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_17);
    TrdRegTimestamps_NoTrdRegTimestamps_17.insert(DeskOrderHandlingInst_17.getString());
    FIX::DeskType DeskType_17("STRING_D");
    noTrdRegTimestamps_0_0.set(DeskType_17);
    TrdRegTimestamps_NoTrdRegTimestamps_17.insert(DeskType_17.getString());
    FIX::DeskTypeSource DeskTypeSource_17(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_17);
    TrdRegTimestamps_NoTrdRegTimestamps_17.insert(DeskTypeSource_17.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_17(FIX::UTCTIMESTAMP(22, 37, 46, 22, 2, 2017));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_17);
    TrdRegTimestamps_NoTrdRegTimestamps_17.insert(TrdRegTimestamp_17.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_17("STRING_668163426");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_17);
    TrdRegTimestamps_NoTrdRegTimestamps_17.insert(TrdRegTimestampOrigin_17.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_17(5);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_17);
    TrdRegTimestamps_NoTrdRegTimestamps_17.insert(TrdRegTimestampType_17.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_17);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_18;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_18("MULTIPLESTRINGVALUE_CNH");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(DeskOrderHandlingInst_18.getString());
    FIX::DeskType DeskType_18("STRING_O");
    noTrdRegTimestamps_0_1.set(DeskType_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(DeskType_18.getString());
    FIX::DeskTypeSource DeskTypeSource_18(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(DeskTypeSource_18.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_18(FIX::UTCTIMESTAMP(18, 13, 25, 8, 10, 2001));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(TrdRegTimestamp_18.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_18("STRING_2076241122");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(TrdRegTimestampOrigin_18.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_18(7);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(TrdRegTimestampType_18.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_18);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::TradeCaptureReport::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_19;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_19("MULTIPLESTRINGVALUE_NH");
    noTrdRegTimestamps_0_2.set(DeskOrderHandlingInst_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(DeskOrderHandlingInst_19.getString());
    FIX::DeskType DeskType_19("STRING_PT");
    noTrdRegTimestamps_0_2.set(DeskType_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(DeskType_19.getString());
    FIX::DeskTypeSource DeskTypeSource_19(1);
    noTrdRegTimestamps_0_2.set(DeskTypeSource_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(DeskTypeSource_19.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_19(FIX::UTCTIMESTAMP(4, 15, 29, 25, 5, 2007));
    noTrdRegTimestamps_0_2.set(TrdRegTimestamp_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(TrdRegTimestamp_19.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_19("STRING_779513926");
    noTrdRegTimestamps_0_2.set(TrdRegTimestampOrigin_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(TrdRegTimestampOrigin_19.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_19(1);
    noTrdRegTimestamps_0_2.set(TrdRegTimestampType_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(TrdRegTimestampType_19.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_19);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_2);
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
    FIX::TrdRepPartyRole TrdRepPartyRole_0(1090300952);
    noTrdRepIndicators_0_0.set(TrdRepPartyRole_0);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_0.insert(TrdRepPartyRole_0.getString());
    all_values.push_back(TrdRepIndicatorsGrp_NoTrdRepIndicators_0);
    all_compo_names.insert("TrdRepIndicatorsGrp.NoTrdRepIndicators");

    msg.addGroup(noTrdRepIndicators_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::TradeCaptureReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_145;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_145("DATA_1110165552");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_145);
    UnderlyingInstrument_145.insert(EncodedUnderlyingIssuer_145.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_145(1758464379);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_145);
    UnderlyingInstrument_145.insert(EncodedUnderlyingIssuerLen_145.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_145("DATA_1890771872");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_145);
    UnderlyingInstrument_145.insert(EncodedUnderlyingSecurityDesc_145.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_145(573109146);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_145);
    UnderlyingInstrument_145.insert(EncodedUnderlyingSecurityDescLen_145.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_145;
    UnderlyingAdjustedQuantity_145.setString("9180950");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_145);
    UnderlyingInstrument_145.insert(UnderlyingAdjustedQuantity_145.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_145;
    UnderlyingAllocationPercent_145.setString("14.020000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_145);
    UnderlyingInstrument_145.insert(UnderlyingAllocationPercent_145.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_145;
    UnderlyingAttachmentPoint_145.setString("14.870000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_145);
    UnderlyingInstrument_145.insert(UnderlyingAttachmentPoint_145.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_145("STRING_100440113");
    noUnderlyings_0_0.set(UnderlyingCFICode_145);
    UnderlyingInstrument_145.insert(UnderlyingCFICode_145.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_145("STRING_627642747");
    noUnderlyings_0_0.set(UnderlyingCPProgram_145);
    UnderlyingInstrument_145.insert(UnderlyingCPProgram_145.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_145("STRING_2038174593");
    noUnderlyings_0_0.set(UnderlyingCPRegType_145);
    UnderlyingInstrument_145.insert(UnderlyingCPRegType_145.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_145;
    UnderlyingCapValue_145.setString("20630187");
    noUnderlyings_0_0.set(UnderlyingCapValue_145);
    UnderlyingInstrument_145.insert(UnderlyingCapValue_145.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_145;
    UnderlyingCashAmount_145.setString("20660026");
    noUnderlyings_0_0.set(UnderlyingCashAmount_145);
    UnderlyingInstrument_145.insert(UnderlyingCashAmount_145.getString());
    FIX::UnderlyingCashType UnderlyingCashType_145("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_145);
    UnderlyingInstrument_145.insert(UnderlyingCashType_145.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_145;
    UnderlyingContractMultiplier_145.setString("19917761");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_145);
    UnderlyingInstrument_145.insert(UnderlyingContractMultiplier_145.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_145(200006175);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_145);
    UnderlyingInstrument_145.insert(UnderlyingContractMultiplierUnit_145.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_145("COUNTRY_657694059");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_145);
    UnderlyingInstrument_145.insert(UnderlyingCountryOfIssue_145.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_145("LOCALMKTDATE_616280666");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_145);
    UnderlyingInstrument_145.insert(UnderlyingCouponPaymentDate_145.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_145;
    UnderlyingCouponRate_145.setString("75.010000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_145);
    UnderlyingInstrument_145.insert(UnderlyingCouponRate_145.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_145("STRING_665510821");
    noUnderlyings_0_0.set(UnderlyingCreditRating_145);
    UnderlyingInstrument_145.insert(UnderlyingCreditRating_145.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_145("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_145);
    UnderlyingInstrument_145.insert(UnderlyingCurrency_145.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_145;
    UnderlyingCurrentValue_145.setString("5238374");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_145);
    UnderlyingInstrument_145.insert(UnderlyingCurrentValue_145.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_145;
    UnderlyingDetachmentPoint_145.setString("72.270000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_145);
    UnderlyingInstrument_145.insert(UnderlyingDetachmentPoint_145.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_145;
    UnderlyingDirtyPrice_145.setString("10216076");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_145);
    UnderlyingInstrument_145.insert(UnderlyingDirtyPrice_145.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_145;
    UnderlyingEndPrice_145.setString("2860047");
    noUnderlyings_0_0.set(UnderlyingEndPrice_145);
    UnderlyingInstrument_145.insert(UnderlyingEndPrice_145.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_145;
    UnderlyingEndValue_145.setString("19688511");
    noUnderlyings_0_0.set(UnderlyingEndValue_145);
    UnderlyingInstrument_145.insert(UnderlyingEndValue_145.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_145(108639146);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_145);
    UnderlyingInstrument_145.insert(UnderlyingExerciseStyle_145.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_145;
    UnderlyingFXRate_145.setString("9602051");
    noUnderlyings_0_0.set(UnderlyingFXRate_145);
    UnderlyingInstrument_145.insert(UnderlyingFXRate_145.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_145('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_145);
    UnderlyingInstrument_145.insert(UnderlyingFXRateCalc_145.getString());
    FIX::UnderlyingFactor UnderlyingFactor_145;
    UnderlyingFactor_145.setString("11989400");
    noUnderlyings_0_0.set(UnderlyingFactor_145);
    UnderlyingInstrument_145.insert(UnderlyingFactor_145.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_145(393441908);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_145);
    UnderlyingInstrument_145.insert(UnderlyingFlowScheduleType_145.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_145("STRING_688352662");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_145);
    UnderlyingInstrument_145.insert(UnderlyingInstrRegistry_145.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_145("LOCALMKTDATE_809920830");
    noUnderlyings_0_0.set(UnderlyingIssueDate_145);
    UnderlyingInstrument_145.insert(UnderlyingIssueDate_145.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_145("STRING_136730133");
    noUnderlyings_0_0.set(UnderlyingIssuer_145);
    UnderlyingInstrument_145.insert(UnderlyingIssuer_145.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_145("STRING_1261461808");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_145);
    UnderlyingInstrument_145.insert(UnderlyingLocaleOfIssue_145.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_145("LOCALMKTDATE_1728015924");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_145);
    UnderlyingInstrument_145.insert(UnderlyingMaturityDate_145.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_145("MONTHYEAR_1045701535");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_145);
    UnderlyingInstrument_145.insert(UnderlyingMaturityMonthYear_145.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_145("TZTIMEONLY_688879647");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_145);
    UnderlyingInstrument_145.insert(UnderlyingMaturityTime_145.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_145;
    UnderlyingNotionalPercentageOutstanding_145.setString("60.370000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_145);
    UnderlyingInstrument_145.insert(UnderlyingNotionalPercentageOutstanding_145.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_145('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_145);
    UnderlyingInstrument_145.insert(UnderlyingOptAttribute_145.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_145;
    UnderlyingOriginalNotionalPercentageOutstanding_145.setString("5.920000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_145);
    UnderlyingInstrument_145.insert(UnderlyingOriginalNotionalPercentageOutstanding_145.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_145("STRING_1743991114");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_145);
    UnderlyingInstrument_145.insert(UnderlyingPriceUnitOfMeasure_145.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_145;
    UnderlyingPriceUnitOfMeasureQty_145.setString("15918633");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_145);
    UnderlyingInstrument_145.insert(UnderlyingPriceUnitOfMeasureQty_145.getString());
    FIX::UnderlyingProduct UnderlyingProduct_145(398605588);
    noUnderlyings_0_0.set(UnderlyingProduct_145);
    UnderlyingInstrument_145.insert(UnderlyingProduct_145.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_145(1588283665);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_145);
    UnderlyingInstrument_145.insert(UnderlyingPutOrCall_145.getString());
    FIX::UnderlyingPx UnderlyingPx_145;
    UnderlyingPx_145.setString("17918694");
    noUnderlyings_0_0.set(UnderlyingPx_145);
    UnderlyingInstrument_145.insert(UnderlyingPx_145.getString());
    FIX::UnderlyingQty UnderlyingQty_145;
    UnderlyingQty_145.setString("10562996");
    noUnderlyings_0_0.set(UnderlyingQty_145);
    UnderlyingInstrument_145.insert(UnderlyingQty_145.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_145("LOCALMKTDATE_57080683");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_145);
    UnderlyingInstrument_145.insert(UnderlyingRedemptionDate_145.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_145("STRING_674723345");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_145);
    UnderlyingInstrument_145.insert(UnderlyingRepoCollateralSecurityType_145.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_145;
    UnderlyingRepurchaseRate_145.setString("4.690000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_145);
    UnderlyingInstrument_145.insert(UnderlyingRepurchaseRate_145.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_145(82208153);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_145);
    UnderlyingInstrument_145.insert(UnderlyingRepurchaseTerm_145.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_145("STRING_1812750301");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_145);
    UnderlyingInstrument_145.insert(UnderlyingRestructuringType_145.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_145("STRING_98164223");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_145);
    UnderlyingInstrument_145.insert(UnderlyingSecurityDesc_145.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_145("EXCHANGE_1271545381");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_145);
    UnderlyingInstrument_145.insert(UnderlyingSecurityExchange_145.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_145("STRING_686874334");
    noUnderlyings_0_0.set(UnderlyingSecurityID_145);
    UnderlyingInstrument_145.insert(UnderlyingSecurityID_145.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_145("STRING_384168999");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_145);
    UnderlyingInstrument_145.insert(UnderlyingSecurityIDSource_145.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_145("STRING_1092912886");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_145);
    UnderlyingInstrument_145.insert(UnderlyingSecuritySubType_145.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_145("STRING_795513480");
    noUnderlyings_0_0.set(UnderlyingSecurityType_145);
    UnderlyingInstrument_145.insert(UnderlyingSecurityType_145.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_145("STRING_1344374184");
    noUnderlyings_0_0.set(UnderlyingSeniority_145);
    UnderlyingInstrument_145.insert(UnderlyingSeniority_145.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_145("STRING_671099996");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_145);
    UnderlyingInstrument_145.insert(UnderlyingSettlMethod_145.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_145(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_145);
    UnderlyingInstrument_145.insert(UnderlyingSettlementType_145.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_145;
    UnderlyingStartValue_145.setString("17378160");
    noUnderlyings_0_0.set(UnderlyingStartValue_145);
    UnderlyingInstrument_145.insert(UnderlyingStartValue_145.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_145("STRING_1359452658");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_145);
    UnderlyingInstrument_145.insert(UnderlyingStateOrProvinceOfIssue_145.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_145("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_145);
    UnderlyingInstrument_145.insert(UnderlyingStrikeCurrency_145.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_145;
    UnderlyingStrikePrice_145.setString("4734308");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_145);
    UnderlyingInstrument_145.insert(UnderlyingStrikePrice_145.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_145("STRING_237423038");
    noUnderlyings_0_0.set(UnderlyingSymbol_145);
    UnderlyingInstrument_145.insert(UnderlyingSymbol_145.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_145("STRING_772764113");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_145);
    UnderlyingInstrument_145.insert(UnderlyingSymbolSfx_145.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_145("STRING_1162310466");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_145);
    UnderlyingInstrument_145.insert(UnderlyingTimeUnit_145.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_145("STRING_2065879075");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_145);
    UnderlyingInstrument_145.insert(UnderlyingUnitOfMeasure_145.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_145;
    UnderlyingUnitOfMeasureQty_145.setString("2986247");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_145);
    UnderlyingInstrument_145.insert(UnderlyingUnitOfMeasureQty_145.getString());
    all_values.push_back(UnderlyingInstrument_145);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_292;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_292("STRING_1662386542");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_292);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_292.insert(UnderlyingSecurityAltID_292.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_292("STRING_1890488064");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_292);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_292.insert(UnderlyingSecurityAltIDSource_292.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_292);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_293;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_293("STRING_2140486647");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_293);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_293.insert(UnderlyingSecurityAltID_293.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_293("STRING_1103186559");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_293);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_293.insert(UnderlyingSecurityAltIDSource_293.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_293);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_282;
      FIX::UnderlyingStipType UnderlyingStipType_282("STRING_1049302647");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_282);
      UnderlyingStipulations_NoUnderlyingStips_282.insert(UnderlyingStipType_282.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_282("STRING_1160267243");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_282);
      UnderlyingStipulations_NoUnderlyingStips_282.insert(UnderlyingStipValue_282.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_282);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_279;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_279("STRING_623629468");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_279);
      UndlyInstrumentParties_NoUndlyInstrumentParties_279.insert(UnderlyingInstrumentPartyID_279.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_279('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_279);
      UndlyInstrumentParties_NoUndlyInstrumentParties_279.insert(UnderlyingInstrumentPartyIDSource_279.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_279(1874863906);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_279);
      UndlyInstrumentParties_NoUndlyInstrumentParties_279.insert(UnderlyingInstrumentPartyRole_279.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_279);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_559;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_559("STRING_366537129");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_559);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_559.insert(UnderlyingInstrumentPartySubID_559.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_559(414254592);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_559);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_559.insert(UnderlyingInstrumentPartySubIDType_559.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_559);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_146;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_146("DATA_1105962690");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_146);
    UnderlyingInstrument_146.insert(EncodedUnderlyingIssuer_146.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_146(1459450016);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_146);
    UnderlyingInstrument_146.insert(EncodedUnderlyingIssuerLen_146.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_146("DATA_1209768073");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_146);
    UnderlyingInstrument_146.insert(EncodedUnderlyingSecurityDesc_146.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_146(302853227);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_146);
    UnderlyingInstrument_146.insert(EncodedUnderlyingSecurityDescLen_146.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_146;
    UnderlyingAdjustedQuantity_146.setString("21305500");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_146);
    UnderlyingInstrument_146.insert(UnderlyingAdjustedQuantity_146.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_146;
    UnderlyingAllocationPercent_146.setString("80.040000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_146);
    UnderlyingInstrument_146.insert(UnderlyingAllocationPercent_146.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_146;
    UnderlyingAttachmentPoint_146.setString("93.200000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_146);
    UnderlyingInstrument_146.insert(UnderlyingAttachmentPoint_146.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_146("STRING_1342519023");
    noUnderlyings_0_1.set(UnderlyingCFICode_146);
    UnderlyingInstrument_146.insert(UnderlyingCFICode_146.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_146("STRING_1713628766");
    noUnderlyings_0_1.set(UnderlyingCPProgram_146);
    UnderlyingInstrument_146.insert(UnderlyingCPProgram_146.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_146("STRING_1767731898");
    noUnderlyings_0_1.set(UnderlyingCPRegType_146);
    UnderlyingInstrument_146.insert(UnderlyingCPRegType_146.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_146;
    UnderlyingCapValue_146.setString("18159498");
    noUnderlyings_0_1.set(UnderlyingCapValue_146);
    UnderlyingInstrument_146.insert(UnderlyingCapValue_146.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_146;
    UnderlyingCashAmount_146.setString("19510518");
    noUnderlyings_0_1.set(UnderlyingCashAmount_146);
    UnderlyingInstrument_146.insert(UnderlyingCashAmount_146.getString());
    FIX::UnderlyingCashType UnderlyingCashType_146("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_146);
    UnderlyingInstrument_146.insert(UnderlyingCashType_146.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_146;
    UnderlyingContractMultiplier_146.setString("8307766");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_146);
    UnderlyingInstrument_146.insert(UnderlyingContractMultiplier_146.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_146(1869447231);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_146);
    UnderlyingInstrument_146.insert(UnderlyingContractMultiplierUnit_146.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_146("COUNTRY_691637112");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_146);
    UnderlyingInstrument_146.insert(UnderlyingCountryOfIssue_146.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_146("LOCALMKTDATE_425174070");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_146);
    UnderlyingInstrument_146.insert(UnderlyingCouponPaymentDate_146.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_146;
    UnderlyingCouponRate_146.setString("1.250000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_146);
    UnderlyingInstrument_146.insert(UnderlyingCouponRate_146.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_146("STRING_434641528");
    noUnderlyings_0_1.set(UnderlyingCreditRating_146);
    UnderlyingInstrument_146.insert(UnderlyingCreditRating_146.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_146("EUR");
    noUnderlyings_0_1.set(UnderlyingCurrency_146);
    UnderlyingInstrument_146.insert(UnderlyingCurrency_146.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_146;
    UnderlyingCurrentValue_146.setString("19695154");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_146);
    UnderlyingInstrument_146.insert(UnderlyingCurrentValue_146.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_146;
    UnderlyingDetachmentPoint_146.setString("97.160000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_146);
    UnderlyingInstrument_146.insert(UnderlyingDetachmentPoint_146.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_146;
    UnderlyingDirtyPrice_146.setString("15003202");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_146);
    UnderlyingInstrument_146.insert(UnderlyingDirtyPrice_146.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_146;
    UnderlyingEndPrice_146.setString("20316290");
    noUnderlyings_0_1.set(UnderlyingEndPrice_146);
    UnderlyingInstrument_146.insert(UnderlyingEndPrice_146.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_146;
    UnderlyingEndValue_146.setString("20911091");
    noUnderlyings_0_1.set(UnderlyingEndValue_146);
    UnderlyingInstrument_146.insert(UnderlyingEndValue_146.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_146(595312028);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_146);
    UnderlyingInstrument_146.insert(UnderlyingExerciseStyle_146.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_146;
    UnderlyingFXRate_146.setString("17590093");
    noUnderlyings_0_1.set(UnderlyingFXRate_146);
    UnderlyingInstrument_146.insert(UnderlyingFXRate_146.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_146('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_146);
    UnderlyingInstrument_146.insert(UnderlyingFXRateCalc_146.getString());
    FIX::UnderlyingFactor UnderlyingFactor_146;
    UnderlyingFactor_146.setString("9618491");
    noUnderlyings_0_1.set(UnderlyingFactor_146);
    UnderlyingInstrument_146.insert(UnderlyingFactor_146.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_146(25780244);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_146);
    UnderlyingInstrument_146.insert(UnderlyingFlowScheduleType_146.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_146("STRING_1771381918");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_146);
    UnderlyingInstrument_146.insert(UnderlyingInstrRegistry_146.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_146("LOCALMKTDATE_273815526");
    noUnderlyings_0_1.set(UnderlyingIssueDate_146);
    UnderlyingInstrument_146.insert(UnderlyingIssueDate_146.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_146("STRING_1235548317");
    noUnderlyings_0_1.set(UnderlyingIssuer_146);
    UnderlyingInstrument_146.insert(UnderlyingIssuer_146.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_146("STRING_2074235145");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_146);
    UnderlyingInstrument_146.insert(UnderlyingLocaleOfIssue_146.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_146("LOCALMKTDATE_256881890");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_146);
    UnderlyingInstrument_146.insert(UnderlyingMaturityDate_146.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_146("MONTHYEAR_144802674");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_146);
    UnderlyingInstrument_146.insert(UnderlyingMaturityMonthYear_146.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_146("TZTIMEONLY_1967420817");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_146);
    UnderlyingInstrument_146.insert(UnderlyingMaturityTime_146.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_146;
    UnderlyingNotionalPercentageOutstanding_146.setString("9.130000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_146);
    UnderlyingInstrument_146.insert(UnderlyingNotionalPercentageOutstanding_146.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_146('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_146);
    UnderlyingInstrument_146.insert(UnderlyingOptAttribute_146.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_146;
    UnderlyingOriginalNotionalPercentageOutstanding_146.setString("90.670000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_146);
    UnderlyingInstrument_146.insert(UnderlyingOriginalNotionalPercentageOutstanding_146.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_146("STRING_1267867107");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_146);
    UnderlyingInstrument_146.insert(UnderlyingPriceUnitOfMeasure_146.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_146;
    UnderlyingPriceUnitOfMeasureQty_146.setString("16619995");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_146);
    UnderlyingInstrument_146.insert(UnderlyingPriceUnitOfMeasureQty_146.getString());
    FIX::UnderlyingProduct UnderlyingProduct_146(1980681430);
    noUnderlyings_0_1.set(UnderlyingProduct_146);
    UnderlyingInstrument_146.insert(UnderlyingProduct_146.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_146(2098643766);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_146);
    UnderlyingInstrument_146.insert(UnderlyingPutOrCall_146.getString());
    FIX::UnderlyingPx UnderlyingPx_146;
    UnderlyingPx_146.setString("13839631");
    noUnderlyings_0_1.set(UnderlyingPx_146);
    UnderlyingInstrument_146.insert(UnderlyingPx_146.getString());
    FIX::UnderlyingQty UnderlyingQty_146;
    UnderlyingQty_146.setString("5248348");
    noUnderlyings_0_1.set(UnderlyingQty_146);
    UnderlyingInstrument_146.insert(UnderlyingQty_146.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_146("LOCALMKTDATE_376334188");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_146);
    UnderlyingInstrument_146.insert(UnderlyingRedemptionDate_146.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_146("STRING_620829657");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_146);
    UnderlyingInstrument_146.insert(UnderlyingRepoCollateralSecurityType_146.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_146;
    UnderlyingRepurchaseRate_146.setString("64.230000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_146);
    UnderlyingInstrument_146.insert(UnderlyingRepurchaseRate_146.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_146(794511257);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_146);
    UnderlyingInstrument_146.insert(UnderlyingRepurchaseTerm_146.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_146("STRING_960882694");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_146);
    UnderlyingInstrument_146.insert(UnderlyingRestructuringType_146.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_146("STRING_781508211");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_146);
    UnderlyingInstrument_146.insert(UnderlyingSecurityDesc_146.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_146("EXCHANGE_114507325");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_146);
    UnderlyingInstrument_146.insert(UnderlyingSecurityExchange_146.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_146("STRING_313719326");
    noUnderlyings_0_1.set(UnderlyingSecurityID_146);
    UnderlyingInstrument_146.insert(UnderlyingSecurityID_146.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_146("STRING_665653605");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_146);
    UnderlyingInstrument_146.insert(UnderlyingSecurityIDSource_146.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_146("STRING_58132861");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_146);
    UnderlyingInstrument_146.insert(UnderlyingSecuritySubType_146.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_146("STRING_909031354");
    noUnderlyings_0_1.set(UnderlyingSecurityType_146);
    UnderlyingInstrument_146.insert(UnderlyingSecurityType_146.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_146("STRING_277179257");
    noUnderlyings_0_1.set(UnderlyingSeniority_146);
    UnderlyingInstrument_146.insert(UnderlyingSeniority_146.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_146("STRING_723552089");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_146);
    UnderlyingInstrument_146.insert(UnderlyingSettlMethod_146.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_146(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_146);
    UnderlyingInstrument_146.insert(UnderlyingSettlementType_146.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_146;
    UnderlyingStartValue_146.setString("3029595");
    noUnderlyings_0_1.set(UnderlyingStartValue_146);
    UnderlyingInstrument_146.insert(UnderlyingStartValue_146.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_146("STRING_347450359");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_146);
    UnderlyingInstrument_146.insert(UnderlyingStateOrProvinceOfIssue_146.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_146("CAN");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_146);
    UnderlyingInstrument_146.insert(UnderlyingStrikeCurrency_146.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_146;
    UnderlyingStrikePrice_146.setString("2742018");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_146);
    UnderlyingInstrument_146.insert(UnderlyingStrikePrice_146.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_146("STRING_254094281");
    noUnderlyings_0_1.set(UnderlyingSymbol_146);
    UnderlyingInstrument_146.insert(UnderlyingSymbol_146.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_146("STRING_1683310493");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_146);
    UnderlyingInstrument_146.insert(UnderlyingSymbolSfx_146.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_146("STRING_94139025");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_146);
    UnderlyingInstrument_146.insert(UnderlyingTimeUnit_146.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_146("STRING_1853495194");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_146);
    UnderlyingInstrument_146.insert(UnderlyingUnitOfMeasure_146.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_146;
    UnderlyingUnitOfMeasureQty_146.setString("13942582");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_146);
    UnderlyingInstrument_146.insert(UnderlyingUnitOfMeasureQty_146.getString());
    all_values.push_back(UnderlyingInstrument_146);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_294;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_294("STRING_973878653");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_294);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_294.insert(UnderlyingSecurityAltID_294.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_294("STRING_908774233");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_294);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_294.insert(UnderlyingSecurityAltIDSource_294.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_294);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_295;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_295("STRING_1515005874");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_295);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_295.insert(UnderlyingSecurityAltID_295.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_295("STRING_925038772");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_295);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_295.insert(UnderlyingSecurityAltIDSource_295.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_295);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_283;
      FIX::UnderlyingStipType UnderlyingStipType_283("STRING_2039840769");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_283);
      UnderlyingStipulations_NoUnderlyingStips_283.insert(UnderlyingStipType_283.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_283("STRING_1301372960");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_283);
      UnderlyingStipulations_NoUnderlyingStips_283.insert(UnderlyingStipValue_283.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_283);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_284;
      FIX::UnderlyingStipType UnderlyingStipType_284("STRING_766083421");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_284);
      UnderlyingStipulations_NoUnderlyingStips_284.insert(UnderlyingStipType_284.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_284("STRING_851833544");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_284);
      UnderlyingStipulations_NoUnderlyingStips_284.insert(UnderlyingStipValue_284.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_284);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_280;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_280("STRING_1726966115");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_280);
      UndlyInstrumentParties_NoUndlyInstrumentParties_280.insert(UnderlyingInstrumentPartyID_280.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_280('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_280);
      UndlyInstrumentParties_NoUndlyInstrumentParties_280.insert(UnderlyingInstrumentPartyIDSource_280.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_280(62907895);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_280);
      UndlyInstrumentParties_NoUndlyInstrumentParties_280.insert(UnderlyingInstrumentPartyRole_280.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_280);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_560;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_560("STRING_151511712");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_560);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_560.insert(UnderlyingInstrumentPartySubID_560.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_560(121040757);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_560);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_560.insert(UnderlyingInstrumentPartySubIDType_560.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_560);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_561;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_561("STRING_802233148");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_561);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_561.insert(UnderlyingInstrumentPartySubID_561.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_561(428690969);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_561);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_561.insert(UnderlyingInstrumentPartySubIDType_561.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_561);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_281;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_281("STRING_844592846");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_281);
      UndlyInstrumentParties_NoUndlyInstrumentParties_281.insert(UnderlyingInstrumentPartyID_281.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_281('5');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_281);
      UndlyInstrumentParties_NoUndlyInstrumentParties_281.insert(UnderlyingInstrumentPartyIDSource_281.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_281(731650471);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_281);
      UndlyInstrumentParties_NoUndlyInstrumentParties_281.insert(UnderlyingInstrumentPartyRole_281.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_281);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_562;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_562("STRING_522842403");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_562);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_562.insert(UnderlyingInstrumentPartySubID_562.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_562(122674642);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_562);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_562.insert(UnderlyingInstrumentPartySubIDType_562.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_562);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_282;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_282("STRING_1466245061");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_282);
      UndlyInstrumentParties_NoUndlyInstrumentParties_282.insert(UnderlyingInstrumentPartyID_282.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_282('7');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_282);
      UndlyInstrumentParties_NoUndlyInstrumentParties_282.insert(UnderlyingInstrumentPartyIDSource_282.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_282(1805985135);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_282);
      UndlyInstrumentParties_NoUndlyInstrumentParties_282.insert(UnderlyingInstrumentPartyRole_282.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_282);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_563;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_563("STRING_482948230");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_563);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_563.insert(UnderlyingInstrumentPartySubID_563.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_563(1052759772);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_563);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_563.insert(UnderlyingInstrumentPartySubIDType_563.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_563);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_564;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_564("STRING_1094708530");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_564);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_564.insert(UnderlyingInstrumentPartySubID_564.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_564(1456826884);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_564);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_564.insert(UnderlyingInstrumentPartySubIDType_564.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_564);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_565;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_565("STRING_1961534005");
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubID_565);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_565.insert(UnderlyingInstrumentPartySubID_565.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_565(462230756);
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubIDType_565);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_565.insert(UnderlyingInstrumentPartySubIDType_565.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_565);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_29;
  FIX::Yield Yield_29;
  Yield_29.setString("20.080000");
  msg.set(Yield_29);
  YieldData_29.insert(Yield_29.getString());
  FIX::YieldCalcDate YieldCalcDate_29("LOCALMKTDATE_2106787769");
  msg.set(YieldCalcDate_29);
  YieldData_29.insert(YieldCalcDate_29.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_29("LOCALMKTDATE_354587877");
  msg.set(YieldRedemptionDate_29);
  YieldData_29.insert(YieldRedemptionDate_29.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_29;
  YieldRedemptionPrice_29.setString("15357549");
  msg.set(YieldRedemptionPrice_29);
  YieldData_29.insert(YieldRedemptionPrice_29.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_29(725387543);
  msg.set(YieldRedemptionPriceType_29);
  YieldData_29.insert(YieldRedemptionPriceType_29.getString());
  FIX::YieldType YieldType_29("STRING_WORST");
  msg.set(YieldType_29);
  YieldData_29.insert(YieldType_29.getString());
  all_values.push_back(YieldData_29);
  all_compo_names.insert("YieldData");


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
