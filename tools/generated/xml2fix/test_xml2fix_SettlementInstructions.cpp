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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SettlInstrctns" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SettlementInstructions_message_t_0;
  elt.add_attribute("SettlInstMsgID", "SettlInstMsgID_t_990275663"); // 0
  SettlementInstructions_message_t_0.insert("SettlInstMsgID_t_990275663");
  elt.add_attribute("SettlInstReqID", "SettlInstReqID_t_1195528124"); // 0
  SettlementInstructions_message_t_0.insert("SettlInstReqID_t_1195528124");
  elt.add_attribute("SettlInstMode", "0"); // 0
  SettlementInstructions_message_t_0.insert("0");
  elt.add_attribute("SettlInstReqRejCode", "2"); // 0
  SettlementInstructions_message_t_0.insert("2");
  elt.add_attribute("Txt", "Text_t_1805062203"); // 0
  SettlementInstructions_message_t_0.insert("Text_t_1805062203");
  elt.add_attribute("EncTxtLen", "448782626"); // 0
  SettlementInstructions_message_t_0.insert("448782626");
  elt.add_attribute("EncTxt", "EncodedText_t_88105803"); // 0
  SettlementInstructions_message_t_0.insert("EncodedText_t_88105803");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1053638646"); // 0
  SettlementInstructions_message_t_0.insert("ClOrdID_t_1053638646");
  elt.add_attribute("TxnTm", "TransactTime_t_841358591"); // 0
  SettlementInstructions_message_t_0.insert("TransactTime_t_841358591");
  all_values.push_back(SettlementInstructions_message_t_0);
  all_compo_names.insert("SettlementInstructions_message_t");

  { // Hdr
    xml_element Hdr_91{"Hdr"};
    multiset<string> Hdr_91_set;
    Hdr_91.add_attribute("SeqNum", "1485341906"); // 1
    Hdr_91_set.insert("1485341906");
    Hdr_91.add_attribute("SID", "SenderCompID_t_849351023"); // 1
    Hdr_91_set.insert("SenderCompID_t_849351023");
    Hdr_91.add_attribute("TID", "TargetCompID_t_463678631"); // 1
    Hdr_91_set.insert("TargetCompID_t_463678631");
    Hdr_91.add_attribute("OBID", "OnBehalfOfCompID_t_1329800854"); // 1
    Hdr_91_set.insert("OnBehalfOfCompID_t_1329800854");
    Hdr_91.add_attribute("D2ID", "DeliverToCompID_t_1546415679"); // 1
    Hdr_91_set.insert("DeliverToCompID_t_1546415679");
    Hdr_91.add_attribute("SSub", "SenderSubID_t_163155079"); // 1
    Hdr_91_set.insert("SenderSubID_t_163155079");
    Hdr_91.add_attribute("SLoc", "SenderLocationID_t_63737626"); // 1
    Hdr_91_set.insert("SenderLocationID_t_63737626");
    Hdr_91.add_attribute("TSub", "TargetSubID_t_1230156323"); // 1
    Hdr_91_set.insert("TargetSubID_t_1230156323");
    Hdr_91.add_attribute("TLoc", "TargetLocationID_t_98200496"); // 1
    Hdr_91_set.insert("TargetLocationID_t_98200496");
    Hdr_91.add_attribute("OBSub", "OnBehalfOfSubID_t_358336651"); // 1
    Hdr_91_set.insert("OnBehalfOfSubID_t_358336651");
    Hdr_91.add_attribute("OBLoc", "OnBehalfOfLocationID_t_684926361"); // 1
    Hdr_91_set.insert("OnBehalfOfLocationID_t_684926361");
    Hdr_91.add_attribute("D2Sub", "DeliverToSubID_t_660957636"); // 1
    Hdr_91_set.insert("DeliverToSubID_t_660957636");
    Hdr_91.add_attribute("D2Loc", "DeliverToLocationID_t_935018133"); // 1
    Hdr_91_set.insert("DeliverToLocationID_t_935018133");
    Hdr_91.add_attribute("PosDup", "Y"); // 1
    Hdr_91_set.insert("Y");
    Hdr_91.add_attribute("PosRsnd", "N"); // 1
    Hdr_91_set.insert("N");
    Hdr_91.add_attribute("Snt", "SendingTime_t_685344535"); // 1
    Hdr_91_set.insert("SendingTime_t_685344535");
    Hdr_91.add_attribute("OrigSnt", "OrigSendingTime_t_1408404394"); // 1
    Hdr_91_set.insert("OrigSendingTime_t_1408404394");
    Hdr_91.add_attribute("MsgEncd", "MessageEncoding_t_849027963"); // 1
    Hdr_91_set.insert("MessageEncoding_t_849027963");
    all_values.push_back(Hdr_91_set);
    all_compo_names.insert("Hdr_91_set");

    {
      xml_element Hop_91{"Hop"};
      multiset<string> Hop_91_set;
      Hop_91.add_attribute("ID", "HopCompID_t_651393399"); // 2
      Hop_91_set.insert("HopCompID_t_651393399");
      Hop_91.add_attribute("Ref", "312920742"); // 2
      Hop_91_set.insert("312920742");
      Hop_91.add_attribute("Snt", "HopSendingTime_t_1653371452"); // 2
      Hop_91_set.insert("HopSendingTime_t_1653371452");
      all_values.push_back(Hop_91_set);
      all_compo_names.insert("Hop_91_set");

      Hdr_91.add_element(Hop_91);
    }
    elt.add_element(Hdr_91);
  } // end Hdr
  { // SetInst
    xml_element SetInst_0{"SetInst"};
    multiset<string> SetInst_0_set;
    SetInst_0.add_attribute("SettlInstID", "SettlInstID_t_1303196405"); // 1
    SetInst_0_set.insert("SettlInstID_t_1303196405");
    SetInst_0.add_attribute("SettlInstTransTyp", "C"); // 1
    SetInst_0_set.insert("C");
    SetInst_0.add_attribute("SettlInstRefID", "SettlInstRefID_t_988772518"); // 1
    SetInst_0_set.insert("SettlInstRefID_t_988772518");
    SetInst_0.add_attribute("Side", "D"); // 1
    SetInst_0_set.insert("D");
    SetInst_0.add_attribute("Prod", "13"); // 1
    SetInst_0_set.insert("13");
    SetInst_0.add_attribute("SecTyp", "TPRN"); // 1
    SetInst_0_set.insert("TPRN");
    SetInst_0.add_attribute("CFI", "CFICode_t_719289015"); // 1
    SetInst_0_set.insert("CFICode_t_719289015");
    SetInst_0.add_attribute("SettlCcy", "CHF"); // 1
    SetInst_0_set.insert("CHF");
    SetInst_0.add_attribute("EfctvTm", "EffectiveTime_t_57147273"); // 1
    SetInst_0_set.insert("EffectiveTime_t_57147273");
    SetInst_0.add_attribute("ExpireTm", "ExpireTime_t_114500506"); // 1
    SetInst_0_set.insert("ExpireTime_t_114500506");
    SetInst_0.add_attribute("LastUpdateTm", "LastUpdateTime_t_595108718"); // 1
    SetInst_0_set.insert("LastUpdateTime_t_595108718");
    SetInst_0.add_attribute("PmtMethod", "2"); // 1
    SetInst_0_set.insert("2");
    SetInst_0.add_attribute("PmtRef", "PaymentRef_t_1660916185"); // 1
    SetInst_0_set.insert("PaymentRef_t_1660916185");
    SetInst_0.add_attribute("CardHolderName", "CardHolderName_t_758263798"); // 1
    SetInst_0_set.insert("CardHolderName_t_758263798");
    SetInst_0.add_attribute("CardNum", "CardNumber_t_1450685753"); // 1
    SetInst_0_set.insert("CardNumber_t_1450685753");
    SetInst_0.add_attribute("CardStartDt", "CardStartDate_t_743588860"); // 1
    SetInst_0_set.insert("CardStartDate_t_743588860");
    SetInst_0.add_attribute("CardExpDt", "CardExpDate_t_856464294"); // 1
    SetInst_0_set.insert("CardExpDate_t_856464294");
    SetInst_0.add_attribute("CardIssNum", "CardIssNum_t_1809022404"); // 1
    SetInst_0_set.insert("CardIssNum_t_1809022404");
    SetInst_0.add_attribute("PmtDt", "PaymentDate_t_1428515221"); // 1
    SetInst_0_set.insert("PaymentDate_t_1428515221");
    SetInst_0.add_attribute("PmtRemtrID", "PaymentRemitterID_t_1517421931"); // 1
    SetInst_0_set.insert("PaymentRemitterID_t_1517421931");
    all_values.push_back(SetInst_0_set);
    all_compo_names.insert("SetInst_0_set");

    {
      xml_element Pty_422{"Pty"};
      multiset<string> Pty_422_set;
      Pty_422.add_attribute("ID", "PartyID_t_596556889"); // 2
      Pty_422_set.insert("PartyID_t_596556889");
      Pty_422.add_attribute("Src", "G"); // 2
      Pty_422_set.insert("G");
      Pty_422.add_attribute("R", "2"); // 2
      Pty_422_set.insert("2");
      all_values.push_back(Pty_422_set);
      all_compo_names.insert("Pty_422_set");

      {
        xml_element Sub_422{"Sub"};
        multiset<string> Sub_422_set;
        Sub_422.add_attribute("ID", "PartySubID_t_1281901424"); // 3
        Sub_422_set.insert("PartySubID_t_1281901424");
        Sub_422.add_attribute("Typ", "14"); // 3
        Sub_422_set.insert("14");
        all_values.push_back(Sub_422_set);
        all_compo_names.insert("Sub_422_set");

        Pty_422.add_element(Sub_422);
      }
      SetInst_0.add_element(Pty_422);
    }
    {
      xml_element SetInstr_12{"SetInstr"};
      multiset<string> SetInstr_12_set;
      SetInstr_12.add_attribute("DlvryTyp", "3"); // 2
      SetInstr_12_set.insert("3");
      SetInstr_12.add_attribute("StandInstDbTyp", "3"); // 2
      SetInstr_12_set.insert("3");
      SetInstr_12.add_attribute("StandInstDbName", "StandInstDbName_t_1264693481"); // 2
      SetInstr_12_set.insert("StandInstDbName_t_1264693481");
      SetInstr_12.add_attribute("StandInstDbID", "StandInstDbID_t_1424568167"); // 2
      SetInstr_12_set.insert("StandInstDbID_t_1424568167");
      all_values.push_back(SetInstr_12_set);
      all_compo_names.insert("SetInstr_12_set");

      {
        xml_element DlvInst_12{"DlvInst"};
        multiset<string> DlvInst_12_set;
        DlvInst_12.add_attribute("InstSrc", "1"); // 3
        DlvInst_12_set.insert("1");
        DlvInst_12.add_attribute("InstTyp", "S"); // 3
        DlvInst_12_set.insert("S");
        all_values.push_back(DlvInst_12_set);
        all_compo_names.insert("DlvInst_12_set");

        {
          xml_element Pty_423{"Pty"};
          multiset<string> Pty_423_set;
          Pty_423.add_attribute("ID", "SettlPartyID_t_2125984095"); // 4
          Pty_423_set.insert("SettlPartyID_t_2125984095");
          Pty_423.add_attribute("Src", "6"); // 4
          Pty_423_set.insert("6");
          Pty_423.add_attribute("R", "12"); // 4
          Pty_423_set.insert("12");
          all_values.push_back(Pty_423_set);
          all_compo_names.insert("Pty_423_set");

          {
            xml_element Sub_423{"Sub"};
            multiset<string> Sub_423_set;
            Sub_423.add_attribute("ID", "SettlPartySubID_t_337494931"); // 5
            Sub_423_set.insert("SettlPartySubID_t_337494931");
            Sub_423.add_attribute("Typ", "2"); // 5
            Sub_423_set.insert("2");
            all_values.push_back(Sub_423_set);
            all_compo_names.insert("Sub_423_set");

            Pty_423.add_element(Sub_423);
          }
          DlvInst_12.add_element(Pty_423);
        }
        SetInstr_12.add_element(DlvInst_12);
      }
      SetInst_0.add_element(SetInstr_12);
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
