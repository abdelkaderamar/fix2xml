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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ApplMsgReqAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ApplicationMessageRequestAck_message_t_0;
  elt.add_attribute("ApplRespID", "ApplResponseID_t_1208544089"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("ApplResponseID_t_1208544089");
  elt.add_attribute("ApplReqID", "ApplReqID_t_2062785264"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("ApplReqID_t_2062785264");
  elt.add_attribute("ApplReqTyp", "6"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("6");
  elt.add_attribute("ApplRespTyp", "2"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("2");
  elt.add_attribute("ApplTotMsgCnt", "598545776"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("598545776");
  elt.add_attribute("Txt", "Text_t_1327706561"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("Text_t_1327706561");
  elt.add_attribute("EncTxtLen", "498548191"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("498548191");
  elt.add_attribute("EncTxt", "EncodedText_t_1325011808"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("EncodedText_t_1325011808");
  all_values.push_back(ApplicationMessageRequestAck_message_t_0);
  all_compo_names.insert("ApplicationMessageRequestAck_message_t");

  { // Hdr
    xml_element Hdr_9{"Hdr"};
    multiset<string> Hdr_9_set;
    Hdr_9.add_attribute("SeqNum", "281721716"); // 1
    Hdr_9_set.insert("281721716");
    Hdr_9.add_attribute("SID", "SenderCompID_t_1345810773"); // 1
    Hdr_9_set.insert("SenderCompID_t_1345810773");
    Hdr_9.add_attribute("TID", "TargetCompID_t_1871302714"); // 1
    Hdr_9_set.insert("TargetCompID_t_1871302714");
    Hdr_9.add_attribute("OBID", "OnBehalfOfCompID_t_1738860556"); // 1
    Hdr_9_set.insert("OnBehalfOfCompID_t_1738860556");
    Hdr_9.add_attribute("D2ID", "DeliverToCompID_t_1590941537"); // 1
    Hdr_9_set.insert("DeliverToCompID_t_1590941537");
    Hdr_9.add_attribute("SSub", "SenderSubID_t_1874120886"); // 1
    Hdr_9_set.insert("SenderSubID_t_1874120886");
    Hdr_9.add_attribute("SLoc", "SenderLocationID_t_1936936834"); // 1
    Hdr_9_set.insert("SenderLocationID_t_1936936834");
    Hdr_9.add_attribute("TSub", "TargetSubID_t_337387775"); // 1
    Hdr_9_set.insert("TargetSubID_t_337387775");
    Hdr_9.add_attribute("TLoc", "TargetLocationID_t_1303976458"); // 1
    Hdr_9_set.insert("TargetLocationID_t_1303976458");
    Hdr_9.add_attribute("OBSub", "OnBehalfOfSubID_t_885313773"); // 1
    Hdr_9_set.insert("OnBehalfOfSubID_t_885313773");
    Hdr_9.add_attribute("OBLoc", "OnBehalfOfLocationID_t_355851573"); // 1
    Hdr_9_set.insert("OnBehalfOfLocationID_t_355851573");
    Hdr_9.add_attribute("D2Sub", "DeliverToSubID_t_1881243839"); // 1
    Hdr_9_set.insert("DeliverToSubID_t_1881243839");
    Hdr_9.add_attribute("D2Loc", "DeliverToLocationID_t_338841317"); // 1
    Hdr_9_set.insert("DeliverToLocationID_t_338841317");
    Hdr_9.add_attribute("PosDup", "Y"); // 1
    Hdr_9_set.insert("Y");
    Hdr_9.add_attribute("PosRsnd", "N"); // 1
    Hdr_9_set.insert("N");
    Hdr_9.add_attribute("Snt", "SendingTime_t_1727125506"); // 1
    Hdr_9_set.insert("SendingTime_t_1727125506");
    Hdr_9.add_attribute("OrigSnt", "OrigSendingTime_t_381831629"); // 1
    Hdr_9_set.insert("OrigSendingTime_t_381831629");
    Hdr_9.add_attribute("MsgEncd", "MessageEncoding_t_849240361"); // 1
    Hdr_9_set.insert("MessageEncoding_t_849240361");
    all_values.push_back(Hdr_9_set);
    all_compo_names.insert("Hdr_9_set");

    {
      xml_element Hop_9{"Hop"};
      multiset<string> Hop_9_set;
      Hop_9.add_attribute("ID", "HopCompID_t_701011192"); // 2
      Hop_9_set.insert("HopCompID_t_701011192");
      Hop_9.add_attribute("Ref", "745238971"); // 2
      Hop_9_set.insert("745238971");
      Hop_9.add_attribute("Snt", "HopSendingTime_t_2115339498"); // 2
      Hop_9_set.insert("HopSendingTime_t_2115339498");
      all_values.push_back(Hop_9_set);
      all_compo_names.insert("Hop_9_set");

      Hdr_9.add_element(Hop_9);
    }
    elt.add_element(Hdr_9);
  } // end Hdr
  { // ApplIDReqAckGrp
    xml_element ApplIDReqAckGrp_0{"ApplIDReqAckGrp"};
    multiset<string> ApplIDReqAckGrp_0_set;
    ApplIDReqAckGrp_0.add_attribute("RefApplID", "RefApplID_t_166442215"); // 1
    ApplIDReqAckGrp_0_set.insert("RefApplID_t_166442215");
    ApplIDReqAckGrp_0.add_attribute("RefID", "RefApplReqID_t_1176399940"); // 1
    ApplIDReqAckGrp_0_set.insert("RefApplReqID_t_1176399940");
    ApplIDReqAckGrp_0.add_attribute("ApplBegSeqNum", "758910946"); // 1
    ApplIDReqAckGrp_0_set.insert("758910946");
    ApplIDReqAckGrp_0.add_attribute("ApplEndSeq", "1521118292"); // 1
    ApplIDReqAckGrp_0_set.insert("1521118292");
    ApplIDReqAckGrp_0.add_attribute("RefApplLastSeqNum", "2041882080"); // 1
    ApplIDReqAckGrp_0_set.insert("2041882080");
    ApplIDReqAckGrp_0.add_attribute("ApplRespErr", "0"); // 1
    ApplIDReqAckGrp_0_set.insert("0");
    all_values.push_back(ApplIDReqAckGrp_0_set);
    all_compo_names.insert("ApplIDReqAckGrp_0_set");

    {
      xml_element Pty_54{"Pty"};
      multiset<string> Pty_54_set;
      Pty_54.add_attribute("ID", "NestedPartyID_t_701341205"); // 2
      Pty_54_set.insert("NestedPartyID_t_701341205");
      Pty_54.add_attribute("Src", "I"); // 2
      Pty_54_set.insert("I");
      Pty_54.add_attribute("R", "57"); // 2
      Pty_54_set.insert("57");
      all_values.push_back(Pty_54_set);
      all_compo_names.insert("Pty_54_set");

      {
        xml_element Sub_54{"Sub"};
        multiset<string> Sub_54_set;
        Sub_54.add_attribute("ID", "NestedPartySubID_t_983062921"); // 3
        Sub_54_set.insert("NestedPartySubID_t_983062921");
        Sub_54.add_attribute("Typ", "11"); // 3
        Sub_54_set.insert("11");
        all_values.push_back(Sub_54_set);
        all_compo_names.insert("Sub_54_set");

        Pty_54.add_element(Sub_54);
      }
      ApplIDReqAckGrp_0.add_element(Pty_54);
    }
    elt.add_element(ApplIDReqAckGrp_0);
  } // end ApplIDReqAckGrp
  { // Pty
    xml_element Pty_55{"Pty"};
    multiset<string> Pty_55_set;
    Pty_55.add_attribute("ID", "PartyID_t_574439829"); // 1
    Pty_55_set.insert("PartyID_t_574439829");
    Pty_55.add_attribute("Src", "I"); // 1
    Pty_55_set.insert("I");
    Pty_55.add_attribute("R", "35"); // 1
    Pty_55_set.insert("35");
    all_values.push_back(Pty_55_set);
    all_compo_names.insert("Pty_55_set");

    {
      xml_element Sub_55{"Sub"};
      multiset<string> Sub_55_set;
      Sub_55.add_attribute("ID", "PartySubID_t_363893015"); // 2
      Sub_55_set.insert("PartySubID_t_363893015");
      Sub_55.add_attribute("Typ", "4"); // 2
      Sub_55_set.insert("4");
      all_values.push_back(Sub_55_set);
      all_compo_names.insert("Sub_55_set");

      Pty_55.add_element(Sub_55);
    }
    elt.add_element(Pty_55);
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
