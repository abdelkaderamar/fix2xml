#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/MarketDataIncrementalRefresh.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDataIncrementalRefresh, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MarketDataIncrementalRefresh msg;

  list<multiset<string>> all_values;
  multiset<string> MarketDataIncrementalRefresh_0;
  FIX::ApplQueueDepth ApplQueueDepth_0(1288549407);
  msg.set(ApplQueueDepth_0);
  MarketDataIncrementalRefresh_0.insert(ApplQueueDepth_0.getString());
  FIX::ApplQueueResolution ApplQueueResolution_0(3);
  msg.set(ApplQueueResolution_0);
  MarketDataIncrementalRefresh_0.insert(ApplQueueResolution_0.getString());
  FIX::MDBookType MDBookType_12(2);
  msg.set(MDBookType_12);
  MarketDataIncrementalRefresh_0.insert(MDBookType_12.getString());
  FIX::MDFeedType MDFeedType_12("STRING_33896213");
  msg.set(MDFeedType_12);
  MarketDataIncrementalRefresh_0.insert(MDFeedType_12.getString());
  FIX::MDReqID MDReqID_0("STRING_26961621");
  msg.set(MDReqID_0);
  MarketDataIncrementalRefresh_0.insert(MDReqID_0.getString());
  FIX::TradeDate TradeDate_14("LOCALMKTDATE_938547997");
  msg.set(TradeDate_14);
  MarketDataIncrementalRefresh_0.insert(TradeDate_14.getString());
  all_values.push_back(MarketDataIncrementalRefresh_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_6;
  FIX::ApplID ApplID_6("STRING_1680281381");
  msg.set(ApplID_6);
  ApplicationSequenceControl_6.insert(ApplID_6.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_6(803021309);
  msg.set(ApplLastSeqNum_6);
  ApplicationSequenceControl_6.insert(ApplLastSeqNum_6.getString());
  FIX::ApplResendFlag ApplResendFlag_6(false);
  msg.set(ApplResendFlag_6);
  ApplicationSequenceControl_6.insert(ApplResendFlag_6.getString());
  FIX::ApplSeqNum ApplSeqNum_6(2064075607);
  msg.set(ApplSeqNum_6);
  ApplicationSequenceControl_6.insert(ApplSeqNum_6.getString());
  all_values.push_back(ApplicationSequenceControl_6);

  // MDIncGrp
  // Group MDIncGrp.NoMDEntries
  {
    FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries noMDEntries_0_0;
    // MDIncGrp.NoMDEntries
    multiset<string> MDIncGrp_NoMDEntries_0;
    FIX::CorporateAction CorporateAction_5("MULTIPLECHARVALUE_F");
    noMDEntries_0_0.set(CorporateAction_5);
    MDIncGrp_NoMDEntries_0.insert(CorporateAction_5.getString());
    FIX::Currency Currency_23("EUR");
    noMDEntries_0_0.set(Currency_23);
    MDIncGrp_NoMDEntries_0.insert(Currency_23.getString());
    FIX::DealingCapacity DealingCapacity_0('R');
    noMDEntries_0_0.set(DealingCapacity_0);
    MDIncGrp_NoMDEntries_0.insert(DealingCapacity_0.getString());
    FIX::DeleteReason DeleteReason_0('0');
    noMDEntries_0_0.set(DeleteReason_0);
    MDIncGrp_NoMDEntries_0.insert(DeleteReason_0.getString());
    FIX::DeskID DeskID_0("STRING_319779494");
    noMDEntries_0_0.set(DeskID_0);
    MDIncGrp_NoMDEntries_0.insert(DeskID_0.getString());
    FIX::EncodedText EncodedText_44("DATA_637611748");
    noMDEntries_0_0.set(EncodedText_44);
    MDIncGrp_NoMDEntries_0.insert(EncodedText_44.getString());
    FIX::EncodedTextLen EncodedTextLen_44(1598758973);
    noMDEntries_0_0.set(EncodedTextLen_44);
    MDIncGrp_NoMDEntries_0.insert(EncodedTextLen_44.getString());
    FIX::ExecInst ExecInst_2("MULTIPLECHARVALUE_N");
    noMDEntries_0_0.set(ExecInst_2);
    MDIncGrp_NoMDEntries_0.insert(ExecInst_2.getString());
    FIX::ExpireDate ExpireDate_3("LOCALMKTDATE_1971584215");
    noMDEntries_0_0.set(ExpireDate_3);
    MDIncGrp_NoMDEntries_0.insert(ExpireDate_3.getString());
    FIX::ExpireTime ExpireTime_4(FIX::UTCTIMESTAMP(6, 35, 59, 7, 11, 2005));
    noMDEntries_0_0.set(ExpireTime_4);
    MDIncGrp_NoMDEntries_0.insert(ExpireTime_4.getString());
    FIX::FinancialStatus FinancialStatus_2("MULTIPLECHARVALUE_2");
    noMDEntries_0_0.set(FinancialStatus_2);
    MDIncGrp_NoMDEntries_0.insert(FinancialStatus_2.getString());
    FIX::FirstPx FirstPx_0;
    FirstPx_0.setString("21430540");
    noMDEntries_0_0.set(FirstPx_0);
    MDIncGrp_NoMDEntries_0.insert(FirstPx_0.getString());
    FIX::HaltReasonInt HaltReasonInt_0(2);
    noMDEntries_0_0.set(HaltReasonInt_0);
    FIX::HighPx HighPx_0;
    HighPx_0.setString("14554899");
    noMDEntries_0_0.set(HighPx_0);
    MDIncGrp_NoMDEntries_0.insert(HighPx_0.getString());
    FIX::LastPx LastPx_9;
    LastPx_9.setString("11799369");
    noMDEntries_0_0.set(LastPx_9);
    MDIncGrp_NoMDEntries_0.insert(LastPx_9.getString());
    FIX::LocationID LocationID_0("STRING_1669423372");
    noMDEntries_0_0.set(LocationID_0);
    MDIncGrp_NoMDEntries_0.insert(LocationID_0.getString());
    FIX::LotType LotType_5('3');
    noMDEntries_0_0.set(LotType_5);
    MDIncGrp_NoMDEntries_0.insert(LotType_5.getString());
    FIX::LowPx LowPx_0;
    LowPx_0.setString("12068986");
    noMDEntries_0_0.set(LowPx_0);
    MDIncGrp_NoMDEntries_0.insert(LowPx_0.getString());
    FIX::MDEntryBuyer MDEntryBuyer_0("STRING_460487721");
    noMDEntries_0_0.set(MDEntryBuyer_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryBuyer_0.getString());
    FIX::MDEntryDate MDEntryDate_0(FIX::UTCDATEONLY(16, 4, 2008));
    noMDEntries_0_0.set(MDEntryDate_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryDate_0.getString());
    FIX::MDEntryForwardPoints MDEntryForwardPoints_0;
    MDEntryForwardPoints_0.setString("3445635");
    noMDEntries_0_0.set(MDEntryForwardPoints_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryForwardPoints_0.getString());
    FIX::MDEntryID MDEntryID_0("STRING_1321416303");
    noMDEntries_0_0.set(MDEntryID_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryID_0.getString());
    FIX::MDEntryOriginator MDEntryOriginator_0("STRING_2110373033");
    noMDEntries_0_0.set(MDEntryOriginator_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryOriginator_0.getString());
    FIX::MDEntryPositionNo MDEntryPositionNo_0(708486363);
    noMDEntries_0_0.set(MDEntryPositionNo_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryPositionNo_0.getString());
    FIX::MDEntryPx MDEntryPx_0;
    MDEntryPx_0.setString("4959704");
    noMDEntries_0_0.set(MDEntryPx_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryPx_0.getString());
    FIX::MDEntryRefID MDEntryRefID_0("STRING_271525286");
    noMDEntries_0_0.set(MDEntryRefID_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryRefID_0.getString());
    FIX::MDEntrySeller MDEntrySeller_0("STRING_1028265857");
    noMDEntries_0_0.set(MDEntrySeller_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntrySeller_0.getString());
    FIX::MDEntrySize MDEntrySize_0;
    MDEntrySize_0.setString("11335822");
    noMDEntries_0_0.set(MDEntrySize_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntrySize_0.getString());
    FIX::MDEntrySpotRate MDEntrySpotRate_0;
    MDEntrySpotRate_0.setString("18702842");
    noMDEntries_0_0.set(MDEntrySpotRate_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntrySpotRate_0.getString());
    FIX::MDEntryTime MDEntryTime_0(FIX::UTCTIMEONLY(16, 50, 19));
    noMDEntries_0_0.set(MDEntryTime_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryTime_0.getString());
    FIX::MDEntryType MDEntryType_0('7');
    noMDEntries_0_0.set(MDEntryType_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryType_0.getString());
    FIX::MDMkt MDMkt_0("EXCHANGE_959603389");
    noMDEntries_0_0.set(MDMkt_0);
    MDIncGrp_NoMDEntries_0.insert(MDMkt_0.getString());
    FIX::MDOriginType MDOriginType_0(2);
    noMDEntries_0_0.set(MDOriginType_0);
    MDIncGrp_NoMDEntries_0.insert(MDOriginType_0.getString());
    FIX::MDPriceLevel MDPriceLevel_0(306168609);
    noMDEntries_0_0.set(MDPriceLevel_0);
    MDIncGrp_NoMDEntries_0.insert(MDPriceLevel_0.getString());
    FIX::MDQuoteType MDQuoteType_0(4);
    noMDEntries_0_0.set(MDQuoteType_0);
    MDIncGrp_NoMDEntries_0.insert(MDQuoteType_0.getString());
    FIX::MDStreamID MDStreamID_0("STRING_1803420141");
    noMDEntries_0_0.set(MDStreamID_0);
    MDIncGrp_NoMDEntries_0.insert(MDStreamID_0.getString());
    FIX::MDSubBookType MDSubBookType_0(301739032);
    noMDEntries_0_0.set(MDSubBookType_0);
    MDIncGrp_NoMDEntries_0.insert(MDSubBookType_0.getString());
    FIX::MDUpdateAction MDUpdateAction_0('1');
    noMDEntries_0_0.set(MDUpdateAction_0);
    MDIncGrp_NoMDEntries_0.insert(MDUpdateAction_0.getString());
    FIX::MarketDepth MarketDepth_12(1111426394);
    noMDEntries_0_0.set(MarketDepth_12);
    MDIncGrp_NoMDEntries_0.insert(MarketDepth_12.getString());
    FIX::MatchType MatchType_14("STRING_A4");
    noMDEntries_0_0.set(MatchType_14);
    MDIncGrp_NoMDEntries_0.insert(MatchType_14.getString());
    FIX::MinQty MinQty_2;
    MinQty_2.setString("15273248");
    noMDEntries_0_0.set(MinQty_2);
    MDIncGrp_NoMDEntries_0.insert(MinQty_2.getString());
    FIX::NetChgPrevDay NetChgPrevDay_0;
    NetChgPrevDay_0.setString("4533288");
    noMDEntries_0_0.set(NetChgPrevDay_0);
    MDIncGrp_NoMDEntries_0.insert(NetChgPrevDay_0.getString());
    FIX::NumberOfOrders NumberOfOrders_0(541091000);
    noMDEntries_0_0.set(NumberOfOrders_0);
    MDIncGrp_NoMDEntries_0.insert(NumberOfOrders_0.getString());
    FIX::OpenCloseSettlFlag OpenCloseSettlFlag_0("MULTIPLECHARVALUE_1");
    noMDEntries_0_0.set(OpenCloseSettlFlag_0);
    MDIncGrp_NoMDEntries_0.insert(OpenCloseSettlFlag_0.getString());
    FIX::OrdType OrdType_13('4');
    noMDEntries_0_0.set(OrdType_13);
    MDIncGrp_NoMDEntries_0.insert(OrdType_13.getString());
    FIX::OrderCapacity OrderCapacity_5('R');
    noMDEntries_0_0.set(OrderCapacity_5);
    MDIncGrp_NoMDEntries_0.insert(OrderCapacity_5.getString());
    FIX::OrderID OrderID_25("STRING_1150075790");
    noMDEntries_0_0.set(OrderID_25);
    MDIncGrp_NoMDEntries_0.insert(OrderID_25.getString());
    FIX::PriceDelta PriceDelta_1;
    PriceDelta_1.setString("2668048");
    noMDEntries_0_0.set(PriceDelta_1);
    MDIncGrp_NoMDEntries_0.insert(PriceDelta_1.getString());
    FIX::PriceType PriceType_17(7);
    noMDEntries_0_0.set(PriceType_17);
    MDIncGrp_NoMDEntries_0.insert(PriceType_17.getString());
    FIX::QuoteCondition QuoteCondition_0("MULTIPLESTRINGVALUE_t");
    noMDEntries_0_0.set(QuoteCondition_0);
    MDIncGrp_NoMDEntries_0.insert(QuoteCondition_0.getString());
    FIX::QuoteEntryID QuoteEntryID_0("STRING_229694250");
    noMDEntries_0_0.set(QuoteEntryID_0);
    MDIncGrp_NoMDEntries_0.insert(QuoteEntryID_0.getString());
    FIX::RptSeq RptSeq_1(1456577151);
    noMDEntries_0_0.set(RptSeq_1);
    MDIncGrp_NoMDEntries_0.insert(RptSeq_1.getString());
    FIX::Scope Scope_0("MULTIPLECHARVALUE_2");
    noMDEntries_0_0.set(Scope_0);
    MDIncGrp_NoMDEntries_0.insert(Scope_0.getString());
    FIX::SecondaryOrderID SecondaryOrderID_20("STRING_501219536");
    noMDEntries_0_0.set(SecondaryOrderID_20);
    MDIncGrp_NoMDEntries_0.insert(SecondaryOrderID_20.getString());
    FIX::SecurityTradingStatus SecurityTradingStatus_0(13);
    noMDEntries_0_0.set(SecurityTradingStatus_0);
    MDIncGrp_NoMDEntries_0.insert(SecurityTradingStatus_0.getString());
    FIX::SellerDays SellerDays_0(1953561147);
    noMDEntries_0_0.set(SellerDays_0);
    MDIncGrp_NoMDEntries_0.insert(SellerDays_0.getString());
    FIX::SettlCurrency SettlCurrency_9("GBP");
    noMDEntries_0_0.set(SettlCurrency_9);
    MDIncGrp_NoMDEntries_0.insert(SettlCurrency_9.getString());
    FIX::SettlDate SettlDate_14("LOCALMKTDATE_763760291");
    noMDEntries_0_0.set(SettlDate_14);
    MDIncGrp_NoMDEntries_0.insert(SettlDate_14.getString());
    FIX::SettlType SettlType_8("STRING_9");
    noMDEntries_0_0.set(SettlType_8);
    MDIncGrp_NoMDEntries_0.insert(SettlType_8.getString());
    FIX::Text Text_44("STRING_772214041");
    noMDEntries_0_0.set(Text_44);
    MDIncGrp_NoMDEntries_0.insert(Text_44.getString());
    FIX::TickDirection TickDirection_0('2');
    noMDEntries_0_0.set(TickDirection_0);
    MDIncGrp_NoMDEntries_0.insert(TickDirection_0.getString());
    FIX::TimeInForce TimeInForce_11('6');
    noMDEntries_0_0.set(TimeInForce_11);
    MDIncGrp_NoMDEntries_0.insert(TimeInForce_11.getString());
    FIX::TradeCondition TradeCondition_0("MULTIPLESTRINGVALUE_P");
    noMDEntries_0_0.set(TradeCondition_0);
    MDIncGrp_NoMDEntries_0.insert(TradeCondition_0.getString());
    FIX::TradeID TradeID_6("STRING_1815618760");
    noMDEntries_0_0.set(TradeID_6);
    MDIncGrp_NoMDEntries_0.insert(TradeID_6.getString());
    FIX::TradeVolume TradeVolume_0;
    TradeVolume_0.setString("15134948");
    noMDEntries_0_0.set(TradeVolume_0);
    MDIncGrp_NoMDEntries_0.insert(TradeVolume_0.getString());
    FIX::TradingSessionID TradingSessionID_20("STRING_2");
    noMDEntries_0_0.set(TradingSessionID_20);
    MDIncGrp_NoMDEntries_0.insert(TradingSessionID_20.getString());
    FIX::TradingSessionSubID TradingSessionSubID_20("STRING_5");
    noMDEntries_0_0.set(TradingSessionSubID_20);
    MDIncGrp_NoMDEntries_0.insert(TradingSessionSubID_20.getString());
    FIX::TransBkdTime TransBkdTime_2(FIX::UTCTIMESTAMP(7, 53, 27, 23, 3, 2008));
    noMDEntries_0_0.set(TransBkdTime_2);
    MDIncGrp_NoMDEntries_0.insert(TransBkdTime_2.getString());
    FIX::TransactTime TransactTime_23(FIX::UTCTIMESTAMP(22, 4, 11, 11, 3, 2006));
    noMDEntries_0_0.set(TransactTime_23);
    MDIncGrp_NoMDEntries_0.insert(TransactTime_23.getString());
    FIX::TrdType TrdType_3(18);
    noMDEntries_0_0.set(TrdType_3);
    MDIncGrp_NoMDEntries_0.insert(TrdType_3.getString());
    all_values.push_back(MDIncGrp_NoMDEntries_0);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_52;
      FIX::EncodedLegIssuer EncodedLegIssuer_52("DATA_1807649498");
      noLegs_0_1_0.set(EncodedLegIssuer_52);
      InstrumentLeg_52.insert(EncodedLegIssuer_52.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_52(643228459);
      noLegs_0_1_0.set(EncodedLegIssuerLen_52);
      InstrumentLeg_52.insert(EncodedLegIssuerLen_52.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_52("DATA_544223364");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_52);
      InstrumentLeg_52.insert(EncodedLegSecurityDesc_52.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_52(2031669646);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_52);
      InstrumentLeg_52.insert(EncodedLegSecurityDescLen_52.getString());
      FIX::LegCFICode LegCFICode_52("STRING_1425534669");
      noLegs_0_1_0.set(LegCFICode_52);
      InstrumentLeg_52.insert(LegCFICode_52.getString());
      FIX::LegContractMultiplier LegContractMultiplier_52;
      LegContractMultiplier_52.setString("13079836");
      noLegs_0_1_0.set(LegContractMultiplier_52);
      InstrumentLeg_52.insert(LegContractMultiplier_52.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_52(252993755);
      noLegs_0_1_0.set(LegContractMultiplierUnit_52);
      InstrumentLeg_52.insert(LegContractMultiplierUnit_52.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_52("MONTHYEAR_50265063");
      noLegs_0_1_0.set(LegContractSettlMonth_52);
      InstrumentLeg_52.insert(LegContractSettlMonth_52.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_52("COUNTRY_669950158");
      noLegs_0_1_0.set(LegCountryOfIssue_52);
      InstrumentLeg_52.insert(LegCountryOfIssue_52.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_52("LOCALMKTDATE_1581404902");
      noLegs_0_1_0.set(LegCouponPaymentDate_52);
      InstrumentLeg_52.insert(LegCouponPaymentDate_52.getString());
      FIX::LegCouponRate LegCouponRate_52;
      LegCouponRate_52.setString("51.030000");
      noLegs_0_1_0.set(LegCouponRate_52);
      InstrumentLeg_52.insert(LegCouponRate_52.getString());
      FIX::LegCreditRating LegCreditRating_52("STRING_338085270");
      noLegs_0_1_0.set(LegCreditRating_52);
      InstrumentLeg_52.insert(LegCreditRating_52.getString());
      FIX::LegCurrency LegCurrency_52("EUR");
      noLegs_0_1_0.set(LegCurrency_52);
      InstrumentLeg_52.insert(LegCurrency_52.getString());
      FIX::LegDatedDate LegDatedDate_52("LOCALMKTDATE_307959414");
      noLegs_0_1_0.set(LegDatedDate_52);
      InstrumentLeg_52.insert(LegDatedDate_52.getString());
      FIX::LegExerciseStyle LegExerciseStyle_52(171328769);
      noLegs_0_1_0.set(LegExerciseStyle_52);
      InstrumentLeg_52.insert(LegExerciseStyle_52.getString());
      FIX::LegFactor LegFactor_52;
      LegFactor_52.setString("12571945");
      noLegs_0_1_0.set(LegFactor_52);
      InstrumentLeg_52.insert(LegFactor_52.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_52(1759509587);
      noLegs_0_1_0.set(LegFlowScheduleType_52);
      InstrumentLeg_52.insert(LegFlowScheduleType_52.getString());
      FIX::LegInstrRegistry LegInstrRegistry_52("STRING_922566236");
      noLegs_0_1_0.set(LegInstrRegistry_52);
      InstrumentLeg_52.insert(LegInstrRegistry_52.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_52("LOCALMKTDATE_591612704");
      noLegs_0_1_0.set(LegInterestAccrualDate_52);
      InstrumentLeg_52.insert(LegInterestAccrualDate_52.getString());
      FIX::LegIssueDate LegIssueDate_52("LOCALMKTDATE_1604667113");
      noLegs_0_1_0.set(LegIssueDate_52);
      InstrumentLeg_52.insert(LegIssueDate_52.getString());
      FIX::LegIssuer LegIssuer_52("STRING_1514132591");
      noLegs_0_1_0.set(LegIssuer_52);
      InstrumentLeg_52.insert(LegIssuer_52.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_52("STRING_1401543550");
      noLegs_0_1_0.set(LegLocaleOfIssue_52);
      InstrumentLeg_52.insert(LegLocaleOfIssue_52.getString());
      FIX::LegMaturityDate LegMaturityDate_52("LOCALMKTDATE_1853351920");
      noLegs_0_1_0.set(LegMaturityDate_52);
      InstrumentLeg_52.insert(LegMaturityDate_52.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_52("MONTHYEAR_1108291087");
      noLegs_0_1_0.set(LegMaturityMonthYear_52);
      InstrumentLeg_52.insert(LegMaturityMonthYear_52.getString());
      FIX::LegMaturityTime LegMaturityTime_52("TZTIMEONLY_330795614");
      noLegs_0_1_0.set(LegMaturityTime_52);
      InstrumentLeg_52.insert(LegMaturityTime_52.getString());
      FIX::LegOptAttribute LegOptAttribute_52('7');
      noLegs_0_1_0.set(LegOptAttribute_52);
      InstrumentLeg_52.insert(LegOptAttribute_52.getString());
      FIX::LegOptionRatio LegOptionRatio_52;
      LegOptionRatio_52.setString("10264580");
      noLegs_0_1_0.set(LegOptionRatio_52);
      InstrumentLeg_52.insert(LegOptionRatio_52.getString());
      FIX::LegPool LegPool_52("STRING_1637225576");
      noLegs_0_1_0.set(LegPool_52);
      InstrumentLeg_52.insert(LegPool_52.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_52("STRING_1008512965");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_52);
      InstrumentLeg_52.insert(LegPriceUnitOfMeasure_52.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_52;
      LegPriceUnitOfMeasureQty_52.setString("17646038");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_52);
      InstrumentLeg_52.insert(LegPriceUnitOfMeasureQty_52.getString());
      FIX::LegProduct LegProduct_52(1297391426);
      noLegs_0_1_0.set(LegProduct_52);
      InstrumentLeg_52.insert(LegProduct_52.getString());
      FIX::LegPutOrCall LegPutOrCall_52(1651741425);
      noLegs_0_1_0.set(LegPutOrCall_52);
      InstrumentLeg_52.insert(LegPutOrCall_52.getString());
      FIX::LegRatioQty LegRatioQty_52;
      LegRatioQty_52.setString("1613436");
      noLegs_0_1_0.set(LegRatioQty_52);
      InstrumentLeg_52.insert(LegRatioQty_52.getString());
      FIX::LegRedemptionDate LegRedemptionDate_52("LOCALMKTDATE_1181577424");
      noLegs_0_1_0.set(LegRedemptionDate_52);
      InstrumentLeg_52.insert(LegRedemptionDate_52.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_52("STRING_929792446");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_52);
      InstrumentLeg_52.insert(LegRepoCollateralSecurityType_52.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_52;
      LegRepurchaseRate_52.setString("72.650000");
      noLegs_0_1_0.set(LegRepurchaseRate_52);
      InstrumentLeg_52.insert(LegRepurchaseRate_52.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_52(1434571180);
      noLegs_0_1_0.set(LegRepurchaseTerm_52);
      InstrumentLeg_52.insert(LegRepurchaseTerm_52.getString());
      FIX::LegSecurityDesc LegSecurityDesc_52("STRING_980057509");
      noLegs_0_1_0.set(LegSecurityDesc_52);
      InstrumentLeg_52.insert(LegSecurityDesc_52.getString());
      FIX::LegSecurityExchange LegSecurityExchange_52("EXCHANGE_2139277423");
      noLegs_0_1_0.set(LegSecurityExchange_52);
      InstrumentLeg_52.insert(LegSecurityExchange_52.getString());
      FIX::LegSecurityID LegSecurityID_52("STRING_868492434");
      noLegs_0_1_0.set(LegSecurityID_52);
      InstrumentLeg_52.insert(LegSecurityID_52.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_52("STRING_1291532613");
      noLegs_0_1_0.set(LegSecurityIDSource_52);
      InstrumentLeg_52.insert(LegSecurityIDSource_52.getString());
      FIX::LegSecuritySubType LegSecuritySubType_52("STRING_329879045");
      noLegs_0_1_0.set(LegSecuritySubType_52);
      InstrumentLeg_52.insert(LegSecuritySubType_52.getString());
      FIX::LegSecurityType LegSecurityType_52("STRING_1815908549");
      noLegs_0_1_0.set(LegSecurityType_52);
      InstrumentLeg_52.insert(LegSecurityType_52.getString());
      FIX::LegSide LegSide_52('1');
      noLegs_0_1_0.set(LegSide_52);
      InstrumentLeg_52.insert(LegSide_52.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_52("STRING_637838459");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_52);
      InstrumentLeg_52.insert(LegStateOrProvinceOfIssue_52.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_52("JPY");
      noLegs_0_1_0.set(LegStrikeCurrency_52);
      InstrumentLeg_52.insert(LegStrikeCurrency_52.getString());
      FIX::LegStrikePrice LegStrikePrice_52;
      LegStrikePrice_52.setString("2498643");
      noLegs_0_1_0.set(LegStrikePrice_52);
      InstrumentLeg_52.insert(LegStrikePrice_52.getString());
      FIX::LegSymbol LegSymbol_52("STRING_762319906");
      noLegs_0_1_0.set(LegSymbol_52);
      InstrumentLeg_52.insert(LegSymbol_52.getString());
      FIX::LegSymbolSfx LegSymbolSfx_52("STRING_1221477870");
      noLegs_0_1_0.set(LegSymbolSfx_52);
      InstrumentLeg_52.insert(LegSymbolSfx_52.getString());
      FIX::LegTimeUnit LegTimeUnit_52("STRING_1854531512");
      noLegs_0_1_0.set(LegTimeUnit_52);
      InstrumentLeg_52.insert(LegTimeUnit_52.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_52("STRING_128968849");
      noLegs_0_1_0.set(LegUnitOfMeasure_52);
      InstrumentLeg_52.insert(LegUnitOfMeasure_52.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_52;
      LegUnitOfMeasureQty_52.setString("4755377");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_52);
      InstrumentLeg_52.insert(LegUnitOfMeasureQty_52.getString());
      all_values.push_back(InstrumentLeg_52);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_96;
        FIX::LegSecurityAltID LegSecurityAltID_96("STRING_1237259937");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_96);
        LegSecAltIDGrp_NoLegSecurityAltID_96.insert(LegSecurityAltID_96.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_96("STRING_806333387");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_96);
        LegSecAltIDGrp_NoLegSecurityAltID_96.insert(LegSecurityAltIDSource_96.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_96);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_97;
        FIX::LegSecurityAltID LegSecurityAltID_97("STRING_115560003");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_97);
        LegSecAltIDGrp_NoLegSecurityAltID_97.insert(LegSecurityAltID_97.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_97("STRING_116234318");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_97);
        LegSecAltIDGrp_NoLegSecurityAltID_97.insert(LegSecurityAltIDSource_97.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_97);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      noMDEntries_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_53;
      FIX::EncodedLegIssuer EncodedLegIssuer_53("DATA_296075315");
      noLegs_0_1_1.set(EncodedLegIssuer_53);
      InstrumentLeg_53.insert(EncodedLegIssuer_53.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_53(1124072969);
      noLegs_0_1_1.set(EncodedLegIssuerLen_53);
      InstrumentLeg_53.insert(EncodedLegIssuerLen_53.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_53("DATA_1880838212");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_53);
      InstrumentLeg_53.insert(EncodedLegSecurityDesc_53.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_53(1593466741);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_53);
      InstrumentLeg_53.insert(EncodedLegSecurityDescLen_53.getString());
      FIX::LegCFICode LegCFICode_53("STRING_628330746");
      noLegs_0_1_1.set(LegCFICode_53);
      InstrumentLeg_53.insert(LegCFICode_53.getString());
      FIX::LegContractMultiplier LegContractMultiplier_53;
      LegContractMultiplier_53.setString("20421818");
      noLegs_0_1_1.set(LegContractMultiplier_53);
      InstrumentLeg_53.insert(LegContractMultiplier_53.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_53(627560518);
      noLegs_0_1_1.set(LegContractMultiplierUnit_53);
      InstrumentLeg_53.insert(LegContractMultiplierUnit_53.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_53("MONTHYEAR_1558123192");
      noLegs_0_1_1.set(LegContractSettlMonth_53);
      InstrumentLeg_53.insert(LegContractSettlMonth_53.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_53("COUNTRY_1364025440");
      noLegs_0_1_1.set(LegCountryOfIssue_53);
      InstrumentLeg_53.insert(LegCountryOfIssue_53.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_53("LOCALMKTDATE_2062131698");
      noLegs_0_1_1.set(LegCouponPaymentDate_53);
      InstrumentLeg_53.insert(LegCouponPaymentDate_53.getString());
      FIX::LegCouponRate LegCouponRate_53;
      LegCouponRate_53.setString("70.540000");
      noLegs_0_1_1.set(LegCouponRate_53);
      InstrumentLeg_53.insert(LegCouponRate_53.getString());
      FIX::LegCreditRating LegCreditRating_53("STRING_1355819215");
      noLegs_0_1_1.set(LegCreditRating_53);
      InstrumentLeg_53.insert(LegCreditRating_53.getString());
      FIX::LegCurrency LegCurrency_53("EUR");
      noLegs_0_1_1.set(LegCurrency_53);
      InstrumentLeg_53.insert(LegCurrency_53.getString());
      FIX::LegDatedDate LegDatedDate_53("LOCALMKTDATE_1685698261");
      noLegs_0_1_1.set(LegDatedDate_53);
      InstrumentLeg_53.insert(LegDatedDate_53.getString());
      FIX::LegExerciseStyle LegExerciseStyle_53(451565385);
      noLegs_0_1_1.set(LegExerciseStyle_53);
      InstrumentLeg_53.insert(LegExerciseStyle_53.getString());
      FIX::LegFactor LegFactor_53;
      LegFactor_53.setString("10549002");
      noLegs_0_1_1.set(LegFactor_53);
      InstrumentLeg_53.insert(LegFactor_53.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_53(176053072);
      noLegs_0_1_1.set(LegFlowScheduleType_53);
      InstrumentLeg_53.insert(LegFlowScheduleType_53.getString());
      FIX::LegInstrRegistry LegInstrRegistry_53("STRING_291319055");
      noLegs_0_1_1.set(LegInstrRegistry_53);
      InstrumentLeg_53.insert(LegInstrRegistry_53.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_53("LOCALMKTDATE_1684765435");
      noLegs_0_1_1.set(LegInterestAccrualDate_53);
      InstrumentLeg_53.insert(LegInterestAccrualDate_53.getString());
      FIX::LegIssueDate LegIssueDate_53("LOCALMKTDATE_425917471");
      noLegs_0_1_1.set(LegIssueDate_53);
      InstrumentLeg_53.insert(LegIssueDate_53.getString());
      FIX::LegIssuer LegIssuer_53("STRING_1053638961");
      noLegs_0_1_1.set(LegIssuer_53);
      InstrumentLeg_53.insert(LegIssuer_53.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_53("STRING_758759658");
      noLegs_0_1_1.set(LegLocaleOfIssue_53);
      InstrumentLeg_53.insert(LegLocaleOfIssue_53.getString());
      FIX::LegMaturityDate LegMaturityDate_53("LOCALMKTDATE_132965336");
      noLegs_0_1_1.set(LegMaturityDate_53);
      InstrumentLeg_53.insert(LegMaturityDate_53.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_53("MONTHYEAR_1182607811");
      noLegs_0_1_1.set(LegMaturityMonthYear_53);
      InstrumentLeg_53.insert(LegMaturityMonthYear_53.getString());
      FIX::LegMaturityTime LegMaturityTime_53("TZTIMEONLY_1234297431");
      noLegs_0_1_1.set(LegMaturityTime_53);
      InstrumentLeg_53.insert(LegMaturityTime_53.getString());
      FIX::LegOptAttribute LegOptAttribute_53('1');
      noLegs_0_1_1.set(LegOptAttribute_53);
      InstrumentLeg_53.insert(LegOptAttribute_53.getString());
      FIX::LegOptionRatio LegOptionRatio_53;
      LegOptionRatio_53.setString("2723841");
      noLegs_0_1_1.set(LegOptionRatio_53);
      InstrumentLeg_53.insert(LegOptionRatio_53.getString());
      FIX::LegPool LegPool_53("STRING_2040630818");
      noLegs_0_1_1.set(LegPool_53);
      InstrumentLeg_53.insert(LegPool_53.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_53("STRING_1808925124");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_53);
      InstrumentLeg_53.insert(LegPriceUnitOfMeasure_53.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_53;
      LegPriceUnitOfMeasureQty_53.setString("3886184");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_53);
      InstrumentLeg_53.insert(LegPriceUnitOfMeasureQty_53.getString());
      FIX::LegProduct LegProduct_53(189222485);
      noLegs_0_1_1.set(LegProduct_53);
      InstrumentLeg_53.insert(LegProduct_53.getString());
      FIX::LegPutOrCall LegPutOrCall_53(785514445);
      noLegs_0_1_1.set(LegPutOrCall_53);
      InstrumentLeg_53.insert(LegPutOrCall_53.getString());
      FIX::LegRatioQty LegRatioQty_53;
      LegRatioQty_53.setString("1219729");
      noLegs_0_1_1.set(LegRatioQty_53);
      InstrumentLeg_53.insert(LegRatioQty_53.getString());
      FIX::LegRedemptionDate LegRedemptionDate_53("LOCALMKTDATE_1782689226");
      noLegs_0_1_1.set(LegRedemptionDate_53);
      InstrumentLeg_53.insert(LegRedemptionDate_53.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_53("STRING_1413845191");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_53);
      InstrumentLeg_53.insert(LegRepoCollateralSecurityType_53.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_53;
      LegRepurchaseRate_53.setString("11.570000");
      noLegs_0_1_1.set(LegRepurchaseRate_53);
      InstrumentLeg_53.insert(LegRepurchaseRate_53.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_53(262766096);
      noLegs_0_1_1.set(LegRepurchaseTerm_53);
      InstrumentLeg_53.insert(LegRepurchaseTerm_53.getString());
      FIX::LegSecurityDesc LegSecurityDesc_53("STRING_824484735");
      noLegs_0_1_1.set(LegSecurityDesc_53);
      InstrumentLeg_53.insert(LegSecurityDesc_53.getString());
      FIX::LegSecurityExchange LegSecurityExchange_53("EXCHANGE_1380696597");
      noLegs_0_1_1.set(LegSecurityExchange_53);
      InstrumentLeg_53.insert(LegSecurityExchange_53.getString());
      FIX::LegSecurityID LegSecurityID_53("STRING_177414146");
      noLegs_0_1_1.set(LegSecurityID_53);
      InstrumentLeg_53.insert(LegSecurityID_53.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_53("STRING_1215181789");
      noLegs_0_1_1.set(LegSecurityIDSource_53);
      InstrumentLeg_53.insert(LegSecurityIDSource_53.getString());
      FIX::LegSecuritySubType LegSecuritySubType_53("STRING_589032165");
      noLegs_0_1_1.set(LegSecuritySubType_53);
      InstrumentLeg_53.insert(LegSecuritySubType_53.getString());
      FIX::LegSecurityType LegSecurityType_53("STRING_960554630");
      noLegs_0_1_1.set(LegSecurityType_53);
      InstrumentLeg_53.insert(LegSecurityType_53.getString());
      FIX::LegSide LegSide_53('7');
      noLegs_0_1_1.set(LegSide_53);
      InstrumentLeg_53.insert(LegSide_53.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_53("STRING_127246778");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_53);
      InstrumentLeg_53.insert(LegStateOrProvinceOfIssue_53.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_53("CHF");
      noLegs_0_1_1.set(LegStrikeCurrency_53);
      InstrumentLeg_53.insert(LegStrikeCurrency_53.getString());
      FIX::LegStrikePrice LegStrikePrice_53;
      LegStrikePrice_53.setString("3032998");
      noLegs_0_1_1.set(LegStrikePrice_53);
      InstrumentLeg_53.insert(LegStrikePrice_53.getString());
      FIX::LegSymbol LegSymbol_53("STRING_1703439070");
      noLegs_0_1_1.set(LegSymbol_53);
      InstrumentLeg_53.insert(LegSymbol_53.getString());
      FIX::LegSymbolSfx LegSymbolSfx_53("STRING_1342109865");
      noLegs_0_1_1.set(LegSymbolSfx_53);
      InstrumentLeg_53.insert(LegSymbolSfx_53.getString());
      FIX::LegTimeUnit LegTimeUnit_53("STRING_729217322");
      noLegs_0_1_1.set(LegTimeUnit_53);
      InstrumentLeg_53.insert(LegTimeUnit_53.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_53("STRING_609594384");
      noLegs_0_1_1.set(LegUnitOfMeasure_53);
      InstrumentLeg_53.insert(LegUnitOfMeasure_53.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_53;
      LegUnitOfMeasureQty_53.setString("21008695");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_53);
      InstrumentLeg_53.insert(LegUnitOfMeasureQty_53.getString());
      all_values.push_back(InstrumentLeg_53);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_98;
        FIX::LegSecurityAltID LegSecurityAltID_98("STRING_1792202195");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_98);
        LegSecAltIDGrp_NoLegSecurityAltID_98.insert(LegSecurityAltID_98.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_98("STRING_1187683306");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_98);
        LegSecAltIDGrp_NoLegSecurityAltID_98.insert(LegSecurityAltIDSource_98.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_98);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_99;
        FIX::LegSecurityAltID LegSecurityAltID_99("STRING_408064130");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltID_99);
        LegSecAltIDGrp_NoLegSecurityAltID_99.insert(LegSecurityAltID_99.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_99("STRING_2064586295");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltIDSource_99);
        LegSecAltIDGrp_NoLegSecurityAltID_99.insert(LegSecurityAltIDSource_99.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_99);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      noMDEntries_0_0.addGroup(noLegs_0_1_1);
    }
    // Instrument
    multiset<string> Instrument_30;
    FIX::AttachmentPoint AttachmentPoint_30;
    AttachmentPoint_30.setString("4.760000");
    noMDEntries_0_0.set(AttachmentPoint_30);
    Instrument_30.insert(AttachmentPoint_30.getString());
    FIX::CFICode CFICode_30("STRING_69505606");
    noMDEntries_0_0.set(CFICode_30);
    Instrument_30.insert(CFICode_30.getString());
    FIX::CPProgram CPProgram_30(99);
    noMDEntries_0_0.set(CPProgram_30);
    Instrument_30.insert(CPProgram_30.getString());
    FIX::CPRegType CPRegType_30("STRING_1270052961");
    noMDEntries_0_0.set(CPRegType_30);
    Instrument_30.insert(CPRegType_30.getString());
    FIX::CapPrice CapPrice_30;
    CapPrice_30.setString("8550200");
    noMDEntries_0_0.set(CapPrice_30);
    Instrument_30.insert(CapPrice_30.getString());
    FIX::ContractMultiplier ContractMultiplier_30;
    ContractMultiplier_30.setString("4276940");
    noMDEntries_0_0.set(ContractMultiplier_30);
    Instrument_30.insert(ContractMultiplier_30.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_30(1);
    noMDEntries_0_0.set(ContractMultiplierUnit_30);
    Instrument_30.insert(ContractMultiplierUnit_30.getString());
    FIX::ContractSettlMonth ContractSettlMonth_30("MONTHYEAR_121381594");
    noMDEntries_0_0.set(ContractSettlMonth_30);
    Instrument_30.insert(ContractSettlMonth_30.getString());
    FIX::CountryOfIssue CountryOfIssue_30("COUNTRY_444365206");
    noMDEntries_0_0.set(CountryOfIssue_30);
    Instrument_30.insert(CountryOfIssue_30.getString());
    FIX::CouponPaymentDate CouponPaymentDate_30("LOCALMKTDATE_1168024636");
    noMDEntries_0_0.set(CouponPaymentDate_30);
    Instrument_30.insert(CouponPaymentDate_30.getString());
    FIX::CouponRate CouponRate_30;
    CouponRate_30.setString("63.300000");
    noMDEntries_0_0.set(CouponRate_30);
    Instrument_30.insert(CouponRate_30.getString());
    FIX::CreditRating CreditRating_30("STRING_1825061803");
    noMDEntries_0_0.set(CreditRating_30);
    Instrument_30.insert(CreditRating_30.getString());
    FIX::DatedDate DatedDate_30("LOCALMKTDATE_1345438782");
    noMDEntries_0_0.set(DatedDate_30);
    Instrument_30.insert(DatedDate_30.getString());
    FIX::DetachmentPoint DetachmentPoint_30;
    DetachmentPoint_30.setString("44.710000");
    noMDEntries_0_0.set(DetachmentPoint_30);
    Instrument_30.insert(DetachmentPoint_30.getString());
    FIX::EncodedIssuer EncodedIssuer_30("DATA_266610320");
    noMDEntries_0_0.set(EncodedIssuer_30);
    Instrument_30.insert(EncodedIssuer_30.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_30(158509765);
    noMDEntries_0_0.set(EncodedIssuerLen_30);
    Instrument_30.insert(EncodedIssuerLen_30.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_30("DATA_763492280");
    noMDEntries_0_0.set(EncodedSecurityDesc_30);
    Instrument_30.insert(EncodedSecurityDesc_30.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_30(393857098);
    noMDEntries_0_0.set(EncodedSecurityDescLen_30);
    Instrument_30.insert(EncodedSecurityDescLen_30.getString());
    FIX::ExerciseStyle ExerciseStyle_30(0);
    noMDEntries_0_0.set(ExerciseStyle_30);
    Instrument_30.insert(ExerciseStyle_30.getString());
    FIX::Factor Factor_30;
    Factor_30.setString("4208367");
    noMDEntries_0_0.set(Factor_30);
    Instrument_30.insert(Factor_30.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_30(false);
    noMDEntries_0_0.set(FlexProductEligibilityIndicator_30);
    Instrument_30.insert(FlexProductEligibilityIndicator_30.getString());
    FIX::FlexibleIndicator FlexibleIndicator_30(false);
    noMDEntries_0_0.set(FlexibleIndicator_30);
    Instrument_30.insert(FlexibleIndicator_30.getString());
    FIX::FloorPrice FloorPrice_30;
    FloorPrice_30.setString("17629465");
    noMDEntries_0_0.set(FloorPrice_30);
    Instrument_30.insert(FloorPrice_30.getString());
    FIX::FlowScheduleType FlowScheduleType_30(1);
    noMDEntries_0_0.set(FlowScheduleType_30);
    Instrument_30.insert(FlowScheduleType_30.getString());
    FIX::InstrRegistry InstrRegistry_30("STRING_1736179587");
    noMDEntries_0_0.set(InstrRegistry_30);
    Instrument_30.insert(InstrRegistry_30.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_30('1');
    noMDEntries_0_0.set(InstrmtAssignmentMethod_30);
    Instrument_30.insert(InstrmtAssignmentMethod_30.getString());
    FIX::InterestAccrualDate InterestAccrualDate_30("LOCALMKTDATE_141073281");
    noMDEntries_0_0.set(InterestAccrualDate_30);
    Instrument_30.insert(InterestAccrualDate_30.getString());
    FIX::IssueDate IssueDate_30("LOCALMKTDATE_1380898134");
    noMDEntries_0_0.set(IssueDate_30);
    Instrument_30.insert(IssueDate_30.getString());
    FIX::Issuer Issuer_30("STRING_756532107");
    noMDEntries_0_0.set(Issuer_30);
    Instrument_30.insert(Issuer_30.getString());
    FIX::ListMethod ListMethod_30(1);
    noMDEntries_0_0.set(ListMethod_30);
    Instrument_30.insert(ListMethod_30.getString());
    FIX::LocaleOfIssue LocaleOfIssue_30("STRING_1298000781");
    noMDEntries_0_0.set(LocaleOfIssue_30);
    Instrument_30.insert(LocaleOfIssue_30.getString());
    FIX::MaturityDate MaturityDate_30("LOCALMKTDATE_1837362583");
    noMDEntries_0_0.set(MaturityDate_30);
    Instrument_30.insert(MaturityDate_30.getString());
    FIX::MaturityMonthYear MaturityMonthYear_30("MONTHYEAR_618643018");
    noMDEntries_0_0.set(MaturityMonthYear_30);
    Instrument_30.insert(MaturityMonthYear_30.getString());
    FIX::MaturityTime MaturityTime_30("TZTIMEONLY_1603721846");
    noMDEntries_0_0.set(MaturityTime_30);
    Instrument_30.insert(MaturityTime_30.getString());
    FIX::MinPriceIncrement MinPriceIncrement_30;
    MinPriceIncrement_30.setString("9599318");
    noMDEntries_0_0.set(MinPriceIncrement_30);
    Instrument_30.insert(MinPriceIncrement_30.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_30;
    MinPriceIncrementAmount_30.setString("14736630");
    noMDEntries_0_0.set(MinPriceIncrementAmount_30);
    Instrument_30.insert(MinPriceIncrementAmount_30.getString());
    FIX::NTPositionLimit NTPositionLimit_30(2031415895);
    noMDEntries_0_0.set(NTPositionLimit_30);
    Instrument_30.insert(NTPositionLimit_30.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_30;
    NotionalPercentageOutstanding_30.setString("4.360000");
    noMDEntries_0_0.set(NotionalPercentageOutstanding_30);
    Instrument_30.insert(NotionalPercentageOutstanding_30.getString());
    FIX::OptAttribute OptAttribute_30('1');
    noMDEntries_0_0.set(OptAttribute_30);
    Instrument_30.insert(OptAttribute_30.getString());
    FIX::OptPayoutAmount OptPayoutAmount_30;
    OptPayoutAmount_30.setString("3282974");
    noMDEntries_0_0.set(OptPayoutAmount_30);
    Instrument_30.insert(OptPayoutAmount_30.getString());
    FIX::OptPayoutType OptPayoutType_30(1);
    noMDEntries_0_0.set(OptPayoutType_30);
    Instrument_30.insert(OptPayoutType_30.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_30;
    OriginalNotionalPercentageOutstanding_30.setString("73.460000");
    noMDEntries_0_0.set(OriginalNotionalPercentageOutstanding_30);
    Instrument_30.insert(OriginalNotionalPercentageOutstanding_30.getString());
    FIX::Pool Pool_30("STRING_5875608");
    noMDEntries_0_0.set(Pool_30);
    Instrument_30.insert(Pool_30.getString());
    FIX::PositionLimit PositionLimit_30(83686558);
    noMDEntries_0_0.set(PositionLimit_30);
    Instrument_30.insert(PositionLimit_30.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_30("STRING_INX");
    noMDEntries_0_0.set(PriceQuoteMethod_30);
    Instrument_30.insert(PriceQuoteMethod_30.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_30("STRING_272485929");
    noMDEntries_0_0.set(PriceUnitOfMeasure_30);
    Instrument_30.insert(PriceUnitOfMeasure_30.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_30;
    PriceUnitOfMeasureQty_30.setString("2421963");
    noMDEntries_0_0.set(PriceUnitOfMeasureQty_30);
    Instrument_30.insert(PriceUnitOfMeasureQty_30.getString());
    FIX::Product Product_32(4);
    noMDEntries_0_0.set(Product_32);
    Instrument_30.insert(Product_32.getString());
    FIX::ProductComplex ProductComplex_30("STRING_666343027");
    noMDEntries_0_0.set(ProductComplex_30);
    Instrument_30.insert(ProductComplex_30.getString());
    FIX::PutOrCall PutOrCall_30(0);
    noMDEntries_0_0.set(PutOrCall_30);
    Instrument_30.insert(PutOrCall_30.getString());
    FIX::RedemptionDate RedemptionDate_30("LOCALMKTDATE_1591320807");
    noMDEntries_0_0.set(RedemptionDate_30);
    Instrument_30.insert(RedemptionDate_30.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_30("STRING_1363499976");
    noMDEntries_0_0.set(RepoCollateralSecurityType_30);
    Instrument_30.insert(RepoCollateralSecurityType_30.getString());
    FIX::RepurchaseRate RepurchaseRate_30;
    RepurchaseRate_30.setString("76.590000");
    noMDEntries_0_0.set(RepurchaseRate_30);
    Instrument_30.insert(RepurchaseRate_30.getString());
    FIX::RepurchaseTerm RepurchaseTerm_30(1206783733);
    noMDEntries_0_0.set(RepurchaseTerm_30);
    Instrument_30.insert(RepurchaseTerm_30.getString());
    FIX::RestructuringType RestructuringType_30("STRING_XR");
    noMDEntries_0_0.set(RestructuringType_30);
    Instrument_30.insert(RestructuringType_30.getString());
    FIX::SecurityDesc SecurityDesc_30("STRING_380623598");
    noMDEntries_0_0.set(SecurityDesc_30);
    Instrument_30.insert(SecurityDesc_30.getString());
    FIX::SecurityExchange SecurityExchange_30("EXCHANGE_775632535");
    noMDEntries_0_0.set(SecurityExchange_30);
    Instrument_30.insert(SecurityExchange_30.getString());
    FIX::SecurityGroup SecurityGroup_30("STRING_783463880");
    noMDEntries_0_0.set(SecurityGroup_30);
    Instrument_30.insert(SecurityGroup_30.getString());
    FIX::SecurityID SecurityID_30("STRING_1761521732");
    noMDEntries_0_0.set(SecurityID_30);
    Instrument_30.insert(SecurityID_30.getString());
    FIX::SecurityIDSource SecurityIDSource_30("STRING_9");
    noMDEntries_0_0.set(SecurityIDSource_30);
    Instrument_30.insert(SecurityIDSource_30.getString());
    FIX::SecurityStatus SecurityStatus_30("STRING_1");
    noMDEntries_0_0.set(SecurityStatus_30);
    Instrument_30.insert(SecurityStatus_30.getString());
    FIX::SecuritySubType SecuritySubType_31("STRING_912038865");
    noMDEntries_0_0.set(SecuritySubType_31);
    Instrument_30.insert(SecuritySubType_31.getString());
    FIX::SecurityType SecurityType_32("STRING_BN");
    noMDEntries_0_0.set(SecurityType_32);
    Instrument_30.insert(SecurityType_32.getString());
    FIX::Seniority Seniority_30("STRING_SD");
    noMDEntries_0_0.set(Seniority_30);
    Instrument_30.insert(Seniority_30.getString());
    FIX::SettlMethod SettlMethod_30('P');
    noMDEntries_0_0.set(SettlMethod_30);
    Instrument_30.insert(SettlMethod_30.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_30("STRING_34491826");
    noMDEntries_0_0.set(SettleOnOpenFlag_30);
    Instrument_30.insert(SettleOnOpenFlag_30.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_30("STRING_1277423731");
    noMDEntries_0_0.set(StateOrProvinceOfIssue_30);
    Instrument_30.insert(StateOrProvinceOfIssue_30.getString());
    FIX::StrikeCurrency StrikeCurrency_30("GBP");
    noMDEntries_0_0.set(StrikeCurrency_30);
    Instrument_30.insert(StrikeCurrency_30.getString());
    FIX::StrikeMultiplier StrikeMultiplier_30;
    StrikeMultiplier_30.setString("7249847");
    noMDEntries_0_0.set(StrikeMultiplier_30);
    Instrument_30.insert(StrikeMultiplier_30.getString());
    FIX::StrikePrice StrikePrice_30;
    StrikePrice_30.setString("5805067");
    noMDEntries_0_0.set(StrikePrice_30);
    Instrument_30.insert(StrikePrice_30.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_30(4);
    noMDEntries_0_0.set(StrikePriceBoundaryMethod_30);
    Instrument_30.insert(StrikePriceBoundaryMethod_30.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_30;
    StrikePriceBoundaryPrecision_30.setString("20.930000");
    noMDEntries_0_0.set(StrikePriceBoundaryPrecision_30);
    Instrument_30.insert(StrikePriceBoundaryPrecision_30.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_30(1);
    noMDEntries_0_0.set(StrikePriceDeterminationMethod_30);
    Instrument_30.insert(StrikePriceDeterminationMethod_30.getString());
    FIX::StrikeValue StrikeValue_30;
    StrikeValue_30.setString("7216165");
    noMDEntries_0_0.set(StrikeValue_30);
    Instrument_30.insert(StrikeValue_30.getString());
    FIX::Symbol Symbol_30("STRING_1525403911");
    noMDEntries_0_0.set(Symbol_30);
    Instrument_30.insert(Symbol_30.getString());
    FIX::SymbolSfx SymbolSfx_30("STRING_WI");
    noMDEntries_0_0.set(SymbolSfx_30);
    Instrument_30.insert(SymbolSfx_30.getString());
    FIX::TimeUnit TimeUnit_30("STRING_H");
    noMDEntries_0_0.set(TimeUnit_30);
    Instrument_30.insert(TimeUnit_30.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_30(1);
    noMDEntries_0_0.set(UnderlyingPriceDeterminationMethod_30);
    Instrument_30.insert(UnderlyingPriceDeterminationMethod_30.getString());
    FIX::UnitOfMeasure UnitOfMeasure_30("STRING_Bbl");
    noMDEntries_0_0.set(UnitOfMeasure_30);
    Instrument_30.insert(UnitOfMeasure_30.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_30;
    UnitOfMeasureQty_30.setString("6291553");
    noMDEntries_0_0.set(UnitOfMeasureQty_30);
    Instrument_30.insert(UnitOfMeasureQty_30.getString());
    FIX::ValuationMethod ValuationMethod_30("STRING_FUTDA");
    noMDEntries_0_0.set(ValuationMethod_30);
    Instrument_30.insert(ValuationMethod_30.getString());
    all_values.push_back(Instrument_30);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_54;
      FIX::ComplexEventCondition ComplexEventCondition_54(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_54);
      ComplexEvents_NoComplexEvents_54.insert(ComplexEventCondition_54.getString());
      FIX::ComplexEventPrice ComplexEventPrice_54;
      ComplexEventPrice_54.setString("11990252");
      noComplexEvents_0_1_0.set(ComplexEventPrice_54);
      ComplexEvents_NoComplexEvents_54.insert(ComplexEventPrice_54.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_54(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_54);
      ComplexEvents_NoComplexEvents_54.insert(ComplexEventPriceBoundaryMethod_54.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_54;
      ComplexEventPriceBoundaryPrecision_54.setString("66.330000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_54);
      ComplexEvents_NoComplexEvents_54.insert(ComplexEventPriceBoundaryPrecision_54.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_54(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_54);
      ComplexEvents_NoComplexEvents_54.insert(ComplexEventPriceTimeType_54.getString());
      FIX::ComplexEventType ComplexEventType_54(9);
      noComplexEvents_0_1_0.set(ComplexEventType_54);
      ComplexEvents_NoComplexEvents_54.insert(ComplexEventType_54.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_54;
      ComplexOptPayoutAmount_54.setString("14157447");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_54);
      ComplexEvents_NoComplexEvents_54.insert(ComplexOptPayoutAmount_54.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_54);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_105;
        FIX::ComplexEventEndDate ComplexEventEndDate_105(FIX::UTCTIMESTAMP(6, 12, 23, 18, 12, 2010));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_105);
        ComplexEventDates_NoComplexEventDates_105.insert(ComplexEventEndDate_105.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_105(FIX::UTCTIMESTAMP(17, 54, 12, 20, 4, 2008));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_105);
        ComplexEventDates_NoComplexEventDates_105.insert(ComplexEventStartDate_105.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_105);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_212;
          FIX::ComplexEventEndTime ComplexEventEndTime_212(FIX::UTCTIMEONLY(17, 1, 31));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_212);
          ComplexEventTimes_NoComplexEventTimes_212.insert(ComplexEventEndTime_212.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_212(FIX::UTCTIMEONLY(22, 30, 14));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_212);
          ComplexEventTimes_NoComplexEventTimes_212.insert(ComplexEventStartTime_212.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_212);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_213;
          FIX::ComplexEventEndTime ComplexEventEndTime_213(FIX::UTCTIMEONLY(11, 23, 59));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_213);
          ComplexEventTimes_NoComplexEventTimes_213.insert(ComplexEventEndTime_213.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_213(FIX::UTCTIMEONLY(4, 8, 50));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_213);
          ComplexEventTimes_NoComplexEventTimes_213.insert(ComplexEventStartTime_213.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_213);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_214;
          FIX::ComplexEventEndTime ComplexEventEndTime_214(FIX::UTCTIMEONLY(15, 2, 8));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventEndTime_214);
          ComplexEventTimes_NoComplexEventTimes_214.insert(ComplexEventEndTime_214.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_214(FIX::UTCTIMEONLY(1, 54, 21));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventStartTime_214);
          ComplexEventTimes_NoComplexEventTimes_214.insert(ComplexEventStartTime_214.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_214);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_106;
        FIX::ComplexEventEndDate ComplexEventEndDate_106(FIX::UTCTIMESTAMP(12, 33, 7, 8, 10, 2004));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_106);
        ComplexEventDates_NoComplexEventDates_106.insert(ComplexEventEndDate_106.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_106(FIX::UTCTIMESTAMP(6, 29, 13, 16, 8, 2000));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_106);
        ComplexEventDates_NoComplexEventDates_106.insert(ComplexEventStartDate_106.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_106);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_215;
          FIX::ComplexEventEndTime ComplexEventEndTime_215(FIX::UTCTIMEONLY(11, 53, 16));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_215);
          ComplexEventTimes_NoComplexEventTimes_215.insert(ComplexEventEndTime_215.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_215(FIX::UTCTIMEONLY(9, 16, 29));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_215);
          ComplexEventTimes_NoComplexEventTimes_215.insert(ComplexEventStartTime_215.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_215);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noMDEntries_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_55;
      FIX::ComplexEventCondition ComplexEventCondition_55(1);
      noComplexEvents_0_1_1.set(ComplexEventCondition_55);
      ComplexEvents_NoComplexEvents_55.insert(ComplexEventCondition_55.getString());
      FIX::ComplexEventPrice ComplexEventPrice_55;
      ComplexEventPrice_55.setString("18509399");
      noComplexEvents_0_1_1.set(ComplexEventPrice_55);
      ComplexEvents_NoComplexEvents_55.insert(ComplexEventPrice_55.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_55(2);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_55);
      ComplexEvents_NoComplexEvents_55.insert(ComplexEventPriceBoundaryMethod_55.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_55;
      ComplexEventPriceBoundaryPrecision_55.setString("99.980000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_55);
      ComplexEvents_NoComplexEvents_55.insert(ComplexEventPriceBoundaryPrecision_55.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_55(1);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_55);
      ComplexEvents_NoComplexEvents_55.insert(ComplexEventPriceTimeType_55.getString());
      FIX::ComplexEventType ComplexEventType_55(2);
      noComplexEvents_0_1_1.set(ComplexEventType_55);
      ComplexEvents_NoComplexEvents_55.insert(ComplexEventType_55.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_55;
      ComplexOptPayoutAmount_55.setString("18003456");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_55);
      ComplexEvents_NoComplexEvents_55.insert(ComplexOptPayoutAmount_55.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_55);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_107;
        FIX::ComplexEventEndDate ComplexEventEndDate_107(FIX::UTCTIMESTAMP(13, 51, 19, 21, 6, 2015));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_107);
        ComplexEventDates_NoComplexEventDates_107.insert(ComplexEventEndDate_107.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_107(FIX::UTCTIMESTAMP(11, 0, 9, 15, 9, 2009));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_107);
        ComplexEventDates_NoComplexEventDates_107.insert(ComplexEventStartDate_107.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_107);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_216;
          FIX::ComplexEventEndTime ComplexEventEndTime_216(FIX::UTCTIMEONLY(1, 43, 53));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_216);
          ComplexEventTimes_NoComplexEventTimes_216.insert(ComplexEventEndTime_216.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_216(FIX::UTCTIMEONLY(21, 9, 49));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_216);
          ComplexEventTimes_NoComplexEventTimes_216.insert(ComplexEventStartTime_216.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_216);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_217;
          FIX::ComplexEventEndTime ComplexEventEndTime_217(FIX::UTCTIMEONLY(21, 12, 22));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_217);
          ComplexEventTimes_NoComplexEventTimes_217.insert(ComplexEventEndTime_217.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_217(FIX::UTCTIMEONLY(13, 47, 51));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_217);
          ComplexEventTimes_NoComplexEventTimes_217.insert(ComplexEventStartTime_217.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_217);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_218;
          FIX::ComplexEventEndTime ComplexEventEndTime_218(FIX::UTCTIMEONLY(12, 43, 8));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventEndTime_218);
          ComplexEventTimes_NoComplexEventTimes_218.insert(ComplexEventEndTime_218.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_218(FIX::UTCTIMEONLY(4, 39, 2));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventStartTime_218);
          ComplexEventTimes_NoComplexEventTimes_218.insert(ComplexEventStartTime_218.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_218);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_108;
        FIX::ComplexEventEndDate ComplexEventEndDate_108(FIX::UTCTIMESTAMP(4, 11, 7, 12, 2, 2007));
        noComplexEventDates_0_1_2_1.set(ComplexEventEndDate_108);
        ComplexEventDates_NoComplexEventDates_108.insert(ComplexEventEndDate_108.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_108(FIX::UTCTIMESTAMP(14, 32, 14, 14, 10, 2003));
        noComplexEventDates_0_1_2_1.set(ComplexEventStartDate_108);
        ComplexEventDates_NoComplexEventDates_108.insert(ComplexEventStartDate_108.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_108);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_219;
          FIX::ComplexEventEndTime ComplexEventEndTime_219(FIX::UTCTIMEONLY(16, 51, 51));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventEndTime_219);
          ComplexEventTimes_NoComplexEventTimes_219.insert(ComplexEventEndTime_219.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_219(FIX::UTCTIMEONLY(17, 38, 37));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventStartTime_219);
          ComplexEventTimes_NoComplexEventTimes_219.insert(ComplexEventStartTime_219.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_219);

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_109;
        FIX::ComplexEventEndDate ComplexEventEndDate_109(FIX::UTCTIMESTAMP(18, 12, 19, 24, 5, 2016));
        noComplexEventDates_0_1_2_2.set(ComplexEventEndDate_109);
        ComplexEventDates_NoComplexEventDates_109.insert(ComplexEventEndDate_109.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_109(FIX::UTCTIMESTAMP(20, 30, 42, 3, 11, 2013));
        noComplexEventDates_0_1_2_2.set(ComplexEventStartDate_109);
        ComplexEventDates_NoComplexEventDates_109.insert(ComplexEventStartDate_109.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_109);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_220;
          FIX::ComplexEventEndTime ComplexEventEndTime_220(FIX::UTCTIMEONLY(13, 24, 57));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventEndTime_220);
          ComplexEventTimes_NoComplexEventTimes_220.insert(ComplexEventEndTime_220.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_220(FIX::UTCTIMEONLY(22, 13, 22));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventStartTime_220);
          ComplexEventTimes_NoComplexEventTimes_220.insert(ComplexEventStartTime_220.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_220);

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noMDEntries_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_56;
      FIX::ComplexEventCondition ComplexEventCondition_56(2);
      noComplexEvents_0_1_2.set(ComplexEventCondition_56);
      ComplexEvents_NoComplexEvents_56.insert(ComplexEventCondition_56.getString());
      FIX::ComplexEventPrice ComplexEventPrice_56;
      ComplexEventPrice_56.setString("19909172");
      noComplexEvents_0_1_2.set(ComplexEventPrice_56);
      ComplexEvents_NoComplexEvents_56.insert(ComplexEventPrice_56.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_56(4);
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryMethod_56);
      ComplexEvents_NoComplexEvents_56.insert(ComplexEventPriceBoundaryMethod_56.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_56;
      ComplexEventPriceBoundaryPrecision_56.setString("92.220000");
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryPrecision_56);
      ComplexEvents_NoComplexEvents_56.insert(ComplexEventPriceBoundaryPrecision_56.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_56(1);
      noComplexEvents_0_1_2.set(ComplexEventPriceTimeType_56);
      ComplexEvents_NoComplexEvents_56.insert(ComplexEventPriceTimeType_56.getString());
      FIX::ComplexEventType ComplexEventType_56(2);
      noComplexEvents_0_1_2.set(ComplexEventType_56);
      ComplexEvents_NoComplexEvents_56.insert(ComplexEventType_56.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_56;
      ComplexOptPayoutAmount_56.setString("6370362");
      noComplexEvents_0_1_2.set(ComplexOptPayoutAmount_56);
      ComplexEvents_NoComplexEvents_56.insert(ComplexOptPayoutAmount_56.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_56);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_110;
        FIX::ComplexEventEndDate ComplexEventEndDate_110(FIX::UTCTIMESTAMP(22, 9, 4, 3, 7, 2006));
        noComplexEventDates_0_2_2_0.set(ComplexEventEndDate_110);
        ComplexEventDates_NoComplexEventDates_110.insert(ComplexEventEndDate_110.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_110(FIX::UTCTIMESTAMP(18, 25, 55, 5, 4, 2014));
        noComplexEventDates_0_2_2_0.set(ComplexEventStartDate_110);
        ComplexEventDates_NoComplexEventDates_110.insert(ComplexEventStartDate_110.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_110);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_221;
          FIX::ComplexEventEndTime ComplexEventEndTime_221(FIX::UTCTIMEONLY(7, 29, 20));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventEndTime_221);
          ComplexEventTimes_NoComplexEventTimes_221.insert(ComplexEventEndTime_221.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_221(FIX::UTCTIMEONLY(3, 25, 24));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventStartTime_221);
          ComplexEventTimes_NoComplexEventTimes_221.insert(ComplexEventStartTime_221.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_221);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_222;
          FIX::ComplexEventEndTime ComplexEventEndTime_222(FIX::UTCTIMEONLY(11, 38, 24));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventEndTime_222);
          ComplexEventTimes_NoComplexEventTimes_222.insert(ComplexEventEndTime_222.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_222(FIX::UTCTIMEONLY(0, 16, 15));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventStartTime_222);
          ComplexEventTimes_NoComplexEventTimes_222.insert(ComplexEventStartTime_222.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_222);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_223;
          FIX::ComplexEventEndTime ComplexEventEndTime_223(FIX::UTCTIMEONLY(19, 17, 53));
          noComplexEventTimes_0_2_0_3_2.set(ComplexEventEndTime_223);
          ComplexEventTimes_NoComplexEventTimes_223.insert(ComplexEventEndTime_223.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_223(FIX::UTCTIMEONLY(11, 48, 35));
          noComplexEventTimes_0_2_0_3_2.set(ComplexEventStartTime_223);
          ComplexEventTimes_NoComplexEventTimes_223.insert(ComplexEventStartTime_223.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_223);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      noMDEntries_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_56;
      FIX::EventDate EventDate_56("LOCALMKTDATE_559435265");
      noEvents_0_1_0.set(EventDate_56);
      EvntGrp_NoEvents_56.insert(EventDate_56.getString());
      FIX::EventPx EventPx_56;
      EventPx_56.setString("19054963");
      noEvents_0_1_0.set(EventPx_56);
      EvntGrp_NoEvents_56.insert(EventPx_56.getString());
      FIX::EventText EventText_56("STRING_722282158");
      noEvents_0_1_0.set(EventText_56);
      EvntGrp_NoEvents_56.insert(EventText_56.getString());
      FIX::EventTime EventTime_56(FIX::UTCTIMESTAMP(1, 3, 7, 17, 9, 2008));
      noEvents_0_1_0.set(EventTime_56);
      EvntGrp_NoEvents_56.insert(EventTime_56.getString());
      FIX::EventType EventType_56(4);
      noEvents_0_1_0.set(EventType_56);
      EvntGrp_NoEvents_56.insert(EventType_56.getString());
      all_values.push_back(EvntGrp_NoEvents_56);

      noMDEntries_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_57;
      FIX::EventDate EventDate_57("LOCALMKTDATE_989154784");
      noEvents_0_1_1.set(EventDate_57);
      EvntGrp_NoEvents_57.insert(EventDate_57.getString());
      FIX::EventPx EventPx_57;
      EventPx_57.setString("8938707");
      noEvents_0_1_1.set(EventPx_57);
      EvntGrp_NoEvents_57.insert(EventPx_57.getString());
      FIX::EventText EventText_57("STRING_1338668548");
      noEvents_0_1_1.set(EventText_57);
      EvntGrp_NoEvents_57.insert(EventText_57.getString());
      FIX::EventTime EventTime_57(FIX::UTCTIMESTAMP(4, 58, 31, 11, 3, 2017));
      noEvents_0_1_1.set(EventTime_57);
      EvntGrp_NoEvents_57.insert(EventTime_57.getString());
      FIX::EventType EventType_57(3);
      noEvents_0_1_1.set(EventType_57);
      EvntGrp_NoEvents_57.insert(EventType_57.getString());
      all_values.push_back(EvntGrp_NoEvents_57);

      noMDEntries_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_58;
      FIX::EventDate EventDate_58("LOCALMKTDATE_319963072");
      noEvents_0_1_2.set(EventDate_58);
      EvntGrp_NoEvents_58.insert(EventDate_58.getString());
      FIX::EventPx EventPx_58;
      EventPx_58.setString("587527");
      noEvents_0_1_2.set(EventPx_58);
      EvntGrp_NoEvents_58.insert(EventPx_58.getString());
      FIX::EventText EventText_58("STRING_1820213359");
      noEvents_0_1_2.set(EventText_58);
      EvntGrp_NoEvents_58.insert(EventText_58.getString());
      FIX::EventTime EventTime_58(FIX::UTCTIMESTAMP(12, 10, 25, 4, 4, 2000));
      noEvents_0_1_2.set(EventTime_58);
      EvntGrp_NoEvents_58.insert(EventTime_58.getString());
      FIX::EventType EventType_58(4);
      noEvents_0_1_2.set(EventType_58);
      EvntGrp_NoEvents_58.insert(EventType_58.getString());
      all_values.push_back(EvntGrp_NoEvents_58);

      noMDEntries_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_64;
      FIX::InstrumentPartyID InstrumentPartyID_64("STRING_19443547");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_64);
      InstrumentParties_NoInstrumentParties_64.insert(InstrumentPartyID_64.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_64('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_64);
      InstrumentParties_NoInstrumentParties_64.insert(InstrumentPartyIDSource_64.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_64(240920876);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_64);
      InstrumentParties_NoInstrumentParties_64.insert(InstrumentPartyRole_64.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_64);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135;
        FIX::InstrumentPartySubID InstrumentPartySubID_135("STRING_1653137345");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_135);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135.insert(InstrumentPartySubID_135.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_135(1708596089);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_135);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135.insert(InstrumentPartySubIDType_135.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136;
        FIX::InstrumentPartySubID InstrumentPartySubID_136("STRING_856362866");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_136);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136.insert(InstrumentPartySubID_136.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_136(485784601);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_136);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136.insert(InstrumentPartySubIDType_136.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137;
        FIX::InstrumentPartySubID InstrumentPartySubID_137("STRING_550267225");
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubID_137);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137.insert(InstrumentPartySubID_137.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_137(1750233604);
        noInstrumentPartySubIDs_0_0_2_2.set(InstrumentPartySubIDType_137);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137.insert(InstrumentPartySubIDType_137.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noMDEntries_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_65;
      FIX::InstrumentPartyID InstrumentPartyID_65("STRING_1824453149");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_65);
      InstrumentParties_NoInstrumentParties_65.insert(InstrumentPartyID_65.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_65('7');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_65);
      InstrumentParties_NoInstrumentParties_65.insert(InstrumentPartyIDSource_65.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_65(1987295072);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_65);
      InstrumentParties_NoInstrumentParties_65.insert(InstrumentPartyRole_65.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_65);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138;
        FIX::InstrumentPartySubID InstrumentPartySubID_138("STRING_1313930222");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_138);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138.insert(InstrumentPartySubID_138.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_138(739512671);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_138);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138.insert(InstrumentPartySubIDType_138.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139;
        FIX::InstrumentPartySubID InstrumentPartySubID_139("STRING_746278281");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_139);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139.insert(InstrumentPartySubID_139.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_139(649760262);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_139);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139.insert(InstrumentPartySubIDType_139.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      noMDEntries_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_65;
      FIX::SecurityAltID SecurityAltID_65("STRING_1066241353");
      noSecurityAltID_0_1_0.set(SecurityAltID_65);
      SecAltIDGrp_NoSecurityAltID_65.insert(SecurityAltID_65.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_65("STRING_708512992");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_65);
      SecAltIDGrp_NoSecurityAltID_65.insert(SecurityAltIDSource_65.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_65);

      noMDEntries_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_60;
    FIX::SecurityXML SecurityXML_61("XMLDATA_61516097");
    noMDEntries_0_0.set(SecurityXML_61);
    FIX::SecurityXMLLen SecurityXMLLen_30(256321191);
    noMDEntries_0_0.set(SecurityXMLLen_30);
    FIX::SecurityXMLSchema SecurityXMLSchema_30("STRING_889230197");
    noMDEntries_0_0.set(SecurityXMLSchema_30);
    SecurityXML_60.insert(SecurityXMLSchema_30.getString());
    all_values.push_back(SecurityXML_60);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_47;
      FIX::PartyID PartyID_47("STRING_1001921476");
      noPartyIDs_0_1_0.set(PartyID_47);
      Parties_NoPartyIDs_47.insert(PartyID_47.getString());
      FIX::PartyIDSource PartyIDSource_47('5');
      noPartyIDs_0_1_0.set(PartyIDSource_47);
      Parties_NoPartyIDs_47.insert(PartyIDSource_47.getString());
      FIX::PartyRole PartyRole_47(45);
      noPartyIDs_0_1_0.set(PartyRole_47);
      Parties_NoPartyIDs_47.insert(PartyRole_47.getString());
      all_values.push_back(Parties_NoPartyIDs_47);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_95;
        FIX::PartySubID PartySubID_95("STRING_2040655892");
        noPartySubIDs_0_0_2_0.set(PartySubID_95);
        PtysSubGrp_NoPartySubIDs_95.insert(PartySubID_95.getString());
        FIX::PartySubIDType PartySubIDType_95(28);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_95);
        PtysSubGrp_NoPartySubIDs_95.insert(PartySubIDType_95.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_95);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_48;
      FIX::PartyID PartyID_48("STRING_178916926");
      noPartyIDs_0_1_1.set(PartyID_48);
      Parties_NoPartyIDs_48.insert(PartyID_48.getString());
      FIX::PartyIDSource PartyIDSource_48('G');
      noPartyIDs_0_1_1.set(PartyIDSource_48);
      Parties_NoPartyIDs_48.insert(PartyIDSource_48.getString());
      FIX::PartyRole PartyRole_48(71);
      noPartyIDs_0_1_1.set(PartyRole_48);
      Parties_NoPartyIDs_48.insert(PartyRole_48.getString());
      all_values.push_back(Parties_NoPartyIDs_48);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_96;
        FIX::PartySubID PartySubID_96("STRING_412883486");
        noPartySubIDs_0_1_2_0.set(PartySubID_96);
        PtysSubGrp_NoPartySubIDs_96.insert(PartySubID_96.getString());
        FIX::PartySubIDType PartySubIDType_96(15);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_96);
        PtysSubGrp_NoPartySubIDs_96.insert(PartySubIDType_96.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_96);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_1);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoRateSources noRateSources_0_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_6;
      FIX::RateSource RateSource_10(99);
      noRateSources_0_1_0.set(RateSource_10);
      RateSource_NoRateSources_6.insert(RateSource_10.getString());
      FIX::RateSourceType RateSourceType_6(1);
      noRateSources_0_1_0.set(RateSourceType_6);
      RateSource_NoRateSources_6.insert(RateSourceType_6.getString());
      FIX::ReferencePage ReferencePage_6("STRING_100279035");
      noRateSources_0_1_0.set(ReferencePage_6);
      RateSource_NoRateSources_6.insert(ReferencePage_6.getString());
      all_values.push_back(RateSource_NoRateSources_6);

      noMDEntries_0_0.addGroup(noRateSources_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoRateSources noRateSources_0_1_1;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_7;
      FIX::RateSource RateSource_11(0);
      noRateSources_0_1_1.set(RateSource_11);
      RateSource_NoRateSources_7.insert(RateSource_11.getString());
      FIX::RateSourceType RateSourceType_7(1);
      noRateSources_0_1_1.set(RateSourceType_7);
      RateSource_NoRateSources_7.insert(RateSourceType_7.getString());
      FIX::ReferencePage ReferencePage_7("STRING_2087574107");
      noRateSources_0_1_1.set(ReferencePage_7);
      RateSource_NoRateSources_7.insert(ReferencePage_7.getString());
      all_values.push_back(RateSource_NoRateSources_7);

      noMDEntries_0_0.addGroup(noRateSources_0_1_1);
    }
    // SecSizesGrp
    // Group SecSizesGrp.NoOfSecSizes
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_0_1_0;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_0;
      FIX::MDSecSize MDSecSize_0;
      MDSecSize_0.setString("2762252");
      noOfSecSizes_0_1_0.set(MDSecSize_0);
      SecSizesGrp_NoOfSecSizes_0.insert(MDSecSize_0.getString());
      FIX::MDSecSizeType MDSecSizeType_0(1);
      noOfSecSizes_0_1_0.set(MDSecSizeType_0);
      SecSizesGrp_NoOfSecSizes_0.insert(MDSecSizeType_0.getString());
      all_values.push_back(SecSizesGrp_NoOfSecSizes_0);

      noMDEntries_0_0.addGroup(noOfSecSizes_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_0_1_1;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_1;
      FIX::MDSecSize MDSecSize_1;
      MDSecSize_1.setString("16198412");
      noOfSecSizes_0_1_1.set(MDSecSize_1);
      SecSizesGrp_NoOfSecSizes_1.insert(MDSecSize_1.getString());
      FIX::MDSecSizeType MDSecSizeType_1(1);
      noOfSecSizes_0_1_1.set(MDSecSizeType_1);
      SecSizesGrp_NoOfSecSizes_1.insert(MDSecSizeType_1.getString());
      all_values.push_back(SecSizesGrp_NoOfSecSizes_1);

      noMDEntries_0_0.addGroup(noOfSecSizes_0_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_12;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_12("JPY");
    noMDEntries_0_0.set(BenchmarkCurveCurrency_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkCurveCurrency_12.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_12("STRING_Pfandbriefe");
    noMDEntries_0_0.set(BenchmarkCurveName_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkCurveName_12.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_12("STRING_1129905614");
    noMDEntries_0_0.set(BenchmarkCurvePoint_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkCurvePoint_12.getString());
    FIX::BenchmarkPrice BenchmarkPrice_12;
    BenchmarkPrice_12.setString("7949201");
    noMDEntries_0_0.set(BenchmarkPrice_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkPrice_12.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_12(376245077);
    noMDEntries_0_0.set(BenchmarkPriceType_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkPriceType_12.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_12("STRING_1226439882");
    noMDEntries_0_0.set(BenchmarkSecurityID_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkSecurityID_12.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_12("STRING_1796841641");
    noMDEntries_0_0.set(BenchmarkSecurityIDSource_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkSecurityIDSource_12.getString());
    FIX::Spread Spread_12;
    Spread_12.setString("8884399");
    noMDEntries_0_0.set(Spread_12);
    SpreadOrBenchmarkCurveData_12.insert(Spread_12.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_12);

    // StatsIndGrp
    // Group StatsIndGrp.NoStatsIndicators
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoStatsIndicators noStatsIndicators_0_1_0;
      // StatsIndGrp.NoStatsIndicators
      multiset<string> StatsIndGrp_NoStatsIndicators_0;
      FIX::StatsType StatsType_0(1);
      noStatsIndicators_0_1_0.set(StatsType_0);
      StatsIndGrp_NoStatsIndicators_0.insert(StatsType_0.getString());
      all_values.push_back(StatsIndGrp_NoStatsIndicators_0);

      noMDEntries_0_0.addGroup(noStatsIndicators_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoStatsIndicators noStatsIndicators_0_1_1;
      // StatsIndGrp.NoStatsIndicators
      multiset<string> StatsIndGrp_NoStatsIndicators_1;
      FIX::StatsType StatsType_1(3);
      noStatsIndicators_0_1_1.set(StatsType_1);
      StatsIndGrp_NoStatsIndicators_1.insert(StatsType_1.getString());
      all_values.push_back(StatsIndGrp_NoStatsIndicators_1);

      noMDEntries_0_0.addGroup(noStatsIndicators_0_1_1);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoStatsIndicators noStatsIndicators_0_1_2;
      // StatsIndGrp.NoStatsIndicators
      multiset<string> StatsIndGrp_NoStatsIndicators_2;
      FIX::StatsType StatsType_2(4);
      noStatsIndicators_0_1_2.set(StatsType_2);
      StatsIndGrp_NoStatsIndicators_2.insert(StatsType_2.getString());
      all_values.push_back(StatsIndGrp_NoStatsIndicators_2);

      noMDEntries_0_0.addGroup(noStatsIndicators_0_1_2);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_46;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_46("DATA_1688841978");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_46);
      UnderlyingInstrument_46.insert(EncodedUnderlyingIssuer_46.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_46(31231852);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_46);
      UnderlyingInstrument_46.insert(EncodedUnderlyingIssuerLen_46.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_46("DATA_1776398159");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_46);
      UnderlyingInstrument_46.insert(EncodedUnderlyingSecurityDesc_46.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_46(2101725464);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_46);
      UnderlyingInstrument_46.insert(EncodedUnderlyingSecurityDescLen_46.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_46;
      UnderlyingAdjustedQuantity_46.setString("19609435");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_46);
      UnderlyingInstrument_46.insert(UnderlyingAdjustedQuantity_46.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_46;
      UnderlyingAllocationPercent_46.setString("35.900000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_46);
      UnderlyingInstrument_46.insert(UnderlyingAllocationPercent_46.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_46;
      UnderlyingAttachmentPoint_46.setString("99.030000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_46);
      UnderlyingInstrument_46.insert(UnderlyingAttachmentPoint_46.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_46("STRING_145955202");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_46);
      UnderlyingInstrument_46.insert(UnderlyingCFICode_46.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_46("STRING_226722625");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_46);
      UnderlyingInstrument_46.insert(UnderlyingCPProgram_46.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_46("STRING_1428547491");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_46);
      UnderlyingInstrument_46.insert(UnderlyingCPRegType_46.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_46;
      UnderlyingCapValue_46.setString("12557339");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_46);
      UnderlyingInstrument_46.insert(UnderlyingCapValue_46.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_46;
      UnderlyingCashAmount_46.setString("1668130");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_46);
      UnderlyingInstrument_46.insert(UnderlyingCashAmount_46.getString());
      FIX::UnderlyingCashType UnderlyingCashType_46("STRING_FIXED");
      noUnderlyings_0_1_0.set(UnderlyingCashType_46);
      UnderlyingInstrument_46.insert(UnderlyingCashType_46.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_46;
      UnderlyingContractMultiplier_46.setString("15319591");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_46);
      UnderlyingInstrument_46.insert(UnderlyingContractMultiplier_46.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_46(846416215);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_46);
      UnderlyingInstrument_46.insert(UnderlyingContractMultiplierUnit_46.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_46("COUNTRY_1774468099");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_46);
      UnderlyingInstrument_46.insert(UnderlyingCountryOfIssue_46.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_46("LOCALMKTDATE_310461062");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_46);
      UnderlyingInstrument_46.insert(UnderlyingCouponPaymentDate_46.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_46;
      UnderlyingCouponRate_46.setString("57.320000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_46);
      UnderlyingInstrument_46.insert(UnderlyingCouponRate_46.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_46("STRING_165583425");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_46);
      UnderlyingInstrument_46.insert(UnderlyingCreditRating_46.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_46("CAN");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_46);
      UnderlyingInstrument_46.insert(UnderlyingCurrency_46.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_46;
      UnderlyingCurrentValue_46.setString("9605035");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_46);
      UnderlyingInstrument_46.insert(UnderlyingCurrentValue_46.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_46;
      UnderlyingDetachmentPoint_46.setString("10.190000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_46);
      UnderlyingInstrument_46.insert(UnderlyingDetachmentPoint_46.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_46;
      UnderlyingDirtyPrice_46.setString("21236675");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_46);
      UnderlyingInstrument_46.insert(UnderlyingDirtyPrice_46.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_46;
      UnderlyingEndPrice_46.setString("6098615");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_46);
      UnderlyingInstrument_46.insert(UnderlyingEndPrice_46.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_46;
      UnderlyingEndValue_46.setString("10621609");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_46);
      UnderlyingInstrument_46.insert(UnderlyingEndValue_46.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_46(1953589067);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_46);
      UnderlyingInstrument_46.insert(UnderlyingExerciseStyle_46.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_46;
      UnderlyingFXRate_46.setString("4186929");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_46);
      UnderlyingInstrument_46.insert(UnderlyingFXRate_46.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_46('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_46);
      UnderlyingInstrument_46.insert(UnderlyingFXRateCalc_46.getString());
      FIX::UnderlyingFactor UnderlyingFactor_46;
      UnderlyingFactor_46.setString("17637052");
      noUnderlyings_0_1_0.set(UnderlyingFactor_46);
      UnderlyingInstrument_46.insert(UnderlyingFactor_46.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_46(406441254);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_46);
      UnderlyingInstrument_46.insert(UnderlyingFlowScheduleType_46.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_46("STRING_1385131486");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_46);
      UnderlyingInstrument_46.insert(UnderlyingInstrRegistry_46.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_46("LOCALMKTDATE_1794937151");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_46);
      UnderlyingInstrument_46.insert(UnderlyingIssueDate_46.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_46("STRING_35355765");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_46);
      UnderlyingInstrument_46.insert(UnderlyingIssuer_46.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_46("STRING_1339373302");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_46);
      UnderlyingInstrument_46.insert(UnderlyingLocaleOfIssue_46.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_46("LOCALMKTDATE_1608397066");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_46);
      UnderlyingInstrument_46.insert(UnderlyingMaturityDate_46.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_46("MONTHYEAR_161799355");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_46);
      UnderlyingInstrument_46.insert(UnderlyingMaturityMonthYear_46.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_46("TZTIMEONLY_44799558");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_46);
      UnderlyingInstrument_46.insert(UnderlyingMaturityTime_46.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_46;
      UnderlyingNotionalPercentageOutstanding_46.setString("22.680000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_46);
      UnderlyingInstrument_46.insert(UnderlyingNotionalPercentageOutstanding_46.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_46('3');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_46);
      UnderlyingInstrument_46.insert(UnderlyingOptAttribute_46.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_46;
      UnderlyingOriginalNotionalPercentageOutstanding_46.setString("70.490000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_46);
      UnderlyingInstrument_46.insert(UnderlyingOriginalNotionalPercentageOutstanding_46.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_46("STRING_862602522");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_46);
      UnderlyingInstrument_46.insert(UnderlyingPriceUnitOfMeasure_46.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_46;
      UnderlyingPriceUnitOfMeasureQty_46.setString("5553350");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_46);
      UnderlyingInstrument_46.insert(UnderlyingPriceUnitOfMeasureQty_46.getString());
      FIX::UnderlyingProduct UnderlyingProduct_46(1627973880);
      noUnderlyings_0_1_0.set(UnderlyingProduct_46);
      UnderlyingInstrument_46.insert(UnderlyingProduct_46.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_46(247078049);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_46);
      UnderlyingInstrument_46.insert(UnderlyingPutOrCall_46.getString());
      FIX::UnderlyingPx UnderlyingPx_46;
      UnderlyingPx_46.setString("14017512");
      noUnderlyings_0_1_0.set(UnderlyingPx_46);
      UnderlyingInstrument_46.insert(UnderlyingPx_46.getString());
      FIX::UnderlyingQty UnderlyingQty_46;
      UnderlyingQty_46.setString("12549583");
      noUnderlyings_0_1_0.set(UnderlyingQty_46);
      UnderlyingInstrument_46.insert(UnderlyingQty_46.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_46("LOCALMKTDATE_557539111");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_46);
      UnderlyingInstrument_46.insert(UnderlyingRedemptionDate_46.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_46("STRING_1169073365");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_46);
      UnderlyingInstrument_46.insert(UnderlyingRepoCollateralSecurityType_46.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_46;
      UnderlyingRepurchaseRate_46.setString("17.560000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_46);
      UnderlyingInstrument_46.insert(UnderlyingRepurchaseRate_46.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_46(355015054);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_46);
      UnderlyingInstrument_46.insert(UnderlyingRepurchaseTerm_46.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_46("STRING_2066301064");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_46);
      UnderlyingInstrument_46.insert(UnderlyingRestructuringType_46.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_46("STRING_233561698");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_46);
      UnderlyingInstrument_46.insert(UnderlyingSecurityDesc_46.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_46("EXCHANGE_528736073");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_46);
      UnderlyingInstrument_46.insert(UnderlyingSecurityExchange_46.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_46("STRING_2042484997");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_46);
      UnderlyingInstrument_46.insert(UnderlyingSecurityID_46.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_46("STRING_843423281");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_46);
      UnderlyingInstrument_46.insert(UnderlyingSecurityIDSource_46.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_46("STRING_1590897039");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_46);
      UnderlyingInstrument_46.insert(UnderlyingSecuritySubType_46.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_46("STRING_1848590417");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_46);
      UnderlyingInstrument_46.insert(UnderlyingSecurityType_46.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_46("STRING_1262116237");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_46);
      UnderlyingInstrument_46.insert(UnderlyingSeniority_46.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_46("STRING_1287186546");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_46);
      UnderlyingInstrument_46.insert(UnderlyingSettlMethod_46.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_46(2);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_46);
      UnderlyingInstrument_46.insert(UnderlyingSettlementType_46.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_46;
      UnderlyingStartValue_46.setString("16685574");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_46);
      UnderlyingInstrument_46.insert(UnderlyingStartValue_46.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_46("STRING_524834384");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_46);
      UnderlyingInstrument_46.insert(UnderlyingStateOrProvinceOfIssue_46.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_46("CAN");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_46);
      UnderlyingInstrument_46.insert(UnderlyingStrikeCurrency_46.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_46;
      UnderlyingStrikePrice_46.setString("18642076");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_46);
      UnderlyingInstrument_46.insert(UnderlyingStrikePrice_46.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_46("STRING_573178988");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_46);
      UnderlyingInstrument_46.insert(UnderlyingSymbol_46.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_46("STRING_1865712613");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_46);
      UnderlyingInstrument_46.insert(UnderlyingSymbolSfx_46.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_46("STRING_1909007245");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_46);
      UnderlyingInstrument_46.insert(UnderlyingTimeUnit_46.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_46("STRING_180047609");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_46);
      UnderlyingInstrument_46.insert(UnderlyingUnitOfMeasure_46.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_46;
      UnderlyingUnitOfMeasureQty_46.setString("1067509");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_46);
      UnderlyingInstrument_46.insert(UnderlyingUnitOfMeasureQty_46.getString());
      all_values.push_back(UnderlyingInstrument_46);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_95;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_95("STRING_1042650131");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_95);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_95.insert(UnderlyingSecurityAltID_95.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_95("STRING_662086010");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_95);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_95.insert(UnderlyingSecurityAltIDSource_95.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_95);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_96;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_96("STRING_715360878");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_96);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_96.insert(UnderlyingSecurityAltID_96.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_96("STRING_1289728180");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_96);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_96.insert(UnderlyingSecurityAltIDSource_96.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_96);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_97;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_97("STRING_2063837291");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltID_97);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_97.insert(UnderlyingSecurityAltID_97.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_97("STRING_1970319209");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltIDSource_97);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_97.insert(UnderlyingSecurityAltIDSource_97.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_97);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_80;
        FIX::UnderlyingStipType UnderlyingStipType_80("STRING_1085427008");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_80);
        UnderlyingStipulations_NoUnderlyingStips_80.insert(UnderlyingStipType_80.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_80("STRING_1243377317");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_80);
        UnderlyingStipulations_NoUnderlyingStips_80.insert(UnderlyingStipValue_80.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_80);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_81;
        FIX::UnderlyingStipType UnderlyingStipType_81("STRING_54798697");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_81);
        UnderlyingStipulations_NoUnderlyingStips_81.insert(UnderlyingStipType_81.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_81("STRING_1004244424");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_81);
        UnderlyingStipulations_NoUnderlyingStips_81.insert(UnderlyingStipValue_81.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_81);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_82;
        FIX::UnderlyingStipType UnderlyingStipType_82("STRING_1476939015");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipType_82);
        UnderlyingStipulations_NoUnderlyingStips_82.insert(UnderlyingStipType_82.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_82("STRING_583534771");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipValue_82);
        UnderlyingStipulations_NoUnderlyingStips_82.insert(UnderlyingStipValue_82.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_82);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_99;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_99("STRING_172878649");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_99);
        UndlyInstrumentParties_NoUndlyInstrumentParties_99.insert(UnderlyingInstrumentPartyID_99.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_99('2');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_99);
        UndlyInstrumentParties_NoUndlyInstrumentParties_99.insert(UnderlyingInstrumentPartyIDSource_99.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_99(600352542);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_99);
        UndlyInstrumentParties_NoUndlyInstrumentParties_99.insert(UnderlyingInstrumentPartyRole_99.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_99);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_195;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_195("STRING_1314134708");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_195);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_195.insert(UnderlyingInstrumentPartySubID_195.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_195(2065164610);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_195);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_195.insert(UnderlyingInstrumentPartySubIDType_195.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_195);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_196;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_196("STRING_956068730");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_196);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_196.insert(UnderlyingInstrumentPartySubID_196.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_196(1838969093);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_196);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_196.insert(UnderlyingInstrumentPartySubIDType_196.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_196);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_197;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_197("STRING_1029946532");
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubID_197);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_197.insert(UnderlyingInstrumentPartySubID_197.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_197(512498340);
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_197);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_197.insert(UnderlyingInstrumentPartySubIDType_197.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_197);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      noMDEntries_0_0.addGroup(noUnderlyings_0_1_0);
    }
    // YieldData
    multiset<string> YieldData_7;
    FIX::Yield Yield_7;
    Yield_7.setString("31.320000");
    noMDEntries_0_0.set(Yield_7);
    YieldData_7.insert(Yield_7.getString());
    FIX::YieldCalcDate YieldCalcDate_7("LOCALMKTDATE_1603125521");
    noMDEntries_0_0.set(YieldCalcDate_7);
    YieldData_7.insert(YieldCalcDate_7.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_7("LOCALMKTDATE_230727305");
    noMDEntries_0_0.set(YieldRedemptionDate_7);
    YieldData_7.insert(YieldRedemptionDate_7.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_7;
    YieldRedemptionPrice_7.setString("13172167");
    noMDEntries_0_0.set(YieldRedemptionPrice_7);
    YieldData_7.insert(YieldRedemptionPrice_7.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_7(1783173130);
    noMDEntries_0_0.set(YieldRedemptionPriceType_7);
    YieldData_7.insert(YieldRedemptionPriceType_7.getString());
    FIX::YieldType YieldType_7("STRING_TENDER");
    noMDEntries_0_0.set(YieldType_7);
    YieldData_7.insert(YieldType_7.getString());
    all_values.push_back(YieldData_7);

    msg.addGroup(noMDEntries_0_0);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::MarketDataIncrementalRefresh::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_4;
    FIX::RoutingID RoutingID_4("STRING_678339613");
    noRoutingIDs_0_0.set(RoutingID_4);
    RoutingGrp_NoRoutingIDs_4.insert(RoutingID_4.getString());
    FIX::RoutingType RoutingType_4(2);
    noRoutingIDs_0_0.set(RoutingType_4);
    RoutingGrp_NoRoutingIDs_4.insert(RoutingType_4.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_4);

    msg.addGroup(noRoutingIDs_0_0);
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
