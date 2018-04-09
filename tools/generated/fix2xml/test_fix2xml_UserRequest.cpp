#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/UserRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( UserRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::UserRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> UserRequest_0;
  set_field(msg, FIX::EncryptedNewPassword{"DATA_712789987"}, UserRequest_0);
  set_field(msg, FIX::EncryptedNewPasswordLen{2144716759}, UserRequest_0);
  set_field(msg, FIX::EncryptedPassword{"DATA_1088325228"}, UserRequest_0);
  set_field(msg, FIX::EncryptedPasswordLen{1764046295}, UserRequest_0);
  set_field(msg, FIX::EncryptedPasswordMethod{1121831082}, UserRequest_0);
  set_field(msg, FIX::NewPassword{"STRING_1537037253"}, UserRequest_0);
  set_field(msg, FIX::Password{"STRING_1920569294"}, UserRequest_0);
  set_field(msg, FIX::RawData{"DATA_988773248"}, UserRequest_0);
  set_field(msg, FIX::RawDataLength{1576139420}, UserRequest_0);
  set_field(msg, FIX::UserRequestID{"STRING_874197914"}, UserRequest_0);
  set_field(msg, FIX::UserRequestType{3}, UserRequest_0);
  set_field(msg, FIX::Username{"STRING_1195190863"}, UserRequest_0);
  all_values.push_back(UserRequest_0);

  all_compo_names.insert("UserRequest");

  // header
  multiset<string> header_106;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_8"}, header_106);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_961278881"}, header_106);
  set_header_field(msg.getHeader(), FIX::BodyLength{208857724}, header_106);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_109230033"}, header_106);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_97876896"}, header_106);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1677100116"}, header_106);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_36665771"}, header_106);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1660680434}, header_106);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_ISO-2022-JP"}, header_106);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1642048399}, header_106);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_545383029"}, header_106);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_908793487"}, header_106);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_438656774"}, header_106);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(19, 46, 39, 27, 10, 2017)}, header_106);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_106);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_106);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1687796114"}, header_106);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1274085717}, header_106);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_2083456151"}, header_106);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1460881760"}, header_106);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_115375317"}, header_106);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(2, 27, 58, 17, 10, 2003)}, header_106);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_133168230"}, header_106);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_2008414185"}, header_106);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_298293331"}, header_106);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_169834001"}, header_106);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1521610972}, header_106);
  all_values.push_back(header_106);
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
