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
  multiset<string> all_compo_names;
  multiset<string> MarketDataIncrementalRefresh_0;
  FIX::ApplQueueDepth ApplQueueDepth_0(786967276);
  msg.set(ApplQueueDepth_0);
  MarketDataIncrementalRefresh_0.insert(ApplQueueDepth_0.getString());
  FIX::ApplQueueResolution ApplQueueResolution_0(0);
  msg.set(ApplQueueResolution_0);
  MarketDataIncrementalRefresh_0.insert(ApplQueueResolution_0.getString());
  FIX::MDBookType MDBookType_2(1);
  msg.set(MDBookType_2);
  MarketDataIncrementalRefresh_0.insert(MDBookType_2.getString());
  FIX::MDFeedType MDFeedType_2("STRING_1626524212");
  msg.set(MDFeedType_2);
  MarketDataIncrementalRefresh_0.insert(MDFeedType_2.getString());
  FIX::MDReqID MDReqID_0("STRING_349434453");
  msg.set(MDReqID_0);
  MarketDataIncrementalRefresh_0.insert(MDReqID_0.getString());
  FIX::TradeDate TradeDate_13("LOCALMKTDATE_1666344536");
  msg.set(TradeDate_13);
  MarketDataIncrementalRefresh_0.insert(TradeDate_13.getString());
  all_values.push_back(MarketDataIncrementalRefresh_0);

  all_compo_names.insert("MarketDataIncrementalRefresh");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_6;
  FIX::ApplID ApplID_6("STRING_1401931749");
  msg.set(ApplID_6);
  ApplicationSequenceControl_6.insert(ApplID_6.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_6(1037404103);
  msg.set(ApplLastSeqNum_6);
  ApplicationSequenceControl_6.insert(ApplLastSeqNum_6.getString());
  FIX::ApplResendFlag ApplResendFlag_6(true);
  msg.set(ApplResendFlag_6);
  ApplicationSequenceControl_6.insert(ApplResendFlag_6.getString());
  FIX::ApplSeqNum ApplSeqNum_6(1891594547);
  msg.set(ApplSeqNum_6);
  ApplicationSequenceControl_6.insert(ApplSeqNum_6.getString());
  all_values.push_back(ApplicationSequenceControl_6);
  all_compo_names.insert(".");

  // MDIncGrp
  // Group MDIncGrp.NoMDEntries
  {
    FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries noMDEntries_0_0;
    // MDIncGrp.NoMDEntries
    multiset<string> MDIncGrp_NoMDEntries_0;
    FIX::CorporateAction CorporateAction_2("MULTIPLECHARVALUE_T");
    noMDEntries_0_0.set(CorporateAction_2);
    MDIncGrp_NoMDEntries_0.insert(CorporateAction_2.getString());
    FIX::Currency Currency_20("EUR");
    noMDEntries_0_0.set(Currency_20);
    MDIncGrp_NoMDEntries_0.insert(Currency_20.getString());
    FIX::DealingCapacity DealingCapacity_0('A');
    noMDEntries_0_0.set(DealingCapacity_0);
    MDIncGrp_NoMDEntries_0.insert(DealingCapacity_0.getString());
    FIX::DeleteReason DeleteReason_0('0');
    noMDEntries_0_0.set(DeleteReason_0);
    MDIncGrp_NoMDEntries_0.insert(DeleteReason_0.getString());
    FIX::DeskID DeskID_0("STRING_279476010");
    noMDEntries_0_0.set(DeskID_0);
    MDIncGrp_NoMDEntries_0.insert(DeskID_0.getString());
    FIX::EncodedText EncodedText_38("DATA_934060268");
    noMDEntries_0_0.set(EncodedText_38);
    MDIncGrp_NoMDEntries_0.insert(EncodedText_38.getString());
    FIX::EncodedTextLen EncodedTextLen_38(840763737);
    noMDEntries_0_0.set(EncodedTextLen_38);
    MDIncGrp_NoMDEntries_0.insert(EncodedTextLen_38.getString());
    FIX::ExecInst ExecInst_2("MULTIPLECHARVALUE_C");
    noMDEntries_0_0.set(ExecInst_2);
    MDIncGrp_NoMDEntries_0.insert(ExecInst_2.getString());
    FIX::ExpireDate ExpireDate_3("LOCALMKTDATE_966792587");
    noMDEntries_0_0.set(ExpireDate_3);
    MDIncGrp_NoMDEntries_0.insert(ExpireDate_3.getString());
    FIX::ExpireTime ExpireTime_4(FIX::UTCTIMESTAMP(3, 1, 11, 6, 9, 2007));
    noMDEntries_0_0.set(ExpireTime_4);
    MDIncGrp_NoMDEntries_0.insert(ExpireTime_4.getString());
    FIX::FinancialStatus FinancialStatus_2("MULTIPLECHARVALUE_2");
    noMDEntries_0_0.set(FinancialStatus_2);
    MDIncGrp_NoMDEntries_0.insert(FinancialStatus_2.getString());
    FIX::FirstPx FirstPx_0;
    FirstPx_0.setString("13821520");
    noMDEntries_0_0.set(FirstPx_0);
    MDIncGrp_NoMDEntries_0.insert(FirstPx_0.getString());
    FIX::HaltReasonInt HaltReasonInt_0(5);
    noMDEntries_0_0.set(HaltReasonInt_0);
    MDIncGrp_NoMDEntries_0.insert(HaltReasonInt_0.getString());
    FIX::HighPx HighPx_0;
    HighPx_0.setString("4602054");
    noMDEntries_0_0.set(HighPx_0);
    MDIncGrp_NoMDEntries_0.insert(HighPx_0.getString());
    FIX::LastPx LastPx_6;
    LastPx_6.setString("21236839");
    noMDEntries_0_0.set(LastPx_6);
    MDIncGrp_NoMDEntries_0.insert(LastPx_6.getString());
    FIX::LocationID LocationID_0("STRING_1789615871");
    noMDEntries_0_0.set(LocationID_0);
    MDIncGrp_NoMDEntries_0.insert(LocationID_0.getString());
    FIX::LotType LotType_3('1');
    noMDEntries_0_0.set(LotType_3);
    MDIncGrp_NoMDEntries_0.insert(LotType_3.getString());
    FIX::LowPx LowPx_0;
    LowPx_0.setString("3256347");
    noMDEntries_0_0.set(LowPx_0);
    MDIncGrp_NoMDEntries_0.insert(LowPx_0.getString());
    FIX::MDEntryBuyer MDEntryBuyer_0("STRING_1308476759");
    noMDEntries_0_0.set(MDEntryBuyer_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryBuyer_0.getString());
    FIX::MDEntryDate MDEntryDate_0(FIX::UTCDATEONLY(10, 4, 2006));
    noMDEntries_0_0.set(MDEntryDate_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryDate_0.getString());
    FIX::MDEntryForwardPoints MDEntryForwardPoints_0;
    MDEntryForwardPoints_0.setString("18258566");
    noMDEntries_0_0.set(MDEntryForwardPoints_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryForwardPoints_0.getString());
    FIX::MDEntryID MDEntryID_0("STRING_1108250369");
    noMDEntries_0_0.set(MDEntryID_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryID_0.getString());
    FIX::MDEntryOriginator MDEntryOriginator_0("STRING_1222174208");
    noMDEntries_0_0.set(MDEntryOriginator_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryOriginator_0.getString());
    FIX::MDEntryPositionNo MDEntryPositionNo_0(1131300697);
    noMDEntries_0_0.set(MDEntryPositionNo_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryPositionNo_0.getString());
    FIX::MDEntryPx MDEntryPx_0;
    MDEntryPx_0.setString("7299233");
    noMDEntries_0_0.set(MDEntryPx_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryPx_0.getString());
    FIX::MDEntryRefID MDEntryRefID_0("STRING_1370048428");
    noMDEntries_0_0.set(MDEntryRefID_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryRefID_0.getString());
    FIX::MDEntrySeller MDEntrySeller_0("STRING_1410776707");
    noMDEntries_0_0.set(MDEntrySeller_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntrySeller_0.getString());
    FIX::MDEntrySize MDEntrySize_0;
    MDEntrySize_0.setString("16639836");
    noMDEntries_0_0.set(MDEntrySize_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntrySize_0.getString());
    FIX::MDEntrySpotRate MDEntrySpotRate_0;
    MDEntrySpotRate_0.setString("633285");
    noMDEntries_0_0.set(MDEntrySpotRate_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntrySpotRate_0.getString());
    FIX::MDEntryTime MDEntryTime_0(FIX::UTCTIMEONLY(2, 53, 22));
    noMDEntries_0_0.set(MDEntryTime_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryTime_0.getString());
    FIX::MDEntryType MDEntryType_0('T');
    noMDEntries_0_0.set(MDEntryType_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryType_0.getString());
    FIX::MDMkt MDMkt_0("EXCHANGE_987879785");
    noMDEntries_0_0.set(MDMkt_0);
    MDIncGrp_NoMDEntries_0.insert(MDMkt_0.getString());
    FIX::MDOriginType MDOriginType_0(0);
    noMDEntries_0_0.set(MDOriginType_0);
    MDIncGrp_NoMDEntries_0.insert(MDOriginType_0.getString());
    FIX::MDPriceLevel MDPriceLevel_0(554772808);
    noMDEntries_0_0.set(MDPriceLevel_0);
    MDIncGrp_NoMDEntries_0.insert(MDPriceLevel_0.getString());
    FIX::MDQuoteType MDQuoteType_0(2);
    noMDEntries_0_0.set(MDQuoteType_0);
    MDIncGrp_NoMDEntries_0.insert(MDQuoteType_0.getString());
    FIX::MDStreamID MDStreamID_0("STRING_486159911");
    noMDEntries_0_0.set(MDStreamID_0);
    MDIncGrp_NoMDEntries_0.insert(MDStreamID_0.getString());
    FIX::MDSubBookType MDSubBookType_0(1936924853);
    noMDEntries_0_0.set(MDSubBookType_0);
    MDIncGrp_NoMDEntries_0.insert(MDSubBookType_0.getString());
    FIX::MDUpdateAction MDUpdateAction_0('3');
    noMDEntries_0_0.set(MDUpdateAction_0);
    MDIncGrp_NoMDEntries_0.insert(MDUpdateAction_0.getString());
    FIX::MarketDepth MarketDepth_2(946365375);
    noMDEntries_0_0.set(MarketDepth_2);
    MDIncGrp_NoMDEntries_0.insert(MarketDepth_2.getString());
    FIX::MatchType MatchType_6("STRING_S3");
    noMDEntries_0_0.set(MatchType_6);
    MDIncGrp_NoMDEntries_0.insert(MatchType_6.getString());
    FIX::MinQty MinQty_2;
    MinQty_2.setString("5749146");
    noMDEntries_0_0.set(MinQty_2);
    MDIncGrp_NoMDEntries_0.insert(MinQty_2.getString());
    FIX::NetChgPrevDay NetChgPrevDay_0;
    NetChgPrevDay_0.setString("8856114");
    noMDEntries_0_0.set(NetChgPrevDay_0);
    MDIncGrp_NoMDEntries_0.insert(NetChgPrevDay_0.getString());
    FIX::NumberOfOrders NumberOfOrders_0(91276213);
    noMDEntries_0_0.set(NumberOfOrders_0);
    MDIncGrp_NoMDEntries_0.insert(NumberOfOrders_0.getString());
    FIX::OpenCloseSettlFlag OpenCloseSettlFlag_0("MULTIPLECHARVALUE_5");
    noMDEntries_0_0.set(OpenCloseSettlFlag_0);
    MDIncGrp_NoMDEntries_0.insert(OpenCloseSettlFlag_0.getString());
    FIX::OrdType OrdType_4('6');
    noMDEntries_0_0.set(OrdType_4);
    MDIncGrp_NoMDEntries_0.insert(OrdType_4.getString());
    FIX::OrderCapacity OrderCapacity_3('I');
    noMDEntries_0_0.set(OrderCapacity_3);
    MDIncGrp_NoMDEntries_0.insert(OrderCapacity_3.getString());
    FIX::OrderID OrderID_18("STRING_998412336");
    noMDEntries_0_0.set(OrderID_18);
    MDIncGrp_NoMDEntries_0.insert(OrderID_18.getString());
    FIX::PriceDelta PriceDelta_1;
    PriceDelta_1.setString("11645942");
    noMDEntries_0_0.set(PriceDelta_1);
    MDIncGrp_NoMDEntries_0.insert(PriceDelta_1.getString());
    FIX::PriceType PriceType_16(8);
    noMDEntries_0_0.set(PriceType_16);
    MDIncGrp_NoMDEntries_0.insert(PriceType_16.getString());
    FIX::QuoteCondition QuoteCondition_0("MULTIPLESTRINGVALUE_F");
    noMDEntries_0_0.set(QuoteCondition_0);
    MDIncGrp_NoMDEntries_0.insert(QuoteCondition_0.getString());
    FIX::QuoteEntryID QuoteEntryID_0("STRING_239284769");
    noMDEntries_0_0.set(QuoteEntryID_0);
    MDIncGrp_NoMDEntries_0.insert(QuoteEntryID_0.getString());
    FIX::RptSeq RptSeq_1(116505054);
    noMDEntries_0_0.set(RptSeq_1);
    MDIncGrp_NoMDEntries_0.insert(RptSeq_1.getString());
    FIX::Scope Scope_0("MULTIPLECHARVALUE_1");
    noMDEntries_0_0.set(Scope_0);
    MDIncGrp_NoMDEntries_0.insert(Scope_0.getString());
    FIX::SecondaryOrderID SecondaryOrderID_14("STRING_1609333198");
    noMDEntries_0_0.set(SecondaryOrderID_14);
    MDIncGrp_NoMDEntries_0.insert(SecondaryOrderID_14.getString());
    FIX::SecurityTradingStatus SecurityTradingStatus_0(13);
    noMDEntries_0_0.set(SecurityTradingStatus_0);
    MDIncGrp_NoMDEntries_0.insert(SecurityTradingStatus_0.getString());
    FIX::SellerDays SellerDays_0(205602388);
    noMDEntries_0_0.set(SellerDays_0);
    MDIncGrp_NoMDEntries_0.insert(SellerDays_0.getString());
    FIX::SettlCurrency SettlCurrency_6("GBP");
    noMDEntries_0_0.set(SettlCurrency_6);
    MDIncGrp_NoMDEntries_0.insert(SettlCurrency_6.getString());
    FIX::SettlDate SettlDate_14("LOCALMKTDATE_688894950");
    noMDEntries_0_0.set(SettlDate_14);
    MDIncGrp_NoMDEntries_0.insert(SettlDate_14.getString());
    FIX::SettlType SettlType_8("STRING_1");
    noMDEntries_0_0.set(SettlType_8);
    MDIncGrp_NoMDEntries_0.insert(SettlType_8.getString());
    FIX::Text Text_38("STRING_719819098");
    noMDEntries_0_0.set(Text_38);
    MDIncGrp_NoMDEntries_0.insert(Text_38.getString());
    FIX::TickDirection TickDirection_0('2');
    noMDEntries_0_0.set(TickDirection_0);
    MDIncGrp_NoMDEntries_0.insert(TickDirection_0.getString());
    FIX::TimeInForce TimeInForce_4('6');
    noMDEntries_0_0.set(TimeInForce_4);
    MDIncGrp_NoMDEntries_0.insert(TimeInForce_4.getString());
    FIX::TradeCondition TradeCondition_0("MULTIPLESTRINGVALUE_2");
    noMDEntries_0_0.set(TradeCondition_0);
    MDIncGrp_NoMDEntries_0.insert(TradeCondition_0.getString());
    FIX::TradeID TradeID_3("STRING_100058214");
    noMDEntries_0_0.set(TradeID_3);
    MDIncGrp_NoMDEntries_0.insert(TradeID_3.getString());
    FIX::TradeVolume TradeVolume_0;
    TradeVolume_0.setString("18203609");
    noMDEntries_0_0.set(TradeVolume_0);
    MDIncGrp_NoMDEntries_0.insert(TradeVolume_0.getString());
    FIX::TradingSessionID TradingSessionID_16("STRING_5");
    noMDEntries_0_0.set(TradingSessionID_16);
    MDIncGrp_NoMDEntries_0.insert(TradingSessionID_16.getString());
    FIX::TradingSessionSubID TradingSessionSubID_16("STRING_1");
    noMDEntries_0_0.set(TradingSessionSubID_16);
    MDIncGrp_NoMDEntries_0.insert(TradingSessionSubID_16.getString());
    FIX::TransBkdTime TransBkdTime_2(FIX::UTCTIMESTAMP(5, 30, 35, 5, 8, 2014));
    noMDEntries_0_0.set(TransBkdTime_2);
    MDIncGrp_NoMDEntries_0.insert(TransBkdTime_2.getString());
    FIX::TransactTime TransactTime_23(FIX::UTCTIMESTAMP(19, 56, 59, 1, 6, 2017));
    noMDEntries_0_0.set(TransactTime_23);
    MDIncGrp_NoMDEntries_0.insert(TransactTime_23.getString());
    FIX::TrdType TrdType_3(33);
    noMDEntries_0_0.set(TrdType_3);
    MDIncGrp_NoMDEntries_0.insert(TrdType_3.getString());
    all_values.push_back(MDIncGrp_NoMDEntries_0);
    all_compo_names.insert("..NoMDEntries");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_21;
      FIX::EncodedLegIssuer EncodedLegIssuer_21("DATA_500944279");
      noLegs_0_1_0.set(EncodedLegIssuer_21);
      InstrumentLeg_21.insert(EncodedLegIssuer_21.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_21(1829723337);
      noLegs_0_1_0.set(EncodedLegIssuerLen_21);
      InstrumentLeg_21.insert(EncodedLegIssuerLen_21.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_21("DATA_621294745");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_21);
      InstrumentLeg_21.insert(EncodedLegSecurityDesc_21.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_21(26122346);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_21);
      InstrumentLeg_21.insert(EncodedLegSecurityDescLen_21.getString());
      FIX::LegCFICode LegCFICode_21("STRING_1098808953");
      noLegs_0_1_0.set(LegCFICode_21);
      InstrumentLeg_21.insert(LegCFICode_21.getString());
      FIX::LegContractMultiplier LegContractMultiplier_21;
      LegContractMultiplier_21.setString("13101896");
      noLegs_0_1_0.set(LegContractMultiplier_21);
      InstrumentLeg_21.insert(LegContractMultiplier_21.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_21(346483227);
      noLegs_0_1_0.set(LegContractMultiplierUnit_21);
      InstrumentLeg_21.insert(LegContractMultiplierUnit_21.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_21("MONTHYEAR_1818628052");
      noLegs_0_1_0.set(LegContractSettlMonth_21);
      InstrumentLeg_21.insert(LegContractSettlMonth_21.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_21("COUNTRY_855475102");
      noLegs_0_1_0.set(LegCountryOfIssue_21);
      InstrumentLeg_21.insert(LegCountryOfIssue_21.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_21("LOCALMKTDATE_1654723893");
      noLegs_0_1_0.set(LegCouponPaymentDate_21);
      InstrumentLeg_21.insert(LegCouponPaymentDate_21.getString());
      FIX::LegCouponRate LegCouponRate_21;
      LegCouponRate_21.setString("52.260000");
      noLegs_0_1_0.set(LegCouponRate_21);
      InstrumentLeg_21.insert(LegCouponRate_21.getString());
      FIX::LegCreditRating LegCreditRating_21("STRING_955533317");
      noLegs_0_1_0.set(LegCreditRating_21);
      InstrumentLeg_21.insert(LegCreditRating_21.getString());
      FIX::LegCurrency LegCurrency_21("USD");
      noLegs_0_1_0.set(LegCurrency_21);
      InstrumentLeg_21.insert(LegCurrency_21.getString());
      FIX::LegDatedDate LegDatedDate_21("LOCALMKTDATE_845032736");
      noLegs_0_1_0.set(LegDatedDate_21);
      InstrumentLeg_21.insert(LegDatedDate_21.getString());
      FIX::LegExerciseStyle LegExerciseStyle_21(1933261024);
      noLegs_0_1_0.set(LegExerciseStyle_21);
      InstrumentLeg_21.insert(LegExerciseStyle_21.getString());
      FIX::LegFactor LegFactor_21;
      LegFactor_21.setString("18930847");
      noLegs_0_1_0.set(LegFactor_21);
      InstrumentLeg_21.insert(LegFactor_21.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_21(500173638);
      noLegs_0_1_0.set(LegFlowScheduleType_21);
      InstrumentLeg_21.insert(LegFlowScheduleType_21.getString());
      FIX::LegInstrRegistry LegInstrRegistry_21("STRING_966351811");
      noLegs_0_1_0.set(LegInstrRegistry_21);
      InstrumentLeg_21.insert(LegInstrRegistry_21.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_21("LOCALMKTDATE_1448994991");
      noLegs_0_1_0.set(LegInterestAccrualDate_21);
      InstrumentLeg_21.insert(LegInterestAccrualDate_21.getString());
      FIX::LegIssueDate LegIssueDate_21("LOCALMKTDATE_246590754");
      noLegs_0_1_0.set(LegIssueDate_21);
      InstrumentLeg_21.insert(LegIssueDate_21.getString());
      FIX::LegIssuer LegIssuer_21("STRING_1882834011");
      noLegs_0_1_0.set(LegIssuer_21);
      InstrumentLeg_21.insert(LegIssuer_21.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_21("STRING_1084210741");
      noLegs_0_1_0.set(LegLocaleOfIssue_21);
      InstrumentLeg_21.insert(LegLocaleOfIssue_21.getString());
      FIX::LegMaturityDate LegMaturityDate_21("LOCALMKTDATE_1447322917");
      noLegs_0_1_0.set(LegMaturityDate_21);
      InstrumentLeg_21.insert(LegMaturityDate_21.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_21("MONTHYEAR_1650244899");
      noLegs_0_1_0.set(LegMaturityMonthYear_21);
      InstrumentLeg_21.insert(LegMaturityMonthYear_21.getString());
      FIX::LegMaturityTime LegMaturityTime_21("TZTIMEONLY_1884020700");
      noLegs_0_1_0.set(LegMaturityTime_21);
      InstrumentLeg_21.insert(LegMaturityTime_21.getString());
      FIX::LegOptAttribute LegOptAttribute_21('1');
      noLegs_0_1_0.set(LegOptAttribute_21);
      InstrumentLeg_21.insert(LegOptAttribute_21.getString());
      FIX::LegOptionRatio LegOptionRatio_21;
      LegOptionRatio_21.setString("13768348");
      noLegs_0_1_0.set(LegOptionRatio_21);
      InstrumentLeg_21.insert(LegOptionRatio_21.getString());
      FIX::LegPool LegPool_21("STRING_775631781");
      noLegs_0_1_0.set(LegPool_21);
      InstrumentLeg_21.insert(LegPool_21.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_21("STRING_1935701014");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_21);
      InstrumentLeg_21.insert(LegPriceUnitOfMeasure_21.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_21;
      LegPriceUnitOfMeasureQty_21.setString("17925272");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_21);
      InstrumentLeg_21.insert(LegPriceUnitOfMeasureQty_21.getString());
      FIX::LegProduct LegProduct_21(1276576060);
      noLegs_0_1_0.set(LegProduct_21);
      InstrumentLeg_21.insert(LegProduct_21.getString());
      FIX::LegPutOrCall LegPutOrCall_21(1617940703);
      noLegs_0_1_0.set(LegPutOrCall_21);
      InstrumentLeg_21.insert(LegPutOrCall_21.getString());
      FIX::LegRatioQty LegRatioQty_21;
      LegRatioQty_21.setString("2663382");
      noLegs_0_1_0.set(LegRatioQty_21);
      InstrumentLeg_21.insert(LegRatioQty_21.getString());
      FIX::LegRedemptionDate LegRedemptionDate_21("LOCALMKTDATE_1302698407");
      noLegs_0_1_0.set(LegRedemptionDate_21);
      InstrumentLeg_21.insert(LegRedemptionDate_21.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_21("STRING_569266008");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_21);
      InstrumentLeg_21.insert(LegRepoCollateralSecurityType_21.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_21;
      LegRepurchaseRate_21.setString("79.950000");
      noLegs_0_1_0.set(LegRepurchaseRate_21);
      InstrumentLeg_21.insert(LegRepurchaseRate_21.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_21(1649181634);
      noLegs_0_1_0.set(LegRepurchaseTerm_21);
      InstrumentLeg_21.insert(LegRepurchaseTerm_21.getString());
      FIX::LegSecurityDesc LegSecurityDesc_21("STRING_240410412");
      noLegs_0_1_0.set(LegSecurityDesc_21);
      InstrumentLeg_21.insert(LegSecurityDesc_21.getString());
      FIX::LegSecurityExchange LegSecurityExchange_21("EXCHANGE_284519450");
      noLegs_0_1_0.set(LegSecurityExchange_21);
      InstrumentLeg_21.insert(LegSecurityExchange_21.getString());
      FIX::LegSecurityID LegSecurityID_21("STRING_1156421880");
      noLegs_0_1_0.set(LegSecurityID_21);
      InstrumentLeg_21.insert(LegSecurityID_21.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_21("STRING_1444295639");
      noLegs_0_1_0.set(LegSecurityIDSource_21);
      InstrumentLeg_21.insert(LegSecurityIDSource_21.getString());
      FIX::LegSecuritySubType LegSecuritySubType_21("STRING_1240052767");
      noLegs_0_1_0.set(LegSecuritySubType_21);
      InstrumentLeg_21.insert(LegSecuritySubType_21.getString());
      FIX::LegSecurityType LegSecurityType_21("STRING_336539475");
      noLegs_0_1_0.set(LegSecurityType_21);
      InstrumentLeg_21.insert(LegSecurityType_21.getString());
      FIX::LegSide LegSide_21('3');
      noLegs_0_1_0.set(LegSide_21);
      InstrumentLeg_21.insert(LegSide_21.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_21("STRING_2085085503");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_21);
      InstrumentLeg_21.insert(LegStateOrProvinceOfIssue_21.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_21("EUR");
      noLegs_0_1_0.set(LegStrikeCurrency_21);
      InstrumentLeg_21.insert(LegStrikeCurrency_21.getString());
      FIX::LegStrikePrice LegStrikePrice_21;
      LegStrikePrice_21.setString("4377754");
      noLegs_0_1_0.set(LegStrikePrice_21);
      InstrumentLeg_21.insert(LegStrikePrice_21.getString());
      FIX::LegSymbol LegSymbol_21("STRING_1088668663");
      noLegs_0_1_0.set(LegSymbol_21);
      InstrumentLeg_21.insert(LegSymbol_21.getString());
      FIX::LegSymbolSfx LegSymbolSfx_21("STRING_1566710420");
      noLegs_0_1_0.set(LegSymbolSfx_21);
      InstrumentLeg_21.insert(LegSymbolSfx_21.getString());
      FIX::LegTimeUnit LegTimeUnit_21("STRING_684366248");
      noLegs_0_1_0.set(LegTimeUnit_21);
      InstrumentLeg_21.insert(LegTimeUnit_21.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_21("STRING_824019027");
      noLegs_0_1_0.set(LegUnitOfMeasure_21);
      InstrumentLeg_21.insert(LegUnitOfMeasure_21.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_21;
      LegUnitOfMeasureQty_21.setString("5034375");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_21);
      InstrumentLeg_21.insert(LegUnitOfMeasureQty_21.getString());
      all_values.push_back(InstrumentLeg_21);
      all_compo_names.insert("..NoMDEntries..NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_21;
        FIX::LegSecurityAltID LegSecurityAltID_21("STRING_326780278");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_21);
        LegSecAltIDGrp_NoLegSecurityAltID_21.insert(LegSecurityAltID_21.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_21("STRING_239974566");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_21);
        LegSecAltIDGrp_NoLegSecurityAltID_21.insert(LegSecurityAltIDSource_21.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_21);
        all_compo_names.insert("..NoMDEntries..NoLegs...NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      noMDEntries_0_0.addGroup(noLegs_0_1_0);
    }
    // Instrument
    multiset<string> Instrument_24;
    FIX::AttachmentPoint AttachmentPoint_24;
    AttachmentPoint_24.setString("49.560000");
    noMDEntries_0_0.set(AttachmentPoint_24);
    Instrument_24.insert(AttachmentPoint_24.getString());
    FIX::CFICode CFICode_24("STRING_1703615123");
    noMDEntries_0_0.set(CFICode_24);
    Instrument_24.insert(CFICode_24.getString());
    FIX::CPProgram CPProgram_24(1);
    noMDEntries_0_0.set(CPProgram_24);
    Instrument_24.insert(CPProgram_24.getString());
    FIX::CPRegType CPRegType_24("STRING_1405682322");
    noMDEntries_0_0.set(CPRegType_24);
    Instrument_24.insert(CPRegType_24.getString());
    FIX::CapPrice CapPrice_24;
    CapPrice_24.setString("13486586");
    noMDEntries_0_0.set(CapPrice_24);
    Instrument_24.insert(CapPrice_24.getString());
    FIX::ContractMultiplier ContractMultiplier_24;
    ContractMultiplier_24.setString("1446987");
    noMDEntries_0_0.set(ContractMultiplier_24);
    Instrument_24.insert(ContractMultiplier_24.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_24(0);
    noMDEntries_0_0.set(ContractMultiplierUnit_24);
    Instrument_24.insert(ContractMultiplierUnit_24.getString());
    FIX::ContractSettlMonth ContractSettlMonth_24("MONTHYEAR_1614996976");
    noMDEntries_0_0.set(ContractSettlMonth_24);
    Instrument_24.insert(ContractSettlMonth_24.getString());
    FIX::CountryOfIssue CountryOfIssue_24("COUNTRY_1447397167");
    noMDEntries_0_0.set(CountryOfIssue_24);
    Instrument_24.insert(CountryOfIssue_24.getString());
    FIX::CouponPaymentDate CouponPaymentDate_24("LOCALMKTDATE_1445405385");
    noMDEntries_0_0.set(CouponPaymentDate_24);
    Instrument_24.insert(CouponPaymentDate_24.getString());
    FIX::CouponRate CouponRate_24;
    CouponRate_24.setString("13.240000");
    noMDEntries_0_0.set(CouponRate_24);
    Instrument_24.insert(CouponRate_24.getString());
    FIX::CreditRating CreditRating_24("STRING_949095153");
    noMDEntries_0_0.set(CreditRating_24);
    Instrument_24.insert(CreditRating_24.getString());
    FIX::DatedDate DatedDate_24("LOCALMKTDATE_1685815798");
    noMDEntries_0_0.set(DatedDate_24);
    Instrument_24.insert(DatedDate_24.getString());
    FIX::DetachmentPoint DetachmentPoint_24;
    DetachmentPoint_24.setString("7.740000");
    noMDEntries_0_0.set(DetachmentPoint_24);
    Instrument_24.insert(DetachmentPoint_24.getString());
    FIX::EncodedIssuer EncodedIssuer_24("DATA_2105517033");
    noMDEntries_0_0.set(EncodedIssuer_24);
    Instrument_24.insert(EncodedIssuer_24.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_24(982627789);
    noMDEntries_0_0.set(EncodedIssuerLen_24);
    Instrument_24.insert(EncodedIssuerLen_24.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_24("DATA_421129893");
    noMDEntries_0_0.set(EncodedSecurityDesc_24);
    Instrument_24.insert(EncodedSecurityDesc_24.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_24(294572861);
    noMDEntries_0_0.set(EncodedSecurityDescLen_24);
    Instrument_24.insert(EncodedSecurityDescLen_24.getString());
    FIX::ExerciseStyle ExerciseStyle_24(1);
    noMDEntries_0_0.set(ExerciseStyle_24);
    Instrument_24.insert(ExerciseStyle_24.getString());
    FIX::Factor Factor_24;
    Factor_24.setString("3587317");
    noMDEntries_0_0.set(Factor_24);
    Instrument_24.insert(Factor_24.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_24(false);
    noMDEntries_0_0.set(FlexProductEligibilityIndicator_24);
    Instrument_24.insert(FlexProductEligibilityIndicator_24.getString());
    FIX::FlexibleIndicator FlexibleIndicator_24(true);
    noMDEntries_0_0.set(FlexibleIndicator_24);
    Instrument_24.insert(FlexibleIndicator_24.getString());
    FIX::FloorPrice FloorPrice_24;
    FloorPrice_24.setString("7965072");
    noMDEntries_0_0.set(FloorPrice_24);
    Instrument_24.insert(FloorPrice_24.getString());
    FIX::FlowScheduleType FlowScheduleType_24(1);
    noMDEntries_0_0.set(FlowScheduleType_24);
    Instrument_24.insert(FlowScheduleType_24.getString());
    FIX::InstrRegistry InstrRegistry_24("STRING_891684294");
    noMDEntries_0_0.set(InstrRegistry_24);
    Instrument_24.insert(InstrRegistry_24.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_24('1');
    noMDEntries_0_0.set(InstrmtAssignmentMethod_24);
    Instrument_24.insert(InstrmtAssignmentMethod_24.getString());
    FIX::InterestAccrualDate InterestAccrualDate_24("LOCALMKTDATE_182093755");
    noMDEntries_0_0.set(InterestAccrualDate_24);
    Instrument_24.insert(InterestAccrualDate_24.getString());
    FIX::IssueDate IssueDate_24("LOCALMKTDATE_1395121808");
    noMDEntries_0_0.set(IssueDate_24);
    Instrument_24.insert(IssueDate_24.getString());
    FIX::Issuer Issuer_24("STRING_1465079008");
    noMDEntries_0_0.set(Issuer_24);
    Instrument_24.insert(Issuer_24.getString());
    FIX::ListMethod ListMethod_24(0);
    noMDEntries_0_0.set(ListMethod_24);
    Instrument_24.insert(ListMethod_24.getString());
    FIX::LocaleOfIssue LocaleOfIssue_24("STRING_1635096374");
    noMDEntries_0_0.set(LocaleOfIssue_24);
    Instrument_24.insert(LocaleOfIssue_24.getString());
    FIX::MaturityDate MaturityDate_24("LOCALMKTDATE_935060316");
    noMDEntries_0_0.set(MaturityDate_24);
    Instrument_24.insert(MaturityDate_24.getString());
    FIX::MaturityMonthYear MaturityMonthYear_24("MONTHYEAR_65005509");
    noMDEntries_0_0.set(MaturityMonthYear_24);
    Instrument_24.insert(MaturityMonthYear_24.getString());
    FIX::MaturityTime MaturityTime_24("TZTIMEONLY_503219073");
    noMDEntries_0_0.set(MaturityTime_24);
    Instrument_24.insert(MaturityTime_24.getString());
    FIX::MinPriceIncrement MinPriceIncrement_24;
    MinPriceIncrement_24.setString("1932589");
    noMDEntries_0_0.set(MinPriceIncrement_24);
    Instrument_24.insert(MinPriceIncrement_24.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_24;
    MinPriceIncrementAmount_24.setString("14136641");
    noMDEntries_0_0.set(MinPriceIncrementAmount_24);
    Instrument_24.insert(MinPriceIncrementAmount_24.getString());
    FIX::NTPositionLimit NTPositionLimit_24(647917833);
    noMDEntries_0_0.set(NTPositionLimit_24);
    Instrument_24.insert(NTPositionLimit_24.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_24;
    NotionalPercentageOutstanding_24.setString("83.670000");
    noMDEntries_0_0.set(NotionalPercentageOutstanding_24);
    Instrument_24.insert(NotionalPercentageOutstanding_24.getString());
    FIX::OptAttribute OptAttribute_24('8');
    noMDEntries_0_0.set(OptAttribute_24);
    Instrument_24.insert(OptAttribute_24.getString());
    FIX::OptPayoutAmount OptPayoutAmount_24;
    OptPayoutAmount_24.setString("20953150");
    noMDEntries_0_0.set(OptPayoutAmount_24);
    Instrument_24.insert(OptPayoutAmount_24.getString());
    FIX::OptPayoutType OptPayoutType_24(3);
    noMDEntries_0_0.set(OptPayoutType_24);
    Instrument_24.insert(OptPayoutType_24.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_24;
    OriginalNotionalPercentageOutstanding_24.setString("88.380000");
    noMDEntries_0_0.set(OriginalNotionalPercentageOutstanding_24);
    Instrument_24.insert(OriginalNotionalPercentageOutstanding_24.getString());
    FIX::Pool Pool_24("STRING_896926506");
    noMDEntries_0_0.set(Pool_24);
    Instrument_24.insert(Pool_24.getString());
    FIX::PositionLimit PositionLimit_24(2053135902);
    noMDEntries_0_0.set(PositionLimit_24);
    Instrument_24.insert(PositionLimit_24.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_24("STRING_STD");
    noMDEntries_0_0.set(PriceQuoteMethod_24);
    Instrument_24.insert(PriceQuoteMethod_24.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_24("STRING_854959891");
    noMDEntries_0_0.set(PriceUnitOfMeasure_24);
    Instrument_24.insert(PriceUnitOfMeasure_24.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_24;
    PriceUnitOfMeasureQty_24.setString("8882800");
    noMDEntries_0_0.set(PriceUnitOfMeasureQty_24);
    Instrument_24.insert(PriceUnitOfMeasureQty_24.getString());
    FIX::Product Product_26(10);
    noMDEntries_0_0.set(Product_26);
    Instrument_24.insert(Product_26.getString());
    FIX::ProductComplex ProductComplex_24("STRING_1149532752");
    noMDEntries_0_0.set(ProductComplex_24);
    Instrument_24.insert(ProductComplex_24.getString());
    FIX::PutOrCall PutOrCall_24(0);
    noMDEntries_0_0.set(PutOrCall_24);
    Instrument_24.insert(PutOrCall_24.getString());
    FIX::RedemptionDate RedemptionDate_24("LOCALMKTDATE_1886157606");
    noMDEntries_0_0.set(RedemptionDate_24);
    Instrument_24.insert(RedemptionDate_24.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_24("STRING_1566422465");
    noMDEntries_0_0.set(RepoCollateralSecurityType_24);
    Instrument_24.insert(RepoCollateralSecurityType_24.getString());
    FIX::RepurchaseRate RepurchaseRate_24;
    RepurchaseRate_24.setString("60.100000");
    noMDEntries_0_0.set(RepurchaseRate_24);
    Instrument_24.insert(RepurchaseRate_24.getString());
    FIX::RepurchaseTerm RepurchaseTerm_24(535181200);
    noMDEntries_0_0.set(RepurchaseTerm_24);
    Instrument_24.insert(RepurchaseTerm_24.getString());
    FIX::RestructuringType RestructuringType_24("STRING_MM");
    noMDEntries_0_0.set(RestructuringType_24);
    Instrument_24.insert(RestructuringType_24.getString());
    FIX::SecurityDesc SecurityDesc_24("STRING_312196656");
    noMDEntries_0_0.set(SecurityDesc_24);
    Instrument_24.insert(SecurityDesc_24.getString());
    FIX::SecurityExchange SecurityExchange_24("EXCHANGE_2016054691");
    noMDEntries_0_0.set(SecurityExchange_24);
    Instrument_24.insert(SecurityExchange_24.getString());
    FIX::SecurityGroup SecurityGroup_24("STRING_1106590949");
    noMDEntries_0_0.set(SecurityGroup_24);
    Instrument_24.insert(SecurityGroup_24.getString());
    FIX::SecurityID SecurityID_24("STRING_1707318464");
    noMDEntries_0_0.set(SecurityID_24);
    Instrument_24.insert(SecurityID_24.getString());
    FIX::SecurityIDSource SecurityIDSource_24("STRING_K");
    noMDEntries_0_0.set(SecurityIDSource_24);
    Instrument_24.insert(SecurityIDSource_24.getString());
    FIX::SecurityStatus SecurityStatus_24("STRING_2");
    noMDEntries_0_0.set(SecurityStatus_24);
    Instrument_24.insert(SecurityStatus_24.getString());
    FIX::SecuritySubType SecuritySubType_25("STRING_1194931190");
    noMDEntries_0_0.set(SecuritySubType_25);
    Instrument_24.insert(SecuritySubType_25.getString());
    FIX::SecurityType SecurityType_26("STRING_CB");
    noMDEntries_0_0.set(SecurityType_26);
    Instrument_24.insert(SecurityType_26.getString());
    FIX::Seniority Seniority_24("STRING_SB");
    noMDEntries_0_0.set(Seniority_24);
    Instrument_24.insert(Seniority_24.getString());
    FIX::SettlMethod SettlMethod_24('C');
    noMDEntries_0_0.set(SettlMethod_24);
    Instrument_24.insert(SettlMethod_24.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_24("STRING_314485709");
    noMDEntries_0_0.set(SettleOnOpenFlag_24);
    Instrument_24.insert(SettleOnOpenFlag_24.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_24("STRING_946651030");
    noMDEntries_0_0.set(StateOrProvinceOfIssue_24);
    Instrument_24.insert(StateOrProvinceOfIssue_24.getString());
    FIX::StrikeCurrency StrikeCurrency_24("USD");
    noMDEntries_0_0.set(StrikeCurrency_24);
    Instrument_24.insert(StrikeCurrency_24.getString());
    FIX::StrikeMultiplier StrikeMultiplier_24;
    StrikeMultiplier_24.setString("18278285");
    noMDEntries_0_0.set(StrikeMultiplier_24);
    Instrument_24.insert(StrikeMultiplier_24.getString());
    FIX::StrikePrice StrikePrice_24;
    StrikePrice_24.setString("1464158");
    noMDEntries_0_0.set(StrikePrice_24);
    Instrument_24.insert(StrikePrice_24.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_24(1);
    noMDEntries_0_0.set(StrikePriceBoundaryMethod_24);
    Instrument_24.insert(StrikePriceBoundaryMethod_24.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_24;
    StrikePriceBoundaryPrecision_24.setString("37.350000");
    noMDEntries_0_0.set(StrikePriceBoundaryPrecision_24);
    Instrument_24.insert(StrikePriceBoundaryPrecision_24.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_24(1);
    noMDEntries_0_0.set(StrikePriceDeterminationMethod_24);
    Instrument_24.insert(StrikePriceDeterminationMethod_24.getString());
    FIX::StrikeValue StrikeValue_24;
    StrikeValue_24.setString("16568564");
    noMDEntries_0_0.set(StrikeValue_24);
    Instrument_24.insert(StrikeValue_24.getString());
    FIX::Symbol Symbol_24("STRING_564376052");
    noMDEntries_0_0.set(Symbol_24);
    Instrument_24.insert(Symbol_24.getString());
    FIX::SymbolSfx SymbolSfx_24("STRING_WI");
    noMDEntries_0_0.set(SymbolSfx_24);
    Instrument_24.insert(SymbolSfx_24.getString());
    FIX::TimeUnit TimeUnit_24("STRING_Min");
    noMDEntries_0_0.set(TimeUnit_24);
    Instrument_24.insert(TimeUnit_24.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_24(2);
    noMDEntries_0_0.set(UnderlyingPriceDeterminationMethod_24);
    Instrument_24.insert(UnderlyingPriceDeterminationMethod_24.getString());
    FIX::UnitOfMeasure UnitOfMeasure_24("STRING_oz_tr");
    noMDEntries_0_0.set(UnitOfMeasure_24);
    Instrument_24.insert(UnitOfMeasure_24.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_24;
    UnitOfMeasureQty_24.setString("4931913");
    noMDEntries_0_0.set(UnitOfMeasureQty_24);
    Instrument_24.insert(UnitOfMeasureQty_24.getString());
    FIX::ValuationMethod ValuationMethod_24("STRING_FUTDA");
    noMDEntries_0_0.set(ValuationMethod_24);
    Instrument_24.insert(ValuationMethod_24.getString());
    all_values.push_back(Instrument_24);
    all_compo_names.insert("..NoMDEntries.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_24;
      FIX::ComplexEventCondition ComplexEventCondition_24(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_24);
      ComplexEvents_NoComplexEvents_24.insert(ComplexEventCondition_24.getString());
      FIX::ComplexEventPrice ComplexEventPrice_24;
      ComplexEventPrice_24.setString("2181734");
      noComplexEvents_0_1_0.set(ComplexEventPrice_24);
      ComplexEvents_NoComplexEvents_24.insert(ComplexEventPrice_24.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_24(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_24);
      ComplexEvents_NoComplexEvents_24.insert(ComplexEventPriceBoundaryMethod_24.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_24;
      ComplexEventPriceBoundaryPrecision_24.setString("3.370000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_24);
      ComplexEvents_NoComplexEvents_24.insert(ComplexEventPriceBoundaryPrecision_24.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_24(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_24);
      ComplexEvents_NoComplexEvents_24.insert(ComplexEventPriceTimeType_24.getString());
      FIX::ComplexEventType ComplexEventType_24(4);
      noComplexEvents_0_1_0.set(ComplexEventType_24);
      ComplexEvents_NoComplexEvents_24.insert(ComplexEventType_24.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_24;
      ComplexOptPayoutAmount_24.setString("19332188");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_24);
      ComplexEvents_NoComplexEvents_24.insert(ComplexOptPayoutAmount_24.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_24);
      all_compo_names.insert("..NoMDEntries...NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_24;
        FIX::ComplexEventEndDate ComplexEventEndDate_24(FIX::UTCTIMESTAMP(16, 13, 45, 4, 7, 2005));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_24);
        ComplexEventDates_NoComplexEventDates_24.insert(ComplexEventEndDate_24.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_24(FIX::UTCTIMESTAMP(10, 52, 31, 6, 9, 2017));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_24);
        ComplexEventDates_NoComplexEventDates_24.insert(ComplexEventStartDate_24.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_24);
        all_compo_names.insert("..NoMDEntries...NoComplexEvents..NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_24;
          FIX::ComplexEventEndTime ComplexEventEndTime_24(FIX::UTCTIMEONLY(15, 20, 53));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_24);
          ComplexEventTimes_NoComplexEventTimes_24.insert(ComplexEventEndTime_24.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_24(FIX::UTCTIMEONLY(14, 53, 48));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_24);
          ComplexEventTimes_NoComplexEventTimes_24.insert(ComplexEventStartTime_24.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_24);
          all_compo_names.insert("..NoMDEntries...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      noMDEntries_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_24;
      FIX::EventDate EventDate_24("LOCALMKTDATE_1846282413");
      noEvents_0_1_0.set(EventDate_24);
      EvntGrp_NoEvents_24.insert(EventDate_24.getString());
      FIX::EventPx EventPx_24;
      EventPx_24.setString("19864391");
      noEvents_0_1_0.set(EventPx_24);
      EvntGrp_NoEvents_24.insert(EventPx_24.getString());
      FIX::EventText EventText_24("STRING_1236048856");
      noEvents_0_1_0.set(EventText_24);
      EvntGrp_NoEvents_24.insert(EventText_24.getString());
      FIX::EventTime EventTime_24(FIX::UTCTIMESTAMP(13, 29, 22, 25, 10, 2003));
      noEvents_0_1_0.set(EventTime_24);
      EvntGrp_NoEvents_24.insert(EventTime_24.getString());
      FIX::EventType EventType_24(11);
      noEvents_0_1_0.set(EventType_24);
      EvntGrp_NoEvents_24.insert(EventType_24.getString());
      all_values.push_back(EvntGrp_NoEvents_24);
      all_compo_names.insert("..NoMDEntries...NoEvents");

      noMDEntries_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_24;
      FIX::InstrumentPartyID InstrumentPartyID_24("STRING_308698621");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_24);
      InstrumentParties_NoInstrumentParties_24.insert(InstrumentPartyID_24.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_24('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_24);
      InstrumentParties_NoInstrumentParties_24.insert(InstrumentPartyIDSource_24.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_24(1116217075);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_24);
      InstrumentParties_NoInstrumentParties_24.insert(InstrumentPartyRole_24.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_24);
      all_compo_names.insert("..NoMDEntries...NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24;
        FIX::InstrumentPartySubID InstrumentPartySubID_24("STRING_1045445082");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_24);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24.insert(InstrumentPartySubID_24.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_24(1992550286);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_24);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24.insert(InstrumentPartySubIDType_24.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24);
        all_compo_names.insert("..NoMDEntries...NoInstrumentParties..NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noMDEntries_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_24;
      FIX::SecurityAltID SecurityAltID_24("STRING_334383894");
      noSecurityAltID_0_1_0.set(SecurityAltID_24);
      SecAltIDGrp_NoSecurityAltID_24.insert(SecurityAltID_24.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_24("STRING_1764742158");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_24);
      SecAltIDGrp_NoSecurityAltID_24.insert(SecurityAltIDSource_24.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_24);
      all_compo_names.insert("..NoMDEntries...NoSecurityAltID");

      noMDEntries_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_48;
    FIX::SecurityXML SecurityXML_49("XMLDATA_155550935");
    noMDEntries_0_0.set(SecurityXML_49);
    FIX::SecurityXMLLen SecurityXMLLen_24(187698758);
    noMDEntries_0_0.set(SecurityXMLLen_24);
    FIX::SecurityXMLSchema SecurityXMLSchema_24("STRING_1287752581");
    noMDEntries_0_0.set(SecurityXMLSchema_24);
    SecurityXML_48.insert(SecurityXMLSchema_24.getString());
    all_values.push_back(SecurityXML_48);
    all_compo_names.insert("..NoMDEntries..");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_22;
      FIX::PartyID PartyID_22("STRING_2132815532");
      noPartyIDs_0_1_0.set(PartyID_22);
      Parties_NoPartyIDs_22.insert(PartyID_22.getString());
      FIX::PartyIDSource PartyIDSource_22('6');
      noPartyIDs_0_1_0.set(PartyIDSource_22);
      Parties_NoPartyIDs_22.insert(PartyIDSource_22.getString());
      FIX::PartyRole PartyRole_22(10);
      noPartyIDs_0_1_0.set(PartyRole_22);
      Parties_NoPartyIDs_22.insert(PartyRole_22.getString());
      all_values.push_back(Parties_NoPartyIDs_22);
      all_compo_names.insert("..NoMDEntries..NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_22;
        FIX::PartySubID PartySubID_22("STRING_306282508");
        noPartySubIDs_0_0_2_0.set(PartySubID_22);
        PtysSubGrp_NoPartySubIDs_22.insert(PartySubID_22.getString());
        FIX::PartySubIDType PartySubIDType_22(23);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_22);
        PtysSubGrp_NoPartySubIDs_22.insert(PartySubIDType_22.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_22);
        all_compo_names.insert("..NoMDEntries..NoPartyIDs..NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoRateSources noRateSources_0_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_3;
      FIX::RateSource RateSource_7(0);
      noRateSources_0_1_0.set(RateSource_7);
      RateSource_NoRateSources_3.insert(RateSource_7.getString());
      FIX::RateSourceType RateSourceType_3(0);
      noRateSources_0_1_0.set(RateSourceType_3);
      RateSource_NoRateSources_3.insert(RateSourceType_3.getString());
      FIX::ReferencePage ReferencePage_3("STRING_1097782870");
      noRateSources_0_1_0.set(ReferencePage_3);
      RateSource_NoRateSources_3.insert(ReferencePage_3.getString());
      all_values.push_back(RateSource_NoRateSources_3);
      all_compo_names.insert("..NoMDEntries..NoRateSources");

      noMDEntries_0_0.addGroup(noRateSources_0_1_0);
    }
    // SecSizesGrp
    // Group SecSizesGrp.NoOfSecSizes
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_0_1_0;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_0;
      FIX::MDSecSize MDSecSize_0;
      MDSecSize_0.setString("8282633");
      noOfSecSizes_0_1_0.set(MDSecSize_0);
      SecSizesGrp_NoOfSecSizes_0.insert(MDSecSize_0.getString());
      FIX::MDSecSizeType MDSecSizeType_0(1);
      noOfSecSizes_0_1_0.set(MDSecSizeType_0);
      SecSizesGrp_NoOfSecSizes_0.insert(MDSecSizeType_0.getString());
      all_values.push_back(SecSizesGrp_NoOfSecSizes_0);
      all_compo_names.insert("..NoMDEntries..NoOfSecSizes");

      noMDEntries_0_0.addGroup(noOfSecSizes_0_1_0);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_12;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_12("EUR");
    noMDEntries_0_0.set(BenchmarkCurveCurrency_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkCurveCurrency_12.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_12("STRING_FutureSWAP");
    noMDEntries_0_0.set(BenchmarkCurveName_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkCurveName_12.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_12("STRING_963886773");
    noMDEntries_0_0.set(BenchmarkCurvePoint_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkCurvePoint_12.getString());
    FIX::BenchmarkPrice BenchmarkPrice_12;
    BenchmarkPrice_12.setString("10695297");
    noMDEntries_0_0.set(BenchmarkPrice_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkPrice_12.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_12(1065010912);
    noMDEntries_0_0.set(BenchmarkPriceType_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkPriceType_12.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_12("STRING_30989483");
    noMDEntries_0_0.set(BenchmarkSecurityID_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkSecurityID_12.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_12("STRING_38263180");
    noMDEntries_0_0.set(BenchmarkSecurityIDSource_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkSecurityIDSource_12.getString());
    FIX::Spread Spread_12;
    Spread_12.setString("3187332");
    noMDEntries_0_0.set(Spread_12);
    SpreadOrBenchmarkCurveData_12.insert(Spread_12.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_12);
    all_compo_names.insert("..NoMDEntries.");

    // StatsIndGrp
    // Group StatsIndGrp.NoStatsIndicators
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoStatsIndicators noStatsIndicators_0_1_0;
      // StatsIndGrp.NoStatsIndicators
      multiset<string> StatsIndGrp_NoStatsIndicators_0;
      FIX::StatsType StatsType_0(3);
      noStatsIndicators_0_1_0.set(StatsType_0);
      StatsIndGrp_NoStatsIndicators_0.insert(StatsType_0.getString());
      all_values.push_back(StatsIndGrp_NoStatsIndicators_0);
      all_compo_names.insert("..NoMDEntries..NoStatsIndicators");

      noMDEntries_0_0.addGroup(noStatsIndicators_0_1_0);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_24;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_24("DATA_1410818460");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_24);
      UnderlyingInstrument_24.insert(EncodedUnderlyingIssuer_24.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_24(1648071976);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_24);
      UnderlyingInstrument_24.insert(EncodedUnderlyingIssuerLen_24.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_24("DATA_424234435");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_24);
      UnderlyingInstrument_24.insert(EncodedUnderlyingSecurityDesc_24.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_24(1598517219);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_24);
      UnderlyingInstrument_24.insert(EncodedUnderlyingSecurityDescLen_24.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_24;
      UnderlyingAdjustedQuantity_24.setString("7883409");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_24);
      UnderlyingInstrument_24.insert(UnderlyingAdjustedQuantity_24.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_24;
      UnderlyingAllocationPercent_24.setString("88.900000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_24);
      UnderlyingInstrument_24.insert(UnderlyingAllocationPercent_24.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_24;
      UnderlyingAttachmentPoint_24.setString("91.030000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_24);
      UnderlyingInstrument_24.insert(UnderlyingAttachmentPoint_24.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_24("STRING_351971569");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_24);
      UnderlyingInstrument_24.insert(UnderlyingCFICode_24.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_24("STRING_890804536");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_24);
      UnderlyingInstrument_24.insert(UnderlyingCPProgram_24.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_24("STRING_1049806332");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_24);
      UnderlyingInstrument_24.insert(UnderlyingCPRegType_24.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_24;
      UnderlyingCapValue_24.setString("6582540");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_24);
      UnderlyingInstrument_24.insert(UnderlyingCapValue_24.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_24;
      UnderlyingCashAmount_24.setString("16087187");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_24);
      UnderlyingInstrument_24.insert(UnderlyingCashAmount_24.getString());
      FIX::UnderlyingCashType UnderlyingCashType_24("STRING_FIXED");
      noUnderlyings_0_1_0.set(UnderlyingCashType_24);
      UnderlyingInstrument_24.insert(UnderlyingCashType_24.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_24;
      UnderlyingContractMultiplier_24.setString("8034921");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_24);
      UnderlyingInstrument_24.insert(UnderlyingContractMultiplier_24.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_24(1415198073);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_24);
      UnderlyingInstrument_24.insert(UnderlyingContractMultiplierUnit_24.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_24("COUNTRY_1312345196");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_24);
      UnderlyingInstrument_24.insert(UnderlyingCountryOfIssue_24.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_24("LOCALMKTDATE_990580260");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_24);
      UnderlyingInstrument_24.insert(UnderlyingCouponPaymentDate_24.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_24;
      UnderlyingCouponRate_24.setString("78.070000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_24);
      UnderlyingInstrument_24.insert(UnderlyingCouponRate_24.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_24("STRING_1468582160");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_24);
      UnderlyingInstrument_24.insert(UnderlyingCreditRating_24.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_24("GBP");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_24);
      UnderlyingInstrument_24.insert(UnderlyingCurrency_24.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_24;
      UnderlyingCurrentValue_24.setString("774108");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_24);
      UnderlyingInstrument_24.insert(UnderlyingCurrentValue_24.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_24;
      UnderlyingDetachmentPoint_24.setString("12.760000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_24);
      UnderlyingInstrument_24.insert(UnderlyingDetachmentPoint_24.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_24;
      UnderlyingDirtyPrice_24.setString("18487376");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_24);
      UnderlyingInstrument_24.insert(UnderlyingDirtyPrice_24.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_24;
      UnderlyingEndPrice_24.setString("11424217");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_24);
      UnderlyingInstrument_24.insert(UnderlyingEndPrice_24.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_24;
      UnderlyingEndValue_24.setString("18852707");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_24);
      UnderlyingInstrument_24.insert(UnderlyingEndValue_24.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_24(1887000827);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_24);
      UnderlyingInstrument_24.insert(UnderlyingExerciseStyle_24.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_24;
      UnderlyingFXRate_24.setString("14611549");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_24);
      UnderlyingInstrument_24.insert(UnderlyingFXRate_24.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_24('D');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_24);
      UnderlyingInstrument_24.insert(UnderlyingFXRateCalc_24.getString());
      FIX::UnderlyingFactor UnderlyingFactor_24;
      UnderlyingFactor_24.setString("17703306");
      noUnderlyings_0_1_0.set(UnderlyingFactor_24);
      UnderlyingInstrument_24.insert(UnderlyingFactor_24.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_24(1729838470);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_24);
      UnderlyingInstrument_24.insert(UnderlyingFlowScheduleType_24.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_24("STRING_77556490");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_24);
      UnderlyingInstrument_24.insert(UnderlyingInstrRegistry_24.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_24("LOCALMKTDATE_1270918974");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_24);
      UnderlyingInstrument_24.insert(UnderlyingIssueDate_24.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_24("STRING_6589258");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_24);
      UnderlyingInstrument_24.insert(UnderlyingIssuer_24.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_24("STRING_1676073709");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_24);
      UnderlyingInstrument_24.insert(UnderlyingLocaleOfIssue_24.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_24("LOCALMKTDATE_2059259884");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_24);
      UnderlyingInstrument_24.insert(UnderlyingMaturityDate_24.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_24("MONTHYEAR_1189628148");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_24);
      UnderlyingInstrument_24.insert(UnderlyingMaturityMonthYear_24.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_24("TZTIMEONLY_1112439164");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_24);
      UnderlyingInstrument_24.insert(UnderlyingMaturityTime_24.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_24;
      UnderlyingNotionalPercentageOutstanding_24.setString("78.050000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_24);
      UnderlyingInstrument_24.insert(UnderlyingNotionalPercentageOutstanding_24.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_24('2');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_24);
      UnderlyingInstrument_24.insert(UnderlyingOptAttribute_24.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_24;
      UnderlyingOriginalNotionalPercentageOutstanding_24.setString("18.480000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_24);
      UnderlyingInstrument_24.insert(UnderlyingOriginalNotionalPercentageOutstanding_24.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_24("STRING_922001883");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_24);
      UnderlyingInstrument_24.insert(UnderlyingPriceUnitOfMeasure_24.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_24;
      UnderlyingPriceUnitOfMeasureQty_24.setString("15416677");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_24);
      UnderlyingInstrument_24.insert(UnderlyingPriceUnitOfMeasureQty_24.getString());
      FIX::UnderlyingProduct UnderlyingProduct_24(229324174);
      noUnderlyings_0_1_0.set(UnderlyingProduct_24);
      UnderlyingInstrument_24.insert(UnderlyingProduct_24.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_24(1725493986);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_24);
      UnderlyingInstrument_24.insert(UnderlyingPutOrCall_24.getString());
      FIX::UnderlyingPx UnderlyingPx_24;
      UnderlyingPx_24.setString("8093821");
      noUnderlyings_0_1_0.set(UnderlyingPx_24);
      UnderlyingInstrument_24.insert(UnderlyingPx_24.getString());
      FIX::UnderlyingQty UnderlyingQty_24;
      UnderlyingQty_24.setString("15416693");
      noUnderlyings_0_1_0.set(UnderlyingQty_24);
      UnderlyingInstrument_24.insert(UnderlyingQty_24.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_24("LOCALMKTDATE_568590598");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_24);
      UnderlyingInstrument_24.insert(UnderlyingRedemptionDate_24.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_24("STRING_905359969");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_24);
      UnderlyingInstrument_24.insert(UnderlyingRepoCollateralSecurityType_24.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_24;
      UnderlyingRepurchaseRate_24.setString("78.820000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_24);
      UnderlyingInstrument_24.insert(UnderlyingRepurchaseRate_24.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_24(1458985101);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_24);
      UnderlyingInstrument_24.insert(UnderlyingRepurchaseTerm_24.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_24("STRING_1684567863");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_24);
      UnderlyingInstrument_24.insert(UnderlyingRestructuringType_24.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_24("STRING_940178685");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_24);
      UnderlyingInstrument_24.insert(UnderlyingSecurityDesc_24.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_24("EXCHANGE_1165782729");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_24);
      UnderlyingInstrument_24.insert(UnderlyingSecurityExchange_24.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_24("STRING_1385821863");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_24);
      UnderlyingInstrument_24.insert(UnderlyingSecurityID_24.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_24("STRING_2082600400");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_24);
      UnderlyingInstrument_24.insert(UnderlyingSecurityIDSource_24.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_24("STRING_903569841");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_24);
      UnderlyingInstrument_24.insert(UnderlyingSecuritySubType_24.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_24("STRING_1125339042");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_24);
      UnderlyingInstrument_24.insert(UnderlyingSecurityType_24.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_24("STRING_1396271722");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_24);
      UnderlyingInstrument_24.insert(UnderlyingSeniority_24.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_24("STRING_1717791519");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_24);
      UnderlyingInstrument_24.insert(UnderlyingSettlMethod_24.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_24(5);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_24);
      UnderlyingInstrument_24.insert(UnderlyingSettlementType_24.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_24;
      UnderlyingStartValue_24.setString("9786265");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_24);
      UnderlyingInstrument_24.insert(UnderlyingStartValue_24.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_24("STRING_1795348010");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_24);
      UnderlyingInstrument_24.insert(UnderlyingStateOrProvinceOfIssue_24.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_24("CAN");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_24);
      UnderlyingInstrument_24.insert(UnderlyingStrikeCurrency_24.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_24;
      UnderlyingStrikePrice_24.setString("13239380");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_24);
      UnderlyingInstrument_24.insert(UnderlyingStrikePrice_24.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_24("STRING_1930881251");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_24);
      UnderlyingInstrument_24.insert(UnderlyingSymbol_24.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_24("STRING_27360303");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_24);
      UnderlyingInstrument_24.insert(UnderlyingSymbolSfx_24.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_24("STRING_288893588");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_24);
      UnderlyingInstrument_24.insert(UnderlyingTimeUnit_24.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_24("STRING_47145408");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_24);
      UnderlyingInstrument_24.insert(UnderlyingUnitOfMeasure_24.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_24;
      UnderlyingUnitOfMeasureQty_24.setString("21077929");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_24);
      UnderlyingInstrument_24.insert(UnderlyingUnitOfMeasureQty_24.getString());
      all_values.push_back(UnderlyingInstrument_24);
      all_compo_names.insert("..NoMDEntries..NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_24;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_24("STRING_969147292");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_24);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_24.insert(UnderlyingSecurityAltID_24.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_24("STRING_1501977077");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_24);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_24.insert(UnderlyingSecurityAltIDSource_24.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_24);
        all_compo_names.insert("..NoMDEntries..NoUnderlyings...NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_24;
        FIX::UnderlyingStipType UnderlyingStipType_24("STRING_547157630");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_24);
        UnderlyingStipulations_NoUnderlyingStips_24.insert(UnderlyingStipType_24.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_24("STRING_163875591");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_24);
        UnderlyingStipulations_NoUnderlyingStips_24.insert(UnderlyingStipValue_24.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_24);
        all_compo_names.insert("..NoMDEntries..NoUnderlyings...NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_24;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_24("STRING_1115748228");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_24);
        UndlyInstrumentParties_NoUndlyInstrumentParties_24.insert(UnderlyingInstrumentPartyID_24.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_24('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_24);
        UndlyInstrumentParties_NoUndlyInstrumentParties_24.insert(UnderlyingInstrumentPartyIDSource_24.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_24(789933216);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_24);
        UndlyInstrumentParties_NoUndlyInstrumentParties_24.insert(UnderlyingInstrumentPartyRole_24.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_24);
        all_compo_names.insert("..NoMDEntries..NoUnderlyings...NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_24("STRING_606319775");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_24);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24.insert(UnderlyingInstrumentPartySubID_24.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_24(1730111901);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_24);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24.insert(UnderlyingInstrumentPartySubIDType_24.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24);
          all_compo_names.insert("..NoMDEntries..NoUnderlyings...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      noMDEntries_0_0.addGroup(noUnderlyings_0_1_0);
    }
    // YieldData
    multiset<string> YieldData_7;
    FIX::Yield Yield_7;
    Yield_7.setString("24.100000");
    noMDEntries_0_0.set(Yield_7);
    YieldData_7.insert(Yield_7.getString());
    FIX::YieldCalcDate YieldCalcDate_7("LOCALMKTDATE_1992141638");
    noMDEntries_0_0.set(YieldCalcDate_7);
    YieldData_7.insert(YieldCalcDate_7.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_7("LOCALMKTDATE_1665228654");
    noMDEntries_0_0.set(YieldRedemptionDate_7);
    YieldData_7.insert(YieldRedemptionDate_7.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_7;
    YieldRedemptionPrice_7.setString("3491186");
    noMDEntries_0_0.set(YieldRedemptionPrice_7);
    YieldData_7.insert(YieldRedemptionPrice_7.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_7(969997033);
    noMDEntries_0_0.set(YieldRedemptionPriceType_7);
    YieldData_7.insert(YieldRedemptionPriceType_7.getString());
    FIX::YieldType YieldType_7("STRING_VALUE1_32");
    noMDEntries_0_0.set(YieldType_7);
    YieldData_7.insert(YieldType_7.getString());
    all_values.push_back(YieldData_7);
    all_compo_names.insert("..NoMDEntries.");

    msg.addGroup(noMDEntries_0_0);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::MarketDataIncrementalRefresh::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_2;
    FIX::RoutingID RoutingID_2("STRING_1718183073");
    noRoutingIDs_0_0.set(RoutingID_2);
    RoutingGrp_NoRoutingIDs_2.insert(RoutingID_2.getString());
    FIX::RoutingType RoutingType_2(2);
    noRoutingIDs_0_0.set(RoutingType_2);
    RoutingGrp_NoRoutingIDs_2.insert(RoutingType_2.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_2);
    all_compo_names.insert("..NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_0);
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
