#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityTypeRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityTypeRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::SecurityTypeRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityTypeRequest_0;
  set_field(msg, FIX::EncodedText{"DATA_1541441966"}, SecurityTypeRequest_0);
  set_field(msg, FIX::EncodedTextLen{1471170868}, SecurityTypeRequest_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_2116859960"}, SecurityTypeRequest_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_538401133"}, SecurityTypeRequest_0);
  set_field(msg, FIX::Product{6}, SecurityTypeRequest_0);
  set_field(msg, FIX::SecurityReqID{"STRING_1873591312"}, SecurityTypeRequest_0);
  set_field(msg, FIX::SecuritySubType{"STRING_1902668422"}, SecurityTypeRequest_0);
  set_field(msg, FIX::SecurityType{"STRING_TMCP"}, SecurityTypeRequest_0);
  set_field(msg, FIX::Text{"STRING_1582482394"}, SecurityTypeRequest_0);
  set_field(msg, FIX::TradingSessionID{"STRING_2"}, SecurityTypeRequest_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_1"}, SecurityTypeRequest_0);
  all_values.push_back(SecurityTypeRequest_0);

  all_compo_names.insert("SecurityTypeRequest");

  // header
  multiset<string> header_88;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_2"}, header_88);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_936689880"}, header_88);
  set_header_field(msg.getHeader(), FIX::BodyLength{700025126}, header_88);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1750871415"}, header_88);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_433492178"}, header_88);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_2135828318"}, header_88);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_908515082"}, header_88);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1623216046}, header_88);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_88);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{383625711}, header_88);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_106956144"}, header_88);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1410572319"}, header_88);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1531819537"}, header_88);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(3, 32, 17, 18, 6, 2002)}, header_88);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_88);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_88);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1723199186"}, header_88);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{380879542}, header_88);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_717657235"}, header_88);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1449306850"}, header_88);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_136064317"}, header_88);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(13, 44, 23, 5, 9, 2001)}, header_88);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_2049420916"}, header_88);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_15141374"}, header_88);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1274077400"}, header_88);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_810452350"}, header_88);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1638357420}, header_88);
  all_values.push_back(header_88);
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
