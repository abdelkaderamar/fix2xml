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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"UserRsp" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> UserResponse_message_t_0;
  elt.add_attribute("UserReqID", "UserRequestID_t_788403750"); // 0
  UserResponse_message_t_0.insert("UserRequestID_t_788403750");
  elt.add_attribute("Username", "Username_t_871455245"); // 0
  UserResponse_message_t_0.insert("Username_t_871455245");
  elt.add_attribute("UserStat", "5"); // 0
  UserResponse_message_t_0.insert("5");
  elt.add_attribute("UserStatText", "UserStatusText_t_1730474173"); // 0
  UserResponse_message_t_0.insert("UserStatusText_t_1730474173");
  all_values.push_back(UserResponse_message_t_0);
  all_compo_names.insert("UserResponse_message_t");

  { // Hdr
    xml_element Hdr_107{"Hdr"};
    multiset<string> Hdr_107_set;
    Hdr_107.add_attribute("SeqNum", "53333194"); // 1
    Hdr_107_set.insert("53333194");
    Hdr_107.add_attribute("SID", "SenderCompID_t_830161265"); // 1
    Hdr_107_set.insert("SenderCompID_t_830161265");
    Hdr_107.add_attribute("TID", "TargetCompID_t_1717445530"); // 1
    Hdr_107_set.insert("TargetCompID_t_1717445530");
    Hdr_107.add_attribute("OBID", "OnBehalfOfCompID_t_282940823"); // 1
    Hdr_107_set.insert("OnBehalfOfCompID_t_282940823");
    Hdr_107.add_attribute("D2ID", "DeliverToCompID_t_702563271"); // 1
    Hdr_107_set.insert("DeliverToCompID_t_702563271");
    Hdr_107.add_attribute("SSub", "SenderSubID_t_1061712787"); // 1
    Hdr_107_set.insert("SenderSubID_t_1061712787");
    Hdr_107.add_attribute("SLoc", "SenderLocationID_t_1246794180"); // 1
    Hdr_107_set.insert("SenderLocationID_t_1246794180");
    Hdr_107.add_attribute("TSub", "TargetSubID_t_1575038887"); // 1
    Hdr_107_set.insert("TargetSubID_t_1575038887");
    Hdr_107.add_attribute("TLoc", "TargetLocationID_t_1906916053"); // 1
    Hdr_107_set.insert("TargetLocationID_t_1906916053");
    Hdr_107.add_attribute("OBSub", "OnBehalfOfSubID_t_52701466"); // 1
    Hdr_107_set.insert("OnBehalfOfSubID_t_52701466");
    Hdr_107.add_attribute("OBLoc", "OnBehalfOfLocationID_t_74910802"); // 1
    Hdr_107_set.insert("OnBehalfOfLocationID_t_74910802");
    Hdr_107.add_attribute("D2Sub", "DeliverToSubID_t_1909135270"); // 1
    Hdr_107_set.insert("DeliverToSubID_t_1909135270");
    Hdr_107.add_attribute("D2Loc", "DeliverToLocationID_t_30168208"); // 1
    Hdr_107_set.insert("DeliverToLocationID_t_30168208");
    Hdr_107.add_attribute("PosDup", "Y"); // 1
    Hdr_107_set.insert("Y");
    Hdr_107.add_attribute("PosRsnd", "Y"); // 1
    Hdr_107_set.insert("Y");
    Hdr_107.add_attribute("Snt", "SendingTime_t_1331687071"); // 1
    Hdr_107_set.insert("SendingTime_t_1331687071");
    Hdr_107.add_attribute("OrigSnt", "OrigSendingTime_t_1644514669"); // 1
    Hdr_107_set.insert("OrigSendingTime_t_1644514669");
    Hdr_107.add_attribute("MsgEncd", "MessageEncoding_t_1940240121"); // 1
    Hdr_107_set.insert("MessageEncoding_t_1940240121");
    all_values.push_back(Hdr_107_set);
    all_compo_names.insert("Hdr_107_set");

    {
      xml_element Hop_107{"Hop"};
      multiset<string> Hop_107_set;
      Hop_107.add_attribute("ID", "HopCompID_t_198473254"); // 2
      Hop_107_set.insert("HopCompID_t_198473254");
      Hop_107.add_attribute("Ref", "1623555427"); // 2
      Hop_107_set.insert("1623555427");
      Hop_107.add_attribute("Snt", "HopSendingTime_t_1471968189"); // 2
      Hop_107_set.insert("HopSendingTime_t_1471968189");
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
