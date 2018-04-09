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

TEST ( BusinessMessageReject_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"BizMsgRej" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> BusinessMessageReject_message_t_0;
  elt.add_attribute("RefSeqNum", "910798090"); // 0
  BusinessMessageReject_message_t_0.insert("910798090");
  elt.add_attribute("RefMsgTyp", "A"); // 0
  BusinessMessageReject_message_t_0.insert("A");
  elt.add_attribute("RefApplVerID", "5"); // 0
  BusinessMessageReject_message_t_0.insert("5");
  elt.add_attribute("RefApplExtID", "20874540"); // 0
  BusinessMessageReject_message_t_0.insert("20874540");
  elt.add_attribute("RefCstmApplVerID", "RefCstmApplVerID_t_1510379266"); // 0
  BusinessMessageReject_message_t_0.insert("RefCstmApplVerID_t_1510379266");
  elt.add_attribute("BizRejRefID", "BusinessRejectRefID_t_1381017049"); // 0
  BusinessMessageReject_message_t_0.insert("BusinessRejectRefID_t_1381017049");
  elt.add_attribute("BizRejRsn", "1"); // 0
  BusinessMessageReject_message_t_0.insert("1");
  elt.add_attribute("Txt", "Text_t_1552429184"); // 0
  BusinessMessageReject_message_t_0.insert("Text_t_1552429184");
  elt.add_attribute("EncTxtLen", "1082839583"); // 0
  BusinessMessageReject_message_t_0.insert("1082839583");
  elt.add_attribute("EncTxt", "EncodedText_t_219211454"); // 0
  BusinessMessageReject_message_t_0.insert("EncodedText_t_219211454");
  all_values.push_back(BusinessMessageReject_message_t_0);
  all_compo_names.insert("BusinessMessageReject_message_t");

  { // Hdr
    xml_element Hdr_13{"Hdr"};
    multiset<string> Hdr_13_set;
    Hdr_13.add_attribute("SeqNum", "1004243691"); // 1
    Hdr_13_set.insert("1004243691");
    Hdr_13.add_attribute("SID", "SenderCompID_t_1410442360"); // 1
    Hdr_13_set.insert("SenderCompID_t_1410442360");
    Hdr_13.add_attribute("TID", "TargetCompID_t_1475780034"); // 1
    Hdr_13_set.insert("TargetCompID_t_1475780034");
    Hdr_13.add_attribute("OBID", "OnBehalfOfCompID_t_2020094514"); // 1
    Hdr_13_set.insert("OnBehalfOfCompID_t_2020094514");
    Hdr_13.add_attribute("D2ID", "DeliverToCompID_t_345553813"); // 1
    Hdr_13_set.insert("DeliverToCompID_t_345553813");
    Hdr_13.add_attribute("SSub", "SenderSubID_t_793060541"); // 1
    Hdr_13_set.insert("SenderSubID_t_793060541");
    Hdr_13.add_attribute("SLoc", "SenderLocationID_t_1976204515"); // 1
    Hdr_13_set.insert("SenderLocationID_t_1976204515");
    Hdr_13.add_attribute("TSub", "TargetSubID_t_510844841"); // 1
    Hdr_13_set.insert("TargetSubID_t_510844841");
    Hdr_13.add_attribute("TLoc", "TargetLocationID_t_1190189204"); // 1
    Hdr_13_set.insert("TargetLocationID_t_1190189204");
    Hdr_13.add_attribute("OBSub", "OnBehalfOfSubID_t_1480963132"); // 1
    Hdr_13_set.insert("OnBehalfOfSubID_t_1480963132");
    Hdr_13.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2076610086"); // 1
    Hdr_13_set.insert("OnBehalfOfLocationID_t_2076610086");
    Hdr_13.add_attribute("D2Sub", "DeliverToSubID_t_2120876476"); // 1
    Hdr_13_set.insert("DeliverToSubID_t_2120876476");
    Hdr_13.add_attribute("D2Loc", "DeliverToLocationID_t_498211373"); // 1
    Hdr_13_set.insert("DeliverToLocationID_t_498211373");
    Hdr_13.add_attribute("PosDup", "Y"); // 1
    Hdr_13_set.insert("Y");
    Hdr_13.add_attribute("PosRsnd", "N"); // 1
    Hdr_13_set.insert("N");
    Hdr_13.add_attribute("Snt", "SendingTime_t_1585313501"); // 1
    Hdr_13_set.insert("SendingTime_t_1585313501");
    Hdr_13.add_attribute("OrigSnt", "OrigSendingTime_t_112809933"); // 1
    Hdr_13_set.insert("OrigSendingTime_t_112809933");
    Hdr_13.add_attribute("MsgEncd", "MessageEncoding_t_270105976"); // 1
    Hdr_13_set.insert("MessageEncoding_t_270105976");
    all_values.push_back(Hdr_13_set);
    all_compo_names.insert("Hdr_13_set");

    {
      xml_element Hop_13{"Hop"};
      multiset<string> Hop_13_set;
      Hop_13.add_attribute("ID", "HopCompID_t_1687156101"); // 2
      Hop_13_set.insert("HopCompID_t_1687156101");
      Hop_13.add_attribute("Ref", "906956411"); // 2
      Hop_13_set.insert("906956411");
      Hop_13.add_attribute("Snt", "HopSendingTime_t_1737495094"); // 2
      Hop_13_set.insert("HopSendingTime_t_1737495094");
      all_values.push_back(Hop_13_set);
      all_compo_names.insert("Hop_13_set");

      Hdr_13.add_element(Hop_13);
    }
    elt.add_element(Hdr_13);
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
