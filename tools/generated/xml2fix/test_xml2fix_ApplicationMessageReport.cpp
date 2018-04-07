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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ApplMsgRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ApplicationMessageReport_message_t_0;
  elt.add_attribute("ApplRptID", "ApplReportID_t_1043906052"); // 0
  ApplicationMessageReport_message_t_0.insert("ApplReportID_t_1043906052");
  elt.add_attribute("ApplReqID", "ApplReqID_t_1596478110"); // 0
  ApplicationMessageReport_message_t_0.insert("ApplReqID_t_1596478110");
  elt.add_attribute("ApplRptTyp", "0"); // 0
  ApplicationMessageReport_message_t_0.insert("0");
  elt.add_attribute("Txt", "Text_t_1220719334"); // 0
  ApplicationMessageReport_message_t_0.insert("Text_t_1220719334");
  elt.add_attribute("EncTxtLen", "558404246"); // 0
  ApplicationMessageReport_message_t_0.insert("558404246");
  elt.add_attribute("EncTxt", "EncodedText_t_1166508990"); // 0
  ApplicationMessageReport_message_t_0.insert("EncodedText_t_1166508990");
  all_values.push_back(ApplicationMessageReport_message_t_0);
  all_compo_names.insert("ApplicationMessageReport_message_t");

  { // Hdr
    xml_element Hdr_7{"Hdr"};
    multiset<string> Hdr_7_set;
    Hdr_7.add_attribute("SeqNum", "1410238117"); // 1
    Hdr_7_set.insert("1410238117");
    Hdr_7.add_attribute("SID", "SenderCompID_t_828157162"); // 1
    Hdr_7_set.insert("SenderCompID_t_828157162");
    Hdr_7.add_attribute("TID", "TargetCompID_t_527937243"); // 1
    Hdr_7_set.insert("TargetCompID_t_527937243");
    Hdr_7.add_attribute("OBID", "OnBehalfOfCompID_t_1962144155"); // 1
    Hdr_7_set.insert("OnBehalfOfCompID_t_1962144155");
    Hdr_7.add_attribute("D2ID", "DeliverToCompID_t_449639250"); // 1
    Hdr_7_set.insert("DeliverToCompID_t_449639250");
    Hdr_7.add_attribute("SSub", "SenderSubID_t_1538636049"); // 1
    Hdr_7_set.insert("SenderSubID_t_1538636049");
    Hdr_7.add_attribute("SLoc", "SenderLocationID_t_1075440368"); // 1
    Hdr_7_set.insert("SenderLocationID_t_1075440368");
    Hdr_7.add_attribute("TSub", "TargetSubID_t_40240669"); // 1
    Hdr_7_set.insert("TargetSubID_t_40240669");
    Hdr_7.add_attribute("TLoc", "TargetLocationID_t_513085949"); // 1
    Hdr_7_set.insert("TargetLocationID_t_513085949");
    Hdr_7.add_attribute("OBSub", "OnBehalfOfSubID_t_594870369"); // 1
    Hdr_7_set.insert("OnBehalfOfSubID_t_594870369");
    Hdr_7.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1012480986"); // 1
    Hdr_7_set.insert("OnBehalfOfLocationID_t_1012480986");
    Hdr_7.add_attribute("D2Sub", "DeliverToSubID_t_1135049622"); // 1
    Hdr_7_set.insert("DeliverToSubID_t_1135049622");
    Hdr_7.add_attribute("D2Loc", "DeliverToLocationID_t_1679516696"); // 1
    Hdr_7_set.insert("DeliverToLocationID_t_1679516696");
    Hdr_7.add_attribute("PosDup", "Y"); // 1
    Hdr_7_set.insert("Y");
    Hdr_7.add_attribute("PosRsnd", "N"); // 1
    Hdr_7_set.insert("N");
    Hdr_7.add_attribute("Snt", "SendingTime_t_346367090"); // 1
    Hdr_7_set.insert("SendingTime_t_346367090");
    Hdr_7.add_attribute("OrigSnt", "OrigSendingTime_t_912159578"); // 1
    Hdr_7_set.insert("OrigSendingTime_t_912159578");
    Hdr_7.add_attribute("MsgEncd", "MessageEncoding_t_590112068"); // 1
    Hdr_7_set.insert("MessageEncoding_t_590112068");
    all_values.push_back(Hdr_7_set);
    all_compo_names.insert("Hdr_7_set");

    {
      xml_element Hop_7{"Hop"};
      multiset<string> Hop_7_set;
      Hop_7.add_attribute("ID", "HopCompID_t_867167088"); // 2
      Hop_7_set.insert("HopCompID_t_867167088");
      Hop_7.add_attribute("Ref", "109903735"); // 2
      Hop_7_set.insert("109903735");
      Hop_7.add_attribute("Snt", "HopSendingTime_t_322890177"); // 2
      Hop_7_set.insert("HopSendingTime_t_322890177");
      all_values.push_back(Hop_7_set);
      all_compo_names.insert("Hop_7_set");

      Hdr_7.add_element(Hop_7);
    }
    elt.add_element(Hdr_7);
  } // end Hdr
  { // ApplIDRptGrp
    xml_element ApplIDRptGrp_0{"ApplIDRptGrp"};
    multiset<string> ApplIDRptGrp_0_set;
    ApplIDRptGrp_0.add_attribute("RefApplID", "RefApplID_t_813675586"); // 1
    ApplIDRptGrp_0_set.insert("RefApplID_t_813675586");
    ApplIDRptGrp_0.add_attribute("ApplNewSeqNum", "707437302"); // 1
    ApplIDRptGrp_0_set.insert("707437302");
    ApplIDRptGrp_0.add_attribute("RefApplLastSeqNum", "1853754191"); // 1
    ApplIDRptGrp_0_set.insert("1853754191");
    all_values.push_back(ApplIDRptGrp_0_set);
    all_compo_names.insert("ApplIDRptGrp_0_set");

    elt.add_element(ApplIDRptGrp_0);
  } // end ApplIDRptGrp
  { // ApplIDRptGrp
    xml_element ApplIDRptGrp_1{"ApplIDRptGrp"};
    multiset<string> ApplIDRptGrp_1_set;
    ApplIDRptGrp_1.add_attribute("RefApplID", "RefApplID_t_1857581639"); // 1
    ApplIDRptGrp_1_set.insert("RefApplID_t_1857581639");
    ApplIDRptGrp_1.add_attribute("ApplNewSeqNum", "156431764"); // 1
    ApplIDRptGrp_1_set.insert("156431764");
    ApplIDRptGrp_1.add_attribute("RefApplLastSeqNum", "1055840232"); // 1
    ApplIDRptGrp_1_set.insert("1055840232");
    all_values.push_back(ApplIDRptGrp_1_set);
    all_compo_names.insert("ApplIDRptGrp_1_set");

    elt.add_element(ApplIDRptGrp_1);
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
