#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

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
  set_field(msg, FIX::TradSesReqID{"STRING_293910443"}, TradingSessionListUpdateReport_0);
  all_values.push_back(TradingSessionListUpdateReport_0);

  all_compo_names.insert("TradingSessionListUpdateReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_21;
  set_field(msg, FIX::ApplID{"STRING_1197793811"}, ApplicationSequenceControl_21);
  set_field(msg, FIX::ApplLastSeqNum{1744730453}, ApplicationSequenceControl_21);
  set_field(msg, FIX::ApplResendFlag{false}, ApplicationSequenceControl_21);
  set_field(msg, FIX::ApplSeqNum{29141209}, ApplicationSequenceControl_21);
  all_values.push_back(ApplicationSequenceControl_21);
  all_compo_names.insert(".");

  // TrdSessLstGrp
  // Group TrdSessLstGrp.NoTradingSessions
  {
    FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions noTradingSessions_0_0;
    // TrdSessLstGrp.NoTradingSessions
    multiset<string> TrdSessLstGrp_NoTradingSessions_1;
    set_field(noTradingSessions_0_0, FIX::EncodedText{"DATA_7736629"}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::EncodedTextLen{2119783584}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::MarketID{"EXCHANGE_1868376991"}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::MarketSegmentID{"STRING_1718129424"}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::SecurityExchange{"EXCHANGE_1010141402"}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::Text{"STRING_1201025357"}, TrdSessLstGrp_NoTradingSessions_1);
    FIX::TotalVolumeTraded TotalVolumeTraded_1;
    TotalVolumeTraded_1.setString("6120391");
set_field(noTradingSessions_0_0, TotalVolumeTraded_1, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradSesCloseTime{FIX::UTCTIMESTAMP(11, 44, 18, 7, 11, 2009)}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradSesEndTime{FIX::UTCTIMESTAMP(4, 55, 5, 20, 9, 2001)}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradSesMethod{3}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradSesMode{3}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradSesOpenTime{FIX::UTCTIMESTAMP(20, 3, 13, 13, 5, 2012)}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradSesPreCloseTime{FIX::UTCTIMESTAMP(17, 18, 13, 17, 1, 2006)}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradSesStartTime{FIX::UTCTIMESTAMP(7, 57, 24, 9, 10, 2009)}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradSesStatus{4}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradSesStatusRejReason{99}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradSesUpdateAction{'1'}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradingSessionDesc{"STRING_550162955"}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_6"}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_4"}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TransactTime{FIX::UTCTIMESTAMP(6, 55, 47, 8, 8, 2006)}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::UnsolicitedIndicator{false}, TrdSessLstGrp_NoTradingSessions_1);
    all_values.push_back(TrdSessLstGrp_NoTradingSessions_1);
    all_compo_names.insert("...NoTradingSessions");

    // TradingSessionRules
    // ExecInstRules
    // Group ExecInstRules.NoExecInstRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoExecInstRules noExecInstRules_0_1_0;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_37;
      set_field(noExecInstRules_0_1_0, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_37);
      all_values.push_back(ExecInstRules_NoExecInstRules_37);
      all_compo_names.insert("...NoTradingSessions....NoExecInstRules");

      noTradingSessions_0_0.addGroup(noExecInstRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoExecInstRules noExecInstRules_0_1_1;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_38;
      set_field(noExecInstRules_0_1_1, FIX::ExecInstValue{'4'}, ExecInstRules_NoExecInstRules_38);
      all_values.push_back(ExecInstRules_NoExecInstRules_38);
      all_compo_names.insert("...NoTradingSessions....NoExecInstRules");

      noTradingSessions_0_0.addGroup(noExecInstRules_0_1_1);
    }
    // MarketDataFeedTypes
    // Group MarketDataFeedTypes.NoMDFeedTypes
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_0;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_40;
      set_field(noMDFeedTypes_0_1_0, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_40);
      set_field(noMDFeedTypes_0_1_0, FIX::MDFeedType{"STRING_433463530"}, MarketDataFeedTypes_NoMDFeedTypes_40);
      set_field(noMDFeedTypes_0_1_0, FIX::MarketDepth{1308365420}, MarketDataFeedTypes_NoMDFeedTypes_40);
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_40);
      all_compo_names.insert("...NoTradingSessions....NoMDFeedTypes");

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_1;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_41;
      set_field(noMDFeedTypes_0_1_1, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_41);
      set_field(noMDFeedTypes_0_1_1, FIX::MDFeedType{"STRING_1426807103"}, MarketDataFeedTypes_NoMDFeedTypes_41);
      set_field(noMDFeedTypes_0_1_1, FIX::MarketDepth{986961403}, MarketDataFeedTypes_NoMDFeedTypes_41);
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_41);
      all_compo_names.insert("...NoTradingSessions....NoMDFeedTypes");

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_1);
    }
    // MatchRules
    // Group MatchRules.NoMatchRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_0_1_0;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_38;
      set_field(noMatchRules_0_1_0, FIX::MatchAlgorithm{"STRING_1152517702"}, MatchRules_NoMatchRules_38);
      set_field(noMatchRules_0_1_0, FIX::MatchType{"STRING_M2"}, MatchRules_NoMatchRules_38);
      all_values.push_back(MatchRules_NoMatchRules_38);
      all_compo_names.insert("...NoTradingSessions....NoMatchRules");

      noTradingSessions_0_0.addGroup(noMatchRules_0_1_0);
    }
    // OrdTypeRules
    // Group OrdTypeRules.NoOrdTypeRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_0;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_37;
      set_field(noOrdTypeRules_0_1_0, FIX::OrdType{'4'}, OrdTypeRules_NoOrdTypeRules_37);
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_37);
      all_compo_names.insert("...NoTradingSessions....NoOrdTypeRules");

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_1;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_38;
      set_field(noOrdTypeRules_0_1_1, FIX::OrdType{'6'}, OrdTypeRules_NoOrdTypeRules_38);
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_38);
      all_compo_names.insert("...NoTradingSessions....NoOrdTypeRules");

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_1);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_2;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_39;
      set_field(noOrdTypeRules_0_1_2, FIX::OrdType{'9'}, OrdTypeRules_NoOrdTypeRules_39);
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_39);
      all_compo_names.insert("...NoTradingSessions....NoOrdTypeRules");

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_2);
    }
    // TimeInForceRules
    // Group TimeInForceRules.NoTimeInForceRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_0;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_43;
      set_field(noTimeInForceRules_0_1_0, FIX::TimeInForce{'1'}, TimeInForceRules_NoTimeInForceRules_43);
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_43);
      all_compo_names.insert("...NoTradingSessions....NoTimeInForceRules");

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_1;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_44;
      set_field(noTimeInForceRules_0_1_1, FIX::TimeInForce{'3'}, TimeInForceRules_NoTimeInForceRules_44);
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_44);
      all_compo_names.insert("...NoTradingSessions....NoTimeInForceRules");

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_1);
    }
    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions noTradingSessions_0_1;
    // TrdSessLstGrp.NoTradingSessions
    multiset<string> TrdSessLstGrp_NoTradingSessions_2;
    set_field(noTradingSessions_0_1, FIX::EncodedText{"DATA_1298875434"}, TrdSessLstGrp_NoTradingSessions_2);
    set_field(noTradingSessions_0_1, FIX::EncodedTextLen{1036708610}, TrdSessLstGrp_NoTradingSessions_2);
    set_field(noTradingSessions_0_1, FIX::MarketID{"EXCHANGE_415199022"}, TrdSessLstGrp_NoTradingSessions_2);
    set_field(noTradingSessions_0_1, FIX::MarketSegmentID{"STRING_1413693294"}, TrdSessLstGrp_NoTradingSessions_2);
    set_field(noTradingSessions_0_1, FIX::SecurityExchange{"EXCHANGE_562855848"}, TrdSessLstGrp_NoTradingSessions_2);
    set_field(noTradingSessions_0_1, FIX::Text{"STRING_1159647098"}, TrdSessLstGrp_NoTradingSessions_2);
    FIX::TotalVolumeTraded TotalVolumeTraded_2;
    TotalVolumeTraded_2.setString("14079871");
