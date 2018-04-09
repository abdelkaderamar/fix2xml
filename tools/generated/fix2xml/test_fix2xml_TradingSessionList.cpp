#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::TradingSessionList msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradingSessionList_0;
  set_field(msg, FIX::TradSesReqID{"STRING_14914200"}, TradingSessionList_0);
  all_values.push_back(TradingSessionList_0);

  all_compo_names.insert("TradingSessionList");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_20;
  set_field(msg, FIX::ApplID{"STRING_506271015"}, ApplicationSequenceControl_20);
  set_field(msg, FIX::ApplLastSeqNum{1669189424}, ApplicationSequenceControl_20);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_20);
  set_field(msg, FIX::ApplSeqNum{1097466772}, ApplicationSequenceControl_20);
  all_values.push_back(ApplicationSequenceControl_20);
  all_compo_names.insert(".");

  // TrdSessLstGrp
  // Group TrdSessLstGrp.NoTradingSessions
  {
    FIX50SP2::TradingSessionList::NoTradingSessions noTradingSessions_0_0;
    // TrdSessLstGrp.NoTradingSessions
    multiset<string> TrdSessLstGrp_NoTradingSessions_0;
    set_field(noTradingSessions_0_0, FIX::EncodedText{"DATA_244022541"}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::EncodedTextLen{302143069}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::MarketID{"EXCHANGE_1209993977"}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::MarketSegmentID{"STRING_432639213"}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::SecurityExchange{"EXCHANGE_23048840"}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::Text{"STRING_1236629171"}, TrdSessLstGrp_NoTradingSessions_0);
    FIX::TotalVolumeTraded TotalVolumeTraded_0;
    TotalVolumeTraded_0.setString("18767444");
set_field(noTradingSessions_0_0, TotalVolumeTraded_0, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradSesCloseTime{FIX::UTCTIMESTAMP(17, 37, 27, 27, 3, 2008)}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradSesEndTime{FIX::UTCTIMESTAMP(12, 19, 37, 7, 12, 2006)}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradSesMethod{3}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradSesMode{1}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradSesOpenTime{FIX::UTCTIMESTAMP(18, 3, 29, 26, 1, 2009)}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradSesPreCloseTime{FIX::UTCTIMESTAMP(21, 11, 46, 10, 12, 2004)}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradSesStartTime{FIX::UTCTIMESTAMP(6, 7, 50, 13, 8, 2016)}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradSesStatus{3}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradSesStatusRejReason{99}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradSesUpdateAction{'4'}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradingSessionDesc{"STRING_1842536696"}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_3"}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_4"}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TransactTime{FIX::UTCTIMESTAMP(18, 41, 26, 12, 12, 2011)}, TrdSessLstGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::UnsolicitedIndicator{false}, TrdSessLstGrp_NoTradingSessions_0);
    all_values.push_back(TrdSessLstGrp_NoTradingSessions_0);
    all_compo_names.insert("...NoTradingSessions");

    // TradingSessionRules
    // ExecInstRules
    // Group ExecInstRules.NoExecInstRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoExecInstRules noExecInstRules_0_1_0;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_57;
      set_field(noExecInstRules_0_1_0, FIX::ExecInstValue{'4'}, ExecInstRules_NoExecInstRules_57);
      all_values.push_back(ExecInstRules_NoExecInstRules_57);
      all_compo_names.insert("...NoTradingSessions....NoExecInstRules");

      noTradingSessions_0_0.addGroup(noExecInstRules_0_1_0);
    }
    // MarketDataFeedTypes
    // Group MarketDataFeedTypes.NoMDFeedTypes
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_0;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_67;
      set_field(noMDFeedTypes_0_1_0, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_67);
      set_field(noMDFeedTypes_0_1_0, FIX::MDFeedType{"STRING_1585715298"}, MarketDataFeedTypes_NoMDFeedTypes_67);
      set_field(noMDFeedTypes_0_1_0, FIX::MarketDepth{1246982741}, MarketDataFeedTypes_NoMDFeedTypes_67);
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_67);
      all_compo_names.insert("...NoTradingSessions....NoMDFeedTypes");

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_1;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_68;
      set_field(noMDFeedTypes_0_1_1, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_68);
      set_field(noMDFeedTypes_0_1_1, FIX::MDFeedType{"STRING_958607693"}, MarketDataFeedTypes_NoMDFeedTypes_68);
      set_field(noMDFeedTypes_0_1_1, FIX::MarketDepth{1259159645}, MarketDataFeedTypes_NoMDFeedTypes_68);
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_68);
      all_compo_names.insert("...NoTradingSessions....NoMDFeedTypes");

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_1);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_2;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_69;
      set_field(noMDFeedTypes_0_1_2, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_69);
      set_field(noMDFeedTypes_0_1_2, FIX::MDFeedType{"STRING_60760926"}, MarketDataFeedTypes_NoMDFeedTypes_69);
      set_field(noMDFeedTypes_0_1_2, FIX::MarketDepth{1085311659}, MarketDataFeedTypes_NoMDFeedTypes_69);
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_69);
      all_compo_names.insert("...NoTradingSessions....NoMDFeedTypes");

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_2);
    }
    // MatchRules
    // Group MatchRules.NoMatchRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMatchRules noMatchRules_0_1_0;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_62;
      set_field(noMatchRules_0_1_0, FIX::MatchAlgorithm{"STRING_1117422477"}, MatchRules_NoMatchRules_62);
      set_field(noMatchRules_0_1_0, FIX::MatchType{"STRING_1"}, MatchRules_NoMatchRules_62);
      all_values.push_back(MatchRules_NoMatchRules_62);
      all_compo_names.insert("...NoTradingSessions....NoMatchRules");

      noTradingSessions_0_0.addGroup(noMatchRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMatchRules noMatchRules_0_1_1;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_63;
      set_field(noMatchRules_0_1_1, FIX::MatchAlgorithm{"STRING_1666977165"}, MatchRules_NoMatchRules_63);
      set_field(noMatchRules_0_1_1, FIX::MatchType{"STRING_M6"}, MatchRules_NoMatchRules_63);
      all_values.push_back(MatchRules_NoMatchRules_63);
      all_compo_names.insert("...NoTradingSessions....NoMatchRules");

      noTradingSessions_0_0.addGroup(noMatchRules_0_1_1);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoMatchRules noMatchRules_0_1_2;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_64;
      set_field(noMatchRules_0_1_2, FIX::MatchAlgorithm{"STRING_1296522309"}, MatchRules_NoMatchRules_64);
      set_field(noMatchRules_0_1_2, FIX::MatchType{"STRING_3"}, MatchRules_NoMatchRules_64);
      all_values.push_back(MatchRules_NoMatchRules_64);
      all_compo_names.insert("...NoTradingSessions....NoMatchRules");

      noTradingSessions_0_0.addGroup(noMatchRules_0_1_2);
    }
    // OrdTypeRules
    // Group OrdTypeRules.NoOrdTypeRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_0;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_58;
      set_field(noOrdTypeRules_0_1_0, FIX::OrdType{'M'}, OrdTypeRules_NoOrdTypeRules_58);
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_58);
      all_compo_names.insert("...NoTradingSessions....NoOrdTypeRules");

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_1;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_59;
      set_field(noOrdTypeRules_0_1_1, FIX::OrdType{'L'}, OrdTypeRules_NoOrdTypeRules_59);
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_59);
      all_compo_names.insert("...NoTradingSessions....NoOrdTypeRules");

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_1);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_2;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_60;
      set_field(noOrdTypeRules_0_1_2, FIX::OrdType{'3'}, OrdTypeRules_NoOrdTypeRules_60);
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_60);
      all_compo_names.insert("...NoTradingSessions....NoOrdTypeRules");

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_2);
    }
    // TimeInForceRules
    // Group TimeInForceRules.NoTimeInForceRules
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_0;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_55;
      set_field(noTimeInForceRules_0_1_0, FIX::TimeInForce{'7'}, TimeInForceRules_NoTimeInForceRules_55);
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_55);
      all_compo_names.insert("...NoTradingSessions....NoTimeInForceRules");

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_1;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_56;
      set_field(noTimeInForceRules_0_1_1, FIX::TimeInForce{'7'}, TimeInForceRules_NoTimeInForceRules_56);
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_56);
      all_compo_names.insert("...NoTradingSessions....NoTimeInForceRules");

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_1);
    }
    {
      FIX50SP2::TradingSessionList::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_2;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_57;
      set_field(noTimeInForceRules_0_1_2, FIX::TimeInForce{'6'}, TimeInForceRules_NoTimeInForceRules_57);
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_57);
      all_compo_names.insert("...NoTradingSessions....NoTimeInForceRules");

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_2);
    }
    msg.addGroup(noTradingSessions_0_0);
  }
  // header
  multiset<string> header_100;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_5"}, header_100);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1280778742"}, header_100);
  set_header_field(msg.getHeader(), FIX::BodyLength{1496819767}, header_100);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1669034380"}, header_100);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1881585295"}, header_100);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1994798237"}, header_100);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_779405410"}, header_100);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{21224990}, header_100);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_100);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{2026388152}, header_100);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1204659099"}, header_100);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_244153932"}, header_100);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1138064149"}, header_100);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(19, 20, 48, 0, 5, 2008)}, header_100);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_100);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_100);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1811203222"}, header_100);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{298881915}, header_100);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_889887770"}, header_100);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_472363139"}, header_100);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_623327741"}, header_100);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(2, 48, 48, 5, 3, 2011)}, header_100);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1503859093"}, header_100);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_808853210"}, header_100);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_744894716"}, header_100);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_135780855"}, header_100);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{830078200}, header_100);
  all_values.push_back(header_100);
  all_compo_names.insert(".header");


  xml_element elt;
  converter.fix2fixml(msg, elt);
  BOOST_LOG_TRIVIAL(debug) << "The resulting XML is";
  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

  BOOST_LOG_TRIVIAL(debug) << "Quickfix XML representation is";
  cout << "////////////////////////////////////////////" << endl;
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
