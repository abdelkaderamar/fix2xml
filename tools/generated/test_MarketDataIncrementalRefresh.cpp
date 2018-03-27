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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MarketDataIncrementalRefresh msg;

  list<multiset<string>> all_values;
  multiset<string> MarketDataIncrementalRefresh_0;
  FIX::ApplQueueDepth ApplQueueDepth_0(29705668);
  msg.set(ApplQueueDepth_0);
  MarketDataIncrementalRefresh_0.insert(ApplQueueDepth_0.getString());
  FIX::ApplQueueResolution ApplQueueResolution_0(0);
  msg.set(ApplQueueResolution_0);
  MarketDataIncrementalRefresh_0.insert(ApplQueueResolution_0.getString());
  FIX::MDBookType MDBookType_20(2);
  msg.set(MDBookType_20);
  MarketDataIncrementalRefresh_0.insert(MDBookType_20.getString());
  FIX::MDFeedType MDFeedType_20("STRING_158158955");
  msg.set(MDFeedType_20);
  MarketDataIncrementalRefresh_0.insert(MDFeedType_20.getString());
  FIX::MDReqID MDReqID_0("STRING_2055737484");
  msg.set(MDReqID_0);
  MarketDataIncrementalRefresh_0.insert(MDReqID_0.getString());
  FIX::TradeDate TradeDate_16("LOCALMKTDATE_1412898814");
  msg.set(TradeDate_16);
  MarketDataIncrementalRefresh_0.insert(TradeDate_16.getString());
  all_values.push_back(MarketDataIncrementalRefresh_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_6;
  FIX::ApplID ApplID_6("STRING_824139145");
  msg.set(ApplID_6);
  ApplicationSequenceControl_6.insert(ApplID_6.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_6(1171637385);
  msg.set(ApplLastSeqNum_6);
  ApplicationSequenceControl_6.insert(ApplLastSeqNum_6.getString());
  FIX::ApplResendFlag ApplResendFlag_6(false);
  msg.set(ApplResendFlag_6);
  ApplicationSequenceControl_6.insert(ApplResendFlag_6.getString());
  FIX::ApplSeqNum ApplSeqNum_6(564103775);
  msg.set(ApplSeqNum_6);
  ApplicationSequenceControl_6.insert(ApplSeqNum_6.getString());
  all_values.push_back(ApplicationSequenceControl_6);

  // MDIncGrp
  // Group MDIncGrp.NoMDEntries
  {
    FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries noMDEntries_0_0;
    // MDIncGrp.NoMDEntries
    multiset<string> MDIncGrp_NoMDEntries_0;
    FIX::CorporateAction CorporateAction_4("MULTIPLECHARVALUE_T");
    noMDEntries_0_0.set(CorporateAction_4);
    MDIncGrp_NoMDEntries_0.insert(CorporateAction_4.getString());
    FIX::Currency Currency_23("GBP");
    noMDEntries_0_0.set(Currency_23);
    MDIncGrp_NoMDEntries_0.insert(Currency_23.getString());
    FIX::DealingCapacity DealingCapacity_0('R');
    noMDEntries_0_0.set(DealingCapacity_0);
    MDIncGrp_NoMDEntries_0.insert(DealingCapacity_0.getString());
    FIX::DeleteReason DeleteReason_0('0');
    noMDEntries_0_0.set(DeleteReason_0);
    MDIncGrp_NoMDEntries_0.insert(DeleteReason_0.getString());
    FIX::DeskID DeskID_0("STRING_2112095648");
    noMDEntries_0_0.set(DeskID_0);
    MDIncGrp_NoMDEntries_0.insert(DeskID_0.getString());
    FIX::EncodedText EncodedText_44("DATA_1579360532");
    noMDEntries_0_0.set(EncodedText_44);
    MDIncGrp_NoMDEntries_0.insert(EncodedText_44.getString());
    FIX::EncodedTextLen EncodedTextLen_44(815438746);
    noMDEntries_0_0.set(EncodedTextLen_44);
    MDIncGrp_NoMDEntries_0.insert(EncodedTextLen_44.getString());
    FIX::ExecInst ExecInst_2("MULTIPLECHARVALUE_T");
    noMDEntries_0_0.set(ExecInst_2);
    MDIncGrp_NoMDEntries_0.insert(ExecInst_2.getString());
    FIX::ExpireDate ExpireDate_3("LOCALMKTDATE_914606707");
    noMDEntries_0_0.set(ExpireDate_3);
    MDIncGrp_NoMDEntries_0.insert(ExpireDate_3.getString());
    FIX::ExpireTime ExpireTime_4(FIX::UTCTIMESTAMP(16, 57, 32, 6, 112014));
    noMDEntries_0_0.set(ExpireTime_4);
    MDIncGrp_NoMDEntries_0.insert(ExpireTime_4.getString());
    FIX::FinancialStatus FinancialStatus_2("MULTIPLECHARVALUE_3");
    noMDEntries_0_0.set(FinancialStatus_2);
    MDIncGrp_NoMDEntries_0.insert(FinancialStatus_2.getString());
    FIX::FirstPx FirstPx_0;
    FirstPx_0.setString("6877210");
    noMDEntries_0_0.set(FirstPx_0);
    MDIncGrp_NoMDEntries_0.insert(FirstPx_0.getString());
    FIX::HaltReasonInt HaltReasonInt_0(5);
    noMDEntries_0_0.set(HaltReasonInt_0);
    FIX::HighPx HighPx_0;
    HighPx_0.setString("9533378");
    noMDEntries_0_0.set(HighPx_0);
    MDIncGrp_NoMDEntries_0.insert(HighPx_0.getString());
    FIX::LastPx LastPx_11;
    LastPx_11.setString("20784153");
    noMDEntries_0_0.set(LastPx_11);
    MDIncGrp_NoMDEntries_0.insert(LastPx_11.getString());
    FIX::LocationID LocationID_0("STRING_1968502242");
    noMDEntries_0_0.set(LocationID_0);
    MDIncGrp_NoMDEntries_0.insert(LocationID_0.getString());
    FIX::LotType LotType_10('2');
    noMDEntries_0_0.set(LotType_10);
    MDIncGrp_NoMDEntries_0.insert(LotType_10.getString());
    FIX::LowPx LowPx_0;
    LowPx_0.setString("19866691");
    noMDEntries_0_0.set(LowPx_0);
    MDIncGrp_NoMDEntries_0.insert(LowPx_0.getString());
    FIX::MDEntryBuyer MDEntryBuyer_0("STRING_1233917408");
    noMDEntries_0_0.set(MDEntryBuyer_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryBuyer_0.getString());
    FIX::MDEntryDate MDEntryDate_0(FIX::UTCDATEONLY(23, 8,2010));
    noMDEntries_0_0.set(MDEntryDate_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryDate_0.getString());
    FIX::MDEntryForwardPoints MDEntryForwardPoints_0;
    MDEntryForwardPoints_0.setString("2263496");
    noMDEntries_0_0.set(MDEntryForwardPoints_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryForwardPoints_0.getString());
    FIX::MDEntryID MDEntryID_0("STRING_2040241244");
    noMDEntries_0_0.set(MDEntryID_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryID_0.getString());
    FIX::MDEntryOriginator MDEntryOriginator_0("STRING_661770508");
    noMDEntries_0_0.set(MDEntryOriginator_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryOriginator_0.getString());
    FIX::MDEntryPositionNo MDEntryPositionNo_0(940695568);
    noMDEntries_0_0.set(MDEntryPositionNo_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryPositionNo_0.getString());
    FIX::MDEntryPx MDEntryPx_0;
    MDEntryPx_0.setString("13325630");
    noMDEntries_0_0.set(MDEntryPx_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryPx_0.getString());
    FIX::MDEntryRefID MDEntryRefID_0("STRING_180755322");
    noMDEntries_0_0.set(MDEntryRefID_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryRefID_0.getString());
    FIX::MDEntrySeller MDEntrySeller_0("STRING_905307568");
    noMDEntries_0_0.set(MDEntrySeller_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntrySeller_0.getString());
    FIX::MDEntrySize MDEntrySize_0;
    MDEntrySize_0.setString("7644398");
    noMDEntries_0_0.set(MDEntrySize_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntrySize_0.getString());
    FIX::MDEntrySpotRate MDEntrySpotRate_0;
    MDEntrySpotRate_0.setString("9961940");
    noMDEntries_0_0.set(MDEntrySpotRate_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntrySpotRate_0.getString());
    FIX::MDEntryTime MDEntryTime_0(FIX::UTCTIMEONLY(6, 29, 10));
    noMDEntries_0_0.set(MDEntryTime_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryTime_0.getString());
    FIX::MDEntryType MDEntryType_0('R');
    noMDEntries_0_0.set(MDEntryType_0);
    MDIncGrp_NoMDEntries_0.insert(MDEntryType_0.getString());
    FIX::MDMkt MDMkt_0("EXCHANGE_2029903082");
    noMDEntries_0_0.set(MDMkt_0);
    MDIncGrp_NoMDEntries_0.insert(MDMkt_0.getString());
    FIX::MDOriginType MDOriginType_0(1);
    noMDEntries_0_0.set(MDOriginType_0);
    MDIncGrp_NoMDEntries_0.insert(MDOriginType_0.getString());
    FIX::MDPriceLevel MDPriceLevel_0(2067963433);
    noMDEntries_0_0.set(MDPriceLevel_0);
    MDIncGrp_NoMDEntries_0.insert(MDPriceLevel_0.getString());
    FIX::MDQuoteType MDQuoteType_0(4);
    noMDEntries_0_0.set(MDQuoteType_0);
    MDIncGrp_NoMDEntries_0.insert(MDQuoteType_0.getString());
    FIX::MDStreamID MDStreamID_0("STRING_1898904282");
    noMDEntries_0_0.set(MDStreamID_0);
    MDIncGrp_NoMDEntries_0.insert(MDStreamID_0.getString());
    FIX::MDSubBookType MDSubBookType_0(608200814);
    noMDEntries_0_0.set(MDSubBookType_0);
    MDIncGrp_NoMDEntries_0.insert(MDSubBookType_0.getString());
    FIX::MDUpdateAction MDUpdateAction_0('5');
    noMDEntries_0_0.set(MDUpdateAction_0);
    MDIncGrp_NoMDEntries_0.insert(MDUpdateAction_0.getString());
    FIX::MarketDepth MarketDepth_20(704758457);
    noMDEntries_0_0.set(MarketDepth_20);
    MDIncGrp_NoMDEntries_0.insert(MarketDepth_20.getString());
    FIX::MatchType MatchType_29("STRING_2");
    noMDEntries_0_0.set(MatchType_29);
    MDIncGrp_NoMDEntries_0.insert(MatchType_29.getString());
    FIX::MinQty MinQty_2;
    MinQty_2.setString("9594664");
    noMDEntries_0_0.set(MinQty_2);
    MDIncGrp_NoMDEntries_0.insert(MinQty_2.getString());
    FIX::NetChgPrevDay NetChgPrevDay_0;
    NetChgPrevDay_0.setString("18162552");
    noMDEntries_0_0.set(NetChgPrevDay_0);
    MDIncGrp_NoMDEntries_0.insert(NetChgPrevDay_0.getString());
    FIX::NumberOfOrders NumberOfOrders_0(378318004);
    noMDEntries_0_0.set(NumberOfOrders_0);
    MDIncGrp_NoMDEntries_0.insert(NumberOfOrders_0.getString());
    FIX::OpenCloseSettlFlag OpenCloseSettlFlag_0("MULTIPLECHARVALUE_3");
    noMDEntries_0_0.set(OpenCloseSettlFlag_0);
    MDIncGrp_NoMDEntries_0.insert(OpenCloseSettlFlag_0.getString());
    FIX::OrdType OrdType_26('M');
    noMDEntries_0_0.set(OrdType_26);
    MDIncGrp_NoMDEntries_0.insert(OrdType_26.getString());
    FIX::OrderCapacity OrderCapacity_7('W');
    noMDEntries_0_0.set(OrderCapacity_7);
    MDIncGrp_NoMDEntries_0.insert(OrderCapacity_7.getString());
    FIX::OrderID OrderID_22("STRING_1529927069");
    noMDEntries_0_0.set(OrderID_22);
    MDIncGrp_NoMDEntries_0.insert(OrderID_22.getString());
    FIX::PriceDelta PriceDelta_1;
    PriceDelta_1.setString("19566635");
    noMDEntries_0_0.set(PriceDelta_1);
    MDIncGrp_NoMDEntries_0.insert(PriceDelta_1.getString());
    FIX::PriceType PriceType_19(15);
    noMDEntries_0_0.set(PriceType_19);
    MDIncGrp_NoMDEntries_0.insert(PriceType_19.getString());
    FIX::QuoteCondition QuoteCondition_0("MULTIPLESTRINGVALUE_F");
    noMDEntries_0_0.set(QuoteCondition_0);
    MDIncGrp_NoMDEntries_0.insert(QuoteCondition_0.getString());
    FIX::QuoteEntryID QuoteEntryID_0("STRING_470950420");
    noMDEntries_0_0.set(QuoteEntryID_0);
    MDIncGrp_NoMDEntries_0.insert(QuoteEntryID_0.getString());
    FIX::RptSeq RptSeq_1(408702484);
    noMDEntries_0_0.set(RptSeq_1);
    MDIncGrp_NoMDEntries_0.insert(RptSeq_1.getString());
    FIX::Scope Scope_0("MULTIPLECHARVALUE_3");
    noMDEntries_0_0.set(Scope_0);
    MDIncGrp_NoMDEntries_0.insert(Scope_0.getString());
    FIX::SecondaryOrderID SecondaryOrderID_18("STRING_651705742");
    noMDEntries_0_0.set(SecondaryOrderID_18);
    MDIncGrp_NoMDEntries_0.insert(SecondaryOrderID_18.getString());
    FIX::SecurityTradingStatus SecurityTradingStatus_0(3);
    noMDEntries_0_0.set(SecurityTradingStatus_0);
    MDIncGrp_NoMDEntries_0.insert(SecurityTradingStatus_0.getString());
    FIX::SellerDays SellerDays_0(1372203932);
    noMDEntries_0_0.set(SellerDays_0);
    MDIncGrp_NoMDEntries_0.insert(SellerDays_0.getString());
    FIX::SettlCurrency SettlCurrency_10("GBP");
    noMDEntries_0_0.set(SettlCurrency_10);
    MDIncGrp_NoMDEntries_0.insert(SettlCurrency_10.getString());
    FIX::SettlDate SettlDate_15("LOCALMKTDATE_903766890");
    noMDEntries_0_0.set(SettlDate_15);
    MDIncGrp_NoMDEntries_0.insert(SettlDate_15.getString());
    FIX::SettlType SettlType_9("STRING_1");
    noMDEntries_0_0.set(SettlType_9);
    MDIncGrp_NoMDEntries_0.insert(SettlType_9.getString());
    FIX::Text Text_44("STRING_1608959080");
    noMDEntries_0_0.set(Text_44);
    MDIncGrp_NoMDEntries_0.insert(Text_44.getString());
    FIX::TickDirection TickDirection_0('2');
    noMDEntries_0_0.set(TickDirection_0);
    MDIncGrp_NoMDEntries_0.insert(TickDirection_0.getString());
    FIX::TimeInForce TimeInForce_28('7');
    noMDEntries_0_0.set(TimeInForce_28);
    MDIncGrp_NoMDEntries_0.insert(TimeInForce_28.getString());
    FIX::TradeCondition TradeCondition_0("MULTIPLESTRINGVALUE_U");
    noMDEntries_0_0.set(TradeCondition_0);
    MDIncGrp_NoMDEntries_0.insert(TradeCondition_0.getString());
    FIX::TradeID TradeID_8("STRING_686682151");
    noMDEntries_0_0.set(TradeID_8);
    MDIncGrp_NoMDEntries_0.insert(TradeID_8.getString());
    FIX::TradeVolume TradeVolume_0;
    TradeVolume_0.setString("15120208");
    noMDEntries_0_0.set(TradeVolume_0);
    MDIncGrp_NoMDEntries_0.insert(TradeVolume_0.getString());
    FIX::TradingSessionID TradingSessionID_26("STRING_6");
    noMDEntries_0_0.set(TradingSessionID_26);
    MDIncGrp_NoMDEntries_0.insert(TradingSessionID_26.getString());
    FIX::TradingSessionSubID TradingSessionSubID_26("STRING_6");
    noMDEntries_0_0.set(TradingSessionSubID_26);
    MDIncGrp_NoMDEntries_0.insert(TradingSessionSubID_26.getString());
    FIX::TransBkdTime TransBkdTime_2(FIX::UTCTIMESTAMP(4, 16, 28, 11, 22002));
    noMDEntries_0_0.set(TransBkdTime_2);
    MDIncGrp_NoMDEntries_0.insert(TransBkdTime_2.getString());
    FIX::TransactTime TransactTime_23(FIX::UTCTIMESTAMP(12, 59, 40, 24, 92006));
    noMDEntries_0_0.set(TransactTime_23);
    MDIncGrp_NoMDEntries_0.insert(TransactTime_23.getString());
    FIX::TrdType TrdType_3(24);
    noMDEntries_0_0.set(TrdType_3);
    MDIncGrp_NoMDEntries_0.insert(TrdType_3.getString());
    all_values.push_back(MDIncGrp_NoMDEntries_0);

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_47;
      FIX::EncodedLegIssuer EncodedLegIssuer_47("DATA_950458175");
      noLegs_0_1_0.set(EncodedLegIssuer_47);
      InstrumentLeg_47.insert(EncodedLegIssuer_47.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_47(497226520);
      noLegs_0_1_0.set(EncodedLegIssuerLen_47);
      InstrumentLeg_47.insert(EncodedLegIssuerLen_47.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_47("DATA_2145964200");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_47);
      InstrumentLeg_47.insert(EncodedLegSecurityDesc_47.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_47(450874338);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_47);
      InstrumentLeg_47.insert(EncodedLegSecurityDescLen_47.getString());
      FIX::LegCFICode LegCFICode_47("STRING_185472491");
      noLegs_0_1_0.set(LegCFICode_47);
      InstrumentLeg_47.insert(LegCFICode_47.getString());
      FIX::LegContractMultiplier LegContractMultiplier_47;
      LegContractMultiplier_47.setString("9022474");
      noLegs_0_1_0.set(LegContractMultiplier_47);
      InstrumentLeg_47.insert(LegContractMultiplier_47.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_47(654375691);
      noLegs_0_1_0.set(LegContractMultiplierUnit_47);
      InstrumentLeg_47.insert(LegContractMultiplierUnit_47.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_47("MONTHYEAR_1794431571");
      noLegs_0_1_0.set(LegContractSettlMonth_47);
      InstrumentLeg_47.insert(LegContractSettlMonth_47.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_47("COUNTRY_1668449809");
      noLegs_0_1_0.set(LegCountryOfIssue_47);
      InstrumentLeg_47.insert(LegCountryOfIssue_47.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_47("LOCALMKTDATE_740296478");
      noLegs_0_1_0.set(LegCouponPaymentDate_47);
      InstrumentLeg_47.insert(LegCouponPaymentDate_47.getString());
      FIX::LegCouponRate LegCouponRate_47;
      LegCouponRate_47.setString("54.840000");
      noLegs_0_1_0.set(LegCouponRate_47);
      InstrumentLeg_47.insert(LegCouponRate_47.getString());
      FIX::LegCreditRating LegCreditRating_47("STRING_207648312");
      noLegs_0_1_0.set(LegCreditRating_47);
      InstrumentLeg_47.insert(LegCreditRating_47.getString());
      FIX::LegCurrency LegCurrency_47("GBP");
      noLegs_0_1_0.set(LegCurrency_47);
      InstrumentLeg_47.insert(LegCurrency_47.getString());
      FIX::LegDatedDate LegDatedDate_47("LOCALMKTDATE_1502531278");
      noLegs_0_1_0.set(LegDatedDate_47);
      InstrumentLeg_47.insert(LegDatedDate_47.getString());
      FIX::LegExerciseStyle LegExerciseStyle_47(607818701);
      noLegs_0_1_0.set(LegExerciseStyle_47);
      InstrumentLeg_47.insert(LegExerciseStyle_47.getString());
      FIX::LegFactor LegFactor_47;
      LegFactor_47.setString("11647903");
      noLegs_0_1_0.set(LegFactor_47);
      InstrumentLeg_47.insert(LegFactor_47.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_47(1189063086);
      noLegs_0_1_0.set(LegFlowScheduleType_47);
      InstrumentLeg_47.insert(LegFlowScheduleType_47.getString());
      FIX::LegInstrRegistry LegInstrRegistry_47("STRING_2070270249");
      noLegs_0_1_0.set(LegInstrRegistry_47);
      InstrumentLeg_47.insert(LegInstrRegistry_47.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_47("LOCALMKTDATE_1726488571");
      noLegs_0_1_0.set(LegInterestAccrualDate_47);
      InstrumentLeg_47.insert(LegInterestAccrualDate_47.getString());
      FIX::LegIssueDate LegIssueDate_47("LOCALMKTDATE_1253912899");
      noLegs_0_1_0.set(LegIssueDate_47);
      InstrumentLeg_47.insert(LegIssueDate_47.getString());
      FIX::LegIssuer LegIssuer_47("STRING_1431138399");
      noLegs_0_1_0.set(LegIssuer_47);
      InstrumentLeg_47.insert(LegIssuer_47.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_47("STRING_1745110672");
      noLegs_0_1_0.set(LegLocaleOfIssue_47);
      InstrumentLeg_47.insert(LegLocaleOfIssue_47.getString());
      FIX::LegMaturityDate LegMaturityDate_47("LOCALMKTDATE_560419968");
      noLegs_0_1_0.set(LegMaturityDate_47);
      InstrumentLeg_47.insert(LegMaturityDate_47.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_47("MONTHYEAR_174449970");
      noLegs_0_1_0.set(LegMaturityMonthYear_47);
      InstrumentLeg_47.insert(LegMaturityMonthYear_47.getString());
      FIX::LegMaturityTime LegMaturityTime_47("TZTIMEONLY_1572912684");
      noLegs_0_1_0.set(LegMaturityTime_47);
      InstrumentLeg_47.insert(LegMaturityTime_47.getString());
      FIX::LegOptAttribute LegOptAttribute_47('1');
      noLegs_0_1_0.set(LegOptAttribute_47);
      InstrumentLeg_47.insert(LegOptAttribute_47.getString());
      FIX::LegOptionRatio LegOptionRatio_47;
      LegOptionRatio_47.setString("3404462");
      noLegs_0_1_0.set(LegOptionRatio_47);
      InstrumentLeg_47.insert(LegOptionRatio_47.getString());
      FIX::LegPool LegPool_47("STRING_1871665117");
      noLegs_0_1_0.set(LegPool_47);
      InstrumentLeg_47.insert(LegPool_47.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_47("STRING_665634068");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_47);
      InstrumentLeg_47.insert(LegPriceUnitOfMeasure_47.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_47;
      LegPriceUnitOfMeasureQty_47.setString("11142064");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_47);
      InstrumentLeg_47.insert(LegPriceUnitOfMeasureQty_47.getString());
      FIX::LegProduct LegProduct_47(674639644);
      noLegs_0_1_0.set(LegProduct_47);
      InstrumentLeg_47.insert(LegProduct_47.getString());
      FIX::LegPutOrCall LegPutOrCall_47(1162860588);
      noLegs_0_1_0.set(LegPutOrCall_47);
      InstrumentLeg_47.insert(LegPutOrCall_47.getString());
      FIX::LegRatioQty LegRatioQty_47;
      LegRatioQty_47.setString("11126870");
      noLegs_0_1_0.set(LegRatioQty_47);
      InstrumentLeg_47.insert(LegRatioQty_47.getString());
      FIX::LegRedemptionDate LegRedemptionDate_47("LOCALMKTDATE_1125513982");
      noLegs_0_1_0.set(LegRedemptionDate_47);
      InstrumentLeg_47.insert(LegRedemptionDate_47.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_47("STRING_1348333079");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_47);
      InstrumentLeg_47.insert(LegRepoCollateralSecurityType_47.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_47;
      LegRepurchaseRate_47.setString("44.700000");
      noLegs_0_1_0.set(LegRepurchaseRate_47);
      InstrumentLeg_47.insert(LegRepurchaseRate_47.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_47(1779889674);
      noLegs_0_1_0.set(LegRepurchaseTerm_47);
      InstrumentLeg_47.insert(LegRepurchaseTerm_47.getString());
      FIX::LegSecurityDesc LegSecurityDesc_47("STRING_995281003");
      noLegs_0_1_0.set(LegSecurityDesc_47);
      InstrumentLeg_47.insert(LegSecurityDesc_47.getString());
      FIX::LegSecurityExchange LegSecurityExchange_47("EXCHANGE_1535900631");
      noLegs_0_1_0.set(LegSecurityExchange_47);
      InstrumentLeg_47.insert(LegSecurityExchange_47.getString());
      FIX::LegSecurityID LegSecurityID_47("STRING_372702504");
      noLegs_0_1_0.set(LegSecurityID_47);
      InstrumentLeg_47.insert(LegSecurityID_47.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_47("STRING_1078976487");
      noLegs_0_1_0.set(LegSecurityIDSource_47);
      InstrumentLeg_47.insert(LegSecurityIDSource_47.getString());
      FIX::LegSecuritySubType LegSecuritySubType_47("STRING_1743548944");
      noLegs_0_1_0.set(LegSecuritySubType_47);
      InstrumentLeg_47.insert(LegSecuritySubType_47.getString());
      FIX::LegSecurityType LegSecurityType_47("STRING_477536146");
      noLegs_0_1_0.set(LegSecurityType_47);
      InstrumentLeg_47.insert(LegSecurityType_47.getString());
      FIX::LegSide LegSide_47('1');
      noLegs_0_1_0.set(LegSide_47);
      InstrumentLeg_47.insert(LegSide_47.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_47("STRING_1098596574");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_47);
      InstrumentLeg_47.insert(LegStateOrProvinceOfIssue_47.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_47("JPY");
      noLegs_0_1_0.set(LegStrikeCurrency_47);
      InstrumentLeg_47.insert(LegStrikeCurrency_47.getString());
      FIX::LegStrikePrice LegStrikePrice_47;
      LegStrikePrice_47.setString("1401760");
      noLegs_0_1_0.set(LegStrikePrice_47);
      InstrumentLeg_47.insert(LegStrikePrice_47.getString());
      FIX::LegSymbol LegSymbol_47("STRING_1008141449");
      noLegs_0_1_0.set(LegSymbol_47);
      InstrumentLeg_47.insert(LegSymbol_47.getString());
      FIX::LegSymbolSfx LegSymbolSfx_47("STRING_2094635423");
      noLegs_0_1_0.set(LegSymbolSfx_47);
      InstrumentLeg_47.insert(LegSymbolSfx_47.getString());
      FIX::LegTimeUnit LegTimeUnit_47("STRING_1394088912");
      noLegs_0_1_0.set(LegTimeUnit_47);
      InstrumentLeg_47.insert(LegTimeUnit_47.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_47("STRING_291796200");
      noLegs_0_1_0.set(LegUnitOfMeasure_47);
      InstrumentLeg_47.insert(LegUnitOfMeasure_47.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_47;
      LegUnitOfMeasureQty_47.setString("16922624");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_47);
      InstrumentLeg_47.insert(LegUnitOfMeasureQty_47.getString());
      all_values.push_back(InstrumentLeg_47);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_86;
        FIX::LegSecurityAltID LegSecurityAltID_86("STRING_466246171");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_86);
        LegSecAltIDGrp_NoLegSecurityAltID_86.insert(LegSecurityAltID_86.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_86("STRING_1117691484");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_86);
        LegSecAltIDGrp_NoLegSecurityAltID_86.insert(LegSecurityAltIDSource_86.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_86);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      noMDEntries_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_48;
      FIX::EncodedLegIssuer EncodedLegIssuer_48("DATA_1289442832");
      noLegs_0_1_1.set(EncodedLegIssuer_48);
      InstrumentLeg_48.insert(EncodedLegIssuer_48.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_48(806692377);
      noLegs_0_1_1.set(EncodedLegIssuerLen_48);
      InstrumentLeg_48.insert(EncodedLegIssuerLen_48.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_48("DATA_841872953");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_48);
      InstrumentLeg_48.insert(EncodedLegSecurityDesc_48.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_48(1955076900);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_48);
      InstrumentLeg_48.insert(EncodedLegSecurityDescLen_48.getString());
      FIX::LegCFICode LegCFICode_48("STRING_1920898852");
      noLegs_0_1_1.set(LegCFICode_48);
      InstrumentLeg_48.insert(LegCFICode_48.getString());
      FIX::LegContractMultiplier LegContractMultiplier_48;
      LegContractMultiplier_48.setString("15165125");
      noLegs_0_1_1.set(LegContractMultiplier_48);
      InstrumentLeg_48.insert(LegContractMultiplier_48.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_48(970453840);
      noLegs_0_1_1.set(LegContractMultiplierUnit_48);
      InstrumentLeg_48.insert(LegContractMultiplierUnit_48.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_48("MONTHYEAR_886102232");
      noLegs_0_1_1.set(LegContractSettlMonth_48);
      InstrumentLeg_48.insert(LegContractSettlMonth_48.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_48("COUNTRY_494542931");
      noLegs_0_1_1.set(LegCountryOfIssue_48);
      InstrumentLeg_48.insert(LegCountryOfIssue_48.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_48("LOCALMKTDATE_171303272");
      noLegs_0_1_1.set(LegCouponPaymentDate_48);
      InstrumentLeg_48.insert(LegCouponPaymentDate_48.getString());
      FIX::LegCouponRate LegCouponRate_48;
      LegCouponRate_48.setString("30.540000");
      noLegs_0_1_1.set(LegCouponRate_48);
      InstrumentLeg_48.insert(LegCouponRate_48.getString());
      FIX::LegCreditRating LegCreditRating_48("STRING_126948957");
      noLegs_0_1_1.set(LegCreditRating_48);
      InstrumentLeg_48.insert(LegCreditRating_48.getString());
      FIX::LegCurrency LegCurrency_48("USD");
      noLegs_0_1_1.set(LegCurrency_48);
      InstrumentLeg_48.insert(LegCurrency_48.getString());
      FIX::LegDatedDate LegDatedDate_48("LOCALMKTDATE_499651462");
      noLegs_0_1_1.set(LegDatedDate_48);
      InstrumentLeg_48.insert(LegDatedDate_48.getString());
      FIX::LegExerciseStyle LegExerciseStyle_48(98077114);
      noLegs_0_1_1.set(LegExerciseStyle_48);
      InstrumentLeg_48.insert(LegExerciseStyle_48.getString());
      FIX::LegFactor LegFactor_48;
      LegFactor_48.setString("18855189");
      noLegs_0_1_1.set(LegFactor_48);
      InstrumentLeg_48.insert(LegFactor_48.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_48(977187608);
      noLegs_0_1_1.set(LegFlowScheduleType_48);
      InstrumentLeg_48.insert(LegFlowScheduleType_48.getString());
      FIX::LegInstrRegistry LegInstrRegistry_48("STRING_1448917282");
      noLegs_0_1_1.set(LegInstrRegistry_48);
      InstrumentLeg_48.insert(LegInstrRegistry_48.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_48("LOCALMKTDATE_836631908");
      noLegs_0_1_1.set(LegInterestAccrualDate_48);
      InstrumentLeg_48.insert(LegInterestAccrualDate_48.getString());
      FIX::LegIssueDate LegIssueDate_48("LOCALMKTDATE_2062542456");
      noLegs_0_1_1.set(LegIssueDate_48);
      InstrumentLeg_48.insert(LegIssueDate_48.getString());
      FIX::LegIssuer LegIssuer_48("STRING_1817064134");
      noLegs_0_1_1.set(LegIssuer_48);
      InstrumentLeg_48.insert(LegIssuer_48.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_48("STRING_976807920");
      noLegs_0_1_1.set(LegLocaleOfIssue_48);
      InstrumentLeg_48.insert(LegLocaleOfIssue_48.getString());
      FIX::LegMaturityDate LegMaturityDate_48("LOCALMKTDATE_923200257");
      noLegs_0_1_1.set(LegMaturityDate_48);
      InstrumentLeg_48.insert(LegMaturityDate_48.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_48("MONTHYEAR_1764215909");
      noLegs_0_1_1.set(LegMaturityMonthYear_48);
      InstrumentLeg_48.insert(LegMaturityMonthYear_48.getString());
      FIX::LegMaturityTime LegMaturityTime_48("TZTIMEONLY_223413184");
      noLegs_0_1_1.set(LegMaturityTime_48);
      InstrumentLeg_48.insert(LegMaturityTime_48.getString());
      FIX::LegOptAttribute LegOptAttribute_48('1');
      noLegs_0_1_1.set(LegOptAttribute_48);
      InstrumentLeg_48.insert(LegOptAttribute_48.getString());
      FIX::LegOptionRatio LegOptionRatio_48;
      LegOptionRatio_48.setString("13089947");
      noLegs_0_1_1.set(LegOptionRatio_48);
      InstrumentLeg_48.insert(LegOptionRatio_48.getString());
      FIX::LegPool LegPool_48("STRING_30438416");
      noLegs_0_1_1.set(LegPool_48);
      InstrumentLeg_48.insert(LegPool_48.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_48("STRING_1681242628");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_48);
      InstrumentLeg_48.insert(LegPriceUnitOfMeasure_48.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_48;
      LegPriceUnitOfMeasureQty_48.setString("2792025");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_48);
      InstrumentLeg_48.insert(LegPriceUnitOfMeasureQty_48.getString());
      FIX::LegProduct LegProduct_48(1319881248);
      noLegs_0_1_1.set(LegProduct_48);
      InstrumentLeg_48.insert(LegProduct_48.getString());
      FIX::LegPutOrCall LegPutOrCall_48(340451358);
      noLegs_0_1_1.set(LegPutOrCall_48);
      InstrumentLeg_48.insert(LegPutOrCall_48.getString());
      FIX::LegRatioQty LegRatioQty_48;
      LegRatioQty_48.setString("11210754");
      noLegs_0_1_1.set(LegRatioQty_48);
      InstrumentLeg_48.insert(LegRatioQty_48.getString());
      FIX::LegRedemptionDate LegRedemptionDate_48("LOCALMKTDATE_1127474500");
      noLegs_0_1_1.set(LegRedemptionDate_48);
      InstrumentLeg_48.insert(LegRedemptionDate_48.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_48("STRING_113866562");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_48);
      InstrumentLeg_48.insert(LegRepoCollateralSecurityType_48.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_48;
      LegRepurchaseRate_48.setString("44.470000");
      noLegs_0_1_1.set(LegRepurchaseRate_48);
      InstrumentLeg_48.insert(LegRepurchaseRate_48.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_48(2097928341);
      noLegs_0_1_1.set(LegRepurchaseTerm_48);
      InstrumentLeg_48.insert(LegRepurchaseTerm_48.getString());
      FIX::LegSecurityDesc LegSecurityDesc_48("STRING_999968794");
      noLegs_0_1_1.set(LegSecurityDesc_48);
      InstrumentLeg_48.insert(LegSecurityDesc_48.getString());
      FIX::LegSecurityExchange LegSecurityExchange_48("EXCHANGE_984647378");
      noLegs_0_1_1.set(LegSecurityExchange_48);
      InstrumentLeg_48.insert(LegSecurityExchange_48.getString());
      FIX::LegSecurityID LegSecurityID_48("STRING_121747965");
      noLegs_0_1_1.set(LegSecurityID_48);
      InstrumentLeg_48.insert(LegSecurityID_48.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_48("STRING_1753521849");
      noLegs_0_1_1.set(LegSecurityIDSource_48);
      InstrumentLeg_48.insert(LegSecurityIDSource_48.getString());
      FIX::LegSecuritySubType LegSecuritySubType_48("STRING_1111596336");
      noLegs_0_1_1.set(LegSecuritySubType_48);
      InstrumentLeg_48.insert(LegSecuritySubType_48.getString());
      FIX::LegSecurityType LegSecurityType_48("STRING_1288332240");
      noLegs_0_1_1.set(LegSecurityType_48);
      InstrumentLeg_48.insert(LegSecurityType_48.getString());
      FIX::LegSide LegSide_48('1');
      noLegs_0_1_1.set(LegSide_48);
      InstrumentLeg_48.insert(LegSide_48.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_48("STRING_1611247798");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_48);
      InstrumentLeg_48.insert(LegStateOrProvinceOfIssue_48.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_48("CAN");
      noLegs_0_1_1.set(LegStrikeCurrency_48);
      InstrumentLeg_48.insert(LegStrikeCurrency_48.getString());
      FIX::LegStrikePrice LegStrikePrice_48;
      LegStrikePrice_48.setString("4409517");
      noLegs_0_1_1.set(LegStrikePrice_48);
      InstrumentLeg_48.insert(LegStrikePrice_48.getString());
      FIX::LegSymbol LegSymbol_48("STRING_687842988");
      noLegs_0_1_1.set(LegSymbol_48);
      InstrumentLeg_48.insert(LegSymbol_48.getString());
      FIX::LegSymbolSfx LegSymbolSfx_48("STRING_322675481");
      noLegs_0_1_1.set(LegSymbolSfx_48);
      InstrumentLeg_48.insert(LegSymbolSfx_48.getString());
      FIX::LegTimeUnit LegTimeUnit_48("STRING_356010566");
      noLegs_0_1_1.set(LegTimeUnit_48);
      InstrumentLeg_48.insert(LegTimeUnit_48.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_48("STRING_357423474");
      noLegs_0_1_1.set(LegUnitOfMeasure_48);
      InstrumentLeg_48.insert(LegUnitOfMeasure_48.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_48;
      LegUnitOfMeasureQty_48.setString("12994834");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_48);
      InstrumentLeg_48.insert(LegUnitOfMeasureQty_48.getString());
      all_values.push_back(InstrumentLeg_48);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_87;
        FIX::LegSecurityAltID LegSecurityAltID_87("STRING_2121639384");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_87);
        LegSecAltIDGrp_NoLegSecurityAltID_87.insert(LegSecurityAltID_87.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_87("STRING_1522896586");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_87);
        LegSecAltIDGrp_NoLegSecurityAltID_87.insert(LegSecurityAltIDSource_87.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_87);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_88;
        FIX::LegSecurityAltID LegSecurityAltID_88("STRING_346723633");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltID_88);
        LegSecAltIDGrp_NoLegSecurityAltID_88.insert(LegSecurityAltID_88.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_88("STRING_1283150445");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltIDSource_88);
        LegSecAltIDGrp_NoLegSecurityAltID_88.insert(LegSecurityAltIDSource_88.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_88);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_89;
        FIX::LegSecurityAltID LegSecurityAltID_89("STRING_1553335002");
        noLegSecurityAltID_0_1_2_2.set(LegSecurityAltID_89);
        LegSecAltIDGrp_NoLegSecurityAltID_89.insert(LegSecurityAltID_89.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_89("STRING_2027966261");
        noLegSecurityAltID_0_1_2_2.set(LegSecurityAltIDSource_89);
        LegSecAltIDGrp_NoLegSecurityAltID_89.insert(LegSecurityAltIDSource_89.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_89);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_2);
      }
      noMDEntries_0_0.addGroup(noLegs_0_1_1);
    }
    // Instrument
    multiset<string> Instrument_28;
    FIX::AttachmentPoint AttachmentPoint_28;
    AttachmentPoint_28.setString("29.900000");
    noMDEntries_0_0.set(AttachmentPoint_28);
    Instrument_28.insert(AttachmentPoint_28.getString());
    FIX::CFICode CFICode_28("STRING_725732603");
    noMDEntries_0_0.set(CFICode_28);
    Instrument_28.insert(CFICode_28.getString());
    FIX::CPProgram CPProgram_28(1);
    noMDEntries_0_0.set(CPProgram_28);
    Instrument_28.insert(CPProgram_28.getString());
    FIX::CPRegType CPRegType_28("STRING_535944840");
    noMDEntries_0_0.set(CPRegType_28);
    Instrument_28.insert(CPRegType_28.getString());
    FIX::CapPrice CapPrice_28;
    CapPrice_28.setString("18532071");
    noMDEntries_0_0.set(CapPrice_28);
    Instrument_28.insert(CapPrice_28.getString());
    FIX::ContractMultiplier ContractMultiplier_28;
    ContractMultiplier_28.setString("3348005");
    noMDEntries_0_0.set(ContractMultiplier_28);
    Instrument_28.insert(ContractMultiplier_28.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_28(0);
    noMDEntries_0_0.set(ContractMultiplierUnit_28);
    Instrument_28.insert(ContractMultiplierUnit_28.getString());
    FIX::ContractSettlMonth ContractSettlMonth_28("MONTHYEAR_1803651796");
    noMDEntries_0_0.set(ContractSettlMonth_28);
    Instrument_28.insert(ContractSettlMonth_28.getString());
    FIX::CountryOfIssue CountryOfIssue_28("COUNTRY_1334769328");
    noMDEntries_0_0.set(CountryOfIssue_28);
    Instrument_28.insert(CountryOfIssue_28.getString());
    FIX::CouponPaymentDate CouponPaymentDate_28("LOCALMKTDATE_2010696665");
    noMDEntries_0_0.set(CouponPaymentDate_28);
    Instrument_28.insert(CouponPaymentDate_28.getString());
    FIX::CouponRate CouponRate_28;
    CouponRate_28.setString("97.610000");
    noMDEntries_0_0.set(CouponRate_28);
    Instrument_28.insert(CouponRate_28.getString());
    FIX::CreditRating CreditRating_28("STRING_940807529");
    noMDEntries_0_0.set(CreditRating_28);
    Instrument_28.insert(CreditRating_28.getString());
    FIX::DatedDate DatedDate_28("LOCALMKTDATE_974809353");
    noMDEntries_0_0.set(DatedDate_28);
    Instrument_28.insert(DatedDate_28.getString());
    FIX::DetachmentPoint DetachmentPoint_28;
    DetachmentPoint_28.setString("83.530000");
    noMDEntries_0_0.set(DetachmentPoint_28);
    Instrument_28.insert(DetachmentPoint_28.getString());
    FIX::EncodedIssuer EncodedIssuer_28("DATA_688815768");
    noMDEntries_0_0.set(EncodedIssuer_28);
    Instrument_28.insert(EncodedIssuer_28.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_28(438573503);
    noMDEntries_0_0.set(EncodedIssuerLen_28);
    Instrument_28.insert(EncodedIssuerLen_28.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_28("DATA_305174060");
    noMDEntries_0_0.set(EncodedSecurityDesc_28);
    Instrument_28.insert(EncodedSecurityDesc_28.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_28(174859341);
    noMDEntries_0_0.set(EncodedSecurityDescLen_28);
    Instrument_28.insert(EncodedSecurityDescLen_28.getString());
    FIX::ExerciseStyle ExerciseStyle_28(1);
    noMDEntries_0_0.set(ExerciseStyle_28);
    Instrument_28.insert(ExerciseStyle_28.getString());
    FIX::Factor Factor_28;
    Factor_28.setString("9930170");
    noMDEntries_0_0.set(Factor_28);
    Instrument_28.insert(Factor_28.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_28(true);
    noMDEntries_0_0.set(FlexProductEligibilityIndicator_28);
    Instrument_28.insert(FlexProductEligibilityIndicator_28.getString());
    FIX::FlexibleIndicator FlexibleIndicator_28(true);
    noMDEntries_0_0.set(FlexibleIndicator_28);
    Instrument_28.insert(FlexibleIndicator_28.getString());
    FIX::FloorPrice FloorPrice_28;
    FloorPrice_28.setString("13504405");
    noMDEntries_0_0.set(FloorPrice_28);
    Instrument_28.insert(FloorPrice_28.getString());
    FIX::FlowScheduleType FlowScheduleType_28(4);
    noMDEntries_0_0.set(FlowScheduleType_28);
    Instrument_28.insert(FlowScheduleType_28.getString());
    FIX::InstrRegistry InstrRegistry_28("STRING_367263004");
    noMDEntries_0_0.set(InstrRegistry_28);
    Instrument_28.insert(InstrRegistry_28.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_28('1');
    noMDEntries_0_0.set(InstrmtAssignmentMethod_28);
    Instrument_28.insert(InstrmtAssignmentMethod_28.getString());
    FIX::InterestAccrualDate InterestAccrualDate_28("LOCALMKTDATE_1172431162");
    noMDEntries_0_0.set(InterestAccrualDate_28);
    Instrument_28.insert(InterestAccrualDate_28.getString());
    FIX::IssueDate IssueDate_28("LOCALMKTDATE_713986637");
    noMDEntries_0_0.set(IssueDate_28);
    Instrument_28.insert(IssueDate_28.getString());
    FIX::Issuer Issuer_28("STRING_460263056");
    noMDEntries_0_0.set(Issuer_28);
    Instrument_28.insert(Issuer_28.getString());
    FIX::ListMethod ListMethod_28(0);
    noMDEntries_0_0.set(ListMethod_28);
    Instrument_28.insert(ListMethod_28.getString());
    FIX::LocaleOfIssue LocaleOfIssue_28("STRING_594469250");
    noMDEntries_0_0.set(LocaleOfIssue_28);
    Instrument_28.insert(LocaleOfIssue_28.getString());
    FIX::MaturityDate MaturityDate_28("LOCALMKTDATE_2022616046");
    noMDEntries_0_0.set(MaturityDate_28);
    Instrument_28.insert(MaturityDate_28.getString());
    FIX::MaturityMonthYear MaturityMonthYear_28("MONTHYEAR_1304015119");
    noMDEntries_0_0.set(MaturityMonthYear_28);
    Instrument_28.insert(MaturityMonthYear_28.getString());
    FIX::MaturityTime MaturityTime_28("TZTIMEONLY_815403222");
    noMDEntries_0_0.set(MaturityTime_28);
    Instrument_28.insert(MaturityTime_28.getString());
    FIX::MinPriceIncrement MinPriceIncrement_28;
    MinPriceIncrement_28.setString("4110772");
    noMDEntries_0_0.set(MinPriceIncrement_28);
    Instrument_28.insert(MinPriceIncrement_28.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_28;
    MinPriceIncrementAmount_28.setString("10097385");
    noMDEntries_0_0.set(MinPriceIncrementAmount_28);
    Instrument_28.insert(MinPriceIncrementAmount_28.getString());
    FIX::NTPositionLimit NTPositionLimit_28(1150203756);
    noMDEntries_0_0.set(NTPositionLimit_28);
    Instrument_28.insert(NTPositionLimit_28.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_28;
    NotionalPercentageOutstanding_28.setString("65.250000");
    noMDEntries_0_0.set(NotionalPercentageOutstanding_28);
    Instrument_28.insert(NotionalPercentageOutstanding_28.getString());
    FIX::OptAttribute OptAttribute_28('6');
    noMDEntries_0_0.set(OptAttribute_28);
    Instrument_28.insert(OptAttribute_28.getString());
    FIX::OptPayoutAmount OptPayoutAmount_28;
    OptPayoutAmount_28.setString("3374894");
    noMDEntries_0_0.set(OptPayoutAmount_28);
    Instrument_28.insert(OptPayoutAmount_28.getString());
    FIX::OptPayoutType OptPayoutType_28(1);
    noMDEntries_0_0.set(OptPayoutType_28);
    Instrument_28.insert(OptPayoutType_28.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_28;
    OriginalNotionalPercentageOutstanding_28.setString("28.370000");
    noMDEntries_0_0.set(OriginalNotionalPercentageOutstanding_28);
    Instrument_28.insert(OriginalNotionalPercentageOutstanding_28.getString());
    FIX::Pool Pool_28("STRING_1278296966");
    noMDEntries_0_0.set(Pool_28);
    Instrument_28.insert(Pool_28.getString());
    FIX::PositionLimit PositionLimit_28(127665248);
    noMDEntries_0_0.set(PositionLimit_28);
    Instrument_28.insert(PositionLimit_28.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_28("STRING_INT");
    noMDEntries_0_0.set(PriceQuoteMethod_28);
    Instrument_28.insert(PriceQuoteMethod_28.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_28("STRING_1967112734");
    noMDEntries_0_0.set(PriceUnitOfMeasure_28);
    Instrument_28.insert(PriceUnitOfMeasure_28.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_28;
    PriceUnitOfMeasureQty_28.setString("5662387");
    noMDEntries_0_0.set(PriceUnitOfMeasureQty_28);
    Instrument_28.insert(PriceUnitOfMeasureQty_28.getString());
    FIX::Product Product_30(1);
    noMDEntries_0_0.set(Product_30);
    Instrument_28.insert(Product_30.getString());
    FIX::ProductComplex ProductComplex_28("STRING_2141972076");
    noMDEntries_0_0.set(ProductComplex_28);
    Instrument_28.insert(ProductComplex_28.getString());
    FIX::PutOrCall PutOrCall_28(1);
    noMDEntries_0_0.set(PutOrCall_28);
    Instrument_28.insert(PutOrCall_28.getString());
    FIX::RedemptionDate RedemptionDate_28("LOCALMKTDATE_660778651");
    noMDEntries_0_0.set(RedemptionDate_28);
    Instrument_28.insert(RedemptionDate_28.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_28("STRING_492023250");
    noMDEntries_0_0.set(RepoCollateralSecurityType_28);
    Instrument_28.insert(RepoCollateralSecurityType_28.getString());
    FIX::RepurchaseRate RepurchaseRate_28;
    RepurchaseRate_28.setString("61.940000");
    noMDEntries_0_0.set(RepurchaseRate_28);
    Instrument_28.insert(RepurchaseRate_28.getString());
    FIX::RepurchaseTerm RepurchaseTerm_28(2011219174);
    noMDEntries_0_0.set(RepurchaseTerm_28);
    Instrument_28.insert(RepurchaseTerm_28.getString());
    FIX::RestructuringType RestructuringType_28("STRING_MM");
    noMDEntries_0_0.set(RestructuringType_28);
    Instrument_28.insert(RestructuringType_28.getString());
    FIX::SecurityDesc SecurityDesc_28("STRING_901079198");
    noMDEntries_0_0.set(SecurityDesc_28);
    Instrument_28.insert(SecurityDesc_28.getString());
    FIX::SecurityExchange SecurityExchange_28("EXCHANGE_1188331785");
    noMDEntries_0_0.set(SecurityExchange_28);
    Instrument_28.insert(SecurityExchange_28.getString());
    FIX::SecurityGroup SecurityGroup_28("STRING_1313988988");
    noMDEntries_0_0.set(SecurityGroup_28);
    Instrument_28.insert(SecurityGroup_28.getString());
    FIX::SecurityID SecurityID_28("STRING_1615065835");
    noMDEntries_0_0.set(SecurityID_28);
    Instrument_28.insert(SecurityID_28.getString());
    FIX::SecurityIDSource SecurityIDSource_28("STRING_4");
    noMDEntries_0_0.set(SecurityIDSource_28);
    Instrument_28.insert(SecurityIDSource_28.getString());
    FIX::SecurityStatus SecurityStatus_28("STRING_2");
    noMDEntries_0_0.set(SecurityStatus_28);
    Instrument_28.insert(SecurityStatus_28.getString());
    FIX::SecuritySubType SecuritySubType_29("STRING_62051437");
    noMDEntries_0_0.set(SecuritySubType_29);
    Instrument_28.insert(SecuritySubType_29.getString());
    FIX::SecurityType SecurityType_30("STRING_CMO");
    noMDEntries_0_0.set(SecurityType_30);
    Instrument_28.insert(SecurityType_30.getString());
    FIX::Seniority Seniority_28("STRING_SD");
    noMDEntries_0_0.set(Seniority_28);
    Instrument_28.insert(Seniority_28.getString());
    FIX::SettlMethod SettlMethod_28('P');
    noMDEntries_0_0.set(SettlMethod_28);
    Instrument_28.insert(SettlMethod_28.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_28("STRING_1934804477");
    noMDEntries_0_0.set(SettleOnOpenFlag_28);
    Instrument_28.insert(SettleOnOpenFlag_28.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_28("STRING_2058541551");
    noMDEntries_0_0.set(StateOrProvinceOfIssue_28);
    Instrument_28.insert(StateOrProvinceOfIssue_28.getString());
    FIX::StrikeCurrency StrikeCurrency_28("USD");
    noMDEntries_0_0.set(StrikeCurrency_28);
    Instrument_28.insert(StrikeCurrency_28.getString());
    FIX::StrikeMultiplier StrikeMultiplier_28;
    StrikeMultiplier_28.setString("5769646");
    noMDEntries_0_0.set(StrikeMultiplier_28);
    Instrument_28.insert(StrikeMultiplier_28.getString());
    FIX::StrikePrice StrikePrice_28;
    StrikePrice_28.setString("2176642");
    noMDEntries_0_0.set(StrikePrice_28);
    Instrument_28.insert(StrikePrice_28.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_28(4);
    noMDEntries_0_0.set(StrikePriceBoundaryMethod_28);
    Instrument_28.insert(StrikePriceBoundaryMethod_28.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_28;
    StrikePriceBoundaryPrecision_28.setString("74.640000");
    noMDEntries_0_0.set(StrikePriceBoundaryPrecision_28);
    Instrument_28.insert(StrikePriceBoundaryPrecision_28.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_28(3);
    noMDEntries_0_0.set(StrikePriceDeterminationMethod_28);
    Instrument_28.insert(StrikePriceDeterminationMethod_28.getString());
    FIX::StrikeValue StrikeValue_28;
    StrikeValue_28.setString("5049684");
    noMDEntries_0_0.set(StrikeValue_28);
    Instrument_28.insert(StrikeValue_28.getString());
    FIX::Symbol Symbol_28("STRING_383375006");
    noMDEntries_0_0.set(Symbol_28);
    Instrument_28.insert(Symbol_28.getString());
    FIX::SymbolSfx SymbolSfx_28("STRING_CD");
    noMDEntries_0_0.set(SymbolSfx_28);
    Instrument_28.insert(SymbolSfx_28.getString());
    FIX::TimeUnit TimeUnit_28("STRING_Yr");
    noMDEntries_0_0.set(TimeUnit_28);
    Instrument_28.insert(TimeUnit_28.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_28(2);
    noMDEntries_0_0.set(UnderlyingPriceDeterminationMethod_28);
    Instrument_28.insert(UnderlyingPriceDeterminationMethod_28.getString());
    FIX::UnitOfMeasure UnitOfMeasure_28("STRING_Bu");
    noMDEntries_0_0.set(UnitOfMeasure_28);
    Instrument_28.insert(UnitOfMeasure_28.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_28;
    UnitOfMeasureQty_28.setString("3694876");
    noMDEntries_0_0.set(UnitOfMeasureQty_28);
    Instrument_28.insert(UnitOfMeasureQty_28.getString());
    FIX::ValuationMethod ValuationMethod_28("STRING_EQTY");
    noMDEntries_0_0.set(ValuationMethod_28);
    Instrument_28.insert(ValuationMethod_28.getString());
    all_values.push_back(Instrument_28);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_56;
      FIX::ComplexEventCondition ComplexEventCondition_56(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_56);
      ComplexEvents_NoComplexEvents_56.insert(ComplexEventCondition_56.getString());
      FIX::ComplexEventPrice ComplexEventPrice_56;
      ComplexEventPrice_56.setString("5756507");
      noComplexEvents_0_1_0.set(ComplexEventPrice_56);
      ComplexEvents_NoComplexEvents_56.insert(ComplexEventPrice_56.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_56(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_56);
      ComplexEvents_NoComplexEvents_56.insert(ComplexEventPriceBoundaryMethod_56.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_56;
      ComplexEventPriceBoundaryPrecision_56.setString("30.050000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_56);
      ComplexEvents_NoComplexEvents_56.insert(ComplexEventPriceBoundaryPrecision_56.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_56(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_56);
      ComplexEvents_NoComplexEvents_56.insert(ComplexEventPriceTimeType_56.getString());
      FIX::ComplexEventType ComplexEventType_56(1);
      noComplexEvents_0_1_0.set(ComplexEventType_56);
      ComplexEvents_NoComplexEvents_56.insert(ComplexEventType_56.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_56;
      ComplexOptPayoutAmount_56.setString("12719651");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_56);
      ComplexEvents_NoComplexEvents_56.insert(ComplexOptPayoutAmount_56.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_56);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_120;
        FIX::ComplexEventEndDate ComplexEventEndDate_120(FIX::UTCTIMESTAMP(6, 55, 35, 25, 52001));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_120);
        ComplexEventDates_NoComplexEventDates_120.insert(ComplexEventEndDate_120.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_120(FIX::UTCTIMESTAMP(10, 18, 13, 14, 72005));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_120);
        ComplexEventDates_NoComplexEventDates_120.insert(ComplexEventStartDate_120.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_120);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_246;
          FIX::ComplexEventEndTime ComplexEventEndTime_246(FIX::UTCTIMEONLY(7, 3, 57));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_246);
          ComplexEventTimes_NoComplexEventTimes_246.insert(ComplexEventEndTime_246.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_246(FIX::UTCTIMEONLY(8, 9, 23));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_246);
          ComplexEventTimes_NoComplexEventTimes_246.insert(ComplexEventStartTime_246.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_246);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_247;
          FIX::ComplexEventEndTime ComplexEventEndTime_247(FIX::UTCTIMEONLY(7, 36, 13));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_247);
          ComplexEventTimes_NoComplexEventTimes_247.insert(ComplexEventEndTime_247.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_247(FIX::UTCTIMEONLY(10, 6, 22));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_247);
          ComplexEventTimes_NoComplexEventTimes_247.insert(ComplexEventStartTime_247.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_247);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_121;
        FIX::ComplexEventEndDate ComplexEventEndDate_121(FIX::UTCTIMESTAMP(4, 9, 37, 1, 22012));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_121);
        ComplexEventDates_NoComplexEventDates_121.insert(ComplexEventEndDate_121.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_121(FIX::UTCTIMESTAMP(3, 6, 51, 26, 52012));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_121);
        ComplexEventDates_NoComplexEventDates_121.insert(ComplexEventStartDate_121.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_121);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_248;
          FIX::ComplexEventEndTime ComplexEventEndTime_248(FIX::UTCTIMEONLY(2, 20, 38));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_248);
          ComplexEventTimes_NoComplexEventTimes_248.insert(ComplexEventEndTime_248.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_248(FIX::UTCTIMEONLY(20, 47, 1));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_248);
          ComplexEventTimes_NoComplexEventTimes_248.insert(ComplexEventStartTime_248.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_248);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_249;
          FIX::ComplexEventEndTime ComplexEventEndTime_249(FIX::UTCTIMEONLY(11, 29, 30));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_249);
          ComplexEventTimes_NoComplexEventTimes_249.insert(ComplexEventEndTime_249.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_249(FIX::UTCTIMEONLY(16, 36, 8));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_249);
          ComplexEventTimes_NoComplexEventTimes_249.insert(ComplexEventStartTime_249.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_249);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_250;
          FIX::ComplexEventEndTime ComplexEventEndTime_250(FIX::UTCTIMEONLY(20, 17, 18));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventEndTime_250);
          ComplexEventTimes_NoComplexEventTimes_250.insert(ComplexEventEndTime_250.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_250(FIX::UTCTIMEONLY(7, 6, 44));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventStartTime_250);
          ComplexEventTimes_NoComplexEventTimes_250.insert(ComplexEventStartTime_250.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_250);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noMDEntries_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_60;
      FIX::EventDate EventDate_60("LOCALMKTDATE_996723604");
      noEvents_0_1_0.set(EventDate_60);
      EvntGrp_NoEvents_60.insert(EventDate_60.getString());
      FIX::EventPx EventPx_60;
      EventPx_60.setString("4983053");
      noEvents_0_1_0.set(EventPx_60);
      EvntGrp_NoEvents_60.insert(EventPx_60.getString());
      FIX::EventText EventText_60("STRING_1417278296");
      noEvents_0_1_0.set(EventText_60);
      EvntGrp_NoEvents_60.insert(EventText_60.getString());
      FIX::EventTime EventTime_60(FIX::UTCTIMESTAMP(22, 13, 25, 24, 22001));
      noEvents_0_1_0.set(EventTime_60);
      EvntGrp_NoEvents_60.insert(EventTime_60.getString());
      FIX::EventType EventType_60(11);
      noEvents_0_1_0.set(EventType_60);
      EvntGrp_NoEvents_60.insert(EventType_60.getString());
      all_values.push_back(EvntGrp_NoEvents_60);

      noMDEntries_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_61;
      FIX::EventDate EventDate_61("LOCALMKTDATE_982282226");
      noEvents_0_1_1.set(EventDate_61);
      EvntGrp_NoEvents_61.insert(EventDate_61.getString());
      FIX::EventPx EventPx_61;
      EventPx_61.setString("17749654");
      noEvents_0_1_1.set(EventPx_61);
      EvntGrp_NoEvents_61.insert(EventPx_61.getString());
      FIX::EventText EventText_61("STRING_1968939351");
      noEvents_0_1_1.set(EventText_61);
      EvntGrp_NoEvents_61.insert(EventText_61.getString());
      FIX::EventTime EventTime_61(FIX::UTCTIMESTAMP(17, 12, 12, 11, 52010));
      noEvents_0_1_1.set(EventTime_61);
      EvntGrp_NoEvents_61.insert(EventTime_61.getString());
      FIX::EventType EventType_61(12);
      noEvents_0_1_1.set(EventType_61);
      EvntGrp_NoEvents_61.insert(EventType_61.getString());
      all_values.push_back(EvntGrp_NoEvents_61);

      noMDEntries_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_52;
      FIX::InstrumentPartyID InstrumentPartyID_52("STRING_1127000676");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_52);
      InstrumentParties_NoInstrumentParties_52.insert(InstrumentPartyID_52.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_52('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_52);
      InstrumentParties_NoInstrumentParties_52.insert(InstrumentPartyIDSource_52.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_52(104278904);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_52);
      InstrumentParties_NoInstrumentParties_52.insert(InstrumentPartyRole_52.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_52);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106;
        FIX::InstrumentPartySubID InstrumentPartySubID_106("STRING_833498871");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_106);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106.insert(InstrumentPartySubID_106.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_106(28703323);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_106);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106.insert(InstrumentPartySubIDType_106.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107;
        FIX::InstrumentPartySubID InstrumentPartySubID_107("STRING_1823572998");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_107);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107.insert(InstrumentPartySubID_107.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_107(70965618);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_107);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107.insert(InstrumentPartySubIDType_107.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noMDEntries_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_53;
      FIX::InstrumentPartyID InstrumentPartyID_53("STRING_1025426927");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_53);
      InstrumentParties_NoInstrumentParties_53.insert(InstrumentPartyID_53.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_53('1');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_53);
      InstrumentParties_NoInstrumentParties_53.insert(InstrumentPartyIDSource_53.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_53(1488243914);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_53);
      InstrumentParties_NoInstrumentParties_53.insert(InstrumentPartyRole_53.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_53);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108;
        FIX::InstrumentPartySubID InstrumentPartySubID_108("STRING_1052786951");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_108);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108.insert(InstrumentPartySubID_108.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_108(1178260100);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_108);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108.insert(InstrumentPartySubIDType_108.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      noMDEntries_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_60;
      FIX::SecurityAltID SecurityAltID_60("STRING_989676975");
      noSecurityAltID_0_1_0.set(SecurityAltID_60);
      SecAltIDGrp_NoSecurityAltID_60.insert(SecurityAltID_60.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_60("STRING_600115057");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_60);
      SecAltIDGrp_NoSecurityAltID_60.insert(SecurityAltIDSource_60.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_60);

      noMDEntries_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_61;
      FIX::SecurityAltID SecurityAltID_61("STRING_1062532184");
      noSecurityAltID_0_1_1.set(SecurityAltID_61);
      SecAltIDGrp_NoSecurityAltID_61.insert(SecurityAltID_61.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_61("STRING_2121037805");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_61);
      SecAltIDGrp_NoSecurityAltID_61.insert(SecurityAltIDSource_61.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_61);

      noMDEntries_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_56;
    FIX::SecurityXML SecurityXML_57("XMLDATA_1582397283");
    noMDEntries_0_0.set(SecurityXML_57);
    FIX::SecurityXMLLen SecurityXMLLen_28(690013998);
    noMDEntries_0_0.set(SecurityXMLLen_28);
    FIX::SecurityXMLSchema SecurityXMLSchema_28("STRING_1942493508");
    noMDEntries_0_0.set(SecurityXMLSchema_28);
    SecurityXML_56.insert(SecurityXMLSchema_28.getString());
    all_values.push_back(SecurityXML_56);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_52;
      FIX::PartyID PartyID_52("STRING_664179328");
      noPartyIDs_0_1_0.set(PartyID_52);
      Parties_NoPartyIDs_52.insert(PartyID_52.getString());
      FIX::PartyIDSource PartyIDSource_52('7');
      noPartyIDs_0_1_0.set(PartyIDSource_52);
      Parties_NoPartyIDs_52.insert(PartyIDSource_52.getString());
      FIX::PartyRole PartyRole_52(28);
      noPartyIDs_0_1_0.set(PartyRole_52);
      Parties_NoPartyIDs_52.insert(PartyRole_52.getString());
      all_values.push_back(Parties_NoPartyIDs_52);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_107;
        FIX::PartySubID PartySubID_107("STRING_817957245");
        noPartySubIDs_0_0_2_0.set(PartySubID_107);
        PtysSubGrp_NoPartySubIDs_107.insert(PartySubID_107.getString());
        FIX::PartySubIDType PartySubIDType_107(18);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_107);
        PtysSubGrp_NoPartySubIDs_107.insert(PartySubIDType_107.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_107);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_108;
        FIX::PartySubID PartySubID_108("STRING_447387874");
        noPartySubIDs_0_0_2_1.set(PartySubID_108);
        PtysSubGrp_NoPartySubIDs_108.insert(PartySubID_108.getString());
        FIX::PartySubIDType PartySubIDType_108(20);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_108);
        PtysSubGrp_NoPartySubIDs_108.insert(PartySubIDType_108.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_108);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_53;
      FIX::PartyID PartyID_53("STRING_1435104599");
      noPartyIDs_0_1_1.set(PartyID_53);
      Parties_NoPartyIDs_53.insert(PartyID_53.getString());
      FIX::PartyIDSource PartyIDSource_53('C');
      noPartyIDs_0_1_1.set(PartyIDSource_53);
      Parties_NoPartyIDs_53.insert(PartyIDSource_53.getString());
      FIX::PartyRole PartyRole_53(42);
      noPartyIDs_0_1_1.set(PartyRole_53);
      Parties_NoPartyIDs_53.insert(PartyRole_53.getString());
      all_values.push_back(Parties_NoPartyIDs_53);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_109;
        FIX::PartySubID PartySubID_109("STRING_878837986");
        noPartySubIDs_0_1_2_0.set(PartySubID_109);
        PtysSubGrp_NoPartySubIDs_109.insert(PartySubID_109.getString());
        FIX::PartySubIDType PartySubIDType_109(3);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_109);
        PtysSubGrp_NoPartySubIDs_109.insert(PartySubIDType_109.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_109);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_54;
      FIX::PartyID PartyID_54("STRING_1158760843");
      noPartyIDs_0_1_2.set(PartyID_54);
      Parties_NoPartyIDs_54.insert(PartyID_54.getString());
      FIX::PartyIDSource PartyIDSource_54('G');
      noPartyIDs_0_1_2.set(PartyIDSource_54);
      Parties_NoPartyIDs_54.insert(PartyIDSource_54.getString());
      FIX::PartyRole PartyRole_54(52);
      noPartyIDs_0_1_2.set(PartyRole_54);
      Parties_NoPartyIDs_54.insert(PartyRole_54.getString());
      all_values.push_back(Parties_NoPartyIDs_54);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_110;
        FIX::PartySubID PartySubID_110("STRING_290563870");
        noPartySubIDs_0_2_2_0.set(PartySubID_110);
        PtysSubGrp_NoPartySubIDs_110.insert(PartySubID_110.getString());
        FIX::PartySubIDType PartySubIDType_110(15);
        noPartySubIDs_0_2_2_0.set(PartySubIDType_110);
        PtysSubGrp_NoPartySubIDs_110.insert(PartySubIDType_110.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_110);

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoRateSources noRateSources_0_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_8;
      FIX::RateSource RateSource_12(2);
      noRateSources_0_1_0.set(RateSource_12);
      RateSource_NoRateSources_8.insert(RateSource_12.getString());
      FIX::RateSourceType RateSourceType_8(1);
      noRateSources_0_1_0.set(RateSourceType_8);
      RateSource_NoRateSources_8.insert(RateSourceType_8.getString());
      FIX::ReferencePage ReferencePage_8("STRING_1228135780");
      noRateSources_0_1_0.set(ReferencePage_8);
      RateSource_NoRateSources_8.insert(ReferencePage_8.getString());
      all_values.push_back(RateSource_NoRateSources_8);

      noMDEntries_0_0.addGroup(noRateSources_0_1_0);
    }
    // SecSizesGrp
    // Group SecSizesGrp.NoOfSecSizes
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_0_1_0;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_0;
      FIX::MDSecSize MDSecSize_0;
      MDSecSize_0.setString("7584124");
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
      MDSecSize_1.setString("15038526");
      noOfSecSizes_0_1_1.set(MDSecSize_1);
      SecSizesGrp_NoOfSecSizes_1.insert(MDSecSize_1.getString());
      FIX::MDSecSizeType MDSecSizeType_1(1);
      noOfSecSizes_0_1_1.set(MDSecSizeType_1);
      SecSizesGrp_NoOfSecSizes_1.insert(MDSecSizeType_1.getString());
      all_values.push_back(SecSizesGrp_NoOfSecSizes_1);

      noMDEntries_0_0.addGroup(noOfSecSizes_0_1_1);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_0_1_2;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_2;
      FIX::MDSecSize MDSecSize_2;
      MDSecSize_2.setString("9966997");
      noOfSecSizes_0_1_2.set(MDSecSize_2);
      SecSizesGrp_NoOfSecSizes_2.insert(MDSecSize_2.getString());
      FIX::MDSecSizeType MDSecSizeType_2(1);
      noOfSecSizes_0_1_2.set(MDSecSizeType_2);
      SecSizesGrp_NoOfSecSizes_2.insert(MDSecSizeType_2.getString());
      all_values.push_back(SecSizesGrp_NoOfSecSizes_2);

      noMDEntries_0_0.addGroup(noOfSecSizes_0_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_12;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_12("CAN");
    noMDEntries_0_0.set(BenchmarkCurveCurrency_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkCurveCurrency_12.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_12("STRING_EONIA");
    noMDEntries_0_0.set(BenchmarkCurveName_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkCurveName_12.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_12("STRING_1406325505");
    noMDEntries_0_0.set(BenchmarkCurvePoint_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkCurvePoint_12.getString());
    FIX::BenchmarkPrice BenchmarkPrice_12;
    BenchmarkPrice_12.setString("17079849");
    noMDEntries_0_0.set(BenchmarkPrice_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkPrice_12.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_12(1711864007);
    noMDEntries_0_0.set(BenchmarkPriceType_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkPriceType_12.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_12("STRING_1853713379");
    noMDEntries_0_0.set(BenchmarkSecurityID_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkSecurityID_12.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_12("STRING_1386317408");
    noMDEntries_0_0.set(BenchmarkSecurityIDSource_12);
    SpreadOrBenchmarkCurveData_12.insert(BenchmarkSecurityIDSource_12.getString());
    FIX::Spread Spread_12;
    Spread_12.setString("9994849");
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
      FIX::StatsType StatsType_1(1);
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
      multiset<string> UnderlyingInstrument_44;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_44("DATA_1493433647");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_44);
      UnderlyingInstrument_44.insert(EncodedUnderlyingIssuer_44.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_44(1580210435);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_44);
      UnderlyingInstrument_44.insert(EncodedUnderlyingIssuerLen_44.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_44("DATA_1816985049");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_44);
      UnderlyingInstrument_44.insert(EncodedUnderlyingSecurityDesc_44.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_44(679105500);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_44);
      UnderlyingInstrument_44.insert(EncodedUnderlyingSecurityDescLen_44.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_44;
      UnderlyingAdjustedQuantity_44.setString("18707743");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_44);
      UnderlyingInstrument_44.insert(UnderlyingAdjustedQuantity_44.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_44;
      UnderlyingAllocationPercent_44.setString("77.120000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_44);
      UnderlyingInstrument_44.insert(UnderlyingAllocationPercent_44.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_44;
      UnderlyingAttachmentPoint_44.setString("43.050000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_44);
      UnderlyingInstrument_44.insert(UnderlyingAttachmentPoint_44.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_44("STRING_1192114628");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_44);
      UnderlyingInstrument_44.insert(UnderlyingCFICode_44.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_44("STRING_266687963");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_44);
      UnderlyingInstrument_44.insert(UnderlyingCPProgram_44.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_44("STRING_2145700085");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_44);
      UnderlyingInstrument_44.insert(UnderlyingCPRegType_44.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_44;
      UnderlyingCapValue_44.setString("11135700");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_44);
      UnderlyingInstrument_44.insert(UnderlyingCapValue_44.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_44;
      UnderlyingCashAmount_44.setString("10251003");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_44);
      UnderlyingInstrument_44.insert(UnderlyingCashAmount_44.getString());
      FIX::UnderlyingCashType UnderlyingCashType_44("STRING_FIXED");
      noUnderlyings_0_1_0.set(UnderlyingCashType_44);
      UnderlyingInstrument_44.insert(UnderlyingCashType_44.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_44;
      UnderlyingContractMultiplier_44.setString("4699390");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_44);
      UnderlyingInstrument_44.insert(UnderlyingContractMultiplier_44.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_44(326043185);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_44);
      UnderlyingInstrument_44.insert(UnderlyingContractMultiplierUnit_44.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_44("COUNTRY_49122524");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_44);
      UnderlyingInstrument_44.insert(UnderlyingCountryOfIssue_44.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_44("LOCALMKTDATE_240856177");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_44);
      UnderlyingInstrument_44.insert(UnderlyingCouponPaymentDate_44.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_44;
      UnderlyingCouponRate_44.setString("52.990000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_44);
      UnderlyingInstrument_44.insert(UnderlyingCouponRate_44.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_44("STRING_939150235");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_44);
      UnderlyingInstrument_44.insert(UnderlyingCreditRating_44.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_44("USD");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_44);
      UnderlyingInstrument_44.insert(UnderlyingCurrency_44.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_44;
      UnderlyingCurrentValue_44.setString("4996515");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_44);
      UnderlyingInstrument_44.insert(UnderlyingCurrentValue_44.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_44;
      UnderlyingDetachmentPoint_44.setString("66.200000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_44);
      UnderlyingInstrument_44.insert(UnderlyingDetachmentPoint_44.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_44;
      UnderlyingDirtyPrice_44.setString("14037205");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_44);
      UnderlyingInstrument_44.insert(UnderlyingDirtyPrice_44.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_44;
      UnderlyingEndPrice_44.setString("18859689");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_44);
      UnderlyingInstrument_44.insert(UnderlyingEndPrice_44.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_44;
      UnderlyingEndValue_44.setString("609979");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_44);
      UnderlyingInstrument_44.insert(UnderlyingEndValue_44.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_44(1155289380);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_44);
      UnderlyingInstrument_44.insert(UnderlyingExerciseStyle_44.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_44;
      UnderlyingFXRate_44.setString("9074140");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_44);
      UnderlyingInstrument_44.insert(UnderlyingFXRate_44.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_44('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_44);
      UnderlyingInstrument_44.insert(UnderlyingFXRateCalc_44.getString());
      FIX::UnderlyingFactor UnderlyingFactor_44;
      UnderlyingFactor_44.setString("17856962");
      noUnderlyings_0_1_0.set(UnderlyingFactor_44);
      UnderlyingInstrument_44.insert(UnderlyingFactor_44.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_44(1887657511);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_44);
      UnderlyingInstrument_44.insert(UnderlyingFlowScheduleType_44.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_44("STRING_1889104382");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_44);
      UnderlyingInstrument_44.insert(UnderlyingInstrRegistry_44.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_44("LOCALMKTDATE_1218422999");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_44);
      UnderlyingInstrument_44.insert(UnderlyingIssueDate_44.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_44("STRING_1557158912");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_44);
      UnderlyingInstrument_44.insert(UnderlyingIssuer_44.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_44("STRING_420726235");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_44);
      UnderlyingInstrument_44.insert(UnderlyingLocaleOfIssue_44.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_44("LOCALMKTDATE_941713657");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_44);
      UnderlyingInstrument_44.insert(UnderlyingMaturityDate_44.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_44("MONTHYEAR_2127966624");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_44);
      UnderlyingInstrument_44.insert(UnderlyingMaturityMonthYear_44.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_44("TZTIMEONLY_1338290540");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_44);
      UnderlyingInstrument_44.insert(UnderlyingMaturityTime_44.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_44;
      UnderlyingNotionalPercentageOutstanding_44.setString("82.860000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_44);
      UnderlyingInstrument_44.insert(UnderlyingNotionalPercentageOutstanding_44.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_44('2');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_44);
      UnderlyingInstrument_44.insert(UnderlyingOptAttribute_44.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_44;
      UnderlyingOriginalNotionalPercentageOutstanding_44.setString("69.770000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_44);
      UnderlyingInstrument_44.insert(UnderlyingOriginalNotionalPercentageOutstanding_44.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_44("STRING_1099914646");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_44);
      UnderlyingInstrument_44.insert(UnderlyingPriceUnitOfMeasure_44.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_44;
      UnderlyingPriceUnitOfMeasureQty_44.setString("12722713");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_44);
      UnderlyingInstrument_44.insert(UnderlyingPriceUnitOfMeasureQty_44.getString());
      FIX::UnderlyingProduct UnderlyingProduct_44(388929703);
      noUnderlyings_0_1_0.set(UnderlyingProduct_44);
      UnderlyingInstrument_44.insert(UnderlyingProduct_44.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_44(1569853670);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_44);
      UnderlyingInstrument_44.insert(UnderlyingPutOrCall_44.getString());
      FIX::UnderlyingPx UnderlyingPx_44;
      UnderlyingPx_44.setString("15983145");
      noUnderlyings_0_1_0.set(UnderlyingPx_44);
      UnderlyingInstrument_44.insert(UnderlyingPx_44.getString());
      FIX::UnderlyingQty UnderlyingQty_44;
      UnderlyingQty_44.setString("4380522");
      noUnderlyings_0_1_0.set(UnderlyingQty_44);
      UnderlyingInstrument_44.insert(UnderlyingQty_44.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_44("LOCALMKTDATE_1810709848");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_44);
      UnderlyingInstrument_44.insert(UnderlyingRedemptionDate_44.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_44("STRING_1889479823");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_44);
      UnderlyingInstrument_44.insert(UnderlyingRepoCollateralSecurityType_44.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_44;
      UnderlyingRepurchaseRate_44.setString("24.630000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_44);
      UnderlyingInstrument_44.insert(UnderlyingRepurchaseRate_44.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_44(1307842461);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_44);
      UnderlyingInstrument_44.insert(UnderlyingRepurchaseTerm_44.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_44("STRING_1439486979");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_44);
      UnderlyingInstrument_44.insert(UnderlyingRestructuringType_44.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_44("STRING_1876854007");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_44);
      UnderlyingInstrument_44.insert(UnderlyingSecurityDesc_44.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_44("EXCHANGE_369355434");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_44);
      UnderlyingInstrument_44.insert(UnderlyingSecurityExchange_44.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_44("STRING_695723866");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_44);
      UnderlyingInstrument_44.insert(UnderlyingSecurityID_44.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_44("STRING_1615339311");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_44);
      UnderlyingInstrument_44.insert(UnderlyingSecurityIDSource_44.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_44("STRING_430353365");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_44);
      UnderlyingInstrument_44.insert(UnderlyingSecuritySubType_44.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_44("STRING_1851013246");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_44);
      UnderlyingInstrument_44.insert(UnderlyingSecurityType_44.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_44("STRING_375269731");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_44);
      UnderlyingInstrument_44.insert(UnderlyingSeniority_44.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_44("STRING_826024100");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_44);
      UnderlyingInstrument_44.insert(UnderlyingSettlMethod_44.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_44(4);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_44);
      UnderlyingInstrument_44.insert(UnderlyingSettlementType_44.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_44;
      UnderlyingStartValue_44.setString("1154435");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_44);
      UnderlyingInstrument_44.insert(UnderlyingStartValue_44.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_44("STRING_567644834");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_44);
      UnderlyingInstrument_44.insert(UnderlyingStateOrProvinceOfIssue_44.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_44("CHF");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_44);
      UnderlyingInstrument_44.insert(UnderlyingStrikeCurrency_44.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_44;
      UnderlyingStrikePrice_44.setString("9883710");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_44);
      UnderlyingInstrument_44.insert(UnderlyingStrikePrice_44.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_44("STRING_1501878819");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_44);
      UnderlyingInstrument_44.insert(UnderlyingSymbol_44.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_44("STRING_1653085483");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_44);
      UnderlyingInstrument_44.insert(UnderlyingSymbolSfx_44.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_44("STRING_179177961");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_44);
      UnderlyingInstrument_44.insert(UnderlyingTimeUnit_44.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_44("STRING_1488223457");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_44);
      UnderlyingInstrument_44.insert(UnderlyingUnitOfMeasure_44.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_44;
      UnderlyingUnitOfMeasureQty_44.setString("19002564");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_44);
      UnderlyingInstrument_44.insert(UnderlyingUnitOfMeasureQty_44.getString());
      all_values.push_back(UnderlyingInstrument_44);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_87;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_87("STRING_440654456");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_87);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_87.insert(UnderlyingSecurityAltID_87.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_87("STRING_1025044114");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_87);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_87.insert(UnderlyingSecurityAltIDSource_87.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_87);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_88;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_88("STRING_1904614642");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_88);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_88.insert(UnderlyingSecurityAltID_88.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_88("STRING_2010508126");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_88);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_88.insert(UnderlyingSecurityAltIDSource_88.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_88);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_89;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_89("STRING_475874990");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltID_89);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_89.insert(UnderlyingSecurityAltID_89.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_89("STRING_195183222");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltIDSource_89);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_89.insert(UnderlyingSecurityAltIDSource_89.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_89);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_88;
        FIX::UnderlyingStipType UnderlyingStipType_88("STRING_217871165");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_88);
        UnderlyingStipulations_NoUnderlyingStips_88.insert(UnderlyingStipType_88.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_88("STRING_1572385685");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_88);
        UnderlyingStipulations_NoUnderlyingStips_88.insert(UnderlyingStipValue_88.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_88);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_84;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_84("STRING_1657358144");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_84);
        UndlyInstrumentParties_NoUndlyInstrumentParties_84.insert(UnderlyingInstrumentPartyID_84.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_84('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_84);
        UndlyInstrumentParties_NoUndlyInstrumentParties_84.insert(UnderlyingInstrumentPartyIDSource_84.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_84(1203448574);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_84);
        UndlyInstrumentParties_NoUndlyInstrumentParties_84.insert(UnderlyingInstrumentPartyRole_84.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_84);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_167("STRING_769611708");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_167);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167.insert(UnderlyingInstrumentPartySubID_167.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_167(1633801939);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_167);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167.insert(UnderlyingInstrumentPartySubIDType_167.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_168("STRING_2056611609");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_168);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168.insert(UnderlyingInstrumentPartySubID_168.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_168(1144881440);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_168);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168.insert(UnderlyingInstrumentPartySubIDType_168.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_85;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_85("STRING_312342391");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_85);
        UndlyInstrumentParties_NoUndlyInstrumentParties_85.insert(UnderlyingInstrumentPartyID_85.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_85('1');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_85);
        UndlyInstrumentParties_NoUndlyInstrumentParties_85.insert(UnderlyingInstrumentPartyIDSource_85.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_85(1260325034);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_85);
        UndlyInstrumentParties_NoUndlyInstrumentParties_85.insert(UnderlyingInstrumentPartyRole_85.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_85);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_169;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_169("STRING_1958518933");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_169);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_169.insert(UnderlyingInstrumentPartySubID_169.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_169(785443893);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_169);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_169.insert(UnderlyingInstrumentPartySubIDType_169.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_169);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_86;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_86("STRING_1868358295");
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyID_86);
        UndlyInstrumentParties_NoUndlyInstrumentParties_86.insert(UnderlyingInstrumentPartyID_86.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_86('1');
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyIDSource_86);
        UndlyInstrumentParties_NoUndlyInstrumentParties_86.insert(UnderlyingInstrumentPartyIDSource_86.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_86(291045729);
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyRole_86);
        UndlyInstrumentParties_NoUndlyInstrumentParties_86.insert(UnderlyingInstrumentPartyRole_86.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_86);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_170;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_170("STRING_653653914");
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubID_170);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_170.insert(UnderlyingInstrumentPartySubID_170.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_170(43818504);
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_170);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_170.insert(UnderlyingInstrumentPartySubIDType_170.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_170);

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_171;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_171("STRING_1415737547");
          noUndlyInstrumentPartySubIDs_0_0_2_3_1.set(UnderlyingInstrumentPartySubID_171);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_171.insert(UnderlyingInstrumentPartySubID_171.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_171(1094308370);
          noUndlyInstrumentPartySubIDs_0_0_2_3_1.set(UnderlyingInstrumentPartySubIDType_171);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_171.insert(UnderlyingInstrumentPartySubIDType_171.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_171);

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_2);
      }
      noMDEntries_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_45;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_45("DATA_1068862619");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_45);
      UnderlyingInstrument_45.insert(EncodedUnderlyingIssuer_45.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_45(1172868541);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_45);
      UnderlyingInstrument_45.insert(EncodedUnderlyingIssuerLen_45.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_45("DATA_957332849");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_45);
      UnderlyingInstrument_45.insert(EncodedUnderlyingSecurityDesc_45.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_45(1544737609);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_45);
      UnderlyingInstrument_45.insert(EncodedUnderlyingSecurityDescLen_45.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_45;
      UnderlyingAdjustedQuantity_45.setString("13680517");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_45);
      UnderlyingInstrument_45.insert(UnderlyingAdjustedQuantity_45.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_45;
      UnderlyingAllocationPercent_45.setString("35.270000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_45);
      UnderlyingInstrument_45.insert(UnderlyingAllocationPercent_45.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_45;
      UnderlyingAttachmentPoint_45.setString("87.750000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_45);
      UnderlyingInstrument_45.insert(UnderlyingAttachmentPoint_45.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_45("STRING_792953800");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_45);
      UnderlyingInstrument_45.insert(UnderlyingCFICode_45.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_45("STRING_1317676667");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_45);
      UnderlyingInstrument_45.insert(UnderlyingCPProgram_45.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_45("STRING_1272483271");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_45);
      UnderlyingInstrument_45.insert(UnderlyingCPRegType_45.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_45;
      UnderlyingCapValue_45.setString("20947098");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_45);
      UnderlyingInstrument_45.insert(UnderlyingCapValue_45.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_45;
      UnderlyingCashAmount_45.setString("3736415");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_45);
      UnderlyingInstrument_45.insert(UnderlyingCashAmount_45.getString());
      FIX::UnderlyingCashType UnderlyingCashType_45("STRING_FIXED");
      noUnderlyings_0_1_1.set(UnderlyingCashType_45);
      UnderlyingInstrument_45.insert(UnderlyingCashType_45.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_45;
      UnderlyingContractMultiplier_45.setString("7168379");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_45);
      UnderlyingInstrument_45.insert(UnderlyingContractMultiplier_45.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_45(2007443532);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_45);
      UnderlyingInstrument_45.insert(UnderlyingContractMultiplierUnit_45.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_45("COUNTRY_1387209595");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_45);
      UnderlyingInstrument_45.insert(UnderlyingCountryOfIssue_45.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_45("LOCALMKTDATE_1861719346");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_45);
      UnderlyingInstrument_45.insert(UnderlyingCouponPaymentDate_45.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_45;
      UnderlyingCouponRate_45.setString("22.750000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_45);
      UnderlyingInstrument_45.insert(UnderlyingCouponRate_45.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_45("STRING_638079718");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_45);
      UnderlyingInstrument_45.insert(UnderlyingCreditRating_45.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_45("CHF");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_45);
      UnderlyingInstrument_45.insert(UnderlyingCurrency_45.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_45;
      UnderlyingCurrentValue_45.setString("4491150");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_45);
      UnderlyingInstrument_45.insert(UnderlyingCurrentValue_45.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_45;
      UnderlyingDetachmentPoint_45.setString("46.260000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_45);
      UnderlyingInstrument_45.insert(UnderlyingDetachmentPoint_45.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_45;
      UnderlyingDirtyPrice_45.setString("7731641");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_45);
      UnderlyingInstrument_45.insert(UnderlyingDirtyPrice_45.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_45;
      UnderlyingEndPrice_45.setString("17620291");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_45);
      UnderlyingInstrument_45.insert(UnderlyingEndPrice_45.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_45;
      UnderlyingEndValue_45.setString("20510503");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_45);
      UnderlyingInstrument_45.insert(UnderlyingEndValue_45.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_45(673216756);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_45);
      UnderlyingInstrument_45.insert(UnderlyingExerciseStyle_45.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_45;
      UnderlyingFXRate_45.setString("2681993");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_45);
      UnderlyingInstrument_45.insert(UnderlyingFXRate_45.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_45('M');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_45);
      UnderlyingInstrument_45.insert(UnderlyingFXRateCalc_45.getString());
      FIX::UnderlyingFactor UnderlyingFactor_45;
      UnderlyingFactor_45.setString("20889543");
      noUnderlyings_0_1_1.set(UnderlyingFactor_45);
      UnderlyingInstrument_45.insert(UnderlyingFactor_45.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_45(1362507746);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_45);
      UnderlyingInstrument_45.insert(UnderlyingFlowScheduleType_45.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_45("STRING_1016247830");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_45);
      UnderlyingInstrument_45.insert(UnderlyingInstrRegistry_45.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_45("LOCALMKTDATE_1114339196");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_45);
      UnderlyingInstrument_45.insert(UnderlyingIssueDate_45.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_45("STRING_172356947");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_45);
      UnderlyingInstrument_45.insert(UnderlyingIssuer_45.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_45("STRING_413501792");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_45);
      UnderlyingInstrument_45.insert(UnderlyingLocaleOfIssue_45.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_45("LOCALMKTDATE_334907311");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_45);
      UnderlyingInstrument_45.insert(UnderlyingMaturityDate_45.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_45("MONTHYEAR_655940474");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_45);
      UnderlyingInstrument_45.insert(UnderlyingMaturityMonthYear_45.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_45("TZTIMEONLY_28626919");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_45);
      UnderlyingInstrument_45.insert(UnderlyingMaturityTime_45.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_45;
      UnderlyingNotionalPercentageOutstanding_45.setString("11.120000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_45);
      UnderlyingInstrument_45.insert(UnderlyingNotionalPercentageOutstanding_45.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_45('1');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_45);
      UnderlyingInstrument_45.insert(UnderlyingOptAttribute_45.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_45;
      UnderlyingOriginalNotionalPercentageOutstanding_45.setString("1.900000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_45);
      UnderlyingInstrument_45.insert(UnderlyingOriginalNotionalPercentageOutstanding_45.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_45("STRING_1075087309");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_45);
      UnderlyingInstrument_45.insert(UnderlyingPriceUnitOfMeasure_45.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_45;
      UnderlyingPriceUnitOfMeasureQty_45.setString("1997750");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_45);
      UnderlyingInstrument_45.insert(UnderlyingPriceUnitOfMeasureQty_45.getString());
      FIX::UnderlyingProduct UnderlyingProduct_45(631708176);
      noUnderlyings_0_1_1.set(UnderlyingProduct_45);
      UnderlyingInstrument_45.insert(UnderlyingProduct_45.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_45(1791925215);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_45);
      UnderlyingInstrument_45.insert(UnderlyingPutOrCall_45.getString());
      FIX::UnderlyingPx UnderlyingPx_45;
      UnderlyingPx_45.setString("597349");
      noUnderlyings_0_1_1.set(UnderlyingPx_45);
      UnderlyingInstrument_45.insert(UnderlyingPx_45.getString());
      FIX::UnderlyingQty UnderlyingQty_45;
      UnderlyingQty_45.setString("20189177");
      noUnderlyings_0_1_1.set(UnderlyingQty_45);
      UnderlyingInstrument_45.insert(UnderlyingQty_45.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_45("LOCALMKTDATE_1506160913");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_45);
      UnderlyingInstrument_45.insert(UnderlyingRedemptionDate_45.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_45("STRING_232037247");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_45);
      UnderlyingInstrument_45.insert(UnderlyingRepoCollateralSecurityType_45.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_45;
      UnderlyingRepurchaseRate_45.setString("38.420000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_45);
      UnderlyingInstrument_45.insert(UnderlyingRepurchaseRate_45.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_45(333237998);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_45);
      UnderlyingInstrument_45.insert(UnderlyingRepurchaseTerm_45.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_45("STRING_1284326748");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_45);
      UnderlyingInstrument_45.insert(UnderlyingRestructuringType_45.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_45("STRING_958628846");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_45);
      UnderlyingInstrument_45.insert(UnderlyingSecurityDesc_45.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_45("EXCHANGE_2093242624");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_45);
      UnderlyingInstrument_45.insert(UnderlyingSecurityExchange_45.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_45("STRING_2057490896");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_45);
      UnderlyingInstrument_45.insert(UnderlyingSecurityID_45.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_45("STRING_573174307");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_45);
      UnderlyingInstrument_45.insert(UnderlyingSecurityIDSource_45.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_45("STRING_1996809331");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_45);
      UnderlyingInstrument_45.insert(UnderlyingSecuritySubType_45.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_45("STRING_583224005");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_45);
      UnderlyingInstrument_45.insert(UnderlyingSecurityType_45.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_45("STRING_841373682");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_45);
      UnderlyingInstrument_45.insert(UnderlyingSeniority_45.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_45("STRING_1944194542");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_45);
      UnderlyingInstrument_45.insert(UnderlyingSettlMethod_45.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_45(2);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_45);
      UnderlyingInstrument_45.insert(UnderlyingSettlementType_45.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_45;
      UnderlyingStartValue_45.setString("563977");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_45);
      UnderlyingInstrument_45.insert(UnderlyingStartValue_45.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_45("STRING_812958725");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_45);
      UnderlyingInstrument_45.insert(UnderlyingStateOrProvinceOfIssue_45.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_45("CAN");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_45);
      UnderlyingInstrument_45.insert(UnderlyingStrikeCurrency_45.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_45;
      UnderlyingStrikePrice_45.setString("12264605");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_45);
      UnderlyingInstrument_45.insert(UnderlyingStrikePrice_45.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_45("STRING_1973941168");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_45);
      UnderlyingInstrument_45.insert(UnderlyingSymbol_45.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_45("STRING_884695202");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_45);
      UnderlyingInstrument_45.insert(UnderlyingSymbolSfx_45.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_45("STRING_1255087436");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_45);
      UnderlyingInstrument_45.insert(UnderlyingTimeUnit_45.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_45("STRING_954318632");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_45);
      UnderlyingInstrument_45.insert(UnderlyingUnitOfMeasure_45.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_45;
      UnderlyingUnitOfMeasureQty_45.setString("7108286");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_45);
      UnderlyingInstrument_45.insert(UnderlyingUnitOfMeasureQty_45.getString());
      all_values.push_back(UnderlyingInstrument_45);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_90;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_90("STRING_2029405942");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_90);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_90.insert(UnderlyingSecurityAltID_90.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_90("STRING_910603783");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_90);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_90.insert(UnderlyingSecurityAltIDSource_90.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_90);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_91;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_91("STRING_1040422155");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltID_91);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_91.insert(UnderlyingSecurityAltID_91.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_91("STRING_1673847509");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltIDSource_91);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_91.insert(UnderlyingSecurityAltIDSource_91.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_91);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_92;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_92("STRING_970338755");
        noUnderlyingSecurityAltID_0_1_2_2.set(UnderlyingSecurityAltID_92);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_92.insert(UnderlyingSecurityAltID_92.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_92("STRING_911856278");
        noUnderlyingSecurityAltID_0_1_2_2.set(UnderlyingSecurityAltIDSource_92);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_92.insert(UnderlyingSecurityAltIDSource_92.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_92);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_89;
        FIX::UnderlyingStipType UnderlyingStipType_89("STRING_1202376003");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_89);
        UnderlyingStipulations_NoUnderlyingStips_89.insert(UnderlyingStipType_89.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_89("STRING_1421370120");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_89);
        UnderlyingStipulations_NoUnderlyingStips_89.insert(UnderlyingStipValue_89.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_89);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_87;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_87("STRING_339219103");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_87);
        UndlyInstrumentParties_NoUndlyInstrumentParties_87.insert(UnderlyingInstrumentPartyID_87.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_87('2');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_87);
        UndlyInstrumentParties_NoUndlyInstrumentParties_87.insert(UnderlyingInstrumentPartyIDSource_87.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_87(1311521749);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_87);
        UndlyInstrumentParties_NoUndlyInstrumentParties_87.insert(UnderlyingInstrumentPartyRole_87.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_87);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_172;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_172("STRING_805689625");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_172);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_172.insert(UnderlyingInstrumentPartySubID_172.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_172(1160847432);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_172);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_172.insert(UnderlyingInstrumentPartySubIDType_172.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_172);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_173;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_173("STRING_832450357");
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubID_173);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_173.insert(UnderlyingInstrumentPartySubID_173.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_173(1647063308);
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_173);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_173.insert(UnderlyingInstrumentPartySubIDType_173.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_173);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_174;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_174("STRING_957558326");
          noUndlyInstrumentPartySubIDs_0_1_0_3_2.set(UnderlyingInstrumentPartySubID_174);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_174.insert(UnderlyingInstrumentPartySubID_174.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_174(1357145017);
          noUndlyInstrumentPartySubIDs_0_1_0_3_2.set(UnderlyingInstrumentPartySubIDType_174);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_174.insert(UnderlyingInstrumentPartySubIDType_174.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_174);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_88;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_88("STRING_1703461088");
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyID_88);
        UndlyInstrumentParties_NoUndlyInstrumentParties_88.insert(UnderlyingInstrumentPartyID_88.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_88('1');
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyIDSource_88);
        UndlyInstrumentParties_NoUndlyInstrumentParties_88.insert(UnderlyingInstrumentPartyIDSource_88.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_88(848695226);
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyRole_88);
        UndlyInstrumentParties_NoUndlyInstrumentParties_88.insert(UnderlyingInstrumentPartyRole_88.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_88);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_175;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_175("STRING_849493920");
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubID_175);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_175.insert(UnderlyingInstrumentPartySubID_175.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_175(675152747);
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_175);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_175.insert(UnderlyingInstrumentPartySubIDType_175.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_175);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_176;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_176("STRING_669427370");
          noUndlyInstrumentPartySubIDs_0_1_1_3_1.set(UnderlyingInstrumentPartySubID_176);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_176.insert(UnderlyingInstrumentPartySubID_176.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_176(2104581356);
          noUndlyInstrumentPartySubIDs_0_1_1_3_1.set(UnderlyingInstrumentPartySubIDType_176);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_176.insert(UnderlyingInstrumentPartySubIDType_176.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_176);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_177;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_177("STRING_1629471379");
          noUndlyInstrumentPartySubIDs_0_1_1_3_2.set(UnderlyingInstrumentPartySubID_177);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_177.insert(UnderlyingInstrumentPartySubID_177.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_177(1380256066);
          noUndlyInstrumentPartySubIDs_0_1_1_3_2.set(UnderlyingInstrumentPartySubIDType_177);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_177.insert(UnderlyingInstrumentPartySubIDType_177.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_177);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_1);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_89;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_89("STRING_365811687");
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyID_89);
        UndlyInstrumentParties_NoUndlyInstrumentParties_89.insert(UnderlyingInstrumentPartyID_89.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_89('1');
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyIDSource_89);
        UndlyInstrumentParties_NoUndlyInstrumentParties_89.insert(UnderlyingInstrumentPartyIDSource_89.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_89(143376201);
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyRole_89);
        UndlyInstrumentParties_NoUndlyInstrumentParties_89.insert(UnderlyingInstrumentPartyRole_89.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_89);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_178;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_178("STRING_1037757535");
          noUndlyInstrumentPartySubIDs_0_1_2_3_0.set(UnderlyingInstrumentPartySubID_178);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_178.insert(UnderlyingInstrumentPartySubID_178.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_178(1113714957);
          noUndlyInstrumentPartySubIDs_0_1_2_3_0.set(UnderlyingInstrumentPartySubIDType_178);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_178.insert(UnderlyingInstrumentPartySubIDType_178.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_178);

          noUndlyInstrumentParties_0_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_3_0);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_2);
      }
      noMDEntries_0_0.addGroup(noUnderlyings_0_1_1);
    }
    // YieldData
    multiset<string> YieldData_7;
    FIX::Yield Yield_7;
    Yield_7.setString("64.720000");
    noMDEntries_0_0.set(Yield_7);
    YieldData_7.insert(Yield_7.getString());
    FIX::YieldCalcDate YieldCalcDate_7("LOCALMKTDATE_2070282310");
    noMDEntries_0_0.set(YieldCalcDate_7);
    YieldData_7.insert(YieldCalcDate_7.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_7("LOCALMKTDATE_168607312");
    noMDEntries_0_0.set(YieldRedemptionDate_7);
    YieldData_7.insert(YieldRedemptionDate_7.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_7;
    YieldRedemptionPrice_7.setString("15919765");
    noMDEntries_0_0.set(YieldRedemptionPrice_7);
    YieldData_7.insert(YieldRedemptionPrice_7.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_7(1288561435);
    noMDEntries_0_0.set(YieldRedemptionPriceType_7);
    YieldData_7.insert(YieldRedemptionPriceType_7.getString());
    FIX::YieldType YieldType_7("STRING_ANNUAL");
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
    multiset<string> RoutingGrp_NoRoutingIDs_2;
    FIX::RoutingID RoutingID_2("STRING_452599536");
    noRoutingIDs_0_0.set(RoutingID_2);
    RoutingGrp_NoRoutingIDs_2.insert(RoutingID_2.getString());
    FIX::RoutingType RoutingType_2(4);
    noRoutingIDs_0_0.set(RoutingType_2);
    RoutingGrp_NoRoutingIDs_2.insert(RoutingType_2.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_2);

    msg.addGroup(noRoutingIDs_0_0);
  }
  {
    FIX50SP2::MarketDataIncrementalRefresh::NoRoutingIDs noRoutingIDs_0_1;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_3;
    FIX::RoutingID RoutingID_3("STRING_482697889");
    noRoutingIDs_0_1.set(RoutingID_3);
    RoutingGrp_NoRoutingIDs_3.insert(RoutingID_3.getString());
    FIX::RoutingType RoutingType_3(1);
    noRoutingIDs_0_1.set(RoutingType_3);
    RoutingGrp_NoRoutingIDs_3.insert(RoutingType_3.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_3);

    msg.addGroup(noRoutingIDs_0_1);
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
