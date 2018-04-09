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

TEST ( UserResponse_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"UserRsp" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> UserResponse_message_t_0;
  elt.add_attribute("UserReqID", "UserRequestID_t_1937573737"); // 0
  UserResponse_message_t_0.insert("UserRequestID_t_1937573737");
  elt.add_attribute("Username", "Username_t_1038327136"); // 0
  UserResponse_message_t_0.insert("Username_t_1038327136");
  elt.add_attribute("UserStat", "8"); // 0
  UserResponse_message_t_0.insert("8");
  elt.add_attribute("UserStatText", "UserStatusText_t_379570371"); // 0
  UserResponse_message_t_0.insert("UserStatusText_t_379570371");
  all_values.push_back(UserResponse_message_t_0);
  all_compo_names.insert("UserResponse_message_t");

  { // Hdr
    xml_element Hdr_107{"Hdr"};
    multiset<string> Hdr_107_set;
    Hdr_107.add_attribute("SeqNum", "800477750"); // 1
    Hdr_107_set.insert("800477750");
    Hdr_107.add_attribute("SID", "SenderCompID_t_1103452572"); // 1
    Hdr_107_set.insert("SenderCompID_t_1103452572");
    Hdr_107.add_attribute("TID", "TargetCompID_t_33504814"); // 1
    Hdr_107_set.insert("TargetCompID_t_33504814");
    Hdr_107.add_attribute("OBID", "OnBehalfOfCompID_t_256377375"); // 1
    Hdr_107_set.insert("OnBehalfOfCompID_t_256377375");
    Hdr_107.add_attribute("D2ID", "DeliverToCompID_t_1504716873"); // 1
    Hdr_107_set.insert("DeliverToCompID_t_1504716873");
    Hdr_107.add_attribute("SSub", "SenderSubID_t_1072783375"); // 1
    Hdr_107_set.insert("SenderSubID_t_1072783375");
    Hdr_107.add_attribute("SLoc", "SenderLocationID_t_95513028"); // 1
    Hdr_107_set.insert("SenderLocationID_t_95513028");
    Hdr_107.add_attribute("TSub", "TargetSubID_t_613560821"); // 1
    Hdr_107_set.insert("TargetSubID_t_613560821");
    Hdr_107.add_attribute("TLoc", "TargetLocationID_t_713619964"); // 1
    Hdr_107_set.insert("TargetLocationID_t_713619964");
    Hdr_107.add_attribute("OBSub", "OnBehalfOfSubID_t_1126609329"); // 1
    Hdr_107_set.insert("OnBehalfOfSubID_t_1126609329");
    Hdr_107.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1848080543"); // 1
    Hdr_107_set.insert("OnBehalfOfLocationID_t_1848080543");
    Hdr_107.add_attribute("D2Sub", "DeliverToSubID_t_2126881884"); // 1
    Hdr_107_set.insert("DeliverToSubID_t_2126881884");
    Hdr_107.add_attribute("D2Loc", "DeliverToLocationID_t_183934785"); // 1
    Hdr_107_set.insert("DeliverToLocationID_t_183934785");
    Hdr_107.add_attribute("PosDup", "N"); // 1
    Hdr_107_set.insert("N");
    Hdr_107.add_attribute("PosRsnd", "Y"); // 1
    Hdr_107_set.insert("Y");
    Hdr_107.add_attribute("Snt", "SendingTime_t_286118879"); // 1
    Hdr_107_set.insert("SendingTime_t_286118879");
    Hdr_107.add_attribute("OrigSnt", "OrigSendingTime_t_215185563"); // 1
    Hdr_107_set.insert("OrigSendingTime_t_215185563");
    Hdr_107.add_attribute("MsgEncd", "MessageEncoding_t_1031756796"); // 1
    Hdr_107_set.insert("MessageEncoding_t_1031756796");
    all_values.push_back(Hdr_107_set);
    all_compo_names.insert("Hdr_107_set");

    {
      xml_element Hop_107{"Hop"};
      multiset<string> Hop_107_set;
      Hop_107.add_attribute("ID", "HopCompID_t_302884880"); // 2
      Hop_107_set.insert("HopCompID_t_302884880");
      Hop_107.add_attribute("Ref", "1642742275"); // 2
      Hop_107_set.insert("1642742275");
      Hop_107.add_attribute("Snt", "HopSendingTime_t_709743379"); // 2
      Hop_107_set.insert("HopSendingTime_t_709743379");
      all_values.push_back(Hop_107_set);
      all_compo_names.insert("Hop_107_set");

      Hdr_107.add_element(Hop_107);
    }
    elt.add_element(Hdr_107);
  } // end Hdr
  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

  FIX::Message fix_msg;
  ASSERT_TRUE(converter.fixml2fix(elt, fix_msg));

  cout << endl << "////////////////////////////////////////////" << endl;
  cout << fix_msg.toXML() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

  cout << endl << "////////////////////////////////////////////" << endl;
  multiset<string> fix_s;
  list<multiset<string>> fix_ls;
  to_list(fix_msg, quickfix_dico, fix_s, fix_ls);
  fix_ls.push_back(fix_s);

  BOOST_LOG_TRIVIAL(debug) << "All FIX components (" << fix_ls.size() << ")";
  for (const auto &l : fix_ls) {
    cout << "	[";
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;
  }

  cout << endl << "////////////////////////////////////////////" << endl;
  multiset<string> xml_s;
  list<multiset<string>> xml_ls;
  elt_to_list(elt, fixml_dict, xml_s, xml_ls);
  xml_ls.push_back(xml_s);
  BOOST_LOG_TRIVIAL(debug) << "All XML components (" << xml_ls.size() << ")";
  for (const auto &l : xml_ls) {
    cout << "	[";
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;
  }

  for (const auto &fix_l : fix_ls) {
    bool found = false;
    for (const auto &xml_l : xml_ls) {
      if (includes(xml_l.begin(), xml_l.end(), fix_l.begin(), fix_l.end())) {
        found = true;
        break;
      } // end if includes
    }   // end for all_values
    EXPECT_TRUE(found);
    if (!found) {
      BOOST_LOG_TRIVIAL(debug)
        << "[TO CHECK] This FIX component was not found in XML message";
      cout << "	 ---> [";
      copy(fix_l.begin(), fix_l.end(), ostream_iterator<string>(cout, " "));
      cout << "]" << endl << endl;
    } // end if ! found
  }   // end for elt_lists
}
