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
  elt.add_attribute("SettlInstMsgID", "SettlInstMsgID_t_2144532369"); // 0
  SettlementInstructions_message_t_0.insert("SettlInstMsgID_t_2144532369");
  elt.add_attribute("SettlInstReqID", "SettlInstReqID_t_1926308299"); // 0
  SettlementInstructions_message_t_0.insert("SettlInstReqID_t_1926308299");
  elt.add_attribute("SettlInstMode", "3"); // 0
  SettlementInstructions_message_t_0.insert("3");
  elt.add_attribute("SettlInstReqRejCode", "0"); // 0
  SettlementInstructions_message_t_0.insert("0");
  elt.add_attribute("Txt", "Text_t_379886555"); // 0
  SettlementInstructions_message_t_0.insert("Text_t_379886555");
  elt.add_attribute("EncTxtLen", "8729641"); // 0
  SettlementInstructions_message_t_0.insert("8729641");
  elt.add_attribute("EncTxt", "EncodedText_t_601602890"); // 0
  SettlementInstructions_message_t_0.insert("EncodedText_t_601602890");
  elt.add_attribute("ClOrdID", "ClOrdID_t_711746837"); // 0
  SettlementInstructions_message_t_0.insert("ClOrdID_t_711746837");
  elt.add_attribute("TxnTm", "TransactTime_t_1849433647"); // 0
  SettlementInstructions_message_t_0.insert("TransactTime_t_1849433647");
  all_values.push_back(SettlementInstructions_message_t_0);
  all_compo_names.insert("SettlementInstructions_message_t");

  { // Hdr
    xml_element Hdr_91{"Hdr"};
    multiset<string> Hdr_91_set;
    Hdr_91.add_attribute("SeqNum", "1915181283"); // 1
    Hdr_91_set.insert("1915181283");
    Hdr_91.add_attribute("SID", "SenderCompID_t_1022878353"); // 1
    Hdr_91_set.insert("SenderCompID_t_1022878353");
    Hdr_91.add_attribute("TID", "TargetCompID_t_1293540730"); // 1
    Hdr_91_set.insert("TargetCompID_t_1293540730");
    Hdr_91.add_attribute("OBID", "OnBehalfOfCompID_t_2102122234"); // 1
    Hdr_91_set.insert("OnBehalfOfCompID_t_2102122234");
    Hdr_91.add_attribute("D2ID", "DeliverToCompID_t_1810322788"); // 1
    Hdr_91_set.insert("DeliverToCompID_t_1810322788");
    Hdr_91.add_attribute("SSub", "SenderSubID_t_1067900358"); // 1
    Hdr_91_set.insert("SenderSubID_t_1067900358");
    Hdr_91.add_attribute("SLoc", "SenderLocationID_t_26735405"); // 1
    Hdr_91_set.insert("SenderLocationID_t_26735405");
    Hdr_91.add_attribute("TSub", "TargetSubID_t_642258325"); // 1
    Hdr_91_set.insert("TargetSubID_t_642258325");
    Hdr_91.add_attribute("TLoc", "TargetLocationID_t_235883788"); // 1
    Hdr_91_set.insert("TargetLocationID_t_235883788");
    Hdr_91.add_attribute("OBSub", "OnBehalfOfSubID_t_1882089413"); // 1
    Hdr_91_set.insert("OnBehalfOfSubID_t_1882089413");
    Hdr_91.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1098058101"); // 1
    Hdr_91_set.insert("OnBehalfOfLocationID_t_1098058101");
    Hdr_91.add_attribute("D2Sub", "DeliverToSubID_t_2030359743"); // 1
    Hdr_91_set.insert("DeliverToSubID_t_2030359743");
    Hdr_91.add_attribute("D2Loc", "DeliverToLocationID_t_71810746"); // 1
    Hdr_91_set.insert("DeliverToLocationID_t_71810746");
    Hdr_91.add_attribute("PosDup", "Y"); // 1
    Hdr_91_set.insert("Y");
    Hdr_91.add_attribute("PosRsnd", "Y"); // 1
    Hdr_91_set.insert("Y");
    Hdr_91.add_attribute("Snt", "SendingTime_t_249553455"); // 1
    Hdr_91_set.insert("SendingTime_t_249553455");
    Hdr_91.add_attribute("OrigSnt", "OrigSendingTime_t_43088717"); // 1
    Hdr_91_set.insert("OrigSendingTime_t_43088717");
    Hdr_91.add_attribute("MsgEncd", "MessageEncoding_t_839650420"); // 1
    Hdr_91_set.insert("MessageEncoding_t_839650420");
    all_values.push_back(Hdr_91_set);
    all_compo_names.insert("Hdr_91_set");

    {
      xml_element Hop_91{"Hop"};
      multiset<string> Hop_91_set;
      Hop_91.add_attribute("ID", "HopCompID_t_1970981281"); // 2
      Hop_91_set.insert("HopCompID_t_1970981281");
      Hop_91.add_attribute("Ref", "1671474503"); // 2
      Hop_91_set.insert("1671474503");
      Hop_91.add_attribute("Snt", "HopSendingTime_t_1229517524"); // 2
      Hop_91_set.insert("HopSendingTime_t_1229517524");
      all_values.push_back(Hop_91_set);
      all_compo_names.insert("Hop_91_set");

      Hdr_91.add_element(Hop_91);
    }
    elt.add_element(Hdr_91);
  } // end Hdr
  { // SetInst
    xml_element SetInst_0{"SetInst"};
    multiset<string> SetInst_0_set;
    SetInst_0.add_attribute("SettlInstID", "SettlInstID_t_1668523224"); // 1
    SetInst_0_set.insert("SettlInstID_t_1668523224");
    SetInst_0.add_attribute("SettlInstTransTyp", "T"); // 1
    SetInst_0_set.insert("T");
    SetInst_0.add_attribute("SettlInstRefID", "SettlInstRefID_t_1695875237"); // 1
    SetInst_0_set.insert("SettlInstRefID_t_1695875237");
    SetInst_0.add_attribute("Side", "9"); // 1
    SetInst_0_set.insert("9");
    SetInst_0.add_attribute("Prod", "2"); // 1
    SetInst_0_set.insert("2");
    SetInst_0.add_attribute("SecTyp", "BRADY"); // 1
    SetInst_0_set.insert("BRADY");
    SetInst_0.add_attribute("CFI", "CFICode_t_747472306"); // 1
    SetInst_0_set.insert("CFICode_t_747472306");
    SetInst_0.add_attribute("SettlCcy", "CAN"); // 1
    SetInst_0_set.insert("CAN");
    SetInst_0.add_attribute("EfctvTm", "EffectiveTime_t_515169941"); // 1
    SetInst_0_set.insert("EffectiveTime_t_515169941");
    SetInst_0.add_attribute("ExpireTm", "ExpireTime_t_975370273"); // 1
    SetInst_0_set.insert("ExpireTime_t_975370273");
    SetInst_0.add_attribute("LastUpdateTm", "LastUpdateTime_t_552611960"); // 1
    SetInst_0_set.insert("LastUpdateTime_t_552611960");
    SetInst_0.add_attribute("PmtMethod", "3"); // 1
    SetInst_0_set.insert("3");
    SetInst_0.add_attribute("PmtRef", "PaymentRef_t_638209413"); // 1
    SetInst_0_set.insert("PaymentRef_t_638209413");
    SetInst_0.add_attribute("CardHolderName", "CardHolderName_t_1620512318"); // 1
    SetInst_0_set.insert("CardHolderName_t_1620512318");
    SetInst_0.add_attribute("CardNum", "CardNumber_t_496543933"); // 1
    SetInst_0_set.insert("CardNumber_t_496543933");
    SetInst_0.add_attribute("CardStartDt", "CardStartDate_t_1280467738"); // 1
    SetInst_0_set.insert("CardStartDate_t_1280467738");
    SetInst_0.add_attribute("CardExpDt", "CardExpDate_t_1856396107"); // 1
    SetInst_0_set.insert("CardExpDate_t_1856396107");
    SetInst_0.add_attribute("CardIssNum", "CardIssNum_t_231149698"); // 1
    SetInst_0_set.insert("CardIssNum_t_231149698");
    SetInst_0.add_attribute("PmtDt", "PaymentDate_t_231042191"); // 1
    SetInst_0_set.insert("PaymentDate_t_231042191");
    SetInst_0.add_attribute("PmtRemtrID", "PaymentRemitterID_t_1739272202"); // 1
    SetInst_0_set.insert("PaymentRemitterID_t_1739272202");
    all_values.push_back(SetInst_0_set);
    all_compo_names.insert("SetInst_0_set");

    {
      xml_element Pty_396{"Pty"};
      multiset<string> Pty_396_set;
      Pty_396.add_attribute("ID", "PartyID_t_302960444"); // 2
      Pty_396_set.insert("PartyID_t_302960444");
      Pty_396.add_attribute("Src", "2"); // 2
      Pty_396_set.insert("2");
      Pty_396.add_attribute("R", "24"); // 2
      Pty_396_set.insert("24");
      all_values.push_back(Pty_396_set);
      all_compo_names.insert("Pty_396_set");

      {
        xml_element Sub_396{"Sub"};
        multiset<string> Sub_396_set;
        Sub_396.add_attribute("ID", "PartySubID_t_552513899"); // 3
        Sub_396_set.insert("PartySubID_t_552513899");
        Sub_396.add_attribute("Typ", "5"); // 3
        Sub_396_set.insert("5");
        all_values.push_back(Sub_396_set);
        all_compo_names.insert("Sub_396_set");

        Pty_396.add_element(Sub_396);
      }
      SetInst_0.add_element(Pty_396);
    }
    {
      xml_element SetInstr_8{"SetInstr"};
      multiset<string> SetInstr_8_set;
      SetInstr_8.add_attribute("DlvryTyp", "3"); // 2
      SetInstr_8_set.insert("3");
      SetInstr_8.add_attribute("StandInstDbTyp", "2"); // 2
      SetInstr_8_set.insert("2");
      SetInstr_8.add_attribute("StandInstDbName", "StandInstDbName_t_514931080"); // 2
      SetInstr_8_set.insert("StandInstDbName_t_514931080");
      SetInstr_8.add_attribute("StandInstDbID", "StandInstDbID_t_2123685975"); // 2
      SetInstr_8_set.insert("StandInstDbID_t_2123685975");
      all_values.push_back(SetInstr_8_set);
      all_compo_names.insert("SetInstr_8_set");

      {
        xml_element DlvInst_8{"DlvInst"};
        multiset<string> DlvInst_8_set;
        DlvInst_8.add_attribute("InstSrc", "1"); // 3
        DlvInst_8_set.insert("1");
        DlvInst_8.add_attribute("InstTyp", "C"); // 3
        DlvInst_8_set.insert("C");
        all_values.push_back(DlvInst_8_set);
        all_compo_names.insert("DlvInst_8_set");

        {
          xml_element Pty_397{"Pty"};
          multiset<string> Pty_397_set;
          Pty_397.add_attribute("ID", "SettlPartyID_t_984544502"); // 4
          Pty_397_set.insert("SettlPartyID_t_984544502");
          Pty_397.add_attribute("Src", "4"); // 4
          Pty_397_set.insert("4");
          Pty_397.add_attribute("R", "67"); // 4
          Pty_397_set.insert("67");
          all_values.push_back(Pty_397_set);
          all_compo_names.insert("Pty_397_set");

          {
            xml_element Sub_397{"Sub"};
            multiset<string> Sub_397_set;
            Sub_397.add_attribute("ID", "SettlPartySubID_t_225289585"); // 5
            Sub_397_set.insert("SettlPartySubID_t_225289585");
            Sub_397.add_attribute("Typ", "1"); // 5
            Sub_397_set.insert("1");
            all_values.push_back(Sub_397_set);
            all_compo_names.insert("Sub_397_set");

            Pty_397.add_element(Sub_397);
          }
          DlvInst_8.add_element(Pty_397);
        }
        SetInstr_8.add_element(DlvInst_8);
      }
      SetInst_0.add_element(SetInstr_8);
    }
    elt.add_element(SetInst_0);
  } // end SetInst
  { // SetInst
    xml_element SetInst_1{"SetInst"};
    multiset<string> SetInst_1_set;
    SetInst_1.add_attribute("SettlInstID", "SettlInstID_t_929312379"); // 1
    SetInst_1_set.insert("SettlInstID_t_929312379");
    SetInst_1.add_attribute("SettlInstTransTyp", "C"); // 1
    SetInst_1_set.insert("C");
    SetInst_1.add_attribute("SettlInstRefID", "SettlInstRefID_t_1403651370"); // 1
    SetInst_1_set.insert("SettlInstRefID_t_1403651370");
    SetInst_1.add_attribute("Side", "2"); // 1
    SetInst_1_set.insert("2");
    SetInst_1.add_attribute("Prod", "8"); // 1
    SetInst_1_set.insert("8");
    SetInst_1.add_attribute("SecTyp", "YANK"); // 1
    SetInst_1_set.insert("YANK");
    SetInst_1.add_attribute("CFI", "CFICode_t_1914290849"); // 1
    SetInst_1_set.insert("CFICode_t_1914290849");
    SetInst_1.add_attribute("SettlCcy", "CHF"); // 1
    SetInst_1_set.insert("CHF");
    SetInst_1.add_attribute("EfctvTm", "EffectiveTime_t_263351134"); // 1
    SetInst_1_set.insert("EffectiveTime_t_263351134");
    SetInst_1.add_attribute("ExpireTm", "ExpireTime_t_924345281"); // 1
    SetInst_1_set.insert("ExpireTime_t_924345281");
    SetInst_1.add_attribute("LastUpdateTm", "LastUpdateTime_t_1138204460"); // 1
    SetInst_1_set.insert("LastUpdateTime_t_1138204460");
    SetInst_1.add_attribute("PmtMethod", "11"); // 1
    SetInst_1_set.insert("11");
    SetInst_1.add_attribute("PmtRef", "PaymentRef_t_1155387473"); // 1
    SetInst_1_set.insert("PaymentRef_t_1155387473");
    SetInst_1.add_attribute("CardHolderName", "CardHolderName_t_729993014"); // 1
    SetInst_1_set.insert("CardHolderName_t_729993014");
    SetInst_1.add_attribute("CardNum", "CardNumber_t_797461276"); // 1
    SetInst_1_set.insert("CardNumber_t_797461276");
    SetInst_1.add_attribute("CardStartDt", "CardStartDate_t_2103238980"); // 1
    SetInst_1_set.insert("CardStartDate_t_2103238980");
    SetInst_1.add_attribute("CardExpDt", "CardExpDate_t_784511045"); // 1
    SetInst_1_set.insert("CardExpDate_t_784511045");
    SetInst_1.add_attribute("CardIssNum", "CardIssNum_t_1349975175"); // 1
    SetInst_1_set.insert("CardIssNum_t_1349975175");
    SetInst_1.add_attribute("PmtDt", "PaymentDate_t_946695556"); // 1
    SetInst_1_set.insert("PaymentDate_t_946695556");
    SetInst_1.add_attribute("PmtRemtrID", "PaymentRemitterID_t_1678679497"); // 1
    SetInst_1_set.insert("PaymentRemitterID_t_1678679497");
    all_values.push_back(SetInst_1_set);
    all_compo_names.insert("SetInst_1_set");

    {
      xml_element Pty_398{"Pty"};
      multiset<string> Pty_398_set;
      Pty_398.add_attribute("ID", "PartyID_t_1725986708"); // 2
      Pty_398_set.insert("PartyID_t_1725986708");
      Pty_398.add_attribute("Src", "F"); // 2
      Pty_398_set.insert("F");
      Pty_398.add_attribute("R", "17"); // 2
      Pty_398_set.insert("17");
      all_values.push_back(Pty_398_set);
      all_compo_names.insert("Pty_398_set");

      {
        xml_element Sub_398{"Sub"};
        multiset<string> Sub_398_set;
        Sub_398.add_attribute("ID", "PartySubID_t_470086734"); // 3
        Sub_398_set.insert("PartySubID_t_470086734");
        Sub_398.add_attribute("Typ", "14"); // 3
        Sub_398_set.insert("14");
        all_values.push_back(Sub_398_set);
        all_compo_names.insert("Sub_398_set");

        Pty_398.add_element(Sub_398);
      }
      SetInst_1.add_element(Pty_398);
    }
    {
      xml_element SetInstr_9{"SetInstr"};
      multiset<string> SetInstr_9_set;
      SetInstr_9.add_attribute("DlvryTyp", "3"); // 2
      SetInstr_9_set.insert("3");
      SetInstr_9.add_attribute("StandInstDbTyp", "2"); // 2
      SetInstr_9_set.insert("2");
      SetInstr_9.add_attribute("StandInstDbName", "StandInstDbName_t_1679437366"); // 2
      SetInstr_9_set.insert("StandInstDbName_t_1679437366");
      SetInstr_9.add_attribute("StandInstDbID", "StandInstDbID_t_717232264"); // 2
      SetInstr_9_set.insert("StandInstDbID_t_717232264");
      all_values.push_back(SetInstr_9_set);
      all_compo_names.insert("SetInstr_9_set");

      {
        xml_element DlvInst_9{"DlvInst"};
        multiset<string> DlvInst_9_set;
        DlvInst_9.add_attribute("InstSrc", "2"); // 3
        DlvInst_9_set.insert("2");
        DlvInst_9.add_attribute("InstTyp", "S"); // 3
        DlvInst_9_set.insert("S");
        all_values.push_back(DlvInst_9_set);
        all_compo_names.insert("DlvInst_9_set");

        {
          xml_element Pty_399{"Pty"};
          multiset<string> Pty_399_set;
          Pty_399.add_attribute("ID", "SettlPartyID_t_895013768"); // 4
          Pty_399_set.insert("SettlPartyID_t_895013768");
          Pty_399.add_attribute("Src", "9"); // 4
          Pty_399_set.insert("9");
          Pty_399.add_attribute("R", "22"); // 4
          Pty_399_set.insert("22");
          all_values.push_back(Pty_399_set);
          all_compo_names.insert("Pty_399_set");

          {
            xml_element Sub_399{"Sub"};
            multiset<string> Sub_399_set;
            Sub_399.add_attribute("ID", "SettlPartySubID_t_2048165546"); // 5
            Sub_399_set.insert("SettlPartySubID_t_2048165546");
            Sub_399.add_attribute("Typ", "14"); // 5
            Sub_399_set.insert("14");
            all_values.push_back(Sub_399_set);
            all_compo_names.insert("Sub_399_set");

            Pty_399.add_element(Sub_399);
          }
          DlvInst_9.add_element(Pty_399);
        }
        SetInstr_9.add_element(DlvInst_9);
      }
      SetInst_1.add_element(SetInstr_9);
    }
    elt.add_element(SetInst_1);
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
