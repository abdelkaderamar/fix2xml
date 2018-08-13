#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ApplicationMessageReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ApplicationMessageReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ApplMsgRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ApplicationMessageReport_message_t_0;
  elt.add_attribute("ApplRptID", "ApplReportID_t_1924086649"); // 0
  ApplicationMessageReport_message_t_0.insert("ApplReportID_t_1924086649");
  elt.add_attribute("ApplReqID", "ApplReqID_t_1374655367"); // 0
  ApplicationMessageReport_message_t_0.insert("ApplReqID_t_1374655367");
  elt.add_attribute("ApplRptTyp", "2"); // 0
  ApplicationMessageReport_message_t_0.insert("2");
  elt.add_attribute("Txt", "Text_t_1784186040"); // 0
  ApplicationMessageReport_message_t_0.insert("Text_t_1784186040");
  elt.add_attribute("EncTxtLen", "532781048"); // 0
  ApplicationMessageReport_message_t_0.insert("532781048");
  elt.add_attribute("EncTxt", "EncodedText_t_1250930940"); // 0
  ApplicationMessageReport_message_t_0.insert("EncodedText_t_1250930940");
  all_values.push_back(ApplicationMessageReport_message_t_0);
  all_compo_names.insert("ApplicationMessageReport_message_t");

  { // Hdr
    xml_element Hdr_7{"Hdr"};
    multiset<string> Hdr_7_set;
    Hdr_7.add_attribute("SeqNum", "2117993783"); // 1
    Hdr_7_set.insert("2117993783");
    Hdr_7.add_attribute("SID", "SenderCompID_t_9363223"); // 1
    Hdr_7_set.insert("SenderCompID_t_9363223");
    Hdr_7.add_attribute("TID", "TargetCompID_t_623218437"); // 1
    Hdr_7_set.insert("TargetCompID_t_623218437");
    Hdr_7.add_attribute("OBID", "OnBehalfOfCompID_t_1720374409"); // 1
    Hdr_7_set.insert("OnBehalfOfCompID_t_1720374409");
    Hdr_7.add_attribute("D2ID", "DeliverToCompID_t_1754849943"); // 1
    Hdr_7_set.insert("DeliverToCompID_t_1754849943");
    Hdr_7.add_attribute("SSub", "SenderSubID_t_1808928792"); // 1
    Hdr_7_set.insert("SenderSubID_t_1808928792");
    Hdr_7.add_attribute("SLoc", "SenderLocationID_t_103306988"); // 1
    Hdr_7_set.insert("SenderLocationID_t_103306988");
    Hdr_7.add_attribute("TSub", "TargetSubID_t_1429606040"); // 1
    Hdr_7_set.insert("TargetSubID_t_1429606040");
    Hdr_7.add_attribute("TLoc", "TargetLocationID_t_1483631645"); // 1
    Hdr_7_set.insert("TargetLocationID_t_1483631645");
    Hdr_7.add_attribute("OBSub", "OnBehalfOfSubID_t_503756310"); // 1
    Hdr_7_set.insert("OnBehalfOfSubID_t_503756310");
    Hdr_7.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2093295797"); // 1
    Hdr_7_set.insert("OnBehalfOfLocationID_t_2093295797");
    Hdr_7.add_attribute("D2Sub", "DeliverToSubID_t_1019743086"); // 1
    Hdr_7_set.insert("DeliverToSubID_t_1019743086");
    Hdr_7.add_attribute("D2Loc", "DeliverToLocationID_t_224130038"); // 1
    Hdr_7_set.insert("DeliverToLocationID_t_224130038");
    Hdr_7.add_attribute("PosDup", "Y"); // 1
    Hdr_7_set.insert("Y");
    Hdr_7.add_attribute("PosRsnd", "Y"); // 1
    Hdr_7_set.insert("Y");
    Hdr_7.add_attribute("Snt", "SendingTime_t_111323454"); // 1
    Hdr_7_set.insert("SendingTime_t_111323454");
    Hdr_7.add_attribute("OrigSnt", "OrigSendingTime_t_751474675"); // 1
    Hdr_7_set.insert("OrigSendingTime_t_751474675");
    Hdr_7.add_attribute("MsgEncd", "MessageEncoding_t_728193282"); // 1
    Hdr_7_set.insert("MessageEncoding_t_728193282");
    all_values.push_back(Hdr_7_set);
    all_compo_names.insert("Hdr_7_set");

    {
      xml_element Hop_7{"Hop"};
      multiset<string> Hop_7_set;
      Hop_7.add_attribute("ID", "HopCompID_t_1861976746"); // 2
      Hop_7_set.insert("HopCompID_t_1861976746");
      Hop_7.add_attribute("Ref", "910540681"); // 2
      Hop_7_set.insert("910540681");
      Hop_7.add_attribute("Snt", "HopSendingTime_t_187041299"); // 2
      Hop_7_set.insert("HopSendingTime_t_187041299");
      all_values.push_back(Hop_7_set);
      all_compo_names.insert("Hop_7_set");

      Hdr_7.add_element(Hop_7);
    }
    elt.add_element(Hdr_7);
  } // end Hdr
  { // ApplIDRptGrp
    xml_element ApplIDRptGrp_0{"ApplIDRptGrp"};
    multiset<string> ApplIDRptGrp_0_set;
    ApplIDRptGrp_0.add_attribute("RefApplID", "RefApplID_t_43221872"); // 1
    ApplIDRptGrp_0_set.insert("RefApplID_t_43221872");
    ApplIDRptGrp_0.add_attribute("ApplNewSeqNum", "1128468318"); // 1
    ApplIDRptGrp_0_set.insert("1128468318");
    ApplIDRptGrp_0.add_attribute("RefApplLastSeqNum", "1214196531"); // 1
    ApplIDRptGrp_0_set.insert("1214196531");
    all_values.push_back(ApplIDRptGrp_0_set);
    all_compo_names.insert("ApplIDRptGrp_0_set");

    elt.add_element(ApplIDRptGrp_0);
  } // end ApplIDRptGrp
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
