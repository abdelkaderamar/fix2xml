#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ApplicationMessageRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ApplicationMessageRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ApplMsgReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ApplicationMessageRequest_message_t_0;
  elt.add_attribute("ApplReqID", "ApplReqID_t_1967308521"); // 0
  ApplicationMessageRequest_message_t_0.insert("ApplReqID_t_1967308521");
  elt.add_attribute("ApplReqTyp", "4"); // 0
  ApplicationMessageRequest_message_t_0.insert("4");
  elt.add_attribute("Txt", "Text_t_1545351830"); // 0
  ApplicationMessageRequest_message_t_0.insert("Text_t_1545351830");
  elt.add_attribute("EncTxtLen", "1604010913"); // 0
  ApplicationMessageRequest_message_t_0.insert("1604010913");
  elt.add_attribute("EncTxt", "EncodedText_t_888421086"); // 0
  ApplicationMessageRequest_message_t_0.insert("EncodedText_t_888421086");
  all_values.push_back(ApplicationMessageRequest_message_t_0);
  all_compo_names.insert("ApplicationMessageRequest_message_t");

  { // Hdr
    xml_element Hdr_8{"Hdr"};
    multiset<string> Hdr_8_set;
    Hdr_8.add_attribute("SeqNum", "648799122"); // 1
    Hdr_8_set.insert("648799122");
    Hdr_8.add_attribute("SID", "SenderCompID_t_1574521048"); // 1
    Hdr_8_set.insert("SenderCompID_t_1574521048");
    Hdr_8.add_attribute("TID", "TargetCompID_t_897784309"); // 1
    Hdr_8_set.insert("TargetCompID_t_897784309");
    Hdr_8.add_attribute("OBID", "OnBehalfOfCompID_t_1272017559"); // 1
    Hdr_8_set.insert("OnBehalfOfCompID_t_1272017559");
    Hdr_8.add_attribute("D2ID", "DeliverToCompID_t_1147411809"); // 1
    Hdr_8_set.insert("DeliverToCompID_t_1147411809");
    Hdr_8.add_attribute("SSub", "SenderSubID_t_505150604"); // 1
    Hdr_8_set.insert("SenderSubID_t_505150604");
    Hdr_8.add_attribute("SLoc", "SenderLocationID_t_933462703"); // 1
    Hdr_8_set.insert("SenderLocationID_t_933462703");
    Hdr_8.add_attribute("TSub", "TargetSubID_t_1250718797"); // 1
    Hdr_8_set.insert("TargetSubID_t_1250718797");
    Hdr_8.add_attribute("TLoc", "TargetLocationID_t_1934756644"); // 1
    Hdr_8_set.insert("TargetLocationID_t_1934756644");
    Hdr_8.add_attribute("OBSub", "OnBehalfOfSubID_t_269610701"); // 1
    Hdr_8_set.insert("OnBehalfOfSubID_t_269610701");
    Hdr_8.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1754475108"); // 1
    Hdr_8_set.insert("OnBehalfOfLocationID_t_1754475108");
    Hdr_8.add_attribute("D2Sub", "DeliverToSubID_t_1880568794"); // 1
    Hdr_8_set.insert("DeliverToSubID_t_1880568794");
    Hdr_8.add_attribute("D2Loc", "DeliverToLocationID_t_1289353787"); // 1
    Hdr_8_set.insert("DeliverToLocationID_t_1289353787");
    Hdr_8.add_attribute("PosDup", "N"); // 1
    Hdr_8_set.insert("N");
    Hdr_8.add_attribute("PosRsnd", "Y"); // 1
    Hdr_8_set.insert("Y");
    Hdr_8.add_attribute("Snt", "SendingTime_t_1205279550"); // 1
    Hdr_8_set.insert("SendingTime_t_1205279550");
    Hdr_8.add_attribute("OrigSnt", "OrigSendingTime_t_2089928600"); // 1
    Hdr_8_set.insert("OrigSendingTime_t_2089928600");
    Hdr_8.add_attribute("MsgEncd", "MessageEncoding_t_1920187126"); // 1
    Hdr_8_set.insert("MessageEncoding_t_1920187126");
    all_values.push_back(Hdr_8_set);
    all_compo_names.insert("Hdr_8_set");

    {
      xml_element Hop_8{"Hop"};
      multiset<string> Hop_8_set;
      Hop_8.add_attribute("ID", "HopCompID_t_1933472833"); // 2
      Hop_8_set.insert("HopCompID_t_1933472833");
      Hop_8.add_attribute("Ref", "1804421699"); // 2
      Hop_8_set.insert("1804421699");
      Hop_8.add_attribute("Snt", "HopSendingTime_t_683244160"); // 2
      Hop_8_set.insert("HopSendingTime_t_683244160");
      all_values.push_back(Hop_8_set);
      all_compo_names.insert("Hop_8_set");

      Hdr_8.add_element(Hop_8);
    }
    elt.add_element(Hdr_8);
  } // end Hdr
  { // ApplIDReqGrp
    xml_element ApplIDReqGrp_0{"ApplIDReqGrp"};
    multiset<string> ApplIDReqGrp_0_set;
    ApplIDReqGrp_0.add_attribute("RefApplID", "RefApplID_t_1780549698"); // 1
    ApplIDReqGrp_0_set.insert("RefApplID_t_1780549698");
    ApplIDReqGrp_0.add_attribute("RefID", "RefApplReqID_t_726466032"); // 1
    ApplIDReqGrp_0_set.insert("RefApplReqID_t_726466032");
    ApplIDReqGrp_0.add_attribute("ApplBegSeqNum", "1101498802"); // 1
    ApplIDReqGrp_0_set.insert("1101498802");
    ApplIDReqGrp_0.add_attribute("ApplEndSeq", "847262582"); // 1
    ApplIDReqGrp_0_set.insert("847262582");
    all_values.push_back(ApplIDReqGrp_0_set);
    all_compo_names.insert("ApplIDReqGrp_0_set");

    {
      xml_element Pty_50{"Pty"};
      multiset<string> Pty_50_set;
      Pty_50.add_attribute("ID", "NestedPartyID_t_546290906"); // 2
      Pty_50_set.insert("NestedPartyID_t_546290906");
      Pty_50.add_attribute("Src", "F"); // 2
      Pty_50_set.insert("F");
      Pty_50.add_attribute("R", "5"); // 2
      Pty_50_set.insert("5");
      all_values.push_back(Pty_50_set);
      all_compo_names.insert("Pty_50_set");

      {
        xml_element Sub_50{"Sub"};
        multiset<string> Sub_50_set;
        Sub_50.add_attribute("ID", "NestedPartySubID_t_2818171"); // 3
        Sub_50_set.insert("NestedPartySubID_t_2818171");
        Sub_50.add_attribute("Typ", "23"); // 3
        Sub_50_set.insert("23");
        all_values.push_back(Sub_50_set);
        all_compo_names.insert("Sub_50_set");

        Pty_50.add_element(Sub_50);
      }
      ApplIDReqGrp_0.add_element(Pty_50);
    }
    elt.add_element(ApplIDReqGrp_0);
  } // end ApplIDReqGrp
  { // Pty
    xml_element Pty_51{"Pty"};
    multiset<string> Pty_51_set;
    Pty_51.add_attribute("ID", "PartyID_t_1577339220"); // 1
    Pty_51_set.insert("PartyID_t_1577339220");
    Pty_51.add_attribute("Src", "E"); // 1
    Pty_51_set.insert("E");
    Pty_51.add_attribute("R", "19"); // 1
    Pty_51_set.insert("19");
    all_values.push_back(Pty_51_set);
    all_compo_names.insert("Pty_51_set");

    {
      xml_element Sub_51{"Sub"};
      multiset<string> Sub_51_set;
      Sub_51.add_attribute("ID", "PartySubID_t_577267381"); // 2
      Sub_51_set.insert("PartySubID_t_577267381");
      Sub_51.add_attribute("Typ", "6"); // 2
      Sub_51_set.insert("6");
      all_values.push_back(Sub_51_set);
      all_compo_names.insert("Sub_51_set");

      Pty_51.add_element(Sub_51);
    }
    elt.add_element(Pty_51);
  } // end Pty
  { // Pty
    xml_element Pty_52{"Pty"};
    multiset<string> Pty_52_set;
    Pty_52.add_attribute("ID", "PartyID_t_951926501"); // 1
    Pty_52_set.insert("PartyID_t_951926501");
    Pty_52.add_attribute("Src", "E"); // 1
    Pty_52_set.insert("E");
    Pty_52.add_attribute("R", "62"); // 1
    Pty_52_set.insert("62");
    all_values.push_back(Pty_52_set);
    all_compo_names.insert("Pty_52_set");

    {
      xml_element Sub_52{"Sub"};
      multiset<string> Sub_52_set;
      Sub_52.add_attribute("ID", "PartySubID_t_1221537202"); // 2
      Sub_52_set.insert("PartySubID_t_1221537202");
      Sub_52.add_attribute("Typ", "30"); // 2
      Sub_52_set.insert("30");
      all_values.push_back(Sub_52_set);
      all_compo_names.insert("Sub_52_set");

      Pty_52.add_element(Sub_52);
    }
    elt.add_element(Pty_52);
  } // end Pty
  { // Pty
    xml_element Pty_53{"Pty"};
    multiset<string> Pty_53_set;
    Pty_53.add_attribute("ID", "PartyID_t_1121369334"); // 1
    Pty_53_set.insert("PartyID_t_1121369334");
    Pty_53.add_attribute("Src", "E"); // 1
    Pty_53_set.insert("E");
    Pty_53.add_attribute("R", "67"); // 1
    Pty_53_set.insert("67");
    all_values.push_back(Pty_53_set);
    all_compo_names.insert("Pty_53_set");

    {
      xml_element Sub_53{"Sub"};
      multiset<string> Sub_53_set;
      Sub_53.add_attribute("ID", "PartySubID_t_142598137"); // 2
      Sub_53_set.insert("PartySubID_t_142598137");
      Sub_53.add_attribute("Typ", "22"); // 2
      Sub_53_set.insert("22");
      all_values.push_back(Sub_53_set);
      all_compo_names.insert("Sub_53_set");

      Pty_53.add_element(Sub_53);
    }
    elt.add_element(Pty_53);
  } // end Pty
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
