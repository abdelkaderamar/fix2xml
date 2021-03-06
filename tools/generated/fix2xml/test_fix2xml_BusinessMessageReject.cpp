#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/BusinessMessageReject.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( BusinessMessageReject, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::BusinessMessageReject msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> BusinessMessageReject_0;
  set_field(msg, FIX::BusinessRejectReason{0}, BusinessMessageReject_0);
  set_field(msg, FIX::BusinessRejectRefID{"STRING_1618171010"}, BusinessMessageReject_0);
  set_field(msg, FIX::EncodedText{"DATA_1413412308"}, BusinessMessageReject_0);
  set_field(msg, FIX::EncodedTextLen{1601308586}, BusinessMessageReject_0);
  set_field(msg, FIX::RefApplExtID{631412498}, BusinessMessageReject_0);
  set_field(msg, FIX::RefApplVerID{"STRING_200667932"}, BusinessMessageReject_0);
  set_field(msg, FIX::RefCstmApplVerID{"STRING_1680826356"}, BusinessMessageReject_0);
  set_field(msg, FIX::RefMsgType{"STRING_1841528339"}, BusinessMessageReject_0);
  set_field(msg, FIX::RefSeqNum{1834182226}, BusinessMessageReject_0);
  set_field(msg, FIX::Text{"STRING_757504757"}, BusinessMessageReject_0);
  all_values.push_back(BusinessMessageReject_0);

  all_compo_names.insert("BusinessMessageReject");

  // header
  multiset<string> header_13;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_3"}, header_13);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_922426938"}, header_13);
  set_header_field(msg.getHeader(), FIX::BodyLength{1445586674}, header_13);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_127826251"}, header_13);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1054304158"}, header_13);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_857112359"}, header_13);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_595241346"}, header_13);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1872212309}, header_13);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_13);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1127496892}, header_13);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_2109995772"}, header_13);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_36544055"}, header_13);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1786282141"}, header_13);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(1, 18, 23, 11, 7, 2003)}, header_13);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_13);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_13);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_2056503792"}, header_13);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{107581840}, header_13);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_660932175"}, header_13);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_540432642"}, header_13);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_308249772"}, header_13);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(22, 59, 1, 13, 10, 2007)}, header_13);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_501371549"}, header_13);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1971679447"}, header_13);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1106995026"}, header_13);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1096612895"}, header_13);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1696408108}, header_13);
  all_values.push_back(header_13);
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
