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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AllocInstrctnAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationInstructionAck_message_t_0;
  elt.add_attribute("ID", "AllocID_t_1260464479"); // 0
  AllocationInstructionAck_message_t_0.insert("AllocID_t_1260464479");
  elt.add_attribute("ID2", "SecondaryAllocID_t_1599704448"); // 0
  AllocationInstructionAck_message_t_0.insert("SecondaryAllocID_t_1599704448");
  elt.add_attribute("TrdDt", "TradeDate_t_1671085273"); // 0
  AllocationInstructionAck_message_t_0.insert("TradeDate_t_1671085273");
  elt.add_attribute("TxnTm", "TransactTime_t_413888544"); // 0
  AllocationInstructionAck_message_t_0.insert("TransactTime_t_413888544");
  elt.add_attribute("Stat", "2"); // 0
  AllocationInstructionAck_message_t_0.insert("2");
  elt.add_attribute("RejCode", "9"); // 0
  AllocationInstructionAck_message_t_0.insert("9");
  elt.add_attribute("Typ", "10"); // 0
  AllocationInstructionAck_message_t_0.insert("10");
  elt.add_attribute("ImReqTyp", "6"); // 0
  AllocationInstructionAck_message_t_0.insert("6");
  elt.add_attribute("MtchStat", "1"); // 0
  AllocationInstructionAck_message_t_0.insert("1");
  elt.add_attribute("Prod", "12"); // 0
  AllocationInstructionAck_message_t_0.insert("12");
  elt.add_attribute("SecTyp", "TAXA"); // 0
  AllocationInstructionAck_message_t_0.insert("TAXA");
  elt.add_attribute("Txt", "Text_t_2062592175"); // 0
  AllocationInstructionAck_message_t_0.insert("Text_t_2062592175");
  elt.add_attribute("EncTxtLen", "546426718"); // 0
  AllocationInstructionAck_message_t_0.insert("546426718");
  elt.add_attribute("EncTxt", "EncodedText_t_1894579976"); // 0
  AllocationInstructionAck_message_t_0.insert("EncodedText_t_1894579976");
  all_values.push_back(AllocationInstructionAck_message_t_0);
  all_compo_names.insert("AllocationInstructionAck_message_t");

  { // Hdr
    xml_element Hdr_3{"Hdr"};
    multiset<string> Hdr_3_set;
    Hdr_3.add_attribute("SeqNum", "982512282"); // 1
    Hdr_3_set.insert("982512282");
    Hdr_3.add_attribute("SID", "SenderCompID_t_747275875"); // 1
    Hdr_3_set.insert("SenderCompID_t_747275875");
    Hdr_3.add_attribute("TID", "TargetCompID_t_306717076"); // 1
    Hdr_3_set.insert("TargetCompID_t_306717076");
    Hdr_3.add_attribute("OBID", "OnBehalfOfCompID_t_746901562"); // 1
    Hdr_3_set.insert("OnBehalfOfCompID_t_746901562");
    Hdr_3.add_attribute("D2ID", "DeliverToCompID_t_134752829"); // 1
    Hdr_3_set.insert("DeliverToCompID_t_134752829");
    Hdr_3.add_attribute("SSub", "SenderSubID_t_1408626447"); // 1
    Hdr_3_set.insert("SenderSubID_t_1408626447");
    Hdr_3.add_attribute("SLoc", "SenderLocationID_t_675356569"); // 1
    Hdr_3_set.insert("SenderLocationID_t_675356569");
    Hdr_3.add_attribute("TSub", "TargetSubID_t_2033408422"); // 1
    Hdr_3_set.insert("TargetSubID_t_2033408422");
    Hdr_3.add_attribute("TLoc", "TargetLocationID_t_788288891"); // 1
    Hdr_3_set.insert("TargetLocationID_t_788288891");
    Hdr_3.add_attribute("OBSub", "OnBehalfOfSubID_t_1493223586"); // 1
    Hdr_3_set.insert("OnBehalfOfSubID_t_1493223586");
    Hdr_3.add_attribute("OBLoc", "OnBehalfOfLocationID_t_116460521"); // 1
    Hdr_3_set.insert("OnBehalfOfLocationID_t_116460521");
    Hdr_3.add_attribute("D2Sub", "DeliverToSubID_t_1780751547"); // 1
    Hdr_3_set.insert("DeliverToSubID_t_1780751547");
    Hdr_3.add_attribute("D2Loc", "DeliverToLocationID_t_1141746085"); // 1
    Hdr_3_set.insert("DeliverToLocationID_t_1141746085");
    Hdr_3.add_attribute("PosDup", "Y"); // 1
    Hdr_3_set.insert("Y");
    Hdr_3.add_attribute("PosRsnd", "Y"); // 1
    Hdr_3_set.insert("Y");
    Hdr_3.add_attribute("Snt", "SendingTime_t_1457530173"); // 1
    Hdr_3_set.insert("SendingTime_t_1457530173");
    Hdr_3.add_attribute("OrigSnt", "OrigSendingTime_t_1368940982"); // 1
    Hdr_3_set.insert("OrigSendingTime_t_1368940982");
    Hdr_3.add_attribute("MsgEncd", "MessageEncoding_t_6388291"); // 1
    Hdr_3_set.insert("MessageEncoding_t_6388291");
    all_values.push_back(Hdr_3_set);
    all_compo_names.insert("Hdr_3_set");

    {
      xml_element Hop_3{"Hop"};
      multiset<string> Hop_3_set;
      Hop_3.add_attribute("ID", "HopCompID_t_909750973"); // 2
      Hop_3_set.insert("HopCompID_t_909750973");
      Hop_3.add_attribute("Ref", "892542607"); // 2
      Hop_3_set.insert("892542607");
      Hop_3.add_attribute("Snt", "HopSendingTime_t_420276835"); // 2
      Hop_3_set.insert("HopSendingTime_t_420276835");
      all_values.push_back(Hop_3_set);
      all_compo_names.insert("Hop_3_set");

      Hdr_3.add_element(Hop_3);
    }
    elt.add_element(Hdr_3);
  } // end Hdr
  { // Pty
    xml_element Pty_15{"Pty"};
    multiset<string> Pty_15_set;
    Pty_15.add_attribute("ID", "PartyID_t_1336021355"); // 1
    Pty_15_set.insert("PartyID_t_1336021355");
    Pty_15.add_attribute("Src", "D"); // 1
    Pty_15_set.insert("D");
    Pty_15.add_attribute("R", "13"); // 1
    Pty_15_set.insert("13");
    all_values.push_back(Pty_15_set);
    all_compo_names.insert("Pty_15_set");

    {
      xml_element Sub_15{"Sub"};
      multiset<string> Sub_15_set;
      Sub_15.add_attribute("ID", "PartySubID_t_1171110235"); // 2
      Sub_15_set.insert("PartySubID_t_1171110235");
      Sub_15.add_attribute("Typ", "11"); // 2
      Sub_15_set.insert("11");
      all_values.push_back(Sub_15_set);
      all_compo_names.insert("Sub_15_set");

      Pty_15.add_element(Sub_15);
    }
    elt.add_element(Pty_15);
  } // end Pty
  { // Pty
    xml_element Pty_16{"Pty"};
    multiset<string> Pty_16_set;
    Pty_16.add_attribute("ID", "PartyID_t_1326673579"); // 1
    Pty_16_set.insert("PartyID_t_1326673579");
    Pty_16.add_attribute("Src", "G"); // 1
    Pty_16_set.insert("G");
    Pty_16.add_attribute("R", "51"); // 1
    Pty_16_set.insert("51");
    all_values.push_back(Pty_16_set);
    all_compo_names.insert("Pty_16_set");

    {
      xml_element Sub_16{"Sub"};
      multiset<string> Sub_16_set;
      Sub_16.add_attribute("ID", "PartySubID_t_1073769907"); // 2
      Sub_16_set.insert("PartySubID_t_1073769907");
      Sub_16.add_attribute("Typ", "26"); // 2
      Sub_16_set.insert("26");
      all_values.push_back(Sub_16_set);
      all_compo_names.insert("Sub_16_set");

      Pty_16.add_element(Sub_16);
    }
    elt.add_element(Pty_16);
  } // end Pty
  { // AllocAck
    xml_element AllocAck_0{"AllocAck"};
    multiset<string> AllocAck_0_set;
    AllocAck_0.add_attribute("Acct", "AllocAccount_t_1380486984"); // 1
    AllocAck_0_set.insert("AllocAccount_t_1380486984");
    AllocAck_0.add_attribute("ActIDSrc", "99"); // 1
    AllocAck_0_set.insert("99");
    AllocAck_0.add_attribute("Px", "3419807.810000"); // 1
    AllocAck_0_set.insert("3419807.810000");
    AllocAck_0.add_attribute("AllocPosEfct", "F"); // 1
    AllocAck_0_set.insert("F");
    AllocAck_0.add_attribute("IndAllocID", "IndividualAllocID_t_1343505528"); // 1
    AllocAck_0_set.insert("IndividualAllocID_t_1343505528");
    AllocAck_0.add_attribute("IndAllocRejCode", "6"); // 1
    AllocAck_0_set.insert("6");
    AllocAck_0.add_attribute("Txt", "AllocText_t_1429918674"); // 1
    AllocAck_0_set.insert("AllocText_t_1429918674");
    AllocAck_0.add_attribute("EncAllocTextLen", "689245466"); // 1
    AllocAck_0_set.insert("689245466");
    AllocAck_0.add_attribute("EncAllocText", "EncodedAllocText_t_344366076"); // 1
    AllocAck_0_set.insert("EncodedAllocText_t_344366076");
    AllocAck_0.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_1063186573"); // 1
    AllocAck_0_set.insert("SecondaryIndividualAllocID_t_1063186573");
    AllocAck_0.add_attribute("CustCpcty", "AllocCustomerCapacity_t_1830991551"); // 1
    AllocAck_0_set.insert("AllocCustomerCapacity_t_1830991551");
    AllocAck_0.add_attribute("Typ", "1"); // 1
    AllocAck_0_set.insert("1");
    AllocAck_0.add_attribute("Qty", "19565940.330000"); // 1
    AllocAck_0_set.insert("19565940.330000");
    all_values.push_back(AllocAck_0_set);
    all_compo_names.insert("AllocAck_0_set");

    {
      xml_element Pty_17{"Pty"};
      multiset<string> Pty_17_set;
      Pty_17.add_attribute("ID", "NestedPartyID_t_1141038076"); // 2
      Pty_17_set.insert("NestedPartyID_t_1141038076");
      Pty_17.add_attribute("Src", "F"); // 2
      Pty_17_set.insert("F");
      Pty_17.add_attribute("R", "25"); // 2
      Pty_17_set.insert("25");
      all_values.push_back(Pty_17_set);
      all_compo_names.insert("Pty_17_set");

      {
        xml_element Sub_17{"Sub"};
        multiset<string> Sub_17_set;
        Sub_17.add_attribute("ID", "NestedPartySubID_t_2050789049"); // 3
        Sub_17_set.insert("NestedPartySubID_t_2050789049");
        Sub_17.add_attribute("Typ", "24"); // 3
        Sub_17_set.insert("24");
        all_values.push_back(Sub_17_set);
        all_compo_names.insert("Sub_17_set");

        Pty_17.add_element(Sub_17);
      }
      AllocAck_0.add_element(Pty_17);
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
