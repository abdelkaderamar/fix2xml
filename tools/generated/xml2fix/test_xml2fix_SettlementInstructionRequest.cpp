#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SettlementInstructionRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SettlementInstructionRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SettlInstrctnReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SettlementInstructionRequest_message_t_0;
  elt.add_attribute("SettlInstReqID", "SettlInstReqID_t_637117106"); // 0
  SettlementInstructionRequest_message_t_0.insert("SettlInstReqID_t_637117106");
  elt.add_attribute("TxnTm", "TransactTime_t_547135934"); // 0
  SettlementInstructionRequest_message_t_0.insert("TransactTime_t_547135934");
  elt.add_attribute("Acct", "AllocAccount_t_1377227723"); // 0
  SettlementInstructionRequest_message_t_0.insert("AllocAccount_t_1377227723");
  elt.add_attribute("ActIDSrc", "99"); // 0
  SettlementInstructionRequest_message_t_0.insert("99");
  elt.add_attribute("Side", "8"); // 0
  SettlementInstructionRequest_message_t_0.insert("8");
  elt.add_attribute("Prod", "12"); // 0
  SettlementInstructionRequest_message_t_0.insert("12");
  elt.add_attribute("SecTyp", "CD"); // 0
  SettlementInstructionRequest_message_t_0.insert("CD");
  elt.add_attribute("CFI", "CFICode_t_1134159635"); // 0
  SettlementInstructionRequest_message_t_0.insert("CFICode_t_1134159635");
  elt.add_attribute("SettlCcy", "CHF"); // 0
  SettlementInstructionRequest_message_t_0.insert("CHF");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_1918513042"); // 0
  SettlementInstructionRequest_message_t_0.insert("EffectiveTime_t_1918513042");
  elt.add_attribute("ExpireTm", "ExpireTime_t_627711723"); // 0
  SettlementInstructionRequest_message_t_0.insert("ExpireTime_t_627711723");
  elt.add_attribute("LastUpdateTm", "LastUpdateTime_t_282082457"); // 0
  SettlementInstructionRequest_message_t_0.insert("LastUpdateTime_t_282082457");
  elt.add_attribute("StandInstDbTyp", "2"); // 0
  SettlementInstructionRequest_message_t_0.insert("2");
  elt.add_attribute("StandInstDbName", "StandInstDbName_t_475999340"); // 0
  SettlementInstructionRequest_message_t_0.insert("StandInstDbName_t_475999340");
  elt.add_attribute("StandInstDbID", "StandInstDbID_t_1321128568"); // 0
  SettlementInstructionRequest_message_t_0.insert("StandInstDbID_t_1321128568");
  all_values.push_back(SettlementInstructionRequest_message_t_0);
  all_compo_names.insert("SettlementInstructionRequest_message_t");

  { // Hdr
    xml_element Hdr_90{"Hdr"};
    multiset<string> Hdr_90_set;
    Hdr_90.add_attribute("SeqNum", "1568657212"); // 1
    Hdr_90_set.insert("1568657212");
    Hdr_90.add_attribute("SID", "SenderCompID_t_258041015"); // 1
    Hdr_90_set.insert("SenderCompID_t_258041015");
    Hdr_90.add_attribute("TID", "TargetCompID_t_215722461"); // 1
    Hdr_90_set.insert("TargetCompID_t_215722461");
    Hdr_90.add_attribute("OBID", "OnBehalfOfCompID_t_2053416020"); // 1
    Hdr_90_set.insert("OnBehalfOfCompID_t_2053416020");
    Hdr_90.add_attribute("D2ID", "DeliverToCompID_t_1655029641"); // 1
    Hdr_90_set.insert("DeliverToCompID_t_1655029641");
    Hdr_90.add_attribute("SSub", "SenderSubID_t_1354887685"); // 1
    Hdr_90_set.insert("SenderSubID_t_1354887685");
    Hdr_90.add_attribute("SLoc", "SenderLocationID_t_2085759316"); // 1
    Hdr_90_set.insert("SenderLocationID_t_2085759316");
    Hdr_90.add_attribute("TSub", "TargetSubID_t_391184636"); // 1
    Hdr_90_set.insert("TargetSubID_t_391184636");
    Hdr_90.add_attribute("TLoc", "TargetLocationID_t_1990473317"); // 1
    Hdr_90_set.insert("TargetLocationID_t_1990473317");
    Hdr_90.add_attribute("OBSub", "OnBehalfOfSubID_t_485194791"); // 1
    Hdr_90_set.insert("OnBehalfOfSubID_t_485194791");
    Hdr_90.add_attribute("OBLoc", "OnBehalfOfLocationID_t_609534079"); // 1
    Hdr_90_set.insert("OnBehalfOfLocationID_t_609534079");
    Hdr_90.add_attribute("D2Sub", "DeliverToSubID_t_1432340056"); // 1
    Hdr_90_set.insert("DeliverToSubID_t_1432340056");
    Hdr_90.add_attribute("D2Loc", "DeliverToLocationID_t_760118996"); // 1
    Hdr_90_set.insert("DeliverToLocationID_t_760118996");
    Hdr_90.add_attribute("PosDup", "Y"); // 1
    Hdr_90_set.insert("Y");
    Hdr_90.add_attribute("PosRsnd", "Y"); // 1
    Hdr_90_set.insert("Y");
    Hdr_90.add_attribute("Snt", "SendingTime_t_1397236103"); // 1
    Hdr_90_set.insert("SendingTime_t_1397236103");
    Hdr_90.add_attribute("OrigSnt", "OrigSendingTime_t_1943196025"); // 1
    Hdr_90_set.insert("OrigSendingTime_t_1943196025");
    Hdr_90.add_attribute("MsgEncd", "MessageEncoding_t_1769803688"); // 1
    Hdr_90_set.insert("MessageEncoding_t_1769803688");
    all_values.push_back(Hdr_90_set);
    all_compo_names.insert("Hdr_90_set");

    {
      xml_element Hop_90{"Hop"};
      multiset<string> Hop_90_set;
      Hop_90.add_attribute("ID", "HopCompID_t_1991942596"); // 2
      Hop_90_set.insert("HopCompID_t_1991942596");
      Hop_90.add_attribute("Ref", "697064656"); // 2
      Hop_90_set.insert("697064656");
      Hop_90.add_attribute("Snt", "HopSendingTime_t_1846960096"); // 2
      Hop_90_set.insert("HopSendingTime_t_1846960096");
      all_values.push_back(Hop_90_set);
      all_compo_names.insert("Hop_90_set");

      Hdr_90.add_element(Hop_90);
    }
    elt.add_element(Hdr_90);
  } // end Hdr
  { // Pty
    xml_element Pty_419{"Pty"};
    multiset<string> Pty_419_set;
    Pty_419.add_attribute("ID", "PartyID_t_1831224291"); // 1
    Pty_419_set.insert("PartyID_t_1831224291");
    Pty_419.add_attribute("Src", "4"); // 1
    Pty_419_set.insert("4");
    Pty_419.add_attribute("R", "3"); // 1
    Pty_419_set.insert("3");
    all_values.push_back(Pty_419_set);
    all_compo_names.insert("Pty_419_set");

    {
      xml_element Sub_419{"Sub"};
      multiset<string> Sub_419_set;
      Sub_419.add_attribute("ID", "PartySubID_t_1602253686"); // 2
      Sub_419_set.insert("PartySubID_t_1602253686");
      Sub_419.add_attribute("Typ", "6"); // 2
      Sub_419_set.insert("6");
      all_values.push_back(Sub_419_set);
      all_compo_names.insert("Sub_419_set");

      Pty_419.add_element(Sub_419);
    }
    elt.add_element(Pty_419);
  } // end Pty
  { // Pty
    xml_element Pty_420{"Pty"};
    multiset<string> Pty_420_set;
    Pty_420.add_attribute("ID", "PartyID_t_576681482"); // 1
    Pty_420_set.insert("PartyID_t_576681482");
    Pty_420.add_attribute("Src", "D"); // 1
    Pty_420_set.insert("D");
    Pty_420.add_attribute("R", "51"); // 1
    Pty_420_set.insert("51");
    all_values.push_back(Pty_420_set);
    all_compo_names.insert("Pty_420_set");

    {
      xml_element Sub_420{"Sub"};
      multiset<string> Sub_420_set;
      Sub_420.add_attribute("ID", "PartySubID_t_1897810050"); // 2
      Sub_420_set.insert("PartySubID_t_1897810050");
      Sub_420.add_attribute("Typ", "31"); // 2
      Sub_420_set.insert("31");
      all_values.push_back(Sub_420_set);
      all_compo_names.insert("Sub_420_set");

      Pty_420.add_element(Sub_420);
    }
    elt.add_element(Pty_420);
  } // end Pty
  { // Pty
    xml_element Pty_421{"Pty"};
    multiset<string> Pty_421_set;
    Pty_421.add_attribute("ID", "PartyID_t_1296797495"); // 1
    Pty_421_set.insert("PartyID_t_1296797495");
    Pty_421.add_attribute("Src", "G"); // 1
    Pty_421_set.insert("G");
    Pty_421.add_attribute("R", "42"); // 1
    Pty_421_set.insert("42");
    all_values.push_back(Pty_421_set);
    all_compo_names.insert("Pty_421_set");

    {
      xml_element Sub_421{"Sub"};
      multiset<string> Sub_421_set;
      Sub_421.add_attribute("ID", "PartySubID_t_804343488"); // 2
      Sub_421_set.insert("PartySubID_t_804343488");
      Sub_421.add_attribute("Typ", "18"); // 2
      Sub_421_set.insert("18");
      all_values.push_back(Sub_421_set);
      all_compo_names.insert("Sub_421_set");

      Pty_421.add_element(Sub_421);
    }
    elt.add_element(Pty_421);
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
