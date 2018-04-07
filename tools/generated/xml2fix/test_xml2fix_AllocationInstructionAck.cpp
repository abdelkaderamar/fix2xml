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
  elt.add_attribute("ID", "AllocID_t_1536411306"); // 0
  AllocationInstructionAck_message_t_0.insert("AllocID_t_1536411306");
  elt.add_attribute("ID2", "SecondaryAllocID_t_847153385"); // 0
  AllocationInstructionAck_message_t_0.insert("SecondaryAllocID_t_847153385");
  elt.add_attribute("TrdDt", "TradeDate_t_1625220777"); // 0
  AllocationInstructionAck_message_t_0.insert("TradeDate_t_1625220777");
  elt.add_attribute("TxnTm", "TransactTime_t_688821270"); // 0
  AllocationInstructionAck_message_t_0.insert("TransactTime_t_688821270");
  elt.add_attribute("Stat", "0"); // 0
  AllocationInstructionAck_message_t_0.insert("0");
  elt.add_attribute("RejCode", "8"); // 0
  AllocationInstructionAck_message_t_0.insert("8");
  elt.add_attribute("Typ", "11"); // 0
  AllocationInstructionAck_message_t_0.insert("11");
  elt.add_attribute("ImReqTyp", "4"); // 0
  AllocationInstructionAck_message_t_0.insert("4");
  elt.add_attribute("MtchStat", "0"); // 0
  AllocationInstructionAck_message_t_0.insert("0");
  elt.add_attribute("Prod", "5"); // 0
  AllocationInstructionAck_message_t_0.insert("5");
  elt.add_attribute("SecTyp", "CASH"); // 0
  AllocationInstructionAck_message_t_0.insert("CASH");
  elt.add_attribute("Txt", "Text_t_1021566529"); // 0
  AllocationInstructionAck_message_t_0.insert("Text_t_1021566529");
  elt.add_attribute("EncTxtLen", "1009713198"); // 0
  AllocationInstructionAck_message_t_0.insert("1009713198");
  elt.add_attribute("EncTxt", "EncodedText_t_243070676"); // 0
  AllocationInstructionAck_message_t_0.insert("EncodedText_t_243070676");
  all_values.push_back(AllocationInstructionAck_message_t_0);
  all_compo_names.insert("AllocationInstructionAck_message_t");

  { // Hdr
    xml_element Hdr_3{"Hdr"};
    multiset<string> Hdr_3_set;
    Hdr_3.add_attribute("SeqNum", "1304229771"); // 1
    Hdr_3_set.insert("1304229771");
    Hdr_3.add_attribute("SID", "SenderCompID_t_1635479935"); // 1
    Hdr_3_set.insert("SenderCompID_t_1635479935");
    Hdr_3.add_attribute("TID", "TargetCompID_t_495332330"); // 1
    Hdr_3_set.insert("TargetCompID_t_495332330");
    Hdr_3.add_attribute("OBID", "OnBehalfOfCompID_t_265570119"); // 1
    Hdr_3_set.insert("OnBehalfOfCompID_t_265570119");
    Hdr_3.add_attribute("D2ID", "DeliverToCompID_t_533419401"); // 1
    Hdr_3_set.insert("DeliverToCompID_t_533419401");
    Hdr_3.add_attribute("SSub", "SenderSubID_t_2089814364"); // 1
    Hdr_3_set.insert("SenderSubID_t_2089814364");
    Hdr_3.add_attribute("SLoc", "SenderLocationID_t_1045908094"); // 1
    Hdr_3_set.insert("SenderLocationID_t_1045908094");
    Hdr_3.add_attribute("TSub", "TargetSubID_t_1037370140"); // 1
    Hdr_3_set.insert("TargetSubID_t_1037370140");
    Hdr_3.add_attribute("TLoc", "TargetLocationID_t_735203930"); // 1
    Hdr_3_set.insert("TargetLocationID_t_735203930");
    Hdr_3.add_attribute("OBSub", "OnBehalfOfSubID_t_1691691338"); // 1
    Hdr_3_set.insert("OnBehalfOfSubID_t_1691691338");
    Hdr_3.add_attribute("OBLoc", "OnBehalfOfLocationID_t_149957010"); // 1
    Hdr_3_set.insert("OnBehalfOfLocationID_t_149957010");
    Hdr_3.add_attribute("D2Sub", "DeliverToSubID_t_327624990"); // 1
    Hdr_3_set.insert("DeliverToSubID_t_327624990");
    Hdr_3.add_attribute("D2Loc", "DeliverToLocationID_t_229711040"); // 1
    Hdr_3_set.insert("DeliverToLocationID_t_229711040");
    Hdr_3.add_attribute("PosDup", "N"); // 1
    Hdr_3_set.insert("N");
    Hdr_3.add_attribute("PosRsnd", "N"); // 1
    Hdr_3_set.insert("N");
    Hdr_3.add_attribute("Snt", "SendingTime_t_1096980470"); // 1
    Hdr_3_set.insert("SendingTime_t_1096980470");
    Hdr_3.add_attribute("OrigSnt", "OrigSendingTime_t_229932176"); // 1
    Hdr_3_set.insert("OrigSendingTime_t_229932176");
    Hdr_3.add_attribute("MsgEncd", "MessageEncoding_t_1556046138"); // 1
    Hdr_3_set.insert("MessageEncoding_t_1556046138");
    all_values.push_back(Hdr_3_set);
    all_compo_names.insert("Hdr_3_set");

    {
      xml_element Hop_3{"Hop"};
      multiset<string> Hop_3_set;
      Hop_3.add_attribute("ID", "HopCompID_t_1944133855"); // 2
      Hop_3_set.insert("HopCompID_t_1944133855");
      Hop_3.add_attribute("Ref", "1855152954"); // 2
      Hop_3_set.insert("1855152954");
      Hop_3.add_attribute("Snt", "HopSendingTime_t_97383760"); // 2
      Hop_3_set.insert("HopSendingTime_t_97383760");
      all_values.push_back(Hop_3_set);
      all_compo_names.insert("Hop_3_set");

      Hdr_3.add_element(Hop_3);
    }
    elt.add_element(Hdr_3);
  } // end Hdr
  { // Pty
    xml_element Pty_23{"Pty"};
    multiset<string> Pty_23_set;
    Pty_23.add_attribute("ID", "PartyID_t_643461253"); // 1
    Pty_23_set.insert("PartyID_t_643461253");
    Pty_23.add_attribute("Src", "H"); // 1
    Pty_23_set.insert("H");
    Pty_23.add_attribute("R", "20"); // 1
    Pty_23_set.insert("20");
    all_values.push_back(Pty_23_set);
    all_compo_names.insert("Pty_23_set");

    {
      xml_element Sub_23{"Sub"};
      multiset<string> Sub_23_set;
      Sub_23.add_attribute("ID", "PartySubID_t_1077005584"); // 2
      Sub_23_set.insert("PartySubID_t_1077005584");
      Sub_23.add_attribute("Typ", "25"); // 2
      Sub_23_set.insert("25");
      all_values.push_back(Sub_23_set);
      all_compo_names.insert("Sub_23_set");

      Pty_23.add_element(Sub_23);
    }
    elt.add_element(Pty_23);
  } // end Pty
  { // Pty
    xml_element Pty_24{"Pty"};
    multiset<string> Pty_24_set;
    Pty_24.add_attribute("ID", "PartyID_t_942520258"); // 1
    Pty_24_set.insert("PartyID_t_942520258");
    Pty_24.add_attribute("Src", "C"); // 1
    Pty_24_set.insert("C");
    Pty_24.add_attribute("R", "54"); // 1
    Pty_24_set.insert("54");
    all_values.push_back(Pty_24_set);
    all_compo_names.insert("Pty_24_set");

    {
      xml_element Sub_24{"Sub"};
      multiset<string> Sub_24_set;
      Sub_24.add_attribute("ID", "PartySubID_t_1185590934"); // 2
      Sub_24_set.insert("PartySubID_t_1185590934");
      Sub_24.add_attribute("Typ", "3"); // 2
      Sub_24_set.insert("3");
      all_values.push_back(Sub_24_set);
      all_compo_names.insert("Sub_24_set");

      Pty_24.add_element(Sub_24);
    }
    elt.add_element(Pty_24);
  } // end Pty
  { // Pty
    xml_element Pty_25{"Pty"};
    multiset<string> Pty_25_set;
    Pty_25.add_attribute("ID", "PartyID_t_2122149022"); // 1
    Pty_25_set.insert("PartyID_t_2122149022");
    Pty_25.add_attribute("Src", "G"); // 1
    Pty_25_set.insert("G");
    Pty_25.add_attribute("R", "66"); // 1
    Pty_25_set.insert("66");
    all_values.push_back(Pty_25_set);
    all_compo_names.insert("Pty_25_set");

    {
      xml_element Sub_25{"Sub"};
      multiset<string> Sub_25_set;
      Sub_25.add_attribute("ID", "PartySubID_t_508084775"); // 2
      Sub_25_set.insert("PartySubID_t_508084775");
      Sub_25.add_attribute("Typ", "3"); // 2
      Sub_25_set.insert("3");
      all_values.push_back(Sub_25_set);
      all_compo_names.insert("Sub_25_set");

      Pty_25.add_element(Sub_25);
    }
    elt.add_element(Pty_25);
  } // end Pty
  { // AllocAck
    xml_element AllocAck_0{"AllocAck"};
    multiset<string> AllocAck_0_set;
    AllocAck_0.add_attribute("Acct", "AllocAccount_t_1545454916"); // 1
    AllocAck_0_set.insert("AllocAccount_t_1545454916");
    AllocAck_0.add_attribute("ActIDSrc", "2"); // 1
    AllocAck_0_set.insert("2");
    AllocAck_0.add_attribute("Px", "21110041.410000"); // 1
    AllocAck_0_set.insert("21110041.410000");
    AllocAck_0.add_attribute("AllocPosEfct", "R"); // 1
    AllocAck_0_set.insert("R");
    AllocAck_0.add_attribute("IndAllocID", "IndividualAllocID_t_538599254"); // 1
    AllocAck_0_set.insert("IndividualAllocID_t_538599254");
    AllocAck_0.add_attribute("IndAllocRejCode", "12"); // 1
    AllocAck_0_set.insert("12");
    AllocAck_0.add_attribute("Txt", "AllocText_t_1065499336"); // 1
    AllocAck_0_set.insert("AllocText_t_1065499336");
    AllocAck_0.add_attribute("EncAllocTextLen", "558234086"); // 1
    AllocAck_0_set.insert("558234086");
    AllocAck_0.add_attribute("EncAllocText", "EncodedAllocText_t_1290212004"); // 1
    AllocAck_0_set.insert("EncodedAllocText_t_1290212004");
    AllocAck_0.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_1295431513"); // 1
    AllocAck_0_set.insert("SecondaryIndividualAllocID_t_1295431513");
    AllocAck_0.add_attribute("CustCpcty", "AllocCustomerCapacity_t_2114280224"); // 1
    AllocAck_0_set.insert("AllocCustomerCapacity_t_2114280224");
    AllocAck_0.add_attribute("Typ", "2"); // 1
    AllocAck_0_set.insert("2");
    AllocAck_0.add_attribute("Qty", "10031008.190000"); // 1
    AllocAck_0_set.insert("10031008.190000");
    all_values.push_back(AllocAck_0_set);
    all_compo_names.insert("AllocAck_0_set");

    {
      xml_element Pty_26{"Pty"};
      multiset<string> Pty_26_set;
      Pty_26.add_attribute("ID", "NestedPartyID_t_64180336"); // 2
      Pty_26_set.insert("NestedPartyID_t_64180336");
      Pty_26.add_attribute("Src", "4"); // 2
      Pty_26_set.insert("4");
      Pty_26.add_attribute("R", "9"); // 2
      Pty_26_set.insert("9");
      all_values.push_back(Pty_26_set);
      all_compo_names.insert("Pty_26_set");

      {
        xml_element Sub_26{"Sub"};
        multiset<string> Sub_26_set;
        Sub_26.add_attribute("ID", "NestedPartySubID_t_1320860343"); // 3
        Sub_26_set.insert("NestedPartySubID_t_1320860343");
        Sub_26.add_attribute("Typ", "15"); // 3
        Sub_26_set.insert("15");
        all_values.push_back(Sub_26_set);
        all_compo_names.insert("Sub_26_set");

        Pty_26.add_element(Sub_26);
      }
      AllocAck_0.add_element(Pty_26);
    }
    elt.add_element(AllocAck_0);
  } // end AllocAck
  { // AllocAck
    xml_element AllocAck_1{"AllocAck"};
    multiset<string> AllocAck_1_set;
    AllocAck_1.add_attribute("Acct", "AllocAccount_t_576084009"); // 1
    AllocAck_1_set.insert("AllocAccount_t_576084009");
    AllocAck_1.add_attribute("ActIDSrc", "1"); // 1
    AllocAck_1_set.insert("1");
    AllocAck_1.add_attribute("Px", "14093723.540000"); // 1
    AllocAck_1_set.insert("14093723.540000");
    AllocAck_1.add_attribute("AllocPosEfct", "R"); // 1
    AllocAck_1_set.insert("R");
    AllocAck_1.add_attribute("IndAllocID", "IndividualAllocID_t_1284485319"); // 1
    AllocAck_1_set.insert("IndividualAllocID_t_1284485319");
    AllocAck_1.add_attribute("IndAllocRejCode", "0"); // 1
    AllocAck_1_set.insert("0");
    AllocAck_1.add_attribute("Txt", "AllocText_t_1782490711"); // 1
    AllocAck_1_set.insert("AllocText_t_1782490711");
    AllocAck_1.add_attribute("EncAllocTextLen", "1259150693"); // 1
    AllocAck_1_set.insert("1259150693");
    AllocAck_1.add_attribute("EncAllocText", "EncodedAllocText_t_2128402905"); // 1
    AllocAck_1_set.insert("EncodedAllocText_t_2128402905");
    AllocAck_1.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_1155895420"); // 1
    AllocAck_1_set.insert("SecondaryIndividualAllocID_t_1155895420");
    AllocAck_1.add_attribute("CustCpcty", "AllocCustomerCapacity_t_1767235468"); // 1
    AllocAck_1_set.insert("AllocCustomerCapacity_t_1767235468");
    AllocAck_1.add_attribute("Typ", "2"); // 1
    AllocAck_1_set.insert("2");
    AllocAck_1.add_attribute("Qty", "15752082.230000"); // 1
    AllocAck_1_set.insert("15752082.230000");
    all_values.push_back(AllocAck_1_set);
    all_compo_names.insert("AllocAck_1_set");

    {
      xml_element Pty_27{"Pty"};
      multiset<string> Pty_27_set;
      Pty_27.add_attribute("ID", "NestedPartyID_t_1165206736"); // 2
      Pty_27_set.insert("NestedPartyID_t_1165206736");
      Pty_27.add_attribute("Src", "H"); // 2
      Pty_27_set.insert("H");
      Pty_27.add_attribute("R", "1"); // 2
      Pty_27_set.insert("1");
      all_values.push_back(Pty_27_set);
      all_compo_names.insert("Pty_27_set");

      {
        xml_element Sub_27{"Sub"};
        multiset<string> Sub_27_set;
        Sub_27.add_attribute("ID", "NestedPartySubID_t_713135015"); // 3
        Sub_27_set.insert("NestedPartySubID_t_713135015");
        Sub_27.add_attribute("Typ", "16"); // 3
        Sub_27_set.insert("16");
        all_values.push_back(Sub_27_set);
        all_compo_names.insert("Sub_27_set");

        Pty_27.add_element(Sub_27);
      }
      AllocAck_1.add_element(Pty_27);
    }
    elt.add_element(AllocAck_1);
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
