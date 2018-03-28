#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/TradeCaptureReportAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradeCaptureReportAck, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::TradeCaptureReportAck msg;

  list<multiset<string>> all_values;
  multiset<string> TradeCaptureReportAck_0;
  FIX::AsOfIndicator AsOfIndicator_1('1');
  msg.set(AsOfIndicator_1);
  TradeCaptureReportAck_0.insert(AsOfIndicator_1.getString());
  FIX::AvgPx AvgPx_10;
  AvgPx_10.setString("5040676");
  msg.set(AvgPx_10);
  TradeCaptureReportAck_0.insert(AvgPx_10.getString());
  FIX::AvgPxIndicator AvgPxIndicator_5(0);
  msg.set(AvgPxIndicator_5);
  TradeCaptureReportAck_0.insert(AvgPxIndicator_5.getString());
  FIX::CalculatedCcyLastQty CalculatedCcyLastQty_2;
  CalculatedCcyLastQty_2.setString("9066038");
  msg.set(CalculatedCcyLastQty_2);
  TradeCaptureReportAck_0.insert(CalculatedCcyLastQty_2.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_26("LOCALMKTDATE_194855101");
  msg.set(ClearingBusinessDate_26);
  TradeCaptureReportAck_0.insert(ClearingBusinessDate_26.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_16("STRING_M");
  msg.set(ClearingFeeIndicator_16);
  TradeCaptureReportAck_0.insert(ClearingFeeIndicator_16.getString());
  FIX::CopyMsgIndicator CopyMsgIndicator_3(false);
  msg.set(CopyMsgIndicator_3);
  TradeCaptureReportAck_0.insert(CopyMsgIndicator_3.getString());
  FIX::Currency Currency_69("JPY");
  msg.set(Currency_69);
  TradeCaptureReportAck_0.insert(Currency_69.getString());
  FIX::EncodedText EncodedText_101("DATA_1432564151");
  msg.set(EncodedText_101);
  TradeCaptureReportAck_0.insert(EncodedText_101.getString());
  FIX::EncodedTextLen EncodedTextLen_101(395210224);
  msg.set(EncodedTextLen_101);
  TradeCaptureReportAck_0.insert(EncodedTextLen_101.getString());
  FIX::ExecID ExecID_24("STRING_2068305185");
  msg.set(ExecID_24);
  TradeCaptureReportAck_0.insert(ExecID_24.getString());
  FIX::ExecRestatementReason ExecRestatementReason_2(9);
  msg.set(ExecRestatementReason_2);
  TradeCaptureReportAck_0.insert(ExecRestatementReason_2.getString());
  FIX::ExecType ExecType_2('C');
  msg.set(ExecType_2);
  TradeCaptureReportAck_0.insert(ExecType_2.getString());
  FIX::FeeMultiplier FeeMultiplier_1;
  FeeMultiplier_1.setString("12251020");
  msg.set(FeeMultiplier_1);
  TradeCaptureReportAck_0.insert(FeeMultiplier_1.getString());
  FIX::FirmTradeID FirmTradeID_8("STRING_1983144750");
  msg.set(FirmTradeID_8);
  TradeCaptureReportAck_0.insert(FirmTradeID_8.getString());
  FIX::GrossTradeAmt GrossTradeAmt_6;
  GrossTradeAmt_6.setString("2081045");
  msg.set(GrossTradeAmt_6);
  TradeCaptureReportAck_0.insert(GrossTradeAmt_6.getString());
  FIX::LastForwardPoints LastForwardPoints_2;
  LastForwardPoints_2.setString("9975014");
  msg.set(LastForwardPoints_2);
  TradeCaptureReportAck_0.insert(LastForwardPoints_2.getString());
  FIX::LastMkt LastMkt_7("EXCHANGE_1781240293");
  msg.set(LastMkt_7);
  TradeCaptureReportAck_0.insert(LastMkt_7.getString());
  FIX::LastParPx LastParPx_10;
  LastParPx_10.setString("8005963");
  msg.set(LastParPx_10);
  TradeCaptureReportAck_0.insert(LastParPx_10.getString());
  FIX::LastPx LastPx_17;
  LastPx_17.setString("8979003");
  msg.set(LastPx_17);
  TradeCaptureReportAck_0.insert(LastPx_17.getString());
  FIX::LastQty LastQty_11;
  LastQty_11.setString("5548915");
  msg.set(LastQty_11);
  TradeCaptureReportAck_0.insert(LastQty_11.getString());
  FIX::LastSpotRate LastSpotRate_2;
  LastSpotRate_2.setString("10837092");
  msg.set(LastSpotRate_2);
  TradeCaptureReportAck_0.insert(LastSpotRate_2.getString());
  FIX::LastSwapPoints LastSwapPoints_2;
  LastSwapPoints_2.setString("3191060");
  msg.set(LastSwapPoints_2);
  TradeCaptureReportAck_0.insert(LastSwapPoints_2.getString());
  FIX::LastUpdateTime LastUpdateTime_7(FIX::UTCTIMESTAMP(8, 10, 44, 1, 11, 2008));
  msg.set(LastUpdateTime_7);
  TradeCaptureReportAck_0.insert(LastUpdateTime_7.getString());
  FIX::MarketID MarketID_25("EXCHANGE_288813152");
  msg.set(MarketID_25);
  TradeCaptureReportAck_0.insert(MarketID_25.getString());
  FIX::MarketSegmentID MarketSegmentID_25("STRING_1499507794");
  msg.set(MarketSegmentID_25);
  TradeCaptureReportAck_0.insert(MarketSegmentID_25.getString());
  FIX::MatchStatus MatchStatus_12('2');
  msg.set(MatchStatus_12);
  TradeCaptureReportAck_0.insert(MatchStatus_12.getString());
  FIX::MatchType MatchType_45("STRING_A2");
  msg.set(MatchType_45);
  TradeCaptureReportAck_0.insert(MatchType_45.getString());
  FIX::MessageEventSource MessageEventSource_5("STRING_1694362895");
  msg.set(MessageEventSource_5);
  TradeCaptureReportAck_0.insert(MessageEventSource_5.getString());
  FIX::MultiLegReportingType MultiLegReportingType_5('1');
  msg.set(MultiLegReportingType_5);
  TradeCaptureReportAck_0.insert(MultiLegReportingType_5.getString());
  FIX::OrigSecondaryTradeID OrigSecondaryTradeID_1("STRING_1114182546");
  msg.set(OrigSecondaryTradeID_1);
  TradeCaptureReportAck_0.insert(OrigSecondaryTradeID_1.getString());
  FIX::OrigTradeDate OrigTradeDate_1("LOCALMKTDATE_1502072555");
  msg.set(OrigTradeDate_1);
  TradeCaptureReportAck_0.insert(OrigTradeDate_1.getString());
  FIX::OrigTradeHandlingInstr OrigTradeHandlingInstr_1('8');
  msg.set(OrigTradeHandlingInstr_1);
  TradeCaptureReportAck_0.insert(OrigTradeHandlingInstr_1.getString());
  FIX::OrigTradeID OrigTradeID_1("STRING_399263049");
  msg.set(OrigTradeID_1);
  TradeCaptureReportAck_0.insert(OrigTradeID_1.getString());
  FIX::PreviouslyReported PreviouslyReported_4(false);
  msg.set(PreviouslyReported_4);
  TradeCaptureReportAck_0.insert(PreviouslyReported_4.getString());
  FIX::PriceType PriceType_46(9);
  msg.set(PriceType_46);
  TradeCaptureReportAck_0.insert(PriceType_46.getString());
  FIX::PublishTrdIndicator PublishTrdIndicator_1(true);
  msg.set(PublishTrdIndicator_1);
  TradeCaptureReportAck_0.insert(PublishTrdIndicator_1.getString());
  FIX::QtyType QtyType_27(0);
  msg.set(QtyType_27);
  TradeCaptureReportAck_0.insert(QtyType_27.getString());
  FIX::ResponseDestination ResponseDestination_4("STRING_1991660208");
  msg.set(ResponseDestination_4);
  TradeCaptureReportAck_0.insert(ResponseDestination_4.getString());
  FIX::ResponseTransportType ResponseTransportType_4(1);
  msg.set(ResponseTransportType_4);
  TradeCaptureReportAck_0.insert(ResponseTransportType_4.getString());
  FIX::RndPx RndPx_4;
  RndPx_4.setString("17676980");
  msg.set(RndPx_4);
  TradeCaptureReportAck_0.insert(RndPx_4.getString());
  FIX::RptSys RptSys_0("STRING_841678044");
  msg.set(RptSys_0);
  TradeCaptureReportAck_0.insert(RptSys_0.getString());
  FIX::SecondaryExecID SecondaryExecID_9("STRING_577080212");
  msg.set(SecondaryExecID_9);
  TradeCaptureReportAck_0.insert(SecondaryExecID_9.getString());
  FIX::SecondaryFirmTradeID SecondaryFirmTradeID_1("STRING_420810813");
  msg.set(SecondaryFirmTradeID_1);
  TradeCaptureReportAck_0.insert(SecondaryFirmTradeID_1.getString());
  FIX::SecondaryTradeID SecondaryTradeID_1("STRING_1739578372");
  msg.set(SecondaryTradeID_1);
  TradeCaptureReportAck_0.insert(SecondaryTradeID_1.getString());
  FIX::SecondaryTradeReportID SecondaryTradeReportID_11("STRING_1131971804");
  msg.set(SecondaryTradeReportID_11);
  TradeCaptureReportAck_0.insert(SecondaryTradeReportID_11.getString());
  FIX::SecondaryTradeReportRefID SecondaryTradeReportRefID_1("STRING_1504520014");
  msg.set(SecondaryTradeReportRefID_1);
  TradeCaptureReportAck_0.insert(SecondaryTradeReportRefID_1.getString());
  FIX::SecondaryTrdType SecondaryTrdType_1(2058684457);
  msg.set(SecondaryTrdType_1);
  TradeCaptureReportAck_0.insert(SecondaryTrdType_1.getString());
  FIX::SettlCurrency SettlCurrency_37("EUR");
  msg.set(SettlCurrency_37);
  TradeCaptureReportAck_0.insert(SettlCurrency_37.getString());
  FIX::SettlDate SettlDate_48("LOCALMKTDATE_1043122719");
  msg.set(SettlDate_48);
  TradeCaptureReportAck_0.insert(SettlDate_48.getString());
  FIX::SettlSessID SettlSessID_13("STRING_ETH");
  msg.set(SettlSessID_13);
  TradeCaptureReportAck_0.insert(SettlSessID_13.getString());
  FIX::SettlSessSubID SettlSessSubID_12("STRING_2084044232");
  msg.set(SettlSessSubID_12);
  TradeCaptureReportAck_0.insert(SettlSessSubID_12.getString());
  FIX::SettlType SettlType_37("STRING_1");
  msg.set(SettlType_37);
  TradeCaptureReportAck_0.insert(SettlType_37.getString());
  FIX::ShortSaleReason ShortSaleReason_1(2);
  msg.set(ShortSaleReason_1);
  TradeCaptureReportAck_0.insert(ShortSaleReason_1.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_14('2');
  msg.set(SubscriptionRequestType_14);
  TradeCaptureReportAck_0.insert(SubscriptionRequestType_14.getString());
  FIX::Text Text_101("STRING_1390587027");
  msg.set(Text_101);
  TradeCaptureReportAck_0.insert(Text_101.getString());
  FIX::TierCode TierCode_1("STRING_1399735192");
  msg.set(TierCode_1);
  TradeCaptureReportAck_0.insert(TierCode_1.getString());
  FIX::TradeDate TradeDate_28("LOCALMKTDATE_1420790699");
  msg.set(TradeDate_28);
  TradeCaptureReportAck_0.insert(TradeDate_28.getString());
  FIX::TradeHandlingInstr TradeHandlingInstr_1('1');
  msg.set(TradeHandlingInstr_1);
  TradeCaptureReportAck_0.insert(TradeHandlingInstr_1.getString());
  FIX::TradeID TradeID_10("STRING_458263205");
  msg.set(TradeID_10);
  TradeCaptureReportAck_0.insert(TradeID_10.getString());
  FIX::TradeLegRefID TradeLegRefID_1("STRING_387489597");
  msg.set(TradeLegRefID_1);
  TradeCaptureReportAck_0.insert(TradeLegRefID_1.getString());
  FIX::TradeLinkID TradeLinkID_1("STRING_292055182");
  msg.set(TradeLinkID_1);
  TradeCaptureReportAck_0.insert(TradeLinkID_1.getString());
  FIX::TradePublishIndicator TradePublishIndicator_1(1);
  msg.set(TradePublishIndicator_1);
  TradeCaptureReportAck_0.insert(TradePublishIndicator_1.getString());
  FIX::TradeReportID TradeReportID_11("STRING_786752646");
  msg.set(TradeReportID_11);
  TradeCaptureReportAck_0.insert(TradeReportID_11.getString());
  FIX::TradeReportRefID TradeReportRefID_1("STRING_41854314");
  msg.set(TradeReportRefID_1);
  TradeCaptureReportAck_0.insert(TradeReportRefID_1.getString());
  FIX::TradeReportRejectReason TradeReportRejectReason_0(1);
  msg.set(TradeReportRejectReason_0);
  TradeCaptureReportAck_0.insert(TradeReportRejectReason_0.getString());
  FIX::TradeReportTransType TradeReportTransType_1(5);
  msg.set(TradeReportTransType_1);
  TradeCaptureReportAck_0.insert(TradeReportTransType_1.getString());
  FIX::TradeReportType TradeReportType_1(4);
  msg.set(TradeReportType_1);
  TradeCaptureReportAck_0.insert(TradeReportType_1.getString());
  FIX::TransactTime TransactTime_66(FIX::UTCTIMESTAMP(6, 8, 33, 26, 6, 2011));
  msg.set(TransactTime_66);
  TradeCaptureReportAck_0.insert(TransactTime_66.getString());
  FIX::TransferReason TransferReason_1("STRING_251823398");
  msg.set(TransferReason_1);
  TradeCaptureReportAck_0.insert(TransferReason_1.getString());
  FIX::TrdMatchID TrdMatchID_2("STRING_999509408");
  msg.set(TrdMatchID_2);
  TradeCaptureReportAck_0.insert(TrdMatchID_2.getString());
  FIX::TrdRptStatus TrdRptStatus_1(1);
  msg.set(TrdRptStatus_1);
  TradeCaptureReportAck_0.insert(TrdRptStatus_1.getString());
  FIX::TrdSubType TrdSubType_4(10);
  msg.set(TrdSubType_4);
  TradeCaptureReportAck_0.insert(TrdSubType_4.getString());
  FIX::TrdType TrdType_9(37);
  msg.set(TrdType_9);
  TradeCaptureReportAck_0.insert(TrdType_9.getString());
  FIX::UnderlyingTradingSessionID UnderlyingTradingSessionID_1("STRING_1155347125");
  msg.set(UnderlyingTradingSessionID_1);
  TradeCaptureReportAck_0.insert(UnderlyingTradingSessionID_1.getString());
  FIX::UnderlyingTradingSessionSubID UnderlyingTradingSessionSubID_1("STRING_369626307");
  msg.set(UnderlyingTradingSessionSubID_1);
  TradeCaptureReportAck_0.insert(UnderlyingTradingSessionSubID_1.getString());
  FIX::VenueType VenueType_1('P');
  msg.set(VenueType_1);
  TradeCaptureReportAck_0.insert(VenueType_1.getString());
  all_values.push_back(TradeCaptureReportAck_0);

  // Instrument
  multiset<string> Instrument_90;
  FIX::AttachmentPoint AttachmentPoint_90;
  AttachmentPoint_90.setString("63.590000");
  msg.set(AttachmentPoint_90);
  Instrument_90.insert(AttachmentPoint_90.getString());
  FIX::CFICode CFICode_95("STRING_712383995");
  msg.set(CFICode_95);
  Instrument_90.insert(CFICode_95.getString());
  FIX::CPProgram CPProgram_90(1);
  msg.set(CPProgram_90);
  Instrument_90.insert(CPProgram_90.getString());
  FIX::CPRegType CPRegType_90("STRING_289529738");
  msg.set(CPRegType_90);
  Instrument_90.insert(CPRegType_90.getString());
  FIX::CapPrice CapPrice_90;
  CapPrice_90.setString("21121191");
  msg.set(CapPrice_90);
  Instrument_90.insert(CapPrice_90.getString());
  FIX::ContractMultiplier ContractMultiplier_90;
  ContractMultiplier_90.setString("20077904");
  msg.set(ContractMultiplier_90);
  Instrument_90.insert(ContractMultiplier_90.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_90(0);
  msg.set(ContractMultiplierUnit_90);
  Instrument_90.insert(ContractMultiplierUnit_90.getString());
  FIX::ContractSettlMonth ContractSettlMonth_90("MONTHYEAR_422898745");
  msg.set(ContractSettlMonth_90);
  Instrument_90.insert(ContractSettlMonth_90.getString());
  FIX::CountryOfIssue CountryOfIssue_90("COUNTRY_247796368");
  msg.set(CountryOfIssue_90);
  Instrument_90.insert(CountryOfIssue_90.getString());
  FIX::CouponPaymentDate CouponPaymentDate_90("LOCALMKTDATE_1519051196");
  msg.set(CouponPaymentDate_90);
  Instrument_90.insert(CouponPaymentDate_90.getString());
  FIX::CouponRate CouponRate_90;
  CouponRate_90.setString("85.380000");
  msg.set(CouponRate_90);
  Instrument_90.insert(CouponRate_90.getString());
  FIX::CreditRating CreditRating_90("STRING_1034549015");
  msg.set(CreditRating_90);
  Instrument_90.insert(CreditRating_90.getString());
  FIX::DatedDate DatedDate_90("LOCALMKTDATE_1560905510");
  msg.set(DatedDate_90);
  Instrument_90.insert(DatedDate_90.getString());
  FIX::DetachmentPoint DetachmentPoint_90;
  DetachmentPoint_90.setString("28.070000");
  msg.set(DetachmentPoint_90);
  Instrument_90.insert(DetachmentPoint_90.getString());
  FIX::EncodedIssuer EncodedIssuer_90("DATA_781480478");
  msg.set(EncodedIssuer_90);
  Instrument_90.insert(EncodedIssuer_90.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_90(1014869658);
  msg.set(EncodedIssuerLen_90);
  Instrument_90.insert(EncodedIssuerLen_90.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_90("DATA_1417223636");
  msg.set(EncodedSecurityDesc_90);
  Instrument_90.insert(EncodedSecurityDesc_90.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_90(1471735508);
  msg.set(EncodedSecurityDescLen_90);
  Instrument_90.insert(EncodedSecurityDescLen_90.getString());
  FIX::ExerciseStyle ExerciseStyle_90(0);
  msg.set(ExerciseStyle_90);
  Instrument_90.insert(ExerciseStyle_90.getString());
  FIX::Factor Factor_90;
  Factor_90.setString("20261525");
  msg.set(Factor_90);
  Instrument_90.insert(Factor_90.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_90(true);
  msg.set(FlexProductEligibilityIndicator_90);
  Instrument_90.insert(FlexProductEligibilityIndicator_90.getString());
  FIX::FlexibleIndicator FlexibleIndicator_90(true);
  msg.set(FlexibleIndicator_90);
  Instrument_90.insert(FlexibleIndicator_90.getString());
  FIX::FloorPrice FloorPrice_90;
  FloorPrice_90.setString("796924");
  msg.set(FloorPrice_90);
  Instrument_90.insert(FloorPrice_90.getString());
  FIX::FlowScheduleType FlowScheduleType_90(1);
  msg.set(FlowScheduleType_90);
  Instrument_90.insert(FlowScheduleType_90.getString());
  FIX::InstrRegistry InstrRegistry_90("STRING_583547040");
  msg.set(InstrRegistry_90);
  Instrument_90.insert(InstrRegistry_90.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_90('1');
  msg.set(InstrmtAssignmentMethod_90);
  Instrument_90.insert(InstrmtAssignmentMethod_90.getString());
  FIX::InterestAccrualDate InterestAccrualDate_90("LOCALMKTDATE_1241620225");
  msg.set(InterestAccrualDate_90);
  Instrument_90.insert(InterestAccrualDate_90.getString());
  FIX::IssueDate IssueDate_90("LOCALMKTDATE_1008612439");
  msg.set(IssueDate_90);
  Instrument_90.insert(IssueDate_90.getString());
  FIX::Issuer Issuer_90("STRING_1347263991");
  msg.set(Issuer_90);
  Instrument_90.insert(Issuer_90.getString());
  FIX::ListMethod ListMethod_90(0);
  msg.set(ListMethod_90);
  Instrument_90.insert(ListMethod_90.getString());
  FIX::LocaleOfIssue LocaleOfIssue_90("STRING_1370238422");
  msg.set(LocaleOfIssue_90);
  Instrument_90.insert(LocaleOfIssue_90.getString());
  FIX::MaturityDate MaturityDate_90("LOCALMKTDATE_246206702");
  msg.set(MaturityDate_90);
  Instrument_90.insert(MaturityDate_90.getString());
  FIX::MaturityMonthYear MaturityMonthYear_90("MONTHYEAR_176146880");
  msg.set(MaturityMonthYear_90);
  Instrument_90.insert(MaturityMonthYear_90.getString());
  FIX::MaturityTime MaturityTime_90("TZTIMEONLY_1957238141");
  msg.set(MaturityTime_90);
  Instrument_90.insert(MaturityTime_90.getString());
  FIX::MinPriceIncrement MinPriceIncrement_90;
  MinPriceIncrement_90.setString("5357364");
  msg.set(MinPriceIncrement_90);
  Instrument_90.insert(MinPriceIncrement_90.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_90;
  MinPriceIncrementAmount_90.setString("1407824");
  msg.set(MinPriceIncrementAmount_90);
  Instrument_90.insert(MinPriceIncrementAmount_90.getString());
  FIX::NTPositionLimit NTPositionLimit_90(1817544912);
  msg.set(NTPositionLimit_90);
  Instrument_90.insert(NTPositionLimit_90.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_90;
  NotionalPercentageOutstanding_90.setString("24.540000");
  msg.set(NotionalPercentageOutstanding_90);
  Instrument_90.insert(NotionalPercentageOutstanding_90.getString());
  FIX::OptAttribute OptAttribute_90('5');
  msg.set(OptAttribute_90);
  Instrument_90.insert(OptAttribute_90.getString());
  FIX::OptPayoutAmount OptPayoutAmount_90;
  OptPayoutAmount_90.setString("20653412");
  msg.set(OptPayoutAmount_90);
  Instrument_90.insert(OptPayoutAmount_90.getString());
  FIX::OptPayoutType OptPayoutType_90(3);
  msg.set(OptPayoutType_90);
  Instrument_90.insert(OptPayoutType_90.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_90;
  OriginalNotionalPercentageOutstanding_90.setString("60.550000");
  msg.set(OriginalNotionalPercentageOutstanding_90);
  Instrument_90.insert(OriginalNotionalPercentageOutstanding_90.getString());
  FIX::Pool Pool_90("STRING_952406648");
  msg.set(Pool_90);
  Instrument_90.insert(Pool_90.getString());
  FIX::PositionLimit PositionLimit_90(547721864);
  msg.set(PositionLimit_90);
  Instrument_90.insert(PositionLimit_90.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_90("STRING_INT");
  msg.set(PriceQuoteMethod_90);
  Instrument_90.insert(PriceQuoteMethod_90.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_90("STRING_1733887126");
  msg.set(PriceUnitOfMeasure_90);
  Instrument_90.insert(PriceUnitOfMeasure_90.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_90;
  PriceUnitOfMeasureQty_90.setString("15625915");
  msg.set(PriceUnitOfMeasureQty_90);
  Instrument_90.insert(PriceUnitOfMeasureQty_90.getString());
  FIX::Product Product_98(1);
  msg.set(Product_98);
  Instrument_90.insert(Product_98.getString());
  FIX::ProductComplex ProductComplex_90("STRING_1058138986");
  msg.set(ProductComplex_90);
  Instrument_90.insert(ProductComplex_90.getString());
  FIX::PutOrCall PutOrCall_90(1);
  msg.set(PutOrCall_90);
  Instrument_90.insert(PutOrCall_90.getString());
  FIX::RedemptionDate RedemptionDate_90("LOCALMKTDATE_941477713");
  msg.set(RedemptionDate_90);
  Instrument_90.insert(RedemptionDate_90.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_90("STRING_1649726088");
  msg.set(RepoCollateralSecurityType_90);
  Instrument_90.insert(RepoCollateralSecurityType_90.getString());
  FIX::RepurchaseRate RepurchaseRate_90;
  RepurchaseRate_90.setString("73.930000");
  msg.set(RepurchaseRate_90);
  Instrument_90.insert(RepurchaseRate_90.getString());
  FIX::RepurchaseTerm RepurchaseTerm_90(1021170172);
  msg.set(RepurchaseTerm_90);
  Instrument_90.insert(RepurchaseTerm_90.getString());
  FIX::RestructuringType RestructuringType_90("STRING_MR");
  msg.set(RestructuringType_90);
  Instrument_90.insert(RestructuringType_90.getString());
  FIX::SecurityDesc SecurityDesc_90("STRING_1819224433");
  msg.set(SecurityDesc_90);
  Instrument_90.insert(SecurityDesc_90.getString());
  FIX::SecurityExchange SecurityExchange_90("EXCHANGE_1213087038");
  msg.set(SecurityExchange_90);
  Instrument_90.insert(SecurityExchange_90.getString());
  FIX::SecurityGroup SecurityGroup_90("STRING_1587273167");
  msg.set(SecurityGroup_90);
  Instrument_90.insert(SecurityGroup_90.getString());
  FIX::SecurityID SecurityID_90("STRING_680353224");
  msg.set(SecurityID_90);
  Instrument_90.insert(SecurityID_90.getString());
  FIX::SecurityIDSource SecurityIDSource_90("STRING_5");
  msg.set(SecurityIDSource_90);
  Instrument_90.insert(SecurityIDSource_90.getString());
  FIX::SecurityStatus SecurityStatus_91("STRING_2");
  msg.set(SecurityStatus_91);
  Instrument_90.insert(SecurityStatus_91.getString());
  FIX::SecuritySubType SecuritySubType_94("STRING_2050591646");
  msg.set(SecuritySubType_94);
  Instrument_90.insert(SecuritySubType_94.getString());
  FIX::SecurityType SecurityType_98("STRING_MTN");
  msg.set(SecurityType_98);
  Instrument_90.insert(SecurityType_98.getString());
  FIX::Seniority Seniority_90("STRING_SD");
  msg.set(Seniority_90);
  Instrument_90.insert(Seniority_90.getString());
  FIX::SettlMethod SettlMethod_90('P');
  msg.set(SettlMethod_90);
  Instrument_90.insert(SettlMethod_90.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_90("STRING_1194810525");
  msg.set(SettleOnOpenFlag_90);
  Instrument_90.insert(SettleOnOpenFlag_90.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_90("STRING_1367965351");
  msg.set(StateOrProvinceOfIssue_90);
  Instrument_90.insert(StateOrProvinceOfIssue_90.getString());
  FIX::StrikeCurrency StrikeCurrency_90("JPY");
  msg.set(StrikeCurrency_90);
  Instrument_90.insert(StrikeCurrency_90.getString());
  FIX::StrikeMultiplier StrikeMultiplier_90;
  StrikeMultiplier_90.setString("19316465");
  msg.set(StrikeMultiplier_90);
  Instrument_90.insert(StrikeMultiplier_90.getString());
  FIX::StrikePrice StrikePrice_90;
  StrikePrice_90.setString("14482650");
  msg.set(StrikePrice_90);
  Instrument_90.insert(StrikePrice_90.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_90(5);
  msg.set(StrikePriceBoundaryMethod_90);
  Instrument_90.insert(StrikePriceBoundaryMethod_90.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_90;
  StrikePriceBoundaryPrecision_90.setString("25.720000");
  msg.set(StrikePriceBoundaryPrecision_90);
  Instrument_90.insert(StrikePriceBoundaryPrecision_90.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_90(2);
  msg.set(StrikePriceDeterminationMethod_90);
  Instrument_90.insert(StrikePriceDeterminationMethod_90.getString());
  FIX::StrikeValue StrikeValue_90;
  StrikeValue_90.setString("3445975");
  msg.set(StrikeValue_90);
  Instrument_90.insert(StrikeValue_90.getString());
  FIX::Symbol Symbol_90("STRING_1720327787");
  msg.set(Symbol_90);
  Instrument_90.insert(Symbol_90.getString());
  FIX::SymbolSfx SymbolSfx_90("STRING_WI");
  msg.set(SymbolSfx_90);
  Instrument_90.insert(SymbolSfx_90.getString());
  FIX::TimeUnit TimeUnit_90("STRING_Yr");
  msg.set(TimeUnit_90);
  Instrument_90.insert(TimeUnit_90.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_90(3);
  msg.set(UnderlyingPriceDeterminationMethod_90);
  Instrument_90.insert(UnderlyingPriceDeterminationMethod_90.getString());
  FIX::UnitOfMeasure UnitOfMeasure_90("STRING_Bu");
  msg.set(UnitOfMeasure_90);
  Instrument_90.insert(UnitOfMeasure_90.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_90;
  UnitOfMeasureQty_90.setString("14113451");
  msg.set(UnitOfMeasureQty_90);
  Instrument_90.insert(UnitOfMeasureQty_90.getString());
  FIX::ValuationMethod ValuationMethod_90("STRING_CDS");
  msg.set(ValuationMethod_90);
  Instrument_90.insert(ValuationMethod_90.getString());
  all_values.push_back(Instrument_90);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReportAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_173;
    FIX::ComplexEventCondition ComplexEventCondition_173(2);
    noComplexEvents_0_0.set(ComplexEventCondition_173);
    ComplexEvents_NoComplexEvents_173.insert(ComplexEventCondition_173.getString());
    FIX::ComplexEventPrice ComplexEventPrice_173;
    ComplexEventPrice_173.setString("4508172");
    noComplexEvents_0_0.set(ComplexEventPrice_173);
    ComplexEvents_NoComplexEvents_173.insert(ComplexEventPrice_173.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_173(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_173);
    ComplexEvents_NoComplexEvents_173.insert(ComplexEventPriceBoundaryMethod_173.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_173;
    ComplexEventPriceBoundaryPrecision_173.setString("97.160000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_173);
    ComplexEvents_NoComplexEvents_173.insert(ComplexEventPriceBoundaryPrecision_173.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_173(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_173);
    ComplexEvents_NoComplexEvents_173.insert(ComplexEventPriceTimeType_173.getString());
    FIX::ComplexEventType ComplexEventType_173(4);
    noComplexEvents_0_0.set(ComplexEventType_173);
    ComplexEvents_NoComplexEvents_173.insert(ComplexEventType_173.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_173;
    ComplexOptPayoutAmount_173.setString("8516329");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_173);
    ComplexEvents_NoComplexEvents_173.insert(ComplexOptPayoutAmount_173.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_173);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_347;
      FIX::ComplexEventEndDate ComplexEventEndDate_347(FIX::UTCTIMESTAMP(2, 44, 57, 14, 7, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_347);
      ComplexEventDates_NoComplexEventDates_347.insert(ComplexEventEndDate_347.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_347(FIX::UTCTIMESTAMP(14, 57, 3, 4, 7, 2010));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_347);
      ComplexEventDates_NoComplexEventDates_347.insert(ComplexEventStartDate_347.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_347);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_709;
        FIX::ComplexEventEndTime ComplexEventEndTime_709(FIX::UTCTIMEONLY(7, 57, 51));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_709);
        ComplexEventTimes_NoComplexEventTimes_709.insert(ComplexEventEndTime_709.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_709(FIX::UTCTIMEONLY(7, 26, 29));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_709);
        ComplexEventTimes_NoComplexEventTimes_709.insert(ComplexEventStartTime_709.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_709);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_710;
        FIX::ComplexEventEndTime ComplexEventEndTime_710(FIX::UTCTIMEONLY(5, 32, 23));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_710);
        ComplexEventTimes_NoComplexEventTimes_710.insert(ComplexEventEndTime_710.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_710(FIX::UTCTIMEONLY(14, 44, 11));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_710);
        ComplexEventTimes_NoComplexEventTimes_710.insert(ComplexEventStartTime_710.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_710);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_174;
    FIX::ComplexEventCondition ComplexEventCondition_174(1);
    noComplexEvents_0_1.set(ComplexEventCondition_174);
    ComplexEvents_NoComplexEvents_174.insert(ComplexEventCondition_174.getString());
    FIX::ComplexEventPrice ComplexEventPrice_174;
    ComplexEventPrice_174.setString("18879810");
    noComplexEvents_0_1.set(ComplexEventPrice_174);
    ComplexEvents_NoComplexEvents_174.insert(ComplexEventPrice_174.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_174(2);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_174);
    ComplexEvents_NoComplexEvents_174.insert(ComplexEventPriceBoundaryMethod_174.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_174;
    ComplexEventPriceBoundaryPrecision_174.setString("13.970000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_174);
    ComplexEvents_NoComplexEvents_174.insert(ComplexEventPriceBoundaryPrecision_174.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_174(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_174);
    ComplexEvents_NoComplexEvents_174.insert(ComplexEventPriceTimeType_174.getString());
    FIX::ComplexEventType ComplexEventType_174(4);
    noComplexEvents_0_1.set(ComplexEventType_174);
    ComplexEvents_NoComplexEvents_174.insert(ComplexEventType_174.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_174;
    ComplexOptPayoutAmount_174.setString("4145838");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_174);
    ComplexEvents_NoComplexEvents_174.insert(ComplexOptPayoutAmount_174.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_174);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_348;
      FIX::ComplexEventEndDate ComplexEventEndDate_348(FIX::UTCTIMESTAMP(11, 13, 32, 25, 10, 2002));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_348);
      ComplexEventDates_NoComplexEventDates_348.insert(ComplexEventEndDate_348.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_348(FIX::UTCTIMESTAMP(8, 53, 13, 16, 5, 2007));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_348);
      ComplexEventDates_NoComplexEventDates_348.insert(ComplexEventStartDate_348.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_348);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_711;
        FIX::ComplexEventEndTime ComplexEventEndTime_711(FIX::UTCTIMEONLY(12, 22, 19));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_711);
        ComplexEventTimes_NoComplexEventTimes_711.insert(ComplexEventEndTime_711.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_711(FIX::UTCTIMEONLY(17, 3, 59));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_711);
        ComplexEventTimes_NoComplexEventTimes_711.insert(ComplexEventStartTime_711.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_711);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_712;
        FIX::ComplexEventEndTime ComplexEventEndTime_712(FIX::UTCTIMEONLY(5, 47, 58));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_712);
        ComplexEventTimes_NoComplexEventTimes_712.insert(ComplexEventEndTime_712.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_712(FIX::UTCTIMEONLY(21, 35, 12));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_712);
        ComplexEventTimes_NoComplexEventTimes_712.insert(ComplexEventStartTime_712.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_712);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_713;
        FIX::ComplexEventEndTime ComplexEventEndTime_713(FIX::UTCTIMEONLY(2, 18, 54));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_713);
        ComplexEventTimes_NoComplexEventTimes_713.insert(ComplexEventEndTime_713.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_713(FIX::UTCTIMEONLY(15, 50, 33));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_713);
        ComplexEventTimes_NoComplexEventTimes_713.insert(ComplexEventStartTime_713.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_713);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_349;
      FIX::ComplexEventEndDate ComplexEventEndDate_349(FIX::UTCTIMESTAMP(23, 38, 56, 11, 10, 2008));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_349);
      ComplexEventDates_NoComplexEventDates_349.insert(ComplexEventEndDate_349.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_349(FIX::UTCTIMESTAMP(2, 53, 18, 6, 11, 2013));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_349);
      ComplexEventDates_NoComplexEventDates_349.insert(ComplexEventStartDate_349.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_349);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_714;
        FIX::ComplexEventEndTime ComplexEventEndTime_714(FIX::UTCTIMEONLY(10, 45, 1));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_714);
        ComplexEventTimes_NoComplexEventTimes_714.insert(ComplexEventEndTime_714.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_714(FIX::UTCTIMEONLY(6, 28, 29));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_714);
        ComplexEventTimes_NoComplexEventTimes_714.insert(ComplexEventStartTime_714.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_714);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_715;
        FIX::ComplexEventEndTime ComplexEventEndTime_715(FIX::UTCTIMEONLY(7, 39, 58));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_715);
        ComplexEventTimes_NoComplexEventTimes_715.insert(ComplexEventEndTime_715.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_715(FIX::UTCTIMEONLY(10, 40, 0));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_715);
        ComplexEventTimes_NoComplexEventTimes_715.insert(ComplexEventStartTime_715.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_715);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_716;
        FIX::ComplexEventEndTime ComplexEventEndTime_716(FIX::UTCTIMEONLY(15, 38, 59));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_716);
        ComplexEventTimes_NoComplexEventTimes_716.insert(ComplexEventEndTime_716.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_716(FIX::UTCTIMEONLY(4, 37, 9));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_716);
        ComplexEventTimes_NoComplexEventTimes_716.insert(ComplexEventStartTime_716.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_716);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_175;
    FIX::ComplexEventCondition ComplexEventCondition_175(1);
    noComplexEvents_0_2.set(ComplexEventCondition_175);
    ComplexEvents_NoComplexEvents_175.insert(ComplexEventCondition_175.getString());
    FIX::ComplexEventPrice ComplexEventPrice_175;
    ComplexEventPrice_175.setString("1802975");
    noComplexEvents_0_2.set(ComplexEventPrice_175);
    ComplexEvents_NoComplexEvents_175.insert(ComplexEventPrice_175.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_175(3);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_175);
    ComplexEvents_NoComplexEvents_175.insert(ComplexEventPriceBoundaryMethod_175.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_175;
    ComplexEventPriceBoundaryPrecision_175.setString("92.840000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_175);
    ComplexEvents_NoComplexEvents_175.insert(ComplexEventPriceBoundaryPrecision_175.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_175(3);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_175);
    ComplexEvents_NoComplexEvents_175.insert(ComplexEventPriceTimeType_175.getString());
    FIX::ComplexEventType ComplexEventType_175(6);
    noComplexEvents_0_2.set(ComplexEventType_175);
    ComplexEvents_NoComplexEvents_175.insert(ComplexEventType_175.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_175;
    ComplexOptPayoutAmount_175.setString("7145443");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_175);
    ComplexEvents_NoComplexEvents_175.insert(ComplexOptPayoutAmount_175.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_175);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_350;
      FIX::ComplexEventEndDate ComplexEventEndDate_350(FIX::UTCTIMESTAMP(22, 32, 11, 1, 2, 2002));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_350);
      ComplexEventDates_NoComplexEventDates_350.insert(ComplexEventEndDate_350.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_350(FIX::UTCTIMESTAMP(0, 11, 15, 14, 11, 2001));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_350);
      ComplexEventDates_NoComplexEventDates_350.insert(ComplexEventStartDate_350.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_350);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_717;
        FIX::ComplexEventEndTime ComplexEventEndTime_717(FIX::UTCTIMEONLY(14, 21, 39));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_717);
        ComplexEventTimes_NoComplexEventTimes_717.insert(ComplexEventEndTime_717.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_717(FIX::UTCTIMEONLY(17, 9, 22));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_717);
        ComplexEventTimes_NoComplexEventTimes_717.insert(ComplexEventStartTime_717.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_717);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_718;
        FIX::ComplexEventEndTime ComplexEventEndTime_718(FIX::UTCTIMEONLY(7, 41, 47));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_718);
        ComplexEventTimes_NoComplexEventTimes_718.insert(ComplexEventEndTime_718.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_718(FIX::UTCTIMEONLY(2, 48, 47));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_718);
        ComplexEventTimes_NoComplexEventTimes_718.insert(ComplexEventStartTime_718.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_718);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_719;
        FIX::ComplexEventEndTime ComplexEventEndTime_719(FIX::UTCTIMEONLY(15, 20, 12));
        noComplexEventTimes_2_0_2_2.set(ComplexEventEndTime_719);
        ComplexEventTimes_NoComplexEventTimes_719.insert(ComplexEventEndTime_719.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_719(FIX::UTCTIMEONLY(1, 45, 13));
        noComplexEventTimes_2_0_2_2.set(ComplexEventStartTime_719);
        ComplexEventTimes_NoComplexEventTimes_719.insert(ComplexEventStartTime_719.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_719);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradeCaptureReportAck::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_174;
    FIX::EventDate EventDate_174("LOCALMKTDATE_1818682856");
    noEvents_0_0.set(EventDate_174);
    EvntGrp_NoEvents_174.insert(EventDate_174.getString());
    FIX::EventPx EventPx_174;
    EventPx_174.setString("7785618");
    noEvents_0_0.set(EventPx_174);
    EvntGrp_NoEvents_174.insert(EventPx_174.getString());
    FIX::EventText EventText_174("STRING_1174166607");
    noEvents_0_0.set(EventText_174);
    EvntGrp_NoEvents_174.insert(EventText_174.getString());
    FIX::EventTime EventTime_174(FIX::UTCTIMESTAMP(23, 18, 23, 21, 8, 2002));
    noEvents_0_0.set(EventTime_174);
    EvntGrp_NoEvents_174.insert(EventTime_174.getString());
    FIX::EventType EventType_174(10);
    noEvents_0_0.set(EventType_174);
    EvntGrp_NoEvents_174.insert(EventType_174.getString());
    all_values.push_back(EvntGrp_NoEvents_174);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_175;
    FIX::EventDate EventDate_175("LOCALMKTDATE_573830364");
    noEvents_0_1.set(EventDate_175);
    EvntGrp_NoEvents_175.insert(EventDate_175.getString());
    FIX::EventPx EventPx_175;
    EventPx_175.setString("18027241");
    noEvents_0_1.set(EventPx_175);
    EvntGrp_NoEvents_175.insert(EventPx_175.getString());
    FIX::EventText EventText_175("STRING_1488744591");
    noEvents_0_1.set(EventText_175);
    EvntGrp_NoEvents_175.insert(EventText_175.getString());
    FIX::EventTime EventTime_175(FIX::UTCTIMESTAMP(7, 33, 2, 7, 4, 2000));
    noEvents_0_1.set(EventTime_175);
    EvntGrp_NoEvents_175.insert(EventTime_175.getString());
    FIX::EventType EventType_175(11);
    noEvents_0_1.set(EventType_175);
    EvntGrp_NoEvents_175.insert(EventType_175.getString());
    all_values.push_back(EvntGrp_NoEvents_175);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReportAck::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_173;
    FIX::InstrumentPartyID InstrumentPartyID_173("STRING_548206509");
    noInstrumentParties_0_0.set(InstrumentPartyID_173);
    InstrumentParties_NoInstrumentParties_173.insert(InstrumentPartyID_173.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_173('2');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_173);
    InstrumentParties_NoInstrumentParties_173.insert(InstrumentPartyIDSource_173.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_173(619598932);
    noInstrumentParties_0_0.set(InstrumentPartyRole_173);
    InstrumentParties_NoInstrumentParties_173.insert(InstrumentPartyRole_173.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_173);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_353;
      FIX::InstrumentPartySubID InstrumentPartySubID_353("STRING_652683535");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_353);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_353.insert(InstrumentPartySubID_353.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_353(1524296017);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_353);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_353.insert(InstrumentPartySubIDType_353.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_353);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_174;
    FIX::InstrumentPartyID InstrumentPartyID_174("STRING_1458927130");
    noInstrumentParties_0_1.set(InstrumentPartyID_174);
    InstrumentParties_NoInstrumentParties_174.insert(InstrumentPartyID_174.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_174('2');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_174);
    InstrumentParties_NoInstrumentParties_174.insert(InstrumentPartyIDSource_174.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_174(1195495226);
    noInstrumentParties_0_1.set(InstrumentPartyRole_174);
    InstrumentParties_NoInstrumentParties_174.insert(InstrumentPartyRole_174.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_174);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_354;
      FIX::InstrumentPartySubID InstrumentPartySubID_354("STRING_1065173512");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_354);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_354.insert(InstrumentPartySubID_354.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_354(1897287360);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_354);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_354.insert(InstrumentPartySubIDType_354.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_354);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradeCaptureReportAck::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_189;
    FIX::SecurityAltID SecurityAltID_189("STRING_778066862");
    noSecurityAltID_0_0.set(SecurityAltID_189);
    SecAltIDGrp_NoSecurityAltID_189.insert(SecurityAltID_189.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_189("STRING_1201656015");
    noSecurityAltID_0_0.set(SecurityAltIDSource_189);
    SecAltIDGrp_NoSecurityAltID_189.insert(SecurityAltIDSource_189.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_189);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_180;
  FIX::SecurityXML SecurityXML_181("XMLDATA_649135382");
  msg.set(SecurityXML_181);
  FIX::SecurityXMLLen SecurityXMLLen_90(1163250153);
  msg.set(SecurityXMLLen_90);
  FIX::SecurityXMLSchema SecurityXMLSchema_90("STRING_726235750");
  msg.set(SecurityXMLSchema_90);
  SecurityXML_180.insert(SecurityXMLSchema_90.getString());
  all_values.push_back(SecurityXML_180);

  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::TradeCaptureReportAck::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_14;
    FIX::PosAmt PosAmt_14;
    PosAmt_14.setString("17370805");
    noPosAmt_0_0.set(PosAmt_14);
    PositionAmountData_NoPosAmt_14.insert(PosAmt_14.getString());
    FIX::PosAmtType PosAmtType_14("STRING_VADJ");
    noPosAmt_0_0.set(PosAmtType_14);
    PositionAmountData_NoPosAmt_14.insert(PosAmtType_14.getString());
    FIX::PositionCurrency PositionCurrency_14("STRING_832233015");
    noPosAmt_0_0.set(PositionCurrency_14);
    PositionAmountData_NoPosAmt_14.insert(PositionCurrency_14.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_14);

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_15;
    FIX::PosAmt PosAmt_15;
    PosAmt_15.setString("13252571");
    noPosAmt_0_1.set(PosAmt_15);
    PositionAmountData_NoPosAmt_15.insert(PosAmt_15.getString());
    FIX::PosAmtType PosAmtType_15("STRING_CASH");
    noPosAmt_0_1.set(PosAmtType_15);
    PositionAmountData_NoPosAmt_15.insert(PosAmtType_15.getString());
    FIX::PositionCurrency PositionCurrency_15("STRING_431341060");
    noPosAmt_0_1.set(PositionCurrency_15);
    PositionAmountData_NoPosAmt_15.insert(PositionCurrency_15.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_15);

    msg.addGroup(noPosAmt_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoPosAmt noPosAmt_0_2;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_16;
    FIX::PosAmt PosAmt_16;
    PosAmt_16.setString("9902893");
    noPosAmt_0_2.set(PosAmt_16);
    PositionAmountData_NoPosAmt_16.insert(PosAmt_16.getString());
    FIX::PosAmtType PosAmtType_16("STRING_CRES");
    noPosAmt_0_2.set(PosAmtType_16);
    PositionAmountData_NoPosAmt_16.insert(PosAmtType_16.getString());
    FIX::PositionCurrency PositionCurrency_16("STRING_886917019");
    noPosAmt_0_2.set(PositionCurrency_16);
    PositionAmountData_NoPosAmt_16.insert(PositionCurrency_16.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_16);

    msg.addGroup(noPosAmt_0_2);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_12;
    FIX::RootPartyID RootPartyID_12("STRING_922049942");
    noRootPartyIDs_0_0.set(RootPartyID_12);
    RootParties_NoRootPartyIDs_12.insert(RootPartyID_12.getString());
    FIX::RootPartyIDSource RootPartyIDSource_12('9');
    noRootPartyIDs_0_0.set(RootPartyIDSource_12);
    RootParties_NoRootPartyIDs_12.insert(RootPartyIDSource_12.getString());
    FIX::RootPartyRole RootPartyRole_12(1994927930);
    noRootPartyIDs_0_0.set(RootPartyRole_12);
    RootParties_NoRootPartyIDs_12.insert(RootPartyRole_12.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_12);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_30;
      FIX::RootPartySubID RootPartySubID_30("STRING_1615651552");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_30);
      RootSubParties_NoRootPartySubIDs_30.insert(RootPartySubID_30.getString());
      FIX::RootPartySubIDType RootPartySubIDType_30(609167379);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_30);
      RootSubParties_NoRootPartySubIDs_30.insert(RootPartySubIDType_30.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_30);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_31;
      FIX::RootPartySubID RootPartySubID_31("STRING_1559464420");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_31);
      RootSubParties_NoRootPartySubIDs_31.insert(RootPartySubID_31.getString());
      FIX::RootPartySubIDType RootPartySubIDType_31(992463921);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_31);
      RootSubParties_NoRootPartySubIDs_31.insert(RootPartySubIDType_31.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_31);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_32;
      FIX::RootPartySubID RootPartySubID_32("STRING_2068094510");
      noRootPartySubIDs_0_1_2.set(RootPartySubID_32);
      RootSubParties_NoRootPartySubIDs_32.insert(RootPartySubID_32.getString());
      FIX::RootPartySubIDType RootPartySubIDType_32(1450471324);
      noRootPartySubIDs_0_1_2.set(RootPartySubIDType_32);
      RootSubParties_NoRootPartySubIDs_32.insert(RootPartySubIDType_32.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_32);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_13;
    FIX::RootPartyID RootPartyID_13("STRING_40475499");
    noRootPartyIDs_0_1.set(RootPartyID_13);
    RootParties_NoRootPartyIDs_13.insert(RootPartyID_13.getString());
    FIX::RootPartyIDSource RootPartyIDSource_13('1');
    noRootPartyIDs_0_1.set(RootPartyIDSource_13);
    RootParties_NoRootPartyIDs_13.insert(RootPartyIDSource_13.getString());
    FIX::RootPartyRole RootPartyRole_13(368161188);
    noRootPartyIDs_0_1.set(RootPartyRole_13);
    RootParties_NoRootPartyIDs_13.insert(RootPartyRole_13.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_13);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_33;
      FIX::RootPartySubID RootPartySubID_33("STRING_76306018");
      noRootPartySubIDs_1_1_0.set(RootPartySubID_33);
      RootSubParties_NoRootPartySubIDs_33.insert(RootPartySubID_33.getString());
      FIX::RootPartySubIDType RootPartySubIDType_33(1146228050);
      noRootPartySubIDs_1_1_0.set(RootPartySubIDType_33);
      RootSubParties_NoRootPartySubIDs_33.insert(RootPartySubIDType_33.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_33);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_34;
      FIX::RootPartySubID RootPartySubID_34("STRING_991935227");
      noRootPartySubIDs_1_1_1.set(RootPartySubID_34);
      RootSubParties_NoRootPartySubIDs_34.insert(RootPartySubID_34.getString());
      FIX::RootPartySubIDType RootPartySubIDType_34(725441400);
      noRootPartySubIDs_1_1_1.set(RootPartySubIDType_34);
      RootSubParties_NoRootPartySubIDs_34.insert(RootPartySubIDType_34.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_34);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_1);
  }
  // TrdCapRptAckSideGrp
  // Group TrdCapRptAckSideGrp.NoSides
  {
    FIX50SP2::TradeCaptureReportAck::NoSides noSides_0_0;
    // TrdCapRptAckSideGrp.NoSides
    multiset<string> TrdCapRptAckSideGrp_NoSides_0;
    FIX::Account Account_43("STRING_1718170977");
    noSides_0_0.set(Account_43);
    TrdCapRptAckSideGrp_NoSides_0.insert(Account_43.getString());
    FIX::AccountType AccountType_36(7);
    noSides_0_0.set(AccountType_36);
    TrdCapRptAckSideGrp_NoSides_0.insert(AccountType_36.getString());
    FIX::AccruedInterestAmt AccruedInterestAmt_11;
    AccruedInterestAmt_11.setString("18990750");
    noSides_0_0.set(AccruedInterestAmt_11);
    TrdCapRptAckSideGrp_NoSides_0.insert(AccruedInterestAmt_11.getString());
    FIX::AccruedInterestRate AccruedInterestRate_6;
    AccruedInterestRate_6.setString("72.710000");
    noSides_0_0.set(AccruedInterestRate_6);
    TrdCapRptAckSideGrp_NoSides_0.insert(AccruedInterestRate_6.getString());
    FIX::AcctIDSource AcctIDSource_36(5);
    noSides_0_0.set(AcctIDSource_36);
    TrdCapRptAckSideGrp_NoSides_0.insert(AcctIDSource_36.getString());
    FIX::AggressorIndicator AggressorIndicator_2(true);
    noSides_0_0.set(AggressorIndicator_2);
    TrdCapRptAckSideGrp_NoSides_0.insert(AggressorIndicator_2.getString());
    FIX::AllocID AllocID_19("STRING_299838771");
    noSides_0_0.set(AllocID_19);
    TrdCapRptAckSideGrp_NoSides_0.insert(AllocID_19.getString());
    FIX::ComplianceID ComplianceID_13("STRING_1332503900");
    noSides_0_0.set(ComplianceID_13);
    TrdCapRptAckSideGrp_NoSides_0.insert(ComplianceID_13.getString());
    FIX::Concession Concession_6;
    Concession_6.setString("20671378");
    noSides_0_0.set(Concession_6);
    TrdCapRptAckSideGrp_NoSides_0.insert(Concession_6.getString());
    FIX::CustOrderCapacity CustOrderCapacity_18(4);
    noSides_0_0.set(CustOrderCapacity_18);
    TrdCapRptAckSideGrp_NoSides_0.insert(CustOrderCapacity_18.getString());
    FIX::EndAccruedInterestAmt EndAccruedInterestAmt_11;
    EndAccruedInterestAmt_11.setString("719372");
    noSides_0_0.set(EndAccruedInterestAmt_11);
    TrdCapRptAckSideGrp_NoSides_0.insert(EndAccruedInterestAmt_11.getString());
    FIX::EndCash EndCash_11;
    EndCash_11.setString("13663756");
    noSides_0_0.set(EndCash_11);
    TrdCapRptAckSideGrp_NoSides_0.insert(EndCash_11.getString());
    FIX::ExDate ExDate_3("LOCALMKTDATE_1451764465");
    noSides_0_0.set(ExDate_3);
    TrdCapRptAckSideGrp_NoSides_0.insert(ExDate_3.getString());
    FIX::ExchangeRule ExchangeRule_1("STRING_1067989891");
    noSides_0_0.set(ExchangeRule_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(ExchangeRule_1.getString());
    FIX::InterestAtMaturity InterestAtMaturity_6;
    InterestAtMaturity_6.setString("12138199");
    noSides_0_0.set(InterestAtMaturity_6);
    TrdCapRptAckSideGrp_NoSides_0.insert(InterestAtMaturity_6.getString());
    FIX::NetGrossInd NetGrossInd_10(2);
    noSides_0_0.set(NetGrossInd_10);
    TrdCapRptAckSideGrp_NoSides_0.insert(NetGrossInd_10.getString());
    FIX::NetMoney NetMoney_6;
    NetMoney_6.setString("5361577");
    noSides_0_0.set(NetMoney_6);
    TrdCapRptAckSideGrp_NoSides_0.insert(NetMoney_6.getString());
    FIX::NumDaysInterest NumDaysInterest_6(1822987320);
    noSides_0_0.set(NumDaysInterest_6);
    TrdCapRptAckSideGrp_NoSides_0.insert(NumDaysInterest_6.getString());
    FIX::OddLot OddLot_1(false);
    noSides_0_0.set(OddLot_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(OddLot_1.getString());
    FIX::OrderCategory OrderCategory_2('5');
    noSides_0_0.set(OrderCategory_2);
    TrdCapRptAckSideGrp_NoSides_0.insert(OrderCategory_2.getString());
    FIX::OrderDelay OrderDelay_1(1743598182);
    noSides_0_0.set(OrderDelay_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(OrderDelay_1.getString());
    FIX::OrderDelayUnit OrderDelayUnit_1(2);
    noSides_0_0.set(OrderDelayUnit_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(OrderDelayUnit_1.getString());
    FIX::PositionEffect PositionEffect_15('N');
    noSides_0_0.set(PositionEffect_15);
    TrdCapRptAckSideGrp_NoSides_0.insert(PositionEffect_15.getString());
    FIX::PreallocMethod PreallocMethod_12('1');
    noSides_0_0.set(PreallocMethod_12);
    TrdCapRptAckSideGrp_NoSides_0.insert(PreallocMethod_12.getString());
    FIX::ProcessCode ProcessCode_13('3');
    noSides_0_0.set(ProcessCode_13);
    TrdCapRptAckSideGrp_NoSides_0.insert(ProcessCode_13.getString());
    FIX::RptSeq RptSeq_7(1359376428);
    noSides_0_0.set(RptSeq_7);
    TrdCapRptAckSideGrp_NoSides_0.insert(RptSeq_7.getString());
    FIX::SettlCurrAmt SettlCurrAmt_11;
    SettlCurrAmt_11.setString("18305204");
    noSides_0_0.set(SettlCurrAmt_11);
    TrdCapRptAckSideGrp_NoSides_0.insert(SettlCurrAmt_11.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_11;
    SettlCurrFxRate_11.setString("4404193");
    noSides_0_0.set(SettlCurrFxRate_11);
    TrdCapRptAckSideGrp_NoSides_0.insert(SettlCurrFxRate_11.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_11('M');
    noSides_0_0.set(SettlCurrFxRateCalc_11);
    TrdCapRptAckSideGrp_NoSides_0.insert(SettlCurrFxRateCalc_11.getString());
    FIX::Side Side_51('A');
    noSides_0_0.set(Side_51);
    TrdCapRptAckSideGrp_NoSides_0.insert(Side_51.getString());
    FIX::SideCurrency SideCurrency_1("EUR");
    noSides_0_0.set(SideCurrency_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideCurrency_1.getString());
    FIX::SideExecID SideExecID_1("STRING_477408010");
    noSides_0_0.set(SideExecID_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideExecID_1.getString());
    FIX::SideFillStationCd SideFillStationCd_1("STRING_354005369");
    noSides_0_0.set(SideFillStationCd_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideFillStationCd_1.getString());
    FIX::SideGrossTradeAmt SideGrossTradeAmt_1;
    SideGrossTradeAmt_1.setString("18741626");
    noSides_0_0.set(SideGrossTradeAmt_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideGrossTradeAmt_1.getString());
    FIX::SideLastQty SideLastQty_1(1378570850);
    noSides_0_0.set(SideLastQty_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideLastQty_1.getString());
    FIX::SideMultiLegReportingType SideMultiLegReportingType_1(2);
    noSides_0_0.set(SideMultiLegReportingType_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideMultiLegReportingType_1.getString());
    FIX::SideReasonCd SideReasonCd_1("STRING_26517732");
    noSides_0_0.set(SideReasonCd_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideReasonCd_1.getString());
    FIX::SideSettlCurrency SideSettlCurrency_1("USD");
    noSides_0_0.set(SideSettlCurrency_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideSettlCurrency_1.getString());
    FIX::SideTradeReportID SideTradeReportID_1("STRING_556232255");
    noSides_0_0.set(SideTradeReportID_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideTradeReportID_1.getString());
    FIX::SideTrdSubTyp SideTrdSubTyp_1(635528374);
    noSides_0_0.set(SideTrdSubTyp_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideTrdSubTyp_1.getString());
    FIX::SolicitedFlag SolicitedFlag_12(false);
    noSides_0_0.set(SolicitedFlag_12);
    TrdCapRptAckSideGrp_NoSides_0.insert(SolicitedFlag_12.getString());
    FIX::StartCash StartCash_11;
    StartCash_11.setString("20079967");
    noSides_0_0.set(StartCash_11);
    TrdCapRptAckSideGrp_NoSides_0.insert(StartCash_11.getString());
    FIX::TimeBracket TimeBracket_2("STRING_1703518266");
    noSides_0_0.set(TimeBracket_2);
    TrdCapRptAckSideGrp_NoSides_0.insert(TimeBracket_2.getString());
    FIX::TotalTakedown TotalTakedown_6;
    TotalTakedown_6.setString("17832201");
    noSides_0_0.set(TotalTakedown_6);
    TrdCapRptAckSideGrp_NoSides_0.insert(TotalTakedown_6.getString());
    FIX::TradeAllocIndicator TradeAllocIndicator_1(5);
    noSides_0_0.set(TradeAllocIndicator_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(TradeAllocIndicator_1.getString());
    FIX::TradeInputDevice TradeInputDevice_2("STRING_92192413");
    noSides_0_0.set(TradeInputDevice_2);
    TrdCapRptAckSideGrp_NoSides_0.insert(TradeInputDevice_2.getString());
    FIX::TradeInputSource TradeInputSource_4("STRING_1458723800");
    noSides_0_0.set(TradeInputSource_4);
    TrdCapRptAckSideGrp_NoSides_0.insert(TradeInputSource_4.getString());
    FIX::TradingSessionID TradingSessionID_93("STRING_6");
    noSides_0_0.set(TradingSessionID_93);
    TrdCapRptAckSideGrp_NoSides_0.insert(TradingSessionID_93.getString());
    FIX::TradingSessionSubID TradingSessionSubID_93("STRING_6");
    noSides_0_0.set(TradingSessionSubID_93);
    TrdCapRptAckSideGrp_NoSides_0.insert(TradingSessionSubID_93.getString());
    all_values.push_back(TrdCapRptAckSideGrp_NoSides_0);

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_15;
      FIX::ClearingInstruction ClearingInstruction_15(3);
      noClearingInstructions_0_1_0.set(ClearingInstruction_15);
      ClrInstGrp_NoClearingInstructions_15.insert(ClearingInstruction_15.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_15);

      noSides_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoClearingInstructions noClearingInstructions_0_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_16;
      FIX::ClearingInstruction ClearingInstruction_16(5);
      noClearingInstructions_0_1_1.set(ClearingInstruction_16);
      ClrInstGrp_NoClearingInstructions_16.insert(ClearingInstruction_16.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_16);

      noSides_0_0.addGroup(noClearingInstructions_0_1_1);
    }
    // CommissionData
    multiset<string> CommissionData_21;
    FIX::CommCurrency CommCurrency_21("CAN");
    noSides_0_0.set(CommCurrency_21);
    CommissionData_21.insert(CommCurrency_21.getString());
    FIX::CommType CommType_24('4');
    noSides_0_0.set(CommType_24);
    CommissionData_21.insert(CommType_24.getString());
    FIX::Commission Commission_24;
    Commission_24.setString("3446058");
    noSides_0_0.set(Commission_24);
    CommissionData_21.insert(Commission_24.getString());
    FIX::FundRenewWaiv FundRenewWaiv_21('N');
    noSides_0_0.set(FundRenewWaiv_21);
    CommissionData_21.insert(FundRenewWaiv_21.getString());
    all_values.push_back(CommissionData_21);

    // ContAmtGrp
    // Group ContAmtGrp.NoContAmts
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoContAmts noContAmts_0_1_0;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_4;
      FIX::ContAmtCurr ContAmtCurr_4("CHF");
      noContAmts_0_1_0.set(ContAmtCurr_4);
      ContAmtGrp_NoContAmts_4.insert(ContAmtCurr_4.getString());
      FIX::ContAmtType ContAmtType_4(11);
      noContAmts_0_1_0.set(ContAmtType_4);
      ContAmtGrp_NoContAmts_4.insert(ContAmtType_4.getString());
      FIX::ContAmtValue ContAmtValue_4;
      ContAmtValue_4.setString("12304920");
      noContAmts_0_1_0.set(ContAmtValue_4);
      ContAmtGrp_NoContAmts_4.insert(ContAmtValue_4.getString());
      all_values.push_back(ContAmtGrp_NoContAmts_4);

      noSides_0_0.addGroup(noContAmts_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoContAmts noContAmts_0_1_1;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_5;
      FIX::ContAmtCurr ContAmtCurr_5("CAN");
      noContAmts_0_1_1.set(ContAmtCurr_5);
      ContAmtGrp_NoContAmts_5.insert(ContAmtCurr_5.getString());
      FIX::ContAmtType ContAmtType_5(5);
      noContAmts_0_1_1.set(ContAmtType_5);
      ContAmtGrp_NoContAmts_5.insert(ContAmtType_5.getString());
      FIX::ContAmtValue ContAmtValue_5;
      ContAmtValue_5.setString("7425313");
      noContAmts_0_1_1.set(ContAmtValue_5);
      ContAmtGrp_NoContAmts_5.insert(ContAmtValue_5.getString());
      all_values.push_back(ContAmtGrp_NoContAmts_5);

      noSides_0_0.addGroup(noContAmts_0_1_1);
    }
    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_24;
      FIX::MiscFeeAmt MiscFeeAmt_24;
      MiscFeeAmt_24.setString("10251703");
      noMiscFees_0_1_0.set(MiscFeeAmt_24);
      MiscFeesGrp_NoMiscFees_24.insert(MiscFeeAmt_24.getString());
      FIX::MiscFeeBasis MiscFeeBasis_24(1);
      noMiscFees_0_1_0.set(MiscFeeBasis_24);
      MiscFeesGrp_NoMiscFees_24.insert(MiscFeeBasis_24.getString());
      FIX::MiscFeeCurr MiscFeeCurr_24("CAN");
      noMiscFees_0_1_0.set(MiscFeeCurr_24);
      MiscFeesGrp_NoMiscFees_24.insert(MiscFeeCurr_24.getString());
      FIX::MiscFeeType MiscFeeType_24("STRING_13");
      noMiscFees_0_1_0.set(MiscFeeType_24);
      MiscFeesGrp_NoMiscFees_24.insert(MiscFeeType_24.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_24);

      noSides_0_0.addGroup(noMiscFees_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoMiscFees noMiscFees_0_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_25;
      FIX::MiscFeeAmt MiscFeeAmt_25;
      MiscFeeAmt_25.setString("4026058");
      noMiscFees_0_1_1.set(MiscFeeAmt_25);
      MiscFeesGrp_NoMiscFees_25.insert(MiscFeeAmt_25.getString());
      FIX::MiscFeeBasis MiscFeeBasis_25(0);
      noMiscFees_0_1_1.set(MiscFeeBasis_25);
      MiscFeesGrp_NoMiscFees_25.insert(MiscFeeBasis_25.getString());
      FIX::MiscFeeCurr MiscFeeCurr_25("USD");
      noMiscFees_0_1_1.set(MiscFeeCurr_25);
      MiscFeesGrp_NoMiscFees_25.insert(MiscFeeCurr_25.getString());
      FIX::MiscFeeType MiscFeeType_25("STRING_8");
      noMiscFees_0_1_1.set(MiscFeeType_25);
      MiscFeesGrp_NoMiscFees_25.insert(MiscFeeType_25.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_25);

      noSides_0_0.addGroup(noMiscFees_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoMiscFees noMiscFees_0_1_2;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_26;
      FIX::MiscFeeAmt MiscFeeAmt_26;
      MiscFeeAmt_26.setString("16094163");
      noMiscFees_0_1_2.set(MiscFeeAmt_26);
      MiscFeesGrp_NoMiscFees_26.insert(MiscFeeAmt_26.getString());
      FIX::MiscFeeBasis MiscFeeBasis_26(0);
      noMiscFees_0_1_2.set(MiscFeeBasis_26);
      MiscFeesGrp_NoMiscFees_26.insert(MiscFeeBasis_26.getString());
      FIX::MiscFeeCurr MiscFeeCurr_26("JPY");
      noMiscFees_0_1_2.set(MiscFeeCurr_26);
      MiscFeesGrp_NoMiscFees_26.insert(MiscFeeCurr_26.getString());
      FIX::MiscFeeType MiscFeeType_26("STRING_9");
      noMiscFees_0_1_2.set(MiscFeeType_26);
      MiscFeesGrp_NoMiscFees_26.insert(MiscFeeType_26.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_26);

      noSides_0_0.addGroup(noMiscFees_0_1_2);
    }
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_153;
      FIX::PartyID PartyID_153("STRING_1178340160");
      noPartyIDs_0_1_0.set(PartyID_153);
      Parties_NoPartyIDs_153.insert(PartyID_153.getString());
      FIX::PartyIDSource PartyIDSource_153('D');
      noPartyIDs_0_1_0.set(PartyIDSource_153);
      Parties_NoPartyIDs_153.insert(PartyIDSource_153.getString());
      FIX::PartyRole PartyRole_153(3);
      noPartyIDs_0_1_0.set(PartyRole_153);
      Parties_NoPartyIDs_153.insert(PartyRole_153.getString());
      all_values.push_back(Parties_NoPartyIDs_153);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_307;
        FIX::PartySubID PartySubID_307("STRING_1501993066");
        noPartySubIDs_0_0_2_0.set(PartySubID_307);
        PtysSubGrp_NoPartySubIDs_307.insert(PartySubID_307.getString());
        FIX::PartySubIDType PartySubIDType_307(14);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_307);
        PtysSubGrp_NoPartySubIDs_307.insert(PartySubIDType_307.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_307);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_308;
        FIX::PartySubID PartySubID_308("STRING_128546471");
        noPartySubIDs_0_0_2_1.set(PartySubID_308);
        PtysSubGrp_NoPartySubIDs_308.insert(PartySubID_308.getString());
        FIX::PartySubIDType PartySubIDType_308(18);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_308);
        PtysSubGrp_NoPartySubIDs_308.insert(PartySubIDType_308.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_308);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_154;
      FIX::PartyID PartyID_154("STRING_622333118");
      noPartyIDs_0_1_1.set(PartyID_154);
      Parties_NoPartyIDs_154.insert(PartyID_154.getString());
      FIX::PartyIDSource PartyIDSource_154('G');
      noPartyIDs_0_1_1.set(PartyIDSource_154);
      Parties_NoPartyIDs_154.insert(PartyIDSource_154.getString());
      FIX::PartyRole PartyRole_154(27);
      noPartyIDs_0_1_1.set(PartyRole_154);
      Parties_NoPartyIDs_154.insert(PartyRole_154.getString());
      all_values.push_back(Parties_NoPartyIDs_154);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_309;
        FIX::PartySubID PartySubID_309("STRING_1820617838");
        noPartySubIDs_0_1_2_0.set(PartySubID_309);
        PtysSubGrp_NoPartySubIDs_309.insert(PartySubID_309.getString());
        FIX::PartySubIDType PartySubIDType_309(28);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_309);
        PtysSubGrp_NoPartySubIDs_309.insert(PartySubIDType_309.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_309);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_1);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails noSettlDetails_0_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_7;
      FIX::SettlObligSource SettlObligSource_7('2');
      noSettlDetails_0_1_0.set(SettlObligSource_7);
      SettlDetails_NoSettlDetails_7.insert(SettlObligSource_7.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_7);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_50;
        FIX::SettlPartyID SettlPartyID_50("STRING_1109629194");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_50);
        SettlParties_NoSettlPartyIDs_50.insert(SettlPartyID_50.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_50('2');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_50);
        SettlParties_NoSettlPartyIDs_50.insert(SettlPartyIDSource_50.getString());
        FIX::SettlPartyRole SettlPartyRole_50(974385942);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_50);
        SettlParties_NoSettlPartyIDs_50.insert(SettlPartyRole_50.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_50);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_108;
          FIX::SettlPartySubID SettlPartySubID_108("STRING_1428253070");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_108);
          SettlPtysSubGrp_NoSettlPartySubIDs_108.insert(SettlPartySubID_108.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_108(1125078513);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_108);
          SettlPtysSubGrp_NoSettlPartySubIDs_108.insert(SettlPartySubIDType_108.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_108);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      noSides_0_0.addGroup(noSettlDetails_0_1_0);
    }
    // SideTrdRegTS
    // Group SideTrdRegTS.NoSideTrdRegTS
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSideTrdRegTS noSideTrdRegTS_0_1_0;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_1;
      FIX::SideTrdRegTimestamp SideTrdRegTimestamp_1(FIX::UTCTIMESTAMP(12, 13, 11, 6, 4, 2001));
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestamp_1);
      SideTrdRegTS_NoSideTrdRegTS_1.insert(SideTrdRegTimestamp_1.getString());
      FIX::SideTrdRegTimestampSrc SideTrdRegTimestampSrc_1("STRING_134638806");
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestampSrc_1);
      SideTrdRegTS_NoSideTrdRegTS_1.insert(SideTrdRegTimestampSrc_1.getString());
      FIX::SideTrdRegTimestampType SideTrdRegTimestampType_1(1943910077);
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestampType_1);
      SideTrdRegTS_NoSideTrdRegTS_1.insert(SideTrdRegTimestampType_1.getString());
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_1);

      noSides_0_0.addGroup(noSideTrdRegTS_0_1_0);
    }
    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_50;
      FIX::StipulationType StipulationType_50("STRING_POOL");
      noStipulations_0_1_0.set(StipulationType_50);
      Stipulations_NoStipulations_50.insert(StipulationType_50.getString());
      FIX::StipulationValue StipulationValue_50("STRING_1298419495");
      noStipulations_0_1_0.set(StipulationValue_50);
      Stipulations_NoStipulations_50.insert(StipulationValue_50.getString());
      all_values.push_back(Stipulations_NoStipulations_50);

      noSides_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_51;
      FIX::StipulationType StipulationType_51("STRING_PPC");
      noStipulations_0_1_1.set(StipulationType_51);
      Stipulations_NoStipulations_51.insert(StipulationType_51.getString());
      FIX::StipulationValue StipulationValue_51("STRING_1786131324");
      noStipulations_0_1_1.set(StipulationValue_51);
      Stipulations_NoStipulations_51.insert(StipulationValue_51.getString());
      all_values.push_back(Stipulations_NoStipulations_51);

      noSides_0_0.addGroup(noStipulations_0_1_1);
    }
    // TradeReportOrderDetail
    multiset<string> TradeReportOrderDetail_1;
    FIX::BookingType BookingType_25(0);
    noSides_0_0.set(BookingType_25);
    TradeReportOrderDetail_1.insert(BookingType_25.getString());
    FIX::ClOrdID ClOrdID_48("STRING_1992675035");
    noSides_0_0.set(ClOrdID_48);
    TradeReportOrderDetail_1.insert(ClOrdID_48.getString());
    FIX::CumQty CumQty_6;
    CumQty_6.setString("9976862");
    noSides_0_0.set(CumQty_6);
    TradeReportOrderDetail_1.insert(CumQty_6.getString());
    FIX::ExecInst ExecInst_14("MULTIPLECHARVALUE_3");
    noSides_0_0.set(ExecInst_14);
    TradeReportOrderDetail_1.insert(ExecInst_14.getString());
    FIX::ExpireTime ExpireTime_26(FIX::UTCTIMESTAMP(21, 11, 13, 10, 4, 2001));
    noSides_0_0.set(ExpireTime_26);
    TradeReportOrderDetail_1.insert(ExpireTime_26.getString());
    FIX::LeavesQty LeavesQty_5;
    LeavesQty_5.setString("15806446");
    noSides_0_0.set(LeavesQty_5);
    TradeReportOrderDetail_1.insert(LeavesQty_5.getString());
    FIX::ListID ListID_25("STRING_1329633298");
    noSides_0_0.set(ListID_25);
    TradeReportOrderDetail_1.insert(ListID_25.getString());
    FIX::LotType LotType_29('2');
    noSides_0_0.set(LotType_29);
    TradeReportOrderDetail_1.insert(LotType_29.getString());
    FIX::OrdStatus OrdStatus_6('7');
    noSides_0_0.set(OrdStatus_6);
    TradeReportOrderDetail_1.insert(OrdStatus_6.getString());
    FIX::OrdType OrdType_71('C');
    noSides_0_0.set(OrdType_71);
    TradeReportOrderDetail_1.insert(OrdType_71.getString());
    FIX::OrderCapacity OrderCapacity_29('R');
    noSides_0_0.set(OrderCapacity_29);
    TradeReportOrderDetail_1.insert(OrderCapacity_29.getString());
    FIX::OrderID OrderID_35("STRING_1451109327");
    noSides_0_0.set(OrderID_35);
    TradeReportOrderDetail_1.insert(OrderID_35.getString());
    FIX::OrderInputDevice OrderInputDevice_1("STRING_894239399");
    noSides_0_0.set(OrderInputDevice_1);
    TradeReportOrderDetail_1.insert(OrderInputDevice_1.getString());
    FIX::OrderRestrictions OrderRestrictions_24("MULTIPLECHARVALUE_F");
    noSides_0_0.set(OrderRestrictions_24);
    TradeReportOrderDetail_1.insert(OrderRestrictions_24.getString());
    FIX::OrigCustOrderCapacity OrigCustOrderCapacity_1(3);
    noSides_0_0.set(OrigCustOrderCapacity_1);
    TradeReportOrderDetail_1.insert(OrigCustOrderCapacity_1.getString());
    FIX::OrigOrdModTime OrigOrdModTime_8(FIX::UTCTIMESTAMP(19, 8, 39, 20, 8, 2002));
    noSides_0_0.set(OrigOrdModTime_8);
    TradeReportOrderDetail_1.insert(OrigOrdModTime_8.getString());
    FIX::Price Price_26;
    Price_26.setString("12074672");
    noSides_0_0.set(Price_26);
    TradeReportOrderDetail_1.insert(Price_26.getString());
    FIX::RefOrdIDReason RefOrdIDReason_1(1);
    noSides_0_0.set(RefOrdIDReason_1);
    TradeReportOrderDetail_1.insert(RefOrdIDReason_1.getString());
    FIX::RefOrderID RefOrderID_4("STRING_1281409380");
    noSides_0_0.set(RefOrderID_4);
    TradeReportOrderDetail_1.insert(RefOrderID_4.getString());
    FIX::RefOrderIDSource RefOrderIDSource_4('1');
    noSides_0_0.set(RefOrderIDSource_4);
    TradeReportOrderDetail_1.insert(RefOrderIDSource_4.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_41("STRING_1773451268");
    noSides_0_0.set(SecondaryClOrdID_41);
    TradeReportOrderDetail_1.insert(SecondaryClOrdID_41.getString());
    FIX::SecondaryOrderID SecondaryOrderID_25("STRING_131611963");
    noSides_0_0.set(SecondaryOrderID_25);
    TradeReportOrderDetail_1.insert(SecondaryOrderID_25.getString());
    FIX::StopPx StopPx_9;
    StopPx_9.setString("2000117");
    noSides_0_0.set(StopPx_9);
    TradeReportOrderDetail_1.insert(StopPx_9.getString());
    FIX::TimeInForce TimeInForce_55('1');
    noSides_0_0.set(TimeInForce_55);
    TradeReportOrderDetail_1.insert(TimeInForce_55.getString());
    FIX::TransBkdTime TransBkdTime_6(FIX::UTCTIMESTAMP(15, 4, 54, 23, 4, 2010));
    noSides_0_0.set(TransBkdTime_6);
    TradeReportOrderDetail_1.insert(TransBkdTime_6.getString());
    all_values.push_back(TradeReportOrderDetail_1);

    // DisplayInstruction
    multiset<string> DisplayInstruction_9;
    FIX::DisplayHighQty DisplayHighQty_9;
    DisplayHighQty_9.setString("17807099");
    noSides_0_0.set(DisplayHighQty_9);
    DisplayInstruction_9.insert(DisplayHighQty_9.getString());
    FIX::DisplayLowQty DisplayLowQty_9;
    DisplayLowQty_9.setString("3250885");
    noSides_0_0.set(DisplayLowQty_9);
    DisplayInstruction_9.insert(DisplayLowQty_9.getString());
    FIX::DisplayMethod DisplayMethod_9('1');
    noSides_0_0.set(DisplayMethod_9);
    DisplayInstruction_9.insert(DisplayMethod_9.getString());
    FIX::DisplayMinIncr DisplayMinIncr_9;
    DisplayMinIncr_9.setString("20879380");
    noSides_0_0.set(DisplayMinIncr_9);
    DisplayInstruction_9.insert(DisplayMinIncr_9.getString());
    FIX::DisplayQty DisplayQty_9;
    DisplayQty_9.setString("16328048");
    noSides_0_0.set(DisplayQty_9);
    DisplayInstruction_9.insert(DisplayQty_9.getString());
    FIX::DisplayWhen DisplayWhen_9('2');
    noSides_0_0.set(DisplayWhen_9);
    DisplayInstruction_9.insert(DisplayWhen_9.getString());
    FIX::RefreshQty RefreshQty_9;
    RefreshQty_9.setString("8346938");
    noSides_0_0.set(RefreshQty_9);
    DisplayInstruction_9.insert(RefreshQty_9.getString());
    FIX::SecondaryDisplayQty SecondaryDisplayQty_9;
    SecondaryDisplayQty_9.setString("8007673");
    noSides_0_0.set(SecondaryDisplayQty_9);
    DisplayInstruction_9.insert(SecondaryDisplayQty_9.getString());
    all_values.push_back(DisplayInstruction_9);

    // OrderQtyData
    multiset<string> OrderQtyData_25;
    FIX::CashOrderQty CashOrderQty_25;
    CashOrderQty_25.setString("2978517");
    noSides_0_0.set(CashOrderQty_25);
    OrderQtyData_25.insert(CashOrderQty_25.getString());
    FIX::OrderPercent OrderPercent_25;
    OrderPercent_25.setString("18.920000");
    noSides_0_0.set(OrderPercent_25);
    OrderQtyData_25.insert(OrderPercent_25.getString());
    FIX::OrderQty OrderQty_33;
    OrderQty_33.setString("9133886");
    noSides_0_0.set(OrderQty_33);
    OrderQtyData_25.insert(OrderQty_33.getString());
    FIX::RoundingDirection RoundingDirection_25('1');
    noSides_0_0.set(RoundingDirection_25);
    OrderQtyData_25.insert(RoundingDirection_25.getString());
    FIX::RoundingModulus RoundingModulus_25;
    RoundingModulus_25.setString("6704087");
    noSides_0_0.set(RoundingModulus_25);
    OrderQtyData_25.insert(RoundingModulus_25.getString());
    all_values.push_back(OrderQtyData_25);

    // TrdAllocGrp
    // Group TrdAllocGrp.NoAllocs
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs noAllocs_0_1_0;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_3;
      FIX::AllocAccount AllocAccount_37("STRING_433015041");
      noAllocs_0_1_0.set(AllocAccount_37);
      TrdAllocGrp_NoAllocs_3.insert(AllocAccount_37.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_37(165686799);
      noAllocs_0_1_0.set(AllocAcctIDSource_37);
      TrdAllocGrp_NoAllocs_3.insert(AllocAcctIDSource_37.getString());
      FIX::AllocClearingFeeIndicator AllocClearingFeeIndicator_3("STRING_2029903668");
      noAllocs_0_1_0.set(AllocClearingFeeIndicator_3);
      TrdAllocGrp_NoAllocs_3.insert(AllocClearingFeeIndicator_3.getString());
      FIX::AllocCustomerCapacity AllocCustomerCapacity_11("STRING_213791274");
      noAllocs_0_1_0.set(AllocCustomerCapacity_11);
      TrdAllocGrp_NoAllocs_3.insert(AllocCustomerCapacity_11.getString());
      FIX::AllocMethod AllocMethod_8(1);
      noAllocs_0_1_0.set(AllocMethod_8);
      TrdAllocGrp_NoAllocs_3.insert(AllocMethod_8.getString());
      FIX::AllocQty AllocQty_35;
      AllocQty_35.setString("7004882");
      noAllocs_0_1_0.set(AllocQty_35);
      TrdAllocGrp_NoAllocs_3.insert(AllocQty_35.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_31("JPY");
      noAllocs_0_1_0.set(AllocSettlCurrency_31);
      TrdAllocGrp_NoAllocs_3.insert(AllocSettlCurrency_31.getString());
      FIX::IndividualAllocID IndividualAllocID_36("STRING_900500017");
      noAllocs_0_1_0.set(IndividualAllocID_36);
      TrdAllocGrp_NoAllocs_3.insert(IndividualAllocID_36.getString());
      FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_11("STRING_2040077453");
      noAllocs_0_1_0.set(SecondaryIndividualAllocID_11);
      TrdAllocGrp_NoAllocs_3.insert(SecondaryIndividualAllocID_11.getString());
      all_values.push_back(TrdAllocGrp_NoAllocs_3);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_42;
        FIX::Nested2PartyID Nested2PartyID_42("STRING_996329297");
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyID_42);
        NestedParties2_NoNested2PartyIDs_42.insert(Nested2PartyID_42.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_42('9');
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyIDSource_42);
        NestedParties2_NoNested2PartyIDs_42.insert(Nested2PartyIDSource_42.getString());
        FIX::Nested2PartyRole Nested2PartyRole_42(257730613);
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyRole_42);
        NestedParties2_NoNested2PartyIDs_42.insert(Nested2PartyRole_42.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_42);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_88;
          FIX::Nested2PartySubID Nested2PartySubID_88("STRING_1943620313");
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubID_88);
          NstdPtys2SubGrp_NoNested2PartySubIDs_88.insert(Nested2PartySubID_88.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_88(1862449037);
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubIDType_88);
          NstdPtys2SubGrp_NoNested2PartySubIDs_88.insert(Nested2PartySubIDType_88.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_88);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        noAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      noSides_0_0.addGroup(noAllocs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs noAllocs_0_1_1;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_4;
      FIX::AllocAccount AllocAccount_38("STRING_1080632217");
      noAllocs_0_1_1.set(AllocAccount_38);
      TrdAllocGrp_NoAllocs_4.insert(AllocAccount_38.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_38(121225198);
      noAllocs_0_1_1.set(AllocAcctIDSource_38);
      TrdAllocGrp_NoAllocs_4.insert(AllocAcctIDSource_38.getString());
      FIX::AllocClearingFeeIndicator AllocClearingFeeIndicator_4("STRING_33614277");
      noAllocs_0_1_1.set(AllocClearingFeeIndicator_4);
      TrdAllocGrp_NoAllocs_4.insert(AllocClearingFeeIndicator_4.getString());
      FIX::AllocCustomerCapacity AllocCustomerCapacity_12("STRING_1021086665");
      noAllocs_0_1_1.set(AllocCustomerCapacity_12);
      TrdAllocGrp_NoAllocs_4.insert(AllocCustomerCapacity_12.getString());
      FIX::AllocMethod AllocMethod_9(1);
      noAllocs_0_1_1.set(AllocMethod_9);
      TrdAllocGrp_NoAllocs_4.insert(AllocMethod_9.getString());
      FIX::AllocQty AllocQty_36;
      AllocQty_36.setString("18033724");
      noAllocs_0_1_1.set(AllocQty_36);
      TrdAllocGrp_NoAllocs_4.insert(AllocQty_36.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_32("JPY");
      noAllocs_0_1_1.set(AllocSettlCurrency_32);
      TrdAllocGrp_NoAllocs_4.insert(AllocSettlCurrency_32.getString());
      FIX::IndividualAllocID IndividualAllocID_37("STRING_2101224230");
      noAllocs_0_1_1.set(IndividualAllocID_37);
      TrdAllocGrp_NoAllocs_4.insert(IndividualAllocID_37.getString());
      FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_12("STRING_393528756");
      noAllocs_0_1_1.set(SecondaryIndividualAllocID_12);
      TrdAllocGrp_NoAllocs_4.insert(SecondaryIndividualAllocID_12.getString());
      all_values.push_back(TrdAllocGrp_NoAllocs_4);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_43;
        FIX::Nested2PartyID Nested2PartyID_43("STRING_1976321308");
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyID_43);
        NestedParties2_NoNested2PartyIDs_43.insert(Nested2PartyID_43.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_43('1');
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyIDSource_43);
        NestedParties2_NoNested2PartyIDs_43.insert(Nested2PartyIDSource_43.getString());
        FIX::Nested2PartyRole Nested2PartyRole_43(2143138875);
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyRole_43);
        NestedParties2_NoNested2PartyIDs_43.insert(Nested2PartyRole_43.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_43);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_89;
          FIX::Nested2PartySubID Nested2PartySubID_89("STRING_1229624298");
          noNested2PartySubIDs_0_1_0_3_0.set(Nested2PartySubID_89);
          NstdPtys2SubGrp_NoNested2PartySubIDs_89.insert(Nested2PartySubID_89.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_89(2025558895);
          noNested2PartySubIDs_0_1_0_3_0.set(Nested2PartySubIDType_89);
          NstdPtys2SubGrp_NoNested2PartySubIDs_89.insert(Nested2PartySubIDType_89.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_89);

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_0);
        }
        noAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_44;
        FIX::Nested2PartyID Nested2PartyID_44("STRING_475643976");
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyID_44);
        NestedParties2_NoNested2PartyIDs_44.insert(Nested2PartyID_44.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_44('5');
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyIDSource_44);
        NestedParties2_NoNested2PartyIDs_44.insert(Nested2PartyIDSource_44.getString());
        FIX::Nested2PartyRole Nested2PartyRole_44(578563489);
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyRole_44);
        NestedParties2_NoNested2PartyIDs_44.insert(Nested2PartyRole_44.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_44);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_90;
          FIX::Nested2PartySubID Nested2PartySubID_90("STRING_2107944972");
          noNested2PartySubIDs_0_1_1_3_0.set(Nested2PartySubID_90);
          NstdPtys2SubGrp_NoNested2PartySubIDs_90.insert(Nested2PartySubID_90.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_90(1479063506);
          noNested2PartySubIDs_0_1_1_3_0.set(Nested2PartySubIDType_90);
          NstdPtys2SubGrp_NoNested2PartySubIDs_90.insert(Nested2PartySubIDType_90.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_90);

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_0);
        }
        noAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_1);
      }
      noSides_0_0.addGroup(noAllocs_0_1_1);
    }
    msg.addGroup(noSides_0_0);
  }
  // TrdInstrmtLegGrp
  // Group TrdInstrmtLegGrp.NoLegs
  {
    FIX50SP2::TradeCaptureReportAck::NoLegs noLegs_0_0;
    // TrdInstrmtLegGrp.NoLegs
    multiset<string> TrdInstrmtLegGrp_NoLegs_3;
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_6;
    LegCalculatedCcyLastQty_6.setString("1941182");
    noLegs_0_0.set(LegCalculatedCcyLastQty_6);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegCalculatedCcyLastQty_6.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_11(327909155);
    noLegs_0_0.set(LegCoveredOrUncovered_11);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegCoveredOrUncovered_11.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_11;
    LegCurrencyRatio_11.setString("11478291");
    noLegs_0_0.set(LegCurrencyRatio_11);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegCurrencyRatio_11.getString());
    FIX::LegDividendYield LegDividendYield_11;
    LegDividendYield_11.setString("88.150000");
    noLegs_0_0.set(LegDividendYield_11);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegDividendYield_11.getString());
    FIX::LegExecInst LegExecInst_11("MULTIPLECHARVALUE_1775315087");
    noLegs_0_0.set(LegExecInst_11);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegExecInst_11.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_6;
    LegGrossTradeAmt_6.setString("9439657");
    noLegs_0_0.set(LegGrossTradeAmt_6);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegGrossTradeAmt_6.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_6;
    LegLastForwardPoints_6.setString("1668142");
    noLegs_0_0.set(LegLastForwardPoints_6);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegLastForwardPoints_6.getString());
    FIX::LegLastPx LegLastPx_6;
    LegLastPx_6.setString("7084636");
    noLegs_0_0.set(LegLastPx_6);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegLastPx_6.getString());
    FIX::LegLastQty LegLastQty_6;
    LegLastQty_6.setString("10651909");
    noLegs_0_0.set(LegLastQty_6);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegLastQty_6.getString());
    FIX::LegNumber LegNumber_3(200428481);
    noLegs_0_0.set(LegNumber_3);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegNumber_3.getString());
    FIX::LegPositionEffect LegPositionEffect_11('1');
    noLegs_0_0.set(LegPositionEffect_11);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegPositionEffect_11.getString());
    FIX::LegQty LegQty_26;
    LegQty_26.setString("6717373");
    noLegs_0_0.set(LegQty_26);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegQty_26.getString());
    FIX::LegRefID LegRefID_24("STRING_2003800974");
    noLegs_0_0.set(LegRefID_24);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegRefID_24.getString());
    FIX::LegReportID LegReportID_3("STRING_1437847185");
    noLegs_0_0.set(LegReportID_3);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegReportID_3.getString());
    FIX::LegSettlCurrency LegSettlCurrency_11("USD");
    noLegs_0_0.set(LegSettlCurrency_11);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegSettlCurrency_11.getString());
    FIX::LegSettlDate LegSettlDate_26("LOCALMKTDATE_1831375941");
    noLegs_0_0.set(LegSettlDate_26);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegSettlDate_26.getString());
    FIX::LegSettlType LegSettlType_31('2');
    noLegs_0_0.set(LegSettlType_31);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegSettlType_31.getString());
    FIX::LegSwapType LegSwapType_31(2);
    noLegs_0_0.set(LegSwapType_31);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegSwapType_31.getString());
    FIX::LegVolatility LegVolatility_11;
    LegVolatility_11.setString("7478297");
    noLegs_0_0.set(LegVolatility_11);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegVolatility_11.getString());
    all_values.push_back(TrdInstrmtLegGrp_NoLegs_3);

    // InstrumentLeg
    multiset<string> InstrumentLeg_136;
    FIX::EncodedLegIssuer EncodedLegIssuer_136("DATA_247925143");
    noLegs_0_0.set(EncodedLegIssuer_136);
    InstrumentLeg_136.insert(EncodedLegIssuer_136.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_136(2048231919);
    noLegs_0_0.set(EncodedLegIssuerLen_136);
    InstrumentLeg_136.insert(EncodedLegIssuerLen_136.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_136("DATA_1977454090");
    noLegs_0_0.set(EncodedLegSecurityDesc_136);
    InstrumentLeg_136.insert(EncodedLegSecurityDesc_136.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_136(126000391);
    noLegs_0_0.set(EncodedLegSecurityDescLen_136);
    InstrumentLeg_136.insert(EncodedLegSecurityDescLen_136.getString());
    FIX::LegCFICode LegCFICode_136("STRING_376392247");
    noLegs_0_0.set(LegCFICode_136);
    InstrumentLeg_136.insert(LegCFICode_136.getString());
    FIX::LegContractMultiplier LegContractMultiplier_136;
    LegContractMultiplier_136.setString("3592072");
    noLegs_0_0.set(LegContractMultiplier_136);
    InstrumentLeg_136.insert(LegContractMultiplier_136.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_136(704563880);
    noLegs_0_0.set(LegContractMultiplierUnit_136);
    InstrumentLeg_136.insert(LegContractMultiplierUnit_136.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_136("MONTHYEAR_691795117");
    noLegs_0_0.set(LegContractSettlMonth_136);
    InstrumentLeg_136.insert(LegContractSettlMonth_136.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_136("COUNTRY_319668596");
    noLegs_0_0.set(LegCountryOfIssue_136);
    InstrumentLeg_136.insert(LegCountryOfIssue_136.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_136("LOCALMKTDATE_36143738");
    noLegs_0_0.set(LegCouponPaymentDate_136);
    InstrumentLeg_136.insert(LegCouponPaymentDate_136.getString());
    FIX::LegCouponRate LegCouponRate_136;
    LegCouponRate_136.setString("17.920000");
    noLegs_0_0.set(LegCouponRate_136);
    InstrumentLeg_136.insert(LegCouponRate_136.getString());
    FIX::LegCreditRating LegCreditRating_136("STRING_513786798");
    noLegs_0_0.set(LegCreditRating_136);
    InstrumentLeg_136.insert(LegCreditRating_136.getString());
    FIX::LegCurrency LegCurrency_136("JPY");
    noLegs_0_0.set(LegCurrency_136);
    InstrumentLeg_136.insert(LegCurrency_136.getString());
    FIX::LegDatedDate LegDatedDate_136("LOCALMKTDATE_965635614");
    noLegs_0_0.set(LegDatedDate_136);
    InstrumentLeg_136.insert(LegDatedDate_136.getString());
    FIX::LegExerciseStyle LegExerciseStyle_136(2139367981);
    noLegs_0_0.set(LegExerciseStyle_136);
    InstrumentLeg_136.insert(LegExerciseStyle_136.getString());
    FIX::LegFactor LegFactor_136;
    LegFactor_136.setString("8441030");
    noLegs_0_0.set(LegFactor_136);
    InstrumentLeg_136.insert(LegFactor_136.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_136(1132449818);
    noLegs_0_0.set(LegFlowScheduleType_136);
    InstrumentLeg_136.insert(LegFlowScheduleType_136.getString());
    FIX::LegInstrRegistry LegInstrRegistry_136("STRING_700347990");
    noLegs_0_0.set(LegInstrRegistry_136);
    InstrumentLeg_136.insert(LegInstrRegistry_136.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_136("LOCALMKTDATE_1909293990");
    noLegs_0_0.set(LegInterestAccrualDate_136);
    InstrumentLeg_136.insert(LegInterestAccrualDate_136.getString());
    FIX::LegIssueDate LegIssueDate_136("LOCALMKTDATE_1332878300");
    noLegs_0_0.set(LegIssueDate_136);
    InstrumentLeg_136.insert(LegIssueDate_136.getString());
    FIX::LegIssuer LegIssuer_136("STRING_282414663");
    noLegs_0_0.set(LegIssuer_136);
    InstrumentLeg_136.insert(LegIssuer_136.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_136("STRING_433547701");
    noLegs_0_0.set(LegLocaleOfIssue_136);
    InstrumentLeg_136.insert(LegLocaleOfIssue_136.getString());
    FIX::LegMaturityDate LegMaturityDate_136("LOCALMKTDATE_1189195626");
    noLegs_0_0.set(LegMaturityDate_136);
    InstrumentLeg_136.insert(LegMaturityDate_136.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_136("MONTHYEAR_1720261849");
    noLegs_0_0.set(LegMaturityMonthYear_136);
    InstrumentLeg_136.insert(LegMaturityMonthYear_136.getString());
    FIX::LegMaturityTime LegMaturityTime_136("TZTIMEONLY_1512598820");
    noLegs_0_0.set(LegMaturityTime_136);
    InstrumentLeg_136.insert(LegMaturityTime_136.getString());
    FIX::LegOptAttribute LegOptAttribute_136('9');
    noLegs_0_0.set(LegOptAttribute_136);
    InstrumentLeg_136.insert(LegOptAttribute_136.getString());
    FIX::LegOptionRatio LegOptionRatio_136;
    LegOptionRatio_136.setString("14041541");
    noLegs_0_0.set(LegOptionRatio_136);
    InstrumentLeg_136.insert(LegOptionRatio_136.getString());
    FIX::LegPool LegPool_136("STRING_1764868737");
    noLegs_0_0.set(LegPool_136);
    InstrumentLeg_136.insert(LegPool_136.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_136("STRING_638149103");
    noLegs_0_0.set(LegPriceUnitOfMeasure_136);
    InstrumentLeg_136.insert(LegPriceUnitOfMeasure_136.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_136;
    LegPriceUnitOfMeasureQty_136.setString("45002");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_136);
    InstrumentLeg_136.insert(LegPriceUnitOfMeasureQty_136.getString());
    FIX::LegProduct LegProduct_136(2012793880);
    noLegs_0_0.set(LegProduct_136);
    InstrumentLeg_136.insert(LegProduct_136.getString());
    FIX::LegPutOrCall LegPutOrCall_136(538897374);
    noLegs_0_0.set(LegPutOrCall_136);
    InstrumentLeg_136.insert(LegPutOrCall_136.getString());
    FIX::LegRatioQty LegRatioQty_136;
    LegRatioQty_136.setString("19819543");
    noLegs_0_0.set(LegRatioQty_136);
    InstrumentLeg_136.insert(LegRatioQty_136.getString());
    FIX::LegRedemptionDate LegRedemptionDate_136("LOCALMKTDATE_2138794271");
    noLegs_0_0.set(LegRedemptionDate_136);
    InstrumentLeg_136.insert(LegRedemptionDate_136.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_136("STRING_915289621");
    noLegs_0_0.set(LegRepoCollateralSecurityType_136);
    InstrumentLeg_136.insert(LegRepoCollateralSecurityType_136.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_136;
    LegRepurchaseRate_136.setString("80.010000");
    noLegs_0_0.set(LegRepurchaseRate_136);
    InstrumentLeg_136.insert(LegRepurchaseRate_136.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_136(695874503);
    noLegs_0_0.set(LegRepurchaseTerm_136);
    InstrumentLeg_136.insert(LegRepurchaseTerm_136.getString());
    FIX::LegSecurityDesc LegSecurityDesc_136("STRING_1607084738");
    noLegs_0_0.set(LegSecurityDesc_136);
    InstrumentLeg_136.insert(LegSecurityDesc_136.getString());
    FIX::LegSecurityExchange LegSecurityExchange_136("EXCHANGE_513346597");
    noLegs_0_0.set(LegSecurityExchange_136);
    InstrumentLeg_136.insert(LegSecurityExchange_136.getString());
    FIX::LegSecurityID LegSecurityID_136("STRING_732018242");
    noLegs_0_0.set(LegSecurityID_136);
    InstrumentLeg_136.insert(LegSecurityID_136.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_136("STRING_359392883");
    noLegs_0_0.set(LegSecurityIDSource_136);
    InstrumentLeg_136.insert(LegSecurityIDSource_136.getString());
    FIX::LegSecuritySubType LegSecuritySubType_136("STRING_1027133396");
    noLegs_0_0.set(LegSecuritySubType_136);
    InstrumentLeg_136.insert(LegSecuritySubType_136.getString());
    FIX::LegSecurityType LegSecurityType_136("STRING_1096071136");
    noLegs_0_0.set(LegSecurityType_136);
    InstrumentLeg_136.insert(LegSecurityType_136.getString());
    FIX::LegSide LegSide_136('2');
    noLegs_0_0.set(LegSide_136);
    InstrumentLeg_136.insert(LegSide_136.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_136("STRING_1992769010");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_136);
    InstrumentLeg_136.insert(LegStateOrProvinceOfIssue_136.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_136("USD");
    noLegs_0_0.set(LegStrikeCurrency_136);
    InstrumentLeg_136.insert(LegStrikeCurrency_136.getString());
    FIX::LegStrikePrice LegStrikePrice_136;
    LegStrikePrice_136.setString("9777351");
    noLegs_0_0.set(LegStrikePrice_136);
    InstrumentLeg_136.insert(LegStrikePrice_136.getString());
    FIX::LegSymbol LegSymbol_136("STRING_1788303459");
    noLegs_0_0.set(LegSymbol_136);
    InstrumentLeg_136.insert(LegSymbol_136.getString());
    FIX::LegSymbolSfx LegSymbolSfx_136("STRING_865443496");
    noLegs_0_0.set(LegSymbolSfx_136);
    InstrumentLeg_136.insert(LegSymbolSfx_136.getString());
    FIX::LegTimeUnit LegTimeUnit_136("STRING_163129832");
    noLegs_0_0.set(LegTimeUnit_136);
    InstrumentLeg_136.insert(LegTimeUnit_136.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_136("STRING_2070718123");
    noLegs_0_0.set(LegUnitOfMeasure_136);
    InstrumentLeg_136.insert(LegUnitOfMeasure_136.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_136;
    LegUnitOfMeasureQty_136.setString("12989911");
    noLegs_0_0.set(LegUnitOfMeasureQty_136);
    InstrumentLeg_136.insert(LegUnitOfMeasureQty_136.getString());
    all_values.push_back(InstrumentLeg_136);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_275;
      FIX::LegSecurityAltID LegSecurityAltID_275("STRING_1643496324");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_275);
      LegSecAltIDGrp_NoLegSecurityAltID_275.insert(LegSecurityAltID_275.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_275("STRING_664106370");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_275);
      LegSecAltIDGrp_NoLegSecurityAltID_275.insert(LegSecurityAltIDSource_275.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_275);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_276;
      FIX::LegSecurityAltID LegSecurityAltID_276("STRING_204095345");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_276);
      LegSecAltIDGrp_NoLegSecurityAltID_276.insert(LegSecurityAltID_276.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_276("STRING_900166818");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_276);
      LegSecAltIDGrp_NoLegSecurityAltID_276.insert(LegSecurityAltIDSource_276.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_276);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_277;
      FIX::LegSecurityAltID LegSecurityAltID_277("STRING_281491459");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_277);
      LegSecAltIDGrp_NoLegSecurityAltID_277.insert(LegSecurityAltID_277.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_277("STRING_842244448");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_277);
      LegSecAltIDGrp_NoLegSecurityAltID_277.insert(LegSecurityAltIDSource_277.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_277);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_62;
      FIX::LegStipulationType LegStipulationType_62("STRING_146801692");
      noLegStipulations_0_1_0.set(LegStipulationType_62);
      LegStipulations_NoLegStipulations_62.insert(LegStipulationType_62.getString());
      FIX::LegStipulationValue LegStipulationValue_62("STRING_1381141823");
      noLegStipulations_0_1_0.set(LegStipulationValue_62);
      LegStipulations_NoLegStipulations_62.insert(LegStipulationValue_62.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_62);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_63;
      FIX::LegStipulationType LegStipulationType_63("STRING_739137835");
      noLegStipulations_0_1_1.set(LegStipulationType_63);
      LegStipulations_NoLegStipulations_63.insert(LegStipulationType_63.getString());
      FIX::LegStipulationValue LegStipulationValue_63("STRING_138112315");
      noLegStipulations_0_1_1.set(LegStipulationValue_63);
      LegStipulations_NoLegStipulations_63.insert(LegStipulationValue_63.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_63);

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegStipulations noLegStipulations_0_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_64;
      FIX::LegStipulationType LegStipulationType_64("STRING_148947796");
      noLegStipulations_0_1_2.set(LegStipulationType_64);
      LegStipulations_NoLegStipulations_64.insert(LegStipulationType_64.getString());
      FIX::LegStipulationValue LegStipulationValue_64("STRING_932815836");
      noLegStipulations_0_1_2.set(LegStipulationValue_64);
      LegStipulations_NoLegStipulations_64.insert(LegStipulationValue_64.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_64);

      noLegs_0_0.addGroup(noLegStipulations_0_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_136;
      FIX::NestedPartyID NestedPartyID_136("STRING_1756032535");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_136);
      NestedParties_NoNestedPartyIDs_136.insert(NestedPartyID_136.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_136('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_136);
      NestedParties_NoNestedPartyIDs_136.insert(NestedPartyIDSource_136.getString());
      FIX::NestedPartyRole NestedPartyRole_136(1566005061);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_136);
      NestedParties_NoNestedPartyIDs_136.insert(NestedPartyRole_136.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_136);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_274;
        FIX::NestedPartySubID NestedPartySubID_274("STRING_325812182");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_274);
        NstdPtysSubGrp_NoNestedPartySubIDs_274.insert(NestedPartySubID_274.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_274(514592549);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_274);
        NstdPtysSubGrp_NoNestedPartySubIDs_274.insert(NestedPartySubIDType_274.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_274);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_137;
      FIX::NestedPartyID NestedPartyID_137("STRING_227471903");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_137);
      NestedParties_NoNestedPartyIDs_137.insert(NestedPartyID_137.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_137('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_137);
      NestedParties_NoNestedPartyIDs_137.insert(NestedPartyIDSource_137.getString());
      FIX::NestedPartyRole NestedPartyRole_137(1602548018);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_137);
      NestedParties_NoNestedPartyIDs_137.insert(NestedPartyRole_137.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_137);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_275;
        FIX::NestedPartySubID NestedPartySubID_275("STRING_1148832724");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_275);
        NstdPtysSubGrp_NoNestedPartySubIDs_275.insert(NestedPartySubID_275.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_275(1243367830);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_275);
        NstdPtysSubGrp_NoNestedPartySubIDs_275.insert(NestedPartySubIDType_275.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_275);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_276;
        FIX::NestedPartySubID NestedPartySubID_276("STRING_49064905");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_276);
        NstdPtysSubGrp_NoNestedPartySubIDs_276.insert(NestedPartySubID_276.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_276(1311962557);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_276);
        NstdPtysSubGrp_NoNestedPartySubIDs_276.insert(NestedPartySubIDType_276.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_276);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_277;
        FIX::NestedPartySubID NestedPartySubID_277("STRING_1166602305");
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubID_277);
        NstdPtysSubGrp_NoNestedPartySubIDs_277.insert(NestedPartySubID_277.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_277(1348056103);
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubIDType_277);
        NstdPtysSubGrp_NoNestedPartySubIDs_277.insert(NestedPartySubIDType_277.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_277);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    // TradeCapLegUnderlyingsGrp
    // Group TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_0_1_0;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_5;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_5("STRING_662614981");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegCFICode_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegCFICode_5.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_5("LOCALMKTDATE_2012162474");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityDate_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegMaturityDate_5.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_5("MONTHYEAR_720899712");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityMonthYear_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegMaturityMonthYear_5.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_5("TZTIMEONLY_1562781799");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityTime_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegMaturityTime_5.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_5('1');
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegOptAttribute_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegOptAttribute_5.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_5(1563144161);
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegPutOrCall_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegPutOrCall_5.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_5("STRING_319965257");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityDesc_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSecurityDesc_5.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_5("STRING_292971977");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityExchange_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSecurityExchange_5.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_5("STRING_796802336");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityID_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSecurityID_5.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_5("STRING_1059103092");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityIDSource_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSecurityIDSource_5.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_5("STRING_431084293");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecuritySubType_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSecuritySubType_5.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_5("STRING_945750132");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityType_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSecurityType_5.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_5;
      UnderlyingLegStrikePrice_5.setString("19919189");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegStrikePrice_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegStrikePrice_5.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_5("STRING_1265071112");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSymbol_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSymbol_5.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_5("STRING_554299019");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSymbolSfx_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSymbolSfx_5.getString());
      all_values.push_back(UnderlyingLegInstrument_5);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_12;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_12("STRING_683592525");
        noUnderlyingLegSecurityAltID_0_0_2_0.set(UnderlyingLegSecurityAltID_12);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_12.insert(UnderlyingLegSecurityAltID_12.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_12("STRING_522240789");
        noUnderlyingLegSecurityAltID_0_0_2_0.set(UnderlyingLegSecurityAltIDSource_12);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_12.insert(UnderlyingLegSecurityAltIDSource_12.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_12);

        noOfLegUnderlyings_0_1_0.addGroup(noUnderlyingLegSecurityAltID_0_0_2_0);
      }
      noLegs_0_0.addGroup(noOfLegUnderlyings_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_0_1_1;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_6;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_6("STRING_1616409896");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegCFICode_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegCFICode_6.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_6("LOCALMKTDATE_1198185074");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegMaturityDate_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegMaturityDate_6.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_6("MONTHYEAR_749712692");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegMaturityMonthYear_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegMaturityMonthYear_6.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_6("TZTIMEONLY_1787507440");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegMaturityTime_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegMaturityTime_6.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_6('6');
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegOptAttribute_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegOptAttribute_6.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_6(2080817749);
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegPutOrCall_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegPutOrCall_6.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_6("STRING_788856517");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecurityDesc_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSecurityDesc_6.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_6("STRING_1896617274");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecurityExchange_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSecurityExchange_6.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_6("STRING_2129882655");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecurityID_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSecurityID_6.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_6("STRING_2100819074");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecurityIDSource_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSecurityIDSource_6.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_6("STRING_915735931");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecuritySubType_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSecuritySubType_6.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_6("STRING_1330455110");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecurityType_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSecurityType_6.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_6;
      UnderlyingLegStrikePrice_6.setString("4701397");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegStrikePrice_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegStrikePrice_6.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_6("STRING_1578350912");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSymbol_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSymbol_6.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_6("STRING_1195133936");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSymbolSfx_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSymbolSfx_6.getString());
      all_values.push_back(UnderlyingLegInstrument_6);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_1_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_13;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_13("STRING_993649064");
        noUnderlyingLegSecurityAltID_0_1_2_0.set(UnderlyingLegSecurityAltID_13);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_13.insert(UnderlyingLegSecurityAltID_13.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_13("STRING_1341304222");
        noUnderlyingLegSecurityAltID_0_1_2_0.set(UnderlyingLegSecurityAltIDSource_13);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_13.insert(UnderlyingLegSecurityAltIDSource_13.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_13);

        noOfLegUnderlyings_0_1_1.addGroup(noUnderlyingLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_1_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_14;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_14("STRING_606700019");
        noUnderlyingLegSecurityAltID_0_1_2_1.set(UnderlyingLegSecurityAltID_14);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_14.insert(UnderlyingLegSecurityAltID_14.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_14("STRING_1313614321");
        noUnderlyingLegSecurityAltID_0_1_2_1.set(UnderlyingLegSecurityAltIDSource_14);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_14.insert(UnderlyingLegSecurityAltIDSource_14.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_14);

        noOfLegUnderlyings_0_1_1.addGroup(noUnderlyingLegSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_1_2_2;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_15;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_15("STRING_1634276199");
        noUnderlyingLegSecurityAltID_0_1_2_2.set(UnderlyingLegSecurityAltID_15);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_15.insert(UnderlyingLegSecurityAltID_15.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_15("STRING_1403502355");
        noUnderlyingLegSecurityAltID_0_1_2_2.set(UnderlyingLegSecurityAltIDSource_15);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_15.insert(UnderlyingLegSecurityAltIDSource_15.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_15);

        noOfLegUnderlyings_0_1_1.addGroup(noUnderlyingLegSecurityAltID_0_1_2_2);
      }
      noLegs_0_0.addGroup(noOfLegUnderlyings_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_22;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_22("MULTIPLESTRINGVALUE_E.W");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_22);
    TrdRegTimestamps_NoTrdRegTimestamps_22.insert(DeskOrderHandlingInst_22.getString());
    FIX::DeskType DeskType_22("STRING_PT");
    noTrdRegTimestamps_0_0.set(DeskType_22);
    TrdRegTimestamps_NoTrdRegTimestamps_22.insert(DeskType_22.getString());
    FIX::DeskTypeSource DeskTypeSource_22(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_22);
    TrdRegTimestamps_NoTrdRegTimestamps_22.insert(DeskTypeSource_22.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_22(FIX::UTCTIMESTAMP(11, 40, 1, 8, 5, 2013));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_22);
    TrdRegTimestamps_NoTrdRegTimestamps_22.insert(TrdRegTimestamp_22.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_22("STRING_2028021341");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_22);
    TrdRegTimestamps_NoTrdRegTimestamps_22.insert(TrdRegTimestampOrigin_22.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_22(5);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_22);
    TrdRegTimestamps_NoTrdRegTimestamps_22.insert(TrdRegTimestampType_22.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_22);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_23;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_23("MULTIPLESTRINGVALUE_OVD");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_23);
    TrdRegTimestamps_NoTrdRegTimestamps_23.insert(DeskOrderHandlingInst_23.getString());
    FIX::DeskType DeskType_23("STRING_D");
    noTrdRegTimestamps_0_1.set(DeskType_23);
    TrdRegTimestamps_NoTrdRegTimestamps_23.insert(DeskType_23.getString());
    FIX::DeskTypeSource DeskTypeSource_23(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_23);
    TrdRegTimestamps_NoTrdRegTimestamps_23.insert(DeskTypeSource_23.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_23(FIX::UTCTIMESTAMP(17, 44, 2, 4, 10, 2016));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_23);
    TrdRegTimestamps_NoTrdRegTimestamps_23.insert(TrdRegTimestamp_23.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_23("STRING_174376200");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_23);
    TrdRegTimestamps_NoTrdRegTimestamps_23.insert(TrdRegTimestampOrigin_23.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_23(2);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_23);
    TrdRegTimestamps_NoTrdRegTimestamps_23.insert(TrdRegTimestampType_23.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_23);

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_24;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_24("MULTIPLESTRINGVALUE_TS");
    noTrdRegTimestamps_0_2.set(DeskOrderHandlingInst_24);
    TrdRegTimestamps_NoTrdRegTimestamps_24.insert(DeskOrderHandlingInst_24.getString());
    FIX::DeskType DeskType_24("STRING_IN");
    noTrdRegTimestamps_0_2.set(DeskType_24);
    TrdRegTimestamps_NoTrdRegTimestamps_24.insert(DeskType_24.getString());
    FIX::DeskTypeSource DeskTypeSource_24(1);
    noTrdRegTimestamps_0_2.set(DeskTypeSource_24);
    TrdRegTimestamps_NoTrdRegTimestamps_24.insert(DeskTypeSource_24.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_24(FIX::UTCTIMESTAMP(6, 1, 16, 10, 2, 2008));
    noTrdRegTimestamps_0_2.set(TrdRegTimestamp_24);
    TrdRegTimestamps_NoTrdRegTimestamps_24.insert(TrdRegTimestamp_24.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_24("STRING_2103297775");
    noTrdRegTimestamps_0_2.set(TrdRegTimestampOrigin_24);
    TrdRegTimestamps_NoTrdRegTimestamps_24.insert(TrdRegTimestampOrigin_24.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_24(6);
    noTrdRegTimestamps_0_2.set(TrdRegTimestampType_24);
    TrdRegTimestamps_NoTrdRegTimestamps_24.insert(TrdRegTimestampType_24.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_24);

    msg.addGroup(noTrdRegTimestamps_0_2);
  }
  // TrdRepIndicatorsGrp
  // Group TrdRepIndicatorsGrp.NoTrdRepIndicators
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRepIndicators noTrdRepIndicators_0_0;
    // TrdRepIndicatorsGrp.NoTrdRepIndicators
    multiset<string> TrdRepIndicatorsGrp_NoTrdRepIndicators_1;
    FIX::TrdRepIndicator TrdRepIndicator_1(true);
    noTrdRepIndicators_0_0.set(TrdRepIndicator_1);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_1.insert(TrdRepIndicator_1.getString());
    FIX::TrdRepPartyRole TrdRepPartyRole_1(676484820);
    noTrdRepIndicators_0_0.set(TrdRepPartyRole_1);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_1.insert(TrdRepPartyRole_1.getString());
    all_values.push_back(TrdRepIndicatorsGrp_NoTrdRepIndicators_1);

    msg.addGroup(noTrdRepIndicators_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRepIndicators noTrdRepIndicators_0_1;
    // TrdRepIndicatorsGrp.NoTrdRepIndicators
    multiset<string> TrdRepIndicatorsGrp_NoTrdRepIndicators_2;
    FIX::TrdRepIndicator TrdRepIndicator_2(true);
    noTrdRepIndicators_0_1.set(TrdRepIndicator_2);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_2.insert(TrdRepIndicator_2.getString());
    FIX::TrdRepPartyRole TrdRepPartyRole_2(592112868);
    noTrdRepIndicators_0_1.set(TrdRepPartyRole_2);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_2.insert(TrdRepPartyRole_2.getString());
    all_values.push_back(TrdRepIndicatorsGrp_NoTrdRepIndicators_2);

    msg.addGroup(noTrdRepIndicators_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::TradeCaptureReportAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_130;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_130("DATA_484619995");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_130);
    UnderlyingInstrument_130.insert(EncodedUnderlyingIssuer_130.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_130(15120572);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_130);
    UnderlyingInstrument_130.insert(EncodedUnderlyingIssuerLen_130.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_130("DATA_370894308");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_130);
    UnderlyingInstrument_130.insert(EncodedUnderlyingSecurityDesc_130.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_130(1742693313);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_130);
    UnderlyingInstrument_130.insert(EncodedUnderlyingSecurityDescLen_130.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_130;
    UnderlyingAdjustedQuantity_130.setString("13347455");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_130);
    UnderlyingInstrument_130.insert(UnderlyingAdjustedQuantity_130.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_130;
    UnderlyingAllocationPercent_130.setString("51.090000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_130);
    UnderlyingInstrument_130.insert(UnderlyingAllocationPercent_130.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_130;
    UnderlyingAttachmentPoint_130.setString("84.090000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_130);
    UnderlyingInstrument_130.insert(UnderlyingAttachmentPoint_130.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_130("STRING_1422622812");
    noUnderlyings_0_0.set(UnderlyingCFICode_130);
    UnderlyingInstrument_130.insert(UnderlyingCFICode_130.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_130("STRING_1293891021");
    noUnderlyings_0_0.set(UnderlyingCPProgram_130);
    UnderlyingInstrument_130.insert(UnderlyingCPProgram_130.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_130("STRING_340683299");
    noUnderlyings_0_0.set(UnderlyingCPRegType_130);
    UnderlyingInstrument_130.insert(UnderlyingCPRegType_130.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_130;
    UnderlyingCapValue_130.setString("9413673");
    noUnderlyings_0_0.set(UnderlyingCapValue_130);
    UnderlyingInstrument_130.insert(UnderlyingCapValue_130.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_130;
    UnderlyingCashAmount_130.setString("14682672");
    noUnderlyings_0_0.set(UnderlyingCashAmount_130);
    UnderlyingInstrument_130.insert(UnderlyingCashAmount_130.getString());
    FIX::UnderlyingCashType UnderlyingCashType_130("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_130);
    UnderlyingInstrument_130.insert(UnderlyingCashType_130.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_130;
    UnderlyingContractMultiplier_130.setString("14537609");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_130);
    UnderlyingInstrument_130.insert(UnderlyingContractMultiplier_130.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_130(836463996);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_130);
    UnderlyingInstrument_130.insert(UnderlyingContractMultiplierUnit_130.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_130("COUNTRY_250108461");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_130);
    UnderlyingInstrument_130.insert(UnderlyingCountryOfIssue_130.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_130("LOCALMKTDATE_1132285193");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_130);
    UnderlyingInstrument_130.insert(UnderlyingCouponPaymentDate_130.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_130;
    UnderlyingCouponRate_130.setString("69.700000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_130);
    UnderlyingInstrument_130.insert(UnderlyingCouponRate_130.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_130("STRING_837931582");
    noUnderlyings_0_0.set(UnderlyingCreditRating_130);
    UnderlyingInstrument_130.insert(UnderlyingCreditRating_130.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_130("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_130);
    UnderlyingInstrument_130.insert(UnderlyingCurrency_130.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_130;
    UnderlyingCurrentValue_130.setString("16275235");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_130);
    UnderlyingInstrument_130.insert(UnderlyingCurrentValue_130.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_130;
    UnderlyingDetachmentPoint_130.setString("2.950000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_130);
    UnderlyingInstrument_130.insert(UnderlyingDetachmentPoint_130.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_130;
    UnderlyingDirtyPrice_130.setString("5676172");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_130);
    UnderlyingInstrument_130.insert(UnderlyingDirtyPrice_130.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_130;
    UnderlyingEndPrice_130.setString("10256997");
    noUnderlyings_0_0.set(UnderlyingEndPrice_130);
    UnderlyingInstrument_130.insert(UnderlyingEndPrice_130.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_130;
    UnderlyingEndValue_130.setString("1956804");
    noUnderlyings_0_0.set(UnderlyingEndValue_130);
    UnderlyingInstrument_130.insert(UnderlyingEndValue_130.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_130(242488228);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_130);
    UnderlyingInstrument_130.insert(UnderlyingExerciseStyle_130.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_130;
    UnderlyingFXRate_130.setString("17021845");
    noUnderlyings_0_0.set(UnderlyingFXRate_130);
    UnderlyingInstrument_130.insert(UnderlyingFXRate_130.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_130('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_130);
    UnderlyingInstrument_130.insert(UnderlyingFXRateCalc_130.getString());
    FIX::UnderlyingFactor UnderlyingFactor_130;
    UnderlyingFactor_130.setString("8346010");
    noUnderlyings_0_0.set(UnderlyingFactor_130);
    UnderlyingInstrument_130.insert(UnderlyingFactor_130.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_130(111723401);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_130);
    UnderlyingInstrument_130.insert(UnderlyingFlowScheduleType_130.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_130("STRING_695703671");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_130);
    UnderlyingInstrument_130.insert(UnderlyingInstrRegistry_130.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_130("LOCALMKTDATE_849721668");
    noUnderlyings_0_0.set(UnderlyingIssueDate_130);
    UnderlyingInstrument_130.insert(UnderlyingIssueDate_130.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_130("STRING_482617709");
    noUnderlyings_0_0.set(UnderlyingIssuer_130);
    UnderlyingInstrument_130.insert(UnderlyingIssuer_130.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_130("STRING_290913337");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_130);
    UnderlyingInstrument_130.insert(UnderlyingLocaleOfIssue_130.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_130("LOCALMKTDATE_36983571");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_130);
    UnderlyingInstrument_130.insert(UnderlyingMaturityDate_130.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_130("MONTHYEAR_649782819");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_130);
    UnderlyingInstrument_130.insert(UnderlyingMaturityMonthYear_130.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_130("TZTIMEONLY_1097531746");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_130);
    UnderlyingInstrument_130.insert(UnderlyingMaturityTime_130.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_130;
    UnderlyingNotionalPercentageOutstanding_130.setString("63.830000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_130);
    UnderlyingInstrument_130.insert(UnderlyingNotionalPercentageOutstanding_130.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_130('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_130);
    UnderlyingInstrument_130.insert(UnderlyingOptAttribute_130.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_130;
    UnderlyingOriginalNotionalPercentageOutstanding_130.setString("50.450000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_130);
    UnderlyingInstrument_130.insert(UnderlyingOriginalNotionalPercentageOutstanding_130.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_130("STRING_253490074");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_130);
    UnderlyingInstrument_130.insert(UnderlyingPriceUnitOfMeasure_130.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_130;
    UnderlyingPriceUnitOfMeasureQty_130.setString("12644574");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_130);
    UnderlyingInstrument_130.insert(UnderlyingPriceUnitOfMeasureQty_130.getString());
    FIX::UnderlyingProduct UnderlyingProduct_130(356519092);
    noUnderlyings_0_0.set(UnderlyingProduct_130);
    UnderlyingInstrument_130.insert(UnderlyingProduct_130.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_130(1707251004);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_130);
    UnderlyingInstrument_130.insert(UnderlyingPutOrCall_130.getString());
    FIX::UnderlyingPx UnderlyingPx_130;
    UnderlyingPx_130.setString("21009214");
    noUnderlyings_0_0.set(UnderlyingPx_130);
    UnderlyingInstrument_130.insert(UnderlyingPx_130.getString());
    FIX::UnderlyingQty UnderlyingQty_130;
    UnderlyingQty_130.setString("6066275");
    noUnderlyings_0_0.set(UnderlyingQty_130);
    UnderlyingInstrument_130.insert(UnderlyingQty_130.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_130("LOCALMKTDATE_692052549");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_130);
    UnderlyingInstrument_130.insert(UnderlyingRedemptionDate_130.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_130("STRING_1792374733");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_130);
    UnderlyingInstrument_130.insert(UnderlyingRepoCollateralSecurityType_130.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_130;
    UnderlyingRepurchaseRate_130.setString("91.350000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_130);
    UnderlyingInstrument_130.insert(UnderlyingRepurchaseRate_130.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_130(1728095770);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_130);
    UnderlyingInstrument_130.insert(UnderlyingRepurchaseTerm_130.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_130("STRING_256694226");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_130);
    UnderlyingInstrument_130.insert(UnderlyingRestructuringType_130.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_130("STRING_924599031");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_130);
    UnderlyingInstrument_130.insert(UnderlyingSecurityDesc_130.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_130("EXCHANGE_590082418");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_130);
    UnderlyingInstrument_130.insert(UnderlyingSecurityExchange_130.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_130("STRING_824311494");
    noUnderlyings_0_0.set(UnderlyingSecurityID_130);
    UnderlyingInstrument_130.insert(UnderlyingSecurityID_130.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_130("STRING_1950298746");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_130);
    UnderlyingInstrument_130.insert(UnderlyingSecurityIDSource_130.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_130("STRING_785762899");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_130);
    UnderlyingInstrument_130.insert(UnderlyingSecuritySubType_130.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_130("STRING_1066799723");
    noUnderlyings_0_0.set(UnderlyingSecurityType_130);
    UnderlyingInstrument_130.insert(UnderlyingSecurityType_130.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_130("STRING_1504999634");
    noUnderlyings_0_0.set(UnderlyingSeniority_130);
    UnderlyingInstrument_130.insert(UnderlyingSeniority_130.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_130("STRING_996846575");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_130);
    UnderlyingInstrument_130.insert(UnderlyingSettlMethod_130.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_130(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_130);
    UnderlyingInstrument_130.insert(UnderlyingSettlementType_130.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_130;
    UnderlyingStartValue_130.setString("16167230");
    noUnderlyings_0_0.set(UnderlyingStartValue_130);
    UnderlyingInstrument_130.insert(UnderlyingStartValue_130.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_130("STRING_1692550247");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_130);
    UnderlyingInstrument_130.insert(UnderlyingStateOrProvinceOfIssue_130.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_130("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_130);
    UnderlyingInstrument_130.insert(UnderlyingStrikeCurrency_130.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_130;
    UnderlyingStrikePrice_130.setString("19834635");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_130);
    UnderlyingInstrument_130.insert(UnderlyingStrikePrice_130.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_130("STRING_640622411");
    noUnderlyings_0_0.set(UnderlyingSymbol_130);
    UnderlyingInstrument_130.insert(UnderlyingSymbol_130.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_130("STRING_601639916");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_130);
    UnderlyingInstrument_130.insert(UnderlyingSymbolSfx_130.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_130("STRING_933511682");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_130);
    UnderlyingInstrument_130.insert(UnderlyingTimeUnit_130.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_130("STRING_2100228794");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_130);
    UnderlyingInstrument_130.insert(UnderlyingUnitOfMeasure_130.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_130;
    UnderlyingUnitOfMeasureQty_130.setString("3978301");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_130);
    UnderlyingInstrument_130.insert(UnderlyingUnitOfMeasureQty_130.getString());
    all_values.push_back(UnderlyingInstrument_130);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_268;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_268("STRING_206235221");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_268);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_268.insert(UnderlyingSecurityAltID_268.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_268("STRING_1662287523");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_268);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_268.insert(UnderlyingSecurityAltIDSource_268.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_268);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_269;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_269("STRING_580762172");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_269);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_269.insert(UnderlyingSecurityAltID_269.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_269("STRING_1913486225");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_269);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_269.insert(UnderlyingSecurityAltIDSource_269.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_269);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_254;
      FIX::UnderlyingStipType UnderlyingStipType_254("STRING_1187389725");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_254);
      UnderlyingStipulations_NoUnderlyingStips_254.insert(UnderlyingStipType_254.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_254("STRING_458055126");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_254);
      UnderlyingStipulations_NoUnderlyingStips_254.insert(UnderlyingStipValue_254.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_254);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_255;
      FIX::UnderlyingStipType UnderlyingStipType_255("STRING_1260616372");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_255);
      UnderlyingStipulations_NoUnderlyingStips_255.insert(UnderlyingStipType_255.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_255("STRING_484465212");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_255);
      UnderlyingStipulations_NoUnderlyingStips_255.insert(UnderlyingStipValue_255.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_255);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_257;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_257("STRING_1517310598");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_257);
      UndlyInstrumentParties_NoUndlyInstrumentParties_257.insert(UnderlyingInstrumentPartyID_257.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_257('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_257);
      UndlyInstrumentParties_NoUndlyInstrumentParties_257.insert(UnderlyingInstrumentPartyIDSource_257.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_257(628749666);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_257);
      UndlyInstrumentParties_NoUndlyInstrumentParties_257.insert(UnderlyingInstrumentPartyRole_257.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_257);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_519("STRING_1211879342");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_519);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519.insert(UnderlyingInstrumentPartySubID_519.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_519(1414512566);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_519);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519.insert(UnderlyingInstrumentPartySubIDType_519.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_258;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_258("STRING_1260938168");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_258);
      UndlyInstrumentParties_NoUndlyInstrumentParties_258.insert(UnderlyingInstrumentPartyID_258.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_258('5');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_258);
      UndlyInstrumentParties_NoUndlyInstrumentParties_258.insert(UnderlyingInstrumentPartyIDSource_258.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_258(263875493);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_258);
      UndlyInstrumentParties_NoUndlyInstrumentParties_258.insert(UnderlyingInstrumentPartyRole_258.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_258);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_520("STRING_38634716");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_520);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520.insert(UnderlyingInstrumentPartySubID_520.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_520(1956425740);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_520);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520.insert(UnderlyingInstrumentPartySubIDType_520.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_259;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_259("STRING_1618494179");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_259);
      UndlyInstrumentParties_NoUndlyInstrumentParties_259.insert(UnderlyingInstrumentPartyID_259.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_259('2');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_259);
      UndlyInstrumentParties_NoUndlyInstrumentParties_259.insert(UnderlyingInstrumentPartyIDSource_259.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_259(1792405676);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_259);
      UndlyInstrumentParties_NoUndlyInstrumentParties_259.insert(UnderlyingInstrumentPartyRole_259.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_259);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_521("STRING_592131730");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_521);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521.insert(UnderlyingInstrumentPartySubID_521.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_521(578433711);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_521);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521.insert(UnderlyingInstrumentPartySubIDType_521.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_522("STRING_64378089");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_522);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522.insert(UnderlyingInstrumentPartySubID_522.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_522(989961839);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_522);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522.insert(UnderlyingInstrumentPartySubIDType_522.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_523("STRING_802676791");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_523);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523.insert(UnderlyingInstrumentPartySubID_523.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_523(270613310);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_523);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523.insert(UnderlyingInstrumentPartySubIDType_523.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
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
