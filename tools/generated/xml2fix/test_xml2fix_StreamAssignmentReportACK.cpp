#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/StreamAssignmentReportACK.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( StreamAssignmentReportACK_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"StrmAsgnRptACK" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> StreamAssignmentReportACK_message_t_0;
  elt.add_attribute("ActTyp", "1"); // 0
  StreamAssignmentReportACK_message_t_0.insert("1");
  elt.add_attribute("RptID", "StreamAsgnRptID_t_724946280"); // 0
  StreamAssignmentReportACK_message_t_0.insert("StreamAsgnRptID_t_724946280");
  elt.add_attribute("RejRsn", "99"); // 0
  StreamAssignmentReportACK_message_t_0.insert("99");
  elt.add_attribute("Txt", "Text_t_1988212048"); // 0
  StreamAssignmentReportACK_message_t_0.insert("Text_t_1988212048");
  elt.add_attribute("EncTxtLen", "1963335864"); // 0
  StreamAssignmentReportACK_message_t_0.insert("1963335864");
  elt.add_attribute("EncTxt", "EncodedText_t_270891974"); // 0
  StreamAssignmentReportACK_message_t_0.insert("EncodedText_t_270891974");
  all_values.push_back(StreamAssignmentReportACK_message_t_0);
  all_compo_names.insert("StreamAssignmentReportACK_message_t");

  { // Hdr
    xml_element Hdr_94{"Hdr"};
    multiset<string> Hdr_94_set;
    Hdr_94.add_attribute("SeqNum", "1306963108"); // 1
    Hdr_94_set.insert("1306963108");
    Hdr_94.add_attribute("SID", "SenderCompID_t_1141747056"); // 1
    Hdr_94_set.insert("SenderCompID_t_1141747056");
    Hdr_94.add_attribute("TID", "TargetCompID_t_730749735"); // 1
    Hdr_94_set.insert("TargetCompID_t_730749735");
    Hdr_94.add_attribute("OBID", "OnBehalfOfCompID_t_1408652965"); // 1
    Hdr_94_set.insert("OnBehalfOfCompID_t_1408652965");
    Hdr_94.add_attribute("D2ID", "DeliverToCompID_t_1307272204"); // 1
    Hdr_94_set.insert("DeliverToCompID_t_1307272204");
    Hdr_94.add_attribute("SSub", "SenderSubID_t_1286065577"); // 1
    Hdr_94_set.insert("SenderSubID_t_1286065577");
    Hdr_94.add_attribute("SLoc", "SenderLocationID_t_1714991201"); // 1
    Hdr_94_set.insert("SenderLocationID_t_1714991201");
    Hdr_94.add_attribute("TSub", "TargetSubID_t_2089056337"); // 1
    Hdr_94_set.insert("TargetSubID_t_2089056337");
    Hdr_94.add_attribute("TLoc", "TargetLocationID_t_1192402142"); // 1
    Hdr_94_set.insert("TargetLocationID_t_1192402142");
    Hdr_94.add_attribute("OBSub", "OnBehalfOfSubID_t_618149849"); // 1
    Hdr_94_set.insert("OnBehalfOfSubID_t_618149849");
    Hdr_94.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1038519019"); // 1
    Hdr_94_set.insert("OnBehalfOfLocationID_t_1038519019");
    Hdr_94.add_attribute("D2Sub", "DeliverToSubID_t_535925085"); // 1
    Hdr_94_set.insert("DeliverToSubID_t_535925085");
    Hdr_94.add_attribute("D2Loc", "DeliverToLocationID_t_525091734"); // 1
    Hdr_94_set.insert("DeliverToLocationID_t_525091734");
    Hdr_94.add_attribute("PosDup", "N"); // 1
    Hdr_94_set.insert("N");
    Hdr_94.add_attribute("PosRsnd", "N"); // 1
    Hdr_94_set.insert("N");
    Hdr_94.add_attribute("Snt", "SendingTime_t_1700264920"); // 1
    Hdr_94_set.insert("SendingTime_t_1700264920");
    Hdr_94.add_attribute("OrigSnt", "OrigSendingTime_t_444607848"); // 1
    Hdr_94_set.insert("OrigSendingTime_t_444607848");
    Hdr_94.add_attribute("MsgEncd", "MessageEncoding_t_1481775025"); // 1
    Hdr_94_set.insert("MessageEncoding_t_1481775025");
    all_values.push_back(Hdr_94_set);
    all_compo_names.insert("Hdr_94_set");

    {
      xml_element Hop_94{"Hop"};
      multiset<string> Hop_94_set;
      Hop_94.add_attribute("ID", "HopCompID_t_1678813508"); // 2
      Hop_94_set.insert("HopCompID_t_1678813508");
      Hop_94.add_attribute("Ref", "1233581920"); // 2
      Hop_94_set.insert("1233581920");
      Hop_94.add_attribute("Snt", "HopSendingTime_t_499623991"); // 2
      Hop_94_set.insert("HopSendingTime_t_499623991");
      all_values.push_back(Hop_94_set);
      all_compo_names.insert("Hop_94_set");

      Hdr_94.add_element(Hop_94);
    }
    elt.add_element(Hdr_94);
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
