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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"BizMsgRej" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> BusinessMessageReject_message_t_0;
  elt.add_attribute("RefSeqNum", "1433170051"); // 0
  BusinessMessageReject_message_t_0.insert("1433170051");
  elt.add_attribute("RefMsgTyp", "m"); // 0
  BusinessMessageReject_message_t_0.insert("m");
  elt.add_attribute("RefApplVerID", "1"); // 0
  BusinessMessageReject_message_t_0.insert("1");
  elt.add_attribute("RefApplExtID", "725889268"); // 0
  BusinessMessageReject_message_t_0.insert("725889268");
  elt.add_attribute("RefCstmApplVerID", "RefCstmApplVerID_t_1332763966"); // 0
  BusinessMessageReject_message_t_0.insert("RefCstmApplVerID_t_1332763966");
  elt.add_attribute("BizRejRefID", "BusinessRejectRefID_t_1342720010"); // 0
  BusinessMessageReject_message_t_0.insert("BusinessRejectRefID_t_1342720010");
  elt.add_attribute("BizRejRsn", "7"); // 0
  BusinessMessageReject_message_t_0.insert("7");
  elt.add_attribute("Txt", "Text_t_730230604"); // 0
  BusinessMessageReject_message_t_0.insert("Text_t_730230604");
  elt.add_attribute("EncTxtLen", "1465359385"); // 0
  BusinessMessageReject_message_t_0.insert("1465359385");
  elt.add_attribute("EncTxt", "EncodedText_t_2141722855"); // 0
  BusinessMessageReject_message_t_0.insert("EncodedText_t_2141722855");
  all_values.push_back(BusinessMessageReject_message_t_0);
  all_compo_names.insert("BusinessMessageReject_message_t");

  { // Hdr
    xml_element Hdr_13{"Hdr"};
    multiset<string> Hdr_13_set;
    Hdr_13.add_attribute("SeqNum", "1897707787"); // 1
    Hdr_13_set.insert("1897707787");
    Hdr_13.add_attribute("SID", "SenderCompID_t_436817372"); // 1
    Hdr_13_set.insert("SenderCompID_t_436817372");
    Hdr_13.add_attribute("TID", "TargetCompID_t_1069951367"); // 1
    Hdr_13_set.insert("TargetCompID_t_1069951367");
    Hdr_13.add_attribute("OBID", "OnBehalfOfCompID_t_1977589449"); // 1
    Hdr_13_set.insert("OnBehalfOfCompID_t_1977589449");
    Hdr_13.add_attribute("D2ID", "DeliverToCompID_t_1132766563"); // 1
    Hdr_13_set.insert("DeliverToCompID_t_1132766563");
    Hdr_13.add_attribute("SSub", "SenderSubID_t_326587176"); // 1
    Hdr_13_set.insert("SenderSubID_t_326587176");
    Hdr_13.add_attribute("SLoc", "SenderLocationID_t_846693881"); // 1
    Hdr_13_set.insert("SenderLocationID_t_846693881");
    Hdr_13.add_attribute("TSub", "TargetSubID_t_1393366811"); // 1
    Hdr_13_set.insert("TargetSubID_t_1393366811");
    Hdr_13.add_attribute("TLoc", "TargetLocationID_t_848237990"); // 1
    Hdr_13_set.insert("TargetLocationID_t_848237990");
    Hdr_13.add_attribute("OBSub", "OnBehalfOfSubID_t_720921752"); // 1
    Hdr_13_set.insert("OnBehalfOfSubID_t_720921752");
    Hdr_13.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1824803037"); // 1
    Hdr_13_set.insert("OnBehalfOfLocationID_t_1824803037");
    Hdr_13.add_attribute("D2Sub", "DeliverToSubID_t_651138930"); // 1
    Hdr_13_set.insert("DeliverToSubID_t_651138930");
    Hdr_13.add_attribute("D2Loc", "DeliverToLocationID_t_1973617702"); // 1
    Hdr_13_set.insert("DeliverToLocationID_t_1973617702");
    Hdr_13.add_attribute("PosDup", "Y"); // 1
    Hdr_13_set.insert("Y");
    Hdr_13.add_attribute("PosRsnd", "Y"); // 1
    Hdr_13_set.insert("Y");
    Hdr_13.add_attribute("Snt", "SendingTime_t_1974931110"); // 1
    Hdr_13_set.insert("SendingTime_t_1974931110");
    Hdr_13.add_attribute("OrigSnt", "OrigSendingTime_t_82342795"); // 1
    Hdr_13_set.insert("OrigSendingTime_t_82342795");
    Hdr_13.add_attribute("MsgEncd", "MessageEncoding_t_1726376011"); // 1
    Hdr_13_set.insert("MessageEncoding_t_1726376011");
    all_values.push_back(Hdr_13_set);
    all_compo_names.insert("Hdr_13_set");

    {
      xml_element Hop_13{"Hop"};
      multiset<string> Hop_13_set;
      Hop_13.add_attribute("ID", "HopCompID_t_1652835173"); // 2
      Hop_13_set.insert("HopCompID_t_1652835173");
      Hop_13.add_attribute("Ref", "1051777382"); // 2
      Hop_13_set.insert("1051777382");
      Hop_13.add_attribute("Snt", "HopSendingTime_t_320143387"); // 2
      Hop_13_set.insert("HopSendingTime_t_320143387");
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
