#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

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
  set_field(msg, FIX::ApplQueueDepth{1909406725}, MarketDataIncrementalRefresh_0);
  set_field(msg, FIX::ApplQueueResolution{0}, MarketDataIncrementalRefresh_0);
  set_field(msg, FIX::MDBookType{2}, MarketDataIncrementalRefresh_0);
  set_field(msg, FIX::MDFeedType{"STRING_647272475"}, MarketDataIncrementalRefresh_0);
  set_field(msg, FIX::MDReqID{"STRING_594962856"}, MarketDataIncrementalRefresh_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_1318555785"}, MarketDataIncrementalRefresh_0);
  all_values.push_back(MarketDataIncrementalRefresh_0);

  all_compo_names.insert("MarketDataIncrementalRefresh");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_6;
  set_field(msg, FIX::ApplID{"STRING_1035500999"}, ApplicationSequenceControl_6);
  set_field(msg, FIX::ApplLastSeqNum{1542652465}, ApplicationSequenceControl_6);
  set_field(msg, FIX::ApplResendFlag{false}, ApplicationSequenceControl_6);
  set_field(msg, FIX::ApplSeqNum{941966109}, ApplicationSequenceControl_6);
  all_values.push_back(ApplicationSequenceControl_6);
  all_compo_names.insert(".");

  // MDIncGrp
  // Group MDIncGrp.NoMDEntries
  {
    FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries noMDEntries_0_0;
    // MDIncGrp.NoMDEntries
    multiset<string> MDIncGrp_NoMDEntries_0;
    set_field(noMDEntries_0_0, FIX::CorporateAction{"MULTIPLECHARVALUE_W"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::Currency{"JPY"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::DealingCapacity{'P'}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::DeleteReason{'0'}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::DeskID{"STRING_560728104"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::EncodedText{"DATA_1388749569"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::EncodedTextLen{1324737219}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::ExecInst{"MULTIPLECHARVALUE_0"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::ExpireDate{"LOCALMKTDATE_1626150983"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::ExpireTime{FIX::UTCTIMESTAMP(9, 23, 54, 6, 10, 2011)}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::FinancialStatus{"MULTIPLECHARVALUE_2"}, MDIncGrp_NoMDEntries_0);
    FIX::FirstPx FirstPx_0;
    FirstPx_0.setString("15828086");
set_field(noMDEntries_0_0, FirstPx_0, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::HaltReasonInt{2}, MDIncGrp_NoMDEntries_0);
    FIX::HighPx HighPx_0;
    HighPx_0.setString("8748959");
set_field(noMDEntries_0_0, HighPx_0, MDIncGrp_NoMDEntries_0);
    FIX::LastPx LastPx_10;
    LastPx_10.setString("7180804");
set_field(noMDEntries_0_0, LastPx_10, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::LocationID{"STRING_1045565365"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::LotType{'4'}, MDIncGrp_NoMDEntries_0);
    FIX::LowPx LowPx_0;
    LowPx_0.setString("13130432");
set_field(noMDEntries_0_0, LowPx_0, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntryBuyer{"STRING_216637503"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntryDate{FIX::UTCDATEONLY(11, 1, 2017)}, MDIncGrp_NoMDEntries_0);
    FIX::MDEntryForwardPoints MDEntryForwardPoints_0;
    MDEntryForwardPoints_0.setString("10224296");
set_field(noMDEntries_0_0, MDEntryForwardPoints_0, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntryID{"STRING_391837105"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntryOriginator{"STRING_1999233254"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntryPositionNo{778005321}, MDIncGrp_NoMDEntries_0);
    FIX::MDEntryPx MDEntryPx_0;
    MDEntryPx_0.setString("10767041");
set_field(noMDEntries_0_0, MDEntryPx_0, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntryRefID{"STRING_1717088250"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntrySeller{"STRING_1338733425"}, MDIncGrp_NoMDEntries_0);
    FIX::MDEntrySize MDEntrySize_0;
    MDEntrySize_0.setString("3179700");
set_field(noMDEntries_0_0, MDEntrySize_0, MDIncGrp_NoMDEntries_0);
    FIX::MDEntrySpotRate MDEntrySpotRate_0;
    MDEntrySpotRate_0.setString("8943418");
set_field(noMDEntries_0_0, MDEntrySpotRate_0, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntryTime{FIX::UTCTIMEONLY(6, 5, 39)}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntryType{'M'}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDMkt{"EXCHANGE_1535300399"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDOriginType{1}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDPriceLevel{1692233718}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDQuoteType{4}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDStreamID{"STRING_2082383120"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDSubBookType{1127558760}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDUpdateAction{'4'}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MarketDepth{809795400}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MatchType{"STRING_S2"}, MDIncGrp_NoMDEntries_0);
    FIX::MinQty MinQty_2;
    MinQty_2.setString("7703856");
set_field(noMDEntries_0_0, MinQty_2, MDIncGrp_NoMDEntries_0);
    FIX::NetChgPrevDay NetChgPrevDay_0;
    NetChgPrevDay_0.setString("1844801");
set_field(noMDEntries_0_0, NetChgPrevDay_0, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::NumberOfOrders{1011198829}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::OpenCloseSettlFlag{"MULTIPLECHARVALUE_0"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::OrdType{'7'}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::OrderCapacity{'W'}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::OrderID{"STRING_1039409844"}, MDIncGrp_NoMDEntries_0);
    FIX::PriceDelta PriceDelta_1;
    PriceDelta_1.setString("19468177");
set_field(noMDEntries_0_0, PriceDelta_1, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::PriceType{11}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::QuoteCondition{"MULTIPLESTRINGVALUE_y"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::QuoteEntryID{"STRING_1798567380"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::RptSeq{1372362235}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::Scope{"MULTIPLECHARVALUE_3"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::SecondaryOrderID{"STRING_1368171982"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::SecurityTradingStatus{14}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::SellerDays{678437442}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::SettlCurrency{"GBP"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::SettlDate{"LOCALMKTDATE_475074808"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::SettlType{"STRING_9"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::Text{"STRING_1122718241"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::TickDirection{'1'}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::TimeInForce{'2'}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::TradeCondition{"MULTIPLESTRINGVALUE_K"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::TradeID{"STRING_147134508"}, MDIncGrp_NoMDEntries_0);
    FIX::TradeVolume TradeVolume_0;
    TradeVolume_0.setString("9843950");
set_field(noMDEntries_0_0, TradeVolume_0, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::TradingSessionID{"STRING_1"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::TradingSessionSubID{"STRING_3"}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::TransBkdTime{FIX::UTCTIMESTAMP(22, 51, 26, 6, 6, 2000)}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::TransactTime{FIX::UTCTIMESTAMP(14, 43, 5, 4, 2, 2003)}, MDIncGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::TrdType{45}, MDIncGrp_NoMDEntries_0);
    all_values.push_back(MDIncGrp_NoMDEntries_0);
    all_compo_names.insert("...NoMDEntries");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_42;
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuer{"DATA_139591992"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuerLen{1938822439}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDesc{"DATA_1681218558"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDescLen{254622148}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegCFICode{"STRING_183276014"}, InstrumentLeg_42);
      FIX::LegContractMultiplier LegContractMultiplier_42;
      LegContractMultiplier_42.setString("88097");
set_field(noLegs_0_1_0, LegContractMultiplier_42, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegContractMultiplierUnit{1459362470}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_1305994255"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegCountryOfIssue{"COUNTRY_611194156"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_2051919542"}, InstrumentLeg_42);
      FIX::LegCouponRate LegCouponRate_42;
      LegCouponRate_42.setString("91.180000");
set_field(noLegs_0_1_0, LegCouponRate_42, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegCreditRating{"STRING_758328664"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegCurrency{"JPY"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegDatedDate{"LOCALMKTDATE_2033021932"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegExerciseStyle{1598046379}, InstrumentLeg_42);
      FIX::LegFactor LegFactor_42;
      LegFactor_42.setString("18195231");
set_field(noLegs_0_1_0, LegFactor_42, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegFlowScheduleType{858387096}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegInstrRegistry{"STRING_930163777"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_545859429"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegIssueDate{"LOCALMKTDATE_694951089"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegIssuer{"STRING_1249304336"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegLocaleOfIssue{"STRING_2014345229"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_103442367"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_460371091"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegMaturityTime{"TZTIMEONLY_1134681506"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_42);
      FIX::LegOptionRatio LegOptionRatio_42;
      LegOptionRatio_42.setString("11026847");
set_field(noLegs_0_1_0, LegOptionRatio_42, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegPool{"STRING_2053585164"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegPriceUnitOfMeasure{"STRING_1481500986"}, InstrumentLeg_42);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_42;
      LegPriceUnitOfMeasureQty_42.setString("21054659");
set_field(noLegs_0_1_0, LegPriceUnitOfMeasureQty_42, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegProduct{45693508}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegPutOrCall{1272839777}, InstrumentLeg_42);
      FIX::LegRatioQty LegRatioQty_42;
      LegRatioQty_42.setString("16392008");
set_field(noLegs_0_1_0, LegRatioQty_42, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_300315656"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegRepoCollateralSecurityType{"STRING_1456115791"}, InstrumentLeg_42);
      FIX::LegRepurchaseRate LegRepurchaseRate_42;
      LegRepurchaseRate_42.setString("5.410000");
set_field(noLegs_0_1_0, LegRepurchaseRate_42, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegRepurchaseTerm{1759678126}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegSecurityDesc{"STRING_614626399"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegSecurityExchange{"EXCHANGE_111721049"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegSecurityID{"STRING_1664114021"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegSecurityIDSource{"STRING_1865265517"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegSecuritySubType{"STRING_870049713"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegSecurityType{"STRING_405461364"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegSide{'8'}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_755587998"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_42);
      FIX::LegStrikePrice LegStrikePrice_42;
      LegStrikePrice_42.setString("16139750");
set_field(noLegs_0_1_0, LegStrikePrice_42, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegSymbol{"STRING_786187873"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegSymbolSfx{"STRING_1065864289"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegTimeUnit{"STRING_161442535"}, InstrumentLeg_42);
      set_field(noLegs_0_1_0, FIX::LegUnitOfMeasure{"STRING_2035492209"}, InstrumentLeg_42);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_42;
      LegUnitOfMeasureQty_42.setString("9327258");
set_field(noLegs_0_1_0, LegUnitOfMeasureQty_42, InstrumentLeg_42);
      all_values.push_back(InstrumentLeg_42);
      all_compo_names.insert("...NoMDEntries...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_89;
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltID{"STRING_348379652"}, LegSecAltIDGrp_NoLegSecurityAltID_89);
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltIDSource{"STRING_2067407377"}, LegSecAltIDGrp_NoLegSecurityAltID_89);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_89);
        all_compo_names.insert("...NoMDEntries...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_90;
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltID{"STRING_371175461"}, LegSecAltIDGrp_NoLegSecurityAltID_90);
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltIDSource{"STRING_1451064448"}, LegSecAltIDGrp_NoLegSecurityAltID_90);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_90);
        all_compo_names.insert("...NoMDEntries...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      noMDEntries_0_0.addGroup(noLegs_0_1_0);
    }
    // Instrument
    multiset<string> Instrument_28;
    FIX::AttachmentPoint AttachmentPoint_28;
    AttachmentPoint_28.setString("88.930000");
set_field(noMDEntries_0_0, AttachmentPoint_28, Instrument_28);
    set_field(noMDEntries_0_0, FIX::CFICode{"STRING_1852676447"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::CPProgram{2}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::CPRegType{"STRING_2019202401"}, Instrument_28);
    FIX::CapPrice CapPrice_28;
    CapPrice_28.setString("9780325");
set_field(noMDEntries_0_0, CapPrice_28, Instrument_28);
    FIX::ContractMultiplier ContractMultiplier_28;
    ContractMultiplier_28.setString("9007638");
set_field(noMDEntries_0_0, ContractMultiplier_28, Instrument_28);
    set_field(noMDEntries_0_0, FIX::ContractMultiplierUnit{0}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::ContractSettlMonth{"MONTHYEAR_286664720"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::CountryOfIssue{"COUNTRY_401290781"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_1931712536"}, Instrument_28);
    FIX::CouponRate CouponRate_28;
    CouponRate_28.setString("11.190000");
set_field(noMDEntries_0_0, CouponRate_28, Instrument_28);
    set_field(noMDEntries_0_0, FIX::CreditRating{"STRING_513011830"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::DatedDate{"LOCALMKTDATE_1448342909"}, Instrument_28);
    FIX::DetachmentPoint DetachmentPoint_28;
    DetachmentPoint_28.setString("29.880000");
set_field(noMDEntries_0_0, DetachmentPoint_28, Instrument_28);
    set_field(noMDEntries_0_0, FIX::EncodedIssuer{"DATA_1383061544"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::EncodedIssuerLen{1853804273}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::EncodedSecurityDesc{"DATA_1467038309"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::EncodedSecurityDescLen{2138649542}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::ExerciseStyle{1}, Instrument_28);
    FIX::Factor Factor_28;
    Factor_28.setString("19870431");
set_field(noMDEntries_0_0, Factor_28, Instrument_28);
    set_field(noMDEntries_0_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::FlexibleIndicator{false}, Instrument_28);
    FIX::FloorPrice FloorPrice_28;
    FloorPrice_28.setString("9054238");
set_field(noMDEntries_0_0, FloorPrice_28, Instrument_28);
    set_field(noMDEntries_0_0, FIX::FlowScheduleType{3}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::InstrRegistry{"STRING_236541154"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_2031468425"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::IssueDate{"LOCALMKTDATE_584920806"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::Issuer{"STRING_1758073411"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::ListMethod{0}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::LocaleOfIssue{"STRING_2035985254"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::MaturityDate{"LOCALMKTDATE_1584098656"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::MaturityMonthYear{"MONTHYEAR_2107836685"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::MaturityTime{"TZTIMEONLY_1297548319"}, Instrument_28);
    FIX::MinPriceIncrement MinPriceIncrement_28;
    MinPriceIncrement_28.setString("14558174");
set_field(noMDEntries_0_0, MinPriceIncrement_28, Instrument_28);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_28;
    MinPriceIncrementAmount_28.setString("9383856");
set_field(noMDEntries_0_0, MinPriceIncrementAmount_28, Instrument_28);
    set_field(noMDEntries_0_0, FIX::NTPositionLimit{50828558}, Instrument_28);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_28;
    NotionalPercentageOutstanding_28.setString("18.180000");
set_field(noMDEntries_0_0, NotionalPercentageOutstanding_28, Instrument_28);
    set_field(noMDEntries_0_0, FIX::OptAttribute{'1'}, Instrument_28);
    FIX::OptPayoutAmount OptPayoutAmount_28;
    OptPayoutAmount_28.setString("4521193");
set_field(noMDEntries_0_0, OptPayoutAmount_28, Instrument_28);
    set_field(noMDEntries_0_0, FIX::OptPayoutType{3}, Instrument_28);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_28;
    OriginalNotionalPercentageOutstanding_28.setString("14.520000");
set_field(noMDEntries_0_0, OriginalNotionalPercentageOutstanding_28, Instrument_28);
    set_field(noMDEntries_0_0, FIX::Pool{"STRING_965131170"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::PositionLimit{712939967}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::PriceUnitOfMeasure{"STRING_200709066"}, Instrument_28);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_28;
    PriceUnitOfMeasureQty_28.setString("4192605");
set_field(noMDEntries_0_0, PriceUnitOfMeasureQty_28, Instrument_28);
    set_field(noMDEntries_0_0, FIX::Product{2}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::ProductComplex{"STRING_191874960"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::PutOrCall{1}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::RedemptionDate{"LOCALMKTDATE_1904528624"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::RepoCollateralSecurityType{"STRING_1797015948"}, Instrument_28);
    FIX::RepurchaseRate RepurchaseRate_28;
    RepurchaseRate_28.setString("79.060000");
set_field(noMDEntries_0_0, RepurchaseRate_28, Instrument_28);
    set_field(noMDEntries_0_0, FIX::RepurchaseTerm{662468787}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::RestructuringType{"STRING_XR"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::SecurityDesc{"STRING_566679061"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::SecurityExchange{"EXCHANGE_353134821"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::SecurityGroup{"STRING_1300100600"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::SecurityID{"STRING_1151599867"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::SecurityIDSource{"STRING_D"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::SecurityStatus{"STRING_1"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::SecuritySubType{"STRING_1040101474"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::SecurityType{"STRING_EUFRN"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::Seniority{"STRING_SD"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::SettlMethod{'P'}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::SettleOnOpenFlag{"STRING_856157001"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::StateOrProvinceOfIssue{"STRING_306515840"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::StrikeCurrency{"JPY"}, Instrument_28);
    FIX::StrikeMultiplier StrikeMultiplier_28;
    StrikeMultiplier_28.setString("15315661");
set_field(noMDEntries_0_0, StrikeMultiplier_28, Instrument_28);
    FIX::StrikePrice StrikePrice_28;
    StrikePrice_28.setString("6931140");
set_field(noMDEntries_0_0, StrikePrice_28, Instrument_28);
    set_field(noMDEntries_0_0, FIX::StrikePriceBoundaryMethod{4}, Instrument_28);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_28;
    StrikePriceBoundaryPrecision_28.setString("39.780000");
set_field(noMDEntries_0_0, StrikePriceBoundaryPrecision_28, Instrument_28);
    set_field(noMDEntries_0_0, FIX::StrikePriceDeterminationMethod{2}, Instrument_28);
    FIX::StrikeValue StrikeValue_28;
    StrikeValue_28.setString("3140621");
set_field(noMDEntries_0_0, StrikeValue_28, Instrument_28);
    set_field(noMDEntries_0_0, FIX::Symbol{"STRING_2108354771"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::TimeUnit{"STRING_Wk"}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_28);
    set_field(noMDEntries_0_0, FIX::UnitOfMeasure{"STRING_Bbl"}, Instrument_28);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_28;
    UnitOfMeasureQty_28.setString("7149281");
set_field(noMDEntries_0_0, UnitOfMeasureQty_28, Instrument_28);
    set_field(noMDEntries_0_0, FIX::ValuationMethod{"STRING_FUT"}, Instrument_28);
    all_values.push_back(Instrument_28);
    all_compo_names.insert("...NoMDEntries.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_56;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_56);
      FIX::ComplexEventPrice ComplexEventPrice_56;
      ComplexEventPrice_56.setString("2978703");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_56, ComplexEvents_NoComplexEvents_56);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_56);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_56;
      ComplexEventPriceBoundaryPrecision_56.setString("50.710000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_56, ComplexEvents_NoComplexEvents_56);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_56);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_56);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_56;
      ComplexOptPayoutAmount_56.setString("6158612");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_56, ComplexEvents_NoComplexEvents_56);
      all_values.push_back(ComplexEvents_NoComplexEvents_56);
      all_compo_names.insert("...NoMDEntries....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_113;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 39, 31, 9, 1, 2009)}, ComplexEventDates_NoComplexEventDates_113);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 37, 8, 27, 5, 2007)}, ComplexEventDates_NoComplexEventDates_113);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_113);
        all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_223;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 31, 16)}, ComplexEventTimes_NoComplexEventTimes_223);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 29, 34)}, ComplexEventTimes_NoComplexEventTimes_223);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_223);
          all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_224;
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 40, 20)}, ComplexEventTimes_NoComplexEventTimes_224);
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 10, 50)}, ComplexEventTimes_NoComplexEventTimes_224);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_224);
          all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_114;
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 29, 53, 20, 6, 2012)}, ComplexEventDates_NoComplexEventDates_114);
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 14, 1, 21, 7, 2008)}, ComplexEventDates_NoComplexEventDates_114);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_114);
        all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_225;
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 33, 21)}, ComplexEventTimes_NoComplexEventTimes_225);
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 42, 39)}, ComplexEventTimes_NoComplexEventTimes_225);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_225);
          all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_226;
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 19, 9)}, ComplexEventTimes_NoComplexEventTimes_226);
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 12, 37)}, ComplexEventTimes_NoComplexEventTimes_226);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_226);
          all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noMDEntries_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_57;
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_57);
      FIX::ComplexEventPrice ComplexEventPrice_57;
      ComplexEventPrice_57.setString("17132382");
set_field(noComplexEvents_0_1_1, ComplexEventPrice_57, ComplexEvents_NoComplexEvents_57);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_57);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_57;
      ComplexEventPriceBoundaryPrecision_57.setString("65.600000");
set_field(noComplexEvents_0_1_1, ComplexEventPriceBoundaryPrecision_57, ComplexEvents_NoComplexEvents_57);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_57);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_57);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_57;
      ComplexOptPayoutAmount_57.setString("186304");
set_field(noComplexEvents_0_1_1, ComplexOptPayoutAmount_57, ComplexEvents_NoComplexEvents_57);
      all_values.push_back(ComplexEvents_NoComplexEvents_57);
      all_compo_names.insert("...NoMDEntries....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_115;
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 46, 42, 9, 2, 2014)}, ComplexEventDates_NoComplexEventDates_115);
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 18, 31, 17, 3, 2017)}, ComplexEventDates_NoComplexEventDates_115);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_115);
        all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_227;
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 36, 29)}, ComplexEventTimes_NoComplexEventTimes_227);
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 33, 4)}, ComplexEventTimes_NoComplexEventTimes_227);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_227);
          all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_228;
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 54, 13)}, ComplexEventTimes_NoComplexEventTimes_228);
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 22, 57)}, ComplexEventTimes_NoComplexEventTimes_228);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_228);
          all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_116;
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 43, 14, 14, 1, 2004)}, ComplexEventDates_NoComplexEventDates_116);
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 8, 15, 1, 4, 2012)}, ComplexEventDates_NoComplexEventDates_116);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_116);
        all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_229;
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 29, 20)}, ComplexEventTimes_NoComplexEventTimes_229);
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 54, 25)}, ComplexEventTimes_NoComplexEventTimes_229);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_229);
          all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_230;
          set_field(noComplexEventTimes_0_1_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 19, 17)}, ComplexEventTimes_NoComplexEventTimes_230);
          set_field(noComplexEventTimes_0_1_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 40, 59)}, ComplexEventTimes_NoComplexEventTimes_230);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_230);
          all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_117;
        set_field(noComplexEventDates_0_1_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 35, 11, 24, 12, 2007)}, ComplexEventDates_NoComplexEventDates_117);
        set_field(noComplexEventDates_0_1_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 10, 44, 8, 6, 2002)}, ComplexEventDates_NoComplexEventDates_117);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_117);
        all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_231;
          set_field(noComplexEventTimes_0_1_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 19, 0)}, ComplexEventTimes_NoComplexEventTimes_231);
          set_field(noComplexEventTimes_0_1_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 46, 43)}, ComplexEventTimes_NoComplexEventTimes_231);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_231);
          all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_232;
          set_field(noComplexEventTimes_0_1_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 2, 56)}, ComplexEventTimes_NoComplexEventTimes_232);
          set_field(noComplexEventTimes_0_1_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 28, 47)}, ComplexEventTimes_NoComplexEventTimes_232);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_232);
          all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_1);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_233;
          set_field(noComplexEventTimes_0_1_2_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 22, 28)}, ComplexEventTimes_NoComplexEventTimes_233);
          set_field(noComplexEventTimes_0_1_2_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 29, 58)}, ComplexEventTimes_NoComplexEventTimes_233);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_233);
          all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noMDEntries_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_58;
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_58);
      FIX::ComplexEventPrice ComplexEventPrice_58;
      ComplexEventPrice_58.setString("9952563");
