#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/TradingSessionStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradingSessionStatusRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::TradingSessionStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradingSessionStatusRequest_0;
  set_field(msg, FIX::MarketID{"EXCHANGE_1328835399"}, TradingSessionStatusRequest_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_257991099"}, TradingSessionStatusRequest_0);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1672422751"}, TradingSessionStatusRequest_0);
  set_field(msg, FIX::SubscriptionRequestType{'0'}, TradingSessionStatusRequest_0);
  set_field(msg, FIX::TradSesMethod{2}, TradingSessionStatusRequest_0);
  set_field(msg, FIX::TradSesMode{2}, TradingSessionStatusRequest_0);
  set_field(msg, FIX::TradSesReqID{"STRING_1856200894"}, TradingSessionStatusRequest_0);
  set_field(msg, FIX::TradingSessionID{"STRING_4"}, TradingSessionStatusRequest_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_6"}, TradingSessionStatusRequest_0);
  all_values.push_back(TradingSessionStatusRequest_0);

  all_compo_names.insert("TradingSessionStatusRequest");

  // header
  multiset<string> header_104;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_8"}, header_104);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1235823483"}, header_104);
  set_header_field(msg.getHeader(), FIX::BodyLength{2137042782}, header_104);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1211410014"}, header_104);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_304118271"}, header_104);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1962149791"}, header_104);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1302227971"}, header_104);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{874399923}, header_104);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_104);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{491287915}, header_104);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1269519651"}, header_104);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_13229841"}, header_104);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_2023399016"}, header_104);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(16, 41, 38, 8, 10, 2010)}, header_104);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_104);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_104);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_56633765"}, header_104);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1373546363}, header_104);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1268959730"}, header_104);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1544033093"}, header_104);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1848992220"}, header_104);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(19, 2, 9, 1, 6, 2013)}, header_104);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_8515635"}, header_104);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_282285948"}, header_104);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1542099067"}, header_104);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1310743607"}, header_104);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1156685872}, header_104);
  all_values.push_back(header_104);
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
