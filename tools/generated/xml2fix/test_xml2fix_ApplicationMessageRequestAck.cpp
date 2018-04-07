#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ApplicationMessageRequestAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ApplicationMessageRequestAck_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ApplMsgReqAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ApplicationMessageRequestAck_message_t_0;
  elt.add_attribute("ApplRespID", "ApplResponseID_t_472569535"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("ApplResponseID_t_472569535");
  elt.add_attribute("ApplReqID", "ApplReqID_t_67862191"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("ApplReqID_t_67862191");
  elt.add_attribute("ApplReqTyp", "2"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("2");
  elt.add_attribute("ApplRespTyp", "1"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("1");
  elt.add_attribute("ApplTotMsgCnt", "333801664"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("333801664");
  elt.add_attribute("Txt", "Text_t_1015117854"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("Text_t_1015117854");
  elt.add_attribute("EncTxtLen", "1209324267"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("1209324267");
  elt.add_attribute("EncTxt", "EncodedText_t_309839129"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("EncodedText_t_309839129");
  all_values.push_back(ApplicationMessageRequestAck_message_t_0);
  all_compo_names.insert("ApplicationMessageRequestAck_message_t");

  { // Hdr
    xml_element Hdr_9{"Hdr"};
    multiset<string> Hdr_9_set;
    Hdr_9.add_attribute("SeqNum", "971917599"); // 1
    Hdr_9_set.insert("971917599");
    Hdr_9.add_attribute("SID", "SenderCompID_t_1412935312"); // 1
    Hdr_9_set.insert("SenderCompID_t_1412935312");
    Hdr_9.add_attribute("TID", "TargetCompID_t_1216693918"); // 1
    Hdr_9_set.insert("TargetCompID_t_1216693918");
    Hdr_9.add_attribute("OBID", "OnBehalfOfCompID_t_1643553354"); // 1
    Hdr_9_set.insert("OnBehalfOfCompID_t_1643553354");
    Hdr_9.add_attribute("D2ID", "DeliverToCompID_t_1691411932"); // 1
    Hdr_9_set.insert("DeliverToCompID_t_1691411932");
    Hdr_9.add_attribute("SSub", "SenderSubID_t_169636854"); // 1
    Hdr_9_set.insert("SenderSubID_t_169636854");
    Hdr_9.add_attribute("SLoc", "SenderLocationID_t_1710698635"); // 1
    Hdr_9_set.insert("SenderLocationID_t_1710698635");
    Hdr_9.add_attribute("TSub", "TargetSubID_t_425207722"); // 1
    Hdr_9_set.insert("TargetSubID_t_425207722");
    Hdr_9.add_attribute("TLoc", "TargetLocationID_t_1278295740"); // 1
    Hdr_9_set.insert("TargetLocationID_t_1278295740");
    Hdr_9.add_attribute("OBSub", "OnBehalfOfSubID_t_1622992690"); // 1
    Hdr_9_set.insert("OnBehalfOfSubID_t_1622992690");
    Hdr_9.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1300442379"); // 1
    Hdr_9_set.insert("OnBehalfOfLocationID_t_1300442379");
    Hdr_9.add_attribute("D2Sub", "DeliverToSubID_t_1323143648"); // 1
    Hdr_9_set.insert("DeliverToSubID_t_1323143648");
    Hdr_9.add_attribute("D2Loc", "DeliverToLocationID_t_1420676190"); // 1
    Hdr_9_set.insert("DeliverToLocationID_t_1420676190");
    Hdr_9.add_attribute("PosDup", "N"); // 1
    Hdr_9_set.insert("N");
    Hdr_9.add_attribute("PosRsnd", "N"); // 1
    Hdr_9_set.insert("N");
    Hdr_9.add_attribute("Snt", "SendingTime_t_2116230120"); // 1
    Hdr_9_set.insert("SendingTime_t_2116230120");
    Hdr_9.add_attribute("OrigSnt", "OrigSendingTime_t_1412117524"); // 1
    Hdr_9_set.insert("OrigSendingTime_t_1412117524");
    Hdr_9.add_attribute("MsgEncd", "MessageEncoding_t_1685534335"); // 1
    Hdr_9_set.insert("MessageEncoding_t_1685534335");
    all_values.push_back(Hdr_9_set);
    all_compo_names.insert("Hdr_9_set");

    {
      xml_element Hop_9{"Hop"};
      multiset<string> Hop_9_set;
      Hop_9.add_attribute("ID", "HopCompID_t_1241984624"); // 2
      Hop_9_set.insert("HopCompID_t_1241984624");
      Hop_9.add_attribute("Ref", "468928924"); // 2
      Hop_9_set.insert("468928924");
      Hop_9.add_attribute("Snt", "HopSendingTime_t_1881477253"); // 2
      Hop_9_set.insert("HopSendingTime_t_1881477253");
      all_values.push_back(Hop_9_set);
      all_compo_names.insert("Hop_9_set");

      Hdr_9.add_element(Hop_9);
    }
    elt.add_element(Hdr_9);
  } // end Hdr
  { // ApplIDReqAckGrp
    xml_element ApplIDReqAckGrp_0{"ApplIDReqAckGrp"};
    multiset<string> ApplIDReqAckGrp_0_set;
    ApplIDReqAckGrp_0.add_attribute("RefApplID", "RefApplID_t_443264472"); // 1
    ApplIDReqAckGrp_0_set.insert("RefApplID_t_443264472");
    ApplIDReqAckGrp_0.add_attribute("RefID", "RefApplReqID_t_206563140"); // 1
    ApplIDReqAckGrp_0_set.insert("RefApplReqID_t_206563140");
    ApplIDReqAckGrp_0.add_attribute("ApplBegSeqNum", "1925445119"); // 1
    ApplIDReqAckGrp_0_set.insert("1925445119");
    ApplIDReqAckGrp_0.add_attribute("ApplEndSeq", "1658014347"); // 1
    ApplIDReqAckGrp_0_set.insert("1658014347");
    ApplIDReqAckGrp_0.add_attribute("RefApplLastSeqNum", "120632946"); // 1
    ApplIDReqAckGrp_0_set.insert("120632946");
    ApplIDReqAckGrp_0.add_attribute("ApplRespErr", "1"); // 1
    ApplIDReqAckGrp_0_set.insert("1");
    all_values.push_back(ApplIDReqAckGrp_0_set);
    all_compo_names.insert("ApplIDReqAckGrp_0_set");

    {
      xml_element Pty_60{"Pty"};
      multiset<string> Pty_60_set;
      Pty_60.add_attribute("ID", "NestedPartyID_t_525648553"); // 2
      Pty_60_set.insert("NestedPartyID_t_525648553");
      Pty_60.add_attribute("Src", "G"); // 2
      Pty_60_set.insert("G");
      Pty_60.add_attribute("R", "51"); // 2
      Pty_60_set.insert("51");
      all_values.push_back(Pty_60_set);
      all_compo_names.insert("Pty_60_set");

      {
        xml_element Sub_60{"Sub"};
        multiset<string> Sub_60_set;
        Sub_60.add_attribute("ID", "NestedPartySubID_t_1497566152"); // 3
        Sub_60_set.insert("NestedPartySubID_t_1497566152");
        Sub_60.add_attribute("Typ", "17"); // 3
        Sub_60_set.insert("17");
        all_values.push_back(Sub_60_set);
        all_compo_names.insert("Sub_60_set");

        Pty_60.add_element(Sub_60);
      }
      ApplIDReqAckGrp_0.add_element(Pty_60);
    }
    elt.add_element(ApplIDReqAckGrp_0);
  } // end ApplIDReqAckGrp
  { // ApplIDReqAckGrp
    xml_element ApplIDReqAckGrp_1{"ApplIDReqAckGrp"};
    multiset<string> ApplIDReqAckGrp_1_set;
    ApplIDReqAckGrp_1.add_attribute("RefApplID", "RefApplID_t_1638296183"); // 1
    ApplIDReqAckGrp_1_set.insert("RefApplID_t_1638296183");
    ApplIDReqAckGrp_1.add_attribute("RefID", "RefApplReqID_t_993635859"); // 1
    ApplIDReqAckGrp_1_set.insert("RefApplReqID_t_993635859");
    ApplIDReqAckGrp_1.add_attribute("ApplBegSeqNum", "139337162"); // 1
    ApplIDReqAckGrp_1_set.insert("139337162");
    ApplIDReqAckGrp_1.add_attribute("ApplEndSeq", "1807933037"); // 1
    ApplIDReqAckGrp_1_set.insert("1807933037");
    ApplIDReqAckGrp_1.add_attribute("RefApplLastSeqNum", "556850846"); // 1
    ApplIDReqAckGrp_1_set.insert("556850846");
    ApplIDReqAckGrp_1.add_attribute("ApplRespErr", "0"); // 1
    ApplIDReqAckGrp_1_set.insert("0");
    all_values.push_back(ApplIDReqAckGrp_1_set);
    all_compo_names.insert("ApplIDReqAckGrp_1_set");

    {
      xml_element Pty_61{"Pty"};
      multiset<string> Pty_61_set;
      Pty_61.add_attribute("ID", "NestedPartyID_t_938745130"); // 2
      Pty_61_set.insert("NestedPartyID_t_938745130");
      Pty_61.add_attribute("Src", "B"); // 2
      Pty_61_set.insert("B");
      Pty_61.add_attribute("R", "36"); // 2
      Pty_61_set.insert("36");
      all_values.push_back(Pty_61_set);
      all_compo_names.insert("Pty_61_set");

      {
        xml_element Sub_61{"Sub"};
        multiset<string> Sub_61_set;
        Sub_61.add_attribute("ID", "NestedPartySubID_t_114405130"); // 3
        Sub_61_set.insert("NestedPartySubID_t_114405130");
        Sub_61.add_attribute("Typ", "19"); // 3
        Sub_61_set.insert("19");
        all_values.push_back(Sub_61_set);
        all_compo_names.insert("Sub_61_set");

        Pty_61.add_element(Sub_61);
      }
      ApplIDReqAckGrp_1.add_element(Pty_61);
    }
    elt.add_element(ApplIDReqAckGrp_1);
  } // end ApplIDReqAckGrp
  { // Pty
    xml_element Pty_62{"Pty"};
    multiset<string> Pty_62_set;
    Pty_62.add_attribute("ID", "PartyID_t_1013456078"); // 1
    Pty_62_set.insert("PartyID_t_1013456078");
    Pty_62.add_attribute("Src", "9"); // 1
    Pty_62_set.insert("9");
    Pty_62.add_attribute("R", "59"); // 1
    Pty_62_set.insert("59");
    all_values.push_back(Pty_62_set);
    all_compo_names.insert("Pty_62_set");

    {
      xml_element Sub_62{"Sub"};
      multiset<string> Sub_62_set;
      Sub_62.add_attribute("ID", "PartySubID_t_551506766"); // 2
      Sub_62_set.insert("PartySubID_t_551506766");
      Sub_62.add_attribute("Typ", "2"); // 2
      Sub_62_set.insert("2");
      all_values.push_back(Sub_62_set);
      all_compo_names.insert("Sub_62_set");

      Pty_62.add_element(Sub_62);
    }
    elt.add_element(Pty_62);
  } // end Pty
  { // Pty
    xml_element Pty_63{"Pty"};
    multiset<string> Pty_63_set;
    Pty_63.add_attribute("ID", "PartyID_t_2133784620"); // 1
    Pty_63_set.insert("PartyID_t_2133784620");
    Pty_63.add_attribute("Src", "E"); // 1
    Pty_63_set.insert("E");
    Pty_63.add_attribute("R", "7"); // 1
    Pty_63_set.insert("7");
    all_values.push_back(Pty_63_set);
    all_compo_names.insert("Pty_63_set");

    {
      xml_element Sub_63{"Sub"};
      multiset<string> Sub_63_set;
      Sub_63.add_attribute("ID", "PartySubID_t_429565445"); // 2
      Sub_63_set.insert("PartySubID_t_429565445");
      Sub_63.add_attribute("Typ", "24"); // 2
      Sub_63_set.insert("24");
      all_values.push_back(Sub_63_set);
      all_compo_names.insert("Sub_63_set");

      Pty_63.add_element(Sub_63);
    }
    elt.add_element(Pty_63);
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
