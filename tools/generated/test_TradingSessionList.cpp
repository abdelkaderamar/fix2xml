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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::TradingSessionList msg;

  list<multiset<string>> all_values;
  multiset<string> TradingSessionList_0;
  FIX::TradSesReqID TradSesReqID_0("STRING_1367003633");
  msg.set(TradSesReqID_0);
  TradingSessionList_0.insert(TradSesReqID_0.getString());
  all_values.push_back(TradingSessionList_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_20;
  FIX::ApplID ApplID_20("STRING_1998163076");
  msg.set(ApplID_20);
  ApplicationSequenceControl_20.insert(ApplID_20.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_20(2069702589);
  msg.set(ApplLastSeqNum_20);
  ApplicationSequenceControl_20.insert(ApplLastSeqNum_20.getString());
  FIX::ApplResendFlag ApplResendFlag_20(false);
  msg.set(ApplResendFlag_20);
  ApplicationSequenceControl_20.insert(ApplResendFlag_20.getString());
  FIX::ApplSeqNum ApplSeqNum_20(982173034);
  msg.set(ApplSeqNum_20);
  ApplicationSequenceControl_20.insert(ApplSeqNum_20.getString());
  all_values.push_back(ApplicationSequenceControl_20);

  // TrdSessLstGrp
  // Group TrdSessLstGrp.NoTradingSessions
  {
    FIX50SP2::TradingSessionList::NoTradingSessions noTradingSessions_0_0;
    // TrdSessLstGrp.NoTradingSessions
    multiset<string> TrdSessLstGrp_NoTradingSessions_0;
    FIX::EncodedText EncodedText_104("DATA_777526389");
    noTradingSessions_0_0.set(EncodedText_104);
    TrdSessLstGrp_NoTradingSessions_0.insert(EncodedText_104.getString());
    FIX::EncodedTextLen EncodedTextLen_104(1315251200);
    noTradingSessions_0_0.set(EncodedTextLen_104);
    TrdSessLstGrp_NoTradingSessions_0.insert(EncodedTextLen_104.getString());
    FIX::MarketID MarketID_26("EXCHANGE_1927663631");
    noTradingSessions_0_0.set(MarketID_26);
    TrdSessLstGrp_NoTradingSessions_0.insert(MarketID_26.getString());
    FIX::MarketSegmentID MarketSegmentID_26("STRING_99464569");
    noTradingSessions_0_0.set(MarketSegmentID_26);
    TrdSessLstGrp_NoTradingSessions_0.insert(MarketSegmentID_26.getString());
    FIX::SecurityExchange SecurityExchange_93("EXCHANGE_1377456080");
    noTradingSessions_0_0.set(SecurityExchange_93);
    TrdSessLstGrp_NoTradingSessions_0.insert(SecurityExchange_93.getString());
    FIX::Text Text_104("STRING_437406094");
    noTradingSessions_0_0.set(Text_104);
    TrdSessLstGrp_NoTradingSessions_0.insert(Text_104.getString());
    FIX::TotalVolumeTraded TotalVolumeTraded_0;
    TotalVolumeTraded_0.setString("6648265");
    noTradingSessions_0_0.set(TotalVolumeTraded_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TotalVolumeTraded_0.getString());
    FIX::TradSesCloseTime TradSesCloseTime_0(FIX::UTCTIMESTAMP(8, 5, 13, 3, 5, 2003));
    noTradingSessions_0_0.set(TradSesCloseTime_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesCloseTime_0.getString());
    FIX::TradSesEndTime TradSesEndTime_0(FIX::UTCTIMESTAMP(14, 44, 2, 2, 2, 2015));
    noTradingSessions_0_0.set(TradSesEndTime_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesEndTime_0.getString());
    FIX::TradSesMethod TradSesMethod_0(2);
    noTradingSessions_0_0.set(TradSesMethod_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesMethod_0.getString());
    FIX::TradSesMode TradSesMode_0(3);
    noTradingSessions_0_0.set(TradSesMode_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesMode_0.getString());
    FIX::TradSesOpenTime TradSesOpenTime_0(FIX::UTCTIMESTAMP(21, 17, 13, 3, 10, 2004));
    noTradingSessions_0_0.set(TradSesOpenTime_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesOpenTime_0.getString());
    FIX::TradSesPreCloseTime TradSesPreCloseTime_0(FIX::UTCTIMESTAMP(18, 0, 46, 11, 1, 2009));
    noTradingSessions_0_0.set(TradSesPreCloseTime_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesPreCloseTime_0.getString());
    FIX::TradSesStartTime TradSesStartTime_0(FIX::UTCTIMESTAMP(13, 41, 5, 22, 9, 2013));
    noTradingSessions_0_0.set(TradSesStartTime_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesStartTime_0.getString());
    FIX::TradSesStatus TradSesStatus_0(6);
    noTradingSessions_0_0.set(TradSesStatus_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesStatus_0.getString());
    FIX::TradSesStatusRejReason TradSesStatusRejReason_0(1);
    noTradingSessions_0_0.set(TradSesStatusRejReason_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesStatusRejReason_0.getString());
    FIX::TradSesUpdateAction TradSesUpdateAction_0('9');
    noTradingSessions_0_0.set(TradSesUpdateAction_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesUpdateAction_0.getString());
    FIX::TradingSessionDesc TradingSessionDesc_0("STRING_309682474");
    noTradingSessions_0_0.set(TradingSessionDesc_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradingSessionDesc_0.getString());
    FIX::TradingSessionID TradingSessionID_95("STRING_1");
    noTradingSessions_0_0.set(TradingSessionID_95);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradingSessionID_95.getString());
    FIX::TradingSessionSubID TradingSessionSubID_95("STRING_2");
    noTradingSessions_0_0.set(TradingSessionSubID_95);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradingSessionSubID_95.getString());
    FIX::TransactTime TransactTime_70(FIX::UTCTIMESTAMP(22, 45, 35, 11, 7, 2010));
    noTradingSessions_0_0.set(TransactTime_70);
    TrdSessLstGrp_NoTradingSessions_0.insert(TransactTime_70.getString());
    FIX::UnsolicitedIndicator UnsolicitedIndicator_4(false);
    noTradingSessions_0_0.set(UnsolicitedIndicator_4);
    TrdSessLstGrp_NoTradingSessions_0.insert(UnsolicitedIndicator_4.getString());
    all_values.push_back(TrdSessLstGrp_NoTradingSessions_0);

    // TradingSessionRules
    // ExecInstRules
    // Group ExecInstRules.NoExecInstRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoExecInstRules noExecInstRules_0_1_0;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_36;
      FIX::ExecInstValue ExecInstValue_36('1');
      noExecInstRules_0_1_0.set(ExecInstValue_36);
      ExecInstRules_NoExecInstRules_36.insert(ExecInstValue_36.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_36);

      noTradingSessions_0_0.addGroup(noExecInstRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoExecInstRules noExecInstRules_0_1_1;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_37;
      FIX::ExecInstValue ExecInstValue_37('5');
      noExecInstRules_0_1_1.set(ExecInstValue_37);
      ExecInstRules_NoExecInstRules_37.insert(ExecInstValue_37.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_37);

      noTradingSessions_0_0.addGroup(noExecInstRules_0_1_1);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoExecInstRules noExecInstRules_0_1_2;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_38;
      FIX::ExecInstValue ExecInstValue_38('1');
      noExecInstRules_0_1_2.set(ExecInstValue_38);
      ExecInstRules_NoExecInstRules_38.insert(ExecInstValue_38.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_38);

      noTradingSessions_0_0.addGroup(noExecInstRules_0_1_2);
    }
    // MarketDataFeedTypes
    // Group MarketDataFeedTypes.NoMDFeedTypes
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_0;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_37;
      FIX::MDBookType MDBookType_40(3);
      noMDFeedTypes_0_1_0.set(MDBookType_40);
      MarketDataFeedTypes_NoMDFeedTypes_37.insert(MDBookType_40.getString());
      FIX::MDFeedType MDFeedType_39("STRING_1740648683");
      noMDFeedTypes_0_1_0.set(MDFeedType_39);
      MarketDataFeedTypes_NoMDFeedTypes_37.insert(MDFeedType_39.getString());
      FIX::MarketDepth MarketDepth_42(1811809354);
      noMDFeedTypes_0_1_0.set(MarketDepth_42);
      MarketDataFeedTypes_NoMDFeedTypes_37.insert(MarketDepth_42.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_37);

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_1;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_38;
      FIX::MDBookType MDBookType_41(3);
      noMDFeedTypes_0_1_1.set(MDBookType_41);
      MarketDataFeedTypes_NoMDFeedTypes_38.insert(MDBookType_41.getString());
      FIX::MDFeedType MDFeedType_40("STRING_95626656");
      noMDFeedTypes_0_1_1.set(MDFeedType_40);
      MarketDataFeedTypes_NoMDFeedTypes_38.insert(MDFeedType_40.getString());
      FIX::MarketDepth MarketDepth_43(119268326);
      noMDFeedTypes_0_1_1.set(MarketDepth_43);
      MarketDataFeedTypes_NoMDFeedTypes_38.insert(MarketDepth_43.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_38);

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_1);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_2;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_39;
      FIX::MDBookType MDBookType_42(1);
      noMDFeedTypes_0_1_2.set(MDBookType_42);
      MarketDataFeedTypes_NoMDFeedTypes_39.insert(MDBookType_42.getString());
      FIX::MDFeedType MDFeedType_41("STRING_1830756317");
      noMDFeedTypes_0_1_2.set(MDFeedType_41);
      MarketDataFeedTypes_NoMDFeedTypes_39.insert(MDFeedType_41.getString());
      FIX::MarketDepth MarketDepth_44(2001959612);
      noMDFeedTypes_0_1_2.set(MarketDepth_44);
      MarketDataFeedTypes_NoMDFeedTypes_39.insert(MarketDepth_44.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_39);

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_2);
    }
    // MatchRules
    // Group MatchRules.NoMatchRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMatchRules noMatchRules_0_1_0;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_38;
      FIX::MatchAlgorithm MatchAlgorithm_38("STRING_737484149");
      noMatchRules_0_1_0.set(MatchAlgorithm_38);
      MatchRules_NoMatchRules_38.insert(MatchAlgorithm_38.getString());
      FIX::MatchType MatchType_46("STRING_8");
      noMatchRules_0_1_0.set(MatchType_46);
      MatchRules_NoMatchRules_38.insert(MatchType_46.getString());
      all_values.push_back(MatchRules_NoMatchRules_38);

      noTradingSessions_0_0.addGroup(noMatchRules_0_1_0);
    }
    // OrdTypeRules
    // Group OrdTypeRules.NoOrdTypeRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_0;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_44;
      FIX::OrdType OrdType_72('A');
      noOrdTypeRules_0_1_0.set(OrdType_72);
      OrdTypeRules_NoOrdTypeRules_44.insert(OrdType_72.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_44);

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_1;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_45;
      FIX::OrdType OrdType_73('M');
      noOrdTypeRules_0_1_1.set(OrdType_73);
      OrdTypeRules_NoOrdTypeRules_45.insert(OrdType_73.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_45);

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_1);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_2;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_46;
      FIX::OrdType OrdType_74('A');
      noOrdTypeRules_0_1_2.set(OrdType_74);
      OrdTypeRules_NoOrdTypeRules_46.insert(OrdType_74.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_46);

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_2);
    }
    // TimeInForceRules
    // Group TimeInForceRules.NoTimeInForceRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_0;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_41;
      FIX::TimeInForce TimeInForce_56('0');
      noTimeInForceRules_0_1_0.set(TimeInForce_56);
      TimeInForceRules_NoTimeInForceRules_41.insert(TimeInForce_56.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_41);

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_1;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_42;
      FIX::TimeInForce TimeInForce_57('0');
      noTimeInForceRules_0_1_1.set(TimeInForce_57);
      TimeInForceRules_NoTimeInForceRules_42.insert(TimeInForce_57.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_42);

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_1);
    }
    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::TradingSessionList::NoTradingSessions noTradingSessions_0_1;
    // TrdSessLstGrp.NoTradingSessions
    multiset<string> TrdSessLstGrp_NoTradingSessions_1;
    FIX::EncodedText EncodedText_105("DATA_101080950");
    noTradingSessions_0_1.set(EncodedText_105);
    TrdSessLstGrp_NoTradingSessions_1.insert(EncodedText_105.getString());
    FIX::EncodedTextLen EncodedTextLen_105(1854904725);
    noTradingSessions_0_1.set(EncodedTextLen_105);
    TrdSessLstGrp_NoTradingSessions_1.insert(EncodedTextLen_105.getString());
    FIX::MarketID MarketID_27("EXCHANGE_1106761615");
    noTradingSessions_0_1.set(MarketID_27);
    TrdSessLstGrp_NoTradingSessions_1.insert(MarketID_27.getString());
    FIX::MarketSegmentID MarketSegmentID_27("STRING_671791773");
    noTradingSessions_0_1.set(MarketSegmentID_27);
    TrdSessLstGrp_NoTradingSessions_1.insert(MarketSegmentID_27.getString());
    FIX::SecurityExchange SecurityExchange_94("EXCHANGE_1008740455");
    noTradingSessions_0_1.set(SecurityExchange_94);
    TrdSessLstGrp_NoTradingSessions_1.insert(SecurityExchange_94.getString());
    FIX::Text Text_105("STRING_229711119");
    noTradingSessions_0_1.set(Text_105);
    TrdSessLstGrp_NoTradingSessions_1.insert(Text_105.getString());
    FIX::TotalVolumeTraded TotalVolumeTraded_1;
    TotalVolumeTraded_1.setString("7310274");
    noTradingSessions_0_1.set(TotalVolumeTraded_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TotalVolumeTraded_1.getString());
    FIX::TradSesCloseTime TradSesCloseTime_1(FIX::UTCTIMESTAMP(21, 31, 17, 24, 1, 2002));
    noTradingSessions_0_1.set(TradSesCloseTime_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesCloseTime_1.getString());
    FIX::TradSesEndTime TradSesEndTime_1(FIX::UTCTIMESTAMP(10, 8, 53, 16, 6, 2007));
    noTradingSessions_0_1.set(TradSesEndTime_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesEndTime_1.getString());
    FIX::TradSesMethod TradSesMethod_1(3);
    noTradingSessions_0_1.set(TradSesMethod_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesMethod_1.getString());
    FIX::TradSesMode TradSesMode_1(2);
    noTradingSessions_0_1.set(TradSesMode_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesMode_1.getString());
    FIX::TradSesOpenTime TradSesOpenTime_1(FIX::UTCTIMESTAMP(8, 48, 8, 5, 9, 2002));
    noTradingSessions_0_1.set(TradSesOpenTime_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesOpenTime_1.getString());
    FIX::TradSesPreCloseTime TradSesPreCloseTime_1(FIX::UTCTIMESTAMP(14, 45, 0, 23, 10, 2004));
    noTradingSessions_0_1.set(TradSesPreCloseTime_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesPreCloseTime_1.getString());
    FIX::TradSesStartTime TradSesStartTime_1(FIX::UTCTIMESTAMP(14, 1, 41, 27, 2, 2012));
    noTradingSessions_0_1.set(TradSesStartTime_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesStartTime_1.getString());
    FIX::TradSesStatus TradSesStatus_1(0);
    noTradingSessions_0_1.set(TradSesStatus_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesStatus_1.getString());
    FIX::TradSesStatusRejReason TradSesStatusRejReason_1(1);
    noTradingSessions_0_1.set(TradSesStatusRejReason_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesStatusRejReason_1.getString());
    FIX::TradSesUpdateAction TradSesUpdateAction_1('3');
    noTradingSessions_0_1.set(TradSesUpdateAction_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesUpdateAction_1.getString());
    FIX::TradingSessionDesc TradingSessionDesc_1("STRING_1118029616");
    noTradingSessions_0_1.set(TradingSessionDesc_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradingSessionDesc_1.getString());
    FIX::TradingSessionID TradingSessionID_96("STRING_5");
    noTradingSessions_0_1.set(TradingSessionID_96);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradingSessionID_96.getString());
    FIX::TradingSessionSubID TradingSessionSubID_96("STRING_3");
    noTradingSessions_0_1.set(TradingSessionSubID_96);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradingSessionSubID_96.getString());
    FIX::TransactTime TransactTime_71(FIX::UTCTIMESTAMP(15, 34, 44, 18, 7, 2014));
    noTradingSessions_0_1.set(TransactTime_71);
    TrdSessLstGrp_NoTradingSessions_1.insert(TransactTime_71.getString());
    FIX::UnsolicitedIndicator UnsolicitedIndicator_5(false);
    noTradingSessions_0_1.set(UnsolicitedIndicator_5);
    TrdSessLstGrp_NoTradingSessions_1.insert(UnsolicitedIndicator_5.getString());
    all_values.push_back(TrdSessLstGrp_NoTradingSessions_1);

    // TradingSessionRules
    // ExecInstRules
    // Group ExecInstRules.NoExecInstRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoExecInstRules noExecInstRules_1_1_0;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_39;
      FIX::ExecInstValue ExecInstValue_39('1');
      noExecInstRules_1_1_0.set(ExecInstValue_39);
      ExecInstRules_NoExecInstRules_39.insert(ExecInstValue_39.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_39);

      noTradingSessions_0_1.addGroup(noExecInstRules_1_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoExecInstRules noExecInstRules_1_1_1;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_40;
      FIX::ExecInstValue ExecInstValue_40('5');
      noExecInstRules_1_1_1.set(ExecInstValue_40);
      ExecInstRules_NoExecInstRules_40.insert(ExecInstValue_40.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_40);

      noTradingSessions_0_1.addGroup(noExecInstRules_1_1_1);
    }
    // MarketDataFeedTypes
    // Group MarketDataFeedTypes.NoMDFeedTypes
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_1_1_0;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_40;
      FIX::MDBookType MDBookType_43(1);
      noMDFeedTypes_1_1_0.set(MDBookType_43);
      MarketDataFeedTypes_NoMDFeedTypes_40.insert(MDBookType_43.getString());
      FIX::MDFeedType MDFeedType_42("STRING_1772497473");
      noMDFeedTypes_1_1_0.set(MDFeedType_42);
      MarketDataFeedTypes_NoMDFeedTypes_40.insert(MDFeedType_42.getString());
      FIX::MarketDepth MarketDepth_45(627693550);
      noMDFeedTypes_1_1_0.set(MarketDepth_45);
      MarketDataFeedTypes_NoMDFeedTypes_40.insert(MarketDepth_45.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_40);

      noTradingSessions_0_1.addGroup(noMDFeedTypes_1_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_1_1_1;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_41;
      FIX::MDBookType MDBookType_44(1);
      noMDFeedTypes_1_1_1.set(MDBookType_44);
      MarketDataFeedTypes_NoMDFeedTypes_41.insert(MDBookType_44.getString());
      FIX::MDFeedType MDFeedType_43("STRING_1868860506");
      noMDFeedTypes_1_1_1.set(MDFeedType_43);
      MarketDataFeedTypes_NoMDFeedTypes_41.insert(MDFeedType_43.getString());
      FIX::MarketDepth MarketDepth_46(1488224270);
      noMDFeedTypes_1_1_1.set(MarketDepth_46);
      MarketDataFeedTypes_NoMDFeedTypes_41.insert(MarketDepth_46.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_41);

      noTradingSessions_0_1.addGroup(noMDFeedTypes_1_1_1);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_1_1_2;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_42;
      FIX::MDBookType MDBookType_45(2);
      noMDFeedTypes_1_1_2.set(MDBookType_45);
      MarketDataFeedTypes_NoMDFeedTypes_42.insert(MDBookType_45.getString());
      FIX::MDFeedType MDFeedType_44("STRING_69714312");
      noMDFeedTypes_1_1_2.set(MDFeedType_44);
      MarketDataFeedTypes_NoMDFeedTypes_42.insert(MDFeedType_44.getString());
      FIX::MarketDepth MarketDepth_47(614540683);
      noMDFeedTypes_1_1_2.set(MarketDepth_47);
      MarketDataFeedTypes_NoMDFeedTypes_42.insert(MarketDepth_47.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_42);

      noTradingSessions_0_1.addGroup(noMDFeedTypes_1_1_2);
    }
    // MatchRules
    // Group MatchRules.NoMatchRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMatchRules noMatchRules_1_1_0;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_39;
      FIX::MatchAlgorithm MatchAlgorithm_39("STRING_198135695");
      noMatchRules_1_1_0.set(MatchAlgorithm_39);
      MatchRules_NoMatchRules_39.insert(MatchAlgorithm_39.getString());
      FIX::MatchType MatchType_47("STRING_A5");
      noMatchRules_1_1_0.set(MatchType_47);
      MatchRules_NoMatchRules_39.insert(MatchType_47.getString());
      all_values.push_back(MatchRules_NoMatchRules_39);

      noTradingSessions_0_1.addGroup(noMatchRules_1_1_0);
    }
    // OrdTypeRules
    // Group OrdTypeRules.NoOrdTypeRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_1_1_0;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_47;
      FIX::OrdType OrdType_75('K');
      noOrdTypeRules_1_1_0.set(OrdType_75);
      OrdTypeRules_NoOrdTypeRules_47.insert(OrdType_75.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_47);

      noTradingSessions_0_1.addGroup(noOrdTypeRules_1_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_1_1_1;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_48;
      FIX::OrdType OrdType_76('6');
      noOrdTypeRules_1_1_1.set(OrdType_76);
      OrdTypeRules_NoOrdTypeRules_48.insert(OrdType_76.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_48);

      noTradingSessions_0_1.addGroup(noOrdTypeRules_1_1_1);
    }
    // TimeInForceRules
    // Group TimeInForceRules.NoTimeInForceRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_1_1_0;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_43;
      FIX::TimeInForce TimeInForce_58('0');
      noTimeInForceRules_1_1_0.set(TimeInForce_58);
      TimeInForceRules_NoTimeInForceRules_43.insert(TimeInForce_58.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_43);

      noTradingSessions_0_1.addGroup(noTimeInForceRules_1_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_1_1_1;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_44;
      FIX::TimeInForce TimeInForce_59('9');
      noTimeInForceRules_1_1_1.set(TimeInForce_59);
      TimeInForceRules_NoTimeInForceRules_44.insert(TimeInForce_59.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_44);

      noTradingSessions_0_1.addGroup(noTimeInForceRules_1_1_1);
    }
    msg.addGroup(noTradingSessions_0_1);
  }
  {
    FIX50SP2::TradingSessionList::NoTradingSessions noTradingSessions_0_2;
    // TrdSessLstGrp.NoTradingSessions
    multiset<string> TrdSessLstGrp_NoTradingSessions_2;
    FIX::EncodedText EncodedText_106("DATA_209080812");
    noTradingSessions_0_2.set(EncodedText_106);
    TrdSessLstGrp_NoTradingSessions_2.insert(EncodedText_106.getString());
    FIX::EncodedTextLen EncodedTextLen_106(1088013566);
    noTradingSessions_0_2.set(EncodedTextLen_106);
    TrdSessLstGrp_NoTradingSessions_2.insert(EncodedTextLen_106.getString());
    FIX::MarketID MarketID_28("EXCHANGE_340315370");
    noTradingSessions_0_2.set(MarketID_28);
    TrdSessLstGrp_NoTradingSessions_2.insert(MarketID_28.getString());
    FIX::MarketSegmentID MarketSegmentID_28("STRING_2120396446");
    noTradingSessions_0_2.set(MarketSegmentID_28);
    TrdSessLstGrp_NoTradingSessions_2.insert(MarketSegmentID_28.getString());
    FIX::SecurityExchange SecurityExchange_95("EXCHANGE_1247823910");
    noTradingSessions_0_2.set(SecurityExchange_95);
    TrdSessLstGrp_NoTradingSessions_2.insert(SecurityExchange_95.getString());
    FIX::Text Text_106("STRING_690584609");
    noTradingSessions_0_2.set(Text_106);
    TrdSessLstGrp_NoTradingSessions_2.insert(Text_106.getString());
    FIX::TotalVolumeTraded TotalVolumeTraded_2;
    TotalVolumeTraded_2.setString("19105093");
    noTradingSessions_0_2.set(TotalVolumeTraded_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TotalVolumeTraded_2.getString());
    FIX::TradSesCloseTime TradSesCloseTime_2(FIX::UTCTIMESTAMP(4, 52, 39, 7, 3, 2008));
    noTradingSessions_0_2.set(TradSesCloseTime_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesCloseTime_2.getString());
    FIX::TradSesEndTime TradSesEndTime_2(FIX::UTCTIMESTAMP(0, 20, 26, 26, 5, 2014));
    noTradingSessions_0_2.set(TradSesEndTime_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesEndTime_2.getString());
    FIX::TradSesMethod TradSesMethod_2(2);
    noTradingSessions_0_2.set(TradSesMethod_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesMethod_2.getString());
    FIX::TradSesMode TradSesMode_2(3);
    noTradingSessions_0_2.set(TradSesMode_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesMode_2.getString());
    FIX::TradSesOpenTime TradSesOpenTime_2(FIX::UTCTIMESTAMP(13, 41, 37, 18, 1, 2013));
    noTradingSessions_0_2.set(TradSesOpenTime_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesOpenTime_2.getString());
    FIX::TradSesPreCloseTime TradSesPreCloseTime_2(FIX::UTCTIMESTAMP(12, 15, 20, 22, 7, 2005));
    noTradingSessions_0_2.set(TradSesPreCloseTime_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesPreCloseTime_2.getString());
    FIX::TradSesStartTime TradSesStartTime_2(FIX::UTCTIMESTAMP(17, 57, 7, 20, 9, 2003));
    noTradingSessions_0_2.set(TradSesStartTime_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesStartTime_2.getString());
    FIX::TradSesStatus TradSesStatus_2(4);
    noTradingSessions_0_2.set(TradSesStatus_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesStatus_2.getString());
    FIX::TradSesStatusRejReason TradSesStatusRejReason_2(99);
    noTradingSessions_0_2.set(TradSesStatusRejReason_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesStatusRejReason_2.getString());
    FIX::TradSesUpdateAction TradSesUpdateAction_2('9');
    noTradingSessions_0_2.set(TradSesUpdateAction_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesUpdateAction_2.getString());
    FIX::TradingSessionDesc TradingSessionDesc_2("STRING_1929458902");
    noTradingSessions_0_2.set(TradingSessionDesc_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradingSessionDesc_2.getString());
    FIX::TradingSessionID TradingSessionID_97("STRING_2");
    noTradingSessions_0_2.set(TradingSessionID_97);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradingSessionID_97.getString());
    FIX::TradingSessionSubID TradingSessionSubID_97("STRING_2");
    noTradingSessions_0_2.set(TradingSessionSubID_97);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradingSessionSubID_97.getString());
    FIX::TransactTime TransactTime_72(FIX::UTCTIMESTAMP(2, 44, 40, 12, 11, 2009));
    noTradingSessions_0_2.set(TransactTime_72);
    TrdSessLstGrp_NoTradingSessions_2.insert(TransactTime_72.getString());
    FIX::UnsolicitedIndicator UnsolicitedIndicator_6(false);
    noTradingSessions_0_2.set(UnsolicitedIndicator_6);
    TrdSessLstGrp_NoTradingSessions_2.insert(UnsolicitedIndicator_6.getString());
    all_values.push_back(TrdSessLstGrp_NoTradingSessions_2);

    // TradingSessionRules
    // ExecInstRules
    // Group ExecInstRules.NoExecInstRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoExecInstRules noExecInstRules_2_1_0;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_41;
      FIX::ExecInstValue ExecInstValue_41('1');
      noExecInstRules_2_1_0.set(ExecInstValue_41);
      ExecInstRules_NoExecInstRules_41.insert(ExecInstValue_41.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_41);

      noTradingSessions_0_2.addGroup(noExecInstRules_2_1_0);
    }
    // MarketDataFeedTypes
    // Group MarketDataFeedTypes.NoMDFeedTypes
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_2_1_0;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_43;
      FIX::MDBookType MDBookType_46(1);
      noMDFeedTypes_2_1_0.set(MDBookType_46);
      MarketDataFeedTypes_NoMDFeedTypes_43.insert(MDBookType_46.getString());
      FIX::MDFeedType MDFeedType_45("STRING_853603718");
      noMDFeedTypes_2_1_0.set(MDFeedType_45);
      MarketDataFeedTypes_NoMDFeedTypes_43.insert(MDFeedType_45.getString());
      FIX::MarketDepth MarketDepth_48(368793994);
      noMDFeedTypes_2_1_0.set(MarketDepth_48);
      MarketDataFeedTypes_NoMDFeedTypes_43.insert(MarketDepth_48.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_43);

      noTradingSessions_0_2.addGroup(noMDFeedTypes_2_1_0);
    }
    // MatchRules
    // Group MatchRules.NoMatchRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMatchRules noMatchRules_2_1_0;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_40;
      FIX::MatchAlgorithm MatchAlgorithm_40("STRING_2000904664");
      noMatchRules_2_1_0.set(MatchAlgorithm_40);
      MatchRules_NoMatchRules_40.insert(MatchAlgorithm_40.getString());
      FIX::MatchType MatchType_48("STRING_S5");
      noMatchRules_2_1_0.set(MatchType_48);
      MatchRules_NoMatchRules_40.insert(MatchType_48.getString());
      all_values.push_back(MatchRules_NoMatchRules_40);

      noTradingSessions_0_2.addGroup(noMatchRules_2_1_0);
    }
    // OrdTypeRules
    // Group OrdTypeRules.NoOrdTypeRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_2_1_0;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_49;
      FIX::OrdType OrdType_77('C');
      noOrdTypeRules_2_1_0.set(OrdType_77);
      OrdTypeRules_NoOrdTypeRules_49.insert(OrdType_77.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_49);

      noTradingSessions_0_2.addGroup(noOrdTypeRules_2_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_2_1_1;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_50;
      FIX::OrdType OrdType_78('M');
      noOrdTypeRules_2_1_1.set(OrdType_78);
      OrdTypeRules_NoOrdTypeRules_50.insert(OrdType_78.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_50);

      noTradingSessions_0_2.addGroup(noOrdTypeRules_2_1_1);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_2_1_2;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_51;
      FIX::OrdType OrdType_79('D');
      noOrdTypeRules_2_1_2.set(OrdType_79);
      OrdTypeRules_NoOrdTypeRules_51.insert(OrdType_79.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_51);

      noTradingSessions_0_2.addGroup(noOrdTypeRules_2_1_2);
    }
    // TimeInForceRules
    // Group TimeInForceRules.NoTimeInForceRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_2_1_0;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_45;
      FIX::TimeInForce TimeInForce_60('0');
      noTimeInForceRules_2_1_0.set(TimeInForce_60);
      TimeInForceRules_NoTimeInForceRules_45.insert(TimeInForce_60.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_45);

      noTradingSessions_0_2.addGroup(noTimeInForceRules_2_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_2_1_1;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_46;
      FIX::TimeInForce TimeInForce_61('6');
      noTimeInForceRules_2_1_1.set(TimeInForce_61);
      TimeInForceRules_NoTimeInForceRules_46.insert(TimeInForce_61.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_46);

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
