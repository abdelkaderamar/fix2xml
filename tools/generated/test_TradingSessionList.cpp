#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/TradingSessionList.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradingSessionList, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::TradingSessionList msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradingSessionList_0;
  FIX::TradSesReqID TradSesReqID_0("STRING_1198046064");
  msg.set(TradSesReqID_0);
  TradingSessionList_0.insert(TradSesReqID_0.getString());
  all_values.push_back(TradingSessionList_0);

  all_compo_names.insert("TradingSessionList");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_20;
  FIX::ApplID ApplID_20("STRING_118901190");
  msg.set(ApplID_20);
  ApplicationSequenceControl_20.insert(ApplID_20.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_20(1899892782);
  msg.set(ApplLastSeqNum_20);
  ApplicationSequenceControl_20.insert(ApplLastSeqNum_20.getString());
  FIX::ApplResendFlag ApplResendFlag_20(false);
  msg.set(ApplResendFlag_20);
  ApplicationSequenceControl_20.insert(ApplResendFlag_20.getString());
  FIX::ApplSeqNum ApplSeqNum_20(611942051);
  msg.set(ApplSeqNum_20);
  ApplicationSequenceControl_20.insert(ApplSeqNum_20.getString());
  all_values.push_back(ApplicationSequenceControl_20);
  all_compo_names.insert("ApplicationSequenceControl");

  // TrdSessLstGrp
  // Group TrdSessLstGrp.NoTradingSessions
  {
    FIX50SP2::TradingSessionList::NoTradingSessions noTradingSessions_0_0;
    // TrdSessLstGrp.NoTradingSessions
    multiset<string> TrdSessLstGrp_NoTradingSessions_0;
    FIX::EncodedText EncodedText_106("DATA_1642999679");
    noTradingSessions_0_0.set(EncodedText_106);
    TrdSessLstGrp_NoTradingSessions_0.insert(EncodedText_106.getString());
    FIX::EncodedTextLen EncodedTextLen_106(1427318264);
    noTradingSessions_0_0.set(EncodedTextLen_106);
    TrdSessLstGrp_NoTradingSessions_0.insert(EncodedTextLen_106.getString());
    FIX::MarketID MarketID_29("EXCHANGE_1276079972");
    noTradingSessions_0_0.set(MarketID_29);
    TrdSessLstGrp_NoTradingSessions_0.insert(MarketID_29.getString());
    FIX::MarketSegmentID MarketSegmentID_29("STRING_638485019");
    noTradingSessions_0_0.set(MarketSegmentID_29);
    TrdSessLstGrp_NoTradingSessions_0.insert(MarketSegmentID_29.getString());
    FIX::SecurityExchange SecurityExchange_104("EXCHANGE_592287960");
    noTradingSessions_0_0.set(SecurityExchange_104);
    TrdSessLstGrp_NoTradingSessions_0.insert(SecurityExchange_104.getString());
    FIX::Text Text_106("STRING_1754642872");
    noTradingSessions_0_0.set(Text_106);
    TrdSessLstGrp_NoTradingSessions_0.insert(Text_106.getString());
    FIX::TotalVolumeTraded TotalVolumeTraded_0;
    TotalVolumeTraded_0.setString("4518536");
    noTradingSessions_0_0.set(TotalVolumeTraded_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TotalVolumeTraded_0.getString());
    FIX::TradSesCloseTime TradSesCloseTime_0(FIX::UTCTIMESTAMP(4, 13, 33, 15, 12, 2006));
    noTradingSessions_0_0.set(TradSesCloseTime_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesCloseTime_0.getString());
    FIX::TradSesEndTime TradSesEndTime_0(FIX::UTCTIMESTAMP(8, 6, 36, 24, 9, 2006));
    noTradingSessions_0_0.set(TradSesEndTime_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesEndTime_0.getString());
    FIX::TradSesMethod TradSesMethod_0(1);
    noTradingSessions_0_0.set(TradSesMethod_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesMethod_0.getString());
    FIX::TradSesMode TradSesMode_0(1);
    noTradingSessions_0_0.set(TradSesMode_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesMode_0.getString());
    FIX::TradSesOpenTime TradSesOpenTime_0(FIX::UTCTIMESTAMP(1, 21, 45, 23, 2, 2003));
    noTradingSessions_0_0.set(TradSesOpenTime_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesOpenTime_0.getString());
    FIX::TradSesPreCloseTime TradSesPreCloseTime_0(FIX::UTCTIMESTAMP(4, 33, 7, 12, 10, 2010));
    noTradingSessions_0_0.set(TradSesPreCloseTime_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesPreCloseTime_0.getString());
    FIX::TradSesStartTime TradSesStartTime_0(FIX::UTCTIMESTAMP(21, 32, 30, 15, 5, 2003));
    noTradingSessions_0_0.set(TradSesStartTime_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesStartTime_0.getString());
    FIX::TradSesStatus TradSesStatus_0(1);
    noTradingSessions_0_0.set(TradSesStatus_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesStatus_0.getString());
    FIX::TradSesStatusRejReason TradSesStatusRejReason_0(99);
    noTradingSessions_0_0.set(TradSesStatusRejReason_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesStatusRejReason_0.getString());
    FIX::TradSesUpdateAction TradSesUpdateAction_0('1');
    noTradingSessions_0_0.set(TradSesUpdateAction_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesUpdateAction_0.getString());
    FIX::TradingSessionDesc TradingSessionDesc_0("STRING_156388031");
    noTradingSessions_0_0.set(TradingSessionDesc_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradingSessionDesc_0.getString());
    FIX::TradingSessionID TradingSessionID_123("STRING_2");
    noTradingSessions_0_0.set(TradingSessionID_123);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradingSessionID_123.getString());
    FIX::TradingSessionSubID TradingSessionSubID_123("STRING_5");
    noTradingSessions_0_0.set(TradingSessionSubID_123);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradingSessionSubID_123.getString());
    FIX::TransactTime TransactTime_76(FIX::UTCTIMESTAMP(23, 48, 33, 22, 6, 2012));
    noTradingSessions_0_0.set(TransactTime_76);
    TrdSessLstGrp_NoTradingSessions_0.insert(TransactTime_76.getString());
    FIX::UnsolicitedIndicator UnsolicitedIndicator_4(true);
    noTradingSessions_0_0.set(UnsolicitedIndicator_4);
    TrdSessLstGrp_NoTradingSessions_0.insert(UnsolicitedIndicator_4.getString());
    all_values.push_back(TrdSessLstGrp_NoTradingSessions_0);
    all_compo_names.insert("TrdSessLstGrp.NoTradingSessions");

    // TradingSessionRules
    // ExecInstRules
    // Group ExecInstRules.NoExecInstRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoExecInstRules noExecInstRules_0_1_0;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_60;
      FIX::ExecInstValue ExecInstValue_60('2');
      noExecInstRules_0_1_0.set(ExecInstValue_60);
      ExecInstRules_NoExecInstRules_60.insert(ExecInstValue_60.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_60);
      all_compo_names.insert("ExecInstRules.NoExecInstRules");

      noTradingSessions_0_0.addGroup(noExecInstRules_0_1_0);
    }
    // MarketDataFeedTypes
    // Group MarketDataFeedTypes.NoMDFeedTypes
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_0;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_57;
      FIX::MDBookType MDBookType_60(3);
      noMDFeedTypes_0_1_0.set(MDBookType_60);
      MarketDataFeedTypes_NoMDFeedTypes_57.insert(MDBookType_60.getString());
      FIX::MDFeedType MDFeedType_59("STRING_690683296");
      noMDFeedTypes_0_1_0.set(MDFeedType_59);
      MarketDataFeedTypes_NoMDFeedTypes_57.insert(MDFeedType_59.getString());
      FIX::MarketDepth MarketDepth_61(359460614);
      noMDFeedTypes_0_1_0.set(MarketDepth_61);
      MarketDataFeedTypes_NoMDFeedTypes_57.insert(MarketDepth_61.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_57);
      all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_1;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_58;
      FIX::MDBookType MDBookType_61(2);
      noMDFeedTypes_0_1_1.set(MDBookType_61);
      MarketDataFeedTypes_NoMDFeedTypes_58.insert(MDBookType_61.getString());
      FIX::MDFeedType MDFeedType_60("STRING_1796139296");
      noMDFeedTypes_0_1_1.set(MDFeedType_60);
      MarketDataFeedTypes_NoMDFeedTypes_58.insert(MDFeedType_60.getString());
      FIX::MarketDepth MarketDepth_62(1904629428);
      noMDFeedTypes_0_1_1.set(MarketDepth_62);
      MarketDataFeedTypes_NoMDFeedTypes_58.insert(MarketDepth_62.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_58);
      all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_1);
    }
    // MatchRules
    // Group MatchRules.NoMatchRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMatchRules noMatchRules_0_1_0;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_61;
      FIX::MatchAlgorithm MatchAlgorithm_61("STRING_1205965325");
      noMatchRules_0_1_0.set(MatchAlgorithm_61);
      MatchRules_NoMatchRules_61.insert(MatchAlgorithm_61.getString());
      FIX::MatchType MatchType_68("STRING_AQ");
      noMatchRules_0_1_0.set(MatchType_68);
      MatchRules_NoMatchRules_61.insert(MatchType_68.getString());
      all_values.push_back(MatchRules_NoMatchRules_61);
      all_compo_names.insert("MatchRules.NoMatchRules");

      noTradingSessions_0_0.addGroup(noMatchRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMatchRules noMatchRules_0_1_1;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_62;
      FIX::MatchAlgorithm MatchAlgorithm_62("STRING_445111100");
      noMatchRules_0_1_1.set(MatchAlgorithm_62);
      MatchRules_NoMatchRules_62.insert(MatchAlgorithm_62.getString());
      FIX::MatchType MatchType_69("STRING_S4");
      noMatchRules_0_1_1.set(MatchType_69);
      MatchRules_NoMatchRules_62.insert(MatchType_69.getString());
      all_values.push_back(MatchRules_NoMatchRules_62);
      all_compo_names.insert("MatchRules.NoMatchRules");

      noTradingSessions_0_0.addGroup(noMatchRules_0_1_1);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMatchRules noMatchRules_0_1_2;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_63;
      FIX::MatchAlgorithm MatchAlgorithm_63("STRING_1006086044");
      noMatchRules_0_1_2.set(MatchAlgorithm_63);
      MatchRules_NoMatchRules_63.insert(MatchAlgorithm_63.getString());
      FIX::MatchType MatchType_70("STRING_3");
      noMatchRules_0_1_2.set(MatchType_70);
      MatchRules_NoMatchRules_63.insert(MatchType_70.getString());
      all_values.push_back(MatchRules_NoMatchRules_63);
      all_compo_names.insert("MatchRules.NoMatchRules");

      noTradingSessions_0_0.addGroup(noMatchRules_0_1_2);
    }
    // OrdTypeRules
    // Group OrdTypeRules.NoOrdTypeRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_0;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_60;
      FIX::OrdType OrdType_98('2');
      noOrdTypeRules_0_1_0.set(OrdType_98);
      OrdTypeRules_NoOrdTypeRules_60.insert(OrdType_98.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_60);
      all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_0);
    }
    // TimeInForceRules
    // Group TimeInForceRules.NoTimeInForceRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_0;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_61;
      FIX::TimeInForce TimeInForce_79('2');
      noTimeInForceRules_0_1_0.set(TimeInForce_79);
      TimeInForceRules_NoTimeInForceRules_61.insert(TimeInForce_79.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_61);
      all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_1;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_62;
      FIX::TimeInForce TimeInForce_80('0');
      noTimeInForceRules_0_1_1.set(TimeInForce_80);
      TimeInForceRules_NoTimeInForceRules_62.insert(TimeInForce_80.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_62);
      all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_1);
    }
    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::TradingSessionList::NoTradingSessions noTradingSessions_0_1;
    // TrdSessLstGrp.NoTradingSessions
    multiset<string> TrdSessLstGrp_NoTradingSessions_1;
    FIX::EncodedText EncodedText_107("DATA_889971378");
    noTradingSessions_0_1.set(EncodedText_107);
    TrdSessLstGrp_NoTradingSessions_1.insert(EncodedText_107.getString());
    FIX::EncodedTextLen EncodedTextLen_107(1573497268);
    noTradingSessions_0_1.set(EncodedTextLen_107);
    TrdSessLstGrp_NoTradingSessions_1.insert(EncodedTextLen_107.getString());
    FIX::MarketID MarketID_30("EXCHANGE_370610796");
    noTradingSessions_0_1.set(MarketID_30);
    TrdSessLstGrp_NoTradingSessions_1.insert(MarketID_30.getString());
    FIX::MarketSegmentID MarketSegmentID_30("STRING_915165017");
    noTradingSessions_0_1.set(MarketSegmentID_30);
    TrdSessLstGrp_NoTradingSessions_1.insert(MarketSegmentID_30.getString());
    FIX::SecurityExchange SecurityExchange_105("EXCHANGE_1486301048");
    noTradingSessions_0_1.set(SecurityExchange_105);
    TrdSessLstGrp_NoTradingSessions_1.insert(SecurityExchange_105.getString());
    FIX::Text Text_107("STRING_461555289");
    noTradingSessions_0_1.set(Text_107);
    TrdSessLstGrp_NoTradingSessions_1.insert(Text_107.getString());
    FIX::TotalVolumeTraded TotalVolumeTraded_1;
    TotalVolumeTraded_1.setString("18825616");
    noTradingSessions_0_1.set(TotalVolumeTraded_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TotalVolumeTraded_1.getString());
    FIX::TradSesCloseTime TradSesCloseTime_1(FIX::UTCTIMESTAMP(15, 24, 38, 15, 6, 2011));
    noTradingSessions_0_1.set(TradSesCloseTime_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesCloseTime_1.getString());
    FIX::TradSesEndTime TradSesEndTime_1(FIX::UTCTIMESTAMP(7, 31, 35, 3, 4, 2004));
    noTradingSessions_0_1.set(TradSesEndTime_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesEndTime_1.getString());
    FIX::TradSesMethod TradSesMethod_1(2);
    noTradingSessions_0_1.set(TradSesMethod_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesMethod_1.getString());
    FIX::TradSesMode TradSesMode_1(1);
    noTradingSessions_0_1.set(TradSesMode_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesMode_1.getString());
    FIX::TradSesOpenTime TradSesOpenTime_1(FIX::UTCTIMESTAMP(1, 52, 59, 23, 10, 2001));
    noTradingSessions_0_1.set(TradSesOpenTime_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesOpenTime_1.getString());
    FIX::TradSesPreCloseTime TradSesPreCloseTime_1(FIX::UTCTIMESTAMP(16, 33, 27, 9, 6, 2000));
    noTradingSessions_0_1.set(TradSesPreCloseTime_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesPreCloseTime_1.getString());
    FIX::TradSesStartTime TradSesStartTime_1(FIX::UTCTIMESTAMP(3, 32, 53, 13, 4, 2004));
    noTradingSessions_0_1.set(TradSesStartTime_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesStartTime_1.getString());
    FIX::TradSesStatus TradSesStatus_1(0);
    noTradingSessions_0_1.set(TradSesStatus_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesStatus_1.getString());
    FIX::TradSesStatusRejReason TradSesStatusRejReason_1(1);
    noTradingSessions_0_1.set(TradSesStatusRejReason_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesStatusRejReason_1.getString());
    FIX::TradSesUpdateAction TradSesUpdateAction_1('7');
    noTradingSessions_0_1.set(TradSesUpdateAction_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesUpdateAction_1.getString());
    FIX::TradingSessionDesc TradingSessionDesc_1("STRING_830224107");
    noTradingSessions_0_1.set(TradingSessionDesc_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradingSessionDesc_1.getString());
    FIX::TradingSessionID TradingSessionID_124("STRING_2");
    noTradingSessions_0_1.set(TradingSessionID_124);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradingSessionID_124.getString());
    FIX::TradingSessionSubID TradingSessionSubID_124("STRING_4");
    noTradingSessions_0_1.set(TradingSessionSubID_124);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradingSessionSubID_124.getString());
    FIX::TransactTime TransactTime_77(FIX::UTCTIMESTAMP(9, 26, 26, 12, 5, 2016));
    noTradingSessions_0_1.set(TransactTime_77);
    TrdSessLstGrp_NoTradingSessions_1.insert(TransactTime_77.getString());
    FIX::UnsolicitedIndicator UnsolicitedIndicator_5(false);
    noTradingSessions_0_1.set(UnsolicitedIndicator_5);
    TrdSessLstGrp_NoTradingSessions_1.insert(UnsolicitedIndicator_5.getString());
    all_values.push_back(TrdSessLstGrp_NoTradingSessions_1);
    all_compo_names.insert("TrdSessLstGrp.NoTradingSessions");

    // TradingSessionRules
    // ExecInstRules
    // Group ExecInstRules.NoExecInstRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoExecInstRules noExecInstRules_1_1_0;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_61;
      FIX::ExecInstValue ExecInstValue_61('2');
      noExecInstRules_1_1_0.set(ExecInstValue_61);
      ExecInstRules_NoExecInstRules_61.insert(ExecInstValue_61.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_61);
      all_compo_names.insert("ExecInstRules.NoExecInstRules");

      noTradingSessions_0_1.addGroup(noExecInstRules_1_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoExecInstRules noExecInstRules_1_1_1;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_62;
      FIX::ExecInstValue ExecInstValue_62('2');
      noExecInstRules_1_1_1.set(ExecInstValue_62);
      ExecInstRules_NoExecInstRules_62.insert(ExecInstValue_62.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_62);
      all_compo_names.insert("ExecInstRules.NoExecInstRules");

      noTradingSessions_0_1.addGroup(noExecInstRules_1_1_1);
    }
    // MarketDataFeedTypes
    // Group MarketDataFeedTypes.NoMDFeedTypes
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_1_1_0;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_59;
      FIX::MDBookType MDBookType_62(1);
      noMDFeedTypes_1_1_0.set(MDBookType_62);
      MarketDataFeedTypes_NoMDFeedTypes_59.insert(MDBookType_62.getString());
      FIX::MDFeedType MDFeedType_61("STRING_804789086");
      noMDFeedTypes_1_1_0.set(MDFeedType_61);
      MarketDataFeedTypes_NoMDFeedTypes_59.insert(MDFeedType_61.getString());
      FIX::MarketDepth MarketDepth_63(1015215270);
      noMDFeedTypes_1_1_0.set(MarketDepth_63);
      MarketDataFeedTypes_NoMDFeedTypes_59.insert(MarketDepth_63.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_59);
      all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

      noTradingSessions_0_1.addGroup(noMDFeedTypes_1_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_1_1_1;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_60;
      FIX::MDBookType MDBookType_63(1);
      noMDFeedTypes_1_1_1.set(MDBookType_63);
      MarketDataFeedTypes_NoMDFeedTypes_60.insert(MDBookType_63.getString());
      FIX::MDFeedType MDFeedType_62("STRING_705553380");
      noMDFeedTypes_1_1_1.set(MDFeedType_62);
      MarketDataFeedTypes_NoMDFeedTypes_60.insert(MDFeedType_62.getString());
      FIX::MarketDepth MarketDepth_64(381495478);
      noMDFeedTypes_1_1_1.set(MarketDepth_64);
      MarketDataFeedTypes_NoMDFeedTypes_60.insert(MarketDepth_64.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_60);
      all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

      noTradingSessions_0_1.addGroup(noMDFeedTypes_1_1_1);
    }
    // MatchRules
    // Group MatchRules.NoMatchRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMatchRules noMatchRules_1_1_0;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_64;
      FIX::MatchAlgorithm MatchAlgorithm_64("STRING_1274638551");
      noMatchRules_1_1_0.set(MatchAlgorithm_64);
      MatchRules_NoMatchRules_64.insert(MatchAlgorithm_64.getString());
      FIX::MatchType MatchType_71("STRING_7");
      noMatchRules_1_1_0.set(MatchType_71);
      MatchRules_NoMatchRules_64.insert(MatchType_71.getString());
      all_values.push_back(MatchRules_NoMatchRules_64);
      all_compo_names.insert("MatchRules.NoMatchRules");

      noTradingSessions_0_1.addGroup(noMatchRules_1_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMatchRules noMatchRules_1_1_1;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_65;
      FIX::MatchAlgorithm MatchAlgorithm_65("STRING_1446507568");
      noMatchRules_1_1_1.set(MatchAlgorithm_65);
      MatchRules_NoMatchRules_65.insert(MatchAlgorithm_65.getString());
      FIX::MatchType MatchType_72("STRING_A3");
      noMatchRules_1_1_1.set(MatchType_72);
      MatchRules_NoMatchRules_65.insert(MatchType_72.getString());
      all_values.push_back(MatchRules_NoMatchRules_65);
      all_compo_names.insert("MatchRules.NoMatchRules");

      noTradingSessions_0_1.addGroup(noMatchRules_1_1_1);
    }
    // OrdTypeRules
    // Group OrdTypeRules.NoOrdTypeRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_1_1_0;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_61;
      FIX::OrdType OrdType_99('7');
      noOrdTypeRules_1_1_0.set(OrdType_99);
      OrdTypeRules_NoOrdTypeRules_61.insert(OrdType_99.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_61);
      all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

      noTradingSessions_0_1.addGroup(noOrdTypeRules_1_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_1_1_1;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_62;
      FIX::OrdType OrdType_100('M');
      noOrdTypeRules_1_1_1.set(OrdType_100);
      OrdTypeRules_NoOrdTypeRules_62.insert(OrdType_100.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_62);
      all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

      noTradingSessions_0_1.addGroup(noOrdTypeRules_1_1_1);
    }
    // TimeInForceRules
    // Group TimeInForceRules.NoTimeInForceRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_1_1_0;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_63;
      FIX::TimeInForce TimeInForce_81('8');
      noTimeInForceRules_1_1_0.set(TimeInForce_81);
      TimeInForceRules_NoTimeInForceRules_63.insert(TimeInForce_81.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_63);
      all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

      noTradingSessions_0_1.addGroup(noTimeInForceRules_1_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_1_1_1;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_64;
      FIX::TimeInForce TimeInForce_82('8');
      noTimeInForceRules_1_1_1.set(TimeInForce_82);
      TimeInForceRules_NoTimeInForceRules_64.insert(TimeInForce_82.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_64);
      all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

      noTradingSessions_0_1.addGroup(noTimeInForceRules_1_1_1);
    }
    msg.addGroup(noTradingSessions_0_1);
  }
  {
    FIX50SP2::TradingSessionList::NoTradingSessions noTradingSessions_0_2;
    // TrdSessLstGrp.NoTradingSessions
    multiset<string> TrdSessLstGrp_NoTradingSessions_2;
    FIX::EncodedText EncodedText_108("DATA_195205944");
    noTradingSessions_0_2.set(EncodedText_108);
    TrdSessLstGrp_NoTradingSessions_2.insert(EncodedText_108.getString());
    FIX::EncodedTextLen EncodedTextLen_108(1284353910);
    noTradingSessions_0_2.set(EncodedTextLen_108);
    TrdSessLstGrp_NoTradingSessions_2.insert(EncodedTextLen_108.getString());
    FIX::MarketID MarketID_31("EXCHANGE_798061215");
    noTradingSessions_0_2.set(MarketID_31);
    TrdSessLstGrp_NoTradingSessions_2.insert(MarketID_31.getString());
    FIX::MarketSegmentID MarketSegmentID_31("STRING_1600725201");
    noTradingSessions_0_2.set(MarketSegmentID_31);
    TrdSessLstGrp_NoTradingSessions_2.insert(MarketSegmentID_31.getString());
    FIX::SecurityExchange SecurityExchange_106("EXCHANGE_217429548");
    noTradingSessions_0_2.set(SecurityExchange_106);
    TrdSessLstGrp_NoTradingSessions_2.insert(SecurityExchange_106.getString());
    FIX::Text Text_108("STRING_2004806141");
    noTradingSessions_0_2.set(Text_108);
    TrdSessLstGrp_NoTradingSessions_2.insert(Text_108.getString());
    FIX::TotalVolumeTraded TotalVolumeTraded_2;
    TotalVolumeTraded_2.setString("9518442");
    noTradingSessions_0_2.set(TotalVolumeTraded_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TotalVolumeTraded_2.getString());
    FIX::TradSesCloseTime TradSesCloseTime_2(FIX::UTCTIMESTAMP(19, 49, 27, 6, 7, 2006));
    noTradingSessions_0_2.set(TradSesCloseTime_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesCloseTime_2.getString());
    FIX::TradSesEndTime TradSesEndTime_2(FIX::UTCTIMESTAMP(8, 0, 11, 24, 11, 2007));
    noTradingSessions_0_2.set(TradSesEndTime_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesEndTime_2.getString());
    FIX::TradSesMethod TradSesMethod_2(1);
    noTradingSessions_0_2.set(TradSesMethod_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesMethod_2.getString());
    FIX::TradSesMode TradSesMode_2(1);
    noTradingSessions_0_2.set(TradSesMode_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesMode_2.getString());
    FIX::TradSesOpenTime TradSesOpenTime_2(FIX::UTCTIMESTAMP(16, 46, 16, 21, 11, 2014));
    noTradingSessions_0_2.set(TradSesOpenTime_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesOpenTime_2.getString());
    FIX::TradSesPreCloseTime TradSesPreCloseTime_2(FIX::UTCTIMESTAMP(10, 6, 48, 20, 8, 2003));
    noTradingSessions_0_2.set(TradSesPreCloseTime_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesPreCloseTime_2.getString());
    FIX::TradSesStartTime TradSesStartTime_2(FIX::UTCTIMESTAMP(3, 56, 22, 11, 4, 2016));
    noTradingSessions_0_2.set(TradSesStartTime_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesStartTime_2.getString());
    FIX::TradSesStatus TradSesStatus_2(6);
    noTradingSessions_0_2.set(TradSesStatus_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesStatus_2.getString());
    FIX::TradSesStatusRejReason TradSesStatusRejReason_2(99);
    noTradingSessions_0_2.set(TradSesStatusRejReason_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesStatusRejReason_2.getString());
    FIX::TradSesUpdateAction TradSesUpdateAction_2('1');
    noTradingSessions_0_2.set(TradSesUpdateAction_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesUpdateAction_2.getString());
    FIX::TradingSessionDesc TradingSessionDesc_2("STRING_919091213");
    noTradingSessions_0_2.set(TradingSessionDesc_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradingSessionDesc_2.getString());
    FIX::TradingSessionID TradingSessionID_125("STRING_3");
    noTradingSessions_0_2.set(TradingSessionID_125);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradingSessionID_125.getString());
    FIX::TradingSessionSubID TradingSessionSubID_125("STRING_5");
    noTradingSessions_0_2.set(TradingSessionSubID_125);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradingSessionSubID_125.getString());
    FIX::TransactTime TransactTime_78(FIX::UTCTIMESTAMP(21, 57, 56, 11, 6, 2005));
    noTradingSessions_0_2.set(TransactTime_78);
    TrdSessLstGrp_NoTradingSessions_2.insert(TransactTime_78.getString());
    FIX::UnsolicitedIndicator UnsolicitedIndicator_6(false);
    noTradingSessions_0_2.set(UnsolicitedIndicator_6);
    TrdSessLstGrp_NoTradingSessions_2.insert(UnsolicitedIndicator_6.getString());
    all_values.push_back(TrdSessLstGrp_NoTradingSessions_2);
    all_compo_names.insert("TrdSessLstGrp.NoTradingSessions");

    // TradingSessionRules
    // ExecInstRules
    // Group ExecInstRules.NoExecInstRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoExecInstRules noExecInstRules_2_1_0;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_63;
      FIX::ExecInstValue ExecInstValue_63('2');
      noExecInstRules_2_1_0.set(ExecInstValue_63);
      ExecInstRules_NoExecInstRules_63.insert(ExecInstValue_63.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_63);
      all_compo_names.insert("ExecInstRules.NoExecInstRules");

      noTradingSessions_0_2.addGroup(noExecInstRules_2_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoExecInstRules noExecInstRules_2_1_1;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_64;
      FIX::ExecInstValue ExecInstValue_64('2');
      noExecInstRules_2_1_1.set(ExecInstValue_64);
      ExecInstRules_NoExecInstRules_64.insert(ExecInstValue_64.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_64);
      all_compo_names.insert("ExecInstRules.NoExecInstRules");

      noTradingSessions_0_2.addGroup(noExecInstRules_2_1_1);
    }
    // MarketDataFeedTypes
    // Group MarketDataFeedTypes.NoMDFeedTypes
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_2_1_0;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_61;
      FIX::MDBookType MDBookType_64(2);
      noMDFeedTypes_2_1_0.set(MDBookType_64);
      MarketDataFeedTypes_NoMDFeedTypes_61.insert(MDBookType_64.getString());
      FIX::MDFeedType MDFeedType_63("STRING_710153598");
      noMDFeedTypes_2_1_0.set(MDFeedType_63);
      MarketDataFeedTypes_NoMDFeedTypes_61.insert(MDFeedType_63.getString());
      FIX::MarketDepth MarketDepth_65(1374877752);
      noMDFeedTypes_2_1_0.set(MarketDepth_65);
      MarketDataFeedTypes_NoMDFeedTypes_61.insert(MarketDepth_65.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_61);
      all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

      noTradingSessions_0_2.addGroup(noMDFeedTypes_2_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_2_1_1;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_62;
      FIX::MDBookType MDBookType_65(2);
      noMDFeedTypes_2_1_1.set(MDBookType_65);
      MarketDataFeedTypes_NoMDFeedTypes_62.insert(MDBookType_65.getString());
      FIX::MDFeedType MDFeedType_64("STRING_1718192173");
      noMDFeedTypes_2_1_1.set(MDFeedType_64);
      MarketDataFeedTypes_NoMDFeedTypes_62.insert(MDFeedType_64.getString());
      FIX::MarketDepth MarketDepth_66(711600505);
      noMDFeedTypes_2_1_1.set(MarketDepth_66);
      MarketDataFeedTypes_NoMDFeedTypes_62.insert(MarketDepth_66.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_62);
      all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

      noTradingSessions_0_2.addGroup(noMDFeedTypes_2_1_1);
    }
    // MatchRules
    // Group MatchRules.NoMatchRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMatchRules noMatchRules_2_1_0;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_66;
      FIX::MatchAlgorithm MatchAlgorithm_66("STRING_1933888216");
      noMatchRules_2_1_0.set(MatchAlgorithm_66);
      MatchRules_NoMatchRules_66.insert(MatchAlgorithm_66.getString());
      FIX::MatchType MatchType_73("STRING_S5");
      noMatchRules_2_1_0.set(MatchType_73);
      MatchRules_NoMatchRules_66.insert(MatchType_73.getString());
      all_values.push_back(MatchRules_NoMatchRules_66);
      all_compo_names.insert("MatchRules.NoMatchRules");

      noTradingSessions_0_2.addGroup(noMatchRules_2_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMatchRules noMatchRules_2_1_1;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_67;
      FIX::MatchAlgorithm MatchAlgorithm_67("STRING_18705343");
      noMatchRules_2_1_1.set(MatchAlgorithm_67);
      MatchRules_NoMatchRules_67.insert(MatchAlgorithm_67.getString());
      FIX::MatchType MatchType_74("STRING_M1");
      noMatchRules_2_1_1.set(MatchType_74);
      MatchRules_NoMatchRules_67.insert(MatchType_74.getString());
      all_values.push_back(MatchRules_NoMatchRules_67);
      all_compo_names.insert("MatchRules.NoMatchRules");

      noTradingSessions_0_2.addGroup(noMatchRules_2_1_1);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMatchRules noMatchRules_2_1_2;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_68;
      FIX::MatchAlgorithm MatchAlgorithm_68("STRING_1528153969");
      noMatchRules_2_1_2.set(MatchAlgorithm_68);
      MatchRules_NoMatchRules_68.insert(MatchAlgorithm_68.getString());
      FIX::MatchType MatchType_75("STRING_M2");
      noMatchRules_2_1_2.set(MatchType_75);
      MatchRules_NoMatchRules_68.insert(MatchType_75.getString());
      all_values.push_back(MatchRules_NoMatchRules_68);
      all_compo_names.insert("MatchRules.NoMatchRules");

      noTradingSessions_0_2.addGroup(noMatchRules_2_1_2);
    }
    // OrdTypeRules
    // Group OrdTypeRules.NoOrdTypeRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_2_1_0;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_63;
      FIX::OrdType OrdType_101('P');
      noOrdTypeRules_2_1_0.set(OrdType_101);
      OrdTypeRules_NoOrdTypeRules_63.insert(OrdType_101.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_63);
      all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

      noTradingSessions_0_2.addGroup(noOrdTypeRules_2_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_2_1_1;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_64;
      FIX::OrdType OrdType_102('I');
      noOrdTypeRules_2_1_1.set(OrdType_102);
      OrdTypeRules_NoOrdTypeRules_64.insert(OrdType_102.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_64);
      all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

      noTradingSessions_0_2.addGroup(noOrdTypeRules_2_1_1);
    }
    // TimeInForceRules
    // Group TimeInForceRules.NoTimeInForceRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_2_1_0;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_65;
      FIX::TimeInForce TimeInForce_83('6');
      noTimeInForceRules_2_1_0.set(TimeInForce_83);
      TimeInForceRules_NoTimeInForceRules_65.insert(TimeInForce_83.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_65);
      all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

      noTradingSessions_0_2.addGroup(noTimeInForceRules_2_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_2_1_1;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_66;
      FIX::TimeInForce TimeInForce_84('8');
      noTimeInForceRules_2_1_1.set(TimeInForce_84);
      TimeInForceRules_NoTimeInForceRules_66.insert(TimeInForce_84.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_66);
      all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

      noTradingSessions_0_2.addGroup(noTimeInForceRules_2_1_1);
    }
    msg.addGroup(noTradingSessions_0_2);
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
