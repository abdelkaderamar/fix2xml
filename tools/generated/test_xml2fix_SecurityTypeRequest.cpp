#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityTypeRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityTypeRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecTypReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityTypeRequest_message_t_0;
  elt.add_attribute("ReqID", "SecurityReqID_t_1782495227"); // 0
  SecurityTypeRequest_message_t_0.insert("SecurityReqID_t_1782495227");
  elt.add_attribute("Txt", "Text_t_1639283017"); // 0
  SecurityTypeRequest_message_t_0.insert("Text_t_1639283017");
  elt.add_attribute("EncTxtLen", "793451303"); // 0
  SecurityTypeRequest_message_t_0.insert("793451303");
  elt.add_attribute("EncTxt", "EncodedText_t_1993134142"); // 0
  SecurityTypeRequest_message_t_0.insert("EncodedText_t_1993134142");
  elt.add_attribute("MktID", "MarketID_t_2056039655"); // 0
  SecurityTypeRequest_message_t_0.insert("MarketID_t_2056039655");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_916267455"); // 0
  SecurityTypeRequest_message_t_0.insert("MarketSegmentID_t_916267455");
  elt.add_attribute("SesID", "1"); // 0
  SecurityTypeRequest_message_t_0.insert("1");
  elt.add_attribute("SesSub", "7"); // 0
  SecurityTypeRequest_message_t_0.insert("7");
  elt.add_attribute("Prod", "7"); // 0
  SecurityTypeRequest_message_t_0.insert("7");
  elt.add_attribute("SecTyp", "PROV"); // 0
  SecurityTypeRequest_message_t_0.insert("PROV");
  elt.add_attribute("SubTyp", "SecuritySubType_t_959744665"); // 0
  SecurityTypeRequest_message_t_0.insert("SecuritySubType_t_959744665");
  all_values.push_back(SecurityTypeRequest_message_t_0);
  all_compo_names.insert("SecurityTypeRequest_message_t");

  { // Hdr
    xml_element Hdr_88{"Hdr"};
    multiset<string> Hdr_88_set;
    Hdr_88.add_attribute("SeqNum", "1366107544"); // 1
    Hdr_88_set.insert("1366107544");
    Hdr_88.add_attribute("SID", "SenderCompID_t_906028775"); // 1
    Hdr_88_set.insert("SenderCompID_t_906028775");
    Hdr_88.add_attribute("TID", "TargetCompID_t_1284916739"); // 1
    Hdr_88_set.insert("TargetCompID_t_1284916739");
    Hdr_88.add_attribute("OBID", "OnBehalfOfCompID_t_1444649218"); // 1
    Hdr_88_set.insert("OnBehalfOfCompID_t_1444649218");
    Hdr_88.add_attribute("D2ID", "DeliverToCompID_t_1121188832"); // 1
    Hdr_88_set.insert("DeliverToCompID_t_1121188832");
    Hdr_88.add_attribute("SSub", "SenderSubID_t_1360082152"); // 1
    Hdr_88_set.insert("SenderSubID_t_1360082152");
    Hdr_88.add_attribute("SLoc", "SenderLocationID_t_37072894"); // 1
    Hdr_88_set.insert("SenderLocationID_t_37072894");
    Hdr_88.add_attribute("TSub", "TargetSubID_t_532986816"); // 1
    Hdr_88_set.insert("TargetSubID_t_532986816");
    Hdr_88.add_attribute("TLoc", "TargetLocationID_t_1515770007"); // 1
    Hdr_88_set.insert("TargetLocationID_t_1515770007");
    Hdr_88.add_attribute("OBSub", "OnBehalfOfSubID_t_293530190"); // 1
    Hdr_88_set.insert("OnBehalfOfSubID_t_293530190");
    Hdr_88.add_attribute("OBLoc", "OnBehalfOfLocationID_t_138445788"); // 1
    Hdr_88_set.insert("OnBehalfOfLocationID_t_138445788");
    Hdr_88.add_attribute("D2Sub", "DeliverToSubID_t_1871422637"); // 1
    Hdr_88_set.insert("DeliverToSubID_t_1871422637");
    Hdr_88.add_attribute("D2Loc", "DeliverToLocationID_t_950927177"); // 1
    Hdr_88_set.insert("DeliverToLocationID_t_950927177");
    Hdr_88.add_attribute("PosDup", "Y"); // 1
    Hdr_88_set.insert("Y");
    Hdr_88.add_attribute("PosRsnd", "Y"); // 1
    Hdr_88_set.insert("Y");
    Hdr_88.add_attribute("Snt", "SendingTime_t_633373461"); // 1
    Hdr_88_set.insert("SendingTime_t_633373461");
    Hdr_88.add_attribute("OrigSnt", "OrigSendingTime_t_1616471907"); // 1
    Hdr_88_set.insert("OrigSendingTime_t_1616471907");
    Hdr_88.add_attribute("MsgEncd", "MessageEncoding_t_1156850597"); // 1
    Hdr_88_set.insert("MessageEncoding_t_1156850597");
    all_values.push_back(Hdr_88_set);
    all_compo_names.insert("Hdr_88_set");

    {
      xml_element Hop_88{"Hop"};
      multiset<string> Hop_88_set;
      Hop_88.add_attribute("ID", "HopCompID_t_1500569135"); // 2
      Hop_88_set.insert("HopCompID_t_1500569135");
      Hop_88.add_attribute("Ref", "411334096"); // 2
      Hop_88_set.insert("411334096");
      Hop_88.add_attribute("Snt", "HopSendingTime_t_791862176"); // 2
      Hop_88_set.insert("HopSendingTime_t_791862176");
      all_values.push_back(Hop_88_set);
      all_compo_names.insert("Hop_88_set");

      Hdr_88.add_element(Hop_88);
    }
    elt.add_element(Hdr_88);
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
