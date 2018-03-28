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
  multiset<string> TradeCaptureReportAck_0;
  FIX::AsOfIndicator AsOfIndicator_1('0');
  msg.set(AsOfIndicator_1);
  TradeCaptureReportAck_0.insert(AsOfIndicator_1.getString());
  FIX::AvgPx AvgPx_9;
  AvgPx_9.setString("15408156");
  msg.set(AvgPx_9);
  TradeCaptureReportAck_0.insert(AvgPx_9.getString());
  FIX::AvgPxIndicator AvgPxIndicator_5(0);
  msg.set(AvgPxIndicator_5);
  TradeCaptureReportAck_0.insert(AvgPxIndicator_5.getString());
  FIX::CalculatedCcyLastQty CalculatedCcyLastQty_2;
  CalculatedCcyLastQty_2.setString("17561005");
  msg.set(CalculatedCcyLastQty_2);
  TradeCaptureReportAck_0.insert(CalculatedCcyLastQty_2.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_26("LOCALMKTDATE_1354605185");
  msg.set(ClearingBusinessDate_26);
  TradeCaptureReportAck_0.insert(ClearingBusinessDate_26.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_16("STRING_I");
  msg.set(ClearingFeeIndicator_16);
  TradeCaptureReportAck_0.insert(ClearingFeeIndicator_16.getString());
  FIX::CopyMsgIndicator CopyMsgIndicator_3(true);
  msg.set(CopyMsgIndicator_3);
  TradeCaptureReportAck_0.insert(CopyMsgIndicator_3.getString());
  FIX::Currency Currency_72("JPY");
  msg.set(Currency_72);
  TradeCaptureReportAck_0.insert(Currency_72.getString());
  FIX::EncodedText EncodedText_91("DATA_1427180590");
  msg.set(EncodedText_91);
  TradeCaptureReportAck_0.insert(EncodedText_91.getString());
  FIX::EncodedTextLen EncodedTextLen_91(207153640);
  msg.set(EncodedTextLen_91);
  TradeCaptureReportAck_0.insert(EncodedTextLen_91.getString());
  FIX::ExecID ExecID_19("STRING_852596460");
  msg.set(ExecID_19);
  TradeCaptureReportAck_0.insert(ExecID_19.getString());
  FIX::ExecRestatementReason ExecRestatementReason_2(9);
  msg.set(ExecRestatementReason_2);
  TradeCaptureReportAck_0.insert(ExecRestatementReason_2.getString());
  FIX::ExecType ExecType_2('8');
  msg.set(ExecType_2);
  TradeCaptureReportAck_0.insert(ExecType_2.getString());
  FIX::FeeMultiplier FeeMultiplier_1;
  FeeMultiplier_1.setString("9876685");
  msg.set(FeeMultiplier_1);
  TradeCaptureReportAck_0.insert(FeeMultiplier_1.getString());
  FIX::FirmTradeID FirmTradeID_7("STRING_194589414");
  msg.set(FirmTradeID_7);
  TradeCaptureReportAck_0.insert(FirmTradeID_7.getString());
  FIX::GrossTradeAmt GrossTradeAmt_6;
  GrossTradeAmt_6.setString("738361");
  msg.set(GrossTradeAmt_6);
  TradeCaptureReportAck_0.insert(GrossTradeAmt_6.getString());
  FIX::LastForwardPoints LastForwardPoints_2;
  LastForwardPoints_2.setString("2689193");
  msg.set(LastForwardPoints_2);
  TradeCaptureReportAck_0.insert(LastForwardPoints_2.getString());
  FIX::LastMkt LastMkt_7("EXCHANGE_436076552");
  msg.set(LastMkt_7);
  TradeCaptureReportAck_0.insert(LastMkt_7.getString());
  FIX::LastParPx LastParPx_9;
  LastParPx_9.setString("16127858");
  msg.set(LastParPx_9);
  TradeCaptureReportAck_0.insert(LastParPx_9.getString());
  FIX::LastPx LastPx_13;
  LastPx_13.setString("19329547");
  msg.set(LastPx_13);
  TradeCaptureReportAck_0.insert(LastPx_13.getString());
  FIX::LastQty LastQty_10;
  LastQty_10.setString("14298655");
  msg.set(LastQty_10);
  TradeCaptureReportAck_0.insert(LastQty_10.getString());
  FIX::LastSpotRate LastSpotRate_2;
  LastSpotRate_2.setString("2965044");
  msg.set(LastSpotRate_2);
  TradeCaptureReportAck_0.insert(LastSpotRate_2.getString());
  FIX::LastSwapPoints LastSwapPoints_2;
  LastSwapPoints_2.setString("20896652");
  msg.set(LastSwapPoints_2);
  TradeCaptureReportAck_0.insert(LastSwapPoints_2.getString());
  FIX::LastUpdateTime LastUpdateTime_7(FIX::UTCTIMESTAMP(0, 58, 34, 21, 6, 2017));
  msg.set(LastUpdateTime_7);
  TradeCaptureReportAck_0.insert(LastUpdateTime_7.getString());
  FIX::MarketID MarketID_24("EXCHANGE_422798117");
  msg.set(MarketID_24);
  TradeCaptureReportAck_0.insert(MarketID_24.getString());
  FIX::MarketSegmentID MarketSegmentID_24("STRING_104754010");
  msg.set(MarketSegmentID_24);
  TradeCaptureReportAck_0.insert(MarketSegmentID_24.getString());
  FIX::MatchStatus MatchStatus_13('2');
  msg.set(MatchStatus_13);
  TradeCaptureReportAck_0.insert(MatchStatus_13.getString());
  FIX::MatchType MatchType_48("STRING_M3");
  msg.set(MatchType_48);
  TradeCaptureReportAck_0.insert(MatchType_48.getString());
  FIX::MessageEventSource MessageEventSource_5("STRING_1459359195");
  msg.set(MessageEventSource_5);
  TradeCaptureReportAck_0.insert(MessageEventSource_5.getString());
  FIX::MultiLegReportingType MultiLegReportingType_5('3');
  msg.set(MultiLegReportingType_5);
  TradeCaptureReportAck_0.insert(MultiLegReportingType_5.getString());
  FIX::OrigSecondaryTradeID OrigSecondaryTradeID_1("STRING_2006978888");
  msg.set(OrigSecondaryTradeID_1);
  TradeCaptureReportAck_0.insert(OrigSecondaryTradeID_1.getString());
  FIX::OrigTradeDate OrigTradeDate_1("LOCALMKTDATE_1904506184");
  msg.set(OrigTradeDate_1);
  TradeCaptureReportAck_0.insert(OrigTradeDate_1.getString());
  FIX::OrigTradeHandlingInstr OrigTradeHandlingInstr_1('3');
  msg.set(OrigTradeHandlingInstr_1);
  TradeCaptureReportAck_0.insert(OrigTradeHandlingInstr_1.getString());
  FIX::OrigTradeID OrigTradeID_1("STRING_1286675830");
  msg.set(OrigTradeID_1);
  TradeCaptureReportAck_0.insert(OrigTradeID_1.getString());
  FIX::PreviouslyReported PreviouslyReported_4(true);
  msg.set(PreviouslyReported_4);
  TradeCaptureReportAck_0.insert(PreviouslyReported_4.getString());
  FIX::PriceType PriceType_43(2);
  msg.set(PriceType_43);
  TradeCaptureReportAck_0.insert(PriceType_43.getString());
  FIX::PublishTrdIndicator PublishTrdIndicator_1(true);
  msg.set(PublishTrdIndicator_1);
  TradeCaptureReportAck_0.insert(PublishTrdIndicator_1.getString());
  FIX::QtyType QtyType_27(1);
  msg.set(QtyType_27);
  TradeCaptureReportAck_0.insert(QtyType_27.getString());
  FIX::ResponseDestination ResponseDestination_4("STRING_1879547260");
  msg.set(ResponseDestination_4);
  TradeCaptureReportAck_0.insert(ResponseDestination_4.getString());
  FIX::ResponseTransportType ResponseTransportType_4(0);
  msg.set(ResponseTransportType_4);
  TradeCaptureReportAck_0.insert(ResponseTransportType_4.getString());
  FIX::RndPx RndPx_4;
  RndPx_4.setString("3116619");
  msg.set(RndPx_4);
  TradeCaptureReportAck_0.insert(RndPx_4.getString());
  FIX::RptSys RptSys_0("STRING_982928");
  msg.set(RptSys_0);
  TradeCaptureReportAck_0.insert(RptSys_0.getString());
  FIX::SecondaryExecID SecondaryExecID_8("STRING_983362488");
  msg.set(SecondaryExecID_8);
  TradeCaptureReportAck_0.insert(SecondaryExecID_8.getString());
  FIX::SecondaryFirmTradeID SecondaryFirmTradeID_1("STRING_1924447792");
  msg.set(SecondaryFirmTradeID_1);
  TradeCaptureReportAck_0.insert(SecondaryFirmTradeID_1.getString());
  FIX::SecondaryTradeID SecondaryTradeID_1("STRING_1933937667");
  msg.set(SecondaryTradeID_1);
  TradeCaptureReportAck_0.insert(SecondaryTradeID_1.getString());
  FIX::SecondaryTradeReportID SecondaryTradeReportID_14("STRING_265744399");
  msg.set(SecondaryTradeReportID_14);
  TradeCaptureReportAck_0.insert(SecondaryTradeReportID_14.getString());
  FIX::SecondaryTradeReportRefID SecondaryTradeReportRefID_1("STRING_73468631");
  msg.set(SecondaryTradeReportRefID_1);
  TradeCaptureReportAck_0.insert(SecondaryTradeReportRefID_1.getString());
  FIX::SecondaryTrdType SecondaryTrdType_1(1876119318);
  msg.set(SecondaryTrdType_1);
  TradeCaptureReportAck_0.insert(SecondaryTrdType_1.getString());
  FIX::SettlCurrency SettlCurrency_33("CAN");
  msg.set(SettlCurrency_33);
  TradeCaptureReportAck_0.insert(SettlCurrency_33.getString());
  FIX::SettlDate SettlDate_47("LOCALMKTDATE_855492488");
  msg.set(SettlDate_47);
  TradeCaptureReportAck_0.insert(SettlDate_47.getString());
  FIX::SettlSessID SettlSessID_13("STRING_RTH");
  msg.set(SettlSessID_13);
  TradeCaptureReportAck_0.insert(SettlSessID_13.getString());
  FIX::SettlSessSubID SettlSessSubID_12("STRING_815740564");
  msg.set(SettlSessSubID_12);
  TradeCaptureReportAck_0.insert(SettlSessSubID_12.getString());
  FIX::SettlType SettlType_31("STRING_2");
  msg.set(SettlType_31);
  TradeCaptureReportAck_0.insert(SettlType_31.getString());
  FIX::ShortSaleReason ShortSaleReason_1(2);
  msg.set(ShortSaleReason_1);
  TradeCaptureReportAck_0.insert(ShortSaleReason_1.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_14('0');
  msg.set(SubscriptionRequestType_14);
  TradeCaptureReportAck_0.insert(SubscriptionRequestType_14.getString());
  FIX::Text Text_91("STRING_1671668496");
  msg.set(Text_91);
  TradeCaptureReportAck_0.insert(Text_91.getString());
  FIX::TierCode TierCode_1("STRING_1519797393");
  msg.set(TierCode_1);
  TradeCaptureReportAck_0.insert(TierCode_1.getString());
  FIX::TradeDate TradeDate_26("LOCALMKTDATE_1269953683");
  msg.set(TradeDate_26);
  TradeCaptureReportAck_0.insert(TradeDate_26.getString());
  FIX::TradeHandlingInstr TradeHandlingInstr_1('1');
  msg.set(TradeHandlingInstr_1);
  TradeCaptureReportAck_0.insert(TradeHandlingInstr_1.getString());
  FIX::TradeID TradeID_8("STRING_1932845420");
  msg.set(TradeID_8);
  TradeCaptureReportAck_0.insert(TradeID_8.getString());
  FIX::TradeLegRefID TradeLegRefID_1("STRING_1129448924");
  msg.set(TradeLegRefID_1);
  TradeCaptureReportAck_0.insert(TradeLegRefID_1.getString());
  FIX::TradeLinkID TradeLinkID_1("STRING_740566579");
  msg.set(TradeLinkID_1);
  TradeCaptureReportAck_0.insert(TradeLinkID_1.getString());
  FIX::TradePublishIndicator TradePublishIndicator_1(1);
  msg.set(TradePublishIndicator_1);
  TradeCaptureReportAck_0.insert(TradePublishIndicator_1.getString());
  FIX::TradeReportID TradeReportID_14("STRING_268641106");
  msg.set(TradeReportID_14);
  TradeCaptureReportAck_0.insert(TradeReportID_14.getString());
  FIX::TradeReportRefID TradeReportRefID_1("STRING_704742756");
  msg.set(TradeReportRefID_1);
  TradeCaptureReportAck_0.insert(TradeReportRefID_1.getString());
  FIX::TradeReportRejectReason TradeReportRejectReason_0(3);
  msg.set(TradeReportRejectReason_0);
  TradeCaptureReportAck_0.insert(TradeReportRejectReason_0.getString());
  FIX::TradeReportTransType TradeReportTransType_1(3);
  msg.set(TradeReportTransType_1);
  TradeCaptureReportAck_0.insert(TradeReportTransType_1.getString());
  FIX::TradeReportType TradeReportType_1(2);
  msg.set(TradeReportType_1);
  TradeCaptureReportAck_0.insert(TradeReportType_1.getString());
  FIX::TransactTime TransactTime_71(FIX::UTCTIMESTAMP(13, 22, 31, 6, 7, 2014));
  msg.set(TransactTime_71);
  TradeCaptureReportAck_0.insert(TransactTime_71.getString());
  FIX::TransferReason TransferReason_1("STRING_270246805");
  msg.set(TransferReason_1);
  TradeCaptureReportAck_0.insert(TransferReason_1.getString());
  FIX::TrdMatchID TrdMatchID_2("STRING_1104663198");
  msg.set(TrdMatchID_2);
  TradeCaptureReportAck_0.insert(TrdMatchID_2.getString());
  FIX::TrdRptStatus TrdRptStatus_1(3);
  msg.set(TrdRptStatus_1);
  TradeCaptureReportAck_0.insert(TrdRptStatus_1.getString());
  FIX::TrdSubType TrdSubType_4(3);
  msg.set(TrdSubType_4);
  TradeCaptureReportAck_0.insert(TrdSubType_4.getString());
  FIX::TrdType TrdType_6(35);
  msg.set(TrdType_6);
  TradeCaptureReportAck_0.insert(TrdType_6.getString());
  FIX::UnderlyingTradingSessionID UnderlyingTradingSessionID_1("STRING_820151409");
  msg.set(UnderlyingTradingSessionID_1);
  TradeCaptureReportAck_0.insert(UnderlyingTradingSessionID_1.getString());
  FIX::UnderlyingTradingSessionSubID UnderlyingTradingSessionSubID_1("STRING_1505241934");
  msg.set(UnderlyingTradingSessionSubID_1);
  TradeCaptureReportAck_0.insert(UnderlyingTradingSessionSubID_1.getString());
  FIX::VenueType VenueType_1('P');
  msg.set(VenueType_1);
  TradeCaptureReportAck_0.insert(VenueType_1.getString());
  all_values.push_back(TradeCaptureReportAck_0);

  // Instrument
  multiset<string> Instrument_96;
  FIX::AttachmentPoint AttachmentPoint_96;
  AttachmentPoint_96.setString("22.470000");
  msg.set(AttachmentPoint_96);
  Instrument_96.insert(AttachmentPoint_96.getString());
  FIX::CFICode CFICode_101("STRING_1014063425");
  msg.set(CFICode_101);
  Instrument_96.insert(CFICode_101.getString());
  FIX::CPProgram CPProgram_96(99);
  msg.set(CPProgram_96);
  Instrument_96.insert(CPProgram_96.getString());
  FIX::CPRegType CPRegType_96("STRING_1911250743");
  msg.set(CPRegType_96);
  Instrument_96.insert(CPRegType_96.getString());
  FIX::CapPrice CapPrice_96;
  CapPrice_96.setString("3863771");
  msg.set(CapPrice_96);
  Instrument_96.insert(CapPrice_96.getString());
  FIX::ContractMultiplier ContractMultiplier_96;
  ContractMultiplier_96.setString("2794062");
  msg.set(ContractMultiplier_96);
  Instrument_96.insert(ContractMultiplier_96.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_96(2);
  msg.set(ContractMultiplierUnit_96);
  Instrument_96.insert(ContractMultiplierUnit_96.getString());
  FIX::ContractSettlMonth ContractSettlMonth_96("MONTHYEAR_171738942");
  msg.set(ContractSettlMonth_96);
  Instrument_96.insert(ContractSettlMonth_96.getString());
  FIX::CountryOfIssue CountryOfIssue_96("COUNTRY_1408855195");
  msg.set(CountryOfIssue_96);
  Instrument_96.insert(CountryOfIssue_96.getString());
  FIX::CouponPaymentDate CouponPaymentDate_96("LOCALMKTDATE_1487877718");
  msg.set(CouponPaymentDate_96);
  Instrument_96.insert(CouponPaymentDate_96.getString());
  FIX::CouponRate CouponRate_96;
  CouponRate_96.setString("65.920000");
  msg.set(CouponRate_96);
  Instrument_96.insert(CouponRate_96.getString());
  FIX::CreditRating CreditRating_96("STRING_1677496301");
  msg.set(CreditRating_96);
  Instrument_96.insert(CreditRating_96.getString());
  FIX::DatedDate DatedDate_96("LOCALMKTDATE_45136826");
  msg.set(DatedDate_96);
  Instrument_96.insert(DatedDate_96.getString());
  FIX::DetachmentPoint DetachmentPoint_96;
  DetachmentPoint_96.setString("56.360000");
  msg.set(DetachmentPoint_96);
  Instrument_96.insert(DetachmentPoint_96.getString());
  FIX::EncodedIssuer EncodedIssuer_96("DATA_151350282");
  msg.set(EncodedIssuer_96);
  Instrument_96.insert(EncodedIssuer_96.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_96(987705324);
  msg.set(EncodedIssuerLen_96);
  Instrument_96.insert(EncodedIssuerLen_96.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_96("DATA_1161491939");
  msg.set(EncodedSecurityDesc_96);
  Instrument_96.insert(EncodedSecurityDesc_96.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_96(1319973848);
  msg.set(EncodedSecurityDescLen_96);
  Instrument_96.insert(EncodedSecurityDescLen_96.getString());
  FIX::ExerciseStyle ExerciseStyle_96(0);
  msg.set(ExerciseStyle_96);
  Instrument_96.insert(ExerciseStyle_96.getString());
  FIX::Factor Factor_96;
  Factor_96.setString("16110611");
  msg.set(Factor_96);
  Instrument_96.insert(Factor_96.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_96(true);
  msg.set(FlexProductEligibilityIndicator_96);
  Instrument_96.insert(FlexProductEligibilityIndicator_96.getString());
  FIX::FlexibleIndicator FlexibleIndicator_96(false);
  msg.set(FlexibleIndicator_96);
  Instrument_96.insert(FlexibleIndicator_96.getString());
  FIX::FloorPrice FloorPrice_96;
  FloorPrice_96.setString("18470844");
  msg.set(FloorPrice_96);
  Instrument_96.insert(FloorPrice_96.getString());
  FIX::FlowScheduleType FlowScheduleType_96(4);
  msg.set(FlowScheduleType_96);
  Instrument_96.insert(FlowScheduleType_96.getString());
  FIX::InstrRegistry InstrRegistry_96("STRING_82826215");
  msg.set(InstrRegistry_96);
  Instrument_96.insert(InstrRegistry_96.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_96('1');
  msg.set(InstrmtAssignmentMethod_96);
  Instrument_96.insert(InstrmtAssignmentMethod_96.getString());
  FIX::InterestAccrualDate InterestAccrualDate_96("LOCALMKTDATE_1902482212");
  msg.set(InterestAccrualDate_96);
  Instrument_96.insert(InterestAccrualDate_96.getString());
  FIX::IssueDate IssueDate_96("LOCALMKTDATE_1332966853");
  msg.set(IssueDate_96);
  Instrument_96.insert(IssueDate_96.getString());
  FIX::Issuer Issuer_96("STRING_484411103");
  msg.set(Issuer_96);
  Instrument_96.insert(Issuer_96.getString());
  FIX::ListMethod ListMethod_96(1);
  msg.set(ListMethod_96);
  Instrument_96.insert(ListMethod_96.getString());
  FIX::LocaleOfIssue LocaleOfIssue_96("STRING_1251364407");
  msg.set(LocaleOfIssue_96);
  Instrument_96.insert(LocaleOfIssue_96.getString());
  FIX::MaturityDate MaturityDate_96("LOCALMKTDATE_723993350");
  msg.set(MaturityDate_96);
  Instrument_96.insert(MaturityDate_96.getString());
  FIX::MaturityMonthYear MaturityMonthYear_96("MONTHYEAR_126820276");
  msg.set(MaturityMonthYear_96);
  Instrument_96.insert(MaturityMonthYear_96.getString());
  FIX::MaturityTime MaturityTime_96("TZTIMEONLY_260816994");
  msg.set(MaturityTime_96);
  Instrument_96.insert(MaturityTime_96.getString());
  FIX::MinPriceIncrement MinPriceIncrement_96;
  MinPriceIncrement_96.setString("4877604");
  msg.set(MinPriceIncrement_96);
  Instrument_96.insert(MinPriceIncrement_96.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_96;
  MinPriceIncrementAmount_96.setString("5131974");
  msg.set(MinPriceIncrementAmount_96);
  Instrument_96.insert(MinPriceIncrementAmount_96.getString());
  FIX::NTPositionLimit NTPositionLimit_96(540223265);
  msg.set(NTPositionLimit_96);
  Instrument_96.insert(NTPositionLimit_96.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_96;
  NotionalPercentageOutstanding_96.setString("15.830000");
  msg.set(NotionalPercentageOutstanding_96);
  Instrument_96.insert(NotionalPercentageOutstanding_96.getString());
  FIX::OptAttribute OptAttribute_96('6');
  msg.set(OptAttribute_96);
  Instrument_96.insert(OptAttribute_96.getString());
  FIX::OptPayoutAmount OptPayoutAmount_96;
  OptPayoutAmount_96.setString("19490784");
  msg.set(OptPayoutAmount_96);
  Instrument_96.insert(OptPayoutAmount_96.getString());
  FIX::OptPayoutType OptPayoutType_96(2);
  msg.set(OptPayoutType_96);
  Instrument_96.insert(OptPayoutType_96.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_96;
  OriginalNotionalPercentageOutstanding_96.setString("93.330000");
  msg.set(OriginalNotionalPercentageOutstanding_96);
  Instrument_96.insert(OriginalNotionalPercentageOutstanding_96.getString());
  FIX::Pool Pool_96("STRING_1479091114");
  msg.set(Pool_96);
  Instrument_96.insert(Pool_96.getString());
  FIX::PositionLimit PositionLimit_96(620602479);
  msg.set(PositionLimit_96);
  Instrument_96.insert(PositionLimit_96.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_96("STRING_INX");
  msg.set(PriceQuoteMethod_96);
  Instrument_96.insert(PriceQuoteMethod_96.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_96("STRING_1630441396");
  msg.set(PriceUnitOfMeasure_96);
  Instrument_96.insert(PriceUnitOfMeasure_96.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_96;
  PriceUnitOfMeasureQty_96.setString("16083078");
  msg.set(PriceUnitOfMeasureQty_96);
  Instrument_96.insert(PriceUnitOfMeasureQty_96.getString());
  FIX::Product Product_104(7);
  msg.set(Product_104);
  Instrument_96.insert(Product_104.getString());
  FIX::ProductComplex ProductComplex_96("STRING_802931596");
  msg.set(ProductComplex_96);
  Instrument_96.insert(ProductComplex_96.getString());
  FIX::PutOrCall PutOrCall_96(1);
  msg.set(PutOrCall_96);
  Instrument_96.insert(PutOrCall_96.getString());
  FIX::RedemptionDate RedemptionDate_96("LOCALMKTDATE_2019294431");
  msg.set(RedemptionDate_96);
  Instrument_96.insert(RedemptionDate_96.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_96("STRING_2127407850");
  msg.set(RepoCollateralSecurityType_96);
  Instrument_96.insert(RepoCollateralSecurityType_96.getString());
  FIX::RepurchaseRate RepurchaseRate_96;
  RepurchaseRate_96.setString("29.200000");
  msg.set(RepurchaseRate_96);
  Instrument_96.insert(RepurchaseRate_96.getString());
  FIX::RepurchaseTerm RepurchaseTerm_96(1718895205);
  msg.set(RepurchaseTerm_96);
  Instrument_96.insert(RepurchaseTerm_96.getString());
  FIX::RestructuringType RestructuringType_96("STRING_MM");
  msg.set(RestructuringType_96);
  Instrument_96.insert(RestructuringType_96.getString());
  FIX::SecurityDesc SecurityDesc_96("STRING_763749136");
  msg.set(SecurityDesc_96);
  Instrument_96.insert(SecurityDesc_96.getString());
  FIX::SecurityExchange SecurityExchange_96("EXCHANGE_1383154899");
  msg.set(SecurityExchange_96);
  Instrument_96.insert(SecurityExchange_96.getString());
  FIX::SecurityGroup SecurityGroup_96("STRING_1329645826");
  msg.set(SecurityGroup_96);
  Instrument_96.insert(SecurityGroup_96.getString());
  FIX::SecurityID SecurityID_96("STRING_2096715989");
  msg.set(SecurityID_96);
  Instrument_96.insert(SecurityID_96.getString());
  FIX::SecurityIDSource SecurityIDSource_96("STRING_H");
  msg.set(SecurityIDSource_96);
  Instrument_96.insert(SecurityIDSource_96.getString());
  FIX::SecurityStatus SecurityStatus_97("STRING_2");
  msg.set(SecurityStatus_97);
  Instrument_96.insert(SecurityStatus_97.getString());
  FIX::SecuritySubType SecuritySubType_100("STRING_1200596748");
  msg.set(SecuritySubType_100);
  Instrument_96.insert(SecuritySubType_100.getString());
  FIX::SecurityType SecurityType_104("STRING_SWING");
  msg.set(SecurityType_104);
  Instrument_96.insert(SecurityType_104.getString());
  FIX::Seniority Seniority_96("STRING_SR");
  msg.set(Seniority_96);
  Instrument_96.insert(Seniority_96.getString());
  FIX::SettlMethod SettlMethod_96('C');
  msg.set(SettlMethod_96);
  Instrument_96.insert(SettlMethod_96.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_96("STRING_931836149");
  msg.set(SettleOnOpenFlag_96);
  Instrument_96.insert(SettleOnOpenFlag_96.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_96("STRING_1082420399");
  msg.set(StateOrProvinceOfIssue_96);
  Instrument_96.insert(StateOrProvinceOfIssue_96.getString());
  FIX::StrikeCurrency StrikeCurrency_96("GBP");
  msg.set(StrikeCurrency_96);
  Instrument_96.insert(StrikeCurrency_96.getString());
  FIX::StrikeMultiplier StrikeMultiplier_96;
  StrikeMultiplier_96.setString("17673567");
  msg.set(StrikeMultiplier_96);
  Instrument_96.insert(StrikeMultiplier_96.getString());
  FIX::StrikePrice StrikePrice_96;
  StrikePrice_96.setString("18032318");
  msg.set(StrikePrice_96);
  Instrument_96.insert(StrikePrice_96.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_96(4);
  msg.set(StrikePriceBoundaryMethod_96);
  Instrument_96.insert(StrikePriceBoundaryMethod_96.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_96;
  StrikePriceBoundaryPrecision_96.setString("24.730000");
  msg.set(StrikePriceBoundaryPrecision_96);
  Instrument_96.insert(StrikePriceBoundaryPrecision_96.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_96(3);
  msg.set(StrikePriceDeterminationMethod_96);
  Instrument_96.insert(StrikePriceDeterminationMethod_96.getString());
  FIX::StrikeValue StrikeValue_96;
  StrikeValue_96.setString("12154922");
  msg.set(StrikeValue_96);
  Instrument_96.insert(StrikeValue_96.getString());
  FIX::Symbol Symbol_96("STRING_1695417442");
  msg.set(Symbol_96);
  Instrument_96.insert(Symbol_96.getString());
  FIX::SymbolSfx SymbolSfx_96("STRING_WI");
  msg.set(SymbolSfx_96);
  Instrument_96.insert(SymbolSfx_96.getString());
  FIX::TimeUnit TimeUnit_96("STRING_Mo");
  msg.set(TimeUnit_96);
  Instrument_96.insert(TimeUnit_96.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_96(3);
  msg.set(UnderlyingPriceDeterminationMethod_96);
  Instrument_96.insert(UnderlyingPriceDeterminationMethod_96.getString());
  FIX::UnitOfMeasure UnitOfMeasure_96("STRING_tn");
  msg.set(UnitOfMeasure_96);
  Instrument_96.insert(UnitOfMeasure_96.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_96;
  UnitOfMeasureQty_96.setString("2315926");
  msg.set(UnitOfMeasureQty_96);
  Instrument_96.insert(UnitOfMeasureQty_96.getString());
  FIX::ValuationMethod ValuationMethod_96("STRING_FUT");
  msg.set(ValuationMethod_96);
  Instrument_96.insert(ValuationMethod_96.getString());
  all_values.push_back(Instrument_96);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReportAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_178;
    FIX::ComplexEventCondition ComplexEventCondition_178(2);
    noComplexEvents_0_0.set(ComplexEventCondition_178);
    ComplexEvents_NoComplexEvents_178.insert(ComplexEventCondition_178.getString());
    FIX::ComplexEventPrice ComplexEventPrice_178;
    ComplexEventPrice_178.setString("15468730");
    noComplexEvents_0_0.set(ComplexEventPrice_178);
    ComplexEvents_NoComplexEvents_178.insert(ComplexEventPrice_178.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_178(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_178);
    ComplexEvents_NoComplexEvents_178.insert(ComplexEventPriceBoundaryMethod_178.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_178;
    ComplexEventPriceBoundaryPrecision_178.setString("46.850000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_178);
    ComplexEvents_NoComplexEvents_178.insert(ComplexEventPriceBoundaryPrecision_178.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_178(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_178);
    ComplexEvents_NoComplexEvents_178.insert(ComplexEventPriceTimeType_178.getString());
    FIX::ComplexEventType ComplexEventType_178(3);
    noComplexEvents_0_0.set(ComplexEventType_178);
    ComplexEvents_NoComplexEvents_178.insert(ComplexEventType_178.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_178;
    ComplexOptPayoutAmount_178.setString("16254970");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_178);
    ComplexEvents_NoComplexEvents_178.insert(ComplexOptPayoutAmount_178.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_178);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_361;
      FIX::ComplexEventEndDate ComplexEventEndDate_361(FIX::UTCTIMESTAMP(22, 32, 37, 24, 2, 2013));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_361);
      ComplexEventDates_NoComplexEventDates_361.insert(ComplexEventEndDate_361.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_361(FIX::UTCTIMESTAMP(9, 57, 41, 15, 7, 2003));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_361);
      ComplexEventDates_NoComplexEventDates_361.insert(ComplexEventStartDate_361.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_361);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_727;
        FIX::ComplexEventEndTime ComplexEventEndTime_727(FIX::UTCTIMEONLY(18, 38, 38));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_727);
        ComplexEventTimes_NoComplexEventTimes_727.insert(ComplexEventEndTime_727.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_727(FIX::UTCTIMEONLY(23, 36, 12));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_727);
        ComplexEventTimes_NoComplexEventTimes_727.insert(ComplexEventStartTime_727.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_727);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_728;
        FIX::ComplexEventEndTime ComplexEventEndTime_728(FIX::UTCTIMEONLY(15, 52, 53));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_728);
        ComplexEventTimes_NoComplexEventTimes_728.insert(ComplexEventEndTime_728.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_728(FIX::UTCTIMEONLY(6, 51, 33));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_728);
        ComplexEventTimes_NoComplexEventTimes_728.insert(ComplexEventStartTime_728.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_728);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
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
    multiset<string> EvntGrp_NoEvents_192;
    FIX::EventDate EventDate_192("LOCALMKTDATE_919206337");
    noEvents_0_0.set(EventDate_192);
    EvntGrp_NoEvents_192.insert(EventDate_192.getString());
    FIX::EventPx EventPx_192;
    EventPx_192.setString("8409479");
    noEvents_0_0.set(EventPx_192);
    EvntGrp_NoEvents_192.insert(EventPx_192.getString());
    FIX::EventText EventText_192("STRING_2093272880");
    noEvents_0_0.set(EventText_192);
    EvntGrp_NoEvents_192.insert(EventText_192.getString());
    FIX::EventTime EventTime_192(FIX::UTCTIMESTAMP(2, 49, 58, 20, 3, 2007));
    noEvents_0_0.set(EventTime_192);
    EvntGrp_NoEvents_192.insert(EventTime_192.getString());
    FIX::EventType EventType_192(4);
    noEvents_0_0.set(EventType_192);
    EvntGrp_NoEvents_192.insert(EventType_192.getString());
    all_values.push_back(EvntGrp_NoEvents_192);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReportAck::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_189;
    FIX::InstrumentPartyID InstrumentPartyID_189("STRING_898162930");
    noInstrumentParties_0_0.set(InstrumentPartyID_189);
    InstrumentParties_NoInstrumentParties_189.insert(InstrumentPartyID_189.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_189('8');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_189);
    InstrumentParties_NoInstrumentParties_189.insert(InstrumentPartyIDSource_189.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_189(929375076);
    noInstrumentParties_0_0.set(InstrumentPartyRole_189);
    InstrumentParties_NoInstrumentParties_189.insert(InstrumentPartyRole_189.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_189);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_395;
      FIX::InstrumentPartySubID InstrumentPartySubID_395("STRING_170921327");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_395);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_395.insert(InstrumentPartySubID_395.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_395(311082546);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_395);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_395.insert(InstrumentPartySubIDType_395.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_395);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradeCaptureReportAck::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_211;
    FIX::SecurityAltID SecurityAltID_211("STRING_492207574");
    noSecurityAltID_0_0.set(SecurityAltID_211);
    SecAltIDGrp_NoSecurityAltID_211.insert(SecurityAltID_211.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_211("STRING_1668251503");
    noSecurityAltID_0_0.set(SecurityAltIDSource_211);
    SecAltIDGrp_NoSecurityAltID_211.insert(SecurityAltIDSource_211.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_211);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_192;
  FIX::SecurityXML SecurityXML_193("XMLDATA_315572659");
  msg.set(SecurityXML_193);
  FIX::SecurityXMLLen SecurityXMLLen_96(1726009370);
  msg.set(SecurityXMLLen_96);
  FIX::SecurityXMLSchema SecurityXMLSchema_96("STRING_277326206");
  msg.set(SecurityXMLSchema_96);
  SecurityXML_192.insert(SecurityXMLSchema_96.getString());
  all_values.push_back(SecurityXML_192);

  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::TradeCaptureReportAck::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_13;
    FIX::PosAmt PosAmt_13;
    PosAmt_13.setString("3411085");
    noPosAmt_0_0.set(PosAmt_13);
    PositionAmountData_NoPosAmt_13.insert(PosAmt_13.getString());
    FIX::PosAmtType PosAmtType_13("STRING_CASH");
    noPosAmt_0_0.set(PosAmtType_13);
    PositionAmountData_NoPosAmt_13.insert(PosAmtType_13.getString());
    FIX::PositionCurrency PositionCurrency_13("STRING_1544168669");
    noPosAmt_0_0.set(PositionCurrency_13);
    PositionAmountData_NoPosAmt_13.insert(PositionCurrency_13.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_13);

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_14;
    FIX::PosAmt PosAmt_14;
    PosAmt_14.setString("5817047");
    noPosAmt_0_1.set(PosAmt_14);
    PositionAmountData_NoPosAmt_14.insert(PosAmt_14.getString());
    FIX::PosAmtType PosAmtType_14("STRING_CRES");
    noPosAmt_0_1.set(PosAmtType_14);
    PositionAmountData_NoPosAmt_14.insert(PosAmtType_14.getString());
    FIX::PositionCurrency PositionCurrency_14("STRING_468353644");
    noPosAmt_0_1.set(PositionCurrency_14);
    PositionAmountData_NoPosAmt_14.insert(PositionCurrency_14.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_14);

    msg.addGroup(noPosAmt_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoPosAmt noPosAmt_0_2;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_15;
    FIX::PosAmt PosAmt_15;
    PosAmt_15.setString("15009111");
    noPosAmt_0_2.set(PosAmt_15);
    PositionAmountData_NoPosAmt_15.insert(PosAmt_15.getString());
    FIX::PosAmtType PosAmtType_15("STRING_IMTM");
    noPosAmt_0_2.set(PosAmtType_15);
    PositionAmountData_NoPosAmt_15.insert(PosAmtType_15.getString());
    FIX::PositionCurrency PositionCurrency_15("STRING_414142876");
    noPosAmt_0_2.set(PositionCurrency_15);
    PositionAmountData_NoPosAmt_15.insert(PositionCurrency_15.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_15);

    msg.addGroup(noPosAmt_0_2);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_16;
    FIX::RootPartyID RootPartyID_16("STRING_976141697");
    noRootPartyIDs_0_0.set(RootPartyID_16);
    RootParties_NoRootPartyIDs_16.insert(RootPartyID_16.getString());
    FIX::RootPartyIDSource RootPartyIDSource_16('3');
    noRootPartyIDs_0_0.set(RootPartyIDSource_16);
    RootParties_NoRootPartyIDs_16.insert(RootPartyIDSource_16.getString());
    FIX::RootPartyRole RootPartyRole_16(1023614150);
    noRootPartyIDs_0_0.set(RootPartyRole_16);
    RootParties_NoRootPartyIDs_16.insert(RootPartyRole_16.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_16);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_36;
      FIX::RootPartySubID RootPartySubID_36("STRING_1942701155");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_36);
      RootSubParties_NoRootPartySubIDs_36.insert(RootPartySubID_36.getString());
      FIX::RootPartySubIDType RootPartySubIDType_36(1284496041);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_36);
      RootSubParties_NoRootPartySubIDs_36.insert(RootPartySubIDType_36.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_36);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_17;
    FIX::RootPartyID RootPartyID_17("STRING_1966473949");
    noRootPartyIDs_0_1.set(RootPartyID_17);
    RootParties_NoRootPartyIDs_17.insert(RootPartyID_17.getString());
    FIX::RootPartyIDSource RootPartyIDSource_17('1');
    noRootPartyIDs_0_1.set(RootPartyIDSource_17);
    RootParties_NoRootPartyIDs_17.insert(RootPartyIDSource_17.getString());
    FIX::RootPartyRole RootPartyRole_17(35175324);
    noRootPartyIDs_0_1.set(RootPartyRole_17);
    RootParties_NoRootPartyIDs_17.insert(RootPartyRole_17.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_17);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_37;
      FIX::RootPartySubID RootPartySubID_37("STRING_80943595");
      noRootPartySubIDs_1_1_0.set(RootPartySubID_37);
      RootSubParties_NoRootPartySubIDs_37.insert(RootPartySubID_37.getString());
      FIX::RootPartySubIDType RootPartySubIDType_37(40932681);
      noRootPartySubIDs_1_1_0.set(RootPartySubIDType_37);
      RootSubParties_NoRootPartySubIDs_37.insert(RootPartySubIDType_37.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_37);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_1);
  }
  // TrdCapRptAckSideGrp
  // Group TrdCapRptAckSideGrp.NoSides
  {
    FIX50SP2::TradeCaptureReportAck::NoSides noSides_0_0;
    // TrdCapRptAckSideGrp.NoSides
    multiset<string> TrdCapRptAckSideGrp_NoSides_0;
    FIX::Account Account_41("STRING_392026141");
    noSides_0_0.set(Account_41);
    TrdCapRptAckSideGrp_NoSides_0.insert(Account_41.getString());
    FIX::AccountType AccountType_36(1);
    noSides_0_0.set(AccountType_36);
    TrdCapRptAckSideGrp_NoSides_0.insert(AccountType_36.getString());
    FIX::AccruedInterestAmt AccruedInterestAmt_11;
    AccruedInterestAmt_11.setString("5633469");
    noSides_0_0.set(AccruedInterestAmt_11);
    TrdCapRptAckSideGrp_NoSides_0.insert(AccruedInterestAmt_11.getString());
    FIX::AccruedInterestRate AccruedInterestRate_6;
    AccruedInterestRate_6.setString("76.440000");
    noSides_0_0.set(AccruedInterestRate_6);
    TrdCapRptAckSideGrp_NoSides_0.insert(AccruedInterestRate_6.getString());
    FIX::AcctIDSource AcctIDSource_34(2);
    noSides_0_0.set(AcctIDSource_34);
    TrdCapRptAckSideGrp_NoSides_0.insert(AcctIDSource_34.getString());
    FIX::AggressorIndicator AggressorIndicator_2(true);
    noSides_0_0.set(AggressorIndicator_2);
    TrdCapRptAckSideGrp_NoSides_0.insert(AggressorIndicator_2.getString());
    FIX::AllocID AllocID_18("STRING_190120203");
    noSides_0_0.set(AllocID_18);
    TrdCapRptAckSideGrp_NoSides_0.insert(AllocID_18.getString());
    FIX::ComplianceID ComplianceID_13("STRING_1815467106");
    noSides_0_0.set(ComplianceID_13);
    TrdCapRptAckSideGrp_NoSides_0.insert(ComplianceID_13.getString());
    FIX::Concession Concession_6;
    Concession_6.setString("4829811");
    noSides_0_0.set(Concession_6);
    TrdCapRptAckSideGrp_NoSides_0.insert(Concession_6.getString());
    FIX::CustOrderCapacity CustOrderCapacity_17(4);
    noSides_0_0.set(CustOrderCapacity_17);
    TrdCapRptAckSideGrp_NoSides_0.insert(CustOrderCapacity_17.getString());
    FIX::EndAccruedInterestAmt EndAccruedInterestAmt_11;
    EndAccruedInterestAmt_11.setString("12121521");
    noSides_0_0.set(EndAccruedInterestAmt_11);
    TrdCapRptAckSideGrp_NoSides_0.insert(EndAccruedInterestAmt_11.getString());
    FIX::EndCash EndCash_11;
    EndCash_11.setString("10646859");
    noSides_0_0.set(EndCash_11);
    TrdCapRptAckSideGrp_NoSides_0.insert(EndCash_11.getString());
    FIX::ExDate ExDate_3("LOCALMKTDATE_1569739904");
    noSides_0_0.set(ExDate_3);
    TrdCapRptAckSideGrp_NoSides_0.insert(ExDate_3.getString());
    FIX::ExchangeRule ExchangeRule_1("STRING_1680505771");
    noSides_0_0.set(ExchangeRule_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(ExchangeRule_1.getString());
    FIX::InterestAtMaturity InterestAtMaturity_6;
    InterestAtMaturity_6.setString("4181134");
    noSides_0_0.set(InterestAtMaturity_6);
    TrdCapRptAckSideGrp_NoSides_0.insert(InterestAtMaturity_6.getString());
    FIX::NetGrossInd NetGrossInd_6(2);
    noSides_0_0.set(NetGrossInd_6);
    TrdCapRptAckSideGrp_NoSides_0.insert(NetGrossInd_6.getString());
    FIX::NetMoney NetMoney_6;
    NetMoney_6.setString("20946486");
    noSides_0_0.set(NetMoney_6);
    TrdCapRptAckSideGrp_NoSides_0.insert(NetMoney_6.getString());
    FIX::NumDaysInterest NumDaysInterest_6(683287421);
    noSides_0_0.set(NumDaysInterest_6);
    TrdCapRptAckSideGrp_NoSides_0.insert(NumDaysInterest_6.getString());
    FIX::OddLot OddLot_1(false);
    noSides_0_0.set(OddLot_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(OddLot_1.getString());
    FIX::OrderCategory OrderCategory_2('1');
    noSides_0_0.set(OrderCategory_2);
    TrdCapRptAckSideGrp_NoSides_0.insert(OrderCategory_2.getString());
    FIX::OrderDelay OrderDelay_1(1706901571);
    noSides_0_0.set(OrderDelay_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(OrderDelay_1.getString());
    FIX::OrderDelayUnit OrderDelayUnit_1(10);
    noSides_0_0.set(OrderDelayUnit_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(OrderDelayUnit_1.getString());
    FIX::PositionEffect PositionEffect_14('R');
    noSides_0_0.set(PositionEffect_14);
    TrdCapRptAckSideGrp_NoSides_0.insert(PositionEffect_14.getString());
    FIX::PreallocMethod PreallocMethod_11('1');
    noSides_0_0.set(PreallocMethod_11);
    TrdCapRptAckSideGrp_NoSides_0.insert(PreallocMethod_11.getString());
    FIX::ProcessCode ProcessCode_15('5');
    noSides_0_0.set(ProcessCode_15);
    TrdCapRptAckSideGrp_NoSides_0.insert(ProcessCode_15.getString());
    FIX::RptSeq RptSeq_4(1357907790);
    noSides_0_0.set(RptSeq_4);
    TrdCapRptAckSideGrp_NoSides_0.insert(RptSeq_4.getString());
    FIX::SettlCurrAmt SettlCurrAmt_12;
    SettlCurrAmt_12.setString("8790892");
    noSides_0_0.set(SettlCurrAmt_12);
    TrdCapRptAckSideGrp_NoSides_0.insert(SettlCurrAmt_12.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_12;
    SettlCurrFxRate_12.setString("18203685");
    noSides_0_0.set(SettlCurrFxRate_12);
    TrdCapRptAckSideGrp_NoSides_0.insert(SettlCurrFxRate_12.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_12('D');
    noSides_0_0.set(SettlCurrFxRateCalc_12);
    TrdCapRptAckSideGrp_NoSides_0.insert(SettlCurrFxRateCalc_12.getString());
    FIX::Side Side_45('3');
    noSides_0_0.set(Side_45);
    TrdCapRptAckSideGrp_NoSides_0.insert(Side_45.getString());
    FIX::SideCurrency SideCurrency_1("CHF");
    noSides_0_0.set(SideCurrency_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideCurrency_1.getString());
    FIX::SideExecID SideExecID_1("STRING_1495035066");
    noSides_0_0.set(SideExecID_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideExecID_1.getString());
    FIX::SideFillStationCd SideFillStationCd_1("STRING_307371196");
    noSides_0_0.set(SideFillStationCd_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideFillStationCd_1.getString());
    FIX::SideGrossTradeAmt SideGrossTradeAmt_1;
    SideGrossTradeAmt_1.setString("17436715");
    noSides_0_0.set(SideGrossTradeAmt_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideGrossTradeAmt_1.getString());
    FIX::SideLastQty SideLastQty_1(238137173);
    noSides_0_0.set(SideLastQty_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideLastQty_1.getString());
    FIX::SideMultiLegReportingType SideMultiLegReportingType_1(3);
    noSides_0_0.set(SideMultiLegReportingType_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideMultiLegReportingType_1.getString());
    FIX::SideReasonCd SideReasonCd_1("STRING_1933791726");
    noSides_0_0.set(SideReasonCd_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideReasonCd_1.getString());
    FIX::SideSettlCurrency SideSettlCurrency_1("USD");
    noSides_0_0.set(SideSettlCurrency_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideSettlCurrency_1.getString());
    FIX::SideTradeReportID SideTradeReportID_1("STRING_1792857133");
    noSides_0_0.set(SideTradeReportID_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideTradeReportID_1.getString());
    FIX::SideTrdSubTyp SideTrdSubTyp_1(1118272758);
    noSides_0_0.set(SideTrdSubTyp_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(SideTrdSubTyp_1.getString());
    FIX::SolicitedFlag SolicitedFlag_11(false);
    noSides_0_0.set(SolicitedFlag_11);
    TrdCapRptAckSideGrp_NoSides_0.insert(SolicitedFlag_11.getString());
    FIX::StartCash StartCash_11;
    StartCash_11.setString("12151133");
    noSides_0_0.set(StartCash_11);
    TrdCapRptAckSideGrp_NoSides_0.insert(StartCash_11.getString());
    FIX::TimeBracket TimeBracket_2("STRING_651294882");
    noSides_0_0.set(TimeBracket_2);
    TrdCapRptAckSideGrp_NoSides_0.insert(TimeBracket_2.getString());
    FIX::TotalTakedown TotalTakedown_6;
    TotalTakedown_6.setString("2675407");
    noSides_0_0.set(TotalTakedown_6);
    TrdCapRptAckSideGrp_NoSides_0.insert(TotalTakedown_6.getString());
    FIX::TradeAllocIndicator TradeAllocIndicator_1(5);
    noSides_0_0.set(TradeAllocIndicator_1);
    TrdCapRptAckSideGrp_NoSides_0.insert(TradeAllocIndicator_1.getString());
    FIX::TradeInputDevice TradeInputDevice_2("STRING_598459881");
    noSides_0_0.set(TradeInputDevice_2);
    TrdCapRptAckSideGrp_NoSides_0.insert(TradeInputDevice_2.getString());
    FIX::TradeInputSource TradeInputSource_4("STRING_950828151");
    noSides_0_0.set(TradeInputSource_4);
    TrdCapRptAckSideGrp_NoSides_0.insert(TradeInputSource_4.getString());
    FIX::TradingSessionID TradingSessionID_91("STRING_3");
    noSides_0_0.set(TradingSessionID_91);
    TrdCapRptAckSideGrp_NoSides_0.insert(TradingSessionID_91.getString());
    FIX::TradingSessionSubID TradingSessionSubID_91("STRING_7");
    noSides_0_0.set(TradingSessionSubID_91);
    TrdCapRptAckSideGrp_NoSides_0.insert(TradingSessionSubID_91.getString());
    all_values.push_back(TrdCapRptAckSideGrp_NoSides_0);

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_14;
      FIX::ClearingInstruction ClearingInstruction_14(7);
      noClearingInstructions_0_1_0.set(ClearingInstruction_14);
      ClrInstGrp_NoClearingInstructions_14.insert(ClearingInstruction_14.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_14);

      noSides_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoClearingInstructions noClearingInstructions_0_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_15;
      FIX::ClearingInstruction ClearingInstruction_15(7);
      noClearingInstructions_0_1_1.set(ClearingInstruction_15);
      ClrInstGrp_NoClearingInstructions_15.insert(ClearingInstruction_15.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_15);

      noSides_0_0.addGroup(noClearingInstructions_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoClearingInstructions noClearingInstructions_0_1_2;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_16;
      FIX::ClearingInstruction ClearingInstruction_16(1);
      noClearingInstructions_0_1_2.set(ClearingInstruction_16);
      ClrInstGrp_NoClearingInstructions_16.insert(ClearingInstruction_16.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_16);

      noSides_0_0.addGroup(noClearingInstructions_0_1_2);
    }
    // CommissionData
    multiset<string> CommissionData_19;
    FIX::CommCurrency CommCurrency_19("USD");
    noSides_0_0.set(CommCurrency_19);
    CommissionData_19.insert(CommCurrency_19.getString());
    FIX::CommType CommType_22('1');
    noSides_0_0.set(CommType_22);
    CommissionData_19.insert(CommType_22.getString());
    FIX::Commission Commission_22;
    Commission_22.setString("12432738");
    noSides_0_0.set(Commission_22);
    CommissionData_19.insert(Commission_22.getString());
    FIX::FundRenewWaiv FundRenewWaiv_19('Y');
    noSides_0_0.set(FundRenewWaiv_19);
    CommissionData_19.insert(FundRenewWaiv_19.getString());
    all_values.push_back(CommissionData_19);

    // ContAmtGrp
    // Group ContAmtGrp.NoContAmts
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoContAmts noContAmts_0_1_0;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_3;
      FIX::ContAmtCurr ContAmtCurr_3("GBP");
      noContAmts_0_1_0.set(ContAmtCurr_3);
      ContAmtGrp_NoContAmts_3.insert(ContAmtCurr_3.getString());
      FIX::ContAmtType ContAmtType_3(14);
      noContAmts_0_1_0.set(ContAmtType_3);
      ContAmtGrp_NoContAmts_3.insert(ContAmtType_3.getString());
      FIX::ContAmtValue ContAmtValue_3;
      ContAmtValue_3.setString("12946693");
      noContAmts_0_1_0.set(ContAmtValue_3);
      ContAmtGrp_NoContAmts_3.insert(ContAmtValue_3.getString());
      all_values.push_back(ContAmtGrp_NoContAmts_3);

      noSides_0_0.addGroup(noContAmts_0_1_0);
    }
    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_25;
      FIX::MiscFeeAmt MiscFeeAmt_25;
      MiscFeeAmt_25.setString("5914762");
      noMiscFees_0_1_0.set(MiscFeeAmt_25);
      MiscFeesGrp_NoMiscFees_25.insert(MiscFeeAmt_25.getString());
      FIX::MiscFeeBasis MiscFeeBasis_25(0);
      noMiscFees_0_1_0.set(MiscFeeBasis_25);
      MiscFeesGrp_NoMiscFees_25.insert(MiscFeeBasis_25.getString());
      FIX::MiscFeeCurr MiscFeeCurr_25("USD");
      noMiscFees_0_1_0.set(MiscFeeCurr_25);
      MiscFeesGrp_NoMiscFees_25.insert(MiscFeeCurr_25.getString());
      FIX::MiscFeeType MiscFeeType_25("STRING_10");
      noMiscFees_0_1_0.set(MiscFeeType_25);
      MiscFeesGrp_NoMiscFees_25.insert(MiscFeeType_25.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_25);

      noSides_0_0.addGroup(noMiscFees_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoMiscFees noMiscFees_0_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_26;
      FIX::MiscFeeAmt MiscFeeAmt_26;
      MiscFeeAmt_26.setString("2814924");
      noMiscFees_0_1_1.set(MiscFeeAmt_26);
      MiscFeesGrp_NoMiscFees_26.insert(MiscFeeAmt_26.getString());
      FIX::MiscFeeBasis MiscFeeBasis_26(1);
      noMiscFees_0_1_1.set(MiscFeeBasis_26);
      MiscFeesGrp_NoMiscFees_26.insert(MiscFeeBasis_26.getString());
      FIX::MiscFeeCurr MiscFeeCurr_26("JPY");
      noMiscFees_0_1_1.set(MiscFeeCurr_26);
      MiscFeesGrp_NoMiscFees_26.insert(MiscFeeCurr_26.getString());
      FIX::MiscFeeType MiscFeeType_26("STRING_4");
      noMiscFees_0_1_1.set(MiscFeeType_26);
      MiscFeesGrp_NoMiscFees_26.insert(MiscFeeType_26.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_26);

      noSides_0_0.addGroup(noMiscFees_0_1_1);
    }
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_142;
      FIX::PartyID PartyID_142("STRING_390630703");
      noPartyIDs_0_1_0.set(PartyID_142);
      Parties_NoPartyIDs_142.insert(PartyID_142.getString());
      FIX::PartyIDSource PartyIDSource_142('8');
      noPartyIDs_0_1_0.set(PartyIDSource_142);
      Parties_NoPartyIDs_142.insert(PartyIDSource_142.getString());
      FIX::PartyRole PartyRole_142(44);
      noPartyIDs_0_1_0.set(PartyRole_142);
      Parties_NoPartyIDs_142.insert(PartyRole_142.getString());
      all_values.push_back(Parties_NoPartyIDs_142);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_287;
        FIX::PartySubID PartySubID_287("STRING_1580238744");
        noPartySubIDs_0_0_2_0.set(PartySubID_287);
        PtysSubGrp_NoPartySubIDs_287.insert(PartySubID_287.getString());
        FIX::PartySubIDType PartySubIDType_287(9);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_287);
        PtysSubGrp_NoPartySubIDs_287.insert(PartySubIDType_287.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_287);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_288;
        FIX::PartySubID PartySubID_288("STRING_1884914283");
        noPartySubIDs_0_0_2_1.set(PartySubID_288);
        PtysSubGrp_NoPartySubIDs_288.insert(PartySubID_288.getString());
        FIX::PartySubIDType PartySubIDType_288(1);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_288);
        PtysSubGrp_NoPartySubIDs_288.insert(PartySubIDType_288.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_288);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_289;
        FIX::PartySubID PartySubID_289("STRING_1313373168");
        noPartySubIDs_0_0_2_2.set(PartySubID_289);
        PtysSubGrp_NoPartySubIDs_289.insert(PartySubID_289.getString());
        FIX::PartySubIDType PartySubIDType_289(6);
        noPartySubIDs_0_0_2_2.set(PartySubIDType_289);
        PtysSubGrp_NoPartySubIDs_289.insert(PartySubIDType_289.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_289);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails noSettlDetails_0_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_8;
      FIX::SettlObligSource SettlObligSource_8('1');
      noSettlDetails_0_1_0.set(SettlObligSource_8);
      SettlDetails_NoSettlDetails_8.insert(SettlObligSource_8.getString());
      all_values.push_back(SettlDetails_NoSettlDetails_8);

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_64;
        FIX::SettlPartyID SettlPartyID_64("STRING_2055315631");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_64);
        SettlParties_NoSettlPartyIDs_64.insert(SettlPartyID_64.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_64('2');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_64);
        SettlParties_NoSettlPartyIDs_64.insert(SettlPartyIDSource_64.getString());
        FIX::SettlPartyRole SettlPartyRole_64(1390907788);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_64);
        SettlParties_NoSettlPartyIDs_64.insert(SettlPartyRole_64.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_64);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_140;
          FIX::SettlPartySubID SettlPartySubID_140("STRING_610781919");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_140);
          SettlPtysSubGrp_NoSettlPartySubIDs_140.insert(SettlPartySubID_140.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_140(538093443);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_140);
          SettlPtysSubGrp_NoSettlPartySubIDs_140.insert(SettlPartySubIDType_140.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_140);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_141;
          FIX::SettlPartySubID SettlPartySubID_141("STRING_2011265916");
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubID_141);
          SettlPtysSubGrp_NoSettlPartySubIDs_141.insert(SettlPartySubID_141.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_141(1202258161);
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubIDType_141);
          SettlPtysSubGrp_NoSettlPartySubIDs_141.insert(SettlPartySubIDType_141.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_141);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_142;
          FIX::SettlPartySubID SettlPartySubID_142("STRING_134522926");
          noSettlPartySubIDs_0_0_0_3_2.set(SettlPartySubID_142);
          SettlPtysSubGrp_NoSettlPartySubIDs_142.insert(SettlPartySubID_142.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_142(499901250);
          noSettlPartySubIDs_0_0_0_3_2.set(SettlPartySubIDType_142);
          SettlPtysSubGrp_NoSettlPartySubIDs_142.insert(SettlPartySubIDType_142.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_142);

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_2);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_65;
        FIX::SettlPartyID SettlPartyID_65("STRING_1699855033");
        noSettlPartyIDs_0_0_2_1.set(SettlPartyID_65);
        SettlParties_NoSettlPartyIDs_65.insert(SettlPartyID_65.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_65('6');
        noSettlPartyIDs_0_0_2_1.set(SettlPartyIDSource_65);
        SettlParties_NoSettlPartyIDs_65.insert(SettlPartyIDSource_65.getString());
        FIX::SettlPartyRole SettlPartyRole_65(781393718);
        noSettlPartyIDs_0_0_2_1.set(SettlPartyRole_65);
        SettlParties_NoSettlPartyIDs_65.insert(SettlPartyRole_65.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_65);

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_143;
          FIX::SettlPartySubID SettlPartySubID_143("STRING_1041259247");
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubID_143);
          SettlPtysSubGrp_NoSettlPartySubIDs_143.insert(SettlPartySubID_143.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_143(130515928);
          noSettlPartySubIDs_0_0_1_3_0.set(SettlPartySubIDType_143);
          SettlPtysSubGrp_NoSettlPartySubIDs_143.insert(SettlPartySubIDType_143.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_143);

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
      }
      noSides_0_0.addGroup(noSettlDetails_0_1_0);
    }
    // SideTrdRegTS
    // Group SideTrdRegTS.NoSideTrdRegTS
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSideTrdRegTS noSideTrdRegTS_0_1_0;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_3;
      FIX::SideTrdRegTimestamp SideTrdRegTimestamp_3(FIX::UTCTIMESTAMP(0, 8, 12, 6, 1, 2012));
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestamp_3);
      SideTrdRegTS_NoSideTrdRegTS_3.insert(SideTrdRegTimestamp_3.getString());
      FIX::SideTrdRegTimestampSrc SideTrdRegTimestampSrc_3("STRING_345769617");
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestampSrc_3);
      SideTrdRegTS_NoSideTrdRegTS_3.insert(SideTrdRegTimestampSrc_3.getString());
      FIX::SideTrdRegTimestampType SideTrdRegTimestampType_3(1792526442);
      noSideTrdRegTS_0_1_0.set(SideTrdRegTimestampType_3);
      SideTrdRegTS_NoSideTrdRegTS_3.insert(SideTrdRegTimestampType_3.getString());
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_3);

      noSides_0_0.addGroup(noSideTrdRegTS_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSideTrdRegTS noSideTrdRegTS_0_1_1;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_4;
      FIX::SideTrdRegTimestamp SideTrdRegTimestamp_4(FIX::UTCTIMESTAMP(20, 16, 29, 25, 5, 2004));
      noSideTrdRegTS_0_1_1.set(SideTrdRegTimestamp_4);
      SideTrdRegTS_NoSideTrdRegTS_4.insert(SideTrdRegTimestamp_4.getString());
      FIX::SideTrdRegTimestampSrc SideTrdRegTimestampSrc_4("STRING_1300622945");
      noSideTrdRegTS_0_1_1.set(SideTrdRegTimestampSrc_4);
      SideTrdRegTS_NoSideTrdRegTS_4.insert(SideTrdRegTimestampSrc_4.getString());
      FIX::SideTrdRegTimestampType SideTrdRegTimestampType_4(1199416272);
      noSideTrdRegTS_0_1_1.set(SideTrdRegTimestampType_4);
      SideTrdRegTS_NoSideTrdRegTS_4.insert(SideTrdRegTimestampType_4.getString());
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_4);

      noSides_0_0.addGroup(noSideTrdRegTS_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSideTrdRegTS noSideTrdRegTS_0_1_2;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_5;
      FIX::SideTrdRegTimestamp SideTrdRegTimestamp_5(FIX::UTCTIMESTAMP(20, 40, 12, 19, 11, 2012));
      noSideTrdRegTS_0_1_2.set(SideTrdRegTimestamp_5);
      SideTrdRegTS_NoSideTrdRegTS_5.insert(SideTrdRegTimestamp_5.getString());
      FIX::SideTrdRegTimestampSrc SideTrdRegTimestampSrc_5("STRING_488933093");
      noSideTrdRegTS_0_1_2.set(SideTrdRegTimestampSrc_5);
      SideTrdRegTS_NoSideTrdRegTS_5.insert(SideTrdRegTimestampSrc_5.getString());
      FIX::SideTrdRegTimestampType SideTrdRegTimestampType_5(197009861);
      noSideTrdRegTS_0_1_2.set(SideTrdRegTimestampType_5);
      SideTrdRegTS_NoSideTrdRegTS_5.insert(SideTrdRegTimestampType_5.getString());
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_5);

      noSides_0_0.addGroup(noSideTrdRegTS_0_1_2);
    }
    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_56;
      FIX::StipulationType StipulationType_56("STRING_MININCR");
      noStipulations_0_1_0.set(StipulationType_56);
      Stipulations_NoStipulations_56.insert(StipulationType_56.getString());
      FIX::StipulationValue StipulationValue_56("STRING_327525789");
      noStipulations_0_1_0.set(StipulationValue_56);
      Stipulations_NoStipulations_56.insert(StipulationValue_56.getString());
      all_values.push_back(Stipulations_NoStipulations_56);

      noSides_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_57;
      FIX::StipulationType StipulationType_57("STRING_PRICE");
      noStipulations_0_1_1.set(StipulationType_57);
      Stipulations_NoStipulations_57.insert(StipulationType_57.getString());
      FIX::StipulationValue StipulationValue_57("STRING_1069590490");
      noStipulations_0_1_1.set(StipulationValue_57);
      Stipulations_NoStipulations_57.insert(StipulationValue_57.getString());
      all_values.push_back(Stipulations_NoStipulations_57);

      noSides_0_0.addGroup(noStipulations_0_1_1);
    }
    // TradeReportOrderDetail
    multiset<string> TradeReportOrderDetail_1;
    FIX::BookingType BookingType_28(0);
    noSides_0_0.set(BookingType_28);
    TradeReportOrderDetail_1.insert(BookingType_28.getString());
    FIX::ClOrdID ClOrdID_47("STRING_1302719248");
    noSides_0_0.set(ClOrdID_47);
    TradeReportOrderDetail_1.insert(ClOrdID_47.getString());
    FIX::CumQty CumQty_5;
    CumQty_5.setString("579556");
    noSides_0_0.set(CumQty_5);
    TradeReportOrderDetail_1.insert(CumQty_5.getString());
    FIX::ExecInst ExecInst_12("MULTIPLECHARVALUE_h");
    noSides_0_0.set(ExecInst_12);
    TradeReportOrderDetail_1.insert(ExecInst_12.getString());
    FIX::ExpireTime ExpireTime_25(FIX::UTCTIMESTAMP(2, 20, 19, 3, 10, 2017));
    noSides_0_0.set(ExpireTime_25);
    TradeReportOrderDetail_1.insert(ExpireTime_25.getString());
    FIX::LeavesQty LeavesQty_4;
    LeavesQty_4.setString("9265758");
    noSides_0_0.set(LeavesQty_4);
    TradeReportOrderDetail_1.insert(LeavesQty_4.getString());
    FIX::ListID ListID_24("STRING_1218601654");
    noSides_0_0.set(ListID_24);
    TradeReportOrderDetail_1.insert(ListID_24.getString());
    FIX::LotType LotType_26('4');
    noSides_0_0.set(LotType_26);
    TradeReportOrderDetail_1.insert(LotType_26.getString());
    FIX::OrdStatus OrdStatus_5('3');
    noSides_0_0.set(OrdStatus_5);
    TradeReportOrderDetail_1.insert(OrdStatus_5.getString());
    FIX::OrdType OrdType_72('9');
    noSides_0_0.set(OrdType_72);
    TradeReportOrderDetail_1.insert(OrdType_72.getString());
    FIX::OrderCapacity OrderCapacity_31('P');
    noSides_0_0.set(OrderCapacity_31);
    TradeReportOrderDetail_1.insert(OrderCapacity_31.getString());
    FIX::OrderID OrderID_34("STRING_1077456899");
    noSides_0_0.set(OrderID_34);
    TradeReportOrderDetail_1.insert(OrderID_34.getString());
    FIX::OrderInputDevice OrderInputDevice_1("STRING_62973692");
    noSides_0_0.set(OrderInputDevice_1);
    TradeReportOrderDetail_1.insert(OrderInputDevice_1.getString());
    FIX::OrderRestrictions OrderRestrictions_29("MULTIPLECHARVALUE_F");
    noSides_0_0.set(OrderRestrictions_29);
    TradeReportOrderDetail_1.insert(OrderRestrictions_29.getString());
    FIX::OrigCustOrderCapacity OrigCustOrderCapacity_1(1);
    noSides_0_0.set(OrigCustOrderCapacity_1);
    TradeReportOrderDetail_1.insert(OrigCustOrderCapacity_1.getString());
    FIX::OrigOrdModTime OrigOrdModTime_7(FIX::UTCTIMESTAMP(10, 22, 12, 7, 9, 2016));
    noSides_0_0.set(OrigOrdModTime_7);
    TradeReportOrderDetail_1.insert(OrigOrdModTime_7.getString());
    FIX::Price Price_25;
    Price_25.setString("4624696");
    noSides_0_0.set(Price_25);
    TradeReportOrderDetail_1.insert(Price_25.getString());
    FIX::RefOrdIDReason RefOrdIDReason_1(1);
    noSides_0_0.set(RefOrdIDReason_1);
    TradeReportOrderDetail_1.insert(RefOrdIDReason_1.getString());
    FIX::RefOrderID RefOrderID_5("STRING_829961634");
    noSides_0_0.set(RefOrderID_5);
    TradeReportOrderDetail_1.insert(RefOrderID_5.getString());
    FIX::RefOrderIDSource RefOrderIDSource_5('4');
    noSides_0_0.set(RefOrderIDSource_5);
    TradeReportOrderDetail_1.insert(RefOrderIDSource_5.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_40("STRING_256634508");
    noSides_0_0.set(SecondaryClOrdID_40);
    TradeReportOrderDetail_1.insert(SecondaryClOrdID_40.getString());
    FIX::SecondaryOrderID SecondaryOrderID_25("STRING_887917328");
    noSides_0_0.set(SecondaryOrderID_25);
    TradeReportOrderDetail_1.insert(SecondaryOrderID_25.getString());
    FIX::StopPx StopPx_10;
    StopPx_10.setString("6206697");
    noSides_0_0.set(StopPx_10);
    TradeReportOrderDetail_1.insert(StopPx_10.getString());
    FIX::TimeInForce TimeInForce_48('3');
    noSides_0_0.set(TimeInForce_48);
    TradeReportOrderDetail_1.insert(TimeInForce_48.getString());
    FIX::TransBkdTime TransBkdTime_5(FIX::UTCTIMESTAMP(18, 52, 10, 11, 4, 2006));
    noSides_0_0.set(TransBkdTime_5);
    TradeReportOrderDetail_1.insert(TransBkdTime_5.getString());
    all_values.push_back(TradeReportOrderDetail_1);

    // DisplayInstruction
    multiset<string> DisplayInstruction_10;
    FIX::DisplayHighQty DisplayHighQty_10;
    DisplayHighQty_10.setString("6559716");
    noSides_0_0.set(DisplayHighQty_10);
    DisplayInstruction_10.insert(DisplayHighQty_10.getString());
    FIX::DisplayLowQty DisplayLowQty_10;
    DisplayLowQty_10.setString("18661960");
    noSides_0_0.set(DisplayLowQty_10);
    DisplayInstruction_10.insert(DisplayLowQty_10.getString());
    FIX::DisplayMethod DisplayMethod_10('3');
    noSides_0_0.set(DisplayMethod_10);
    DisplayInstruction_10.insert(DisplayMethod_10.getString());
    FIX::DisplayMinIncr DisplayMinIncr_10;
    DisplayMinIncr_10.setString("10277126");
    noSides_0_0.set(DisplayMinIncr_10);
    DisplayInstruction_10.insert(DisplayMinIncr_10.getString());
    FIX::DisplayQty DisplayQty_10;
    DisplayQty_10.setString("13253152");
    noSides_0_0.set(DisplayQty_10);
    DisplayInstruction_10.insert(DisplayQty_10.getString());
    FIX::DisplayWhen DisplayWhen_10('2');
    noSides_0_0.set(DisplayWhen_10);
    DisplayInstruction_10.insert(DisplayWhen_10.getString());
    FIX::RefreshQty RefreshQty_10;
    RefreshQty_10.setString("10906863");
    noSides_0_0.set(RefreshQty_10);
    DisplayInstruction_10.insert(RefreshQty_10.getString());
    FIX::SecondaryDisplayQty SecondaryDisplayQty_10;
    SecondaryDisplayQty_10.setString("18476331");
    noSides_0_0.set(SecondaryDisplayQty_10);
    DisplayInstruction_10.insert(SecondaryDisplayQty_10.getString());
    all_values.push_back(DisplayInstruction_10);

    // OrderQtyData
    multiset<string> OrderQtyData_24;
    FIX::CashOrderQty CashOrderQty_24;
    CashOrderQty_24.setString("2261743");
    noSides_0_0.set(CashOrderQty_24);
    OrderQtyData_24.insert(CashOrderQty_24.getString());
    FIX::OrderPercent OrderPercent_24;
    OrderPercent_24.setString("56.690000");
    noSides_0_0.set(OrderPercent_24);
    OrderQtyData_24.insert(OrderPercent_24.getString());
    FIX::OrderQty OrderQty_35;
    OrderQty_35.setString("17855670");
    noSides_0_0.set(OrderQty_35);
    OrderQtyData_24.insert(OrderQty_35.getString());
    FIX::RoundingDirection RoundingDirection_24('2');
    noSides_0_0.set(RoundingDirection_24);
    OrderQtyData_24.insert(RoundingDirection_24.getString());
    FIX::RoundingModulus RoundingModulus_24;
    RoundingModulus_24.setString("13570781");
    noSides_0_0.set(RoundingModulus_24);
    OrderQtyData_24.insert(RoundingModulus_24.getString());
    all_values.push_back(OrderQtyData_24);

    // TrdAllocGrp
    // Group TrdAllocGrp.NoAllocs
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs noAllocs_0_1_0;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_1;
      FIX::AllocAccount AllocAccount_33("STRING_1531956864");
      noAllocs_0_1_0.set(AllocAccount_33);
      TrdAllocGrp_NoAllocs_1.insert(AllocAccount_33.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_33(1117449266);
      noAllocs_0_1_0.set(AllocAcctIDSource_33);
      TrdAllocGrp_NoAllocs_1.insert(AllocAcctIDSource_33.getString());
      FIX::AllocClearingFeeIndicator AllocClearingFeeIndicator_1("STRING_235496851");
      noAllocs_0_1_0.set(AllocClearingFeeIndicator_1);
      TrdAllocGrp_NoAllocs_1.insert(AllocClearingFeeIndicator_1.getString());
      FIX::AllocCustomerCapacity AllocCustomerCapacity_11("STRING_485872124");
      noAllocs_0_1_0.set(AllocCustomerCapacity_11);
      TrdAllocGrp_NoAllocs_1.insert(AllocCustomerCapacity_11.getString());
      FIX::AllocMethod AllocMethod_7(1);
      noAllocs_0_1_0.set(AllocMethod_7);
      TrdAllocGrp_NoAllocs_1.insert(AllocMethod_7.getString());
      FIX::AllocQty AllocQty_31;
      AllocQty_31.setString("15466388");
      noAllocs_0_1_0.set(AllocQty_31);
      TrdAllocGrp_NoAllocs_1.insert(AllocQty_31.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_26("CHF");
      noAllocs_0_1_0.set(AllocSettlCurrency_26);
      TrdAllocGrp_NoAllocs_1.insert(AllocSettlCurrency_26.getString());
      FIX::IndividualAllocID IndividualAllocID_32("STRING_19825027");
      noAllocs_0_1_0.set(IndividualAllocID_32);
      TrdAllocGrp_NoAllocs_1.insert(IndividualAllocID_32.getString());
      FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_11("STRING_1593194466");
      noAllocs_0_1_0.set(SecondaryIndividualAllocID_11);
      TrdAllocGrp_NoAllocs_1.insert(SecondaryIndividualAllocID_11.getString());
      all_values.push_back(TrdAllocGrp_NoAllocs_1);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_71;
        FIX::Nested2PartyID Nested2PartyID_71("STRING_295792189");
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyID_71);
        NestedParties2_NoNested2PartyIDs_71.insert(Nested2PartyID_71.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_71('5');
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyIDSource_71);
        NestedParties2_NoNested2PartyIDs_71.insert(Nested2PartyIDSource_71.getString());
        FIX::Nested2PartyRole Nested2PartyRole_71(1888716466);
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyRole_71);
        NestedParties2_NoNested2PartyIDs_71.insert(Nested2PartyRole_71.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_71);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_140;
          FIX::Nested2PartySubID Nested2PartySubID_140("STRING_1994504117");
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubID_140);
          NstdPtys2SubGrp_NoNested2PartySubIDs_140.insert(Nested2PartySubID_140.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_140(1975229224);
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubIDType_140);
          NstdPtys2SubGrp_NoNested2PartySubIDs_140.insert(Nested2PartySubIDType_140.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_140);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_141;
          FIX::Nested2PartySubID Nested2PartySubID_141("STRING_389133865");
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubID_141);
          NstdPtys2SubGrp_NoNested2PartySubIDs_141.insert(Nested2PartySubID_141.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_141(1713216472);
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubIDType_141);
          NstdPtys2SubGrp_NoNested2PartySubIDs_141.insert(Nested2PartySubIDType_141.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_141);

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
      FIX::AllocAccount AllocAccount_34("STRING_610883762");
      noAllocs_0_1_1.set(AllocAccount_34);
      TrdAllocGrp_NoAllocs_2.insert(AllocAccount_34.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_34(1416846483);
      noAllocs_0_1_1.set(AllocAcctIDSource_34);
      TrdAllocGrp_NoAllocs_2.insert(AllocAcctIDSource_34.getString());
      FIX::AllocClearingFeeIndicator AllocClearingFeeIndicator_2("STRING_891048107");
      noAllocs_0_1_1.set(AllocClearingFeeIndicator_2);
      TrdAllocGrp_NoAllocs_2.insert(AllocClearingFeeIndicator_2.getString());
      FIX::AllocCustomerCapacity AllocCustomerCapacity_12("STRING_323995200");
      noAllocs_0_1_1.set(AllocCustomerCapacity_12);
      TrdAllocGrp_NoAllocs_2.insert(AllocCustomerCapacity_12.getString());
      FIX::AllocMethod AllocMethod_8(3);
      noAllocs_0_1_1.set(AllocMethod_8);
      TrdAllocGrp_NoAllocs_2.insert(AllocMethod_8.getString());
      FIX::AllocQty AllocQty_32;
      AllocQty_32.setString("5911975");
      noAllocs_0_1_1.set(AllocQty_32);
      TrdAllocGrp_NoAllocs_2.insert(AllocQty_32.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_27("JPY");
      noAllocs_0_1_1.set(AllocSettlCurrency_27);
      TrdAllocGrp_NoAllocs_2.insert(AllocSettlCurrency_27.getString());
      FIX::IndividualAllocID IndividualAllocID_33("STRING_229280977");
      noAllocs_0_1_1.set(IndividualAllocID_33);
      TrdAllocGrp_NoAllocs_2.insert(IndividualAllocID_33.getString());
      FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_12("STRING_277384097");
      noAllocs_0_1_1.set(SecondaryIndividualAllocID_12);
      TrdAllocGrp_NoAllocs_2.insert(SecondaryIndividualAllocID_12.getString());
      all_values.push_back(TrdAllocGrp_NoAllocs_2);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_72;
        FIX::Nested2PartyID Nested2PartyID_72("STRING_2308216");
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyID_72);
        NestedParties2_NoNested2PartyIDs_72.insert(Nested2PartyID_72.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_72('1');
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyIDSource_72);
        NestedParties2_NoNested2PartyIDs_72.insert(Nested2PartyIDSource_72.getString());
        FIX::Nested2PartyRole Nested2PartyRole_72(1666508555);
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyRole_72);
        NestedParties2_NoNested2PartyIDs_72.insert(Nested2PartyRole_72.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_72);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_142;
          FIX::Nested2PartySubID Nested2PartySubID_142("STRING_147729437");
          noNested2PartySubIDs_0_1_0_3_0.set(Nested2PartySubID_142);
          NstdPtys2SubGrp_NoNested2PartySubIDs_142.insert(Nested2PartySubID_142.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_142(1466435808);
          noNested2PartySubIDs_0_1_0_3_0.set(Nested2PartySubIDType_142);
          NstdPtys2SubGrp_NoNested2PartySubIDs_142.insert(Nested2PartySubIDType_142.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_142);

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_143;
          FIX::Nested2PartySubID Nested2PartySubID_143("STRING_1784443953");
          noNested2PartySubIDs_0_1_0_3_1.set(Nested2PartySubID_143);
          NstdPtys2SubGrp_NoNested2PartySubIDs_143.insert(Nested2PartySubID_143.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_143(890236070);
          noNested2PartySubIDs_0_1_0_3_1.set(Nested2PartySubIDType_143);
          NstdPtys2SubGrp_NoNested2PartySubIDs_143.insert(Nested2PartySubIDType_143.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_143);

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_144;
          FIX::Nested2PartySubID Nested2PartySubID_144("STRING_6796741");
          noNested2PartySubIDs_0_1_0_3_2.set(Nested2PartySubID_144);
          NstdPtys2SubGrp_NoNested2PartySubIDs_144.insert(Nested2PartySubID_144.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_144(1804268980);
          noNested2PartySubIDs_0_1_0_3_2.set(Nested2PartySubIDType_144);
          NstdPtys2SubGrp_NoNested2PartySubIDs_144.insert(Nested2PartySubIDType_144.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_144);

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_2);
        }
        noAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_73;
        FIX::Nested2PartyID Nested2PartyID_73("STRING_335946888");
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyID_73);
        NestedParties2_NoNested2PartyIDs_73.insert(Nested2PartyID_73.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_73('5');
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyIDSource_73);
        NestedParties2_NoNested2PartyIDs_73.insert(Nested2PartyIDSource_73.getString());
        FIX::Nested2PartyRole Nested2PartyRole_73(2100061169);
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyRole_73);
        NestedParties2_NoNested2PartyIDs_73.insert(Nested2PartyRole_73.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_73);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_145;
          FIX::Nested2PartySubID Nested2PartySubID_145("STRING_329325496");
          noNested2PartySubIDs_0_1_1_3_0.set(Nested2PartySubID_145);
          NstdPtys2SubGrp_NoNested2PartySubIDs_145.insert(Nested2PartySubID_145.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_145(1833223369);
          noNested2PartySubIDs_0_1_1_3_0.set(Nested2PartySubIDType_145);
          NstdPtys2SubGrp_NoNested2PartySubIDs_145.insert(Nested2PartySubIDType_145.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_145);

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_146;
          FIX::Nested2PartySubID Nested2PartySubID_146("STRING_718462128");
          noNested2PartySubIDs_0_1_1_3_1.set(Nested2PartySubID_146);
          NstdPtys2SubGrp_NoNested2PartySubIDs_146.insert(Nested2PartySubID_146.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_146(157071073);
          noNested2PartySubIDs_0_1_1_3_1.set(Nested2PartySubIDType_146);
          NstdPtys2SubGrp_NoNested2PartySubIDs_146.insert(Nested2PartySubIDType_146.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_146);

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_147;
          FIX::Nested2PartySubID Nested2PartySubID_147("STRING_74873586");
          noNested2PartySubIDs_0_1_1_3_2.set(Nested2PartySubID_147);
          NstdPtys2SubGrp_NoNested2PartySubIDs_147.insert(Nested2PartySubID_147.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_147(284194952);
          noNested2PartySubIDs_0_1_1_3_2.set(Nested2PartySubIDType_147);
          NstdPtys2SubGrp_NoNested2PartySubIDs_147.insert(Nested2PartySubIDType_147.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_147);

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_2);
        }
        noAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_74;
        FIX::Nested2PartyID Nested2PartyID_74("STRING_767954835");
        noNested2PartyIDs_0_1_2_2.set(Nested2PartyID_74);
        NestedParties2_NoNested2PartyIDs_74.insert(Nested2PartyID_74.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_74('1');
        noNested2PartyIDs_0_1_2_2.set(Nested2PartyIDSource_74);
        NestedParties2_NoNested2PartyIDs_74.insert(Nested2PartyIDSource_74.getString());
        FIX::Nested2PartyRole Nested2PartyRole_74(1175243059);
        noNested2PartyIDs_0_1_2_2.set(Nested2PartyRole_74);
        NestedParties2_NoNested2PartyIDs_74.insert(Nested2PartyRole_74.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_74);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_148;
          FIX::Nested2PartySubID Nested2PartySubID_148("STRING_1851769214");
          noNested2PartySubIDs_0_1_2_3_0.set(Nested2PartySubID_148);
          NstdPtys2SubGrp_NoNested2PartySubIDs_148.insert(Nested2PartySubID_148.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_148(1766440620);
          noNested2PartySubIDs_0_1_2_3_0.set(Nested2PartySubIDType_148);
          NstdPtys2SubGrp_NoNested2PartySubIDs_148.insert(Nested2PartySubIDType_148.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_148);

          noNested2PartyIDs_0_1_2_2.addGroup(noNested2PartySubIDs_0_1_2_3_0);
        }
        noAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_2);
      }
      noSides_0_0.addGroup(noAllocs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs noAllocs_0_1_2;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_3;
      FIX::AllocAccount AllocAccount_35("STRING_1642119557");
      noAllocs_0_1_2.set(AllocAccount_35);
      TrdAllocGrp_NoAllocs_3.insert(AllocAccount_35.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_35(1043750381);
      noAllocs_0_1_2.set(AllocAcctIDSource_35);
      TrdAllocGrp_NoAllocs_3.insert(AllocAcctIDSource_35.getString());
      FIX::AllocClearingFeeIndicator AllocClearingFeeIndicator_3("STRING_1995721597");
      noAllocs_0_1_2.set(AllocClearingFeeIndicator_3);
      TrdAllocGrp_NoAllocs_3.insert(AllocClearingFeeIndicator_3.getString());
      FIX::AllocCustomerCapacity AllocCustomerCapacity_13("STRING_1919503654");
      noAllocs_0_1_2.set(AllocCustomerCapacity_13);
      TrdAllocGrp_NoAllocs_3.insert(AllocCustomerCapacity_13.getString());
      FIX::AllocMethod AllocMethod_9(2);
      noAllocs_0_1_2.set(AllocMethod_9);
      TrdAllocGrp_NoAllocs_3.insert(AllocMethod_9.getString());
      FIX::AllocQty AllocQty_33;
      AllocQty_33.setString("19980298");
      noAllocs_0_1_2.set(AllocQty_33);
      TrdAllocGrp_NoAllocs_3.insert(AllocQty_33.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_28("JPY");
      noAllocs_0_1_2.set(AllocSettlCurrency_28);
      TrdAllocGrp_NoAllocs_3.insert(AllocSettlCurrency_28.getString());
      FIX::IndividualAllocID IndividualAllocID_34("STRING_88351233");
      noAllocs_0_1_2.set(IndividualAllocID_34);
      TrdAllocGrp_NoAllocs_3.insert(IndividualAllocID_34.getString());
      FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_13("STRING_1729090404");
      noAllocs_0_1_2.set(SecondaryIndividualAllocID_13);
      TrdAllocGrp_NoAllocs_3.insert(SecondaryIndividualAllocID_13.getString());
      all_values.push_back(TrdAllocGrp_NoAllocs_3);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_75;
        FIX::Nested2PartyID Nested2PartyID_75("STRING_1872795186");
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyID_75);
        NestedParties2_NoNested2PartyIDs_75.insert(Nested2PartyID_75.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_75('4');
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyIDSource_75);
        NestedParties2_NoNested2PartyIDs_75.insert(Nested2PartyIDSource_75.getString());
        FIX::Nested2PartyRole Nested2PartyRole_75(437583478);
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyRole_75);
        NestedParties2_NoNested2PartyIDs_75.insert(Nested2PartyRole_75.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_75);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_149;
          FIX::Nested2PartySubID Nested2PartySubID_149("STRING_807789715");
          noNested2PartySubIDs_0_2_0_3_0.set(Nested2PartySubID_149);
          NstdPtys2SubGrp_NoNested2PartySubIDs_149.insert(Nested2PartySubID_149.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_149(1025676156);
          noNested2PartySubIDs_0_2_0_3_0.set(Nested2PartySubIDType_149);
          NstdPtys2SubGrp_NoNested2PartySubIDs_149.insert(Nested2PartySubIDType_149.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_149);

          noNested2PartyIDs_0_2_2_0.addGroup(noNested2PartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_150;
          FIX::Nested2PartySubID Nested2PartySubID_150("STRING_1482158039");
          noNested2PartySubIDs_0_2_0_3_1.set(Nested2PartySubID_150);
          NstdPtys2SubGrp_NoNested2PartySubIDs_150.insert(Nested2PartySubID_150.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_150(1679231374);
          noNested2PartySubIDs_0_2_0_3_1.set(Nested2PartySubIDType_150);
          NstdPtys2SubGrp_NoNested2PartySubIDs_150.insert(Nested2PartySubIDType_150.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_150);

          noNested2PartyIDs_0_2_2_0.addGroup(noNested2PartySubIDs_0_2_0_3_1);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_151;
          FIX::Nested2PartySubID Nested2PartySubID_151("STRING_1355001652");
          noNested2PartySubIDs_0_2_0_3_2.set(Nested2PartySubID_151);
          NstdPtys2SubGrp_NoNested2PartySubIDs_151.insert(Nested2PartySubID_151.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_151(1167897760);
          noNested2PartySubIDs_0_2_0_3_2.set(Nested2PartySubIDType_151);
          NstdPtys2SubGrp_NoNested2PartySubIDs_151.insert(Nested2PartySubIDType_151.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_151);

          noNested2PartyIDs_0_2_2_0.addGroup(noNested2PartySubIDs_0_2_0_3_2);
        }
        noAllocs_0_1_2.addGroup(noNested2PartyIDs_0_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_76;
        FIX::Nested2PartyID Nested2PartyID_76("STRING_250209854");
        noNested2PartyIDs_0_2_2_1.set(Nested2PartyID_76);
        NestedParties2_NoNested2PartyIDs_76.insert(Nested2PartyID_76.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_76('1');
        noNested2PartyIDs_0_2_2_1.set(Nested2PartyIDSource_76);
        NestedParties2_NoNested2PartyIDs_76.insert(Nested2PartyIDSource_76.getString());
        FIX::Nested2PartyRole Nested2PartyRole_76(1242771346);
        noNested2PartyIDs_0_2_2_1.set(Nested2PartyRole_76);
        NestedParties2_NoNested2PartyIDs_76.insert(Nested2PartyRole_76.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_76);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_152;
          FIX::Nested2PartySubID Nested2PartySubID_152("STRING_132543913");
          noNested2PartySubIDs_0_2_1_3_0.set(Nested2PartySubID_152);
          NstdPtys2SubGrp_NoNested2PartySubIDs_152.insert(Nested2PartySubID_152.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_152(587007768);
          noNested2PartySubIDs_0_2_1_3_0.set(Nested2PartySubIDType_152);
          NstdPtys2SubGrp_NoNested2PartySubIDs_152.insert(Nested2PartySubIDType_152.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_152);

          noNested2PartyIDs_0_2_2_1.addGroup(noNested2PartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_153;
          FIX::Nested2PartySubID Nested2PartySubID_153("STRING_1709647866");
          noNested2PartySubIDs_0_2_1_3_1.set(Nested2PartySubID_153);
          NstdPtys2SubGrp_NoNested2PartySubIDs_153.insert(Nested2PartySubID_153.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_153(1224493948);
          noNested2PartySubIDs_0_2_1_3_1.set(Nested2PartySubIDType_153);
          NstdPtys2SubGrp_NoNested2PartySubIDs_153.insert(Nested2PartySubIDType_153.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_153);

          noNested2PartyIDs_0_2_2_1.addGroup(noNested2PartySubIDs_0_2_1_3_1);
        }
        noAllocs_0_1_2.addGroup(noNested2PartyIDs_0_2_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_77;
        FIX::Nested2PartyID Nested2PartyID_77("STRING_291293334");
        noNested2PartyIDs_0_2_2_2.set(Nested2PartyID_77);
        NestedParties2_NoNested2PartyIDs_77.insert(Nested2PartyID_77.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_77('1');
        noNested2PartyIDs_0_2_2_2.set(Nested2PartyIDSource_77);
        NestedParties2_NoNested2PartyIDs_77.insert(Nested2PartyIDSource_77.getString());
        FIX::Nested2PartyRole Nested2PartyRole_77(719129857);
        noNested2PartyIDs_0_2_2_2.set(Nested2PartyRole_77);
        NestedParties2_NoNested2PartyIDs_77.insert(Nested2PartyRole_77.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_77);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_154;
          FIX::Nested2PartySubID Nested2PartySubID_154("STRING_1176842788");
          noNested2PartySubIDs_0_2_2_3_0.set(Nested2PartySubID_154);
          NstdPtys2SubGrp_NoNested2PartySubIDs_154.insert(Nested2PartySubID_154.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_154(491149863);
          noNested2PartySubIDs_0_2_2_3_0.set(Nested2PartySubIDType_154);
          NstdPtys2SubGrp_NoNested2PartySubIDs_154.insert(Nested2PartySubIDType_154.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_154);

          noNested2PartyIDs_0_2_2_2.addGroup(noNested2PartySubIDs_0_2_2_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_155;
          FIX::Nested2PartySubID Nested2PartySubID_155("STRING_780369737");
          noNested2PartySubIDs_0_2_2_3_1.set(Nested2PartySubID_155);
          NstdPtys2SubGrp_NoNested2PartySubIDs_155.insert(Nested2PartySubID_155.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_155(1027388953);
          noNested2PartySubIDs_0_2_2_3_1.set(Nested2PartySubIDType_155);
          NstdPtys2SubGrp_NoNested2PartySubIDs_155.insert(Nested2PartySubIDType_155.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_155);

          noNested2PartyIDs_0_2_2_2.addGroup(noNested2PartySubIDs_0_2_2_3_1);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_156;
          FIX::Nested2PartySubID Nested2PartySubID_156("STRING_2072510830");
          noNested2PartySubIDs_0_2_2_3_2.set(Nested2PartySubID_156);
          NstdPtys2SubGrp_NoNested2PartySubIDs_156.insert(Nested2PartySubID_156.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_156(1892204313);
          noNested2PartySubIDs_0_2_2_3_2.set(Nested2PartySubIDType_156);
          NstdPtys2SubGrp_NoNested2PartySubIDs_156.insert(Nested2PartySubIDType_156.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_156);

          noNested2PartyIDs_0_2_2_2.addGroup(noNested2PartySubIDs_0_2_2_3_2);
        }
        noAllocs_0_1_2.addGroup(noNested2PartyIDs_0_2_2_2);
      }
      noSides_0_0.addGroup(noAllocs_0_1_2);
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
    LegCalculatedCcyLastQty_6.setString("16541175");
    noLegs_0_0.set(LegCalculatedCcyLastQty_6);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegCalculatedCcyLastQty_6.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_12(175507402);
    noLegs_0_0.set(LegCoveredOrUncovered_12);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegCoveredOrUncovered_12.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_12;
    LegCurrencyRatio_12.setString("8410517");
    noLegs_0_0.set(LegCurrencyRatio_12);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegCurrencyRatio_12.getString());
    FIX::LegDividendYield LegDividendYield_12;
    LegDividendYield_12.setString("4.140000");
    noLegs_0_0.set(LegDividendYield_12);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegDividendYield_12.getString());
    FIX::LegExecInst LegExecInst_12("MULTIPLECHARVALUE_613090880");
    noLegs_0_0.set(LegExecInst_12);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegExecInst_12.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_6;
    LegGrossTradeAmt_6.setString("2231485");
    noLegs_0_0.set(LegGrossTradeAmt_6);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegGrossTradeAmt_6.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_6;
    LegLastForwardPoints_6.setString("7862664");
    noLegs_0_0.set(LegLastForwardPoints_6);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegLastForwardPoints_6.getString());
    FIX::LegLastPx LegLastPx_6;
    LegLastPx_6.setString("16387670");
    noLegs_0_0.set(LegLastPx_6);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegLastPx_6.getString());
    FIX::LegLastQty LegLastQty_6;
    LegLastQty_6.setString("17053066");
    noLegs_0_0.set(LegLastQty_6);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegLastQty_6.getString());
    FIX::LegNumber LegNumber_3(318014207);
    noLegs_0_0.set(LegNumber_3);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegNumber_3.getString());
    FIX::LegPositionEffect LegPositionEffect_12('8');
    noLegs_0_0.set(LegPositionEffect_12);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegPositionEffect_12.getString());
    FIX::LegQty LegQty_27;
    LegQty_27.setString("7257207");
    noLegs_0_0.set(LegQty_27);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegQty_27.getString());
    FIX::LegRefID LegRefID_24("STRING_568224061");
    noLegs_0_0.set(LegRefID_24);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegRefID_24.getString());
    FIX::LegReportID LegReportID_3("STRING_210874118");
    noLegs_0_0.set(LegReportID_3);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegReportID_3.getString());
    FIX::LegSettlCurrency LegSettlCurrency_12("USD");
    noLegs_0_0.set(LegSettlCurrency_12);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegSettlCurrency_12.getString());
    FIX::LegSettlDate LegSettlDate_27("LOCALMKTDATE_343418031");
    noLegs_0_0.set(LegSettlDate_27);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegSettlDate_27.getString());
    FIX::LegSettlType LegSettlType_34('4');
    noLegs_0_0.set(LegSettlType_34);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegSettlType_34.getString());
    FIX::LegSwapType LegSwapType_34(4);
    noLegs_0_0.set(LegSwapType_34);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegSwapType_34.getString());
    FIX::LegVolatility LegVolatility_12;
    LegVolatility_12.setString("15679119");
    noLegs_0_0.set(LegVolatility_12);
    TrdInstrmtLegGrp_NoLegs_3.insert(LegVolatility_12.getString());
    all_values.push_back(TrdInstrmtLegGrp_NoLegs_3);

    // InstrumentLeg
    multiset<string> InstrumentLeg_144;
    FIX::EncodedLegIssuer EncodedLegIssuer_144("DATA_699309546");
    noLegs_0_0.set(EncodedLegIssuer_144);
    InstrumentLeg_144.insert(EncodedLegIssuer_144.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_144(1993397924);
    noLegs_0_0.set(EncodedLegIssuerLen_144);
    InstrumentLeg_144.insert(EncodedLegIssuerLen_144.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_144("DATA_139558189");
    noLegs_0_0.set(EncodedLegSecurityDesc_144);
    InstrumentLeg_144.insert(EncodedLegSecurityDesc_144.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_144(2034353262);
    noLegs_0_0.set(EncodedLegSecurityDescLen_144);
    InstrumentLeg_144.insert(EncodedLegSecurityDescLen_144.getString());
    FIX::LegCFICode LegCFICode_144("STRING_1022757064");
    noLegs_0_0.set(LegCFICode_144);
    InstrumentLeg_144.insert(LegCFICode_144.getString());
    FIX::LegContractMultiplier LegContractMultiplier_144;
    LegContractMultiplier_144.setString("6307080");
    noLegs_0_0.set(LegContractMultiplier_144);
    InstrumentLeg_144.insert(LegContractMultiplier_144.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_144(667239351);
    noLegs_0_0.set(LegContractMultiplierUnit_144);
    InstrumentLeg_144.insert(LegContractMultiplierUnit_144.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_144("MONTHYEAR_2050146018");
    noLegs_0_0.set(LegContractSettlMonth_144);
    InstrumentLeg_144.insert(LegContractSettlMonth_144.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_144("COUNTRY_555735235");
    noLegs_0_0.set(LegCountryOfIssue_144);
    InstrumentLeg_144.insert(LegCountryOfIssue_144.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_144("LOCALMKTDATE_411960016");
    noLegs_0_0.set(LegCouponPaymentDate_144);
    InstrumentLeg_144.insert(LegCouponPaymentDate_144.getString());
    FIX::LegCouponRate LegCouponRate_144;
    LegCouponRate_144.setString("25.560000");
    noLegs_0_0.set(LegCouponRate_144);
    InstrumentLeg_144.insert(LegCouponRate_144.getString());
    FIX::LegCreditRating LegCreditRating_144("STRING_62369174");
    noLegs_0_0.set(LegCreditRating_144);
    InstrumentLeg_144.insert(LegCreditRating_144.getString());
    FIX::LegCurrency LegCurrency_144("CAN");
    noLegs_0_0.set(LegCurrency_144);
    InstrumentLeg_144.insert(LegCurrency_144.getString());
    FIX::LegDatedDate LegDatedDate_144("LOCALMKTDATE_40845940");
    noLegs_0_0.set(LegDatedDate_144);
    InstrumentLeg_144.insert(LegDatedDate_144.getString());
    FIX::LegExerciseStyle LegExerciseStyle_144(1200558298);
    noLegs_0_0.set(LegExerciseStyle_144);
    InstrumentLeg_144.insert(LegExerciseStyle_144.getString());
    FIX::LegFactor LegFactor_144;
    LegFactor_144.setString("20826028");
    noLegs_0_0.set(LegFactor_144);
    InstrumentLeg_144.insert(LegFactor_144.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_144(827112421);
    noLegs_0_0.set(LegFlowScheduleType_144);
    InstrumentLeg_144.insert(LegFlowScheduleType_144.getString());
    FIX::LegInstrRegistry LegInstrRegistry_144("STRING_691841686");
    noLegs_0_0.set(LegInstrRegistry_144);
    InstrumentLeg_144.insert(LegInstrRegistry_144.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_144("LOCALMKTDATE_1640425861");
    noLegs_0_0.set(LegInterestAccrualDate_144);
    InstrumentLeg_144.insert(LegInterestAccrualDate_144.getString());
    FIX::LegIssueDate LegIssueDate_144("LOCALMKTDATE_1145126629");
    noLegs_0_0.set(LegIssueDate_144);
    InstrumentLeg_144.insert(LegIssueDate_144.getString());
    FIX::LegIssuer LegIssuer_144("STRING_1538126727");
    noLegs_0_0.set(LegIssuer_144);
    InstrumentLeg_144.insert(LegIssuer_144.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_144("STRING_218662958");
    noLegs_0_0.set(LegLocaleOfIssue_144);
    InstrumentLeg_144.insert(LegLocaleOfIssue_144.getString());
    FIX::LegMaturityDate LegMaturityDate_144("LOCALMKTDATE_1713350690");
    noLegs_0_0.set(LegMaturityDate_144);
    InstrumentLeg_144.insert(LegMaturityDate_144.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_144("MONTHYEAR_1749000845");
    noLegs_0_0.set(LegMaturityMonthYear_144);
    InstrumentLeg_144.insert(LegMaturityMonthYear_144.getString());
    FIX::LegMaturityTime LegMaturityTime_144("TZTIMEONLY_39671402");
    noLegs_0_0.set(LegMaturityTime_144);
    InstrumentLeg_144.insert(LegMaturityTime_144.getString());
    FIX::LegOptAttribute LegOptAttribute_144('6');
    noLegs_0_0.set(LegOptAttribute_144);
    InstrumentLeg_144.insert(LegOptAttribute_144.getString());
    FIX::LegOptionRatio LegOptionRatio_144;
    LegOptionRatio_144.setString("20924188");
    noLegs_0_0.set(LegOptionRatio_144);
    InstrumentLeg_144.insert(LegOptionRatio_144.getString());
    FIX::LegPool LegPool_144("STRING_447687614");
    noLegs_0_0.set(LegPool_144);
    InstrumentLeg_144.insert(LegPool_144.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_144("STRING_1333288996");
    noLegs_0_0.set(LegPriceUnitOfMeasure_144);
    InstrumentLeg_144.insert(LegPriceUnitOfMeasure_144.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_144;
    LegPriceUnitOfMeasureQty_144.setString("15128472");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_144);
    InstrumentLeg_144.insert(LegPriceUnitOfMeasureQty_144.getString());
    FIX::LegProduct LegProduct_144(1146997161);
    noLegs_0_0.set(LegProduct_144);
    InstrumentLeg_144.insert(LegProduct_144.getString());
    FIX::LegPutOrCall LegPutOrCall_144(1179203273);
    noLegs_0_0.set(LegPutOrCall_144);
    InstrumentLeg_144.insert(LegPutOrCall_144.getString());
    FIX::LegRatioQty LegRatioQty_144;
    LegRatioQty_144.setString("16524053");
    noLegs_0_0.set(LegRatioQty_144);
    InstrumentLeg_144.insert(LegRatioQty_144.getString());
    FIX::LegRedemptionDate LegRedemptionDate_144("LOCALMKTDATE_1033866775");
    noLegs_0_0.set(LegRedemptionDate_144);
    InstrumentLeg_144.insert(LegRedemptionDate_144.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_144("STRING_54476689");
    noLegs_0_0.set(LegRepoCollateralSecurityType_144);
    InstrumentLeg_144.insert(LegRepoCollateralSecurityType_144.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_144;
    LegRepurchaseRate_144.setString("98.010000");
    noLegs_0_0.set(LegRepurchaseRate_144);
    InstrumentLeg_144.insert(LegRepurchaseRate_144.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_144(1701106126);
    noLegs_0_0.set(LegRepurchaseTerm_144);
    InstrumentLeg_144.insert(LegRepurchaseTerm_144.getString());
    FIX::LegSecurityDesc LegSecurityDesc_144("STRING_2104622707");
    noLegs_0_0.set(LegSecurityDesc_144);
    InstrumentLeg_144.insert(LegSecurityDesc_144.getString());
    FIX::LegSecurityExchange LegSecurityExchange_144("EXCHANGE_691365036");
    noLegs_0_0.set(LegSecurityExchange_144);
    InstrumentLeg_144.insert(LegSecurityExchange_144.getString());
    FIX::LegSecurityID LegSecurityID_144("STRING_2113066142");
    noLegs_0_0.set(LegSecurityID_144);
    InstrumentLeg_144.insert(LegSecurityID_144.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_144("STRING_975541616");
    noLegs_0_0.set(LegSecurityIDSource_144);
    InstrumentLeg_144.insert(LegSecurityIDSource_144.getString());
    FIX::LegSecuritySubType LegSecuritySubType_144("STRING_753734210");
    noLegs_0_0.set(LegSecuritySubType_144);
    InstrumentLeg_144.insert(LegSecuritySubType_144.getString());
    FIX::LegSecurityType LegSecurityType_144("STRING_553049913");
    noLegs_0_0.set(LegSecurityType_144);
    InstrumentLeg_144.insert(LegSecurityType_144.getString());
    FIX::LegSide LegSide_144('6');
    noLegs_0_0.set(LegSide_144);
    InstrumentLeg_144.insert(LegSide_144.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_144("STRING_794580150");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_144);
    InstrumentLeg_144.insert(LegStateOrProvinceOfIssue_144.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_144("JPY");
    noLegs_0_0.set(LegStrikeCurrency_144);
    InstrumentLeg_144.insert(LegStrikeCurrency_144.getString());
    FIX::LegStrikePrice LegStrikePrice_144;
    LegStrikePrice_144.setString("16216925");
    noLegs_0_0.set(LegStrikePrice_144);
    InstrumentLeg_144.insert(LegStrikePrice_144.getString());
    FIX::LegSymbol LegSymbol_144("STRING_297966250");
    noLegs_0_0.set(LegSymbol_144);
    InstrumentLeg_144.insert(LegSymbol_144.getString());
    FIX::LegSymbolSfx LegSymbolSfx_144("STRING_115573689");
    noLegs_0_0.set(LegSymbolSfx_144);
    InstrumentLeg_144.insert(LegSymbolSfx_144.getString());
    FIX::LegTimeUnit LegTimeUnit_144("STRING_619335552");
    noLegs_0_0.set(LegTimeUnit_144);
    InstrumentLeg_144.insert(LegTimeUnit_144.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_144("STRING_1836092977");
    noLegs_0_0.set(LegUnitOfMeasure_144);
    InstrumentLeg_144.insert(LegUnitOfMeasure_144.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_144;
    LegUnitOfMeasureQty_144.setString("3342366");
    noLegs_0_0.set(LegUnitOfMeasureQty_144);
    InstrumentLeg_144.insert(LegUnitOfMeasureQty_144.getString());
    all_values.push_back(InstrumentLeg_144);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_281;
      FIX::LegSecurityAltID LegSecurityAltID_281("STRING_1437610174");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_281);
      LegSecAltIDGrp_NoLegSecurityAltID_281.insert(LegSecurityAltID_281.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_281("STRING_373908050");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_281);
      LegSecAltIDGrp_NoLegSecurityAltID_281.insert(LegSecurityAltIDSource_281.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_281);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_282;
      FIX::LegSecurityAltID LegSecurityAltID_282("STRING_853698505");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_282);
      LegSecAltIDGrp_NoLegSecurityAltID_282.insert(LegSecurityAltID_282.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_282("STRING_1382545402");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_282);
      LegSecAltIDGrp_NoLegSecurityAltID_282.insert(LegSecurityAltIDSource_282.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_282);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_73;
      FIX::LegStipulationType LegStipulationType_73("STRING_39503854");
      noLegStipulations_0_1_0.set(LegStipulationType_73);
      LegStipulations_NoLegStipulations_73.insert(LegStipulationType_73.getString());
      FIX::LegStipulationValue LegStipulationValue_73("STRING_747908961");
      noLegStipulations_0_1_0.set(LegStipulationValue_73);
      LegStipulations_NoLegStipulations_73.insert(LegStipulationValue_73.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_73);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_74;
      FIX::LegStipulationType LegStipulationType_74("STRING_1968592826");
      noLegStipulations_0_1_1.set(LegStipulationType_74);
      LegStipulations_NoLegStipulations_74.insert(LegStipulationType_74.getString());
      FIX::LegStipulationValue LegStipulationValue_74("STRING_1218707127");
      noLegStipulations_0_1_1.set(LegStipulationValue_74);
      LegStipulations_NoLegStipulations_74.insert(LegStipulationValue_74.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_74);

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegStipulations noLegStipulations_0_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_75;
      FIX::LegStipulationType LegStipulationType_75("STRING_252830710");
      noLegStipulations_0_1_2.set(LegStipulationType_75);
      LegStipulations_NoLegStipulations_75.insert(LegStipulationType_75.getString());
      FIX::LegStipulationValue LegStipulationValue_75("STRING_854975953");
      noLegStipulations_0_1_2.set(LegStipulationValue_75);
      LegStipulations_NoLegStipulations_75.insert(LegStipulationValue_75.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_75);

      noLegs_0_0.addGroup(noLegStipulations_0_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_127;
      FIX::NestedPartyID NestedPartyID_127("STRING_388460511");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_127);
      NestedParties_NoNestedPartyIDs_127.insert(NestedPartyID_127.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_127('4');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_127);
      NestedParties_NoNestedPartyIDs_127.insert(NestedPartyIDSource_127.getString());
      FIX::NestedPartyRole NestedPartyRole_127(1230322876);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_127);
      NestedParties_NoNestedPartyIDs_127.insert(NestedPartyRole_127.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_127);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_248;
        FIX::NestedPartySubID NestedPartySubID_248("STRING_374180925");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_248);
        NstdPtysSubGrp_NoNestedPartySubIDs_248.insert(NestedPartySubID_248.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_248(58380844);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_248);
        NstdPtysSubGrp_NoNestedPartySubIDs_248.insert(NestedPartySubIDType_248.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_248);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_128;
      FIX::NestedPartyID NestedPartyID_128("STRING_1833559757");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_128);
      NestedParties_NoNestedPartyIDs_128.insert(NestedPartyID_128.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_128('9');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_128);
      NestedParties_NoNestedPartyIDs_128.insert(NestedPartyIDSource_128.getString());
      FIX::NestedPartyRole NestedPartyRole_128(745893093);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_128);
      NestedParties_NoNestedPartyIDs_128.insert(NestedPartyRole_128.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_128);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_249;
        FIX::NestedPartySubID NestedPartySubID_249("STRING_533355402");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_249);
        NstdPtysSubGrp_NoNestedPartySubIDs_249.insert(NestedPartySubID_249.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_249(1368524569);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_249);
        NstdPtysSubGrp_NoNestedPartySubIDs_249.insert(NestedPartySubIDType_249.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_249);

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
      multiset<string> UnderlyingLegInstrument_5;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_5("STRING_831321652");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegCFICode_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegCFICode_5.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_5("LOCALMKTDATE_1484098259");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityDate_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegMaturityDate_5.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_5("MONTHYEAR_574200735");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityMonthYear_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegMaturityMonthYear_5.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_5("TZTIMEONLY_519930981");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegMaturityTime_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegMaturityTime_5.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_5('1');
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegOptAttribute_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegOptAttribute_5.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_5(759403330);
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegPutOrCall_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegPutOrCall_5.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_5("STRING_1957541155");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityDesc_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSecurityDesc_5.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_5("STRING_44759309");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityExchange_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSecurityExchange_5.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_5("STRING_1613101835");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityID_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSecurityID_5.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_5("STRING_1192602909");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityIDSource_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSecurityIDSource_5.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_5("STRING_866354974");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecuritySubType_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSecuritySubType_5.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_5("STRING_1652605689");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSecurityType_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSecurityType_5.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_5;
      UnderlyingLegStrikePrice_5.setString("19405118");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegStrikePrice_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegStrikePrice_5.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_5("STRING_687464152");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSymbol_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSymbol_5.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_5("STRING_723829168");
      noOfLegUnderlyings_0_1_0.set(UnderlyingLegSymbolSfx_5);
      UnderlyingLegInstrument_5.insert(UnderlyingLegSymbolSfx_5.getString());
      all_values.push_back(UnderlyingLegInstrument_5);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_10;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_10("STRING_1542440105");
        noUnderlyingLegSecurityAltID_0_0_2_0.set(UnderlyingLegSecurityAltID_10);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_10.insert(UnderlyingLegSecurityAltID_10.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_10("STRING_1997012985");
        noUnderlyingLegSecurityAltID_0_0_2_0.set(UnderlyingLegSecurityAltIDSource_10);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_10.insert(UnderlyingLegSecurityAltIDSource_10.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_10);

        noOfLegUnderlyings_0_1_0.addGroup(noUnderlyingLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_11;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_11("STRING_434319443");
        noUnderlyingLegSecurityAltID_0_0_2_1.set(UnderlyingLegSecurityAltID_11);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_11.insert(UnderlyingLegSecurityAltID_11.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_11("STRING_1951038536");
        noUnderlyingLegSecurityAltID_0_0_2_1.set(UnderlyingLegSecurityAltIDSource_11);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_11.insert(UnderlyingLegSecurityAltIDSource_11.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_11);

        noOfLegUnderlyings_0_1_0.addGroup(noUnderlyingLegSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_2;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_12;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_12("STRING_1079852213");
        noUnderlyingLegSecurityAltID_0_0_2_2.set(UnderlyingLegSecurityAltID_12);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_12.insert(UnderlyingLegSecurityAltID_12.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_12("STRING_1514144990");
        noUnderlyingLegSecurityAltID_0_0_2_2.set(UnderlyingLegSecurityAltIDSource_12);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_12.insert(UnderlyingLegSecurityAltIDSource_12.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_12);

        noOfLegUnderlyings_0_1_0.addGroup(noUnderlyingLegSecurityAltID_0_0_2_2);
      }
      noLegs_0_0.addGroup(noOfLegUnderlyings_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_0_1_1;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_6;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_6("STRING_177735814");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegCFICode_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegCFICode_6.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_6("LOCALMKTDATE_1138233057");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegMaturityDate_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegMaturityDate_6.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_6("MONTHYEAR_1200221099");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegMaturityMonthYear_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegMaturityMonthYear_6.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_6("TZTIMEONLY_1104966652");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegMaturityTime_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegMaturityTime_6.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_6('1');
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegOptAttribute_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegOptAttribute_6.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_6(1680877358);
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegPutOrCall_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegPutOrCall_6.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_6("STRING_1638322054");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecurityDesc_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSecurityDesc_6.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_6("STRING_1105167071");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecurityExchange_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSecurityExchange_6.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_6("STRING_1635742541");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecurityID_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSecurityID_6.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_6("STRING_322160058");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecurityIDSource_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSecurityIDSource_6.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_6("STRING_441781682");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecuritySubType_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSecuritySubType_6.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_6("STRING_62459628");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSecurityType_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSecurityType_6.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_6;
      UnderlyingLegStrikePrice_6.setString("8420910");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegStrikePrice_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegStrikePrice_6.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_6("STRING_112632941");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSymbol_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSymbol_6.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_6("STRING_821862958");
      noOfLegUnderlyings_0_1_1.set(UnderlyingLegSymbolSfx_6);
      UnderlyingLegInstrument_6.insert(UnderlyingLegSymbolSfx_6.getString());
      all_values.push_back(UnderlyingLegInstrument_6);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_1_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_13;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_13("STRING_157392251");
        noUnderlyingLegSecurityAltID_0_1_2_0.set(UnderlyingLegSecurityAltID_13);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_13.insert(UnderlyingLegSecurityAltID_13.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_13("STRING_287481145");
        noUnderlyingLegSecurityAltID_0_1_2_0.set(UnderlyingLegSecurityAltIDSource_13);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_13.insert(UnderlyingLegSecurityAltIDSource_13.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_13);

        noOfLegUnderlyings_0_1_1.addGroup(noUnderlyingLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_1_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_14;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_14("STRING_1844751455");
        noUnderlyingLegSecurityAltID_0_1_2_1.set(UnderlyingLegSecurityAltID_14);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_14.insert(UnderlyingLegSecurityAltID_14.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_14("STRING_1023747225");
        noUnderlyingLegSecurityAltID_0_1_2_1.set(UnderlyingLegSecurityAltIDSource_14);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_14.insert(UnderlyingLegSecurityAltIDSource_14.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_14);

        noOfLegUnderlyings_0_1_1.addGroup(noUnderlyingLegSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_1_2_2;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_15;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_15("STRING_1940086835");
        noUnderlyingLegSecurityAltID_0_1_2_2.set(UnderlyingLegSecurityAltID_15);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_15.insert(UnderlyingLegSecurityAltID_15.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_15("STRING_1637779678");
        noUnderlyingLegSecurityAltID_0_1_2_2.set(UnderlyingLegSecurityAltIDSource_15);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_15.insert(UnderlyingLegSecurityAltIDSource_15.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_15);

        noOfLegUnderlyings_0_1_1.addGroup(noUnderlyingLegSecurityAltID_0_1_2_2);
      }
      noLegs_0_0.addGroup(noOfLegUnderlyings_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoLegs noLegs_0_1;
    // TrdInstrmtLegGrp.NoLegs
    multiset<string> TrdInstrmtLegGrp_NoLegs_4;
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_7;
    LegCalculatedCcyLastQty_7.setString("17112113");
    noLegs_0_1.set(LegCalculatedCcyLastQty_7);
    TrdInstrmtLegGrp_NoLegs_4.insert(LegCalculatedCcyLastQty_7.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_13(516432355);
    noLegs_0_1.set(LegCoveredOrUncovered_13);
    TrdInstrmtLegGrp_NoLegs_4.insert(LegCoveredOrUncovered_13.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_13;
    LegCurrencyRatio_13.setString("16836386");
    noLegs_0_1.set(LegCurrencyRatio_13);
    TrdInstrmtLegGrp_NoLegs_4.insert(LegCurrencyRatio_13.getString());
    FIX::LegDividendYield LegDividendYield_13;
    LegDividendYield_13.setString("78.350000");
    noLegs_0_1.set(LegDividendYield_13);
    TrdInstrmtLegGrp_NoLegs_4.insert(LegDividendYield_13.getString());
    FIX::LegExecInst LegExecInst_13("MULTIPLECHARVALUE_365961692");
    noLegs_0_1.set(LegExecInst_13);
    TrdInstrmtLegGrp_NoLegs_4.insert(LegExecInst_13.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_7;
    LegGrossTradeAmt_7.setString("21179580");
    noLegs_0_1.set(LegGrossTradeAmt_7);
    TrdInstrmtLegGrp_NoLegs_4.insert(LegGrossTradeAmt_7.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_7;
    LegLastForwardPoints_7.setString("9097227");
    noLegs_0_1.set(LegLastForwardPoints_7);
    TrdInstrmtLegGrp_NoLegs_4.insert(LegLastForwardPoints_7.getString());
    FIX::LegLastPx LegLastPx_7;
    LegLastPx_7.setString("14458139");
    noLegs_0_1.set(LegLastPx_7);
    TrdInstrmtLegGrp_NoLegs_4.insert(LegLastPx_7.getString());
    FIX::LegLastQty LegLastQty_7;
    LegLastQty_7.setString("14846193");
    noLegs_0_1.set(LegLastQty_7);
    TrdInstrmtLegGrp_NoLegs_4.insert(LegLastQty_7.getString());
    FIX::LegNumber LegNumber_4(1087458538);
    noLegs_0_1.set(LegNumber_4);
    TrdInstrmtLegGrp_NoLegs_4.insert(LegNumber_4.getString());
    FIX::LegPositionEffect LegPositionEffect_13('4');
    noLegs_0_1.set(LegPositionEffect_13);
    TrdInstrmtLegGrp_NoLegs_4.insert(LegPositionEffect_13.getString());
    FIX::LegQty LegQty_28;
    LegQty_28.setString("5373568");
    noLegs_0_1.set(LegQty_28);
    TrdInstrmtLegGrp_NoLegs_4.insert(LegQty_28.getString());
    FIX::LegRefID LegRefID_25("STRING_44941542");
    noLegs_0_1.set(LegRefID_25);
    TrdInstrmtLegGrp_NoLegs_4.insert(LegRefID_25.getString());
    FIX::LegReportID LegReportID_4("STRING_173205816");
    noLegs_0_1.set(LegReportID_4);
    TrdInstrmtLegGrp_NoLegs_4.insert(LegReportID_4.getString());
    FIX::LegSettlCurrency LegSettlCurrency_13("CAN");
    noLegs_0_1.set(LegSettlCurrency_13);
    TrdInstrmtLegGrp_NoLegs_4.insert(LegSettlCurrency_13.getString());
    FIX::LegSettlDate LegSettlDate_28("LOCALMKTDATE_1278372888");
    noLegs_0_1.set(LegSettlDate_28);
    TrdInstrmtLegGrp_NoLegs_4.insert(LegSettlDate_28.getString());
    FIX::LegSettlType LegSettlType_35('1');
    noLegs_0_1.set(LegSettlType_35);
    TrdInstrmtLegGrp_NoLegs_4.insert(LegSettlType_35.getString());
    FIX::LegSwapType LegSwapType_35(5);
    noLegs_0_1.set(LegSwapType_35);
    TrdInstrmtLegGrp_NoLegs_4.insert(LegSwapType_35.getString());
    FIX::LegVolatility LegVolatility_13;
    LegVolatility_13.setString("17201545");
    noLegs_0_1.set(LegVolatility_13);
    TrdInstrmtLegGrp_NoLegs_4.insert(LegVolatility_13.getString());
    all_values.push_back(TrdInstrmtLegGrp_NoLegs_4);

    // InstrumentLeg
    multiset<string> InstrumentLeg_145;
    FIX::EncodedLegIssuer EncodedLegIssuer_145("DATA_1768952727");
    noLegs_0_1.set(EncodedLegIssuer_145);
    InstrumentLeg_145.insert(EncodedLegIssuer_145.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_145(700031047);
    noLegs_0_1.set(EncodedLegIssuerLen_145);
    InstrumentLeg_145.insert(EncodedLegIssuerLen_145.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_145("DATA_1832787512");
    noLegs_0_1.set(EncodedLegSecurityDesc_145);
    InstrumentLeg_145.insert(EncodedLegSecurityDesc_145.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_145(443332037);
    noLegs_0_1.set(EncodedLegSecurityDescLen_145);
    InstrumentLeg_145.insert(EncodedLegSecurityDescLen_145.getString());
    FIX::LegCFICode LegCFICode_145("STRING_1352179593");
    noLegs_0_1.set(LegCFICode_145);
    InstrumentLeg_145.insert(LegCFICode_145.getString());
    FIX::LegContractMultiplier LegContractMultiplier_145;
    LegContractMultiplier_145.setString("19901797");
    noLegs_0_1.set(LegContractMultiplier_145);
    InstrumentLeg_145.insert(LegContractMultiplier_145.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_145(730813183);
    noLegs_0_1.set(LegContractMultiplierUnit_145);
    InstrumentLeg_145.insert(LegContractMultiplierUnit_145.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_145("MONTHYEAR_1049447401");
    noLegs_0_1.set(LegContractSettlMonth_145);
    InstrumentLeg_145.insert(LegContractSettlMonth_145.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_145("COUNTRY_866443340");
    noLegs_0_1.set(LegCountryOfIssue_145);
    InstrumentLeg_145.insert(LegCountryOfIssue_145.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_145("LOCALMKTDATE_523416370");
    noLegs_0_1.set(LegCouponPaymentDate_145);
    InstrumentLeg_145.insert(LegCouponPaymentDate_145.getString());
    FIX::LegCouponRate LegCouponRate_145;
    LegCouponRate_145.setString("34.310000");
    noLegs_0_1.set(LegCouponRate_145);
    InstrumentLeg_145.insert(LegCouponRate_145.getString());
    FIX::LegCreditRating LegCreditRating_145("STRING_430171070");
    noLegs_0_1.set(LegCreditRating_145);
    InstrumentLeg_145.insert(LegCreditRating_145.getString());
    FIX::LegCurrency LegCurrency_145("EUR");
    noLegs_0_1.set(LegCurrency_145);
    InstrumentLeg_145.insert(LegCurrency_145.getString());
    FIX::LegDatedDate LegDatedDate_145("LOCALMKTDATE_1536338906");
    noLegs_0_1.set(LegDatedDate_145);
    InstrumentLeg_145.insert(LegDatedDate_145.getString());
    FIX::LegExerciseStyle LegExerciseStyle_145(1405810418);
    noLegs_0_1.set(LegExerciseStyle_145);
    InstrumentLeg_145.insert(LegExerciseStyle_145.getString());
    FIX::LegFactor LegFactor_145;
    LegFactor_145.setString("463727");
    noLegs_0_1.set(LegFactor_145);
    InstrumentLeg_145.insert(LegFactor_145.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_145(298577982);
    noLegs_0_1.set(LegFlowScheduleType_145);
    InstrumentLeg_145.insert(LegFlowScheduleType_145.getString());
    FIX::LegInstrRegistry LegInstrRegistry_145("STRING_704140675");
    noLegs_0_1.set(LegInstrRegistry_145);
    InstrumentLeg_145.insert(LegInstrRegistry_145.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_145("LOCALMKTDATE_1530992196");
    noLegs_0_1.set(LegInterestAccrualDate_145);
    InstrumentLeg_145.insert(LegInterestAccrualDate_145.getString());
    FIX::LegIssueDate LegIssueDate_145("LOCALMKTDATE_1386036520");
    noLegs_0_1.set(LegIssueDate_145);
    InstrumentLeg_145.insert(LegIssueDate_145.getString());
    FIX::LegIssuer LegIssuer_145("STRING_1140703990");
    noLegs_0_1.set(LegIssuer_145);
    InstrumentLeg_145.insert(LegIssuer_145.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_145("STRING_2068349044");
    noLegs_0_1.set(LegLocaleOfIssue_145);
    InstrumentLeg_145.insert(LegLocaleOfIssue_145.getString());
    FIX::LegMaturityDate LegMaturityDate_145("LOCALMKTDATE_1430978062");
    noLegs_0_1.set(LegMaturityDate_145);
    InstrumentLeg_145.insert(LegMaturityDate_145.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_145("MONTHYEAR_1313909806");
    noLegs_0_1.set(LegMaturityMonthYear_145);
    InstrumentLeg_145.insert(LegMaturityMonthYear_145.getString());
    FIX::LegMaturityTime LegMaturityTime_145("TZTIMEONLY_2139099602");
    noLegs_0_1.set(LegMaturityTime_145);
    InstrumentLeg_145.insert(LegMaturityTime_145.getString());
    FIX::LegOptAttribute LegOptAttribute_145('9');
    noLegs_0_1.set(LegOptAttribute_145);
    InstrumentLeg_145.insert(LegOptAttribute_145.getString());
    FIX::LegOptionRatio LegOptionRatio_145;
    LegOptionRatio_145.setString("4447990");
    noLegs_0_1.set(LegOptionRatio_145);
    InstrumentLeg_145.insert(LegOptionRatio_145.getString());
    FIX::LegPool LegPool_145("STRING_1698109054");
    noLegs_0_1.set(LegPool_145);
    InstrumentLeg_145.insert(LegPool_145.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_145("STRING_824698019");
    noLegs_0_1.set(LegPriceUnitOfMeasure_145);
    InstrumentLeg_145.insert(LegPriceUnitOfMeasure_145.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_145;
    LegPriceUnitOfMeasureQty_145.setString("174699");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_145);
    InstrumentLeg_145.insert(LegPriceUnitOfMeasureQty_145.getString());
    FIX::LegProduct LegProduct_145(1319578133);
    noLegs_0_1.set(LegProduct_145);
    InstrumentLeg_145.insert(LegProduct_145.getString());
    FIX::LegPutOrCall LegPutOrCall_145(1524729066);
    noLegs_0_1.set(LegPutOrCall_145);
    InstrumentLeg_145.insert(LegPutOrCall_145.getString());
    FIX::LegRatioQty LegRatioQty_145;
    LegRatioQty_145.setString("18502574");
    noLegs_0_1.set(LegRatioQty_145);
    InstrumentLeg_145.insert(LegRatioQty_145.getString());
    FIX::LegRedemptionDate LegRedemptionDate_145("LOCALMKTDATE_1762910171");
    noLegs_0_1.set(LegRedemptionDate_145);
    InstrumentLeg_145.insert(LegRedemptionDate_145.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_145("STRING_729425011");
    noLegs_0_1.set(LegRepoCollateralSecurityType_145);
    InstrumentLeg_145.insert(LegRepoCollateralSecurityType_145.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_145;
    LegRepurchaseRate_145.setString("35.960000");
    noLegs_0_1.set(LegRepurchaseRate_145);
    InstrumentLeg_145.insert(LegRepurchaseRate_145.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_145(346239706);
    noLegs_0_1.set(LegRepurchaseTerm_145);
    InstrumentLeg_145.insert(LegRepurchaseTerm_145.getString());
    FIX::LegSecurityDesc LegSecurityDesc_145("STRING_1778872412");
    noLegs_0_1.set(LegSecurityDesc_145);
    InstrumentLeg_145.insert(LegSecurityDesc_145.getString());
    FIX::LegSecurityExchange LegSecurityExchange_145("EXCHANGE_411913288");
    noLegs_0_1.set(LegSecurityExchange_145);
    InstrumentLeg_145.insert(LegSecurityExchange_145.getString());
    FIX::LegSecurityID LegSecurityID_145("STRING_869656076");
    noLegs_0_1.set(LegSecurityID_145);
    InstrumentLeg_145.insert(LegSecurityID_145.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_145("STRING_171132195");
    noLegs_0_1.set(LegSecurityIDSource_145);
    InstrumentLeg_145.insert(LegSecurityIDSource_145.getString());
    FIX::LegSecuritySubType LegSecuritySubType_145("STRING_842084359");
    noLegs_0_1.set(LegSecuritySubType_145);
    InstrumentLeg_145.insert(LegSecuritySubType_145.getString());
    FIX::LegSecurityType LegSecurityType_145("STRING_1909504801");
    noLegs_0_1.set(LegSecurityType_145);
    InstrumentLeg_145.insert(LegSecurityType_145.getString());
    FIX::LegSide LegSide_145('2');
    noLegs_0_1.set(LegSide_145);
    InstrumentLeg_145.insert(LegSide_145.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_145("STRING_230939617");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_145);
    InstrumentLeg_145.insert(LegStateOrProvinceOfIssue_145.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_145("JPY");
    noLegs_0_1.set(LegStrikeCurrency_145);
    InstrumentLeg_145.insert(LegStrikeCurrency_145.getString());
    FIX::LegStrikePrice LegStrikePrice_145;
    LegStrikePrice_145.setString("5295175");
    noLegs_0_1.set(LegStrikePrice_145);
    InstrumentLeg_145.insert(LegStrikePrice_145.getString());
    FIX::LegSymbol LegSymbol_145("STRING_1871972247");
    noLegs_0_1.set(LegSymbol_145);
    InstrumentLeg_145.insert(LegSymbol_145.getString());
    FIX::LegSymbolSfx LegSymbolSfx_145("STRING_1824395584");
    noLegs_0_1.set(LegSymbolSfx_145);
    InstrumentLeg_145.insert(LegSymbolSfx_145.getString());
    FIX::LegTimeUnit LegTimeUnit_145("STRING_1915554119");
    noLegs_0_1.set(LegTimeUnit_145);
    InstrumentLeg_145.insert(LegTimeUnit_145.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_145("STRING_865192589");
    noLegs_0_1.set(LegUnitOfMeasure_145);
    InstrumentLeg_145.insert(LegUnitOfMeasure_145.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_145;
    LegUnitOfMeasureQty_145.setString("17452609");
    noLegs_0_1.set(LegUnitOfMeasureQty_145);
    InstrumentLeg_145.insert(LegUnitOfMeasureQty_145.getString());
    all_values.push_back(InstrumentLeg_145);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_283;
      FIX::LegSecurityAltID LegSecurityAltID_283("STRING_31618747");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_283);
      LegSecAltIDGrp_NoLegSecurityAltID_283.insert(LegSecurityAltID_283.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_283("STRING_1736876935");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_283);
      LegSecAltIDGrp_NoLegSecurityAltID_283.insert(LegSecurityAltIDSource_283.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_283);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_284;
      FIX::LegSecurityAltID LegSecurityAltID_284("STRING_18322897");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_284);
      LegSecAltIDGrp_NoLegSecurityAltID_284.insert(LegSecurityAltID_284.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_284("STRING_476417794");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_284);
      LegSecAltIDGrp_NoLegSecurityAltID_284.insert(LegSecurityAltIDSource_284.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_284);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_76;
      FIX::LegStipulationType LegStipulationType_76("STRING_843020916");
      noLegStipulations_1_1_0.set(LegStipulationType_76);
      LegStipulations_NoLegStipulations_76.insert(LegStipulationType_76.getString());
      FIX::LegStipulationValue LegStipulationValue_76("STRING_493887763");
      noLegStipulations_1_1_0.set(LegStipulationValue_76);
      LegStipulations_NoLegStipulations_76.insert(LegStipulationValue_76.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_76);

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_129;
      FIX::NestedPartyID NestedPartyID_129("STRING_220266334");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_129);
      NestedParties_NoNestedPartyIDs_129.insert(NestedPartyID_129.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_129('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_129);
      NestedParties_NoNestedPartyIDs_129.insert(NestedPartyIDSource_129.getString());
      FIX::NestedPartyRole NestedPartyRole_129(75023349);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_129);
      NestedParties_NoNestedPartyIDs_129.insert(NestedPartyRole_129.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_129);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_250;
        FIX::NestedPartySubID NestedPartySubID_250("STRING_1889615192");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_250);
        NstdPtysSubGrp_NoNestedPartySubIDs_250.insert(NestedPartySubID_250.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_250(421263055);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_250);
        NstdPtysSubGrp_NoNestedPartySubIDs_250.insert(NestedPartySubIDType_250.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_250);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_251;
        FIX::NestedPartySubID NestedPartySubID_251("STRING_581080110");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_251);
        NstdPtysSubGrp_NoNestedPartySubIDs_251.insert(NestedPartySubID_251.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_251(154044832);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_251);
        NstdPtysSubGrp_NoNestedPartySubIDs_251.insert(NestedPartySubIDType_251.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_251);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_252;
        FIX::NestedPartySubID NestedPartySubID_252("STRING_1290919131");
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubID_252);
        NstdPtysSubGrp_NoNestedPartySubIDs_252.insert(NestedPartySubID_252.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_252(752212305);
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubIDType_252);
        NstdPtysSubGrp_NoNestedPartySubIDs_252.insert(NestedPartySubIDType_252.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_252);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    // TradeCapLegUnderlyingsGrp
    // Group TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_1_1_0;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_7;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_7("STRING_1052940285");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegCFICode_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegCFICode_7.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_7("LOCALMKTDATE_999242894");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegMaturityDate_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegMaturityDate_7.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_7("MONTHYEAR_1227068808");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegMaturityMonthYear_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegMaturityMonthYear_7.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_7("TZTIMEONLY_73288208");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegMaturityTime_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegMaturityTime_7.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_7('1');
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegOptAttribute_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegOptAttribute_7.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_7(1756586407);
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegPutOrCall_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegPutOrCall_7.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_7("STRING_1945260455");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecurityDesc_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegSecurityDesc_7.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_7("STRING_969558219");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecurityExchange_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegSecurityExchange_7.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_7("STRING_1524656878");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecurityID_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegSecurityID_7.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_7("STRING_662969396");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecurityIDSource_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegSecurityIDSource_7.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_7("STRING_567335552");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecuritySubType_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegSecuritySubType_7.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_7("STRING_576221764");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSecurityType_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegSecurityType_7.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_7;
      UnderlyingLegStrikePrice_7.setString("6945881");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegStrikePrice_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegStrikePrice_7.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_7("STRING_156728839");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSymbol_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegSymbol_7.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_7("STRING_594544661");
      noOfLegUnderlyings_1_1_0.set(UnderlyingLegSymbolSfx_7);
      UnderlyingLegInstrument_7.insert(UnderlyingLegSymbolSfx_7.getString());
      all_values.push_back(UnderlyingLegInstrument_7);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_0_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_16;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_16("STRING_1444231180");
        noUnderlyingLegSecurityAltID_1_0_2_0.set(UnderlyingLegSecurityAltID_16);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_16.insert(UnderlyingLegSecurityAltID_16.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_16("STRING_1437565577");
        noUnderlyingLegSecurityAltID_1_0_2_0.set(UnderlyingLegSecurityAltIDSource_16);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_16.insert(UnderlyingLegSecurityAltIDSource_16.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_16);

        noOfLegUnderlyings_1_1_0.addGroup(noUnderlyingLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_0_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_17;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_17("STRING_1664893701");
        noUnderlyingLegSecurityAltID_1_0_2_1.set(UnderlyingLegSecurityAltID_17);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_17.insert(UnderlyingLegSecurityAltID_17.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_17("STRING_1903828006");
        noUnderlyingLegSecurityAltID_1_0_2_1.set(UnderlyingLegSecurityAltIDSource_17);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_17.insert(UnderlyingLegSecurityAltIDSource_17.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_17);

        noOfLegUnderlyings_1_1_0.addGroup(noUnderlyingLegSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_0_2_2;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_18;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_18("STRING_1657831911");
        noUnderlyingLegSecurityAltID_1_0_2_2.set(UnderlyingLegSecurityAltID_18);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_18.insert(UnderlyingLegSecurityAltID_18.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_18("STRING_1861555297");
        noUnderlyingLegSecurityAltID_1_0_2_2.set(UnderlyingLegSecurityAltIDSource_18);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_18.insert(UnderlyingLegSecurityAltIDSource_18.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_18);

        noOfLegUnderlyings_1_1_0.addGroup(noUnderlyingLegSecurityAltID_1_0_2_2);
      }
      noLegs_0_1.addGroup(noOfLegUnderlyings_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_1_1_1;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_8;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_8("STRING_1978851356");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegCFICode_8);
      UnderlyingLegInstrument_8.insert(UnderlyingLegCFICode_8.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_8("LOCALMKTDATE_460039608");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegMaturityDate_8);
      UnderlyingLegInstrument_8.insert(UnderlyingLegMaturityDate_8.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_8("MONTHYEAR_1603686841");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegMaturityMonthYear_8);
      UnderlyingLegInstrument_8.insert(UnderlyingLegMaturityMonthYear_8.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_8("TZTIMEONLY_252630763");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegMaturityTime_8);
      UnderlyingLegInstrument_8.insert(UnderlyingLegMaturityTime_8.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_8('1');
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegOptAttribute_8);
      UnderlyingLegInstrument_8.insert(UnderlyingLegOptAttribute_8.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_8(1757731673);
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegPutOrCall_8);
      UnderlyingLegInstrument_8.insert(UnderlyingLegPutOrCall_8.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_8("STRING_1543549895");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecurityDesc_8);
      UnderlyingLegInstrument_8.insert(UnderlyingLegSecurityDesc_8.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_8("STRING_1793332024");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecurityExchange_8);
      UnderlyingLegInstrument_8.insert(UnderlyingLegSecurityExchange_8.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_8("STRING_606377217");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecurityID_8);
      UnderlyingLegInstrument_8.insert(UnderlyingLegSecurityID_8.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_8("STRING_449006532");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecurityIDSource_8);
      UnderlyingLegInstrument_8.insert(UnderlyingLegSecurityIDSource_8.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_8("STRING_645091270");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecuritySubType_8);
      UnderlyingLegInstrument_8.insert(UnderlyingLegSecuritySubType_8.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_8("STRING_1833446025");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSecurityType_8);
      UnderlyingLegInstrument_8.insert(UnderlyingLegSecurityType_8.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_8;
      UnderlyingLegStrikePrice_8.setString("5222947");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegStrikePrice_8);
      UnderlyingLegInstrument_8.insert(UnderlyingLegStrikePrice_8.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_8("STRING_1937737553");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSymbol_8);
      UnderlyingLegInstrument_8.insert(UnderlyingLegSymbol_8.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_8("STRING_1442548785");
      noOfLegUnderlyings_1_1_1.set(UnderlyingLegSymbolSfx_8);
      UnderlyingLegInstrument_8.insert(UnderlyingLegSymbolSfx_8.getString());
      all_values.push_back(UnderlyingLegInstrument_8);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_1_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_19;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_19("STRING_759812125");
        noUnderlyingLegSecurityAltID_1_1_2_0.set(UnderlyingLegSecurityAltID_19);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_19.insert(UnderlyingLegSecurityAltID_19.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_19("STRING_819722015");
        noUnderlyingLegSecurityAltID_1_1_2_0.set(UnderlyingLegSecurityAltIDSource_19);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_19.insert(UnderlyingLegSecurityAltIDSource_19.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_19);

        noOfLegUnderlyings_1_1_1.addGroup(noUnderlyingLegSecurityAltID_1_1_2_0);
      }
      noLegs_0_1.addGroup(noOfLegUnderlyings_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_1_1_2;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_9;
      FIX::UnderlyingLegCFICode UnderlyingLegCFICode_9("STRING_983040944");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegCFICode_9);
      UnderlyingLegInstrument_9.insert(UnderlyingLegCFICode_9.getString());
      FIX::UnderlyingLegMaturityDate UnderlyingLegMaturityDate_9("LOCALMKTDATE_1327147677");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegMaturityDate_9);
      UnderlyingLegInstrument_9.insert(UnderlyingLegMaturityDate_9.getString());
      FIX::UnderlyingLegMaturityMonthYear UnderlyingLegMaturityMonthYear_9("MONTHYEAR_1395943779");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegMaturityMonthYear_9);
      UnderlyingLegInstrument_9.insert(UnderlyingLegMaturityMonthYear_9.getString());
      FIX::UnderlyingLegMaturityTime UnderlyingLegMaturityTime_9("TZTIMEONLY_1677629088");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegMaturityTime_9);
      UnderlyingLegInstrument_9.insert(UnderlyingLegMaturityTime_9.getString());
      FIX::UnderlyingLegOptAttribute UnderlyingLegOptAttribute_9('1');
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegOptAttribute_9);
      UnderlyingLegInstrument_9.insert(UnderlyingLegOptAttribute_9.getString());
      FIX::UnderlyingLegPutOrCall UnderlyingLegPutOrCall_9(1990488440);
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegPutOrCall_9);
      UnderlyingLegInstrument_9.insert(UnderlyingLegPutOrCall_9.getString());
      FIX::UnderlyingLegSecurityDesc UnderlyingLegSecurityDesc_9("STRING_701151378");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSecurityDesc_9);
      UnderlyingLegInstrument_9.insert(UnderlyingLegSecurityDesc_9.getString());
      FIX::UnderlyingLegSecurityExchange UnderlyingLegSecurityExchange_9("STRING_780624048");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSecurityExchange_9);
      UnderlyingLegInstrument_9.insert(UnderlyingLegSecurityExchange_9.getString());
      FIX::UnderlyingLegSecurityID UnderlyingLegSecurityID_9("STRING_1280570369");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSecurityID_9);
      UnderlyingLegInstrument_9.insert(UnderlyingLegSecurityID_9.getString());
      FIX::UnderlyingLegSecurityIDSource UnderlyingLegSecurityIDSource_9("STRING_218561431");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSecurityIDSource_9);
      UnderlyingLegInstrument_9.insert(UnderlyingLegSecurityIDSource_9.getString());
      FIX::UnderlyingLegSecuritySubType UnderlyingLegSecuritySubType_9("STRING_536968406");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSecuritySubType_9);
      UnderlyingLegInstrument_9.insert(UnderlyingLegSecuritySubType_9.getString());
      FIX::UnderlyingLegSecurityType UnderlyingLegSecurityType_9("STRING_790918632");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSecurityType_9);
      UnderlyingLegInstrument_9.insert(UnderlyingLegSecurityType_9.getString());
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_9;
      UnderlyingLegStrikePrice_9.setString("20801167");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegStrikePrice_9);
      UnderlyingLegInstrument_9.insert(UnderlyingLegStrikePrice_9.getString());
      FIX::UnderlyingLegSymbol UnderlyingLegSymbol_9("STRING_368336114");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSymbol_9);
      UnderlyingLegInstrument_9.insert(UnderlyingLegSymbol_9.getString());
      FIX::UnderlyingLegSymbolSfx UnderlyingLegSymbolSfx_9("STRING_1250958241");
      noOfLegUnderlyings_1_1_2.set(UnderlyingLegSymbolSfx_9);
      UnderlyingLegInstrument_9.insert(UnderlyingLegSymbolSfx_9.getString());
      all_values.push_back(UnderlyingLegInstrument_9);

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_2_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_20;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_20("STRING_620966878");
        noUnderlyingLegSecurityAltID_1_2_2_0.set(UnderlyingLegSecurityAltID_20);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_20.insert(UnderlyingLegSecurityAltID_20.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_20("STRING_144594311");
        noUnderlyingLegSecurityAltID_1_2_2_0.set(UnderlyingLegSecurityAltIDSource_20);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_20.insert(UnderlyingLegSecurityAltIDSource_20.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_20);

        noOfLegUnderlyings_1_1_2.addGroup(noUnderlyingLegSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_2_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_21;
        FIX::UnderlyingLegSecurityAltID UnderlyingLegSecurityAltID_21("STRING_1146567947");
        noUnderlyingLegSecurityAltID_1_2_2_1.set(UnderlyingLegSecurityAltID_21);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_21.insert(UnderlyingLegSecurityAltID_21.getString());
        FIX::UnderlyingLegSecurityAltIDSource UnderlyingLegSecurityAltIDSource_21("STRING_17033125");
        noUnderlyingLegSecurityAltID_1_2_2_1.set(UnderlyingLegSecurityAltIDSource_21);
        UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_21.insert(UnderlyingLegSecurityAltIDSource_21.getString());
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_21);

        noOfLegUnderlyings_1_1_2.addGroup(noUnderlyingLegSecurityAltID_1_2_2_1);
      }
      noLegs_0_1.addGroup(noOfLegUnderlyings_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_19;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_19("MULTIPLESTRINGVALUE_SCL");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(DeskOrderHandlingInst_19.getString());
    FIX::DeskType DeskType_19("STRING_PF");
    noTrdRegTimestamps_0_0.set(DeskType_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(DeskType_19.getString());
    FIX::DeskTypeSource DeskTypeSource_19(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(DeskTypeSource_19.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_19(FIX::UTCTIMESTAMP(21, 3, 58, 21, 5, 2016));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(TrdRegTimestamp_19.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_19("STRING_143963242");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(TrdRegTimestampOrigin_19.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_19(3);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(TrdRegTimestampType_19.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_19);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  // TrdRepIndicatorsGrp
  // Group TrdRepIndicatorsGrp.NoTrdRepIndicators
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRepIndicators noTrdRepIndicators_0_0;
    // TrdRepIndicatorsGrp.NoTrdRepIndicators
    multiset<string> TrdRepIndicatorsGrp_NoTrdRepIndicators_3;
    FIX::TrdRepIndicator TrdRepIndicator_3(true);
    noTrdRepIndicators_0_0.set(TrdRepIndicator_3);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_3.insert(TrdRepIndicator_3.getString());
    FIX::TrdRepPartyRole TrdRepPartyRole_3(1649140533);
    noTrdRepIndicators_0_0.set(TrdRepPartyRole_3);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_3.insert(TrdRepPartyRole_3.getString());
    all_values.push_back(TrdRepIndicatorsGrp_NoTrdRepIndicators_3);

    msg.addGroup(noTrdRepIndicators_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRepIndicators noTrdRepIndicators_0_1;
    // TrdRepIndicatorsGrp.NoTrdRepIndicators
    multiset<string> TrdRepIndicatorsGrp_NoTrdRepIndicators_4;
    FIX::TrdRepIndicator TrdRepIndicator_4(true);
    noTrdRepIndicators_0_1.set(TrdRepIndicator_4);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_4.insert(TrdRepIndicator_4.getString());
    FIX::TrdRepPartyRole TrdRepPartyRole_4(375260061);
    noTrdRepIndicators_0_1.set(TrdRepPartyRole_4);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_4.insert(TrdRepPartyRole_4.getString());
    all_values.push_back(TrdRepIndicatorsGrp_NoTrdRepIndicators_4);

    msg.addGroup(noTrdRepIndicators_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRepIndicators noTrdRepIndicators_0_2;
    // TrdRepIndicatorsGrp.NoTrdRepIndicators
    multiset<string> TrdRepIndicatorsGrp_NoTrdRepIndicators_5;
    FIX::TrdRepIndicator TrdRepIndicator_5(false);
    noTrdRepIndicators_0_2.set(TrdRepIndicator_5);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_5.insert(TrdRepIndicator_5.getString());
    FIX::TrdRepPartyRole TrdRepPartyRole_5(1925729987);
    noTrdRepIndicators_0_2.set(TrdRepPartyRole_5);
    TrdRepIndicatorsGrp_NoTrdRepIndicators_5.insert(TrdRepPartyRole_5.getString());
    all_values.push_back(TrdRepIndicatorsGrp_NoTrdRepIndicators_5);

    msg.addGroup(noTrdRepIndicators_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::TradeCaptureReportAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_141;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_141("DATA_819249340");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_141);
    UnderlyingInstrument_141.insert(EncodedUnderlyingIssuer_141.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_141(569164972);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_141);
    UnderlyingInstrument_141.insert(EncodedUnderlyingIssuerLen_141.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_141("DATA_526454573");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_141);
    UnderlyingInstrument_141.insert(EncodedUnderlyingSecurityDesc_141.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_141(1187585454);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_141);
    UnderlyingInstrument_141.insert(EncodedUnderlyingSecurityDescLen_141.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_141;
    UnderlyingAdjustedQuantity_141.setString("18201232");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_141);
    UnderlyingInstrument_141.insert(UnderlyingAdjustedQuantity_141.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_141;
    UnderlyingAllocationPercent_141.setString("44.940000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_141);
    UnderlyingInstrument_141.insert(UnderlyingAllocationPercent_141.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_141;
    UnderlyingAttachmentPoint_141.setString("23.320000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_141);
    UnderlyingInstrument_141.insert(UnderlyingAttachmentPoint_141.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_141("STRING_1964717524");
    noUnderlyings_0_0.set(UnderlyingCFICode_141);
    UnderlyingInstrument_141.insert(UnderlyingCFICode_141.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_141("STRING_1061858793");
    noUnderlyings_0_0.set(UnderlyingCPProgram_141);
    UnderlyingInstrument_141.insert(UnderlyingCPProgram_141.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_141("STRING_1825585457");
    noUnderlyings_0_0.set(UnderlyingCPRegType_141);
    UnderlyingInstrument_141.insert(UnderlyingCPRegType_141.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_141;
    UnderlyingCapValue_141.setString("17551602");
    noUnderlyings_0_0.set(UnderlyingCapValue_141);
    UnderlyingInstrument_141.insert(UnderlyingCapValue_141.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_141;
    UnderlyingCashAmount_141.setString("6673203");
    noUnderlyings_0_0.set(UnderlyingCashAmount_141);
    UnderlyingInstrument_141.insert(UnderlyingCashAmount_141.getString());
    FIX::UnderlyingCashType UnderlyingCashType_141("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_141);
    UnderlyingInstrument_141.insert(UnderlyingCashType_141.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_141;
    UnderlyingContractMultiplier_141.setString("432105");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_141);
    UnderlyingInstrument_141.insert(UnderlyingContractMultiplier_141.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_141(2106227851);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_141);
    UnderlyingInstrument_141.insert(UnderlyingContractMultiplierUnit_141.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_141("COUNTRY_1132475864");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_141);
    UnderlyingInstrument_141.insert(UnderlyingCountryOfIssue_141.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_141("LOCALMKTDATE_268998385");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_141);
    UnderlyingInstrument_141.insert(UnderlyingCouponPaymentDate_141.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_141;
    UnderlyingCouponRate_141.setString("68.810000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_141);
    UnderlyingInstrument_141.insert(UnderlyingCouponRate_141.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_141("STRING_293398161");
    noUnderlyings_0_0.set(UnderlyingCreditRating_141);
    UnderlyingInstrument_141.insert(UnderlyingCreditRating_141.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_141("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_141);
    UnderlyingInstrument_141.insert(UnderlyingCurrency_141.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_141;
    UnderlyingCurrentValue_141.setString("4373614");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_141);
    UnderlyingInstrument_141.insert(UnderlyingCurrentValue_141.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_141;
    UnderlyingDetachmentPoint_141.setString("23.910000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_141);
    UnderlyingInstrument_141.insert(UnderlyingDetachmentPoint_141.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_141;
    UnderlyingDirtyPrice_141.setString("9010827");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_141);
    UnderlyingInstrument_141.insert(UnderlyingDirtyPrice_141.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_141;
    UnderlyingEndPrice_141.setString("1114700");
    noUnderlyings_0_0.set(UnderlyingEndPrice_141);
    UnderlyingInstrument_141.insert(UnderlyingEndPrice_141.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_141;
    UnderlyingEndValue_141.setString("9215192");
    noUnderlyings_0_0.set(UnderlyingEndValue_141);
    UnderlyingInstrument_141.insert(UnderlyingEndValue_141.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_141(1546242371);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_141);
    UnderlyingInstrument_141.insert(UnderlyingExerciseStyle_141.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_141;
    UnderlyingFXRate_141.setString("4867301");
    noUnderlyings_0_0.set(UnderlyingFXRate_141);
    UnderlyingInstrument_141.insert(UnderlyingFXRate_141.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_141('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_141);
    UnderlyingInstrument_141.insert(UnderlyingFXRateCalc_141.getString());
    FIX::UnderlyingFactor UnderlyingFactor_141;
    UnderlyingFactor_141.setString("13244887");
    noUnderlyings_0_0.set(UnderlyingFactor_141);
    UnderlyingInstrument_141.insert(UnderlyingFactor_141.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_141(1080551639);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_141);
    UnderlyingInstrument_141.insert(UnderlyingFlowScheduleType_141.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_141("STRING_2023049550");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_141);
    UnderlyingInstrument_141.insert(UnderlyingInstrRegistry_141.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_141("LOCALMKTDATE_1893653682");
    noUnderlyings_0_0.set(UnderlyingIssueDate_141);
    UnderlyingInstrument_141.insert(UnderlyingIssueDate_141.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_141("STRING_1607006212");
    noUnderlyings_0_0.set(UnderlyingIssuer_141);
    UnderlyingInstrument_141.insert(UnderlyingIssuer_141.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_141("STRING_1063151357");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_141);
    UnderlyingInstrument_141.insert(UnderlyingLocaleOfIssue_141.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_141("LOCALMKTDATE_1566293247");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_141);
    UnderlyingInstrument_141.insert(UnderlyingMaturityDate_141.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_141("MONTHYEAR_1522297059");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_141);
    UnderlyingInstrument_141.insert(UnderlyingMaturityMonthYear_141.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_141("TZTIMEONLY_724220041");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_141);
    UnderlyingInstrument_141.insert(UnderlyingMaturityTime_141.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_141;
    UnderlyingNotionalPercentageOutstanding_141.setString("71.240000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_141);
    UnderlyingInstrument_141.insert(UnderlyingNotionalPercentageOutstanding_141.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_141('4');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_141);
    UnderlyingInstrument_141.insert(UnderlyingOptAttribute_141.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_141;
    UnderlyingOriginalNotionalPercentageOutstanding_141.setString("18.510000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_141);
    UnderlyingInstrument_141.insert(UnderlyingOriginalNotionalPercentageOutstanding_141.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_141("STRING_991203688");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_141);
    UnderlyingInstrument_141.insert(UnderlyingPriceUnitOfMeasure_141.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_141;
    UnderlyingPriceUnitOfMeasureQty_141.setString("11039925");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_141);
    UnderlyingInstrument_141.insert(UnderlyingPriceUnitOfMeasureQty_141.getString());
    FIX::UnderlyingProduct UnderlyingProduct_141(546463317);
    noUnderlyings_0_0.set(UnderlyingProduct_141);
    UnderlyingInstrument_141.insert(UnderlyingProduct_141.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_141(1034414210);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_141);
    UnderlyingInstrument_141.insert(UnderlyingPutOrCall_141.getString());
    FIX::UnderlyingPx UnderlyingPx_141;
    UnderlyingPx_141.setString("10627367");
    noUnderlyings_0_0.set(UnderlyingPx_141);
    UnderlyingInstrument_141.insert(UnderlyingPx_141.getString());
    FIX::UnderlyingQty UnderlyingQty_141;
    UnderlyingQty_141.setString("16789391");
    noUnderlyings_0_0.set(UnderlyingQty_141);
    UnderlyingInstrument_141.insert(UnderlyingQty_141.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_141("LOCALMKTDATE_1303412595");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_141);
    UnderlyingInstrument_141.insert(UnderlyingRedemptionDate_141.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_141("STRING_1755453598");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_141);
    UnderlyingInstrument_141.insert(UnderlyingRepoCollateralSecurityType_141.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_141;
    UnderlyingRepurchaseRate_141.setString("73.430000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_141);
    UnderlyingInstrument_141.insert(UnderlyingRepurchaseRate_141.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_141(410527321);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_141);
    UnderlyingInstrument_141.insert(UnderlyingRepurchaseTerm_141.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_141("STRING_1854381526");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_141);
    UnderlyingInstrument_141.insert(UnderlyingRestructuringType_141.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_141("STRING_262215098");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_141);
    UnderlyingInstrument_141.insert(UnderlyingSecurityDesc_141.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_141("EXCHANGE_1830389713");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_141);
    UnderlyingInstrument_141.insert(UnderlyingSecurityExchange_141.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_141("STRING_607980631");
    noUnderlyings_0_0.set(UnderlyingSecurityID_141);
    UnderlyingInstrument_141.insert(UnderlyingSecurityID_141.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_141("STRING_373685184");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_141);
    UnderlyingInstrument_141.insert(UnderlyingSecurityIDSource_141.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_141("STRING_604425342");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_141);
    UnderlyingInstrument_141.insert(UnderlyingSecuritySubType_141.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_141("STRING_6739354");
    noUnderlyings_0_0.set(UnderlyingSecurityType_141);
    UnderlyingInstrument_141.insert(UnderlyingSecurityType_141.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_141("STRING_860415331");
    noUnderlyings_0_0.set(UnderlyingSeniority_141);
    UnderlyingInstrument_141.insert(UnderlyingSeniority_141.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_141("STRING_1808225552");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_141);
    UnderlyingInstrument_141.insert(UnderlyingSettlMethod_141.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_141(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_141);
    UnderlyingInstrument_141.insert(UnderlyingSettlementType_141.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_141;
    UnderlyingStartValue_141.setString("19409669");
    noUnderlyings_0_0.set(UnderlyingStartValue_141);
    UnderlyingInstrument_141.insert(UnderlyingStartValue_141.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_141("STRING_1683791455");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_141);
    UnderlyingInstrument_141.insert(UnderlyingStateOrProvinceOfIssue_141.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_141("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_141);
    UnderlyingInstrument_141.insert(UnderlyingStrikeCurrency_141.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_141;
    UnderlyingStrikePrice_141.setString("5994591");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_141);
    UnderlyingInstrument_141.insert(UnderlyingStrikePrice_141.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_141("STRING_496207698");
    noUnderlyings_0_0.set(UnderlyingSymbol_141);
    UnderlyingInstrument_141.insert(UnderlyingSymbol_141.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_141("STRING_775302946");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_141);
    UnderlyingInstrument_141.insert(UnderlyingSymbolSfx_141.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_141("STRING_1323679205");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_141);
    UnderlyingInstrument_141.insert(UnderlyingTimeUnit_141.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_141("STRING_1879734822");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_141);
    UnderlyingInstrument_141.insert(UnderlyingUnitOfMeasure_141.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_141;
    UnderlyingUnitOfMeasureQty_141.setString("12119751");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_141);
    UnderlyingInstrument_141.insert(UnderlyingUnitOfMeasureQty_141.getString());
    all_values.push_back(UnderlyingInstrument_141);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_287;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_287("STRING_723454862");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_287);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_287.insert(UnderlyingSecurityAltID_287.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_287("STRING_168484017");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_287);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_287.insert(UnderlyingSecurityAltIDSource_287.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_287);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_288;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_288("STRING_124980726");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_288);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_288.insert(UnderlyingSecurityAltID_288.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_288("STRING_1757869072");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_288);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_288.insert(UnderlyingSecurityAltIDSource_288.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_288);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_266;
      FIX::UnderlyingStipType UnderlyingStipType_266("STRING_1803919907");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_266);
      UnderlyingStipulations_NoUnderlyingStips_266.insert(UnderlyingStipType_266.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_266("STRING_913798020");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_266);
      UnderlyingStipulations_NoUnderlyingStips_266.insert(UnderlyingStipValue_266.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_266);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_267;
      FIX::UnderlyingStipType UnderlyingStipType_267("STRING_839190684");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_267);
      UnderlyingStipulations_NoUnderlyingStips_267.insert(UnderlyingStipType_267.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_267("STRING_1628773602");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_267);
      UnderlyingStipulations_NoUnderlyingStips_267.insert(UnderlyingStipValue_267.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_267);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_288;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_288("STRING_546088562");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_288);
      UndlyInstrumentParties_NoUndlyInstrumentParties_288.insert(UnderlyingInstrumentPartyID_288.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_288('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_288);
      UndlyInstrumentParties_NoUndlyInstrumentParties_288.insert(UnderlyingInstrumentPartyIDSource_288.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_288(1007231406);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_288);
      UndlyInstrumentParties_NoUndlyInstrumentParties_288.insert(UnderlyingInstrumentPartyRole_288.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_288);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_549;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_549("STRING_117190237");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_549);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_549.insert(UnderlyingInstrumentPartySubID_549.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_549(1611656748);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_549);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_549.insert(UnderlyingInstrumentPartySubIDType_549.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_549);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_289;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_289("STRING_1160808547");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_289);
      UndlyInstrumentParties_NoUndlyInstrumentParties_289.insert(UnderlyingInstrumentPartyID_289.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_289('9');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_289);
      UndlyInstrumentParties_NoUndlyInstrumentParties_289.insert(UnderlyingInstrumentPartyIDSource_289.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_289(1272398653);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_289);
      UndlyInstrumentParties_NoUndlyInstrumentParties_289.insert(UnderlyingInstrumentPartyRole_289.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_289);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_550;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_550("STRING_771088892");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_550);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_550.insert(UnderlyingInstrumentPartySubID_550.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_550(808706460);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_550);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_550.insert(UnderlyingInstrumentPartySubIDType_550.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_550);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_142;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_142("DATA_1421951063");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_142);
    UnderlyingInstrument_142.insert(EncodedUnderlyingIssuer_142.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_142(24094779);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_142);
    UnderlyingInstrument_142.insert(EncodedUnderlyingIssuerLen_142.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_142("DATA_1408165624");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_142);
    UnderlyingInstrument_142.insert(EncodedUnderlyingSecurityDesc_142.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_142(1918158761);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_142);
    UnderlyingInstrument_142.insert(EncodedUnderlyingSecurityDescLen_142.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_142;
    UnderlyingAdjustedQuantity_142.setString("7993977");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_142);
    UnderlyingInstrument_142.insert(UnderlyingAdjustedQuantity_142.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_142;
    UnderlyingAllocationPercent_142.setString("11.810000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_142);
    UnderlyingInstrument_142.insert(UnderlyingAllocationPercent_142.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_142;
    UnderlyingAttachmentPoint_142.setString("99.360000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_142);
    UnderlyingInstrument_142.insert(UnderlyingAttachmentPoint_142.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_142("STRING_2011372877");
    noUnderlyings_0_1.set(UnderlyingCFICode_142);
    UnderlyingInstrument_142.insert(UnderlyingCFICode_142.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_142("STRING_162878590");
    noUnderlyings_0_1.set(UnderlyingCPProgram_142);
    UnderlyingInstrument_142.insert(UnderlyingCPProgram_142.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_142("STRING_226381150");
    noUnderlyings_0_1.set(UnderlyingCPRegType_142);
    UnderlyingInstrument_142.insert(UnderlyingCPRegType_142.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_142;
    UnderlyingCapValue_142.setString("323732");
    noUnderlyings_0_1.set(UnderlyingCapValue_142);
    UnderlyingInstrument_142.insert(UnderlyingCapValue_142.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_142;
    UnderlyingCashAmount_142.setString("2878593");
    noUnderlyings_0_1.set(UnderlyingCashAmount_142);
    UnderlyingInstrument_142.insert(UnderlyingCashAmount_142.getString());
    FIX::UnderlyingCashType UnderlyingCashType_142("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_142);
    UnderlyingInstrument_142.insert(UnderlyingCashType_142.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_142;
    UnderlyingContractMultiplier_142.setString("12635939");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_142);
    UnderlyingInstrument_142.insert(UnderlyingContractMultiplier_142.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_142(2091779223);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_142);
    UnderlyingInstrument_142.insert(UnderlyingContractMultiplierUnit_142.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_142("COUNTRY_750564595");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_142);
    UnderlyingInstrument_142.insert(UnderlyingCountryOfIssue_142.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_142("LOCALMKTDATE_2102784664");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_142);
    UnderlyingInstrument_142.insert(UnderlyingCouponPaymentDate_142.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_142;
    UnderlyingCouponRate_142.setString("91.780000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_142);
    UnderlyingInstrument_142.insert(UnderlyingCouponRate_142.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_142("STRING_2074889936");
    noUnderlyings_0_1.set(UnderlyingCreditRating_142);
    UnderlyingInstrument_142.insert(UnderlyingCreditRating_142.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_142("CHF");
    noUnderlyings_0_1.set(UnderlyingCurrency_142);
    UnderlyingInstrument_142.insert(UnderlyingCurrency_142.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_142;
    UnderlyingCurrentValue_142.setString("9346376");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_142);
    UnderlyingInstrument_142.insert(UnderlyingCurrentValue_142.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_142;
    UnderlyingDetachmentPoint_142.setString("87.720000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_142);
    UnderlyingInstrument_142.insert(UnderlyingDetachmentPoint_142.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_142;
    UnderlyingDirtyPrice_142.setString("14337644");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_142);
    UnderlyingInstrument_142.insert(UnderlyingDirtyPrice_142.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_142;
    UnderlyingEndPrice_142.setString("3988107");
    noUnderlyings_0_1.set(UnderlyingEndPrice_142);
    UnderlyingInstrument_142.insert(UnderlyingEndPrice_142.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_142;
    UnderlyingEndValue_142.setString("6687836");
    noUnderlyings_0_1.set(UnderlyingEndValue_142);
    UnderlyingInstrument_142.insert(UnderlyingEndValue_142.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_142(263886389);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_142);
    UnderlyingInstrument_142.insert(UnderlyingExerciseStyle_142.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_142;
    UnderlyingFXRate_142.setString("16712094");
    noUnderlyings_0_1.set(UnderlyingFXRate_142);
    UnderlyingInstrument_142.insert(UnderlyingFXRate_142.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_142('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_142);
    UnderlyingInstrument_142.insert(UnderlyingFXRateCalc_142.getString());
    FIX::UnderlyingFactor UnderlyingFactor_142;
    UnderlyingFactor_142.setString("10349752");
    noUnderlyings_0_1.set(UnderlyingFactor_142);
    UnderlyingInstrument_142.insert(UnderlyingFactor_142.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_142(332432260);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_142);
    UnderlyingInstrument_142.insert(UnderlyingFlowScheduleType_142.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_142("STRING_287804051");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_142);
    UnderlyingInstrument_142.insert(UnderlyingInstrRegistry_142.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_142("LOCALMKTDATE_1059070061");
    noUnderlyings_0_1.set(UnderlyingIssueDate_142);
    UnderlyingInstrument_142.insert(UnderlyingIssueDate_142.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_142("STRING_1740597884");
    noUnderlyings_0_1.set(UnderlyingIssuer_142);
    UnderlyingInstrument_142.insert(UnderlyingIssuer_142.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_142("STRING_58479164");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_142);
    UnderlyingInstrument_142.insert(UnderlyingLocaleOfIssue_142.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_142("LOCALMKTDATE_1858467787");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_142);
    UnderlyingInstrument_142.insert(UnderlyingMaturityDate_142.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_142("MONTHYEAR_177475418");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_142);
    UnderlyingInstrument_142.insert(UnderlyingMaturityMonthYear_142.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_142("TZTIMEONLY_1708889100");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_142);
    UnderlyingInstrument_142.insert(UnderlyingMaturityTime_142.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_142;
    UnderlyingNotionalPercentageOutstanding_142.setString("70.160000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_142);
    UnderlyingInstrument_142.insert(UnderlyingNotionalPercentageOutstanding_142.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_142('3');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_142);
    UnderlyingInstrument_142.insert(UnderlyingOptAttribute_142.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_142;
    UnderlyingOriginalNotionalPercentageOutstanding_142.setString("2.510000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_142);
    UnderlyingInstrument_142.insert(UnderlyingOriginalNotionalPercentageOutstanding_142.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_142("STRING_1754730262");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_142);
    UnderlyingInstrument_142.insert(UnderlyingPriceUnitOfMeasure_142.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_142;
    UnderlyingPriceUnitOfMeasureQty_142.setString("6282133");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_142);
    UnderlyingInstrument_142.insert(UnderlyingPriceUnitOfMeasureQty_142.getString());
    FIX::UnderlyingProduct UnderlyingProduct_142(1772036826);
    noUnderlyings_0_1.set(UnderlyingProduct_142);
    UnderlyingInstrument_142.insert(UnderlyingProduct_142.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_142(870840594);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_142);
    UnderlyingInstrument_142.insert(UnderlyingPutOrCall_142.getString());
    FIX::UnderlyingPx UnderlyingPx_142;
    UnderlyingPx_142.setString("5725088");
    noUnderlyings_0_1.set(UnderlyingPx_142);
    UnderlyingInstrument_142.insert(UnderlyingPx_142.getString());
    FIX::UnderlyingQty UnderlyingQty_142;
    UnderlyingQty_142.setString("3751177");
    noUnderlyings_0_1.set(UnderlyingQty_142);
    UnderlyingInstrument_142.insert(UnderlyingQty_142.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_142("LOCALMKTDATE_826141610");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_142);
    UnderlyingInstrument_142.insert(UnderlyingRedemptionDate_142.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_142("STRING_2145578077");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_142);
    UnderlyingInstrument_142.insert(UnderlyingRepoCollateralSecurityType_142.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_142;
    UnderlyingRepurchaseRate_142.setString("40.610000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_142);
    UnderlyingInstrument_142.insert(UnderlyingRepurchaseRate_142.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_142(1327531189);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_142);
    UnderlyingInstrument_142.insert(UnderlyingRepurchaseTerm_142.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_142("STRING_1314668660");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_142);
    UnderlyingInstrument_142.insert(UnderlyingRestructuringType_142.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_142("STRING_1237161756");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_142);
    UnderlyingInstrument_142.insert(UnderlyingSecurityDesc_142.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_142("EXCHANGE_835506314");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_142);
    UnderlyingInstrument_142.insert(UnderlyingSecurityExchange_142.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_142("STRING_600949481");
    noUnderlyings_0_1.set(UnderlyingSecurityID_142);
    UnderlyingInstrument_142.insert(UnderlyingSecurityID_142.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_142("STRING_1635972552");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_142);
    UnderlyingInstrument_142.insert(UnderlyingSecurityIDSource_142.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_142("STRING_1504289986");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_142);
    UnderlyingInstrument_142.insert(UnderlyingSecuritySubType_142.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_142("STRING_864835870");
    noUnderlyings_0_1.set(UnderlyingSecurityType_142);
    UnderlyingInstrument_142.insert(UnderlyingSecurityType_142.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_142("STRING_1159698352");
    noUnderlyings_0_1.set(UnderlyingSeniority_142);
    UnderlyingInstrument_142.insert(UnderlyingSeniority_142.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_142("STRING_370142974");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_142);
    UnderlyingInstrument_142.insert(UnderlyingSettlMethod_142.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_142(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_142);
    UnderlyingInstrument_142.insert(UnderlyingSettlementType_142.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_142;
    UnderlyingStartValue_142.setString("14921306");
    noUnderlyings_0_1.set(UnderlyingStartValue_142);
    UnderlyingInstrument_142.insert(UnderlyingStartValue_142.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_142("STRING_657947025");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_142);
    UnderlyingInstrument_142.insert(UnderlyingStateOrProvinceOfIssue_142.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_142("CHF");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_142);
    UnderlyingInstrument_142.insert(UnderlyingStrikeCurrency_142.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_142;
    UnderlyingStrikePrice_142.setString("7164261");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_142);
    UnderlyingInstrument_142.insert(UnderlyingStrikePrice_142.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_142("STRING_522381704");
    noUnderlyings_0_1.set(UnderlyingSymbol_142);
    UnderlyingInstrument_142.insert(UnderlyingSymbol_142.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_142("STRING_1262720267");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_142);
    UnderlyingInstrument_142.insert(UnderlyingSymbolSfx_142.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_142("STRING_277831642");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_142);
    UnderlyingInstrument_142.insert(UnderlyingTimeUnit_142.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_142("STRING_97255072");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_142);
    UnderlyingInstrument_142.insert(UnderlyingUnitOfMeasure_142.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_142;
    UnderlyingUnitOfMeasureQty_142.setString("16030742");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_142);
    UnderlyingInstrument_142.insert(UnderlyingUnitOfMeasureQty_142.getString());
    all_values.push_back(UnderlyingInstrument_142);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_289;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_289("STRING_1851985334");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_289);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_289.insert(UnderlyingSecurityAltID_289.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_289("STRING_83803951");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_289);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_289.insert(UnderlyingSecurityAltIDSource_289.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_289);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_290;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_290("STRING_1837655071");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_290);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_290.insert(UnderlyingSecurityAltID_290.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_290("STRING_575342280");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_290);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_290.insert(UnderlyingSecurityAltIDSource_290.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_290);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_268;
      FIX::UnderlyingStipType UnderlyingStipType_268("STRING_65289196");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_268);
      UnderlyingStipulations_NoUnderlyingStips_268.insert(UnderlyingStipType_268.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_268("STRING_1401483890");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_268);
      UnderlyingStipulations_NoUnderlyingStips_268.insert(UnderlyingStipValue_268.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_268);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_269;
      FIX::UnderlyingStipType UnderlyingStipType_269("STRING_654407280");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_269);
      UnderlyingStipulations_NoUnderlyingStips_269.insert(UnderlyingStipType_269.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_269("STRING_367813257");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_269);
      UnderlyingStipulations_NoUnderlyingStips_269.insert(UnderlyingStipValue_269.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_269);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_290;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_290("STRING_1969075941");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_290);
      UndlyInstrumentParties_NoUndlyInstrumentParties_290.insert(UnderlyingInstrumentPartyID_290.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_290('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_290);
      UndlyInstrumentParties_NoUndlyInstrumentParties_290.insert(UnderlyingInstrumentPartyIDSource_290.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_290(1417037746);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_290);
      UndlyInstrumentParties_NoUndlyInstrumentParties_290.insert(UnderlyingInstrumentPartyRole_290.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_290);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_551;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_551("STRING_1093463918");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_551);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_551.insert(UnderlyingInstrumentPartySubID_551.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_551(773844084);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_551);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_551.insert(UnderlyingInstrumentPartySubIDType_551.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_551);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_291;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_291("STRING_1287377644");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_291);
      UndlyInstrumentParties_NoUndlyInstrumentParties_291.insert(UnderlyingInstrumentPartyID_291.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_291('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_291);
      UndlyInstrumentParties_NoUndlyInstrumentParties_291.insert(UnderlyingInstrumentPartyIDSource_291.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_291(1143987058);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_291);
      UndlyInstrumentParties_NoUndlyInstrumentParties_291.insert(UnderlyingInstrumentPartyRole_291.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_291);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_552;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_552("STRING_1597809235");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_552);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_552.insert(UnderlyingInstrumentPartySubID_552.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_552(1801934083);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_552);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_552.insert(UnderlyingInstrumentPartySubIDType_552.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_552);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_553;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_553("STRING_1851102713");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_553);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_553.insert(UnderlyingInstrumentPartySubID_553.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_553(535570437);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_553);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_553.insert(UnderlyingInstrumentPartySubIDType_553.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_553);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_554;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_554("STRING_370876624");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_554);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_554.insert(UnderlyingInstrumentPartySubID_554.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_554(226000769);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_554);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_554.insert(UnderlyingInstrumentPartySubIDType_554.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_554);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_292;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_292("STRING_1798290704");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_292);
      UndlyInstrumentParties_NoUndlyInstrumentParties_292.insert(UnderlyingInstrumentPartyID_292.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_292('6');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_292);
      UndlyInstrumentParties_NoUndlyInstrumentParties_292.insert(UnderlyingInstrumentPartyIDSource_292.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_292(323255841);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_292);
      UndlyInstrumentParties_NoUndlyInstrumentParties_292.insert(UnderlyingInstrumentPartyRole_292.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_292);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_555;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_555("STRING_714326511");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_555);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_555.insert(UnderlyingInstrumentPartySubID_555.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_555(27757527);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_555);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_555.insert(UnderlyingInstrumentPartySubIDType_555.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_555);

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
