#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::TradingSessionListUpdateReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradingSessionListUpdateReport_0;
  set_field(msg, FIX::TradSesReqID{"STRING_75580979"}, TradingSessionListUpdateReport_0);
  all_values.push_back(TradingSessionListUpdateReport_0);

  all_compo_names.insert("TradingSessionListUpdateReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_21;
  set_field(msg, FIX::ApplID{"STRING_1631523740"}, ApplicationSequenceControl_21);
  set_field(msg, FIX::ApplLastSeqNum{46158272}, ApplicationSequenceControl_21);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_21);
  set_field(msg, FIX::ApplSeqNum{1782362071}, ApplicationSequenceControl_21);
  all_values.push_back(ApplicationSequenceControl_21);
  all_compo_names.insert(".");

  // TrdSessLstGrp
  // Group TrdSessLstGrp.NoTradingSessions
  {
    FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions noTradingSessions_0_0;
    // TrdSessLstGrp.NoTradingSessions
    multiset<string> TrdSessLstGrp_NoTradingSessions_1;
    set_field(noTradingSessions_0_0, FIX::EncodedText{"DATA_1994801498"}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::EncodedTextLen{860468316}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::MarketID{"EXCHANGE_393899874"}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::MarketSegmentID{"STRING_1154457735"}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::SecurityExchange{"EXCHANGE_747427771"}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::Text{"STRING_1761455456"}, TrdSessLstGrp_NoTradingSessions_1);
    FIX::TotalVolumeTraded TotalVolumeTraded_1;
    TotalVolumeTraded_1.setString("4498948");
set_field(noTradingSessions_0_0, TotalVolumeTraded_1, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradSesCloseTime{FIX::UTCTIMESTAMP(17, 7, 52, 3, 5, 2009)}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradSesEndTime{FIX::UTCTIMESTAMP(5, 59, 30, 10, 12, 2002)}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradSesMethod{1}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradSesMode{3}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradSesOpenTime{FIX::UTCTIMESTAMP(16, 52, 27, 24, 3, 2014)}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradSesPreCloseTime{FIX::UTCTIMESTAMP(20, 26, 32, 19, 10, 2016)}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradSesStartTime{FIX::UTCTIMESTAMP(19, 25, 42, 19, 10, 2010)}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradSesStatus{0}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradSesStatusRejReason{1}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradSesUpdateAction{'1'}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradingSessionDesc{"STRING_352961901"}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_5"}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_6"}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::TransactTime{FIX::UTCTIMESTAMP(4, 59, 50, 14, 4, 2005)}, TrdSessLstGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_0, FIX::UnsolicitedIndicator{false}, TrdSessLstGrp_NoTradingSessions_1);
    all_values.push_back(TrdSessLstGrp_NoTradingSessions_1);
    all_compo_names.insert("...NoTradingSessions");

    // TradingSessionRules
    // ExecInstRules
    // Group ExecInstRules.NoExecInstRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoExecInstRules noExecInstRules_0_1_0;
      // ExecInstRules.NoExecInstRules
      multiset<string> ExecInstRules_NoExecInstRules_58;
      set_field(noExecInstRules_0_1_0, FIX::ExecInstValue{'7'}, ExecInstRules_NoExecInstRules_58);
      all_values.push_back(ExecInstRules_NoExecInstRules_58);
      all_compo_names.insert("...NoTradingSessions....NoExecInstRules");

      noTradingSessions_0_0.addGroup(noExecInstRules_0_1_0);
    }
    // MarketDataFeedTypes
    // Group MarketDataFeedTypes.NoMDFeedTypes
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMDFeedTypes noMDFeedTypes_0_1_0;
      // MarketDataFeedTypes.NoMDFeedTypes
      multiset<string> MarketDataFeedTypes_NoMDFeedTypes_70;
      set_field(noMDFeedTypes_0_1_0, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_70);
      set_field(noMDFeedTypes_0_1_0, FIX::MDFeedType{"STRING_1302125506"}, MarketDataFeedTypes_NoMDFeedTypes_70);
      set_field(noMDFeedTypes_0_1_0, FIX::MarketDepth{2088158333}, MarketDataFeedTypes_NoMDFeedTypes_70);
      all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_70);
      all_compo_names.insert("...NoTradingSessions....NoMDFeedTypes");

      noTradingSessions_0_0.addGroup(noMDFeedTypes_0_1_0);
    }
    // MatchRules
    // Group MatchRules.NoMatchRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_0_1_0;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_65;
      set_field(noMatchRules_0_1_0, FIX::MatchAlgorithm{"STRING_831694933"}, MatchRules_NoMatchRules_65);
      set_field(noMatchRules_0_1_0, FIX::MatchType{"STRING_3"}, MatchRules_NoMatchRules_65);
      all_values.push_back(MatchRules_NoMatchRules_65);
      all_compo_names.insert("...NoTradingSessions....NoMatchRules");

      noTradingSessions_0_0.addGroup(noMatchRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoMatchRules noMatchRules_0_1_1;
      // MatchRules.NoMatchRules
      multiset<string> MatchRules_NoMatchRules_66;
      set_field(noMatchRules_0_1_1, FIX::MatchAlgorithm{"STRING_1879889133"}, MatchRules_NoMatchRules_66);
      set_field(noMatchRules_0_1_1, FIX::MatchType{"STRING_M3"}, MatchRules_NoMatchRules_66);
      all_values.push_back(MatchRules_NoMatchRules_66);
      all_compo_names.insert("...NoTradingSessions....NoMatchRules");

      noTradingSessions_0_0.addGroup(noMatchRules_0_1_1);
    }
    // OrdTypeRules
    // Group OrdTypeRules.NoOrdTypeRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_0;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_61;
      set_field(noOrdTypeRules_0_1_0, FIX::OrdType{'3'}, OrdTypeRules_NoOrdTypeRules_61);
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_61);
      all_compo_names.insert("...NoTradingSessions....NoOrdTypeRules");

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_0);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_1;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_62;
      set_field(noOrdTypeRules_0_1_1, FIX::OrdType{'C'}, OrdTypeRules_NoOrdTypeRules_62);
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_62);
      all_compo_names.insert("...NoTradingSessions....NoOrdTypeRules");

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_1);
    }
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoOrdTypeRules noOrdTypeRules_0_1_2;
      // OrdTypeRules.NoOrdTypeRules
      multiset<string> OrdTypeRules_NoOrdTypeRules_63;
      set_field(noOrdTypeRules_0_1_2, FIX::OrdType{'1'}, OrdTypeRules_NoOrdTypeRules_63);
      all_values.push_back(OrdTypeRules_NoOrdTypeRules_63);
      all_compo_names.insert("...NoTradingSessions....NoOrdTypeRules");

      noTradingSessions_0_0.addGroup(noOrdTypeRules_0_1_2);
    }
    // TimeInForceRules
    // Group TimeInForceRules.NoTimeInForceRules
    {
      FIX50SP2::TradingSessionListUpdateReport::NoTradingSessions::NoTimeInForceRules noTimeInForceRules_0_1_0;
      // TimeInForceRules.NoTimeInForceRules
      multiset<string> TimeInForceRules_NoTimeInForceRules_58;
      set_field(noTimeInForceRules_0_1_0, FIX::TimeInForce{'7'}, TimeInForceRules_NoTimeInForceRules_58);
      all_values.push_back(TimeInForceRules_NoTimeInForceRules_58);
      all_compo_names.insert("...NoTradingSessions....NoTimeInForceRules");

      noTradingSessions_0_0.addGroup(noTimeInForceRules_0_1_0);
    }
    msg.addGroup(noTradingSessions_0_0);
  }
  // header
  multiset<string> header_102;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_0"}, header_102);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_6721381"}, header_102);
  set_header_field(msg.getHeader(), FIX::BodyLength{242301493}, header_102);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_266698064"}, header_102);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_589827881"}, header_102);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1260456111"}, header_102);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1331534501"}, header_102);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1167245805}, header_102);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_102);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{804546743}, header_102);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_866149736"}, header_102);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_2047331278"}, header_102);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_908799418"}, header_102);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(17, 24, 53, 14, 3, 2010)}, header_102);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_102);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_102);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1887515241"}, header_102);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{577703996}, header_102);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_338341916"}, header_102);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_841772922"}, header_102);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1261255247"}, header_102);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(19, 38, 56, 1, 5, 2003)}, header_102);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1210503949"}, header_102);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1882094001"}, header_102);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_757268092"}, header_102);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_394554802"}, header_102);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{901856159}, header_102);
  all_values.push_back(header_102);
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
