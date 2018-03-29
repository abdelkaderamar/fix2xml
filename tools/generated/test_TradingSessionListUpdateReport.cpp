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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::TradingSessionListUpdateReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradingSessionListUpdateReport_0;
  FIX::TradSesReqID TradSesReqID_2("STRING_1948379881");
  msg.set(TradSesReqID_2);
  TradingSessionListUpdateReport_0.insert(TradSesReqID_2.getString());
  all_values.push_back(TradingSessionListUpdateReport_0);

  all_compo_names.insert("TradingSessionListUpdateReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_21;
  FIX::ApplID ApplID_21("STRING_1963563633");
  msg.set(ApplID_21);
  ApplicationSequenceControl_21.insert(ApplID_21.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_21(751410362);
  msg.set(ApplLastSeqNum_21);
  ApplicationSequenceControl_21.insert(ApplLastSeqNum_21.getString());
  FIX::ApplResendFlag ApplResendFlag_21(false);
  msg.set(ApplResendFlag_21);
  ApplicationSequenceControl_21.insert(ApplResendFlag_21.getString());
  FIX::ApplSeqNum ApplSeqNum_21(526233583);
  msg.set(ApplSeqNum_21);
  ApplicationSequenceControl_21.insert(ApplSeqNum_21.getString());
  all_values.push_back(ApplicationSequenceControl_21);
  all_compo_names.insert("ApplicationSequenceControl");

  // TrdSessLstGrp
  // Group TrdSessLstGrp.NoTradingSessions
  {
    FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions noTradingSessions_0_0;
    // TrdSessLstGrp.NoTradingSessions
    multiset<string> TrdSessLstGrp_NoTradingSessions_3;
    FIX::EncodedText EncodedText_109("DATA_918263900");
    noTradingSessions_0_0.set(EncodedText_109);
    TrdSessLstGrp_NoTradingSessions_3.insert(EncodedText_109.getString());
    FIX::EncodedTextLen EncodedTextLen_109(96942108);
    noTradingSessions_0_0.set(EncodedTextLen_109);
    TrdSessLstGrp_NoTradingSessions_3.insert(EncodedTextLen_109.getString());
    FIX::MarketID MarketID_33("EXCHANGE_690404971");
    noTradingSessions_0_0.set(MarketID_33);
    TrdSessLstGrp_NoTradingSessions_3.insert(MarketID_33.getString());
    FIX::MarketSegmentID MarketSegmentID_33("STRING_68346461");
    noTradingSessions_0_0.set(MarketSegmentID_33);
    TrdSessLstGrp_NoTradingSessions_3.insert(MarketSegmentID_33.getString());
    FIX::SecurityExchange SecurityExchange_108("EXCHANGE_2030830324");
    noTradingSessions_0_0.set(SecurityExchange_108);
    TrdSessLstGrp_NoTradingSessions_3.insert(SecurityExchange_108.getString());
    FIX::Text Text_109("STRING_1480304753");
    noTradingSessions_0_0.set(Text_109);
    TrdSessLstGrp_NoTradingSessions_3.insert(Text_109.getString());
    FIX::TotalVolumeTraded TotalVolumeTraded_3;
    TotalVolumeTraded_3.setString("870518");
    noTradingSessions_0_0.set(TotalVolumeTraded_3);
    TrdSessLstGrp_NoTradingSessions_3.insert(TotalVolumeTraded_3.getString());
    FIX::TradSesCloseTime TradSesCloseTime_3(FIX::UTCTIMESTAMP(10, 13, 8, 20, 11, 2016));
    noTradingSessions_0_0.set(TradSesCloseTime_3);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradSesCloseTime_3.getString());
    FIX::TradSesEndTime TradSesEndTime_3(FIX::UTCTIMESTAMP(20, 35, 22, 16, 9, 2000));
    noTradingSessions_0_0.set(TradSesEndTime_3);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradSesEndTime_3.getString());
    FIX::TradSesMethod TradSesMethod_4(1);
    noTradingSessions_0_0.set(TradSesMethod_4);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradSesMethod_4.getString());
    FIX::TradSesMode TradSesMode_4(2);
    noTradingSessions_0_0.set(TradSesMode_4);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradSesMode_4.getString());
    FIX::TradSesOpenTime TradSesOpenTime_3(FIX::UTCTIMESTAMP(19, 6, 39, 17, 12, 2016));
    noTradingSessions_0_0.set(TradSesOpenTime_3);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradSesOpenTime_3.getString());
    FIX::TradSesPreCloseTime TradSesPreCloseTime_3(FIX::UTCTIMESTAMP(20, 10, 34, 17, 7, 2002));
    noTradingSessions_0_0.set(TradSesPreCloseTime_3);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradSesPreCloseTime_3.getString());
    FIX::TradSesStartTime TradSesStartTime_3(FIX::UTCTIMESTAMP(6, 54, 55, 7, 8, 2011));
    noTradingSessions_0_0.set(TradSesStartTime_3);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradSesStartTime_3.getString());
    FIX::TradSesStatus TradSesStatus_3(6);
    noTradingSessions_0_0.set(TradSesStatus_3);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradSesStatus_3.getString());
    FIX::TradSesStatusRejReason TradSesStatusRejReason_3(99);
    noTradingSessions_0_0.set(TradSesStatusRejReason_3);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradSesStatusRejReason_3.getString());
    FIX::TradSesUpdateAction TradSesUpdateAction_3('2');
    noTradingSessions_0_0.set(TradSesUpdateAction_3);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradSesUpdateAction_3.getString());
    FIX::TradingSessionDesc TradingSessionDesc_3("STRING_233286344");
    noTradingSessions_0_0.set(TradingSessionDesc_3);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradingSessionDesc_3.getString());
    FIX::TradingSessionID TradingSessionID_127("STRING_4");
    noTradingSessions_0_0.set(TradingSessionID_127);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradingSessionID_127.getString());
    FIX::TradingSessionSubID TradingSessionSubID_127("STRING_2");
    noTradingSessions_0_0.set(TradingSessionSubID_127);
    TrdSessLstGrp_NoTradingSessions_3.insert(TradingSessionSubID_127.getString());
    FIX::TransactTime TransactTime_79(FIX::UTCTIMESTAMP(4, 42, 21, 10, 2, 2014));
    noTradingSessions_0_0.set(TransactTime_79);
    TrdSessLstGrp_NoTradingSessions_3.insert(TransactTime_79.getString());
    FIX::UnsolicitedIndicator UnsolicitedIndicator_7(false);
    noTradingSessions_0_0.set(UnsolicitedIndicator_7);
    TrdSessLstGrp_NoTradingSessions_3.insert(UnsolicitedIndicator_7.getString());
    all_values.push_back(TrdSessLstGrp_NoTradingSessions_3);
    all_compo_names.insert("TrdSessLstGrp.NoTradingSessions");

    // TradingSessionRules
    // ExecInstRules
    // Group ExecInstRules.NoExecInstRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoExecInstRules noExecInstRules_0_1_0;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_65;
      FIX::ExecInstValue ExecInstValue_65('4');
      noExecInstRules_0_1_0.set(ExecInstValue_65);
      ExecInstRules_NoExecInstRules_65.insert(ExecInstValue_65.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_65);
      all_compo_names.insert("ExecInstRules.NoExecInstRules");

      noTradingSessions_0_0.addGroup(noExecInstRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoExecInstRules noExecInstRules_0_1_1;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_66;
      FIX::ExecInstValue ExecInstValue_66('1');
      noExecInstRules_0_1_1.set(ExecInstValue_66);
      ExecInstRules_NoExecInstRules_66.insert(ExecInstValue_66.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_66);
      all_compo_names.insert("ExecInstRules.NoExecInstRules");

      noTradingSessions_0_0.addGroup(noExecInstRules_0_1_1);
    }
    // MarketDataFeedTypes
    // Group MarketDataFeedTypes.NoMDFeedTypes
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_0;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_63;
      FIX::MDBookType MDBookType_66(1);
      noMDFeedTypes_0_1_0.set(MDBookType_66);
      MarketDataFeedTypes_NoMDFeedTypes_63.insert(MDBookType_66.getString());
      FIX::MDFeedType MDFeedType_65("STRING_454928633");
      noMDFeedTypes_0_1_0.set(MDFeedType_65);
      MarketDataFeedTypes_NoMDFeedTypes_63.insert(MDFeedType_65.getString());
      FIX::MarketDepth MarketDepth_67(1481503744);
      noMDFeedTypes_0_1_0.set(MarketDepth_67);
      MarketDataFeedTypes_NoMDFeedTypes_63.insert(MarketDepth_67.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_63);
      all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_1;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_64;
      FIX::MDBookType MDBookType_67(1);
      noMDFeedTypes_0_1_1.set(MDBookType_67);
      MarketDataFeedTypes_NoMDFeedTypes_64.insert(MDBookType_67.getString());
      FIX::MDFeedType MDFeedType_66("STRING_1859708759");
      noMDFeedTypes_0_1_1.set(MDFeedType_66);
      MarketDataFeedTypes_NoMDFeedTypes_64.insert(MDFeedType_66.getString());
      FIX::MarketDepth MarketDepth_68(135102196);
      noMDFeedTypes_0_1_1.set(MarketDepth_68);
      MarketDataFeedTypes_NoMDFeedTypes_64.insert(MarketDepth_68.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_64);
      all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_1);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_2;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_65;
      FIX::MDBookType MDBookType_68(3);
      noMDFeedTypes_0_1_2.set(MDBookType_68);
      MarketDataFeedTypes_NoMDFeedTypes_65.insert(MDBookType_68.getString());
      FIX::MDFeedType MDFeedType_67("STRING_1639002574");
      noMDFeedTypes_0_1_2.set(MDFeedType_67);
      MarketDataFeedTypes_NoMDFeedTypes_65.insert(MDFeedType_67.getString());
      FIX::MarketDepth MarketDepth_69(1797159370);
      noMDFeedTypes_0_1_2.set(MarketDepth_69);
      MarketDataFeedTypes_NoMDFeedTypes_65.insert(MarketDepth_69.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_65);
      all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_2);
    }
    // MatchRules
    // Group MatchRules.NoMatchRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_0_1_0;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_69;
      FIX::MatchAlgorithm MatchAlgorithm_69("STRING_1883263577");
      noMatchRules_0_1_0.set(MatchAlgorithm_69);
      MatchRules_NoMatchRules_69.insert(MatchAlgorithm_69.getString());
      FIX::MatchType MatchType_76("STRING_M6");
      noMatchRules_0_1_0.set(MatchType_76);
      MatchRules_NoMatchRules_69.insert(MatchType_76.getString());
      all_values.push_back(MatchRules_NoMatchRules_69);
      all_compo_names.insert("MatchRules.NoMatchRules");

      noTradingSessions_0_0.addGroup(noMatchRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_0_1_1;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_70;
      FIX::MatchAlgorithm MatchAlgorithm_70("STRING_897070996");
      noMatchRules_0_1_1.set(MatchAlgorithm_70);
      MatchRules_NoMatchRules_70.insert(MatchAlgorithm_70.getString());
      FIX::MatchType MatchType_77("STRING_S3");
      noMatchRules_0_1_1.set(MatchType_77);
      MatchRules_NoMatchRules_70.insert(MatchType_77.getString());
      all_values.push_back(MatchRules_NoMatchRules_70);
      all_compo_names.insert("MatchRules.NoMatchRules");

      noTradingSessions_0_0.addGroup(noMatchRules_0_1_1);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_0_1_2;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_71;
      FIX::MatchAlgorithm MatchAlgorithm_71("STRING_1877042003");
      noMatchRules_0_1_2.set(MatchAlgorithm_71);
      MatchRules_NoMatchRules_71.insert(MatchAlgorithm_71.getString());
      FIX::MatchType MatchType_78("STRING_5");
      noMatchRules_0_1_2.set(MatchType_78);
      MatchRules_NoMatchRules_71.insert(MatchType_78.getString());
      all_values.push_back(MatchRules_NoMatchRules_71);
      all_compo_names.insert("MatchRules.NoMatchRules");

      noTradingSessions_0_0.addGroup(noMatchRules_0_1_2);
    }
    // OrdTypeRules
    // Group OrdTypeRules.NoOrdTypeRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_0;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_65;
      FIX::OrdType OrdType_103('7');
      noOrdTypeRules_0_1_0.set(OrdType_103);
      OrdTypeRules_NoOrdTypeRules_65.insert(OrdType_103.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_65);
      all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_1;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_66;
      FIX::OrdType OrdType_104('5');
      noOrdTypeRules_0_1_1.set(OrdType_104);
      OrdTypeRules_NoOrdTypeRules_66.insert(OrdType_104.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_66);
      all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_1);
    }
    // TimeInForceRules
    // Group TimeInForceRules.NoTimeInForceRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_0;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_67;
      FIX::TimeInForce TimeInForce_85('0');
      noTimeInForceRules_0_1_0.set(TimeInForce_85);
      TimeInForceRules_NoTimeInForceRules_67.insert(TimeInForce_85.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_67);
      all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_1;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_68;
      FIX::TimeInForce TimeInForce_86('9');
      noTimeInForceRules_0_1_1.set(TimeInForce_86);
      TimeInForceRules_NoTimeInForceRules_68.insert(TimeInForce_86.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_68);
      all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_1);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_2;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_69;
      FIX::TimeInForce TimeInForce_87('0');
      noTimeInForceRules_0_1_2.set(TimeInForce_87);
      TimeInForceRules_NoTimeInForceRules_69.insert(TimeInForce_87.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_69);
      all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_2);
    }
    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions noTradingSessions_0_1;
    // TrdSessLstGrp.NoTradingSessions
    multiset<string> TrdSessLstGrp_NoTradingSessions_4;
    FIX::EncodedText EncodedText_110("DATA_1244184228");
    noTradingSessions_0_1.set(EncodedText_110);
    TrdSessLstGrp_NoTradingSessions_4.insert(EncodedText_110.getString());
    FIX::EncodedTextLen EncodedTextLen_110(1598543076);
    noTradingSessions_0_1.set(EncodedTextLen_110);
    TrdSessLstGrp_NoTradingSessions_4.insert(EncodedTextLen_110.getString());
    FIX::MarketID MarketID_34("EXCHANGE_842737020");
    noTradingSessions_0_1.set(MarketID_34);
    TrdSessLstGrp_NoTradingSessions_4.insert(MarketID_34.getString());
    FIX::MarketSegmentID MarketSegmentID_34("STRING_900671717");
    noTradingSessions_0_1.set(MarketSegmentID_34);
    TrdSessLstGrp_NoTradingSessions_4.insert(MarketSegmentID_34.getString());
    FIX::SecurityExchange SecurityExchange_109("EXCHANGE_833929803");
    noTradingSessions_0_1.set(SecurityExchange_109);
    TrdSessLstGrp_NoTradingSessions_4.insert(SecurityExchange_109.getString());
    FIX::Text Text_110("STRING_1317132103");
    noTradingSessions_0_1.set(Text_110);
    TrdSessLstGrp_NoTradingSessions_4.insert(Text_110.getString());
    FIX::TotalVolumeTraded TotalVolumeTraded_4;
    TotalVolumeTraded_4.setString("19816505");
    noTradingSessions_0_1.set(TotalVolumeTraded_4);
    TrdSessLstGrp_NoTradingSessions_4.insert(TotalVolumeTraded_4.getString());
    FIX::TradSesCloseTime TradSesCloseTime_4(FIX::UTCTIMESTAMP(15, 53, 28, 0, 10, 2014));
    noTradingSessions_0_1.set(TradSesCloseTime_4);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradSesCloseTime_4.getString());
    FIX::TradSesEndTime TradSesEndTime_4(FIX::UTCTIMESTAMP(19, 55, 38, 0, 9, 2001));
    noTradingSessions_0_1.set(TradSesEndTime_4);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradSesEndTime_4.getString());
    FIX::TradSesMethod TradSesMethod_5(2);
    noTradingSessions_0_1.set(TradSesMethod_5);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradSesMethod_5.getString());
    FIX::TradSesMode TradSesMode_5(3);
    noTradingSessions_0_1.set(TradSesMode_5);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradSesMode_5.getString());
    FIX::TradSesOpenTime TradSesOpenTime_4(FIX::UTCTIMESTAMP(8, 54, 2, 14, 9, 2011));
    noTradingSessions_0_1.set(TradSesOpenTime_4);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradSesOpenTime_4.getString());
    FIX::TradSesPreCloseTime TradSesPreCloseTime_4(FIX::UTCTIMESTAMP(1, 29, 46, 6, 1, 2010));
    noTradingSessions_0_1.set(TradSesPreCloseTime_4);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradSesPreCloseTime_4.getString());
    FIX::TradSesStartTime TradSesStartTime_4(FIX::UTCTIMESTAMP(9, 25, 36, 1, 6, 2003));
    noTradingSessions_0_1.set(TradSesStartTime_4);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradSesStartTime_4.getString());
    FIX::TradSesStatus TradSesStatus_4(0);
    noTradingSessions_0_1.set(TradSesStatus_4);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradSesStatus_4.getString());
    FIX::TradSesStatusRejReason TradSesStatusRejReason_4(1);
    noTradingSessions_0_1.set(TradSesStatusRejReason_4);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradSesStatusRejReason_4.getString());
    FIX::TradSesUpdateAction TradSesUpdateAction_4('8');
    noTradingSessions_0_1.set(TradSesUpdateAction_4);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradSesUpdateAction_4.getString());
    FIX::TradingSessionDesc TradingSessionDesc_4("STRING_1913777757");
    noTradingSessions_0_1.set(TradingSessionDesc_4);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradingSessionDesc_4.getString());
    FIX::TradingSessionID TradingSessionID_128("STRING_4");
    noTradingSessions_0_1.set(TradingSessionID_128);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradingSessionID_128.getString());
    FIX::TradingSessionSubID TradingSessionSubID_128("STRING_4");
    noTradingSessions_0_1.set(TradingSessionSubID_128);
    TrdSessLstGrp_NoTradingSessions_4.insert(TradingSessionSubID_128.getString());
    FIX::TransactTime TransactTime_80(FIX::UTCTIMESTAMP(14, 38, 9, 15, 3, 2015));
    noTradingSessions_0_1.set(TransactTime_80);
    TrdSessLstGrp_NoTradingSessions_4.insert(TransactTime_80.getString());
    FIX::UnsolicitedIndicator UnsolicitedIndicator_8(false);
    noTradingSessions_0_1.set(UnsolicitedIndicator_8);
    TrdSessLstGrp_NoTradingSessions_4.insert(UnsolicitedIndicator_8.getString());
    all_values.push_back(TrdSessLstGrp_NoTradingSessions_4);
    all_compo_names.insert("TrdSessLstGrp.NoTradingSessions");

    // TradingSessionRules
    // ExecInstRules
    // Group ExecInstRules.NoExecInstRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoExecInstRules noExecInstRules_1_1_0;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_67;
      FIX::ExecInstValue ExecInstValue_67('6');
      noExecInstRules_1_1_0.set(ExecInstValue_67);
      ExecInstRules_NoExecInstRules_67.insert(ExecInstValue_67.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_67);
      all_compo_names.insert("ExecInstRules.NoExecInstRules");

      noTradingSessions_0_1.addGroup(noExecInstRules_1_1_0);
    }
    // MarketDataFeedTypes
    // Group MarketDataFeedTypes.NoMDFeedTypes
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_1_1_0;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_66;
      FIX::MDBookType MDBookType_69(2);
      noMDFeedTypes_1_1_0.set(MDBookType_69);
      MarketDataFeedTypes_NoMDFeedTypes_66.insert(MDBookType_69.getString());
      FIX::MDFeedType MDFeedType_68("STRING_918234064");
      noMDFeedTypes_1_1_0.set(MDFeedType_68);
      MarketDataFeedTypes_NoMDFeedTypes_66.insert(MDFeedType_68.getString());
      FIX::MarketDepth MarketDepth_70(563479892);
      noMDFeedTypes_1_1_0.set(MarketDepth_70);
      MarketDataFeedTypes_NoMDFeedTypes_66.insert(MarketDepth_70.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_66);
      all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

      noTradingSessions_0_1.addGroup(noMDFeedTypes_1_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_1_1_1;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_67;
      FIX::MDBookType MDBookType_70(2);
      noMDFeedTypes_1_1_1.set(MDBookType_70);
      MarketDataFeedTypes_NoMDFeedTypes_67.insert(MDBookType_70.getString());
      FIX::MDFeedType MDFeedType_69("STRING_2111119247");
      noMDFeedTypes_1_1_1.set(MDFeedType_69);
      MarketDataFeedTypes_NoMDFeedTypes_67.insert(MDFeedType_69.getString());
      FIX::MarketDepth MarketDepth_71(1166627036);
      noMDFeedTypes_1_1_1.set(MarketDepth_71);
      MarketDataFeedTypes_NoMDFeedTypes_67.insert(MarketDepth_71.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_67);
      all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

      noTradingSessions_0_1.addGroup(noMDFeedTypes_1_1_1);
    }
    // MatchRules
    // Group MatchRules.NoMatchRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_1_1_0;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_72;
      FIX::MatchAlgorithm MatchAlgorithm_72("STRING_990687682");
      noMatchRules_1_1_0.set(MatchAlgorithm_72);
      MatchRules_NoMatchRules_72.insert(MatchAlgorithm_72.getString());
      FIX::MatchType MatchType_79("STRING_A2");
      noMatchRules_1_1_0.set(MatchType_79);
      MatchRules_NoMatchRules_72.insert(MatchType_79.getString());
      all_values.push_back(MatchRules_NoMatchRules_72);
      all_compo_names.insert("MatchRules.NoMatchRules");

      noTradingSessions_0_1.addGroup(noMatchRules_1_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_1_1_1;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_73;
      FIX::MatchAlgorithm MatchAlgorithm_73("STRING_1771637745");
      noMatchRules_1_1_1.set(MatchAlgorithm_73);
      MatchRules_NoMatchRules_73.insert(MatchAlgorithm_73.getString());
      FIX::MatchType MatchType_80("STRING_A5");
      noMatchRules_1_1_1.set(MatchType_80);
      MatchRules_NoMatchRules_73.insert(MatchType_80.getString());
      all_values.push_back(MatchRules_NoMatchRules_73);
      all_compo_names.insert("MatchRules.NoMatchRules");

      noTradingSessions_0_1.addGroup(noMatchRules_1_1_1);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_1_1_2;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_74;
      FIX::MatchAlgorithm MatchAlgorithm_74("STRING_2100975431");
      noMatchRules_1_1_2.set(MatchAlgorithm_74);
      MatchRules_NoMatchRules_74.insert(MatchAlgorithm_74.getString());
      FIX::MatchType MatchType_81("STRING_M3");
      noMatchRules_1_1_2.set(MatchType_81);
      MatchRules_NoMatchRules_74.insert(MatchType_81.getString());
      all_values.push_back(MatchRules_NoMatchRules_74);
      all_compo_names.insert("MatchRules.NoMatchRules");

      noTradingSessions_0_1.addGroup(noMatchRules_1_1_2);
    }
    // OrdTypeRules
    // Group OrdTypeRules.NoOrdTypeRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_1_1_0;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_67;
      FIX::OrdType OrdType_105('E');
      noOrdTypeRules_1_1_0.set(OrdType_105);
      OrdTypeRules_NoOrdTypeRules_67.insert(OrdType_105.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_67);
      all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

      noTradingSessions_0_1.addGroup(noOrdTypeRules_1_1_0);
    }
    // TimeInForceRules
    // Group TimeInForceRules.NoTimeInForceRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_1_1_0;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_70;
      FIX::TimeInForce TimeInForce_88('6');
      noTimeInForceRules_1_1_0.set(TimeInForce_88);
      TimeInForceRules_NoTimeInForceRules_70.insert(TimeInForce_88.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_70);
      all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

      noTradingSessions_0_1.addGroup(noTimeInForceRules_1_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_1_1_1;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_71;
      FIX::TimeInForce TimeInForce_89('2');
      noTimeInForceRules_1_1_1.set(TimeInForce_89);
      TimeInForceRules_NoTimeInForceRules_71.insert(TimeInForce_89.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_71);
      all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

      noTradingSessions_0_1.addGroup(noTimeInForceRules_1_1_1);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_1_1_2;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_72;
      FIX::TimeInForce TimeInForce_90('3');
      noTimeInForceRules_1_1_2.set(TimeInForce_90);
      TimeInForceRules_NoTimeInForceRules_72.insert(TimeInForce_90.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_72);
      all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

      noTradingSessions_0_1.addGroup(noTimeInForceRules_1_1_2);
    }
    msg.addGroup(noTradingSessions_0_1);
  }
  {
    FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions noTradingSessions_0_2;
    // TrdSessLstGrp.NoTradingSessions
    multiset<string> TrdSessLstGrp_NoTradingSessions_5;
    FIX::EncodedText EncodedText_111("DATA_178571429");
    noTradingSessions_0_2.set(EncodedText_111);
    TrdSessLstGrp_NoTradingSessions_5.insert(EncodedText_111.getString());
    FIX::EncodedTextLen EncodedTextLen_111(2046435623);
    noTradingSessions_0_2.set(EncodedTextLen_111);
    TrdSessLstGrp_NoTradingSessions_5.insert(EncodedTextLen_111.getString());
    FIX::MarketID MarketID_35("EXCHANGE_2010054991");
    noTradingSessions_0_2.set(MarketID_35);
    TrdSessLstGrp_NoTradingSessions_5.insert(MarketID_35.getString());
    FIX::MarketSegmentID MarketSegmentID_35("STRING_753187447");
    noTradingSessions_0_2.set(MarketSegmentID_35);
    TrdSessLstGrp_NoTradingSessions_5.insert(MarketSegmentID_35.getString());
    FIX::SecurityExchange SecurityExchange_110("EXCHANGE_619901304");
    noTradingSessions_0_2.set(SecurityExchange_110);
    TrdSessLstGrp_NoTradingSessions_5.insert(SecurityExchange_110.getString());
    FIX::Text Text_111("STRING_1035242327");
    noTradingSessions_0_2.set(Text_111);
    TrdSessLstGrp_NoTradingSessions_5.insert(Text_111.getString());
    FIX::TotalVolumeTraded TotalVolumeTraded_5;
    TotalVolumeTraded_5.setString("12563640");
    noTradingSessions_0_2.set(TotalVolumeTraded_5);
    TrdSessLstGrp_NoTradingSessions_5.insert(TotalVolumeTraded_5.getString());
    FIX::TradSesCloseTime TradSesCloseTime_5(FIX::UTCTIMESTAMP(4, 7, 59, 11, 7, 2015));
    noTradingSessions_0_2.set(TradSesCloseTime_5);
    TrdSessLstGrp_NoTradingSessions_5.insert(TradSesCloseTime_5.getString());
    FIX::TradSesEndTime TradSesEndTime_5(FIX::UTCTIMESTAMP(4, 42, 35, 20, 9, 2007));
    noTradingSessions_0_2.set(TradSesEndTime_5);
    TrdSessLstGrp_NoTradingSessions_5.insert(TradSesEndTime_5.getString());
    FIX::TradSesMethod TradSesMethod_6(2);
    noTradingSessions_0_2.set(TradSesMethod_6);
    TrdSessLstGrp_NoTradingSessions_5.insert(TradSesMethod_6.getString());
    FIX::TradSesMode TradSesMode_6(3);
    noTradingSessions_0_2.set(TradSesMode_6);
    TrdSessLstGrp_NoTradingSessions_5.insert(TradSesMode_6.getString());
    FIX::TradSesOpenTime TradSesOpenTime_5(FIX::UTCTIMESTAMP(7, 59, 29, 18, 4, 2005));
    noTradingSessions_0_2.set(TradSesOpenTime_5);
    TrdSessLstGrp_NoTradingSessions_5.insert(TradSesOpenTime_5.getString());
    FIX::TradSesPreCloseTime TradSesPreCloseTime_5(FIX::UTCTIMESTAMP(20, 38, 7, 4, 4, 2016));
    noTradingSessions_0_2.set(TradSesPreCloseTime_5);
    TrdSessLstGrp_NoTradingSessions_5.insert(TradSesPreCloseTime_5.getString());
    FIX::TradSesStartTime TradSesStartTime_5(FIX::UTCTIMESTAMP(2, 50, 37, 13, 2, 2011));
    noTradingSessions_0_2.set(TradSesStartTime_5);
    TrdSessLstGrp_NoTradingSessions_5.insert(TradSesStartTime_5.getString());
    FIX::TradSesStatus TradSesStatus_5(2);
    noTradingSessions_0_2.set(TradSesStatus_5);
    TrdSessLstGrp_NoTradingSessions_5.insert(TradSesStatus_5.getString());
    FIX::TradSesStatusRejReason TradSesStatusRejReason_5(1);
    noTradingSessions_0_2.set(TradSesStatusRejReason_5);
    TrdSessLstGrp_NoTradingSessions_5.insert(TradSesStatusRejReason_5.getString());
    FIX::TradSesUpdateAction TradSesUpdateAction_5('5');
    noTradingSessions_0_2.set(TradSesUpdateAction_5);
    TrdSessLstGrp_NoTradingSessions_5.insert(TradSesUpdateAction_5.getString());
    FIX::TradingSessionDesc TradingSessionDesc_5("STRING_1688800011");
    noTradingSessions_0_2.set(TradingSessionDesc_5);
    TrdSessLstGrp_NoTradingSessions_5.insert(TradingSessionDesc_5.getString());
    FIX::TradingSessionID TradingSessionID_129("STRING_3");
    noTradingSessions_0_2.set(TradingSessionID_129);
    TrdSessLstGrp_NoTradingSessions_5.insert(TradingSessionID_129.getString());
    FIX::TradingSessionSubID TradingSessionSubID_129("STRING_6");
    noTradingSessions_0_2.set(TradingSessionSubID_129);
    TrdSessLstGrp_NoTradingSessions_5.insert(TradingSessionSubID_129.getString());
    FIX::TransactTime TransactTime_81(FIX::UTCTIMESTAMP(21, 46, 27, 17, 6, 2012));
    noTradingSessions_0_2.set(TransactTime_81);
    TrdSessLstGrp_NoTradingSessions_5.insert(TransactTime_81.getString());
    FIX::UnsolicitedIndicator UnsolicitedIndicator_9(true);
    noTradingSessions_0_2.set(UnsolicitedIndicator_9);
    TrdSessLstGrp_NoTradingSessions_5.insert(UnsolicitedIndicator_9.getString());
    all_values.push_back(TrdSessLstGrp_NoTradingSessions_5);
    all_compo_names.insert("TrdSessLstGrp.NoTradingSessions");

    // TradingSessionRules
    // ExecInstRules
    // Group ExecInstRules.NoExecInstRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoExecInstRules noExecInstRules_2_1_0;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_68;
      FIX::ExecInstValue ExecInstValue_68('4');
      noExecInstRules_2_1_0.set(ExecInstValue_68);
      ExecInstRules_NoExecInstRules_68.insert(ExecInstValue_68.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_68);
      all_compo_names.insert("ExecInstRules.NoExecInstRules");

      noTradingSessions_0_2.addGroup(noExecInstRules_2_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoExecInstRules noExecInstRules_2_1_1;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_69;
      FIX::ExecInstValue ExecInstValue_69('2');
      noExecInstRules_2_1_1.set(ExecInstValue_69);
      ExecInstRules_NoExecInstRules_69.insert(ExecInstValue_69.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_69);
      all_compo_names.insert("ExecInstRules.NoExecInstRules");

      noTradingSessions_0_2.addGroup(noExecInstRules_2_1_1);
    }
    // MarketDataFeedTypes
    // Group MarketDataFeedTypes.NoMDFeedTypes
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_2_1_0;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_68;
      FIX::MDBookType MDBookType_71(1);
      noMDFeedTypes_2_1_0.set(MDBookType_71);
      MarketDataFeedTypes_NoMDFeedTypes_68.insert(MDBookType_71.getString());
      FIX::MDFeedType MDFeedType_70("STRING_1758380319");
      noMDFeedTypes_2_1_0.set(MDFeedType_70);
      MarketDataFeedTypes_NoMDFeedTypes_68.insert(MDFeedType_70.getString());
      FIX::MarketDepth MarketDepth_72(10095426);
      noMDFeedTypes_2_1_0.set(MarketDepth_72);
      MarketDataFeedTypes_NoMDFeedTypes_68.insert(MarketDepth_72.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_68);
      all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

      noTradingSessions_0_2.addGroup(noMDFeedTypes_2_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_2_1_1;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_69;
      FIX::MDBookType MDBookType_72(2);
      noMDFeedTypes_2_1_1.set(MDBookType_72);
      MarketDataFeedTypes_NoMDFeedTypes_69.insert(MDBookType_72.getString());
      FIX::MDFeedType MDFeedType_71("STRING_1714862374");
      noMDFeedTypes_2_1_1.set(MDFeedType_71);
      MarketDataFeedTypes_NoMDFeedTypes_69.insert(MDFeedType_71.getString());
      FIX::MarketDepth MarketDepth_73(571002892);
      noMDFeedTypes_2_1_1.set(MarketDepth_73);
      MarketDataFeedTypes_NoMDFeedTypes_69.insert(MarketDepth_73.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_69);
      all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

      noTradingSessions_0_2.addGroup(noMDFeedTypes_2_1_1);
    }
    // MatchRules
    // Group MatchRules.NoMatchRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_2_1_0;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_75;
      FIX::MatchAlgorithm MatchAlgorithm_75("STRING_1721753449");
      noMatchRules_2_1_0.set(MatchAlgorithm_75);
      MatchRules_NoMatchRules_75.insert(MatchAlgorithm_75.getString());
      FIX::MatchType MatchType_82("STRING_7");
      noMatchRules_2_1_0.set(MatchType_82);
      MatchRules_NoMatchRules_75.insert(MatchType_82.getString());
      all_values.push_back(MatchRules_NoMatchRules_75);
      all_compo_names.insert("MatchRules.NoMatchRules");

      noTradingSessions_0_2.addGroup(noMatchRules_2_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_2_1_1;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_76;
      FIX::MatchAlgorithm MatchAlgorithm_76("STRING_1271607585");
      noMatchRules_2_1_1.set(MatchAlgorithm_76);
      MatchRules_NoMatchRules_76.insert(MatchAlgorithm_76.getString());
      FIX::MatchType MatchType_83("STRING_S1");
      noMatchRules_2_1_1.set(MatchType_83);
      MatchRules_NoMatchRules_76.insert(MatchType_83.getString());
      all_values.push_back(MatchRules_NoMatchRules_76);
      all_compo_names.insert("MatchRules.NoMatchRules");

      noTradingSessions_0_2.addGroup(noMatchRules_2_1_1);
    }
    // OrdTypeRules
    // Group OrdTypeRules.NoOrdTypeRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_2_1_0;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_68;
      FIX::OrdType OrdType_106('L');
      noOrdTypeRules_2_1_0.set(OrdType_106);
      OrdTypeRules_NoOrdTypeRules_68.insert(OrdType_106.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_68);
      all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

      noTradingSessions_0_2.addGroup(noOrdTypeRules_2_1_0);
    }
    // TimeInForceRules
    // Group TimeInForceRules.NoTimeInForceRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_2_1_0;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_73;
      FIX::TimeInForce TimeInForce_91('2');
      noTimeInForceRules_2_1_0.set(TimeInForce_91);
      TimeInForceRules_NoTimeInForceRules_73.insert(TimeInForce_91.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_73);
      all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

      noTradingSessions_0_2.addGroup(noTimeInForceRules_2_1_0);
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