set_field(noTradingSessions_0_1, TotalVolumeTraded_2, TrdSessLstGrp_NoTradingSessions_2);
    set_field(noTradingSessions_0_1, FIX::TradSesCloseTime{FIX::UTCTIMESTAMP(9, 15, 54, 10, 6, 2006)}, TrdSessLstGrp_NoTradingSessions_2);
    set_field(noTradingSessions_0_1, FIX::TradSesEndTime{FIX::UTCTIMESTAMP(12, 57, 58, 8, 9, 2003)}, TrdSessLstGrp_NoTradingSessions_2);
    set_field(noTradingSessions_0_1, FIX::TradSesMethod{2}, TrdSessLstGrp_NoTradingSessions_2);
    set_field(noTradingSessions_0_1, FIX::TradSesMode{2}, TrdSessLstGrp_NoTradingSessions_2);
    set_field(noTradingSessions_0_1, FIX::TradSesOpenTime{FIX::UTCTIMESTAMP(18, 5, 35, 6, 1, 2008)}, TrdSessLstGrp_NoTradingSessions_2);
    set_field(noTradingSessions_0_1, FIX::TradSesPreCloseTime{FIX::UTCTIMESTAMP(22, 28, 47, 0, 9, 2013)}, TrdSessLstGrp_NoTradingSessions_2);
    set_field(noTradingSessions_0_1, FIX::TradSesStartTime{FIX::UTCTIMESTAMP(21, 39, 36, 20, 10, 2005)}, TrdSessLstGrp_NoTradingSessions_2);
    set_field(noTradingSessions_0_1, FIX::TradSesStatus{6}, TrdSessLstGrp_NoTradingSessions_2);
    set_field(noTradingSessions_0_1, FIX::TradSesStatusRejReason{99}, TrdSessLstGrp_NoTradingSessions_2);
    set_field(noTradingSessions_0_1, FIX::TradSesUpdateAction{'1'}, TrdSessLstGrp_NoTradingSessions_2);
    set_field(noTradingSessions_0_1, FIX::TradingSessionDesc{"STRING_685624887"}, TrdSessLstGrp_NoTradingSessions_2);
    set_field(noTradingSessions_0_1, FIX::TradingSessionID{"STRING_4"}, TrdSessLstGrp_NoTradingSessions_2);
    set_field(noTradingSessions_0_1, FIX::TradingSessionSubID{"STRING_3"}, TrdSessLstGrp_NoTradingSessions_2);
    set_field(noTradingSessions_0_1, FIX::TransactTime{FIX::UTCTIMESTAMP(18, 11, 13, 7, 10, 2012)}, TrdSessLstGrp_NoTradingSessions_2);
    set_field(noTradingSessions_0_1, FIX::UnsolicitedIndicator{true}, TrdSessLstGrp_NoTradingSessions_2);
    all_values.push_back(TrdSessLstGrp_NoTradingSessions_2);
    all_compo_names.insert("...NoTradingSessions");

    // TradingSessionRules
    // ExecInstRules
    // Group ExecInstRules.NoExecInstRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoExecInstRules noExecInstRules_1_1_0;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_39;
      set_field(noExecInstRules_1_1_0, FIX::ExecInstValue{'5'}, ExecInstRules_NoExecInstRules_39);
      all_values.push_back(ExecInstRules_NoExecInstRules_39);
      all_compo_names.insert("...NoTradingSessions....NoExecInstRules");

      noTradingSessions_0_1.addGroup(noExecInstRules_1_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoExecInstRules noExecInstRules_1_1_1;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_40;
      set_field(noExecInstRules_1_1_1, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_40);
      all_values.push_back(ExecInstRules_NoExecInstRules_40);
      all_compo_names.insert("...NoTradingSessions....NoExecInstRules");

      noTradingSessions_0_1.addGroup(noExecInstRules_1_1_1);
    }
    // MarketDataFeedTypes
    // Group MarketDataFeedTypes.NoMDFeedTypes
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_1_1_0;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_42;
      set_field(noMDFeedTypes_1_1_0, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_42);
      set_field(noMDFeedTypes_1_1_0, FIX::MDFeedType{"STRING_1228935528"}, MarketDataFeedTypes_NoMDFeedTypes_42);
      set_field(noMDFeedTypes_1_1_0, FIX::MarketDepth{1516093955}, MarketDataFeedTypes_NoMDFeedTypes_42);
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_42);
      all_compo_names.insert("...NoTradingSessions....NoMDFeedTypes");

      noTradingSessions_0_1.addGroup(noMDFeedTypes_1_1_0);
    }
    // MatchRules
    // Group MatchRules.NoMatchRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_1_1_0;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_39;
      set_field(noMatchRules_1_1_0, FIX::MatchAlgorithm{"STRING_1623131937"}, MatchRules_NoMatchRules_39);
      set_field(noMatchRules_1_1_0, FIX::MatchType{"STRING_AQ"}, MatchRules_NoMatchRules_39);
      all_values.push_back(MatchRules_NoMatchRules_39);
      all_compo_names.insert("...NoTradingSessions....NoMatchRules");

      noTradingSessions_0_1.addGroup(noMatchRules_1_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_1_1_1;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_40;
      set_field(noMatchRules_1_1_1, FIX::MatchAlgorithm{"STRING_1859448431"}, MatchRules_NoMatchRules_40);
      set_field(noMatchRules_1_1_1, FIX::MatchType{"STRING_A5"}, MatchRules_NoMatchRules_40);
      all_values.push_back(MatchRules_NoMatchRules_40);
      all_compo_names.insert("...NoTradingSessions....NoMatchRules");

      noTradingSessions_0_1.addGroup(noMatchRules_1_1_1);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_1_1_2;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_41;
      set_field(noMatchRules_1_1_2, FIX::MatchAlgorithm{"STRING_2034121712"}, MatchRules_NoMatchRules_41);
      set_field(noMatchRules_1_1_2, FIX::MatchType{"STRING_2"}, MatchRules_NoMatchRules_41);
      all_values.push_back(MatchRules_NoMatchRules_41);
      all_compo_names.insert("...NoTradingSessions....NoMatchRules");

      noTradingSessions_0_1.addGroup(noMatchRules_1_1_2);
    }
    // OrdTypeRules
    // Group OrdTypeRules.NoOrdTypeRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_1_1_0;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_40;
      set_field(noOrdTypeRules_1_1_0, FIX::OrdType{'M'}, OrdTypeRules_NoOrdTypeRules_40);
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_40);
      all_compo_names.insert("...NoTradingSessions....NoOrdTypeRules");

      noTradingSessions_0_1.addGroup(noOrdTypeRules_1_1_0);
    }
    // TimeInForceRules
    // Group TimeInForceRules.NoTimeInForceRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_1_1_0;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_45;
      set_field(noTimeInForceRules_1_1_0, FIX::TimeInForce{'1'}, TimeInForceRules_NoTimeInForceRules_45);
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_45);
      all_compo_names.insert("...NoTradingSessions....NoTimeInForceRules");

      noTradingSessions_0_1.addGroup(noTimeInForceRules_1_1_0);
    }
    msg.addGroup(noTradingSessions_0_1);
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
