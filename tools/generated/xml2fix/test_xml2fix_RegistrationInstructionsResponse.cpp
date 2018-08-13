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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"RgstInstrctnsRsp" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RegistrationInstructionsResponse_message_t_0;
  elt.add_attribute("ID", "RegistID_t_906176502"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("RegistID_t_906176502");
  elt.add_attribute("TransTyp", "1"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("1");
  elt.add_attribute("RefID", "RegistRefID_t_81336168"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("RegistRefID_t_81336168");
  elt.add_attribute("ClOrdID", "ClOrdID_t_292150069"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("ClOrdID_t_292150069");
  elt.add_attribute("Acct", "Account_t_419451166"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("Account_t_419451166");
  elt.add_attribute("AcctIDSrc", "3"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("3");
  elt.add_attribute("RegStat", "N"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("N");
  elt.add_attribute("RejRsnCd", "4"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("4");
  elt.add_attribute("Dtls", "RegistRejReasonText_t_1094944491"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("RegistRejReasonText_t_1094944491");
  all_values.push_back(RegistrationInstructionsResponse_message_t_0);
  all_compo_names.insert("RegistrationInstructionsResponse_message_t");

  { // Hdr
    xml_element Hdr_77{"Hdr"};
    multiset<string> Hdr_77_set;
    Hdr_77.add_attribute("SeqNum", "1179388616"); // 1
    Hdr_77_set.insert("1179388616");
    Hdr_77.add_attribute("SID", "SenderCompID_t_128424100"); // 1
    Hdr_77_set.insert("SenderCompID_t_128424100");
    Hdr_77.add_attribute("TID", "TargetCompID_t_127848859"); // 1
    Hdr_77_set.insert("TargetCompID_t_127848859");
    Hdr_77.add_attribute("OBID", "OnBehalfOfCompID_t_614515421"); // 1
    Hdr_77_set.insert("OnBehalfOfCompID_t_614515421");
    Hdr_77.add_attribute("D2ID", "DeliverToCompID_t_689531111"); // 1
    Hdr_77_set.insert("DeliverToCompID_t_689531111");
    Hdr_77.add_attribute("SSub", "SenderSubID_t_1108497119"); // 1
    Hdr_77_set.insert("SenderSubID_t_1108497119");
    Hdr_77.add_attribute("SLoc", "SenderLocationID_t_1266548790"); // 1
    Hdr_77_set.insert("SenderLocationID_t_1266548790");
    Hdr_77.add_attribute("TSub", "TargetSubID_t_1614495242"); // 1
    Hdr_77_set.insert("TargetSubID_t_1614495242");
    Hdr_77.add_attribute("TLoc", "TargetLocationID_t_851094798"); // 1
    Hdr_77_set.insert("TargetLocationID_t_851094798");
    Hdr_77.add_attribute("OBSub", "OnBehalfOfSubID_t_1731148051"); // 1
    Hdr_77_set.insert("OnBehalfOfSubID_t_1731148051");
    Hdr_77.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1984569748"); // 1
    Hdr_77_set.insert("OnBehalfOfLocationID_t_1984569748");
    Hdr_77.add_attribute("D2Sub", "DeliverToSubID_t_640795593"); // 1
    Hdr_77_set.insert("DeliverToSubID_t_640795593");
    Hdr_77.add_attribute("D2Loc", "DeliverToLocationID_t_180086267"); // 1
    Hdr_77_set.insert("DeliverToLocationID_t_180086267");
    Hdr_77.add_attribute("PosDup", "N"); // 1
    Hdr_77_set.insert("N");
    Hdr_77.add_attribute("PosRsnd", "Y"); // 1
    Hdr_77_set.insert("Y");
    Hdr_77.add_attribute("Snt", "SendingTime_t_819597527"); // 1
    Hdr_77_set.insert("SendingTime_t_819597527");
    Hdr_77.add_attribute("OrigSnt", "OrigSendingTime_t_1691243183"); // 1
    Hdr_77_set.insert("OrigSendingTime_t_1691243183");
    Hdr_77.add_attribute("MsgEncd", "MessageEncoding_t_881881762"); // 1
    Hdr_77_set.insert("MessageEncoding_t_881881762");
    all_values.push_back(Hdr_77_set);
    all_compo_names.insert("Hdr_77_set");

    {
      xml_element Hop_77{"Hop"};
      multiset<string> Hop_77_set;
      Hop_77.add_attribute("ID", "HopCompID_t_594556171"); // 2
      Hop_77_set.insert("HopCompID_t_594556171");
      Hop_77.add_attribute("Ref", "259900676"); // 2
      Hop_77_set.insert("259900676");
      Hop_77.add_attribute("Snt", "HopSendingTime_t_1537443729"); // 2
      Hop_77_set.insert("HopSendingTime_t_1537443729");
      all_values.push_back(Hop_77_set);
      all_compo_names.insert("Hop_77_set");

      Hdr_77.add_element(Hop_77);
    }
    elt.add_element(Hdr_77);
  } // end Hdr
  { // Pty
    xml_element Pty_384{"Pty"};
    multiset<string> Pty_384_set;
    Pty_384.add_attribute("ID", "PartyID_t_1166077178"); // 1
    Pty_384_set.insert("PartyID_t_1166077178");
    Pty_384.add_attribute("Src", "3"); // 1
    Pty_384_set.insert("3");
    Pty_384.add_attribute("R", "38"); // 1
    Pty_384_set.insert("38");
    all_values.push_back(Pty_384_set);
    all_compo_names.insert("Pty_384_set");

    {
      xml_element Sub_384{"Sub"};
      multiset<string> Sub_384_set;
      Sub_384.add_attribute("ID", "PartySubID_t_1458227247"); // 2
      Sub_384_set.insert("PartySubID_t_1458227247");
      Sub_384.add_attribute("Typ", "21"); // 2
      Sub_384_set.insert("21");
      all_values.push_back(Sub_384_set);
      all_compo_names.insert("Sub_384_set");

      Pty_384.add_element(Sub_384);
    }
    elt.add_element(Pty_384);
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
