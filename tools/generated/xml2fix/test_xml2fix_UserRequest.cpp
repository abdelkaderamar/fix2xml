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

TEST ( UserRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"UserReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> UserRequest_message_t_0;
  elt.add_attribute("UserReqID", "UserRequestID_t_1956529067"); // 0
  UserRequest_message_t_0.insert("UserRequestID_t_1956529067");
  elt.add_attribute("UserReqTyp", "2"); // 0
  UserRequest_message_t_0.insert("2");
  elt.add_attribute("Username", "Username_t_631884041"); // 0
  UserRequest_message_t_0.insert("Username_t_631884041");
  elt.add_attribute("Password", "Password_t_1702545103"); // 0
  UserRequest_message_t_0.insert("Password_t_1702545103");
  elt.add_attribute("NewPassword", "NewPassword_t_539610000"); // 0
  UserRequest_message_t_0.insert("NewPassword_t_539610000");
  elt.add_attribute("EncPwdMethod", "1296965133"); // 0
  UserRequest_message_t_0.insert("1296965133");
  elt.add_attribute("EncPwd", "EncryptedPassword_t_709374247"); // 0
  UserRequest_message_t_0.insert("EncryptedPassword_t_709374247");
  elt.add_attribute("EncNewPwd", "EncryptedNewPassword_t_561878890"); // 0
  UserRequest_message_t_0.insert("EncryptedNewPassword_t_561878890");
  elt.add_attribute("RawDataLength", "1254676965"); // 0
  UserRequest_message_t_0.insert("1254676965");
  elt.add_attribute("RawData", "RawData_t_1955712716"); // 0
  UserRequest_message_t_0.insert("RawData_t_1955712716");
  all_values.push_back(UserRequest_message_t_0);
  all_compo_names.insert("UserRequest_message_t");

  { // Hdr
    xml_element Hdr_106{"Hdr"};
    multiset<string> Hdr_106_set;
    Hdr_106.add_attribute("SeqNum", "663701734"); // 1
    Hdr_106_set.insert("663701734");
    Hdr_106.add_attribute("SID", "SenderCompID_t_1646000095"); // 1
    Hdr_106_set.insert("SenderCompID_t_1646000095");
    Hdr_106.add_attribute("TID", "TargetCompID_t_1170921051"); // 1
    Hdr_106_set.insert("TargetCompID_t_1170921051");
    Hdr_106.add_attribute("OBID", "OnBehalfOfCompID_t_177893986"); // 1
    Hdr_106_set.insert("OnBehalfOfCompID_t_177893986");
    Hdr_106.add_attribute("D2ID", "DeliverToCompID_t_2093960050"); // 1
    Hdr_106_set.insert("DeliverToCompID_t_2093960050");
    Hdr_106.add_attribute("SSub", "SenderSubID_t_167940349"); // 1
    Hdr_106_set.insert("SenderSubID_t_167940349");
    Hdr_106.add_attribute("SLoc", "SenderLocationID_t_2108714862"); // 1
    Hdr_106_set.insert("SenderLocationID_t_2108714862");
    Hdr_106.add_attribute("TSub", "TargetSubID_t_1793436719"); // 1
    Hdr_106_set.insert("TargetSubID_t_1793436719");
    Hdr_106.add_attribute("TLoc", "TargetLocationID_t_1034277569"); // 1
    Hdr_106_set.insert("TargetLocationID_t_1034277569");
    Hdr_106.add_attribute("OBSub", "OnBehalfOfSubID_t_1242048373"); // 1
    Hdr_106_set.insert("OnBehalfOfSubID_t_1242048373");
    Hdr_106.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1198847193"); // 1
    Hdr_106_set.insert("OnBehalfOfLocationID_t_1198847193");
    Hdr_106.add_attribute("D2Sub", "DeliverToSubID_t_647261559"); // 1
    Hdr_106_set.insert("DeliverToSubID_t_647261559");
    Hdr_106.add_attribute("D2Loc", "DeliverToLocationID_t_1057929644"); // 1
    Hdr_106_set.insert("DeliverToLocationID_t_1057929644");
    Hdr_106.add_attribute("PosDup", "N"); // 1
    Hdr_106_set.insert("N");
    Hdr_106.add_attribute("PosRsnd", "N"); // 1
    Hdr_106_set.insert("N");
    Hdr_106.add_attribute("Snt", "SendingTime_t_302715522"); // 1
    Hdr_106_set.insert("SendingTime_t_302715522");
    Hdr_106.add_attribute("OrigSnt", "OrigSendingTime_t_641272309"); // 1
    Hdr_106_set.insert("OrigSendingTime_t_641272309");
    Hdr_106.add_attribute("MsgEncd", "MessageEncoding_t_912123903"); // 1
    Hdr_106_set.insert("MessageEncoding_t_912123903");
    all_values.push_back(Hdr_106_set);
    all_compo_names.insert("Hdr_106_set");

    {
      xml_element Hop_106{"Hop"};
      multiset<string> Hop_106_set;
      Hop_106.add_attribute("ID", "HopCompID_t_1992376731"); // 2
      Hop_106_set.insert("HopCompID_t_1992376731");
      Hop_106.add_attribute("Ref", "172688321"); // 2
      Hop_106_set.insert("172688321");
      Hop_106.add_attribute("Snt", "HopSendingTime_t_40865103"); // 2
      Hop_106_set.insert("HopSendingTime_t_40865103");
      all_values.push_back(Hop_106_set);
      all_compo_names.insert("Hop_106_set");

      Hdr_106.add_element(Hop_106);
    }
    elt.add_element(Hdr_106);
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
