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
  FIX::AvgPx AvgPx_7;
  AvgPx_7.setString("12921424");
  msg.set(AvgPx_7);
  TradeCaptureReport_0.insert(AvgPx_7.getString());
  FIX::AvgPxIndicator AvgPxIndicator_4(2);
  msg.set(AvgPxIndicator_4);
  TradeCaptureReport_0.insert(AvgPxIndicator_4.getString());
  FIX::CalculatedCcyLastQty CalculatedCcyLastQty_1;
  CalculatedCcyLastQty_1.setString("3301559");
  msg.set(CalculatedCcyLastQty_1);
  TradeCaptureReport_0.insert(CalculatedCcyLastQty_1.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_25("LOCALMKTDATE_2065739561");
  msg.set(ClearingBusinessDate_25);
  TradeCaptureReport_0.insert(ClearingBusinessDate_25.getString());
  FIX::CopyMsgIndicator CopyMsgIndicator_2(false);
  msg.set(CopyMsgIndicator_2);
  TradeCaptureReport_0.insert(CopyMsgIndicator_2.getString());
  FIX::Currency Currency_64("JPY");
  msg.set(Currency_64);
  TradeCaptureReport_0.insert(Currency_64.getString());
  FIX::CurrencyRatio CurrencyRatio_0;
  CurrencyRatio_0.setString("6969492");
  msg.set(CurrencyRatio_0);
  TradeCaptureReport_0.insert(CurrencyRatio_0.getString());
  FIX::DividendYield DividendYield_1;
  DividendYield_1.setString("86.660000");
  msg.set(DividendYield_1);
  TradeCaptureReport_0.insert(DividendYield_1.getString());
  FIX::ExecID ExecID_22("STRING_963090920");
  msg.set(ExecID_22);
  TradeCaptureReport_0.insert(ExecID_22.getString());
  FIX::ExecRestatementReason ExecRestatementReason_1(0);
  msg.set(ExecRestatementReason_1);
  TradeCaptureReport_0.insert(ExecRestatementReason_1.getString());
  FIX::ExecType ExecType_1('4');
  msg.set(ExecType_1);
  TradeCaptureReport_0.insert(ExecType_1.getString());
  FIX::FeeMultiplier FeeMultiplier_0;
  FeeMultiplier_0.setString("6182890");
  msg.set(FeeMultiplier_0);
  TradeCaptureReport_0.insert(FeeMultiplier_0.getString());
  FIX::FirmTradeID FirmTradeID_8("STRING_1450451480");
  msg.set(FirmTradeID_8);
  TradeCaptureReport_0.insert(FirmTradeID_8.getString());
  FIX::GrossTradeAmt GrossTradeAmt_5;
  GrossTradeAmt_5.setString("3473339");
  msg.set(GrossTradeAmt_5);
  TradeCaptureReport_0.insert(GrossTradeAmt_5.getString());
  FIX::LastForwardPoints LastForwardPoints_1;
  LastForwardPoints_1.setString("20217105");
  msg.set(LastForwardPoints_1);
  TradeCaptureReport_0.insert(LastForwardPoints_1.getString());
  FIX::LastMkt LastMkt_6("EXCHANGE_1971718205");
  msg.set(LastMkt_6);
  TradeCaptureReport_0.insert(LastMkt_6.getString());
  FIX::LastParPx LastParPx_10;
  LastParPx_10.setString("10455586");
  msg.set(LastParPx_10);
  TradeCaptureReport_0.insert(LastParPx_10.getString());
  FIX::LastPx LastPx_15;
  LastPx_15.setString("8842167");
  msg.set(LastPx_15);
  TradeCaptureReport_0.insert(LastPx_15.getString());
  FIX::LastQty LastQty_11;
  LastQty_11.setString("15648373");
  msg.set(LastQty_11);
  TradeCaptureReport_0.insert(LastQty_11.getString());
  FIX::LastRptRequested LastRptRequested_3(true);
  msg.set(LastRptRequested_3);
  TradeCaptureReport_0.insert(LastRptRequested_3.getString());
  FIX::LastSpotRate LastSpotRate_1;
  LastSpotRate_1.setString("10493642");
  msg.set(LastSpotRate_1);
  TradeCaptureReport_0.insert(LastSpotRate_1.getString());
  FIX::LastSwapPoints LastSwapPoints_1;
  LastSwapPoints_1.setString("5288870");
  msg.set(LastSwapPoints_1);
  TradeCaptureReport_0.insert(LastSwapPoints_1.getString());
  FIX::LastUpdateTime LastUpdateTime_5(FIX::UTCTIMESTAMP(4, 1, 39, 7, 32005));
  msg.set(LastUpdateTime_5);
  TradeCaptureReport_0.insert(LastUpdateTime_5.getString());
  FIX::MarketID MarketID_28("EXCHANGE_991889902");
  msg.set(MarketID_28);
  TradeCaptureReport_0.insert(MarketID_28.getString());
  FIX::MarketSegmentID MarketSegmentID_28("STRING_654563939");
  msg.set(MarketSegmentID_28);
  TradeCaptureReport_0.insert(MarketSegmentID_28.getString());
  FIX::MatchStatus MatchStatus_11('1');
  msg.set(MatchStatus_11);
  TradeCaptureReport_0.insert(MatchStatus_11.getString());
  FIX::MatchType MatchType_74("STRING_A2");
  msg.set(MatchType_74);
  TradeCaptureReport_0.insert(MatchType_74.getString());
  FIX::MessageEventSource MessageEventSource_4("STRING_572819852");
  msg.set(MessageEventSource_4);
  TradeCaptureReport_0.insert(MessageEventSource_4.getString());
  FIX::MultiLegReportingType MultiLegReportingType_4('1');
  msg.set(MultiLegReportingType_4);
  TradeCaptureReport_0.insert(MultiLegReportingType_4.getString());
  FIX::OrigSecondaryTradeID OrigSecondaryTradeID_0("STRING_27641901");
  msg.set(OrigSecondaryTradeID_0);
  TradeCaptureReport_0.insert(OrigSecondaryTradeID_0.getString());
  FIX::OrigTradeDate OrigTradeDate_0("LOCALMKTDATE_1072677373");
  msg.set(OrigTradeDate_0);
  TradeCaptureReport_0.insert(OrigTradeDate_0.getString());
  FIX::OrigTradeHandlingInstr OrigTradeHandlingInstr_0('8');
  msg.set(OrigTradeHandlingInstr_0);
  TradeCaptureReport_0.insert(OrigTradeHandlingInstr_0.getString());
  FIX::OrigTradeID OrigTradeID_0("STRING_587570567");
  msg.set(OrigTradeID_0);
  TradeCaptureReport_0.insert(OrigTradeID_0.getString());
  FIX::PreviouslyReported PreviouslyReported_3(false);
  msg.set(PreviouslyReported_3);
  TradeCaptureReport_0.insert(PreviouslyReported_3.getString());
  FIX::PriceType PriceType_50(13);
  msg.set(PriceType_50);
  TradeCaptureReport_0.insert(PriceType_50.getString());
  FIX::PublishTrdIndicator PublishTrdIndicator_0(false);
  msg.set(PublishTrdIndicator_0);
  TradeCaptureReport_0.insert(PublishTrdIndicator_0.getString());
  FIX::QtyType QtyType_29(2);
  msg.set(QtyType_29);
  TradeCaptureReport_0.insert(QtyType_29.getString());
  FIX::RejectText RejectText_0("STRING_781220669");
  msg.set(RejectText_0);
  TradeCaptureReport_0.insert(RejectText_0.getString());
  FIX::ReportedPxDiff ReportedPxDiff_0(true);
  msg.set(ReportedPxDiff_0);
  TradeCaptureReport_0.insert(ReportedPxDiff_0.getString());
  FIX::RiskFreeRate RiskFreeRate_3;
  RiskFreeRate_3.setString("3808006");
  msg.set(RiskFreeRate_3);
  TradeCaptureReport_0.insert(RiskFreeRate_3.getString());
  FIX::RndPx RndPx_3;
  RndPx_3.setString("6054552");
  msg.set(RndPx_3);
  TradeCaptureReport_0.insert(RndPx_3.getString());
  FIX::SecondaryExecID SecondaryExecID_9("STRING_1282977034");
  msg.set(SecondaryExecID_9);
  TradeCaptureReport_0.insert(SecondaryExecID_9.getString());
  FIX::SecondaryFirmTradeID SecondaryFirmTradeID_0("STRING_1265017469");
  msg.set(SecondaryFirmTradeID_0);
  TradeCaptureReport_0.insert(SecondaryFirmTradeID_0.getString());
  FIX::SecondaryTradeID SecondaryTradeID_0("STRING_22808928");
  msg.set(SecondaryTradeID_0);
  TradeCaptureReport_0.insert(SecondaryTradeID_0.getString());
  FIX::SecondaryTradeReportID SecondaryTradeReportID_13("STRING_110239341");
  msg.set(SecondaryTradeReportID_13);
  TradeCaptureReport_0.insert(SecondaryTradeReportID_13.getString());
  FIX::SecondaryTradeReportRefID SecondaryTradeReportRefID_0("STRING_166898032");
  msg.set(SecondaryTradeReportRefID_0);
  TradeCaptureReport_0.insert(SecondaryTradeReportRefID_0.getString());
  FIX::SecondaryTrdType SecondaryTrdType_0(551695941);
  msg.set(SecondaryTrdType_0);
  TradeCaptureReport_0.insert(SecondaryTrdType_0.getString());
  FIX::SettlCurrency SettlCurrency_35("GBP");
  msg.set(SettlCurrency_35);
  TradeCaptureReport_0.insert(SettlCurrency_35.getString());
  FIX::SettlDate SettlDate_39("LOCALMKTDATE_422499854");
  msg.set(SettlDate_39);
  TradeCaptureReport_0.insert(SettlDate_39.getString());
  FIX::SettlSessID SettlSessID_12("STRING_ETH");
  msg.set(SettlSessID_12);
  TradeCaptureReport_0.insert(SettlSessID_12.getString());
  FIX::SettlSessSubID SettlSessSubID_11("STRING_970267935");
  msg.set(SettlSessSubID_11);
  TradeCaptureReport_0.insert(SettlSessSubID_11.getString());
  FIX::SettlType SettlType_36("STRING_4");
  msg.set(SettlType_36);
  TradeCaptureReport_0.insert(SettlType_36.getString());
  FIX::ShortSaleReason ShortSaleReason_0(5);
  msg.set(ShortSaleReason_0);
  TradeCaptureReport_0.insert(ShortSaleReason_0.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_13('2');
  msg.set(SubscriptionRequestType_13);
  TradeCaptureReport_0.insert(SubscriptionRequestType_13.getString());
  FIX::TZTransactTime TZTransactTime_0("TZTIMESTAMP_439485271");
  msg.set(TZTransactTime_0);
  TradeCaptureReport_0.insert(TZTransactTime_0.getString());
  FIX::TierCode TierCode_0("STRING_1443529236");
  msg.set(TierCode_0);
  TradeCaptureReport_0.insert(TierCode_0.getString());
  FIX::TotNumTradeReports TotNumTradeReports_0(1136719993);
  msg.set(TotNumTradeReports_0);
  TradeCaptureReport_0.insert(TotNumTradeReports_0.getString());
  FIX::TradeDate TradeDate_28("LOCALMKTDATE_1012305124");
  msg.set(TradeDate_28);
  TradeCaptureReport_0.insert(TradeDate_28.getString());
  FIX::TradeHandlingInstr TradeHandlingInstr_0('0');
  msg.set(TradeHandlingInstr_0);
  TradeCaptureReport_0.insert(TradeHandlingInstr_0.getString());
  FIX::TradeID TradeID_9("STRING_1164361894");
  msg.set(TradeID_9);
  TradeCaptureReport_0.insert(TradeID_9.getString());
  FIX::TradeLegRefID TradeLegRefID_0("STRING_2084982497");
  msg.set(TradeLegRefID_0);
  TradeCaptureReport_0.insert(TradeLegRefID_0.getString());
  FIX::TradeLinkID TradeLinkID_0("STRING_364488771");
  msg.set(TradeLinkID_0);
  TradeCaptureReport_0.insert(TradeLinkID_0.getString());
  FIX::TradePublishIndicator TradePublishIndicator_0(1);
  msg.set(TradePublishIndicator_0);
  TradeCaptureReport_0.insert(TradePublishIndicator_0.getString());
  FIX::TradeReportID TradeReportID_13("STRING_1973267142");
  msg.set(TradeReportID_13);
  TradeCaptureReport_0.insert(TradeReportID_13.getString());
  FIX::TradeReportRefID TradeReportRefID_0("STRING_1842741608");
  msg.set(TradeReportRefID_0);
  TradeCaptureReport_0.insert(TradeReportRefID_0.getString());
  FIX::TradeReportTransType TradeReportTransType_0(1);
  msg.set(TradeReportTransType_0);
  TradeCaptureReport_0.insert(TradeReportTransType_0.getString());
  FIX::TradeReportType TradeReportType_0(8);
  msg.set(TradeReportType_0);
  TradeCaptureReport_0.insert(TradeReportType_0.getString());
  FIX::TradeRequestID TradeRequestID_0("STRING_476478629");
  msg.set(TradeRequestID_0);
  TradeCaptureReport_0.insert(TradeRequestID_0.getString());
  FIX::TransactTime TransactTime_64(FIX::UTCTIMESTAMP(13, 56, 18, 10, 92009));
  msg.set(TransactTime_64);
  TradeCaptureReport_0.insert(TransactTime_64.getString());
  FIX::TransferReason TransferReason_0("STRING_2145073402");
  msg.set(TransferReason_0);
  TradeCaptureReport_0.insert(TransferReason_0.getString());
  FIX::TrdMatchID TrdMatchID_1("STRING_1656438725");
  msg.set(TrdMatchID_1);
  TradeCaptureReport_0.insert(TrdMatchID_1.getString());
  FIX::TrdRptStatus TrdRptStatus_0(3);
  msg.set(TrdRptStatus_0);
  TradeCaptureReport_0.insert(TrdRptStatus_0.getString());
  FIX::TrdSubType TrdSubType_3(14);
  msg.set(TrdSubType_3);
  TradeCaptureReport_0.insert(TrdSubType_3.getString());
  FIX::TrdType TrdType_6(14);
  msg.set(TrdType_6);
  TradeCaptureReport_0.insert(TrdType_6.getString());
  FIX::UnderlyingSettlementDate UnderlyingSettlementDate_2("LOCALMKTDATE_1642043804");
  msg.set(UnderlyingSettlementDate_2);
  TradeCaptureReport_0.insert(UnderlyingSettlementDate_2.getString());
  FIX::UnderlyingTradingSessionID UnderlyingTradingSessionID_0("STRING_1606861622");
  msg.set(UnderlyingTradingSessionID_0);
  TradeCaptureReport_0.insert(UnderlyingTradingSessionID_0.getString());
  FIX::UnderlyingTradingSessionSubID UnderlyingTradingSessionSubID_0("STRING_1863859912");
  msg.set(UnderlyingTradingSessionSubID_0);
  TradeCaptureReport_0.insert(UnderlyingTradingSessionSubID_0.getString());
  FIX::UnsolicitedIndicator UnsolicitedIndicator_3(true);
  msg.set(UnsolicitedIndicator_3);
  TradeCaptureReport_0.insert(UnsolicitedIndicator_3.getString());
  FIX::VenueType VenueType_0('X');
  msg.set(VenueType_0);
  TradeCaptureReport_0.insert(VenueType_0.getString());
  FIX::Volatility Volatility_1;
  Volatility_1.setString("1558615");
  msg.set(Volatility_1);
  TradeCaptureReport_0.insert(Volatility_1.getString());
  all_values.push_back(TradeCaptureReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_19;
  FIX::ApplID ApplID_19("STRING_1490175354");
  msg.set(ApplID_19);
  ApplicationSequenceControl_19.insert(ApplID_19.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_19(410772157);
  msg.set(ApplLastSeqNum_19);
  ApplicationSequenceControl_19.insert(ApplLastSeqNum_19.getString());
  FIX::ApplResendFlag ApplResendFlag_19(false);
  msg.set(ApplResendFlag_19);
  ApplicationSequenceControl_19.insert(ApplResendFlag_19.getString());
  FIX::ApplSeqNum ApplSeqNum_19(971967887);
  msg.set(ApplSeqNum_19);
  ApplicationSequenceControl_19.insert(ApplSeqNum_19.getString());
  all_values.push_back(ApplicationSequenceControl_19);

  // FinancingDetails
  multiset<string> FinancingDetails_31;
  FIX::AgreementCurrency AgreementCurrency_31("JPY");
  msg.set(AgreementCurrency_31);
  FinancingDetails_31.insert(AgreementCurrency_31.getString());
  FIX::AgreementDate AgreementDate_31("LOCALMKTDATE_1336456658");
  msg.set(AgreementDate_31);
  FinancingDetails_31.insert(AgreementDate_31.getString());
  FIX::AgreementDesc AgreementDesc_31("STRING_1179582866");
  msg.set(AgreementDesc_31);
  FinancingDetails_31.insert(AgreementDesc_31.getString());
  FIX::AgreementID AgreementID_31("STRING_931449003");
  msg.set(AgreementID_31);
  FinancingDetails_31.insert(AgreementID_31.getString());
  FIX::DeliveryType DeliveryType_31(2);
  msg.set(DeliveryType_31);
  FinancingDetails_31.insert(DeliveryType_31.getString());
  FIX::EndDate EndDate_31("LOCALMKTDATE_674116141");
  msg.set(EndDate_31);
  FinancingDetails_31.insert(EndDate_31.getString());
  FIX::MarginRatio MarginRatio_31;
  MarginRatio_31.setString("62.270000");
  msg.set(MarginRatio_31);
  FinancingDetails_31.insert(MarginRatio_31.getString());
  FIX::StartDate StartDate_31("LOCALMKTDATE_1508193247");
  msg.set(StartDate_31);
  FinancingDetails_31.insert(StartDate_31.getString());
  FIX::TerminationType TerminationType_31(2);
  msg.set(TerminationType_31);
  FinancingDetails_31.insert(TerminationType_31.getString());
  all_values.push_back(FinancingDetails_31);

  // Instrument
  multiset<string> Instrument_89;
  FIX::AttachmentPoint AttachmentPoint_89;
  AttachmentPoint_89.setString("41.280000");
  msg.set(AttachmentPoint_89);
  Instrument_89.insert(AttachmentPoint_89.getString());
  FIX::CFICode CFICode_96("STRING_442643455");
  msg.set(CFICode_96);
  Instrument_89.insert(CFICode_96.getString());
  FIX::CPProgram CPProgram_89(1);
  msg.set(CPProgram_89);
  Instrument_89.insert(CPProgram_89.getString());
  FIX::CPRegType CPRegType_89("STRING_1807655850");
  msg.set(CPRegType_89);
  Instrument_89.insert(CPRegType_89.getString());
  FIX::CapPrice CapPrice_89;
  CapPrice_89.setString("15473862");
  msg.set(CapPrice_89);
  Instrument_89.insert(CapPrice_89.getString());
  FIX::ContractMultiplier ContractMultiplier_89;
  ContractMultiplier_89.setString("3986808");
  msg.set(ContractMultiplier_89);
  Instrument_89.insert(ContractMultiplier_89.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_89(0);
  msg.set(ContractMultiplierUnit_89);
  Instrument_89.insert(ContractMultiplierUnit_89.getString());
  FIX::ContractSettlMonth ContractSettlMonth_89("MONTHYEAR_1056341317");
  msg.set(ContractSettlMonth_89);
  Instrument_89.insert(ContractSettlMonth_89.getString());
  FIX::CountryOfIssue CountryOfIssue_89("COUNTRY_1881276720");
  msg.set(CountryOfIssue_89);
  Instrument_89.insert(CountryOfIssue_89.getString());
  FIX::CouponPaymentDate CouponPaymentDate_89("LOCALMKTDATE_294355643");
  msg.set(CouponPaymentDate_89);
  Instrument_89.insert(CouponPaymentDate_89.getString());
  FIX::CouponRate CouponRate_89;
  CouponRate_89.setString("62.490000");
  msg.set(CouponRate_89);
  Instrument_89.insert(CouponRate_89.getString());
  FIX::CreditRating CreditRating_89("STRING_1375836876");
  msg.set(CreditRating_89);
  Instrument_89.insert(CreditRating_89.getString());
  FIX::DatedDate DatedDate_89("LOCALMKTDATE_1901217265");
  msg.set(DatedDate_89);
  Instrument_89.insert(DatedDate_89.getString());
  FIX::DetachmentPoint DetachmentPoint_89;
  DetachmentPoint_89.setString("25.130000");
  msg.set(DetachmentPoint_89);
  Instrument_89.insert(DetachmentPoint_89.getString());
  FIX::EncodedIssuer EncodedIssuer_89("DATA_1422482994");
  msg.set(EncodedIssuer_89);
  Instrument_89.insert(EncodedIssuer_89.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_89(1175269429);
  msg.set(EncodedIssuerLen_89);
  Instrument_89.insert(EncodedIssuerLen_89.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_89("DATA_860034048");
  msg.set(EncodedSecurityDesc_89);
  Instrument_89.insert(EncodedSecurityDesc_89.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_89(765174701);
  msg.set(EncodedSecurityDescLen_89);
  Instrument_89.insert(EncodedSecurityDescLen_89.getString());
  FIX::ExerciseStyle ExerciseStyle_89(0);
  msg.set(ExerciseStyle_89);
  Instrument_89.insert(ExerciseStyle_89.getString());
  FIX::Factor Factor_89;
  Factor_89.setString("20282007");
  msg.set(Factor_89);
  Instrument_89.insert(Factor_89.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_89(true);
  msg.set(FlexProductEligibilityIndicator_89);
  Instrument_89.insert(FlexProductEligibilityIndicator_89.getString());
  FIX::FlexibleIndicator FlexibleIndicator_89(false);
  msg.set(FlexibleIndicator_89);
  Instrument_89.insert(FlexibleIndicator_89.getString());
  FIX::FloorPrice FloorPrice_89;
  FloorPrice_89.setString("9863825");
  msg.set(FloorPrice_89);
  Instrument_89.insert(FloorPrice_89.getString());
  FIX::FlowScheduleType FlowScheduleType_89(3);
  msg.set(FlowScheduleType_89);
  Instrument_89.insert(FlowScheduleType_89.getString());
  FIX::InstrRegistry InstrRegistry_89("STRING_45791209");
  msg.set(InstrRegistry_89);
  Instrument_89.insert(InstrRegistry_89.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_89('1');
  msg.set(InstrmtAssignmentMethod_89);
  Instrument_89.insert(InstrmtAssignmentMethod_89.getString());
  FIX::InterestAccrualDate InterestAccrualDate_89("LOCALMKTDATE_1957830216");
  msg.set(InterestAccrualDate_89);
  Instrument_89.insert(InterestAccrualDate_89.getString());
  FIX::IssueDate IssueDate_89("LOCALMKTDATE_719907350");
  msg.set(IssueDate_89);
  Instrument_89.insert(IssueDate_89.getString());
  FIX::Issuer Issuer_89("STRING_1034154150");
  msg.set(Issuer_89);
  Instrument_89.insert(Issuer_89.getString());
  FIX::ListMethod ListMethod_89(1);
  msg.set(ListMethod_89);
  Instrument_89.insert(ListMethod_89.getString());
  FIX::LocaleOfIssue LocaleOfIssue_89("STRING_1125975155");
  msg.set(LocaleOfIssue_89);
  Instrument_89.insert(LocaleOfIssue_89.getString());
  FIX::MaturityDate MaturityDate_89("LOCALMKTDATE_863634630");
  msg.set(MaturityDate_89);
  Instrument_89.insert(MaturityDate_89.getString());
  FIX::MaturityMonthYear MaturityMonthYear_89("MONTHYEAR_1761183271");
  msg.set(MaturityMonthYear_89);
  Instrument_89.insert(MaturityMonthYear_89.getString());
  FIX::MaturityTime MaturityTime_89("TZTIMEONLY_399488010");
  msg.set(MaturityTime_89);
  Instrument_89.insert(MaturityTime_89.getString());
  FIX::MinPriceIncrement MinPriceIncrement_89;
  MinPriceIncrement_89.setString("5238068");
  msg.set(MinPriceIncrement_89);
  Instrument_89.insert(MinPriceIncrement_89.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_89;
  MinPriceIncrementAmount_89.setString("11610858");
  msg.set(MinPriceIncrementAmount_89);
  Instrument_89.insert(MinPriceIncrementAmount_89.getString());
  FIX::NTPositionLimit NTPositionLimit_89(798168904);
  msg.set(NTPositionLimit_89);
  Instrument_89.insert(NTPositionLimit_89.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_89;
  NotionalPercentageOutstanding_89.setString("87.900000");
  msg.set(NotionalPercentageOutstanding_89);
  Instrument_89.insert(NotionalPercentageOutstanding_89.getString());
  FIX::OptAttribute OptAttribute_89('6');
  msg.set(OptAttribute_89);
  Instrument_89.insert(OptAttribute_89.getString());
  FIX::OptPayoutAmount OptPayoutAmount_89;
  OptPayoutAmount_89.setString("5319619");
  msg.set(OptPayoutAmount_89);
  Instrument_89.insert(OptPayoutAmount_89.getString());
  FIX::OptPayoutType OptPayoutType_89(3);
  msg.set(OptPayoutType_89);
  Instrument_89.insert(OptPayoutType_89.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_89;
  OriginalNotionalPercentageOutstanding_89.setString("97.810000");
  msg.set(OriginalNotionalPercentageOutstanding_89);
  Instrument_89.insert(OriginalNotionalPercentageOutstanding_89.getString());
  FIX::Pool Pool_89("STRING_1907798853");
  msg.set(Pool_89);
  Instrument_89.insert(Pool_89.getString());
  FIX::PositionLimit PositionLimit_89(229658051);
  msg.set(PositionLimit_89);
  Instrument_89.insert(PositionLimit_89.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_89("STRING_INT");
  msg.set(PriceQuoteMethod_89);
  Instrument_89.insert(PriceQuoteMethod_89.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_89("STRING_1182798199");
  msg.set(PriceUnitOfMeasure_89);
  Instrument_89.insert(PriceUnitOfMeasure_89.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_89;
  PriceUnitOfMeasureQty_89.setString("14049274");
  msg.set(PriceUnitOfMeasureQty_89);
  Instrument_89.insert(PriceUnitOfMeasureQty_89.getString());
  FIX::Product Product_99(6);
  msg.set(Product_99);
  Instrument_89.insert(Product_99.getString());
  FIX::ProductComplex ProductComplex_89("STRING_1947972900");
  msg.set(ProductComplex_89);
  Instrument_89.insert(ProductComplex_89.getString());
  FIX::PutOrCall PutOrCall_89(1);
  msg.set(PutOrCall_89);
  Instrument_89.insert(PutOrCall_89.getString());
  FIX::RedemptionDate RedemptionDate_89("LOCALMKTDATE_355179755");
  msg.set(RedemptionDate_89);
  Instrument_89.insert(RedemptionDate_89.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_89("STRING_1537631840");
  msg.set(RepoCollateralSecurityType_89);
  Instrument_89.insert(RepoCollateralSecurityType_89.getString());
  FIX::RepurchaseRate RepurchaseRate_89;
  RepurchaseRate_89.setString("74.100000");
  msg.set(RepurchaseRate_89);
  Instrument_89.insert(RepurchaseRate_89.getString());
  FIX::RepurchaseTerm RepurchaseTerm_89(1341562323);
  msg.set(RepurchaseTerm_89);
  Instrument_89.insert(RepurchaseTerm_89.getString());
  FIX::RestructuringType RestructuringType_89("STRING_MM");
  msg.set(RestructuringType_89);
  Instrument_89.insert(RestructuringType_89.getString());
  FIX::SecurityDesc SecurityDesc_89("STRING_1902968619");
  msg.set(SecurityDesc_89);
  Instrument_89.insert(SecurityDesc_89.getString());
  FIX::SecurityExchange SecurityExchange_89("EXCHANGE_1111910247");
  msg.set(SecurityExchange_89);
  Instrument_89.insert(SecurityExchange_89.getString());
  FIX::SecurityGroup SecurityGroup_89("STRING_126610358");
  msg.set(SecurityGroup_89);
  Instrument_89.insert(SecurityGroup_89.getString());
  FIX::SecurityID SecurityID_89("STRING_475392322");
  msg.set(SecurityID_89);
  Instrument_89.insert(SecurityID_89.getString());
  FIX::SecurityIDSource SecurityIDSource_89("STRING_G");
  msg.set(SecurityIDSource_89);
  Instrument_89.insert(SecurityIDSource_89.getString());
  FIX::SecurityStatus SecurityStatus_90("STRING_1");
  msg.set(SecurityStatus_90);
  Instrument_89.insert(SecurityStatus_90.getString());
  FIX::SecuritySubType SecuritySubType_94("STRING_1601367477");
  msg.set(SecuritySubType_94);
  Instrument_89.insert(SecuritySubType_94.getString());
  FIX::SecurityType SecurityType_99("STRING_UST");
  msg.set(SecurityType_99);
  Instrument_89.insert(SecurityType_99.getString());
  FIX::Seniority Seniority_89("STRING_SR");
  msg.set(Seniority_89);
  Instrument_89.insert(Seniority_89.getString());
  FIX::SettlMethod SettlMethod_89('C');
  msg.set(SettlMethod_89);
  Instrument_89.insert(SettlMethod_89.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_89("STRING_1386022213");
  msg.set(SettleOnOpenFlag_89);
  Instrument_89.insert(SettleOnOpenFlag_89.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_89("STRING_72452012");
  msg.set(StateOrProvinceOfIssue_89);
  Instrument_89.insert(StateOrProvinceOfIssue_89.getString());
  FIX::StrikeCurrency StrikeCurrency_89("EUR");
  msg.set(StrikeCurrency_89);
  Instrument_89.insert(StrikeCurrency_89.getString());
  FIX::StrikeMultiplier StrikeMultiplier_89;
  StrikeMultiplier_89.setString("1423955");
  msg.set(StrikeMultiplier_89);
  Instrument_89.insert(StrikeMultiplier_89.getString());
  FIX::StrikePrice StrikePrice_89;
  StrikePrice_89.setString("11835027");
  msg.set(StrikePrice_89);
  Instrument_89.insert(StrikePrice_89.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_89(2);
  msg.set(StrikePriceBoundaryMethod_89);
  Instrument_89.insert(StrikePriceBoundaryMethod_89.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_89;
  StrikePriceBoundaryPrecision_89.setString("53.260000");
  msg.set(StrikePriceBoundaryPrecision_89);
  Instrument_89.insert(StrikePriceBoundaryPrecision_89.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_89(3);
  msg.set(StrikePriceDeterminationMethod_89);
  Instrument_89.insert(StrikePriceDeterminationMethod_89.getString());
  FIX::StrikeValue StrikeValue_89;
  StrikeValue_89.setString("1256898");
  msg.set(StrikeValue_89);
  Instrument_89.insert(StrikeValue_89.getString());
  FIX::Symbol Symbol_89("STRING_814563972");
  msg.set(Symbol_89);
  Instrument_89.insert(Symbol_89.getString());
  FIX::SymbolSfx SymbolSfx_89("STRING_WI");
  msg.set(SymbolSfx_89);
  Instrument_89.insert(SymbolSfx_89.getString());
  FIX::TimeUnit TimeUnit_89("STRING_Min");
  msg.set(TimeUnit_89);
  Instrument_89.insert(TimeUnit_89.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_89(4);
  msg.set(UnderlyingPriceDeterminationMethod_89);
  Instrument_89.insert(UnderlyingPriceDeterminationMethod_89.getString());
  FIX::UnitOfMeasure UnitOfMeasure_89("STRING_MWh");
  msg.set(UnitOfMeasure_89);
  Instrument_89.insert(UnitOfMeasure_89.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_89;
  UnitOfMeasureQty_89.setString("2266190");
  msg.set(UnitOfMeasureQty_89);
  Instrument_89.insert(UnitOfMeasureQty_89.getString());
  FIX::ValuationMethod ValuationMethod_89("STRING_FUTDA");
  msg.set(ValuationMethod_89);
  Instrument_89.insert(ValuationMethod_89.getString());
  all_values.push_back(Instrument_89);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_166;
    FIX::ComplexEventCondition ComplexEventCondition_166(1);
    noComplexEvents_0_0.set(ComplexEventCondition_166);
    ComplexEvents_NoComplexEvents_166.insert(ComplexEventCondition_166.getString());
    FIX::ComplexEventPrice ComplexEventPrice_166;
    ComplexEventPrice_166.setString("8382850");
    noComplexEvents_0_0.set(ComplexEventPrice_166);
    ComplexEvents_NoComplexEvents_166.insert(ComplexEventPrice_166.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_166(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_166);
    ComplexEvents_NoComplexEvents_166.insert(ComplexEventPriceBoundaryMethod_166.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_166;
    ComplexEventPriceBoundaryPrecision_166.setString("14.730000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_166);
    ComplexEvents_NoComplexEvents_166.insert(ComplexEventPriceBoundaryPrecision_166.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_166(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_166);
    ComplexEvents_NoComplexEvents_166.insert(ComplexEventPriceTimeType_166.getString());
    FIX::ComplexEventType ComplexEventType_166(6);
    noComplexEvents_0_0.set(ComplexEventType_166);
    ComplexEvents_NoComplexEvents_166.insert(ComplexEventType_166.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_166;
    ComplexOptPayoutAmount_166.setString("1671901");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_166);
    ComplexEvents_NoComplexEvents_166.insert(ComplexOptPayoutAmount_166.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_166);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_348;
      FIX::ComplexEventEndDate ComplexEventEndDate_348(FIX::UTCTIMESTAMP(1, 46, 42, 9, 122006));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_348);
      ComplexEventDates_NoComplexEventDates_348.insert(ComplexEventEndDate_348.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_348(FIX::UTCTIMESTAMP(10, 11, 22, 11, 22012));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_348);
      ComplexEventDates_NoComplexEventDates_348.insert(ComplexEventStartDate_348.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_348);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_692;
        FIX::ComplexEventEndTime ComplexEventEndTime_692(FIX::UTCTIMEONLY(22, 14, 29));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_692);
        ComplexEventTimes_NoComplexEventTimes_692.insert(ComplexEventEndTime_692.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_692(FIX::UTCTIMEONLY(18, 43, 58));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_692);
        ComplexEventTimes_NoComplexEventTimes_692.insert(ComplexEventStartTime_692.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_692);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_349;
      FIX::ComplexEventEndDate ComplexEventEndDate_349(FIX::UTCTIMESTAMP(13, 11, 45, 2, 42013));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_349);
      ComplexEventDates_NoComplexEventDates_349.insert(ComplexEventEndDate_349.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_349(FIX::UTCTIMESTAMP(8, 30, 51, 11, 42013));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_349);
      ComplexEventDates_NoComplexEventDates_349.insert(ComplexEventStartDate_349.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_349);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_693;
        FIX::ComplexEventEndTime ComplexEventEndTime_693(FIX::UTCTIMEONLY(9, 0, 31));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_693);
        ComplexEventTimes_NoComplexEventTimes_693.insert(ComplexEventEndTime_693.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_693(FIX::UTCTIMEONLY(5, 31, 47));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_693);
        ComplexEventTimes_NoComplexEventTimes_693.insert(ComplexEventStartTime_693.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_693);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_694;
        FIX::ComplexEventEndTime ComplexEventEndTime_694(FIX::UTCTIMEONLY(17, 53, 32));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_694);
        ComplexEventTimes_NoComplexEventTimes_694.insert(ComplexEventEndTime_694.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_694(FIX::UTCTIMEONLY(23, 15, 8));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_694);
        ComplexEventTimes_NoComplexEventTimes_694.insert(ComplexEventStartTime_694.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_694);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_167;
    FIX::ComplexEventCondition ComplexEventCondition_167(2);
    noComplexEvents_0_1.set(ComplexEventCondition_167);
    ComplexEvents_NoComplexEvents_167.insert(ComplexEventCondition_167.getString());
    FIX::ComplexEventPrice ComplexEventPrice_167;
    ComplexEventPrice_167.setString("3784815");
    noComplexEvents_0_1.set(ComplexEventPrice_167);
    ComplexEvents_NoComplexEvents_167.insert(ComplexEventPrice_167.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_167(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_167);
    ComplexEvents_NoComplexEvents_167.insert(ComplexEventPriceBoundaryMethod_167.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_167;
    ComplexEventPriceBoundaryPrecision_167.setString("90.970000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_167);
    ComplexEvents_NoComplexEvents_167.insert(ComplexEventPriceBoundaryPrecision_167.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_167(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_167);
    ComplexEvents_NoComplexEvents_167.insert(ComplexEventPriceTimeType_167.getString());
    FIX::ComplexEventType ComplexEventType_167(5);
    noComplexEvents_0_1.set(ComplexEventType_167);
    ComplexEvents_NoComplexEvents_167.insert(ComplexEventType_167.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_167;
    ComplexOptPayoutAmount_167.setString("727280");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_167);
    ComplexEvents_NoComplexEvents_167.insert(ComplexOptPayoutAmount_167.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_167);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_350;
      FIX::ComplexEventEndDate ComplexEventEndDate_350(FIX::UTCTIMESTAMP(4, 28, 6, 11, 42017));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_350);
      ComplexEventDates_NoComplexEventDates_350.insert(ComplexEventEndDate_350.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_350(FIX::UTCTIMESTAMP(0, 40, 38, 1, 102008));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_350);
      ComplexEventDates_NoComplexEventDates_350.insert(ComplexEventStartDate_350.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_350);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_695;
        FIX::ComplexEventEndTime ComplexEventEndTime_695(FIX::UTCTIMEONLY(11, 41, 44));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_695);
        ComplexEventTimes_NoComplexEventTimes_695.insert(ComplexEventEndTime_695.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_695(FIX::UTCTIMEONLY(5, 0, 41));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_695);
        ComplexEventTimes_NoComplexEventTimes_695.insert(ComplexEventStartTime_695.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_695);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_696;
        FIX::ComplexEventEndTime ComplexEventEndTime_696(FIX::UTCTIMEONLY(21, 0, 21));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_696);
        ComplexEventTimes_NoComplexEventTimes_696.insert(ComplexEventEndTime_696.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_696(FIX::UTCTIMEONLY(3, 43, 33));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_696);
        ComplexEventTimes_NoComplexEventTimes_696.insert(ComplexEventStartTime_696.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_696);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_697;
        FIX::ComplexEventEndTime ComplexEventEndTime_697(FIX::UTCTIMEONLY(15, 53, 36));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_697);
        ComplexEventTimes_NoComplexEventTimes_697.insert(ComplexEventEndTime_697.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_697(FIX::UTCTIMEONLY(8, 15, 34));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_697);
        ComplexEventTimes_NoComplexEventTimes_697.insert(ComplexEventStartTime_697.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_697);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_351;
      FIX::ComplexEventEndDate ComplexEventEndDate_351(FIX::UTCTIMESTAMP(19, 4, 9, 21, 112003));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_351);
      ComplexEventDates_NoComplexEventDates_351.insert(ComplexEventEndDate_351.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_351(FIX::UTCTIMESTAMP(10, 39, 54, 23, 12006));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_351);
      ComplexEventDates_NoComplexEventDates_351.insert(ComplexEventStartDate_351.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_351);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_698;
        FIX::ComplexEventEndTime ComplexEventEndTime_698(FIX::UTCTIMEONLY(19, 20, 38));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_698);
        ComplexEventTimes_NoComplexEventTimes_698.insert(ComplexEventEndTime_698.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_698(FIX::UTCTIMEONLY(11, 13, 8));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_698);
        ComplexEventTimes_NoComplexEventTimes_698.insert(ComplexEventStartTime_698.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_698);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_699;
        FIX::ComplexEventEndTime ComplexEventEndTime_699(FIX::UTCTIMEONLY(17, 1, 33));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_699);
        ComplexEventTimes_NoComplexEventTimes_699.insert(ComplexEventEndTime_699.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_699(FIX::UTCTIMEONLY(13, 41, 33));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_699);
        ComplexEventTimes_NoComplexEventTimes_699.insert(ComplexEventStartTime_699.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_699);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_352;
      FIX::ComplexEventEndDate ComplexEventEndDate_352(FIX::UTCTIMESTAMP(12, 30, 59, 13, 92009));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_352);
      ComplexEventDates_NoComplexEventDates_352.insert(ComplexEventEndDate_352.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_352(FIX::UTCTIMESTAMP(6, 36, 29, 1, 12009));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_352);
      ComplexEventDates_NoComplexEventDates_352.insert(ComplexEventStartDate_352.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_352);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_700;
        FIX::ComplexEventEndTime ComplexEventEndTime_700(FIX::UTCTIMEONLY(10, 10, 26));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_700);
        ComplexEventTimes_NoComplexEventTimes_700.insert(ComplexEventEndTime_700.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_700(FIX::UTCTIMEONLY(1, 40, 54));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_700);
        ComplexEventTimes_NoComplexEventTimes_700.insert(ComplexEventStartTime_700.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_700);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_701;
        FIX::ComplexEventEndTime ComplexEventEndTime_701(FIX::UTCTIMEONLY(13, 47, 0));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_701);
        ComplexEventTimes_NoComplexEventTimes_701.insert(ComplexEventEndTime_701.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_701(FIX::UTCTIMEONLY(13, 41, 30));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_701);
        ComplexEventTimes_NoComplexEventTimes_701.insert(ComplexEventStartTime_701.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_701);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradeCaptureReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_169;
    FIX::EventDate EventDate_169("LOCALMKTDATE_33447790");
    noEvents_0_0.set(EventDate_169);
    EvntGrp_NoEvents_169.insert(EventDate_169.getString());
    FIX::EventPx EventPx_169;
    EventPx_169.setString("15593331");
    noEvents_0_0.set(EventPx_169);
    EvntGrp_NoEvents_169.insert(EventPx_169.getString());
    FIX::EventText EventText_169("STRING_479310970");
    noEvents_0_0.set(EventText_169);
    EvntGrp_NoEvents_169.insert(EventText_169.getString());
    FIX::EventTime EventTime_169(FIX::UTCTIMESTAMP(20, 59, 10, 23, 122009));
    noEvents_0_0.set(EventTime_169);
    EvntGrp_NoEvents_169.insert(EventTime_169.getString());
    FIX::EventType EventType_169(17);
    noEvents_0_0.set(EventType_169);
    EvntGrp_NoEvents_169.insert(EventType_169.getString());
    all_values.push_back(EvntGrp_NoEvents_169);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_170;
    FIX::EventDate EventDate_170("LOCALMKTDATE_2022529815");
    noEvents_0_1.set(EventDate_170);
    EvntGrp_NoEvents_170.insert(EventDate_170.getString());
    FIX::EventPx EventPx_170;
    EventPx_170.setString("63686");
    noEvents_0_1.set(EventPx_170);
    EvntGrp_NoEvents_170.insert(EventPx_170.getString());
    FIX::EventText EventText_170("STRING_1730518806");
    noEvents_0_1.set(EventText_170);
    EvntGrp_NoEvents_170.insert(EventText_170.getString());
    FIX::EventTime EventTime_170(FIX::UTCTIMESTAMP(8, 8, 30, 14, 102008));
    noEvents_0_1.set(EventTime_170);
    EvntGrp_NoEvents_170.insert(EventTime_170.getString());
    FIX::EventType EventType_170(9);
    noEvents_0_1.set(EventType_170);
    EvntGrp_NoEvents_170.insert(EventType_170.getString());
    all_values.push_back(EvntGrp_NoEvents_170);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_174;
    FIX::InstrumentPartyID InstrumentPartyID_174("STRING_35936167");
    noInstrumentParties_0_0.set(InstrumentPartyID_174);
    InstrumentParties_NoInstrumentParties_174.insert(InstrumentPartyID_174.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_174('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_174);
    InstrumentParties_NoInstrumentParties_174.insert(InstrumentPartyIDSource_174.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_174(1139642353);
    noInstrumentParties_0_0.set(InstrumentPartyRole_174);
    InstrumentParties_NoInstrumentParties_174.insert(InstrumentPartyRole_174.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_174);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349;
      FIX::InstrumentPartySubID InstrumentPartySubID_349("STRING_1166247284");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_349);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349.insert(InstrumentPartySubID_349.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_349(1702923594);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_349);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349.insert(InstrumentPartySubIDType_349.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradeCaptureReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_184;
    FIX::SecurityAltID SecurityAltID_184("STRING_2093181063");
    noSecurityAltID_0_0.set(SecurityAltID_184);
    SecAltIDGrp_NoSecurityAltID_184.insert(SecurityAltID_184.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_184("STRING_1736371384");
    noSecurityAltID_0_0.set(SecurityAltIDSource_184);
    SecAltIDGrp_NoSecurityAltID_184.insert(SecurityAltIDSource_184.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_184);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_178;
  FIX::SecurityXML SecurityXML_179("XMLDATA_2001106962");
  msg.set(SecurityXML_179);
  FIX::SecurityXMLLen SecurityXMLLen_89(425008386);
  msg.set(SecurityXMLLen_89);
  FIX::SecurityXMLSchema SecurityXMLSchema_89("STRING_1793952220");
  msg.set(SecurityXMLSchema_89);
  SecurityXML_178.insert(SecurityXMLSchema_89.getString());
  all_values.push_back(SecurityXML_178);

  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::TradeCaptureReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_16;
    FIX::PosAmt PosAmt_16;
    PosAmt_16.setString("5082406");
    noPosAmt_0_0.set(PosAmt_16);
    PositionAmountData_NoPosAmt_16.insert(PosAmt_16.getString());
    FIX::PosAmtType PosAmtType_16("STRING_TVAR");
    noPosAmt_0_0.set(PosAmtType_16);
    PositionAmountData_NoPosAmt_16.insert(PosAmtType_16.getString());
    FIX::PositionCurrency PositionCurrency_16("STRING_750767921");
    noPosAmt_0_0.set(PositionCurrency_16);
    PositionAmountData_NoPosAmt_16.insert(PositionCurrency_16.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_16);

    msg.addGroup(noPosAmt_0_0);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::TradeCaptureReport::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_11;
    FIX::RootPartyID RootPartyID_11("STRING_2034586402");
    noRootPartyIDs_0_0.set(RootPartyID_11);
    RootParties_NoRootPartyIDs_11.insert(RootPartyID_11.getString());
    FIX::RootPartyIDSource RootPartyIDSource_11('1');
    noRootPartyIDs_0_0.set(RootPartyIDSource_11);
    RootParties_NoRootPartyIDs_11.insert(RootPartyIDSource_11.getString());
    FIX::RootPartyRole RootPartyRole_11(340031320);
    noRootPartyIDs_0_0.set(RootPartyRole_11);
    RootParties_NoRootPartyIDs_11.insert(RootPartyRole_11.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_11);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_20;
      FIX::RootPartySubID RootPartySubID_20("STRING_1485144776");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_20);
      RootSubParties_NoRootPartySubIDs_20.insert(RootPartySubID_20.getString());
      FIX::RootPartySubIDType RootPartySubIDType_20(547944044);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_20);
      RootSubParties_NoRootPartySubIDs_20.insert(RootPartySubIDType_20.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_20);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_21;
      FIX::RootPartySubID RootPartySubID_21("STRING_799792377");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_21);
      RootSubParties_NoRootPartySubIDs_21.insert(RootPartySubID_21.getString());
      FIX::RootPartySubIDType RootPartySubIDType_21(202639556);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_21);
      RootSubParties_NoRootPartySubIDs_21.insert(RootPartySubIDType_21.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_21);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_22;
      FIX::RootPartySubID RootPartySubID_22("STRING_1049378955");
      noRootPartySubIDs_0_1_2.set(RootPartySubID_22);
      RootSubParties_NoRootPartySubIDs_22.insert(RootPartySubID_22.getString());
      FIX::RootPartySubIDType RootPartySubIDType_22(1909009479);
      noRootPartySubIDs_0_1_2.set(RootPartySubIDType_22);
      RootSubParties_NoRootPartySubIDs_22.insert(RootPartySubIDType_22.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_22);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_35;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_35("CAN");
  msg.set(BenchmarkCurveCurrency_35);
  SpreadOrBenchmarkCurveData_35.insert(BenchmarkCurveCurrency_35.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_35("STRING_Treasury");
  msg.set(BenchmarkCurveName_35);
  SpreadOrBenchmarkCurveData_35.insert(BenchmarkCurveName_35.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_35("STRING_909933106");
  msg.set(BenchmarkCurvePoint_35);
  SpreadOrBenchmarkCurveData_35.insert(BenchmarkCurvePoint_35.getString());
  FIX::BenchmarkPrice BenchmarkPrice_35;
  BenchmarkPrice_35.setString("14597466");
  msg.set(BenchmarkPrice_35);
  SpreadOrBenchmarkCurveData_35.insert(BenchmarkPrice_35.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_35(1665564014);
  msg.set(BenchmarkPriceType_35);
  SpreadOrBenchmarkCurveData_35.insert(BenchmarkPriceType_35.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_35("STRING_2049575459");
  msg.set(BenchmarkSecurityID_35);
  SpreadOrBenchmarkCurveData_35.insert(BenchmarkSecurityID_35.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_35("STRING_1736875957");
  msg.set(BenchmarkSecurityIDSource_35);
  SpreadOrBenchmarkCurveData_35.insert(BenchmarkSecurityIDSource_35.getString());
  FIX::Spread Spread_35;
  Spread_35.setString("6843276");
  msg.set(Spread_35);
  SpreadOrBenchmarkCurveData_35.insert(Spread_35.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_35);

  // TrdCapRptSideGrp
  // Group TrdCapRptSideGrp.NoSides
  {
    FIX50SP2::TradeCaptureReport::NoSides noSides_0_0;
    // TrdCapRptSideGrp.NoSides
    multiset<string> TrdCapRptSideGrp_NoSides_0;
    FIX::Account Account_44("STRING_31166111");
    noSides_0_0.set(Account_44);
    TrdCapRptSideGrp_NoSides_0.insert(Account_44.getString());
    FIX::AccountType AccountType_38(8);
    noSides_0_0.set(AccountType_38);
    TrdCapRptSideGrp_NoSides_0.insert(AccountType_38.getString());
    FIX::AccruedInterestAmt AccruedInterestAmt_10;
    AccruedInterestAmt_10.setString("11939031");
    noSides_0_0.set(AccruedInterestAmt_10);
    TrdCapRptSideGrp_NoSides_0.insert(AccruedInterestAmt_10.getString());
    FIX::AccruedInterestRate AccruedInterestRate_5;
    AccruedInterestRate_5.setString("30.730000");
    noSides_0_0.set(AccruedInterestRate_5);
    TrdCapRptSideGrp_NoSides_0.insert(AccruedInterestRate_5.getString());
    FIX::AcctIDSource AcctIDSource_37(5);
    noSides_0_0.set(AcctIDSource_37);
    TrdCapRptSideGrp_NoSides_0.insert(AcctIDSource_37.getString());
    FIX::AggressorIndicator AggressorIndicator_1(true);
    noSides_0_0.set(AggressorIndicator_1);
    TrdCapRptSideGrp_NoSides_0.insert(AggressorIndicator_1.getString());
    FIX::AllocID AllocID_20("STRING_1381926879");
    noSides_0_0.set(AllocID_20);
    TrdCapRptSideGrp_NoSides_0.insert(AllocID_20.getString());
    FIX::ComplianceID ComplianceID_13("STRING_1563274138");
    noSides_0_0.set(ComplianceID_13);
    TrdCapRptSideGrp_NoSides_0.insert(ComplianceID_13.getString());
    FIX::Concession Concession_5;
    Concession_5.setString("11167120");
    noSides_0_0.set(Concession_5);
    TrdCapRptSideGrp_NoSides_0.insert(Concession_5.getString());
    FIX::CustOrderCapacity CustOrderCapacity_19(2);
    noSides_0_0.set(CustOrderCapacity_19);
    TrdCapRptSideGrp_NoSides_0.insert(CustOrderCapacity_19.getString());
    FIX::EncodedText EncodedText_96("DATA_2028259291");
    noSides_0_0.set(EncodedText_96);
    TrdCapRptSideGrp_NoSides_0.insert(EncodedText_96.getString());
    FIX::EncodedTextLen EncodedTextLen_96(1003814830);
    noSides_0_0.set(EncodedTextLen_96);
    TrdCapRptSideGrp_NoSides_0.insert(EncodedTextLen_96.getString());
    FIX::EndAccruedInterestAmt EndAccruedInterestAmt_10;
    EndAccruedInterestAmt_10.setString("18873207");
    noSides_0_0.set(EndAccruedInterestAmt_10);
    TrdCapRptSideGrp_NoSides_0.insert(EndAccruedInterestAmt_10.getString());
    FIX::EndCash EndCash_10;
    EndCash_10.setString("2208069");
    noSides_0_0.set(EndCash_10);
    TrdCapRptSideGrp_NoSides_0.insert(EndCash_10.getString());
    FIX::ExDate ExDate_2("LOCALMKTDATE_897286271");
    noSides_0_0.set(ExDate_2);
    TrdCapRptSideGrp_NoSides_0.insert(ExDate_2.getString());
    FIX::ExchangeRule ExchangeRule_0("STRING_1224981899");
    noSides_0_0.set(ExchangeRule_0);
    TrdCapRptSideGrp_NoSides_0.insert(ExchangeRule_0.getString());
    FIX::ExchangeSpecialInstructions ExchangeSpecialInstructions_0("STRING_768751008");
    noSides_0_0.set(ExchangeSpecialInstructions_0);
    TrdCapRptSideGrp_NoSides_0.insert(ExchangeSpecialInstructions_0.getString());
    FIX::InterestAtMaturity InterestAtMaturity_5;
    InterestAtMaturity_5.setString("16970786");
    noSides_0_0.set(InterestAtMaturity_5);
    TrdCapRptSideGrp_NoSides_0.insert(InterestAtMaturity_5.getString());
    FIX::NetGrossInd NetGrossInd_4(2);
    noSides_0_0.set(NetGrossInd_4);
    TrdCapRptSideGrp_NoSides_0.insert(NetGrossInd_4.getString());
    FIX::NetMoney NetMoney_5;
    NetMoney_5.setString("18181299");
    noSides_0_0.set(NetMoney_5);
    TrdCapRptSideGrp_NoSides_0.insert(NetMoney_5.getString());
    FIX::NumDaysInterest NumDaysInterest_5(1458604479);
    noSides_0_0.set(NumDaysInterest_5);
    TrdCapRptSideGrp_NoSides_0.insert(NumDaysInterest_5.getString());
    FIX::OddLot OddLot_0(true);
    noSides_0_0.set(OddLot_0);
    TrdCapRptSideGrp_NoSides_0.insert(OddLot_0.getString());
    FIX::OrderCategory OrderCategory_1('7');
    noSides_0_0.set(OrderCategory_1);
    TrdCapRptSideGrp_NoSides_0.insert(OrderCategory_1.getString());
    FIX::OrderDelay OrderDelay_0(1622015438);
    noSides_0_0.set(OrderDelay_0);
    TrdCapRptSideGrp_NoSides_0.insert(OrderDelay_0.getString());
    FIX::OrderDelayUnit OrderDelayUnit_0(10);
    noSides_0_0.set(OrderDelayUnit_0);
    TrdCapRptSideGrp_NoSides_0.insert(OrderDelayUnit_0.getString());
    FIX::PositionEffect PositionEffect_16('D');
    noSides_0_0.set(PositionEffect_16);
    TrdCapRptSideGrp_NoSides_0.insert(PositionEffect_16.getString());
    FIX::PreallocMethod PreallocMethod_13('0');
    noSides_0_0.set(PreallocMethod_13);
    TrdCapRptSideGrp_NoSides_0.insert(PreallocMethod_13.getString());
    FIX::ProcessCode ProcessCode_14('4');
    noSides_0_0.set(ProcessCode_14);
    TrdCapRptSideGrp_NoSides_0.insert(ProcessCode_14.getString());
    FIX::RptSeq RptSeq_4(2143595826);
    noSides_0_0.set(RptSeq_4);
    TrdCapRptSideGrp_NoSides_0.insert(RptSeq_4.getString());
    FIX::SettlCurrAmt SettlCurrAmt_8;
    SettlCurrAmt_8.setString("18244234");
    noSides_0_0.set(SettlCurrAmt_8);
    TrdCapRptSideGrp_NoSides_0.insert(SettlCurrAmt_8.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_8;
    SettlCurrFxRate_8.setString("17938423");
    noSides_0_0.set(SettlCurrFxRate_8);
    TrdCapRptSideGrp_NoSides_0.insert(SettlCurrFxRate_8.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_10('D');
    noSides_0_0.set(SettlCurrFxRateCalc_10);
    TrdCapRptSideGrp_NoSides_0.insert(SettlCurrFxRateCalc_10.getString());
    FIX::Side Side_50('B');
    noSides_0_0.set(Side_50);
    TrdCapRptSideGrp_NoSides_0.insert(Side_50.getString());
    FIX::SideCurrency SideCurrency_0("GBP");
    noSides_0_0.set(SideCurrency_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideCurrency_0.getString());
    FIX::SideExecID SideExecID_0("STRING_1361998326");
    noSides_0_0.set(SideExecID_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideExecID_0.getString());
    FIX::SideFillStationCd SideFillStationCd_0("STRING_1680633571");
    noSides_0_0.set(SideFillStationCd_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideFillStationCd_0.getString());
    FIX::SideGrossTradeAmt SideGrossTradeAmt_0;
    SideGrossTradeAmt_0.setString("12939945");
    noSides_0_0.set(SideGrossTradeAmt_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideGrossTradeAmt_0.getString());
    FIX::SideLastQty SideLastQty_0(777788816);
    noSides_0_0.set(SideLastQty_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideLastQty_0.getString());
    FIX::SideLiquidityInd SideLiquidityInd_0(649861999);
    noSides_0_0.set(SideLiquidityInd_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideLiquidityInd_0.getString());
    FIX::SideMultiLegReportingType SideMultiLegReportingType_0(3);
    noSides_0_0.set(SideMultiLegReportingType_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideMultiLegReportingType_0.getString());
    FIX::SideReasonCd SideReasonCd_0("STRING_658564459");
    noSides_0_0.set(SideReasonCd_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideReasonCd_0.getString());
    FIX::SideSettlCurrency SideSettlCurrency_0("GBP");
    noSides_0_0.set(SideSettlCurrency_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideSettlCurrency_0.getString());
    FIX::SideTradeReportID SideTradeReportID_0("STRING_879371423");
    noSides_0_0.set(SideTradeReportID_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideTradeReportID_0.getString());
    FIX::SideTrdSubTyp SideTrdSubTyp_0(403479453);
    noSides_0_0.set(SideTrdSubTyp_0);
    TrdCapRptSideGrp_NoSides_0.insert(SideTrdSubTyp_0.getString());
    FIX::SolicitedFlag SolicitedFlag_13(false);
    noSides_0_0.set(SolicitedFlag_13);
    TrdCapRptSideGrp_NoSides_0.insert(SolicitedFlag_13.getString());
    FIX::StartCash StartCash_10;
    StartCash_10.setString("16481224");
    noSides_0_0.set(StartCash_10);
    TrdCapRptSideGrp_NoSides_0.insert(StartCash_10.getString());
    FIX::Text Text_96("STRING_2100558101");
    noSides_0_0.set(Text_96);
    TrdCapRptSideGrp_NoSides_0.insert(Text_96.getString());
    FIX::TimeBracket TimeBracket_1("STRING_1524162576");
    noSides_0_0.set(TimeBracket_1);
    TrdCapRptSideGrp_NoSides_0.insert(TimeBracket_1.getString());
    FIX::TotalTakedown TotalTakedown_5;
    TotalTakedown_5.setString("13187687");
    noSides_0_0.set(TotalTakedown_5);
    TrdCapRptSideGrp_NoSides_0.insert(TotalTakedown_5.getString());
    FIX::TradeAllocIndicator TradeAllocIndicator_0(0);
    noSides_0_0.set(TradeAllocIndicator_0);
    TrdCapRptSideGrp_NoSides_0.insert(TradeAllocIndicator_0.getString());
    FIX::TradeInputDevice TradeInputDevice_1("STRING_900964616");
    noSides_0_0.set(TradeInputDevice_1);
    TrdCapRptSideGrp_NoSides_0.insert(TradeInputDevice_1.getString());
    FIX::TradeInputSource TradeInputSource_3("STRING_265741930");
    noSides_0_0.set(TradeInputSource_3);
    TrdCapRptSideGrp_NoSides_0.insert(TradeInputSource_3.getString());
    FIX::TradingSessionID TradingSessionID_100("STRING_1");
    noSides_0_0.set(TradingSessionID_100);
    TrdCapRptSideGrp_NoSides_0.insert(TradingSessionID_100.getString());
    FIX::TradingSessionSubID TradingSessionSubID_100("STRING_6");
    noSides_0_0.set(TradingSessionSubID_100);
    TrdCapRptSideGrp_NoSides_0.insert(TradingSessionSubID_100.getString());
    all_values.push_back(TrdCapRptSideGrp_NoSides_0);

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_11;
      FIX::ClearingInstruction ClearingInstruction_11(6);
      noClearingInstructions_0_1_0.set(ClearingInstruction_11);
      ClrInstGrp_NoClearingInstructions_11.insert(ClearingInstruction_11.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_11);

      noSides_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoClearingInstructions noClearingInstructions_0_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_12;
      FIX::ClearingInstruction ClearingInstruction_12(2);
      noClearingInstructions_0_1_1.set(ClearingInstruction_12);
      ClrInstGrp_NoClearingInstructions_12.insert(ClearingInstruction_12.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_12);

      noSides_0_0.addGroup(noClearingInstructions_0_1_1);
    }
    // CommissionData
    multiset<string> CommissionData_20;
    FIX::CommCurrency CommCurrency_20("USD");
    noSides_0_0.set(CommCurrency_20);
    CommissionData_20.insert(CommCurrency_20.getString());
    FIX::CommType CommType_23('6');
    noSides_0_0.set(CommType_23);
    CommissionData_20.insert(CommType_23.getString());
    FIX::Commission Commission_23;
    Commission_23.setString("6958522");
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
      multiset<string> ContAmtGrp_NoContAmts_1;
      FIX::ContAmtCurr ContAmtCurr_1("USD");
      noContAmts_0_1_0.set(ContAmtCurr_1);
      ContAmtGrp_NoContAmts_1.insert(ContAmtCurr_1.getString());
      FIX::ContAmtType ContAmtType_1(1);
      noContAmts_0_1_0.set(ContAmtType_1);
      ContAmtGrp_NoContAmts_1.insert(ContAmtType_1.getString());
      FIX::ContAmtValue ContAmtValue_1;
      ContAmtValue_1.setString("19019145");
      noContAmts_0_1_0.set(ContAmtValue_1);
      ContAmtGrp_NoContAmts_1.insert(ContAmtValue_1.getString());
      all_values.push_back(ContAmtGrp_NoContAmts_1);

      noSides_0_0.addGroup(noContAmts_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoContAmts noContAmts_0_1_1;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_2;
      FIX::ContAmtCurr ContAmtCurr_2("CAN");
      noContAmts_0_1_1.set(ContAmtCurr_2);
      ContAmtGrp_NoContAmts_2.insert(ContAmtCurr_2.getString());
      FIX::ContAmtType ContAmtType_2(11);
      noContAmts_0_1_1.set(ContAmtType_2);
      ContAmtGrp_NoContAmts_2.insert(ContAmtType_2.getString());
      FIX::ContAmtValue ContAmtValue_2;
      ContAmtValue_2.setString("5135955");
      noContAmts_0_1_1.set(ContAmtValue_2);
      ContAmtGrp_NoContAmts_2.insert(ContAmtValue_2.getString());
      all_values.push_back(ContAmtGrp_NoContAmts_2);

      noSides_0_0.addGroup(noContAmts_0_1_1);
    }
    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_19;
      FIX::MiscFeeAmt MiscFeeAmt_19;
      MiscFeeAmt_19.setString("20526795");
      noMiscFees_0_1_0.set(MiscFeeAmt_19);
      MiscFeesGrp_NoMiscFees_19.insert(MiscFeeAmt_19.getString());
      FIX::MiscFeeBasis MiscFeeBasis_19(1);
      noMiscFees_0_1_0.set(MiscFeeBasis_19);
      MiscFeesGrp_NoMiscFees_19.insert(MiscFeeBasis_19.getString());
      FIX::MiscFeeCurr MiscFeeCurr_19("USD");
      noMiscFees_0_1_0.set(MiscFeeCurr_19);
      MiscFeesGrp_NoMiscFees_19.insert(MiscFeeCurr_19.getString());
      FIX::MiscFeeType MiscFeeType_19("STRING_1");
      noMiscFees_0_1_0.set(MiscFeeType_19);
      MiscFeesGrp_NoMiscFees_19.insert(MiscFeeType_19.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_19);

      noSides_0_0.addGroup(noMiscFees_0_1_0);
    }
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_149;
      FIX::PartyID PartyID_149("STRING_1525899594");
      noPartyIDs_0_1_0.set(PartyID_149);
      Parties_NoPartyIDs_149.insert(PartyID_149.getString());
      FIX::PartyIDSource PartyIDSource_149('4');
      noPartyIDs_0_1_0.set(PartyIDSource_149);
      Parties_NoPartyIDs_149.insert(PartyIDSource_149.getString());
      FIX::PartyRole PartyRole_149(8);
      noPartyIDs_0_1_0.set(PartyRole_149);
      Parties_NoPartyIDs_149.insert(PartyRole_149.getString());
      all_values.push_back(Parties_NoPartyIDs_149);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_291;
        FIX::PartySubID PartySubID_291("STRING_330632749");
        noPartySubIDs_0_0_2_0.set(PartySubID_291);
        PtysSubGrp_NoPartySubIDs_291.insert(PartySubID_291.getString());
        FIX::PartySubIDType PartySubIDType_291(11);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_291);
        PtysSubGrp_NoPartySubIDs_291.insert(PartySubIDType_291.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_291);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_292;
        FIX::PartySubID PartySubID_292("STRING_1467080326");
        noPartySubIDs_0_0_2_1.set(PartySubID_292);
        PtysSubGrp_NoPartySubIDs_292.insert(PartySubID_292.getString());
        FIX::PartySubIDType PartySubIDType_292(18);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_292);
        PtysSubGrp_NoPartySubIDs_292.insert(PartySubIDType_292.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_292);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails noSettlDetails_0_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_2;
      FIX::SettlObligSource SettlObligSource_2('3');
      noSettlDetails_0_1_0.set(SettlObligSource_2);
      SettlDetails_NoSettlDetails_2.insert(SettlObligSource_2.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_2);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_45;
        FIX::SettlPartyID SettlPartyID_45("STRING_1493897873");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_45);
        SettlParties_NoSettlPartyIDs_45.insert(SettlPartyID_45.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_45('1');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_45);
        SettlParties_NoSettlPartyIDs_45.insert(SettlPartyIDSource_45.getString());
        FIX::SettlPartyRole SettlPartyRole_45(220037147);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_45);
        SettlParties_NoSettlPartyIDs_45.insert(SettlPartyRole_45.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_45);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_95;
          FIX::SettlPartySubID SettlPartySubID_95("STRING_1434672478");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_95);
          SettlPtysSubGrp_NoSettlPartySubIDs_95.insert(SettlPartySubID_95.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_95(827957130);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_95);
          SettlPtysSubGrp_NoSettlPartySubIDs_95.insert(SettlPartySubIDType_95.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_95);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_96;
          FIX::SettlPartySubID SettlPartySubID_96("STRING_433867672");
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubID_96);
          SettlPtysSubGrp_NoSettlPartySubIDs_96.insert(SettlPartySubID_96.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_96(683486046);
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubIDType_96);
          SettlPtysSubGrp_NoSettlPartySubIDs_96.insert(SettlPartySubIDType_96.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_96);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_97;
          FIX::SettlPartySubID SettlPartySubID_97("STRING_582388058");
          noSettlPartySubIDs_0_0_0_3_2.set(SettlPartySubID_97);
          SettlPtysSubGrp_NoSettlPartySubIDs_97.insert(SettlPartySubID_97.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_97(288898727);
          noSettlPartySubIDs_0_0_0_3_2.set(SettlPartySubIDType_97);
          SettlPtysSubGrp_NoSettlPartySubIDs_97.insert(SettlPartySubIDType_97.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_97);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_2);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_46;
        FIX::SettlPartyID SettlPartyID_46("STRING_582161613");
        noSettlPartyIDs_0_0_2_1.set(SettlPartyID_46);
        SettlParties_NoSettlPartyIDs_46.insert(SettlPartyID_46.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_46('1');
        noSettlPartyIDs_0_0_2_1.set(SettlPartyIDSource_46);
        SettlParties_NoSettlPartyIDs_46.insert(SettlPartyIDSource_46.getString());
        FIX::SettlPartyRole SettlPartyRole_46(802494241);
        noSettlPartyIDs_0_0_2_1.set(SettlPartyRole_46);
        SettlParties_NoSettlPartyIDs_46.insert(SettlPartyRole_46.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_46);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_98;
          FIX::SettlPartySubID SettlPartySubID_98("STRING_1521220631");
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubID_98);
          SettlPtysSubGrp_NoSettlPartySubIDs_98.insert(SettlPartySubID_98.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_98(47977531);
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubIDType_98);
          SettlPtysSubGrp_NoSettlPartySubIDs_98.insert(SettlPartySubIDType_98.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_98);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
      }
      noSides_0_0.addGroup(noSettlDetails_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails noSettlDetails_0_1_1;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_3;
      FIX::SettlObligSource SettlObligSource_3('2');
      noSettlDetails_0_1_1.set(SettlObligSource_3);
      SettlDetails_NoSettlDetails_3.insert(SettlObligSource_3.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_3);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_47;
        FIX::SettlPartyID SettlPartyID_47("STRING_941583251");
        noSettlPartyIDs_0_1_2_0.set(SettlPartyID_47);
        SettlParties_NoSettlPartyIDs_47.insert(SettlPartyID_47.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_47('1');
        noSettlPartyIDs_0_1_2_0.set(SettlPartyIDSource_47);
        SettlParties_NoSettlPartyIDs_47.insert(SettlPartyIDSource_47.getString());
        FIX::SettlPartyRole SettlPartyRole_47(901373596);
        noSettlPartyIDs_0_1_2_0.set(SettlPartyRole_47);
        SettlParties_NoSettlPartyIDs_47.insert(SettlPartyRole_47.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_47);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_99;
          FIX::SettlPartySubID SettlPartySubID_99("STRING_729902806");
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubID_99);
          SettlPtysSubGrp_NoSettlPartySubIDs_99.insert(SettlPartySubID_99.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_99(1180754159);
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubIDType_99);
          SettlPtysSubGrp_NoSettlPartySubIDs_99.insert(SettlPartySubIDType_99.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_99);

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_100;
          FIX::SettlPartySubID SettlPartySubID_100("STRING_1337106819");
          noSettlPartySubIDs_0_1_0_3_1.set(SettlPartySubID_100);
          SettlPtysSubGrp_NoSettlPartySubIDs_100.insert(SettlPartySubID_100.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_100(641731467);
          noSettlPartySubIDs_0_1_0_3_1.set(SettlPartySubIDType_100);
          SettlPtysSubGrp_NoSettlPartySubIDs_100.insert(SettlPartySubIDType_100.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_100);

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_101;
          FIX::SettlPartySubID SettlPartySubID_101("STRING_500350837");
          noSettlPartySubIDs_0_1_0_3_2.set(SettlPartySubID_101);
          SettlPtysSubGrp_NoSettlPartySubIDs_101.insert(SettlPartySubID_101.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_101(192717720);
          noSettlPartySubIDs_0_1_0_3_2.set(SettlPartySubIDType_101);
          SettlPtysSubGrp_NoSettlPartySubIDs_101.insert(SettlPartySubIDType_101.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_101);

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_2);
        }
        noSettlDetails_0_1_1.addGroup(noSettlPartyIDs_0_1_2_0);
      }
      noSides_0_0.addGroup(noSettlDetails_0_1_1);
    }
    // SideTrdRegTS
    // Group SideTrdRegTS.NoSideTrdRegTS
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSideTrdRegTS noSideTrdRegTS_0_1_0;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_0;
      FIX::SideTrdRegTimestamp SideTrdRegTimestamp_0(FIX::UTCTIMESTAMP(7, 20, 22, 19, 62000));
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestamp_0);
      SideTrdRegTS_NoSideTrdRegTS_0.insert(SideTrdRegTimestamp_0.getString());
      FIX::SideTrdRegTimestampSrc SideTrdRegTimestampSrc_0("STRING_764896877");
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestampSrc_0);
      SideTrdRegTS_NoSideTrdRegTS_0.insert(SideTrdRegTimestampSrc_0.getString());
      FIX::SideTrdRegTimestampType SideTrdRegTimestampType_0(1569290337);
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestampType_0);
      SideTrdRegTS_NoSideTrdRegTS_0.insert(SideTrdRegTimestampType_0.getString());
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_0);

      noSides_0_0.addGroup(noSideTrdRegTS_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSideTrdRegTS noSideTrdRegTS_0_1_1;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_1;
      FIX::SideTrdRegTimestamp SideTrdRegTimestamp_1(FIX::UTCTIMESTAMP(7, 44, 51, 17, 32007));
      noSideTrdRegTS_0_1_1.set(SideTrdRegTimestamp_1);
      SideTrdRegTS_NoSideTrdRegTS_1.insert(SideTrdRegTimestamp_1.getString());
      FIX::SideTrdRegTimestampSrc SideTrdRegTimestampSrc_1("STRING_189563005");
      noSideTrdRegTS_0_1_1.set(SideTrdRegTimestampSrc_1);
      SideTrdRegTS_NoSideTrdRegTS_1.insert(SideTrdRegTimestampSrc_1.getString());
      FIX::SideTrdRegTimestampType SideTrdRegTimestampType_1(561177189);
      noSideTrdRegTS_0_1_1.set(SideTrdRegTimestampType_1);
      SideTrdRegTS_NoSideTrdRegTS_1.insert(SideTrdRegTimestampType_1.getString());
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_1);

      noSides_0_0.addGroup(noSideTrdRegTS_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSideTrdRegTS noSideTrdRegTS_0_1_2;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_2;
      FIX::SideTrdRegTimestamp SideTrdRegTimestamp_2(FIX::UTCTIMESTAMP(7, 20, 36, 15, 32004));
      noSideTrdRegTS_0_1_2.set(SideTrdRegTimestamp_2);
      SideTrdRegTS_NoSideTrdRegTS_2.insert(SideTrdRegTimestamp_2.getString());
      FIX::SideTrdRegTimestampSrc SideTrdRegTimestampSrc_2("STRING_1647164763");
      noSideTrdRegTS_0_1_2.set(SideTrdRegTimestampSrc_2);
      SideTrdRegTS_NoSideTrdRegTS_2.insert(SideTrdRegTimestampSrc_2.getString());
      FIX::SideTrdRegTimestampType SideTrdRegTimestampType_2(1698857681);
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
      multiset<string> Stipulations_NoStipulations_65;
      FIX::StipulationType StipulationType_65("STRING_PURPOSE");
      noStipulations_0_1_0.set(StipulationType_65);
      Stipulations_NoStipulations_65.insert(StipulationType_65.getString());
      FIX::StipulationValue StipulationValue_65("STRING_1891575401");
      noStipulations_0_1_0.set(StipulationValue_65);
      Stipulations_NoStipulations_65.insert(StipulationValue_65.getString());
      all_values.push_back(Stipulations_NoStipulations_65);

      noSides_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_66;
      FIX::StipulationType StipulationType_66("STRING_HAIRCUT");
      noStipulations_0_1_1.set(StipulationType_66);
      Stipulations_NoStipulations_66.insert(StipulationType_66.getString());
      FIX::StipulationValue StipulationValue_66("STRING_1196506188");
      noStipulations_0_1_1.set(StipulationValue_66);
      Stipulations_NoStipulations_66.insert(StipulationValue_66.getString());
      all_values.push_back(Stipulations_NoStipulations_66);

      noSides_0_0.addGroup(noStipulations_0_1_1);
    }
    // TradeReportOrderDetail
    multiset<string> TradeReportOrderDetail_0;
    FIX::BookingType BookingType_22(2);
    noSides_0_0.set(BookingType_22);
    TradeReportOrderDetail_0.insert(BookingType_22.getString());
    FIX::ClOrdID ClOrdID_47("STRING_95376920");
    noSides_0_0.set(ClOrdID_47);
    TradeReportOrderDetail_0.insert(ClOrdID_47.getString());
    FIX::CumQty CumQty_3;
    CumQty_3.setString("19645056");
    noSides_0_0.set(CumQty_3);
    TradeReportOrderDetail_0.insert(CumQty_3.getString());
    FIX::ExecInst ExecInst_13("MULTIPLECHARVALUE_S");
    noSides_0_0.set(ExecInst_13);
    TradeReportOrderDetail_0.insert(ExecInst_13.getString());
    FIX::ExpireTime ExpireTime_25(FIX::UTCTIMESTAMP(23, 37, 15, 1, 92015));
    noSides_0_0.set(ExpireTime_25);
    TradeReportOrderDetail_0.insert(ExpireTime_25.getString());
    FIX::LeavesQty LeavesQty_2;
    LeavesQty_2.setString("19317204");
    noSides_0_0.set(LeavesQty_2);
    TradeReportOrderDetail_0.insert(LeavesQty_2.getString());
    FIX::ListID ListID_22("STRING_178458286");
    noSides_0_0.set(ListID_22);
    TradeReportOrderDetail_0.insert(ListID_22.getString());
    FIX::LotType LotType_40('2');
    noSides_0_0.set(LotType_40);
    TradeReportOrderDetail_0.insert(LotType_40.getString());
    FIX::OrdStatus OrdStatus_3('0');
    noSides_0_0.set(OrdStatus_3);
    TradeReportOrderDetail_0.insert(OrdStatus_3.getString());
    FIX::OrdType OrdType_100('C');
    noSides_0_0.set(OrdType_100);
    TradeReportOrderDetail_0.insert(OrdType_100.getString());
    FIX::OrderCapacity OrderCapacity_26('I');
    noSides_0_0.set(OrderCapacity_26);
    TradeReportOrderDetail_0.insert(OrderCapacity_26.getString());
    FIX::OrderID OrderID_31("STRING_47864240");
    noSides_0_0.set(OrderID_31);
    TradeReportOrderDetail_0.insert(OrderID_31.getString());
    FIX::OrderInputDevice OrderInputDevice_0("STRING_2080541946");
    noSides_0_0.set(OrderInputDevice_0);
    TradeReportOrderDetail_0.insert(OrderInputDevice_0.getString());
    FIX::OrderRestrictions OrderRestrictions_23("MULTIPLECHARVALUE_7");
    noSides_0_0.set(OrderRestrictions_23);
    TradeReportOrderDetail_0.insert(OrderRestrictions_23.getString());
    FIX::OrigCustOrderCapacity OrigCustOrderCapacity_0(1);
    noSides_0_0.set(OrigCustOrderCapacity_0);
    TradeReportOrderDetail_0.insert(OrigCustOrderCapacity_0.getString());
    FIX::OrigOrdModTime OrigOrdModTime_6(FIX::UTCTIMESTAMP(17, 19, 4, 3, 12007));
    noSides_0_0.set(OrigOrdModTime_6);
    TradeReportOrderDetail_0.insert(OrigOrdModTime_6.getString());
    FIX::Price Price_26;
    Price_26.setString("4501819");
    noSides_0_0.set(Price_26);
    TradeReportOrderDetail_0.insert(Price_26.getString());
    FIX::RefOrdIDReason RefOrdIDReason_0(0);
    noSides_0_0.set(RefOrdIDReason_0);
    TradeReportOrderDetail_0.insert(RefOrdIDReason_0.getString());
    FIX::RefOrderID RefOrderID_5("STRING_1095688157");
    noSides_0_0.set(RefOrderID_5);
    TradeReportOrderDetail_0.insert(RefOrderID_5.getString());
    FIX::RefOrderIDSource RefOrderIDSource_5('1');
    noSides_0_0.set(RefOrderIDSource_5);
    TradeReportOrderDetail_0.insert(RefOrderIDSource_5.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_40("STRING_246528800");
    noSides_0_0.set(SecondaryClOrdID_40);
    TradeReportOrderDetail_0.insert(SecondaryClOrdID_40.getString());
    FIX::SecondaryOrderID SecondaryOrderID_23("STRING_912710120");
    noSides_0_0.set(SecondaryOrderID_23);
    TradeReportOrderDetail_0.insert(SecondaryOrderID_23.getString());
    FIX::StopPx StopPx_10;
    StopPx_10.setString("14565940");
    noSides_0_0.set(StopPx_10);
    TradeReportOrderDetail_0.insert(StopPx_10.getString());
    FIX::TimeInForce TimeInForce_80('6');
    noSides_0_0.set(TimeInForce_80);
    TradeReportOrderDetail_0.insert(TimeInForce_80.getString());
    FIX::TransBkdTime TransBkdTime_4(FIX::UTCTIMESTAMP(2, 1, 8, 23, 92001));
    noSides_0_0.set(TransBkdTime_4);
    TradeReportOrderDetail_0.insert(TransBkdTime_4.getString());
    all_values.push_back(TradeReportOrderDetail_0);

    // DisplayInstruction
    multiset<string> DisplayInstruction_10;
    FIX::DisplayHighQty DisplayHighQty_10;
    DisplayHighQty_10.setString("11605156");
    noSides_0_0.set(DisplayHighQty_10);
    DisplayInstruction_10.insert(DisplayHighQty_10.getString());
    FIX::DisplayLowQty DisplayLowQty_10;
    DisplayLowQty_10.setString("12222740");
    noSides_0_0.set(DisplayLowQty_10);
    DisplayInstruction_10.insert(DisplayLowQty_10.getString());
    FIX::DisplayMethod DisplayMethod_10('1');
    noSides_0_0.set(DisplayMethod_10);
    DisplayInstruction_10.insert(DisplayMethod_10.getString());
    FIX::DisplayMinIncr DisplayMinIncr_10;
    DisplayMinIncr_10.setString("15285369");
    noSides_0_0.set(DisplayMinIncr_10);
    DisplayInstruction_10.insert(DisplayMinIncr_10.getString());
    FIX::DisplayQty DisplayQty_10;
    DisplayQty_10.setString("5124789");
    noSides_0_0.set(DisplayQty_10);
    DisplayInstruction_10.insert(DisplayQty_10.getString());
    FIX::DisplayWhen DisplayWhen_10('1');
    noSides_0_0.set(DisplayWhen_10);
    DisplayInstruction_10.insert(DisplayWhen_10.getString());
    FIX::RefreshQty RefreshQty_10;
    RefreshQty_10.setString("14615951");
    noSides_0_0.set(RefreshQty_10);
    DisplayInstruction_10.insert(RefreshQty_10.getString());
    FIX::SecondaryDisplayQty SecondaryDisplayQty_10;
    SecondaryDisplayQty_10.setString("13054442");
    noSides_0_0.set(SecondaryDisplayQty_10);
    DisplayInstruction_10.insert(SecondaryDisplayQty_10.getString());
    all_values.push_back(DisplayInstruction_10);

    // OrderQtyData
    multiset<string> OrderQtyData_26;
    FIX::CashOrderQty CashOrderQty_26;
    CashOrderQty_26.setString("8804355");
    noSides_0_0.set(CashOrderQty_26);
    OrderQtyData_26.insert(CashOrderQty_26.getString());
    FIX::OrderPercent OrderPercent_26;
    OrderPercent_26.setString("40.990000");
    noSides_0_0.set(OrderPercent_26);
    OrderQtyData_26.insert(OrderPercent_26.getString());
    FIX::OrderQty OrderQty_35;
    OrderQty_35.setString("3126768");
    noSides_0_0.set(OrderQty_35);
    OrderQtyData_26.insert(OrderQty_35.getString());
    FIX::RoundingDirection RoundingDirection_26('0');
    noSides_0_0.set(RoundingDirection_26);
    OrderQtyData_26.insert(RoundingDirection_26.getString());
    FIX::RoundingModulus RoundingModulus_26;
    RoundingModulus_26.setString("17602141");
    noSides_0_0.set(RoundingModulus_26);
    OrderQtyData_26.insert(RoundingModulus_26.getString());
    all_values.push_back(OrderQtyData_26);

    // TrdAllocGrp
    // Group TrdAllocGrp.NoAllocs
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoAllocs noAllocs_0_1_0;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_0;
      FIX::AllocAccount AllocAccount_36("STRING_665383268");
      noAllocs_0_1_0.set(AllocAccount_36);
      TrdAllocGrp_NoAllocs_0.insert(AllocAccount_36.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_36(1659396085);
      noAllocs_0_1_0.set(AllocAcctIDSource_36);
      TrdAllocGrp_NoAllocs_0.insert(AllocAcctIDSource_36.getString());
      FIX::AllocClearingFeeIndicator AllocClearingFeeIndicator_0("STRING_1468949028");
      noAllocs_0_1_0.set(AllocClearingFeeIndicator_0);
      TrdAllocGrp_NoAllocs_0.insert(AllocClearingFeeIndicator_0.getString());
      FIX::AllocCustomerCapacity AllocCustomerCapacity_8("STRING_816535148");
      noAllocs_0_1_0.set(AllocCustomerCapacity_8);
      TrdAllocGrp_NoAllocs_0.insert(AllocCustomerCapacity_8.getString());
      FIX::AllocMethod AllocMethod_5(2);
      noAllocs_0_1_0.set(AllocMethod_5);
      TrdAllocGrp_NoAllocs_0.insert(AllocMethod_5.getString());
      FIX::AllocQty AllocQty_34;
      AllocQty_34.setString("13801253");
      noAllocs_0_1_0.set(AllocQty_34);
      TrdAllocGrp_NoAllocs_0.insert(AllocQty_34.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_30("USD");
      noAllocs_0_1_0.set(AllocSettlCurrency_30);
      TrdAllocGrp_NoAllocs_0.insert(AllocSettlCurrency_30.getString());
      FIX::IndividualAllocID IndividualAllocID_35("STRING_689235795");
      noAllocs_0_1_0.set(IndividualAllocID_35);
      TrdAllocGrp_NoAllocs_0.insert(IndividualAllocID_35.getString());
      FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_8("STRING_392908687");
      noAllocs_0_1_0.set(SecondaryIndividualAllocID_8);
      TrdAllocGrp_NoAllocs_0.insert(SecondaryIndividualAllocID_8.getString());
      all_values.push_back(TrdAllocGrp_NoAllocs_0);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_38;
        FIX::Nested2PartyID Nested2PartyID_38("STRING_161177206");
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyID_38);
        NestedParties2_NoNested2PartyIDs_38.insert(Nested2PartyID_38.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_38('3');
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyIDSource_38);
        NestedParties2_NoNested2PartyIDs_38.insert(Nested2PartyIDSource_38.getString());
        FIX::Nested2PartyRole Nested2PartyRole_38(1553552250);
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyRole_38);
        NestedParties2_NoNested2PartyIDs_38.insert(Nested2PartyRole_38.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_38);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_78;
          FIX::Nested2PartySubID Nested2PartySubID_78("STRING_721122404");
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubID_78);
          NstdPtys2SubGrp_NoNested2PartySubIDs_78.insert(Nested2PartySubID_78.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_78(586110227);
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubIDType_78);
          NstdPtys2SubGrp_NoNested2PartySubIDs_78.insert(Nested2PartySubIDType_78.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_78);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_79;
          FIX::Nested2PartySubID Nested2PartySubID_79("STRING_156266490");
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubID_79);
          NstdPtys2SubGrp_NoNested2PartySubIDs_79.insert(Nested2PartySubID_79.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_79(1943396458);
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubIDType_79);
          NstdPtys2SubGrp_NoNested2PartySubIDs_79.insert(Nested2PartySubIDType_79.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_79);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_1);
        }
        noAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
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
    LegCalculatedCcyLastQty_3.setString("16848033");
    noLegs_0_0.set(LegCalculatedCcyLastQty_3);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegCalculatedCcyLastQty_3.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_5(308391755);
    noLegs_0_0.set(LegCoveredOrUncovered_5);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegCoveredOrUncovered_5.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_5;
    LegCurrencyRatio_5.setString("8832965");
    noLegs_0_0.set(LegCurrencyRatio_5);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegCurrencyRatio_5.getString());
    FIX::LegDividendYield LegDividendYield_5;
    LegDividendYield_5.setString("49.400000");
    noLegs_0_0.set(LegDividendYield_5);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegDividendYield_5.getString());
    FIX::LegExecInst LegExecInst_5("MULTIPLECHARVALUE_1613836030");
    noLegs_0_0.set(LegExecInst_5);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegExecInst_5.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_3;
    LegGrossTradeAmt_3.setString("17637320");
    noLegs_0_0.set(LegGrossTradeAmt_3);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegGrossTradeAmt_3.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_3;
    LegLastForwardPoints_3.setString("7124953");
    noLegs_0_0.set(LegLastForwardPoints_3);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegLastForwardPoints_3.getString());
    FIX::LegLastPx LegLastPx_3;
    LegLastPx_3.setString("19265128");
    noLegs_0_0.set(LegLastPx_3);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegLastPx_3.getString());
    FIX::LegLastQty LegLastQty_3;
    LegLastQty_3.setString("4470595");
    noLegs_0_0.set(LegLastQty_3);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegLastQty_3.getString());
    FIX::LegNumber LegNumber_0(325225859);
    noLegs_0_0.set(LegNumber_0);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegNumber_0.getString());
    FIX::LegPositionEffect LegPositionEffect_5('7');
    noLegs_0_0.set(LegPositionEffect_5);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegPositionEffect_5.getString());
    FIX::LegQty LegQty_19;
    LegQty_19.setString("11124427");
    noLegs_0_0.set(LegQty_19);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegQty_19.getString());
    FIX::LegRefID LegRefID_17("STRING_1984621944");
    noLegs_0_0.set(LegRefID_17);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegRefID_17.getString());
    FIX::LegReportID LegReportID_0("STRING_119261632");
    noLegs_0_0.set(LegReportID_0);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegReportID_0.getString());
    FIX::LegSettlCurrency LegSettlCurrency_5("CHF");
    noLegs_0_0.set(LegSettlCurrency_5);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegSettlCurrency_5.getString());
    FIX::LegSettlDate LegSettlDate_19("LOCALMKTDATE_1499386994");
    noLegs_0_0.set(LegSettlDate_19);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegSettlDate_19.getString());
    FIX::LegSettlType LegSettlType_27('8');
    noLegs_0_0.set(LegSettlType_27);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegSettlType_27.getString());
    FIX::LegSwapType LegSwapType_27(2);
    noLegs_0_0.set(LegSwapType_27);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegSwapType_27.getString());
    FIX::LegVolatility LegVolatility_5;
    LegVolatility_5.setString("411391");
    noLegs_0_0.set(LegVolatility_5);
    TrdInstrmtLegGrp_NoLegs_0.insert(LegVolatility_5.getString());
    all_values.push_back(TrdInstrmtLegGrp_NoLegs_0);

    // InstrumentLeg
    multiset<string> InstrumentLeg_117;
    FIX::EncodedLegIssuer EncodedLegIssuer_117("DATA_1237466920");
    noLegs_0_0.set(EncodedLegIssuer_117);
    InstrumentLeg_117.insert(EncodedLegIssuer_117.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_117(2122797007);
    noLegs_0_0.set(EncodedLegIssuerLen_117);
    InstrumentLeg_117.insert(EncodedLegIssuerLen_117.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_117("DATA_202316347");
    noLegs_0_0.set(EncodedLegSecurityDesc_117);
    InstrumentLeg_117.insert(EncodedLegSecurityDesc_117.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_117(1612826620);
    noLegs_0_0.set(EncodedLegSecurityDescLen_117);
    InstrumentLeg_117.insert(EncodedLegSecurityDescLen_117.getString());
    FIX::LegCFICode LegCFICode_117("STRING_1528865609");
    noLegs_0_0.set(LegCFICode_117);
    InstrumentLeg_117.insert(LegCFICode_117.getString());
    FIX::LegContractMultiplier LegContractMultiplier_117;
    LegContractMultiplier_117.setString("13455508");
    noLegs_0_0.set(LegContractMultiplier_117);
    InstrumentLeg_117.insert(LegContractMultiplier_117.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_117(186465376);
    noLegs_0_0.set(LegContractMultiplierUnit_117);
    InstrumentLeg_117.insert(LegContractMultiplierUnit_117.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_117("MONTHYEAR_2114975836");
    noLegs_0_0.set(LegContractSettlMonth_117);
    InstrumentLeg_117.insert(LegContractSettlMonth_117.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_117("COUNTRY_1501817366");
    noLegs_0_0.set(LegCountryOfIssue_117);
    InstrumentLeg_117.insert(LegCountryOfIssue_117.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_117("LOCALMKTDATE_2129861835");
    noLegs_0_0.set(LegCouponPaymentDate_117);
    InstrumentLeg_117.insert(LegCouponPaymentDate_117.getString());
    FIX::LegCouponRate LegCouponRate_117;
    LegCouponRate_117.setString("34.440000");
    noLegs_0_0.set(LegCouponRate_117);
    InstrumentLeg_117.insert(LegCouponRate_117.getString());
    FIX::LegCreditRating LegCreditRating_117("STRING_1039137108");
    noLegs_0_0.set(LegCreditRating_117);
    InstrumentLeg_117.insert(LegCreditRating_117.getString());
    FIX::LegCurrency LegCurrency_117("CHF");
    noLegs_0_0.set(LegCurrency_117);
    InstrumentLeg_117.insert(LegCurrency_117.getString());
    FIX::LegDatedDate LegDatedDate_117("LOCALMKTDATE_2038052048");
    noLegs_0_0.set(LegDatedDate_117);
    InstrumentLeg_117.insert(LegDatedDate_117.getString());
    FIX::LegExerciseStyle LegExerciseStyle_117(1904605972);
    noLegs_0_0.set(LegExerciseStyle_117);
    InstrumentLeg_117.insert(LegExerciseStyle_117.getString());
    FIX::LegFactor LegFactor_117;
    LegFactor_117.setString("11778084");
    noLegs_0_0.set(LegFactor_117);
    InstrumentLeg_117.insert(LegFactor_117.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_117(603063792);
    noLegs_0_0.set(LegFlowScheduleType_117);
    InstrumentLeg_117.insert(LegFlowScheduleType_117.getString());
    FIX::LegInstrRegistry LegInstrRegistry_117("STRING_1683635176");
    noLegs_0_0.set(LegInstrRegistry_117);
    InstrumentLeg_117.insert(LegInstrRegistry_117.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_117("LOCALMKTDATE_1624867923");
    noLegs_0_0.set(LegInterestAccrualDate_117);
    InstrumentLeg_117.insert(LegInterestAccrualDate_117.getString());
    FIX::LegIssueDate LegIssueDate_117("LOCALMKTDATE_928289651");
    noLegs_0_0.set(LegIssueDate_117);
    InstrumentLeg_117.insert(LegIssueDate_117.getString());
    FIX::LegIssuer LegIssuer_117("STRING_333947779");
    noLegs_0_0.set(LegIssuer_117);
    InstrumentLeg_117.insert(LegIssuer_117.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_117("STRING_589827058");
    noLegs_0_0.set(LegLocaleOfIssue_117);
    InstrumentLeg_117.insert(LegLocaleOfIssue_117.getString());
    FIX::LegMaturityDate LegMaturityDate_117("LOCALMKTDATE_765427948");
    noLegs_0_0.set(LegMaturityDate_117);
    InstrumentLeg_117.insert(LegMaturityDate_117.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_117("MONTHYEAR_453209411");
    noLegs_0_0.set(LegMaturityMonthYear_117);
    InstrumentLeg_117.insert(LegMaturityMonthYear_117.getString());
    FIX::LegMaturityTime LegMaturityTime_117("TZTIMEONLY_371321342");
    noLegs_0_0.set(LegMaturityTime_117);
    InstrumentLeg_117.insert(LegMaturityTime_117.getString());
    FIX::LegOptAttribute LegOptAttribute_117('1');
    noLegs_0_0.set(LegOptAttribute_117);
    InstrumentLeg_117.insert(LegOptAttribute_117.getString());
    FIX::LegOptionRatio LegOptionRatio_117;
    LegOptionRatio_117.setString("19525964");
    noLegs_0_0.set(LegOptionRatio_117);
    InstrumentLeg_117.insert(LegOptionRatio_117.getString());
    FIX::LegPool LegPool_117("STRING_1215879575");
    noLegs_0_0.set(LegPool_117);
    InstrumentLeg_117.insert(LegPool_117.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_117("STRING_1027732796");
    noLegs_0_0.set(LegPriceUnitOfMeasure_117);
    InstrumentLeg_117.insert(LegPriceUnitOfMeasure_117.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_117;
    LegPriceUnitOfMeasureQty_117.setString("19937355");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_117);
    InstrumentLeg_117.insert(LegPriceUnitOfMeasureQty_117.getString());
    FIX::LegProduct LegProduct_117(305862847);
    noLegs_0_0.set(LegProduct_117);
    InstrumentLeg_117.insert(LegProduct_117.getString());
    FIX::LegPutOrCall LegPutOrCall_117(1003046155);
    noLegs_0_0.set(LegPutOrCall_117);
    InstrumentLeg_117.insert(LegPutOrCall_117.getString());
    FIX::LegRatioQty LegRatioQty_117;
    LegRatioQty_117.setString("485682");
    noLegs_0_0.set(LegRatioQty_117);
    InstrumentLeg_117.insert(LegRatioQty_117.getString());
    FIX::LegRedemptionDate LegRedemptionDate_117("LOCALMKTDATE_1918689467");
    noLegs_0_0.set(LegRedemptionDate_117);
    InstrumentLeg_117.insert(LegRedemptionDate_117.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_117("STRING_384428116");
    noLegs_0_0.set(LegRepoCollateralSecurityType_117);
    InstrumentLeg_117.insert(LegRepoCollateralSecurityType_117.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_117;
    LegRepurchaseRate_117.setString("91.230000");
    noLegs_0_0.set(LegRepurchaseRate_117);
    InstrumentLeg_117.insert(LegRepurchaseRate_117.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_117(2105154844);
    noLegs_0_0.set(LegRepurchaseTerm_117);
    InstrumentLeg_117.insert(LegRepurchaseTerm_117.getString());
    FIX::LegSecurityDesc LegSecurityDesc_117("STRING_351920305");
    noLegs_0_0.set(LegSecurityDesc_117);
    InstrumentLeg_117.insert(LegSecurityDesc_117.getString());
    FIX::LegSecurityExchange LegSecurityExchange_117("EXCHANGE_748452841");
    noLegs_0_0.set(LegSecurityExchange_117);
    InstrumentLeg_117.insert(LegSecurityExchange_117.getString());
    FIX::LegSecurityID LegSecurityID_117("STRING_2087533031");
    noLegs_0_0.set(LegSecurityID_117);
    InstrumentLeg_117.insert(LegSecurityID_117.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_117("STRING_1030183749");
    noLegs_0_0.set(LegSecurityIDSource_117);
    InstrumentLeg_117.insert(LegSecurityIDSource_117.getString());
    FIX::LegSecuritySubType LegSecuritySubType_117("STRING_1787589950");
    noLegs_0_0.set(LegSecuritySubType_117);
    InstrumentLeg_117.insert(LegSecuritySubType_117.getString());
    FIX::LegSecurityType LegSecurityType_117("STRING_230819325");
    noLegs_0_0.set(LegSecurityType_117);
    InstrumentLeg_117.insert(LegSecurityType_117.getString());
    FIX::LegSide LegSide_117('4');
    noLegs_0_0.set(LegSide_117);
    InstrumentLeg_117.insert(LegSide_117.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_117("STRING_1678158350");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_117);
    InstrumentLeg_117.insert(LegStateOrProvinceOfIssue_117.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_117("USD");
    noLegs_0_0.set(LegStrikeCurrency_117);
    InstrumentLeg_117.insert(LegStrikeCurrency_117.getString());
    FIX::LegStrikePrice LegStrikePrice_117;
    LegStrikePrice_117.setString("1337384");
    noLegs_0_0.set(LegStrikePrice_117);
    InstrumentLeg_117.insert(LegStrikePrice_117.getString());
    FIX::LegSymbol LegSymbol_117("STRING_1671576825");
    noLegs_0_0.set(LegSymbol_117);
    InstrumentLeg_117.insert(LegSymbol_117.getString());
    FIX::LegSymbolSfx LegSymbolSfx_117("STRING_1099452751");
    noLegs_0_0.set(LegSymbolSfx_117);
    InstrumentLeg_117.insert(LegSymbolSfx_117.getString());
    FIX::LegTimeUnit LegTimeUnit_117("STRING_1062028146");
    noLegs_0_0.set(LegTimeUnit_117);
    InstrumentLeg_117.insert(LegTimeUnit_117.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_117("STRING_2005524605");
    noLegs_0_0.set(LegUnitOfMeasure_117);
    InstrumentLeg_117.insert(LegUnitOfMeasure_117.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_117;
    LegUnitOfMeasureQty_117.setString("16892798");
    noLegs_0_0.set(LegUnitOfMeasureQty_117);
    InstrumentLeg_117.insert(LegUnitOfMeasureQty_117.getString());
    all_values.push_back(InstrumentLeg_117);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_213;
      FIX::LegSecurityAltID LegSecurityAltID_213("STRING_311250368");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_213);
      LegSecAltIDGrp_NoLegSecurityAltID_213.insert(LegSecurityAltID_213.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_213("STRING_2060601152");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_213);
      LegSecAltIDGrp_NoLegSecurityAltID_213.insert(LegSecurityAltIDSource_213.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_213);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_214;
      FIX::LegSecurityAltID LegSecurityAltID_214("STRING_890139285");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_214);
      LegSecAltIDGrp_NoLegSecurityAltID_214.insert(LegSecurityAltID_214.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_214("STRING_116363126");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_214);
      LegSecAltIDGrp_NoLegSecurityAltID_214.insert(LegSecurityAltIDSource_214.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_214);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_60;
      FIX::LegStipulationType LegStipulationType_60("STRING_1917872081");
      noLegStipulations_0_1_0.set(LegStipulationType_60);
      LegStipulations_NoLegStipulations_60.insert(LegStipulationType_60.getString());
      FIX::LegStipulationValue LegStipulationValue_60("STRING_2110098673");
      noLegStipulations_0_1_0.set(LegStipulationValue_60);
      LegStipulations_NoLegStipulations_60.insert(LegStipulationValue_60.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_60);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_61;
      FIX::LegStipulationType LegStipulationType_61("STRING_1434859927");
      noLegStipulations_0_1_1.set(LegStipulationType_61);
      LegStipulations_NoLegStipulations_61.insert(LegStipulationType_61.getString());
      FIX::LegStipulationValue LegStipulationValue_61("STRING_773434589");
      noLegStipulations_0_1_1.set(LegStipulationValue_61);
      LegStipulations_NoLegStipulations_61.insert(LegStipulationValue_61.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_61);

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_0_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_62;
      FIX::LegStipulationType LegStipulationType_62("STRING_11183271");
      noLegStipulations_0_1_2.set(LegStipulationType_62);
      LegStipulations_NoLegStipulations_62.insert(LegStipulationType_62.getString());
      FIX::LegStipulationValue LegStipulationValue_62("STRING_1206065746");
      noLegStipulations_0_1_2.set(LegStipulationValue_62);
      LegStipulations_NoLegStipulations_62.insert(LegStipulationValue_62.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_62);

      noLegs_0_0.addGroup(noLegStipulations_0_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_121;
      FIX::NestedPartyID NestedPartyID_121("STRING_1405302394");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_121);
      NestedParties_NoNestedPartyIDs_121.insert(NestedPartyID_121.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_121('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_121);
      NestedParties_NoNestedPartyIDs_121.insert(NestedPartyIDSource_121.getString());
      FIX::NestedPartyRole NestedPartyRole_121(1509783010);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_121);
      NestedParties_NoNestedPartyIDs_121.insert(NestedPartyRole_121.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_121);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_229;
        FIX::NestedPartySubID NestedPartySubID_229("STRING_1103786325");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_229);
        NstdPtysSubGrp_NoNestedPartySubIDs_229.insert(NestedPartySubID_229.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_229(392483111);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_229);
        NstdPtysSubGrp_NoNestedPartySubIDs_229.insert(NestedPartySubIDType_229.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_229);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_230;
        FIX::NestedPartySubID NestedPartySubID_230("STRING_1793861538");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_230);
        NstdPtysSubGrp_NoNestedPartySubIDs_230.insert(NestedPartySubID_230.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_230(1334605650);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_230);
        NstdPtysSubGrp_NoNestedPartySubIDs_230.insert(NestedPartySubIDType_230.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_230);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
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
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_0("STRING_1324536240");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegCFICode_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegCFICode_0.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_0("LOCALMKTDATE_1322547300");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityDate_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegMaturityDate_0.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_0("MONTHYEAR_311328008");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityMonthYear_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegMaturityMonthYear_0.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_0("TZTIMEONLY_1458274735");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityTime_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegMaturityTime_0.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_0('8');
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegOptAttribute_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegOptAttribute_0.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_0(1410780759);
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegPutOrCall_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegPutOrCall_0.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_0("STRING_372819233");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityDesc_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecurityDesc_0.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_0("STRING_704681434");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityExchange_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecurityExchange_0.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_0("STRING_952576920");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityID_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecurityID_0.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_0("STRING_52791679");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityIDSource_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecurityIDSource_0.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_0("STRING_1015931803");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecuritySubType_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecuritySubType_0.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_0("STRING_865694424");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityType_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSecurityType_0.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_0;
      UnderlyingLegStrikePrice_0.setString("9429309");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegStrikePrice_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegStrikePrice_0.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_0("STRING_1132294929");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSymbol_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSymbol_0.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_0("STRING_1994691504");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSymbolSfx_0);
      UnderlyingLegInstrument_0.insert(UnderlyingLegSymbolSfx_0.getString());
      all_values.push_back(UnderlyingLegInstrument_0);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_0("STRING_1094909954");
        noUnderlyingLegSecurityAltID_0_0_2_0.set(UnderlyingLegSecurityAltID_0);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0.insert(UnderlyingLegSecurityAltID_0.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_0("STRING_1282067783");
        noUnderlyingLegSecurityAltID_0_0_2_0.set(UnderlyingLegSecurityAltIDSource_0);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0.insert(UnderlyingLegSecurityAltIDSource_0.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0);

        noOfLegUnderlyings_0_1_0.addGroup(noUnderlyingLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_1("STRING_1486753986");
        noUnderlyingLegSecurityAltID_0_0_2_1.set(UnderlyingLegSecurityAltID_1);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1.insert(UnderlyingLegSecurityAltID_1.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_1("STRING_1106093225");
        noUnderlyingLegSecurityAltID_0_0_2_1.set(UnderlyingLegSecurityAltIDSource_1);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1.insert(UnderlyingLegSecurityAltIDSource_1.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1);

        noOfLegUnderlyings_0_1_0.addGroup(noUnderlyingLegSecurityAltID_0_0_2_1);
      }
      noLegs_0_0.addGroup(noOfLegUnderlyings_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_0_1_1;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_1;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_1("STRING_340649881");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegCFICode_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegCFICode_1.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_1("LOCALMKTDATE_497133044");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegMaturityDate_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegMaturityDate_1.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_1("MONTHYEAR_363911972");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegMaturityMonthYear_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegMaturityMonthYear_1.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_1("TZTIMEONLY_1504386824");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegMaturityTime_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegMaturityTime_1.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_1('2');
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegOptAttribute_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegOptAttribute_1.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_1(370183560);
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegPutOrCall_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegPutOrCall_1.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_1("STRING_460689501");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecurityDesc_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecurityDesc_1.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_1("STRING_251915518");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecurityExchange_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecurityExchange_1.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_1("STRING_16561450");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecurityID_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecurityID_1.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_1("STRING_1795295152");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecurityIDSource_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecurityIDSource_1.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_1("STRING_1088658698");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecuritySubType_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecuritySubType_1.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_1("STRING_1341097690");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecurityType_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSecurityType_1.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_1;
      UnderlyingLegStrikePrice_1.setString("9703588");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegStrikePrice_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegStrikePrice_1.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_1("STRING_1399986706");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSymbol_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSymbol_1.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_1("STRING_651888777");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSymbolSfx_1);
      UnderlyingLegInstrument_1.insert(UnderlyingLegSymbolSfx_1.getString());
      all_values.push_back(UnderlyingLegInstrument_1);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_1_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_2("STRING_663283817");
        noUnderlyingLegSecurityAltID_0_1_2_0.set(UnderlyingLegSecurityAltID_2);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2.insert(UnderlyingLegSecurityAltID_2.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_2("STRING_1024708010");
        noUnderlyingLegSecurityAltID_0_1_2_0.set(UnderlyingLegSecurityAltIDSource_2);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2.insert(UnderlyingLegSecurityAltIDSource_2.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2);

        noOfLegUnderlyings_0_1_1.addGroup(noUnderlyingLegSecurityAltID_0_1_2_0);
      }
      noLegs_0_0.addGroup(noOfLegUnderlyings_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoLegs noLegs_0_1;
    // TrdInstrmtLegGrp.NoLegs
    multiset<string> TrdInstrmtLegGrp_NoLegs_1;
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_4;
    LegCalculatedCcyLastQty_4.setString("3741970");
    noLegs_0_1.set(LegCalculatedCcyLastQty_4);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegCalculatedCcyLastQty_4.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_6(1615860737);
    noLegs_0_1.set(LegCoveredOrUncovered_6);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegCoveredOrUncovered_6.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_6;
    LegCurrencyRatio_6.setString("10774996");
    noLegs_0_1.set(LegCurrencyRatio_6);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegCurrencyRatio_6.getString());
    FIX::LegDividendYield LegDividendYield_6;
    LegDividendYield_6.setString("88.710000");
    noLegs_0_1.set(LegDividendYield_6);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegDividendYield_6.getString());
    FIX::LegExecInst LegExecInst_6("MULTIPLECHARVALUE_334071514");
    noLegs_0_1.set(LegExecInst_6);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegExecInst_6.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_4;
    LegGrossTradeAmt_4.setString("20204306");
    noLegs_0_1.set(LegGrossTradeAmt_4);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegGrossTradeAmt_4.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_4;
    LegLastForwardPoints_4.setString("3749401");
    noLegs_0_1.set(LegLastForwardPoints_4);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegLastForwardPoints_4.getString());
    FIX::LegLastPx LegLastPx_4;
    LegLastPx_4.setString("1812793");
    noLegs_0_1.set(LegLastPx_4);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegLastPx_4.getString());
    FIX::LegLastQty LegLastQty_4;
    LegLastQty_4.setString("5862664");
    noLegs_0_1.set(LegLastQty_4);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegLastQty_4.getString());
    FIX::LegNumber LegNumber_1(1469850106);
    noLegs_0_1.set(LegNumber_1);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegNumber_1.getString());
    FIX::LegPositionEffect LegPositionEffect_6('1');
    noLegs_0_1.set(LegPositionEffect_6);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegPositionEffect_6.getString());
    FIX::LegQty LegQty_20;
    LegQty_20.setString("20730203");
    noLegs_0_1.set(LegQty_20);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegQty_20.getString());
    FIX::LegRefID LegRefID_18("STRING_428459683");
    noLegs_0_1.set(LegRefID_18);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegRefID_18.getString());
    FIX::LegReportID LegReportID_1("STRING_1803997034");
    noLegs_0_1.set(LegReportID_1);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegReportID_1.getString());
    FIX::LegSettlCurrency LegSettlCurrency_6("CHF");
    noLegs_0_1.set(LegSettlCurrency_6);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegSettlCurrency_6.getString());
    FIX::LegSettlDate LegSettlDate_20("LOCALMKTDATE_1160900210");
    noLegs_0_1.set(LegSettlDate_20);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegSettlDate_20.getString());
    FIX::LegSettlType LegSettlType_28('2');
    noLegs_0_1.set(LegSettlType_28);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegSettlType_28.getString());
    FIX::LegSwapType LegSwapType_28(5);
    noLegs_0_1.set(LegSwapType_28);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegSwapType_28.getString());
    FIX::LegVolatility LegVolatility_6;
    LegVolatility_6.setString("16215897");
    noLegs_0_1.set(LegVolatility_6);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegVolatility_6.getString());
    all_values.push_back(TrdInstrmtLegGrp_NoLegs_1);

    // InstrumentLeg
    multiset<string> InstrumentLeg_118;
    FIX::EncodedLegIssuer EncodedLegIssuer_118("DATA_534017710");
    noLegs_0_1.set(EncodedLegIssuer_118);
    InstrumentLeg_118.insert(EncodedLegIssuer_118.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_118(1179116665);
    noLegs_0_1.set(EncodedLegIssuerLen_118);
    InstrumentLeg_118.insert(EncodedLegIssuerLen_118.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_118("DATA_1269401216");
    noLegs_0_1.set(EncodedLegSecurityDesc_118);
    InstrumentLeg_118.insert(EncodedLegSecurityDesc_118.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_118(1622676408);
    noLegs_0_1.set(EncodedLegSecurityDescLen_118);
    InstrumentLeg_118.insert(EncodedLegSecurityDescLen_118.getString());
    FIX::LegCFICode LegCFICode_118("STRING_372730708");
    noLegs_0_1.set(LegCFICode_118);
    InstrumentLeg_118.insert(LegCFICode_118.getString());
    FIX::LegContractMultiplier LegContractMultiplier_118;
    LegContractMultiplier_118.setString("922763");
    noLegs_0_1.set(LegContractMultiplier_118);
    InstrumentLeg_118.insert(LegContractMultiplier_118.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_118(875179466);
    noLegs_0_1.set(LegContractMultiplierUnit_118);
    InstrumentLeg_118.insert(LegContractMultiplierUnit_118.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_118("MONTHYEAR_1024619485");
    noLegs_0_1.set(LegContractSettlMonth_118);
    InstrumentLeg_118.insert(LegContractSettlMonth_118.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_118("COUNTRY_1909275653");
    noLegs_0_1.set(LegCountryOfIssue_118);
    InstrumentLeg_118.insert(LegCountryOfIssue_118.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_118("LOCALMKTDATE_1538463283");
    noLegs_0_1.set(LegCouponPaymentDate_118);
    InstrumentLeg_118.insert(LegCouponPaymentDate_118.getString());
    FIX::LegCouponRate LegCouponRate_118;
    LegCouponRate_118.setString("74.960000");
    noLegs_0_1.set(LegCouponRate_118);
    InstrumentLeg_118.insert(LegCouponRate_118.getString());
    FIX::LegCreditRating LegCreditRating_118("STRING_135989073");
    noLegs_0_1.set(LegCreditRating_118);
    InstrumentLeg_118.insert(LegCreditRating_118.getString());
    FIX::LegCurrency LegCurrency_118("CAN");
    noLegs_0_1.set(LegCurrency_118);
    InstrumentLeg_118.insert(LegCurrency_118.getString());
    FIX::LegDatedDate LegDatedDate_118("LOCALMKTDATE_1526117944");
    noLegs_0_1.set(LegDatedDate_118);
    InstrumentLeg_118.insert(LegDatedDate_118.getString());
    FIX::LegExerciseStyle LegExerciseStyle_118(1340911886);
    noLegs_0_1.set(LegExerciseStyle_118);
    InstrumentLeg_118.insert(LegExerciseStyle_118.getString());
    FIX::LegFactor LegFactor_118;
    LegFactor_118.setString("8522905");
    noLegs_0_1.set(LegFactor_118);
    InstrumentLeg_118.insert(LegFactor_118.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_118(1901058096);
    noLegs_0_1.set(LegFlowScheduleType_118);
    InstrumentLeg_118.insert(LegFlowScheduleType_118.getString());
    FIX::LegInstrRegistry LegInstrRegistry_118("STRING_1522191256");
    noLegs_0_1.set(LegInstrRegistry_118);
    InstrumentLeg_118.insert(LegInstrRegistry_118.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_118("LOCALMKTDATE_1438556946");
    noLegs_0_1.set(LegInterestAccrualDate_118);
    InstrumentLeg_118.insert(LegInterestAccrualDate_118.getString());
    FIX::LegIssueDate LegIssueDate_118("LOCALMKTDATE_1223424554");
    noLegs_0_1.set(LegIssueDate_118);
    InstrumentLeg_118.insert(LegIssueDate_118.getString());
    FIX::LegIssuer LegIssuer_118("STRING_838054761");
    noLegs_0_1.set(LegIssuer_118);
    InstrumentLeg_118.insert(LegIssuer_118.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_118("STRING_1364093687");
    noLegs_0_1.set(LegLocaleOfIssue_118);
    InstrumentLeg_118.insert(LegLocaleOfIssue_118.getString());
    FIX::LegMaturityDate LegMaturityDate_118("LOCALMKTDATE_1651884238");
    noLegs_0_1.set(LegMaturityDate_118);
    InstrumentLeg_118.insert(LegMaturityDate_118.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_118("MONTHYEAR_494568148");
    noLegs_0_1.set(LegMaturityMonthYear_118);
    InstrumentLeg_118.insert(LegMaturityMonthYear_118.getString());
    FIX::LegMaturityTime LegMaturityTime_118("TZTIMEONLY_1786763473");
    noLegs_0_1.set(LegMaturityTime_118);
    InstrumentLeg_118.insert(LegMaturityTime_118.getString());
    FIX::LegOptAttribute LegOptAttribute_118('2');
    noLegs_0_1.set(LegOptAttribute_118);
    InstrumentLeg_118.insert(LegOptAttribute_118.getString());
    FIX::LegOptionRatio LegOptionRatio_118;
    LegOptionRatio_118.setString("16554683");
    noLegs_0_1.set(LegOptionRatio_118);
    InstrumentLeg_118.insert(LegOptionRatio_118.getString());
    FIX::LegPool LegPool_118("STRING_2068865665");
    noLegs_0_1.set(LegPool_118);
    InstrumentLeg_118.insert(LegPool_118.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_118("STRING_1459327461");
    noLegs_0_1.set(LegPriceUnitOfMeasure_118);
    InstrumentLeg_118.insert(LegPriceUnitOfMeasure_118.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_118;
    LegPriceUnitOfMeasureQty_118.setString("11295744");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_118);
    InstrumentLeg_118.insert(LegPriceUnitOfMeasureQty_118.getString());
    FIX::LegProduct LegProduct_118(455399727);
    noLegs_0_1.set(LegProduct_118);
    InstrumentLeg_118.insert(LegProduct_118.getString());
    FIX::LegPutOrCall LegPutOrCall_118(490960478);
    noLegs_0_1.set(LegPutOrCall_118);
    InstrumentLeg_118.insert(LegPutOrCall_118.getString());
    FIX::LegRatioQty LegRatioQty_118;
    LegRatioQty_118.setString("2514919");
    noLegs_0_1.set(LegRatioQty_118);
    InstrumentLeg_118.insert(LegRatioQty_118.getString());
    FIX::LegRedemptionDate LegRedemptionDate_118("LOCALMKTDATE_2078076135");
    noLegs_0_1.set(LegRedemptionDate_118);
    InstrumentLeg_118.insert(LegRedemptionDate_118.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_118("STRING_863691186");
    noLegs_0_1.set(LegRepoCollateralSecurityType_118);
    InstrumentLeg_118.insert(LegRepoCollateralSecurityType_118.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_118;
    LegRepurchaseRate_118.setString("83.620000");
    noLegs_0_1.set(LegRepurchaseRate_118);
    InstrumentLeg_118.insert(LegRepurchaseRate_118.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_118(805771953);
    noLegs_0_1.set(LegRepurchaseTerm_118);
    InstrumentLeg_118.insert(LegRepurchaseTerm_118.getString());
    FIX::LegSecurityDesc LegSecurityDesc_118("STRING_1888310672");
    noLegs_0_1.set(LegSecurityDesc_118);
    InstrumentLeg_118.insert(LegSecurityDesc_118.getString());
    FIX::LegSecurityExchange LegSecurityExchange_118("EXCHANGE_105560368");
    noLegs_0_1.set(LegSecurityExchange_118);
    InstrumentLeg_118.insert(LegSecurityExchange_118.getString());
    FIX::LegSecurityID LegSecurityID_118("STRING_196751588");
    noLegs_0_1.set(LegSecurityID_118);
    InstrumentLeg_118.insert(LegSecurityID_118.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_118("STRING_1790154520");
    noLegs_0_1.set(LegSecurityIDSource_118);
    InstrumentLeg_118.insert(LegSecurityIDSource_118.getString());
    FIX::LegSecuritySubType LegSecuritySubType_118("STRING_241549441");
    noLegs_0_1.set(LegSecuritySubType_118);
    InstrumentLeg_118.insert(LegSecuritySubType_118.getString());
    FIX::LegSecurityType LegSecurityType_118("STRING_1203591960");
    noLegs_0_1.set(LegSecurityType_118);
    InstrumentLeg_118.insert(LegSecurityType_118.getString());
    FIX::LegSide LegSide_118('6');
    noLegs_0_1.set(LegSide_118);
    InstrumentLeg_118.insert(LegSide_118.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_118("STRING_1767667386");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_118);
    InstrumentLeg_118.insert(LegStateOrProvinceOfIssue_118.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_118("USD");
    noLegs_0_1.set(LegStrikeCurrency_118);
    InstrumentLeg_118.insert(LegStrikeCurrency_118.getString());
    FIX::LegStrikePrice LegStrikePrice_118;
    LegStrikePrice_118.setString("15212418");
    noLegs_0_1.set(LegStrikePrice_118);
    InstrumentLeg_118.insert(LegStrikePrice_118.getString());
    FIX::LegSymbol LegSymbol_118("STRING_1919211455");
    noLegs_0_1.set(LegSymbol_118);
    InstrumentLeg_118.insert(LegSymbol_118.getString());
    FIX::LegSymbolSfx LegSymbolSfx_118("STRING_765378250");
    noLegs_0_1.set(LegSymbolSfx_118);
    InstrumentLeg_118.insert(LegSymbolSfx_118.getString());
    FIX::LegTimeUnit LegTimeUnit_118("STRING_597182741");
    noLegs_0_1.set(LegTimeUnit_118);
    InstrumentLeg_118.insert(LegTimeUnit_118.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_118("STRING_609782569");
    noLegs_0_1.set(LegUnitOfMeasure_118);
    InstrumentLeg_118.insert(LegUnitOfMeasure_118.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_118;
    LegUnitOfMeasureQty_118.setString("21294719");
    noLegs_0_1.set(LegUnitOfMeasureQty_118);
    InstrumentLeg_118.insert(LegUnitOfMeasureQty_118.getString());
    all_values.push_back(InstrumentLeg_118);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_215;
      FIX::LegSecurityAltID LegSecurityAltID_215("STRING_1104350717");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_215);
      LegSecAltIDGrp_NoLegSecurityAltID_215.insert(LegSecurityAltID_215.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_215("STRING_1768751763");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_215);
      LegSecAltIDGrp_NoLegSecurityAltID_215.insert(LegSecurityAltIDSource_215.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_215);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_216;
      FIX::LegSecurityAltID LegSecurityAltID_216("STRING_398355576");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_216);
      LegSecAltIDGrp_NoLegSecurityAltID_216.insert(LegSecurityAltID_216.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_216("STRING_612335427");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_216);
      LegSecAltIDGrp_NoLegSecurityAltID_216.insert(LegSecurityAltIDSource_216.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_216);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_63;
      FIX::LegStipulationType LegStipulationType_63("STRING_1857683037");
      noLegStipulations_1_1_0.set(LegStipulationType_63);
      LegStipulations_NoLegStipulations_63.insert(LegStipulationType_63.getString());
      FIX::LegStipulationValue LegStipulationValue_63("STRING_1741909850");
      noLegStipulations_1_1_0.set(LegStipulationValue_63);
      LegStipulations_NoLegStipulations_63.insert(LegStipulationValue_63.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_63);

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_1_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_64;
      FIX::LegStipulationType LegStipulationType_64("STRING_2145533507");
      noLegStipulations_1_1_1.set(LegStipulationType_64);
      LegStipulations_NoLegStipulations_64.insert(LegStipulationType_64.getString());
      FIX::LegStipulationValue LegStipulationValue_64("STRING_201159868");
      noLegStipulations_1_1_1.set(LegStipulationValue_64);
      LegStipulations_NoLegStipulations_64.insert(LegStipulationValue_64.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_64);

      noLegs_0_1.addGroup(noLegStipulations_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_1_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_65;
      FIX::LegStipulationType LegStipulationType_65("STRING_1993401840");
      noLegStipulations_1_1_2.set(LegStipulationType_65);
      LegStipulations_NoLegStipulations_65.insert(LegStipulationType_65.getString());
      FIX::LegStipulationValue LegStipulationValue_65("STRING_2076125994");
      noLegStipulations_1_1_2.set(LegStipulationValue_65);
      LegStipulations_NoLegStipulations_65.insert(LegStipulationValue_65.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_65);

      noLegs_0_1.addGroup(noLegStipulations_1_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_122;
      FIX::NestedPartyID NestedPartyID_122("STRING_189686555");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_122);
      NestedParties_NoNestedPartyIDs_122.insert(NestedPartyID_122.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_122('7');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_122);
      NestedParties_NoNestedPartyIDs_122.insert(NestedPartyIDSource_122.getString());
      FIX::NestedPartyRole NestedPartyRole_122(805678078);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_122);
      NestedParties_NoNestedPartyIDs_122.insert(NestedPartyRole_122.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_122);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_231;
        FIX::NestedPartySubID NestedPartySubID_231("STRING_931165887");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_231);
        NstdPtysSubGrp_NoNestedPartySubIDs_231.insert(NestedPartySubID_231.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_231(448348950);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_231);
        NstdPtysSubGrp_NoNestedPartySubIDs_231.insert(NestedPartySubIDType_231.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_231);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_123;
      FIX::NestedPartyID NestedPartyID_123("STRING_536796364");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_123);
      NestedParties_NoNestedPartyIDs_123.insert(NestedPartyID_123.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_123('2');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_123);
      NestedParties_NoNestedPartyIDs_123.insert(NestedPartyIDSource_123.getString());
      FIX::NestedPartyRole NestedPartyRole_123(1070363360);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_123);
      NestedParties_NoNestedPartyIDs_123.insert(NestedPartyRole_123.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_123);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_232;
        FIX::NestedPartySubID NestedPartySubID_232("STRING_384294398");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_232);
        NstdPtysSubGrp_NoNestedPartySubIDs_232.insert(NestedPartySubID_232.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_232(397184664);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_232);
        NstdPtysSubGrp_NoNestedPartySubIDs_232.insert(NestedPartySubIDType_232.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_232);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_233;
        FIX::NestedPartySubID NestedPartySubID_233("STRING_1678221937");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_233);
        NstdPtysSubGrp_NoNestedPartySubIDs_233.insert(NestedPartySubID_233.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_233(156022206);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_233);
        NstdPtysSubGrp_NoNestedPartySubIDs_233.insert(NestedPartySubIDType_233.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_233);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_234;
        FIX::NestedPartySubID NestedPartySubID_234("STRING_1162562915");
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubID_234);
        NstdPtysSubGrp_NoNestedPartySubIDs_234.insert(NestedPartySubID_234.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_234(127921030);
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubIDType_234);
        NstdPtysSubGrp_NoNestedPartySubIDs_234.insert(NestedPartySubIDType_234.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_234);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    // TradeCapLegUnderlyingsGrp
    // Group TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_1_1_0;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_2;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_2("STRING_1144551205");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegCFICode_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegCFICode_2.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_2("LOCALMKTDATE_229504361");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegMaturityDate_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegMaturityDate_2.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_2("MONTHYEAR_1870155492");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegMaturityMonthYear_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegMaturityMonthYear_2.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_2("TZTIMEONLY_765819320");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegMaturityTime_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegMaturityTime_2.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_2('6');
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegOptAttribute_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegOptAttribute_2.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_2(335007271);
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegPutOrCall_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegPutOrCall_2.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_2("STRING_308469452");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecurityDesc_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecurityDesc_2.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_2("STRING_338059327");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecurityExchange_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecurityExchange_2.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_2("STRING_2076917121");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecurityID_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecurityID_2.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_2("STRING_306519311");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecurityIDSource_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecurityIDSource_2.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_2("STRING_539219195");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecuritySubType_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecuritySubType_2.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_2("STRING_1922835314");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecurityType_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecurityType_2.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_2;
      UnderlyingLegStrikePrice_2.setString("2351616");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegStrikePrice_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegStrikePrice_2.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_2("STRING_1604070249");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSymbol_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSymbol_2.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_2("STRING_2112521869");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSymbolSfx_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSymbolSfx_2.getString());
      all_values.push_back(UnderlyingLegInstrument_2);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_0_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_3("STRING_262264680");
        noUnderlyingLegSecurityAltID_1_0_2_0.set(UnderlyingLegSecurityAltID_3);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3.insert(UnderlyingLegSecurityAltID_3.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_3("STRING_260285144");
        noUnderlyingLegSecurityAltID_1_0_2_0.set(UnderlyingLegSecurityAltIDSource_3);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3.insert(UnderlyingLegSecurityAltIDSource_3.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3);

        noOfLegUnderlyings_1_1_0.addGroup(noUnderlyingLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_0_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_4("STRING_1900741843");
        noUnderlyingLegSecurityAltID_1_0_2_1.set(UnderlyingLegSecurityAltID_4);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4.insert(UnderlyingLegSecurityAltID_4.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_4("STRING_710613630");
        noUnderlyingLegSecurityAltID_1_0_2_1.set(UnderlyingLegSecurityAltIDSource_4);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4.insert(UnderlyingLegSecurityAltIDSource_4.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4);

        noOfLegUnderlyings_1_1_0.addGroup(noUnderlyingLegSecurityAltID_1_0_2_1);
      }
      noLegs_0_1.addGroup(noOfLegUnderlyings_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_1_1_1;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_3;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_3("STRING_797081508");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegCFICode_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegCFICode_3.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_3("LOCALMKTDATE_1888016042");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegMaturityDate_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegMaturityDate_3.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_3("MONTHYEAR_1780976990");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegMaturityMonthYear_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegMaturityMonthYear_3.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_3("TZTIMEONLY_954061611");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegMaturityTime_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegMaturityTime_3.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_3('1');
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegOptAttribute_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegOptAttribute_3.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_3(30678007);
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegPutOrCall_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegPutOrCall_3.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_3("STRING_484799900");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecurityDesc_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSecurityDesc_3.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_3("STRING_280848999");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecurityExchange_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSecurityExchange_3.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_3("STRING_1193240922");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecurityID_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSecurityID_3.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_3("STRING_612720930");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecurityIDSource_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSecurityIDSource_3.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_3("STRING_1046653774");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecuritySubType_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSecuritySubType_3.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_3("STRING_190308479");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecurityType_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSecurityType_3.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_3;
      UnderlyingLegStrikePrice_3.setString("8422252");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegStrikePrice_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegStrikePrice_3.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_3("STRING_769325618");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSymbol_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSymbol_3.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_3("STRING_956127799");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSymbolSfx_3);
      UnderlyingLegInstrument_3.insert(UnderlyingLegSymbolSfx_3.getString());
      all_values.push_back(UnderlyingLegInstrument_3);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_1_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_5;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_5("STRING_1104332889");
        noUnderlyingLegSecurityAltID_1_1_2_0.set(UnderlyingLegSecurityAltID_5);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_5.insert(UnderlyingLegSecurityAltID_5.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_5("STRING_1264597251");
        noUnderlyingLegSecurityAltID_1_1_2_0.set(UnderlyingLegSecurityAltIDSource_5);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_5.insert(UnderlyingLegSecurityAltIDSource_5.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_5);

        noOfLegUnderlyings_1_1_1.addGroup(noUnderlyingLegSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_1_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_6;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_6("STRING_1808144555");
        noUnderlyingLegSecurityAltID_1_1_2_1.set(UnderlyingLegSecurityAltID_6);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_6.insert(UnderlyingLegSecurityAltID_6.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_6("STRING_1033766363");
        noUnderlyingLegSecurityAltID_1_1_2_1.set(UnderlyingLegSecurityAltIDSource_6);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_6.insert(UnderlyingLegSecurityAltIDSource_6.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_6);

        noOfLegUnderlyings_1_1_1.addGroup(noUnderlyingLegSecurityAltID_1_1_2_1);
      }
      noLegs_0_1.addGroup(noOfLegUnderlyings_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::TradeCaptureReport::NoLegs noLegs_0_2;
    // TrdInstrmtLegGrp.NoLegs
    multiset<string> TrdInstrmtLegGrp_NoLegs_2;
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_5;
    LegCalculatedCcyLastQty_5.setString("15711165");
    noLegs_0_2.set(LegCalculatedCcyLastQty_5);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegCalculatedCcyLastQty_5.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_7(199880102);
    noLegs_0_2.set(LegCoveredOrUncovered_7);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegCoveredOrUncovered_7.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_7;
    LegCurrencyRatio_7.setString("8091180");
    noLegs_0_2.set(LegCurrencyRatio_7);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegCurrencyRatio_7.getString());
    FIX::LegDividendYield LegDividendYield_7;
    LegDividendYield_7.setString("82.190000");
    noLegs_0_2.set(LegDividendYield_7);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegDividendYield_7.getString());
    FIX::LegExecInst LegExecInst_7("MULTIPLECHARVALUE_1803950352");
    noLegs_0_2.set(LegExecInst_7);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegExecInst_7.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_5;
    LegGrossTradeAmt_5.setString("7741562");
    noLegs_0_2.set(LegGrossTradeAmt_5);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegGrossTradeAmt_5.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_5;
    LegLastForwardPoints_5.setString("6283705");
    noLegs_0_2.set(LegLastForwardPoints_5);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegLastForwardPoints_5.getString());
    FIX::LegLastPx LegLastPx_5;
    LegLastPx_5.setString("20662150");
    noLegs_0_2.set(LegLastPx_5);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegLastPx_5.getString());
    FIX::LegLastQty LegLastQty_5;
    LegLastQty_5.setString("10344413");
    noLegs_0_2.set(LegLastQty_5);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegLastQty_5.getString());
    FIX::LegNumber LegNumber_2(381628722);
    noLegs_0_2.set(LegNumber_2);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegNumber_2.getString());
    FIX::LegPositionEffect LegPositionEffect_7('6');
    noLegs_0_2.set(LegPositionEffect_7);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegPositionEffect_7.getString());
    FIX::LegQty LegQty_21;
    LegQty_21.setString("18315229");
    noLegs_0_2.set(LegQty_21);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegQty_21.getString());
    FIX::LegRefID LegRefID_19("STRING_122161116");
    noLegs_0_2.set(LegRefID_19);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegRefID_19.getString());
    FIX::LegReportID LegReportID_2("STRING_262838357");
    noLegs_0_2.set(LegReportID_2);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegReportID_2.getString());
    FIX::LegSettlCurrency LegSettlCurrency_7("CHF");
    noLegs_0_2.set(LegSettlCurrency_7);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegSettlCurrency_7.getString());
    FIX::LegSettlDate LegSettlDate_21("LOCALMKTDATE_293516364");
    noLegs_0_2.set(LegSettlDate_21);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegSettlDate_21.getString());
    FIX::LegSettlType LegSettlType_29('1');
    noLegs_0_2.set(LegSettlType_29);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegSettlType_29.getString());
    FIX::LegSwapType LegSwapType_29(1);
    noLegs_0_2.set(LegSwapType_29);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegSwapType_29.getString());
    FIX::LegVolatility LegVolatility_7;
    LegVolatility_7.setString("14867572");
    noLegs_0_2.set(LegVolatility_7);
    TrdInstrmtLegGrp_NoLegs_2.insert(LegVolatility_7.getString());
    all_values.push_back(TrdInstrmtLegGrp_NoLegs_2);

    // InstrumentLeg
    multiset<string> InstrumentLeg_119;
    FIX::EncodedLegIssuer EncodedLegIssuer_119("DATA_1735621695");
    noLegs_0_2.set(EncodedLegIssuer_119);
    InstrumentLeg_119.insert(EncodedLegIssuer_119.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_119(1574490682);
    noLegs_0_2.set(EncodedLegIssuerLen_119);
    InstrumentLeg_119.insert(EncodedLegIssuerLen_119.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_119("DATA_1677065765");
    noLegs_0_2.set(EncodedLegSecurityDesc_119);
    InstrumentLeg_119.insert(EncodedLegSecurityDesc_119.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_119(430363338);
    noLegs_0_2.set(EncodedLegSecurityDescLen_119);
    InstrumentLeg_119.insert(EncodedLegSecurityDescLen_119.getString());
    FIX::LegCFICode LegCFICode_119("STRING_196332652");
    noLegs_0_2.set(LegCFICode_119);
    InstrumentLeg_119.insert(LegCFICode_119.getString());
    FIX::LegContractMultiplier LegContractMultiplier_119;
    LegContractMultiplier_119.setString("4857099");
    noLegs_0_2.set(LegContractMultiplier_119);
    InstrumentLeg_119.insert(LegContractMultiplier_119.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_119(1900448567);
    noLegs_0_2.set(LegContractMultiplierUnit_119);
    InstrumentLeg_119.insert(LegContractMultiplierUnit_119.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_119("MONTHYEAR_1300665542");
    noLegs_0_2.set(LegContractSettlMonth_119);
    InstrumentLeg_119.insert(LegContractSettlMonth_119.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_119("COUNTRY_1750307167");
    noLegs_0_2.set(LegCountryOfIssue_119);
    InstrumentLeg_119.insert(LegCountryOfIssue_119.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_119("LOCALMKTDATE_1561109474");
    noLegs_0_2.set(LegCouponPaymentDate_119);
    InstrumentLeg_119.insert(LegCouponPaymentDate_119.getString());
    FIX::LegCouponRate LegCouponRate_119;
    LegCouponRate_119.setString("82.570000");
    noLegs_0_2.set(LegCouponRate_119);
    InstrumentLeg_119.insert(LegCouponRate_119.getString());
    FIX::LegCreditRating LegCreditRating_119("STRING_1173940081");
    noLegs_0_2.set(LegCreditRating_119);
    InstrumentLeg_119.insert(LegCreditRating_119.getString());
    FIX::LegCurrency LegCurrency_119("JPY");
    noLegs_0_2.set(LegCurrency_119);
    InstrumentLeg_119.insert(LegCurrency_119.getString());
    FIX::LegDatedDate LegDatedDate_119("LOCALMKTDATE_832734652");
    noLegs_0_2.set(LegDatedDate_119);
    InstrumentLeg_119.insert(LegDatedDate_119.getString());
    FIX::LegExerciseStyle LegExerciseStyle_119(1417456281);
    noLegs_0_2.set(LegExerciseStyle_119);
    InstrumentLeg_119.insert(LegExerciseStyle_119.getString());
    FIX::LegFactor LegFactor_119;
    LegFactor_119.setString("17702225");
    noLegs_0_2.set(LegFactor_119);
    InstrumentLeg_119.insert(LegFactor_119.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_119(1461105179);
    noLegs_0_2.set(LegFlowScheduleType_119);
    InstrumentLeg_119.insert(LegFlowScheduleType_119.getString());
    FIX::LegInstrRegistry LegInstrRegistry_119("STRING_1336187665");
    noLegs_0_2.set(LegInstrRegistry_119);
    InstrumentLeg_119.insert(LegInstrRegistry_119.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_119("LOCALMKTDATE_657180282");
    noLegs_0_2.set(LegInterestAccrualDate_119);
    InstrumentLeg_119.insert(LegInterestAccrualDate_119.getString());
    FIX::LegIssueDate LegIssueDate_119("LOCALMKTDATE_1842733901");
    noLegs_0_2.set(LegIssueDate_119);
    InstrumentLeg_119.insert(LegIssueDate_119.getString());
    FIX::LegIssuer LegIssuer_119("STRING_1965532679");
    noLegs_0_2.set(LegIssuer_119);
    InstrumentLeg_119.insert(LegIssuer_119.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_119("STRING_341219536");
    noLegs_0_2.set(LegLocaleOfIssue_119);
    InstrumentLeg_119.insert(LegLocaleOfIssue_119.getString());
    FIX::LegMaturityDate LegMaturityDate_119("LOCALMKTDATE_1964895017");
    noLegs_0_2.set(LegMaturityDate_119);
    InstrumentLeg_119.insert(LegMaturityDate_119.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_119("MONTHYEAR_80887388");
    noLegs_0_2.set(LegMaturityMonthYear_119);
    InstrumentLeg_119.insert(LegMaturityMonthYear_119.getString());
    FIX::LegMaturityTime LegMaturityTime_119("TZTIMEONLY_979320402");
    noLegs_0_2.set(LegMaturityTime_119);
    InstrumentLeg_119.insert(LegMaturityTime_119.getString());
    FIX::LegOptAttribute LegOptAttribute_119('6');
    noLegs_0_2.set(LegOptAttribute_119);
    InstrumentLeg_119.insert(LegOptAttribute_119.getString());
    FIX::LegOptionRatio LegOptionRatio_119;
    LegOptionRatio_119.setString("3744037");
    noLegs_0_2.set(LegOptionRatio_119);
    InstrumentLeg_119.insert(LegOptionRatio_119.getString());
    FIX::LegPool LegPool_119("STRING_2102221167");
    noLegs_0_2.set(LegPool_119);
    InstrumentLeg_119.insert(LegPool_119.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_119("STRING_592236187");
    noLegs_0_2.set(LegPriceUnitOfMeasure_119);
    InstrumentLeg_119.insert(LegPriceUnitOfMeasure_119.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_119;
    LegPriceUnitOfMeasureQty_119.setString("18611610");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_119);
    InstrumentLeg_119.insert(LegPriceUnitOfMeasureQty_119.getString());
    FIX::LegProduct LegProduct_119(1690359215);
    noLegs_0_2.set(LegProduct_119);
    InstrumentLeg_119.insert(LegProduct_119.getString());
    FIX::LegPutOrCall LegPutOrCall_119(19243222);
    noLegs_0_2.set(LegPutOrCall_119);
    InstrumentLeg_119.insert(LegPutOrCall_119.getString());
    FIX::LegRatioQty LegRatioQty_119;
    LegRatioQty_119.setString("13907431");
    noLegs_0_2.set(LegRatioQty_119);
    InstrumentLeg_119.insert(LegRatioQty_119.getString());
    FIX::LegRedemptionDate LegRedemptionDate_119("LOCALMKTDATE_2120722553");
    noLegs_0_2.set(LegRedemptionDate_119);
    InstrumentLeg_119.insert(LegRedemptionDate_119.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_119("STRING_215575874");
    noLegs_0_2.set(LegRepoCollateralSecurityType_119);
    InstrumentLeg_119.insert(LegRepoCollateralSecurityType_119.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_119;
    LegRepurchaseRate_119.setString("30.710000");
    noLegs_0_2.set(LegRepurchaseRate_119);
    InstrumentLeg_119.insert(LegRepurchaseRate_119.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_119(1873687472);
    noLegs_0_2.set(LegRepurchaseTerm_119);
    InstrumentLeg_119.insert(LegRepurchaseTerm_119.getString());
    FIX::LegSecurityDesc LegSecurityDesc_119("STRING_1516241416");
    noLegs_0_2.set(LegSecurityDesc_119);
    InstrumentLeg_119.insert(LegSecurityDesc_119.getString());
    FIX::LegSecurityExchange LegSecurityExchange_119("EXCHANGE_1479276590");
    noLegs_0_2.set(LegSecurityExchange_119);
    InstrumentLeg_119.insert(LegSecurityExchange_119.getString());
    FIX::LegSecurityID LegSecurityID_119("STRING_1287313299");
    noLegs_0_2.set(LegSecurityID_119);
    InstrumentLeg_119.insert(LegSecurityID_119.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_119("STRING_1703189673");
    noLegs_0_2.set(LegSecurityIDSource_119);
    InstrumentLeg_119.insert(LegSecurityIDSource_119.getString());
    FIX::LegSecuritySubType LegSecuritySubType_119("STRING_505733023");
    noLegs_0_2.set(LegSecuritySubType_119);
    InstrumentLeg_119.insert(LegSecuritySubType_119.getString());
    FIX::LegSecurityType LegSecurityType_119("STRING_900819228");
    noLegs_0_2.set(LegSecurityType_119);
    InstrumentLeg_119.insert(LegSecurityType_119.getString());
    FIX::LegSide LegSide_119('5');
    noLegs_0_2.set(LegSide_119);
    InstrumentLeg_119.insert(LegSide_119.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_119("STRING_1338467675");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_119);
    InstrumentLeg_119.insert(LegStateOrProvinceOfIssue_119.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_119("CAN");
    noLegs_0_2.set(LegStrikeCurrency_119);
    InstrumentLeg_119.insert(LegStrikeCurrency_119.getString());
    FIX::LegStrikePrice LegStrikePrice_119;
    LegStrikePrice_119.setString("6520892");
    noLegs_0_2.set(LegStrikePrice_119);
    InstrumentLeg_119.insert(LegStrikePrice_119.getString());
    FIX::LegSymbol LegSymbol_119("STRING_1506979526");
    noLegs_0_2.set(LegSymbol_119);
    InstrumentLeg_119.insert(LegSymbol_119.getString());
    FIX::LegSymbolSfx LegSymbolSfx_119("STRING_831691481");
    noLegs_0_2.set(LegSymbolSfx_119);
    InstrumentLeg_119.insert(LegSymbolSfx_119.getString());
    FIX::LegTimeUnit LegTimeUnit_119("STRING_347339459");
    noLegs_0_2.set(LegTimeUnit_119);
    InstrumentLeg_119.insert(LegTimeUnit_119.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_119("STRING_1325028557");
    noLegs_0_2.set(LegUnitOfMeasure_119);
    InstrumentLeg_119.insert(LegUnitOfMeasure_119.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_119;
    LegUnitOfMeasureQty_119.setString("11729110");
    noLegs_0_2.set(LegUnitOfMeasureQty_119);
    InstrumentLeg_119.insert(LegUnitOfMeasureQty_119.getString());
    all_values.push_back(InstrumentLeg_119);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_217;
      FIX::LegSecurityAltID LegSecurityAltID_217("STRING_1405915946");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_217);
      LegSecAltIDGrp_NoLegSecurityAltID_217.insert(LegSecurityAltID_217.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_217("STRING_4747772");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_217);
      LegSecAltIDGrp_NoLegSecurityAltID_217.insert(LegSecurityAltIDSource_217.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_217);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_2_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_66;
      FIX::LegStipulationType LegStipulationType_66("STRING_1780319698");
      noLegStipulations_2_1_0.set(LegStipulationType_66);
      LegStipulations_NoLegStipulations_66.insert(LegStipulationType_66.getString());
      FIX::LegStipulationValue LegStipulationValue_66("STRING_2106968939");
      noLegStipulations_2_1_0.set(LegStipulationValue_66);
      LegStipulations_NoLegStipulations_66.insert(LegStipulationValue_66.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_66);

      noLegs_0_2.addGroup(noLegStipulations_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_2_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_67;
      FIX::LegStipulationType LegStipulationType_67("STRING_821386295");
      noLegStipulations_2_1_1.set(LegStipulationType_67);
      LegStipulations_NoLegStipulations_67.insert(LegStipulationType_67.getString());
      FIX::LegStipulationValue LegStipulationValue_67("STRING_1493997089");
      noLegStipulations_2_1_1.set(LegStipulationValue_67);
      LegStipulations_NoLegStipulations_67.insert(LegStipulationValue_67.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_67);

      noLegs_0_2.addGroup(noLegStipulations_2_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_124;
      FIX::NestedPartyID NestedPartyID_124("STRING_840629517");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_124);
      NestedParties_NoNestedPartyIDs_124.insert(NestedPartyID_124.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_124('7');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_124);
      NestedParties_NoNestedPartyIDs_124.insert(NestedPartyIDSource_124.getString());
      FIX::NestedPartyRole NestedPartyRole_124(1623083412);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_124);
      NestedParties_NoNestedPartyIDs_124.insert(NestedPartyRole_124.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_124);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_235;
        FIX::NestedPartySubID NestedPartySubID_235("STRING_466226020");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_235);
        NstdPtysSubGrp_NoNestedPartySubIDs_235.insert(NestedPartySubID_235.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_235(1349287236);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_235);
        NstdPtysSubGrp_NoNestedPartySubIDs_235.insert(NestedPartySubIDType_235.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_235);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_125;
      FIX::NestedPartyID NestedPartyID_125("STRING_424963160");
      noNestedPartyIDs_2_1_1.set(NestedPartyID_125);
      NestedParties_NoNestedPartyIDs_125.insert(NestedPartyID_125.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_125('1');
      noNestedPartyIDs_2_1_1.set(NestedPartyIDSource_125);
      NestedParties_NoNestedPartyIDs_125.insert(NestedPartyIDSource_125.getString());
      FIX::NestedPartyRole NestedPartyRole_125(489116887);
      noNestedPartyIDs_2_1_1.set(NestedPartyRole_125);
      NestedParties_NoNestedPartyIDs_125.insert(NestedPartyRole_125.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_125);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_236;
        FIX::NestedPartySubID NestedPartySubID_236("STRING_303751986");
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubID_236);
        NstdPtysSubGrp_NoNestedPartySubIDs_236.insert(NestedPartySubID_236.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_236(1389936115);
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubIDType_236);
        NstdPtysSubGrp_NoNestedPartySubIDs_236.insert(NestedPartySubIDType_236.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_236);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_126;
      FIX::NestedPartyID NestedPartyID_126("STRING_532441497");
      noNestedPartyIDs_2_1_2.set(NestedPartyID_126);
      NestedParties_NoNestedPartyIDs_126.insert(NestedPartyID_126.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_126('1');
      noNestedPartyIDs_2_1_2.set(NestedPartyIDSource_126);
      NestedParties_NoNestedPartyIDs_126.insert(NestedPartyIDSource_126.getString());
      FIX::NestedPartyRole NestedPartyRole_126(1560727976);
      noNestedPartyIDs_2_1_2.set(NestedPartyRole_126);
      NestedParties_NoNestedPartyIDs_126.insert(NestedPartyRole_126.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_126);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_237;
        FIX::NestedPartySubID NestedPartySubID_237("STRING_146825220");
        noNestedPartySubIDs_2_2_2_0.set(NestedPartySubID_237);
        NstdPtysSubGrp_NoNestedPartySubIDs_237.insert(NestedPartySubID_237.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_237(920223854);
        noNestedPartySubIDs_2_2_2_0.set(NestedPartySubIDType_237);
        NstdPtysSubGrp_NoNestedPartySubIDs_237.insert(NestedPartySubIDType_237.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_237);

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_0);
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
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_4("STRING_494164679");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegCFICode_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegCFICode_4.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_4("LOCALMKTDATE_97768764");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegMaturityDate_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegMaturityDate_4.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_4("MONTHYEAR_564071548");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegMaturityMonthYear_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegMaturityMonthYear_4.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_4("TZTIMEONLY_658915508");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegMaturityTime_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegMaturityTime_4.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_4('1');
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegOptAttribute_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegOptAttribute_4.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_4(568819320);
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegPutOrCall_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegPutOrCall_4.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_4("STRING_888065616");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSecurityDesc_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSecurityDesc_4.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_4("STRING_1136520760");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSecurityExchange_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSecurityExchange_4.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_4("STRING_528304612");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSecurityID_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSecurityID_4.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_4("STRING_1709451912");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSecurityIDSource_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSecurityIDSource_4.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_4("STRING_483034201");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSecuritySubType_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSecuritySubType_4.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_4("STRING_30665470");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSecurityType_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSecurityType_4.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_4;
      UnderlyingLegStrikePrice_4.setString("4025977");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegStrikePrice_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegStrikePrice_4.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_4("STRING_1220290798");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSymbol_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSymbol_4.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_4("STRING_1653748882");
      noOfLegUnderlyings_2_1_0.set(UnderlyingLegSymbolSfx_4);
      UnderlyingLegInstrument_4.insert(UnderlyingLegSymbolSfx_4.getString());
      all_values.push_back(UnderlyingLegInstrument_4);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_2_0_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_7;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_7("STRING_1686516818");
        noUnderlyingLegSecurityAltID_2_0_2_0.set(UnderlyingLegSecurityAltID_7);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_7.insert(UnderlyingLegSecurityAltID_7.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_7("STRING_855552471");
        noUnderlyingLegSecurityAltID_2_0_2_0.set(UnderlyingLegSecurityAltIDSource_7);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_7.insert(UnderlyingLegSecurityAltIDSource_7.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_7);

        noOfLegUnderlyings_2_1_0.addGroup(noUnderlyingLegSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_2_0_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_8;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_8("STRING_1883766334");
        noUnderlyingLegSecurityAltID_2_0_2_1.set(UnderlyingLegSecurityAltID_8);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_8.insert(UnderlyingLegSecurityAltID_8.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_8("STRING_1484535780");
        noUnderlyingLegSecurityAltID_2_0_2_1.set(UnderlyingLegSecurityAltIDSource_8);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_8.insert(UnderlyingLegSecurityAltIDSource_8.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_8);

        noOfLegUnderlyings_2_1_0.addGroup(noUnderlyingLegSecurityAltID_2_0_2_1);
      }
      noLegs_0_2.addGroup(noOfLegUnderlyings_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_2_1_1;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_5;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_5("STRING_1344669358");
      noOfLegUnderlyings_2_1_1.set(UnderlyingLegCFICode_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegCFICode_5.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_5("LOCALMKTDATE_1864435520");
      noOfLegUnderlyings_2_1_1.set(UnderlyingLegMaturityDate_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegMaturityDate_5.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_5("MONTHYEAR_1788287766");
      noOfLegUnderlyings_2_1_1.set(UnderlyingLegMaturityMonthYear_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegMaturityMonthYear_5.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_5("TZTIMEONLY_587121826");
      noOfLegUnderlyings_2_1_1.set(UnderlyingLegMaturityTime_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegMaturityTime_5.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_5('2');
      noOfLegUnderlyings_2_1_1.set(UnderlyingLegOptAttribute_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegOptAttribute_5.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_5(1283023780);
      noOfLegUnderlyings_2_1_1.set(UnderlyingLegPutOrCall_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegPutOrCall_5.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_5("STRING_366154");
      noOfLegUnderlyings_2_1_1.set(UnderlyingLegSecurityDesc_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSecurityDesc_5.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_5("STRING_956346066");
      noOfLegUnderlyings_2_1_1.set(UnderlyingLegSecurityExchange_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSecurityExchange_5.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_5("STRING_1429849000");
      noOfLegUnderlyings_2_1_1.set(UnderlyingLegSecurityID_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSecurityID_5.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_5("STRING_920590009");
      noOfLegUnderlyings_2_1_1.set(UnderlyingLegSecurityIDSource_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSecurityIDSource_5.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_5("STRING_347506597");
      noOfLegUnderlyings_2_1_1.set(UnderlyingLegSecuritySubType_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSecuritySubType_5.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_5("STRING_1924013679");
      noOfLegUnderlyings_2_1_1.set(UnderlyingLegSecurityType_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSecurityType_5.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_5;
      UnderlyingLegStrikePrice_5.setString("10183587");
      noOfLegUnderlyings_2_1_1.set(UnderlyingLegStrikePrice_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegStrikePrice_5.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_5("STRING_911578145");
      noOfLegUnderlyings_2_1_1.set(UnderlyingLegSymbol_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSymbol_5.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_5("STRING_435445540");
      noOfLegUnderlyings_2_1_1.set(UnderlyingLegSymbolSfx_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSymbolSfx_5.getString());
      all_values.push_back(UnderlyingLegInstrument_5);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_2_1_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_9;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_9("STRING_1480397466");
        noUnderlyingLegSecurityAltID_2_1_2_0.set(UnderlyingLegSecurityAltID_9);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_9.insert(UnderlyingLegSecurityAltID_9.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_9("STRING_1323511156");
        noUnderlyingLegSecurityAltID_2_1_2_0.set(UnderlyingLegSecurityAltIDSource_9);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_9.insert(UnderlyingLegSecurityAltIDSource_9.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_9);

        noOfLegUnderlyings_2_1_1.addGroup(noUnderlyingLegSecurityAltID_2_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_2_1_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_10;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_10("STRING_1511080595");
        noUnderlyingLegSecurityAltID_2_1_2_1.set(UnderlyingLegSecurityAltID_10);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_10.insert(UnderlyingLegSecurityAltID_10.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_10("STRING_2008702078");
        noUnderlyingLegSecurityAltID_2_1_2_1.set(UnderlyingLegSecurityAltIDSource_10);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_10.insert(UnderlyingLegSecurityAltIDSource_10.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_10);

        noOfLegUnderlyings_2_1_1.addGroup(noUnderlyingLegSecurityAltID_2_1_2_1);
      }
      noLegs_0_2.addGroup(noOfLegUnderlyings_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_2_1_2;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_6;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_6("STRING_885479420");
      noOfLegUnderlyings_2_1_2.set(UnderlyingLegCFICode_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegCFICode_6.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_6("LOCALMKTDATE_1994114797");
      noOfLegUnderlyings_2_1_2.set(UnderlyingLegMaturityDate_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegMaturityDate_6.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_6("MONTHYEAR_2039367548");
      noOfLegUnderlyings_2_1_2.set(UnderlyingLegMaturityMonthYear_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegMaturityMonthYear_6.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_6("TZTIMEONLY_1288077202");
      noOfLegUnderlyings_2_1_2.set(UnderlyingLegMaturityTime_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegMaturityTime_6.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_6('1');
      noOfLegUnderlyings_2_1_2.set(UnderlyingLegOptAttribute_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegOptAttribute_6.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_6(1545632783);
      noOfLegUnderlyings_2_1_2.set(UnderlyingLegPutOrCall_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegPutOrCall_6.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_6("STRING_599396727");
      noOfLegUnderlyings_2_1_2.set(UnderlyingLegSecurityDesc_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSecurityDesc_6.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_6("STRING_605955117");
      noOfLegUnderlyings_2_1_2.set(UnderlyingLegSecurityExchange_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSecurityExchange_6.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_6("STRING_253701606");
      noOfLegUnderlyings_2_1_2.set(UnderlyingLegSecurityID_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSecurityID_6.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_6("STRING_335679413");
      noOfLegUnderlyings_2_1_2.set(UnderlyingLegSecurityIDSource_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSecurityIDSource_6.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_6("STRING_2090490897");
      noOfLegUnderlyings_2_1_2.set(UnderlyingLegSecuritySubType_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSecuritySubType_6.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_6("STRING_1598370964");
      noOfLegUnderlyings_2_1_2.set(UnderlyingLegSecurityType_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSecurityType_6.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_6;
      UnderlyingLegStrikePrice_6.setString("526312");
      noOfLegUnderlyings_2_1_2.set(UnderlyingLegStrikePrice_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegStrikePrice_6.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_6("STRING_1731295016");
      noOfLegUnderlyings_2_1_2.set(UnderlyingLegSymbol_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSymbol_6.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_6("STRING_38009142");
      noOfLegUnderlyings_2_1_2.set(UnderlyingLegSymbolSfx_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSymbolSfx_6.getString());
      all_values.push_back(UnderlyingLegInstrument_6);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_2_2_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_11;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_11("STRING_866835148");
        noUnderlyingLegSecurityAltID_2_2_2_0.set(UnderlyingLegSecurityAltID_11);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_11.insert(UnderlyingLegSecurityAltID_11.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_11("STRING_38375297");
        noUnderlyingLegSecurityAltID_2_2_2_0.set(UnderlyingLegSecurityAltIDSource_11);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_11.insert(UnderlyingLegSecurityAltIDSource_11.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_11);

        noOfLegUnderlyings_2_1_2.addGroup(noUnderlyingLegSecurityAltID_2_2_2_0);
      }
      noLegs_0_2.addGroup(noOfLegUnderlyings_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::TradeCaptureReport::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_20;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_20("MULTIPLESTRINGVALUE_MOO");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_20);
    TrdRegTimestamps_NoTrdRegTimestamps_20.insert(DeskOrderHandlingInst_20.getString());
    FIX::DeskType DeskType_20("STRING_D");
    noTrdRegTimestamps_0_0.set(DeskType_20);
    TrdRegTimestamps_NoTrdRegTimestamps_20.insert(DeskType_20.getString());
    FIX::DeskTypeSource DeskTypeSource_20(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_20);
    TrdRegTimestamps_NoTrdRegTimestamps_20.insert(DeskTypeSource_20.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_20(FIX::UTCTIMESTAMP(7, 56, 11, 14, 32016));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_20);
    TrdRegTimestamps_NoTrdRegTimestamps_20.insert(TrdRegTimestamp_20.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_20("STRING_1715480861");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_20);
    TrdRegTimestamps_NoTrdRegTimestamps_20.insert(TrdRegTimestampOrigin_20.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_20(3);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_20);
    TrdRegTimestamps_NoTrdRegTimestamps_20.insert(TrdRegTimestampType_20.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_20);

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
    FIX::TrdRepPartyRole TrdRepPartyRole_0(1603471612);
    noTrdRepIndicators_0_0.set(TrdRepPartyRole_0);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_0.insert(TrdRepPartyRole_0.getString());
    all_values.push_back(TrdRepIndicatorsGrp_NoTrdRepIndicators_0);

    msg.addGroup(noTrdRepIndicators_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoTrdRepIndicators noTrdRepIndicators_0_1;
    // TrdRepIndicatorsGrp.NoTrdRepIndicators
    multiset<string> TrdRepIndicatorsGrp_NoTrdRepIndicators_1;
    FIX::TrdRepIndicator TrdRepIndicator_1(true);
    noTrdRepIndicators_0_1.set(TrdRepIndicator_1);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_1.insert(TrdRepIndicator_1.getString());
    FIX::TrdRepPartyRole TrdRepPartyRole_1(481550309);
    noTrdRepIndicators_0_1.set(TrdRepPartyRole_1);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_1.insert(TrdRepPartyRole_1.getString());
    all_values.push_back(TrdRepIndicatorsGrp_NoTrdRepIndicators_1);

    msg.addGroup(noTrdRepIndicators_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::TradeCaptureReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_140;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_140("DATA_162673282");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_140);
    UnderlyingInstrument_140.insert(EncodedUnderlyingIssuer_140.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_140(1087505426);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_140);
    UnderlyingInstrument_140.insert(EncodedUnderlyingIssuerLen_140.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_140("DATA_1255322353");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_140);
    UnderlyingInstrument_140.insert(EncodedUnderlyingSecurityDesc_140.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_140(498352695);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_140);
    UnderlyingInstrument_140.insert(EncodedUnderlyingSecurityDescLen_140.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_140;
    UnderlyingAdjustedQuantity_140.setString("10305126");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_140);
    UnderlyingInstrument_140.insert(UnderlyingAdjustedQuantity_140.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_140;
    UnderlyingAllocationPercent_140.setString("96.700000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_140);
    UnderlyingInstrument_140.insert(UnderlyingAllocationPercent_140.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_140;
    UnderlyingAttachmentPoint_140.setString("39.810000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_140);
    UnderlyingInstrument_140.insert(UnderlyingAttachmentPoint_140.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_140("STRING_614324044");
    noUnderlyings_0_0.set(UnderlyingCFICode_140);
    UnderlyingInstrument_140.insert(UnderlyingCFICode_140.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_140("STRING_744218812");
    noUnderlyings_0_0.set(UnderlyingCPProgram_140);
    UnderlyingInstrument_140.insert(UnderlyingCPProgram_140.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_140("STRING_853008636");
    noUnderlyings_0_0.set(UnderlyingCPRegType_140);
    UnderlyingInstrument_140.insert(UnderlyingCPRegType_140.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_140;
    UnderlyingCapValue_140.setString("14811591");
    noUnderlyings_0_0.set(UnderlyingCapValue_140);
    UnderlyingInstrument_140.insert(UnderlyingCapValue_140.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_140;
    UnderlyingCashAmount_140.setString("7825941");
    noUnderlyings_0_0.set(UnderlyingCashAmount_140);
    UnderlyingInstrument_140.insert(UnderlyingCashAmount_140.getString());
    FIX::UnderlyingCashType UnderlyingCashType_140("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_140);
    UnderlyingInstrument_140.insert(UnderlyingCashType_140.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_140;
    UnderlyingContractMultiplier_140.setString("16303596");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_140);
    UnderlyingInstrument_140.insert(UnderlyingContractMultiplier_140.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_140(1741559415);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_140);
    UnderlyingInstrument_140.insert(UnderlyingContractMultiplierUnit_140.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_140("COUNTRY_1569773028");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_140);
    UnderlyingInstrument_140.insert(UnderlyingCountryOfIssue_140.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_140("LOCALMKTDATE_1556090223");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_140);
    UnderlyingInstrument_140.insert(UnderlyingCouponPaymentDate_140.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_140;
    UnderlyingCouponRate_140.setString("98.460000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_140);
    UnderlyingInstrument_140.insert(UnderlyingCouponRate_140.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_140("STRING_1939744844");
    noUnderlyings_0_0.set(UnderlyingCreditRating_140);
    UnderlyingInstrument_140.insert(UnderlyingCreditRating_140.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_140("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_140);
    UnderlyingInstrument_140.insert(UnderlyingCurrency_140.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_140;
    UnderlyingCurrentValue_140.setString("16426304");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_140);
    UnderlyingInstrument_140.insert(UnderlyingCurrentValue_140.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_140;
    UnderlyingDetachmentPoint_140.setString("98.750000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_140);
    UnderlyingInstrument_140.insert(UnderlyingDetachmentPoint_140.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_140;
    UnderlyingDirtyPrice_140.setString("13437973");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_140);
    UnderlyingInstrument_140.insert(UnderlyingDirtyPrice_140.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_140;
    UnderlyingEndPrice_140.setString("12067345");
    noUnderlyings_0_0.set(UnderlyingEndPrice_140);
    UnderlyingInstrument_140.insert(UnderlyingEndPrice_140.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_140;
    UnderlyingEndValue_140.setString("18771528");
    noUnderlyings_0_0.set(UnderlyingEndValue_140);
    UnderlyingInstrument_140.insert(UnderlyingEndValue_140.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_140(758425688);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_140);
    UnderlyingInstrument_140.insert(UnderlyingExerciseStyle_140.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_140;
    UnderlyingFXRate_140.setString("6627225");
    noUnderlyings_0_0.set(UnderlyingFXRate_140);
    UnderlyingInstrument_140.insert(UnderlyingFXRate_140.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_140('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_140);
    UnderlyingInstrument_140.insert(UnderlyingFXRateCalc_140.getString());
    FIX::UnderlyingFactor UnderlyingFactor_140;
    UnderlyingFactor_140.setString("12399759");
    noUnderlyings_0_0.set(UnderlyingFactor_140);
    UnderlyingInstrument_140.insert(UnderlyingFactor_140.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_140(1664343254);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_140);
    UnderlyingInstrument_140.insert(UnderlyingFlowScheduleType_140.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_140("STRING_1603102712");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_140);
    UnderlyingInstrument_140.insert(UnderlyingInstrRegistry_140.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_140("LOCALMKTDATE_179997776");
    noUnderlyings_0_0.set(UnderlyingIssueDate_140);
    UnderlyingInstrument_140.insert(UnderlyingIssueDate_140.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_140("STRING_772181959");
    noUnderlyings_0_0.set(UnderlyingIssuer_140);
    UnderlyingInstrument_140.insert(UnderlyingIssuer_140.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_140("STRING_2101455407");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_140);
    UnderlyingInstrument_140.insert(UnderlyingLocaleOfIssue_140.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_140("LOCALMKTDATE_1210510452");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_140);
    UnderlyingInstrument_140.insert(UnderlyingMaturityDate_140.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_140("MONTHYEAR_1478391629");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_140);
    UnderlyingInstrument_140.insert(UnderlyingMaturityMonthYear_140.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_140("TZTIMEONLY_504955740");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_140);
    UnderlyingInstrument_140.insert(UnderlyingMaturityTime_140.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_140;
    UnderlyingNotionalPercentageOutstanding_140.setString("44.960000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_140);
    UnderlyingInstrument_140.insert(UnderlyingNotionalPercentageOutstanding_140.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_140('7');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_140);
    UnderlyingInstrument_140.insert(UnderlyingOptAttribute_140.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_140;
    UnderlyingOriginalNotionalPercentageOutstanding_140.setString("43.760000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_140);
    UnderlyingInstrument_140.insert(UnderlyingOriginalNotionalPercentageOutstanding_140.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_140("STRING_1158510040");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_140);
    UnderlyingInstrument_140.insert(UnderlyingPriceUnitOfMeasure_140.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_140;
    UnderlyingPriceUnitOfMeasureQty_140.setString("8577209");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_140);
    UnderlyingInstrument_140.insert(UnderlyingPriceUnitOfMeasureQty_140.getString());
    FIX::UnderlyingProduct UnderlyingProduct_140(1321860086);
    noUnderlyings_0_0.set(UnderlyingProduct_140);
    UnderlyingInstrument_140.insert(UnderlyingProduct_140.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_140(641386084);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_140);
    UnderlyingInstrument_140.insert(UnderlyingPutOrCall_140.getString());
    FIX::UnderlyingPx UnderlyingPx_140;
    UnderlyingPx_140.setString("4517966");
    noUnderlyings_0_0.set(UnderlyingPx_140);
    UnderlyingInstrument_140.insert(UnderlyingPx_140.getString());
    FIX::UnderlyingQty UnderlyingQty_140;
    UnderlyingQty_140.setString("7441494");
    noUnderlyings_0_0.set(UnderlyingQty_140);
    UnderlyingInstrument_140.insert(UnderlyingQty_140.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_140("LOCALMKTDATE_49992660");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_140);
    UnderlyingInstrument_140.insert(UnderlyingRedemptionDate_140.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_140("STRING_2023196517");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_140);
    UnderlyingInstrument_140.insert(UnderlyingRepoCollateralSecurityType_140.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_140;
    UnderlyingRepurchaseRate_140.setString("6.620000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_140);
    UnderlyingInstrument_140.insert(UnderlyingRepurchaseRate_140.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_140(1967258955);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_140);
    UnderlyingInstrument_140.insert(UnderlyingRepurchaseTerm_140.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_140("STRING_1651512982");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_140);
    UnderlyingInstrument_140.insert(UnderlyingRestructuringType_140.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_140("STRING_31557492");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_140);
    UnderlyingInstrument_140.insert(UnderlyingSecurityDesc_140.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_140("EXCHANGE_1274245182");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_140);
    UnderlyingInstrument_140.insert(UnderlyingSecurityExchange_140.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_140("STRING_847826660");
    noUnderlyings_0_0.set(UnderlyingSecurityID_140);
    UnderlyingInstrument_140.insert(UnderlyingSecurityID_140.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_140("STRING_1238292034");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_140);
    UnderlyingInstrument_140.insert(UnderlyingSecurityIDSource_140.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_140("STRING_1003914409");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_140);
    UnderlyingInstrument_140.insert(UnderlyingSecuritySubType_140.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_140("STRING_1606252348");
    noUnderlyings_0_0.set(UnderlyingSecurityType_140);
    UnderlyingInstrument_140.insert(UnderlyingSecurityType_140.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_140("STRING_1901014540");
    noUnderlyings_0_0.set(UnderlyingSeniority_140);
    UnderlyingInstrument_140.insert(UnderlyingSeniority_140.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_140("STRING_296860191");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_140);
    UnderlyingInstrument_140.insert(UnderlyingSettlMethod_140.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_140(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_140);
    UnderlyingInstrument_140.insert(UnderlyingSettlementType_140.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_140;
    UnderlyingStartValue_140.setString("14178741");
    noUnderlyings_0_0.set(UnderlyingStartValue_140);
    UnderlyingInstrument_140.insert(UnderlyingStartValue_140.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_140("STRING_1899962903");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_140);
    UnderlyingInstrument_140.insert(UnderlyingStateOrProvinceOfIssue_140.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_140("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_140);
    UnderlyingInstrument_140.insert(UnderlyingStrikeCurrency_140.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_140;
    UnderlyingStrikePrice_140.setString("18539346");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_140);
    UnderlyingInstrument_140.insert(UnderlyingStrikePrice_140.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_140("STRING_2089252927");
    noUnderlyings_0_0.set(UnderlyingSymbol_140);
    UnderlyingInstrument_140.insert(UnderlyingSymbol_140.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_140("STRING_1520964087");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_140);
    UnderlyingInstrument_140.insert(UnderlyingSymbolSfx_140.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_140("STRING_211406755");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_140);
    UnderlyingInstrument_140.insert(UnderlyingTimeUnit_140.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_140("STRING_1766603776");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_140);
    UnderlyingInstrument_140.insert(UnderlyingUnitOfMeasure_140.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_140;
    UnderlyingUnitOfMeasureQty_140.setString("15960908");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_140);
    UnderlyingInstrument_140.insert(UnderlyingUnitOfMeasureQty_140.getString());
    all_values.push_back(UnderlyingInstrument_140);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_284;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_284("STRING_777630168");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_284);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_284.insert(UnderlyingSecurityAltID_284.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_284("STRING_306328137");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_284);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_284.insert(UnderlyingSecurityAltIDSource_284.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_284);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_285;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_285("STRING_743747570");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_285);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_285.insert(UnderlyingSecurityAltID_285.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_285("STRING_1419016253");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_285);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_285.insert(UnderlyingSecurityAltIDSource_285.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_285);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_286;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_286("STRING_758124808");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_286);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_286.insert(UnderlyingSecurityAltID_286.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_286("STRING_1487897036");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_286);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_286.insert(UnderlyingSecurityAltIDSource_286.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_286);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_272;
      FIX::UnderlyingStipType UnderlyingStipType_272("STRING_633837677");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_272);
      UnderlyingStipulations_NoUnderlyingStips_272.insert(UnderlyingStipType_272.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_272("STRING_2024307698");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_272);
      UnderlyingStipulations_NoUnderlyingStips_272.insert(UnderlyingStipValue_272.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_272);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_273;
      FIX::UnderlyingStipType UnderlyingStipType_273("STRING_1288784220");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_273);
      UnderlyingStipulations_NoUnderlyingStips_273.insert(UnderlyingStipType_273.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_273("STRING_137867011");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_273);
      UnderlyingStipulations_NoUnderlyingStips_273.insert(UnderlyingStipValue_273.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_273);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_274;
      FIX::UnderlyingStipType UnderlyingStipType_274("STRING_2055865190");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_274);
      UnderlyingStipulations_NoUnderlyingStips_274.insert(UnderlyingStipType_274.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_274("STRING_415545754");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_274);
      UnderlyingStipulations_NoUnderlyingStips_274.insert(UnderlyingStipValue_274.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_274);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_285;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_285("STRING_1146673576");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_285);
      UndlyInstrumentParties_NoUndlyInstrumentParties_285.insert(UnderlyingInstrumentPartyID_285.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_285('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_285);
      UndlyInstrumentParties_NoUndlyInstrumentParties_285.insert(UnderlyingInstrumentPartyIDSource_285.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_285(444462372);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_285);
      UndlyInstrumentParties_NoUndlyInstrumentParties_285.insert(UnderlyingInstrumentPartyRole_285.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_285);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_563;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_563("STRING_1716320355");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_563);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_563.insert(UnderlyingInstrumentPartySubID_563.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_563(1143207070);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_563);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_563.insert(UnderlyingInstrumentPartySubIDType_563.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_563);

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
    multiset<string> UnderlyingInstrument_141;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_141("DATA_170594967");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_141);
    UnderlyingInstrument_141.insert(EncodedUnderlyingIssuer_141.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_141(1468799610);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_141);
    UnderlyingInstrument_141.insert(EncodedUnderlyingIssuerLen_141.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_141("DATA_2021949545");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_141);
    UnderlyingInstrument_141.insert(EncodedUnderlyingSecurityDesc_141.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_141(213167425);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_141);
    UnderlyingInstrument_141.insert(EncodedUnderlyingSecurityDescLen_141.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_141;
    UnderlyingAdjustedQuantity_141.setString("11752506");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_141);
    UnderlyingInstrument_141.insert(UnderlyingAdjustedQuantity_141.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_141;
    UnderlyingAllocationPercent_141.setString("88.250000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_141);
    UnderlyingInstrument_141.insert(UnderlyingAllocationPercent_141.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_141;
    UnderlyingAttachmentPoint_141.setString("15.120000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_141);
    UnderlyingInstrument_141.insert(UnderlyingAttachmentPoint_141.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_141("STRING_1386657381");
    noUnderlyings_0_1.set(UnderlyingCFICode_141);
    UnderlyingInstrument_141.insert(UnderlyingCFICode_141.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_141("STRING_1582838953");
    noUnderlyings_0_1.set(UnderlyingCPProgram_141);
    UnderlyingInstrument_141.insert(UnderlyingCPProgram_141.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_141("STRING_1182738746");
    noUnderlyings_0_1.set(UnderlyingCPRegType_141);
    UnderlyingInstrument_141.insert(UnderlyingCPRegType_141.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_141;
    UnderlyingCapValue_141.setString("8085448");
    noUnderlyings_0_1.set(UnderlyingCapValue_141);
    UnderlyingInstrument_141.insert(UnderlyingCapValue_141.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_141;
    UnderlyingCashAmount_141.setString("2129854");
    noUnderlyings_0_1.set(UnderlyingCashAmount_141);
    UnderlyingInstrument_141.insert(UnderlyingCashAmount_141.getString());
    FIX::UnderlyingCashType UnderlyingCashType_141("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_141);
    UnderlyingInstrument_141.insert(UnderlyingCashType_141.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_141;
    UnderlyingContractMultiplier_141.setString("15522924");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_141);
    UnderlyingInstrument_141.insert(UnderlyingContractMultiplier_141.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_141(1632001726);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_141);
    UnderlyingInstrument_141.insert(UnderlyingContractMultiplierUnit_141.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_141("COUNTRY_99708043");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_141);
    UnderlyingInstrument_141.insert(UnderlyingCountryOfIssue_141.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_141("LOCALMKTDATE_892705823");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_141);
    UnderlyingInstrument_141.insert(UnderlyingCouponPaymentDate_141.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_141;
    UnderlyingCouponRate_141.setString("69.910000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_141);
    UnderlyingInstrument_141.insert(UnderlyingCouponRate_141.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_141("STRING_733545720");
    noUnderlyings_0_1.set(UnderlyingCreditRating_141);
    UnderlyingInstrument_141.insert(UnderlyingCreditRating_141.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_141("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_141);
    UnderlyingInstrument_141.insert(UnderlyingCurrency_141.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_141;
    UnderlyingCurrentValue_141.setString("8714127");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_141);
    UnderlyingInstrument_141.insert(UnderlyingCurrentValue_141.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_141;
    UnderlyingDetachmentPoint_141.setString("14.150000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_141);
    UnderlyingInstrument_141.insert(UnderlyingDetachmentPoint_141.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_141;
    UnderlyingDirtyPrice_141.setString("5103733");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_141);
    UnderlyingInstrument_141.insert(UnderlyingDirtyPrice_141.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_141;
    UnderlyingEndPrice_141.setString("18571064");
    noUnderlyings_0_1.set(UnderlyingEndPrice_141);
    UnderlyingInstrument_141.insert(UnderlyingEndPrice_141.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_141;
    UnderlyingEndValue_141.setString("18245849");
    noUnderlyings_0_1.set(UnderlyingEndValue_141);
    UnderlyingInstrument_141.insert(UnderlyingEndValue_141.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_141(1929833481);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_141);
    UnderlyingInstrument_141.insert(UnderlyingExerciseStyle_141.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_141;
    UnderlyingFXRate_141.setString("1540851");
    noUnderlyings_0_1.set(UnderlyingFXRate_141);
    UnderlyingInstrument_141.insert(UnderlyingFXRate_141.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_141('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_141);
    UnderlyingInstrument_141.insert(UnderlyingFXRateCalc_141.getString());
    FIX::UnderlyingFactor UnderlyingFactor_141;
    UnderlyingFactor_141.setString("14986701");
    noUnderlyings_0_1.set(UnderlyingFactor_141);
    UnderlyingInstrument_141.insert(UnderlyingFactor_141.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_141(1297292198);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_141);
    UnderlyingInstrument_141.insert(UnderlyingFlowScheduleType_141.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_141("STRING_747900778");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_141);
    UnderlyingInstrument_141.insert(UnderlyingInstrRegistry_141.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_141("LOCALMKTDATE_819986150");
    noUnderlyings_0_1.set(UnderlyingIssueDate_141);
    UnderlyingInstrument_141.insert(UnderlyingIssueDate_141.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_141("STRING_1171758095");
    noUnderlyings_0_1.set(UnderlyingIssuer_141);
    UnderlyingInstrument_141.insert(UnderlyingIssuer_141.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_141("STRING_961068203");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_141);
    UnderlyingInstrument_141.insert(UnderlyingLocaleOfIssue_141.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_141("LOCALMKTDATE_1995236776");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_141);
    UnderlyingInstrument_141.insert(UnderlyingMaturityDate_141.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_141("MONTHYEAR_987993272");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_141);
    UnderlyingInstrument_141.insert(UnderlyingMaturityMonthYear_141.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_141("TZTIMEONLY_547716068");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_141);
    UnderlyingInstrument_141.insert(UnderlyingMaturityTime_141.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_141;
    UnderlyingNotionalPercentageOutstanding_141.setString("5.090000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_141);
    UnderlyingInstrument_141.insert(UnderlyingNotionalPercentageOutstanding_141.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_141('4');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_141);
    UnderlyingInstrument_141.insert(UnderlyingOptAttribute_141.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_141;
    UnderlyingOriginalNotionalPercentageOutstanding_141.setString("48.140000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_141);
    UnderlyingInstrument_141.insert(UnderlyingOriginalNotionalPercentageOutstanding_141.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_141("STRING_2042955374");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_141);
    UnderlyingInstrument_141.insert(UnderlyingPriceUnitOfMeasure_141.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_141;
    UnderlyingPriceUnitOfMeasureQty_141.setString("6363340");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_141);
    UnderlyingInstrument_141.insert(UnderlyingPriceUnitOfMeasureQty_141.getString());
    FIX::UnderlyingProduct UnderlyingProduct_141(1072038049);
    noUnderlyings_0_1.set(UnderlyingProduct_141);
    UnderlyingInstrument_141.insert(UnderlyingProduct_141.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_141(1447764161);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_141);
    UnderlyingInstrument_141.insert(UnderlyingPutOrCall_141.getString());
    FIX::UnderlyingPx UnderlyingPx_141;
    UnderlyingPx_141.setString("1208521");
    noUnderlyings_0_1.set(UnderlyingPx_141);
    UnderlyingInstrument_141.insert(UnderlyingPx_141.getString());
    FIX::UnderlyingQty UnderlyingQty_141;
    UnderlyingQty_141.setString("11717460");
    noUnderlyings_0_1.set(UnderlyingQty_141);
    UnderlyingInstrument_141.insert(UnderlyingQty_141.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_141("LOCALMKTDATE_192986336");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_141);
    UnderlyingInstrument_141.insert(UnderlyingRedemptionDate_141.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_141("STRING_1074379121");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_141);
    UnderlyingInstrument_141.insert(UnderlyingRepoCollateralSecurityType_141.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_141;
    UnderlyingRepurchaseRate_141.setString("18.120000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_141);
    UnderlyingInstrument_141.insert(UnderlyingRepurchaseRate_141.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_141(962516209);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_141);
    UnderlyingInstrument_141.insert(UnderlyingRepurchaseTerm_141.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_141("STRING_1169206684");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_141);
    UnderlyingInstrument_141.insert(UnderlyingRestructuringType_141.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_141("STRING_629220896");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_141);
    UnderlyingInstrument_141.insert(UnderlyingSecurityDesc_141.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_141("EXCHANGE_1640427624");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_141);
    UnderlyingInstrument_141.insert(UnderlyingSecurityExchange_141.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_141("STRING_1679580002");
    noUnderlyings_0_1.set(UnderlyingSecurityID_141);
    UnderlyingInstrument_141.insert(UnderlyingSecurityID_141.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_141("STRING_338843652");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_141);
    UnderlyingInstrument_141.insert(UnderlyingSecurityIDSource_141.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_141("STRING_1317528967");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_141);
    UnderlyingInstrument_141.insert(UnderlyingSecuritySubType_141.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_141("STRING_1461929835");
    noUnderlyings_0_1.set(UnderlyingSecurityType_141);
    UnderlyingInstrument_141.insert(UnderlyingSecurityType_141.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_141("STRING_492928779");
    noUnderlyings_0_1.set(UnderlyingSeniority_141);
    UnderlyingInstrument_141.insert(UnderlyingSeniority_141.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_141("STRING_1894834778");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_141);
    UnderlyingInstrument_141.insert(UnderlyingSettlMethod_141.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_141(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_141);
    UnderlyingInstrument_141.insert(UnderlyingSettlementType_141.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_141;
    UnderlyingStartValue_141.setString("17902209");
    noUnderlyings_0_1.set(UnderlyingStartValue_141);
    UnderlyingInstrument_141.insert(UnderlyingStartValue_141.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_141("STRING_495251909");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_141);
    UnderlyingInstrument_141.insert(UnderlyingStateOrProvinceOfIssue_141.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_141("CHF");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_141);
    UnderlyingInstrument_141.insert(UnderlyingStrikeCurrency_141.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_141;
    UnderlyingStrikePrice_141.setString("14563201");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_141);
    UnderlyingInstrument_141.insert(UnderlyingStrikePrice_141.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_141("STRING_1480855653");
    noUnderlyings_0_1.set(UnderlyingSymbol_141);
    UnderlyingInstrument_141.insert(UnderlyingSymbol_141.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_141("STRING_1802488697");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_141);
    UnderlyingInstrument_141.insert(UnderlyingSymbolSfx_141.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_141("STRING_2004036180");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_141);
    UnderlyingInstrument_141.insert(UnderlyingTimeUnit_141.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_141("STRING_567782514");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_141);
    UnderlyingInstrument_141.insert(UnderlyingUnitOfMeasure_141.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_141;
    UnderlyingUnitOfMeasureQty_141.setString("783536");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_141);
    UnderlyingInstrument_141.insert(UnderlyingUnitOfMeasureQty_141.getString());
    all_values.push_back(UnderlyingInstrument_141);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_287;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_287("STRING_463254240");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_287);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_287.insert(UnderlyingSecurityAltID_287.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_287("STRING_714687678");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_287);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_287.insert(UnderlyingSecurityAltIDSource_287.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_287);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_288;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_288("STRING_511561747");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_288);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_288.insert(UnderlyingSecurityAltID_288.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_288("STRING_1911018401");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_288);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_288.insert(UnderlyingSecurityAltIDSource_288.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_288);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_289;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_289("STRING_835539807");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_289);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_289.insert(UnderlyingSecurityAltID_289.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_289("STRING_1683307839");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_289);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_289.insert(UnderlyingSecurityAltIDSource_289.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_289);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_275;
      FIX::UnderlyingStipType UnderlyingStipType_275("STRING_1909918928");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_275);
      UnderlyingStipulations_NoUnderlyingStips_275.insert(UnderlyingStipType_275.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_275("STRING_1441116004");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_275);
      UnderlyingStipulations_NoUnderlyingStips_275.insert(UnderlyingStipValue_275.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_275);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_276;
      FIX::UnderlyingStipType UnderlyingStipType_276("STRING_919037298");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_276);
      UnderlyingStipulations_NoUnderlyingStips_276.insert(UnderlyingStipType_276.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_276("STRING_931641965");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_276);
      UnderlyingStipulations_NoUnderlyingStips_276.insert(UnderlyingStipValue_276.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_276);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_286;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_286("STRING_411981274");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_286);
      UndlyInstrumentParties_NoUndlyInstrumentParties_286.insert(UnderlyingInstrumentPartyID_286.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_286('4');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_286);
      UndlyInstrumentParties_NoUndlyInstrumentParties_286.insert(UnderlyingInstrumentPartyIDSource_286.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_286(261696904);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_286);
      UndlyInstrumentParties_NoUndlyInstrumentParties_286.insert(UnderlyingInstrumentPartyRole_286.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_286);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_564;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_564("STRING_1925668154");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_564);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_564.insert(UnderlyingInstrumentPartySubID_564.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_564(754625684);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_564);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_564.insert(UnderlyingInstrumentPartySubIDType_564.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_564);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_565;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_565("STRING_1476861372");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_565);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_565.insert(UnderlyingInstrumentPartySubID_565.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_565(591300881);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_565);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_565.insert(UnderlyingInstrumentPartySubIDType_565.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_565);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_566;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_566("STRING_397363013");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_566);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_566.insert(UnderlyingInstrumentPartySubID_566.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_566(1972113281);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_566);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_566.insert(UnderlyingInstrumentPartySubIDType_566.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_566);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_30;
  FIX::Yield Yield_30;
  Yield_30.setString("97.580000");
  msg.set(Yield_30);
  YieldData_30.insert(Yield_30.getString());
  FIX::YieldCalcDate YieldCalcDate_30("LOCALMKTDATE_1211858438");
  msg.set(YieldCalcDate_30);
  YieldData_30.insert(YieldCalcDate_30.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_30("LOCALMKTDATE_1280949745");
  msg.set(YieldRedemptionDate_30);
  YieldData_30.insert(YieldRedemptionDate_30.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_30;
  YieldRedemptionPrice_30.setString("15577754");
  msg.set(YieldRedemptionPrice_30);
  YieldData_30.insert(YieldRedemptionPrice_30.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_30(866863488);
  msg.set(YieldRedemptionPriceType_30);
  YieldData_30.insert(YieldRedemptionPriceType_30.getString());
  FIX::YieldType YieldType_30("STRING_INFLATION");
  msg.set(YieldType_30);
  YieldData_30.insert(YieldType_30.getString());
  all_values.push_back(YieldData_30);


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
