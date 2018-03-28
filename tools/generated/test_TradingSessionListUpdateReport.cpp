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
  multiset<string> TradingSessionListUpdateReport_0;
  FIX::TradSesReqID TradSesReqID_2("STRING_891827328");
  msg.set(TradSesReqID_2);
  TradingSessionListUpdateReport_0.insert(TradSesReqID_2.getString());
  all_values.push_back(TradingSessionListUpdateReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_21;
  FIX::ApplID ApplID_21("STRING_1924556471");
  msg.set(ApplID_21);
  ApplicationSequenceControl_21.insert(ApplID_21.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_21(1446809840);
  msg.set(ApplLastSeqNum_21);
  ApplicationSequenceControl_21.insert(ApplLastSeqNum_21.getString());
  FIX::ApplResendFlag ApplResendFlag_21(true);
  msg.set(ApplResendFlag_21);
  ApplicationSequenceControl_21.insert(ApplResendFlag_21.getString());
  FIX::ApplSeqNum ApplSeqNum_21(919206509);
  msg.set(ApplSeqNum_21);
  ApplicationSequenceControl_21.insert(ApplSeqNum_21.getString());
  all_values.push_back(ApplicationSequenceControl_21);

  // TrdSessLstGrp
  // Group TrdSessLstGrp.NoTradingSessions
  {
    FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions noTradingSessions_0_0;
    // TrdSessLstGrp.NoTradingSessions
    multiset<string> TrdSessLstGrp_NoTradingSessions_1;
    FIX::EncodedText EncodedText_95("DATA_1937877941");
    noTradingSessions_0_0.set(EncodedText_95);
    TrdSessLstGrp_NoTradingSessions_1.insert(EncodedText_95.getString());
    FIX::EncodedTextLen EncodedTextLen_95(2011039169);
    noTradingSessions_0_0.set(EncodedTextLen_95);
    TrdSessLstGrp_NoTradingSessions_1.insert(EncodedTextLen_95.getString());
    FIX::MarketID MarketID_27("EXCHANGE_103266466");
    noTradingSessions_0_0.set(MarketID_27);
    TrdSessLstGrp_NoTradingSessions_1.insert(MarketID_27.getString());
    FIX::MarketSegmentID MarketSegmentID_27("STRING_2141636514");
    noTradingSessions_0_0.set(MarketSegmentID_27);
    TrdSessLstGrp_NoTradingSessions_1.insert(MarketSegmentID_27.getString());
    FIX::SecurityExchange SecurityExchange_101("EXCHANGE_1479046480");
    noTradingSessions_0_0.set(SecurityExchange_101);
    TrdSessLstGrp_NoTradingSessions_1.insert(SecurityExchange_101.getString());
    FIX::Text Text_95("STRING_1775402269");
    noTradingSessions_0_0.set(Text_95);
    TrdSessLstGrp_NoTradingSessions_1.insert(Text_95.getString());
    FIX::TotalVolumeTraded TotalVolumeTraded_1;
    TotalVolumeTraded_1.setString("721541");
    noTradingSessions_0_0.set(TotalVolumeTraded_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TotalVolumeTraded_1.getString());
    FIX::TradSesCloseTime TradSesCloseTime_1(FIX::UTCTIMESTAMP(3, 34, 54, 0, 8, 2009));
    noTradingSessions_0_0.set(TradSesCloseTime_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesCloseTime_1.getString());
    FIX::TradSesEndTime TradSesEndTime_1(FIX::UTCTIMESTAMP(10, 48, 26, 26, 8, 2007));
    noTradingSessions_0_0.set(TradSesEndTime_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesEndTime_1.getString());
    FIX::TradSesMethod TradSesMethod_2(2);
    noTradingSessions_0_0.set(TradSesMethod_2);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesMethod_2.getString());
    FIX::TradSesMode TradSesMode_2(1);
    noTradingSessions_0_0.set(TradSesMode_2);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesMode_2.getString());
    FIX::TradSesOpenTime TradSesOpenTime_1(FIX::UTCTIMESTAMP(15, 13, 9, 27, 2, 2006));
    noTradingSessions_0_0.set(TradSesOpenTime_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesOpenTime_1.getString());
    FIX::TradSesPreCloseTime TradSesPreCloseTime_1(FIX::UTCTIMESTAMP(10, 0, 10, 16, 9, 2009));
    noTradingSessions_0_0.set(TradSesPreCloseTime_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesPreCloseTime_1.getString());
    FIX::TradSesStartTime TradSesStartTime_1(FIX::UTCTIMESTAMP(14, 59, 52, 24, 8, 2003));
    noTradingSessions_0_0.set(TradSesStartTime_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesStartTime_1.getString());
    FIX::TradSesStatus TradSesStatus_1(0);
    noTradingSessions_0_0.set(TradSesStatus_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesStatus_1.getString());
    FIX::TradSesStatusRejReason TradSesStatusRejReason_1(99);
    noTradingSessions_0_0.set(TradSesStatusRejReason_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesStatusRejReason_1.getString());
    FIX::TradSesUpdateAction TradSesUpdateAction_1('6');
    noTradingSessions_0_0.set(TradSesUpdateAction_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradSesUpdateAction_1.getString());
    FIX::TradingSessionDesc TradingSessionDesc_1("STRING_2074814787");
    noTradingSessions_0_0.set(TradingSessionDesc_1);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradingSessionDesc_1.getString());
    FIX::TradingSessionID TradingSessionID_95("STRING_4");
    noTradingSessions_0_0.set(TradingSessionID_95);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradingSessionID_95.getString());
    FIX::TradingSessionSubID TradingSessionSubID_95("STRING_7");
    noTradingSessions_0_0.set(TradingSessionSubID_95);
    TrdSessLstGrp_NoTradingSessions_1.insert(TradingSessionSubID_95.getString());
    FIX::TransactTime TransactTime_74(FIX::UTCTIMESTAMP(3, 59, 0, 25, 3, 2017));
    noTradingSessions_0_0.set(TransactTime_74);
    TrdSessLstGrp_NoTradingSessions_1.insert(TransactTime_74.getString());
    FIX::UnsolicitedIndicator UnsolicitedIndicator_5(false);
    noTradingSessions_0_0.set(UnsolicitedIndicator_5);
    TrdSessLstGrp_NoTradingSessions_1.insert(UnsolicitedIndicator_5.getString());
    all_values.push_back(TrdSessLstGrp_NoTradingSessions_1);

    // TradingSessionRules
    // ExecInstRules
    // Group ExecInstRules.NoExecInstRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoExecInstRules noExecInstRules_0_1_0;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_40;
      FIX::ExecInstValue ExecInstValue_40('9');
      noExecInstRules_0_1_0.set(ExecInstValue_40);
      ExecInstRules_NoExecInstRules_40.insert(ExecInstValue_40.getString());
      all_values.push_back(ExecInstRules_NoExecInstRules_40);

      noTradingSessions_0_0.addGroup(noExecInstRules_0_1_0);
    }
    // MarketDataFeedTypes
    // Group MarketDataFeedTypes.NoMDFeedTypes
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_0;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_33;
      FIX::MDBookType MDBookType_36(2);
      noMDFeedTypes_0_1_0.set(MDBookType_36);
      MarketDataFeedTypes_NoMDFeedTypes_33.insert(MDBookType_36.getString());
      FIX::MDFeedType MDFeedType_35("STRING_1560940121");
      noMDFeedTypes_0_1_0.set(MDFeedType_35);
      MarketDataFeedTypes_NoMDFeedTypes_33.insert(MDFeedType_35.getString());
      FIX::MarketDepth MarketDepth_37(199854133);
      noMDFeedTypes_0_1_0.set(MarketDepth_37);
      MarketDataFeedTypes_NoMDFeedTypes_33.insert(MarketDepth_37.getString());
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_33);

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_0);
    }
    // MatchRules
    // Group MatchRules.NoMatchRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_0_1_0;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_43;
      FIX::MatchAlgorithm MatchAlgorithm_43("STRING_2145054662");
      noMatchRules_0_1_0.set(MatchAlgorithm_43);
      MatchRules_NoMatchRules_43.insert(MatchAlgorithm_43.getString());
      FIX::MatchType MatchType_50("STRING_2");
      noMatchRules_0_1_0.set(MatchType_50);
      MatchRules_NoMatchRules_43.insert(MatchType_50.getString());
      all_values.push_back(MatchRules_NoMatchRules_43);

      noTradingSessions_0_0.addGroup(noMatchRules_0_1_0);
    }
    // OrdTypeRules
    // Group OrdTypeRules.NoOrdTypeRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_0;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_45;
      FIX::OrdType OrdType_76('D');
      noOrdTypeRules_0_1_0.set(OrdType_76);
      OrdTypeRules_NoOrdTypeRules_45.insert(OrdType_76.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_45);

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_1;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_46;
      FIX::OrdType OrdType_77('4');
      noOrdTypeRules_0_1_1.set(OrdType_77);
      OrdTypeRules_NoOrdTypeRules_46.insert(OrdType_77.getString());
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_46);

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_1);
    }
    // TimeInForceRules
    // Group TimeInForceRules.NoTimeInForceRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_0;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_39;
      FIX::TimeInForce TimeInForce_52('6');
      noTimeInForceRules_0_1_0.set(TimeInForce_52);
      TimeInForceRules_NoTimeInForceRules_39.insert(TimeInForce_52.getString());
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_39);

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_0);
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
