#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/TradingSessionListRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradingSessionListRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::TradingSessionListRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradingSessionListRequest_0;
  set_field(msg, FIX::MarketID{"EXCHANGE_30440956"}, TradingSessionListRequest_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_14685359"}, TradingSessionListRequest_0);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_2034737299"}, TradingSessionListRequest_0);
  set_field(msg, FIX::SubscriptionRequestType{'1'}, TradingSessionListRequest_0);
  set_field(msg, FIX::TradSesMethod{1}, TradingSessionListRequest_0);
  set_field(msg, FIX::TradSesMode{1}, TradingSessionListRequest_0);
  set_field(msg, FIX::TradSesReqID{"STRING_579509747"}, TradingSessionListRequest_0);
  set_field(msg, FIX::TradingSessionID{"STRING_3"}, TradingSessionListRequest_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_4"}, TradingSessionListRequest_0);
  all_values.push_back(TradingSessionListRequest_0);

  all_compo_names.insert("TradingSessionListRequest");

  // header
  multiset<string> header_101;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_3"}, header_101);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1977915420"}, header_101);
  set_header_field(msg.getHeader(), FIX::BodyLength{95713347}, header_101);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1582139501"}, header_101);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1876227833"}, header_101);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1906916570"}, header_101);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1881021416"}, header_101);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{618631955}, header_101);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_EUC-JP"}, header_101);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{356865510}, header_101);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_324320377"}, header_101);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_2115939727"}, header_101);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_150838330"}, header_101);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(16, 13, 5, 9, 4, 2001)}, header_101);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_101);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_101);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1397996537"}, header_101);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1457606100}, header_101);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_604291306"}, header_101);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1672591426"}, header_101);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_462871960"}, header_101);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(13, 49, 16, 25, 6, 2000)}, header_101);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1541120462"}, header_101);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1250689587"}, header_101);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1991268566"}, header_101);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1274658230"}, header_101);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1869321542}, header_101);
  all_values.push_back(header_101);
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
