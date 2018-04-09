#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ListStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ListStatusRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::ListStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ListStatusRequest_0;
  set_field(msg, FIX::EncodedText{"DATA_657168590"}, ListStatusRequest_0);
  set_field(msg, FIX::EncodedTextLen{1782537352}, ListStatusRequest_0);
  set_field(msg, FIX::ListID{"STRING_55640824"}, ListStatusRequest_0);
  set_field(msg, FIX::Text{"STRING_1332269252"}, ListStatusRequest_0);
  all_values.push_back(ListStatusRequest_0);

  all_compo_names.insert("ListStatusRequest");

  // header
  multiset<string> header_37;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_1"}, header_37);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1213342060"}, header_37);
  set_header_field(msg.getHeader(), FIX::BodyLength{1774651499}, header_37);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1685079836"}, header_37);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_2130744649"}, header_37);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1979777788"}, header_37);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_895866824"}, header_37);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{589420093}, header_37);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_EUC-JP"}, header_37);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{879451350}, header_37);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1123749253"}, header_37);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_2055471362"}, header_37);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_186325650"}, header_37);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(14, 48, 20, 1, 4, 2005)}, header_37);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_37);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_37);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_182471709"}, header_37);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{187624384}, header_37);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_883826437"}, header_37);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1748320198"}, header_37);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_916265212"}, header_37);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(6, 57, 51, 14, 6, 2001)}, header_37);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_28438134"}, header_37);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_21025451"}, header_37);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_185242623"}, header_37);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_924304958"}, header_37);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{610445544}, header_37);
  all_values.push_back(header_37);
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
