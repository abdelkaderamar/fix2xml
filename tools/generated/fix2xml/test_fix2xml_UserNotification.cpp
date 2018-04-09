#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/UserNotification.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( UserNotification, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::UserNotification msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> UserNotification_0;
  set_field(msg, FIX::EncodedText{"DATA_307091882"}, UserNotification_0);
  set_field(msg, FIX::EncodedTextLen{1802031522}, UserNotification_0);
  set_field(msg, FIX::Text{"STRING_278721875"}, UserNotification_0);
  set_field(msg, FIX::UserStatus{4}, UserNotification_0);
  all_values.push_back(UserNotification_0);

  all_compo_names.insert("UserNotification");

  // UsernameGrp
  // Group UsernameGrp.NoUsernames
  {
    FIX50SP2::UserNotification::NoUsernames noUsernames_0_0;
    // UsernameGrp.NoUsernames
    multiset<string> UsernameGrp_NoUsernames_0;
    set_field(noUsernames_0_0, FIX::Username{"STRING_1616866352"}, UsernameGrp_NoUsernames_0);
    all_values.push_back(UsernameGrp_NoUsernames_0);
    all_compo_names.insert("...NoUsernames");

    msg.addGroup(noUsernames_0_0);
  }
  // header
  multiset<string> header_105;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_4"}, header_105);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1486193043"}, header_105);
  set_header_field(msg.getHeader(), FIX::BodyLength{722791082}, header_105);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1081471420"}, header_105);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_609894388"}, header_105);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1598073096"}, header_105);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_49543036"}, header_105);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{206431367}, header_105);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_105);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1423089399}, header_105);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1475391097"}, header_105);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1051256307"}, header_105);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1124597971"}, header_105);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(15, 33, 47, 4, 7, 2006)}, header_105);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_105);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_105);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1161150509"}, header_105);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{272887863}, header_105);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1284081663"}, header_105);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1468242392"}, header_105);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_2074919385"}, header_105);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(19, 8, 2, 23, 4, 2005)}, header_105);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_672084324"}, header_105);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1553986412"}, header_105);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1205566773"}, header_105);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_721627360"}, header_105);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1760417779}, header_105);
  all_values.push_back(header_105);
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