set_field(noComplexEvents_0_1_2, ComplexEventPrice_58, ComplexEvents_NoComplexEvents_58);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_58);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_58;
      ComplexEventPriceBoundaryPrecision_58.setString("36.730000");
set_field(noComplexEvents_0_1_2, ComplexEventPriceBoundaryPrecision_58, ComplexEvents_NoComplexEvents_58);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_58);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_58);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_58;
      ComplexOptPayoutAmount_58.setString("4829388");
set_field(noComplexEvents_0_1_2, ComplexOptPayoutAmount_58, ComplexEvents_NoComplexEvents_58);
      all_values.push_back(ComplexEvents_NoComplexEvents_58);
      all_compo_names.insert("...NoMDEntries....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_118;
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 37, 46, 13, 12, 2015)}, ComplexEventDates_NoComplexEventDates_118);
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 23, 44, 8, 8, 2004)}, ComplexEventDates_NoComplexEventDates_118);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_118);
        all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_234;
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 49, 28)}, ComplexEventTimes_NoComplexEventTimes_234);
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 50, 9)}, ComplexEventTimes_NoComplexEventTimes_234);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_234);
          all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_235;
          set_field(noComplexEventTimes_0_2_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 43, 17)}, ComplexEventTimes_NoComplexEventTimes_235);
          set_field(noComplexEventTimes_0_2_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 32, 10)}, ComplexEventTimes_NoComplexEventTimes_235);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_235);
          all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_236;
          set_field(noComplexEventTimes_0_2_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 47, 19)}, ComplexEventTimes_NoComplexEventTimes_236);
          set_field(noComplexEventTimes_0_2_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 32, 57)}, ComplexEventTimes_NoComplexEventTimes_236);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_236);
          all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_119;
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 41, 7, 7, 2, 2016)}, ComplexEventDates_NoComplexEventDates_119);
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 23, 52, 5, 3, 2012)}, ComplexEventDates_NoComplexEventDates_119);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_119);
        all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_237;
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 5, 38)}, ComplexEventTimes_NoComplexEventTimes_237);
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 11, 24)}, ComplexEventTimes_NoComplexEventTimes_237);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_237);
          all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_238;
          set_field(noComplexEventTimes_0_2_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 4, 4)}, ComplexEventTimes_NoComplexEventTimes_238);
          set_field(noComplexEventTimes_0_2_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 36, 8)}, ComplexEventTimes_NoComplexEventTimes_238);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_238);
          all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_1);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_120;
        set_field(noComplexEventDates_0_2_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(0, 41, 18, 4, 7, 2014)}, ComplexEventDates_NoComplexEventDates_120);
        set_field(noComplexEventDates_0_2_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 8, 4, 22, 3, 2003)}, ComplexEventDates_NoComplexEventDates_120);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_120);
        all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_239;
          set_field(noComplexEventTimes_0_2_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 10, 38)}, ComplexEventTimes_NoComplexEventTimes_239);
          set_field(noComplexEventTimes_0_2_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 49, 5)}, ComplexEventTimes_NoComplexEventTimes_239);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_239);
          all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_240;
          set_field(noComplexEventTimes_0_2_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 1, 2)}, ComplexEventTimes_NoComplexEventTimes_240);
          set_field(noComplexEventTimes_0_2_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 38, 3)}, ComplexEventTimes_NoComplexEventTimes_240);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_240);
          all_compo_names.insert("...NoMDEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_1);
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
      multiset<string> EvntGrp_NoEvents_61;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_1727507155"}, EvntGrp_NoEvents_61);
      FIX::EventPx EventPx_61;
      EventPx_61.setString("11812796");
set_field(noEvents_0_1_0, EventPx_61, EvntGrp_NoEvents_61);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_2012023597"}, EvntGrp_NoEvents_61);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(19, 21, 47, 0, 10, 2003)}, EvntGrp_NoEvents_61);
      set_field(noEvents_0_1_0, FIX::EventType{16}, EvntGrp_NoEvents_61);
      all_values.push_back(EvntGrp_NoEvents_61);
      all_compo_names.insert("...NoMDEntries....NoEvents");

      noMDEntries_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_62;
      set_field(noEvents_0_1_1, FIX::EventDate{"LOCALMKTDATE_951237359"}, EvntGrp_NoEvents_62);
      FIX::EventPx EventPx_62;
      EventPx_62.setString("4280951");
set_field(noEvents_0_1_1, EventPx_62, EvntGrp_NoEvents_62);
      set_field(noEvents_0_1_1, FIX::EventText{"STRING_1340119588"}, EvntGrp_NoEvents_62);
      set_field(noEvents_0_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(13, 38, 37, 6, 5, 2006)}, EvntGrp_NoEvents_62);
      set_field(noEvents_0_1_1, FIX::EventType{17}, EvntGrp_NoEvents_62);
      all_values.push_back(EvntGrp_NoEvents_62);
      all_compo_names.insert("...NoMDEntries....NoEvents");

      noMDEntries_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_53;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_127132021"}, InstrumentParties_NoInstrumentParties_53);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_53);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{595607760}, InstrumentParties_NoInstrumentParties_53);
      all_values.push_back(InstrumentParties_NoInstrumentParties_53);
      all_compo_names.insert("...NoMDEntries....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_1247002718"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{571180410}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106);
        all_compo_names.insert("...NoMDEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107;
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubID{"STRING_1840914008"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107);
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubIDType{1737056097}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107);
        all_compo_names.insert("...NoMDEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noMDEntries_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_54;
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyID{"STRING_151203917"}, InstrumentParties_NoInstrumentParties_54);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyIDSource{'8'}, InstrumentParties_NoInstrumentParties_54);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyRole{1601596046}, InstrumentParties_NoInstrumentParties_54);
      all_values.push_back(InstrumentParties_NoInstrumentParties_54);
      all_compo_names.insert("...NoMDEntries....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108;
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubID{"STRING_927278920"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108);
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubIDType{1521526959}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108);
        all_compo_names.insert("...NoMDEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109;
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubID{"STRING_785934939"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109);
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubIDType{691332005}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109);
        all_compo_names.insert("...NoMDEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      noMDEntries_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_56;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_345339743"}, SecAltIDGrp_NoSecurityAltID_56);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_893950400"}, SecAltIDGrp_NoSecurityAltID_56);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_56);
      all_compo_names.insert("...NoMDEntries....NoSecurityAltID");

      noMDEntries_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_57;
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltID{"STRING_1182181852"}, SecAltIDGrp_NoSecurityAltID_57);
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltIDSource{"STRING_773434845"}, SecAltIDGrp_NoSecurityAltID_57);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_57);
      all_compo_names.insert("...NoMDEntries....NoSecurityAltID");

      noMDEntries_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_58;
      set_field(noSecurityAltID_0_1_2, FIX::SecurityAltID{"STRING_86586340"}, SecAltIDGrp_NoSecurityAltID_58);
      set_field(noSecurityAltID_0_1_2, FIX::SecurityAltIDSource{"STRING_21201883"}, SecAltIDGrp_NoSecurityAltID_58);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_58);
      all_compo_names.insert("...NoMDEntries....NoSecurityAltID");

      noMDEntries_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_56;
    set_field(noMDEntries_0_0, FIX::SecurityXML{"XMLDATA_1245320435"}, SecurityXML_56);
    set_field(noMDEntries_0_0, FIX::SecurityXMLLen{1954235118}, SecurityXML_56);
    set_field(noMDEntries_0_0, FIX::SecurityXMLSchema{"STRING_1437406280"}, SecurityXML_56);
    all_values.push_back(SecurityXML_56);
    all_compo_names.insert("...NoMDEntries..");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_52;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_2116464730"}, Parties_NoPartyIDs_52);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'C'}, Parties_NoPartyIDs_52);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{83}, Parties_NoPartyIDs_52);
      all_values.push_back(Parties_NoPartyIDs_52);
      all_compo_names.insert("...NoMDEntries...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_108;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_446353592"}, PtysSubGrp_NoPartySubIDs_108);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{13}, PtysSubGrp_NoPartySubIDs_108);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_108);
        all_compo_names.insert("...NoMDEntries...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_53;
      set_field(noPartyIDs_0_1_1, FIX::PartyID{"STRING_1077730860"}, Parties_NoPartyIDs_53);
      set_field(noPartyIDs_0_1_1, FIX::PartyIDSource{'6'}, Parties_NoPartyIDs_53);
      set_field(noPartyIDs_0_1_1, FIX::PartyRole{10}, Parties_NoPartyIDs_53);
      all_values.push_back(Parties_NoPartyIDs_53);
      all_compo_names.insert("...NoMDEntries...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_109;
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubID{"STRING_1700677716"}, PtysSubGrp_NoPartySubIDs_109);
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubIDType{32}, PtysSubGrp_NoPartySubIDs_109);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_109);
        all_compo_names.insert("...NoMDEntries...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_110;
        set_field(noPartySubIDs_0_1_2_1, FIX::PartySubID{"STRING_1800115188"}, PtysSubGrp_NoPartySubIDs_110);
        set_field(noPartySubIDs_0_1_2_1, FIX::PartySubIDType{11}, PtysSubGrp_NoPartySubIDs_110);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_110);
        all_compo_names.insert("...NoMDEntries...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_54;
      set_field(noPartyIDs_0_1_2, FIX::PartyID{"STRING_52930660"}, Parties_NoPartyIDs_54);
      set_field(noPartyIDs_0_1_2, FIX::PartyIDSource{'H'}, Parties_NoPartyIDs_54);
      set_field(noPartyIDs_0_1_2, FIX::PartyRole{32}, Parties_NoPartyIDs_54);
      all_values.push_back(Parties_NoPartyIDs_54);
      all_compo_names.insert("...NoMDEntries...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_111;
        set_field(noPartySubIDs_0_2_2_0, FIX::PartySubID{"STRING_784929492"}, PtysSubGrp_NoPartySubIDs_111);
        set_field(noPartySubIDs_0_2_2_0, FIX::PartySubIDType{9}, PtysSubGrp_NoPartySubIDs_111);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_111);
        all_compo_names.insert("...NoMDEntries...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_112;
        set_field(noPartySubIDs_0_2_2_1, FIX::PartySubID{"STRING_1805402112"}, PtysSubGrp_NoPartySubIDs_112);
        set_field(noPartySubIDs_0_2_2_1, FIX::PartySubIDType{30}, PtysSubGrp_NoPartySubIDs_112);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_112);
        all_compo_names.insert("...NoMDEntries...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_1);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoRateSources noRateSources_0_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_6;
      set_field(noRateSources_0_1_0, FIX::RateSource{1}, RateSource_NoRateSources_6);
      set_field(noRateSources_0_1_0, FIX::RateSourceType{1}, RateSource_NoRateSources_6);
      set_field(noRateSources_0_1_0, FIX::ReferencePage{"STRING_879568131"}, RateSource_NoRateSources_6);
      all_values.push_back(RateSource_NoRateSources_6);
      all_compo_names.insert("...NoMDEntries...NoRateSources");

      noMDEntries_0_0.addGroup(noRateSources_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoRateSources noRateSources_0_1_1;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_7;
      set_field(noRateSources_0_1_1, FIX::RateSource{0}, RateSource_NoRateSources_7);
      set_field(noRateSources_0_1_1, FIX::RateSourceType{0}, RateSource_NoRateSources_7);
      set_field(noRateSources_0_1_1, FIX::ReferencePage{"STRING_686319601"}, RateSource_NoRateSources_7);
      all_values.push_back(RateSource_NoRateSources_7);
      all_compo_names.insert("...NoMDEntries...NoRateSources");

      noMDEntries_0_0.addGroup(noRateSources_0_1_1);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoRateSources noRateSources_0_1_2;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_8;
      set_field(noRateSources_0_1_2, FIX::RateSource{1}, RateSource_NoRateSources_8);
      set_field(noRateSources_0_1_2, FIX::RateSourceType{1}, RateSource_NoRateSources_8);
      set_field(noRateSources_0_1_2, FIX::ReferencePage{"STRING_655300684"}, RateSource_NoRateSources_8);
      all_values.push_back(RateSource_NoRateSources_8);
      all_compo_names.insert("...NoMDEntries...NoRateSources");

      noMDEntries_0_0.addGroup(noRateSources_0_1_2);
    }
    // SecSizesGrp
    // Group SecSizesGrp.NoOfSecSizes
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_0_1_0;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_0;
      FIX::MDSecSize MDSecSize_0;
      MDSecSize_0.setString("2375449");
set_field(noOfSecSizes_0_1_0, MDSecSize_0, SecSizesGrp_NoOfSecSizes_0);
      set_field(noOfSecSizes_0_1_0, FIX::MDSecSizeType{1}, SecSizesGrp_NoOfSecSizes_0);
      all_values.push_back(SecSizesGrp_NoOfSecSizes_0);
      all_compo_names.insert("...NoMDEntries...NoOfSecSizes");

      noMDEntries_0_0.addGroup(noOfSecSizes_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_0_1_1;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_1;
      FIX::MDSecSize MDSecSize_1;
      MDSecSize_1.setString("9167999");
set_field(noOfSecSizes_0_1_1, MDSecSize_1, SecSizesGrp_NoOfSecSizes_1);
      set_field(noOfSecSizes_0_1_1, FIX::MDSecSizeType{1}, SecSizesGrp_NoOfSecSizes_1);
      all_values.push_back(SecSizesGrp_NoOfSecSizes_1);
      all_compo_names.insert("...NoMDEntries...NoOfSecSizes");

      noMDEntries_0_0.addGroup(noOfSecSizes_0_1_1);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_0_1_2;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_2;
      FIX::MDSecSize MDSecSize_2;
      MDSecSize_2.setString("676709");
set_field(noOfSecSizes_0_1_2, MDSecSize_2, SecSizesGrp_NoOfSecSizes_2);
      set_field(noOfSecSizes_0_1_2, FIX::MDSecSizeType{1}, SecSizesGrp_NoOfSecSizes_2);
      all_values.push_back(SecSizesGrp_NoOfSecSizes_2);
      all_compo_names.insert("...NoMDEntries...NoOfSecSizes");

      noMDEntries_0_0.addGroup(noOfSecSizes_0_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_12;
    set_field(noMDEntries_0_0, FIX::BenchmarkCurveCurrency{"JPY"}, SpreadOrBenchmarkCurveData_12);
    set_field(noMDEntries_0_0, FIX::BenchmarkCurveName{"STRING_LIBID"}, SpreadOrBenchmarkCurveData_12);
    set_field(noMDEntries_0_0, FIX::BenchmarkCurvePoint{"STRING_1607852101"}, SpreadOrBenchmarkCurveData_12);
    FIX::BenchmarkPrice BenchmarkPrice_12;
    BenchmarkPrice_12.setString("13692138");
set_field(noMDEntries_0_0, BenchmarkPrice_12, SpreadOrBenchmarkCurveData_12);
    set_field(noMDEntries_0_0, FIX::BenchmarkPriceType{757661886}, SpreadOrBenchmarkCurveData_12);
    set_field(noMDEntries_0_0, FIX::BenchmarkSecurityID{"STRING_1660782761"}, SpreadOrBenchmarkCurveData_12);
    set_field(noMDEntries_0_0, FIX::BenchmarkSecurityIDSource{"STRING_1368208361"}, SpreadOrBenchmarkCurveData_12);
    FIX::Spread Spread_12;
    Spread_12.setString("21128449");
set_field(noMDEntries_0_0, Spread_12, SpreadOrBenchmarkCurveData_12);
    all_values.push_back(SpreadOrBenchmarkCurveData_12);
    all_compo_names.insert("...NoMDEntries.");

    // StatsIndGrp
    // Group StatsIndGrp.NoStatsIndicators
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoStatsIndicators noStatsIndicators_0_1_0;
      // StatsIndGrp.NoStatsIndicators
      multiset<string> StatsIndGrp_NoStatsIndicators_0;
      set_field(noStatsIndicators_0_1_0, FIX::StatsType{3}, StatsIndGrp_NoStatsIndicators_0);
      all_values.push_back(StatsIndGrp_NoStatsIndicators_0);
      all_compo_names.insert("...NoMDEntries...NoStatsIndicators");

      noMDEntries_0_0.addGroup(noStatsIndicators_0_1_0);
    }
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoStatsIndicators noStatsIndicators_0_1_1;
      // StatsIndGrp.NoStatsIndicators
      multiset<string> StatsIndGrp_NoStatsIndicators_1;
      set_field(noStatsIndicators_0_1_1, FIX::StatsType{4}, StatsIndGrp_NoStatsIndicators_1);
      all_values.push_back(StatsIndGrp_NoStatsIndicators_1);
      all_compo_names.insert("...NoMDEntries...NoStatsIndicators");

      noMDEntries_0_0.addGroup(noStatsIndicators_0_1_1);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_50;
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuer{"DATA_1135923441"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuerLen{657374454}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1585775514"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDescLen{892143874}, UnderlyingInstrument_50);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_50;
      UnderlyingAdjustedQuantity_50.setString("15369425");
set_field(noUnderlyings_0_1_0, UnderlyingAdjustedQuantity_50, UnderlyingInstrument_50);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_50;
      UnderlyingAllocationPercent_50.setString("40.660000");
set_field(noUnderlyings_0_1_0, UnderlyingAllocationPercent_50, UnderlyingInstrument_50);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_50;
      UnderlyingAttachmentPoint_50.setString("47.420000");
set_field(noUnderlyings_0_1_0, UnderlyingAttachmentPoint_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCFICode{"STRING_75778538"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPProgram{"STRING_450818899"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPRegType{"STRING_403333380"}, UnderlyingInstrument_50);
      FIX::UnderlyingCapValue UnderlyingCapValue_50;
      UnderlyingCapValue_50.setString("7310792");
set_field(noUnderlyings_0_1_0, UnderlyingCapValue_50, UnderlyingInstrument_50);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_50;
      UnderlyingCashAmount_50.setString("9212653");
set_field(noUnderlyings_0_1_0, UnderlyingCashAmount_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_50);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_50;
      UnderlyingContractMultiplier_50.setString("18685030");
set_field(noUnderlyings_0_1_0, UnderlyingContractMultiplier_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingContractMultiplierUnit{1838065298}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_640666337"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1936174004"}, UnderlyingInstrument_50);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_50;
      UnderlyingCouponRate_50.setString("53.540000");
set_field(noUnderlyings_0_1_0, UnderlyingCouponRate_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCreditRating{"STRING_1649700176"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_50);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_50;
      UnderlyingCurrentValue_50.setString("11100686");
set_field(noUnderlyings_0_1_0, UnderlyingCurrentValue_50, UnderlyingInstrument_50);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_50;
      UnderlyingDetachmentPoint_50.setString("27.840000");
set_field(noUnderlyings_0_1_0, UnderlyingDetachmentPoint_50, UnderlyingInstrument_50);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_50;
      UnderlyingDirtyPrice_50.setString("15545650");
set_field(noUnderlyings_0_1_0, UnderlyingDirtyPrice_50, UnderlyingInstrument_50);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_50;
      UnderlyingEndPrice_50.setString("6233677");
set_field(noUnderlyings_0_1_0, UnderlyingEndPrice_50, UnderlyingInstrument_50);
      FIX::UnderlyingEndValue UnderlyingEndValue_50;
      UnderlyingEndValue_50.setString("20952111");
set_field(noUnderlyings_0_1_0, UnderlyingEndValue_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingExerciseStyle{1519926285}, UnderlyingInstrument_50);
      FIX::UnderlyingFXRate UnderlyingFXRate_50;
      UnderlyingFXRate_50.setString("17111244");
set_field(noUnderlyings_0_1_0, UnderlyingFXRate_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_50);
      FIX::UnderlyingFactor UnderlyingFactor_50;
      UnderlyingFactor_50.setString("13843189");
set_field(noUnderlyings_0_1_0, UnderlyingFactor_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFlowScheduleType{309316023}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingInstrRegistry{"STRING_1089305145"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2041693402"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssuer{"STRING_1895091537"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_1981449020"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1431152339"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_47201956"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1727650114"}, UnderlyingInstrument_50);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_50;
      UnderlyingNotionalPercentageOutstanding_50.setString("8.770000");
set_field(noUnderlyings_0_1_0, UnderlyingNotionalPercentageOutstanding_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingOptAttribute{'4'}, UnderlyingInstrument_50);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_50;
      UnderlyingOriginalNotionalPercentageOutstanding_50.setString("34.940000");
set_field(noUnderlyings_0_1_0, UnderlyingOriginalNotionalPercentageOutstanding_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_90526452"}, UnderlyingInstrument_50);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_50;
      UnderlyingPriceUnitOfMeasureQty_50.setString("14192861");
set_field(noUnderlyings_0_1_0, UnderlyingPriceUnitOfMeasureQty_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingProduct{624378157}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPutOrCall{1959029459}, UnderlyingInstrument_50);
      FIX::UnderlyingPx UnderlyingPx_50;
      UnderlyingPx_50.setString("11098678");
set_field(noUnderlyings_0_1_0, UnderlyingPx_50, UnderlyingInstrument_50);
      FIX::UnderlyingQty UnderlyingQty_50;
      UnderlyingQty_50.setString("12650444");
set_field(noUnderlyings_0_1_0, UnderlyingQty_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1747719815"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1577013163"}, UnderlyingInstrument_50);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_50;
      UnderlyingRepurchaseRate_50.setString("10.220000");
set_field(noUnderlyings_0_1_0, UnderlyingRepurchaseRate_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepurchaseTerm{1105508791}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRestructuringType{"STRING_226432642"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityDesc{"STRING_1877329651"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1832511575"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityID{"STRING_1780997655"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityIDSource{"STRING_353213745"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecuritySubType{"STRING_1780239073"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityType{"STRING_1153440292"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSeniority{"STRING_2064338220"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlMethod{"STRING_1733620777"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_50);
      FIX::UnderlyingStartValue UnderlyingStartValue_50;
      UnderlyingStartValue_50.setString("2261705");
set_field(noUnderlyings_0_1_0, UnderlyingStartValue_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_675442275"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_50);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_50;
      UnderlyingStrikePrice_50.setString("5094076");
set_field(noUnderlyings_0_1_0, UnderlyingStrikePrice_50, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbol{"STRING_1715637685"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbolSfx{"STRING_20980441"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingTimeUnit{"STRING_89574113"}, UnderlyingInstrument_50);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_1075084915"}, UnderlyingInstrument_50);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_50;
      UnderlyingUnitOfMeasureQty_50.setString("5190012");
set_field(noUnderlyings_0_1_0, UnderlyingUnitOfMeasureQty_50, UnderlyingInstrument_50);
      all_values.push_back(UnderlyingInstrument_50);
      all_compo_names.insert("...NoMDEntries...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_105;
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_1165611367"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_105);
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1938287455"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_105);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_105);
        all_compo_names.insert("...NoMDEntries...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_106;
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_697452117"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_106);
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_977157178"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_106);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_106);
        all_compo_names.insert("...NoMDEntries...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_107;
        set_field(noUnderlyingSecurityAltID_0_0_2_2, FIX::UnderlyingSecurityAltID{"STRING_900671616"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_107);
        set_field(noUnderlyingSecurityAltID_0_0_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1962496612"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_107);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_107);
        all_compo_names.insert("...NoMDEntries...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_100;
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipType{"STRING_330201131"}, UnderlyingStipulations_NoUnderlyingStips_100);
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipValue{"STRING_582273986"}, UnderlyingStipulations_NoUnderlyingStips_100);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_100);
        all_compo_names.insert("...NoMDEntries...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_101;
        set_field(noUnderlyingStips_0_0_2_1, FIX::UnderlyingStipType{"STRING_1682902136"}, UnderlyingStipulations_NoUnderlyingStips_101);
        set_field(noUnderlyingStips_0_0_2_1, FIX::UnderlyingStipValue{"STRING_556633774"}, UnderlyingStipulations_NoUnderlyingStips_101);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_101);
        all_compo_names.insert("...NoMDEntries...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_104;
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1367930063"}, UndlyInstrumentParties_NoUndlyInstrumentParties_104);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_104);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyRole{665333735}, UndlyInstrumentParties_NoUndlyInstrumentParties_104);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_104);
        all_compo_names.insert("...NoMDEntries...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_204;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1343588074"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_204);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{582188307}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_204);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_204);
          all_compo_names.insert("...NoMDEntries...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_205;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_586822618"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_205);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1733863666}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_205);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_205);
          all_compo_names.insert("...NoMDEntries...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_206;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_808358903"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_206);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{1262264893}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_206);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_206);
          all_compo_names.insert("...NoMDEntries...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_105;
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_2018349013"}, UndlyInstrumentParties_NoUndlyInstrumentParties_105);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_105);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyRole{1771672540}, UndlyInstrumentParties_NoUndlyInstrumentParties_105);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_105);
        all_compo_names.insert("...NoMDEntries...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_207;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_803117829"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_207);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1861246654}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_207);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_207);
          all_compo_names.insert("...NoMDEntries...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_106;
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_514104317"}, UndlyInstrumentParties_NoUndlyInstrumentParties_106);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_106);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyRole{1934320614}, UndlyInstrumentParties_NoUndlyInstrumentParties_106);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_106);
        all_compo_names.insert("...NoMDEntries...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataIncrementalRefresh::NoMDEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_208;
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1112922932"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_208);
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{484289083}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_208);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_208);
          all_compo_names.insert("...NoMDEntries...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_2);
      }
      noMDEntries_0_0.addGroup(noUnderlyings_0_1_0);
    }
    // YieldData
    multiset<string> YieldData_7;
    FIX::Yield Yield_7;
    Yield_7.setString("92.140000");
set_field(noMDEntries_0_0, Yield_7, YieldData_7);
    set_field(noMDEntries_0_0, FIX::YieldCalcDate{"LOCALMKTDATE_2013594548"}, YieldData_7);
    set_field(noMDEntries_0_0, FIX::YieldRedemptionDate{"LOCALMKTDATE_299302047"}, YieldData_7);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_7;
    YieldRedemptionPrice_7.setString("10867825");
set_field(noMDEntries_0_0, YieldRedemptionPrice_7, YieldData_7);
    set_field(noMDEntries_0_0, FIX::YieldRedemptionPriceType{196312032}, YieldData_7);
    set_field(noMDEntries_0_0, FIX::YieldType{"STRING_TENDER"}, YieldData_7);
    all_values.push_back(YieldData_7);
    all_compo_names.insert("...NoMDEntries.");

    msg.addGroup(noMDEntries_0_0);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::MarketDataIncrementalRefresh::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_2;
    set_field(noRoutingIDs_0_0, FIX::RoutingID{"STRING_752945806"}, RoutingGrp_NoRoutingIDs_2);
    set_field(noRoutingIDs_0_0, FIX::RoutingType{1}, RoutingGrp_NoRoutingIDs_2);
    all_values.push_back(RoutingGrp_NoRoutingIDs_2);
    all_compo_names.insert("...NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_0);
  }

  xml_element elt;
  converter.fix2fixml(msg, elt);
  BOOST_LOG_TRIVIAL(debug) << "The resulting XML is";
cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
cout << "////////////////////////////////////////////" << endl << endl;

  BOOST_LOG_TRIVIAL(debug) << "Quickfix XML representation is";cout << "////////////////////////////////////////////" << endl;
cout << msg.toXML() << endl;
cout << "////////////////////////////////////////////" << endl << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  if (elt_lists.size() != all_values.size())  {
    multiset<string> elt_compo_name;
    elt.all_components(elt_compo_name);
    BOOST_LOG_TRIVIAL(debug) << "XML Elements are:";
    cout << "	[";
    copy(elt_compo_name.begin(), elt_compo_name.end(), ostream_iterator<string>(cout, " "));    cout << "]" << endl;

    BOOST_LOG_TRIVIAL(debug) << "FIX Components are:"; 
    cout << "	[";
    copy(all_compo_names.begin(), all_compo_names.end(), ostream_iterator<string>(cout, " "));    cout << "]" << endl;

  }
  BOOST_LOG_TRIVIAL(debug) << "All FIX components";
  for (const auto& l : all_values) {
    cout << "	[";
copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;
  }
  BOOST_LOG_TRIVIAL(debug) << "All XML components";
  for (const auto& l : elt_lists) {
    cout << "	[";
copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;

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
      BOOST_LOG_TRIVIAL(debug) << "[TO CHECK] This XML component was not found in FIX message";
      cout << "	 ---> [";
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << "]" << endl << endl;
    } // end if ! found
  } // end for elt_lists
}
