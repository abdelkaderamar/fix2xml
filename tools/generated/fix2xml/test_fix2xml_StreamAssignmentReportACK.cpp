#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/StreamAssignmentReportACK.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( StreamAssignmentReportACK, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::StreamAssignmentReportACK msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> StreamAssignmentReportACK_0;
  set_field(msg, FIX::EncodedText{"DATA_1970694520"}, StreamAssignmentReportACK_0);
  set_field(msg, FIX::EncodedTextLen{1169773738}, StreamAssignmentReportACK_0);
  set_field(msg, FIX::StreamAsgnAckType{0}, StreamAssignmentReportACK_0);
  set_field(msg, FIX::StreamAsgnRejReason{99}, StreamAssignmentReportACK_0);
  set_field(msg, FIX::StreamAsgnRptID{"STRING_1087523569"}, StreamAssignmentReportACK_0);
  set_field(msg, FIX::Text{"STRING_1794885114"}, StreamAssignmentReportACK_0);
  all_values.push_back(StreamAssignmentReportACK_0);

  all_compo_names.insert("StreamAssignmentReportACK");

  // header
  multiset<string> header_94;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_7"}, header_94);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_537021290"}, header_94);
  set_header_field(msg.getHeader(), FIX::BodyLength{11805103}, header_94);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1348937329"}, header_94);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1699337286"}, header_94);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1881462531"}, header_94);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_553057900"}, header_94);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1992841511}, header_94);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_94);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1768275025}, header_94);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1055573177"}, header_94);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_968674906"}, header_94);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_962358282"}, header_94);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(22, 42, 28, 4, 9, 2000)}, header_94);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_94);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_94);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_821430918"}, header_94);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1198896122}, header_94);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1116262728"}, header_94);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_644641790"}, header_94);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_221186212"}, header_94);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(8, 41, 55, 7, 8, 2003)}, header_94);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_2052080309"}, header_94);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1397584710"}, header_94);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_179307022"}, header_94);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_457654561"}, header_94);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1242942573}, header_94);
  all_values.push_back(header_94);
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
