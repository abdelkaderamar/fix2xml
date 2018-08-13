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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"UserReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> UserRequest_message_t_0;
  elt.add_attribute("UserReqID", "UserRequestID_t_1153190554"); // 0
  UserRequest_message_t_0.insert("UserRequestID_t_1153190554");
  elt.add_attribute("UserReqTyp", "3"); // 0
  UserRequest_message_t_0.insert("3");
  elt.add_attribute("Username", "Username_t_641488024"); // 0
  UserRequest_message_t_0.insert("Username_t_641488024");
  elt.add_attribute("Password", "Password_t_942070423"); // 0
  UserRequest_message_t_0.insert("Password_t_942070423");
  elt.add_attribute("NewPassword", "NewPassword_t_1329361597"); // 0
  UserRequest_message_t_0.insert("NewPassword_t_1329361597");
  elt.add_attribute("EncPwdMethod", "921526252"); // 0
  UserRequest_message_t_0.insert("921526252");
  elt.add_attribute("EncPwd", "EncryptedPassword_t_2134455004"); // 0
  UserRequest_message_t_0.insert("EncryptedPassword_t_2134455004");
  elt.add_attribute("EncNewPwd", "EncryptedNewPassword_t_229607629"); // 0
  UserRequest_message_t_0.insert("EncryptedNewPassword_t_229607629");
  elt.add_attribute("RawDataLength", "2019885654"); // 0
  UserRequest_message_t_0.insert("2019885654");
  elt.add_attribute("RawData", "RawData_t_1491750905"); // 0
  UserRequest_message_t_0.insert("RawData_t_1491750905");
  all_values.push_back(UserRequest_message_t_0);
  all_compo_names.insert("UserRequest_message_t");

  { // Hdr
    xml_element Hdr_106{"Hdr"};
    multiset<string> Hdr_106_set;
    Hdr_106.add_attribute("SeqNum", "963853357"); // 1
    Hdr_106_set.insert("963853357");
    Hdr_106.add_attribute("SID", "SenderCompID_t_872475616"); // 1
    Hdr_106_set.insert("SenderCompID_t_872475616");
    Hdr_106.add_attribute("TID", "TargetCompID_t_845203266"); // 1
    Hdr_106_set.insert("TargetCompID_t_845203266");
    Hdr_106.add_attribute("OBID", "OnBehalfOfCompID_t_953390934"); // 1
    Hdr_106_set.insert("OnBehalfOfCompID_t_953390934");
    Hdr_106.add_attribute("D2ID", "DeliverToCompID_t_647355562"); // 1
    Hdr_106_set.insert("DeliverToCompID_t_647355562");
    Hdr_106.add_attribute("SSub", "SenderSubID_t_2219217"); // 1
    Hdr_106_set.insert("SenderSubID_t_2219217");
    Hdr_106.add_attribute("SLoc", "SenderLocationID_t_2124950390"); // 1
    Hdr_106_set.insert("SenderLocationID_t_2124950390");
    Hdr_106.add_attribute("TSub", "TargetSubID_t_637196783"); // 1
    Hdr_106_set.insert("TargetSubID_t_637196783");
    Hdr_106.add_attribute("TLoc", "TargetLocationID_t_1132944633"); // 1
    Hdr_106_set.insert("TargetLocationID_t_1132944633");
    Hdr_106.add_attribute("OBSub", "OnBehalfOfSubID_t_1301518863"); // 1
    Hdr_106_set.insert("OnBehalfOfSubID_t_1301518863");
    Hdr_106.add_attribute("OBLoc", "OnBehalfOfLocationID_t_932407083"); // 1
    Hdr_106_set.insert("OnBehalfOfLocationID_t_932407083");
    Hdr_106.add_attribute("D2Sub", "DeliverToSubID_t_1045643866"); // 1
    Hdr_106_set.insert("DeliverToSubID_t_1045643866");
    Hdr_106.add_attribute("D2Loc", "DeliverToLocationID_t_1014269831"); // 1
    Hdr_106_set.insert("DeliverToLocationID_t_1014269831");
    Hdr_106.add_attribute("PosDup", "N"); // 1
    Hdr_106_set.insert("N");
    Hdr_106.add_attribute("PosRsnd", "N"); // 1
    Hdr_106_set.insert("N");
    Hdr_106.add_attribute("Snt", "SendingTime_t_475631407"); // 1
    Hdr_106_set.insert("SendingTime_t_475631407");
    Hdr_106.add_attribute("OrigSnt", "OrigSendingTime_t_519000880"); // 1
    Hdr_106_set.insert("OrigSendingTime_t_519000880");
    Hdr_106.add_attribute("MsgEncd", "MessageEncoding_t_1596148372"); // 1
    Hdr_106_set.insert("MessageEncoding_t_1596148372");
    all_values.push_back(Hdr_106_set);
    all_compo_names.insert("Hdr_106_set");

    {
      xml_element Hop_106{"Hop"};
      multiset<string> Hop_106_set;
      Hop_106.add_attribute("ID", "HopCompID_t_1782696843"); // 2
      Hop_106_set.insert("HopCompID_t_1782696843");
      Hop_106.add_attribute("Ref", "1455527554"); // 2
      Hop_106_set.insert("1455527554");
      Hop_106.add_attribute("Snt", "HopSendingTime_t_1414630636"); // 2
      Hop_106_set.insert("HopSendingTime_t_1414630636");
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
  msg_to_list(fix_msg, quickfix_dico, fix_s, fix_ls);
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
