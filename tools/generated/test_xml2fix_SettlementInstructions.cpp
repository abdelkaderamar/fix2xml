#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SettlementInstructions.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SettlementInstructions_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SettlInstrctns" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SettlementInstructions_message_t_0;
  elt.add_attribute("SettlInstMsgID", "SettlInstMsgID_t_288376542"); // 0
  SettlementInstructions_message_t_0.insert("SettlInstMsgID_t_288376542");
  elt.add_attribute("SettlInstReqID", "SettlInstReqID_t_681981051"); // 0
  SettlementInstructions_message_t_0.insert("SettlInstReqID_t_681981051");
  elt.add_attribute("SettlInstMode", "1"); // 0
  SettlementInstructions_message_t_0.insert("1");
  elt.add_attribute("SettlInstReqRejCode", "1"); // 0
  SettlementInstructions_message_t_0.insert("1");
  elt.add_attribute("Txt", "Text_t_254812667"); // 0
  SettlementInstructions_message_t_0.insert("Text_t_254812667");
  elt.add_attribute("EncTxtLen", "393718052"); // 0
  SettlementInstructions_message_t_0.insert("393718052");
  elt.add_attribute("EncTxt", "EncodedText_t_1114074599"); // 0
  SettlementInstructions_message_t_0.insert("EncodedText_t_1114074599");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1959353808"); // 0
  SettlementInstructions_message_t_0.insert("ClOrdID_t_1959353808");
  elt.add_attribute("TxnTm", "TransactTime_t_2048947982"); // 0
  SettlementInstructions_message_t_0.insert("TransactTime_t_2048947982");
  all_values.push_back(SettlementInstructions_message_t_0);
  all_compo_names.insert("SettlementInstructions_message_t");

  { // Hdr
    xml_element Hdr_91{"Hdr"};
    multiset<string> Hdr_91_set;
    Hdr_91.add_attribute("SeqNum", "453585053"); // 1
    Hdr_91_set.insert("453585053");
    Hdr_91.add_attribute("SID", "SenderCompID_t_1876120249"); // 1
    Hdr_91_set.insert("SenderCompID_t_1876120249");
    Hdr_91.add_attribute("TID", "TargetCompID_t_74040344"); // 1
    Hdr_91_set.insert("TargetCompID_t_74040344");
    Hdr_91.add_attribute("OBID", "OnBehalfOfCompID_t_809414099"); // 1
    Hdr_91_set.insert("OnBehalfOfCompID_t_809414099");
    Hdr_91.add_attribute("D2ID", "DeliverToCompID_t_1537445660"); // 1
    Hdr_91_set.insert("DeliverToCompID_t_1537445660");
    Hdr_91.add_attribute("SSub", "SenderSubID_t_62079428"); // 1
    Hdr_91_set.insert("SenderSubID_t_62079428");
    Hdr_91.add_attribute("SLoc", "SenderLocationID_t_954747"); // 1
    Hdr_91_set.insert("SenderLocationID_t_954747");
    Hdr_91.add_attribute("TSub", "TargetSubID_t_1120042236"); // 1
    Hdr_91_set.insert("TargetSubID_t_1120042236");
    Hdr_91.add_attribute("TLoc", "TargetLocationID_t_8583438"); // 1
    Hdr_91_set.insert("TargetLocationID_t_8583438");
    Hdr_91.add_attribute("OBSub", "OnBehalfOfSubID_t_1347352699"); // 1
    Hdr_91_set.insert("OnBehalfOfSubID_t_1347352699");
    Hdr_91.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1438134846"); // 1
    Hdr_91_set.insert("OnBehalfOfLocationID_t_1438134846");
    Hdr_91.add_attribute("D2Sub", "DeliverToSubID_t_957478737"); // 1
    Hdr_91_set.insert("DeliverToSubID_t_957478737");
    Hdr_91.add_attribute("D2Loc", "DeliverToLocationID_t_1698871924"); // 1
    Hdr_91_set.insert("DeliverToLocationID_t_1698871924");
    Hdr_91.add_attribute("PosDup", "N"); // 1
    Hdr_91_set.insert("N");
    Hdr_91.add_attribute("PosRsnd", "Y"); // 1
    Hdr_91_set.insert("Y");
    Hdr_91.add_attribute("Snt", "SendingTime_t_1567598352"); // 1
    Hdr_91_set.insert("SendingTime_t_1567598352");
    Hdr_91.add_attribute("OrigSnt", "OrigSendingTime_t_1004176641"); // 1
    Hdr_91_set.insert("OrigSendingTime_t_1004176641");
    Hdr_91.add_attribute("MsgEncd", "MessageEncoding_t_1147174971"); // 1
    Hdr_91_set.insert("MessageEncoding_t_1147174971");
    all_values.push_back(Hdr_91_set);
    all_compo_names.insert("Hdr_91_set");

    {
      xml_element Hop_91{"Hop"};
      multiset<string> Hop_91_set;
      Hop_91.add_attribute("ID", "HopCompID_t_51096482"); // 2
      Hop_91_set.insert("HopCompID_t_51096482");
      Hop_91.add_attribute("Ref", "1109686164"); // 2
      Hop_91_set.insert("1109686164");
      Hop_91.add_attribute("Snt", "HopSendingTime_t_1084228317"); // 2
      Hop_91_set.insert("HopSendingTime_t_1084228317");
      all_values.push_back(Hop_91_set);
      all_compo_names.insert("Hop_91_set");

      Hdr_91.add_element(Hop_91);
    }
    elt.add_element(Hdr_91);
  } // end Hdr
  { // SetInst
    xml_element SetInst_0{"SetInst"};
    multiset<string> SetInst_0_set;
    SetInst_0.add_attribute("SettlInstID", "SettlInstID_t_1398062706"); // 1
    SetInst_0_set.insert("SettlInstID_t_1398062706");
    SetInst_0.add_attribute("SettlInstTransTyp", "C"); // 1
    SetInst_0_set.insert("C");
    SetInst_0.add_attribute("SettlInstRefID", "SettlInstRefID_t_177795881"); // 1
    SetInst_0_set.insert("SettlInstRefID_t_177795881");
    SetInst_0.add_attribute("Side", "4"); // 1
    SetInst_0_set.insert("4");
    SetInst_0.add_attribute("Prod", "3"); // 1
    SetInst_0_set.insert("3");
    SetInst_0.add_attribute("SecTyp", "OPT"); // 1
    SetInst_0_set.insert("OPT");
    SetInst_0.add_attribute("CFI", "CFICode_t_1452510186"); // 1
    SetInst_0_set.insert("CFICode_t_1452510186");
    SetInst_0.add_attribute("SettlCcy", "GBP"); // 1
    SetInst_0_set.insert("GBP");
    SetInst_0.add_attribute("EfctvTm", "EffectiveTime_t_1906095239"); // 1
    SetInst_0_set.insert("EffectiveTime_t_1906095239");
    SetInst_0.add_attribute("ExpireTm", "ExpireTime_t_1561528796"); // 1
    SetInst_0_set.insert("ExpireTime_t_1561528796");
    SetInst_0.add_attribute("LastUpdateTm", "LastUpdateTime_t_547018612"); // 1
    SetInst_0_set.insert("LastUpdateTime_t_547018612");
    SetInst_0.add_attribute("PmtMethod", "14"); // 1
    SetInst_0_set.insert("14");
    SetInst_0.add_attribute("PmtRef", "PaymentRef_t_951490808"); // 1
    SetInst_0_set.insert("PaymentRef_t_951490808");
    SetInst_0.add_attribute("CardHolderName", "CardHolderName_t_609098040"); // 1
    SetInst_0_set.insert("CardHolderName_t_609098040");
    SetInst_0.add_attribute("CardNum", "CardNumber_t_568980437"); // 1
    SetInst_0_set.insert("CardNumber_t_568980437");
    SetInst_0.add_attribute("CardStartDt", "CardStartDate_t_2071533045"); // 1
    SetInst_0_set.insert("CardStartDate_t_2071533045");
    SetInst_0.add_attribute("CardExpDt", "CardExpDate_t_617681479"); // 1
    SetInst_0_set.insert("CardExpDate_t_617681479");
    SetInst_0.add_attribute("CardIssNum", "CardIssNum_t_1916333137"); // 1
    SetInst_0_set.insert("CardIssNum_t_1916333137");
    SetInst_0.add_attribute("PmtDt", "PaymentDate_t_1362184243"); // 1
    SetInst_0_set.insert("PaymentDate_t_1362184243");
    SetInst_0.add_attribute("PmtRemtrID", "PaymentRemitterID_t_1575160216"); // 1
    SetInst_0_set.insert("PaymentRemitterID_t_1575160216");
    all_values.push_back(SetInst_0_set);
    all_compo_names.insert("SetInst_0_set");

    {
      xml_element Pty_426{"Pty"};
      multiset<string> Pty_426_set;
      Pty_426.add_attribute("ID", "PartyID_t_1467721413"); // 2
      Pty_426_set.insert("PartyID_t_1467721413");
      Pty_426.add_attribute("Src", "7"); // 2
      Pty_426_set.insert("7");
      Pty_426.add_attribute("R", "28"); // 2
      Pty_426_set.insert("28");
      all_values.push_back(Pty_426_set);
      all_compo_names.insert("Pty_426_set");

      {
        xml_element Sub_426{"Sub"};
        multiset<string> Sub_426_set;
        Sub_426.add_attribute("ID", "PartySubID_t_887836117"); // 3
        Sub_426_set.insert("PartySubID_t_887836117");
        Sub_426.add_attribute("Typ", "18"); // 3
        Sub_426_set.insert("18");
        all_values.push_back(Sub_426_set);
        all_compo_names.insert("Sub_426_set");

        Pty_426.add_element(Sub_426);
      }
      SetInst_0.add_element(Pty_426);
    }
    {
      xml_element SetInstr_13{"SetInstr"};
      multiset<string> SetInstr_13_set;
      SetInstr_13.add_attribute("DlvryTyp", "2"); // 2
      SetInstr_13_set.insert("2");
      SetInstr_13.add_attribute("StandInstDbTyp", "4"); // 2
      SetInstr_13_set.insert("4");
      SetInstr_13.add_attribute("StandInstDbName", "StandInstDbName_t_265163899"); // 2
      SetInstr_13_set.insert("StandInstDbName_t_265163899");
      SetInstr_13.add_attribute("StandInstDbID", "StandInstDbID_t_1923640955"); // 2
      SetInstr_13_set.insert("StandInstDbID_t_1923640955");
      all_values.push_back(SetInstr_13_set);
      all_compo_names.insert("SetInstr_13_set");

      {
        xml_element DlvInst_13{"DlvInst"};
        multiset<string> DlvInst_13_set;
        DlvInst_13.add_attribute("InstSrc", "2"); // 3
        DlvInst_13_set.insert("2");
        DlvInst_13.add_attribute("InstTyp", "S"); // 3
        DlvInst_13_set.insert("S");
        all_values.push_back(DlvInst_13_set);
        all_compo_names.insert("DlvInst_13_set");

        {
          xml_element Pty_427{"Pty"};
          multiset<string> Pty_427_set;
          Pty_427.add_attribute("ID", "SettlPartyID_t_1542366675"); // 4
          Pty_427_set.insert("SettlPartyID_t_1542366675");
          Pty_427.add_attribute("Src", "4"); // 4
          Pty_427_set.insert("4");
          Pty_427.add_attribute("R", "70"); // 4
          Pty_427_set.insert("70");
          all_values.push_back(Pty_427_set);
          all_compo_names.insert("Pty_427_set");

          {
            xml_element Sub_427{"Sub"};
            multiset<string> Sub_427_set;
            Sub_427.add_attribute("ID", "SettlPartySubID_t_1415905062"); // 5
            Sub_427_set.insert("SettlPartySubID_t_1415905062");
            Sub_427.add_attribute("Typ", "28"); // 5
            Sub_427_set.insert("28");
            all_values.push_back(Sub_427_set);
            all_compo_names.insert("Sub_427_set");

            Pty_427.add_element(Sub_427);
          }
          DlvInst_13.add_element(Pty_427);
        }
        SetInstr_13.add_element(DlvInst_13);
      }
      SetInst_0.add_element(SetInstr_13);
    }
    elt.add_element(SetInst_0);
  } // end SetInst
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
