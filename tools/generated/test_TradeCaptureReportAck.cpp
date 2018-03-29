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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::TradeCaptureReportAck msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReportAck_0;
  FIX::AsOfIndicator AsOfIndicator_1('0');
  msg.set(AsOfIndicator_1);
  TradeCaptureReportAck_0.insert(AsOfIndicator_1.getString());
  FIX::AvgPx AvgPx_8;
  AvgPx_8.setString("3048700");
  msg.set(AvgPx_8);
  TradeCaptureReportAck_0.insert(AvgPx_8.getString());
  FIX::AvgPxIndicator AvgPxIndicator_5(0);
  msg.set(AvgPxIndicator_5);
  TradeCaptureReportAck_0.insert(AvgPxIndicator_5.getString());
  FIX::CalculatedCcyLastQty CalculatedCcyLastQty_2;
  CalculatedCcyLastQty_2.setString("15470634");
  msg.set(CalculatedCcyLastQty_2);
  TradeCaptureReportAck_0.insert(CalculatedCcyLastQty_2.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_26("LOCALMKTDATE_198071804");
  msg.set(ClearingBusinessDate_26);
  TradeCaptureReportAck_0.insert(ClearingBusinessDate_26.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_18("STRING_M");
  msg.set(ClearingFeeIndicator_18);
  TradeCaptureReportAck_0.insert(ClearingFeeIndicator_18.getString());
  FIX::CopyMsgIndicator CopyMsgIndicator_3(false);
  msg.set(CopyMsgIndicator_3);
  TradeCaptureReportAck_0.insert(CopyMsgIndicator_3.getString());
  FIX::Currency Currency_77("CHF");
  msg.set(Currency_77);
  TradeCaptureReportAck_0.insert(Currency_77.getString());
  FIX::EncodedText EncodedText_103("DATA_365213389");
  msg.set(EncodedText_103);
  TradeCaptureReportAck_0.insert(EncodedText_103.getString());
  FIX::EncodedTextLen EncodedTextLen_103(1525934964);
  msg.set(EncodedTextLen_103);
  TradeCaptureReportAck_0.insert(EncodedTextLen_103.getString());
  FIX::ExecID ExecID_25("STRING_2004132682");
  msg.set(ExecID_25);
  TradeCaptureReportAck_0.insert(ExecID_25.getString());
  FIX::ExecRestatementReason ExecRestatementReason_2(10);
  msg.set(ExecRestatementReason_2);
  TradeCaptureReportAck_0.insert(ExecRestatementReason_2.getString());
  FIX::ExecType ExecType_2('9');
  msg.set(ExecType_2);
  TradeCaptureReportAck_0.insert(ExecType_2.getString());
  FIX::FeeMultiplier FeeMultiplier_1;
  FeeMultiplier_1.setString("21268073");
  msg.set(FeeMultiplier_1);
  TradeCaptureReportAck_0.insert(FeeMultiplier_1.getString());
  FIX::FirmTradeID FirmTradeID_7("STRING_876018007");
  msg.set(FirmTradeID_7);
  TradeCaptureReportAck_0.insert(FirmTradeID_7.getString());
  FIX::GrossTradeAmt GrossTradeAmt_6;
  GrossTradeAmt_6.setString("6782304");
  msg.set(GrossTradeAmt_6);
  TradeCaptureReportAck_0.insert(GrossTradeAmt_6.getString());
  FIX::LastForwardPoints LastForwardPoints_2;
  LastForwardPoints_2.setString("17853088");
  msg.set(LastForwardPoints_2);
  TradeCaptureReportAck_0.insert(LastForwardPoints_2.getString());
  FIX::LastMkt LastMkt_7("EXCHANGE_288918445");
  msg.set(LastMkt_7);
  TradeCaptureReportAck_0.insert(LastMkt_7.getString());
  FIX::LastParPx LastParPx_9;
  LastParPx_9.setString("11611786");
  msg.set(LastParPx_9);
  TradeCaptureReportAck_0.insert(LastParPx_9.getString());
  FIX::LastPx LastPx_14;
  LastPx_14.setString("6905849");
  msg.set(LastPx_14);
  TradeCaptureReportAck_0.insert(LastPx_14.getString());
  FIX::LastQty LastQty_10;
  LastQty_10.setString("13836269");
  msg.set(LastQty_10);
  TradeCaptureReportAck_0.insert(LastQty_10.getString());
  FIX::LastSpotRate LastSpotRate_2;
  LastSpotRate_2.setString("4705218");
  msg.set(LastSpotRate_2);
  TradeCaptureReportAck_0.insert(LastSpotRate_2.getString());
  FIX::LastSwapPoints LastSwapPoints_2;
  LastSwapPoints_2.setString("5046352");
  msg.set(LastSwapPoints_2);
  TradeCaptureReportAck_0.insert(LastSwapPoints_2.getString());
  FIX::LastUpdateTime LastUpdateTime_7(FIX::UTCTIMESTAMP(22, 33, 21, 18, 9, 2008));
  msg.set(LastUpdateTime_7);
  TradeCaptureReportAck_0.insert(LastUpdateTime_7.getString());
  FIX::MarketID MarketID_28("EXCHANGE_1577330737");
  msg.set(MarketID_28);
  TradeCaptureReportAck_0.insert(MarketID_28.getString());
  FIX::MarketSegmentID MarketSegmentID_28("STRING_1494196967");
  msg.set(MarketSegmentID_28);
  TradeCaptureReportAck_0.insert(MarketSegmentID_28.getString());
  FIX::MatchStatus MatchStatus_11('2');
  msg.set(MatchStatus_11);
  TradeCaptureReportAck_0.insert(MatchStatus_11.getString());
  FIX::MatchType MatchType_67("STRING_AQ");
  msg.set(MatchType_67);
  TradeCaptureReportAck_0.insert(MatchType_67.getString());
  FIX::MessageEventSource MessageEventSource_5("STRING_1692268771");
  msg.set(MessageEventSource_5);
  TradeCaptureReportAck_0.insert(MessageEventSource_5.getString());
  FIX::MultiLegReportingType MultiLegReportingType_5('2');
  msg.set(MultiLegReportingType_5);
  TradeCaptureReportAck_0.insert(MultiLegReportingType_5.getString());
  FIX::OrigSecondaryTradeID OrigSecondaryTradeID_1("STRING_497531066");
  msg.set(OrigSecondaryTradeID_1);
  TradeCaptureReportAck_0.insert(OrigSecondaryTradeID_1.getString());
  FIX::OrigTradeDate OrigTradeDate_1("LOCALMKTDATE_545090075");
  msg.set(OrigTradeDate_1);
  TradeCaptureReportAck_0.insert(OrigTradeDate_1.getString());
  FIX::OrigTradeHandlingInstr OrigTradeHandlingInstr_1('1');
  msg.set(OrigTradeHandlingInstr_1);
  TradeCaptureReportAck_0.insert(OrigTradeHandlingInstr_1.getString());
  FIX::OrigTradeID OrigTradeID_1("STRING_862744455");
  msg.set(OrigTradeID_1);
  TradeCaptureReportAck_0.insert(OrigTradeID_1.getString());
  FIX::PreviouslyReported PreviouslyReported_4(false);
  msg.set(PreviouslyReported_4);
  TradeCaptureReportAck_0.insert(PreviouslyReported_4.getString());
  FIX::PriceType PriceType_51(1);
  msg.set(PriceType_51);
  TradeCaptureReportAck_0.insert(PriceType_51.getString());
  FIX::PublishTrdIndicator PublishTrdIndicator_1(false);
  msg.set(PublishTrdIndicator_1);
  TradeCaptureReportAck_0.insert(PublishTrdIndicator_1.getString());
  FIX::QtyType QtyType_30(1);
  msg.set(QtyType_30);
  TradeCaptureReportAck_0.insert(QtyType_30.getString());
  FIX::ResponseDestination ResponseDestination_4("STRING_1756425426");
  msg.set(ResponseDestination_4);
  TradeCaptureReportAck_0.insert(ResponseDestination_4.getString());
  FIX::ResponseTransportType ResponseTransportType_4(0);
  msg.set(ResponseTransportType_4);
  TradeCaptureReportAck_0.insert(ResponseTransportType_4.getString());
  FIX::RndPx RndPx_4;
  RndPx_4.setString("5030655");
  msg.set(RndPx_4);
  TradeCaptureReportAck_0.insert(RndPx_4.getString());
  FIX::RptSys RptSys_0("STRING_1394250589");
  msg.set(RptSys_0);
  TradeCaptureReportAck_0.insert(RptSys_0.getString());
  FIX::SecondaryExecID SecondaryExecID_8("STRING_1437453853");
  msg.set(SecondaryExecID_8);
  TradeCaptureReportAck_0.insert(SecondaryExecID_8.getString());
  FIX::SecondaryFirmTradeID SecondaryFirmTradeID_1("STRING_1664244148");
  msg.set(SecondaryFirmTradeID_1);
  TradeCaptureReportAck_0.insert(SecondaryFirmTradeID_1.getString());
  FIX::SecondaryTradeID SecondaryTradeID_1("STRING_2084835524");
  msg.set(SecondaryTradeID_1);
  TradeCaptureReportAck_0.insert(SecondaryTradeID_1.getString());
  FIX::SecondaryTradeReportID SecondaryTradeReportID_15("STRING_673597180");
  msg.set(SecondaryTradeReportID_15);
  TradeCaptureReportAck_0.insert(SecondaryTradeReportID_15.getString());
  FIX::SecondaryTradeReportRefID SecondaryTradeReportRefID_1("STRING_2134766018");
  msg.set(SecondaryTradeReportRefID_1);
  TradeCaptureReportAck_0.insert(SecondaryTradeReportRefID_1.getString());
  FIX::SecondaryTrdType SecondaryTrdType_1(441987168);
  msg.set(SecondaryTrdType_1);
  TradeCaptureReportAck_0.insert(SecondaryTrdType_1.getString());
  FIX::SettlCurrency SettlCurrency_37("JPY");
  msg.set(SettlCurrency_37);
  TradeCaptureReportAck_0.insert(SettlCurrency_37.getString());
  FIX::SettlDate SettlDate_55("LOCALMKTDATE_905926581");
  msg.set(SettlDate_55);
  TradeCaptureReportAck_0.insert(SettlDate_55.getString());
  FIX::SettlSessID SettlSessID_13("STRING_ITD");
  msg.set(SettlSessID_13);
  TradeCaptureReportAck_0.insert(SettlSessID_13.getString());
  FIX::SettlSessSubID SettlSessSubID_12("STRING_785361447");
  msg.set(SettlSessSubID_12);
  TradeCaptureReportAck_0.insert(SettlSessSubID_12.getString());
  FIX::SettlType SettlType_39("STRING_6");
  msg.set(SettlType_39);
  TradeCaptureReportAck_0.insert(SettlType_39.getString());
  FIX::ShortSaleReason ShortSaleReason_1(3);
  msg.set(ShortSaleReason_1);
  TradeCaptureReportAck_0.insert(ShortSaleReason_1.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_14('2');
  msg.set(SubscriptionRequestType_14);
  TradeCaptureReportAck_0.insert(SubscriptionRequestType_14.getString());
  FIX::Text Text_103("STRING_1441966857");
  msg.set(Text_103);
  TradeCaptureReportAck_0.insert(Text_103.getString());
  FIX::TierCode TierCode_1("STRING_1488495870");
  msg.set(TierCode_1);
  TradeCaptureReportAck_0.insert(TierCode_1.getString());
  FIX::TradeDate TradeDate_29("LOCALMKTDATE_1192119059");
  msg.set(TradeDate_29);
  TradeCaptureReportAck_0.insert(TradeDate_29.getString());
  FIX::TradeHandlingInstr TradeHandlingInstr_1('2');
  msg.set(TradeHandlingInstr_1);
  TradeCaptureReportAck_0.insert(TradeHandlingInstr_1.getString());
  FIX::TradeID TradeID_8("STRING_2136466375");
  msg.set(TradeID_8);
  TradeCaptureReportAck_0.insert(TradeID_8.getString());
  FIX::TradeLegRefID TradeLegRefID_1("STRING_1689650125");
  msg.set(TradeLegRefID_1);
  TradeCaptureReportAck_0.insert(TradeLegRefID_1.getString());
  FIX::TradeLinkID TradeLinkID_1("STRING_1531842055");
  msg.set(TradeLinkID_1);
  TradeCaptureReportAck_0.insert(TradeLinkID_1.getString());
  FIX::TradePublishIndicator TradePublishIndicator_1(0);
  msg.set(TradePublishIndicator_1);
  TradeCaptureReportAck_0.insert(TradePublishIndicator_1.getString());
  FIX::TradeReportID TradeReportID_15("STRING_404910932");
  msg.set(TradeReportID_15);
  TradeCaptureReportAck_0.insert(TradeReportID_15.getString());
  FIX::TradeReportRefID TradeReportRefID_1("STRING_1455383446");
  msg.set(TradeReportRefID_1);
  TradeCaptureReportAck_0.insert(TradeReportRefID_1.getString());
  FIX::TradeReportRejectReason TradeReportRejectReason_0(1);
  msg.set(TradeReportRejectReason_0);
  TradeCaptureReportAck_0.insert(TradeReportRejectReason_0.getString());
  FIX::TradeReportTransType TradeReportTransType_1(1);
  msg.set(TradeReportTransType_1);
  TradeCaptureReportAck_0.insert(TradeReportTransType_1.getString());
  FIX::TradeReportType TradeReportType_1(13);
  msg.set(TradeReportType_1);
  TradeCaptureReportAck_0.insert(TradeReportType_1.getString());
  FIX::TransactTime TransactTime_74(FIX::UTCTIMESTAMP(13, 12, 4, 22, 9, 2010));
  msg.set(TransactTime_74);
  TradeCaptureReportAck_0.insert(TransactTime_74.getString());
  FIX::TransferReason TransferReason_1("STRING_1789531126");
  msg.set(TransferReason_1);
  TradeCaptureReportAck_0.insert(TransferReason_1.getString());
  FIX::TrdMatchID TrdMatchID_2("STRING_1287326943");
  msg.set(TrdMatchID_2);
  TradeCaptureReportAck_0.insert(TrdMatchID_2.getString());
  FIX::TrdRptStatus TrdRptStatus_1(1);
  msg.set(TrdRptStatus_1);
  TradeCaptureReportAck_0.insert(TrdRptStatus_1.getString());
  FIX::TrdSubType TrdSubType_4(9);
  msg.set(TrdSubType_4);
  TradeCaptureReportAck_0.insert(TrdSubType_4.getString());
  FIX::TrdType TrdType_7(44);
  msg.set(TrdType_7);
  TradeCaptureReportAck_0.insert(TrdType_7.getString());
  FIX::UnderlyingTradingSessionID UnderlyingTradingSessionID_1("STRING_1680027890");
  msg.set(UnderlyingTradingSessionID_1);
  TradeCaptureReportAck_0.insert(UnderlyingTradingSessionID_1.getString());
  FIX::UnderlyingTradingSessionSubID UnderlyingTradingSessionSubID_1("STRING_438951966");
  msg.set(UnderlyingTradingSessionSubID_1);
  TradeCaptureReportAck_0.insert(UnderlyingTradingSessionSubID_1.getString());
  FIX::VenueType VenueType_1('X');
  msg.set(VenueType_1);
  TradeCaptureReportAck_0.insert(VenueType_1.getString());
  all_values.push_back(TradeCaptureReportAck_0);

  all_compo_names.insert("TradeCaptureReportAck");

  // Instrument
  multiset<string> Instrument_101;
  FIX::AttachmentPoint AttachmentPoint_101;
  AttachmentPoint_101.setString("77.800000");
  msg.set(AttachmentPoint_101);
  Instrument_101.insert(AttachmentPoint_101.getString());
  FIX::CFICode CFICode_106("STRING_2123268573");
  msg.set(CFICode_106);
  Instrument_101.insert(CFICode_106.getString());
  FIX::CPProgram CPProgram_101(2);
  msg.set(CPProgram_101);
  Instrument_101.insert(CPProgram_101.getString());
  FIX::CPRegType CPRegType_101("STRING_922280989");
  msg.set(CPRegType_101);
  Instrument_101.insert(CPRegType_101.getString());
  FIX::CapPrice CapPrice_101;
  CapPrice_101.setString("14642807");
  msg.set(CapPrice_101);
  Instrument_101.insert(CapPrice_101.getString());
  FIX::ContractMultiplier ContractMultiplier_101;
  ContractMultiplier_101.setString("20247185");
  msg.set(ContractMultiplier_101);
  Instrument_101.insert(ContractMultiplier_101.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_101(0);
  msg.set(ContractMultiplierUnit_101);
  Instrument_101.insert(ContractMultiplierUnit_101.getString());
  FIX::ContractSettlMonth ContractSettlMonth_101("MONTHYEAR_1453263523");
  msg.set(ContractSettlMonth_101);
  Instrument_101.insert(ContractSettlMonth_101.getString());
  FIX::CountryOfIssue CountryOfIssue_101("COUNTRY_1566885062");
  msg.set(CountryOfIssue_101);
  Instrument_101.insert(CountryOfIssue_101.getString());
  FIX::CouponPaymentDate CouponPaymentDate_101("LOCALMKTDATE_1293391376");
  msg.set(CouponPaymentDate_101);
  Instrument_101.insert(CouponPaymentDate_101.getString());
  FIX::CouponRate CouponRate_101;
  CouponRate_101.setString("53.180000");
  msg.set(CouponRate_101);
  Instrument_101.insert(CouponRate_101.getString());
  FIX::CreditRating CreditRating_101("STRING_1971795994");
  msg.set(CreditRating_101);
  Instrument_101.insert(CreditRating_101.getString());
  FIX::DatedDate DatedDate_101("LOCALMKTDATE_601291174");
  msg.set(DatedDate_101);
  Instrument_101.insert(DatedDate_101.getString());
  FIX::DetachmentPoint DetachmentPoint_101;
  DetachmentPoint_101.setString("52.160000");
  msg.set(DetachmentPoint_101);
  Instrument_101.insert(DetachmentPoint_101.getString());
  FIX::EncodedIssuer EncodedIssuer_101("DATA_501740679");
  msg.set(EncodedIssuer_101);
  Instrument_101.insert(EncodedIssuer_101.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_101(1881509732);
  msg.set(EncodedIssuerLen_101);
  Instrument_101.insert(EncodedIssuerLen_101.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_101("DATA_1754780539");
  msg.set(EncodedSecurityDesc_101);
  Instrument_101.insert(EncodedSecurityDesc_101.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_101(180220772);
  msg.set(EncodedSecurityDescLen_101);
  Instrument_101.insert(EncodedSecurityDescLen_101.getString());
  FIX::ExerciseStyle ExerciseStyle_101(0);
  msg.set(ExerciseStyle_101);
  Instrument_101.insert(ExerciseStyle_101.getString());
  FIX::Factor Factor_101;
  Factor_101.setString("20591");
  msg.set(Factor_101);
  Instrument_101.insert(Factor_101.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_101(true);
  msg.set(FlexProductEligibilityIndicator_101);
  Instrument_101.insert(FlexProductEligibilityIndicator_101.getString());
  FIX::FlexibleIndicator FlexibleIndicator_101(true);
  msg.set(FlexibleIndicator_101);
  Instrument_101.insert(FlexibleIndicator_101.getString());
  FIX::FloorPrice FloorPrice_101;
  FloorPrice_101.setString("3341732");
  msg.set(FloorPrice_101);
  Instrument_101.insert(FloorPrice_101.getString());
  FIX::FlowScheduleType FlowScheduleType_101(1);
  msg.set(FlowScheduleType_101);
  Instrument_101.insert(FlowScheduleType_101.getString());
  FIX::InstrRegistry InstrRegistry_101("STRING_1957198023");
  msg.set(InstrRegistry_101);
  Instrument_101.insert(InstrRegistry_101.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_101('1');
  msg.set(InstrmtAssignmentMethod_101);
  Instrument_101.insert(InstrmtAssignmentMethod_101.getString());
  FIX::InterestAccrualDate InterestAccrualDate_101("LOCALMKTDATE_952220938");
  msg.set(InterestAccrualDate_101);
  Instrument_101.insert(InterestAccrualDate_101.getString());
  FIX::IssueDate IssueDate_101("LOCALMKTDATE_1789227567");
  msg.set(IssueDate_101);
  Instrument_101.insert(IssueDate_101.getString());
  FIX::Issuer Issuer_101("STRING_640818847");
  msg.set(Issuer_101);
  Instrument_101.insert(Issuer_101.getString());
  FIX::ListMethod ListMethod_101(0);
  msg.set(ListMethod_101);
  Instrument_101.insert(ListMethod_101.getString());
  FIX::LocaleOfIssue LocaleOfIssue_101("STRING_259134909");
  msg.set(LocaleOfIssue_101);
  Instrument_101.insert(LocaleOfIssue_101.getString());
  FIX::MaturityDate MaturityDate_101("LOCALMKTDATE_121132979");
  msg.set(MaturityDate_101);
  Instrument_101.insert(MaturityDate_101.getString());
  FIX::MaturityMonthYear MaturityMonthYear_101("MONTHYEAR_1366957829");
  msg.set(MaturityMonthYear_101);
  Instrument_101.insert(MaturityMonthYear_101.getString());
  FIX::MaturityTime MaturityTime_101("TZTIMEONLY_1091734436");
  msg.set(MaturityTime_101);
  Instrument_101.insert(MaturityTime_101.getString());
  FIX::MinPriceIncrement MinPriceIncrement_101;
  MinPriceIncrement_101.setString("10434139");
  msg.set(MinPriceIncrement_101);
  Instrument_101.insert(MinPriceIncrement_101.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_101;
  MinPriceIncrementAmount_101.setString("6837549");
  msg.set(MinPriceIncrementAmount_101);
  Instrument_101.insert(MinPriceIncrementAmount_101.getString());
  FIX::NTPositionLimit NTPositionLimit_101(968969373);
  msg.set(NTPositionLimit_101);
  Instrument_101.insert(NTPositionLimit_101.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_101;
  NotionalPercentageOutstanding_101.setString("32.890000");
  msg.set(NotionalPercentageOutstanding_101);
  Instrument_101.insert(NotionalPercentageOutstanding_101.getString());
  FIX::OptAttribute OptAttribute_101('2');
  msg.set(OptAttribute_101);
  Instrument_101.insert(OptAttribute_101.getString());
  FIX::OptPayoutAmount OptPayoutAmount_101;
  OptPayoutAmount_101.setString("3883707");
  msg.set(OptPayoutAmount_101);
  Instrument_101.insert(OptPayoutAmount_101.getString());
  FIX::OptPayoutType OptPayoutType_101(1);
  msg.set(OptPayoutType_101);
  Instrument_101.insert(OptPayoutType_101.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_101;
  OriginalNotionalPercentageOutstanding_101.setString("1.700000");
  msg.set(OriginalNotionalPercentageOutstanding_101);
  Instrument_101.insert(OriginalNotionalPercentageOutstanding_101.getString());
  FIX::Pool Pool_101("STRING_212683134");
  msg.set(Pool_101);
  Instrument_101.insert(Pool_101.getString());
  FIX::PositionLimit PositionLimit_101(552162191);
  msg.set(PositionLimit_101);
  Instrument_101.insert(PositionLimit_101.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_101("STRING_INT");
  msg.set(PriceQuoteMethod_101);
  Instrument_101.insert(PriceQuoteMethod_101.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_101("STRING_714423814");
  msg.set(PriceUnitOfMeasure_101);
  Instrument_101.insert(PriceUnitOfMeasure_101.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_101;
  PriceUnitOfMeasureQty_101.setString("2861882");
  msg.set(PriceUnitOfMeasureQty_101);
  Instrument_101.insert(PriceUnitOfMeasureQty_101.getString());
  FIX::Product Product_109(6);
  msg.set(Product_109);
  Instrument_101.insert(Product_109.getString());
  FIX::ProductComplex ProductComplex_101("STRING_894644586");
  msg.set(ProductComplex_101);
  Instrument_101.insert(ProductComplex_101.getString());
  FIX::PutOrCall PutOrCall_101(1);
  msg.set(PutOrCall_101);
  Instrument_101.insert(PutOrCall_101.getString());
  FIX::RedemptionDate RedemptionDate_101("LOCALMKTDATE_1420891433");
  msg.set(RedemptionDate_101);
  Instrument_101.insert(RedemptionDate_101.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_101("STRING_43315657");
  msg.set(RepoCollateralSecurityType_101);
  Instrument_101.insert(RepoCollateralSecurityType_101.getString());
  FIX::RepurchaseRate RepurchaseRate_101;
  RepurchaseRate_101.setString("58.640000");
  msg.set(RepurchaseRate_101);
  Instrument_101.insert(RepurchaseRate_101.getString());
  FIX::RepurchaseTerm RepurchaseTerm_101(1755064730);
  msg.set(RepurchaseTerm_101);
  Instrument_101.insert(RepurchaseTerm_101.getString());
  FIX::RestructuringType RestructuringType_101("STRING_MR");
  msg.set(RestructuringType_101);
  Instrument_101.insert(RestructuringType_101.getString());
  FIX::SecurityDesc SecurityDesc_101("STRING_135600239");
  msg.set(SecurityDesc_101);
  Instrument_101.insert(SecurityDesc_101.getString());
  FIX::SecurityExchange SecurityExchange_101("EXCHANGE_715855687");
  msg.set(SecurityExchange_101);
  Instrument_101.insert(SecurityExchange_101.getString());
  FIX::SecurityGroup SecurityGroup_101("STRING_1933738791");
  msg.set(SecurityGroup_101);
  Instrument_101.insert(SecurityGroup_101.getString());
  FIX::SecurityID SecurityID_101("STRING_1924827806");
  msg.set(SecurityID_101);
  Instrument_101.insert(SecurityID_101.getString());
  FIX::SecurityIDSource SecurityIDSource_101("STRING_7");
  msg.set(SecurityIDSource_101);
  Instrument_101.insert(SecurityIDSource_101.getString());
  FIX::SecurityStatus SecurityStatus_102("STRING_2");
  msg.set(SecurityStatus_102);
  Instrument_101.insert(SecurityStatus_102.getString());
  FIX::SecuritySubType SecuritySubType_105("STRING_36479068");
  msg.set(SecuritySubType_105);
  Instrument_101.insert(SecuritySubType_105.getString());
  FIX::SecurityType SecurityType_109("STRING_RETIRED");
  msg.set(SecurityType_109);
  Instrument_101.insert(SecurityType_109.getString());
  FIX::Seniority Seniority_101("STRING_SB");
  msg.set(Seniority_101);
  Instrument_101.insert(Seniority_101.getString());
  FIX::SettlMethod SettlMethod_101('C');
  msg.set(SettlMethod_101);
  Instrument_101.insert(SettlMethod_101.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_101("STRING_373737833");
  msg.set(SettleOnOpenFlag_101);
  Instrument_101.insert(SettleOnOpenFlag_101.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_101("STRING_1080657205");
  msg.set(StateOrProvinceOfIssue_101);
  Instrument_101.insert(StateOrProvinceOfIssue_101.getString());
  FIX::StrikeCurrency StrikeCurrency_101("USD");
  msg.set(StrikeCurrency_101);
  Instrument_101.insert(StrikeCurrency_101.getString());
  FIX::StrikeMultiplier StrikeMultiplier_101;
  StrikeMultiplier_101.setString("10701920");
  msg.set(StrikeMultiplier_101);
  Instrument_101.insert(StrikeMultiplier_101.getString());
  FIX::StrikePrice StrikePrice_101;
  StrikePrice_101.setString("3380700");
  msg.set(StrikePrice_101);
  Instrument_101.insert(StrikePrice_101.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_101(5);
  msg.set(StrikePriceBoundaryMethod_101);
  Instrument_101.insert(StrikePriceBoundaryMethod_101.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_101;
  StrikePriceBoundaryPrecision_101.setString("85.780000");
  msg.set(StrikePriceBoundaryPrecision_101);
  Instrument_101.insert(StrikePriceBoundaryPrecision_101.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_101(1);
  msg.set(StrikePriceDeterminationMethod_101);
  Instrument_101.insert(StrikePriceDeterminationMethod_101.getString());
  FIX::StrikeValue StrikeValue_101;
  StrikeValue_101.setString("16817343");
  msg.set(StrikeValue_101);
  Instrument_101.insert(StrikeValue_101.getString());
  FIX::Symbol Symbol_101("STRING_1938993964");
  msg.set(Symbol_101);
  Instrument_101.insert(Symbol_101.getString());
  FIX::SymbolSfx SymbolSfx_101("STRING_CD");
  msg.set(SymbolSfx_101);
  Instrument_101.insert(SymbolSfx_101.getString());
  FIX::TimeUnit TimeUnit_101("STRING_Yr");
  msg.set(TimeUnit_101);
  Instrument_101.insert(TimeUnit_101.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_101(3);
  msg.set(UnderlyingPriceDeterminationMethod_101);
  Instrument_101.insert(UnderlyingPriceDeterminationMethod_101.getString());
  FIX::UnitOfMeasure UnitOfMeasure_101("STRING_Gal");
  msg.set(UnitOfMeasure_101);
  Instrument_101.insert(UnitOfMeasure_101.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_101;
  UnitOfMeasureQty_101.setString("16239373");
  msg.set(UnitOfMeasureQty_101);
  Instrument_101.insert(UnitOfMeasureQty_101.getString());
  FIX::ValuationMethod ValuationMethod_101("STRING_CDSD");
  msg.set(ValuationMethod_101);
  Instrument_101.insert(ValuationMethod_101.getString());
  all_values.push_back(Instrument_101);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReportAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_201;
    FIX::ComplexEventCondition ComplexEventCondition_201(2);
    noComplexEvents_0_0.set(ComplexEventCondition_201);
    ComplexEvents_NoComplexEvents_201.insert(ComplexEventCondition_201.getString());
    FIX::ComplexEventPrice ComplexEventPrice_201;
    ComplexEventPrice_201.setString("913314");
    noComplexEvents_0_0.set(ComplexEventPrice_201);
    ComplexEvents_NoComplexEvents_201.insert(ComplexEventPrice_201.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_201(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_201);
    ComplexEvents_NoComplexEvents_201.insert(ComplexEventPriceBoundaryMethod_201.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_201;
    ComplexEventPriceBoundaryPrecision_201.setString("34.930000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_201);
    ComplexEvents_NoComplexEvents_201.insert(ComplexEventPriceBoundaryPrecision_201.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_201(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_201);
    ComplexEvents_NoComplexEvents_201.insert(ComplexEventPriceTimeType_201.getString());
    FIX::ComplexEventType ComplexEventType_201(8);
    noComplexEvents_0_0.set(ComplexEventType_201);
    ComplexEvents_NoComplexEvents_201.insert(ComplexEventType_201.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_201;
    ComplexOptPayoutAmount_201.setString("18627676");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_201);
    ComplexEvents_NoComplexEvents_201.insert(ComplexOptPayoutAmount_201.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_201);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_402;
      FIX::ComplexEventEndDate ComplexEventEndDate_402(FIX::UTCTIMESTAMP(23, 27, 46, 23, 9, 2005));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_402);
      ComplexEventDates_NoComplexEventDates_402.insert(ComplexEventEndDate_402.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_402(FIX::UTCTIMESTAMP(6, 20, 22, 13, 11, 2004));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_402);
      ComplexEventDates_NoComplexEventDates_402.insert(ComplexEventStartDate_402.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_402);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_816;
        FIX::ComplexEventEndTime ComplexEventEndTime_816(FIX::UTCTIMEONLY(12, 34, 29));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_816);
        ComplexEventTimes_NoComplexEventTimes_816.insert(ComplexEventEndTime_816.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_816(FIX::UTCTIMEONLY(23, 48, 18));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_816);
        ComplexEventTimes_NoComplexEventTimes_816.insert(ComplexEventStartTime_816.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_816);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_403;
      FIX::ComplexEventEndDate ComplexEventEndDate_403(FIX::UTCTIMESTAMP(2, 33, 46, 22, 1, 2015));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_403);
      ComplexEventDates_NoComplexEventDates_403.insert(ComplexEventEndDate_403.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_403(FIX::UTCTIMESTAMP(2, 1, 32, 20, 5, 2003));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_403);
      ComplexEventDates_NoComplexEventDates_403.insert(ComplexEventStartDate_403.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_403);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_817;
        FIX::ComplexEventEndTime ComplexEventEndTime_817(FIX::UTCTIMEONLY(7, 12, 36));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_817);
        ComplexEventTimes_NoComplexEventTimes_817.insert(ComplexEventEndTime_817.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_817(FIX::UTCTIMEONLY(22, 2, 13));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_817);
        ComplexEventTimes_NoComplexEventTimes_817.insert(ComplexEventStartTime_817.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_817);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_404;
      FIX::ComplexEventEndDate ComplexEventEndDate_404(FIX::UTCTIMESTAMP(3, 39, 34, 12, 3, 2015));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_404);
      ComplexEventDates_NoComplexEventDates_404.insert(ComplexEventEndDate_404.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_404(FIX::UTCTIMESTAMP(11, 57, 48, 21, 4, 2000));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_404);
      ComplexEventDates_NoComplexEventDates_404.insert(ComplexEventStartDate_404.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_404);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_818;
        FIX::ComplexEventEndTime ComplexEventEndTime_818(FIX::UTCTIMEONLY(2, 44, 9));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_818);
        ComplexEventTimes_NoComplexEventTimes_818.insert(ComplexEventEndTime_818.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_818(FIX::UTCTIMEONLY(4, 46, 46));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_818);
        ComplexEventTimes_NoComplexEventTimes_818.insert(ComplexEventStartTime_818.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_818);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_819;
        FIX::ComplexEventEndTime ComplexEventEndTime_819(FIX::UTCTIMEONLY(17, 58, 42));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_819);
        ComplexEventTimes_NoComplexEventTimes_819.insert(ComplexEventEndTime_819.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_819(FIX::UTCTIMEONLY(21, 44, 59));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_819);
        ComplexEventTimes_NoComplexEventTimes_819.insert(ComplexEventStartTime_819.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_819);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradeCaptureReportAck::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_200;
    FIX::EventDate EventDate_200("LOCALMKTDATE_288874551");
    noEvents_0_0.set(EventDate_200);
    EvntGrp_NoEvents_200.insert(EventDate_200.getString());
    FIX::EventPx EventPx_200;
    EventPx_200.setString("5230368");
    noEvents_0_0.set(EventPx_200);
    EvntGrp_NoEvents_200.insert(EventPx_200.getString());
    FIX::EventText EventText_200("STRING_1525306841");
    noEvents_0_0.set(EventText_200);
    EvntGrp_NoEvents_200.insert(EventText_200.getString());
    FIX::EventTime EventTime_200(FIX::UTCTIMESTAMP(13, 48, 18, 4, 2, 2000));
    noEvents_0_0.set(EventTime_200);
    EvntGrp_NoEvents_200.insert(EventTime_200.getString());
    FIX::EventType EventType_200(11);
    noEvents_0_0.set(EventType_200);
    EvntGrp_NoEvents_200.insert(EventType_200.getString());
    all_values.push_back(EvntGrp_NoEvents_200);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_201;
    FIX::EventDate EventDate_201("LOCALMKTDATE_763388956");
    noEvents_0_1.set(EventDate_201);
    EvntGrp_NoEvents_201.insert(EventDate_201.getString());
    FIX::EventPx EventPx_201;
    EventPx_201.setString("6803898");
    noEvents_0_1.set(EventPx_201);
    EvntGrp_NoEvents_201.insert(EventPx_201.getString());
    FIX::EventText EventText_201("STRING_1849356153");
    noEvents_0_1.set(EventText_201);
    EvntGrp_NoEvents_201.insert(EventText_201.getString());
    FIX::EventTime EventTime_201(FIX::UTCTIMESTAMP(4, 9, 2, 18, 2, 2000));
    noEvents_0_1.set(EventTime_201);
    EvntGrp_NoEvents_201.insert(EventTime_201.getString());
    FIX::EventType EventType_201(18);
    noEvents_0_1.set(EventType_201);
    EvntGrp_NoEvents_201.insert(EventType_201.getString());
    all_values.push_back(EvntGrp_NoEvents_201);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_202;
    FIX::EventDate EventDate_202("LOCALMKTDATE_1844022067");
    noEvents_0_2.set(EventDate_202);
    EvntGrp_NoEvents_202.insert(EventDate_202.getString());
    FIX::EventPx EventPx_202;
    EventPx_202.setString("14765158");
    noEvents_0_2.set(EventPx_202);
    EvntGrp_NoEvents_202.insert(EventPx_202.getString());
    FIX::EventText EventText_202("STRING_985583755");
    noEvents_0_2.set(EventText_202);
    EvntGrp_NoEvents_202.insert(EventText_202.getString());
    FIX::EventTime EventTime_202(FIX::UTCTIMESTAMP(16, 4, 26, 27, 12, 2017));
    noEvents_0_2.set(EventTime_202);
    EvntGrp_NoEvents_202.insert(EventTime_202.getString());
    FIX::EventType EventType_202(15);
    noEvents_0_2.set(EventType_202);
    EvntGrp_NoEvents_202.insert(EventType_202.getString());
    all_values.push_back(EvntGrp_NoEvents_202);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReportAck::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_212;
    FIX::InstrumentPartyID InstrumentPartyID_212("STRING_128148965");
    noInstrumentParties_0_0.set(InstrumentPartyID_212);
    InstrumentParties_NoInstrumentParties_212.insert(InstrumentPartyID_212.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_212('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_212);
    InstrumentParties_NoInstrumentParties_212.insert(InstrumentPartyIDSource_212.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_212(1852128512);
    noInstrumentParties_0_0.set(InstrumentPartyRole_212);
    InstrumentParties_NoInstrumentParties_212.insert(InstrumentPartyRole_212.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_212);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_416;
      FIX::InstrumentPartySubID InstrumentPartySubID_416("STRING_126933187");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_416);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_416.insert(InstrumentPartySubID_416.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_416(373333201);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_416);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_416.insert(InstrumentPartySubIDType_416.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_416);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_417;
      FIX::InstrumentPartySubID InstrumentPartySubID_417("STRING_591595341");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_417);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_417.insert(InstrumentPartySubID_417.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_417(405656817);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_417);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_417.insert(InstrumentPartySubIDType_417.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_417);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_418;
      FIX::InstrumentPartySubID InstrumentPartySubID_418("STRING_1136722157");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_418);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_418.insert(InstrumentPartySubID_418.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_418(1271985151);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_418);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_418.insert(InstrumentPartySubIDType_418.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_418);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_213;
    FIX::InstrumentPartyID InstrumentPartyID_213("STRING_107529322");
    noInstrumentParties_0_1.set(InstrumentPartyID_213);
    InstrumentParties_NoInstrumentParties_213.insert(InstrumentPartyID_213.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_213('4');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_213);
    InstrumentParties_NoInstrumentParties_213.insert(InstrumentPartyIDSource_213.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_213(1496265347);
    noInstrumentParties_0_1.set(InstrumentPartyRole_213);
    InstrumentParties_NoInstrumentParties_213.insert(InstrumentPartyRole_213.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_213);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_419;
      FIX::InstrumentPartySubID InstrumentPartySubID_419("STRING_535791192");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_419);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_419.insert(InstrumentPartySubID_419.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_419(1985378157);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_419);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_419.insert(InstrumentPartySubIDType_419.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_419);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_420;
      FIX::InstrumentPartySubID InstrumentPartySubID_420("STRING_1076912785");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_420);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_420.insert(InstrumentPartySubID_420.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_420(1001025780);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_420);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_420.insert(InstrumentPartySubIDType_420.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_420);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_214;
    FIX::InstrumentPartyID InstrumentPartyID_214("STRING_496228906");
    noInstrumentParties_0_2.set(InstrumentPartyID_214);
    InstrumentParties_NoInstrumentParties_214.insert(InstrumentPartyID_214.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_214('7');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_214);
    InstrumentParties_NoInstrumentParties_214.insert(InstrumentPartyIDSource_214.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_214(330058018);
    noInstrumentParties_0_2.set(InstrumentPartyRole_214);
    InstrumentParties_NoInstrumentParties_214.insert(InstrumentPartyRole_214.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_214);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_421;
      FIX::InstrumentPartySubID InstrumentPartySubID_421("STRING_1333929966");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_421);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_421.insert(InstrumentPartySubID_421.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_421(1151997050);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_421);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_421.insert(InstrumentPartySubIDType_421.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_421);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradeCaptureReportAck::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_190;
    FIX::SecurityAltID SecurityAltID_190("STRING_978978204");
    noSecurityAltID_0_0.set(SecurityAltID_190);
    SecAltIDGrp_NoSecurityAltID_190.insert(SecurityAltID_190.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_190("STRING_1216464753");
    noSecurityAltID_0_0.set(SecurityAltIDSource_190);
    SecAltIDGrp_NoSecurityAltID_190.insert(SecurityAltIDSource_190.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_190);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_191;
    FIX::SecurityAltID SecurityAltID_191("STRING_321385601");
    noSecurityAltID_0_1.set(SecurityAltID_191);
    SecAltIDGrp_NoSecurityAltID_191.insert(SecurityAltID_191.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_191("STRING_912900993");
    noSecurityAltID_0_1.set(SecurityAltIDSource_191);
    SecAltIDGrp_NoSecurityAltID_191.insert(SecurityAltIDSource_191.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_191);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_192;
    FIX::SecurityAltID SecurityAltID_192("STRING_1803969287");
    noSecurityAltID_0_2.set(SecurityAltID_192);
    SecAltIDGrp_NoSecurityAltID_192.insert(SecurityAltID_192.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_192("STRING_981790765");
    noSecurityAltID_0_2.set(SecurityAltIDSource_192);
    SecAltIDGrp_NoSecurityAltID_192.insert(SecurityAltIDSource_192.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_192);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_202;
  FIX::SecurityXML SecurityXML_203("XMLDATA_1041049958");
  msg.set(SecurityXML_203);
  FIX::SecurityXMLLen SecurityXMLLen_101(759907890);
  msg.set(SecurityXMLLen_101);
  FIX::SecurityXMLSchema SecurityXMLSchema_101("STRING_686435629");
  msg.set(SecurityXMLSchema_101);
  SecurityXML_202.insert(SecurityXMLSchema_101.getString());
  all_values.push_back(SecurityXML_202);
  all_compo_names.insert("SecurityXML");

  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::TradeCaptureReportAck::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_15;
    FIX::PosAmt PosAmt_15;
    PosAmt_15.setString("8868410");
    noPosAmt_0_0.set(PosAmt_15);
    PositionAmountData_NoPosAmt_15.insert(PosAmt_15.getString());
    FIX::PosAmtType PosAmtType_15("STRING_FMTM");
    noPosAmt_0_0.set(PosAmtType_15);
    PositionAmountData_NoPosAmt_15.insert(PosAmtType_15.getString());
    FIX::PositionCurrency PositionCurrency_15("STRING_617072174");
    noPosAmt_0_0.set(PositionCurrency_15);
    PositionAmountData_NoPosAmt_15.insert(PositionCurrency_15.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_15);
    all_compo_names.insert("PositionAmountData.NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_16;
    FIX::PosAmt PosAmt_16;
    PosAmt_16.setString("12924978");
    noPosAmt_0_1.set(PosAmt_16);
    PositionAmountData_NoPosAmt_16.insert(PosAmt_16.getString());
    FIX::PosAmtType PosAmtType_16("STRING_CASH");
    noPosAmt_0_1.set(PosAmtType_16);
    PositionAmountData_NoPosAmt_16.insert(PosAmtType_16.getString());
    FIX::PositionCurrency PositionCurrency_16("STRING_1889057325");
    noPosAmt_0_1.set(PositionCurrency_16);
    PositionAmountData_NoPosAmt_16.insert(PositionCurrency_16.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_16);
    all_compo_names.insert("PositionAmountData.NoPosAmt");

    msg.addGroup(noPosAmt_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoPosAmt noPosAmt_0_2;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_17;
    FIX::PosAmt PosAmt_17;
    PosAmt_17.setString("14000272");
    noPosAmt_0_2.set(PosAmt_17);
    PositionAmountData_NoPosAmt_17.insert(PosAmt_17.getString());
    FIX::PosAmtType PosAmtType_17("STRING_BANK");
    noPosAmt_0_2.set(PosAmtType_17);
    PositionAmountData_NoPosAmt_17.insert(PosAmtType_17.getString());
    FIX::PositionCurrency PositionCurrency_17("STRING_1237839024");
    noPosAmt_0_2.set(PositionCurrency_17);
    PositionAmountData_NoPosAmt_17.insert(PositionCurrency_17.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_17);
    all_compo_names.insert("PositionAmountData.NoPosAmt");

    msg.addGroup(noPosAmt_0_2);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_9;
    FIX::RootPartyID RootPartyID_9("STRING_1066240283");
    noRootPartyIDs_0_0.set(RootPartyID_9);
    RootParties_NoRootPartyIDs_9.insert(RootPartyID_9.getString());
    FIX::RootPartyIDSource RootPartyIDSource_9('1');
    noRootPartyIDs_0_0.set(RootPartyIDSource_9);
    RootParties_NoRootPartyIDs_9.insert(RootPartyIDSource_9.getString());
    FIX::RootPartyRole RootPartyRole_9(1776673606);
    noRootPartyIDs_0_0.set(RootPartyRole_9);
    RootParties_NoRootPartyIDs_9.insert(RootPartyRole_9.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_9);
    all_compo_names.insert("RootParties.NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_17;
      FIX::RootPartySubID RootPartySubID_17("STRING_1571962440");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_17);
      RootSubParties_NoRootPartySubIDs_17.insert(RootPartySubID_17.getString());
      FIX::RootPartySubIDType RootPartySubIDType_17(402641163);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_17);
      RootSubParties_NoRootPartySubIDs_17.insert(RootPartySubIDType_17.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_17);
      all_compo_names.insert("RootSubParties.NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_18;
      FIX::RootPartySubID RootPartySubID_18("STRING_249840433");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_18);
      RootSubParties_NoRootPartySubIDs_18.insert(RootPartySubID_18.getString());
      FIX::RootPartySubIDType RootPartySubIDType_18(906291454);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_18);
      RootSubParties_NoRootPartySubIDs_18.insert(RootPartySubIDType_18.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_18);
      all_compo_names.insert("RootSubParties.NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_19;
      FIX::RootPartySubID RootPartySubID_19("STRING_1736571129");
      noRootPartySubIDs_0_1_2.set(RootPartySubID_19);
      RootSubParties_NoRootPartySubIDs_19.insert(RootPartySubID_19.getString());
      FIX::RootPartySubIDType RootPartySubIDType_19(1401837483);
      noRootPartySubIDs_0_1_2.set(RootPartySubIDType_19);
      RootSubParties_NoRootPartySubIDs_19.insert(RootPartySubIDType_19.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_19);
      all_compo_names.insert("RootSubParties.NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  // TrdCapRptAckSideGrp
  // Group TrdCapRptAckSideGrp.NoSides
  {
    FIX50SP2::TradeCaptureReportAck::NoSides noSides_0_0;
    // TrdCapRptAckSideGrp.NoSides
    multiset<string> TrdCapRptAckSideGrp_NoSides_0;
    FIX::Account Account_48("STRING_568065685");
    noSides_0_0.set(Account_48);
    TrdCapRptAckSideGrp_NoSides_0.insert(Account_48.getString());
    FIX::AccountType AccountType_41(4);
    noSides_0_0.set(AccountType_41);
    TrdCapRptAckSideGrp_NoSides_0.insert(AccountType_41.getString());
    FIX::AccruedInterestAmt AccruedInterestAmt_13;
    AccruedInterestAmt_13.setString("2664806");
    noSides_0_0.set(AccruedInterestAmt_13);
    TrdCapRptAckSideGrp_NoSides_0.insert(AccruedInterestAmt_13.getString());
    FIX::AccruedInterestRate AccruedInterestRate_8;
    AccruedInterestRate_8.setString("66.780000");
    noSides_0_0.set(AccruedInterestRate_8);
    TrdCapRptAckSideGrp_NoSides_0.insert(AccruedInterestRate_8.getString());
    FIX::AcctIDSource AcctIDSource_41(3);
    noSides_0_0.set(AcctIDSource_41);
    TrdCapRptAckSideGrp_NoSides_0.insert(AcctIDSource_41.getString());
    FIX::AggressorIndicator AggressorIndicator_4(true);
    noSides_0_0.set(AggressorIndicator_4);
    TrdCapRptAckSideGrp_NoSides_0.insert(AggressorIndicator_4.getString());
    FIX::AllocID AllocID_24("STRING_374532989");
    noSides_0_0.set(AllocID_24);
    TrdCapRptAckSideGrp_NoSides_0.insert(AllocID_24.getString());
    FIX::ComplianceID ComplianceID_15("STRING_887212119");
    noSides_0_0.set(ComplianceID_15);
    TrdCapRptAckSideGrp_NoSides_0.insert(ComplianceID_15.getString());
    FIX::Concession Concession_8;
    Concession_8.setString("19347070");
    noSides_0_0.set(Concession_8);
    TrdCapRptAckSideGrp_NoSides_0.insert(Concession_8.getString());
    FIX::CustOrderCapacity CustOrderCapacity_23(3);
    noSides_0_0.set(CustOrderCapacity_23);
    TrdCapRptAckSideGrp_NoSides_0.insert(CustOrderCapacity_23.getString());
    FIX::EndAccruedInterestAmt EndAccruedInterestAmt_13;
    EndAccruedInterestAmt_13.setString("17740531");
    noSides_0_0.set(EndAccruedInterestAmt_13);
    TrdCapRptAckSideGrp_NoSides_0.insert(EndAccruedInterestAmt_13.getString());
    FIX::EndCash EndCash_13;
    EndCash_13.setString("8469922");
    noSides_0_0.set(EndCash_13);
    TrdCapRptAckSideGrp_NoSides_0.insert(EndCash_13.getString());
    FIX::ExDate ExDate_5("LOCALMKTDATE_1017081997");
    noSides_0_0.set(ExDate_5);
    TrdCapRptAckSideGrp_NoSides_0.insert(ExDate_5.getString());
    FIX::ExchangeRule ExchangeRule_3("STRING_919067444");
    noSides_0_0.set(ExchangeRule_3);
    TrdCapRptAckSideGrp_NoSides_0.insert(ExchangeRule_3.getString());
    FIX::InterestAtMaturity InterestAtMaturity_8;
    InterestAtMaturity_8.setString("8959996");
    noSides_0_0.set(InterestAtMaturity_8);
    TrdCapRptAckSideGrp_NoSides_0.insert(InterestAtMaturity_8.getString());
    FIX::NetGrossInd NetGrossInd_12(1);
    noSides_0_0.set(NetGrossInd_12);
    TrdCapRptAckSideGrp_NoSides_0.insert(NetGrossInd_12.getString());
    FIX::NetMoney NetMoney_8;
    NetMoney_8.setString("1716110");
    noSides_0_0.set(NetMoney_8);
    TrdCapRptAckSideGrp_NoSides_0.insert(NetMoney_8.getString());
    FIX::NumDaysInterest NumDaysInterest_8(1426448694);
    noSides_0_0.set(NumDaysInterest_8);
    TrdCapRptAckSideGrp_NoSides_0.insert(NumDaysInterest_8.getString());
    FIX::OddLot OddLot_3(false);
    noSides_0_0.set(OddLot_3);
    TrdCapRptAckSideGrp_NoSides_0.insert(OddLot_3.getString());
    FIX::OrderCategory OrderCategory_4('9');
    noSides_0_0.set(OrderCategory_4);
    TrdCapRptAckSideGrp_NoSides_0.insert(OrderCategory_4.getString());
    FIX::OrderDelay OrderDelay_3(345205329);
    noSides_0_0.set(OrderDelay_3);
    TrdCapRptAckSideGrp_NoSides_0.insert(OrderDelay_3.getString());
    FIX::OrderDelayUnit OrderDelayUnit_3(13);
    noSides_0_0.set(OrderDelayUnit_3);
    TrdCapRptAckSideGrp_NoSides_0.insert(OrderDelayUnit_3.getString());
    FIX::PositionEffect PositionEffect_20('N');
    noSides_0_0.set(PositionEffect_20);
    TrdCapRptAckSideGrp_NoSides_0.insert(PositionEffect_20.getString());
    FIX::PreallocMethod PreallocMethod_17('1');
    noSides_0_0.set(PreallocMethod_17);
    TrdCapRptAckSideGrp_NoSides_0.insert(PreallocMethod_17.getString());
    FIX::ProcessCode ProcessCode_16('6');
    noSides_0_0.set(ProcessCode_16);
    TrdCapRptAckSideGrp_NoSides_0.insert(ProcessCode_16.getString());
    FIX::RptSeq RptSeq_7(903202957);
    noSides_0_0.set(RptSeq_7);
    TrdCapRptAckSideGrp_NoSides_0.insert(RptSeq_7.getString());
    FIX::SettlCurrAmt SettlCurrAmt_12;
    SettlCurrAmt_12.setString("5148281");
    noSides_0_0.set(SettlCurrAmt_12);
    TrdCapRptAckSideGrp_NoSides_0.insert(SettlCurrAmt_12.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_12;
    SettlCurrFxRate_12.setString("12555148");
    noSides_0_0.set(SettlCurrFxRate_12);
    TrdCapRptAckSideGrp_NoSides_0.insert(SettlCurrFxRate_12.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_12('M');
    noSides_0_0.set(SettlCurrFxRateCalc_12);
    TrdCapRptAckSideGrp_NoSides_0.insert(SettlCurrFxRateCalc_12.getString());
    FIX::Side Side_53('F');
    noSides_0_0.set(Side_53);
    TrdCapRptAckSideGrp_NoSides_0.insert(Side_53.getString());
    FIX::SideCurrency SideCurrency_3("CHF");
    noSides_0_0.set(SideCurrency_3);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideCurrency_3.getString());
    FIX::SideExecID SideExecID_3("STRING_240000603");
    noSides_0_0.set(SideExecID_3);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideExecID_3.getString());
    FIX::SideFillStationCd SideFillStationCd_3("STRING_1467090603");
    noSides_0_0.set(SideFillStationCd_3);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideFillStationCd_3.getString());
    FIX::SideGrossTradeAmt SideGrossTradeAmt_3;
    SideGrossTradeAmt_3.setString("3938391");
    noSides_0_0.set(SideGrossTradeAmt_3);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideGrossTradeAmt_3.getString());
    FIX::SideLastQty SideLastQty_3(367304831);
    noSides_0_0.set(SideLastQty_3);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideLastQty_3.getString());
    FIX::SideMultiLegReportingType SideMultiLegReportingType_3(2);
    noSides_0_0.set(SideMultiLegReportingType_3);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideMultiLegReportingType_3.getString());
    FIX::SideReasonCd SideReasonCd_3("STRING_768372143");
    noSides_0_0.set(SideReasonCd_3);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideReasonCd_3.getString());
    FIX::SideSettlCurrency SideSettlCurrency_3("EUR");
    noSides_0_0.set(SideSettlCurrency_3);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideSettlCurrency_3.getString());
    FIX::SideTradeReportID SideTradeReportID_3("STRING_1168381965");
    noSides_0_0.set(SideTradeReportID_3);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideTradeReportID_3.getString());
    FIX::SideTrdSubTyp SideTrdSubTyp_3(881086499);
    noSides_0_0.set(SideTrdSubTyp_3);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideTrdSubTyp_3.getString());
    FIX::SolicitedFlag SolicitedFlag_17(false);
    noSides_0_0.set(SolicitedFlag_17);
    TrdCapRptAckSideGrp_NoSides_0.insert(SolicitedFlag_17.getString());
    FIX::StartCash StartCash_13;
    StartCash_13.setString("379803");
    noSides_0_0.set(StartCash_13);
    TrdCapRptAckSideGrp_NoSides_0.insert(StartCash_13.getString());
    FIX::TimeBracket TimeBracket_4("STRING_1800153944");
    noSides_0_0.set(TimeBracket_4);
    TrdCapRptAckSideGrp_NoSides_0.insert(TimeBracket_4.getString());
    FIX::TotalTakedown TotalTakedown_8;
    TotalTakedown_8.setString("20980937");
    noSides_0_0.set(TotalTakedown_8);
    TrdCapRptAckSideGrp_NoSides_0.insert(TotalTakedown_8.getString());
    FIX::TradeAllocIndicator TradeAllocIndicator_3(5);
    noSides_0_0.set(TradeAllocIndicator_3);
    TrdCapRptAckSideGrp_NoSides_0.insert(TradeAllocIndicator_3.getString());
    FIX::TradeInputDevice TradeInputDevice_4("STRING_1971764958");
    noSides_0_0.set(TradeInputDevice_4);
    TrdCapRptAckSideGrp_NoSides_0.insert(TradeInputDevice_4.getString());
    FIX::TradeInputSource TradeInputSource_6("STRING_1377058755");
    noSides_0_0.set(TradeInputSource_6);
    TrdCapRptAckSideGrp_NoSides_0.insert(TradeInputSource_6.getString());
    FIX::TradingSessionID TradingSessionID_120("STRING_1");
    noSides_0_0.set(TradingSessionID_120);
    TrdCapRptAckSideGrp_NoSides_0.insert(TradingSessionID_120.getString());
    FIX::TradingSessionSubID TradingSessionSubID_120("STRING_7");
    noSides_0_0.set(TradingSessionSubID_120);
    TrdCapRptAckSideGrp_NoSides_0.insert(TradingSessionSubID_120.getString());
    all_values.push_back(TrdCapRptAckSideGrp_NoSides_0);
    all_compo_names.insert("TrdCapRptAckSideGrp.NoSides");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_13;
      FIX::ClearingInstruction ClearingInstruction_13(5);
      noClearingInstructions_0_1_0.set(ClearingInstruction_13);
      ClrInstGrp_NoClearingInstructions_13.insert(ClearingInstruction_13.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_13);
      all_compo_names.insert("ClrInstGrp.NoClearingInstructions");

      noSides_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoClearingInstructions noClearingInstructions_0_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_14;
      FIX::ClearingInstruction ClearingInstruction_14(5);
      noClearingInstructions_0_1_1.set(ClearingInstruction_14);
      ClrInstGrp_NoClearingInstructions_14.insert(ClearingInstruction_14.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_14);
      all_compo_names.insert("ClrInstGrp.NoClearingInstructions");

      noSides_0_0.addGroup(noClearingInstructions_0_1_1);
    }
    // CommissionData
    multiset<string> CommissionData_25;
    FIX::CommCurrency CommCurrency_25("JPY");
    noSides_0_0.set(CommCurrency_25);
    CommissionData_25.insert(CommCurrency_25.getString());
    FIX::CommType CommType_28('1');
    noSides_0_0.set(CommType_28);
    CommissionData_25.insert(CommType_28.getString());
    FIX::Commission Commission_28;
    Commission_28.setString("3545963");
    noSides_0_0.set(Commission_28);
    CommissionData_25.insert(Commission_28.getString());
    FIX::FundRenewWaiv FundRenewWaiv_25('N');
    noSides_0_0.set(FundRenewWaiv_25);
    CommissionData_25.insert(FundRenewWaiv_25.getString());
    all_values.push_back(CommissionData_25);
    all_compo_names.insert("CommissionData");

    // ContAmtGrp
    // Group ContAmtGrp.NoContAmts
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoContAmts noContAmts_0_1_0;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_7;
      FIX::ContAmtCurr ContAmtCurr_7("CAN");
      noContAmts_0_1_0.set(ContAmtCurr_7);
      ContAmtGrp_NoContAmts_7.insert(ContAmtCurr_7.getString());
      FIX::ContAmtType ContAmtType_7(8);
      noContAmts_0_1_0.set(ContAmtType_7);
      ContAmtGrp_NoContAmts_7.insert(ContAmtType_7.getString());
      FIX::ContAmtValue ContAmtValue_7;
      ContAmtValue_7.setString("3637789");
      noContAmts_0_1_0.set(ContAmtValue_7);
      ContAmtGrp_NoContAmts_7.insert(ContAmtValue_7.getString());
      all_values.push_back(ContAmtGrp_NoContAmts_7);
      all_compo_names.insert("ContAmtGrp.NoContAmts");

      noSides_0_0.addGroup(noContAmts_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoContAmts noContAmts_0_1_1;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_8;
      FIX::ContAmtCurr ContAmtCurr_8("JPY");
      noContAmts_0_1_1.set(ContAmtCurr_8);
      ContAmtGrp_NoContAmts_8.insert(ContAmtCurr_8.getString());
      FIX::ContAmtType ContAmtType_8(10);
      noContAmts_0_1_1.set(ContAmtType_8);
      ContAmtGrp_NoContAmts_8.insert(ContAmtType_8.getString());
      FIX::ContAmtValue ContAmtValue_8;
      ContAmtValue_8.setString("21157414");
      noContAmts_0_1_1.set(ContAmtValue_8);
      ContAmtGrp_NoContAmts_8.insert(ContAmtValue_8.getString());
      all_values.push_back(ContAmtGrp_NoContAmts_8);
      all_compo_names.insert("ContAmtGrp.NoContAmts");

      noSides_0_0.addGroup(noContAmts_0_1_1);
    }
    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_26;
      FIX::MiscFeeAmt MiscFeeAmt_26;
      MiscFeeAmt_26.setString("19856007");
      noMiscFees_0_1_0.set(MiscFeeAmt_26);
      MiscFeesGrp_NoMiscFees_26.insert(MiscFeeAmt_26.getString());
      FIX::MiscFeeBasis MiscFeeBasis_26(0);
      noMiscFees_0_1_0.set(MiscFeeBasis_26);
      MiscFeesGrp_NoMiscFees_26.insert(MiscFeeBasis_26.getString());
      FIX::MiscFeeCurr MiscFeeCurr_26("CHF");
      noMiscFees_0_1_0.set(MiscFeeCurr_26);
      MiscFeesGrp_NoMiscFees_26.insert(MiscFeeCurr_26.getString());
      FIX::MiscFeeType MiscFeeType_26("STRING_3");
      noMiscFees_0_1_0.set(MiscFeeType_26);
      MiscFeesGrp_NoMiscFees_26.insert(MiscFeeType_26.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_26);
      all_compo_names.insert("MiscFeesGrp.NoMiscFees");

      noSides_0_0.addGroup(noMiscFees_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoMiscFees noMiscFees_0_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_27;
      FIX::MiscFeeAmt MiscFeeAmt_27;
      MiscFeeAmt_27.setString("17256707");
      noMiscFees_0_1_1.set(MiscFeeAmt_27);
      MiscFeesGrp_NoMiscFees_27.insert(MiscFeeAmt_27.getString());
      FIX::MiscFeeBasis MiscFeeBasis_27(0);
      noMiscFees_0_1_1.set(MiscFeeBasis_27);
      MiscFeesGrp_NoMiscFees_27.insert(MiscFeeBasis_27.getString());
      FIX::MiscFeeCurr MiscFeeCurr_27("JPY");
      noMiscFees_0_1_1.set(MiscFeeCurr_27);
      MiscFeesGrp_NoMiscFees_27.insert(MiscFeeCurr_27.getString());
      FIX::MiscFeeType MiscFeeType_27("STRING_14");
      noMiscFees_0_1_1.set(MiscFeeType_27);
      MiscFeesGrp_NoMiscFees_27.insert(MiscFeeType_27.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_27);
      all_compo_names.insert("MiscFeesGrp.NoMiscFees");

      noSides_0_0.addGroup(noMiscFees_0_1_1);
    }
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_158;
      FIX::PartyID PartyID_158("STRING_1020470122");
      noPartyIDs_0_1_0.set(PartyID_158);
      Parties_NoPartyIDs_158.insert(PartyID_158.getString());
      FIX::PartyIDSource PartyIDSource_158('8');
      noPartyIDs_0_1_0.set(PartyIDSource_158);
      Parties_NoPartyIDs_158.insert(PartyIDSource_158.getString());
      FIX::PartyRole PartyRole_158(72);
      noPartyIDs_0_1_0.set(PartyRole_158);
      Parties_NoPartyIDs_158.insert(PartyRole_158.getString());
      all_values.push_back(Parties_NoPartyIDs_158);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_337;
        FIX::PartySubID PartySubID_337("STRING_2088023305");
        noPartySubIDs_0_0_2_0.set(PartySubID_337);
        PtysSubGrp_NoPartySubIDs_337.insert(PartySubID_337.getString());
        FIX::PartySubIDType PartySubIDType_337(2);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_337);
        PtysSubGrp_NoPartySubIDs_337.insert(PartySubIDType_337.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_337);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_338;
        FIX::PartySubID PartySubID_338("STRING_215509454");
        noPartySubIDs_0_0_2_1.set(PartySubID_338);
        PtysSubGrp_NoPartySubIDs_338.insert(PartySubID_338.getString());
        FIX::PartySubIDType PartySubIDType_338(21);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_338);
        PtysSubGrp_NoPartySubIDs_338.insert(PartySubIDType_338.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_338);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_339;
        FIX::PartySubID PartySubID_339("STRING_474783912");
        noPartySubIDs_0_0_2_2.set(PartySubID_339);
        PtysSubGrp_NoPartySubIDs_339.insert(PartySubID_339.getString());
        FIX::PartySubIDType PartySubIDType_339(2);
        noPartySubIDs_0_0_2_2.set(PartySubIDType_339);
        PtysSubGrp_NoPartySubIDs_339.insert(PartySubIDType_339.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_339);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_159;
      FIX::PartyID PartyID_159("STRING_336698596");
      noPartyIDs_0_1_1.set(PartyID_159);
      Parties_NoPartyIDs_159.insert(PartyID_159.getString());
      FIX::PartyIDSource PartyIDSource_159('3');
      noPartyIDs_0_1_1.set(PartyIDSource_159);
      Parties_NoPartyIDs_159.insert(PartyIDSource_159.getString());
      FIX::PartyRole PartyRole_159(66);
      noPartyIDs_0_1_1.set(PartyRole_159);
      Parties_NoPartyIDs_159.insert(PartyRole_159.getString());
      all_values.push_back(Parties_NoPartyIDs_159);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_340;
        FIX::PartySubID PartySubID_340("STRING_962341264");
        noPartySubIDs_0_1_2_0.set(PartySubID_340);
        PtysSubGrp_NoPartySubIDs_340.insert(PartySubID_340.getString());
        FIX::PartySubIDType PartySubIDType_340(12);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_340);
        PtysSubGrp_NoPartySubIDs_340.insert(PartySubIDType_340.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_340);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_160;
      FIX::PartyID PartyID_160("STRING_1592215727");
      noPartyIDs_0_1_2.set(PartyID_160);
      Parties_NoPartyIDs_160.insert(PartyID_160.getString());
      FIX::PartyIDSource PartyIDSource_160('D');
      noPartyIDs_0_1_2.set(PartyIDSource_160);
      Parties_NoPartyIDs_160.insert(PartyIDSource_160.getString());
      FIX::PartyRole PartyRole_160(27);
      noPartyIDs_0_1_2.set(PartyRole_160);
      Parties_NoPartyIDs_160.insert(PartyRole_160.getString());
      all_values.push_back(Parties_NoPartyIDs_160);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_341;
        FIX::PartySubID PartySubID_341("STRING_1531542185");
        noPartySubIDs_0_2_2_0.set(PartySubID_341);
        PtysSubGrp_NoPartySubIDs_341.insert(PartySubID_341.getString());
        FIX::PartySubIDType PartySubIDType_341(21);
        noPartySubIDs_0_2_2_0.set(PartySubIDType_341);
        PtysSubGrp_NoPartySubIDs_341.insert(PartySubIDType_341.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_341);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_342;
        FIX::PartySubID PartySubID_342("STRING_1651730968");
        noPartySubIDs_0_2_2_1.set(PartySubID_342);
        PtysSubGrp_NoPartySubIDs_342.insert(PartySubID_342.getString());
        FIX::PartySubIDType PartySubIDType_342(1);
        noPartySubIDs_0_2_2_1.set(PartySubIDType_342);
        PtysSubGrp_NoPartySubIDs_342.insert(PartySubIDType_342.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_342);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_1);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails noSettlDetails_0_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_12;
      FIX::SettlObligSource SettlObligSource_12('1');
      noSettlDetails_0_1_0.set(SettlObligSource_12);
      SettlDetails_NoSettlDetails_12.insert(SettlObligSource_12.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_12);
      all_compo_names.insert("SettlDetails.NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_49;
        FIX::SettlPartyID SettlPartyID_49("STRING_1869958927");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_49);
        SettlParties_NoSettlPartyIDs_49.insert(SettlPartyID_49.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_49('1');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_49);
        SettlParties_NoSettlPartyIDs_49.insert(SettlPartyIDSource_49.getString());
        FIX::SettlPartyRole SettlPartyRole_49(671291272);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_49);
        SettlParties_NoSettlPartyIDs_49.insert(SettlPartyRole_49.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_49);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_92;
          FIX::SettlPartySubID SettlPartySubID_92("STRING_477727618");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_92);
          SettlPtysSubGrp_NoSettlPartySubIDs_92.insert(SettlPartySubID_92.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_92(1563099636);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_92);
          SettlPtysSubGrp_NoSettlPartySubIDs_92.insert(SettlPartySubIDType_92.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_92);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_93;
          FIX::SettlPartySubID SettlPartySubID_93("STRING_708533582");
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubID_93);
          SettlPtysSubGrp_NoSettlPartySubIDs_93.insert(SettlPartySubID_93.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_93(921105718);
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubIDType_93);
          SettlPtysSubGrp_NoSettlPartySubIDs_93.insert(SettlPartySubIDType_93.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_93);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
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
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_5;
      FIX::SideTrdRegTimestamp SideTrdRegTimestamp_5(FIX::UTCTIMESTAMP(12, 21, 6, 4, 2, 2007));
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestamp_5);
      SideTrdRegTS_NoSideTrdRegTS_5.insert(SideTrdRegTimestamp_5.getString());
      FIX::SideTrdRegTimestampSrc SideTrdRegTimestampSrc_5("STRING_1556215260");
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestampSrc_5);
      SideTrdRegTS_NoSideTrdRegTS_5.insert(SideTrdRegTimestampSrc_5.getString());
      FIX::SideTrdRegTimestampType SideTrdRegTimestampType_5(1426607558);
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestampType_5);
      SideTrdRegTS_NoSideTrdRegTS_5.insert(SideTrdRegTimestampType_5.getString());
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_5);
      all_compo_names.insert("SideTrdRegTS.NoSideTrdRegTS");

      noSides_0_0.addGroup(noSideTrdRegTS_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSideTrdRegTS noSideTrdRegTS_0_1_1;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_6;
      FIX::SideTrdRegTimestamp SideTrdRegTimestamp_6(FIX::UTCTIMESTAMP(15, 18, 15, 1, 12, 2008));
      noSideTrdRegTS_0_1_1.set(SideTrdRegTimestamp_6);
      SideTrdRegTS_NoSideTrdRegTS_6.insert(SideTrdRegTimestamp_6.getString());
      FIX::SideTrdRegTimestampSrc SideTrdRegTimestampSrc_6("STRING_1841529430");
      noSideTrdRegTS_0_1_1.set(SideTrdRegTimestampSrc_6);
      SideTrdRegTS_NoSideTrdRegTS_6.insert(SideTrdRegTimestampSrc_6.getString());
      FIX::SideTrdRegTimestampType SideTrdRegTimestampType_6(339627499);
      noSideTrdRegTS_0_1_1.set(SideTrdRegTimestampType_6);
      SideTrdRegTS_NoSideTrdRegTS_6.insert(SideTrdRegTimestampType_6.getString());
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_6);
      all_compo_names.insert("SideTrdRegTS.NoSideTrdRegTS");

      noSides_0_0.addGroup(noSideTrdRegTS_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSideTrdRegTS noSideTrdRegTS_0_1_2;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_7;
      FIX::SideTrdRegTimestamp SideTrdRegTimestamp_7(FIX::UTCTIMESTAMP(11, 40, 15, 6, 5, 2008));
      noSideTrdRegTS_0_1_2.set(SideTrdRegTimestamp_7);
      SideTrdRegTS_NoSideTrdRegTS_7.insert(SideTrdRegTimestamp_7.getString());
      FIX::SideTrdRegTimestampSrc SideTrdRegTimestampSrc_7("STRING_238530374");
      noSideTrdRegTS_0_1_2.set(SideTrdRegTimestampSrc_7);
      SideTrdRegTS_NoSideTrdRegTS_7.insert(SideTrdRegTimestampSrc_7.getString());
      FIX::SideTrdRegTimestampType SideTrdRegTimestampType_7(1504530675);
      noSideTrdRegTS_0_1_2.set(SideTrdRegTimestampType_7);
      SideTrdRegTS_NoSideTrdRegTS_7.insert(SideTrdRegTimestampType_7.getString());
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_7);
      all_compo_names.insert("SideTrdRegTS.NoSideTrdRegTS");

      noSides_0_0.addGroup(noSideTrdRegTS_0_1_2);
    }
    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_62;
      FIX::StipulationType StipulationType_62("STRING_RESTRICTED");
      noStipulations_0_1_0.set(StipulationType_62);
      Stipulations_NoStipulations_62.insert(StipulationType_62.getString());
      FIX::StipulationValue StipulationValue_62("STRING_278152745");
      noStipulations_0_1_0.set(StipulationValue_62);
      Stipulations_NoStipulations_62.insert(StipulationValue_62.getString());
      all_values.push_back(Stipulations_NoStipulations_62);
      all_compo_names.insert("Stipulations.NoStipulations");

      noSides_0_0.addGroup(noStipulations_0_1_0);
    }
    // TradeReportOrderDetail
    multiset<string> TradeReportOrderDetail_3;
    FIX::BookingType BookingType_37(0);
    noSides_0_0.set(BookingType_37);
    TradeReportOrderDetail_3.insert(BookingType_37.getString());
    FIX::ClOrdID ClOrdID_50("STRING_1775785090");
    noSides_0_0.set(ClOrdID_50);
    TradeReportOrderDetail_3.insert(ClOrdID_50.getString());
    FIX::CumQty CumQty_6;
    CumQty_6.setString("14147679");
    noSides_0_0.set(CumQty_6);
    TradeReportOrderDetail_3.insert(CumQty_6.getString());
    FIX::ExecInst ExecInst_16("MULTIPLECHARVALUE_d");
    noSides_0_0.set(ExecInst_16);
    TradeReportOrderDetail_3.insert(ExecInst_16.getString());
    FIX::ExpireTime ExpireTime_28(FIX::UTCTIMESTAMP(1, 12, 14, 18, 4, 2006));
    noSides_0_0.set(ExpireTime_28);
    TradeReportOrderDetail_3.insert(ExpireTime_28.getString());
    FIX::LeavesQty LeavesQty_5;
    LeavesQty_5.setString("11888258");
    noSides_0_0.set(LeavesQty_5);
    TradeReportOrderDetail_3.insert(LeavesQty_5.getString());
    FIX::ListID ListID_29("STRING_800290921");
    noSides_0_0.set(ListID_29);
    TradeReportOrderDetail_3.insert(ListID_29.getString());
    FIX::LotType LotType_39('1');
    noSides_0_0.set(LotType_39);
    TradeReportOrderDetail_3.insert(LotType_39.getString());
    FIX::OrdStatus OrdStatus_6('8');
    noSides_0_0.set(OrdStatus_6);
    TradeReportOrderDetail_3.insert(OrdStatus_6.getString());
    FIX::OrdType OrdType_96('D');
    noSides_0_0.set(OrdType_96);
    TradeReportOrderDetail_3.insert(OrdType_96.getString());
    FIX::OrderCapacity OrderCapacity_39('R');
    noSides_0_0.set(OrderCapacity_39);
    TradeReportOrderDetail_3.insert(OrderCapacity_39.getString());
    FIX::OrderID OrderID_35("STRING_1708476040");
    noSides_0_0.set(OrderID_35);
    TradeReportOrderDetail_3.insert(OrderID_35.getString());
    FIX::OrderInputDevice OrderInputDevice_3("STRING_1975298599");
    noSides_0_0.set(OrderInputDevice_3);
    TradeReportOrderDetail_3.insert(OrderInputDevice_3.getString());
    FIX::OrderRestrictions OrderRestrictions_36("MULTIPLECHARVALUE_9");
    noSides_0_0.set(OrderRestrictions_36);
    TradeReportOrderDetail_3.insert(OrderRestrictions_36.getString());
    FIX::OrigCustOrderCapacity OrigCustOrderCapacity_3(1);
    noSides_0_0.set(OrigCustOrderCapacity_3);
    TradeReportOrderDetail_3.insert(OrigCustOrderCapacity_3.getString());
    FIX::OrigOrdModTime OrigOrdModTime_8(FIX::UTCTIMESTAMP(20, 26, 0, 24, 6, 2003));
    noSides_0_0.set(OrigOrdModTime_8);
    TradeReportOrderDetail_3.insert(OrigOrdModTime_8.getString());
    FIX::Price Price_29;
    Price_29.setString("3499777");
    noSides_0_0.set(Price_29);
    TradeReportOrderDetail_3.insert(Price_29.getString());
    FIX::RefOrdIDReason RefOrdIDReason_3(1);
    noSides_0_0.set(RefOrdIDReason_3);
    TradeReportOrderDetail_3.insert(RefOrdIDReason_3.getString());
    FIX::RefOrderID RefOrderID_8("STRING_2059363340");
    noSides_0_0.set(RefOrderID_8);
    TradeReportOrderDetail_3.insert(RefOrderID_8.getString());
    FIX::RefOrderIDSource RefOrderIDSource_8('2');
    noSides_0_0.set(RefOrderIDSource_8);
    TradeReportOrderDetail_3.insert(RefOrderIDSource_8.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_43("STRING_273245212");
    noSides_0_0.set(SecondaryClOrdID_43);
    TradeReportOrderDetail_3.insert(SecondaryClOrdID_43.getString());
    FIX::SecondaryOrderID SecondaryOrderID_27("STRING_1326647609");
    noSides_0_0.set(SecondaryOrderID_27);
    TradeReportOrderDetail_3.insert(SecondaryOrderID_27.getString());
    FIX::StopPx StopPx_13;
    StopPx_13.setString("10828629");
    noSides_0_0.set(StopPx_13);
    TradeReportOrderDetail_3.insert(StopPx_13.getString());
    FIX::TimeInForce TimeInForce_77('1');
    noSides_0_0.set(TimeInForce_77);
    TradeReportOrderDetail_3.insert(TimeInForce_77.getString());
    FIX::TransBkdTime TransBkdTime_7(FIX::UTCTIMESTAMP(2, 15, 16, 1, 9, 2012));
    noSides_0_0.set(TransBkdTime_7);
    TradeReportOrderDetail_3.insert(TransBkdTime_7.getString());
    all_values.push_back(TradeReportOrderDetail_3);
    all_compo_names.insert("TradeReportOrderDetail");

    // DisplayInstruction
    multiset<string> DisplayInstruction_13;
    FIX::DisplayHighQty DisplayHighQty_13;
    DisplayHighQty_13.setString("3144488");
    noSides_0_0.set(DisplayHighQty_13);
    DisplayInstruction_13.insert(DisplayHighQty_13.getString());
    FIX::DisplayLowQty DisplayLowQty_13;
    DisplayLowQty_13.setString("6659712");
    noSides_0_0.set(DisplayLowQty_13);
    DisplayInstruction_13.insert(DisplayLowQty_13.getString());
    FIX::DisplayMethod DisplayMethod_13('1');
    noSides_0_0.set(DisplayMethod_13);
    DisplayInstruction_13.insert(DisplayMethod_13.getString());
    FIX::DisplayMinIncr DisplayMinIncr_13;
    DisplayMinIncr_13.setString("19501199");
    noSides_0_0.set(DisplayMinIncr_13);
    DisplayInstruction_13.insert(DisplayMinIncr_13.getString());
    FIX::DisplayQty DisplayQty_13;
    DisplayQty_13.setString("19790776");
    noSides_0_0.set(DisplayQty_13);
    DisplayInstruction_13.insert(DisplayQty_13.getString());
    FIX::DisplayWhen DisplayWhen_13('2');
    noSides_0_0.set(DisplayWhen_13);
    DisplayInstruction_13.insert(DisplayWhen_13.getString());
    FIX::RefreshQty RefreshQty_13;
    RefreshQty_13.setString("17779349");
    noSides_0_0.set(RefreshQty_13);
    DisplayInstruction_13.insert(RefreshQty_13.getString());
    FIX::SecondaryDisplayQty SecondaryDisplayQty_13;
    SecondaryDisplayQty_13.setString("8948874");
    noSides_0_0.set(SecondaryDisplayQty_13);
    DisplayInstruction_13.insert(SecondaryDisplayQty_13.getString());
    all_values.push_back(DisplayInstruction_13);
    all_compo_names.insert("DisplayInstruction");

    // OrderQtyData
    multiset<string> OrderQtyData_28;
    FIX::CashOrderQty CashOrderQty_28;
    CashOrderQty_28.setString("2201");
    noSides_0_0.set(CashOrderQty_28);
    OrderQtyData_28.insert(CashOrderQty_28.getString());
    FIX::OrderPercent OrderPercent_28;
    OrderPercent_28.setString("17.930000");
    noSides_0_0.set(OrderPercent_28);
    OrderQtyData_28.insert(OrderPercent_28.getString());
    FIX::OrderQty OrderQty_38;
    OrderQty_38.setString("360203");
    noSides_0_0.set(OrderQty_38);
    OrderQtyData_28.insert(OrderQty_38.getString());
    FIX::RoundingDirection RoundingDirection_28('1');
    noSides_0_0.set(RoundingDirection_28);
    OrderQtyData_28.insert(RoundingDirection_28.getString());
    FIX::RoundingModulus RoundingModulus_28;
    RoundingModulus_28.setString("13044917");
    noSides_0_0.set(RoundingModulus_28);
    OrderQtyData_28.insert(RoundingModulus_28.getString());
    all_values.push_back(OrderQtyData_28);
    all_compo_names.insert("OrderQtyData");

    // TrdAllocGrp
    // Group TrdAllocGrp.NoAllocs
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs noAllocs_0_1_0;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_6;
      FIX::AllocAccount AllocAccount_44("STRING_1304933080");
      noAllocs_0_1_0.set(AllocAccount_44);
      TrdAllocGrp_NoAllocs_6.insert(AllocAccount_44.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_44(938218660);
      noAllocs_0_1_0.set(AllocAcctIDSource_44);
      TrdAllocGrp_NoAllocs_6.insert(AllocAcctIDSource_44.getString());
      FIX::AllocClearingFeeIndicator AllocClearingFeeIndicator_6("STRING_423745415");
      noAllocs_0_1_0.set(AllocClearingFeeIndicator_6);
      TrdAllocGrp_NoAllocs_6.insert(AllocClearingFeeIndicator_6.getString());
      FIX::AllocCustomerCapacity AllocCustomerCapacity_13("STRING_1949876850");
      noAllocs_0_1_0.set(AllocCustomerCapacity_13);
      TrdAllocGrp_NoAllocs_6.insert(AllocCustomerCapacity_13.getString());
      FIX::AllocMethod AllocMethod_10(2);
      noAllocs_0_1_0.set(AllocMethod_10);
      TrdAllocGrp_NoAllocs_6.insert(AllocMethod_10.getString());
      FIX::AllocQty AllocQty_42;
      AllocQty_42.setString("4421091");
      noAllocs_0_1_0.set(AllocQty_42);
      TrdAllocGrp_NoAllocs_6.insert(AllocQty_42.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_38("EUR");
      noAllocs_0_1_0.set(AllocSettlCurrency_38);
      TrdAllocGrp_NoAllocs_6.insert(AllocSettlCurrency_38.getString());
      FIX::IndividualAllocID IndividualAllocID_43("STRING_1524972092");
      noAllocs_0_1_0.set(IndividualAllocID_43);
      TrdAllocGrp_NoAllocs_6.insert(IndividualAllocID_43.getString());
      FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_13("STRING_1280690115");
      noAllocs_0_1_0.set(SecondaryIndividualAllocID_13);
      TrdAllocGrp_NoAllocs_6.insert(SecondaryIndividualAllocID_13.getString());
      all_values.push_back(TrdAllocGrp_NoAllocs_6);
      all_compo_names.insert("TrdAllocGrp.NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_48;
        FIX::Nested2PartyID Nested2PartyID_48("STRING_1110178767");
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyID_48);
        NestedParties2_NoNested2PartyIDs_48.insert(Nested2PartyID_48.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_48('1');
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyIDSource_48);
        NestedParties2_NoNested2PartyIDs_48.insert(Nested2PartyIDSource_48.getString());
        FIX::Nested2PartyRole Nested2PartyRole_48(590003444);
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyRole_48);
        NestedParties2_NoNested2PartyIDs_48.insert(Nested2PartyRole_48.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_48);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_101;
          FIX::Nested2PartySubID Nested2PartySubID_101("STRING_24438046");
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubID_101);
          NstdPtys2SubGrp_NoNested2PartySubIDs_101.insert(Nested2PartySubID_101.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_101(1513351346);
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubIDType_101);
          NstdPtys2SubGrp_NoNested2PartySubIDs_101.insert(Nested2PartySubIDType_101.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_101);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_102;
          FIX::Nested2PartySubID Nested2PartySubID_102("STRING_938785603");
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubID_102);
          NstdPtys2SubGrp_NoNested2PartySubIDs_102.insert(Nested2PartySubID_102.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_102(690409250);
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubIDType_102);
          NstdPtys2SubGrp_NoNested2PartySubIDs_102.insert(Nested2PartySubIDType_102.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_102);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_1);
        }
        noAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_49;
        FIX::Nested2PartyID Nested2PartyID_49("STRING_156162210");
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyID_49);
        NestedParties2_NoNested2PartyIDs_49.insert(Nested2PartyID_49.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_49('7');
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyIDSource_49);
        NestedParties2_NoNested2PartyIDs_49.insert(Nested2PartyIDSource_49.getString());
        FIX::Nested2PartyRole Nested2PartyRole_49(522003219);
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyRole_49);
        NestedParties2_NoNested2PartyIDs_49.insert(Nested2PartyRole_49.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_49);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_103;
          FIX::Nested2PartySubID Nested2PartySubID_103("STRING_371873215");
          noNested2PartySubIDs_0_0_1_3_0.set(Nested2PartySubID_103);
          NstdPtys2SubGrp_NoNested2PartySubIDs_103.insert(Nested2PartySubID_103.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_103(1416890660);
          noNested2PartySubIDs_0_0_1_3_0.set(Nested2PartySubIDType_103);
          NstdPtys2SubGrp_NoNested2PartySubIDs_103.insert(Nested2PartySubIDType_103.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_103);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_0);
        }
        noAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_50;
        FIX::Nested2PartyID Nested2PartyID_50("STRING_507669296");
        noNested2PartyIDs_0_0_2_2.set(Nested2PartyID_50);
        NestedParties2_NoNested2PartyIDs_50.insert(Nested2PartyID_50.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_50('1');
        noNested2PartyIDs_0_0_2_2.set(Nested2PartyIDSource_50);
        NestedParties2_NoNested2PartyIDs_50.insert(Nested2PartyIDSource_50.getString());
        FIX::Nested2PartyRole Nested2PartyRole_50(1452911042);
        noNested2PartyIDs_0_0_2_2.set(Nested2PartyRole_50);
        NestedParties2_NoNested2PartyIDs_50.insert(Nested2PartyRole_50.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_50);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_104;
          FIX::Nested2PartySubID Nested2PartySubID_104("STRING_556693073");
          noNested2PartySubIDs_0_0_2_3_0.set(Nested2PartySubID_104);
          NstdPtys2SubGrp_NoNested2PartySubIDs_104.insert(Nested2PartySubID_104.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_104(1526678753);
          noNested2PartySubIDs_0_0_2_3_0.set(Nested2PartySubIDType_104);
          NstdPtys2SubGrp_NoNested2PartySubIDs_104.insert(Nested2PartySubIDType_104.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_104);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_2.addGroup(noNested2PartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_105;
          FIX::Nested2PartySubID Nested2PartySubID_105("STRING_1272171996");
          noNested2PartySubIDs_0_0_2_3_1.set(Nested2PartySubID_105);
          NstdPtys2SubGrp_NoNested2PartySubIDs_105.insert(Nested2PartySubID_105.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_105(1494911733);
          noNested2PartySubIDs_0_0_2_3_1.set(Nested2PartySubIDType_105);
          NstdPtys2SubGrp_NoNested2PartySubIDs_105.insert(Nested2PartySubIDType_105.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_105);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_2.addGroup(noNested2PartySubIDs_0_0_2_3_1);
        }
        noAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_2);
      }
      noSides_0_0.addGroup(noAllocs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs noAllocs_0_1_1;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_7;
      FIX::AllocAccount AllocAccount_45("STRING_1950424168");
      noAllocs_0_1_1.set(AllocAccount_45);
      TrdAllocGrp_NoAllocs_7.insert(AllocAccount_45.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_45(1074565198);
      noAllocs_0_1_1.set(AllocAcctIDSource_45);
      TrdAllocGrp_NoAllocs_7.insert(AllocAcctIDSource_45.getString());
      FIX::AllocClearingFeeIndicator AllocClearingFeeIndicator_7("STRING_197526437");
      noAllocs_0_1_1.set(AllocClearingFeeIndicator_7);
      TrdAllocGrp_NoAllocs_7.insert(AllocClearingFeeIndicator_7.getString());
      FIX::AllocCustomerCapacity AllocCustomerCapacity_14("STRING_245049663");
      noAllocs_0_1_1.set(AllocCustomerCapacity_14);
      TrdAllocGrp_NoAllocs_7.insert(AllocCustomerCapacity_14.getString());
      FIX::AllocMethod AllocMethod_11(1);
      noAllocs_0_1_1.set(AllocMethod_11);
      TrdAllocGrp_NoAllocs_7.insert(AllocMethod_11.getString());
      FIX::AllocQty AllocQty_43;
      AllocQty_43.setString("2267887");
      noAllocs_0_1_1.set(AllocQty_43);
      TrdAllocGrp_NoAllocs_7.insert(AllocQty_43.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_39("EUR");
      noAllocs_0_1_1.set(AllocSettlCurrency_39);
      TrdAllocGrp_NoAllocs_7.insert(AllocSettlCurrency_39.getString());
      FIX::IndividualAllocID IndividualAllocID_44("STRING_1082270105");
      noAllocs_0_1_1.set(IndividualAllocID_44);
      TrdAllocGrp_NoAllocs_7.insert(IndividualAllocID_44.getString());
      FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_14("STRING_732716874");
      noAllocs_0_1_1.set(SecondaryIndividualAllocID_14);
      TrdAllocGrp_NoAllocs_7.insert(SecondaryIndividualAllocID_14.getString());
      all_values.push_back(TrdAllocGrp_NoAllocs_7);
      all_compo_names.insert("TrdAllocGrp.NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_51;
        FIX::Nested2PartyID Nested2PartyID_51("STRING_1672273549");
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyID_51);
        NestedParties2_NoNested2PartyIDs_51.insert(Nested2PartyID_51.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_51('1');
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyIDSource_51);
        NestedParties2_NoNested2PartyIDs_51.insert(Nested2PartyIDSource_51.getString());
        FIX::Nested2PartyRole Nested2PartyRole_51(1332496468);
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyRole_51);
        NestedParties2_NoNested2PartyIDs_51.insert(Nested2PartyRole_51.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_51);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_106;
          FIX::Nested2PartySubID Nested2PartySubID_106("STRING_148355554");
          noNested2PartySubIDs_0_1_0_3_0.set(Nested2PartySubID_106);
          NstdPtys2SubGrp_NoNested2PartySubIDs_106.insert(Nested2PartySubID_106.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_106(2022905719);
          noNested2PartySubIDs_0_1_0_3_0.set(Nested2PartySubIDType_106);
          NstdPtys2SubGrp_NoNested2PartySubIDs_106.insert(Nested2PartySubIDType_106.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_106);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_107;
          FIX::Nested2PartySubID Nested2PartySubID_107("STRING_1194303458");
          noNested2PartySubIDs_0_1_0_3_1.set(Nested2PartySubID_107);
          NstdPtys2SubGrp_NoNested2PartySubIDs_107.insert(Nested2PartySubID_107.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_107(889777487);
          noNested2PartySubIDs_0_1_0_3_1.set(Nested2PartySubIDType_107);
          NstdPtys2SubGrp_NoNested2PartySubIDs_107.insert(Nested2PartySubIDType_107.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_107);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_1);
        }
        noAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_0);
      }
      noSides_0_0.addGroup(noAllocs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs noAllocs_0_1_2;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_8;
      FIX::AllocAccount AllocAccount_46("STRING_397425290");
      noAllocs_0_1_2.set(AllocAccount_46);
      TrdAllocGrp_NoAllocs_8.insert(AllocAccount_46.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_46(1701752573);
      noAllocs_0_1_2.set(AllocAcctIDSource_46);
      TrdAllocGrp_NoAllocs_8.insert(AllocAcctIDSource_46.getString());
      FIX::AllocClearingFeeIndicator AllocClearingFeeIndicator_8("STRING_1261650702");
      noAllocs_0_1_2.set(AllocClearingFeeIndicator_8);
      TrdAllocGrp_NoAllocs_8.insert(AllocClearingFeeIndicator_8.getString());
      FIX::AllocCustomerCapacity AllocCustomerCapacity_15("STRING_1814315950");
      noAllocs_0_1_2.set(AllocCustomerCapacity_15);
      TrdAllocGrp_NoAllocs_8.insert(AllocCustomerCapacity_15.getString());
      FIX::AllocMethod AllocMethod_12(1);
      noAllocs_0_1_2.set(AllocMethod_12);
      TrdAllocGrp_NoAllocs_8.insert(AllocMethod_12.getString());
      FIX::AllocQty AllocQty_44;
      AllocQty_44.setString("5138520");
      noAllocs_0_1_2.set(AllocQty_44);
      TrdAllocGrp_NoAllocs_8.insert(AllocQty_44.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_40("GBP");
      noAllocs_0_1_2.set(AllocSettlCurrency_40);
      TrdAllocGrp_NoAllocs_8.insert(AllocSettlCurrency_40.getString());
      FIX::IndividualAllocID IndividualAllocID_45("STRING_1070545135");
      noAllocs_0_1_2.set(IndividualAllocID_45);
      TrdAllocGrp_NoAllocs_8.insert(IndividualAllocID_45.getString());
      FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_15("STRING_498938450");
      noAllocs_0_1_2.set(SecondaryIndividualAllocID_15);
      TrdAllocGrp_NoAllocs_8.insert(SecondaryIndividualAllocID_15.getString());
      all_values.push_back(TrdAllocGrp_NoAllocs_8);
      all_compo_names.insert("TrdAllocGrp.NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_52;
        FIX::Nested2PartyID Nested2PartyID_52("STRING_417973220");
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyID_52);
        NestedParties2_NoNested2PartyIDs_52.insert(Nested2PartyID_52.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_52('3');
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyIDSource_52);
        NestedParties2_NoNested2PartyIDs_52.insert(Nested2PartyIDSource_52.getString());
        FIX::Nested2PartyRole Nested2PartyRole_52(228430685);
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyRole_52);
        NestedParties2_NoNested2PartyIDs_52.insert(Nested2PartyRole_52.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_52);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_108;
          FIX::Nested2PartySubID Nested2PartySubID_108("STRING_546928633");
          noNested2PartySubIDs_0_2_0_3_0.set(Nested2PartySubID_108);
          NstdPtys2SubGrp_NoNested2PartySubIDs_108.insert(Nested2PartySubID_108.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_108(1378634297);
          noNested2PartySubIDs_0_2_0_3_0.set(Nested2PartySubIDType_108);
          NstdPtys2SubGrp_NoNested2PartySubIDs_108.insert(Nested2PartySubIDType_108.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_108);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_0.addGroup(noNested2PartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_109;
          FIX::Nested2PartySubID Nested2PartySubID_109("STRING_842288407");
          noNested2PartySubIDs_0_2_0_3_1.set(Nested2PartySubID_109);
          NstdPtys2SubGrp_NoNested2PartySubIDs_109.insert(Nested2PartySubID_109.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_109(169466741);
          noNested2PartySubIDs_0_2_0_3_1.set(Nested2PartySubIDType_109);
          NstdPtys2SubGrp_NoNested2PartySubIDs_109.insert(Nested2PartySubIDType_109.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_109);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_0.addGroup(noNested2PartySubIDs_0_2_0_3_1);
        }
        noAllocs_0_1_2.addGroup(noNested2PartyIDs_0_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_53;
        FIX::Nested2PartyID Nested2PartyID_53("STRING_1662044377");
        noNested2PartyIDs_0_2_2_1.set(Nested2PartyID_53);
        NestedParties2_NoNested2PartyIDs_53.insert(Nested2PartyID_53.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_53('1');
        noNested2PartyIDs_0_2_2_1.set(Nested2PartyIDSource_53);
        NestedParties2_NoNested2PartyIDs_53.insert(Nested2PartyIDSource_53.getString());
        FIX::Nested2PartyRole Nested2PartyRole_53(902183615);
        noNested2PartyIDs_0_2_2_1.set(Nested2PartyRole_53);
        NestedParties2_NoNested2PartyIDs_53.insert(Nested2PartyRole_53.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_53);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_110;
          FIX::Nested2PartySubID Nested2PartySubID_110("STRING_1449348414");
          noNested2PartySubIDs_0_2_1_3_0.set(Nested2PartySubID_110);
          NstdPtys2SubGrp_NoNested2PartySubIDs_110.insert(Nested2PartySubID_110.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_110(111753566);
          noNested2PartySubIDs_0_2_1_3_0.set(Nested2PartySubIDType_110);
          NstdPtys2SubGrp_NoNested2PartySubIDs_110.insert(Nested2PartySubIDType_110.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_110);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_1.addGroup(noNested2PartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_111;
          FIX::Nested2PartySubID Nested2PartySubID_111("STRING_7631971");
          noNested2PartySubIDs_0_2_1_3_1.set(Nested2PartySubID_111);
          NstdPtys2SubGrp_NoNested2PartySubIDs_111.insert(Nested2PartySubID_111.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_111(340006014);
          noNested2PartySubIDs_0_2_1_3_1.set(Nested2PartySubIDType_111);
          NstdPtys2SubGrp_NoNested2PartySubIDs_111.insert(Nested2PartySubIDType_111.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_111);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_1.addGroup(noNested2PartySubIDs_0_2_1_3_1);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_112;
          FIX::Nested2PartySubID Nested2PartySubID_112("STRING_260109120");
          noNested2PartySubIDs_0_2_1_3_2.set(Nested2PartySubID_112);
          NstdPtys2SubGrp_NoNested2PartySubIDs_112.insert(Nested2PartySubID_112.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_112(2030537690);
          noNested2PartySubIDs_0_2_1_3_2.set(Nested2PartySubIDType_112);
          NstdPtys2SubGrp_NoNested2PartySubIDs_112.insert(Nested2PartySubIDType_112.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_112);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_1.addGroup(noNested2PartySubIDs_0_2_1_3_2);
        }
        noAllocs_0_1_2.addGroup(noNested2PartyIDs_0_2_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_54;
        FIX::Nested2PartyID Nested2PartyID_54("STRING_1534309472");
        noNested2PartyIDs_0_2_2_2.set(Nested2PartyID_54);
        NestedParties2_NoNested2PartyIDs_54.insert(Nested2PartyID_54.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_54('1');
        noNested2PartyIDs_0_2_2_2.set(Nested2PartyIDSource_54);
        NestedParties2_NoNested2PartyIDs_54.insert(Nested2PartyIDSource_54.getString());
        FIX::Nested2PartyRole Nested2PartyRole_54(280479332);
        noNested2PartyIDs_0_2_2_2.set(Nested2PartyRole_54);
        NestedParties2_NoNested2PartyIDs_54.insert(Nested2PartyRole_54.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_54);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_113;
          FIX::Nested2PartySubID Nested2PartySubID_113("STRING_264053662");
          noNested2PartySubIDs_0_2_2_3_0.set(Nested2PartySubID_113);
          NstdPtys2SubGrp_NoNested2PartySubIDs_113.insert(Nested2PartySubID_113.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_113(2094795283);
          noNested2PartySubIDs_0_2_2_3_0.set(Nested2PartySubIDType_113);
          NstdPtys2SubGrp_NoNested2PartySubIDs_113.insert(Nested2PartySubIDType_113.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_113);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_2.addGroup(noNested2PartySubIDs_0_2_2_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_114;
          FIX::Nested2PartySubID Nested2PartySubID_114("STRING_1150516619");
          noNested2PartySubIDs_0_2_2_3_1.set(Nested2PartySubID_114);
          NstdPtys2SubGrp_NoNested2PartySubIDs_114.insert(Nested2PartySubID_114.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_114(777905725);
          noNested2PartySubIDs_0_2_2_3_1.set(Nested2PartySubIDType_114);
          NstdPtys2SubGrp_NoNested2PartySubIDs_114.insert(Nested2PartySubIDType_114.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_114);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_2.addGroup(noNested2PartySubIDs_0_2_2_3_1);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_115;
          FIX::Nested2PartySubID Nested2PartySubID_115("STRING_1067054980");
          noNested2PartySubIDs_0_2_2_3_2.set(Nested2PartySubID_115);
          NstdPtys2SubGrp_NoNested2PartySubIDs_115.insert(Nested2PartySubID_115.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_115(1179693757);
          noNested2PartySubIDs_0_2_2_3_2.set(Nested2PartySubIDType_115);
          NstdPtys2SubGrp_NoNested2PartySubIDs_115.insert(Nested2PartySubIDType_115.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_115);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_2.addGroup(noNested2PartySubIDs_0_2_2_3_2);
        }
        noAllocs_0_1_2.addGroup(noNested2PartyIDs_0_2_2_2);
      }
      noSides_0_0.addGroup(noAllocs_0_1_2);
    }
    msg.addGroup(noSides_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoSides noSides_0_1;
    // TrdCapRptAckSideGrp.NoSides
    multiset<string> TrdCapRptAckSideGrp_NoSides_1;
    FIX::Account Account_49("STRING_1848450860");
    noSides_0_1.set(Account_49);
    TrdCapRptAckSideGrp_NoSides_1.insert(Account_49.getString());
    FIX::AccountType AccountType_42(2);
    noSides_0_1.set(AccountType_42);
    TrdCapRptAckSideGrp_NoSides_1.insert(AccountType_42.getString());
    FIX::AccruedInterestAmt AccruedInterestAmt_14;
    AccruedInterestAmt_14.setString("3335592");
    noSides_0_1.set(AccruedInterestAmt_14);
    TrdCapRptAckSideGrp_NoSides_1.insert(AccruedInterestAmt_14.getString());
    FIX::AccruedInterestRate AccruedInterestRate_9;
    AccruedInterestRate_9.setString("4.330000");
    noSides_0_1.set(AccruedInterestRate_9);
    TrdCapRptAckSideGrp_NoSides_1.insert(AccruedInterestRate_9.getString());
    FIX::AcctIDSource AcctIDSource_42(5);
    noSides_0_1.set(AcctIDSource_42);
    TrdCapRptAckSideGrp_NoSides_1.insert(AcctIDSource_42.getString());
    FIX::AggressorIndicator AggressorIndicator_5(false);
    noSides_0_1.set(AggressorIndicator_5);
    TrdCapRptAckSideGrp_NoSides_1.insert(AggressorIndicator_5.getString());
    FIX::AllocID AllocID_25("STRING_734440090");
    noSides_0_1.set(AllocID_25);
    TrdCapRptAckSideGrp_NoSides_1.insert(AllocID_25.getString());
    FIX::ComplianceID ComplianceID_16("STRING_267317386");
    noSides_0_1.set(ComplianceID_16);
    TrdCapRptAckSideGrp_NoSides_1.insert(ComplianceID_16.getString());
    FIX::Concession Concession_9;
    Concession_9.setString("19406242");
    noSides_0_1.set(Concession_9);
    TrdCapRptAckSideGrp_NoSides_1.insert(Concession_9.getString());
    FIX::CustOrderCapacity CustOrderCapacity_24(3);
    noSides_0_1.set(CustOrderCapacity_24);
    TrdCapRptAckSideGrp_NoSides_1.insert(CustOrderCapacity_24.getString());
    FIX::EndAccruedInterestAmt EndAccruedInterestAmt_14;
    EndAccruedInterestAmt_14.setString("4367841");
    noSides_0_1.set(EndAccruedInterestAmt_14);
    TrdCapRptAckSideGrp_NoSides_1.insert(EndAccruedInterestAmt_14.getString());
    FIX::EndCash EndCash_14;
    EndCash_14.setString("14551849");
    noSides_0_1.set(EndCash_14);
    TrdCapRptAckSideGrp_NoSides_1.insert(EndCash_14.getString());
    FIX::ExDate ExDate_6("LOCALMKTDATE_1353803363");
    noSides_0_1.set(ExDate_6);
    TrdCapRptAckSideGrp_NoSides_1.insert(ExDate_6.getString());
    FIX::ExchangeRule ExchangeRule_4("STRING_1338967742");
    noSides_0_1.set(ExchangeRule_4);
    TrdCapRptAckSideGrp_NoSides_1.insert(ExchangeRule_4.getString());
    FIX::InterestAtMaturity InterestAtMaturity_9;
    InterestAtMaturity_9.setString("1303204");
    noSides_0_1.set(InterestAtMaturity_9);
    TrdCapRptAckSideGrp_NoSides_1.insert(InterestAtMaturity_9.getString());
    FIX::NetGrossInd NetGrossInd_13(2);
    noSides_0_1.set(NetGrossInd_13);
    TrdCapRptAckSideGrp_NoSides_1.insert(NetGrossInd_13.getString());
    FIX::NetMoney NetMoney_9;
    NetMoney_9.setString("14507213");
    noSides_0_1.set(NetMoney_9);
    TrdCapRptAckSideGrp_NoSides_1.insert(NetMoney_9.getString());
    FIX::NumDaysInterest NumDaysInterest_9(137952430);
    noSides_0_1.set(NumDaysInterest_9);
    TrdCapRptAckSideGrp_NoSides_1.insert(NumDaysInterest_9.getString());
    FIX::OddLot OddLot_4(false);
    noSides_0_1.set(OddLot_4);
    TrdCapRptAckSideGrp_NoSides_1.insert(OddLot_4.getString());
    FIX::OrderCategory OrderCategory_5('9');
    noSides_0_1.set(OrderCategory_5);
    TrdCapRptAckSideGrp_NoSides_1.insert(OrderCategory_5.getString());
    FIX::OrderDelay OrderDelay_4(21006472);
    noSides_0_1.set(OrderDelay_4);
    TrdCapRptAckSideGrp_NoSides_1.insert(OrderDelay_4.getString());
    FIX::OrderDelayUnit OrderDelayUnit_4(3);
    noSides_0_1.set(OrderDelayUnit_4);
    TrdCapRptAckSideGrp_NoSides_1.insert(OrderDelayUnit_4.getString());
    FIX::PositionEffect PositionEffect_21('R');
    noSides_0_1.set(PositionEffect_21);
    TrdCapRptAckSideGrp_NoSides_1.insert(PositionEffect_21.getString());
    FIX::PreallocMethod PreallocMethod_18('1');
    noSides_0_1.set(PreallocMethod_18);
    TrdCapRptAckSideGrp_NoSides_1.insert(PreallocMethod_18.getString());
    FIX::ProcessCode ProcessCode_17('1');
    noSides_0_1.set(ProcessCode_17);
    TrdCapRptAckSideGrp_NoSides_1.insert(ProcessCode_17.getString());
    FIX::RptSeq RptSeq_8(977287052);
    noSides_0_1.set(RptSeq_8);
    TrdCapRptAckSideGrp_NoSides_1.insert(RptSeq_8.getString());
    FIX::SettlCurrAmt SettlCurrAmt_13;
    SettlCurrAmt_13.setString("2487974");
    noSides_0_1.set(SettlCurrAmt_13);
    TrdCapRptAckSideGrp_NoSides_1.insert(SettlCurrAmt_13.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_13;
    SettlCurrFxRate_13.setString("4741113");
    noSides_0_1.set(SettlCurrFxRate_13);
    TrdCapRptAckSideGrp_NoSides_1.insert(SettlCurrFxRate_13.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_13('D');
    noSides_0_1.set(SettlCurrFxRateCalc_13);
    TrdCapRptAckSideGrp_NoSides_1.insert(SettlCurrFxRateCalc_13.getString());
    FIX::Side Side_54('5');
    noSides_0_1.set(Side_54);
    TrdCapRptAckSideGrp_NoSides_1.insert(Side_54.getString());
    FIX::SideCurrency SideCurrency_4("CHF");
    noSides_0_1.set(SideCurrency_4);
    TrdCapRptAckSideGrp_NoSides_1.insert(SideCurrency_4.getString());
    FIX::SideExecID SideExecID_4("STRING_734362202");
    noSides_0_1.set(SideExecID_4);
    TrdCapRptAckSideGrp_NoSides_1.insert(SideExecID_4.getString());
    FIX::SideFillStationCd SideFillStationCd_4("STRING_1987364338");
    noSides_0_1.set(SideFillStationCd_4);
    TrdCapRptAckSideGrp_NoSides_1.insert(SideFillStationCd_4.getString());
    FIX::SideGrossTradeAmt SideGrossTradeAmt_4;
    SideGrossTradeAmt_4.setString("15751004");
    noSides_0_1.set(SideGrossTradeAmt_4);
    TrdCapRptAckSideGrp_NoSides_1.insert(SideGrossTradeAmt_4.getString());
    FIX::SideLastQty SideLastQty_4(454750954);
    noSides_0_1.set(SideLastQty_4);
    TrdCapRptAckSideGrp_NoSides_1.insert(SideLastQty_4.getString());
    FIX::SideMultiLegReportingType SideMultiLegReportingType_4(1);
    noSides_0_1.set(SideMultiLegReportingType_4);
    TrdCapRptAckSideGrp_NoSides_1.insert(SideMultiLegReportingType_4.getString());
    FIX::SideReasonCd SideReasonCd_4("STRING_162056865");
    noSides_0_1.set(SideReasonCd_4);
    TrdCapRptAckSideGrp_NoSides_1.insert(SideReasonCd_4.getString());
    FIX::SideSettlCurrency SideSettlCurrency_4("EUR");
    noSides_0_1.set(SideSettlCurrency_4);
    TrdCapRptAckSideGrp_NoSides_1.insert(SideSettlCurrency_4.getString());
    FIX::SideTradeReportID SideTradeReportID_4("STRING_1738785363");
    noSides_0_1.set(SideTradeReportID_4);
    TrdCapRptAckSideGrp_NoSides_1.insert(SideTradeReportID_4.getString());
    FIX::SideTrdSubTyp SideTrdSubTyp_4(1158852467);
    noSides_0_1.set(SideTrdSubTyp_4);
    TrdCapRptAckSideGrp_NoSides_1.insert(SideTrdSubTyp_4.getString());
    FIX::SolicitedFlag SolicitedFlag_18(false);
    noSides_0_1.set(SolicitedFlag_18);
    TrdCapRptAckSideGrp_NoSides_1.insert(SolicitedFlag_18.getString());
    FIX::StartCash StartCash_14;
    StartCash_14.setString("9451050");
    noSides_0_1.set(StartCash_14);
    TrdCapRptAckSideGrp_NoSides_1.insert(StartCash_14.getString());
    FIX::TimeBracket TimeBracket_5("STRING_350336562");
    noSides_0_1.set(TimeBracket_5);
    TrdCapRptAckSideGrp_NoSides_1.insert(TimeBracket_5.getString());
    FIX::TotalTakedown TotalTakedown_9;
    TotalTakedown_9.setString("17805166");
    noSides_0_1.set(TotalTakedown_9);
    TrdCapRptAckSideGrp_NoSides_1.insert(TotalTakedown_9.getString());
    FIX::TradeAllocIndicator TradeAllocIndicator_4(3);
    noSides_0_1.set(TradeAllocIndicator_4);
    TrdCapRptAckSideGrp_NoSides_1.insert(TradeAllocIndicator_4.getString());
    FIX::TradeInputDevice TradeInputDevice_5("STRING_1801057871");
    noSides_0_1.set(TradeInputDevice_5);
    TrdCapRptAckSideGrp_NoSides_1.insert(TradeInputDevice_5.getString());
    FIX::TradeInputSource TradeInputSource_7("STRING_1918469041");
    noSides_0_1.set(TradeInputSource_7);
    TrdCapRptAckSideGrp_NoSides_1.insert(TradeInputSource_7.getString());
    FIX::TradingSessionID TradingSessionID_121("STRING_6");
    noSides_0_1.set(TradingSessionID_121);
    TrdCapRptAckSideGrp_NoSides_1.insert(TradingSessionID_121.getString());
    FIX::TradingSessionSubID TradingSessionSubID_121("STRING_3");
    noSides_0_1.set(TradingSessionSubID_121);
    TrdCapRptAckSideGrp_NoSides_1.insert(TradingSessionSubID_121.getString());
    all_values.push_back(TrdCapRptAckSideGrp_NoSides_1);
    all_compo_names.insert("TrdCapRptAckSideGrp.NoSides");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoClearingInstructions noClearingInstructions_1_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_15;
      FIX::ClearingInstruction ClearingInstruction_15(2);
      noClearingInstructions_1_1_0.set(ClearingInstruction_15);
      ClrInstGrp_NoClearingInstructions_15.insert(ClearingInstruction_15.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_15);
      all_compo_names.insert("ClrInstGrp.NoClearingInstructions");

      noSides_0_1.addGroup(noClearingInstructions_1_1_0);
    }
    // CommissionData
    multiset<string> CommissionData_26;
    FIX::CommCurrency CommCurrency_26("CAN");
    noSides_0_1.set(CommCurrency_26);
    CommissionData_26.insert(CommCurrency_26.getString());
    FIX::CommType CommType_29('4');
    noSides_0_1.set(CommType_29);
    CommissionData_26.insert(CommType_29.getString());
    FIX::Commission Commission_29;
    Commission_29.setString("9074414");
    noSides_0_1.set(Commission_29);
    CommissionData_26.insert(Commission_29.getString());
    FIX::FundRenewWaiv FundRenewWaiv_26('Y');
    noSides_0_1.set(FundRenewWaiv_26);
    CommissionData_26.insert(FundRenewWaiv_26.getString());
    all_values.push_back(CommissionData_26);
    all_compo_names.insert("CommissionData");

    // ContAmtGrp
    // Group ContAmtGrp.NoContAmts
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoContAmts noContAmts_1_1_0;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_9;
      FIX::ContAmtCurr ContAmtCurr_9("CHF");
      noContAmts_1_1_0.set(ContAmtCurr_9);
      ContAmtGrp_NoContAmts_9.insert(ContAmtCurr_9.getString());
      FIX::ContAmtType ContAmtType_9(11);
      noContAmts_1_1_0.set(ContAmtType_9);
      ContAmtGrp_NoContAmts_9.insert(ContAmtType_9.getString());
      FIX::ContAmtValue ContAmtValue_9;
      ContAmtValue_9.setString("19713105");
      noContAmts_1_1_0.set(ContAmtValue_9);
      ContAmtGrp_NoContAmts_9.insert(ContAmtValue_9.getString());
      all_values.push_back(ContAmtGrp_NoContAmts_9);
      all_compo_names.insert("ContAmtGrp.NoContAmts");

      noSides_0_1.addGroup(noContAmts_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoContAmts noContAmts_1_1_1;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_10;
      FIX::ContAmtCurr ContAmtCurr_10("GBP");
      noContAmts_1_1_1.set(ContAmtCurr_10);
      ContAmtGrp_NoContAmts_10.insert(ContAmtCurr_10.getString());
      FIX::ContAmtType ContAmtType_10(10);
      noContAmts_1_1_1.set(ContAmtType_10);
      ContAmtGrp_NoContAmts_10.insert(ContAmtType_10.getString());
      FIX::ContAmtValue ContAmtValue_10;
      ContAmtValue_10.setString("6997570");
      noContAmts_1_1_1.set(ContAmtValue_10);
      ContAmtGrp_NoContAmts_10.insert(ContAmtValue_10.getString());
      all_values.push_back(ContAmtGrp_NoContAmts_10);
      all_compo_names.insert("ContAmtGrp.NoContAmts");

      noSides_0_1.addGroup(noContAmts_1_1_1);
    }
    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoMiscFees noMiscFees_1_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_28;
      FIX::MiscFeeAmt MiscFeeAmt_28;
      MiscFeeAmt_28.setString("15609842");
      noMiscFees_1_1_0.set(MiscFeeAmt_28);
      MiscFeesGrp_NoMiscFees_28.insert(MiscFeeAmt_28.getString());
      FIX::MiscFeeBasis MiscFeeBasis_28(1);
      noMiscFees_1_1_0.set(MiscFeeBasis_28);
      MiscFeesGrp_NoMiscFees_28.insert(MiscFeeBasis_28.getString());
      FIX::MiscFeeCurr MiscFeeCurr_28("EUR");
      noMiscFees_1_1_0.set(MiscFeeCurr_28);
      MiscFeesGrp_NoMiscFees_28.insert(MiscFeeCurr_28.getString());
      FIX::MiscFeeType MiscFeeType_28("STRING_12");
      noMiscFees_1_1_0.set(MiscFeeType_28);
      MiscFeesGrp_NoMiscFees_28.insert(MiscFeeType_28.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_28);
      all_compo_names.insert("MiscFeesGrp.NoMiscFees");

      noSides_0_1.addGroup(noMiscFees_1_1_0);
    }
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_161;
      FIX::PartyID PartyID_161("STRING_2097390997");
      noPartyIDs_1_1_0.set(PartyID_161);
      Parties_NoPartyIDs_161.insert(PartyID_161.getString());
      FIX::PartyIDSource PartyIDSource_161('D');
      noPartyIDs_1_1_0.set(PartyIDSource_161);
      Parties_NoPartyIDs_161.insert(PartyIDSource_161.getString());
      FIX::PartyRole PartyRole_161(75);
      noPartyIDs_1_1_0.set(PartyRole_161);
      Parties_NoPartyIDs_161.insert(PartyRole_161.getString());
      all_values.push_back(Parties_NoPartyIDs_161);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_343;
        FIX::PartySubID PartySubID_343("STRING_437104984");
        noPartySubIDs_1_0_2_0.set(PartySubID_343);
        PtysSubGrp_NoPartySubIDs_343.insert(PartySubID_343.getString());
        FIX::PartySubIDType PartySubIDType_343(25);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_343);
        PtysSubGrp_NoPartySubIDs_343.insert(PartySubIDType_343.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_343);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_344;
        FIX::PartySubID PartySubID_344("STRING_1999644259");
        noPartySubIDs_1_0_2_1.set(PartySubID_344);
        PtysSubGrp_NoPartySubIDs_344.insert(PartySubID_344.getString());
        FIX::PartySubIDType PartySubIDType_344(5);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_344);
        PtysSubGrp_NoPartySubIDs_344.insert(PartySubIDType_344.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_344);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_345;
        FIX::PartySubID PartySubID_345("STRING_1418460052");
        noPartySubIDs_1_0_2_2.set(PartySubID_345);
        PtysSubGrp_NoPartySubIDs_345.insert(PartySubID_345.getString());
        FIX::PartySubIDType PartySubIDType_345(12);
        noPartySubIDs_1_0_2_2.set(PartySubIDType_345);
        PtysSubGrp_NoPartySubIDs_345.insert(PartySubIDType_345.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_345);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_2);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_0);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails noSettlDetails_1_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_13;
      FIX::SettlObligSource SettlObligSource_13('1');
      noSettlDetails_1_1_0.set(SettlObligSource_13);
      SettlDetails_NoSettlDetails_13.insert(SettlObligSource_13.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_13);
      all_compo_names.insert("SettlDetails.NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_50;
        FIX::SettlPartyID SettlPartyID_50("STRING_491621829");
        noSettlPartyIDs_1_0_2_0.set(SettlPartyID_50);
        SettlParties_NoSettlPartyIDs_50.insert(SettlPartyID_50.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_50('1');
        noSettlPartyIDs_1_0_2_0.set(SettlPartyIDSource_50);
        SettlParties_NoSettlPartyIDs_50.insert(SettlPartyIDSource_50.getString());
        FIX::SettlPartyRole SettlPartyRole_50(1467852393);
        noSettlPartyIDs_1_0_2_0.set(SettlPartyRole_50);
        SettlParties_NoSettlPartyIDs_50.insert(SettlPartyRole_50.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_50);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_94;
          FIX::SettlPartySubID SettlPartySubID_94("STRING_1364856717");
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubID_94);
          SettlPtysSubGrp_NoSettlPartySubIDs_94.insert(SettlPartySubID_94.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_94(1603343563);
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubIDType_94);
          SettlPtysSubGrp_NoSettlPartySubIDs_94.insert(SettlPartySubIDType_94.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_94);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_95;
          FIX::SettlPartySubID SettlPartySubID_95("STRING_830599320");
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubID_95);
          SettlPtysSubGrp_NoSettlPartySubIDs_95.insert(SettlPartySubID_95.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_95(1609862802);
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubIDType_95);
          SettlPtysSubGrp_NoSettlPartySubIDs_95.insert(SettlPartySubIDType_95.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_95);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_1);
        }
        noSettlDetails_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_51;
        FIX::SettlPartyID SettlPartyID_51("STRING_1578715423");
        noSettlPartyIDs_1_0_2_1.set(SettlPartyID_51);
        SettlParties_NoSettlPartyIDs_51.insert(SettlPartyID_51.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_51('8');
        noSettlPartyIDs_1_0_2_1.set(SettlPartyIDSource_51);
        SettlParties_NoSettlPartyIDs_51.insert(SettlPartyIDSource_51.getString());
        FIX::SettlPartyRole SettlPartyRole_51(162136194);
        noSettlPartyIDs_1_0_2_1.set(SettlPartyRole_51);
        SettlParties_NoSettlPartyIDs_51.insert(SettlPartyRole_51.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_51);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_96;
          FIX::SettlPartySubID SettlPartySubID_96("STRING_1643027215");
          noSettlPartySubIDs_1_0_1_3_0.set(SettlPartySubID_96);
          SettlPtysSubGrp_NoSettlPartySubIDs_96.insert(SettlPartySubID_96.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_96(1583961574);
          noSettlPartySubIDs_1_0_1_3_0.set(SettlPartySubIDType_96);
          SettlPtysSubGrp_NoSettlPartySubIDs_96.insert(SettlPartySubIDType_96.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_96);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_97;
          FIX::SettlPartySubID SettlPartySubID_97("STRING_380727931");
          noSettlPartySubIDs_1_0_1_3_1.set(SettlPartySubID_97);
          SettlPtysSubGrp_NoSettlPartySubIDs_97.insert(SettlPartySubID_97.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_97(647829486);
          noSettlPartySubIDs_1_0_1_3_1.set(SettlPartySubIDType_97);
          SettlPtysSubGrp_NoSettlPartySubIDs_97.insert(SettlPartySubIDType_97.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_97);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_1);
        }
        noSettlDetails_1_1_0.addGroup(noSettlPartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_0_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_52;
        FIX::SettlPartyID SettlPartyID_52("STRING_2017155773");
        noSettlPartyIDs_1_0_2_2.set(SettlPartyID_52);
        SettlParties_NoSettlPartyIDs_52.insert(SettlPartyID_52.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_52('4');
        noSettlPartyIDs_1_0_2_2.set(SettlPartyIDSource_52);
        SettlParties_NoSettlPartyIDs_52.insert(SettlPartyIDSource_52.getString());
        FIX::SettlPartyRole SettlPartyRole_52(597736835);
        noSettlPartyIDs_1_0_2_2.set(SettlPartyRole_52);
        SettlParties_NoSettlPartyIDs_52.insert(SettlPartyRole_52.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_52);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_98;
          FIX::SettlPartySubID SettlPartySubID_98("STRING_163693257");
          noSettlPartySubIDs_1_0_2_3_0.set(SettlPartySubID_98);
          SettlPtysSubGrp_NoSettlPartySubIDs_98.insert(SettlPartySubID_98.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_98(933744);
          noSettlPartySubIDs_1_0_2_3_0.set(SettlPartySubIDType_98);
          SettlPtysSubGrp_NoSettlPartySubIDs_98.insert(SettlPartySubIDType_98.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_98);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_2.addGroup(noSettlPartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_99;
          FIX::SettlPartySubID SettlPartySubID_99("STRING_1090307871");
          noSettlPartySubIDs_1_0_2_3_1.set(SettlPartySubID_99);
          SettlPtysSubGrp_NoSettlPartySubIDs_99.insert(SettlPartySubID_99.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_99(1790161444);
          noSettlPartySubIDs_1_0_2_3_1.set(SettlPartySubIDType_99);
          SettlPtysSubGrp_NoSettlPartySubIDs_99.insert(SettlPartySubIDType_99.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_99);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_2.addGroup(noSettlPartySubIDs_1_0_2_3_1);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_100;
          FIX::SettlPartySubID SettlPartySubID_100("STRING_2000578003");
          noSettlPartySubIDs_1_0_2_3_2.set(SettlPartySubID_100);
          SettlPtysSubGrp_NoSettlPartySubIDs_100.insert(SettlPartySubID_100.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_100(744333860);
          noSettlPartySubIDs_1_0_2_3_2.set(SettlPartySubIDType_100);
          SettlPtysSubGrp_NoSettlPartySubIDs_100.insert(SettlPartySubIDType_100.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_100);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_2.addGroup(noSettlPartySubIDs_1_0_2_3_2);
        }
        noSettlDetails_1_1_0.addGroup(noSettlPartyIDs_1_0_2_2);
      }
      noSides_0_1.addGroup(noSettlDetails_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails noSettlDetails_1_1_1;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_14;
      FIX::SettlObligSource SettlObligSource_14('1');
      noSettlDetails_1_1_1.set(SettlObligSource_14);
      SettlDetails_NoSettlDetails_14.insert(SettlObligSource_14.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_14);
      all_compo_names.insert("SettlDetails.NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_53;
        FIX::SettlPartyID SettlPartyID_53("STRING_328514243");
        noSettlPartyIDs_1_1_2_0.set(SettlPartyID_53);
        SettlParties_NoSettlPartyIDs_53.insert(SettlPartyID_53.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_53('4');
        noSettlPartyIDs_1_1_2_0.set(SettlPartyIDSource_53);
        SettlParties_NoSettlPartyIDs_53.insert(SettlPartyIDSource_53.getString());
        FIX::SettlPartyRole SettlPartyRole_53(1375401307);
        noSettlPartyIDs_1_1_2_0.set(SettlPartyRole_53);
        SettlParties_NoSettlPartyIDs_53.insert(SettlPartyRole_53.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_53);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_101;
          FIX::SettlPartySubID SettlPartySubID_101("STRING_132321110");
          noSettlPartySubIDs_1_1_0_3_0.set(SettlPartySubID_101);
          SettlPtysSubGrp_NoSettlPartySubIDs_101.insert(SettlPartySubID_101.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_101(695770052);
          noSettlPartySubIDs_1_1_0_3_0.set(SettlPartySubIDType_101);
          SettlPtysSubGrp_NoSettlPartySubIDs_101.insert(SettlPartySubIDType_101.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_101);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_102;
          FIX::SettlPartySubID SettlPartySubID_102("STRING_1826908476");
          noSettlPartySubIDs_1_1_0_3_1.set(SettlPartySubID_102);
          SettlPtysSubGrp_NoSettlPartySubIDs_102.insert(SettlPartySubID_102.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_102(1497177828);
          noSettlPartySubIDs_1_1_0_3_1.set(SettlPartySubIDType_102);
          SettlPtysSubGrp_NoSettlPartySubIDs_102.insert(SettlPartySubIDType_102.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_102);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_103;
          FIX::SettlPartySubID SettlPartySubID_103("STRING_151629968");
          noSettlPartySubIDs_1_1_0_3_2.set(SettlPartySubID_103);
          SettlPtysSubGrp_NoSettlPartySubIDs_103.insert(SettlPartySubID_103.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_103(510024149);
          noSettlPartySubIDs_1_1_0_3_2.set(SettlPartySubIDType_103);
          SettlPtysSubGrp_NoSettlPartySubIDs_103.insert(SettlPartySubIDType_103.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_103);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_2);
        }
        noSettlDetails_1_1_1.addGroup(noSettlPartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_54;
        FIX::SettlPartyID SettlPartyID_54("STRING_959556982");
        noSettlPartyIDs_1_1_2_1.set(SettlPartyID_54);
        SettlParties_NoSettlPartyIDs_54.insert(SettlPartyID_54.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_54('1');
        noSettlPartyIDs_1_1_2_1.set(SettlPartyIDSource_54);
        SettlParties_NoSettlPartyIDs_54.insert(SettlPartyIDSource_54.getString());
        FIX::SettlPartyRole SettlPartyRole_54(592067160);
        noSettlPartyIDs_1_1_2_1.set(SettlPartyRole_54);
        SettlParties_NoSettlPartyIDs_54.insert(SettlPartyRole_54.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_54);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_104;
          FIX::SettlPartySubID SettlPartySubID_104("STRING_1538819646");
          noSettlPartySubIDs_1_1_1_3_0.set(SettlPartySubID_104);
          SettlPtysSubGrp_NoSettlPartySubIDs_104.insert(SettlPartySubID_104.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_104(87610728);
          noSettlPartySubIDs_1_1_1_3_0.set(SettlPartySubIDType_104);
          SettlPtysSubGrp_NoSettlPartySubIDs_104.insert(SettlPartySubIDType_104.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_104);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_1.addGroup(noSettlPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_105;
          FIX::SettlPartySubID SettlPartySubID_105("STRING_558171102");
          noSettlPartySubIDs_1_1_1_3_1.set(SettlPartySubID_105);
          SettlPtysSubGrp_NoSettlPartySubIDs_105.insert(SettlPartySubID_105.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_105(1919547577);
          noSettlPartySubIDs_1_1_1_3_1.set(SettlPartySubIDType_105);
          SettlPtysSubGrp_NoSettlPartySubIDs_105.insert(SettlPartySubIDType_105.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_105);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_1.addGroup(noSettlPartySubIDs_1_1_1_3_1);
        }
        noSettlDetails_1_1_1.addGroup(noSettlPartyIDs_1_1_2_1);
      }
      noSides_0_1.addGroup(noSettlDetails_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails noSettlDetails_1_1_2;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_15;
      FIX::SettlObligSource SettlObligSource_15('1');
      noSettlDetails_1_1_2.set(SettlObligSource_15);
      SettlDetails_NoSettlDetails_15.insert(SettlObligSource_15.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_15);
      all_compo_names.insert("SettlDetails.NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_55;
        FIX::SettlPartyID SettlPartyID_55("STRING_227758041");
        noSettlPartyIDs_1_2_2_0.set(SettlPartyID_55);
        SettlParties_NoSettlPartyIDs_55.insert(SettlPartyID_55.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_55('1');
        noSettlPartyIDs_1_2_2_0.set(SettlPartyIDSource_55);
        SettlParties_NoSettlPartyIDs_55.insert(SettlPartyIDSource_55.getString());
        FIX::SettlPartyRole SettlPartyRole_55(1081046115);
        noSettlPartyIDs_1_2_2_0.set(SettlPartyRole_55);
        SettlParties_NoSettlPartyIDs_55.insert(SettlPartyRole_55.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_55);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_106;
          FIX::SettlPartySubID SettlPartySubID_106("STRING_1334110794");
          noSettlPartySubIDs_1_2_0_3_0.set(SettlPartySubID_106);
          SettlPtysSubGrp_NoSettlPartySubIDs_106.insert(SettlPartySubID_106.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_106(23870338);
          noSettlPartySubIDs_1_2_0_3_0.set(SettlPartySubIDType_106);
          SettlPtysSubGrp_NoSettlPartySubIDs_106.insert(SettlPartySubIDType_106.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_106);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_2_2_0.addGroup(noSettlPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_107;
          FIX::SettlPartySubID SettlPartySubID_107("STRING_34129095");
          noSettlPartySubIDs_1_2_0_3_1.set(SettlPartySubID_107);
          SettlPtysSubGrp_NoSettlPartySubIDs_107.insert(SettlPartySubID_107.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_107(1187205149);
          noSettlPartySubIDs_1_2_0_3_1.set(SettlPartySubIDType_107);
          SettlPtysSubGrp_NoSettlPartySubIDs_107.insert(SettlPartySubIDType_107.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_107);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_2_2_0.addGroup(noSettlPartySubIDs_1_2_0_3_1);
        }
        noSettlDetails_1_1_2.addGroup(noSettlPartyIDs_1_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_2_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_56;
        FIX::SettlPartyID SettlPartyID_56("STRING_768204199");
        noSettlPartyIDs_1_2_2_1.set(SettlPartyID_56);
        SettlParties_NoSettlPartyIDs_56.insert(SettlPartyID_56.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_56('1');
        noSettlPartyIDs_1_2_2_1.set(SettlPartyIDSource_56);
        SettlParties_NoSettlPartyIDs_56.insert(SettlPartyIDSource_56.getString());
        FIX::SettlPartyRole SettlPartyRole_56(1723923787);
        noSettlPartyIDs_1_2_2_1.set(SettlPartyRole_56);
        SettlParties_NoSettlPartyIDs_56.insert(SettlPartyRole_56.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_56);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_108;
          FIX::SettlPartySubID SettlPartySubID_108("STRING_1520858867");
          noSettlPartySubIDs_1_2_1_3_0.set(SettlPartySubID_108);
          SettlPtysSubGrp_NoSettlPartySubIDs_108.insert(SettlPartySubID_108.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_108(951841446);
          noSettlPartySubIDs_1_2_1_3_0.set(SettlPartySubIDType_108);
          SettlPtysSubGrp_NoSettlPartySubIDs_108.insert(SettlPartySubIDType_108.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_108);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_2_2_1.addGroup(noSettlPartySubIDs_1_2_1_3_0);
        }
        noSettlDetails_1_1_2.addGroup(noSettlPartyIDs_1_2_2_1);
      }
      noSides_0_1.addGroup(noSettlDetails_1_1_2);
    }
    // SideTrdRegTS
    // Group SideTrdRegTS.NoSideTrdRegTS
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSideTrdRegTS noSideTrdRegTS_1_1_0;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_8;
      FIX::SideTrdRegTimestamp SideTrdRegTimestamp_8(FIX::UTCTIMESTAMP(2, 43, 18, 22, 1, 2004));
      noSideTrdRegTS_1_1_0.set(SideTrdRegTimestamp_8);
      SideTrdRegTS_NoSideTrdRegTS_8.insert(SideTrdRegTimestamp_8.getString());
      FIX::SideTrdRegTimestampSrc SideTrdRegTimestampSrc_8("STRING_1382103210");
      noSideTrdRegTS_1_1_0.set(SideTrdRegTimestampSrc_8);
      SideTrdRegTS_NoSideTrdRegTS_8.insert(SideTrdRegTimestampSrc_8.getString());
      FIX::SideTrdRegTimestampType SideTrdRegTimestampType_8(550887005);
      noSideTrdRegTS_1_1_0.set(SideTrdRegTimestampType_8);
      SideTrdRegTS_NoSideTrdRegTS_8.insert(SideTrdRegTimestampType_8.getString());
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_8);
      all_compo_names.insert("SideTrdRegTS.NoSideTrdRegTS");

      noSides_0_1.addGroup(noSideTrdRegTS_1_1_0);
    }
    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoStipulations noStipulations_1_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_63;
      FIX::StipulationType StipulationType_63("STRING_HAIRCUT");
      noStipulations_1_1_0.set(StipulationType_63);
      Stipulations_NoStipulations_63.insert(StipulationType_63.getString());
      FIX::StipulationValue StipulationValue_63("STRING_638497733");
      noStipulations_1_1_0.set(StipulationValue_63);
      Stipulations_NoStipulations_63.insert(StipulationValue_63.getString());
      all_values.push_back(Stipulations_NoStipulations_63);
      all_compo_names.insert("Stipulations.NoStipulations");

      noSides_0_1.addGroup(noStipulations_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoStipulations noStipulations_1_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_64;
      FIX::StipulationType StipulationType_64("STRING_ISSUER");
      noStipulations_1_1_1.set(StipulationType_64);
      Stipulations_NoStipulations_64.insert(StipulationType_64.getString());
      FIX::StipulationValue StipulationValue_64("STRING_545503137");
      noStipulations_1_1_1.set(StipulationValue_64);
      Stipulations_NoStipulations_64.insert(StipulationValue_64.getString());
      all_values.push_back(Stipulations_NoStipulations_64);
      all_compo_names.insert("Stipulations.NoStipulations");

      noSides_0_1.addGroup(noStipulations_1_1_1);
    }
    // TradeReportOrderDetail
    multiset<string> TradeReportOrderDetail_4;
    FIX::BookingType BookingType_38(2);
    noSides_0_1.set(BookingType_38);
    TradeReportOrderDetail_4.insert(BookingType_38.getString());
    FIX::ClOrdID ClOrdID_51("STRING_1922654999");
    noSides_0_1.set(ClOrdID_51);
    TradeReportOrderDetail_4.insert(ClOrdID_51.getString());
    FIX::CumQty CumQty_7;
    CumQty_7.setString("7732611");
    noSides_0_1.set(CumQty_7);
    TradeReportOrderDetail_4.insert(CumQty_7.getString());
    FIX::ExecInst ExecInst_17("MULTIPLECHARVALUE_r");
    noSides_0_1.set(ExecInst_17);
    TradeReportOrderDetail_4.insert(ExecInst_17.getString());
    FIX::ExpireTime ExpireTime_29(FIX::UTCTIMESTAMP(13, 3, 5, 12, 2, 2000));
    noSides_0_1.set(ExpireTime_29);
    TradeReportOrderDetail_4.insert(ExpireTime_29.getString());
    FIX::LeavesQty LeavesQty_6;
    LeavesQty_6.setString("1466248");
    noSides_0_1.set(LeavesQty_6);
    TradeReportOrderDetail_4.insert(LeavesQty_6.getString());
    FIX::ListID ListID_30("STRING_509903784");
    noSides_0_1.set(ListID_30);
    TradeReportOrderDetail_4.insert(ListID_30.getString());
    FIX::LotType LotType_40('3');
    noSides_0_1.set(LotType_40);
    TradeReportOrderDetail_4.insert(LotType_40.getString());
    FIX::OrdStatus OrdStatus_7('5');
    noSides_0_1.set(OrdStatus_7);
    TradeReportOrderDetail_4.insert(OrdStatus_7.getString());
    FIX::OrdType OrdType_97('7');
    noSides_0_1.set(OrdType_97);
    TradeReportOrderDetail_4.insert(OrdType_97.getString());
    FIX::OrderCapacity OrderCapacity_40('W');
    noSides_0_1.set(OrderCapacity_40);
    TradeReportOrderDetail_4.insert(OrderCapacity_40.getString());
    FIX::OrderID OrderID_36("STRING_1173180065");
    noSides_0_1.set(OrderID_36);
    TradeReportOrderDetail_4.insert(OrderID_36.getString());
    FIX::OrderInputDevice OrderInputDevice_4("STRING_961873080");
    noSides_0_1.set(OrderInputDevice_4);
    TradeReportOrderDetail_4.insert(OrderInputDevice_4.getString());
    FIX::OrderRestrictions OrderRestrictions_37("MULTIPLECHARVALUE_5");
    noSides_0_1.set(OrderRestrictions_37);
    TradeReportOrderDetail_4.insert(OrderRestrictions_37.getString());
    FIX::OrigCustOrderCapacity OrigCustOrderCapacity_4(4);
    noSides_0_1.set(OrigCustOrderCapacity_4);
    TradeReportOrderDetail_4.insert(OrigCustOrderCapacity_4.getString());
    FIX::OrigOrdModTime OrigOrdModTime_9(FIX::UTCTIMESTAMP(5, 56, 9, 2, 2, 2017));
    noSides_0_1.set(OrigOrdModTime_9);
    TradeReportOrderDetail_4.insert(OrigOrdModTime_9.getString());
    FIX::Price Price_30;
    Price_30.setString("9638979");
    noSides_0_1.set(Price_30);
    TradeReportOrderDetail_4.insert(Price_30.getString());
    FIX::RefOrdIDReason RefOrdIDReason_4(0);
    noSides_0_1.set(RefOrdIDReason_4);
    TradeReportOrderDetail_4.insert(RefOrdIDReason_4.getString());
    FIX::RefOrderID RefOrderID_9("STRING_1167192806");
    noSides_0_1.set(RefOrderID_9);
    TradeReportOrderDetail_4.insert(RefOrderID_9.getString());
    FIX::RefOrderIDSource RefOrderIDSource_9('3');
    noSides_0_1.set(RefOrderIDSource_9);
    TradeReportOrderDetail_4.insert(RefOrderIDSource_9.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_44("STRING_2050141860");
    noSides_0_1.set(SecondaryClOrdID_44);
    TradeReportOrderDetail_4.insert(SecondaryClOrdID_44.getString());
    FIX::SecondaryOrderID SecondaryOrderID_28("STRING_1940453984");
    noSides_0_1.set(SecondaryOrderID_28);
    TradeReportOrderDetail_4.insert(SecondaryOrderID_28.getString());
    FIX::StopPx StopPx_14;
    StopPx_14.setString("7499835");
    noSides_0_1.set(StopPx_14);
    TradeReportOrderDetail_4.insert(StopPx_14.getString());
    FIX::TimeInForce TimeInForce_78('8');
    noSides_0_1.set(TimeInForce_78);
    TradeReportOrderDetail_4.insert(TimeInForce_78.getString());
    FIX::TransBkdTime TransBkdTime_8(FIX::UTCTIMESTAMP(16, 3, 58, 1, 8, 2004));
    noSides_0_1.set(TransBkdTime_8);
    TradeReportOrderDetail_4.insert(TransBkdTime_8.getString());
    all_values.push_back(TradeReportOrderDetail_4);
    all_compo_names.insert("TradeReportOrderDetail");

    // DisplayInstruction
    multiset<string> DisplayInstruction_14;
    FIX::DisplayHighQty DisplayHighQty_14;
    DisplayHighQty_14.setString("19396095");
    noSides_0_1.set(DisplayHighQty_14);
    DisplayInstruction_14.insert(DisplayHighQty_14.getString());
    FIX::DisplayLowQty DisplayLowQty_14;
    DisplayLowQty_14.setString("17372986");
    noSides_0_1.set(DisplayLowQty_14);
    DisplayInstruction_14.insert(DisplayLowQty_14.getString());
    FIX::DisplayMethod DisplayMethod_14('3');
    noSides_0_1.set(DisplayMethod_14);
    DisplayInstruction_14.insert(DisplayMethod_14.getString());
    FIX::DisplayMinIncr DisplayMinIncr_14;
    DisplayMinIncr_14.setString("12538710");
    noSides_0_1.set(DisplayMinIncr_14);
    DisplayInstruction_14.insert(DisplayMinIncr_14.getString());
    FIX::DisplayQty DisplayQty_14;
    DisplayQty_14.setString("21041963");
    noSides_0_1.set(DisplayQty_14);
    DisplayInstruction_14.insert(DisplayQty_14.getString());
    FIX::DisplayWhen DisplayWhen_14('2');
    noSides_0_1.set(DisplayWhen_14);
    DisplayInstruction_14.insert(DisplayWhen_14.getString());
    FIX::RefreshQty RefreshQty_14;
    RefreshQty_14.setString("682605");
    noSides_0_1.set(RefreshQty_14);
    DisplayInstruction_14.insert(RefreshQty_14.getString());
    FIX::SecondaryDisplayQty SecondaryDisplayQty_14;
    SecondaryDisplayQty_14.setString("19198896");
    noSides_0_1.set(SecondaryDisplayQty_14);
    DisplayInstruction_14.insert(SecondaryDisplayQty_14.getString());
    all_values.push_back(DisplayInstruction_14);
    all_compo_names.insert("DisplayInstruction");

    // OrderQtyData
    multiset<string> OrderQtyData_29;
    FIX::CashOrderQty CashOrderQty_29;
    CashOrderQty_29.setString("8774163");
    noSides_0_1.set(CashOrderQty_29);
    OrderQtyData_29.insert(CashOrderQty_29.getString());
    FIX::OrderPercent OrderPercent_29;
    OrderPercent_29.setString("14.300000");
    noSides_0_1.set(OrderPercent_29);
    OrderQtyData_29.insert(OrderPercent_29.getString());
    FIX::OrderQty OrderQty_39;
    OrderQty_39.setString("16944028");
    noSides_0_1.set(OrderQty_39);
    OrderQtyData_29.insert(OrderQty_39.getString());
    FIX::RoundingDirection RoundingDirection_29('2');
    noSides_0_1.set(RoundingDirection_29);
    OrderQtyData_29.insert(RoundingDirection_29.getString());
    FIX::RoundingModulus RoundingModulus_29;
    RoundingModulus_29.setString("5301418");
    noSides_0_1.set(RoundingModulus_29);
    OrderQtyData_29.insert(RoundingModulus_29.getString());
    all_values.push_back(OrderQtyData_29);
    all_compo_names.insert("OrderQtyData");

    // TrdAllocGrp
    // Group TrdAllocGrp.NoAllocs
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs noAllocs_1_1_0;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_9;
      FIX::AllocAccount AllocAccount_47("STRING_1501093140");
      noAllocs_1_1_0.set(AllocAccount_47);
      TrdAllocGrp_NoAllocs_9.insert(AllocAccount_47.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_47(1151831560);
      noAllocs_1_1_0.set(AllocAcctIDSource_47);
      TrdAllocGrp_NoAllocs_9.insert(AllocAcctIDSource_47.getString());
      FIX::AllocClearingFeeIndicator AllocClearingFeeIndicator_9("STRING_836217376");
      noAllocs_1_1_0.set(AllocClearingFeeIndicator_9);
      TrdAllocGrp_NoAllocs_9.insert(AllocClearingFeeIndicator_9.getString());
      FIX::AllocCustomerCapacity AllocCustomerCapacity_16("STRING_1628580000");
      noAllocs_1_1_0.set(AllocCustomerCapacity_16);
      TrdAllocGrp_NoAllocs_9.insert(AllocCustomerCapacity_16.getString());
      FIX::AllocMethod AllocMethod_13(2);
      noAllocs_1_1_0.set(AllocMethod_13);
      TrdAllocGrp_NoAllocs_9.insert(AllocMethod_13.getString());
      FIX::AllocQty AllocQty_45;
      AllocQty_45.setString("10265696");
      noAllocs_1_1_0.set(AllocQty_45);
      TrdAllocGrp_NoAllocs_9.insert(AllocQty_45.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_41("EUR");
      noAllocs_1_1_0.set(AllocSettlCurrency_41);
      TrdAllocGrp_NoAllocs_9.insert(AllocSettlCurrency_41.getString());
      FIX::IndividualAllocID IndividualAllocID_46("STRING_1776553211");
      noAllocs_1_1_0.set(IndividualAllocID_46);
      TrdAllocGrp_NoAllocs_9.insert(IndividualAllocID_46.getString());
      FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_16("STRING_142630243");
      noAllocs_1_1_0.set(SecondaryIndividualAllocID_16);
      TrdAllocGrp_NoAllocs_9.insert(SecondaryIndividualAllocID_16.getString());
      all_values.push_back(TrdAllocGrp_NoAllocs_9);
      all_compo_names.insert("TrdAllocGrp.NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_55;
        FIX::Nested2PartyID Nested2PartyID_55("STRING_125311651");
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyID_55);
        NestedParties2_NoNested2PartyIDs_55.insert(Nested2PartyID_55.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_55('1');
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyIDSource_55);
        NestedParties2_NoNested2PartyIDs_55.insert(Nested2PartyIDSource_55.getString());
        FIX::Nested2PartyRole Nested2PartyRole_55(931234607);
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyRole_55);
        NestedParties2_NoNested2PartyIDs_55.insert(Nested2PartyRole_55.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_55);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_116;
          FIX::Nested2PartySubID Nested2PartySubID_116("STRING_773881918");
          noNested2PartySubIDs_1_0_0_3_0.set(Nested2PartySubID_116);
          NstdPtys2SubGrp_NoNested2PartySubIDs_116.insert(Nested2PartySubID_116.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_116(1086900214);
          noNested2PartySubIDs_1_0_0_3_0.set(Nested2PartySubIDType_116);
          NstdPtys2SubGrp_NoNested2PartySubIDs_116.insert(Nested2PartySubIDType_116.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_116);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_0);
        }
        noAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_56;
        FIX::Nested2PartyID Nested2PartyID_56("STRING_1347143253");
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyID_56);
        NestedParties2_NoNested2PartyIDs_56.insert(Nested2PartyID_56.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_56('3');
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyIDSource_56);
        NestedParties2_NoNested2PartyIDs_56.insert(Nested2PartyIDSource_56.getString());
        FIX::Nested2PartyRole Nested2PartyRole_56(762565908);
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyRole_56);
        NestedParties2_NoNested2PartyIDs_56.insert(Nested2PartyRole_56.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_56);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_117;
          FIX::Nested2PartySubID Nested2PartySubID_117("STRING_320409563");
          noNested2PartySubIDs_1_0_1_3_0.set(Nested2PartySubID_117);
          NstdPtys2SubGrp_NoNested2PartySubIDs_117.insert(Nested2PartySubID_117.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_117(1611411667);
          noNested2PartySubIDs_1_0_1_3_0.set(Nested2PartySubIDType_117);
          NstdPtys2SubGrp_NoNested2PartySubIDs_117.insert(Nested2PartySubIDType_117.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_117);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_1.addGroup(noNested2PartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_118;
          FIX::Nested2PartySubID Nested2PartySubID_118("STRING_521791236");
          noNested2PartySubIDs_1_0_1_3_1.set(Nested2PartySubID_118);
          NstdPtys2SubGrp_NoNested2PartySubIDs_118.insert(Nested2PartySubID_118.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_118(92815580);
          noNested2PartySubIDs_1_0_1_3_1.set(Nested2PartySubIDType_118);
          NstdPtys2SubGrp_NoNested2PartySubIDs_118.insert(Nested2PartySubIDType_118.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_118);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_1.addGroup(noNested2PartySubIDs_1_0_1_3_1);
        }
        noAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_1);
      }
      noSides_0_1.addGroup(noAllocs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs noAllocs_1_1_1;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_10;
      FIX::AllocAccount AllocAccount_48("STRING_341344354");
      noAllocs_1_1_1.set(AllocAccount_48);
      TrdAllocGrp_NoAllocs_10.insert(AllocAccount_48.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_48(1203682666);
      noAllocs_1_1_1.set(AllocAcctIDSource_48);
      TrdAllocGrp_NoAllocs_10.insert(AllocAcctIDSource_48.getString());
      FIX::AllocClearingFeeIndicator AllocClearingFeeIndicator_10("STRING_1787218450");
      noAllocs_1_1_1.set(AllocClearingFeeIndicator_10);
      TrdAllocGrp_NoAllocs_10.insert(AllocClearingFeeIndicator_10.getString());
      FIX::AllocCustomerCapacity AllocCustomerCapacity_17("STRING_1062278757");
      noAllocs_1_1_1.set(AllocCustomerCapacity_17);
      TrdAllocGrp_NoAllocs_10.insert(AllocCustomerCapacity_17.getString());
      FIX::AllocMethod AllocMethod_14(2);
      noAllocs_1_1_1.set(AllocMethod_14);
      TrdAllocGrp_NoAllocs_10.insert(AllocMethod_14.getString());
      FIX::AllocQty AllocQty_46;
      AllocQty_46.setString("16595378");
      noAllocs_1_1_1.set(AllocQty_46);
      TrdAllocGrp_NoAllocs_10.insert(AllocQty_46.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_42("USD");
      noAllocs_1_1_1.set(AllocSettlCurrency_42);
      TrdAllocGrp_NoAllocs_10.insert(AllocSettlCurrency_42.getString());
      FIX::IndividualAllocID IndividualAllocID_47("STRING_348271610");
      noAllocs_1_1_1.set(IndividualAllocID_47);
      TrdAllocGrp_NoAllocs_10.insert(IndividualAllocID_47.getString());
      FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_17("STRING_2044468250");
      noAllocs_1_1_1.set(SecondaryIndividualAllocID_17);
      TrdAllocGrp_NoAllocs_10.insert(SecondaryIndividualAllocID_17.getString());
      all_values.push_back(TrdAllocGrp_NoAllocs_10);
      all_compo_names.insert("TrdAllocGrp.NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_57;
        FIX::Nested2PartyID Nested2PartyID_57("STRING_1374841229");
        noNested2PartyIDs_1_1_2_0.set(Nested2PartyID_57);
        NestedParties2_NoNested2PartyIDs_57.insert(Nested2PartyID_57.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_57('1');
        noNested2PartyIDs_1_1_2_0.set(Nested2PartyIDSource_57);
        NestedParties2_NoNested2PartyIDs_57.insert(Nested2PartyIDSource_57.getString());
        FIX::Nested2PartyRole Nested2PartyRole_57(874224244);
        noNested2PartyIDs_1_1_2_0.set(Nested2PartyRole_57);
        NestedParties2_NoNested2PartyIDs_57.insert(Nested2PartyRole_57.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_57);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_119;
          FIX::Nested2PartySubID Nested2PartySubID_119("STRING_1570853057");
          noNested2PartySubIDs_1_1_0_3_0.set(Nested2PartySubID_119);
          NstdPtys2SubGrp_NoNested2PartySubIDs_119.insert(Nested2PartySubID_119.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_119(1796418113);
          noNested2PartySubIDs_1_1_0_3_0.set(Nested2PartySubIDType_119);
          NstdPtys2SubGrp_NoNested2PartySubIDs_119.insert(Nested2PartySubIDType_119.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_119);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_0.addGroup(noNested2PartySubIDs_1_1_0_3_0);
        }
        noAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_58;
        FIX::Nested2PartyID Nested2PartyID_58("STRING_1129222444");
        noNested2PartyIDs_1_1_2_1.set(Nested2PartyID_58);
        NestedParties2_NoNested2PartyIDs_58.insert(Nested2PartyID_58.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_58('1');
        noNested2PartyIDs_1_1_2_1.set(Nested2PartyIDSource_58);
        NestedParties2_NoNested2PartyIDs_58.insert(Nested2PartyIDSource_58.getString());
        FIX::Nested2PartyRole Nested2PartyRole_58(580169072);
        noNested2PartyIDs_1_1_2_1.set(Nested2PartyRole_58);
        NestedParties2_NoNested2PartyIDs_58.insert(Nested2PartyRole_58.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_58);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_120;
          FIX::Nested2PartySubID Nested2PartySubID_120("STRING_1978845054");
          noNested2PartySubIDs_1_1_1_3_0.set(Nested2PartySubID_120);
          NstdPtys2SubGrp_NoNested2PartySubIDs_120.insert(Nested2PartySubID_120.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_120(1667069286);
          noNested2PartySubIDs_1_1_1_3_0.set(Nested2PartySubIDType_120);
          NstdPtys2SubGrp_NoNested2PartySubIDs_120.insert(Nested2PartySubIDType_120.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_120);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_1.addGroup(noNested2PartySubIDs_1_1_1_3_0);
        }
        noAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_59;
        FIX::Nested2PartyID Nested2PartyID_59("STRING_1883899434");
        noNested2PartyIDs_1_1_2_2.set(Nested2PartyID_59);
        NestedParties2_NoNested2PartyIDs_59.insert(Nested2PartyID_59.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_59('1');
        noNested2PartyIDs_1_1_2_2.set(Nested2PartyIDSource_59);
        NestedParties2_NoNested2PartyIDs_59.insert(Nested2PartyIDSource_59.getString());
        FIX::Nested2PartyRole Nested2PartyRole_59(282151546);
        noNested2PartyIDs_1_1_2_2.set(Nested2PartyRole_59);
        NestedParties2_NoNested2PartyIDs_59.insert(Nested2PartyRole_59.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_59);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_121;
          FIX::Nested2PartySubID Nested2PartySubID_121("STRING_515467877");
          noNested2PartySubIDs_1_1_2_3_0.set(Nested2PartySubID_121);
          NstdPtys2SubGrp_NoNested2PartySubIDs_121.insert(Nested2PartySubID_121.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_121(1893563214);
          noNested2PartySubIDs_1_1_2_3_0.set(Nested2PartySubIDType_121);
          NstdPtys2SubGrp_NoNested2PartySubIDs_121.insert(Nested2PartySubIDType_121.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_121);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_2.addGroup(noNested2PartySubIDs_1_1_2_3_0);
        }
        noAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_2);
      }
      noSides_0_1.addGroup(noAllocs_1_1_1);
    }
    msg.addGroup(noSides_0_1);
  }
  // TrdInstrmtLegGrp
  // Group TrdInstrmtLegGrp.NoLegs
  {
    FIX50SP2::TradeCaptureReportAck::NoLegs noLegs_0_0;
    // TrdInstrmtLegGrp.NoLegs
    multiset<string> TrdInstrmtLegGrp_NoLegs_1;
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_2;
    LegCalculatedCcyLastQty_2.setString("6082834");
    noLegs_0_0.set(LegCalculatedCcyLastQty_2);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegCalculatedCcyLastQty_2.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_5(87423920);
    noLegs_0_0.set(LegCoveredOrUncovered_5);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegCoveredOrUncovered_5.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_5;
    LegCurrencyRatio_5.setString("19154203");
    noLegs_0_0.set(LegCurrencyRatio_5);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegCurrencyRatio_5.getString());
    FIX::LegDividendYield LegDividendYield_5;
    LegDividendYield_5.setString("82.590000");
    noLegs_0_0.set(LegDividendYield_5);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegDividendYield_5.getString());
    FIX::LegExecInst LegExecInst_5("MULTIPLECHARVALUE_1149702678");
    noLegs_0_0.set(LegExecInst_5);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegExecInst_5.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_2;
    LegGrossTradeAmt_2.setString("15017613");
    noLegs_0_0.set(LegGrossTradeAmt_2);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegGrossTradeAmt_2.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_2;
    LegLastForwardPoints_2.setString("19075561");
    noLegs_0_0.set(LegLastForwardPoints_2);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegLastForwardPoints_2.getString());
    FIX::LegLastPx LegLastPx_2;
    LegLastPx_2.setString("15655909");
    noLegs_0_0.set(LegLastPx_2);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegLastPx_2.getString());
    FIX::LegLastQty LegLastQty_2;
    LegLastQty_2.setString("924501");
    noLegs_0_0.set(LegLastQty_2);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegLastQty_2.getString());
    FIX::LegNumber LegNumber_1(108344104);
    noLegs_0_0.set(LegNumber_1);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegNumber_1.getString());
    FIX::LegPositionEffect LegPositionEffect_5('1');
    noLegs_0_0.set(LegPositionEffect_5);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegPositionEffect_5.getString());
    FIX::LegQty LegQty_19;
    LegQty_19.setString("10021633");
    noLegs_0_0.set(LegQty_19);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegQty_19.getString());
    FIX::LegRefID LegRefID_18("STRING_1483185334");
    noLegs_0_0.set(LegRefID_18);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegRefID_18.getString());
    FIX::LegReportID LegReportID_1("STRING_743314696");
    noLegs_0_0.set(LegReportID_1);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegReportID_1.getString());
    FIX::LegSettlCurrency LegSettlCurrency_5("CAN");
    noLegs_0_0.set(LegSettlCurrency_5);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegSettlCurrency_5.getString());
    FIX::LegSettlDate LegSettlDate_19("LOCALMKTDATE_166684105");
    noLegs_0_0.set(LegSettlDate_19);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegSettlDate_19.getString());
    FIX::LegSettlType LegSettlType_29('1');
    noLegs_0_0.set(LegSettlType_29);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegSettlType_29.getString());
    FIX::LegSwapType LegSwapType_29(5);
    noLegs_0_0.set(LegSwapType_29);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegSwapType_29.getString());
    FIX::LegVolatility LegVolatility_5;
    LegVolatility_5.setString("13716472");
    noLegs_0_0.set(LegVolatility_5);
    TrdInstrmtLegGrp_NoLegs_1.insert(LegVolatility_5.getString());
    all_values.push_back(TrdInstrmtLegGrp_NoLegs_1);
    all_compo_names.insert("TrdInstrmtLegGrp.NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_151;
    FIX::EncodedLegIssuer EncodedLegIssuer_151("DATA_2105491096");
    noLegs_0_0.set(EncodedLegIssuer_151);
    InstrumentLeg_151.insert(EncodedLegIssuer_151.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_151(2005591104);
    noLegs_0_0.set(EncodedLegIssuerLen_151);
    InstrumentLeg_151.insert(EncodedLegIssuerLen_151.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_151("DATA_1203008647");
    noLegs_0_0.set(EncodedLegSecurityDesc_151);
    InstrumentLeg_151.insert(EncodedLegSecurityDesc_151.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_151(1625076735);
    noLegs_0_0.set(EncodedLegSecurityDescLen_151);
    InstrumentLeg_151.insert(EncodedLegSecurityDescLen_151.getString());
    FIX::LegCFICode LegCFICode_151("STRING_1742006891");
    noLegs_0_0.set(LegCFICode_151);
    InstrumentLeg_151.insert(LegCFICode_151.getString());
    FIX::LegContractMultiplier LegContractMultiplier_151;
    LegContractMultiplier_151.setString("13980669");
    noLegs_0_0.set(LegContractMultiplier_151);
    InstrumentLeg_151.insert(LegContractMultiplier_151.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_151(1907228281);
    noLegs_0_0.set(LegContractMultiplierUnit_151);
    InstrumentLeg_151.insert(LegContractMultiplierUnit_151.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_151("MONTHYEAR_1931953382");
    noLegs_0_0.set(LegContractSettlMonth_151);
    InstrumentLeg_151.insert(LegContractSettlMonth_151.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_151("COUNTRY_1913534839");
    noLegs_0_0.set(LegCountryOfIssue_151);
    InstrumentLeg_151.insert(LegCountryOfIssue_151.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_151("LOCALMKTDATE_1653307847");
    noLegs_0_0.set(LegCouponPaymentDate_151);
    InstrumentLeg_151.insert(LegCouponPaymentDate_151.getString());
    FIX::LegCouponRate LegCouponRate_151;
    LegCouponRate_151.setString("74.610000");
    noLegs_0_0.set(LegCouponRate_151);
    InstrumentLeg_151.insert(LegCouponRate_151.getString());
    FIX::LegCreditRating LegCreditRating_151("STRING_374334648");
    noLegs_0_0.set(LegCreditRating_151);
    InstrumentLeg_151.insert(LegCreditRating_151.getString());
    FIX::LegCurrency LegCurrency_151("GBP");
    noLegs_0_0.set(LegCurrency_151);
    InstrumentLeg_151.insert(LegCurrency_151.getString());
    FIX::LegDatedDate LegDatedDate_151("LOCALMKTDATE_622352908");
    noLegs_0_0.set(LegDatedDate_151);
    InstrumentLeg_151.insert(LegDatedDate_151.getString());
    FIX::LegExerciseStyle LegExerciseStyle_151(742950798);
    noLegs_0_0.set(LegExerciseStyle_151);
    InstrumentLeg_151.insert(LegExerciseStyle_151.getString());
    FIX::LegFactor LegFactor_151;
    LegFactor_151.setString("17659055");
    noLegs_0_0.set(LegFactor_151);
    InstrumentLeg_151.insert(LegFactor_151.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_151(382425402);
    noLegs_0_0.set(LegFlowScheduleType_151);
    InstrumentLeg_151.insert(LegFlowScheduleType_151.getString());
    FIX::LegInstrRegistry LegInstrRegistry_151("STRING_161058077");
    noLegs_0_0.set(LegInstrRegistry_151);
    InstrumentLeg_151.insert(LegInstrRegistry_151.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_151("LOCALMKTDATE_1858355636");
    noLegs_0_0.set(LegInterestAccrualDate_151);
    InstrumentLeg_151.insert(LegInterestAccrualDate_151.getString());
    FIX::LegIssueDate LegIssueDate_151("LOCALMKTDATE_490769506");
    noLegs_0_0.set(LegIssueDate_151);
    InstrumentLeg_151.insert(LegIssueDate_151.getString());
    FIX::LegIssuer LegIssuer_151("STRING_1623633607");
    noLegs_0_0.set(LegIssuer_151);
    InstrumentLeg_151.insert(LegIssuer_151.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_151("STRING_713035303");
    noLegs_0_0.set(LegLocaleOfIssue_151);
    InstrumentLeg_151.insert(LegLocaleOfIssue_151.getString());
    FIX::LegMaturityDate LegMaturityDate_151("LOCALMKTDATE_1973954840");
    noLegs_0_0.set(LegMaturityDate_151);
    InstrumentLeg_151.insert(LegMaturityDate_151.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_151("MONTHYEAR_219464655");
    noLegs_0_0.set(LegMaturityMonthYear_151);
    InstrumentLeg_151.insert(LegMaturityMonthYear_151.getString());
    FIX::LegMaturityTime LegMaturityTime_151("TZTIMEONLY_441939214");
    noLegs_0_0.set(LegMaturityTime_151);
    InstrumentLeg_151.insert(LegMaturityTime_151.getString());
    FIX::LegOptAttribute LegOptAttribute_151('1');
    noLegs_0_0.set(LegOptAttribute_151);
    InstrumentLeg_151.insert(LegOptAttribute_151.getString());
    FIX::LegOptionRatio LegOptionRatio_151;
    LegOptionRatio_151.setString("3861487");
    noLegs_0_0.set(LegOptionRatio_151);
    InstrumentLeg_151.insert(LegOptionRatio_151.getString());
    FIX::LegPool LegPool_151("STRING_1967261238");
    noLegs_0_0.set(LegPool_151);
    InstrumentLeg_151.insert(LegPool_151.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_151("STRING_1634918595");
    noLegs_0_0.set(LegPriceUnitOfMeasure_151);
    InstrumentLeg_151.insert(LegPriceUnitOfMeasure_151.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_151;
    LegPriceUnitOfMeasureQty_151.setString("17577960");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_151);
    InstrumentLeg_151.insert(LegPriceUnitOfMeasureQty_151.getString());
    FIX::LegProduct LegProduct_151(1925268686);
    noLegs_0_0.set(LegProduct_151);
    InstrumentLeg_151.insert(LegProduct_151.getString());
    FIX::LegPutOrCall LegPutOrCall_151(1493026051);
    noLegs_0_0.set(LegPutOrCall_151);
    InstrumentLeg_151.insert(LegPutOrCall_151.getString());
    FIX::LegRatioQty LegRatioQty_151;
    LegRatioQty_151.setString("8133210");
    noLegs_0_0.set(LegRatioQty_151);
    InstrumentLeg_151.insert(LegRatioQty_151.getString());
    FIX::LegRedemptionDate LegRedemptionDate_151("LOCALMKTDATE_1402861773");
    noLegs_0_0.set(LegRedemptionDate_151);
    InstrumentLeg_151.insert(LegRedemptionDate_151.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_151("STRING_1087549294");
    noLegs_0_0.set(LegRepoCollateralSecurityType_151);
    InstrumentLeg_151.insert(LegRepoCollateralSecurityType_151.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_151;
    LegRepurchaseRate_151.setString("43.150000");
    noLegs_0_0.set(LegRepurchaseRate_151);
    InstrumentLeg_151.insert(LegRepurchaseRate_151.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_151(1162606407);
    noLegs_0_0.set(LegRepurchaseTerm_151);
    InstrumentLeg_151.insert(LegRepurchaseTerm_151.getString());
    FIX::LegSecurityDesc LegSecurityDesc_151("STRING_872019028");
    noLegs_0_0.set(LegSecurityDesc_151);
    InstrumentLeg_151.insert(LegSecurityDesc_151.getString());
    FIX::LegSecurityExchange LegSecurityExchange_151("EXCHANGE_1977439154");
    noLegs_0_0.set(LegSecurityExchange_151);
    InstrumentLeg_151.insert(LegSecurityExchange_151.getString());
    FIX::LegSecurityID LegSecurityID_151("STRING_668430606");
    noLegs_0_0.set(LegSecurityID_151);
    InstrumentLeg_151.insert(LegSecurityID_151.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_151("STRING_1368226489");
    noLegs_0_0.set(LegSecurityIDSource_151);
    InstrumentLeg_151.insert(LegSecurityIDSource_151.getString());
    FIX::LegSecuritySubType LegSecuritySubType_151("STRING_204290154");
    noLegs_0_0.set(LegSecuritySubType_151);
    InstrumentLeg_151.insert(LegSecuritySubType_151.getString());
    FIX::LegSecurityType LegSecurityType_151("STRING_261678726");
    noLegs_0_0.set(LegSecurityType_151);
    InstrumentLeg_151.insert(LegSecurityType_151.getString());
    FIX::LegSide LegSide_151('1');
    noLegs_0_0.set(LegSide_151);
    InstrumentLeg_151.insert(LegSide_151.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_151("STRING_826643062");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_151);
    InstrumentLeg_151.insert(LegStateOrProvinceOfIssue_151.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_151("GBP");
    noLegs_0_0.set(LegStrikeCurrency_151);
    InstrumentLeg_151.insert(LegStrikeCurrency_151.getString());
    FIX::LegStrikePrice LegStrikePrice_151;
    LegStrikePrice_151.setString("12090684");
    noLegs_0_0.set(LegStrikePrice_151);
    InstrumentLeg_151.insert(LegStrikePrice_151.getString());
    FIX::LegSymbol LegSymbol_151("STRING_1165687602");
    noLegs_0_0.set(LegSymbol_151);
    InstrumentLeg_151.insert(LegSymbol_151.getString());
    FIX::LegSymbolSfx LegSymbolSfx_151("STRING_961664546");
    noLegs_0_0.set(LegSymbolSfx_151);
    InstrumentLeg_151.insert(LegSymbolSfx_151.getString());
    FIX::LegTimeUnit LegTimeUnit_151("STRING_1699837971");
    noLegs_0_0.set(LegTimeUnit_151);
    InstrumentLeg_151.insert(LegTimeUnit_151.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_151("STRING_641837561");
    noLegs_0_0.set(LegUnitOfMeasure_151);
    InstrumentLeg_151.insert(LegUnitOfMeasure_151.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_151;
    LegUnitOfMeasureQty_151.setString("16746998");
    noLegs_0_0.set(LegUnitOfMeasureQty_151);
    InstrumentLeg_151.insert(LegUnitOfMeasureQty_151.getString());
    all_values.push_back(InstrumentLeg_151);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_294;
      FIX::LegSecurityAltID LegSecurityAltID_294("STRING_861302216");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_294);
      LegSecAltIDGrp_NoLegSecurityAltID_294.insert(LegSecurityAltID_294.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_294("STRING_2116639063");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_294);
      LegSecAltIDGrp_NoLegSecurityAltID_294.insert(LegSecurityAltIDSource_294.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_294);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_66;
      FIX::LegStipulationType LegStipulationType_66("STRING_1247450976");
      noLegStipulations_0_1_0.set(LegStipulationType_66);
      LegStipulations_NoLegStipulations_66.insert(LegStipulationType_66.getString());
      FIX::LegStipulationValue LegStipulationValue_66("STRING_1936416653");
      noLegStipulations_0_1_0.set(LegStipulationValue_66);
      LegStipulations_NoLegStipulations_66.insert(LegStipulationValue_66.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_66);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_130;
      FIX::NestedPartyID NestedPartyID_130("STRING_857763330");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_130);
      NestedParties_NoNestedPartyIDs_130.insert(NestedPartyID_130.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_130('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_130);
      NestedParties_NoNestedPartyIDs_130.insert(NestedPartyIDSource_130.getString());
      FIX::NestedPartyRole NestedPartyRole_130(525370185);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_130);
      NestedParties_NoNestedPartyIDs_130.insert(NestedPartyRole_130.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_130);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_279;
        FIX::NestedPartySubID NestedPartySubID_279("STRING_969579817");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_279);
        NstdPtysSubGrp_NoNestedPartySubIDs_279.insert(NestedPartySubID_279.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_279(1612919480);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_279);
        NstdPtysSubGrp_NoNestedPartySubIDs_279.insert(NestedPartySubIDType_279.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_279);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_280;
        FIX::NestedPartySubID NestedPartySubID_280("STRING_1734988647");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_280);
        NstdPtysSubGrp_NoNestedPartySubIDs_280.insert(NestedPartySubID_280.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_280(2132186224);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_280);
        NstdPtysSubGrp_NoNestedPartySubIDs_280.insert(NestedPartySubIDType_280.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_280);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_281;
        FIX::NestedPartySubID NestedPartySubID_281("STRING_337454860");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_281);
        NstdPtysSubGrp_NoNestedPartySubIDs_281.insert(NestedPartySubID_281.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_281(1564944153);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_281);
        NstdPtysSubGrp_NoNestedPartySubIDs_281.insert(NestedPartySubIDType_281.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_281);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_131;
      FIX::NestedPartyID NestedPartyID_131("STRING_653133182");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_131);
      NestedParties_NoNestedPartyIDs_131.insert(NestedPartyID_131.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_131('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_131);
      NestedParties_NoNestedPartyIDs_131.insert(NestedPartyIDSource_131.getString());
      FIX::NestedPartyRole NestedPartyRole_131(1769234307);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_131);
      NestedParties_NoNestedPartyIDs_131.insert(NestedPartyRole_131.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_131);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_282;
        FIX::NestedPartySubID NestedPartySubID_282("STRING_1190568398");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_282);
        NstdPtysSubGrp_NoNestedPartySubIDs_282.insert(NestedPartySubID_282.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_282(448393722);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_282);
        NstdPtysSubGrp_NoNestedPartySubIDs_282.insert(NestedPartySubIDType_282.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_282);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    // TradeCapLegUnderlyingsGrp
    // Group TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_0_1_0;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_2;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_2("STRING_293877308");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegCFICode_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegCFICode_2.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_2("LOCALMKTDATE_1657462186");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityDate_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegMaturityDate_2.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_2("MONTHYEAR_937645387");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityMonthYear_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegMaturityMonthYear_2.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_2("TZTIMEONLY_1255541854");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityTime_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegMaturityTime_2.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_2('1');
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegOptAttribute_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegOptAttribute_2.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_2(1579482948);
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegPutOrCall_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegPutOrCall_2.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_2("STRING_782758055");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityDesc_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecurityDesc_2.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_2("STRING_588642025");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityExchange_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecurityExchange_2.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_2("STRING_293301516");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityID_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecurityID_2.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_2("STRING_751913470");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityIDSource_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecurityIDSource_2.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_2("STRING_133551212");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecuritySubType_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecuritySubType_2.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_2("STRING_1540752493");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityType_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSecurityType_2.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_2;
      UnderlyingLegStrikePrice_2.setString("5408464");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegStrikePrice_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegStrikePrice_2.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_2("STRING_1313378994");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSymbol_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSymbol_2.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_2("STRING_251032175");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSymbolSfx_2);
      UnderlyingLegInstrument_2.insert(UnderlyingLegSymbolSfx_2.getString());
      all_values.push_back(UnderlyingLegInstrument_2);
      all_compo_names.insert("UnderlyingLegInstrument");

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_3("STRING_1838749179");
        noUnderlyingLegSecurityAltID_0_0_2_0.set(UnderlyingLegSecurityAltID_3);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3.insert(UnderlyingLegSecurityAltID_3.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_3("STRING_1922116507");
        noUnderlyingLegSecurityAltID_0_0_2_0.set(UnderlyingLegSecurityAltIDSource_3);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3.insert(UnderlyingLegSecurityAltIDSource_3.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3);
        all_compo_names.insert("UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_0_1_0.addGroup(noUnderlyingLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_4("STRING_1077144335");
        noUnderlyingLegSecurityAltID_0_0_2_1.set(UnderlyingLegSecurityAltID_4);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4.insert(UnderlyingLegSecurityAltID_4.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_4("STRING_1304185011");
        noUnderlyingLegSecurityAltID_0_0_2_1.set(UnderlyingLegSecurityAltIDSource_4);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4.insert(UnderlyingLegSecurityAltIDSource_4.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4);
        all_compo_names.insert("UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_0_1_0.addGroup(noUnderlyingLegSecurityAltID_0_0_2_1);
      }
      noLegs_0_0.addGroup(noOfLegUnderlyings_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_20;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_20("MULTIPLESTRINGVALUE_IOC");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_20);
    TrdRegTimestamps_NoTrdRegTimestamps_20.insert(DeskOrderHandlingInst_20.getString());
    FIX::DeskType DeskType_20("STRING_IS");
    noTrdRegTimestamps_0_0.set(DeskType_20);
    TrdRegTimestamps_NoTrdRegTimestamps_20.insert(DeskType_20.getString());
    FIX::DeskTypeSource DeskTypeSource_20(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_20);
    TrdRegTimestamps_NoTrdRegTimestamps_20.insert(DeskTypeSource_20.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_20(FIX::UTCTIMESTAMP(6, 11, 35, 8, 6, 2012));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_20);
    TrdRegTimestamps_NoTrdRegTimestamps_20.insert(TrdRegTimestamp_20.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_20("STRING_536799632");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_20);
    TrdRegTimestamps_NoTrdRegTimestamps_20.insert(TrdRegTimestampOrigin_20.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_20(3);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_20);
    TrdRegTimestamps_NoTrdRegTimestamps_20.insert(TrdRegTimestampType_20.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_20);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_21;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_21("MULTIPLESTRINGVALUE_LOO");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_21);
    TrdRegTimestamps_NoTrdRegTimestamps_21.insert(DeskOrderHandlingInst_21.getString());
    FIX::DeskType DeskType_21("STRING_AR");
    noTrdRegTimestamps_0_1.set(DeskType_21);
    TrdRegTimestamps_NoTrdRegTimestamps_21.insert(DeskType_21.getString());
    FIX::DeskTypeSource DeskTypeSource_21(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_21);
    TrdRegTimestamps_NoTrdRegTimestamps_21.insert(DeskTypeSource_21.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_21(FIX::UTCTIMESTAMP(21, 18, 25, 19, 3, 2000));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_21);
    TrdRegTimestamps_NoTrdRegTimestamps_21.insert(TrdRegTimestamp_21.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_21("STRING_1720375838");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_21);
    TrdRegTimestamps_NoTrdRegTimestamps_21.insert(TrdRegTimestampOrigin_21.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_21(1);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_21);
    TrdRegTimestamps_NoTrdRegTimestamps_21.insert(TrdRegTimestampType_21.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_21);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_22;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_22("MULTIPLESTRINGVALUE_FOK");
    noTrdRegTimestamps_0_2.set(DeskOrderHandlingInst_22);
    TrdRegTimestamps_NoTrdRegTimestamps_22.insert(DeskOrderHandlingInst_22.getString());
    FIX::DeskType DeskType_22("STRING_A");
    noTrdRegTimestamps_0_2.set(DeskType_22);
    TrdRegTimestamps_NoTrdRegTimestamps_22.insert(DeskType_22.getString());
    FIX::DeskTypeSource DeskTypeSource_22(1);
    noTrdRegTimestamps_0_2.set(DeskTypeSource_22);
    TrdRegTimestamps_NoTrdRegTimestamps_22.insert(DeskTypeSource_22.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_22(FIX::UTCTIMESTAMP(4, 59, 31, 3, 8, 2015));
    noTrdRegTimestamps_0_2.set(TrdRegTimestamp_22);
    TrdRegTimestamps_NoTrdRegTimestamps_22.insert(TrdRegTimestamp_22.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_22("STRING_1386944401");
    noTrdRegTimestamps_0_2.set(TrdRegTimestampOrigin_22);
    TrdRegTimestamps_NoTrdRegTimestamps_22.insert(TrdRegTimestampOrigin_22.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_22(3);
    noTrdRegTimestamps_0_2.set(TrdRegTimestampType_22);
    TrdRegTimestamps_NoTrdRegTimestamps_22.insert(TrdRegTimestampType_22.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_22);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

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
    FIX::TrdRepPartyRole TrdRepPartyRole_1(1389993041);
    noTrdRepIndicators_0_0.set(TrdRepPartyRole_1);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_1.insert(TrdRepPartyRole_1.getString());
    all_values.push_back(TrdRepIndicatorsGrp_NoTrdRepIndicators_1);
    all_compo_names.insert("TrdRepIndicatorsGrp.NoTrdRepIndicators");

    msg.addGroup(noTrdRepIndicators_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRepIndicators noTrdRepIndicators_0_1;
    // TrdRepIndicatorsGrp.NoTrdRepIndicators
    multiset<string> TrdRepIndicatorsGrp_NoTrdRepIndicators_2;
    FIX::TrdRepIndicator TrdRepIndicator_2(false);
    noTrdRepIndicators_0_1.set(TrdRepIndicator_2);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_2.insert(TrdRepIndicator_2.getString());
    FIX::TrdRepPartyRole TrdRepPartyRole_2(2123518897);
    noTrdRepIndicators_0_1.set(TrdRepPartyRole_2);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_2.insert(TrdRepPartyRole_2.getString());
    all_values.push_back(TrdRepIndicatorsGrp_NoTrdRepIndicators_2);
    all_compo_names.insert("TrdRepIndicatorsGrp.NoTrdRepIndicators");

    msg.addGroup(noTrdRepIndicators_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRepIndicators noTrdRepIndicators_0_2;
    // TrdRepIndicatorsGrp.NoTrdRepIndicators
    multiset<string> TrdRepIndicatorsGrp_NoTrdRepIndicators_3;
    FIX::TrdRepIndicator TrdRepIndicator_3(false);
    noTrdRepIndicators_0_2.set(TrdRepIndicator_3);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_3.insert(TrdRepIndicator_3.getString());
    FIX::TrdRepPartyRole TrdRepPartyRole_3(531146442);
    noTrdRepIndicators_0_2.set(TrdRepPartyRole_3);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_3.insert(TrdRepPartyRole_3.getString());
    all_values.push_back(TrdRepIndicatorsGrp_NoTrdRepIndicators_3);
    all_compo_names.insert("TrdRepIndicatorsGrp.NoTrdRepIndicators");

    msg.addGroup(noTrdRepIndicators_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::TradeCaptureReportAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_147;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_147("DATA_1571650511");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_147);
    UnderlyingInstrument_147.insert(EncodedUnderlyingIssuer_147.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_147(100684235);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_147);
    UnderlyingInstrument_147.insert(EncodedUnderlyingIssuerLen_147.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_147("DATA_1791857605");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_147);
    UnderlyingInstrument_147.insert(EncodedUnderlyingSecurityDesc_147.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_147(1999266404);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_147);
    UnderlyingInstrument_147.insert(EncodedUnderlyingSecurityDescLen_147.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_147;
    UnderlyingAdjustedQuantity_147.setString("2588640");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_147);
    UnderlyingInstrument_147.insert(UnderlyingAdjustedQuantity_147.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_147;
    UnderlyingAllocationPercent_147.setString("63.020000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_147);
    UnderlyingInstrument_147.insert(UnderlyingAllocationPercent_147.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_147;
    UnderlyingAttachmentPoint_147.setString("21.190000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_147);
    UnderlyingInstrument_147.insert(UnderlyingAttachmentPoint_147.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_147("STRING_550595083");
    noUnderlyings_0_0.set(UnderlyingCFICode_147);
    UnderlyingInstrument_147.insert(UnderlyingCFICode_147.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_147("STRING_872067492");
    noUnderlyings_0_0.set(UnderlyingCPProgram_147);
    UnderlyingInstrument_147.insert(UnderlyingCPProgram_147.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_147("STRING_604204309");
    noUnderlyings_0_0.set(UnderlyingCPRegType_147);
    UnderlyingInstrument_147.insert(UnderlyingCPRegType_147.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_147;
    UnderlyingCapValue_147.setString("82214");
    noUnderlyings_0_0.set(UnderlyingCapValue_147);
    UnderlyingInstrument_147.insert(UnderlyingCapValue_147.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_147;
    UnderlyingCashAmount_147.setString("14335808");
    noUnderlyings_0_0.set(UnderlyingCashAmount_147);
    UnderlyingInstrument_147.insert(UnderlyingCashAmount_147.getString());
    FIX::UnderlyingCashType UnderlyingCashType_147("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_147);
    UnderlyingInstrument_147.insert(UnderlyingCashType_147.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_147;
    UnderlyingContractMultiplier_147.setString("13045970");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_147);
    UnderlyingInstrument_147.insert(UnderlyingContractMultiplier_147.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_147(1769727083);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_147);
    UnderlyingInstrument_147.insert(UnderlyingContractMultiplierUnit_147.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_147("COUNTRY_1042262061");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_147);
    UnderlyingInstrument_147.insert(UnderlyingCountryOfIssue_147.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_147("LOCALMKTDATE_1757673934");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_147);
    UnderlyingInstrument_147.insert(UnderlyingCouponPaymentDate_147.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_147;
    UnderlyingCouponRate_147.setString("11.660000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_147);
    UnderlyingInstrument_147.insert(UnderlyingCouponRate_147.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_147("STRING_714226369");
    noUnderlyings_0_0.set(UnderlyingCreditRating_147);
    UnderlyingInstrument_147.insert(UnderlyingCreditRating_147.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_147("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_147);
    UnderlyingInstrument_147.insert(UnderlyingCurrency_147.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_147;
    UnderlyingCurrentValue_147.setString("21011707");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_147);
    UnderlyingInstrument_147.insert(UnderlyingCurrentValue_147.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_147;
    UnderlyingDetachmentPoint_147.setString("41.460000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_147);
    UnderlyingInstrument_147.insert(UnderlyingDetachmentPoint_147.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_147;
    UnderlyingDirtyPrice_147.setString("11200923");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_147);
    UnderlyingInstrument_147.insert(UnderlyingDirtyPrice_147.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_147;
    UnderlyingEndPrice_147.setString("18229398");
    noUnderlyings_0_0.set(UnderlyingEndPrice_147);
    UnderlyingInstrument_147.insert(UnderlyingEndPrice_147.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_147;
    UnderlyingEndValue_147.setString("20944871");
    noUnderlyings_0_0.set(UnderlyingEndValue_147);
    UnderlyingInstrument_147.insert(UnderlyingEndValue_147.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_147(1144033890);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_147);
    UnderlyingInstrument_147.insert(UnderlyingExerciseStyle_147.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_147;
    UnderlyingFXRate_147.setString("17989751");
    noUnderlyings_0_0.set(UnderlyingFXRate_147);
    UnderlyingInstrument_147.insert(UnderlyingFXRate_147.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_147('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_147);
    UnderlyingInstrument_147.insert(UnderlyingFXRateCalc_147.getString());
    FIX::UnderlyingFactor UnderlyingFactor_147;
    UnderlyingFactor_147.setString("16751803");
    noUnderlyings_0_0.set(UnderlyingFactor_147);
    UnderlyingInstrument_147.insert(UnderlyingFactor_147.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_147(819438257);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_147);
    UnderlyingInstrument_147.insert(UnderlyingFlowScheduleType_147.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_147("STRING_1297963075");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_147);
    UnderlyingInstrument_147.insert(UnderlyingInstrRegistry_147.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_147("LOCALMKTDATE_1775864568");
    noUnderlyings_0_0.set(UnderlyingIssueDate_147);
    UnderlyingInstrument_147.insert(UnderlyingIssueDate_147.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_147("STRING_463812214");
    noUnderlyings_0_0.set(UnderlyingIssuer_147);
    UnderlyingInstrument_147.insert(UnderlyingIssuer_147.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_147("STRING_1149745831");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_147);
    UnderlyingInstrument_147.insert(UnderlyingLocaleOfIssue_147.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_147("LOCALMKTDATE_2034728622");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_147);
    UnderlyingInstrument_147.insert(UnderlyingMaturityDate_147.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_147("MONTHYEAR_1025398517");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_147);
    UnderlyingInstrument_147.insert(UnderlyingMaturityMonthYear_147.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_147("TZTIMEONLY_33574302");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_147);
    UnderlyingInstrument_147.insert(UnderlyingMaturityTime_147.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_147;
    UnderlyingNotionalPercentageOutstanding_147.setString("0.570000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_147);
    UnderlyingInstrument_147.insert(UnderlyingNotionalPercentageOutstanding_147.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_147('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_147);
    UnderlyingInstrument_147.insert(UnderlyingOptAttribute_147.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_147;
    UnderlyingOriginalNotionalPercentageOutstanding_147.setString("86.110000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_147);
    UnderlyingInstrument_147.insert(UnderlyingOriginalNotionalPercentageOutstanding_147.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_147("STRING_446061517");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_147);
    UnderlyingInstrument_147.insert(UnderlyingPriceUnitOfMeasure_147.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_147;
    UnderlyingPriceUnitOfMeasureQty_147.setString("11835632");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_147);
    UnderlyingInstrument_147.insert(UnderlyingPriceUnitOfMeasureQty_147.getString());
    FIX::UnderlyingProduct UnderlyingProduct_147(922439628);
    noUnderlyings_0_0.set(UnderlyingProduct_147);
    UnderlyingInstrument_147.insert(UnderlyingProduct_147.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_147(1750658532);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_147);
    UnderlyingInstrument_147.insert(UnderlyingPutOrCall_147.getString());
    FIX::UnderlyingPx UnderlyingPx_147;
    UnderlyingPx_147.setString("8058066");
    noUnderlyings_0_0.set(UnderlyingPx_147);
    UnderlyingInstrument_147.insert(UnderlyingPx_147.getString());
    FIX::UnderlyingQty UnderlyingQty_147;
    UnderlyingQty_147.setString("19647016");
    noUnderlyings_0_0.set(UnderlyingQty_147);
    UnderlyingInstrument_147.insert(UnderlyingQty_147.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_147("LOCALMKTDATE_1360848818");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_147);
    UnderlyingInstrument_147.insert(UnderlyingRedemptionDate_147.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_147("STRING_126334173");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_147);
    UnderlyingInstrument_147.insert(UnderlyingRepoCollateralSecurityType_147.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_147;
    UnderlyingRepurchaseRate_147.setString("44.110000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_147);
    UnderlyingInstrument_147.insert(UnderlyingRepurchaseRate_147.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_147(918272247);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_147);
    UnderlyingInstrument_147.insert(UnderlyingRepurchaseTerm_147.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_147("STRING_72227786");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_147);
    UnderlyingInstrument_147.insert(UnderlyingRestructuringType_147.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_147("STRING_485131533");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_147);
    UnderlyingInstrument_147.insert(UnderlyingSecurityDesc_147.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_147("EXCHANGE_1622766393");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_147);
    UnderlyingInstrument_147.insert(UnderlyingSecurityExchange_147.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_147("STRING_1192320166");
    noUnderlyings_0_0.set(UnderlyingSecurityID_147);
    UnderlyingInstrument_147.insert(UnderlyingSecurityID_147.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_147("STRING_160587764");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_147);
    UnderlyingInstrument_147.insert(UnderlyingSecurityIDSource_147.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_147("STRING_1569769932");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_147);
    UnderlyingInstrument_147.insert(UnderlyingSecuritySubType_147.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_147("STRING_188870408");
    noUnderlyings_0_0.set(UnderlyingSecurityType_147);
    UnderlyingInstrument_147.insert(UnderlyingSecurityType_147.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_147("STRING_1959562892");
    noUnderlyings_0_0.set(UnderlyingSeniority_147);
    UnderlyingInstrument_147.insert(UnderlyingSeniority_147.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_147("STRING_1296082496");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_147);
    UnderlyingInstrument_147.insert(UnderlyingSettlMethod_147.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_147(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_147);
    UnderlyingInstrument_147.insert(UnderlyingSettlementType_147.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_147;
    UnderlyingStartValue_147.setString("6315175");
    noUnderlyings_0_0.set(UnderlyingStartValue_147);
    UnderlyingInstrument_147.insert(UnderlyingStartValue_147.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_147("STRING_446561923");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_147);
    UnderlyingInstrument_147.insert(UnderlyingStateOrProvinceOfIssue_147.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_147("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_147);
    UnderlyingInstrument_147.insert(UnderlyingStrikeCurrency_147.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_147;
    UnderlyingStrikePrice_147.setString("15963077");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_147);
    UnderlyingInstrument_147.insert(UnderlyingStrikePrice_147.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_147("STRING_1379676636");
    noUnderlyings_0_0.set(UnderlyingSymbol_147);
    UnderlyingInstrument_147.insert(UnderlyingSymbol_147.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_147("STRING_2120728233");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_147);
    UnderlyingInstrument_147.insert(UnderlyingSymbolSfx_147.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_147("STRING_1629882056");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_147);
    UnderlyingInstrument_147.insert(UnderlyingTimeUnit_147.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_147("STRING_1817516693");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_147);
    UnderlyingInstrument_147.insert(UnderlyingUnitOfMeasure_147.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_147;
    UnderlyingUnitOfMeasureQty_147.setString("18707105");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_147);
    UnderlyingInstrument_147.insert(UnderlyingUnitOfMeasureQty_147.getString());
    all_values.push_back(UnderlyingInstrument_147);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_296;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_296("STRING_116094562");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_296);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_296.insert(UnderlyingSecurityAltID_296.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_296("STRING_906790166");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_296);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_296.insert(UnderlyingSecurityAltIDSource_296.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_296);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_297;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_297("STRING_1042616647");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_297);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_297.insert(UnderlyingSecurityAltID_297.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_297("STRING_1866753094");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_297);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_297.insert(UnderlyingSecurityAltIDSource_297.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_297);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_285;
      FIX::UnderlyingStipType UnderlyingStipType_285("STRING_859834689");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_285);
      UnderlyingStipulations_NoUnderlyingStips_285.insert(UnderlyingStipType_285.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_285("STRING_1080118264");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_285);
      UnderlyingStipulations_NoUnderlyingStips_285.insert(UnderlyingStipValue_285.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_285);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_286;
      FIX::UnderlyingStipType UnderlyingStipType_286("STRING_1838930993");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_286);
      UnderlyingStipulations_NoUnderlyingStips_286.insert(UnderlyingStipType_286.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_286("STRING_1391279100");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_286);
      UnderlyingStipulations_NoUnderlyingStips_286.insert(UnderlyingStipValue_286.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_286);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_287;
      FIX::UnderlyingStipType UnderlyingStipType_287("STRING_1998390511");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_287);
      UnderlyingStipulations_NoUnderlyingStips_287.insert(UnderlyingStipType_287.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_287("STRING_1911158780");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_287);
      UnderlyingStipulations_NoUnderlyingStips_287.insert(UnderlyingStipValue_287.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_287);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_283;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_283("STRING_1473673256");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_283);
      UndlyInstrumentParties_NoUndlyInstrumentParties_283.insert(UnderlyingInstrumentPartyID_283.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_283('9');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_283);
      UndlyInstrumentParties_NoUndlyInstrumentParties_283.insert(UnderlyingInstrumentPartyIDSource_283.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_283(2036998398);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_283);
      UndlyInstrumentParties_NoUndlyInstrumentParties_283.insert(UnderlyingInstrumentPartyRole_283.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_283);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_566;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_566("STRING_1144865706");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_566);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_566.insert(UnderlyingInstrumentPartySubID_566.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_566(1849077643);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_566);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_566.insert(UnderlyingInstrumentPartySubIDType_566.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_566);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_284;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_284("STRING_44558388");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_284);
      UndlyInstrumentParties_NoUndlyInstrumentParties_284.insert(UnderlyingInstrumentPartyID_284.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_284('8');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_284);
      UndlyInstrumentParties_NoUndlyInstrumentParties_284.insert(UnderlyingInstrumentPartyIDSource_284.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_284(333111496);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_284);
      UndlyInstrumentParties_NoUndlyInstrumentParties_284.insert(UnderlyingInstrumentPartyRole_284.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_284);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_567;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_567("STRING_206380814");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_567);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_567.insert(UnderlyingInstrumentPartySubID_567.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_567(1428441212);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_567);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_567.insert(UnderlyingInstrumentPartySubIDType_567.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_567);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_568;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_568("STRING_2087428065");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_568);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_568.insert(UnderlyingInstrumentPartySubID_568.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_568(1586057450);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_568);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_568.insert(UnderlyingInstrumentPartySubIDType_568.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_568);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_148;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_148("DATA_1401685797");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_148);
    UnderlyingInstrument_148.insert(EncodedUnderlyingIssuer_148.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_148(1569826473);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_148);
    UnderlyingInstrument_148.insert(EncodedUnderlyingIssuerLen_148.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_148("DATA_1256090495");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_148);
    UnderlyingInstrument_148.insert(EncodedUnderlyingSecurityDesc_148.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_148(1124912744);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_148);
    UnderlyingInstrument_148.insert(EncodedUnderlyingSecurityDescLen_148.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_148;
    UnderlyingAdjustedQuantity_148.setString("16900034");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_148);
    UnderlyingInstrument_148.insert(UnderlyingAdjustedQuantity_148.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_148;
    UnderlyingAllocationPercent_148.setString("50.580000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_148);
    UnderlyingInstrument_148.insert(UnderlyingAllocationPercent_148.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_148;
    UnderlyingAttachmentPoint_148.setString("29.100000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_148);
    UnderlyingInstrument_148.insert(UnderlyingAttachmentPoint_148.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_148("STRING_585136492");
    noUnderlyings_0_1.set(UnderlyingCFICode_148);
    UnderlyingInstrument_148.insert(UnderlyingCFICode_148.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_148("STRING_1091454504");
    noUnderlyings_0_1.set(UnderlyingCPProgram_148);
    UnderlyingInstrument_148.insert(UnderlyingCPProgram_148.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_148("STRING_1596816082");
    noUnderlyings_0_1.set(UnderlyingCPRegType_148);
    UnderlyingInstrument_148.insert(UnderlyingCPRegType_148.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_148;
    UnderlyingCapValue_148.setString("14449711");
    noUnderlyings_0_1.set(UnderlyingCapValue_148);
    UnderlyingInstrument_148.insert(UnderlyingCapValue_148.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_148;
    UnderlyingCashAmount_148.setString("240891");
    noUnderlyings_0_1.set(UnderlyingCashAmount_148);
    UnderlyingInstrument_148.insert(UnderlyingCashAmount_148.getString());
    FIX::UnderlyingCashType UnderlyingCashType_148("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_148);
    UnderlyingInstrument_148.insert(UnderlyingCashType_148.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_148;
    UnderlyingContractMultiplier_148.setString("6887666");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_148);
    UnderlyingInstrument_148.insert(UnderlyingContractMultiplier_148.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_148(2022479632);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_148);
    UnderlyingInstrument_148.insert(UnderlyingContractMultiplierUnit_148.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_148("COUNTRY_1051938560");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_148);
    UnderlyingInstrument_148.insert(UnderlyingCountryOfIssue_148.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_148("LOCALMKTDATE_417693620");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_148);
    UnderlyingInstrument_148.insert(UnderlyingCouponPaymentDate_148.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_148;
    UnderlyingCouponRate_148.setString("92.410000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_148);
    UnderlyingInstrument_148.insert(UnderlyingCouponRate_148.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_148("STRING_2007933858");
    noUnderlyings_0_1.set(UnderlyingCreditRating_148);
    UnderlyingInstrument_148.insert(UnderlyingCreditRating_148.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_148("CHF");
    noUnderlyings_0_1.set(UnderlyingCurrency_148);
    UnderlyingInstrument_148.insert(UnderlyingCurrency_148.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_148;
    UnderlyingCurrentValue_148.setString("10053159");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_148);
    UnderlyingInstrument_148.insert(UnderlyingCurrentValue_148.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_148;
    UnderlyingDetachmentPoint_148.setString("23.650000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_148);
    UnderlyingInstrument_148.insert(UnderlyingDetachmentPoint_148.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_148;
    UnderlyingDirtyPrice_148.setString("1417035");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_148);
    UnderlyingInstrument_148.insert(UnderlyingDirtyPrice_148.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_148;
    UnderlyingEndPrice_148.setString("18667487");
    noUnderlyings_0_1.set(UnderlyingEndPrice_148);
    UnderlyingInstrument_148.insert(UnderlyingEndPrice_148.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_148;
    UnderlyingEndValue_148.setString("3419138");
    noUnderlyings_0_1.set(UnderlyingEndValue_148);
    UnderlyingInstrument_148.insert(UnderlyingEndValue_148.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_148(632823833);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_148);
    UnderlyingInstrument_148.insert(UnderlyingExerciseStyle_148.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_148;
    UnderlyingFXRate_148.setString("20731295");
    noUnderlyings_0_1.set(UnderlyingFXRate_148);
    UnderlyingInstrument_148.insert(UnderlyingFXRate_148.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_148('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_148);
    UnderlyingInstrument_148.insert(UnderlyingFXRateCalc_148.getString());
    FIX::UnderlyingFactor UnderlyingFactor_148;
    UnderlyingFactor_148.setString("5727682");
    noUnderlyings_0_1.set(UnderlyingFactor_148);
    UnderlyingInstrument_148.insert(UnderlyingFactor_148.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_148(1511703332);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_148);
    UnderlyingInstrument_148.insert(UnderlyingFlowScheduleType_148.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_148("STRING_1024557224");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_148);
    UnderlyingInstrument_148.insert(UnderlyingInstrRegistry_148.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_148("LOCALMKTDATE_2142594724");
    noUnderlyings_0_1.set(UnderlyingIssueDate_148);
    UnderlyingInstrument_148.insert(UnderlyingIssueDate_148.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_148("STRING_620310180");
    noUnderlyings_0_1.set(UnderlyingIssuer_148);
    UnderlyingInstrument_148.insert(UnderlyingIssuer_148.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_148("STRING_1986320");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_148);
    UnderlyingInstrument_148.insert(UnderlyingLocaleOfIssue_148.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_148("LOCALMKTDATE_1685114569");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_148);
    UnderlyingInstrument_148.insert(UnderlyingMaturityDate_148.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_148("MONTHYEAR_1992495238");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_148);
    UnderlyingInstrument_148.insert(UnderlyingMaturityMonthYear_148.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_148("TZTIMEONLY_2033689230");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_148);
    UnderlyingInstrument_148.insert(UnderlyingMaturityTime_148.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_148;
    UnderlyingNotionalPercentageOutstanding_148.setString("74.130000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_148);
    UnderlyingInstrument_148.insert(UnderlyingNotionalPercentageOutstanding_148.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_148('9');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_148);
    UnderlyingInstrument_148.insert(UnderlyingOptAttribute_148.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_148;
    UnderlyingOriginalNotionalPercentageOutstanding_148.setString("16.640000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_148);
    UnderlyingInstrument_148.insert(UnderlyingOriginalNotionalPercentageOutstanding_148.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_148("STRING_1567738594");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_148);
    UnderlyingInstrument_148.insert(UnderlyingPriceUnitOfMeasure_148.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_148;
    UnderlyingPriceUnitOfMeasureQty_148.setString("9605552");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_148);
    UnderlyingInstrument_148.insert(UnderlyingPriceUnitOfMeasureQty_148.getString());
    FIX::UnderlyingProduct UnderlyingProduct_148(623801444);
    noUnderlyings_0_1.set(UnderlyingProduct_148);
    UnderlyingInstrument_148.insert(UnderlyingProduct_148.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_148(109021580);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_148);
    UnderlyingInstrument_148.insert(UnderlyingPutOrCall_148.getString());
    FIX::UnderlyingPx UnderlyingPx_148;
    UnderlyingPx_148.setString("8355512");
    noUnderlyings_0_1.set(UnderlyingPx_148);
    UnderlyingInstrument_148.insert(UnderlyingPx_148.getString());
    FIX::UnderlyingQty UnderlyingQty_148;
    UnderlyingQty_148.setString("16757400");
    noUnderlyings_0_1.set(UnderlyingQty_148);
    UnderlyingInstrument_148.insert(UnderlyingQty_148.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_148("LOCALMKTDATE_526715200");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_148);
    UnderlyingInstrument_148.insert(UnderlyingRedemptionDate_148.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_148("STRING_36736793");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_148);
    UnderlyingInstrument_148.insert(UnderlyingRepoCollateralSecurityType_148.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_148;
    UnderlyingRepurchaseRate_148.setString("2.140000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_148);
    UnderlyingInstrument_148.insert(UnderlyingRepurchaseRate_148.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_148(833923571);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_148);
    UnderlyingInstrument_148.insert(UnderlyingRepurchaseTerm_148.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_148("STRING_133881926");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_148);
    UnderlyingInstrument_148.insert(UnderlyingRestructuringType_148.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_148("STRING_394022483");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_148);
    UnderlyingInstrument_148.insert(UnderlyingSecurityDesc_148.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_148("EXCHANGE_842725936");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_148);
    UnderlyingInstrument_148.insert(UnderlyingSecurityExchange_148.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_148("STRING_275585448");
    noUnderlyings_0_1.set(UnderlyingSecurityID_148);
    UnderlyingInstrument_148.insert(UnderlyingSecurityID_148.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_148("STRING_113287551");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_148);
    UnderlyingInstrument_148.insert(UnderlyingSecurityIDSource_148.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_148("STRING_1184639798");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_148);
    UnderlyingInstrument_148.insert(UnderlyingSecuritySubType_148.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_148("STRING_908409282");
    noUnderlyings_0_1.set(UnderlyingSecurityType_148);
    UnderlyingInstrument_148.insert(UnderlyingSecurityType_148.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_148("STRING_38933434");
    noUnderlyings_0_1.set(UnderlyingSeniority_148);
    UnderlyingInstrument_148.insert(UnderlyingSeniority_148.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_148("STRING_807511225");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_148);
    UnderlyingInstrument_148.insert(UnderlyingSettlMethod_148.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_148(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_148);
    UnderlyingInstrument_148.insert(UnderlyingSettlementType_148.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_148;
    UnderlyingStartValue_148.setString("15506367");
    noUnderlyings_0_1.set(UnderlyingStartValue_148);
    UnderlyingInstrument_148.insert(UnderlyingStartValue_148.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_148("STRING_1832068449");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_148);
    UnderlyingInstrument_148.insert(UnderlyingStateOrProvinceOfIssue_148.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_148("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_148);
    UnderlyingInstrument_148.insert(UnderlyingStrikeCurrency_148.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_148;
    UnderlyingStrikePrice_148.setString("18340547");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_148);
    UnderlyingInstrument_148.insert(UnderlyingStrikePrice_148.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_148("STRING_1013919530");
    noUnderlyings_0_1.set(UnderlyingSymbol_148);
    UnderlyingInstrument_148.insert(UnderlyingSymbol_148.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_148("STRING_2015958536");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_148);
    UnderlyingInstrument_148.insert(UnderlyingSymbolSfx_148.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_148("STRING_1720260351");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_148);
    UnderlyingInstrument_148.insert(UnderlyingTimeUnit_148.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_148("STRING_1136686943");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_148);
    UnderlyingInstrument_148.insert(UnderlyingUnitOfMeasure_148.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_148;
    UnderlyingUnitOfMeasureQty_148.setString("8049409");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_148);
    UnderlyingInstrument_148.insert(UnderlyingUnitOfMeasureQty_148.getString());
    all_values.push_back(UnderlyingInstrument_148);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_298;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_298("STRING_556941890");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_298);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_298.insert(UnderlyingSecurityAltID_298.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_298("STRING_1765496198");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_298);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_298.insert(UnderlyingSecurityAltIDSource_298.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_298);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_288;
      FIX::UnderlyingStipType UnderlyingStipType_288("STRING_665963470");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_288);
      UnderlyingStipulations_NoUnderlyingStips_288.insert(UnderlyingStipType_288.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_288("STRING_453563750");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_288);
      UnderlyingStipulations_NoUnderlyingStips_288.insert(UnderlyingStipValue_288.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_288);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_285;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_285("STRING_1192678671");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_285);
      UndlyInstrumentParties_NoUndlyInstrumentParties_285.insert(UnderlyingInstrumentPartyID_285.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_285('4');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_285);
      UndlyInstrumentParties_NoUndlyInstrumentParties_285.insert(UnderlyingInstrumentPartyIDSource_285.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_285(596562735);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_285);
      UndlyInstrumentParties_NoUndlyInstrumentParties_285.insert(UnderlyingInstrumentPartyRole_285.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_285);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_569;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_569("STRING_624182470");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_569);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_569.insert(UnderlyingInstrumentPartySubID_569.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_569(990585218);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_569);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_569.insert(UnderlyingInstrumentPartySubIDType_569.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_569);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_570;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_570("STRING_721844530");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_570);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_570.insert(UnderlyingInstrumentPartySubID_570.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_570(899767918);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_570);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_570.insert(UnderlyingInstrumentPartySubIDType_570.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_570);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_571;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_571("STRING_1103872769");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_571);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_571.insert(UnderlyingInstrumentPartySubID_571.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_571(1906484329);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_571);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_571.insert(UnderlyingInstrumentPartySubIDType_571.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_571);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_286;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_286("STRING_1808177200");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_286);
      UndlyInstrumentParties_NoUndlyInstrumentParties_286.insert(UnderlyingInstrumentPartyID_286.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_286('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_286);
      UndlyInstrumentParties_NoUndlyInstrumentParties_286.insert(UnderlyingInstrumentPartyIDSource_286.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_286(566511906);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_286);
      UndlyInstrumentParties_NoUndlyInstrumentParties_286.insert(UnderlyingInstrumentPartyRole_286.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_286);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_572;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_572("STRING_545959322");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_572);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_572.insert(UnderlyingInstrumentPartySubID_572.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_572(251096707);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_572);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_572.insert(UnderlyingInstrumentPartySubIDType_572.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_572);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_287;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_287("STRING_470676047");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_287);
      UndlyInstrumentParties_NoUndlyInstrumentParties_287.insert(UnderlyingInstrumentPartyID_287.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_287('5');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_287);
      UndlyInstrumentParties_NoUndlyInstrumentParties_287.insert(UnderlyingInstrumentPartyIDSource_287.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_287(2085151476);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_287);
      UndlyInstrumentParties_NoUndlyInstrumentParties_287.insert(UnderlyingInstrumentPartyRole_287.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_287);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_573;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_573("STRING_437897509");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_573);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_573.insert(UnderlyingInstrumentPartySubID_573.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_573(1657928179);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_573);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_573.insert(UnderlyingInstrumentPartySubIDType_573.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_573);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_574;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_574("STRING_473798873");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_574);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_574.insert(UnderlyingInstrumentPartySubID_574.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_574(1242838492);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_574);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_574.insert(UnderlyingInstrumentPartySubIDType_574.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_574);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
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
