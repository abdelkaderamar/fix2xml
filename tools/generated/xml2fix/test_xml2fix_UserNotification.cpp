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

TEST ( UserNotification_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"UserNotifctn" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> UserNotification_message_t_0;
  elt.add_attribute("UserStat", "3"); // 0
  UserNotification_message_t_0.insert("3");
  elt.add_attribute("Txt", "Text_t_280038228"); // 0
  UserNotification_message_t_0.insert("Text_t_280038228");
  elt.add_attribute("EncTxtLen", "1192384581"); // 0
  UserNotification_message_t_0.insert("1192384581");
  elt.add_attribute("EncTxt", "EncodedText_t_1047729680"); // 0
  UserNotification_message_t_0.insert("EncodedText_t_1047729680");
  all_values.push_back(UserNotification_message_t_0);
  all_compo_names.insert("UserNotification_message_t");

  { // Hdr
    xml_element Hdr_105{"Hdr"};
    multiset<string> Hdr_105_set;
    Hdr_105.add_attribute("SeqNum", "1098359402"); // 1
    Hdr_105_set.insert("1098359402");
    Hdr_105.add_attribute("SID", "SenderCompID_t_1504779548"); // 1
    Hdr_105_set.insert("SenderCompID_t_1504779548");
    Hdr_105.add_attribute("TID", "TargetCompID_t_734245728"); // 1
    Hdr_105_set.insert("TargetCompID_t_734245728");
    Hdr_105.add_attribute("OBID", "OnBehalfOfCompID_t_1000073609"); // 1
    Hdr_105_set.insert("OnBehalfOfCompID_t_1000073609");
    Hdr_105.add_attribute("D2ID", "DeliverToCompID_t_1500936009"); // 1
    Hdr_105_set.insert("DeliverToCompID_t_1500936009");
    Hdr_105.add_attribute("SSub", "SenderSubID_t_2137021225"); // 1
    Hdr_105_set.insert("SenderSubID_t_2137021225");
    Hdr_105.add_attribute("SLoc", "SenderLocationID_t_1922363594"); // 1
    Hdr_105_set.insert("SenderLocationID_t_1922363594");
    Hdr_105.add_attribute("TSub", "TargetSubID_t_1304499599"); // 1
    Hdr_105_set.insert("TargetSubID_t_1304499599");
    Hdr_105.add_attribute("TLoc", "TargetLocationID_t_1171559456"); // 1
    Hdr_105_set.insert("TargetLocationID_t_1171559456");
    Hdr_105.add_attribute("OBSub", "OnBehalfOfSubID_t_2137324869"); // 1
    Hdr_105_set.insert("OnBehalfOfSubID_t_2137324869");
    Hdr_105.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1130725416"); // 1
    Hdr_105_set.insert("OnBehalfOfLocationID_t_1130725416");
    Hdr_105.add_attribute("D2Sub", "DeliverToSubID_t_1324052120"); // 1
    Hdr_105_set.insert("DeliverToSubID_t_1324052120");
    Hdr_105.add_attribute("D2Loc", "DeliverToLocationID_t_295210300"); // 1
    Hdr_105_set.insert("DeliverToLocationID_t_295210300");
    Hdr_105.add_attribute("PosDup", "Y"); // 1
    Hdr_105_set.insert("Y");
    Hdr_105.add_attribute("PosRsnd", "N"); // 1
    Hdr_105_set.insert("N");
    Hdr_105.add_attribute("Snt", "SendingTime_t_1194117322"); // 1
    Hdr_105_set.insert("SendingTime_t_1194117322");
    Hdr_105.add_attribute("OrigSnt", "OrigSendingTime_t_633567849"); // 1
    Hdr_105_set.insert("OrigSendingTime_t_633567849");
    Hdr_105.add_attribute("MsgEncd", "MessageEncoding_t_1608845224"); // 1
    Hdr_105_set.insert("MessageEncoding_t_1608845224");
    all_values.push_back(Hdr_105_set);
    all_compo_names.insert("Hdr_105_set");

    {
      xml_element Hop_105{"Hop"};
      multiset<string> Hop_105_set;
      Hop_105.add_attribute("ID", "HopCompID_t_539960122"); // 2
      Hop_105_set.insert("HopCompID_t_539960122");
      Hop_105.add_attribute("Ref", "2064420304"); // 2
      Hop_105_set.insert("2064420304");
      Hop_105.add_attribute("Snt", "HopSendingTime_t_1307065436"); // 2
      Hop_105_set.insert("HopSendingTime_t_1307065436");
      all_values.push_back(Hop_105_set);
      all_compo_names.insert("Hop_105_set");

      Hdr_105.add_element(Hop_105);
    }
    elt.add_element(Hdr_105);
  } // end Hdr
  { // UserGrp
    xml_element UserGrp_0{"UserGrp"};
    multiset<string> UserGrp_0_set;
    UserGrp_0.add_attribute("Username", "Username_t_1965965911"); // 1
    UserGrp_0_set.insert("Username_t_1965965911");
    all_values.push_back(UserGrp_0_set);
    all_compo_names.insert("UserGrp_0_set");

    elt.add_element(UserGrp_0);
  } // end UserGrp
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
