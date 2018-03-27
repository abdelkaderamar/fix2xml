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
  FIX::AsOfIndicator AsOfIndicator_1('0');
  msg.set(AsOfIndicator_1);
  TradeCaptureReportAck_0.insert(AsOfIndicator_1.getString());
  FIX::AvgPx AvgPx_8;
  AvgPx_8.setString("9452171");
  msg.set(AvgPx_8);
  TradeCaptureReportAck_0.insert(AvgPx_8.getString());
  FIX::AvgPxIndicator AvgPxIndicator_5(0);
  msg.set(AvgPxIndicator_5);
  TradeCaptureReportAck_0.insert(AvgPxIndicator_5.getString());
  FIX::CalculatedCcyLastQty CalculatedCcyLastQty_2;
  CalculatedCcyLastQty_2.setString("4413285");
  msg.set(CalculatedCcyLastQty_2);
  TradeCaptureReportAck_0.insert(CalculatedCcyLastQty_2.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_26("LOCALMKTDATE_1659904793");
  msg.set(ClearingBusinessDate_26);
  TradeCaptureReportAck_0.insert(ClearingBusinessDate_26.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_18("STRING_1");
  msg.set(ClearingFeeIndicator_18);
  TradeCaptureReportAck_0.insert(ClearingFeeIndicator_18.getString());
  FIX::CopyMsgIndicator CopyMsgIndicator_3(true);
  msg.set(CopyMsgIndicator_3);
  TradeCaptureReportAck_0.insert(CopyMsgIndicator_3.getString());
  FIX::Currency Currency_65("CHF");
  msg.set(Currency_65);
  TradeCaptureReportAck_0.insert(Currency_65.getString());
  FIX::EncodedText EncodedText_97("DATA_161384362");
  msg.set(EncodedText_97);
  TradeCaptureReportAck_0.insert(EncodedText_97.getString());
  FIX::EncodedTextLen EncodedTextLen_97(110396233);
  msg.set(EncodedTextLen_97);
  TradeCaptureReportAck_0.insert(EncodedTextLen_97.getString());
  FIX::ExecID ExecID_23("STRING_2065527919");
  msg.set(ExecID_23);
  TradeCaptureReportAck_0.insert(ExecID_23.getString());
  FIX::ExecRestatementReason ExecRestatementReason_2(6);
  msg.set(ExecRestatementReason_2);
  TradeCaptureReportAck_0.insert(ExecRestatementReason_2.getString());
  FIX::ExecType ExecType_2('K');
  msg.set(ExecType_2);
  TradeCaptureReportAck_0.insert(ExecType_2.getString());
  FIX::FeeMultiplier FeeMultiplier_1;
  FeeMultiplier_1.setString("19883811");
  msg.set(FeeMultiplier_1);
  TradeCaptureReportAck_0.insert(FeeMultiplier_1.getString());
  FIX::FirmTradeID FirmTradeID_9("STRING_1492402935");
  msg.set(FirmTradeID_9);
  TradeCaptureReportAck_0.insert(FirmTradeID_9.getString());
  FIX::GrossTradeAmt GrossTradeAmt_6;
  GrossTradeAmt_6.setString("15057765");
  msg.set(GrossTradeAmt_6);
  TradeCaptureReportAck_0.insert(GrossTradeAmt_6.getString());
  FIX::LastForwardPoints LastForwardPoints_2;
  LastForwardPoints_2.setString("1025944");
  msg.set(LastForwardPoints_2);
  TradeCaptureReportAck_0.insert(LastForwardPoints_2.getString());
  FIX::LastMkt LastMkt_7("EXCHANGE_1074429528");
  msg.set(LastMkt_7);
  TradeCaptureReportAck_0.insert(LastMkt_7.getString());
  FIX::LastParPx LastParPx_11;
  LastParPx_11.setString("12839610");
  msg.set(LastParPx_11);
  TradeCaptureReportAck_0.insert(LastParPx_11.getString());
  FIX::LastPx LastPx_16;
  LastPx_16.setString("8572201");
  msg.set(LastPx_16);
  TradeCaptureReportAck_0.insert(LastPx_16.getString());
  FIX::LastQty LastQty_12;
  LastQty_12.setString("4038072");
  msg.set(LastQty_12);
  TradeCaptureReportAck_0.insert(LastQty_12.getString());
  FIX::LastSpotRate LastSpotRate_2;
  LastSpotRate_2.setString("18752619");
  msg.set(LastSpotRate_2);
  TradeCaptureReportAck_0.insert(LastSpotRate_2.getString());
  FIX::LastSwapPoints LastSwapPoints_2;
  LastSwapPoints_2.setString("12545831");
  msg.set(LastSwapPoints_2);
  TradeCaptureReportAck_0.insert(LastSwapPoints_2.getString());
  FIX::LastUpdateTime LastUpdateTime_6(FIX::UTCTIMESTAMP(14, 16, 51, 6, 52013));
  msg.set(LastUpdateTime_6);
  TradeCaptureReportAck_0.insert(LastUpdateTime_6.getString());
  FIX::MarketID MarketID_29("EXCHANGE_1340547705");
  msg.set(MarketID_29);
  TradeCaptureReportAck_0.insert(MarketID_29.getString());
  FIX::MarketSegmentID MarketSegmentID_29("STRING_2131038519");
  msg.set(MarketSegmentID_29);
  TradeCaptureReportAck_0.insert(MarketSegmentID_29.getString());
  FIX::MatchStatus MatchStatus_12('1');
  msg.set(MatchStatus_12);
  TradeCaptureReportAck_0.insert(MatchStatus_12.getString());
  FIX::MatchType MatchType_75("STRING_M2");
  msg.set(MatchType_75);
  TradeCaptureReportAck_0.insert(MatchType_75.getString());
  FIX::MessageEventSource MessageEventSource_5("STRING_1643459664");
  msg.set(MessageEventSource_5);
  TradeCaptureReportAck_0.insert(MessageEventSource_5.getString());
  FIX::MultiLegReportingType MultiLegReportingType_5('2');
  msg.set(MultiLegReportingType_5);
  TradeCaptureReportAck_0.insert(MultiLegReportingType_5.getString());
  FIX::OrigSecondaryTradeID OrigSecondaryTradeID_1("STRING_1986739496");
  msg.set(OrigSecondaryTradeID_1);
  TradeCaptureReportAck_0.insert(OrigSecondaryTradeID_1.getString());
  FIX::OrigTradeDate OrigTradeDate_1("LOCALMKTDATE_1991420617");
  msg.set(OrigTradeDate_1);
  TradeCaptureReportAck_0.insert(OrigTradeDate_1.getString());
  FIX::OrigTradeHandlingInstr OrigTradeHandlingInstr_1('6');
  msg.set(OrigTradeHandlingInstr_1);
  TradeCaptureReportAck_0.insert(OrigTradeHandlingInstr_1.getString());
  FIX::OrigTradeID OrigTradeID_1("STRING_640210");
  msg.set(OrigTradeID_1);
  TradeCaptureReportAck_0.insert(OrigTradeID_1.getString());
  FIX::PreviouslyReported PreviouslyReported_4(true);
  msg.set(PreviouslyReported_4);
  TradeCaptureReportAck_0.insert(PreviouslyReported_4.getString());
  FIX::PriceType PriceType_51(18);
  msg.set(PriceType_51);
  TradeCaptureReportAck_0.insert(PriceType_51.getString());
  FIX::PublishTrdIndicator PublishTrdIndicator_1(false);
  msg.set(PublishTrdIndicator_1);
  TradeCaptureReportAck_0.insert(PublishTrdIndicator_1.getString());
  FIX::QtyType QtyType_30(0);
  msg.set(QtyType_30);
  TradeCaptureReportAck_0.insert(QtyType_30.getString());
  FIX::ResponseDestination ResponseDestination_4("STRING_400889024");
  msg.set(ResponseDestination_4);
  TradeCaptureReportAck_0.insert(ResponseDestination_4.getString());
  FIX::ResponseTransportType ResponseTransportType_4(0);
  msg.set(ResponseTransportType_4);
  TradeCaptureReportAck_0.insert(ResponseTransportType_4.getString());
  FIX::RndPx RndPx_4;
  RndPx_4.setString("3546642");
  msg.set(RndPx_4);
  TradeCaptureReportAck_0.insert(RndPx_4.getString());
  FIX::RptSys RptSys_0("STRING_503483453");
  msg.set(RptSys_0);
  TradeCaptureReportAck_0.insert(RptSys_0.getString());
  FIX::SecondaryExecID SecondaryExecID_10("STRING_1500410686");
  msg.set(SecondaryExecID_10);
  TradeCaptureReportAck_0.insert(SecondaryExecID_10.getString());
  FIX::SecondaryFirmTradeID SecondaryFirmTradeID_1("STRING_1638625292");
  msg.set(SecondaryFirmTradeID_1);
  TradeCaptureReportAck_0.insert(SecondaryFirmTradeID_1.getString());
  FIX::SecondaryTradeID SecondaryTradeID_1("STRING_1360703565");
  msg.set(SecondaryTradeID_1);
  TradeCaptureReportAck_0.insert(SecondaryTradeID_1.getString());
  FIX::SecondaryTradeReportID SecondaryTradeReportID_14("STRING_1904217939");
  msg.set(SecondaryTradeReportID_14);
  TradeCaptureReportAck_0.insert(SecondaryTradeReportID_14.getString());
  FIX::SecondaryTradeReportRefID SecondaryTradeReportRefID_1("STRING_1366403548");
  msg.set(SecondaryTradeReportRefID_1);
  TradeCaptureReportAck_0.insert(SecondaryTradeReportRefID_1.getString());
  FIX::SecondaryTrdType SecondaryTrdType_1(467803043);
  msg.set(SecondaryTrdType_1);
  TradeCaptureReportAck_0.insert(SecondaryTrdType_1.getString());
  FIX::SettlCurrency SettlCurrency_36("JPY");
  msg.set(SettlCurrency_36);
  TradeCaptureReportAck_0.insert(SettlCurrency_36.getString());
  FIX::SettlDate SettlDate_40("LOCALMKTDATE_786760960");
  msg.set(SettlDate_40);
  TradeCaptureReportAck_0.insert(SettlDate_40.getString());
  FIX::SettlSessID SettlSessID_13("STRING_EOD");
  msg.set(SettlSessID_13);
  TradeCaptureReportAck_0.insert(SettlSessID_13.getString());
  FIX::SettlSessSubID SettlSessSubID_12("STRING_386091341");
  msg.set(SettlSessSubID_12);
  TradeCaptureReportAck_0.insert(SettlSessSubID_12.getString());
  FIX::SettlType SettlType_37("STRING_8");
  msg.set(SettlType_37);
  TradeCaptureReportAck_0.insert(SettlType_37.getString());
  FIX::ShortSaleReason ShortSaleReason_1(0);
  msg.set(ShortSaleReason_1);
  TradeCaptureReportAck_0.insert(ShortSaleReason_1.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_14('2');
  msg.set(SubscriptionRequestType_14);
  TradeCaptureReportAck_0.insert(SubscriptionRequestType_14.getString());
  FIX::Text Text_97("STRING_1956137236");
  msg.set(Text_97);
  TradeCaptureReportAck_0.insert(Text_97.getString());
  FIX::TierCode TierCode_1("STRING_922910658");
  msg.set(TierCode_1);
  TradeCaptureReportAck_0.insert(TierCode_1.getString());
  FIX::TradeDate TradeDate_29("LOCALMKTDATE_1361031622");
  msg.set(TradeDate_29);
  TradeCaptureReportAck_0.insert(TradeDate_29.getString());
  FIX::TradeHandlingInstr TradeHandlingInstr_1('2');
  msg.set(TradeHandlingInstr_1);
  TradeCaptureReportAck_0.insert(TradeHandlingInstr_1.getString());
  FIX::TradeID TradeID_10("STRING_940445971");
  msg.set(TradeID_10);
  TradeCaptureReportAck_0.insert(TradeID_10.getString());
  FIX::TradeLegRefID TradeLegRefID_1("STRING_1200287470");
  msg.set(TradeLegRefID_1);
  TradeCaptureReportAck_0.insert(TradeLegRefID_1.getString());
  FIX::TradeLinkID TradeLinkID_1("STRING_1296050221");
  msg.set(TradeLinkID_1);
  TradeCaptureReportAck_0.insert(TradeLinkID_1.getString());
  FIX::TradePublishIndicator TradePublishIndicator_1(0);
  msg.set(TradePublishIndicator_1);
  TradeCaptureReportAck_0.insert(TradePublishIndicator_1.getString());
  FIX::TradeReportID TradeReportID_14("STRING_1200927681");
  msg.set(TradeReportID_14);
  TradeCaptureReportAck_0.insert(TradeReportID_14.getString());
  FIX::TradeReportRefID TradeReportRefID_1("STRING_1250383423");
  msg.set(TradeReportRefID_1);
  TradeCaptureReportAck_0.insert(TradeReportRefID_1.getString());
  FIX::TradeReportRejectReason TradeReportRejectReason_0(99);
  msg.set(TradeReportRejectReason_0);
  TradeCaptureReportAck_0.insert(TradeReportRejectReason_0.getString());
  FIX::TradeReportTransType TradeReportTransType_1(4);
  msg.set(TradeReportTransType_1);
  TradeCaptureReportAck_0.insert(TradeReportTransType_1.getString());
  FIX::TradeReportType TradeReportType_1(7);
  msg.set(TradeReportType_1);
  TradeCaptureReportAck_0.insert(TradeReportType_1.getString());
  FIX::TransactTime TransactTime_65(FIX::UTCTIMESTAMP(14, 44, 10, 0, 52000));
  msg.set(TransactTime_65);
  TradeCaptureReportAck_0.insert(TransactTime_65.getString());
  FIX::TransferReason TransferReason_1("STRING_1817632039");
  msg.set(TransferReason_1);
  TradeCaptureReportAck_0.insert(TransferReason_1.getString());
  FIX::TrdMatchID TrdMatchID_2("STRING_1311480636");
  msg.set(TrdMatchID_2);
  TradeCaptureReportAck_0.insert(TrdMatchID_2.getString());
  FIX::TrdRptStatus TrdRptStatus_1(3);
  msg.set(TrdRptStatus_1);
  TradeCaptureReportAck_0.insert(TrdRptStatus_1.getString());
  FIX::TrdSubType TrdSubType_4(32);
  msg.set(TrdSubType_4);
  TradeCaptureReportAck_0.insert(TrdSubType_4.getString());
  FIX::TrdType TrdType_7(44);
  msg.set(TrdType_7);
  TradeCaptureReportAck_0.insert(TrdType_7.getString());
  FIX::UnderlyingTradingSessionID UnderlyingTradingSessionID_1("STRING_1367057451");
  msg.set(UnderlyingTradingSessionID_1);
  TradeCaptureReportAck_0.insert(UnderlyingTradingSessionID_1.getString());
  FIX::UnderlyingTradingSessionSubID UnderlyingTradingSessionSubID_1("STRING_1149877375");
  msg.set(UnderlyingTradingSessionSubID_1);
  TradeCaptureReportAck_0.insert(UnderlyingTradingSessionSubID_1.getString());
  FIX::VenueType VenueType_1('X');
  msg.set(VenueType_1);
  TradeCaptureReportAck_0.insert(VenueType_1.getString());
  all_values.push_back(TradeCaptureReportAck_0);

  // Instrument
  multiset<string> Instrument_90;
  FIX::AttachmentPoint AttachmentPoint_90;
  AttachmentPoint_90.setString("61.680000");
  msg.set(AttachmentPoint_90);
  Instrument_90.insert(AttachmentPoint_90.getString());
  FIX::CFICode CFICode_97("STRING_996356796");
  msg.set(CFICode_97);
  Instrument_90.insert(CFICode_97.getString());
  FIX::CPProgram CPProgram_90(99);
  msg.set(CPProgram_90);
  Instrument_90.insert(CPProgram_90.getString());
  FIX::CPRegType CPRegType_90("STRING_1000809756");
  msg.set(CPRegType_90);
  Instrument_90.insert(CPRegType_90.getString());
  FIX::CapPrice CapPrice_90;
  CapPrice_90.setString("19192674");
  msg.set(CapPrice_90);
  Instrument_90.insert(CapPrice_90.getString());
  FIX::ContractMultiplier ContractMultiplier_90;
  ContractMultiplier_90.setString("16613769");
  msg.set(ContractMultiplier_90);
  Instrument_90.insert(ContractMultiplier_90.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_90(0);
  msg.set(ContractMultiplierUnit_90);
  Instrument_90.insert(ContractMultiplierUnit_90.getString());
  FIX::ContractSettlMonth ContractSettlMonth_90("MONTHYEAR_712229777");
  msg.set(ContractSettlMonth_90);
  Instrument_90.insert(ContractSettlMonth_90.getString());
  FIX::CountryOfIssue CountryOfIssue_90("COUNTRY_714180734");
  msg.set(CountryOfIssue_90);
  Instrument_90.insert(CountryOfIssue_90.getString());
  FIX::CouponPaymentDate CouponPaymentDate_90("LOCALMKTDATE_1601489582");
  msg.set(CouponPaymentDate_90);
  Instrument_90.insert(CouponPaymentDate_90.getString());
  FIX::CouponRate CouponRate_90;
  CouponRate_90.setString("93.300000");
  msg.set(CouponRate_90);
  Instrument_90.insert(CouponRate_90.getString());
  FIX::CreditRating CreditRating_90("STRING_1915108415");
  msg.set(CreditRating_90);
  Instrument_90.insert(CreditRating_90.getString());
  FIX::DatedDate DatedDate_90("LOCALMKTDATE_704389357");
  msg.set(DatedDate_90);
  Instrument_90.insert(DatedDate_90.getString());
  FIX::DetachmentPoint DetachmentPoint_90;
  DetachmentPoint_90.setString("3.830000");
  msg.set(DetachmentPoint_90);
  Instrument_90.insert(DetachmentPoint_90.getString());
  FIX::EncodedIssuer EncodedIssuer_90("DATA_2049614319");
  msg.set(EncodedIssuer_90);
  Instrument_90.insert(EncodedIssuer_90.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_90(803660533);
  msg.set(EncodedIssuerLen_90);
  Instrument_90.insert(EncodedIssuerLen_90.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_90("DATA_537830460");
  msg.set(EncodedSecurityDesc_90);
  Instrument_90.insert(EncodedSecurityDesc_90.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_90(462617733);
  msg.set(EncodedSecurityDescLen_90);
  Instrument_90.insert(EncodedSecurityDescLen_90.getString());
  FIX::ExerciseStyle ExerciseStyle_90(0);
  msg.set(ExerciseStyle_90);
  Instrument_90.insert(ExerciseStyle_90.getString());
  FIX::Factor Factor_90;
  Factor_90.setString("14371039");
  msg.set(Factor_90);
  Instrument_90.insert(Factor_90.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_90(true);
  msg.set(FlexProductEligibilityIndicator_90);
  Instrument_90.insert(FlexProductEligibilityIndicator_90.getString());
  FIX::FlexibleIndicator FlexibleIndicator_90(true);
  msg.set(FlexibleIndicator_90);
  Instrument_90.insert(FlexibleIndicator_90.getString());
  FIX::FloorPrice FloorPrice_90;
  FloorPrice_90.setString("15495974");
  msg.set(FloorPrice_90);
  Instrument_90.insert(FloorPrice_90.getString());
  FIX::FlowScheduleType FlowScheduleType_90(0);
  msg.set(FlowScheduleType_90);
  Instrument_90.insert(FlowScheduleType_90.getString());
  FIX::InstrRegistry InstrRegistry_90("STRING_366670054");
  msg.set(InstrRegistry_90);
  Instrument_90.insert(InstrRegistry_90.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_90('2');
  msg.set(InstrmtAssignmentMethod_90);
  Instrument_90.insert(InstrmtAssignmentMethod_90.getString());
  FIX::InterestAccrualDate InterestAccrualDate_90("LOCALMKTDATE_1848983441");
  msg.set(InterestAccrualDate_90);
  Instrument_90.insert(InterestAccrualDate_90.getString());
  FIX::IssueDate IssueDate_90("LOCALMKTDATE_701768605");
  msg.set(IssueDate_90);
  Instrument_90.insert(IssueDate_90.getString());
  FIX::Issuer Issuer_90("STRING_1349467734");
  msg.set(Issuer_90);
  Instrument_90.insert(Issuer_90.getString());
  FIX::ListMethod ListMethod_90(1);
  msg.set(ListMethod_90);
  Instrument_90.insert(ListMethod_90.getString());
  FIX::LocaleOfIssue LocaleOfIssue_90("STRING_1422958497");
  msg.set(LocaleOfIssue_90);
  Instrument_90.insert(LocaleOfIssue_90.getString());
  FIX::MaturityDate MaturityDate_90("LOCALMKTDATE_394140254");
  msg.set(MaturityDate_90);
  Instrument_90.insert(MaturityDate_90.getString());
  FIX::MaturityMonthYear MaturityMonthYear_90("MONTHYEAR_1847733965");
  msg.set(MaturityMonthYear_90);
  Instrument_90.insert(MaturityMonthYear_90.getString());
  FIX::MaturityTime MaturityTime_90("TZTIMEONLY_1723303787");
  msg.set(MaturityTime_90);
  Instrument_90.insert(MaturityTime_90.getString());
  FIX::MinPriceIncrement MinPriceIncrement_90;
  MinPriceIncrement_90.setString("13949500");
  msg.set(MinPriceIncrement_90);
  Instrument_90.insert(MinPriceIncrement_90.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_90;
  MinPriceIncrementAmount_90.setString("16195177");
  msg.set(MinPriceIncrementAmount_90);
  Instrument_90.insert(MinPriceIncrementAmount_90.getString());
  FIX::NTPositionLimit NTPositionLimit_90(1237197051);
  msg.set(NTPositionLimit_90);
  Instrument_90.insert(NTPositionLimit_90.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_90;
  NotionalPercentageOutstanding_90.setString("93.700000");
  msg.set(NotionalPercentageOutstanding_90);
  Instrument_90.insert(NotionalPercentageOutstanding_90.getString());
  FIX::OptAttribute OptAttribute_90('1');
  msg.set(OptAttribute_90);
  Instrument_90.insert(OptAttribute_90.getString());
  FIX::OptPayoutAmount OptPayoutAmount_90;
  OptPayoutAmount_90.setString("19513777");
  msg.set(OptPayoutAmount_90);
  Instrument_90.insert(OptPayoutAmount_90.getString());
  FIX::OptPayoutType OptPayoutType_90(3);
  msg.set(OptPayoutType_90);
  Instrument_90.insert(OptPayoutType_90.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_90;
  OriginalNotionalPercentageOutstanding_90.setString("32.300000");
  msg.set(OriginalNotionalPercentageOutstanding_90);
  Instrument_90.insert(OriginalNotionalPercentageOutstanding_90.getString());
  FIX::Pool Pool_90("STRING_1719002553");
  msg.set(Pool_90);
  Instrument_90.insert(Pool_90.getString());
  FIX::PositionLimit PositionLimit_90(1858784662);
  msg.set(PositionLimit_90);
  Instrument_90.insert(PositionLimit_90.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_90("STRING_INX");
  msg.set(PriceQuoteMethod_90);
  Instrument_90.insert(PriceQuoteMethod_90.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_90("STRING_1621133225");
  msg.set(PriceUnitOfMeasure_90);
  Instrument_90.insert(PriceUnitOfMeasure_90.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_90;
  PriceUnitOfMeasureQty_90.setString("5149615");
  msg.set(PriceUnitOfMeasureQty_90);
  Instrument_90.insert(PriceUnitOfMeasureQty_90.getString());
  FIX::Product Product_100(6);
  msg.set(Product_100);
  Instrument_90.insert(Product_100.getString());
  FIX::ProductComplex ProductComplex_90("STRING_2083750958");
  msg.set(ProductComplex_90);
  Instrument_90.insert(ProductComplex_90.getString());
  FIX::PutOrCall PutOrCall_90(0);
  msg.set(PutOrCall_90);
  Instrument_90.insert(PutOrCall_90.getString());
  FIX::RedemptionDate RedemptionDate_90("LOCALMKTDATE_300894417");
  msg.set(RedemptionDate_90);
  Instrument_90.insert(RedemptionDate_90.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_90("STRING_312299144");
  msg.set(RepoCollateralSecurityType_90);
  Instrument_90.insert(RepoCollateralSecurityType_90.getString());
  FIX::RepurchaseRate RepurchaseRate_90;
  RepurchaseRate_90.setString("69.420000");
  msg.set(RepurchaseRate_90);
  Instrument_90.insert(RepurchaseRate_90.getString());
  FIX::RepurchaseTerm RepurchaseTerm_90(1850491856);
  msg.set(RepurchaseTerm_90);
  Instrument_90.insert(RepurchaseTerm_90.getString());
  FIX::RestructuringType RestructuringType_90("STRING_MM");
  msg.set(RestructuringType_90);
  Instrument_90.insert(RestructuringType_90.getString());
  FIX::SecurityDesc SecurityDesc_90("STRING_1194416997");
  msg.set(SecurityDesc_90);
  Instrument_90.insert(SecurityDesc_90.getString());
  FIX::SecurityExchange SecurityExchange_90("EXCHANGE_1832902138");
  msg.set(SecurityExchange_90);
  Instrument_90.insert(SecurityExchange_90.getString());
  FIX::SecurityGroup SecurityGroup_90("STRING_59979163");
  msg.set(SecurityGroup_90);
  Instrument_90.insert(SecurityGroup_90.getString());
  FIX::SecurityID SecurityID_90("STRING_1896185602");
  msg.set(SecurityID_90);
  Instrument_90.insert(SecurityID_90.getString());
  FIX::SecurityIDSource SecurityIDSource_90("STRING_L");
  msg.set(SecurityIDSource_90);
  Instrument_90.insert(SecurityIDSource_90.getString());
  FIX::SecurityStatus SecurityStatus_91("STRING_1");
  msg.set(SecurityStatus_91);
  Instrument_90.insert(SecurityStatus_91.getString());
  FIX::SecuritySubType SecuritySubType_95("STRING_1171660452");
  msg.set(SecuritySubType_95);
  Instrument_90.insert(SecuritySubType_95.getString());
  FIX::SecurityType SecurityType_100("STRING_TECP");
  msg.set(SecurityType_100);
  Instrument_90.insert(SecurityType_100.getString());
  FIX::Seniority Seniority_90("STRING_SD");
  msg.set(Seniority_90);
  Instrument_90.insert(Seniority_90.getString());
  FIX::SettlMethod SettlMethod_90('P');
  msg.set(SettlMethod_90);
  Instrument_90.insert(SettlMethod_90.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_90("STRING_676492840");
  msg.set(SettleOnOpenFlag_90);
  Instrument_90.insert(SettleOnOpenFlag_90.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_90("STRING_83640772");
  msg.set(StateOrProvinceOfIssue_90);
  Instrument_90.insert(StateOrProvinceOfIssue_90.getString());
  FIX::StrikeCurrency StrikeCurrency_90("CAN");
  msg.set(StrikeCurrency_90);
  Instrument_90.insert(StrikeCurrency_90.getString());
  FIX::StrikeMultiplier StrikeMultiplier_90;
  StrikeMultiplier_90.setString("2679046");
  msg.set(StrikeMultiplier_90);
  Instrument_90.insert(StrikeMultiplier_90.getString());
  FIX::StrikePrice StrikePrice_90;
  StrikePrice_90.setString("17885717");
  msg.set(StrikePrice_90);
  Instrument_90.insert(StrikePrice_90.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_90(3);
  msg.set(StrikePriceBoundaryMethod_90);
  Instrument_90.insert(StrikePriceBoundaryMethod_90.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_90;
  StrikePriceBoundaryPrecision_90.setString("79.030000");
  msg.set(StrikePriceBoundaryPrecision_90);
  Instrument_90.insert(StrikePriceBoundaryPrecision_90.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_90(3);
  msg.set(StrikePriceDeterminationMethod_90);
  Instrument_90.insert(StrikePriceDeterminationMethod_90.getString());
  FIX::StrikeValue StrikeValue_90;
  StrikeValue_90.setString("10950948");
  msg.set(StrikeValue_90);
  Instrument_90.insert(StrikeValue_90.getString());
  FIX::Symbol Symbol_90("STRING_1072751517");
  msg.set(Symbol_90);
  Instrument_90.insert(Symbol_90.getString());
  FIX::SymbolSfx SymbolSfx_90("STRING_WI");
  msg.set(SymbolSfx_90);
  Instrument_90.insert(SymbolSfx_90.getString());
  FIX::TimeUnit TimeUnit_90("STRING_Min");
  msg.set(TimeUnit_90);
  Instrument_90.insert(TimeUnit_90.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_90(4);
  msg.set(UnderlyingPriceDeterminationMethod_90);
  Instrument_90.insert(UnderlyingPriceDeterminationMethod_90.getString());
  FIX::UnitOfMeasure UnitOfMeasure_90("STRING_USD");
  msg.set(UnitOfMeasure_90);
  Instrument_90.insert(UnitOfMeasure_90.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_90;
  UnitOfMeasureQty_90.setString("12351303");
  msg.set(UnitOfMeasureQty_90);
  Instrument_90.insert(UnitOfMeasureQty_90.getString());
  FIX::ValuationMethod ValuationMethod_90("STRING_EQTY");
  msg.set(ValuationMethod_90);
  Instrument_90.insert(ValuationMethod_90.getString());
  all_values.push_back(Instrument_90);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReportAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_168;
    FIX::ComplexEventCondition ComplexEventCondition_168(2);
    noComplexEvents_0_0.set(ComplexEventCondition_168);
    ComplexEvents_NoComplexEvents_168.insert(ComplexEventCondition_168.getString());
    FIX::ComplexEventPrice ComplexEventPrice_168;
    ComplexEventPrice_168.setString("20879282");
    noComplexEvents_0_0.set(ComplexEventPrice_168);
    ComplexEvents_NoComplexEvents_168.insert(ComplexEventPrice_168.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_168(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_168);
    ComplexEvents_NoComplexEvents_168.insert(ComplexEventPriceBoundaryMethod_168.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_168;
    ComplexEventPriceBoundaryPrecision_168.setString("5.960000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_168);
    ComplexEvents_NoComplexEvents_168.insert(ComplexEventPriceBoundaryPrecision_168.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_168(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_168);
    ComplexEvents_NoComplexEvents_168.insert(ComplexEventPriceTimeType_168.getString());
    FIX::ComplexEventType ComplexEventType_168(7);
    noComplexEvents_0_0.set(ComplexEventType_168);
    ComplexEvents_NoComplexEvents_168.insert(ComplexEventType_168.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_168;
    ComplexOptPayoutAmount_168.setString("8585125");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_168);
    ComplexEvents_NoComplexEvents_168.insert(ComplexOptPayoutAmount_168.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_168);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_353;
      FIX::ComplexEventEndDate ComplexEventEndDate_353(FIX::UTCTIMESTAMP(19, 1, 26, 14, 112006));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_353);
      ComplexEventDates_NoComplexEventDates_353.insert(ComplexEventEndDate_353.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_353(FIX::UTCTIMESTAMP(21, 11, 34, 12, 42017));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_353);
      ComplexEventDates_NoComplexEventDates_353.insert(ComplexEventStartDate_353.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_353);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_702;
        FIX::ComplexEventEndTime ComplexEventEndTime_702(FIX::UTCTIMEONLY(0, 58, 47));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_702);
        ComplexEventTimes_NoComplexEventTimes_702.insert(ComplexEventEndTime_702.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_702(FIX::UTCTIMEONLY(15, 27, 29));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_702);
        ComplexEventTimes_NoComplexEventTimes_702.insert(ComplexEventStartTime_702.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_702);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradeCaptureReportAck::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_171;
    FIX::EventDate EventDate_171("LOCALMKTDATE_866788675");
    noEvents_0_0.set(EventDate_171);
    EvntGrp_NoEvents_171.insert(EventDate_171.getString());
    FIX::EventPx EventPx_171;
    EventPx_171.setString("13004161");
    noEvents_0_0.set(EventPx_171);
    EvntGrp_NoEvents_171.insert(EventPx_171.getString());
    FIX::EventText EventText_171("STRING_755012251");
    noEvents_0_0.set(EventText_171);
    EvntGrp_NoEvents_171.insert(EventText_171.getString());
    FIX::EventTime EventTime_171(FIX::UTCTIMESTAMP(17, 2, 16, 22, 22010));
    noEvents_0_0.set(EventTime_171);
    EvntGrp_NoEvents_171.insert(EventTime_171.getString());
    FIX::EventType EventType_171(17);
    noEvents_0_0.set(EventType_171);
    EvntGrp_NoEvents_171.insert(EventType_171.getString());
    all_values.push_back(EvntGrp_NoEvents_171);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_172;
    FIX::EventDate EventDate_172("LOCALMKTDATE_2126384104");
    noEvents_0_1.set(EventDate_172);
    EvntGrp_NoEvents_172.insert(EventDate_172.getString());
    FIX::EventPx EventPx_172;
    EventPx_172.setString("17144780");
    noEvents_0_1.set(EventPx_172);
    EvntGrp_NoEvents_172.insert(EventPx_172.getString());
    FIX::EventText EventText_172("STRING_606981946");
    noEvents_0_1.set(EventText_172);
    EvntGrp_NoEvents_172.insert(EventText_172.getString());
    FIX::EventTime EventTime_172(FIX::UTCTIMESTAMP(9, 58, 32, 13, 62013));
    noEvents_0_1.set(EventTime_172);
    EvntGrp_NoEvents_172.insert(EventTime_172.getString());
    FIX::EventType EventType_172(8);
    noEvents_0_1.set(EventType_172);
    EvntGrp_NoEvents_172.insert(EventType_172.getString());
    all_values.push_back(EvntGrp_NoEvents_172);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_173;
    FIX::EventDate EventDate_173("LOCALMKTDATE_119268421");
    noEvents_0_2.set(EventDate_173);
    EvntGrp_NoEvents_173.insert(EventDate_173.getString());
    FIX::EventPx EventPx_173;
    EventPx_173.setString("305749");
    noEvents_0_2.set(EventPx_173);
    EvntGrp_NoEvents_173.insert(EventPx_173.getString());
    FIX::EventText EventText_173("STRING_173938058");
    noEvents_0_2.set(EventText_173);
    EvntGrp_NoEvents_173.insert(EventText_173.getString());
    FIX::EventTime EventTime_173(FIX::UTCTIMESTAMP(16, 41, 15, 1, 92014));
    noEvents_0_2.set(EventTime_173);
    EvntGrp_NoEvents_173.insert(EventTime_173.getString());
    FIX::EventType EventType_173(3);
    noEvents_0_2.set(EventType_173);
    EvntGrp_NoEvents_173.insert(EventType_173.getString());
    all_values.push_back(EvntGrp_NoEvents_173);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReportAck::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_175;
    FIX::InstrumentPartyID InstrumentPartyID_175("STRING_946477035");
    noInstrumentParties_0_0.set(InstrumentPartyID_175);
    InstrumentParties_NoInstrumentParties_175.insert(InstrumentPartyID_175.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_175('6');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_175);
    InstrumentParties_NoInstrumentParties_175.insert(InstrumentPartyIDSource_175.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_175(1917484822);
    noInstrumentParties_0_0.set(InstrumentPartyRole_175);
    InstrumentParties_NoInstrumentParties_175.insert(InstrumentPartyRole_175.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_175);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350;
      FIX::InstrumentPartySubID InstrumentPartySubID_350("STRING_1539977758");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_350);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350.insert(InstrumentPartySubID_350.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_350(1266215332);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_350);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350.insert(InstrumentPartySubIDType_350.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351;
      FIX::InstrumentPartySubID InstrumentPartySubID_351("STRING_1048087534");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_351);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351.insert(InstrumentPartySubID_351.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_351(1187074346);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_351);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351.insert(InstrumentPartySubIDType_351.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_352;
      FIX::InstrumentPartySubID InstrumentPartySubID_352("STRING_1245115788");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_352);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_352.insert(InstrumentPartySubID_352.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_352(615081970);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_352);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_352.insert(InstrumentPartySubIDType_352.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_352);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_176;
    FIX::InstrumentPartyID InstrumentPartyID_176("STRING_1794056292");
    noInstrumentParties_0_1.set(InstrumentPartyID_176);
    InstrumentParties_NoInstrumentParties_176.insert(InstrumentPartyID_176.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_176('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_176);
    InstrumentParties_NoInstrumentParties_176.insert(InstrumentPartyIDSource_176.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_176(1030259923);
    noInstrumentParties_0_1.set(InstrumentPartyRole_176);
    InstrumentParties_NoInstrumentParties_176.insert(InstrumentPartyRole_176.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_176);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_353;
      FIX::InstrumentPartySubID InstrumentPartySubID_353("STRING_98613009");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_353);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_353.insert(InstrumentPartySubID_353.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_353(1529931612);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_353);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_353.insert(InstrumentPartySubIDType_353.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_353);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_354;
      FIX::InstrumentPartySubID InstrumentPartySubID_354("STRING_848247239");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_354);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_354.insert(InstrumentPartySubID_354.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_354(2121872242);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_354);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_354.insert(InstrumentPartySubIDType_354.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_354);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_355;
      FIX::InstrumentPartySubID InstrumentPartySubID_355("STRING_1061708272");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_355);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_355.insert(InstrumentPartySubID_355.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_355(967515660);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_355);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_355.insert(InstrumentPartySubIDType_355.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_355);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_177;
    FIX::InstrumentPartyID InstrumentPartyID_177("STRING_4963556");
    noInstrumentParties_0_2.set(InstrumentPartyID_177);
    InstrumentParties_NoInstrumentParties_177.insert(InstrumentPartyID_177.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_177('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_177);
    InstrumentParties_NoInstrumentParties_177.insert(InstrumentPartyIDSource_177.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_177(1775691828);
    noInstrumentParties_0_2.set(InstrumentPartyRole_177);
    InstrumentParties_NoInstrumentParties_177.insert(InstrumentPartyRole_177.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_177);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_356;
      FIX::InstrumentPartySubID InstrumentPartySubID_356("STRING_1139392443");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_356);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_356.insert(InstrumentPartySubID_356.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_356(1362728455);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_356);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_356.insert(InstrumentPartySubIDType_356.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_356);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradeCaptureReportAck::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_185;
    FIX::SecurityAltID SecurityAltID_185("STRING_688340212");
    noSecurityAltID_0_0.set(SecurityAltID_185);
    SecAltIDGrp_NoSecurityAltID_185.insert(SecurityAltID_185.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_185("STRING_1816553757");
    noSecurityAltID_0_0.set(SecurityAltIDSource_185);
    SecAltIDGrp_NoSecurityAltID_185.insert(SecurityAltIDSource_185.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_185);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_186;
    FIX::SecurityAltID SecurityAltID_186("STRING_1743301795");
    noSecurityAltID_0_1.set(SecurityAltID_186);
    SecAltIDGrp_NoSecurityAltID_186.insert(SecurityAltID_186.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_186("STRING_992300232");
    noSecurityAltID_0_1.set(SecurityAltIDSource_186);
    SecAltIDGrp_NoSecurityAltID_186.insert(SecurityAltIDSource_186.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_186);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_180;
  FIX::SecurityXML SecurityXML_181("XMLDATA_615547145");
  msg.set(SecurityXML_181);
  FIX::SecurityXMLLen SecurityXMLLen_90(217460255);
  msg.set(SecurityXMLLen_90);
  FIX::SecurityXMLSchema SecurityXMLSchema_90("STRING_762301406");
  msg.set(SecurityXMLSchema_90);
  SecurityXML_180.insert(SecurityXMLSchema_90.getString());
  all_values.push_back(SecurityXML_180);

  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::TradeCaptureReportAck::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_17;
    FIX::PosAmt PosAmt_17;
    PosAmt_17.setString("17574380");
    noPosAmt_0_0.set(PosAmt_17);
    PositionAmountData_NoPosAmt_17.insert(PosAmt_17.getString());
    FIX::PosAmtType PosAmtType_17("STRING_TVAR");
    noPosAmt_0_0.set(PosAmtType_17);
    PositionAmountData_NoPosAmt_17.insert(PosAmtType_17.getString());
    FIX::PositionCurrency PositionCurrency_17("STRING_1616029083");
    noPosAmt_0_0.set(PositionCurrency_17);
    PositionAmountData_NoPosAmt_17.insert(PositionCurrency_17.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_17);

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_18;
    FIX::PosAmt PosAmt_18;
    PosAmt_18.setString("7970287");
    noPosAmt_0_1.set(PosAmt_18);
    PositionAmountData_NoPosAmt_18.insert(PosAmt_18.getString());
    FIX::PosAmtType PosAmtType_18("STRING_ACPN");
    noPosAmt_0_1.set(PosAmtType_18);
    PositionAmountData_NoPosAmt_18.insert(PosAmtType_18.getString());
    FIX::PositionCurrency PositionCurrency_18("STRING_83627405");
    noPosAmt_0_1.set(PositionCurrency_18);
    PositionAmountData_NoPosAmt_18.insert(PositionCurrency_18.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_18);

    msg.addGroup(noPosAmt_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoPosAmt noPosAmt_0_2;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_19;
    FIX::PosAmt PosAmt_19;
    PosAmt_19.setString("4436013");
    noPosAmt_0_2.set(PosAmt_19);
    PositionAmountData_NoPosAmt_19.insert(PosAmt_19.getString());
    FIX::PosAmtType PosAmtType_19("STRING_TVAR");
    noPosAmt_0_2.set(PosAmtType_19);
    PositionAmountData_NoPosAmt_19.insert(PosAmtType_19.getString());
    FIX::PositionCurrency PositionCurrency_19("STRING_1113887328");
    noPosAmt_0_2.set(PositionCurrency_19);
    PositionAmountData_NoPosAmt_19.insert(PositionCurrency_19.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_19);

    msg.addGroup(noPosAmt_0_2);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_12;
    FIX::RootPartyID RootPartyID_12("STRING_768658425");
    noRootPartyIDs_0_0.set(RootPartyID_12);
    RootParties_NoRootPartyIDs_12.insert(RootPartyID_12.getString());
    FIX::RootPartyIDSource RootPartyIDSource_12('4');
    noRootPartyIDs_0_0.set(RootPartyIDSource_12);
    RootParties_NoRootPartyIDs_12.insert(RootPartyIDSource_12.getString());
    FIX::RootPartyRole RootPartyRole_12(625709570);
    noRootPartyIDs_0_0.set(RootPartyRole_12);
    RootParties_NoRootPartyIDs_12.insert(RootPartyRole_12.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_12);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_23;
      FIX::RootPartySubID RootPartySubID_23("STRING_1558043564");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_23);
      RootSubParties_NoRootPartySubIDs_23.insert(RootPartySubID_23.getString());
      FIX::RootPartySubIDType RootPartySubIDType_23(1593225230);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_23);
      RootSubParties_NoRootPartySubIDs_23.insert(RootPartySubIDType_23.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_23);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_13;
    FIX::RootPartyID RootPartyID_13("STRING_748010576");
    noRootPartyIDs_0_1.set(RootPartyID_13);
    RootParties_NoRootPartyIDs_13.insert(RootPartyID_13.getString());
    FIX::RootPartyIDSource RootPartyIDSource_13('6');
    noRootPartyIDs_0_1.set(RootPartyIDSource_13);
    RootParties_NoRootPartyIDs_13.insert(RootPartyIDSource_13.getString());
    FIX::RootPartyRole RootPartyRole_13(1221433411);
    noRootPartyIDs_0_1.set(RootPartyRole_13);
    RootParties_NoRootPartyIDs_13.insert(RootPartyRole_13.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_13);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_24;
      FIX::RootPartySubID RootPartySubID_24("STRING_1785598690");
      noRootPartySubIDs_1_1_0.set(RootPartySubID_24);
      RootSubParties_NoRootPartySubIDs_24.insert(RootPartySubID_24.getString());
      FIX::RootPartySubIDType RootPartySubIDType_24(436678218);
      noRootPartySubIDs_1_1_0.set(RootPartySubIDType_24);
      RootSubParties_NoRootPartySubIDs_24.insert(RootPartySubIDType_24.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_24);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_25;
      FIX::RootPartySubID RootPartySubID_25("STRING_1336229797");
      noRootPartySubIDs_1_1_1.set(RootPartySubID_25);
      RootSubParties_NoRootPartySubIDs_25.insert(RootPartySubID_25.getString());
      FIX::RootPartySubIDType RootPartySubIDType_25(326455254);
      noRootPartySubIDs_1_1_1.set(RootPartySubIDType_25);
      RootSubParties_NoRootPartySubIDs_25.insert(RootPartySubIDType_25.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_25);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_26;
      FIX::RootPartySubID RootPartySubID_26("STRING_105748328");
      noRootPartySubIDs_1_1_2.set(RootPartySubID_26);
      RootSubParties_NoRootPartySubIDs_26.insert(RootPartySubID_26.getString());
      FIX::RootPartySubIDType RootPartySubIDType_26(932047944);
      noRootPartySubIDs_1_1_2.set(RootPartySubIDType_26);
      RootSubParties_NoRootPartySubIDs_26.insert(RootPartySubIDType_26.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_26);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_1);
  }
  // TrdCapRptAckSideGrp
  // Group TrdCapRptAckSideGrp.NoSides
  {
    FIX50SP2::TradeCaptureReportAck::NoSides noSides_0_0;
    // TrdCapRptAckSideGrp.NoSides
    multiset<string> TrdCapRptAckSideGrp_NoSides_0;
    FIX::Account Account_45("STRING_721295473");
    noSides_0_0.set(Account_45);
    TrdCapRptAckSideGrp_NoSides_0.insert(Account_45.getString());
    FIX::AccountType AccountType_39(2);
    noSides_0_0.set(AccountType_39);
    TrdCapRptAckSideGrp_NoSides_0.insert(AccountType_39.getString());
    FIX::AccruedInterestAmt AccruedInterestAmt_11;
    AccruedInterestAmt_11.setString("20810568");
    noSides_0_0.set(AccruedInterestAmt_11);
    TrdCapRptAckSideGrp_NoSides_0.insert(AccruedInterestAmt_11.getString());
    FIX::AccruedInterestRate AccruedInterestRate_6;
    AccruedInterestRate_6.setString("70.220000");
    noSides_0_0.set(AccruedInterestRate_6);
    TrdCapRptAckSideGrp_NoSides_0.insert(AccruedInterestRate_6.getString());
    FIX::AcctIDSource AcctIDSource_38(2);
    noSides_0_0.set(AcctIDSource_38);
    TrdCapRptAckSideGrp_NoSides_0.insert(AcctIDSource_38.getString());
    FIX::AggressorIndicator AggressorIndicator_2(false);
    noSides_0_0.set(AggressorIndicator_2);
    TrdCapRptAckSideGrp_NoSides_0.insert(AggressorIndicator_2.getString());
    FIX::AllocID AllocID_21("STRING_757782457");
    noSides_0_0.set(AllocID_21);
    TrdCapRptAckSideGrp_NoSides_0.insert(AllocID_21.getString());
    FIX::ComplianceID ComplianceID_14("STRING_1556491277");
    noSides_0_0.set(ComplianceID_14);
    TrdCapRptAckSideGrp_NoSides_0.insert(ComplianceID_14.getString());
    FIX::Concession Concession_6;
    Concession_6.setString("9407552");
    noSides_0_0.set(Concession_6);
    TrdCapRptAckSideGrp_NoSides_0.insert(Concession_6.getString());
    FIX::CustOrderCapacity CustOrderCapacity_20(3);
    noSides_0_0.set(CustOrderCapacity_20);
    TrdCapRptAckSideGrp_NoSides_0.insert(CustOrderCapacity_20.getString());
    FIX::EndAccruedInterestAmt EndAccruedInterestAmt_11;
    EndAccruedInterestAmt_11.setString("20000926");
    noSides_0_0.set(EndAccruedInterestAmt_11);
    TrdCapRptAckSideGrp_NoSides_0.insert(EndAccruedInterestAmt_11.getString());
    FIX::EndCash EndCash_11;
    EndCash_11.setString("16108006");
    noSides_0_0.set(EndCash_11);
    TrdCapRptAckSideGrp_NoSides_0.insert(EndCash_11.getString());
    FIX::ExDate ExDate_3("LOCALMKTDATE_1955297190");
    noSides_0_0.set(ExDate_3);
    TrdCapRptAckSideGrp_NoSides_0.insert(ExDate_3.getString());
    FIX::ExchangeRule ExchangeRule_1("STRING_1777554963");
    noSides_0_0.set(ExchangeRule_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(ExchangeRule_1.getString());
    FIX::InterestAtMaturity InterestAtMaturity_6;
    InterestAtMaturity_6.setString("2319754");
    noSides_0_0.set(InterestAtMaturity_6);
    TrdCapRptAckSideGrp_NoSides_0.insert(InterestAtMaturity_6.getString());
    FIX::NetGrossInd NetGrossInd_5(1);
    noSides_0_0.set(NetGrossInd_5);
    TrdCapRptAckSideGrp_NoSides_0.insert(NetGrossInd_5.getString());
    FIX::NetMoney NetMoney_6;
    NetMoney_6.setString("2557808");
    noSides_0_0.set(NetMoney_6);
    TrdCapRptAckSideGrp_NoSides_0.insert(NetMoney_6.getString());
    FIX::NumDaysInterest NumDaysInterest_6(975022427);
    noSides_0_0.set(NumDaysInterest_6);
    TrdCapRptAckSideGrp_NoSides_0.insert(NumDaysInterest_6.getString());
    FIX::OddLot OddLot_1(false);
    noSides_0_0.set(OddLot_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(OddLot_1.getString());
    FIX::OrderCategory OrderCategory_2('1');
    noSides_0_0.set(OrderCategory_2);
    TrdCapRptAckSideGrp_NoSides_0.insert(OrderCategory_2.getString());
    FIX::OrderDelay OrderDelay_1(1723033003);
    noSides_0_0.set(OrderDelay_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(OrderDelay_1.getString());
    FIX::OrderDelayUnit OrderDelayUnit_1(13);
    noSides_0_0.set(OrderDelayUnit_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(OrderDelayUnit_1.getString());
    FIX::PositionEffect PositionEffect_17('D');
    noSides_0_0.set(PositionEffect_17);
    TrdCapRptAckSideGrp_NoSides_0.insert(PositionEffect_17.getString());
    FIX::PreallocMethod PreallocMethod_14('1');
    noSides_0_0.set(PreallocMethod_14);
    TrdCapRptAckSideGrp_NoSides_0.insert(PreallocMethod_14.getString());
    FIX::ProcessCode ProcessCode_15('3');
    noSides_0_0.set(ProcessCode_15);
    TrdCapRptAckSideGrp_NoSides_0.insert(ProcessCode_15.getString());
    FIX::RptSeq RptSeq_5(1359634097);
    noSides_0_0.set(RptSeq_5);
    TrdCapRptAckSideGrp_NoSides_0.insert(RptSeq_5.getString());
    FIX::SettlCurrAmt SettlCurrAmt_9;
    SettlCurrAmt_9.setString("4726515");
    noSides_0_0.set(SettlCurrAmt_9);
    TrdCapRptAckSideGrp_NoSides_0.insert(SettlCurrAmt_9.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_9;
    SettlCurrFxRate_9.setString("3254852");
    noSides_0_0.set(SettlCurrFxRate_9);
    TrdCapRptAckSideGrp_NoSides_0.insert(SettlCurrFxRate_9.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_11('D');
    noSides_0_0.set(SettlCurrFxRateCalc_11);
    TrdCapRptAckSideGrp_NoSides_0.insert(SettlCurrFxRateCalc_11.getString());
    FIX::Side Side_51('5');
    noSides_0_0.set(Side_51);
    TrdCapRptAckSideGrp_NoSides_0.insert(Side_51.getString());
    FIX::SideCurrency SideCurrency_1("USD");
    noSides_0_0.set(SideCurrency_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideCurrency_1.getString());
    FIX::SideExecID SideExecID_1("STRING_406724044");
    noSides_0_0.set(SideExecID_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideExecID_1.getString());
    FIX::SideFillStationCd SideFillStationCd_1("STRING_1577814024");
    noSides_0_0.set(SideFillStationCd_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideFillStationCd_1.getString());
    FIX::SideGrossTradeAmt SideGrossTradeAmt_1;
    SideGrossTradeAmt_1.setString("13284312");
    noSides_0_0.set(SideGrossTradeAmt_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideGrossTradeAmt_1.getString());
    FIX::SideLastQty SideLastQty_1(1166186610);
    noSides_0_0.set(SideLastQty_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideLastQty_1.getString());
    FIX::SideMultiLegReportingType SideMultiLegReportingType_1(3);
    noSides_0_0.set(SideMultiLegReportingType_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideMultiLegReportingType_1.getString());
    FIX::SideReasonCd SideReasonCd_1("STRING_2086213729");
    noSides_0_0.set(SideReasonCd_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideReasonCd_1.getString());
    FIX::SideSettlCurrency SideSettlCurrency_1("USD");
    noSides_0_0.set(SideSettlCurrency_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideSettlCurrency_1.getString());
    FIX::SideTradeReportID SideTradeReportID_1("STRING_780139943");
    noSides_0_0.set(SideTradeReportID_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideTradeReportID_1.getString());
    FIX::SideTrdSubTyp SideTrdSubTyp_1(427803224);
    noSides_0_0.set(SideTrdSubTyp_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideTrdSubTyp_1.getString());
    FIX::SolicitedFlag SolicitedFlag_14(true);
    noSides_0_0.set(SolicitedFlag_14);
    TrdCapRptAckSideGrp_NoSides_0.insert(SolicitedFlag_14.getString());
    FIX::StartCash StartCash_11;
    StartCash_11.setString("5879534");
    noSides_0_0.set(StartCash_11);
    TrdCapRptAckSideGrp_NoSides_0.insert(StartCash_11.getString());
    FIX::TimeBracket TimeBracket_2("STRING_57874539");
    noSides_0_0.set(TimeBracket_2);
    TrdCapRptAckSideGrp_NoSides_0.insert(TimeBracket_2.getString());
    FIX::TotalTakedown TotalTakedown_6;
    TotalTakedown_6.setString("20284679");
    noSides_0_0.set(TotalTakedown_6);
    TrdCapRptAckSideGrp_NoSides_0.insert(TotalTakedown_6.getString());
    FIX::TradeAllocIndicator TradeAllocIndicator_1(0);
    noSides_0_0.set(TradeAllocIndicator_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(TradeAllocIndicator_1.getString());
    FIX::TradeInputDevice TradeInputDevice_2("STRING_313655425");
    noSides_0_0.set(TradeInputDevice_2);
    TrdCapRptAckSideGrp_NoSides_0.insert(TradeInputDevice_2.getString());
    FIX::TradeInputSource TradeInputSource_4("STRING_856006740");
    noSides_0_0.set(TradeInputSource_4);
    TrdCapRptAckSideGrp_NoSides_0.insert(TradeInputSource_4.getString());
    FIX::TradingSessionID TradingSessionID_101("STRING_4");
    noSides_0_0.set(TradingSessionID_101);
    TrdCapRptAckSideGrp_NoSides_0.insert(TradingSessionID_101.getString());
    FIX::TradingSessionSubID TradingSessionSubID_101("STRING_4");
    noSides_0_0.set(TradingSessionSubID_101);
    TrdCapRptAckSideGrp_NoSides_0.insert(TradingSessionSubID_101.getString());
    all_values.push_back(TrdCapRptAckSideGrp_NoSides_0);

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_13;
      FIX::ClearingInstruction ClearingInstruction_13(8);
      noClearingInstructions_0_1_0.set(ClearingInstruction_13);
      ClrInstGrp_NoClearingInstructions_13.insert(ClearingInstruction_13.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_13);

      noSides_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoClearingInstructions noClearingInstructions_0_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_14;
      FIX::ClearingInstruction ClearingInstruction_14(2);
      noClearingInstructions_0_1_1.set(ClearingInstruction_14);
      ClrInstGrp_NoClearingInstructions_14.insert(ClearingInstruction_14.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_14);

      noSides_0_0.addGroup(noClearingInstructions_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoClearingInstructions noClearingInstructions_0_1_2;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_15;
      FIX::ClearingInstruction ClearingInstruction_15(12);
      noClearingInstructions_0_1_2.set(ClearingInstruction_15);
      ClrInstGrp_NoClearingInstructions_15.insert(ClearingInstruction_15.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_15);

      noSides_0_0.addGroup(noClearingInstructions_0_1_2);
    }
    // CommissionData
    multiset<string> CommissionData_21;
    FIX::CommCurrency CommCurrency_21("EUR");
    noSides_0_0.set(CommCurrency_21);
    CommissionData_21.insert(CommCurrency_21.getString());
    FIX::CommType CommType_24('5');
    noSides_0_0.set(CommType_24);
    CommissionData_21.insert(CommType_24.getString());
    FIX::Commission Commission_24;
    Commission_24.setString("12922414");
    noSides_0_0.set(Commission_24);
    CommissionData_21.insert(Commission_24.getString());
    FIX::FundRenewWaiv FundRenewWaiv_21('Y');
    noSides_0_0.set(FundRenewWaiv_21);
    CommissionData_21.insert(FundRenewWaiv_21.getString());
    all_values.push_back(CommissionData_21);

    // ContAmtGrp
    // Group ContAmtGrp.NoContAmts
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoContAmts noContAmts_0_1_0;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_3;
      FIX::ContAmtCurr ContAmtCurr_3("CHF");
      noContAmts_0_1_0.set(ContAmtCurr_3);
      ContAmtGrp_NoContAmts_3.insert(ContAmtCurr_3.getString());
      FIX::ContAmtType ContAmtType_3(7);
      noContAmts_0_1_0.set(ContAmtType_3);
      ContAmtGrp_NoContAmts_3.insert(ContAmtType_3.getString());
      FIX::ContAmtValue ContAmtValue_3;
      ContAmtValue_3.setString("2193289");
      noContAmts_0_1_0.set(ContAmtValue_3);
      ContAmtGrp_NoContAmts_3.insert(ContAmtValue_3.getString());
      all_values.push_back(ContAmtGrp_NoContAmts_3);

      noSides_0_0.addGroup(noContAmts_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoContAmts noContAmts_0_1_1;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_4;
      FIX::ContAmtCurr ContAmtCurr_4("EUR");
      noContAmts_0_1_1.set(ContAmtCurr_4);
      ContAmtGrp_NoContAmts_4.insert(ContAmtCurr_4.getString());
      FIX::ContAmtType ContAmtType_4(4);
      noContAmts_0_1_1.set(ContAmtType_4);
      ContAmtGrp_NoContAmts_4.insert(ContAmtType_4.getString());
      FIX::ContAmtValue ContAmtValue_4;
      ContAmtValue_4.setString("7745386");
      noContAmts_0_1_1.set(ContAmtValue_4);
      ContAmtGrp_NoContAmts_4.insert(ContAmtValue_4.getString());
      all_values.push_back(ContAmtGrp_NoContAmts_4);

      noSides_0_0.addGroup(noContAmts_0_1_1);
    }
    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_20;
      FIX::MiscFeeAmt MiscFeeAmt_20;
      MiscFeeAmt_20.setString("17974411");
      noMiscFees_0_1_0.set(MiscFeeAmt_20);
      MiscFeesGrp_NoMiscFees_20.insert(MiscFeeAmt_20.getString());
      FIX::MiscFeeBasis MiscFeeBasis_20(1);
      noMiscFees_0_1_0.set(MiscFeeBasis_20);
      MiscFeesGrp_NoMiscFees_20.insert(MiscFeeBasis_20.getString());
      FIX::MiscFeeCurr MiscFeeCurr_20("GBP");
      noMiscFees_0_1_0.set(MiscFeeCurr_20);
      MiscFeesGrp_NoMiscFees_20.insert(MiscFeeCurr_20.getString());
      FIX::MiscFeeType MiscFeeType_20("STRING_3");
      noMiscFees_0_1_0.set(MiscFeeType_20);
      MiscFeesGrp_NoMiscFees_20.insert(MiscFeeType_20.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_20);

      noSides_0_0.addGroup(noMiscFees_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoMiscFees noMiscFees_0_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_21;
      FIX::MiscFeeAmt MiscFeeAmt_21;
      MiscFeeAmt_21.setString("19316278");
      noMiscFees_0_1_1.set(MiscFeeAmt_21);
      MiscFeesGrp_NoMiscFees_21.insert(MiscFeeAmt_21.getString());
      FIX::MiscFeeBasis MiscFeeBasis_21(0);
      noMiscFees_0_1_1.set(MiscFeeBasis_21);
      MiscFeesGrp_NoMiscFees_21.insert(MiscFeeBasis_21.getString());
      FIX::MiscFeeCurr MiscFeeCurr_21("GBP");
      noMiscFees_0_1_1.set(MiscFeeCurr_21);
      MiscFeesGrp_NoMiscFees_21.insert(MiscFeeCurr_21.getString());
      FIX::MiscFeeType MiscFeeType_21("STRING_2");
      noMiscFees_0_1_1.set(MiscFeeType_21);
      MiscFeesGrp_NoMiscFees_21.insert(MiscFeeType_21.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_21);

      noSides_0_0.addGroup(noMiscFees_0_1_1);
    }
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_150;
      FIX::PartyID PartyID_150("STRING_112977565");
      noPartyIDs_0_1_0.set(PartyID_150);
      Parties_NoPartyIDs_150.insert(PartyID_150.getString());
      FIX::PartyIDSource PartyIDSource_150('C');
      noPartyIDs_0_1_0.set(PartyIDSource_150);
      Parties_NoPartyIDs_150.insert(PartyIDSource_150.getString());
      FIX::PartyRole PartyRole_150(54);
      noPartyIDs_0_1_0.set(PartyRole_150);
      Parties_NoPartyIDs_150.insert(PartyRole_150.getString());
      all_values.push_back(Parties_NoPartyIDs_150);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_293;
        FIX::PartySubID PartySubID_293("STRING_35491444");
        noPartySubIDs_0_0_2_0.set(PartySubID_293);
        PtysSubGrp_NoPartySubIDs_293.insert(PartySubID_293.getString());
        FIX::PartySubIDType PartySubIDType_293(8);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_293);
        PtysSubGrp_NoPartySubIDs_293.insert(PartySubIDType_293.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_293);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_294;
        FIX::PartySubID PartySubID_294("STRING_1201395559");
        noPartySubIDs_0_0_2_1.set(PartySubID_294);
        PtysSubGrp_NoPartySubIDs_294.insert(PartySubID_294.getString());
        FIX::PartySubIDType PartySubIDType_294(3);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_294);
        PtysSubGrp_NoPartySubIDs_294.insert(PartySubIDType_294.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_294);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_295;
        FIX::PartySubID PartySubID_295("STRING_425818057");
        noPartySubIDs_0_0_2_2.set(PartySubID_295);
        PtysSubGrp_NoPartySubIDs_295.insert(PartySubID_295.getString());
        FIX::PartySubIDType PartySubIDType_295(12);
        noPartySubIDs_0_0_2_2.set(PartySubIDType_295);
        PtysSubGrp_NoPartySubIDs_295.insert(PartySubIDType_295.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_295);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_151;
      FIX::PartyID PartyID_151("STRING_1521449725");
      noPartyIDs_0_1_1.set(PartyID_151);
      Parties_NoPartyIDs_151.insert(PartyID_151.getString());
      FIX::PartyIDSource PartyIDSource_151('I');
      noPartyIDs_0_1_1.set(PartyIDSource_151);
      Parties_NoPartyIDs_151.insert(PartyIDSource_151.getString());
      FIX::PartyRole PartyRole_151(65);
      noPartyIDs_0_1_1.set(PartyRole_151);
      Parties_NoPartyIDs_151.insert(PartyRole_151.getString());
      all_values.push_back(Parties_NoPartyIDs_151);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_296;
        FIX::PartySubID PartySubID_296("STRING_1434145499");
        noPartySubIDs_0_1_2_0.set(PartySubID_296);
        PtysSubGrp_NoPartySubIDs_296.insert(PartySubID_296.getString());
        FIX::PartySubIDType PartySubIDType_296(6);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_296);
        PtysSubGrp_NoPartySubIDs_296.insert(PartySubIDType_296.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_296);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_297;
        FIX::PartySubID PartySubID_297("STRING_2096774901");
        noPartySubIDs_0_1_2_1.set(PartySubID_297);
        PtysSubGrp_NoPartySubIDs_297.insert(PartySubID_297.getString());
        FIX::PartySubIDType PartySubIDType_297(13);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_297);
        PtysSubGrp_NoPartySubIDs_297.insert(PartySubIDType_297.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_297);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_298;
        FIX::PartySubID PartySubID_298("STRING_1787302933");
        noPartySubIDs_0_1_2_2.set(PartySubID_298);
        PtysSubGrp_NoPartySubIDs_298.insert(PartySubID_298.getString());
        FIX::PartySubIDType PartySubIDType_298(33);
        noPartySubIDs_0_1_2_2.set(PartySubIDType_298);
        PtysSubGrp_NoPartySubIDs_298.insert(PartySubIDType_298.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_298);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_2);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_152;
      FIX::PartyID PartyID_152("STRING_548368664");
      noPartyIDs_0_1_2.set(PartyID_152);
      Parties_NoPartyIDs_152.insert(PartyID_152.getString());
      FIX::PartyIDSource PartyIDSource_152('C');
      noPartyIDs_0_1_2.set(PartyIDSource_152);
      Parties_NoPartyIDs_152.insert(PartyIDSource_152.getString());
      FIX::PartyRole PartyRole_152(47);
      noPartyIDs_0_1_2.set(PartyRole_152);
      Parties_NoPartyIDs_152.insert(PartyRole_152.getString());
      all_values.push_back(Parties_NoPartyIDs_152);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_299;
        FIX::PartySubID PartySubID_299("STRING_1189646216");
        noPartySubIDs_0_2_2_0.set(PartySubID_299);
        PtysSubGrp_NoPartySubIDs_299.insert(PartySubID_299.getString());
        FIX::PartySubIDType PartySubIDType_299(8);
        noPartySubIDs_0_2_2_0.set(PartySubIDType_299);
        PtysSubGrp_NoPartySubIDs_299.insert(PartySubIDType_299.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_299);

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_300;
        FIX::PartySubID PartySubID_300("STRING_1174769526");
        noPartySubIDs_0_2_2_1.set(PartySubID_300);
        PtysSubGrp_NoPartySubIDs_300.insert(PartySubID_300.getString());
        FIX::PartySubIDType PartySubIDType_300(12);
        noPartySubIDs_0_2_2_1.set(PartySubIDType_300);
        PtysSubGrp_NoPartySubIDs_300.insert(PartySubIDType_300.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_300);

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_1);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails noSettlDetails_0_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_4;
      FIX::SettlObligSource SettlObligSource_4('2');
      noSettlDetails_0_1_0.set(SettlObligSource_4);
      SettlDetails_NoSettlDetails_4.insert(SettlObligSource_4.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_4);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_48;
        FIX::SettlPartyID SettlPartyID_48("STRING_1116432578");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_48);
        SettlParties_NoSettlPartyIDs_48.insert(SettlPartyID_48.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_48('1');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_48);
        SettlParties_NoSettlPartyIDs_48.insert(SettlPartyIDSource_48.getString());
        FIX::SettlPartyRole SettlPartyRole_48(1737779244);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_48);
        SettlParties_NoSettlPartyIDs_48.insert(SettlPartyRole_48.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_48);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_102;
          FIX::SettlPartySubID SettlPartySubID_102("STRING_1713732072");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_102);
          SettlPtysSubGrp_NoSettlPartySubIDs_102.insert(SettlPartySubID_102.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_102(871355900);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_102);
          SettlPtysSubGrp_NoSettlPartySubIDs_102.insert(SettlPartySubIDType_102.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_102);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_49;
        FIX::SettlPartyID SettlPartyID_49("STRING_1221455827");
        noSettlPartyIDs_0_0_2_1.set(SettlPartyID_49);
        SettlParties_NoSettlPartyIDs_49.insert(SettlPartyID_49.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_49('1');
        noSettlPartyIDs_0_0_2_1.set(SettlPartyIDSource_49);
        SettlParties_NoSettlPartyIDs_49.insert(SettlPartyIDSource_49.getString());
        FIX::SettlPartyRole SettlPartyRole_49(1297173958);
        noSettlPartyIDs_0_0_2_1.set(SettlPartyRole_49);
        SettlParties_NoSettlPartyIDs_49.insert(SettlPartyRole_49.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_49);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_103;
          FIX::SettlPartySubID SettlPartySubID_103("STRING_1163818988");
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubID_103);
          SettlPtysSubGrp_NoSettlPartySubIDs_103.insert(SettlPartySubID_103.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_103(364506900);
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubIDType_103);
          SettlPtysSubGrp_NoSettlPartySubIDs_103.insert(SettlPartySubIDType_103.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_103);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_50;
        FIX::SettlPartyID SettlPartyID_50("STRING_2067990192");
        noSettlPartyIDs_0_0_2_2.set(SettlPartyID_50);
        SettlParties_NoSettlPartyIDs_50.insert(SettlPartyID_50.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_50('2');
        noSettlPartyIDs_0_0_2_2.set(SettlPartyIDSource_50);
        SettlParties_NoSettlPartyIDs_50.insert(SettlPartyIDSource_50.getString());
        FIX::SettlPartyRole SettlPartyRole_50(1798652400);
        noSettlPartyIDs_0_0_2_2.set(SettlPartyRole_50);
        SettlParties_NoSettlPartyIDs_50.insert(SettlPartyRole_50.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_50);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_104;
          FIX::SettlPartySubID SettlPartySubID_104("STRING_191645601");
          noSettlPartySubIDs_0_0_2_3_0.set(SettlPartySubID_104);
          SettlPtysSubGrp_NoSettlPartySubIDs_104.insert(SettlPartySubID_104.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_104(549579871);
          noSettlPartySubIDs_0_0_2_3_0.set(SettlPartySubIDType_104);
          SettlPtysSubGrp_NoSettlPartySubIDs_104.insert(SettlPartySubIDType_104.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_104);

          noSettlPartyIDs_0_0_2_2.addGroup(noSettlPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_105;
          FIX::SettlPartySubID SettlPartySubID_105("STRING_573090159");
          noSettlPartySubIDs_0_0_2_3_1.set(SettlPartySubID_105);
          SettlPtysSubGrp_NoSettlPartySubIDs_105.insert(SettlPartySubID_105.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_105(1586886986);
          noSettlPartySubIDs_0_0_2_3_1.set(SettlPartySubIDType_105);
          SettlPtysSubGrp_NoSettlPartySubIDs_105.insert(SettlPartySubIDType_105.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_105);

          noSettlPartyIDs_0_0_2_2.addGroup(noSettlPartySubIDs_0_0_2_3_1);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_2);
      }
      noSides_0_0.addGroup(noSettlDetails_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails noSettlDetails_0_1_1;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_5;
      FIX::SettlObligSource SettlObligSource_5('1');
      noSettlDetails_0_1_1.set(SettlObligSource_5);
      SettlDetails_NoSettlDetails_5.insert(SettlObligSource_5.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_5);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_51;
        FIX::SettlPartyID SettlPartyID_51("STRING_560914431");
        noSettlPartyIDs_0_1_2_0.set(SettlPartyID_51);
        SettlParties_NoSettlPartyIDs_51.insert(SettlPartyID_51.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_51('9');
        noSettlPartyIDs_0_1_2_0.set(SettlPartyIDSource_51);
        SettlParties_NoSettlPartyIDs_51.insert(SettlPartyIDSource_51.getString());
        FIX::SettlPartyRole SettlPartyRole_51(809750559);
        noSettlPartyIDs_0_1_2_0.set(SettlPartyRole_51);
        SettlParties_NoSettlPartyIDs_51.insert(SettlPartyRole_51.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_51);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_106;
          FIX::SettlPartySubID SettlPartySubID_106("STRING_2120053176");
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubID_106);
          SettlPtysSubGrp_NoSettlPartySubIDs_106.insert(SettlPartySubID_106.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_106(739163832);
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubIDType_106);
          SettlPtysSubGrp_NoSettlPartySubIDs_106.insert(SettlPartySubIDType_106.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_106);

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_107;
          FIX::SettlPartySubID SettlPartySubID_107("STRING_322541136");
          noSettlPartySubIDs_0_1_0_3_1.set(SettlPartySubID_107);
          SettlPtysSubGrp_NoSettlPartySubIDs_107.insert(SettlPartySubID_107.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_107(1183296557);
          noSettlPartySubIDs_0_1_0_3_1.set(SettlPartySubIDType_107);
          SettlPtysSubGrp_NoSettlPartySubIDs_107.insert(SettlPartySubIDType_107.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_107);

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_1);
        }
        noSettlDetails_0_1_1.addGroup(noSettlPartyIDs_0_1_2_0);
      }
      noSides_0_0.addGroup(noSettlDetails_0_1_1);
    }
    // SideTrdRegTS
    // Group SideTrdRegTS.NoSideTrdRegTS
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSideTrdRegTS noSideTrdRegTS_0_1_0;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_3;
      FIX::SideTrdRegTimestamp SideTrdRegTimestamp_3(FIX::UTCTIMESTAMP(17, 37, 3, 10, 32008));
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestamp_3);
      SideTrdRegTS_NoSideTrdRegTS_3.insert(SideTrdRegTimestamp_3.getString());
      FIX::SideTrdRegTimestampSrc SideTrdRegTimestampSrc_3("STRING_2070154873");
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestampSrc_3);
      SideTrdRegTS_NoSideTrdRegTS_3.insert(SideTrdRegTimestampSrc_3.getString());
      FIX::SideTrdRegTimestampType SideTrdRegTimestampType_3(1773980688);
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestampType_3);
      SideTrdRegTS_NoSideTrdRegTS_3.insert(SideTrdRegTimestampType_3.getString());
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_3);

      noSides_0_0.addGroup(noSideTrdRegTS_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSideTrdRegTS noSideTrdRegTS_0_1_1;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_4;
      FIX::SideTrdRegTimestamp SideTrdRegTimestamp_4(FIX::UTCTIMESTAMP(13, 48, 43, 9, 52017));
      noSideTrdRegTS_0_1_1.set(SideTrdRegTimestamp_4);
      SideTrdRegTS_NoSideTrdRegTS_4.insert(SideTrdRegTimestamp_4.getString());
      FIX::SideTrdRegTimestampSrc SideTrdRegTimestampSrc_4("STRING_1520490162");
      noSideTrdRegTS_0_1_1.set(SideTrdRegTimestampSrc_4);
      SideTrdRegTS_NoSideTrdRegTS_4.insert(SideTrdRegTimestampSrc_4.getString());
      FIX::SideTrdRegTimestampType SideTrdRegTimestampType_4(191752564);
      noSideTrdRegTS_0_1_1.set(SideTrdRegTimestampType_4);
      SideTrdRegTS_NoSideTrdRegTS_4.insert(SideTrdRegTimestampType_4.getString());
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_4);

      noSides_0_0.addGroup(noSideTrdRegTS_0_1_1);
    }
    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_67;
      FIX::StipulationType StipulationType_67("STRING_INTERNALPX");
      noStipulations_0_1_0.set(StipulationType_67);
      Stipulations_NoStipulations_67.insert(StipulationType_67.getString());
      FIX::StipulationValue StipulationValue_67("STRING_1289701099");
      noStipulations_0_1_0.set(StipulationValue_67);
      Stipulations_NoStipulations_67.insert(StipulationValue_67.getString());
      all_values.push_back(Stipulations_NoStipulations_67);

      noSides_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_68;
      FIX::StipulationType StipulationType_68("STRING_MINDNOM");
      noStipulations_0_1_1.set(StipulationType_68);
      Stipulations_NoStipulations_68.insert(StipulationType_68.getString());
      FIX::StipulationValue StipulationValue_68("STRING_1520807931");
      noStipulations_0_1_1.set(StipulationValue_68);
      Stipulations_NoStipulations_68.insert(StipulationValue_68.getString());
      all_values.push_back(Stipulations_NoStipulations_68);

      noSides_0_0.addGroup(noStipulations_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoStipulations noStipulations_0_1_2;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_69;
      FIX::StipulationType StipulationType_69("STRING_INTERNALQTY");
      noStipulations_0_1_2.set(StipulationType_69);
      Stipulations_NoStipulations_69.insert(StipulationType_69.getString());
      FIX::StipulationValue StipulationValue_69("STRING_2133279379");
      noStipulations_0_1_2.set(StipulationValue_69);
      Stipulations_NoStipulations_69.insert(StipulationValue_69.getString());
      all_values.push_back(Stipulations_NoStipulations_69);

      noSides_0_0.addGroup(noStipulations_0_1_2);
    }
    // TradeReportOrderDetail
    multiset<string> TradeReportOrderDetail_1;
    FIX::BookingType BookingType_23(2);
    noSides_0_0.set(BookingType_23);
    TradeReportOrderDetail_1.insert(BookingType_23.getString());
    FIX::ClOrdID ClOrdID_48("STRING_60070629");
    noSides_0_0.set(ClOrdID_48);
    TradeReportOrderDetail_1.insert(ClOrdID_48.getString());
    FIX::CumQty CumQty_4;
    CumQty_4.setString("7249595");
    noSides_0_0.set(CumQty_4);
    TradeReportOrderDetail_1.insert(CumQty_4.getString());
    FIX::ExecInst ExecInst_14("MULTIPLECHARVALUE_F");
    noSides_0_0.set(ExecInst_14);
    TradeReportOrderDetail_1.insert(ExecInst_14.getString());
    FIX::ExpireTime ExpireTime_26(FIX::UTCTIMESTAMP(12, 58, 44, 14, 22016));
    noSides_0_0.set(ExpireTime_26);
    TradeReportOrderDetail_1.insert(ExpireTime_26.getString());
    FIX::LeavesQty LeavesQty_3;
    LeavesQty_3.setString("8223723");
    noSides_0_0.set(LeavesQty_3);
    TradeReportOrderDetail_1.insert(LeavesQty_3.getString());
    FIX::ListID ListID_23("STRING_298481755");
    noSides_0_0.set(ListID_23);
    TradeReportOrderDetail_1.insert(ListID_23.getString());
    FIX::LotType LotType_41('4');
    noSides_0_0.set(LotType_41);
    TradeReportOrderDetail_1.insert(LotType_41.getString());
    FIX::OrdStatus OrdStatus_4('6');
    noSides_0_0.set(OrdStatus_4);
    TradeReportOrderDetail_1.insert(OrdStatus_4.getString());
    FIX::OrdType OrdType_101('P');
    noSides_0_0.set(OrdType_101);
    TradeReportOrderDetail_1.insert(OrdType_101.getString());
    FIX::OrderCapacity OrderCapacity_27('R');
    noSides_0_0.set(OrderCapacity_27);
    TradeReportOrderDetail_1.insert(OrderCapacity_27.getString());
    FIX::OrderID OrderID_32("STRING_439873336");
    noSides_0_0.set(OrderID_32);
    TradeReportOrderDetail_1.insert(OrderID_32.getString());
    FIX::OrderInputDevice OrderInputDevice_1("STRING_772102097");
    noSides_0_0.set(OrderInputDevice_1);
    TradeReportOrderDetail_1.insert(OrderInputDevice_1.getString());
    FIX::OrderRestrictions OrderRestrictions_24("MULTIPLECHARVALUE_F");
    noSides_0_0.set(OrderRestrictions_24);
    TradeReportOrderDetail_1.insert(OrderRestrictions_24.getString());
    FIX::OrigCustOrderCapacity OrigCustOrderCapacity_1(2);
    noSides_0_0.set(OrigCustOrderCapacity_1);
    TradeReportOrderDetail_1.insert(OrigCustOrderCapacity_1.getString());
    FIX::OrigOrdModTime OrigOrdModTime_7(FIX::UTCTIMESTAMP(23, 53, 23, 19, 12013));
    noSides_0_0.set(OrigOrdModTime_7);
    TradeReportOrderDetail_1.insert(OrigOrdModTime_7.getString());
    FIX::Price Price_27;
    Price_27.setString("21344693");
    noSides_0_0.set(Price_27);
    TradeReportOrderDetail_1.insert(Price_27.getString());
    FIX::RefOrdIDReason RefOrdIDReason_1(0);
    noSides_0_0.set(RefOrdIDReason_1);
    TradeReportOrderDetail_1.insert(RefOrdIDReason_1.getString());
    FIX::RefOrderID RefOrderID_6("STRING_620218146");
    noSides_0_0.set(RefOrderID_6);
    TradeReportOrderDetail_1.insert(RefOrderID_6.getString());
    FIX::RefOrderIDSource RefOrderIDSource_6('1');
    noSides_0_0.set(RefOrderIDSource_6);
    TradeReportOrderDetail_1.insert(RefOrderIDSource_6.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_41("STRING_1711071423");
    noSides_0_0.set(SecondaryClOrdID_41);
    TradeReportOrderDetail_1.insert(SecondaryClOrdID_41.getString());
    FIX::SecondaryOrderID SecondaryOrderID_24("STRING_1345177709");
    noSides_0_0.set(SecondaryOrderID_24);
    TradeReportOrderDetail_1.insert(SecondaryOrderID_24.getString());
    FIX::StopPx StopPx_11;
    StopPx_11.setString("19893149");
    noSides_0_0.set(StopPx_11);
    TradeReportOrderDetail_1.insert(StopPx_11.getString());
    FIX::TimeInForce TimeInForce_81('2');
    noSides_0_0.set(TimeInForce_81);
    TradeReportOrderDetail_1.insert(TimeInForce_81.getString());
    FIX::TransBkdTime TransBkdTime_5(FIX::UTCTIMESTAMP(6, 59, 4, 27, 102000));
    noSides_0_0.set(TransBkdTime_5);
    TradeReportOrderDetail_1.insert(TransBkdTime_5.getString());
    all_values.push_back(TradeReportOrderDetail_1);

    // DisplayInstruction
    multiset<string> DisplayInstruction_11;
    FIX::DisplayHighQty DisplayHighQty_11;
    DisplayHighQty_11.setString("3597138");
    noSides_0_0.set(DisplayHighQty_11);
    DisplayInstruction_11.insert(DisplayHighQty_11.getString());
    FIX::DisplayLowQty DisplayLowQty_11;
    DisplayLowQty_11.setString("7200413");
    noSides_0_0.set(DisplayLowQty_11);
    DisplayInstruction_11.insert(DisplayLowQty_11.getString());
    FIX::DisplayMethod DisplayMethod_11('1');
    noSides_0_0.set(DisplayMethod_11);
    DisplayInstruction_11.insert(DisplayMethod_11.getString());
    FIX::DisplayMinIncr DisplayMinIncr_11;
    DisplayMinIncr_11.setString("9347525");
    noSides_0_0.set(DisplayMinIncr_11);
    DisplayInstruction_11.insert(DisplayMinIncr_11.getString());
    FIX::DisplayQty DisplayQty_11;
    DisplayQty_11.setString("18194418");
    noSides_0_0.set(DisplayQty_11);
    DisplayInstruction_11.insert(DisplayQty_11.getString());
    FIX::DisplayWhen DisplayWhen_11('1');
    noSides_0_0.set(DisplayWhen_11);
    DisplayInstruction_11.insert(DisplayWhen_11.getString());
    FIX::RefreshQty RefreshQty_11;
    RefreshQty_11.setString("17068546");
    noSides_0_0.set(RefreshQty_11);
    DisplayInstruction_11.insert(RefreshQty_11.getString());
    FIX::SecondaryDisplayQty SecondaryDisplayQty_11;
    SecondaryDisplayQty_11.setString("21002032");
    noSides_0_0.set(SecondaryDisplayQty_11);
    DisplayInstruction_11.insert(SecondaryDisplayQty_11.getString());
    all_values.push_back(DisplayInstruction_11);

    // OrderQtyData
    multiset<string> OrderQtyData_27;
    FIX::CashOrderQty CashOrderQty_27;
    CashOrderQty_27.setString("20765356");
    noSides_0_0.set(CashOrderQty_27);
    OrderQtyData_27.insert(CashOrderQty_27.getString());
    FIX::OrderPercent OrderPercent_27;
    OrderPercent_27.setString("74.080000");
    noSides_0_0.set(OrderPercent_27);
    OrderQtyData_27.insert(OrderPercent_27.getString());
    FIX::OrderQty OrderQty_36;
    OrderQty_36.setString("17539711");
    noSides_0_0.set(OrderQty_36);
    OrderQtyData_27.insert(OrderQty_36.getString());
    FIX::RoundingDirection RoundingDirection_27('2');
    noSides_0_0.set(RoundingDirection_27);
    OrderQtyData_27.insert(RoundingDirection_27.getString());
    FIX::RoundingModulus RoundingModulus_27;
    RoundingModulus_27.setString("7727010");
    noSides_0_0.set(RoundingModulus_27);
    OrderQtyData_27.insert(RoundingModulus_27.getString());
    all_values.push_back(OrderQtyData_27);

    // TrdAllocGrp
    // Group TrdAllocGrp.NoAllocs
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs noAllocs_0_1_0;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_1;
      FIX::AllocAccount AllocAccount_37("STRING_1766350239");
      noAllocs_0_1_0.set(AllocAccount_37);
      TrdAllocGrp_NoAllocs_1.insert(AllocAccount_37.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_37(1407123419);
      noAllocs_0_1_0.set(AllocAcctIDSource_37);
      TrdAllocGrp_NoAllocs_1.insert(AllocAcctIDSource_37.getString());
      FIX::AllocClearingFeeIndicator AllocClearingFeeIndicator_1("STRING_207134552");
      noAllocs_0_1_0.set(AllocClearingFeeIndicator_1);
      TrdAllocGrp_NoAllocs_1.insert(AllocClearingFeeIndicator_1.getString());
      FIX::AllocCustomerCapacity AllocCustomerCapacity_9("STRING_1269867385");
      noAllocs_0_1_0.set(AllocCustomerCapacity_9);
      TrdAllocGrp_NoAllocs_1.insert(AllocCustomerCapacity_9.getString());
      FIX::AllocMethod AllocMethod_6(3);
      noAllocs_0_1_0.set(AllocMethod_6);
      TrdAllocGrp_NoAllocs_1.insert(AllocMethod_6.getString());
      FIX::AllocQty AllocQty_35;
      AllocQty_35.setString("10340142");
      noAllocs_0_1_0.set(AllocQty_35);
      TrdAllocGrp_NoAllocs_1.insert(AllocQty_35.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_31("GBP");
      noAllocs_0_1_0.set(AllocSettlCurrency_31);
      TrdAllocGrp_NoAllocs_1.insert(AllocSettlCurrency_31.getString());
      FIX::IndividualAllocID IndividualAllocID_36("STRING_875845577");
      noAllocs_0_1_0.set(IndividualAllocID_36);
      TrdAllocGrp_NoAllocs_1.insert(IndividualAllocID_36.getString());
      FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_9("STRING_1640410123");
      noAllocs_0_1_0.set(SecondaryIndividualAllocID_9);
      TrdAllocGrp_NoAllocs_1.insert(SecondaryIndividualAllocID_9.getString());
      all_values.push_back(TrdAllocGrp_NoAllocs_1);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_39;
        FIX::Nested2PartyID Nested2PartyID_39("STRING_1171602119");
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyID_39);
        NestedParties2_NoNested2PartyIDs_39.insert(Nested2PartyID_39.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_39('1');
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyIDSource_39);
        NestedParties2_NoNested2PartyIDs_39.insert(Nested2PartyIDSource_39.getString());
        FIX::Nested2PartyRole Nested2PartyRole_39(1446218968);
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyRole_39);
        NestedParties2_NoNested2PartyIDs_39.insert(Nested2PartyRole_39.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_39);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_80;
          FIX::Nested2PartySubID Nested2PartySubID_80("STRING_816949591");
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubID_80);
          NstdPtys2SubGrp_NoNested2PartySubIDs_80.insert(Nested2PartySubID_80.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_80(404482160);
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubIDType_80);
          NstdPtys2SubGrp_NoNested2PartySubIDs_80.insert(Nested2PartySubIDType_80.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_80);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_81;
          FIX::Nested2PartySubID Nested2PartySubID_81("STRING_1592548144");
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubID_81);
          NstdPtys2SubGrp_NoNested2PartySubIDs_81.insert(Nested2PartySubID_81.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_81(1536990932);
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubIDType_81);
          NstdPtys2SubGrp_NoNested2PartySubIDs_81.insert(Nested2PartySubIDType_81.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_81);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_1);
        }
        noAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      noSides_0_0.addGroup(noAllocs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs noAllocs_0_1_1;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_2;
      FIX::AllocAccount AllocAccount_38("STRING_1959098396");
      noAllocs_0_1_1.set(AllocAccount_38);
      TrdAllocGrp_NoAllocs_2.insert(AllocAccount_38.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_38(379817040);
      noAllocs_0_1_1.set(AllocAcctIDSource_38);
      TrdAllocGrp_NoAllocs_2.insert(AllocAcctIDSource_38.getString());
      FIX::AllocClearingFeeIndicator AllocClearingFeeIndicator_2("STRING_1208949102");
      noAllocs_0_1_1.set(AllocClearingFeeIndicator_2);
      TrdAllocGrp_NoAllocs_2.insert(AllocClearingFeeIndicator_2.getString());
      FIX::AllocCustomerCapacity AllocCustomerCapacity_10("STRING_1806104321");
      noAllocs_0_1_1.set(AllocCustomerCapacity_10);
      TrdAllocGrp_NoAllocs_2.insert(AllocCustomerCapacity_10.getString());
      FIX::AllocMethod AllocMethod_7(2);
      noAllocs_0_1_1.set(AllocMethod_7);
      TrdAllocGrp_NoAllocs_2.insert(AllocMethod_7.getString());
      FIX::AllocQty AllocQty_36;
      AllocQty_36.setString("11616686");
      noAllocs_0_1_1.set(AllocQty_36);
      TrdAllocGrp_NoAllocs_2.insert(AllocQty_36.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_32("GBP");
      noAllocs_0_1_1.set(AllocSettlCurrency_32);
      TrdAllocGrp_NoAllocs_2.insert(AllocSettlCurrency_32.getString());
      FIX::IndividualAllocID IndividualAllocID_37("STRING_768156123");
      noAllocs_0_1_1.set(IndividualAllocID_37);
      TrdAllocGrp_NoAllocs_2.insert(IndividualAllocID_37.getString());
      FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_10("STRING_1938006821");
      noAllocs_0_1_1.set(SecondaryIndividualAllocID_10);
      TrdAllocGrp_NoAllocs_2.insert(SecondaryIndividualAllocID_10.getString());
      all_values.push_back(TrdAllocGrp_NoAllocs_2);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_40;
        FIX::Nested2PartyID Nested2PartyID_40("STRING_988304989");
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyID_40);
        NestedParties2_NoNested2PartyIDs_40.insert(Nested2PartyID_40.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_40('1');
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyIDSource_40);
        NestedParties2_NoNested2PartyIDs_40.insert(Nested2PartyIDSource_40.getString());
        FIX::Nested2PartyRole Nested2PartyRole_40(1433336217);
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyRole_40);
        NestedParties2_NoNested2PartyIDs_40.insert(Nested2PartyRole_40.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_40);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_82;
          FIX::Nested2PartySubID Nested2PartySubID_82("STRING_679257149");
          noNested2PartySubIDs_0_1_0_3_0.set(Nested2PartySubID_82);
          NstdPtys2SubGrp_NoNested2PartySubIDs_82.insert(Nested2PartySubID_82.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_82(1313194134);
          noNested2PartySubIDs_0_1_0_3_0.set(Nested2PartySubIDType_82);
          NstdPtys2SubGrp_NoNested2PartySubIDs_82.insert(Nested2PartySubIDType_82.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_82);

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_83;
          FIX::Nested2PartySubID Nested2PartySubID_83("STRING_81970187");
          noNested2PartySubIDs_0_1_0_3_1.set(Nested2PartySubID_83);
          NstdPtys2SubGrp_NoNested2PartySubIDs_83.insert(Nested2PartySubID_83.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_83(1512712309);
          noNested2PartySubIDs_0_1_0_3_1.set(Nested2PartySubIDType_83);
          NstdPtys2SubGrp_NoNested2PartySubIDs_83.insert(Nested2PartySubIDType_83.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_83);

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_1);
        }
        noAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_41;
        FIX::Nested2PartyID Nested2PartyID_41("STRING_390746113");
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyID_41);
        NestedParties2_NoNested2PartyIDs_41.insert(Nested2PartyID_41.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_41('9');
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyIDSource_41);
        NestedParties2_NoNested2PartyIDs_41.insert(Nested2PartyIDSource_41.getString());
        FIX::Nested2PartyRole Nested2PartyRole_41(1005638784);
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyRole_41);
        NestedParties2_NoNested2PartyIDs_41.insert(Nested2PartyRole_41.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_41);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_84;
          FIX::Nested2PartySubID Nested2PartySubID_84("STRING_2129417884");
          noNested2PartySubIDs_0_1_1_3_0.set(Nested2PartySubID_84);
          NstdPtys2SubGrp_NoNested2PartySubIDs_84.insert(Nested2PartySubID_84.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_84(1115457298);
          noNested2PartySubIDs_0_1_1_3_0.set(Nested2PartySubIDType_84);
          NstdPtys2SubGrp_NoNested2PartySubIDs_84.insert(Nested2PartySubIDType_84.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_84);

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_85;
          FIX::Nested2PartySubID Nested2PartySubID_85("STRING_852325918");
          noNested2PartySubIDs_0_1_1_3_1.set(Nested2PartySubID_85);
          NstdPtys2SubGrp_NoNested2PartySubIDs_85.insert(Nested2PartySubID_85.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_85(1214768491);
          noNested2PartySubIDs_0_1_1_3_1.set(Nested2PartySubIDType_85);
          NstdPtys2SubGrp_NoNested2PartySubIDs_85.insert(Nested2PartySubIDType_85.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_85);

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_1);
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
    LegCalculatedCcyLastQty_6.setString("12568080");
    noLegs_0_0.set(LegCalculatedCcyLastQty_6);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegCalculatedCcyLastQty_6.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_8(659832987);
    noLegs_0_0.set(LegCoveredOrUncovered_8);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegCoveredOrUncovered_8.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_8;
    LegCurrencyRatio_8.setString("13219141");
    noLegs_0_0.set(LegCurrencyRatio_8);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegCurrencyRatio_8.getString());
    FIX::LegDividendYield LegDividendYield_8;
    LegDividendYield_8.setString("28.270000");
    noLegs_0_0.set(LegDividendYield_8);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegDividendYield_8.getString());
    FIX::LegExecInst LegExecInst_8("MULTIPLECHARVALUE_1039650028");
    noLegs_0_0.set(LegExecInst_8);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegExecInst_8.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_6;
    LegGrossTradeAmt_6.setString("3833796");
    noLegs_0_0.set(LegGrossTradeAmt_6);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegGrossTradeAmt_6.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_6;
    LegLastForwardPoints_6.setString("7270435");
    noLegs_0_0.set(LegLastForwardPoints_6);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegLastForwardPoints_6.getString());
    FIX::LegLastPx LegLastPx_6;
    LegLastPx_6.setString("9788380");
    noLegs_0_0.set(LegLastPx_6);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegLastPx_6.getString());
    FIX::LegLastQty LegLastQty_6;
    LegLastQty_6.setString("15450482");
    noLegs_0_0.set(LegLastQty_6);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegLastQty_6.getString());
    FIX::LegNumber LegNumber_3(314716126);
    noLegs_0_0.set(LegNumber_3);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegNumber_3.getString());
    FIX::LegPositionEffect LegPositionEffect_8('2');
    noLegs_0_0.set(LegPositionEffect_8);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegPositionEffect_8.getString());
    FIX::LegQty LegQty_22;
    LegQty_22.setString("1657207");
    noLegs_0_0.set(LegQty_22);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegQty_22.getString());
    FIX::LegRefID LegRefID_20("STRING_105239299");
    noLegs_0_0.set(LegRefID_20);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegRefID_20.getString());
    FIX::LegReportID LegReportID_3("STRING_258562655");
    noLegs_0_0.set(LegReportID_3);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegReportID_3.getString());
    FIX::LegSettlCurrency LegSettlCurrency_8("EUR");
    noLegs_0_0.set(LegSettlCurrency_8);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegSettlCurrency_8.getString());
    FIX::LegSettlDate LegSettlDate_22("LOCALMKTDATE_1691898872");
    noLegs_0_0.set(LegSettlDate_22);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegSettlDate_22.getString());
    FIX::LegSettlType LegSettlType_30('2');
    noLegs_0_0.set(LegSettlType_30);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegSettlType_30.getString());
    FIX::LegSwapType LegSwapType_30(1);
    noLegs_0_0.set(LegSwapType_30);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegSwapType_30.getString());
    FIX::LegVolatility LegVolatility_8;
    LegVolatility_8.setString("8576093");
    noLegs_0_0.set(LegVolatility_8);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegVolatility_8.getString());
    all_values.push_back(TrdInstrmtLegGrp_NoLegs_3);

    // InstrumentLeg
    multiset<string> InstrumentLeg_120;
    FIX::EncodedLegIssuer EncodedLegIssuer_120("DATA_283951836");
    noLegs_0_0.set(EncodedLegIssuer_120);
    InstrumentLeg_120.insert(EncodedLegIssuer_120.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_120(1706598522);
    noLegs_0_0.set(EncodedLegIssuerLen_120);
    InstrumentLeg_120.insert(EncodedLegIssuerLen_120.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_120("DATA_1248355472");
    noLegs_0_0.set(EncodedLegSecurityDesc_120);
    InstrumentLeg_120.insert(EncodedLegSecurityDesc_120.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_120(1241767601);
    noLegs_0_0.set(EncodedLegSecurityDescLen_120);
    InstrumentLeg_120.insert(EncodedLegSecurityDescLen_120.getString());
    FIX::LegCFICode LegCFICode_120("STRING_564753658");
    noLegs_0_0.set(LegCFICode_120);
    InstrumentLeg_120.insert(LegCFICode_120.getString());
    FIX::LegContractMultiplier LegContractMultiplier_120;
    LegContractMultiplier_120.setString("6544624");
    noLegs_0_0.set(LegContractMultiplier_120);
    InstrumentLeg_120.insert(LegContractMultiplier_120.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_120(1223701837);
    noLegs_0_0.set(LegContractMultiplierUnit_120);
    InstrumentLeg_120.insert(LegContractMultiplierUnit_120.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_120("MONTHYEAR_1680210957");
    noLegs_0_0.set(LegContractSettlMonth_120);
    InstrumentLeg_120.insert(LegContractSettlMonth_120.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_120("COUNTRY_1506788339");
    noLegs_0_0.set(LegCountryOfIssue_120);
    InstrumentLeg_120.insert(LegCountryOfIssue_120.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_120("LOCALMKTDATE_290986680");
    noLegs_0_0.set(LegCouponPaymentDate_120);
    InstrumentLeg_120.insert(LegCouponPaymentDate_120.getString());
    FIX::LegCouponRate LegCouponRate_120;
    LegCouponRate_120.setString("41.990000");
    noLegs_0_0.set(LegCouponRate_120);
    InstrumentLeg_120.insert(LegCouponRate_120.getString());
    FIX::LegCreditRating LegCreditRating_120("STRING_616112770");
    noLegs_0_0.set(LegCreditRating_120);
    InstrumentLeg_120.insert(LegCreditRating_120.getString());
    FIX::LegCurrency LegCurrency_120("CAN");
    noLegs_0_0.set(LegCurrency_120);
    InstrumentLeg_120.insert(LegCurrency_120.getString());
    FIX::LegDatedDate LegDatedDate_120("LOCALMKTDATE_1684535597");
    noLegs_0_0.set(LegDatedDate_120);
    InstrumentLeg_120.insert(LegDatedDate_120.getString());
    FIX::LegExerciseStyle LegExerciseStyle_120(1990469696);
    noLegs_0_0.set(LegExerciseStyle_120);
    InstrumentLeg_120.insert(LegExerciseStyle_120.getString());
    FIX::LegFactor LegFactor_120;
    LegFactor_120.setString("10229443");
    noLegs_0_0.set(LegFactor_120);
    InstrumentLeg_120.insert(LegFactor_120.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_120(264095449);
    noLegs_0_0.set(LegFlowScheduleType_120);
    InstrumentLeg_120.insert(LegFlowScheduleType_120.getString());
    FIX::LegInstrRegistry LegInstrRegistry_120("STRING_821824110");
    noLegs_0_0.set(LegInstrRegistry_120);
    InstrumentLeg_120.insert(LegInstrRegistry_120.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_120("LOCALMKTDATE_420508995");
    noLegs_0_0.set(LegInterestAccrualDate_120);
    InstrumentLeg_120.insert(LegInterestAccrualDate_120.getString());
    FIX::LegIssueDate LegIssueDate_120("LOCALMKTDATE_578811575");
    noLegs_0_0.set(LegIssueDate_120);
    InstrumentLeg_120.insert(LegIssueDate_120.getString());
    FIX::LegIssuer LegIssuer_120("STRING_1054173966");
    noLegs_0_0.set(LegIssuer_120);
    InstrumentLeg_120.insert(LegIssuer_120.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_120("STRING_586229760");
    noLegs_0_0.set(LegLocaleOfIssue_120);
    InstrumentLeg_120.insert(LegLocaleOfIssue_120.getString());
    FIX::LegMaturityDate LegMaturityDate_120("LOCALMKTDATE_684050875");
    noLegs_0_0.set(LegMaturityDate_120);
    InstrumentLeg_120.insert(LegMaturityDate_120.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_120("MONTHYEAR_1312736621");
    noLegs_0_0.set(LegMaturityMonthYear_120);
    InstrumentLeg_120.insert(LegMaturityMonthYear_120.getString());
    FIX::LegMaturityTime LegMaturityTime_120("TZTIMEONLY_1740255515");
    noLegs_0_0.set(LegMaturityTime_120);
    InstrumentLeg_120.insert(LegMaturityTime_120.getString());
    FIX::LegOptAttribute LegOptAttribute_120('1');
    noLegs_0_0.set(LegOptAttribute_120);
    InstrumentLeg_120.insert(LegOptAttribute_120.getString());
    FIX::LegOptionRatio LegOptionRatio_120;
    LegOptionRatio_120.setString("8571518");
    noLegs_0_0.set(LegOptionRatio_120);
    InstrumentLeg_120.insert(LegOptionRatio_120.getString());
    FIX::LegPool LegPool_120("STRING_1942237163");
    noLegs_0_0.set(LegPool_120);
    InstrumentLeg_120.insert(LegPool_120.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_120("STRING_392566151");
    noLegs_0_0.set(LegPriceUnitOfMeasure_120);
    InstrumentLeg_120.insert(LegPriceUnitOfMeasure_120.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_120;
    LegPriceUnitOfMeasureQty_120.setString("17147612");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_120);
    InstrumentLeg_120.insert(LegPriceUnitOfMeasureQty_120.getString());
    FIX::LegProduct LegProduct_120(78705351);
    noLegs_0_0.set(LegProduct_120);
    InstrumentLeg_120.insert(LegProduct_120.getString());
    FIX::LegPutOrCall LegPutOrCall_120(2099164673);
    noLegs_0_0.set(LegPutOrCall_120);
    InstrumentLeg_120.insert(LegPutOrCall_120.getString());
    FIX::LegRatioQty LegRatioQty_120;
    LegRatioQty_120.setString("8156330");
    noLegs_0_0.set(LegRatioQty_120);
    InstrumentLeg_120.insert(LegRatioQty_120.getString());
    FIX::LegRedemptionDate LegRedemptionDate_120("LOCALMKTDATE_1320472952");
    noLegs_0_0.set(LegRedemptionDate_120);
    InstrumentLeg_120.insert(LegRedemptionDate_120.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_120("STRING_516434683");
    noLegs_0_0.set(LegRepoCollateralSecurityType_120);
    InstrumentLeg_120.insert(LegRepoCollateralSecurityType_120.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_120;
    LegRepurchaseRate_120.setString("54.500000");
    noLegs_0_0.set(LegRepurchaseRate_120);
    InstrumentLeg_120.insert(LegRepurchaseRate_120.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_120(396691142);
    noLegs_0_0.set(LegRepurchaseTerm_120);
    InstrumentLeg_120.insert(LegRepurchaseTerm_120.getString());
    FIX::LegSecurityDesc LegSecurityDesc_120("STRING_49161992");
    noLegs_0_0.set(LegSecurityDesc_120);
    InstrumentLeg_120.insert(LegSecurityDesc_120.getString());
    FIX::LegSecurityExchange LegSecurityExchange_120("EXCHANGE_829400142");
    noLegs_0_0.set(LegSecurityExchange_120);
    InstrumentLeg_120.insert(LegSecurityExchange_120.getString());
    FIX::LegSecurityID LegSecurityID_120("STRING_687677822");
    noLegs_0_0.set(LegSecurityID_120);
    InstrumentLeg_120.insert(LegSecurityID_120.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_120("STRING_1514296191");
    noLegs_0_0.set(LegSecurityIDSource_120);
    InstrumentLeg_120.insert(LegSecurityIDSource_120.getString());
    FIX::LegSecuritySubType LegSecuritySubType_120("STRING_1445512912");
    noLegs_0_0.set(LegSecuritySubType_120);
    InstrumentLeg_120.insert(LegSecuritySubType_120.getString());
    FIX::LegSecurityType LegSecurityType_120("STRING_1638497490");
    noLegs_0_0.set(LegSecurityType_120);
    InstrumentLeg_120.insert(LegSecurityType_120.getString());
    FIX::LegSide LegSide_120('6');
    noLegs_0_0.set(LegSide_120);
    InstrumentLeg_120.insert(LegSide_120.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_120("STRING_982564861");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_120);
    InstrumentLeg_120.insert(LegStateOrProvinceOfIssue_120.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_120("CAN");
    noLegs_0_0.set(LegStrikeCurrency_120);
    InstrumentLeg_120.insert(LegStrikeCurrency_120.getString());
    FIX::LegStrikePrice LegStrikePrice_120;
    LegStrikePrice_120.setString("12466603");
    noLegs_0_0.set(LegStrikePrice_120);
    InstrumentLeg_120.insert(LegStrikePrice_120.getString());
    FIX::LegSymbol LegSymbol_120("STRING_155824000");
    noLegs_0_0.set(LegSymbol_120);
    InstrumentLeg_120.insert(LegSymbol_120.getString());
    FIX::LegSymbolSfx LegSymbolSfx_120("STRING_1449830618");
    noLegs_0_0.set(LegSymbolSfx_120);
    InstrumentLeg_120.insert(LegSymbolSfx_120.getString());
    FIX::LegTimeUnit LegTimeUnit_120("STRING_1825471885");
    noLegs_0_0.set(LegTimeUnit_120);
    InstrumentLeg_120.insert(LegTimeUnit_120.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_120("STRING_1209997967");
    noLegs_0_0.set(LegUnitOfMeasure_120);
    InstrumentLeg_120.insert(LegUnitOfMeasure_120.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_120;
    LegUnitOfMeasureQty_120.setString("20360603");
    noLegs_0_0.set(LegUnitOfMeasureQty_120);
    InstrumentLeg_120.insert(LegUnitOfMeasureQty_120.getString());
    all_values.push_back(InstrumentLeg_120);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_218;
      FIX::LegSecurityAltID LegSecurityAltID_218("STRING_375250940");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_218);
      LegSecAltIDGrp_NoLegSecurityAltID_218.insert(LegSecurityAltID_218.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_218("STRING_1628832246");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_218);
      LegSecAltIDGrp_NoLegSecurityAltID_218.insert(LegSecurityAltIDSource_218.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_218);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_68;
      FIX::LegStipulationType LegStipulationType_68("STRING_1232402786");
      noLegStipulations_0_1_0.set(LegStipulationType_68);
      LegStipulations_NoLegStipulations_68.insert(LegStipulationType_68.getString());
      FIX::LegStipulationValue LegStipulationValue_68("STRING_1423585761");
      noLegStipulations_0_1_0.set(LegStipulationValue_68);
      LegStipulations_NoLegStipulations_68.insert(LegStipulationValue_68.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_68);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_69;
      FIX::LegStipulationType LegStipulationType_69("STRING_953285202");
      noLegStipulations_0_1_1.set(LegStipulationType_69);
      LegStipulations_NoLegStipulations_69.insert(LegStipulationType_69.getString());
      FIX::LegStipulationValue LegStipulationValue_69("STRING_799680343");
      noLegStipulations_0_1_1.set(LegStipulationValue_69);
      LegStipulations_NoLegStipulations_69.insert(LegStipulationValue_69.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_69);

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_127;
      FIX::NestedPartyID NestedPartyID_127("STRING_904966227");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_127);
      NestedParties_NoNestedPartyIDs_127.insert(NestedPartyID_127.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_127('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_127);
      NestedParties_NoNestedPartyIDs_127.insert(NestedPartyIDSource_127.getString());
      FIX::NestedPartyRole NestedPartyRole_127(675280417);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_127);
      NestedParties_NoNestedPartyIDs_127.insert(NestedPartyRole_127.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_127);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_238;
        FIX::NestedPartySubID NestedPartySubID_238("STRING_937925175");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_238);
        NstdPtysSubGrp_NoNestedPartySubIDs_238.insert(NestedPartySubID_238.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_238(1071971559);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_238);
        NstdPtysSubGrp_NoNestedPartySubIDs_238.insert(NestedPartySubIDType_238.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_238);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_239;
        FIX::NestedPartySubID NestedPartySubID_239("STRING_1470562903");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_239);
        NstdPtysSubGrp_NoNestedPartySubIDs_239.insert(NestedPartySubID_239.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_239(1767325317);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_239);
        NstdPtysSubGrp_NoNestedPartySubIDs_239.insert(NestedPartySubIDType_239.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_239);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_128;
      FIX::NestedPartyID NestedPartyID_128("STRING_1759649382");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_128);
      NestedParties_NoNestedPartyIDs_128.insert(NestedPartyID_128.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_128('8');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_128);
      NestedParties_NoNestedPartyIDs_128.insert(NestedPartyIDSource_128.getString());
      FIX::NestedPartyRole NestedPartyRole_128(1065354581);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_128);
      NestedParties_NoNestedPartyIDs_128.insert(NestedPartyRole_128.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_128);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_240;
        FIX::NestedPartySubID NestedPartySubID_240("STRING_843752715");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_240);
        NstdPtysSubGrp_NoNestedPartySubIDs_240.insert(NestedPartySubID_240.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_240(2047919442);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_240);
        NstdPtysSubGrp_NoNestedPartySubIDs_240.insert(NestedPartySubIDType_240.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_240);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_241;
        FIX::NestedPartySubID NestedPartySubID_241("STRING_584663115");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_241);
        NstdPtysSubGrp_NoNestedPartySubIDs_241.insert(NestedPartySubID_241.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_241(1873074338);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_241);
        NstdPtysSubGrp_NoNestedPartySubIDs_241.insert(NestedPartySubIDType_241.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_241);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    // TradeCapLegUnderlyingsGrp
    // Group TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_0_1_0;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_7;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_7("STRING_740487115");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegCFICode_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegCFICode_7.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_7("LOCALMKTDATE_1175421309");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityDate_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegMaturityDate_7.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_7("MONTHYEAR_825084341");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityMonthYear_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegMaturityMonthYear_7.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_7("TZTIMEONLY_1950485082");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityTime_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegMaturityTime_7.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_7('1');
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegOptAttribute_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegOptAttribute_7.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_7(1187123454);
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegPutOrCall_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegPutOrCall_7.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_7("STRING_178252375");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityDesc_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegSecurityDesc_7.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_7("STRING_545346638");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityExchange_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegSecurityExchange_7.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_7("STRING_1747842505");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityID_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegSecurityID_7.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_7("STRING_1410655161");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityIDSource_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegSecurityIDSource_7.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_7("STRING_1968932399");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecuritySubType_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegSecuritySubType_7.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_7("STRING_553644059");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityType_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegSecurityType_7.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_7;
      UnderlyingLegStrikePrice_7.setString("628518");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegStrikePrice_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegStrikePrice_7.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_7("STRING_1323739864");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSymbol_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegSymbol_7.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_7("STRING_1458610286");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSymbolSfx_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegSymbolSfx_7.getString());
      all_values.push_back(UnderlyingLegInstrument_7);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_12;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_12("STRING_1999020282");
        noUnderlyingLegSecurityAltID_0_0_2_0.set(UnderlyingLegSecurityAltID_12);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_12.insert(UnderlyingLegSecurityAltID_12.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_12("STRING_732527548");
        noUnderlyingLegSecurityAltID_0_0_2_0.set(UnderlyingLegSecurityAltIDSource_12);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_12.insert(UnderlyingLegSecurityAltIDSource_12.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_12);

        noOfLegUnderlyings_0_1_0.addGroup(noUnderlyingLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_13;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_13("STRING_468606756");
        noUnderlyingLegSecurityAltID_0_0_2_1.set(UnderlyingLegSecurityAltID_13);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_13.insert(UnderlyingLegSecurityAltID_13.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_13("STRING_923508193");
        noUnderlyingLegSecurityAltID_0_0_2_1.set(UnderlyingLegSecurityAltIDSource_13);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_13.insert(UnderlyingLegSecurityAltIDSource_13.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_13);

        noOfLegUnderlyings_0_1_0.addGroup(noUnderlyingLegSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_2;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_14;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_14("STRING_55606803");
        noUnderlyingLegSecurityAltID_0_0_2_2.set(UnderlyingLegSecurityAltID_14);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_14.insert(UnderlyingLegSecurityAltID_14.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_14("STRING_88448425");
        noUnderlyingLegSecurityAltID_0_0_2_2.set(UnderlyingLegSecurityAltIDSource_14);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_14.insert(UnderlyingLegSecurityAltIDSource_14.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_14);

        noOfLegUnderlyings_0_1_0.addGroup(noUnderlyingLegSecurityAltID_0_0_2_2);
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
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_21;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_21("MULTIPLESTRINGVALUE_RSV");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_21);
    TrdRegTimestamps_NoTrdRegTimestamps_21.insert(DeskOrderHandlingInst_21.getString());
    FIX::DeskType DeskType_21("STRING_IS");
    noTrdRegTimestamps_0_0.set(DeskType_21);
    TrdRegTimestamps_NoTrdRegTimestamps_21.insert(DeskType_21.getString());
    FIX::DeskTypeSource DeskTypeSource_21(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_21);
    TrdRegTimestamps_NoTrdRegTimestamps_21.insert(DeskTypeSource_21.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_21(FIX::UTCTIMESTAMP(16, 59, 16, 4, 72017));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_21);
    TrdRegTimestamps_NoTrdRegTimestamps_21.insert(TrdRegTimestamp_21.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_21("STRING_878935598");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_21);
    TrdRegTimestamps_NoTrdRegTimestamps_21.insert(TrdRegTimestampOrigin_21.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_21(1);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_21);
    TrdRegTimestamps_NoTrdRegTimestamps_21.insert(TrdRegTimestampType_21.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_21);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_22;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_22("MULTIPLESTRINGVALUE_TMO");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_22);
    TrdRegTimestamps_NoTrdRegTimestamps_22.insert(DeskOrderHandlingInst_22.getString());
    FIX::DeskType DeskType_22("STRING_D");
    noTrdRegTimestamps_0_1.set(DeskType_22);
    TrdRegTimestamps_NoTrdRegTimestamps_22.insert(DeskType_22.getString());
    FIX::DeskTypeSource DeskTypeSource_22(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_22);
    TrdRegTimestamps_NoTrdRegTimestamps_22.insert(DeskTypeSource_22.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_22(FIX::UTCTIMESTAMP(13, 37, 26, 24, 112005));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_22);
    TrdRegTimestamps_NoTrdRegTimestamps_22.insert(TrdRegTimestamp_22.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_22("STRING_1531188606");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_22);
    TrdRegTimestamps_NoTrdRegTimestamps_22.insert(TrdRegTimestampOrigin_22.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_22(3);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_22);
    TrdRegTimestamps_NoTrdRegTimestamps_22.insert(TrdRegTimestampType_22.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_22);

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_23;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_23("MULTIPLESTRINGVALUE_TMO");
    noTrdRegTimestamps_0_2.set(DeskOrderHandlingInst_23);
    TrdRegTimestamps_NoTrdRegTimestamps_23.insert(DeskOrderHandlingInst_23.getString());
    FIX::DeskType DeskType_23("STRING_O");
    noTrdRegTimestamps_0_2.set(DeskType_23);
    TrdRegTimestamps_NoTrdRegTimestamps_23.insert(DeskType_23.getString());
    FIX::DeskTypeSource DeskTypeSource_23(1);
    noTrdRegTimestamps_0_2.set(DeskTypeSource_23);
    TrdRegTimestamps_NoTrdRegTimestamps_23.insert(DeskTypeSource_23.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_23(FIX::UTCTIMESTAMP(6, 58, 50, 12, 52012));
    noTrdRegTimestamps_0_2.set(TrdRegTimestamp_23);
    TrdRegTimestamps_NoTrdRegTimestamps_23.insert(TrdRegTimestamp_23.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_23("STRING_654072877");
    noTrdRegTimestamps_0_2.set(TrdRegTimestampOrigin_23);
    TrdRegTimestamps_NoTrdRegTimestamps_23.insert(TrdRegTimestampOrigin_23.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_23(3);
    noTrdRegTimestamps_0_2.set(TrdRegTimestampType_23);
    TrdRegTimestamps_NoTrdRegTimestamps_23.insert(TrdRegTimestampType_23.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_23);

    msg.addGroup(noTrdRegTimestamps_0_2);
  }
  // TrdRepIndicatorsGrp
  // Group TrdRepIndicatorsGrp.NoTrdRepIndicators
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRepIndicators noTrdRepIndicators_0_0;
    // TrdRepIndicatorsGrp.NoTrdRepIndicators
    multiset<string> TrdRepIndicatorsGrp_NoTrdRepIndicators_2;
    FIX::TrdRepIndicator TrdRepIndicator_2(false);
    noTrdRepIndicators_0_0.set(TrdRepIndicator_2);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_2.insert(TrdRepIndicator_2.getString());
    FIX::TrdRepPartyRole TrdRepPartyRole_2(473427093);
    noTrdRepIndicators_0_0.set(TrdRepPartyRole_2);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_2.insert(TrdRepPartyRole_2.getString());
    all_values.push_back(TrdRepIndicatorsGrp_NoTrdRepIndicators_2);

    msg.addGroup(noTrdRepIndicators_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::TradeCaptureReportAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_142;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_142("DATA_459178202");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_142);
    UnderlyingInstrument_142.insert(EncodedUnderlyingIssuer_142.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_142(1352362691);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_142);
    UnderlyingInstrument_142.insert(EncodedUnderlyingIssuerLen_142.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_142("DATA_1853927096");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_142);
    UnderlyingInstrument_142.insert(EncodedUnderlyingSecurityDesc_142.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_142(2013439559);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_142);
    UnderlyingInstrument_142.insert(EncodedUnderlyingSecurityDescLen_142.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_142;
    UnderlyingAdjustedQuantity_142.setString("12709380");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_142);
    UnderlyingInstrument_142.insert(UnderlyingAdjustedQuantity_142.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_142;
    UnderlyingAllocationPercent_142.setString("9.920000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_142);
    UnderlyingInstrument_142.insert(UnderlyingAllocationPercent_142.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_142;
    UnderlyingAttachmentPoint_142.setString("39.060000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_142);
    UnderlyingInstrument_142.insert(UnderlyingAttachmentPoint_142.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_142("STRING_789872356");
    noUnderlyings_0_0.set(UnderlyingCFICode_142);
    UnderlyingInstrument_142.insert(UnderlyingCFICode_142.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_142("STRING_860130050");
    noUnderlyings_0_0.set(UnderlyingCPProgram_142);
    UnderlyingInstrument_142.insert(UnderlyingCPProgram_142.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_142("STRING_1739137005");
    noUnderlyings_0_0.set(UnderlyingCPRegType_142);
    UnderlyingInstrument_142.insert(UnderlyingCPRegType_142.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_142;
    UnderlyingCapValue_142.setString("8624506");
    noUnderlyings_0_0.set(UnderlyingCapValue_142);
    UnderlyingInstrument_142.insert(UnderlyingCapValue_142.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_142;
    UnderlyingCashAmount_142.setString("11314109");
    noUnderlyings_0_0.set(UnderlyingCashAmount_142);
    UnderlyingInstrument_142.insert(UnderlyingCashAmount_142.getString());
    FIX::UnderlyingCashType UnderlyingCashType_142("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_142);
    UnderlyingInstrument_142.insert(UnderlyingCashType_142.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_142;
    UnderlyingContractMultiplier_142.setString("2461556");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_142);
    UnderlyingInstrument_142.insert(UnderlyingContractMultiplier_142.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_142(933373460);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_142);
    UnderlyingInstrument_142.insert(UnderlyingContractMultiplierUnit_142.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_142("COUNTRY_1637815917");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_142);
    UnderlyingInstrument_142.insert(UnderlyingCountryOfIssue_142.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_142("LOCALMKTDATE_362388141");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_142);
    UnderlyingInstrument_142.insert(UnderlyingCouponPaymentDate_142.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_142;
    UnderlyingCouponRate_142.setString("27.130000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_142);
    UnderlyingInstrument_142.insert(UnderlyingCouponRate_142.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_142("STRING_1362690059");
    noUnderlyings_0_0.set(UnderlyingCreditRating_142);
    UnderlyingInstrument_142.insert(UnderlyingCreditRating_142.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_142("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_142);
    UnderlyingInstrument_142.insert(UnderlyingCurrency_142.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_142;
    UnderlyingCurrentValue_142.setString("16232381");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_142);
    UnderlyingInstrument_142.insert(UnderlyingCurrentValue_142.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_142;
    UnderlyingDetachmentPoint_142.setString("90.110000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_142);
    UnderlyingInstrument_142.insert(UnderlyingDetachmentPoint_142.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_142;
    UnderlyingDirtyPrice_142.setString("9282974");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_142);
    UnderlyingInstrument_142.insert(UnderlyingDirtyPrice_142.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_142;
    UnderlyingEndPrice_142.setString("15226397");
    noUnderlyings_0_0.set(UnderlyingEndPrice_142);
    UnderlyingInstrument_142.insert(UnderlyingEndPrice_142.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_142;
    UnderlyingEndValue_142.setString("1056382");
    noUnderlyings_0_0.set(UnderlyingEndValue_142);
    UnderlyingInstrument_142.insert(UnderlyingEndValue_142.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_142(1347873264);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_142);
    UnderlyingInstrument_142.insert(UnderlyingExerciseStyle_142.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_142;
    UnderlyingFXRate_142.setString("16455578");
    noUnderlyings_0_0.set(UnderlyingFXRate_142);
    UnderlyingInstrument_142.insert(UnderlyingFXRate_142.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_142('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_142);
    UnderlyingInstrument_142.insert(UnderlyingFXRateCalc_142.getString());
    FIX::UnderlyingFactor UnderlyingFactor_142;
    UnderlyingFactor_142.setString("18213003");
    noUnderlyings_0_0.set(UnderlyingFactor_142);
    UnderlyingInstrument_142.insert(UnderlyingFactor_142.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_142(584996176);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_142);
    UnderlyingInstrument_142.insert(UnderlyingFlowScheduleType_142.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_142("STRING_533731328");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_142);
    UnderlyingInstrument_142.insert(UnderlyingInstrRegistry_142.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_142("LOCALMKTDATE_1026179401");
    noUnderlyings_0_0.set(UnderlyingIssueDate_142);
    UnderlyingInstrument_142.insert(UnderlyingIssueDate_142.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_142("STRING_291439624");
    noUnderlyings_0_0.set(UnderlyingIssuer_142);
    UnderlyingInstrument_142.insert(UnderlyingIssuer_142.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_142("STRING_399687240");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_142);
    UnderlyingInstrument_142.insert(UnderlyingLocaleOfIssue_142.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_142("LOCALMKTDATE_149633849");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_142);
    UnderlyingInstrument_142.insert(UnderlyingMaturityDate_142.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_142("MONTHYEAR_943140617");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_142);
    UnderlyingInstrument_142.insert(UnderlyingMaturityMonthYear_142.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_142("TZTIMEONLY_217767498");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_142);
    UnderlyingInstrument_142.insert(UnderlyingMaturityTime_142.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_142;
    UnderlyingNotionalPercentageOutstanding_142.setString("62.050000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_142);
    UnderlyingInstrument_142.insert(UnderlyingNotionalPercentageOutstanding_142.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_142('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_142);
    UnderlyingInstrument_142.insert(UnderlyingOptAttribute_142.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_142;
    UnderlyingOriginalNotionalPercentageOutstanding_142.setString("45.030000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_142);
    UnderlyingInstrument_142.insert(UnderlyingOriginalNotionalPercentageOutstanding_142.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_142("STRING_1801956882");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_142);
    UnderlyingInstrument_142.insert(UnderlyingPriceUnitOfMeasure_142.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_142;
    UnderlyingPriceUnitOfMeasureQty_142.setString("7871979");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_142);
    UnderlyingInstrument_142.insert(UnderlyingPriceUnitOfMeasureQty_142.getString());
    FIX::UnderlyingProduct UnderlyingProduct_142(498387175);
    noUnderlyings_0_0.set(UnderlyingProduct_142);
    UnderlyingInstrument_142.insert(UnderlyingProduct_142.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_142(2048112516);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_142);
    UnderlyingInstrument_142.insert(UnderlyingPutOrCall_142.getString());
    FIX::UnderlyingPx UnderlyingPx_142;
    UnderlyingPx_142.setString("17205714");
    noUnderlyings_0_0.set(UnderlyingPx_142);
    UnderlyingInstrument_142.insert(UnderlyingPx_142.getString());
    FIX::UnderlyingQty UnderlyingQty_142;
    UnderlyingQty_142.setString("21362030");
    noUnderlyings_0_0.set(UnderlyingQty_142);
    UnderlyingInstrument_142.insert(UnderlyingQty_142.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_142("LOCALMKTDATE_263017009");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_142);
    UnderlyingInstrument_142.insert(UnderlyingRedemptionDate_142.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_142("STRING_777030509");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_142);
    UnderlyingInstrument_142.insert(UnderlyingRepoCollateralSecurityType_142.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_142;
    UnderlyingRepurchaseRate_142.setString("95.040000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_142);
    UnderlyingInstrument_142.insert(UnderlyingRepurchaseRate_142.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_142(797244460);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_142);
    UnderlyingInstrument_142.insert(UnderlyingRepurchaseTerm_142.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_142("STRING_192507252");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_142);
    UnderlyingInstrument_142.insert(UnderlyingRestructuringType_142.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_142("STRING_827163985");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_142);
    UnderlyingInstrument_142.insert(UnderlyingSecurityDesc_142.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_142("EXCHANGE_248809823");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_142);
    UnderlyingInstrument_142.insert(UnderlyingSecurityExchange_142.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_142("STRING_1120804679");
    noUnderlyings_0_0.set(UnderlyingSecurityID_142);
    UnderlyingInstrument_142.insert(UnderlyingSecurityID_142.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_142("STRING_202320041");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_142);
    UnderlyingInstrument_142.insert(UnderlyingSecurityIDSource_142.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_142("STRING_354448064");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_142);
    UnderlyingInstrument_142.insert(UnderlyingSecuritySubType_142.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_142("STRING_321194296");
    noUnderlyings_0_0.set(UnderlyingSecurityType_142);
    UnderlyingInstrument_142.insert(UnderlyingSecurityType_142.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_142("STRING_1847877937");
    noUnderlyings_0_0.set(UnderlyingSeniority_142);
    UnderlyingInstrument_142.insert(UnderlyingSeniority_142.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_142("STRING_429001190");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_142);
    UnderlyingInstrument_142.insert(UnderlyingSettlMethod_142.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_142(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_142);
    UnderlyingInstrument_142.insert(UnderlyingSettlementType_142.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_142;
    UnderlyingStartValue_142.setString("2853904");
    noUnderlyings_0_0.set(UnderlyingStartValue_142);
    UnderlyingInstrument_142.insert(UnderlyingStartValue_142.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_142("STRING_962732518");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_142);
    UnderlyingInstrument_142.insert(UnderlyingStateOrProvinceOfIssue_142.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_142("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_142);
    UnderlyingInstrument_142.insert(UnderlyingStrikeCurrency_142.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_142;
    UnderlyingStrikePrice_142.setString("13624197");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_142);
    UnderlyingInstrument_142.insert(UnderlyingStrikePrice_142.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_142("STRING_1170824256");
    noUnderlyings_0_0.set(UnderlyingSymbol_142);
    UnderlyingInstrument_142.insert(UnderlyingSymbol_142.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_142("STRING_1519970707");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_142);
    UnderlyingInstrument_142.insert(UnderlyingSymbolSfx_142.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_142("STRING_1580187257");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_142);
    UnderlyingInstrument_142.insert(UnderlyingTimeUnit_142.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_142("STRING_2110330462");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_142);
    UnderlyingInstrument_142.insert(UnderlyingUnitOfMeasure_142.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_142;
    UnderlyingUnitOfMeasureQty_142.setString("11757577");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_142);
    UnderlyingInstrument_142.insert(UnderlyingUnitOfMeasureQty_142.getString());
    all_values.push_back(UnderlyingInstrument_142);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_290;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_290("STRING_1764803696");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_290);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_290.insert(UnderlyingSecurityAltID_290.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_290("STRING_1962955709");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_290);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_290.insert(UnderlyingSecurityAltIDSource_290.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_290);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_277;
      FIX::UnderlyingStipType UnderlyingStipType_277("STRING_1665432564");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_277);
      UnderlyingStipulations_NoUnderlyingStips_277.insert(UnderlyingStipType_277.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_277("STRING_1536043505");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_277);
      UnderlyingStipulations_NoUnderlyingStips_277.insert(UnderlyingStipValue_277.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_277);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_278;
      FIX::UnderlyingStipType UnderlyingStipType_278("STRING_1876714732");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_278);
      UnderlyingStipulations_NoUnderlyingStips_278.insert(UnderlyingStipType_278.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_278("STRING_1928449574");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_278);
      UnderlyingStipulations_NoUnderlyingStips_278.insert(UnderlyingStipValue_278.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_278);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_279;
      FIX::UnderlyingStipType UnderlyingStipType_279("STRING_165590366");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_279);
      UnderlyingStipulations_NoUnderlyingStips_279.insert(UnderlyingStipType_279.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_279("STRING_1080640588");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_279);
      UnderlyingStipulations_NoUnderlyingStips_279.insert(UnderlyingStipValue_279.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_279);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_287;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_287("STRING_358097618");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_287);
      UndlyInstrumentParties_NoUndlyInstrumentParties_287.insert(UnderlyingInstrumentPartyID_287.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_287('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_287);
      UndlyInstrumentParties_NoUndlyInstrumentParties_287.insert(UnderlyingInstrumentPartyIDSource_287.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_287(827020210);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_287);
      UndlyInstrumentParties_NoUndlyInstrumentParties_287.insert(UnderlyingInstrumentPartyRole_287.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_287);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_567;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_567("STRING_2110124615");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_567);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_567.insert(UnderlyingInstrumentPartySubID_567.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_567(1181468274);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_567);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_567.insert(UnderlyingInstrumentPartySubIDType_567.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_567);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_568;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_568("STRING_1800096594");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_568);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_568.insert(UnderlyingInstrumentPartySubID_568.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_568(1810518904);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_568);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_568.insert(UnderlyingInstrumentPartySubIDType_568.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_568);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_569;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_569("STRING_1610469464");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_569);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_569.insert(UnderlyingInstrumentPartySubID_569.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_569(1795107600);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_569);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_569.insert(UnderlyingInstrumentPartySubIDType_569.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_569);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_288;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_288("STRING_2095909370");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_288);
      UndlyInstrumentParties_NoUndlyInstrumentParties_288.insert(UnderlyingInstrumentPartyID_288.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_288('4');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_288);
      UndlyInstrumentParties_NoUndlyInstrumentParties_288.insert(UnderlyingInstrumentPartyIDSource_288.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_288(668814359);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_288);
      UndlyInstrumentParties_NoUndlyInstrumentParties_288.insert(UnderlyingInstrumentPartyRole_288.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_288);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_570;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_570("STRING_1788138093");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_570);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_570.insert(UnderlyingInstrumentPartySubID_570.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_570(1839638616);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_570);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_570.insert(UnderlyingInstrumentPartySubIDType_570.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_570);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_571;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_571("STRING_2045226519");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_571);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_571.insert(UnderlyingInstrumentPartySubID_571.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_571(1220841702);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_571);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_571.insert(UnderlyingInstrumentPartySubIDType_571.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_571);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_572;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_572("STRING_1802485430");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_572);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_572.insert(UnderlyingInstrumentPartySubID_572.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_572(1073500597);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_572);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_572.insert(UnderlyingInstrumentPartySubIDType_572.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_572);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
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
