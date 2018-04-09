#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ListStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ListStatusRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ListStatReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ListStatusRequest_message_t_0;
  elt.add_attribute("ID", "ListID_t_1237444143"); // 0
  ListStatusRequest_message_t_0.insert("ListID_t_1237444143");
  elt.add_attribute("Txt", "Text_t_1287113860"); // 0
  ListStatusRequest_message_t_0.insert("Text_t_1287113860");
  elt.add_attribute("EncTxtLen", "626146973"); // 0
  ListStatusRequest_message_t_0.insert("626146973");
  elt.add_attribute("EncTxt", "EncodedText_t_656132851"); // 0
  ListStatusRequest_message_t_0.insert("EncodedText_t_656132851");
  all_values.push_back(ListStatusRequest_message_t_0);
  all_compo_names.insert("ListStatusRequest_message_t");

  { // Hdr
    xml_element Hdr_37{"Hdr"};
    multiset<string> Hdr_37_set;
    Hdr_37.add_attribute("SeqNum", "1748958293"); // 1
    Hdr_37_set.insert("1748958293");
    Hdr_37.add_attribute("SID", "SenderCompID_t_1238491520"); // 1
    Hdr_37_set.insert("SenderCompID_t_1238491520");
    Hdr_37.add_attribute("TID", "TargetCompID_t_1346489484"); // 1
    Hdr_37_set.insert("TargetCompID_t_1346489484");
    Hdr_37.add_attribute("OBID", "OnBehalfOfCompID_t_1572869569"); // 1
    Hdr_37_set.insert("OnBehalfOfCompID_t_1572869569");
    Hdr_37.add_attribute("D2ID", "DeliverToCompID_t_583772359"); // 1
    Hdr_37_set.insert("DeliverToCompID_t_583772359");
    Hdr_37.add_attribute("SSub", "SenderSubID_t_1379800113"); // 1
    Hdr_37_set.insert("SenderSubID_t_1379800113");
    Hdr_37.add_attribute("SLoc", "SenderLocationID_t_1689731555"); // 1
    Hdr_37_set.insert("SenderLocationID_t_1689731555");
    Hdr_37.add_attribute("TSub", "TargetSubID_t_969283011"); // 1
    Hdr_37_set.insert("TargetSubID_t_969283011");
    Hdr_37.add_attribute("TLoc", "TargetLocationID_t_463443392"); // 1
    Hdr_37_set.insert("TargetLocationID_t_463443392");
    Hdr_37.add_attribute("OBSub", "OnBehalfOfSubID_t_1165761773"); // 1
    Hdr_37_set.insert("OnBehalfOfSubID_t_1165761773");
    Hdr_37.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2001539937"); // 1
    Hdr_37_set.insert("OnBehalfOfLocationID_t_2001539937");
    Hdr_37.add_attribute("D2Sub", "DeliverToSubID_t_1284714734"); // 1
    Hdr_37_set.insert("DeliverToSubID_t_1284714734");
    Hdr_37.add_attribute("D2Loc", "DeliverToLocationID_t_1353114190"); // 1
    Hdr_37_set.insert("DeliverToLocationID_t_1353114190");
    Hdr_37.add_attribute("PosDup", "N"); // 1
    Hdr_37_set.insert("N");
    Hdr_37.add_attribute("PosRsnd", "N"); // 1
    Hdr_37_set.insert("N");
    Hdr_37.add_attribute("Snt", "SendingTime_t_1463210604"); // 1
    Hdr_37_set.insert("SendingTime_t_1463210604");
    Hdr_37.add_attribute("OrigSnt", "OrigSendingTime_t_783594610"); // 1
    Hdr_37_set.insert("OrigSendingTime_t_783594610");
    Hdr_37.add_attribute("MsgEncd", "MessageEncoding_t_350668323"); // 1
    Hdr_37_set.insert("MessageEncoding_t_350668323");
    all_values.push_back(Hdr_37_set);
    all_compo_names.insert("Hdr_37_set");

    {
      xml_element Hop_37{"Hop"};
      multiset<string> Hop_37_set;
      Hop_37.add_attribute("ID", "HopCompID_t_1989814165"); // 2
      Hop_37_set.insert("HopCompID_t_1989814165");
      Hop_37.add_attribute("Ref", "622220618"); // 2
      Hop_37_set.insert("622220618");
      Hop_37.add_attribute("Snt", "HopSendingTime_t_464123526"); // 2
      Hop_37_set.insert("HopSendingTime_t_464123526");
      all_values.push_back(Hop_37_set);
      all_compo_names.insert("Hop_37_set");

      Hdr_37.add_element(Hop_37);
    }
    elt.add_element(Hdr_37);
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
