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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ApplMsgReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ApplicationMessageRequest_message_t_0;
  elt.add_attribute("ApplReqID", "ApplReqID_t_930817325"); // 0
  ApplicationMessageRequest_message_t_0.insert("ApplReqID_t_930817325");
  elt.add_attribute("ApplReqTyp", "1"); // 0
  ApplicationMessageRequest_message_t_0.insert("1");
  elt.add_attribute("Txt", "Text_t_74865574"); // 0
  ApplicationMessageRequest_message_t_0.insert("Text_t_74865574");
  elt.add_attribute("EncTxtLen", "193571794"); // 0
  ApplicationMessageRequest_message_t_0.insert("193571794");
  elt.add_attribute("EncTxt", "EncodedText_t_1542993173"); // 0
  ApplicationMessageRequest_message_t_0.insert("EncodedText_t_1542993173");
  all_values.push_back(ApplicationMessageRequest_message_t_0);
  all_compo_names.insert("ApplicationMessageRequest_message_t");

  { // Hdr
    xml_element Hdr_8{"Hdr"};
    multiset<string> Hdr_8_set;
    Hdr_8.add_attribute("SeqNum", "602802818"); // 1
    Hdr_8_set.insert("602802818");
    Hdr_8.add_attribute("SID", "SenderCompID_t_8232302"); // 1
    Hdr_8_set.insert("SenderCompID_t_8232302");
    Hdr_8.add_attribute("TID", "TargetCompID_t_1992632423"); // 1
    Hdr_8_set.insert("TargetCompID_t_1992632423");
    Hdr_8.add_attribute("OBID", "OnBehalfOfCompID_t_2141438867"); // 1
    Hdr_8_set.insert("OnBehalfOfCompID_t_2141438867");
    Hdr_8.add_attribute("D2ID", "DeliverToCompID_t_1083672670"); // 1
    Hdr_8_set.insert("DeliverToCompID_t_1083672670");
    Hdr_8.add_attribute("SSub", "SenderSubID_t_2032873092"); // 1
    Hdr_8_set.insert("SenderSubID_t_2032873092");
    Hdr_8.add_attribute("SLoc", "SenderLocationID_t_507041168"); // 1
    Hdr_8_set.insert("SenderLocationID_t_507041168");
    Hdr_8.add_attribute("TSub", "TargetSubID_t_1678543039"); // 1
    Hdr_8_set.insert("TargetSubID_t_1678543039");
    Hdr_8.add_attribute("TLoc", "TargetLocationID_t_897870430"); // 1
    Hdr_8_set.insert("TargetLocationID_t_897870430");
    Hdr_8.add_attribute("OBSub", "OnBehalfOfSubID_t_1642090790"); // 1
    Hdr_8_set.insert("OnBehalfOfSubID_t_1642090790");
    Hdr_8.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1210576088"); // 1
    Hdr_8_set.insert("OnBehalfOfLocationID_t_1210576088");
    Hdr_8.add_attribute("D2Sub", "DeliverToSubID_t_577684222"); // 1
    Hdr_8_set.insert("DeliverToSubID_t_577684222");
    Hdr_8.add_attribute("D2Loc", "DeliverToLocationID_t_327412080"); // 1
    Hdr_8_set.insert("DeliverToLocationID_t_327412080");
    Hdr_8.add_attribute("PosDup", "N"); // 1
    Hdr_8_set.insert("N");
    Hdr_8.add_attribute("PosRsnd", "N"); // 1
    Hdr_8_set.insert("N");
    Hdr_8.add_attribute("Snt", "SendingTime_t_917524148"); // 1
    Hdr_8_set.insert("SendingTime_t_917524148");
    Hdr_8.add_attribute("OrigSnt", "OrigSendingTime_t_276626618"); // 1
    Hdr_8_set.insert("OrigSendingTime_t_276626618");
    Hdr_8.add_attribute("MsgEncd", "MessageEncoding_t_1599747535"); // 1
    Hdr_8_set.insert("MessageEncoding_t_1599747535");
    all_values.push_back(Hdr_8_set);
    all_compo_names.insert("Hdr_8_set");

    {
      xml_element Hop_8{"Hop"};
      multiset<string> Hop_8_set;
      Hop_8.add_attribute("ID", "HopCompID_t_1240414326"); // 2
      Hop_8_set.insert("HopCompID_t_1240414326");
      Hop_8.add_attribute("Ref", "1588983918"); // 2
      Hop_8_set.insert("1588983918");
      Hop_8.add_attribute("Snt", "HopSendingTime_t_265939473"); // 2
      Hop_8_set.insert("HopSendingTime_t_265939473");
      all_values.push_back(Hop_8_set);
      all_compo_names.insert("Hop_8_set");

      Hdr_8.add_element(Hop_8);
    }
    elt.add_element(Hdr_8);
  } // end Hdr
  { // ApplIDReqGrp
    xml_element ApplIDReqGrp_0{"ApplIDReqGrp"};
    multiset<string> ApplIDReqGrp_0_set;
    ApplIDReqGrp_0.add_attribute("RefApplID", "RefApplID_t_1295254461"); // 1
    ApplIDReqGrp_0_set.insert("RefApplID_t_1295254461");
    ApplIDReqGrp_0.add_attribute("RefID", "RefApplReqID_t_2123521112"); // 1
    ApplIDReqGrp_0_set.insert("RefApplReqID_t_2123521112");
    ApplIDReqGrp_0.add_attribute("ApplBegSeqNum", "2104283392"); // 1
    ApplIDReqGrp_0_set.insert("2104283392");
    ApplIDReqGrp_0.add_attribute("ApplEndSeq", "203611045"); // 1
    ApplIDReqGrp_0_set.insert("203611045");
    all_values.push_back(ApplIDReqGrp_0_set);
    all_compo_names.insert("ApplIDReqGrp_0_set");

    {
      xml_element Pty_56{"Pty"};
      multiset<string> Pty_56_set;
      Pty_56.add_attribute("ID", "NestedPartyID_t_906854789"); // 2
      Pty_56_set.insert("NestedPartyID_t_906854789");
      Pty_56.add_attribute("Src", "A"); // 2
      Pty_56_set.insert("A");
      Pty_56.add_attribute("R", "74"); // 2
      Pty_56_set.insert("74");
      all_values.push_back(Pty_56_set);
      all_compo_names.insert("Pty_56_set");

      {
        xml_element Sub_56{"Sub"};
        multiset<string> Sub_56_set;
        Sub_56.add_attribute("ID", "NestedPartySubID_t_1100426584"); // 3
        Sub_56_set.insert("NestedPartySubID_t_1100426584");
        Sub_56.add_attribute("Typ", "23"); // 3
        Sub_56_set.insert("23");
        all_values.push_back(Sub_56_set);
        all_compo_names.insert("Sub_56_set");

        Pty_56.add_element(Sub_56);
      }
      ApplIDReqGrp_0.add_element(Pty_56);
    }
    elt.add_element(ApplIDReqGrp_0);
  } // end ApplIDReqGrp
  { // Pty
    xml_element Pty_57{"Pty"};
    multiset<string> Pty_57_set;
    Pty_57.add_attribute("ID", "PartyID_t_1108658886"); // 1
    Pty_57_set.insert("PartyID_t_1108658886");
    Pty_57.add_attribute("Src", "C"); // 1
    Pty_57_set.insert("C");
    Pty_57.add_attribute("R", "26"); // 1
    Pty_57_set.insert("26");
    all_values.push_back(Pty_57_set);
    all_compo_names.insert("Pty_57_set");

    {
      xml_element Sub_57{"Sub"};
      multiset<string> Sub_57_set;
      Sub_57.add_attribute("ID", "PartySubID_t_44847908"); // 2
      Sub_57_set.insert("PartySubID_t_44847908");
      Sub_57.add_attribute("Typ", "1"); // 2
      Sub_57_set.insert("1");
      all_values.push_back(Sub_57_set);
      all_compo_names.insert("Sub_57_set");

      Pty_57.add_element(Sub_57);
    }
    elt.add_element(Pty_57);
  } // end Pty
  { // Pty
    xml_element Pty_58{"Pty"};
    multiset<string> Pty_58_set;
    Pty_58.add_attribute("ID", "PartyID_t_1382275825"); // 1
    Pty_58_set.insert("PartyID_t_1382275825");
    Pty_58.add_attribute("Src", "A"); // 1
    Pty_58_set.insert("A");
    Pty_58.add_attribute("R", "80"); // 1
    Pty_58_set.insert("80");
    all_values.push_back(Pty_58_set);
    all_compo_names.insert("Pty_58_set");

    {
      xml_element Sub_58{"Sub"};
      multiset<string> Sub_58_set;
      Sub_58.add_attribute("ID", "PartySubID_t_876882967"); // 2
      Sub_58_set.insert("PartySubID_t_876882967");
      Sub_58.add_attribute("Typ", "31"); // 2
      Sub_58_set.insert("31");
      all_values.push_back(Sub_58_set);
      all_compo_names.insert("Sub_58_set");

      Pty_58.add_element(Sub_58);
    }
    elt.add_element(Pty_58);
  } // end Pty
  { // Pty
    xml_element Pty_59{"Pty"};
    multiset<string> Pty_59_set;
    Pty_59.add_attribute("ID", "PartyID_t_1273238152"); // 1
    Pty_59_set.insert("PartyID_t_1273238152");
    Pty_59.add_attribute("Src", "9"); // 1
    Pty_59_set.insert("9");
    Pty_59.add_attribute("R", "67"); // 1
    Pty_59_set.insert("67");
    all_values.push_back(Pty_59_set);
    all_compo_names.insert("Pty_59_set");

    {
      xml_element Sub_59{"Sub"};
      multiset<string> Sub_59_set;
      Sub_59.add_attribute("ID", "PartySubID_t_615598304"); // 2
      Sub_59_set.insert("PartySubID_t_615598304");
      Sub_59.add_attribute("Typ", "21"); // 2
      Sub_59_set.insert("21");
      all_values.push_back(Sub_59_set);
      all_compo_names.insert("Sub_59_set");

      Pty_59.add_element(Sub_59);
    }
    elt.add_element(Pty_59);
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
