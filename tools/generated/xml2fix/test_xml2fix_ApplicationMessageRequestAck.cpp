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
  elt.add_attribute("ApplRespID", "ApplResponseID_t_70487120"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("ApplResponseID_t_70487120");
  elt.add_attribute("ApplReqID", "ApplReqID_t_978097756"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("ApplReqID_t_978097756");
  elt.add_attribute("ApplReqTyp", "3"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("3");
  elt.add_attribute("ApplRespTyp", "1"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("1");
  elt.add_attribute("ApplTotMsgCnt", "464753335"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("464753335");
  elt.add_attribute("Txt", "Text_t_187955347"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("Text_t_187955347");
  elt.add_attribute("EncTxtLen", "1452147566"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("1452147566");
  elt.add_attribute("EncTxt", "EncodedText_t_622351648"); // 0
  ApplicationMessageRequestAck_message_t_0.insert("EncodedText_t_622351648");
  all_values.push_back(ApplicationMessageRequestAck_message_t_0);
  all_compo_names.insert("ApplicationMessageRequestAck_message_t");

  { // Hdr
    xml_element Hdr_9{"Hdr"};
    multiset<string> Hdr_9_set;
    Hdr_9.add_attribute("SeqNum", "1358808093"); // 1
    Hdr_9_set.insert("1358808093");
    Hdr_9.add_attribute("SID", "SenderCompID_t_325608239"); // 1
    Hdr_9_set.insert("SenderCompID_t_325608239");
    Hdr_9.add_attribute("TID", "TargetCompID_t_632663946"); // 1
    Hdr_9_set.insert("TargetCompID_t_632663946");
    Hdr_9.add_attribute("OBID", "OnBehalfOfCompID_t_1623098831"); // 1
    Hdr_9_set.insert("OnBehalfOfCompID_t_1623098831");
    Hdr_9.add_attribute("D2ID", "DeliverToCompID_t_1959549977"); // 1
    Hdr_9_set.insert("DeliverToCompID_t_1959549977");
    Hdr_9.add_attribute("SSub", "SenderSubID_t_799490478"); // 1
    Hdr_9_set.insert("SenderSubID_t_799490478");
    Hdr_9.add_attribute("SLoc", "SenderLocationID_t_1208386364"); // 1
    Hdr_9_set.insert("SenderLocationID_t_1208386364");
    Hdr_9.add_attribute("TSub", "TargetSubID_t_1428972083"); // 1
    Hdr_9_set.insert("TargetSubID_t_1428972083");
    Hdr_9.add_attribute("TLoc", "TargetLocationID_t_1206234537"); // 1
    Hdr_9_set.insert("TargetLocationID_t_1206234537");
    Hdr_9.add_attribute("OBSub", "OnBehalfOfSubID_t_2097296051"); // 1
    Hdr_9_set.insert("OnBehalfOfSubID_t_2097296051");
    Hdr_9.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1613975438"); // 1
    Hdr_9_set.insert("OnBehalfOfLocationID_t_1613975438");
    Hdr_9.add_attribute("D2Sub", "DeliverToSubID_t_1567431113"); // 1
    Hdr_9_set.insert("DeliverToSubID_t_1567431113");
    Hdr_9.add_attribute("D2Loc", "DeliverToLocationID_t_1502403414"); // 1
    Hdr_9_set.insert("DeliverToLocationID_t_1502403414");
    Hdr_9.add_attribute("PosDup", "N"); // 1
    Hdr_9_set.insert("N");
    Hdr_9.add_attribute("PosRsnd", "Y"); // 1
    Hdr_9_set.insert("Y");
    Hdr_9.add_attribute("Snt", "SendingTime_t_1328820379"); // 1
    Hdr_9_set.insert("SendingTime_t_1328820379");
    Hdr_9.add_attribute("OrigSnt", "OrigSendingTime_t_1369897751"); // 1
    Hdr_9_set.insert("OrigSendingTime_t_1369897751");
    Hdr_9.add_attribute("MsgEncd", "MessageEncoding_t_668039963"); // 1
    Hdr_9_set.insert("MessageEncoding_t_668039963");
    all_values.push_back(Hdr_9_set);
    all_compo_names.insert("Hdr_9_set");

    {
      xml_element Hop_9{"Hop"};
      multiset<string> Hop_9_set;
      Hop_9.add_attribute("ID", "HopCompID_t_1074516534"); // 2
      Hop_9_set.insert("HopCompID_t_1074516534");
      Hop_9.add_attribute("Ref", "222540133"); // 2
      Hop_9_set.insert("222540133");
      Hop_9.add_attribute("Snt", "HopSendingTime_t_1185194771"); // 2
      Hop_9_set.insert("HopSendingTime_t_1185194771");
      all_values.push_back(Hop_9_set);
      all_compo_names.insert("Hop_9_set");

      Hdr_9.add_element(Hop_9);
    }
    elt.add_element(Hdr_9);
  } // end Hdr
  { // ApplIDReqAckGrp
    xml_element ApplIDReqAckGrp_0{"ApplIDReqAckGrp"};
    multiset<string> ApplIDReqAckGrp_0_set;
    ApplIDReqAckGrp_0.add_attribute("RefApplID", "RefApplID_t_20170003"); // 1
    ApplIDReqAckGrp_0_set.insert("RefApplID_t_20170003");
    ApplIDReqAckGrp_0.add_attribute("RefID", "RefApplReqID_t_1255681892"); // 1
    ApplIDReqAckGrp_0_set.insert("RefApplReqID_t_1255681892");
    ApplIDReqAckGrp_0.add_attribute("ApplBegSeqNum", "1246331714"); // 1
    ApplIDReqAckGrp_0_set.insert("1246331714");
    ApplIDReqAckGrp_0.add_attribute("ApplEndSeq", "1637910691"); // 1
    ApplIDReqAckGrp_0_set.insert("1637910691");
    ApplIDReqAckGrp_0.add_attribute("RefApplLastSeqNum", "936401152"); // 1
    ApplIDReqAckGrp_0_set.insert("936401152");
    ApplIDReqAckGrp_0.add_attribute("ApplRespErr", "0"); // 1
    ApplIDReqAckGrp_0_set.insert("0");
    all_values.push_back(ApplIDReqAckGrp_0_set);
    all_compo_names.insert("ApplIDReqAckGrp_0_set");

    {
      xml_element Pty_45{"Pty"};
      multiset<string> Pty_45_set;
      Pty_45.add_attribute("ID", "NestedPartyID_t_1825866038"); // 2
      Pty_45_set.insert("NestedPartyID_t_1825866038");
      Pty_45.add_attribute("Src", "H"); // 2
      Pty_45_set.insert("H");
      Pty_45.add_attribute("R", "68"); // 2
      Pty_45_set.insert("68");
      all_values.push_back(Pty_45_set);
      all_compo_names.insert("Pty_45_set");

      {
        xml_element Sub_45{"Sub"};
        multiset<string> Sub_45_set;
        Sub_45.add_attribute("ID", "NestedPartySubID_t_1037190483"); // 3
        Sub_45_set.insert("NestedPartySubID_t_1037190483");
        Sub_45.add_attribute("Typ", "24"); // 3
        Sub_45_set.insert("24");
        all_values.push_back(Sub_45_set);
        all_compo_names.insert("Sub_45_set");

        Pty_45.add_element(Sub_45);
      }
      ApplIDReqAckGrp_0.add_element(Pty_45);
    }
    elt.add_element(ApplIDReqAckGrp_0);
  } // end ApplIDReqAckGrp
  { // ApplIDReqAckGrp
    xml_element ApplIDReqAckGrp_1{"ApplIDReqAckGrp"};
    multiset<string> ApplIDReqAckGrp_1_set;
    ApplIDReqAckGrp_1.add_attribute("RefApplID", "RefApplID_t_818616996"); // 1
    ApplIDReqAckGrp_1_set.insert("RefApplID_t_818616996");
    ApplIDReqAckGrp_1.add_attribute("RefID", "RefApplReqID_t_512805666"); // 1
    ApplIDReqAckGrp_1_set.insert("RefApplReqID_t_512805666");
    ApplIDReqAckGrp_1.add_attribute("ApplBegSeqNum", "378739639"); // 1
    ApplIDReqAckGrp_1_set.insert("378739639");
    ApplIDReqAckGrp_1.add_attribute("ApplEndSeq", "1618107475"); // 1
    ApplIDReqAckGrp_1_set.insert("1618107475");
    ApplIDReqAckGrp_1.add_attribute("RefApplLastSeqNum", "1721192031"); // 1
    ApplIDReqAckGrp_1_set.insert("1721192031");
    ApplIDReqAckGrp_1.add_attribute("ApplRespErr", "1"); // 1
    ApplIDReqAckGrp_1_set.insert("1");
    all_values.push_back(ApplIDReqAckGrp_1_set);
    all_compo_names.insert("ApplIDReqAckGrp_1_set");

    {
      xml_element Pty_46{"Pty"};
      multiset<string> Pty_46_set;
      Pty_46.add_attribute("ID", "NestedPartyID_t_676858364"); // 2
      Pty_46_set.insert("NestedPartyID_t_676858364");
      Pty_46.add_attribute("Src", "D"); // 2
      Pty_46_set.insert("D");
      Pty_46.add_attribute("R", "60"); // 2
      Pty_46_set.insert("60");
      all_values.push_back(Pty_46_set);
      all_compo_names.insert("Pty_46_set");

      {
        xml_element Sub_46{"Sub"};
        multiset<string> Sub_46_set;
        Sub_46.add_attribute("ID", "NestedPartySubID_t_96805829"); // 3
        Sub_46_set.insert("NestedPartySubID_t_96805829");
        Sub_46.add_attribute("Typ", "14"); // 3
        Sub_46_set.insert("14");
        all_values.push_back(Sub_46_set);
        all_compo_names.insert("Sub_46_set");

        Pty_46.add_element(Sub_46);
      }
      ApplIDReqAckGrp_1.add_element(Pty_46);
    }
    elt.add_element(ApplIDReqAckGrp_1);
  } // end ApplIDReqAckGrp
  { // Pty
    xml_element Pty_47{"Pty"};
    multiset<string> Pty_47_set;
    Pty_47.add_attribute("ID", "PartyID_t_1658698840"); // 1
    Pty_47_set.insert("PartyID_t_1658698840");
    Pty_47.add_attribute("Src", "5"); // 1
    Pty_47_set.insert("5");
    Pty_47.add_attribute("R", "64"); // 1
    Pty_47_set.insert("64");
    all_values.push_back(Pty_47_set);
    all_compo_names.insert("Pty_47_set");

    {
      xml_element Sub_47{"Sub"};
      multiset<string> Sub_47_set;
      Sub_47.add_attribute("ID", "PartySubID_t_179255155"); // 2
      Sub_47_set.insert("PartySubID_t_179255155");
      Sub_47.add_attribute("Typ", "21"); // 2
      Sub_47_set.insert("21");
      all_values.push_back(Sub_47_set);
      all_compo_names.insert("Sub_47_set");

      Pty_47.add_element(Sub_47);
    }
    elt.add_element(Pty_47);
  } // end Pty
  { // Pty
    xml_element Pty_48{"Pty"};
    multiset<string> Pty_48_set;
    Pty_48.add_attribute("ID", "PartyID_t_868567984"); // 1
    Pty_48_set.insert("PartyID_t_868567984");
    Pty_48.add_attribute("Src", "E"); // 1
    Pty_48_set.insert("E");
    Pty_48.add_attribute("R", "82"); // 1
    Pty_48_set.insert("82");
    all_values.push_back(Pty_48_set);
    all_compo_names.insert("Pty_48_set");

    {
      xml_element Sub_48{"Sub"};
      multiset<string> Sub_48_set;
      Sub_48.add_attribute("ID", "PartySubID_t_888737987"); // 2
      Sub_48_set.insert("PartySubID_t_888737987");
      Sub_48.add_attribute("Typ", "29"); // 2
      Sub_48_set.insert("29");
      all_values.push_back(Sub_48_set);
      all_compo_names.insert("Sub_48_set");

      Pty_48.add_element(Sub_48);
    }
    elt.add_element(Pty_48);
  } // end Pty
  { // Pty
    xml_element Pty_49{"Pty"};
    multiset<string> Pty_49_set;
    Pty_49.add_attribute("ID", "PartyID_t_648859490"); // 1
    Pty_49_set.insert("PartyID_t_648859490");
    Pty_49.add_attribute("Src", "H"); // 1
    Pty_49_set.insert("H");
    Pty_49.add_attribute("R", "61"); // 1
    Pty_49_set.insert("61");
    all_values.push_back(Pty_49_set);
    all_compo_names.insert("Pty_49_set");

    {
      xml_element Sub_49{"Sub"};
      multiset<string> Sub_49_set;
      Sub_49.add_attribute("ID", "PartySubID_t_212460892"); // 2
      Sub_49_set.insert("PartySubID_t_212460892");
      Sub_49.add_attribute("Typ", "16"); // 2
      Sub_49_set.insert("16");
      all_values.push_back(Sub_49_set);
      all_compo_names.insert("Sub_49_set");

      Pty_49.add_element(Sub_49);
    }
    elt.add_element(Pty_49);
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
