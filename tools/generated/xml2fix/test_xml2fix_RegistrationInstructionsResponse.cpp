#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/RegistrationInstructionsResponse.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RegistrationInstructionsResponse_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"RgstInstrctnsRsp" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RegistrationInstructionsResponse_message_t_0;
  elt.add_attribute("ID", "RegistID_t_1892073177"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("RegistID_t_1892073177");
  elt.add_attribute("TransTyp", "2"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("2");
  elt.add_attribute("RefID", "RegistRefID_t_690433145"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("RegistRefID_t_690433145");
  elt.add_attribute("ClOrdID", "ClOrdID_t_2042071891"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("ClOrdID_t_2042071891");
  elt.add_attribute("Acct", "Account_t_1063745223"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("Account_t_1063745223");
  elt.add_attribute("AcctIDSrc", "3"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("3");
  elt.add_attribute("RegStat", "A"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("A");
  elt.add_attribute("RejRsnCd", "16"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("16");
  elt.add_attribute("Dtls", "RegistRejReasonText_t_1250500680"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("RegistRejReasonText_t_1250500680");
  all_values.push_back(RegistrationInstructionsResponse_message_t_0);
  all_compo_names.insert("RegistrationInstructionsResponse_message_t");

  { // Hdr
    xml_element Hdr_77{"Hdr"};
    multiset<string> Hdr_77_set;
    Hdr_77.add_attribute("SeqNum", "1309155658"); // 1
    Hdr_77_set.insert("1309155658");
    Hdr_77.add_attribute("SID", "SenderCompID_t_2016569857"); // 1
    Hdr_77_set.insert("SenderCompID_t_2016569857");
    Hdr_77.add_attribute("TID", "TargetCompID_t_1032030128"); // 1
    Hdr_77_set.insert("TargetCompID_t_1032030128");
    Hdr_77.add_attribute("OBID", "OnBehalfOfCompID_t_660381565"); // 1
    Hdr_77_set.insert("OnBehalfOfCompID_t_660381565");
    Hdr_77.add_attribute("D2ID", "DeliverToCompID_t_1529306320"); // 1
    Hdr_77_set.insert("DeliverToCompID_t_1529306320");
    Hdr_77.add_attribute("SSub", "SenderSubID_t_735819572"); // 1
    Hdr_77_set.insert("SenderSubID_t_735819572");
    Hdr_77.add_attribute("SLoc", "SenderLocationID_t_1211104295"); // 1
    Hdr_77_set.insert("SenderLocationID_t_1211104295");
    Hdr_77.add_attribute("TSub", "TargetSubID_t_1528333645"); // 1
    Hdr_77_set.insert("TargetSubID_t_1528333645");
    Hdr_77.add_attribute("TLoc", "TargetLocationID_t_1274102508"); // 1
    Hdr_77_set.insert("TargetLocationID_t_1274102508");
    Hdr_77.add_attribute("OBSub", "OnBehalfOfSubID_t_1014387719"); // 1
    Hdr_77_set.insert("OnBehalfOfSubID_t_1014387719");
    Hdr_77.add_attribute("OBLoc", "OnBehalfOfLocationID_t_770443116"); // 1
    Hdr_77_set.insert("OnBehalfOfLocationID_t_770443116");
    Hdr_77.add_attribute("D2Sub", "DeliverToSubID_t_205462016"); // 1
    Hdr_77_set.insert("DeliverToSubID_t_205462016");
    Hdr_77.add_attribute("D2Loc", "DeliverToLocationID_t_483361393"); // 1
    Hdr_77_set.insert("DeliverToLocationID_t_483361393");
    Hdr_77.add_attribute("PosDup", "Y"); // 1
    Hdr_77_set.insert("Y");
    Hdr_77.add_attribute("PosRsnd", "Y"); // 1
    Hdr_77_set.insert("Y");
    Hdr_77.add_attribute("Snt", "SendingTime_t_1490369355"); // 1
    Hdr_77_set.insert("SendingTime_t_1490369355");
    Hdr_77.add_attribute("OrigSnt", "OrigSendingTime_t_1551046069"); // 1
    Hdr_77_set.insert("OrigSendingTime_t_1551046069");
    Hdr_77.add_attribute("MsgEncd", "MessageEncoding_t_2118216107"); // 1
    Hdr_77_set.insert("MessageEncoding_t_2118216107");
    all_values.push_back(Hdr_77_set);
    all_compo_names.insert("Hdr_77_set");

    {
      xml_element Hop_77{"Hop"};
      multiset<string> Hop_77_set;
      Hop_77.add_attribute("ID", "HopCompID_t_441849750"); // 2
      Hop_77_set.insert("HopCompID_t_441849750");
      Hop_77.add_attribute("Ref", "381963197"); // 2
      Hop_77_set.insert("381963197");
      Hop_77.add_attribute("Snt", "HopSendingTime_t_458401480"); // 2
      Hop_77_set.insert("HopSendingTime_t_458401480");
      all_values.push_back(Hop_77_set);
      all_compo_names.insert("Hop_77_set");

      Hdr_77.add_element(Hop_77);
    }
    elt.add_element(Hdr_77);
  } // end Hdr
  { // Pty
    xml_element Pty_386{"Pty"};
    multiset<string> Pty_386_set;
    Pty_386.add_attribute("ID", "PartyID_t_126552726"); // 1
    Pty_386_set.insert("PartyID_t_126552726");
    Pty_386.add_attribute("Src", "2"); // 1
    Pty_386_set.insert("2");
    Pty_386.add_attribute("R", "80"); // 1
    Pty_386_set.insert("80");
    all_values.push_back(Pty_386_set);
    all_compo_names.insert("Pty_386_set");

    {
      xml_element Sub_386{"Sub"};
      multiset<string> Sub_386_set;
      Sub_386.add_attribute("ID", "PartySubID_t_21140970"); // 2
      Sub_386_set.insert("PartySubID_t_21140970");
      Sub_386.add_attribute("Typ", "10"); // 2
      Sub_386_set.insert("10");
      all_values.push_back(Sub_386_set);
      all_compo_names.insert("Sub_386_set");

      Pty_386.add_element(Sub_386);
    }
    elt.add_element(Pty_386);
  } // end Pty
  { // Pty
    xml_element Pty_387{"Pty"};
    multiset<string> Pty_387_set;
    Pty_387.add_attribute("ID", "PartyID_t_1137901765"); // 1
    Pty_387_set.insert("PartyID_t_1137901765");
    Pty_387.add_attribute("Src", "F"); // 1
    Pty_387_set.insert("F");
    Pty_387.add_attribute("R", "35"); // 1
    Pty_387_set.insert("35");
    all_values.push_back(Pty_387_set);
    all_compo_names.insert("Pty_387_set");

    {
      xml_element Sub_387{"Sub"};
      multiset<string> Sub_387_set;
      Sub_387.add_attribute("ID", "PartySubID_t_240918797"); // 2
      Sub_387_set.insert("PartySubID_t_240918797");
      Sub_387.add_attribute("Typ", "17"); // 2
      Sub_387_set.insert("17");
      all_values.push_back(Sub_387_set);
      all_compo_names.insert("Sub_387_set");

      Pty_387.add_element(Sub_387);
    }
    elt.add_element(Pty_387);
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
