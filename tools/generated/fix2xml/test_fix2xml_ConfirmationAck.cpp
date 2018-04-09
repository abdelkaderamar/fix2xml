#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ConfirmationAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ConfirmationAck, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::ConfirmationAck msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ConfirmationAck_0;
  set_field(msg, FIX::AffirmStatus{2}, ConfirmationAck_0);
  set_field(msg, FIX::ConfirmID{"STRING_2119662870"}, ConfirmationAck_0);
  set_field(msg, FIX::ConfirmRejReason{2}, ConfirmationAck_0);
  set_field(msg, FIX::EncodedText{"DATA_994121962"}, ConfirmationAck_0);
  set_field(msg, FIX::EncodedTextLen{1878130228}, ConfirmationAck_0);
  set_field(msg, FIX::MatchStatus{'1'}, ConfirmationAck_0);
  set_field(msg, FIX::Text{"STRING_565502179"}, ConfirmationAck_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_76803189"}, ConfirmationAck_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(15, 54, 57, 15, 4, 2007)}, ConfirmationAck_0);
  all_values.push_back(ConfirmationAck_0);

  all_compo_names.insert("ConfirmationAck");

  // header
  multiset<string> header_21;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_2"}, header_21);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_220429447"}, header_21);
  set_header_field(msg.getHeader(), FIX::BodyLength{209571942}, header_21);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_877332069"}, header_21);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_716418576"}, header_21);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_601239338"}, header_21);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1461205799"}, header_21);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1328254126}, header_21);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_ISO-2022-JP"}, header_21);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{201367965}, header_21);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_807504345"}, header_21);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_220997943"}, header_21);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_148948611"}, header_21);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(0, 16, 9, 6, 1, 2007)}, header_21);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_21);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_21);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_228280483"}, header_21);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1861135479}, header_21);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1091520479"}, header_21);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_952267930"}, header_21);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1500396025"}, header_21);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(17, 53, 20, 15, 1, 2003)}, header_21);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_700847368"}, header_21);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_598342408"}, header_21);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1862253281"}, header_21);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_14569519"}, header_21);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1926596534}, header_21);
  all_values.push_back(header_21);
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
