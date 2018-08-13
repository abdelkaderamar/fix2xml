#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AllocationInstructionAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationInstructionAck_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AllocInstrctnAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationInstructionAck_message_t_0;
  elt.add_attribute("ID", "AllocID_t_865846584"); // 0
  AllocationInstructionAck_message_t_0.insert("AllocID_t_865846584");
  elt.add_attribute("ID2", "SecondaryAllocID_t_284057820"); // 0
  AllocationInstructionAck_message_t_0.insert("SecondaryAllocID_t_284057820");
  elt.add_attribute("TrdDt", "TradeDate_t_1583051163"); // 0
  AllocationInstructionAck_message_t_0.insert("TradeDate_t_1583051163");
  elt.add_attribute("TxnTm", "TransactTime_t_2097151458"); // 0
  AllocationInstructionAck_message_t_0.insert("TransactTime_t_2097151458");
  elt.add_attribute("Stat", "4"); // 0
  AllocationInstructionAck_message_t_0.insert("4");
  elt.add_attribute("RejCode", "8"); // 0
  AllocationInstructionAck_message_t_0.insert("8");
  elt.add_attribute("Typ", "7"); // 0
  AllocationInstructionAck_message_t_0.insert("7");
  elt.add_attribute("ImReqTyp", "2"); // 0
  AllocationInstructionAck_message_t_0.insert("2");
  elt.add_attribute("MtchStat", "0"); // 0
  AllocationInstructionAck_message_t_0.insert("0");
  elt.add_attribute("Prod", "5"); // 0
  AllocationInstructionAck_message_t_0.insert("5");
  elt.add_attribute("SecTyp", "TAXA"); // 0
  AllocationInstructionAck_message_t_0.insert("TAXA");
  elt.add_attribute("Txt", "Text_t_1621355920"); // 0
  AllocationInstructionAck_message_t_0.insert("Text_t_1621355920");
  elt.add_attribute("EncTxtLen", "1872067471"); // 0
  AllocationInstructionAck_message_t_0.insert("1872067471");
  elt.add_attribute("EncTxt", "EncodedText_t_2057638380"); // 0
  AllocationInstructionAck_message_t_0.insert("EncodedText_t_2057638380");
  all_values.push_back(AllocationInstructionAck_message_t_0);
  all_compo_names.insert("AllocationInstructionAck_message_t");

  { // Hdr
    xml_element Hdr_3{"Hdr"};
    multiset<string> Hdr_3_set;
    Hdr_3.add_attribute("SeqNum", "66786493"); // 1
    Hdr_3_set.insert("66786493");
    Hdr_3.add_attribute("SID", "SenderCompID_t_1279341405"); // 1
    Hdr_3_set.insert("SenderCompID_t_1279341405");
    Hdr_3.add_attribute("TID", "TargetCompID_t_1224404467"); // 1
    Hdr_3_set.insert("TargetCompID_t_1224404467");
    Hdr_3.add_attribute("OBID", "OnBehalfOfCompID_t_795927147"); // 1
    Hdr_3_set.insert("OnBehalfOfCompID_t_795927147");
    Hdr_3.add_attribute("D2ID", "DeliverToCompID_t_1352341252"); // 1
    Hdr_3_set.insert("DeliverToCompID_t_1352341252");
    Hdr_3.add_attribute("SSub", "SenderSubID_t_28877346"); // 1
    Hdr_3_set.insert("SenderSubID_t_28877346");
    Hdr_3.add_attribute("SLoc", "SenderLocationID_t_1081501879"); // 1
    Hdr_3_set.insert("SenderLocationID_t_1081501879");
    Hdr_3.add_attribute("TSub", "TargetSubID_t_2024584150"); // 1
    Hdr_3_set.insert("TargetSubID_t_2024584150");
    Hdr_3.add_attribute("TLoc", "TargetLocationID_t_753889831"); // 1
    Hdr_3_set.insert("TargetLocationID_t_753889831");
    Hdr_3.add_attribute("OBSub", "OnBehalfOfSubID_t_248348110"); // 1
    Hdr_3_set.insert("OnBehalfOfSubID_t_248348110");
    Hdr_3.add_attribute("OBLoc", "OnBehalfOfLocationID_t_103721537"); // 1
    Hdr_3_set.insert("OnBehalfOfLocationID_t_103721537");
    Hdr_3.add_attribute("D2Sub", "DeliverToSubID_t_1688771786"); // 1
    Hdr_3_set.insert("DeliverToSubID_t_1688771786");
    Hdr_3.add_attribute("D2Loc", "DeliverToLocationID_t_1377182276"); // 1
    Hdr_3_set.insert("DeliverToLocationID_t_1377182276");
    Hdr_3.add_attribute("PosDup", "N"); // 1
    Hdr_3_set.insert("N");
    Hdr_3.add_attribute("PosRsnd", "Y"); // 1
    Hdr_3_set.insert("Y");
    Hdr_3.add_attribute("Snt", "SendingTime_t_622830540"); // 1
    Hdr_3_set.insert("SendingTime_t_622830540");
    Hdr_3.add_attribute("OrigSnt", "OrigSendingTime_t_1085642248"); // 1
    Hdr_3_set.insert("OrigSendingTime_t_1085642248");
    Hdr_3.add_attribute("MsgEncd", "MessageEncoding_t_251104042"); // 1
    Hdr_3_set.insert("MessageEncoding_t_251104042");
    all_values.push_back(Hdr_3_set);
    all_compo_names.insert("Hdr_3_set");

    {
      xml_element Hop_3{"Hop"};
      multiset<string> Hop_3_set;
      Hop_3.add_attribute("ID", "HopCompID_t_906888360"); // 2
      Hop_3_set.insert("HopCompID_t_906888360");
      Hop_3.add_attribute("Ref", "521209763"); // 2
      Hop_3_set.insert("521209763");
      Hop_3.add_attribute("Snt", "HopSendingTime_t_200771852"); // 2
      Hop_3_set.insert("HopSendingTime_t_200771852");
      all_values.push_back(Hop_3_set);
      all_compo_names.insert("Hop_3_set");

      Hdr_3.add_element(Hop_3);
    }
    elt.add_element(Hdr_3);
  } // end Hdr
  { // Pty
    xml_element Pty_18{"Pty"};
    multiset<string> Pty_18_set;
    Pty_18.add_attribute("ID", "PartyID_t_1300478241"); // 1
    Pty_18_set.insert("PartyID_t_1300478241");
    Pty_18.add_attribute("Src", "B"); // 1
    Pty_18_set.insert("B");
    Pty_18.add_attribute("R", "2"); // 1
    Pty_18_set.insert("2");
    all_values.push_back(Pty_18_set);
    all_compo_names.insert("Pty_18_set");

    {
      xml_element Sub_18{"Sub"};
      multiset<string> Sub_18_set;
      Sub_18.add_attribute("ID", "PartySubID_t_1309738329"); // 2
      Sub_18_set.insert("PartySubID_t_1309738329");
      Sub_18.add_attribute("Typ", "26"); // 2
      Sub_18_set.insert("26");
      all_values.push_back(Sub_18_set);
      all_compo_names.insert("Sub_18_set");

      Pty_18.add_element(Sub_18);
    }
    elt.add_element(Pty_18);
  } // end Pty
  { // Pty
    xml_element Pty_19{"Pty"};
    multiset<string> Pty_19_set;
    Pty_19.add_attribute("ID", "PartyID_t_671132961"); // 1
    Pty_19_set.insert("PartyID_t_671132961");
    Pty_19.add_attribute("Src", "7"); // 1
    Pty_19_set.insert("7");
    Pty_19.add_attribute("R", "44"); // 1
    Pty_19_set.insert("44");
    all_values.push_back(Pty_19_set);
    all_compo_names.insert("Pty_19_set");

    {
      xml_element Sub_19{"Sub"};
      multiset<string> Sub_19_set;
      Sub_19.add_attribute("ID", "PartySubID_t_581287693"); // 2
      Sub_19_set.insert("PartySubID_t_581287693");
      Sub_19.add_attribute("Typ", "32"); // 2
      Sub_19_set.insert("32");
      all_values.push_back(Sub_19_set);
      all_compo_names.insert("Sub_19_set");

      Pty_19.add_element(Sub_19);
    }
    elt.add_element(Pty_19);
  } // end Pty
  { // AllocAck
    xml_element AllocAck_0{"AllocAck"};
    multiset<string> AllocAck_0_set;
    AllocAck_0.add_attribute("Acct", "AllocAccount_t_1805692161"); // 1
    AllocAck_0_set.insert("AllocAccount_t_1805692161");
    AllocAck_0.add_attribute("ActIDSrc", "99"); // 1
    AllocAck_0_set.insert("99");
    AllocAck_0.add_attribute("Px", "10362059.750000"); // 1
    AllocAck_0_set.insert("10362059.750000");
    AllocAck_0.add_attribute("AllocPosEfct", "F"); // 1
    AllocAck_0_set.insert("F");
    AllocAck_0.add_attribute("IndAllocID", "IndividualAllocID_t_580342474"); // 1
    AllocAck_0_set.insert("IndividualAllocID_t_580342474");
    AllocAck_0.add_attribute("IndAllocRejCode", "3"); // 1
    AllocAck_0_set.insert("3");
    AllocAck_0.add_attribute("Txt", "AllocText_t_440975691"); // 1
    AllocAck_0_set.insert("AllocText_t_440975691");
    AllocAck_0.add_attribute("EncAllocTextLen", "828690584"); // 1
    AllocAck_0_set.insert("828690584");
    AllocAck_0.add_attribute("EncAllocText", "EncodedAllocText_t_1017028014"); // 1
    AllocAck_0_set.insert("EncodedAllocText_t_1017028014");
    AllocAck_0.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_2129747477"); // 1
    AllocAck_0_set.insert("SecondaryIndividualAllocID_t_2129747477");
    AllocAck_0.add_attribute("CustCpcty", "AllocCustomerCapacity_t_58389213"); // 1
    AllocAck_0_set.insert("AllocCustomerCapacity_t_58389213");
    AllocAck_0.add_attribute("Typ", "1"); // 1
    AllocAck_0_set.insert("1");
    AllocAck_0.add_attribute("Qty", "15150049.350000"); // 1
    AllocAck_0_set.insert("15150049.350000");
    all_values.push_back(AllocAck_0_set);
    all_compo_names.insert("AllocAck_0_set");

    {
      xml_element Pty_20{"Pty"};
      multiset<string> Pty_20_set;
      Pty_20.add_attribute("ID", "NestedPartyID_t_681219753"); // 2
      Pty_20_set.insert("NestedPartyID_t_681219753");
      Pty_20.add_attribute("Src", "5"); // 2
      Pty_20_set.insert("5");
      Pty_20.add_attribute("R", "75"); // 2
      Pty_20_set.insert("75");
      all_values.push_back(Pty_20_set);
      all_compo_names.insert("Pty_20_set");

      {
        xml_element Sub_20{"Sub"};
        multiset<string> Sub_20_set;
        Sub_20.add_attribute("ID", "NestedPartySubID_t_1588108113"); // 3
        Sub_20_set.insert("NestedPartySubID_t_1588108113");
        Sub_20.add_attribute("Typ", "11"); // 3
        Sub_20_set.insert("11");
        all_values.push_back(Sub_20_set);
        all_compo_names.insert("Sub_20_set");

        Pty_20.add_element(Sub_20);
      }
      AllocAck_0.add_element(Pty_20);
    }
    elt.add_element(AllocAck_0);
  } // end AllocAck
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
