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
  FIX::ApplQueueDepth ApplQueueDepth_0(301032549);
  msg.set(ApplQueueDepth_0);
  MarketDataIncrementalRefresh_0.insert(ApplQueueDepth_0.getString());
  FIX::ApplQueueResolution ApplQueueResolution_0(0);
  msg.set(ApplQueueResolution_0);
  MarketDataIncrementalRefresh_0.insert(ApplQueueResolution_0.getString());
  FIX::MDBookType MDBookType_20(3);
  msg.set(MDBookType_20);
  MarketDataIncrementalRefresh_0.insert(MDBookType_20.getString());
  FIX::MDFeedType MDFeedType_20("STRING_456935928");
  msg.set(MDFeedType_20);
  MarketDataIncrementalRefresh_0.insert(MDFeedType_20.getString());
  FIX::MDReqID MDReqID_0("STRING_683203402");
  msg.set(MDReqID_0);
  MarketDataIncrementalRefresh_0.insert(MDReqID_0.getString());
  FIX::TradeDate TradeDate_15("LOCALMKTDATE_193958749");
  msg.set(TradeDate_15);
  MarketDataIncrementalRefresh_0.insert(TradeDate_15.getString());
  all_values.push_back(MarketDataIncrementalRefresh_0);

  all_compo_names.insert("MarketDataIncrementalRefresh");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_6;
  FIX::ApplID ApplID_6("STRING_1337455586");
  msg.set(ApplID_6);
  ApplicationSequenceControl_6.insert(ApplID_6.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_6(149135728);
  msg.set(ApplLastSeqNum_6);
  ApplicationSequenceControl_6.insert(ApplLastSeqNum_6.getString());
  FIX::ApplResendFlag ApplResendFlag_6(false);
  msg.set(ApplResendFlag_6);
  ApplicationSequenceControl_6.insert(ApplResendFlag_6.getString());
  FIX::ApplSeqNum ApplSeqNum_6(850176801);
  msg.set(ApplSeqNum_6);
  ApplicationSequenceControl_6.insert(ApplSeqNum_6.getString());
  all_values.push_back(ApplicationSequenceControl_6);
  all_compo_names.insert("ApplicationSequenceControl");

  // MDIncGrp
  // Group MDIncGrp.NoMDEntries
  {
    FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries noMDEntries_0_0;
    // MDIncGrp.NoMDEntries
    multiset<string> MDIncGrp_NoMDEntries_0;
    FIX::CorporateAction CorporateAction_5("MULTIPLECHARVALUE_H");
    noMDEntries_0_0.set(CorporateAction_5);
    MDIncGrp_NoMDEntries_0.insert(CorporateAction_5.getString());
    FIX::Currency Currency_23("GBP");
    noMDEntries_0_0.set(Currency_23);
    MDIncGrp_NoMDEntries_0.insert(Currency_23.getString());
    FIX::DealingCapacity DealingCapacity_0('A');
    noMDEntries_0_0.set(DealingCapacity_0);
    MDIncGrp_NoMDEntries_0.insert(DealingCapacity_0.getString());
    FIX::DeleteReason DeleteReason_0('1');
    noMDEntries_0_0.set(DeleteReason_0);
    MDIncGrp_NoMDEntries_0.insert(DeleteReason_0.getString());
    FIX::DeskID DeskID_0("STRING_1022183536");
    noMDEntries_0_0.set(DeskID_0);
    MDIncGrp_NoMDEntries_0.insert(DeskID_0.getString());
    FIX::EncodedText EncodedText_46("DATA_1010027468");
    noMDEntries_0_0.set(EncodedText_46);
    MDIncGrp_NoMDEntries_0.insert(EncodedText_46.getString());
    FIX::EncodedTextLen EncodedTextLen_46(1238317023);
    noMDEntries_0_0.set(EncodedTextLen_46);
    MDIncGrp_NoMDEntries_0.insert(EncodedTextLen_46.getString());
    FIX::ExecInst ExecInst_2("MULTIPLECHARVALUE_B");
    noMDEntries_0_0.set(ExecInst_2);
    MDIncGrp_NoMDEntries_0.insert(ExecInst_2.getString());
    FIX::ExpireDate ExpireDate_3("LOCALMKTDATE_1623296282");
    noMDEntries_0_0.set(ExpireDate_3);
    MDIncGrp_NoMDEntries_0.insert(ExpireDate_3.getString());
    FIX::ExpireTime ExpireTime_4(FIX::UTCTIMESTAMP(4, 14, 47, 14, 11, 2013));
    noMDEntries_0_0.set(ExpireTime_4);
    MDIncGrp_NoMDEntries_0.insert(ExpireTime_4.getString());
    FIX::FinancialStatus FinancialStatus_2("MULTIPLECHARVALUE_1");
    noMDEntries_0_0.set(FinancialStatus_2);
    MDIncGrp_NoMDEntries_0.insert(FinancialStatus_2.getString());
    FIX::FirstPx FirstPx_0;
    FirstPx_0.setString("131808");
    noMDEntries_0_0.set(FirstPx_0);
    MDIncGrp_NoMDEntries_0.insert(FirstPx_0.getString());
    FIX::HaltReasonInt HaltReasonInt_0(0);
    noMDEntries_0_0.set(HaltReasonInt_0);
    FIX::HighPx HighPx_0;
    HighPx_0.setString("3302127");
    noMDEntries_0_0.set(HighPx_0);
    MDIncGrp_NoMDEntries_0.insert(HighPx_0.getString());
    FIX::LastPx LastPx_9;
    LastPx_9.setString("18318712");
    noMDEntries_0_0.set(LastPx_9);
    MDIncGrp_NoMDEntries_0.insert(LastPx_9.getString());
    FIX::LocationID LocationID_0("STRING_403452909");
    noMDEntries_0_0.set(LocationID_0);
    MDIncGrp_NoMDEntries_0.insert(LocationID_0.getString());
    FIX::LotType LotType_11('4');
    noMDEntries_0_0.set(LotType_11);
    MDIncGrp_NoMDEntries_0.insert(LotType_11.getString());
    FIX::LowPx LowPx_0;
    LowPx_0.setString("3675910");
    noMDEntries_0_0.set(LowPx_0);
    MDIncGrp_NoMDEntries_0.insert(LowPx_0.getString());
    FIX::MDEntryBuyer MDEntryBuyer_0("STRING_597411658");
    noMDEntries_0_0.set(MDEntryBuyer_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryBuyer_0.getString());
    FIX::MDEntryDate MDEntryDate_0(FIX::UTCDATEONLY(11, 7, 2011));
    noMDEntries_0_0.set(MDEntryDate_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryDate_0.getString());
    FIX::MDEntryForwardPoints MDEntryForwardPoints_0;
    MDEntryForwardPoints_0.setString("16461486");
    noMDEntries_0_0.set(MDEntryForwardPoints_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryForwardPoints_0.getString());
    FIX::MDEntryID MDEntryID_0("STRING_1746219078");
    noMDEntries_0_0.set(MDEntryID_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryID_0.getString());
    FIX::MDEntryOriginator MDEntryOriginator_0("STRING_1415401403");
    noMDEntries_0_0.set(MDEntryOriginator_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryOriginator_0.getString());
    FIX::MDEntryPositionNo MDEntryPositionNo_0(492115192);
    noMDEntries_0_0.set(MDEntryPositionNo_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryPositionNo_0.getString());
    FIX::MDEntryPx MDEntryPx_0;
    MDEntryPx_0.setString("16093933");
    noMDEntries_0_0.set(MDEntryPx_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryPx_0.getString());
    FIX::MDEntryRefID MDEntryRefID_0("STRING_401360028");
    noMDEntries_0_0.set(MDEntryRefID_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryRefID_0.getString());
    FIX::MDEntrySeller MDEntrySeller_0("STRING_1514298729");
    noMDEntries_0_0.set(MDEntrySeller_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntrySeller_0.getString());
    FIX::MDEntrySize MDEntrySize_0;
    MDEntrySize_0.setString("4719371");
    noMDEntries_0_0.set(MDEntrySize_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntrySize_0.getString());
    FIX::MDEntrySpotRate MDEntrySpotRate_0;
    MDEntrySpotRate_0.setString("16396770");
    noMDEntries_0_0.set(MDEntrySpotRate_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntrySpotRate_0.getString());
    FIX::MDEntryTime MDEntryTime_0(FIX::UTCTIMEONLY(23, 41, 52));
    noMDEntries_0_0.set(MDEntryTime_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryTime_0.getString());
    FIX::MDEntryType MDEntryType_0('D');
    noMDEntries_0_0.set(MDEntryType_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryType_0.getString());
    FIX::MDMkt MDMkt_0("EXCHANGE_1855847548");
    noMDEntries_0_0.set(MDMkt_0);
    MDIncGrp_NoMDEntries_0.insert(MDMkt_0.getString());
    FIX::MDOriginType MDOriginType_0(2);
    noMDEntries_0_0.set(MDOriginType_0);
    MDIncGrp_NoMDEntries_0.insert(MDOriginType_0.getString());
    FIX::MDPriceLevel MDPriceLevel_0(1230904804);
    noMDEntries_0_0.set(MDPriceLevel_0);
    MDIncGrp_NoMDEntries_0.insert(MDPriceLevel_0.getString());
    FIX::MDQuoteType MDQuoteType_0(3);
    noMDEntries_0_0.set(MDQuoteType_0);
    MDIncGrp_NoMDEntries_0.insert(MDQuoteType_0.getString());
    FIX::MDStreamID MDStreamID_0("STRING_256166432");
    noMDEntries_0_0.set(MDStreamID_0);
    MDIncGrp_NoMDEntries_0.insert(MDStreamID_0.getString());
    FIX::MDSubBookType MDSubBookType_0(1244085688);
    noMDEntries_0_0.set(MDSubBookType_0);
    MDIncGrp_NoMDEntries_0.insert(MDSubBookType_0.getString());
    FIX::MDUpdateAction MDUpdateAction_0('1');
    noMDEntries_0_0.set(MDUpdateAction_0);
    MDIncGrp_NoMDEntries_0.insert(MDUpdateAction_0.getString());
    FIX::MarketDepth MarketDepth_20(586379163);
    noMDEntries_0_0.set(MarketDepth_20);
    MDIncGrp_NoMDEntries_0.insert(MarketDepth_20.getString());
    FIX::MatchType MatchType_34("STRING_M5");
    noMDEntries_0_0.set(MatchType_34);
    MDIncGrp_NoMDEntries_0.insert(MatchType_34.getString());
    FIX::MinQty MinQty_2;
    MinQty_2.setString("7052381");
    noMDEntries_0_0.set(MinQty_2);
    MDIncGrp_NoMDEntries_0.insert(MinQty_2.getString());
    FIX::NetChgPrevDay NetChgPrevDay_0;
    NetChgPrevDay_0.setString("13735278");
    noMDEntries_0_0.set(NetChgPrevDay_0);
    MDIncGrp_NoMDEntries_0.insert(NetChgPrevDay_0.getString());
    FIX::NumberOfOrders NumberOfOrders_0(1296064307);
    noMDEntries_0_0.set(NumberOfOrders_0);
    MDIncGrp_NoMDEntries_0.insert(NumberOfOrders_0.getString());
    FIX::OpenCloseSettlFlag OpenCloseSettlFlag_0("MULTIPLECHARVALUE_2");
    noMDEntries_0_0.set(OpenCloseSettlFlag_0);
    MDIncGrp_NoMDEntries_0.insert(OpenCloseSettlFlag_0.getString());
    FIX::OrdType OrdType_26('C');
    noMDEntries_0_0.set(OrdType_26);
    MDIncGrp_NoMDEntries_0.insert(OrdType_26.getString());
    FIX::OrderCapacity OrderCapacity_5('A');
    noMDEntries_0_0.set(OrderCapacity_5);
    MDIncGrp_NoMDEntries_0.insert(OrderCapacity_5.getString());
    FIX::OrderID OrderID_23("STRING_1834044236");
    noMDEntries_0_0.set(OrderID_23);
    MDIncGrp_NoMDEntries_0.insert(OrderID_23.getString());
    FIX::PriceDelta PriceDelta_1;
    PriceDelta_1.setString("304621");
    noMDEntries_0_0.set(PriceDelta_1);
    MDIncGrp_NoMDEntries_0.insert(PriceDelta_1.getString());
    FIX::PriceType PriceType_22(16);
    noMDEntries_0_0.set(PriceType_22);
    MDIncGrp_NoMDEntries_0.insert(PriceType_22.getString());
    FIX::QuoteCondition QuoteCondition_0("MULTIPLESTRINGVALUE_H");
    noMDEntries_0_0.set(QuoteCondition_0);
    MDIncGrp_NoMDEntries_0.insert(QuoteCondition_0.getString());
    FIX::QuoteEntryID QuoteEntryID_0("STRING_1445863573");
    noMDEntries_0_0.set(QuoteEntryID_0);
    MDIncGrp_NoMDEntries_0.insert(QuoteEntryID_0.getString());
    FIX::RptSeq RptSeq_1(1803571266);
    noMDEntries_0_0.set(RptSeq_1);
    MDIncGrp_NoMDEntries_0.insert(RptSeq_1.getString());
    FIX::Scope Scope_0("MULTIPLECHARVALUE_2");
    noMDEntries_0_0.set(Scope_0);
    MDIncGrp_NoMDEntries_0.insert(Scope_0.getString());
    FIX::SecondaryOrderID SecondaryOrderID_19("STRING_1847223602");
    noMDEntries_0_0.set(SecondaryOrderID_19);
    MDIncGrp_NoMDEntries_0.insert(SecondaryOrderID_19.getString());
    FIX::SecurityTradingStatus SecurityTradingStatus_0(24);
    noMDEntries_0_0.set(SecurityTradingStatus_0);
    MDIncGrp_NoMDEntries_0.insert(SecurityTradingStatus_0.getString());
    FIX::SellerDays SellerDays_0(1366626591);
    noMDEntries_0_0.set(SellerDays_0);
    MDIncGrp_NoMDEntries_0.insert(SellerDays_0.getString());
    FIX::SettlCurrency SettlCurrency_9("EUR");
    noMDEntries_0_0.set(SettlCurrency_9);
    MDIncGrp_NoMDEntries_0.insert(SettlCurrency_9.getString());
    FIX::SettlDate SettlDate_18("LOCALMKTDATE_1314376422");
    noMDEntries_0_0.set(SettlDate_18);
    MDIncGrp_NoMDEntries_0.insert(SettlDate_18.getString());
    FIX::SettlType SettlType_12("STRING_2");
    noMDEntries_0_0.set(SettlType_12);
    MDIncGrp_NoMDEntries_0.insert(SettlType_12.getString());
    FIX::Text Text_46("STRING_893625600");
    noMDEntries_0_0.set(Text_46);
    MDIncGrp_NoMDEntries_0.insert(Text_46.getString());
    FIX::TickDirection TickDirection_0('0');
    noMDEntries_0_0.set(TickDirection_0);
    MDIncGrp_NoMDEntries_0.insert(TickDirection_0.getString());
    FIX::TimeInForce TimeInForce_25('6');
    noMDEntries_0_0.set(TimeInForce_25);
    MDIncGrp_NoMDEntries_0.insert(TimeInForce_25.getString());
    FIX::TradeCondition TradeCondition_0("MULTIPLESTRINGVALUE_AA");
    noMDEntries_0_0.set(TradeCondition_0);
    MDIncGrp_NoMDEntries_0.insert(TradeCondition_0.getString());
    FIX::TradeID TradeID_6("STRING_354970964");
    noMDEntries_0_0.set(TradeID_6);
    MDIncGrp_NoMDEntries_0.insert(TradeID_6.getString());
    FIX::TradeVolume TradeVolume_0;
    TradeVolume_0.setString("7568613");
    noMDEntries_0_0.set(TradeVolume_0);
    MDIncGrp_NoMDEntries_0.insert(TradeVolume_0.getString());
    FIX::TradingSessionID TradingSessionID_32("STRING_2");
    noMDEntries_0_0.set(TradingSessionID_32);
    MDIncGrp_NoMDEntries_0.insert(TradingSessionID_32.getString());
    FIX::TradingSessionSubID TradingSessionSubID_32("STRING_5");
    noMDEntries_0_0.set(TradingSessionSubID_32);
    MDIncGrp_NoMDEntries_0.insert(TradingSessionSubID_32.getString());
    FIX::TransBkdTime TransBkdTime_2(FIX::UTCTIMESTAMP(22, 0, 4, 12, 12, 2017));
    noMDEntries_0_0.set(TransBkdTime_2);
    MDIncGrp_NoMDEntries_0.insert(TransBkdTime_2.getString());
    FIX::TransactTime TransactTime_23(FIX::UTCTIMESTAMP(21, 59, 42, 7, 7, 2014));
    noMDEntries_0_0.set(TransactTime_23);
    MDIncGrp_NoMDEntries_0.insert(TransactTime_23.getString());
    FIX::TrdType TrdType_3(55);
    noMDEntries_0_0.set(TrdType_3);
    MDIncGrp_NoMDEntries_0.insert(TrdType_3.getString());
    all_values.push_back(MDIncGrp_NoMDEntries_0);
    all_compo_names.insert("MDIncGrp.NoMDEntries");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_49;
      FIX::EncodedLegIssuer EncodedLegIssuer_49("DATA_1568432090");
      noLegs_0_1_0.set(EncodedLegIssuer_49);
      InstrumentLeg_49.insert(EncodedLegIssuer_49.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_49(1331864397);
      noLegs_0_1_0.set(EncodedLegIssuerLen_49);
      InstrumentLeg_49.insert(EncodedLegIssuerLen_49.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_49("DATA_4739857");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_49);
      InstrumentLeg_49.insert(EncodedLegSecurityDesc_49.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_49(760365447);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_49);
      InstrumentLeg_49.insert(EncodedLegSecurityDescLen_49.getString());
      FIX::LegCFICode LegCFICode_49("STRING_2021298365");
      noLegs_0_1_0.set(LegCFICode_49);
      InstrumentLeg_49.insert(LegCFICode_49.getString());
      FIX::LegContractMultiplier LegContractMultiplier_49;
      LegContractMultiplier_49.setString("13191162");
      noLegs_0_1_0.set(LegContractMultiplier_49);
      InstrumentLeg_49.insert(LegContractMultiplier_49.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_49(260996626);
      noLegs_0_1_0.set(LegContractMultiplierUnit_49);
      InstrumentLeg_49.insert(LegContractMultiplierUnit_49.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_49("MONTHYEAR_767440317");
      noLegs_0_1_0.set(LegContractSettlMonth_49);
      InstrumentLeg_49.insert(LegContractSettlMonth_49.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_49("COUNTRY_443182439");
      noLegs_0_1_0.set(LegCountryOfIssue_49);
      InstrumentLeg_49.insert(LegCountryOfIssue_49.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_49("LOCALMKTDATE_1617475352");
      noLegs_0_1_0.set(LegCouponPaymentDate_49);
      InstrumentLeg_49.insert(LegCouponPaymentDate_49.getString());
      FIX::LegCouponRate LegCouponRate_49;
      LegCouponRate_49.setString("21.680000");
      noLegs_0_1_0.set(LegCouponRate_49);
      InstrumentLeg_49.insert(LegCouponRate_49.getString());
      FIX::LegCreditRating LegCreditRating_49("STRING_798153403");
      noLegs_0_1_0.set(LegCreditRating_49);
      InstrumentLeg_49.insert(LegCreditRating_49.getString());
      FIX::LegCurrency LegCurrency_49("EUR");
      noLegs_0_1_0.set(LegCurrency_49);
      InstrumentLeg_49.insert(LegCurrency_49.getString());
      FIX::LegDatedDate LegDatedDate_49("LOCALMKTDATE_249726407");
      noLegs_0_1_0.set(LegDatedDate_49);
      InstrumentLeg_49.insert(LegDatedDate_49.getString());
      FIX::LegExerciseStyle LegExerciseStyle_49(1285499634);
      noLegs_0_1_0.set(LegExerciseStyle_49);
      InstrumentLeg_49.insert(LegExerciseStyle_49.getString());
      FIX::LegFactor LegFactor_49;
      LegFactor_49.setString("9330206");
      noLegs_0_1_0.set(LegFactor_49);
      InstrumentLeg_49.insert(LegFactor_49.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_49(629772708);
      noLegs_0_1_0.set(LegFlowScheduleType_49);
      InstrumentLeg_49.insert(LegFlowScheduleType_49.getString());
      FIX::LegInstrRegistry LegInstrRegistry_49("STRING_901900731");
      noLegs_0_1_0.set(LegInstrRegistry_49);
      InstrumentLeg_49.insert(LegInstrRegistry_49.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_49("LOCALMKTDATE_2122222222");
      noLegs_0_1_0.set(LegInterestAccrualDate_49);
      InstrumentLeg_49.insert(LegInterestAccrualDate_49.getString());
      FIX::LegIssueDate LegIssueDate_49("LOCALMKTDATE_158399667");
      noLegs_0_1_0.set(LegIssueDate_49);
      InstrumentLeg_49.insert(LegIssueDate_49.getString());
      FIX::LegIssuer LegIssuer_49("STRING_1820951642");
      noLegs_0_1_0.set(LegIssuer_49);
      InstrumentLeg_49.insert(LegIssuer_49.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_49("STRING_367104966");
      noLegs_0_1_0.set(LegLocaleOfIssue_49);
      InstrumentLeg_49.insert(LegLocaleOfIssue_49.getString());
      FIX::LegMaturityDate LegMaturityDate_49("LOCALMKTDATE_1499817673");
      noLegs_0_1_0.set(LegMaturityDate_49);
      InstrumentLeg_49.insert(LegMaturityDate_49.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_49("MONTHYEAR_279079493");
      noLegs_0_1_0.set(LegMaturityMonthYear_49);
      InstrumentLeg_49.insert(LegMaturityMonthYear_49.getString());
      FIX::LegMaturityTime LegMaturityTime_49("TZTIMEONLY_789933529");
      noLegs_0_1_0.set(LegMaturityTime_49);
      InstrumentLeg_49.insert(LegMaturityTime_49.getString());
      FIX::LegOptAttribute LegOptAttribute_49('2');
      noLegs_0_1_0.set(LegOptAttribute_49);
      InstrumentLeg_49.insert(LegOptAttribute_49.getString());
      FIX::LegOptionRatio LegOptionRatio_49;
      LegOptionRatio_49.setString("1699870");
      noLegs_0_1_0.set(LegOptionRatio_49);
      InstrumentLeg_49.insert(LegOptionRatio_49.getString());
      FIX::LegPool LegPool_49("STRING_511142017");
      noLegs_0_1_0.set(LegPool_49);
      InstrumentLeg_49.insert(LegPool_49.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_49("STRING_19202506");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_49);
      InstrumentLeg_49.insert(LegPriceUnitOfMeasure_49.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_49;
      LegPriceUnitOfMeasureQty_49.setString("9555839");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_49);
      InstrumentLeg_49.insert(LegPriceUnitOfMeasureQty_49.getString());
      FIX::LegProduct LegProduct_49(2079574107);
      noLegs_0_1_0.set(LegProduct_49);
      InstrumentLeg_49.insert(LegProduct_49.getString());
      FIX::LegPutOrCall LegPutOrCall_49(1351066904);
      noLegs_0_1_0.set(LegPutOrCall_49);
      InstrumentLeg_49.insert(LegPutOrCall_49.getString());
      FIX::LegRatioQty LegRatioQty_49;
      LegRatioQty_49.setString("9603237");
      noLegs_0_1_0.set(LegRatioQty_49);
      InstrumentLeg_49.insert(LegRatioQty_49.getString());
      FIX::LegRedemptionDate LegRedemptionDate_49("LOCALMKTDATE_692455906");
      noLegs_0_1_0.set(LegRedemptionDate_49);
      InstrumentLeg_49.insert(LegRedemptionDate_49.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_49("STRING_1224881621");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_49);
      InstrumentLeg_49.insert(LegRepoCollateralSecurityType_49.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_49;
      LegRepurchaseRate_49.setString("64.140000");
      noLegs_0_1_0.set(LegRepurchaseRate_49);
      InstrumentLeg_49.insert(LegRepurchaseRate_49.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_49(953452532);
      noLegs_0_1_0.set(LegRepurchaseTerm_49);
      InstrumentLeg_49.insert(LegRepurchaseTerm_49.getString());
      FIX::LegSecurityDesc LegSecurityDesc_49("STRING_1992321938");
      noLegs_0_1_0.set(LegSecurityDesc_49);
      InstrumentLeg_49.insert(LegSecurityDesc_49.getString());
      FIX::LegSecurityExchange LegSecurityExchange_49("EXCHANGE_575138853");
      noLegs_0_1_0.set(LegSecurityExchange_49);
      InstrumentLeg_49.insert(LegSecurityExchange_49.getString());
      FIX::LegSecurityID LegSecurityID_49("STRING_423444237");
      noLegs_0_1_0.set(LegSecurityID_49);
      InstrumentLeg_49.insert(LegSecurityID_49.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_49("STRING_1732890458");
      noLegs_0_1_0.set(LegSecurityIDSource_49);
      InstrumentLeg_49.insert(LegSecurityIDSource_49.getString());
      FIX::LegSecuritySubType LegSecuritySubType_49("STRING_1373292257");
      noLegs_0_1_0.set(LegSecuritySubType_49);
      InstrumentLeg_49.insert(LegSecuritySubType_49.getString());
      FIX::LegSecurityType LegSecurityType_49("STRING_650297283");
      noLegs_0_1_0.set(LegSecurityType_49);
      InstrumentLeg_49.insert(LegSecurityType_49.getString());
      FIX::LegSide LegSide_49('7');
      noLegs_0_1_0.set(LegSide_49);
      InstrumentLeg_49.insert(LegSide_49.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_49("STRING_1623018664");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_49);
      InstrumentLeg_49.insert(LegStateOrProvinceOfIssue_49.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_49("CAN");
      noLegs_0_1_0.set(LegStrikeCurrency_49);
      InstrumentLeg_49.insert(LegStrikeCurrency_49.getString());
      FIX::LegStrikePrice LegStrikePrice_49;
      LegStrikePrice_49.setString("1053077");
      noLegs_0_1_0.set(LegStrikePrice_49);
      InstrumentLeg_49.insert(LegStrikePrice_49.getString());
      FIX::LegSymbol LegSymbol_49("STRING_690214000");
      noLegs_0_1_0.set(LegSymbol_49);
      InstrumentLeg_49.insert(LegSymbol_49.getString());
      FIX::LegSymbolSfx LegSymbolSfx_49("STRING_1610512790");
      noLegs_0_1_0.set(LegSymbolSfx_49);
      InstrumentLeg_49.insert(LegSymbolSfx_49.getString());
      FIX::LegTimeUnit LegTimeUnit_49("STRING_263707392");
      noLegs_0_1_0.set(LegTimeUnit_49);
      InstrumentLeg_49.insert(LegTimeUnit_49.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_49("STRING_363681994");
      noLegs_0_1_0.set(LegUnitOfMeasure_49);
      InstrumentLeg_49.insert(LegUnitOfMeasure_49.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_49;
      LegUnitOfMeasureQty_49.setString("19776177");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_49);
      InstrumentLeg_49.insert(LegUnitOfMeasureQty_49.getString());
      all_values.push_back(InstrumentLeg_49);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_96;
        FIX::LegSecurityAltID LegSecurityAltID_96("STRING_642761488");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_96);
        LegSecAltIDGrp_NoLegSecurityAltID_96.insert(LegSecurityAltID_96.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_96("STRING_620067637");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_96);
        LegSecAltIDGrp_NoLegSecurityAltID_96.insert(LegSecurityAltIDSource_96.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_96);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_97;
        FIX::LegSecurityAltID LegSecurityAltID_97("STRING_1621249521");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_97);
        LegSecAltIDGrp_NoLegSecurityAltID_97.insert(LegSecurityAltID_97.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_97("STRING_812748500");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_97);
        LegSecAltIDGrp_NoLegSecurityAltID_97.insert(LegSecurityAltIDSource_97.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_97);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      noMDEntries_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_50;
      FIX::EncodedLegIssuer EncodedLegIssuer_50("DATA_1131209654");
      noLegs_0_1_1.set(EncodedLegIssuer_50);
      InstrumentLeg_50.insert(EncodedLegIssuer_50.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_50(1640452028);
      noLegs_0_1_1.set(EncodedLegIssuerLen_50);
      InstrumentLeg_50.insert(EncodedLegIssuerLen_50.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_50("DATA_1768332425");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_50);
      InstrumentLeg_50.insert(EncodedLegSecurityDesc_50.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_50(1063300113);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_50);
      InstrumentLeg_50.insert(EncodedLegSecurityDescLen_50.getString());
      FIX::LegCFICode LegCFICode_50("STRING_844035284");
      noLegs_0_1_1.set(LegCFICode_50);
      InstrumentLeg_50.insert(LegCFICode_50.getString());
      FIX::LegContractMultiplier LegContractMultiplier_50;
      LegContractMultiplier_50.setString("5811725");
      noLegs_0_1_1.set(LegContractMultiplier_50);
      InstrumentLeg_50.insert(LegContractMultiplier_50.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_50(1755756020);
      noLegs_0_1_1.set(LegContractMultiplierUnit_50);
      InstrumentLeg_50.insert(LegContractMultiplierUnit_50.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_50("MONTHYEAR_2068916905");
      noLegs_0_1_1.set(LegContractSettlMonth_50);
      InstrumentLeg_50.insert(LegContractSettlMonth_50.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_50("COUNTRY_713128974");
      noLegs_0_1_1.set(LegCountryOfIssue_50);
      InstrumentLeg_50.insert(LegCountryOfIssue_50.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_50("LOCALMKTDATE_561724904");
      noLegs_0_1_1.set(LegCouponPaymentDate_50);
      InstrumentLeg_50.insert(LegCouponPaymentDate_50.getString());
      FIX::LegCouponRate LegCouponRate_50;
      LegCouponRate_50.setString("51.950000");
      noLegs_0_1_1.set(LegCouponRate_50);
      InstrumentLeg_50.insert(LegCouponRate_50.getString());
      FIX::LegCreditRating LegCreditRating_50("STRING_1288267827");
      noLegs_0_1_1.set(LegCreditRating_50);
      InstrumentLeg_50.insert(LegCreditRating_50.getString());
      FIX::LegCurrency LegCurrency_50("EUR");
      noLegs_0_1_1.set(LegCurrency_50);
      InstrumentLeg_50.insert(LegCurrency_50.getString());
      FIX::LegDatedDate LegDatedDate_50("LOCALMKTDATE_514076436");
      noLegs_0_1_1.set(LegDatedDate_50);
      InstrumentLeg_50.insert(LegDatedDate_50.getString());
      FIX::LegExerciseStyle LegExerciseStyle_50(1635466424);
      noLegs_0_1_1.set(LegExerciseStyle_50);
      InstrumentLeg_50.insert(LegExerciseStyle_50.getString());
      FIX::LegFactor LegFactor_50;
      LegFactor_50.setString("544319");
      noLegs_0_1_1.set(LegFactor_50);
      InstrumentLeg_50.insert(LegFactor_50.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_50(2137095101);
      noLegs_0_1_1.set(LegFlowScheduleType_50);
      InstrumentLeg_50.insert(LegFlowScheduleType_50.getString());
      FIX::LegInstrRegistry LegInstrRegistry_50("STRING_1423779694");
      noLegs_0_1_1.set(LegInstrRegistry_50);
      InstrumentLeg_50.insert(LegInstrRegistry_50.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_50("LOCALMKTDATE_1690206186");
      noLegs_0_1_1.set(LegInterestAccrualDate_50);
      InstrumentLeg_50.insert(LegInterestAccrualDate_50.getString());
      FIX::LegIssueDate LegIssueDate_50("LOCALMKTDATE_94919177");
      noLegs_0_1_1.set(LegIssueDate_50);
      InstrumentLeg_50.insert(LegIssueDate_50.getString());
      FIX::LegIssuer LegIssuer_50("STRING_2113993694");
      noLegs_0_1_1.set(LegIssuer_50);
      InstrumentLeg_50.insert(LegIssuer_50.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_50("STRING_1153235328");
      noLegs_0_1_1.set(LegLocaleOfIssue_50);
      InstrumentLeg_50.insert(LegLocaleOfIssue_50.getString());
      FIX::LegMaturityDate LegMaturityDate_50("LOCALMKTDATE_358626569");
      noLegs_0_1_1.set(LegMaturityDate_50);
      InstrumentLeg_50.insert(LegMaturityDate_50.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_50("MONTHYEAR_330192041");
      noLegs_0_1_1.set(LegMaturityMonthYear_50);
      InstrumentLeg_50.insert(LegMaturityMonthYear_50.getString());
      FIX::LegMaturityTime LegMaturityTime_50("TZTIMEONLY_983369436");
      noLegs_0_1_1.set(LegMaturityTime_50);
      InstrumentLeg_50.insert(LegMaturityTime_50.getString());
      FIX::LegOptAttribute LegOptAttribute_50('2');
      noLegs_0_1_1.set(LegOptAttribute_50);
      InstrumentLeg_50.insert(LegOptAttribute_50.getString());
      FIX::LegOptionRatio LegOptionRatio_50;
      LegOptionRatio_50.setString("9729535");
      noLegs_0_1_1.set(LegOptionRatio_50);
      InstrumentLeg_50.insert(LegOptionRatio_50.getString());
      FIX::LegPool LegPool_50("STRING_1603437074");
      noLegs_0_1_1.set(LegPool_50);
      InstrumentLeg_50.insert(LegPool_50.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_50("STRING_1595917508");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_50);
      InstrumentLeg_50.insert(LegPriceUnitOfMeasure_50.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_50;
      LegPriceUnitOfMeasureQty_50.setString("17857020");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_50);
      InstrumentLeg_50.insert(LegPriceUnitOfMeasureQty_50.getString());
      FIX::LegProduct LegProduct_50(587163080);
      noLegs_0_1_1.set(LegProduct_50);
      InstrumentLeg_50.insert(LegProduct_50.getString());
      FIX::LegPutOrCall LegPutOrCall_50(1088885888);
      noLegs_0_1_1.set(LegPutOrCall_50);
      InstrumentLeg_50.insert(LegPutOrCall_50.getString());
      FIX::LegRatioQty LegRatioQty_50;
      LegRatioQty_50.setString("14065508");
      noLegs_0_1_1.set(LegRatioQty_50);
      InstrumentLeg_50.insert(LegRatioQty_50.getString());
      FIX::LegRedemptionDate LegRedemptionDate_50("LOCALMKTDATE_1650463194");
      noLegs_0_1_1.set(LegRedemptionDate_50);
      InstrumentLeg_50.insert(LegRedemptionDate_50.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_50("STRING_1932921172");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_50);
      InstrumentLeg_50.insert(LegRepoCollateralSecurityType_50.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_50;
      LegRepurchaseRate_50.setString("33.660000");
      noLegs_0_1_1.set(LegRepurchaseRate_50);
      InstrumentLeg_50.insert(LegRepurchaseRate_50.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_50(1258735566);
      noLegs_0_1_1.set(LegRepurchaseTerm_50);
      InstrumentLeg_50.insert(LegRepurchaseTerm_50.getString());
      FIX::LegSecurityDesc LegSecurityDesc_50("STRING_1854354429");
      noLegs_0_1_1.set(LegSecurityDesc_50);
      InstrumentLeg_50.insert(LegSecurityDesc_50.getString());
      FIX::LegSecurityExchange LegSecurityExchange_50("EXCHANGE_553368692");
      noLegs_0_1_1.set(LegSecurityExchange_50);
      InstrumentLeg_50.insert(LegSecurityExchange_50.getString());
      FIX::LegSecurityID LegSecurityID_50("STRING_1820460470");
      noLegs_0_1_1.set(LegSecurityID_50);
      InstrumentLeg_50.insert(LegSecurityID_50.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_50("STRING_1620625976");
      noLegs_0_1_1.set(LegSecurityIDSource_50);
      InstrumentLeg_50.insert(LegSecurityIDSource_50.getString());
      FIX::LegSecuritySubType LegSecuritySubType_50("STRING_1841636520");
      noLegs_0_1_1.set(LegSecuritySubType_50);
      InstrumentLeg_50.insert(LegSecuritySubType_50.getString());
      FIX::LegSecurityType LegSecurityType_50("STRING_658145964");
      noLegs_0_1_1.set(LegSecurityType_50);
      InstrumentLeg_50.insert(LegSecurityType_50.getString());
      FIX::LegSide LegSide_50('9');
      noLegs_0_1_1.set(LegSide_50);
      InstrumentLeg_50.insert(LegSide_50.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_50("STRING_208229308");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_50);
      InstrumentLeg_50.insert(LegStateOrProvinceOfIssue_50.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_50("EUR");
      noLegs_0_1_1.set(LegStrikeCurrency_50);
      InstrumentLeg_50.insert(LegStrikeCurrency_50.getString());
      FIX::LegStrikePrice LegStrikePrice_50;
      LegStrikePrice_50.setString("1978407");
      noLegs_0_1_1.set(LegStrikePrice_50);
      InstrumentLeg_50.insert(LegStrikePrice_50.getString());
      FIX::LegSymbol LegSymbol_50("STRING_1569908434");
      noLegs_0_1_1.set(LegSymbol_50);
      InstrumentLeg_50.insert(LegSymbol_50.getString());
      FIX::LegSymbolSfx LegSymbolSfx_50("STRING_569458841");
      noLegs_0_1_1.set(LegSymbolSfx_50);
      InstrumentLeg_50.insert(LegSymbolSfx_50.getString());
      FIX::LegTimeUnit LegTimeUnit_50("STRING_292759939");
      noLegs_0_1_1.set(LegTimeUnit_50);
      InstrumentLeg_50.insert(LegTimeUnit_50.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_50("STRING_1536418481");
      noLegs_0_1_1.set(LegUnitOfMeasure_50);
      InstrumentLeg_50.insert(LegUnitOfMeasure_50.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_50;
      LegUnitOfMeasureQty_50.setString("17226941");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_50);
      InstrumentLeg_50.insert(LegUnitOfMeasureQty_50.getString());
      all_values.push_back(InstrumentLeg_50);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_98;
        FIX::LegSecurityAltID LegSecurityAltID_98("STRING_1866610522");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_98);
        LegSecAltIDGrp_NoLegSecurityAltID_98.insert(LegSecurityAltID_98.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_98("STRING_558579958");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_98);
        LegSecAltIDGrp_NoLegSecurityAltID_98.insert(LegSecurityAltIDSource_98.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_98);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      noMDEntries_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs noLegs_0_1_2;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_51;
      FIX::EncodedLegIssuer EncodedLegIssuer_51("DATA_626054495");
      noLegs_0_1_2.set(EncodedLegIssuer_51);
      InstrumentLeg_51.insert(EncodedLegIssuer_51.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_51(692080403);
      noLegs_0_1_2.set(EncodedLegIssuerLen_51);
      InstrumentLeg_51.insert(EncodedLegIssuerLen_51.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_51("DATA_14533384");
      noLegs_0_1_2.set(EncodedLegSecurityDesc_51);
      InstrumentLeg_51.insert(EncodedLegSecurityDesc_51.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_51(74488355);
      noLegs_0_1_2.set(EncodedLegSecurityDescLen_51);
      InstrumentLeg_51.insert(EncodedLegSecurityDescLen_51.getString());
      FIX::LegCFICode LegCFICode_51("STRING_330298784");
      noLegs_0_1_2.set(LegCFICode_51);
      InstrumentLeg_51.insert(LegCFICode_51.getString());
      FIX::LegContractMultiplier LegContractMultiplier_51;
      LegContractMultiplier_51.setString("6016964");
      noLegs_0_1_2.set(LegContractMultiplier_51);
      InstrumentLeg_51.insert(LegContractMultiplier_51.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_51(1163374243);
      noLegs_0_1_2.set(LegContractMultiplierUnit_51);
      InstrumentLeg_51.insert(LegContractMultiplierUnit_51.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_51("MONTHYEAR_1736849590");
      noLegs_0_1_2.set(LegContractSettlMonth_51);
      InstrumentLeg_51.insert(LegContractSettlMonth_51.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_51("COUNTRY_104676010");
      noLegs_0_1_2.set(LegCountryOfIssue_51);
      InstrumentLeg_51.insert(LegCountryOfIssue_51.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_51("LOCALMKTDATE_948811767");
      noLegs_0_1_2.set(LegCouponPaymentDate_51);
      InstrumentLeg_51.insert(LegCouponPaymentDate_51.getString());
      FIX::LegCouponRate LegCouponRate_51;
      LegCouponRate_51.setString("93.090000");
      noLegs_0_1_2.set(LegCouponRate_51);
      InstrumentLeg_51.insert(LegCouponRate_51.getString());
      FIX::LegCreditRating LegCreditRating_51("STRING_1363411576");
      noLegs_0_1_2.set(LegCreditRating_51);
      InstrumentLeg_51.insert(LegCreditRating_51.getString());
      FIX::LegCurrency LegCurrency_51("CHF");
      noLegs_0_1_2.set(LegCurrency_51);
      InstrumentLeg_51.insert(LegCurrency_51.getString());
      FIX::LegDatedDate LegDatedDate_51("LOCALMKTDATE_1036388399");
      noLegs_0_1_2.set(LegDatedDate_51);
      InstrumentLeg_51.insert(LegDatedDate_51.getString());
      FIX::LegExerciseStyle LegExerciseStyle_51(128824876);
      noLegs_0_1_2.set(LegExerciseStyle_51);
      InstrumentLeg_51.insert(LegExerciseStyle_51.getString());
      FIX::LegFactor LegFactor_51;
      LegFactor_51.setString("18246108");
      noLegs_0_1_2.set(LegFactor_51);
      InstrumentLeg_51.insert(LegFactor_51.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_51(1694534363);
      noLegs_0_1_2.set(LegFlowScheduleType_51);
      InstrumentLeg_51.insert(LegFlowScheduleType_51.getString());
      FIX::LegInstrRegistry LegInstrRegistry_51("STRING_1101129209");
      noLegs_0_1_2.set(LegInstrRegistry_51);
      InstrumentLeg_51.insert(LegInstrRegistry_51.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_51("LOCALMKTDATE_2032840182");
      noLegs_0_1_2.set(LegInterestAccrualDate_51);
      InstrumentLeg_51.insert(LegInterestAccrualDate_51.getString());
      FIX::LegIssueDate LegIssueDate_51("LOCALMKTDATE_1840663103");
      noLegs_0_1_2.set(LegIssueDate_51);
      InstrumentLeg_51.insert(LegIssueDate_51.getString());
      FIX::LegIssuer LegIssuer_51("STRING_2127865512");
      noLegs_0_1_2.set(LegIssuer_51);
      InstrumentLeg_51.insert(LegIssuer_51.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_51("STRING_83197295");
      noLegs_0_1_2.set(LegLocaleOfIssue_51);
      InstrumentLeg_51.insert(LegLocaleOfIssue_51.getString());
      FIX::LegMaturityDate LegMaturityDate_51("LOCALMKTDATE_1263087890");
      noLegs_0_1_2.set(LegMaturityDate_51);
      InstrumentLeg_51.insert(LegMaturityDate_51.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_51("MONTHYEAR_549840706");
      noLegs_0_1_2.set(LegMaturityMonthYear_51);
      InstrumentLeg_51.insert(LegMaturityMonthYear_51.getString());
      FIX::LegMaturityTime LegMaturityTime_51("TZTIMEONLY_375957234");
      noLegs_0_1_2.set(LegMaturityTime_51);
      InstrumentLeg_51.insert(LegMaturityTime_51.getString());
      FIX::LegOptAttribute LegOptAttribute_51('6');
      noLegs_0_1_2.set(LegOptAttribute_51);
      InstrumentLeg_51.insert(LegOptAttribute_51.getString());
      FIX::LegOptionRatio LegOptionRatio_51;
      LegOptionRatio_51.setString("1250512");
      noLegs_0_1_2.set(LegOptionRatio_51);
      InstrumentLeg_51.insert(LegOptionRatio_51.getString());
      FIX::LegPool LegPool_51("STRING_1027343743");
      noLegs_0_1_2.set(LegPool_51);
      InstrumentLeg_51.insert(LegPool_51.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_51("STRING_371149597");
      noLegs_0_1_2.set(LegPriceUnitOfMeasure_51);
      InstrumentLeg_51.insert(LegPriceUnitOfMeasure_51.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_51;
      LegPriceUnitOfMeasureQty_51.setString("6836311");
      noLegs_0_1_2.set(LegPriceUnitOfMeasureQty_51);
      InstrumentLeg_51.insert(LegPriceUnitOfMeasureQty_51.getString());
      FIX::LegProduct LegProduct_51(1653398238);
      noLegs_0_1_2.set(LegProduct_51);
      InstrumentLeg_51.insert(LegProduct_51.getString());
      FIX::LegPutOrCall LegPutOrCall_51(1063230000);
      noLegs_0_1_2.set(LegPutOrCall_51);
      InstrumentLeg_51.insert(LegPutOrCall_51.getString());
      FIX::LegRatioQty LegRatioQty_51;
      LegRatioQty_51.setString("6981645");
      noLegs_0_1_2.set(LegRatioQty_51);
      InstrumentLeg_51.insert(LegRatioQty_51.getString());
      FIX::LegRedemptionDate LegRedemptionDate_51("LOCALMKTDATE_1727886593");
      noLegs_0_1_2.set(LegRedemptionDate_51);
      InstrumentLeg_51.insert(LegRedemptionDate_51.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_51("STRING_1393528784");
      noLegs_0_1_2.set(LegRepoCollateralSecurityType_51);
      InstrumentLeg_51.insert(LegRepoCollateralSecurityType_51.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_51;
      LegRepurchaseRate_51.setString("10.340000");
      noLegs_0_1_2.set(LegRepurchaseRate_51);
      InstrumentLeg_51.insert(LegRepurchaseRate_51.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_51(743777188);
      noLegs_0_1_2.set(LegRepurchaseTerm_51);
      InstrumentLeg_51.insert(LegRepurchaseTerm_51.getString());
      FIX::LegSecurityDesc LegSecurityDesc_51("STRING_982894726");
      noLegs_0_1_2.set(LegSecurityDesc_51);
      InstrumentLeg_51.insert(LegSecurityDesc_51.getString());
      FIX::LegSecurityExchange LegSecurityExchange_51("EXCHANGE_1404537044");
      noLegs_0_1_2.set(LegSecurityExchange_51);
      InstrumentLeg_51.insert(LegSecurityExchange_51.getString());
      FIX::LegSecurityID LegSecurityID_51("STRING_1692588955");
      noLegs_0_1_2.set(LegSecurityID_51);
      InstrumentLeg_51.insert(LegSecurityID_51.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_51("STRING_412500387");
      noLegs_0_1_2.set(LegSecurityIDSource_51);
      InstrumentLeg_51.insert(LegSecurityIDSource_51.getString());
      FIX::LegSecuritySubType LegSecuritySubType_51("STRING_620464973");
      noLegs_0_1_2.set(LegSecuritySubType_51);
      InstrumentLeg_51.insert(LegSecuritySubType_51.getString());
      FIX::LegSecurityType LegSecurityType_51("STRING_200787855");
      noLegs_0_1_2.set(LegSecurityType_51);
      InstrumentLeg_51.insert(LegSecurityType_51.getString());
      FIX::LegSide LegSide_51('3');
      noLegs_0_1_2.set(LegSide_51);
      InstrumentLeg_51.insert(LegSide_51.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_51("STRING_1656853372");
      noLegs_0_1_2.set(LegStateOrProvinceOfIssue_51);
      InstrumentLeg_51.insert(LegStateOrProvinceOfIssue_51.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_51("JPY");
      noLegs_0_1_2.set(LegStrikeCurrency_51);
      InstrumentLeg_51.insert(LegStrikeCurrency_51.getString());
      FIX::LegStrikePrice LegStrikePrice_51;
      LegStrikePrice_51.setString("12039040");
      noLegs_0_1_2.set(LegStrikePrice_51);
      InstrumentLeg_51.insert(LegStrikePrice_51.getString());
      FIX::LegSymbol LegSymbol_51("STRING_1430741940");
      noLegs_0_1_2.set(LegSymbol_51);
      InstrumentLeg_51.insert(LegSymbol_51.getString());
      FIX::LegSymbolSfx LegSymbolSfx_51("STRING_2105442148");
      noLegs_0_1_2.set(LegSymbolSfx_51);
      InstrumentLeg_51.insert(LegSymbolSfx_51.getString());
      FIX::LegTimeUnit LegTimeUnit_51("STRING_897083542");
      noLegs_0_1_2.set(LegTimeUnit_51);
      InstrumentLeg_51.insert(LegTimeUnit_51.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_51("STRING_1411123804");
      noLegs_0_1_2.set(LegUnitOfMeasure_51);
      InstrumentLeg_51.insert(LegUnitOfMeasure_51.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_51;
      LegUnitOfMeasureQty_51.setString("411557");
      noLegs_0_1_2.set(LegUnitOfMeasureQty_51);
      InstrumentLeg_51.insert(LegUnitOfMeasureQty_51.getString());
      all_values.push_back(InstrumentLeg_51);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_99;
        FIX::LegSecurityAltID LegSecurityAltID_99("STRING_1960964510");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltID_99);
        LegSecAltIDGrp_NoLegSecurityAltID_99.insert(LegSecurityAltID_99.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_99("STRING_417113030");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltIDSource_99);
        LegSecAltIDGrp_NoLegSecurityAltID_99.insert(LegSecurityAltIDSource_99.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_99);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_100;
        FIX::LegSecurityAltID LegSecurityAltID_100("STRING_664710507");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltID_100);
        LegSecAltIDGrp_NoLegSecurityAltID_100.insert(LegSecurityAltID_100.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_100("STRING_2086015738");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltIDSource_100);
        LegSecAltIDGrp_NoLegSecurityAltID_100.insert(LegSecurityAltIDSource_100.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_100);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_1);
      }
      noMDEntries_0_0.addGroup(noLegs_0_1_2);
    }
    // Instrument
    multiset<string> Instrument_28;
    FIX::AttachmentPoint AttachmentPoint_28;
    AttachmentPoint_28.setString("67.730000");
    noMDEntries_0_0.set(AttachmentPoint_28);
    Instrument_28.insert(AttachmentPoint_28.getString());
    FIX::CFICode CFICode_28("STRING_1035860104");
    noMDEntries_0_0.set(CFICode_28);
    Instrument_28.insert(CFICode_28.getString());
    FIX::CPProgram CPProgram_28(2);
    noMDEntries_0_0.set(CPProgram_28);
    Instrument_28.insert(CPProgram_28.getString());
    FIX::CPRegType CPRegType_28("STRING_950371363");
    noMDEntries_0_0.set(CPRegType_28);
    Instrument_28.insert(CPRegType_28.getString());
    FIX::CapPrice CapPrice_28;
    CapPrice_28.setString("20990901");
    noMDEntries_0_0.set(CapPrice_28);
    Instrument_28.insert(CapPrice_28.getString());
    FIX::ContractMultiplier ContractMultiplier_28;
    ContractMultiplier_28.setString("13203278");
    noMDEntries_0_0.set(ContractMultiplier_28);
    Instrument_28.insert(ContractMultiplier_28.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_28(1);
    noMDEntries_0_0.set(ContractMultiplierUnit_28);
    Instrument_28.insert(ContractMultiplierUnit_28.getString());
    FIX::ContractSettlMonth ContractSettlMonth_28("MONTHYEAR_1345135240");
    noMDEntries_0_0.set(ContractSettlMonth_28);
    Instrument_28.insert(ContractSettlMonth_28.getString());
    FIX::CountryOfIssue CountryOfIssue_28("COUNTRY_472705231");
    noMDEntries_0_0.set(CountryOfIssue_28);
    Instrument_28.insert(CountryOfIssue_28.getString());
    FIX::CouponPaymentDate CouponPaymentDate_28("LOCALMKTDATE_1274551496");
    noMDEntries_0_0.set(CouponPaymentDate_28);
    Instrument_28.insert(CouponPaymentDate_28.getString());
    FIX::CouponRate CouponRate_28;
    CouponRate_28.setString("63.190000");
    noMDEntries_0_0.set(CouponRate_28);
    Instrument_28.insert(CouponRate_28.getString());
    FIX::CreditRating CreditRating_28("STRING_1877242275");
    noMDEntries_0_0.set(CreditRating_28);
    Instrument_28.insert(CreditRating_28.getString());
    FIX::DatedDate DatedDate_28("LOCALMKTDATE_819656803");
    noMDEntries_0_0.set(DatedDate_28);
    Instrument_28.insert(DatedDate_28.getString());
    FIX::DetachmentPoint DetachmentPoint_28;
    DetachmentPoint_28.setString("67.060000");
    noMDEntries_0_0.set(DetachmentPoint_28);
    Instrument_28.insert(DetachmentPoint_28.getString());
    FIX::EncodedIssuer EncodedIssuer_28("DATA_350223600");
    noMDEntries_0_0.set(EncodedIssuer_28);
    Instrument_28.insert(EncodedIssuer_28.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_28(1020444658);
    noMDEntries_0_0.set(EncodedIssuerLen_28);
    Instrument_28.insert(EncodedIssuerLen_28.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_28("DATA_988521447");
    noMDEntries_0_0.set(EncodedSecurityDesc_28);
    Instrument_28.insert(EncodedSecurityDesc_28.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_28(2007076972);
    noMDEntries_0_0.set(EncodedSecurityDescLen_28);
    Instrument_28.insert(EncodedSecurityDescLen_28.getString());
    FIX::ExerciseStyle ExerciseStyle_28(2);
    noMDEntries_0_0.set(ExerciseStyle_28);
    Instrument_28.insert(ExerciseStyle_28.getString());
    FIX::Factor Factor_28;
    Factor_28.setString("10611234");
    noMDEntries_0_0.set(Factor_28);
    Instrument_28.insert(Factor_28.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_28(false);
    noMDEntries_0_0.set(FlexProductEligibilityIndicator_28);
    Instrument_28.insert(FlexProductEligibilityIndicator_28.getString());
    FIX::FlexibleIndicator FlexibleIndicator_28(false);
    noMDEntries_0_0.set(FlexibleIndicator_28);
    Instrument_28.insert(FlexibleIndicator_28.getString());
    FIX::FloorPrice FloorPrice_28;
    FloorPrice_28.setString("10190819");
    noMDEntries_0_0.set(FloorPrice_28);
    Instrument_28.insert(FloorPrice_28.getString());
    FIX::FlowScheduleType FlowScheduleType_28(4);
    noMDEntries_0_0.set(FlowScheduleType_28);
    Instrument_28.insert(FlowScheduleType_28.getString());
    FIX::InstrRegistry InstrRegistry_28("STRING_2044439486");
    noMDEntries_0_0.set(InstrRegistry_28);
    Instrument_28.insert(InstrRegistry_28.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_28('1');
    noMDEntries_0_0.set(InstrmtAssignmentMethod_28);
    Instrument_28.insert(InstrmtAssignmentMethod_28.getString());
    FIX::InterestAccrualDate InterestAccrualDate_28("LOCALMKTDATE_1973268738");
    noMDEntries_0_0.set(InterestAccrualDate_28);
    Instrument_28.insert(InterestAccrualDate_28.getString());
    FIX::IssueDate IssueDate_28("LOCALMKTDATE_1857920348");
    noMDEntries_0_0.set(IssueDate_28);
    Instrument_28.insert(IssueDate_28.getString());
    FIX::Issuer Issuer_28("STRING_1477350741");
    noMDEntries_0_0.set(Issuer_28);
    Instrument_28.insert(Issuer_28.getString());
    FIX::ListMethod ListMethod_28(0);
    noMDEntries_0_0.set(ListMethod_28);
    Instrument_28.insert(ListMethod_28.getString());
    FIX::LocaleOfIssue LocaleOfIssue_28("STRING_1796452438");
    noMDEntries_0_0.set(LocaleOfIssue_28);
    Instrument_28.insert(LocaleOfIssue_28.getString());
    FIX::MaturityDate MaturityDate_28("LOCALMKTDATE_774323866");
    noMDEntries_0_0.set(MaturityDate_28);
    Instrument_28.insert(MaturityDate_28.getString());
    FIX::MaturityMonthYear MaturityMonthYear_28("MONTHYEAR_1526355702");
    noMDEntries_0_0.set(MaturityMonthYear_28);
    Instrument_28.insert(MaturityMonthYear_28.getString());
    FIX::MaturityTime MaturityTime_28("TZTIMEONLY_271132066");
    noMDEntries_0_0.set(MaturityTime_28);
    Instrument_28.insert(MaturityTime_28.getString());
    FIX::MinPriceIncrement MinPriceIncrement_28;
    MinPriceIncrement_28.setString("17246952");
    noMDEntries_0_0.set(MinPriceIncrement_28);
    Instrument_28.insert(MinPriceIncrement_28.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_28;
    MinPriceIncrementAmount_28.setString("14779621");
    noMDEntries_0_0.set(MinPriceIncrementAmount_28);
    Instrument_28.insert(MinPriceIncrementAmount_28.getString());
    FIX::NTPositionLimit NTPositionLimit_28(1591459911);
    noMDEntries_0_0.set(NTPositionLimit_28);
    Instrument_28.insert(NTPositionLimit_28.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_28;
    NotionalPercentageOutstanding_28.setString("58.900000");
    noMDEntries_0_0.set(NotionalPercentageOutstanding_28);
    Instrument_28.insert(NotionalPercentageOutstanding_28.getString());
    FIX::OptAttribute OptAttribute_28('6');
    noMDEntries_0_0.set(OptAttribute_28);
    Instrument_28.insert(OptAttribute_28.getString());
    FIX::OptPayoutAmount OptPayoutAmount_28;
    OptPayoutAmount_28.setString("20641651");
    noMDEntries_0_0.set(OptPayoutAmount_28);
    Instrument_28.insert(OptPayoutAmount_28.getString());
    FIX::OptPayoutType OptPayoutType_28(3);
    noMDEntries_0_0.set(OptPayoutType_28);
    Instrument_28.insert(OptPayoutType_28.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_28;
    OriginalNotionalPercentageOutstanding_28.setString("0.700000");
    noMDEntries_0_0.set(OriginalNotionalPercentageOutstanding_28);
    Instrument_28.insert(OriginalNotionalPercentageOutstanding_28.getString());
    FIX::Pool Pool_28("STRING_1793923769");
    noMDEntries_0_0.set(Pool_28);
    Instrument_28.insert(Pool_28.getString());
    FIX::PositionLimit PositionLimit_28(54710542);
    noMDEntries_0_0.set(PositionLimit_28);
    Instrument_28.insert(PositionLimit_28.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_28("STRING_INX");
    noMDEntries_0_0.set(PriceQuoteMethod_28);
    Instrument_28.insert(PriceQuoteMethod_28.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_28("STRING_2144147370");
    noMDEntries_0_0.set(PriceUnitOfMeasure_28);
    Instrument_28.insert(PriceUnitOfMeasure_28.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_28;
    PriceUnitOfMeasureQty_28.setString("10751552");
    noMDEntries_0_0.set(PriceUnitOfMeasureQty_28);
    Instrument_28.insert(PriceUnitOfMeasureQty_28.getString());
    FIX::Product Product_30(12);
    noMDEntries_0_0.set(Product_30);
    Instrument_28.insert(Product_30.getString());
    FIX::ProductComplex ProductComplex_28("STRING_2003740694");
    noMDEntries_0_0.set(ProductComplex_28);
    Instrument_28.insert(ProductComplex_28.getString());
    FIX::PutOrCall PutOrCall_28(0);
    noMDEntries_0_0.set(PutOrCall_28);
    Instrument_28.insert(PutOrCall_28.getString());
    FIX::RedemptionDate RedemptionDate_28("LOCALMKTDATE_1351367990");
    noMDEntries_0_0.set(RedemptionDate_28);
    Instrument_28.insert(RedemptionDate_28.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_28("STRING_919754458");
    noMDEntries_0_0.set(RepoCollateralSecurityType_28);
    Instrument_28.insert(RepoCollateralSecurityType_28.getString());
    FIX::RepurchaseRate RepurchaseRate_28;
    RepurchaseRate_28.setString("46.240000");
    noMDEntries_0_0.set(RepurchaseRate_28);
    Instrument_28.insert(RepurchaseRate_28.getString());
    FIX::RepurchaseTerm RepurchaseTerm_28(222966257);
    noMDEntries_0_0.set(RepurchaseTerm_28);
    Instrument_28.insert(RepurchaseTerm_28.getString());
    FIX::RestructuringType RestructuringType_28("STRING_FR");
    noMDEntries_0_0.set(RestructuringType_28);
    Instrument_28.insert(RestructuringType_28.getString());
    FIX::SecurityDesc SecurityDesc_28("STRING_808000462");
    noMDEntries_0_0.set(SecurityDesc_28);
    Instrument_28.insert(SecurityDesc_28.getString());
    FIX::SecurityExchange SecurityExchange_28("EXCHANGE_1283203967");
    noMDEntries_0_0.set(SecurityExchange_28);
    Instrument_28.insert(SecurityExchange_28.getString());
    FIX::SecurityGroup SecurityGroup_28("STRING_558636854");
    noMDEntries_0_0.set(SecurityGroup_28);
    Instrument_28.insert(SecurityGroup_28.getString());
    FIX::SecurityID SecurityID_28("STRING_518437162");
    noMDEntries_0_0.set(SecurityID_28);
    Instrument_28.insert(SecurityID_28.getString());
    FIX::SecurityIDSource SecurityIDSource_28("STRING_9");
    noMDEntries_0_0.set(SecurityIDSource_28);
    Instrument_28.insert(SecurityIDSource_28.getString());
    FIX::SecurityStatus SecurityStatus_28("STRING_1");
    noMDEntries_0_0.set(SecurityStatus_28);
    Instrument_28.insert(SecurityStatus_28.getString());
    FIX::SecuritySubType SecuritySubType_29("STRING_167405953");
    noMDEntries_0_0.set(SecuritySubType_29);
    Instrument_28.insert(SecuritySubType_29.getString());
    FIX::SecurityType SecurityType_30("STRING_STRUCT");
    noMDEntries_0_0.set(SecurityType_30);
    Instrument_28.insert(SecurityType_30.getString());
    FIX::Seniority Seniority_28("STRING_SD");
    noMDEntries_0_0.set(Seniority_28);
    Instrument_28.insert(Seniority_28.getString());
    FIX::SettlMethod SettlMethod_28('P');
    noMDEntries_0_0.set(SettlMethod_28);
    Instrument_28.insert(SettlMethod_28.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_28("STRING_964606509");
    noMDEntries_0_0.set(SettleOnOpenFlag_28);
    Instrument_28.insert(SettleOnOpenFlag_28.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_28("STRING_1905966666");
    noMDEntries_0_0.set(StateOrProvinceOfIssue_28);
    Instrument_28.insert(StateOrProvinceOfIssue_28.getString());
    FIX::StrikeCurrency StrikeCurrency_28("CAN");
    noMDEntries_0_0.set(StrikeCurrency_28);
    Instrument_28.insert(StrikeCurrency_28.getString());
    FIX::StrikeMultiplier StrikeMultiplier_28;
    StrikeMultiplier_28.setString("4340967");
    noMDEntries_0_0.set(StrikeMultiplier_28);
    Instrument_28.insert(StrikeMultiplier_28.getString());
    FIX::StrikePrice StrikePrice_28;
    StrikePrice_28.setString("19466794");
    noMDEntries_0_0.set(StrikePrice_28);
    Instrument_28.insert(StrikePrice_28.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_28(4);
    noMDEntries_0_0.set(StrikePriceBoundaryMethod_28);
    Instrument_28.insert(StrikePriceBoundaryMethod_28.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_28;
    StrikePriceBoundaryPrecision_28.setString("68.400000");
    noMDEntries_0_0.set(StrikePriceBoundaryPrecision_28);
    Instrument_28.insert(StrikePriceBoundaryPrecision_28.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_28(2);
    noMDEntries_0_0.set(StrikePriceDeterminationMethod_28);
    Instrument_28.insert(StrikePriceDeterminationMethod_28.getString());
    FIX::StrikeValue StrikeValue_28;
    StrikeValue_28.setString("3623566");
    noMDEntries_0_0.set(StrikeValue_28);
    Instrument_28.insert(StrikeValue_28.getString());
    FIX::Symbol Symbol_28("STRING_591979969");
    noMDEntries_0_0.set(Symbol_28);
    Instrument_28.insert(Symbol_28.getString());
    FIX::SymbolSfx SymbolSfx_28("STRING_WI");
    noMDEntries_0_0.set(SymbolSfx_28);
    Instrument_28.insert(SymbolSfx_28.getString());
    FIX::TimeUnit TimeUnit_28("STRING_S");
    noMDEntries_0_0.set(TimeUnit_28);
    Instrument_28.insert(TimeUnit_28.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_28(2);
    noMDEntries_0_0.set(UnderlyingPriceDeterminationMethod_28);
    Instrument_28.insert(UnderlyingPriceDeterminationMethod_28.getString());
    FIX::UnitOfMeasure UnitOfMeasure_28("STRING_Bbl");
    noMDEntries_0_0.set(UnitOfMeasure_28);
    Instrument_28.insert(UnitOfMeasure_28.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_28;
    UnitOfMeasureQty_28.setString("17152408");
    noMDEntries_0_0.set(UnitOfMeasureQty_28);
    Instrument_28.insert(UnitOfMeasureQty_28.getString());
    FIX::ValuationMethod ValuationMethod_28("STRING_CDS");
    noMDEntries_0_0.set(ValuationMethod_28);
    Instrument_28.insert(ValuationMethod_28.getString());
    all_values.push_back(Instrument_28);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_57;
      FIX::ComplexEventCondition ComplexEventCondition_57(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_57);
      ComplexEvents_NoComplexEvents_57.insert(ComplexEventCondition_57.getString());
      FIX::ComplexEventPrice ComplexEventPrice_57;
      ComplexEventPrice_57.setString("3090751");
      noComplexEvents_0_1_0.set(ComplexEventPrice_57);
      ComplexEvents_NoComplexEvents_57.insert(ComplexEventPrice_57.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_57(4);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_57);
      ComplexEvents_NoComplexEvents_57.insert(ComplexEventPriceBoundaryMethod_57.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_57;
      ComplexEventPriceBoundaryPrecision_57.setString("22.620000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_57);
      ComplexEvents_NoComplexEvents_57.insert(ComplexEventPriceBoundaryPrecision_57.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_57(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_57);
      ComplexEvents_NoComplexEvents_57.insert(ComplexEventPriceTimeType_57.getString());
      FIX::ComplexEventType ComplexEventType_57(9);
      noComplexEvents_0_1_0.set(ComplexEventType_57);
      ComplexEvents_NoComplexEvents_57.insert(ComplexEventType_57.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_57;
      ComplexOptPayoutAmount_57.setString("18052394");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_57);
      ComplexEvents_NoComplexEvents_57.insert(ComplexOptPayoutAmount_57.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_57);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_116;
        FIX::ComplexEventEndDate ComplexEventEndDate_116(FIX::UTCTIMESTAMP(10, 52, 14, 5, 6, 2012));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_116);
        ComplexEventDates_NoComplexEventDates_116.insert(ComplexEventEndDate_116.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_116(FIX::UTCTIMESTAMP(16, 21, 35, 23, 6, 2016));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_116);
        ComplexEventDates_NoComplexEventDates_116.insert(ComplexEventStartDate_116.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_116);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_236;
          FIX::ComplexEventEndTime ComplexEventEndTime_236(FIX::UTCTIMEONLY(20, 46, 8));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_236);
          ComplexEventTimes_NoComplexEventTimes_236.insert(ComplexEventEndTime_236.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_236(FIX::UTCTIMEONLY(6, 16, 2));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_236);
          ComplexEventTimes_NoComplexEventTimes_236.insert(ComplexEventStartTime_236.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_236);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_237;
          FIX::ComplexEventEndTime ComplexEventEndTime_237(FIX::UTCTIMEONLY(5, 50, 57));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_237);
          ComplexEventTimes_NoComplexEventTimes_237.insert(ComplexEventEndTime_237.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_237(FIX::UTCTIMEONLY(8, 34, 50));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_237);
          ComplexEventTimes_NoComplexEventTimes_237.insert(ComplexEventStartTime_237.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_237);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_238;
          FIX::ComplexEventEndTime ComplexEventEndTime_238(FIX::UTCTIMEONLY(8, 34, 45));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventEndTime_238);
          ComplexEventTimes_NoComplexEventTimes_238.insert(ComplexEventEndTime_238.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_238(FIX::UTCTIMEONLY(15, 49, 44));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventStartTime_238);
          ComplexEventTimes_NoComplexEventTimes_238.insert(ComplexEventStartTime_238.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_238);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_117;
        FIX::ComplexEventEndDate ComplexEventEndDate_117(FIX::UTCTIMESTAMP(11, 11, 43, 0, 5, 2013));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_117);
        ComplexEventDates_NoComplexEventDates_117.insert(ComplexEventEndDate_117.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_117(FIX::UTCTIMESTAMP(16, 45, 47, 6, 4, 2013));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_117);
        ComplexEventDates_NoComplexEventDates_117.insert(ComplexEventStartDate_117.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_117);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_239;
          FIX::ComplexEventEndTime ComplexEventEndTime_239(FIX::UTCTIMEONLY(4, 30, 0));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_239);
          ComplexEventTimes_NoComplexEventTimes_239.insert(ComplexEventEndTime_239.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_239(FIX::UTCTIMEONLY(2, 34, 48));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_239);
          ComplexEventTimes_NoComplexEventTimes_239.insert(ComplexEventStartTime_239.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_239);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_118;
        FIX::ComplexEventEndDate ComplexEventEndDate_118(FIX::UTCTIMESTAMP(23, 22, 15, 12, 7, 2017));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_118);
        ComplexEventDates_NoComplexEventDates_118.insert(ComplexEventEndDate_118.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_118(FIX::UTCTIMESTAMP(18, 8, 0, 25, 5, 2008));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_118);
        ComplexEventDates_NoComplexEventDates_118.insert(ComplexEventStartDate_118.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_118);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_240;
          FIX::ComplexEventEndTime ComplexEventEndTime_240(FIX::UTCTIMEONLY(0, 13, 22));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_240);
          ComplexEventTimes_NoComplexEventTimes_240.insert(ComplexEventEndTime_240.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_240(FIX::UTCTIMEONLY(20, 17, 50));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_240);
          ComplexEventTimes_NoComplexEventTimes_240.insert(ComplexEventStartTime_240.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_240);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noMDEntries_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_58;
      FIX::ComplexEventCondition ComplexEventCondition_58(2);
      noComplexEvents_0_1_1.set(ComplexEventCondition_58);
      ComplexEvents_NoComplexEvents_58.insert(ComplexEventCondition_58.getString());
      FIX::ComplexEventPrice ComplexEventPrice_58;
      ComplexEventPrice_58.setString("11305941");
      noComplexEvents_0_1_1.set(ComplexEventPrice_58);
      ComplexEvents_NoComplexEvents_58.insert(ComplexEventPrice_58.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_58(1);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_58);
      ComplexEvents_NoComplexEvents_58.insert(ComplexEventPriceBoundaryMethod_58.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_58;
      ComplexEventPriceBoundaryPrecision_58.setString("40.470000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_58);
      ComplexEvents_NoComplexEvents_58.insert(ComplexEventPriceBoundaryPrecision_58.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_58(2);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_58);
      ComplexEvents_NoComplexEvents_58.insert(ComplexEventPriceTimeType_58.getString());
      FIX::ComplexEventType ComplexEventType_58(4);
      noComplexEvents_0_1_1.set(ComplexEventType_58);
      ComplexEvents_NoComplexEvents_58.insert(ComplexEventType_58.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_58;
      ComplexOptPayoutAmount_58.setString("1504295");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_58);
      ComplexEvents_NoComplexEvents_58.insert(ComplexOptPayoutAmount_58.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_58);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_119;
        FIX::ComplexEventEndDate ComplexEventEndDate_119(FIX::UTCTIMESTAMP(4, 45, 12, 9, 4, 2005));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_119);
        ComplexEventDates_NoComplexEventDates_119.insert(ComplexEventEndDate_119.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_119(FIX::UTCTIMESTAMP(9, 25, 46, 26, 7, 2013));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_119);
        ComplexEventDates_NoComplexEventDates_119.insert(ComplexEventStartDate_119.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_119);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_241;
          FIX::ComplexEventEndTime ComplexEventEndTime_241(FIX::UTCTIMEONLY(23, 31, 28));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_241);
          ComplexEventTimes_NoComplexEventTimes_241.insert(ComplexEventEndTime_241.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_241(FIX::UTCTIMEONLY(8, 37, 52));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_241);
          ComplexEventTimes_NoComplexEventTimes_241.insert(ComplexEventStartTime_241.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_241);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_120;
        FIX::ComplexEventEndDate ComplexEventEndDate_120(FIX::UTCTIMESTAMP(15, 5, 50, 2, 9, 2013));
        noComplexEventDates_0_1_2_1.set(ComplexEventEndDate_120);
        ComplexEventDates_NoComplexEventDates_120.insert(ComplexEventEndDate_120.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_120(FIX::UTCTIMESTAMP(17, 36, 58, 21, 2, 2000));
        noComplexEventDates_0_1_2_1.set(ComplexEventStartDate_120);
        ComplexEventDates_NoComplexEventDates_120.insert(ComplexEventStartDate_120.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_120);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_242;
          FIX::ComplexEventEndTime ComplexEventEndTime_242(FIX::UTCTIMEONLY(7, 8, 41));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventEndTime_242);
          ComplexEventTimes_NoComplexEventTimes_242.insert(ComplexEventEndTime_242.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_242(FIX::UTCTIMEONLY(6, 24, 32));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventStartTime_242);
          ComplexEventTimes_NoComplexEventTimes_242.insert(ComplexEventStartTime_242.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_242);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_121;
        FIX::ComplexEventEndDate ComplexEventEndDate_121(FIX::UTCTIMESTAMP(16, 56, 4, 6, 5, 2017));
        noComplexEventDates_0_1_2_2.set(ComplexEventEndDate_121);
        ComplexEventDates_NoComplexEventDates_121.insert(ComplexEventEndDate_121.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_121(FIX::UTCTIMESTAMP(3, 48, 15, 9, 3, 2003));
        noComplexEventDates_0_1_2_2.set(ComplexEventStartDate_121);
        ComplexEventDates_NoComplexEventDates_121.insert(ComplexEventStartDate_121.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_121);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_243;
          FIX::ComplexEventEndTime ComplexEventEndTime_243(FIX::UTCTIMEONLY(0, 16, 34));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventEndTime_243);
          ComplexEventTimes_NoComplexEventTimes_243.insert(ComplexEventEndTime_243.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_243(FIX::UTCTIMEONLY(5, 52, 17));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventStartTime_243);
          ComplexEventTimes_NoComplexEventTimes_243.insert(ComplexEventStartTime_243.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_243);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noMDEntries_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_59;
      FIX::ComplexEventCondition ComplexEventCondition_59(1);
      noComplexEvents_0_1_2.set(ComplexEventCondition_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventCondition_59.getString());
      FIX::ComplexEventPrice ComplexEventPrice_59;
      ComplexEventPrice_59.setString("17164539");
      noComplexEvents_0_1_2.set(ComplexEventPrice_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventPrice_59.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_59(1);
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryMethod_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventPriceBoundaryMethod_59.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_59;
      ComplexEventPriceBoundaryPrecision_59.setString("40.260000");
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryPrecision_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventPriceBoundaryPrecision_59.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_59(2);
      noComplexEvents_0_1_2.set(ComplexEventPriceTimeType_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventPriceTimeType_59.getString());
      FIX::ComplexEventType ComplexEventType_59(1);
      noComplexEvents_0_1_2.set(ComplexEventType_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexEventType_59.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_59;
      ComplexOptPayoutAmount_59.setString("14699090");
      noComplexEvents_0_1_2.set(ComplexOptPayoutAmount_59);
      ComplexEvents_NoComplexEvents_59.insert(ComplexOptPayoutAmount_59.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_59);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_122;
        FIX::ComplexEventEndDate ComplexEventEndDate_122(FIX::UTCTIMESTAMP(10, 58, 20, 8, 3, 2017));
        noComplexEventDates_0_2_2_0.set(ComplexEventEndDate_122);
        ComplexEventDates_NoComplexEventDates_122.insert(ComplexEventEndDate_122.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_122(FIX::UTCTIMESTAMP(17, 42, 26, 2, 1, 2016));
        noComplexEventDates_0_2_2_0.set(ComplexEventStartDate_122);
        ComplexEventDates_NoComplexEventDates_122.insert(ComplexEventStartDate_122.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_122);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_244;
          FIX::ComplexEventEndTime ComplexEventEndTime_244(FIX::UTCTIMEONLY(2, 15, 30));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventEndTime_244);
          ComplexEventTimes_NoComplexEventTimes_244.insert(ComplexEventEndTime_244.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_244(FIX::UTCTIMEONLY(0, 14, 33));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventStartTime_244);
          ComplexEventTimes_NoComplexEventTimes_244.insert(ComplexEventStartTime_244.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_244);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_245;
          FIX::ComplexEventEndTime ComplexEventEndTime_245(FIX::UTCTIMEONLY(5, 51, 43));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventEndTime_245);
          ComplexEventTimes_NoComplexEventTimes_245.insert(ComplexEventEndTime_245.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_245(FIX::UTCTIMEONLY(3, 25, 9));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventStartTime_245);
          ComplexEventTimes_NoComplexEventTimes_245.insert(ComplexEventStartTime_245.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_245);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_123;
        FIX::ComplexEventEndDate ComplexEventEndDate_123(FIX::UTCTIMESTAMP(16, 59, 15, 8, 2, 2014));
        noComplexEventDates_0_2_2_1.set(ComplexEventEndDate_123);
        ComplexEventDates_NoComplexEventDates_123.insert(ComplexEventEndDate_123.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_123(FIX::UTCTIMESTAMP(10, 42, 2, 0, 8, 2004));
        noComplexEventDates_0_2_2_1.set(ComplexEventStartDate_123);
        ComplexEventDates_NoComplexEventDates_123.insert(ComplexEventStartDate_123.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_123);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_246;
          FIX::ComplexEventEndTime ComplexEventEndTime_246(FIX::UTCTIMEONLY(18, 45, 13));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventEndTime_246);
          ComplexEventTimes_NoComplexEventTimes_246.insert(ComplexEventEndTime_246.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_246(FIX::UTCTIMEONLY(22, 19, 32));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventStartTime_246);
          ComplexEventTimes_NoComplexEventTimes_246.insert(ComplexEventStartTime_246.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_246);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_247;
          FIX::ComplexEventEndTime ComplexEventEndTime_247(FIX::UTCTIMEONLY(12, 23, 34));
          noComplexEventTimes_0_2_1_3_1.set(ComplexEventEndTime_247);
          ComplexEventTimes_NoComplexEventTimes_247.insert(ComplexEventEndTime_247.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_247(FIX::UTCTIMEONLY(2, 59, 48));
          noComplexEventTimes_0_2_1_3_1.set(ComplexEventStartTime_247);
          ComplexEventTimes_NoComplexEventTimes_247.insert(ComplexEventStartTime_247.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_247);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_1);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_248;
          FIX::ComplexEventEndTime ComplexEventEndTime_248(FIX::UTCTIMEONLY(7, 47, 4));
          noComplexEventTimes_0_2_1_3_2.set(ComplexEventEndTime_248);
          ComplexEventTimes_NoComplexEventTimes_248.insert(ComplexEventEndTime_248.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_248(FIX::UTCTIMEONLY(4, 5, 59));
          noComplexEventTimes_0_2_1_3_2.set(ComplexEventStartTime_248);
          ComplexEventTimes_NoComplexEventTimes_248.insert(ComplexEventStartTime_248.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_248);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_124;
        FIX::ComplexEventEndDate ComplexEventEndDate_124(FIX::UTCTIMESTAMP(3, 1, 54, 10, 6, 2015));
        noComplexEventDates_0_2_2_2.set(ComplexEventEndDate_124);
        ComplexEventDates_NoComplexEventDates_124.insert(ComplexEventEndDate_124.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_124(FIX::UTCTIMESTAMP(12, 18, 22, 7, 9, 2015));
        noComplexEventDates_0_2_2_2.set(ComplexEventStartDate_124);
        ComplexEventDates_NoComplexEventDates_124.insert(ComplexEventStartDate_124.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_124);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_249;
          FIX::ComplexEventEndTime ComplexEventEndTime_249(FIX::UTCTIMEONLY(10, 23, 9));
          noComplexEventTimes_0_2_2_3_0.set(ComplexEventEndTime_249);
          ComplexEventTimes_NoComplexEventTimes_249.insert(ComplexEventEndTime_249.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_249(FIX::UTCTIMEONLY(5, 1, 50));
          noComplexEventTimes_0_2_2_3_0.set(ComplexEventStartTime_249);
          ComplexEventTimes_NoComplexEventTimes_249.insert(ComplexEventStartTime_249.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_249);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_250;
          FIX::ComplexEventEndTime ComplexEventEndTime_250(FIX::UTCTIMEONLY(0, 37, 3));
          noComplexEventTimes_0_2_2_3_1.set(ComplexEventEndTime_250);
          ComplexEventTimes_NoComplexEventTimes_250.insert(ComplexEventEndTime_250.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_250(FIX::UTCTIMEONLY(18, 0, 24));
          noComplexEventTimes_0_2_2_3_1.set(ComplexEventStartTime_250);
          ComplexEventTimes_NoComplexEventTimes_250.insert(ComplexEventStartTime_250.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_250);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_1);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_251;
          FIX::ComplexEventEndTime ComplexEventEndTime_251(FIX::UTCTIMEONLY(16, 25, 7));
          noComplexEventTimes_0_2_2_3_2.set(ComplexEventEndTime_251);
          ComplexEventTimes_NoComplexEventTimes_251.insert(ComplexEventEndTime_251.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_251(FIX::UTCTIMEONLY(23, 40, 16));
          noComplexEventTimes_0_2_2_3_2.set(ComplexEventStartTime_251);
          ComplexEventTimes_NoComplexEventTimes_251.insert(ComplexEventStartTime_251.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_251);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_2);
      }
      noMDEntries_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_53;
      FIX::EventDate EventDate_53("LOCALMKTDATE_959040290");
      noEvents_0_1_0.set(EventDate_53);
      EvntGrp_NoEvents_53.insert(EventDate_53.getString());
      FIX::EventPx EventPx_53;
      EventPx_53.setString("12748308");
      noEvents_0_1_0.set(EventPx_53);
      EvntGrp_NoEvents_53.insert(EventPx_53.getString());
      FIX::EventText EventText_53("STRING_805785246");
      noEvents_0_1_0.set(EventText_53);
      EvntGrp_NoEvents_53.insert(EventText_53.getString());
      FIX::EventTime EventTime_53(FIX::UTCTIMESTAMP(4, 5, 2, 10, 9, 2004));
      noEvents_0_1_0.set(EventTime_53);
      EvntGrp_NoEvents_53.insert(EventTime_53.getString());
      FIX::EventType EventType_53(99);
      noEvents_0_1_0.set(EventType_53);
      EvntGrp_NoEvents_53.insert(EventType_53.getString());
      all_values.push_back(EvntGrp_NoEvents_53);
      all_compo_names.insert("EvntGrp.NoEvents");

      noMDEntries_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_52;
      FIX::InstrumentPartyID InstrumentPartyID_52("STRING_690565557");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_52);
      InstrumentParties_NoInstrumentParties_52.insert(InstrumentPartyID_52.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_52('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_52);
      InstrumentParties_NoInstrumentParties_52.insert(InstrumentPartyIDSource_52.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_52(1720130669);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_52);
      InstrumentParties_NoInstrumentParties_52.insert(InstrumentPartyRole_52.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_52);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103;
        FIX::InstrumentPartySubID InstrumentPartySubID_103("STRING_375054039");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_103);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103.insert(InstrumentPartySubID_103.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_103(1568438124);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_103);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103.insert(InstrumentPartySubIDType_103.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noMDEntries_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_49;
      FIX::SecurityAltID SecurityAltID_49("STRING_1550795745");
      noSecurityAltID_0_1_0.set(SecurityAltID_49);
      SecAltIDGrp_NoSecurityAltID_49.insert(SecurityAltID_49.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_49("STRING_841314857");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_49);
      SecAltIDGrp_NoSecurityAltID_49.insert(SecurityAltIDSource_49.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_49);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noMDEntries_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_50;
      FIX::SecurityAltID SecurityAltID_50("STRING_597956738");
      noSecurityAltID_0_1_1.set(SecurityAltID_50);
      SecAltIDGrp_NoSecurityAltID_50.insert(SecurityAltID_50.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_50("STRING_2070045537");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_50);
      SecAltIDGrp_NoSecurityAltID_50.insert(SecurityAltIDSource_50.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_50);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noMDEntries_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_56;
    FIX::SecurityXML SecurityXML_57("XMLDATA_418775089");
    noMDEntries_0_0.set(SecurityXML_57);
    FIX::SecurityXMLLen SecurityXMLLen_28(404785495);
    noMDEntries_0_0.set(SecurityXMLLen_28);
    FIX::SecurityXMLSchema SecurityXMLSchema_28("STRING_613129436");
    noMDEntries_0_0.set(SecurityXMLSchema_28);
    SecurityXML_56.insert(SecurityXMLSchema_28.getString());
    all_values.push_back(SecurityXML_56);
    all_compo_names.insert("SecurityXML");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_43;
      FIX::PartyID PartyID_43("STRING_1533662166");
      noPartyIDs_0_1_0.set(PartyID_43);
      Parties_NoPartyIDs_43.insert(PartyID_43.getString());
      FIX::PartyIDSource PartyIDSource_43('G');
      noPartyIDs_0_1_0.set(PartyIDSource_43);
      Parties_NoPartyIDs_43.insert(PartyIDSource_43.getString());
      FIX::PartyRole PartyRole_43(16);
      noPartyIDs_0_1_0.set(PartyRole_43);
      Parties_NoPartyIDs_43.insert(PartyRole_43.getString());
      all_values.push_back(Parties_NoPartyIDs_43);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_92;
        FIX::PartySubID PartySubID_92("STRING_998779879");
        noPartySubIDs_0_0_2_0.set(PartySubID_92);
        PtysSubGrp_NoPartySubIDs_92.insert(PartySubID_92.getString());
        FIX::PartySubIDType PartySubIDType_92(6);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_92);
        PtysSubGrp_NoPartySubIDs_92.insert(PartySubIDType_92.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_92);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_93;
        FIX::PartySubID PartySubID_93("STRING_995565703");
        noPartySubIDs_0_0_2_1.set(PartySubID_93);
        PtysSubGrp_NoPartySubIDs_93.insert(PartySubID_93.getString());
        FIX::PartySubIDType PartySubIDType_93(8);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_93);
        PtysSubGrp_NoPartySubIDs_93.insert(PartySubIDType_93.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_93);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_44;
      FIX::PartyID PartyID_44("STRING_1950886950");
      noPartyIDs_0_1_1.set(PartyID_44);
      Parties_NoPartyIDs_44.insert(PartyID_44.getString());
      FIX::PartyIDSource PartyIDSource_44('1');
      noPartyIDs_0_1_1.set(PartyIDSource_44);
      Parties_NoPartyIDs_44.insert(PartyIDSource_44.getString());
      FIX::PartyRole PartyRole_44(42);
      noPartyIDs_0_1_1.set(PartyRole_44);
      Parties_NoPartyIDs_44.insert(PartyRole_44.getString());
      all_values.push_back(Parties_NoPartyIDs_44);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_94;
        FIX::PartySubID PartySubID_94("STRING_69276653");
        noPartySubIDs_0_1_2_0.set(PartySubID_94);
        PtysSubGrp_NoPartySubIDs_94.insert(PartySubID_94.getString());
        FIX::PartySubIDType PartySubIDType_94(21);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_94);
        PtysSubGrp_NoPartySubIDs_94.insert(PartySubIDType_94.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_94);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_95;
        FIX::PartySubID PartySubID_95("STRING_117921651");
        noPartySubIDs_0_1_2_1.set(PartySubID_95);
        PtysSubGrp_NoPartySubIDs_95.insert(PartySubID_95.getString());
        FIX::PartySubIDType PartySubIDType_95(15);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_95);
        PtysSubGrp_NoPartySubIDs_95.insert(PartySubIDType_95.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_95);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_1);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoRateSources noRateSources_0_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_8;
      FIX::RateSource RateSource_12(1);
      noRateSources_0_1_0.set(RateSource_12);
      RateSource_NoRateSources_8.insert(RateSource_12.getString());
      FIX::RateSourceType RateSourceType_8(0);
      noRateSources_0_1_0.set(RateSourceType_8);
      RateSource_NoRateSources_8.insert(RateSourceType_8.getString());
      FIX::ReferencePage ReferencePage_8("STRING_1254637531");
      noRateSources_0_1_0.set(ReferencePage_8);
      RateSource_NoRateSources_8.insert(ReferencePage_8.getString());
      all_values.push_back(RateSource_NoRateSources_8);
      all_compo_names.insert("RateSource.NoRateSources");

      noMDEntries_0_0.addGroup(noRateSources_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoRateSources noRateSources_0_1_1;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_9;
      FIX::RateSource RateSource_13(0);
      noRateSources_0_1_1.set(RateSource_13);
      RateSource_NoRateSources_9.insert(RateSource_13.getString());
      FIX::RateSourceType RateSourceType_9(1);
      noRateSources_0_1_1.set(RateSourceType_9);
      RateSource_NoRateSources_9.insert(RateSourceType_9.getString());
      FIX::ReferencePage ReferencePage_9("STRING_1155317265");
      noRateSources_0_1_1.set(ReferencePage_9);
      RateSource_NoRateSources_9.insert(ReferencePage_9.getString());
      all_values.push_back(RateSource_NoRateSources_9);
      all_compo_names.insert("RateSource.NoRateSources");

      noMDEntries_0_0.addGroup(noRateSources_0_1_1);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoRateSources noRateSources_0_1_2;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_10;
      FIX::RateSource RateSource_14(1);
      noRateSources_0_1_2.set(RateSource_14);
      RateSource_NoRateSources_10.insert(RateSource_14.getString());
      FIX::RateSourceType RateSourceType_10(0);
      noRateSources_0_1_2.set(RateSourceType_10);
      RateSource_NoRateSources_10.insert(RateSourceType_10.getString());
      FIX::ReferencePage ReferencePage_10("STRING_1753274003");
      noRateSources_0_1_2.set(ReferencePage_10);
      RateSource_NoRateSources_10.insert(ReferencePage_10.getString());
      all_values.push_back(RateSource_NoRateSources_10);
      all_compo_names.insert("RateSource.NoRateSources");

      noMDEntries_0_0.addGroup(noRateSources_0_1_2);
    }
    // SecSizesGrp
    // Group SecSizesGrp.NoOfSecSizes
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_0_1_0;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_0;
      FIX::MDSecSize MDSecSize_0;
      MDSecSize_0.setString("18422782");
      noOfSecSizes_0_1_0.set(MDSecSize_0);
      SecSizesGrp_NoOfSecSizes_0.insert(MDSecSize_0.getString());
      FIX::MDSecSizeType MDSecSizeType_0(1);
      noOfSecSizes_0_1_0.set(MDSecSizeType_0);
      SecSizesGrp_NoOfSecSizes_0.insert(MDSecSizeType_0.getString());
      all_values.push_back(SecSizesGrp_NoOfSecSizes_0);
      all_compo_names.insert("SecSizesGrp.NoOfSecSizes");

      noMDEntries_0_0.addGroup(noOfSecSizes_0_1_0);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_12;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_12("USD");
    noMDEntries_0_0.set(BenchmarkCurveCurrency_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkCurveCurrency_12.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_12("STRING_LIBOR");
    noMDEntries_0_0.set(BenchmarkCurveName_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkCurveName_12.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_12("STRING_2064807871");
    noMDEntries_0_0.set(BenchmarkCurvePoint_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkCurvePoint_12.getString());
    FIX::BenchmarkPrice BenchmarkPrice_12;
    BenchmarkPrice_12.setString("3600404");
    noMDEntries_0_0.set(BenchmarkPrice_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkPrice_12.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_12(1734018474);
    noMDEntries_0_0.set(BenchmarkPriceType_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkPriceType_12.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_12("STRING_916104102");
    noMDEntries_0_0.set(BenchmarkSecurityID_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkSecurityID_12.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_12("STRING_525388876");
    noMDEntries_0_0.set(BenchmarkSecurityIDSource_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkSecurityIDSource_12.getString());
    FIX::Spread Spread_12;
    Spread_12.setString("5821005");
    noMDEntries_0_0.set(Spread_12);
    SpreadOrBenchmarkCurveData_12.insert(Spread_12.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_12);
    all_compo_names.insert("SpreadOrBenchmarkCurveData");

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
      all_compo_names.insert("StatsIndGrp.NoStatsIndicators");

      noMDEntries_0_0.addGroup(noStatsIndicators_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoStatsIndicators noStatsIndicators_0_1_1;
      // StatsIndGrp.NoStatsIndicators
      multiset<string> StatsIndGrp_NoStatsIndicators_1;
      FIX::StatsType StatsType_1(4);
      noStatsIndicators_0_1_1.set(StatsType_1);
      StatsIndGrp_NoStatsIndicators_1.insert(StatsType_1.getString());
      all_values.push_back(StatsIndGrp_NoStatsIndicators_1);
      all_compo_names.insert("StatsIndGrp.NoStatsIndicators");

      noMDEntries_0_0.addGroup(noStatsIndicators_0_1_1);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_48;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_48("DATA_1333924158");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_48);
      UnderlyingInstrument_48.insert(EncodedUnderlyingIssuer_48.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_48(1211802184);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_48);
      UnderlyingInstrument_48.insert(EncodedUnderlyingIssuerLen_48.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_48("DATA_1308805725");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_48);
      UnderlyingInstrument_48.insert(EncodedUnderlyingSecurityDesc_48.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_48(1451845809);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_48);
      UnderlyingInstrument_48.insert(EncodedUnderlyingSecurityDescLen_48.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_48;
      UnderlyingAdjustedQuantity_48.setString("6529053");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_48);
      UnderlyingInstrument_48.insert(UnderlyingAdjustedQuantity_48.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_48;
      UnderlyingAllocationPercent_48.setString("33.390000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_48);
      UnderlyingInstrument_48.insert(UnderlyingAllocationPercent_48.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_48;
      UnderlyingAttachmentPoint_48.setString("29.820000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_48);
      UnderlyingInstrument_48.insert(UnderlyingAttachmentPoint_48.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_48("STRING_1814139124");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_48);
      UnderlyingInstrument_48.insert(UnderlyingCFICode_48.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_48("STRING_286227222");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_48);
      UnderlyingInstrument_48.insert(UnderlyingCPProgram_48.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_48("STRING_953954194");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_48);
      UnderlyingInstrument_48.insert(UnderlyingCPRegType_48.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_48;
      UnderlyingCapValue_48.setString("2488437");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_48);
      UnderlyingInstrument_48.insert(UnderlyingCapValue_48.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_48;
      UnderlyingCashAmount_48.setString("14415444");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_48);
      UnderlyingInstrument_48.insert(UnderlyingCashAmount_48.getString());
      FIX::UnderlyingCashType UnderlyingCashType_48("STRING_DIFF");
      noUnderlyings_0_1_0.set(UnderlyingCashType_48);
      UnderlyingInstrument_48.insert(UnderlyingCashType_48.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_48;
      UnderlyingContractMultiplier_48.setString("16723468");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_48);
      UnderlyingInstrument_48.insert(UnderlyingContractMultiplier_48.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_48(1047334842);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_48);
      UnderlyingInstrument_48.insert(UnderlyingContractMultiplierUnit_48.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_48("COUNTRY_1707786350");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_48);
      UnderlyingInstrument_48.insert(UnderlyingCountryOfIssue_48.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_48("LOCALMKTDATE_1367141474");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_48);
      UnderlyingInstrument_48.insert(UnderlyingCouponPaymentDate_48.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_48;
      UnderlyingCouponRate_48.setString("6.920000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_48);
      UnderlyingInstrument_48.insert(UnderlyingCouponRate_48.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_48("STRING_1585370985");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_48);
      UnderlyingInstrument_48.insert(UnderlyingCreditRating_48.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_48("EUR");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_48);
      UnderlyingInstrument_48.insert(UnderlyingCurrency_48.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_48;
      UnderlyingCurrentValue_48.setString("15026952");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_48);
      UnderlyingInstrument_48.insert(UnderlyingCurrentValue_48.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_48;
      UnderlyingDetachmentPoint_48.setString("12.510000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_48);
      UnderlyingInstrument_48.insert(UnderlyingDetachmentPoint_48.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_48;
      UnderlyingDirtyPrice_48.setString("411998");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_48);
      UnderlyingInstrument_48.insert(UnderlyingDirtyPrice_48.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_48;
      UnderlyingEndPrice_48.setString("2713156");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_48);
      UnderlyingInstrument_48.insert(UnderlyingEndPrice_48.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_48;
      UnderlyingEndValue_48.setString("15746101");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_48);
      UnderlyingInstrument_48.insert(UnderlyingEndValue_48.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_48(623300418);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_48);
      UnderlyingInstrument_48.insert(UnderlyingExerciseStyle_48.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_48;
      UnderlyingFXRate_48.setString("192363");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_48);
      UnderlyingInstrument_48.insert(UnderlyingFXRate_48.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_48('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_48);
      UnderlyingInstrument_48.insert(UnderlyingFXRateCalc_48.getString());
      FIX::UnderlyingFactor UnderlyingFactor_48;
      UnderlyingFactor_48.setString("17658259");
      noUnderlyings_0_1_0.set(UnderlyingFactor_48);
      UnderlyingInstrument_48.insert(UnderlyingFactor_48.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_48(856324);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_48);
      UnderlyingInstrument_48.insert(UnderlyingFlowScheduleType_48.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_48("STRING_1089842815");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_48);
      UnderlyingInstrument_48.insert(UnderlyingInstrRegistry_48.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_48("LOCALMKTDATE_830144485");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_48);
      UnderlyingInstrument_48.insert(UnderlyingIssueDate_48.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_48("STRING_1309662050");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_48);
      UnderlyingInstrument_48.insert(UnderlyingIssuer_48.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_48("STRING_394204976");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_48);
      UnderlyingInstrument_48.insert(UnderlyingLocaleOfIssue_48.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_48("LOCALMKTDATE_1483049805");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_48);
      UnderlyingInstrument_48.insert(UnderlyingMaturityDate_48.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_48("MONTHYEAR_341251741");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_48);
      UnderlyingInstrument_48.insert(UnderlyingMaturityMonthYear_48.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_48("TZTIMEONLY_1409577959");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_48);
      UnderlyingInstrument_48.insert(UnderlyingMaturityTime_48.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_48;
      UnderlyingNotionalPercentageOutstanding_48.setString("52.820000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_48);
      UnderlyingInstrument_48.insert(UnderlyingNotionalPercentageOutstanding_48.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_48('6');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_48);
      UnderlyingInstrument_48.insert(UnderlyingOptAttribute_48.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_48;
      UnderlyingOriginalNotionalPercentageOutstanding_48.setString("85.050000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_48);
      UnderlyingInstrument_48.insert(UnderlyingOriginalNotionalPercentageOutstanding_48.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_48("STRING_1398549039");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_48);
      UnderlyingInstrument_48.insert(UnderlyingPriceUnitOfMeasure_48.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_48;
      UnderlyingPriceUnitOfMeasureQty_48.setString("20690234");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_48);
      UnderlyingInstrument_48.insert(UnderlyingPriceUnitOfMeasureQty_48.getString());
      FIX::UnderlyingProduct UnderlyingProduct_48(511896009);
      noUnderlyings_0_1_0.set(UnderlyingProduct_48);
      UnderlyingInstrument_48.insert(UnderlyingProduct_48.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_48(923412287);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_48);
      UnderlyingInstrument_48.insert(UnderlyingPutOrCall_48.getString());
      FIX::UnderlyingPx UnderlyingPx_48;
      UnderlyingPx_48.setString("9688746");
      noUnderlyings_0_1_0.set(UnderlyingPx_48);
      UnderlyingInstrument_48.insert(UnderlyingPx_48.getString());
      FIX::UnderlyingQty UnderlyingQty_48;
      UnderlyingQty_48.setString("721987");
      noUnderlyings_0_1_0.set(UnderlyingQty_48);
      UnderlyingInstrument_48.insert(UnderlyingQty_48.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_48("LOCALMKTDATE_143070113");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_48);
      UnderlyingInstrument_48.insert(UnderlyingRedemptionDate_48.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_48("STRING_2026785336");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_48);
      UnderlyingInstrument_48.insert(UnderlyingRepoCollateralSecurityType_48.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_48;
      UnderlyingRepurchaseRate_48.setString("96.960000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_48);
      UnderlyingInstrument_48.insert(UnderlyingRepurchaseRate_48.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_48(832250874);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_48);
      UnderlyingInstrument_48.insert(UnderlyingRepurchaseTerm_48.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_48("STRING_333966750");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_48);
      UnderlyingInstrument_48.insert(UnderlyingRestructuringType_48.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_48("STRING_1012781256");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_48);
      UnderlyingInstrument_48.insert(UnderlyingSecurityDesc_48.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_48("EXCHANGE_1881472125");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_48);
      UnderlyingInstrument_48.insert(UnderlyingSecurityExchange_48.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_48("STRING_375166638");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_48);
      UnderlyingInstrument_48.insert(UnderlyingSecurityID_48.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_48("STRING_1284096919");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_48);
      UnderlyingInstrument_48.insert(UnderlyingSecurityIDSource_48.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_48("STRING_1308598604");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_48);
      UnderlyingInstrument_48.insert(UnderlyingSecuritySubType_48.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_48("STRING_998467056");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_48);
      UnderlyingInstrument_48.insert(UnderlyingSecurityType_48.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_48("STRING_1303333223");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_48);
      UnderlyingInstrument_48.insert(UnderlyingSeniority_48.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_48("STRING_1064517261");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_48);
      UnderlyingInstrument_48.insert(UnderlyingSettlMethod_48.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_48(2);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_48);
      UnderlyingInstrument_48.insert(UnderlyingSettlementType_48.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_48;
      UnderlyingStartValue_48.setString("13041895");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_48);
      UnderlyingInstrument_48.insert(UnderlyingStartValue_48.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_48("STRING_6876428");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_48);
      UnderlyingInstrument_48.insert(UnderlyingStateOrProvinceOfIssue_48.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_48("CHF");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_48);
      UnderlyingInstrument_48.insert(UnderlyingStrikeCurrency_48.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_48;
      UnderlyingStrikePrice_48.setString("4010814");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_48);
      UnderlyingInstrument_48.insert(UnderlyingStrikePrice_48.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_48("STRING_782520000");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_48);
      UnderlyingInstrument_48.insert(UnderlyingSymbol_48.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_48("STRING_807619690");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_48);
      UnderlyingInstrument_48.insert(UnderlyingSymbolSfx_48.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_48("STRING_1810659364");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_48);
      UnderlyingInstrument_48.insert(UnderlyingTimeUnit_48.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_48("STRING_1932225282");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_48);
      UnderlyingInstrument_48.insert(UnderlyingUnitOfMeasure_48.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_48;
      UnderlyingUnitOfMeasureQty_48.setString("14350986");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_48);
      UnderlyingInstrument_48.insert(UnderlyingUnitOfMeasureQty_48.getString());
      all_values.push_back(UnderlyingInstrument_48);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_102;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_102("STRING_1183290673");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_102);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_102.insert(UnderlyingSecurityAltID_102.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_102("STRING_1356638455");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_102);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_102.insert(UnderlyingSecurityAltIDSource_102.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_102);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_103;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_103("STRING_391120230");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_103);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_103.insert(UnderlyingSecurityAltID_103.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_103("STRING_2106702960");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_103);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_103.insert(UnderlyingSecurityAltIDSource_103.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_103);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_104;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_104("STRING_178029451");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltID_104);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_104.insert(UnderlyingSecurityAltID_104.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_104("STRING_463318941");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltIDSource_104);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_104.insert(UnderlyingSecurityAltIDSource_104.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_104);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_97;
        FIX::UnderlyingStipType UnderlyingStipType_97("STRING_57331140");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_97);
        UnderlyingStipulations_NoUnderlyingStips_97.insert(UnderlyingStipType_97.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_97("STRING_2120888637");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_97);
        UnderlyingStipulations_NoUnderlyingStips_97.insert(UnderlyingStipValue_97.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_97);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_98;
        FIX::UnderlyingStipType UnderlyingStipType_98("STRING_934540300");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_98);
        UnderlyingStipulations_NoUnderlyingStips_98.insert(UnderlyingStipType_98.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_98("STRING_391297890");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_98);
        UnderlyingStipulations_NoUnderlyingStips_98.insert(UnderlyingStipValue_98.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_98);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_91;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_91("STRING_668528778");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_91);
        UndlyInstrumentParties_NoUndlyInstrumentParties_91.insert(UnderlyingInstrumentPartyID_91.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_91('7');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_91);
        UndlyInstrumentParties_NoUndlyInstrumentParties_91.insert(UnderlyingInstrumentPartyIDSource_91.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_91(122799517);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_91);
        UndlyInstrumentParties_NoUndlyInstrumentParties_91.insert(UnderlyingInstrumentPartyRole_91.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_91);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_180;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_180("STRING_1764931584");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_180);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_180.insert(UnderlyingInstrumentPartySubID_180.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_180(1426132740);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_180);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_180.insert(UnderlyingInstrumentPartySubIDType_180.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_180);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_181;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_181("STRING_894160996");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_181);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_181.insert(UnderlyingInstrumentPartySubID_181.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_181(234257293);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_181);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_181.insert(UnderlyingInstrumentPartySubIDType_181.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_181);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_182;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_182("STRING_582838640");
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubID_182);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_182.insert(UnderlyingInstrumentPartySubID_182.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_182(901037424);
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_182);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_182.insert(UnderlyingInstrumentPartySubIDType_182.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_182);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_92;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_92("STRING_1681211135");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_92);
        UndlyInstrumentParties_NoUndlyInstrumentParties_92.insert(UnderlyingInstrumentPartyID_92.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_92('1');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_92);
        UndlyInstrumentParties_NoUndlyInstrumentParties_92.insert(UnderlyingInstrumentPartyIDSource_92.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_92(1302118829);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_92);
        UndlyInstrumentParties_NoUndlyInstrumentParties_92.insert(UnderlyingInstrumentPartyRole_92.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_92);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_183;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_183("STRING_1856826280");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_183);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_183.insert(UnderlyingInstrumentPartySubID_183.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_183(965294545);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_183);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_183.insert(UnderlyingInstrumentPartySubIDType_183.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_183);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_93;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_93("STRING_100989121");
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyID_93);
        UndlyInstrumentParties_NoUndlyInstrumentParties_93.insert(UnderlyingInstrumentPartyID_93.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_93('1');
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyIDSource_93);
        UndlyInstrumentParties_NoUndlyInstrumentParties_93.insert(UnderlyingInstrumentPartyIDSource_93.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_93(844518767);
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyRole_93);
        UndlyInstrumentParties_NoUndlyInstrumentParties_93.insert(UnderlyingInstrumentPartyRole_93.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_93);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_184;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_184("STRING_353596093");
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubID_184);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_184.insert(UnderlyingInstrumentPartySubID_184.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_184(1235638997);
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_184);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_184.insert(UnderlyingInstrumentPartySubIDType_184.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_184);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_2);
      }
      noMDEntries_0_0.addGroup(noUnderlyings_0_1_0);
    }
    // YieldData
    multiset<string> YieldData_7;
    FIX::Yield Yield_7;
    Yield_7.setString("91.070000");
    noMDEntries_0_0.set(Yield_7);
    YieldData_7.insert(Yield_7.getString());
    FIX::YieldCalcDate YieldCalcDate_7("LOCALMKTDATE_531625544");
    noMDEntries_0_0.set(YieldCalcDate_7);
    YieldData_7.insert(YieldCalcDate_7.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_7("LOCALMKTDATE_1698957939");
    noMDEntries_0_0.set(YieldRedemptionDate_7);
    YieldData_7.insert(YieldRedemptionDate_7.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_7;
    YieldRedemptionPrice_7.setString("13457885");
    noMDEntries_0_0.set(YieldRedemptionPrice_7);
    YieldData_7.insert(YieldRedemptionPrice_7.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_7(588956684);
    noMDEntries_0_0.set(YieldRedemptionPriceType_7);
    YieldData_7.insert(YieldRedemptionPriceType_7.getString());
    FIX::YieldType YieldType_7("STRING_VALUE1_32");
    noMDEntries_0_0.set(YieldType_7);
    YieldData_7.insert(YieldType_7.getString());
    all_values.push_back(YieldData_7);
    all_compo_names.insert("YieldData");

    msg.addGroup(noMDEntries_0_0);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::MarketDataIncrementalRefresh::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_2;
    FIX::RoutingID RoutingID_2("STRING_980254574");
    noRoutingIDs_0_0.set(RoutingID_2);
    RoutingGrp_NoRoutingIDs_2.insert(RoutingID_2.getString());
    FIX::RoutingType RoutingType_2(3);
    noRoutingIDs_0_0.set(RoutingType_2);
    RoutingGrp_NoRoutingIDs_2.insert(RoutingType_2.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_2);
    all_compo_names.insert("RoutingGrp.NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_0);
  }
  {
    FIX50SP2::MarketDataIncrementalRefresh::NoRoutingIDs noRoutingIDs_0_1;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_3;
    FIX::RoutingID RoutingID_3("STRING_801373964");
    noRoutingIDs_0_1.set(RoutingID_3);
    RoutingGrp_NoRoutingIDs_3.insert(RoutingID_3.getString());
    FIX::RoutingType RoutingType_3(3);
    noRoutingIDs_0_1.set(RoutingType_3);
    RoutingGrp_NoRoutingIDs_3.insert(RoutingType_3.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_3);
    all_compo_names.insert("RoutingGrp.NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_1);
  }
  {
    FIX50SP2::MarketDataIncrementalRefresh::NoRoutingIDs noRoutingIDs_0_2;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_4;
    FIX::RoutingID RoutingID_4("STRING_633865044");
    noRoutingIDs_0_2.set(RoutingID_4);
    RoutingGrp_NoRoutingIDs_4.insert(RoutingID_4.getString());
    FIX::RoutingType RoutingType_4(3);
    noRoutingIDs_0_2.set(RoutingType_4);
    RoutingGrp_NoRoutingIDs_4.insert(RoutingType_4.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_4);
    all_compo_names.insert("RoutingGrp.NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_2);
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
