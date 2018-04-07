#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

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
  set_field(msg, FIX::TradSesReqID{"STRING_1198666702"}, TradingSessionList_0);
  all_values.push_back(TradingSessionList_0);

  all_compo_names.insert("TradingSessionList");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_20;
  set_field(msg, FIX::ApplID{"STRING_157519177"}, ApplicationSequenceControl_20);
  set_field(msg, FIX::ApplLastSeqNum{1111890318}, ApplicationSequenceControl_20);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_20);
  set_field(msg, FIX::ApplSeqNum{1345432035}, ApplicationSequenceControl_20);
  all_values.push_back(ApplicationSequenceControl_20);
  all_compo_names.insert(".");

  // TrdSessLstGrp
  // Group TrdSessLstGrp.NoTradingSessions
  {
    FIX50SP2::TradingSessionList::NoTradingSessions noTradingSessions_0_0;
    // TrdSessLstGrp.NoTradingSessions
    multiset<string> TrdSessLstGrp_NoTradingSessions_0;
    set_field(noTradingSessions_0_0, FIX::EncodedText{"DATA_1596292518"}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::EncodedTextLen{976566444}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::MarketID{"EXCHANGE_1080607605"}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::MarketSegmentID{"STRING_661074570"}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::SecurityExchange{"EXCHANGE_1455671542"}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::Text{"STRING_895048353"}, TrdSessLstGrp_NoTradingSessions_0);
    FIX::TotalVolumeTraded TotalVolumeTraded_0;
    TotalVolumeTraded_0.setString("21303550");
set_field(noTradingSessions_0_0, TotalVolumeTraded_0, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradSesCloseTime{FIX::UTCTIMESTAMP(19, 3, 2, 21, 1, 2000)}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradSesEndTime{FIX::UTCTIMESTAMP(2, 30, 7, 14, 8, 2009)}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradSesMethod{1}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradSesMode{1}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradSesOpenTime{FIX::UTCTIMESTAMP(7, 19, 5, 1, 9, 2001)}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradSesPreCloseTime{FIX::UTCTIMESTAMP(6, 37, 38, 12, 5, 2003)}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradSesStartTime{FIX::UTCTIMESTAMP(14, 22, 14, 0, 9, 2007)}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradSesStatus{3}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradSesStatusRejReason{1}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradSesUpdateAction{'4'}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradingSessionDesc{"STRING_998757276"}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_6"}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_2"}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TransactTime{FIX::UTCTIMESTAMP(3, 28, 9, 15, 4, 2004)}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::UnsolicitedIndicator{true}, TrdSessLstGrp_NoTradingSessions_0);
    all_values.push_back(TrdSessLstGrp_NoTradingSessions_0);
    all_compo_names.insert("...NoTradingSessions");

    // TradingSessionRules
    // ExecInstRules
    // Group ExecInstRules.NoExecInstRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoExecInstRules noExecInstRules_0_1_0;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_35;
      set_field(noExecInstRules_0_1_0, FIX::ExecInstValue{'5'}, ExecInstRules_NoExecInstRules_35);
      all_values.push_back(ExecInstRules_NoExecInstRules_35);
      all_compo_names.insert("...NoTradingSessions....NoExecInstRules");

      noTradingSessions_0_0.addGroup(noExecInstRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoExecInstRules noExecInstRules_0_1_1;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_36;
      set_field(noExecInstRules_0_1_1, FIX::ExecInstValue{'8'}, ExecInstRules_NoExecInstRules_36);
      all_values.push_back(ExecInstRules_NoExecInstRules_36);
      all_compo_names.insert("...NoTradingSessions....NoExecInstRules");

      noTradingSessions_0_0.addGroup(noExecInstRules_0_1_1);
    }
    // MarketDataFeedTypes
    // Group MarketDataFeedTypes.NoMDFeedTypes
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_0;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_38;
      set_field(noMDFeedTypes_0_1_0, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_38);
      set_field(noMDFeedTypes_0_1_0, FIX::MDFeedType{"STRING_1990939651"}, MarketDataFeedTypes_NoMDFeedTypes_38);
      set_field(noMDFeedTypes_0_1_0, FIX::MarketDepth{892218092}, MarketDataFeedTypes_NoMDFeedTypes_38);
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_38);
      all_compo_names.insert("...NoTradingSessions....NoMDFeedTypes");

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_1;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_39;
      set_field(noMDFeedTypes_0_1_1, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_39);
      set_field(noMDFeedTypes_0_1_1, FIX::MDFeedType{"STRING_280190535"}, MarketDataFeedTypes_NoMDFeedTypes_39);
      set_field(noMDFeedTypes_0_1_1, FIX::MarketDepth{1710392795}, MarketDataFeedTypes_NoMDFeedTypes_39);
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_39);
      all_compo_names.insert("...NoTradingSessions....NoMDFeedTypes");

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_1);
    }
    // MatchRules
    // Group MatchRules.NoMatchRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMatchRules noMatchRules_0_1_0;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_36;
      set_field(noMatchRules_0_1_0, FIX::MatchAlgorithm{"STRING_1480132013"}, MatchRules_NoMatchRules_36);
      set_field(noMatchRules_0_1_0, FIX::MatchType{"STRING_M5"}, MatchRules_NoMatchRules_36);
      all_values.push_back(MatchRules_NoMatchRules_36);
      all_compo_names.insert("...NoTradingSessions....NoMatchRules");

      noTradingSessions_0_0.addGroup(noMatchRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMatchRules noMatchRules_0_1_1;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_37;
      set_field(noMatchRules_0_1_1, FIX::MatchAlgorithm{"STRING_2017192920"}, MatchRules_NoMatchRules_37);
      set_field(noMatchRules_0_1_1, FIX::MatchType{"STRING_M2"}, MatchRules_NoMatchRules_37);
      all_values.push_back(MatchRules_NoMatchRules_37);
      all_compo_names.insert("...NoTradingSessions....NoMatchRules");

      noTradingSessions_0_0.addGroup(noMatchRules_0_1_1);
    }
    // OrdTypeRules
    // Group OrdTypeRules.NoOrdTypeRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_0;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_35;
      set_field(noOrdTypeRules_0_1_0, FIX::OrdType{'C'}, OrdTypeRules_NoOrdTypeRules_35);
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_35);
      all_compo_names.insert("...NoTradingSessions....NoOrdTypeRules");

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_1;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_36;
      set_field(noOrdTypeRules_0_1_1, FIX::OrdType{'D'}, OrdTypeRules_NoOrdTypeRules_36);
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_36);
      all_compo_names.insert("...NoTradingSessions....NoOrdTypeRules");

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_1);
    }
    // TimeInForceRules
    // Group TimeInForceRules.NoTimeInForceRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_0;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_40;
      set_field(noTimeInForceRules_0_1_0, FIX::TimeInForce{'1'}, TimeInForceRules_NoTimeInForceRules_40);
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_40);
      all_compo_names.insert("...NoTradingSessions....NoTimeInForceRules");

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_1;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_41;
      set_field(noTimeInForceRules_0_1_1, FIX::TimeInForce{'1'}, TimeInForceRules_NoTimeInForceRules_41);
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_41);
      all_compo_names.insert("...NoTradingSessions....NoTimeInForceRules");

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_1);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_2;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_42;
      set_field(noTimeInForceRules_0_1_2, FIX::TimeInForce{'7'}, TimeInForceRules_NoTimeInForceRules_42);
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_42);
      all_compo_names.insert("...NoTradingSessions....NoTimeInForceRules");

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_2);
    }
    msg.addGroup(noTradingSessions_0_0);
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
