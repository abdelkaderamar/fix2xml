#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/UserResponse.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( UserResponse, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::UserResponse msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> UserResponse_0;
  set_field(msg, FIX::UserRequestID{"STRING_1616473915"}, UserResponse_0);
  set_field(msg, FIX::UserStatus{1}, UserResponse_0);
  set_field(msg, FIX::UserStatusText{"STRING_2066994001"}, UserResponse_0);
  set_field(msg, FIX::Username{"STRING_377783755"}, UserResponse_0);
  all_values.push_back(UserResponse_0);

  all_compo_names.insert("UserResponse");

  // header
  multiset<string> header_107;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_7"}, header_107);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_72387059"}, header_107);
  set_header_field(msg.getHeader(), FIX::BodyLength{1958661566}, header_107);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_2095698713"}, header_107);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1430830538"}, header_107);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_2113683090"}, header_107);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1553792383"}, header_107);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1354580357}, header_107);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_ISO-2022-JP"}, header_107);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{2100211280}, header_107);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_894892823"}, header_107);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1392539793"}, header_107);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_2036183783"}, header_107);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(6, 39, 2, 14, 2, 2017)}, header_107);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_107);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_107);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_552993389"}, header_107);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{2081157696}, header_107);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_880117744"}, header_107);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_722827391"}, header_107);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1455285020"}, header_107);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(15, 13, 46, 18, 1, 2005)}, header_107);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_438496736"}, header_107);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_730529323"}, header_107);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_504269127"}, header_107);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1992289119"}, header_107);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{2085109680}, header_107);
  all_values.push_back(header_107);
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
