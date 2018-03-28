#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/TradingSessionListUpdateReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradingSessionListUpdateReport, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::TradingSessionListUpdateReport msg;

  list<multiset<string>> all_values;
  multiset<string> TradingSessionListUpdateReport_0;
  FIX::TradSesReqID TradSesReqID_2("STRING_487251558");
  msg.set(TradSesReqID_2);
  TradingSessionListUpdateReport_0.insert(TradSesReqID_2.getString());
  all_values.push_back(TradingSessionListUpdateReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_21;
  FIX::ApplID ApplID_21("STRING_1961513845");
  msg.set(ApplID_21);
  ApplicationSequenceControl_21.insert(ApplID_21.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_21(264541287);
  msg.set(ApplLastSeqNum_21);
  ApplicationSequenceControl_21.insert(ApplLastSeqNum_21.getString());
  FIX::ApplResendFlag ApplResendFlag_21(true);
  msg.set(ApplResendFlag_21);
  ApplicationSequenceControl_21.insert(ApplResendFlag_21.getString());
  FIX::ApplSeqNum ApplSeqNum_21(675422078);
  msg.set(ApplSeqNum_21);
  ApplicationSequenceControl_21.insert(ApplSeqNum_21.getString());
  all_values.push_back(ApplicationSequenceControl_21);

  // TrdSessLstGrp
  // Group TrdSessLstGrp.NoTradingSessions
  {
    FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions noTradingSessions_0_0;
    // TrdSessLstGrp.NoTradingSessions
    multiset<string> TrdSessLstGrp_NoTradingSessions_3;
    FIX::EncodedText EncodedText_107("DATA_335600108");
    noTradingSessions_0_0.set(EncodedText_107);
    TrdSessLstGrp_NoTradingSessions_3.insert(EncodedText_107.getString());
    FIX::EncodedTextLen EncodedTextLen_107(354637648);
    noTradingSessions_0_0.set(EncodedTextLen_107);
    TrdSessLstGrp_NoTradingSessions_3.insert(EncodedTextLen_107.getString());
    FIX::MarketID MarketID_30("EXCHANGE_2012376391");
    noTradingSessions_0_0.set(MarketID_30);
    TrdSessLstGrp_NoTradingSessions_3.insert(MarketID_30.getString());
    FIX::MarketSegmentID MarketSegmentID_30("STRING_1594811858");
    noTradingSessions_0_0.set(MarketSegmentID_30);
    TrdSessLstGrp_NoTradingSessions_3.insert(MarketSegmentID_30.getString());
    FIX::SecurityExchange SecurityExchange_97("EXCHANGE_1208241366");
    noTradingSessions_0_0.set(SecurityExchange_97);
    TrdSessLstGrp_NoTradingSessions_3.insert(SecurityExchange_97.getString());
    FIX::Text Text_107("STRING_233686738");
    noTradingSessions_0_0.set(Text_107);
    TrdSessLstGrp_NoTradingSessions_3.insert(Text_107.getString());
    FIX::TotalVolumeTraded TotalVolumeTraded_3;
    TotalVolumeTraded_3.setString("1154277");
    noTradingSessions_0_0.set(TotalVolumeTraded_3);
    TrdSessLstGrp_NoTradingSessions_3.insert(TotalVolumeTraded_3.getString());
    FIX::TradSesCloseTime TradSesCloseTime_3(FIX::UTCTIMESTAMP(14, 35, 14, 24, 12, 2007));
    noTradingSessions_0_0.set(TradSesCloseTime_3);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradSesCloseTime_3.getString());
    FIX::TradSesEndTime TradSesEndTime_3(FIX::UTCTIMESTAMP(8, 37, 42, 25, 12, 2009));
    noTradingSessions_0_0.set(TradSesEndTime_3);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradSesEndTime_3.getString());
    FIX::TradSesMethod TradSesMethod_4(3);
    noTradingSessions_0_0.set(TradSesMethod_4);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradSesMethod_4.getString());
    FIX::TradSesMode TradSesMode_4(1);
    noTradingSessions_0_0.set(TradSesMode_4);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradSesMode_4.getString());
    FIX::TradSesOpenTime TradSesOpenTime_3(FIX::UTCTIMESTAMP(5, 3, 4, 4, 12, 2007));
    noTradingSessions_0_0.set(TradSesOpenTime_3);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradSesOpenTime_3.getString());
    FIX::TradSesPreCloseTime TradSesPreCloseTime_3(FIX::UTCTIMESTAMP(11, 3, 16, 22, 10, 2008));
    noTradingSessions_0_0.set(TradSesPreCloseTime_3);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradSesPreCloseTime_3.getString());
    FIX::TradSesStartTime TradSesStartTime_3(FIX::UTCTIMESTAMP(3, 5, 30, 9, 2, 2017));
    noTradingSessions_0_0.set(TradSesStartTime_3);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradSesStartTime_3.getString());
    FIX::TradSesStatus TradSesStatus_3(5);
    noTradingSessions_0_0.set(TradSesStatus_3);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradSesStatus_3.getString());
    FIX::TradSesStatusRejReason TradSesStatusRejReason_3(99);
    noTradingSessions_0_0.set(TradSesStatusRejReason_3);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradSesStatusRejReason_3.getString());
    FIX::TradSesUpdateAction TradSesUpdateAction_3('1');
    noTradingSessions_0_0.set(TradSesUpdateAction_3);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradSesUpdateAction_3.getString());
    FIX::TradingSessionDesc TradingSessionDesc_3("STRING_9772804");
    noTradingSessions_0_0.set(TradingSessionDesc_3);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradingSessionDesc_3.getString());
    FIX::TradingSessionID TradingSessionID_99("STRING_2");
    noTradingSessions_0_0.set(TradingSessionID_99);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradingSessionID_99.getString());
    FIX::TradingSessionSubID TradingSessionSubID_99("STRING_2");
    noTradingSessions_0_0.set(TradingSessionSubID_99);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradingSessionSubID_99.getString());
    FIX::TransactTime TransactTime_73(FIX::UTCTIMESTAMP(3, 25, 52, 6, 12, 2017));
    noTradingSessions_0_0.set(TransactTime_73);
    TrdSessLstGrp_NoTradingSessions_3.insert(TransactTime_73.getString());
    FIX::UnsolicitedIndicator UnsolicitedIndicator_7(true);
    noTradingSessions_0_0.set(UnsolicitedIndicator_7);
    TrdSessLstGrp_NoTradingSessions_3.insert(UnsolicitedIndicator_7.getString());
    all_values.push_back(TrdSessLstGrp_NoTradingSessions_3);

    // TradingSessionRules
    // ExecInstRules
    // Group ExecInstRules.NoExecInstRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoExecInstRules noExecInstRules_0_1_0;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_42;
      FIX::ExecInstValue ExecInstValue_42('2');
      noExecInstRules_0_1_0.set(ExecInstValue_42);
      ExecInstRules_NoExecInstRules_42.insert(ExecInstValue_42.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_42);

      noTradingSessions_0_0.addGroup(noExecInstRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoExecInstRules noExecInstRules_0_1_1;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_43;
      FIX::ExecInstValue ExecInstValue_43('1');
      noExecInstRules_0_1_1.set(ExecInstValue_43);
      ExecInstRules_NoExecInstRules_43.insert(ExecInstValue_43.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_43);

      noTradingSessions_0_0.addGroup(noExecInstRules_0_1_1);
    }
    // MarketDataFeedTypes
    // Group MarketDataFeedTypes.NoMDFeedTypes
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_0;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_44;
      FIX::MDBookType MDBookType_47(3);
      noMDFeedTypes_0_1_0.set(MDBookType_47);
      MarketDataFeedTypes_NoMDFeedTypes_44.insert(MDBookType_47.getString());
      FIX::MDFeedType MDFeedType_46("STRING_1241229540");
      noMDFeedTypes_0_1_0.set(MDFeedType_46);
      MarketDataFeedTypes_NoMDFeedTypes_44.insert(MDFeedType_46.getString());
      FIX::MarketDepth MarketDepth_49(1312841325);
      noMDFeedTypes_0_1_0.set(MarketDepth_49);
      MarketDataFeedTypes_NoMDFeedTypes_44.insert(MarketDepth_49.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_44);

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_1;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_45;
      FIX::MDBookType MDBookType_48(2);
      noMDFeedTypes_0_1_1.set(MDBookType_48);
      MarketDataFeedTypes_NoMDFeedTypes_45.insert(MDBookType_48.getString());
      FIX::MDFeedType MDFeedType_47("STRING_489379441");
      noMDFeedTypes_0_1_1.set(MDFeedType_47);
      MarketDataFeedTypes_NoMDFeedTypes_45.insert(MDFeedType_47.getString());
      FIX::MarketDepth MarketDepth_50(10975491);
      noMDFeedTypes_0_1_1.set(MarketDepth_50);
      MarketDataFeedTypes_NoMDFeedTypes_45.insert(MarketDepth_50.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_45);

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_1);
    }
    // MatchRules
    // Group MatchRules.NoMatchRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_0_1_0;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_41;
      FIX::MatchAlgorithm MatchAlgorithm_41("STRING_799191725");
      noMatchRules_0_1_0.set(MatchAlgorithm_41);
      MatchRules_NoMatchRules_41.insert(MatchAlgorithm_41.getString());
      FIX::MatchType MatchType_49("STRING_S1");
      noMatchRules_0_1_0.set(MatchType_49);
      MatchRules_NoMatchRules_41.insert(MatchType_49.getString());
      all_values.push_back(MatchRules_NoMatchRules_41);

      noTradingSessions_0_0.addGroup(noMatchRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_0_1_1;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_42;
      FIX::MatchAlgorithm MatchAlgorithm_42("STRING_329980328");
      noMatchRules_0_1_1.set(MatchAlgorithm_42);
      MatchRules_NoMatchRules_42.insert(MatchAlgorithm_42.getString());
      FIX::MatchType MatchType_50("STRING_5");
      noMatchRules_0_1_1.set(MatchType_50);
      MatchRules_NoMatchRules_42.insert(MatchType_50.getString());
      all_values.push_back(MatchRules_NoMatchRules_42);

      noTradingSessions_0_0.addGroup(noMatchRules_0_1_1);
    }
    // OrdTypeRules
    // Group OrdTypeRules.NoOrdTypeRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_0;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_52;
      FIX::OrdType OrdType_80('J');
      noOrdTypeRules_0_1_0.set(OrdType_80);
      OrdTypeRules_NoOrdTypeRules_52.insert(OrdType_80.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_52);

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_1;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_53;
      FIX::OrdType OrdType_81('6');
      noOrdTypeRules_0_1_1.set(OrdType_81);
      OrdTypeRules_NoOrdTypeRules_53.insert(OrdType_81.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_53);

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_1);
    }
    // TimeInForceRules
    // Group TimeInForceRules.NoTimeInForceRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_0;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_47;
      FIX::TimeInForce TimeInForce_62('3');
      noTimeInForceRules_0_1_0.set(TimeInForce_62);
      TimeInForceRules_NoTimeInForceRules_47.insert(TimeInForce_62.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_47);

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_1;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_48;
      FIX::TimeInForce TimeInForce_63('5');
      noTimeInForceRules_0_1_1.set(TimeInForce_63);
      TimeInForceRules_NoTimeInForceRules_48.insert(TimeInForce_63.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_48);

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_1);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_2;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_49;
      FIX::TimeInForce TimeInForce_64('6');
      noTimeInForceRules_0_1_2.set(TimeInForce_64);
      TimeInForceRules_NoTimeInForceRules_49.insert(TimeInForce_64.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_49);

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_2);
    }
    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions noTradingSessions_0_1;
    // TrdSessLstGrp.NoTradingSessions
    multiset<string> TrdSessLstGrp_NoTradingSessions_4;
    FIX::EncodedText EncodedText_108("DATA_287258606");
    noTradingSessions_0_1.set(EncodedText_108);
    TrdSessLstGrp_NoTradingSessions_4.insert(EncodedText_108.getString());
    FIX::EncodedTextLen EncodedTextLen_108(2049374820);
    noTradingSessions_0_1.set(EncodedTextLen_108);
    TrdSessLstGrp_NoTradingSessions_4.insert(EncodedTextLen_108.getString());
    FIX::MarketID MarketID_31("EXCHANGE_2134006945");
    noTradingSessions_0_1.set(MarketID_31);
    TrdSessLstGrp_NoTradingSessions_4.insert(MarketID_31.getString());
    FIX::MarketSegmentID MarketSegmentID_31("STRING_918948472");
    noTradingSessions_0_1.set(MarketSegmentID_31);
    TrdSessLstGrp_NoTradingSessions_4.insert(MarketSegmentID_31.getString());
    FIX::SecurityExchange SecurityExchange_98("EXCHANGE_772384485");
    noTradingSessions_0_1.set(SecurityExchange_98);
    TrdSessLstGrp_NoTradingSessions_4.insert(SecurityExchange_98.getString());
    FIX::Text Text_108("STRING_2050273663");
    noTradingSessions_0_1.set(Text_108);
    TrdSessLstGrp_NoTradingSessions_4.insert(Text_108.getString());
    FIX::TotalVolumeTraded TotalVolumeTraded_4;
    TotalVolumeTraded_4.setString("10794587");
    noTradingSessions_0_1.set(TotalVolumeTraded_4);
    TrdSessLstGrp_NoTradingSessions_4.insert(TotalVolumeTraded_4.getString());
    FIX::TradSesCloseTime TradSesCloseTime_4(FIX::UTCTIMESTAMP(21, 14, 23, 15, 8, 2001));
    noTradingSessions_0_1.set(TradSesCloseTime_4);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradSesCloseTime_4.getString());
    FIX::TradSesEndTime TradSesEndTime_4(FIX::UTCTIMESTAMP(8, 9, 49, 23, 12, 2004));
    noTradingSessions_0_1.set(TradSesEndTime_4);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradSesEndTime_4.getString());
    FIX::TradSesMethod TradSesMethod_5(1);
    noTradingSessions_0_1.set(TradSesMethod_5);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradSesMethod_5.getString());
    FIX::TradSesMode TradSesMode_5(3);
    noTradingSessions_0_1.set(TradSesMode_5);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradSesMode_5.getString());
    FIX::TradSesOpenTime TradSesOpenTime_4(FIX::UTCTIMESTAMP(13, 14, 41, 26, 6, 2002));
    noTradingSessions_0_1.set(TradSesOpenTime_4);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradSesOpenTime_4.getString());
    FIX::TradSesPreCloseTime TradSesPreCloseTime_4(FIX::UTCTIMESTAMP(12, 19, 17, 12, 9, 2004));
    noTradingSessions_0_1.set(TradSesPreCloseTime_4);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradSesPreCloseTime_4.getString());
    FIX::TradSesStartTime TradSesStartTime_4(FIX::UTCTIMESTAMP(16, 49, 13, 23, 1, 2012));
    noTradingSessions_0_1.set(TradSesStartTime_4);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradSesStartTime_4.getString());
    FIX::TradSesStatus TradSesStatus_4(5);
    noTradingSessions_0_1.set(TradSesStatus_4);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradSesStatus_4.getString());
    FIX::TradSesStatusRejReason TradSesStatusRejReason_4(1);
    noTradingSessions_0_1.set(TradSesStatusRejReason_4);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradSesStatusRejReason_4.getString());
    FIX::TradSesUpdateAction TradSesUpdateAction_4('1');
    noTradingSessions_0_1.set(TradSesUpdateAction_4);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradSesUpdateAction_4.getString());
    FIX::TradingSessionDesc TradingSessionDesc_4("STRING_2043187809");
    noTradingSessions_0_1.set(TradingSessionDesc_4);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradingSessionDesc_4.getString());
    FIX::TradingSessionID TradingSessionID_100("STRING_4");
    noTradingSessions_0_1.set(TradingSessionID_100);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradingSessionID_100.getString());
    FIX::TradingSessionSubID TradingSessionSubID_100("STRING_3");
    noTradingSessions_0_1.set(TradingSessionSubID_100);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradingSessionSubID_100.getString());
    FIX::TransactTime TransactTime_74(FIX::UTCTIMESTAMP(7, 12, 37, 3, 6, 2013));
    noTradingSessions_0_1.set(TransactTime_74);
    TrdSessLstGrp_NoTradingSessions_4.insert(TransactTime_74.getString());
    FIX::UnsolicitedIndicator UnsolicitedIndicator_8(false);
    noTradingSessions_0_1.set(UnsolicitedIndicator_8);
    TrdSessLstGrp_NoTradingSessions_4.insert(UnsolicitedIndicator_8.getString());
    all_values.push_back(TrdSessLstGrp_NoTradingSessions_4);

    // TradingSessionRules
    // ExecInstRules
    // Group ExecInstRules.NoExecInstRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoExecInstRules noExecInstRules_1_1_0;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_44;
      FIX::ExecInstValue ExecInstValue_44('1');
      noExecInstRules_1_1_0.set(ExecInstValue_44);
      ExecInstRules_NoExecInstRules_44.insert(ExecInstValue_44.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_44);

      noTradingSessions_0_1.addGroup(noExecInstRules_1_1_0);
    }
    // MarketDataFeedTypes
    // Group MarketDataFeedTypes.NoMDFeedTypes
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_1_1_0;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_46;
      FIX::MDBookType MDBookType_49(2);
      noMDFeedTypes_1_1_0.set(MDBookType_49);
      MarketDataFeedTypes_NoMDFeedTypes_46.insert(MDBookType_49.getString());
      FIX::MDFeedType MDFeedType_48("STRING_1336216828");
      noMDFeedTypes_1_1_0.set(MDFeedType_48);
      MarketDataFeedTypes_NoMDFeedTypes_46.insert(MDFeedType_48.getString());
      FIX::MarketDepth MarketDepth_51(615719446);
      noMDFeedTypes_1_1_0.set(MarketDepth_51);
      MarketDataFeedTypes_NoMDFeedTypes_46.insert(MarketDepth_51.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_46);

      noTradingSessions_0_1.addGroup(noMDFeedTypes_1_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_1_1_1;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_47;
      FIX::MDBookType MDBookType_50(1);
      noMDFeedTypes_1_1_1.set(MDBookType_50);
      MarketDataFeedTypes_NoMDFeedTypes_47.insert(MDBookType_50.getString());
      FIX::MDFeedType MDFeedType_49("STRING_392363928");
      noMDFeedTypes_1_1_1.set(MDFeedType_49);
      MarketDataFeedTypes_NoMDFeedTypes_47.insert(MDFeedType_49.getString());
      FIX::MarketDepth MarketDepth_52(781814262);
      noMDFeedTypes_1_1_1.set(MarketDepth_52);
      MarketDataFeedTypes_NoMDFeedTypes_47.insert(MarketDepth_52.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_47);

      noTradingSessions_0_1.addGroup(noMDFeedTypes_1_1_1);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_1_1_2;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_48;
      FIX::MDBookType MDBookType_51(3);
      noMDFeedTypes_1_1_2.set(MDBookType_51);
      MarketDataFeedTypes_NoMDFeedTypes_48.insert(MDBookType_51.getString());
      FIX::MDFeedType MDFeedType_50("STRING_527969747");
      noMDFeedTypes_1_1_2.set(MDFeedType_50);
      MarketDataFeedTypes_NoMDFeedTypes_48.insert(MDFeedType_50.getString());
      FIX::MarketDepth MarketDepth_53(2123957711);
      noMDFeedTypes_1_1_2.set(MarketDepth_53);
      MarketDataFeedTypes_NoMDFeedTypes_48.insert(MarketDepth_53.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_48);

      noTradingSessions_0_1.addGroup(noMDFeedTypes_1_1_2);
    }
    // MatchRules
    // Group MatchRules.NoMatchRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_1_1_0;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_43;
      FIX::MatchAlgorithm MatchAlgorithm_43("STRING_1696906201");
      noMatchRules_1_1_0.set(MatchAlgorithm_43);
      MatchRules_NoMatchRules_43.insert(MatchAlgorithm_43.getString());
      FIX::MatchType MatchType_51("STRING_7");
      noMatchRules_1_1_0.set(MatchType_51);
      MatchRules_NoMatchRules_43.insert(MatchType_51.getString());
      all_values.push_back(MatchRules_NoMatchRules_43);

      noTradingSessions_0_1.addGroup(noMatchRules_1_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_1_1_1;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_44;
      FIX::MatchAlgorithm MatchAlgorithm_44("STRING_521058462");
      noMatchRules_1_1_1.set(MatchAlgorithm_44);
      MatchRules_NoMatchRules_44.insert(MatchAlgorithm_44.getString());
      FIX::MatchType MatchType_52("STRING_2");
      noMatchRules_1_1_1.set(MatchType_52);
      MatchRules_NoMatchRules_44.insert(MatchType_52.getString());
      all_values.push_back(MatchRules_NoMatchRules_44);

      noTradingSessions_0_1.addGroup(noMatchRules_1_1_1);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_1_1_2;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_45;
      FIX::MatchAlgorithm MatchAlgorithm_45("STRING_824788727");
      noMatchRules_1_1_2.set(MatchAlgorithm_45);
      MatchRules_NoMatchRules_45.insert(MatchAlgorithm_45.getString());
      FIX::MatchType MatchType_53("STRING_A1");
      noMatchRules_1_1_2.set(MatchType_53);
      MatchRules_NoMatchRules_45.insert(MatchType_53.getString());
      all_values.push_back(MatchRules_NoMatchRules_45);

      noTradingSessions_0_1.addGroup(noMatchRules_1_1_2);
    }
    // OrdTypeRules
    // Group OrdTypeRules.NoOrdTypeRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_1_1_0;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_54;
      FIX::OrdType OrdType_82('1');
      noOrdTypeRules_1_1_0.set(OrdType_82);
      OrdTypeRules_NoOrdTypeRules_54.insert(OrdType_82.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_54);

      noTradingSessions_0_1.addGroup(noOrdTypeRules_1_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_1_1_1;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_55;
      FIX::OrdType OrdType_83('Q');
      noOrdTypeRules_1_1_1.set(OrdType_83);
      OrdTypeRules_NoOrdTypeRules_55.insert(OrdType_83.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_55);

      noTradingSessions_0_1.addGroup(noOrdTypeRules_1_1_1);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_1_1_2;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_56;
      FIX::OrdType OrdType_84('7');
      noOrdTypeRules_1_1_2.set(OrdType_84);
      OrdTypeRules_NoOrdTypeRules_56.insert(OrdType_84.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_56);

      noTradingSessions_0_1.addGroup(noOrdTypeRules_1_1_2);
    }
    // TimeInForceRules
    // Group TimeInForceRules.NoTimeInForceRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_1_1_0;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_50;
      FIX::TimeInForce TimeInForce_65('0');
      noTimeInForceRules_1_1_0.set(TimeInForce_65);
      TimeInForceRules_NoTimeInForceRules_50.insert(TimeInForce_65.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_50);

      noTradingSessions_0_1.addGroup(noTimeInForceRules_1_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_1_1_1;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_51;
      FIX::TimeInForce TimeInForce_66('6');
      noTimeInForceRules_1_1_1.set(TimeInForce_66);
      TimeInForceRules_NoTimeInForceRules_51.insert(TimeInForce_66.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_51);

      noTradingSessions_0_1.addGroup(noTimeInForceRules_1_1_1);
    }
    msg.addGroup(noTradingSessions_0_1);
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
