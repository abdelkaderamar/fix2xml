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
  FIX::TradSesReqID TradSesReqID_2("STRING_1075019429");
  msg.set(TradSesReqID_2);
  TradingSessionListUpdateReport_0.insert(TradSesReqID_2.getString());
  all_values.push_back(TradingSessionListUpdateReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_21;
  FIX::ApplID ApplID_21("STRING_1320326513");
  msg.set(ApplID_21);
  ApplicationSequenceControl_21.insert(ApplID_21.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_21(1143050900);
  msg.set(ApplLastSeqNum_21);
  ApplicationSequenceControl_21.insert(ApplLastSeqNum_21.getString());
  FIX::ApplResendFlag ApplResendFlag_21(false);
  msg.set(ApplResendFlag_21);
  ApplicationSequenceControl_21.insert(ApplResendFlag_21.getString());
  FIX::ApplSeqNum ApplSeqNum_21(1945418468);
  msg.set(ApplSeqNum_21);
  ApplicationSequenceControl_21.insert(ApplSeqNum_21.getString());
  all_values.push_back(ApplicationSequenceControl_21);

  // TrdSessLstGrp
  // Group TrdSessLstGrp.NoTradingSessions
  {
    FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions noTradingSessions_0_0;
    // TrdSessLstGrp.NoTradingSessions
    multiset<string> TrdSessLstGrp_NoTradingSessions_1;
    FIX::EncodedText EncodedText_101("DATA_1894045256");
    noTradingSessions_0_0.set(EncodedText_101);
    TrdSessLstGrp_NoTradingSessions_1.insert(EncodedText_101.getString());
    FIX::EncodedTextLen EncodedTextLen_101(829549196);
    noTradingSessions_0_0.set(EncodedTextLen_101);
    TrdSessLstGrp_NoTradingSessions_1.insert(EncodedTextLen_101.getString());
    FIX::MarketID MarketID_32("EXCHANGE_438137449");
    noTradingSessions_0_0.set(MarketID_32);
    TrdSessLstGrp_NoTradingSessions_1.insert(MarketID_32.getString());
    FIX::MarketSegmentID MarketSegmentID_32("STRING_42929248");
    noTradingSessions_0_0.set(MarketSegmentID_32);
    TrdSessLstGrp_NoTradingSessions_1.insert(MarketSegmentID_32.getString());
    FIX::SecurityExchange SecurityExchange_95("EXCHANGE_1991512348");
    noTradingSessions_0_0.set(SecurityExchange_95);
    TrdSessLstGrp_NoTradingSessions_1.insert(SecurityExchange_95.getString());
    FIX::Text Text_101("STRING_252063150");
    noTradingSessions_0_0.set(Text_101);
    TrdSessLstGrp_NoTradingSessions_1.insert(Text_101.getString());
    FIX::TotalVolumeTraded TotalVolumeTraded_1;
    TotalVolumeTraded_1.setString("18321350");
    noTradingSessions_0_0.set(TotalVolumeTraded_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TotalVolumeTraded_1.getString());
    FIX::TradSesCloseTime TradSesCloseTime_1(FIX::UTCTIMESTAMP(10, 59, 57, 23, 92016));
    noTradingSessions_0_0.set(TradSesCloseTime_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesCloseTime_1.getString());
    FIX::TradSesEndTime TradSesEndTime_1(FIX::UTCTIMESTAMP(20, 44, 6, 25, 72013));
    noTradingSessions_0_0.set(TradSesEndTime_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesEndTime_1.getString());
    FIX::TradSesMethod TradSesMethod_2(2);
    noTradingSessions_0_0.set(TradSesMethod_2);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesMethod_2.getString());
    FIX::TradSesMode TradSesMode_2(1);
    noTradingSessions_0_0.set(TradSesMode_2);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesMode_2.getString());
    FIX::TradSesOpenTime TradSesOpenTime_1(FIX::UTCTIMESTAMP(14, 44, 53, 10, 22006));
    noTradingSessions_0_0.set(TradSesOpenTime_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesOpenTime_1.getString());
    FIX::TradSesPreCloseTime TradSesPreCloseTime_1(FIX::UTCTIMESTAMP(14, 50, 53, 22, 112017));
    noTradingSessions_0_0.set(TradSesPreCloseTime_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesPreCloseTime_1.getString());
    FIX::TradSesStartTime TradSesStartTime_1(FIX::UTCTIMESTAMP(4, 14, 27, 18, 102015));
    noTradingSessions_0_0.set(TradSesStartTime_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesStartTime_1.getString());
    FIX::TradSesStatus TradSesStatus_1(3);
    noTradingSessions_0_0.set(TradSesStatus_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesStatus_1.getString());
    FIX::TradSesStatusRejReason TradSesStatusRejReason_1(1);
    noTradingSessions_0_0.set(TradSesStatusRejReason_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesStatusRejReason_1.getString());
    FIX::TradSesUpdateAction TradSesUpdateAction_1('1');
    noTradingSessions_0_0.set(TradSesUpdateAction_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesUpdateAction_1.getString());
    FIX::TradingSessionDesc TradingSessionDesc_1("STRING_352087450");
    noTradingSessions_0_0.set(TradingSessionDesc_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradingSessionDesc_1.getString());
    FIX::TradingSessionID TradingSessionID_105("STRING_3");
    noTradingSessions_0_0.set(TradingSessionID_105);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradingSessionID_105.getString());
    FIX::TradingSessionSubID TradingSessionSubID_105("STRING_6");
    noTradingSessions_0_0.set(TradingSessionSubID_105);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradingSessionSubID_105.getString());
    FIX::TransactTime TransactTime_68(FIX::UTCTIMESTAMP(13, 15, 20, 25, 102002));
    noTradingSessions_0_0.set(TransactTime_68);
    TrdSessLstGrp_NoTradingSessions_1.insert(TransactTime_68.getString());
    FIX::UnsolicitedIndicator UnsolicitedIndicator_5(true);
    noTradingSessions_0_0.set(UnsolicitedIndicator_5);
    TrdSessLstGrp_NoTradingSessions_1.insert(UnsolicitedIndicator_5.getString());
    all_values.push_back(TrdSessLstGrp_NoTradingSessions_1);

    // TradingSessionRules
    // ExecInstRules
    // Group ExecInstRules.NoExecInstRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoExecInstRules noExecInstRules_0_1_0;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_71;
      FIX::ExecInstValue ExecInstValue_71('2');
      noExecInstRules_0_1_0.set(ExecInstValue_71);
      ExecInstRules_NoExecInstRules_71.insert(ExecInstValue_71.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_71);

      noTradingSessions_0_0.addGroup(noExecInstRules_0_1_0);
    }
    // MarketDataFeedTypes
    // Group MarketDataFeedTypes.NoMDFeedTypes
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_0;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_67;
      FIX::MDBookType MDBookType_70(3);
      noMDFeedTypes_0_1_0.set(MDBookType_70);
      MarketDataFeedTypes_NoMDFeedTypes_67.insert(MDBookType_70.getString());
      FIX::MDFeedType MDFeedType_69("STRING_442184439");
      noMDFeedTypes_0_1_0.set(MDFeedType_69);
      MarketDataFeedTypes_NoMDFeedTypes_67.insert(MDFeedType_69.getString());
      FIX::MarketDepth MarketDepth_71(1348764383);
      noMDFeedTypes_0_1_0.set(MarketDepth_71);
      MarketDataFeedTypes_NoMDFeedTypes_67.insert(MarketDepth_71.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_67);

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_1;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_68;
      FIX::MDBookType MDBookType_71(3);
      noMDFeedTypes_0_1_1.set(MDBookType_71);
      MarketDataFeedTypes_NoMDFeedTypes_68.insert(MDBookType_71.getString());
      FIX::MDFeedType MDFeedType_70("STRING_1001171758");
      noMDFeedTypes_0_1_1.set(MDFeedType_70);
      MarketDataFeedTypes_NoMDFeedTypes_68.insert(MDFeedType_70.getString());
      FIX::MarketDepth MarketDepth_72(1163007145);
      noMDFeedTypes_0_1_1.set(MarketDepth_72);
      MarketDataFeedTypes_NoMDFeedTypes_68.insert(MarketDepth_72.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_68);

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_1);
    }
    // MatchRules
    // Group MatchRules.NoMatchRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_0_1_0;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_70;
      FIX::MatchAlgorithm MatchAlgorithm_70("STRING_1244810486");
      noMatchRules_0_1_0.set(MatchAlgorithm_70);
      MatchRules_NoMatchRules_70.insert(MatchAlgorithm_70.getString());
      FIX::MatchType MatchType_77("STRING_S5");
      noMatchRules_0_1_0.set(MatchType_77);
      MatchRules_NoMatchRules_70.insert(MatchType_77.getString());
      all_values.push_back(MatchRules_NoMatchRules_70);

      noTradingSessions_0_0.addGroup(noMatchRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_0_1_1;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_71;
      FIX::MatchAlgorithm MatchAlgorithm_71("STRING_33737483");
      noMatchRules_0_1_1.set(MatchAlgorithm_71);
      MatchRules_NoMatchRules_71.insert(MatchAlgorithm_71.getString());
      FIX::MatchType MatchType_78("STRING_M6");
      noMatchRules_0_1_1.set(MatchType_78);
      MatchRules_NoMatchRules_71.insert(MatchType_78.getString());
      all_values.push_back(MatchRules_NoMatchRules_71);

      noTradingSessions_0_0.addGroup(noMatchRules_0_1_1);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_0_1_2;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_72;
      FIX::MatchAlgorithm MatchAlgorithm_72("STRING_1304635948");
      noMatchRules_0_1_2.set(MatchAlgorithm_72);
      MatchRules_NoMatchRules_72.insert(MatchAlgorithm_72.getString());
      FIX::MatchType MatchType_79("STRING_M5");
      noMatchRules_0_1_2.set(MatchType_79);
      MatchRules_NoMatchRules_72.insert(MatchType_79.getString());
      all_values.push_back(MatchRules_NoMatchRules_72);

      noTradingSessions_0_0.addGroup(noMatchRules_0_1_2);
    }
    // OrdTypeRules
    // Group OrdTypeRules.NoOrdTypeRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_0;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_78;
      FIX::OrdType OrdType_103('3');
      noOrdTypeRules_0_1_0.set(OrdType_103);
      OrdTypeRules_NoOrdTypeRules_78.insert(OrdType_103.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_78);

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_0);
    }
    // TimeInForceRules
    // Group TimeInForceRules.NoTimeInForceRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_0;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_70;
      FIX::TimeInForce TimeInForce_85('0');
      noTimeInForceRules_0_1_0.set(TimeInForce_85);
      TimeInForceRules_NoTimeInForceRules_70.insert(TimeInForce_85.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_70);

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_1;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_71;
      FIX::TimeInForce TimeInForce_86('4');
      noTimeInForceRules_0_1_1.set(TimeInForce_86);
      TimeInForceRules_NoTimeInForceRules_71.insert(TimeInForce_86.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_71);

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_1);
    }
    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions noTradingSessions_0_1;
    // TrdSessLstGrp.NoTradingSessions
    multiset<string> TrdSessLstGrp_NoTradingSessions_2;
    FIX::EncodedText EncodedText_102("DATA_1477951458");
    noTradingSessions_0_1.set(EncodedText_102);
    TrdSessLstGrp_NoTradingSessions_2.insert(EncodedText_102.getString());
    FIX::EncodedTextLen EncodedTextLen_102(653662485);
    noTradingSessions_0_1.set(EncodedTextLen_102);
    TrdSessLstGrp_NoTradingSessions_2.insert(EncodedTextLen_102.getString());
    FIX::MarketID MarketID_33("EXCHANGE_1346032629");
    noTradingSessions_0_1.set(MarketID_33);
    TrdSessLstGrp_NoTradingSessions_2.insert(MarketID_33.getString());
    FIX::MarketSegmentID MarketSegmentID_33("STRING_2055736039");
    noTradingSessions_0_1.set(MarketSegmentID_33);
    TrdSessLstGrp_NoTradingSessions_2.insert(MarketSegmentID_33.getString());
    FIX::SecurityExchange SecurityExchange_96("EXCHANGE_642354412");
    noTradingSessions_0_1.set(SecurityExchange_96);
    TrdSessLstGrp_NoTradingSessions_2.insert(SecurityExchange_96.getString());
    FIX::Text Text_102("STRING_985625601");
    noTradingSessions_0_1.set(Text_102);
    TrdSessLstGrp_NoTradingSessions_2.insert(Text_102.getString());
    FIX::TotalVolumeTraded TotalVolumeTraded_2;
    TotalVolumeTraded_2.setString("6559241");
    noTradingSessions_0_1.set(TotalVolumeTraded_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TotalVolumeTraded_2.getString());
    FIX::TradSesCloseTime TradSesCloseTime_2(FIX::UTCTIMESTAMP(21, 59, 30, 27, 42000));
    noTradingSessions_0_1.set(TradSesCloseTime_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesCloseTime_2.getString());
    FIX::TradSesEndTime TradSesEndTime_2(FIX::UTCTIMESTAMP(6, 23, 36, 12, 92012));
    noTradingSessions_0_1.set(TradSesEndTime_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesEndTime_2.getString());
    FIX::TradSesMethod TradSesMethod_3(2);
    noTradingSessions_0_1.set(TradSesMethod_3);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesMethod_3.getString());
    FIX::TradSesMode TradSesMode_3(2);
    noTradingSessions_0_1.set(TradSesMode_3);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesMode_3.getString());
    FIX::TradSesOpenTime TradSesOpenTime_2(FIX::UTCTIMESTAMP(18, 28, 32, 0, 92012));
    noTradingSessions_0_1.set(TradSesOpenTime_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesOpenTime_2.getString());
    FIX::TradSesPreCloseTime TradSesPreCloseTime_2(FIX::UTCTIMESTAMP(7, 57, 38, 26, 62009));
    noTradingSessions_0_1.set(TradSesPreCloseTime_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesPreCloseTime_2.getString());
    FIX::TradSesStartTime TradSesStartTime_2(FIX::UTCTIMESTAMP(23, 1, 54, 9, 12007));
    noTradingSessions_0_1.set(TradSesStartTime_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesStartTime_2.getString());
    FIX::TradSesStatus TradSesStatus_2(1);
    noTradingSessions_0_1.set(TradSesStatus_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesStatus_2.getString());
    FIX::TradSesStatusRejReason TradSesStatusRejReason_2(1);
    noTradingSessions_0_1.set(TradSesStatusRejReason_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesStatusRejReason_2.getString());
    FIX::TradSesUpdateAction TradSesUpdateAction_2('7');
    noTradingSessions_0_1.set(TradSesUpdateAction_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradSesUpdateAction_2.getString());
    FIX::TradingSessionDesc TradingSessionDesc_2("STRING_1026045615");
    noTradingSessions_0_1.set(TradingSessionDesc_2);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradingSessionDesc_2.getString());
    FIX::TradingSessionID TradingSessionID_106("STRING_2");
    noTradingSessions_0_1.set(TradingSessionID_106);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradingSessionID_106.getString());
    FIX::TradingSessionSubID TradingSessionSubID_106("STRING_6");
    noTradingSessions_0_1.set(TradingSessionSubID_106);
    TrdSessLstGrp_NoTradingSessions_2.insert(TradingSessionSubID_106.getString());
    FIX::TransactTime TransactTime_69(FIX::UTCTIMESTAMP(1, 26, 43, 17, 92005));
    noTradingSessions_0_1.set(TransactTime_69);
    TrdSessLstGrp_NoTradingSessions_2.insert(TransactTime_69.getString());
    FIX::UnsolicitedIndicator UnsolicitedIndicator_6(false);
    noTradingSessions_0_1.set(UnsolicitedIndicator_6);
    TrdSessLstGrp_NoTradingSessions_2.insert(UnsolicitedIndicator_6.getString());
    all_values.push_back(TrdSessLstGrp_NoTradingSessions_2);

    // TradingSessionRules
    // ExecInstRules
    // Group ExecInstRules.NoExecInstRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoExecInstRules noExecInstRules_1_1_0;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_72;
      FIX::ExecInstValue ExecInstValue_72('8');
      noExecInstRules_1_1_0.set(ExecInstValue_72);
      ExecInstRules_NoExecInstRules_72.insert(ExecInstValue_72.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_72);

      noTradingSessions_0_1.addGroup(noExecInstRules_1_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoExecInstRules noExecInstRules_1_1_1;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_73;
      FIX::ExecInstValue ExecInstValue_73('1');
      noExecInstRules_1_1_1.set(ExecInstValue_73);
      ExecInstRules_NoExecInstRules_73.insert(ExecInstValue_73.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_73);

      noTradingSessions_0_1.addGroup(noExecInstRules_1_1_1);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoExecInstRules noExecInstRules_1_1_2;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_74;
      FIX::ExecInstValue ExecInstValue_74('4');
      noExecInstRules_1_1_2.set(ExecInstValue_74);
      ExecInstRules_NoExecInstRules_74.insert(ExecInstValue_74.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_74);

      noTradingSessions_0_1.addGroup(noExecInstRules_1_1_2);
    }
    // MarketDataFeedTypes
    // Group MarketDataFeedTypes.NoMDFeedTypes
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_1_1_0;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_69;
      FIX::MDBookType MDBookType_72(1);
      noMDFeedTypes_1_1_0.set(MDBookType_72);
      MarketDataFeedTypes_NoMDFeedTypes_69.insert(MDBookType_72.getString());
      FIX::MDFeedType MDFeedType_71("STRING_2022418046");
      noMDFeedTypes_1_1_0.set(MDFeedType_71);
      MarketDataFeedTypes_NoMDFeedTypes_69.insert(MDFeedType_71.getString());
      FIX::MarketDepth MarketDepth_73(1364904877);
      noMDFeedTypes_1_1_0.set(MarketDepth_73);
      MarketDataFeedTypes_NoMDFeedTypes_69.insert(MarketDepth_73.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_69);

      noTradingSessions_0_1.addGroup(noMDFeedTypes_1_1_0);
    }
    // MatchRules
    // Group MatchRules.NoMatchRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_1_1_0;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_73;
      FIX::MatchAlgorithm MatchAlgorithm_73("STRING_241577830");
      noMatchRules_1_1_0.set(MatchAlgorithm_73);
      MatchRules_NoMatchRules_73.insert(MatchAlgorithm_73.getString());
      FIX::MatchType MatchType_80("STRING_S3");
      noMatchRules_1_1_0.set(MatchType_80);
      MatchRules_NoMatchRules_73.insert(MatchType_80.getString());
      all_values.push_back(MatchRules_NoMatchRules_73);

      noTradingSessions_0_1.addGroup(noMatchRules_1_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_1_1_1;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_74;
      FIX::MatchAlgorithm MatchAlgorithm_74("STRING_1595719487");
      noMatchRules_1_1_1.set(MatchAlgorithm_74);
      MatchRules_NoMatchRules_74.insert(MatchAlgorithm_74.getString());
      FIX::MatchType MatchType_81("STRING_6");
      noMatchRules_1_1_1.set(MatchType_81);
      MatchRules_NoMatchRules_74.insert(MatchType_81.getString());
      all_values.push_back(MatchRules_NoMatchRules_74);

      noTradingSessions_0_1.addGroup(noMatchRules_1_1_1);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_1_1_2;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_75;
      FIX::MatchAlgorithm MatchAlgorithm_75("STRING_1689178338");
      noMatchRules_1_1_2.set(MatchAlgorithm_75);
      MatchRules_NoMatchRules_75.insert(MatchAlgorithm_75.getString());
      FIX::MatchType MatchType_82("STRING_M3");
      noMatchRules_1_1_2.set(MatchType_82);
      MatchRules_NoMatchRules_75.insert(MatchType_82.getString());
      all_values.push_back(MatchRules_NoMatchRules_75);

      noTradingSessions_0_1.addGroup(noMatchRules_1_1_2);
    }
    // OrdTypeRules
    // Group OrdTypeRules.NoOrdTypeRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_1_1_0;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_79;
      FIX::OrdType OrdType_104('Q');
      noOrdTypeRules_1_1_0.set(OrdType_104);
      OrdTypeRules_NoOrdTypeRules_79.insert(OrdType_104.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_79);

      noTradingSessions_0_1.addGroup(noOrdTypeRules_1_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_1_1_1;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_80;
      FIX::OrdType OrdType_105('D');
      noOrdTypeRules_1_1_1.set(OrdType_105);
      OrdTypeRules_NoOrdTypeRules_80.insert(OrdType_105.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_80);

      noTradingSessions_0_1.addGroup(noOrdTypeRules_1_1_1);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_1_1_2;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_81;
      FIX::OrdType OrdType_106('I');
      noOrdTypeRules_1_1_2.set(OrdType_106);
      OrdTypeRules_NoOrdTypeRules_81.insert(OrdType_106.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_81);

      noTradingSessions_0_1.addGroup(noOrdTypeRules_1_1_2);
    }
    // TimeInForceRules
    // Group TimeInForceRules.NoTimeInForceRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_1_1_0;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_72;
      FIX::TimeInForce TimeInForce_87('7');
      noTimeInForceRules_1_1_0.set(TimeInForce_87);
      TimeInForceRules_NoTimeInForceRules_72.insert(TimeInForce_87.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_72);

      noTradingSessions_0_1.addGroup(noTimeInForceRules_1_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_1_1_1;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_73;
      FIX::TimeInForce TimeInForce_88('8');
      noTimeInForceRules_1_1_1.set(TimeInForce_88);
      TimeInForceRules_NoTimeInForceRules_73.insert(TimeInForce_88.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_73);

      noTradingSessions_0_1.addGroup(noTimeInForceRules_1_1_1);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_1_1_2;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_74;
      FIX::TimeInForce TimeInForce_89('3');
      noTimeInForceRules_1_1_2.set(TimeInForce_89);
      TimeInForceRules_NoTimeInForceRules_74.insert(TimeInForce_89.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_74);

      noTradingSessions_0_1.addGroup(noTimeInForceRules_1_1_2);
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
