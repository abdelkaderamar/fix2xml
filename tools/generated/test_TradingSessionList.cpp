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
  FIX::TradSesReqID TradSesReqID_0("STRING_22698031");
  msg.set(TradSesReqID_0);
  TradingSessionList_0.insert(TradSesReqID_0.getString());
  all_values.push_back(TradingSessionList_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_20;
  FIX::ApplID ApplID_20("STRING_421789978");
  msg.set(ApplID_20);
  ApplicationSequenceControl_20.insert(ApplID_20.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_20(1038564666);
  msg.set(ApplLastSeqNum_20);
  ApplicationSequenceControl_20.insert(ApplLastSeqNum_20.getString());
  FIX::ApplResendFlag ApplResendFlag_20(false);
  msg.set(ApplResendFlag_20);
  ApplicationSequenceControl_20.insert(ApplResendFlag_20.getString());
  FIX::ApplSeqNum ApplSeqNum_20(1617711826);
  msg.set(ApplSeqNum_20);
  ApplicationSequenceControl_20.insert(ApplSeqNum_20.getString());
  all_values.push_back(ApplicationSequenceControl_20);

  // TrdSessLstGrp
  // Group TrdSessLstGrp.NoTradingSessions
  {
    FIX50SP2::TradingSessionList::NoTradingSessions noTradingSessions_0_0;
    // TrdSessLstGrp.NoTradingSessions
    multiset<string> TrdSessLstGrp_NoTradingSessions_0;
    FIX::EncodedText EncodedText_100("DATA_834718271");
    noTradingSessions_0_0.set(EncodedText_100);
    TrdSessLstGrp_NoTradingSessions_0.insert(EncodedText_100.getString());
    FIX::EncodedTextLen EncodedTextLen_100(1338119922);
    noTradingSessions_0_0.set(EncodedTextLen_100);
    TrdSessLstGrp_NoTradingSessions_0.insert(EncodedTextLen_100.getString());
    FIX::MarketID MarketID_30("EXCHANGE_1871310002");
    noTradingSessions_0_0.set(MarketID_30);
    TrdSessLstGrp_NoTradingSessions_0.insert(MarketID_30.getString());
    FIX::MarketSegmentID MarketSegmentID_30("STRING_1398825245");
    noTradingSessions_0_0.set(MarketSegmentID_30);
    TrdSessLstGrp_NoTradingSessions_0.insert(MarketSegmentID_30.getString());
    FIX::SecurityExchange SecurityExchange_93("EXCHANGE_1838056260");
    noTradingSessions_0_0.set(SecurityExchange_93);
    TrdSessLstGrp_NoTradingSessions_0.insert(SecurityExchange_93.getString());
    FIX::Text Text_100("STRING_772702271");
    noTradingSessions_0_0.set(Text_100);
    TrdSessLstGrp_NoTradingSessions_0.insert(Text_100.getString());
    FIX::TotalVolumeTraded TotalVolumeTraded_0;
    TotalVolumeTraded_0.setString("10682509");
    noTradingSessions_0_0.set(TotalVolumeTraded_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TotalVolumeTraded_0.getString());
    FIX::TradSesCloseTime TradSesCloseTime_0(FIX::UTCTIMESTAMP(19, 56, 15, 25, 22012));
    noTradingSessions_0_0.set(TradSesCloseTime_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesCloseTime_0.getString());
    FIX::TradSesEndTime TradSesEndTime_0(FIX::UTCTIMESTAMP(6, 40, 19, 13, 102009));
    noTradingSessions_0_0.set(TradSesEndTime_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesEndTime_0.getString());
    FIX::TradSesMethod TradSesMethod_0(3);
    noTradingSessions_0_0.set(TradSesMethod_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesMethod_0.getString());
    FIX::TradSesMode TradSesMode_0(2);
    noTradingSessions_0_0.set(TradSesMode_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesMode_0.getString());
    FIX::TradSesOpenTime TradSesOpenTime_0(FIX::UTCTIMESTAMP(12, 26, 56, 10, 52010));
    noTradingSessions_0_0.set(TradSesOpenTime_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesOpenTime_0.getString());
    FIX::TradSesPreCloseTime TradSesPreCloseTime_0(FIX::UTCTIMESTAMP(19, 17, 35, 24, 102010));
    noTradingSessions_0_0.set(TradSesPreCloseTime_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesPreCloseTime_0.getString());
    FIX::TradSesStartTime TradSesStartTime_0(FIX::UTCTIMESTAMP(8, 17, 36, 24, 122002));
    noTradingSessions_0_0.set(TradSesStartTime_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesStartTime_0.getString());
    FIX::TradSesStatus TradSesStatus_0(6);
    noTradingSessions_0_0.set(TradSesStatus_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesStatus_0.getString());
    FIX::TradSesStatusRejReason TradSesStatusRejReason_0(1);
    noTradingSessions_0_0.set(TradSesStatusRejReason_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesStatusRejReason_0.getString());
    FIX::TradSesUpdateAction TradSesUpdateAction_0('2');
    noTradingSessions_0_0.set(TradSesUpdateAction_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradSesUpdateAction_0.getString());
    FIX::TradingSessionDesc TradingSessionDesc_0("STRING_508249698");
    noTradingSessions_0_0.set(TradingSessionDesc_0);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradingSessionDesc_0.getString());
    FIX::TradingSessionID TradingSessionID_103("STRING_4");
    noTradingSessions_0_0.set(TradingSessionID_103);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradingSessionID_103.getString());
    FIX::TradingSessionSubID TradingSessionSubID_103("STRING_1");
    noTradingSessions_0_0.set(TradingSessionSubID_103);
    TrdSessLstGrp_NoTradingSessions_0.insert(TradingSessionSubID_103.getString());
    FIX::TransactTime TransactTime_67(FIX::UTCTIMESTAMP(10, 48, 38, 24, 52011));
    noTradingSessions_0_0.set(TransactTime_67);
    TrdSessLstGrp_NoTradingSessions_0.insert(TransactTime_67.getString());
    FIX::UnsolicitedIndicator UnsolicitedIndicator_4(true);
    noTradingSessions_0_0.set(UnsolicitedIndicator_4);
    TrdSessLstGrp_NoTradingSessions_0.insert(UnsolicitedIndicator_4.getString());
    all_values.push_back(TrdSessLstGrp_NoTradingSessions_0);

    // TradingSessionRules
    // ExecInstRules
    // Group ExecInstRules.NoExecInstRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoExecInstRules noExecInstRules_0_1_0;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_70;
      FIX::ExecInstValue ExecInstValue_70('1');
      noExecInstRules_0_1_0.set(ExecInstValue_70);
      ExecInstRules_NoExecInstRules_70.insert(ExecInstValue_70.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_70);

      noTradingSessions_0_0.addGroup(noExecInstRules_0_1_0);
    }
    // MarketDataFeedTypes
    // Group MarketDataFeedTypes.NoMDFeedTypes
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_0;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_65;
      FIX::MDBookType MDBookType_68(3);
      noMDFeedTypes_0_1_0.set(MDBookType_68);
      MarketDataFeedTypes_NoMDFeedTypes_65.insert(MDBookType_68.getString());
      FIX::MDFeedType MDFeedType_67("STRING_2100040532");
      noMDFeedTypes_0_1_0.set(MDFeedType_67);
      MarketDataFeedTypes_NoMDFeedTypes_65.insert(MDFeedType_67.getString());
      FIX::MarketDepth MarketDepth_69(296367640);
      noMDFeedTypes_0_1_0.set(MarketDepth_69);
      MarketDataFeedTypes_NoMDFeedTypes_65.insert(MarketDepth_69.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_65);

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_1;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_66;
      FIX::MDBookType MDBookType_69(2);
      noMDFeedTypes_0_1_1.set(MDBookType_69);
      MarketDataFeedTypes_NoMDFeedTypes_66.insert(MDBookType_69.getString());
      FIX::MDFeedType MDFeedType_68("STRING_1961409348");
      noMDFeedTypes_0_1_1.set(MDFeedType_68);
      MarketDataFeedTypes_NoMDFeedTypes_66.insert(MDFeedType_68.getString());
      FIX::MarketDepth MarketDepth_70(1789205809);
      noMDFeedTypes_0_1_1.set(MarketDepth_70);
      MarketDataFeedTypes_NoMDFeedTypes_66.insert(MarketDepth_70.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_66);

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_1);
    }
    // MatchRules
    // Group MatchRules.NoMatchRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMatchRules noMatchRules_0_1_0;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_69;
      FIX::MatchAlgorithm MatchAlgorithm_69("STRING_743545468");
      noMatchRules_0_1_0.set(MatchAlgorithm_69);
      MatchRules_NoMatchRules_69.insert(MatchAlgorithm_69.getString());
      FIX::MatchType MatchType_76("STRING_A4");
      noMatchRules_0_1_0.set(MatchType_76);
      MatchRules_NoMatchRules_69.insert(MatchType_76.getString());
      all_values.push_back(MatchRules_NoMatchRules_69);

      noTradingSessions_0_0.addGroup(noMatchRules_0_1_0);
    }
    // OrdTypeRules
    // Group OrdTypeRules.NoOrdTypeRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_0;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_77;
      FIX::OrdType OrdType_102('I');
      noOrdTypeRules_0_1_0.set(OrdType_102);
      OrdTypeRules_NoOrdTypeRules_77.insert(OrdType_102.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_77);

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_0);
    }
    // TimeInForceRules
    // Group TimeInForceRules.NoTimeInForceRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_0;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_67;
      FIX::TimeInForce TimeInForce_82('4');
      noTimeInForceRules_0_1_0.set(TimeInForce_82);
      TimeInForceRules_NoTimeInForceRules_67.insert(TimeInForce_82.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_67);

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_1;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_68;
      FIX::TimeInForce TimeInForce_83('3');
      noTimeInForceRules_0_1_1.set(TimeInForce_83);
      TimeInForceRules_NoTimeInForceRules_68.insert(TimeInForce_83.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_68);

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_1);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_2;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_69;
      FIX::TimeInForce TimeInForce_84('3');
      noTimeInForceRules_0_1_2.set(TimeInForce_84);
      TimeInForceRules_NoTimeInForceRules_69.insert(TimeInForce_84.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_69);

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
