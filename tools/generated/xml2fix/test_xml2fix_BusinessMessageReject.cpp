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
  elt.add_attribute("RefSeqNum", "1666759918"); // 0
  BusinessMessageReject_message_t_0.insert("1666759918");
  elt.add_attribute("RefMsgTyp", "K"); // 0
  BusinessMessageReject_message_t_0.insert("K");
  elt.add_attribute("RefApplVerID", "7"); // 0
  BusinessMessageReject_message_t_0.insert("7");
  elt.add_attribute("RefApplExtID", "1744064847"); // 0
  BusinessMessageReject_message_t_0.insert("1744064847");
  elt.add_attribute("RefCstmApplVerID", "RefCstmApplVerID_t_318744945"); // 0
  BusinessMessageReject_message_t_0.insert("RefCstmApplVerID_t_318744945");
  elt.add_attribute("BizRejRefID", "BusinessRejectRefID_t_593916626"); // 0
  BusinessMessageReject_message_t_0.insert("BusinessRejectRefID_t_593916626");
  elt.add_attribute("BizRejRsn", "7"); // 0
  BusinessMessageReject_message_t_0.insert("7");
  elt.add_attribute("Txt", "Text_t_2036199347"); // 0
  BusinessMessageReject_message_t_0.insert("Text_t_2036199347");
  elt.add_attribute("EncTxtLen", "1618504010"); // 0
  BusinessMessageReject_message_t_0.insert("1618504010");
  elt.add_attribute("EncTxt", "EncodedText_t_521468514"); // 0
  BusinessMessageReject_message_t_0.insert("EncodedText_t_521468514");
  all_values.push_back(BusinessMessageReject_message_t_0);
  all_compo_names.insert("BusinessMessageReject_message_t");

  { // Hdr
    xml_element Hdr_13{"Hdr"};
    multiset<string> Hdr_13_set;
    Hdr_13.add_attribute("SeqNum", "867887513"); // 1
    Hdr_13_set.insert("867887513");
    Hdr_13.add_attribute("SID", "SenderCompID_t_1678406999"); // 1
    Hdr_13_set.insert("SenderCompID_t_1678406999");
    Hdr_13.add_attribute("TID", "TargetCompID_t_268414752"); // 1
    Hdr_13_set.insert("TargetCompID_t_268414752");
    Hdr_13.add_attribute("OBID", "OnBehalfOfCompID_t_1593770931"); // 1
    Hdr_13_set.insert("OnBehalfOfCompID_t_1593770931");
    Hdr_13.add_attribute("D2ID", "DeliverToCompID_t_1142697700"); // 1
    Hdr_13_set.insert("DeliverToCompID_t_1142697700");
    Hdr_13.add_attribute("SSub", "SenderSubID_t_1717208773"); // 1
    Hdr_13_set.insert("SenderSubID_t_1717208773");
    Hdr_13.add_attribute("SLoc", "SenderLocationID_t_2011202976"); // 1
    Hdr_13_set.insert("SenderLocationID_t_2011202976");
    Hdr_13.add_attribute("TSub", "TargetSubID_t_783026823"); // 1
    Hdr_13_set.insert("TargetSubID_t_783026823");
    Hdr_13.add_attribute("TLoc", "TargetLocationID_t_308409794"); // 1
    Hdr_13_set.insert("TargetLocationID_t_308409794");
    Hdr_13.add_attribute("OBSub", "OnBehalfOfSubID_t_701525166"); // 1
    Hdr_13_set.insert("OnBehalfOfSubID_t_701525166");
    Hdr_13.add_attribute("OBLoc", "OnBehalfOfLocationID_t_561643830"); // 1
    Hdr_13_set.insert("OnBehalfOfLocationID_t_561643830");
    Hdr_13.add_attribute("D2Sub", "DeliverToSubID_t_1230671581"); // 1
    Hdr_13_set.insert("DeliverToSubID_t_1230671581");
    Hdr_13.add_attribute("D2Loc", "DeliverToLocationID_t_1087376788"); // 1
    Hdr_13_set.insert("DeliverToLocationID_t_1087376788");
    Hdr_13.add_attribute("PosDup", "N"); // 1
    Hdr_13_set.insert("N");
    Hdr_13.add_attribute("PosRsnd", "Y"); // 1
    Hdr_13_set.insert("Y");
    Hdr_13.add_attribute("Snt", "SendingTime_t_2020128608"); // 1
    Hdr_13_set.insert("SendingTime_t_2020128608");
    Hdr_13.add_attribute("OrigSnt", "OrigSendingTime_t_1572293847"); // 1
    Hdr_13_set.insert("OrigSendingTime_t_1572293847");
    Hdr_13.add_attribute("MsgEncd", "MessageEncoding_t_434959980"); // 1
    Hdr_13_set.insert("MessageEncoding_t_434959980");
    all_values.push_back(Hdr_13_set);
    all_compo_names.insert("Hdr_13_set");

    {
      xml_element Hop_13{"Hop"};
      multiset<string> Hop_13_set;
      Hop_13.add_attribute("ID", "HopCompID_t_2080034300"); // 2
      Hop_13_set.insert("HopCompID_t_2080034300");
      Hop_13.add_attribute("Ref", "2082939582"); // 2
      Hop_13_set.insert("2082939582");
      Hop_13.add_attribute("Snt", "HopSendingTime_t_1293894695"); // 2
      Hop_13_set.insert("HopSendingTime_t_1293894695");
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
