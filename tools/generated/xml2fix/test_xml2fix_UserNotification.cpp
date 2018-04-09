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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"UserNotifctn" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> UserNotification_message_t_0;
  elt.add_attribute("UserStat", "5"); // 0
  UserNotification_message_t_0.insert("5");
  elt.add_attribute("Txt", "Text_t_668993620"); // 0
  UserNotification_message_t_0.insert("Text_t_668993620");
  elt.add_attribute("EncTxtLen", "868949151"); // 0
  UserNotification_message_t_0.insert("868949151");
  elt.add_attribute("EncTxt", "EncodedText_t_1211937808"); // 0
  UserNotification_message_t_0.insert("EncodedText_t_1211937808");
  all_values.push_back(UserNotification_message_t_0);
  all_compo_names.insert("UserNotification_message_t");

  { // Hdr
    xml_element Hdr_105{"Hdr"};
    multiset<string> Hdr_105_set;
    Hdr_105.add_attribute("SeqNum", "1841232659"); // 1
    Hdr_105_set.insert("1841232659");
    Hdr_105.add_attribute("SID", "SenderCompID_t_1542192792"); // 1
    Hdr_105_set.insert("SenderCompID_t_1542192792");
    Hdr_105.add_attribute("TID", "TargetCompID_t_1385344118"); // 1
    Hdr_105_set.insert("TargetCompID_t_1385344118");
    Hdr_105.add_attribute("OBID", "OnBehalfOfCompID_t_383236027"); // 1
    Hdr_105_set.insert("OnBehalfOfCompID_t_383236027");
    Hdr_105.add_attribute("D2ID", "DeliverToCompID_t_855063295"); // 1
    Hdr_105_set.insert("DeliverToCompID_t_855063295");
    Hdr_105.add_attribute("SSub", "SenderSubID_t_749041675"); // 1
    Hdr_105_set.insert("SenderSubID_t_749041675");
    Hdr_105.add_attribute("SLoc", "SenderLocationID_t_1191960648"); // 1
    Hdr_105_set.insert("SenderLocationID_t_1191960648");
    Hdr_105.add_attribute("TSub", "TargetSubID_t_2125675773"); // 1
    Hdr_105_set.insert("TargetSubID_t_2125675773");
    Hdr_105.add_attribute("TLoc", "TargetLocationID_t_1772425331"); // 1
    Hdr_105_set.insert("TargetLocationID_t_1772425331");
    Hdr_105.add_attribute("OBSub", "OnBehalfOfSubID_t_173712803"); // 1
    Hdr_105_set.insert("OnBehalfOfSubID_t_173712803");
    Hdr_105.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1664340717"); // 1
    Hdr_105_set.insert("OnBehalfOfLocationID_t_1664340717");
    Hdr_105.add_attribute("D2Sub", "DeliverToSubID_t_1385077391"); // 1
    Hdr_105_set.insert("DeliverToSubID_t_1385077391");
    Hdr_105.add_attribute("D2Loc", "DeliverToLocationID_t_1044858638"); // 1
    Hdr_105_set.insert("DeliverToLocationID_t_1044858638");
    Hdr_105.add_attribute("PosDup", "N"); // 1
    Hdr_105_set.insert("N");
    Hdr_105.add_attribute("PosRsnd", "Y"); // 1
    Hdr_105_set.insert("Y");
    Hdr_105.add_attribute("Snt", "SendingTime_t_2062065555"); // 1
    Hdr_105_set.insert("SendingTime_t_2062065555");
    Hdr_105.add_attribute("OrigSnt", "OrigSendingTime_t_1664344834"); // 1
    Hdr_105_set.insert("OrigSendingTime_t_1664344834");
    Hdr_105.add_attribute("MsgEncd", "MessageEncoding_t_1423967335"); // 1
    Hdr_105_set.insert("MessageEncoding_t_1423967335");
    all_values.push_back(Hdr_105_set);
    all_compo_names.insert("Hdr_105_set");

    {
      xml_element Hop_105{"Hop"};
      multiset<string> Hop_105_set;
      Hop_105.add_attribute("ID", "HopCompID_t_1745548550"); // 2
      Hop_105_set.insert("HopCompID_t_1745548550");
      Hop_105.add_attribute("Ref", "569937642"); // 2
      Hop_105_set.insert("569937642");
      Hop_105.add_attribute("Snt", "HopSendingTime_t_1234308296"); // 2
      Hop_105_set.insert("HopSendingTime_t_1234308296");
      all_values.push_back(Hop_105_set);
      all_compo_names.insert("Hop_105_set");

      Hdr_105.add_element(Hop_105);
    }
    elt.add_element(Hdr_105);
  } // end Hdr
  { // UserGrp
    xml_element UserGrp_0{"UserGrp"};
    multiset<string> UserGrp_0_set;
    UserGrp_0.add_attribute("Username", "Username_t_2095159437"); // 1
    UserGrp_0_set.insert("Username_t_2095159437");
    all_values.push_back(UserGrp_0_set);
    all_compo_names.insert("UserGrp_0_set");

    elt.add_element(UserGrp_0);
  } // end UserGrp
  { // UserGrp
    xml_element UserGrp_1{"UserGrp"};
    multiset<string> UserGrp_1_set;
    UserGrp_1.add_attribute("Username", "Username_t_1194480179"); // 1
    UserGrp_1_set.insert("Username_t_1194480179");
    all_values.push_back(UserGrp_1_set);
    all_compo_names.insert("UserGrp_1_set");

    elt.add_element(UserGrp_1);
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
