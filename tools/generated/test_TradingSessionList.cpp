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
  multiset<string> TradingSessionList_0;
  FIX::TradSesReqID TradSesReqID_0("STRING_1492533748");
  msg.set(TradSesReqID_0);
  TradingSessionList_0.insert(TradSesReqID_0.getString());
  all_values.push_back(TradingSessionList_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_20;
  FIX::ApplID ApplID_20("STRING_1869696579");
  msg.set(ApplID_20);
  ApplicationSequenceControl_20.insert(ApplID_20.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_20(1760688862);
  msg.set(ApplLastSeqNum_20);
  ApplicationSequenceControl_20.insert(ApplLastSeqNum_20.getString());
  FIX::ApplResendFlag ApplResendFlag_20(true);
  msg.set(ApplResendFlag_20);
  ApplicationSequenceControl_20.insert(ApplResendFlag_20.getString());
  FIX::ApplSeqNum ApplSeqNum_20(1317653013);
  msg.set(ApplSeqNum_20);
  ApplicationSequenceControl_20.insert(ApplSeqNum_20.getString());
  all_values.push_back(ApplicationSequenceControl_20);

  // TrdSessLstGrp
  // Group TrdSessLstGrp.NoTradingSessions
  {
    FIX50SP2::TradingSessionList::NoTradingSessions noTradingSessions_0_0;
    // TrdSessLstGrp.NoTradingSessions
    multiset<string> TrdSessLstGrp_NoTradingSessions_0;
    FIX::EncodedText EncodedText_94("DATA_1028143856");
    noTradingSessions_0_0.set(EncodedText_94);
    TrdSessLstGrp_NoTradingSessions_0.insert(EncodedText_94.getString());
    FIX::EncodedTextLen EncodedTextLen_94(99637628);
    noTradingSessions_0_0.set(EncodedTextLen_94);
    TrdSessLstGrp_NoTradingSessions_0.insert(EncodedTextLen_94.getString());
    FIX::MarketID MarketID_25("EXCHANGE_1154083663");
    noTradingSessions_0_0.set(MarketID_25);
    TrdSessLstGrp_NoTradingSessions_0.insert(MarketID_25.getString());
    FIX::MarketSegmentID MarketSegmentID_25("STRING_573959323");
    noTradingSessions_0_0.set(MarketSegmentID_25);
    TrdSessLstGrp_NoTradingSessions_0.insert(MarketSegmentID_25.getString());
    FIX::SecurityExchange SecurityExchange_99("EXCHANGE_1369577581");
    noTradingSessions_0_0.set(SecurityExchange_99);
    TrdSessLstGrp_NoTradingSessions_0.insert(SecurityExchange_99.getString());
    FIX::Text Text_94("STRING_1134048398");
    noTradingSessions_0_0.set(Text_94);
    TrdSessLstGrp_NoTradingSessions_0.insert(Text_94.getString());
    FIX::TotalVolumeTraded TotalVolumeTraded_0;
    TotalVolumeTraded_0.setString("5394438");
    noTradingSessions_0_0.set(TotalVolumeTraded_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TotalVolumeTraded_0.getString());
    FIX::TradSesCloseTime TradSesCloseTime_0(FIX::UTCTIMESTAMP(14, 58, 36, 16, 12, 2001));
    noTradingSessions_0_0.set(TradSesCloseTime_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesCloseTime_0.getString());
    FIX::TradSesEndTime TradSesEndTime_0(FIX::UTCTIMESTAMP(7, 53, 5, 14, 7, 2004));
    noTradingSessions_0_0.set(TradSesEndTime_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesEndTime_0.getString());
    FIX::TradSesMethod TradSesMethod_0(1);
    noTradingSessions_0_0.set(TradSesMethod_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesMethod_0.getString());
    FIX::TradSesMode TradSesMode_0(3);
    noTradingSessions_0_0.set(TradSesMode_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesMode_0.getString());
    FIX::TradSesOpenTime TradSesOpenTime_0(FIX::UTCTIMESTAMP(11, 34, 19, 26, 11, 2003));
    noTradingSessions_0_0.set(TradSesOpenTime_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesOpenTime_0.getString());
    FIX::TradSesPreCloseTime TradSesPreCloseTime_0(FIX::UTCTIMESTAMP(6, 53, 28, 2, 7, 2006));
    noTradingSessions_0_0.set(TradSesPreCloseTime_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesPreCloseTime_0.getString());
    FIX::TradSesStartTime TradSesStartTime_0(FIX::UTCTIMESTAMP(18, 25, 14, 10, 6, 2011));
    noTradingSessions_0_0.set(TradSesStartTime_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesStartTime_0.getString());
    FIX::TradSesStatus TradSesStatus_0(4);
    noTradingSessions_0_0.set(TradSesStatus_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesStatus_0.getString());
    FIX::TradSesStatusRejReason TradSesStatusRejReason_0(99);
    noTradingSessions_0_0.set(TradSesStatusRejReason_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesStatusRejReason_0.getString());
    FIX::TradSesUpdateAction TradSesUpdateAction_0('1');
    noTradingSessions_0_0.set(TradSesUpdateAction_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesUpdateAction_0.getString());
    FIX::TradingSessionDesc TradingSessionDesc_0("STRING_1761948322");
    noTradingSessions_0_0.set(TradingSessionDesc_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradingSessionDesc_0.getString());
    FIX::TradingSessionID TradingSessionID_93("STRING_3");
    noTradingSessions_0_0.set(TradingSessionID_93);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradingSessionID_93.getString());
    FIX::TradingSessionSubID TradingSessionSubID_93("STRING_4");
    noTradingSessions_0_0.set(TradingSessionSubID_93);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradingSessionSubID_93.getString());
    FIX::TransactTime TransactTime_73(FIX::UTCTIMESTAMP(12, 6, 14, 8, 7, 2016));
    noTradingSessions_0_0.set(TransactTime_73);
    TrdSessLstGrp_NoTradingSessions_0.insert(TransactTime_73.getString());
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
      multiset<string> ExecInstRules_NoExecInstRules_37;
      FIX::ExecInstValue ExecInstValue_37('1');
      noExecInstRules_0_1_0.set(ExecInstValue_37);
      ExecInstRules_NoExecInstRules_37.insert(ExecInstValue_37.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_37);

      noTradingSessions_0_0.addGroup(noExecInstRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoExecInstRules noExecInstRules_0_1_1;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_38;
      FIX::ExecInstValue ExecInstValue_38('1');
      noExecInstRules_0_1_1.set(ExecInstValue_38);
      ExecInstRules_NoExecInstRules_38.insert(ExecInstValue_38.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_38);

      noTradingSessions_0_0.addGroup(noExecInstRules_0_1_1);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoExecInstRules noExecInstRules_0_1_2;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_39;
      FIX::ExecInstValue ExecInstValue_39('1');
      noExecInstRules_0_1_2.set(ExecInstValue_39);
      ExecInstRules_NoExecInstRules_39.insert(ExecInstValue_39.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_39);

      noTradingSessions_0_0.addGroup(noExecInstRules_0_1_2);
    }
    // MarketDataFeedTypes
    // Group MarketDataFeedTypes.NoMDFeedTypes
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_0;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_32;
      FIX::MDBookType MDBookType_35(3);
      noMDFeedTypes_0_1_0.set(MDBookType_35);
      MarketDataFeedTypes_NoMDFeedTypes_32.insert(MDBookType_35.getString());
      FIX::MDFeedType MDFeedType_34("STRING_203758573");
      noMDFeedTypes_0_1_0.set(MDFeedType_34);
      MarketDataFeedTypes_NoMDFeedTypes_32.insert(MDFeedType_34.getString());
      FIX::MarketDepth MarketDepth_36(1615490958);
      noMDFeedTypes_0_1_0.set(MarketDepth_36);
      MarketDataFeedTypes_NoMDFeedTypes_32.insert(MarketDepth_36.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_32);

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_0);
    }
    // MatchRules
    // Group MatchRules.NoMatchRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMatchRules noMatchRules_0_1_0;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_42;
      FIX::MatchAlgorithm MatchAlgorithm_42("STRING_78001271");
      noMatchRules_0_1_0.set(MatchAlgorithm_42);
      MatchRules_NoMatchRules_42.insert(MatchAlgorithm_42.getString());
      FIX::MatchType MatchType_49("STRING_5");
      noMatchRules_0_1_0.set(MatchType_49);
      MatchRules_NoMatchRules_42.insert(MatchType_49.getString());
      all_values.push_back(MatchRules_NoMatchRules_42);

      noTradingSessions_0_0.addGroup(noMatchRules_0_1_0);
    }
    // OrdTypeRules
    // Group OrdTypeRules.NoOrdTypeRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_0;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_42;
      FIX::OrdType OrdType_73('1');
      noOrdTypeRules_0_1_0.set(OrdType_73);
      OrdTypeRules_NoOrdTypeRules_42.insert(OrdType_73.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_42);

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_1;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_43;
      FIX::OrdType OrdType_74('D');
      noOrdTypeRules_0_1_1.set(OrdType_74);
      OrdTypeRules_NoOrdTypeRules_43.insert(OrdType_74.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_43);

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_1);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_2;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_44;
      FIX::OrdType OrdType_75('1');
      noOrdTypeRules_0_1_2.set(OrdType_75);
      OrdTypeRules_NoOrdTypeRules_44.insert(OrdType_75.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_44);

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_2);
    }
    // TimeInForceRules
    // Group TimeInForceRules.NoTimeInForceRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_0;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_36;
      FIX::TimeInForce TimeInForce_49('9');
      noTimeInForceRules_0_1_0.set(TimeInForce_49);
      TimeInForceRules_NoTimeInForceRules_36.insert(TimeInForce_49.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_36);

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_1;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_37;
      FIX::TimeInForce TimeInForce_50('4');
      noTimeInForceRules_0_1_1.set(TimeInForce_50);
      TimeInForceRules_NoTimeInForceRules_37.insert(TimeInForce_50.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_37);

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_1);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_2;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_38;
      FIX::TimeInForce TimeInForce_51('6');
      noTimeInForceRules_0_1_2.set(TimeInForce_51);
      TimeInForceRules_NoTimeInForceRules_38.insert(TimeInForce_51.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_38);

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_2);
    }
    msg.addGroup(noTradingSessions_0_0);
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
