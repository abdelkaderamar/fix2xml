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
  elt.add_attribute("ID", "RegistID_t_1939582946"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("RegistID_t_1939582946");
  elt.add_attribute("TransTyp", "1"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("1");
  elt.add_attribute("RefID", "RegistRefID_t_1923075649"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("RegistRefID_t_1923075649");
  elt.add_attribute("ClOrdID", "ClOrdID_t_669520353"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("ClOrdID_t_669520353");
  elt.add_attribute("Acct", "Account_t_332595003"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("Account_t_332595003");
  elt.add_attribute("AcctIDSrc", "3"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("3");
  elt.add_attribute("RegStat", "A"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("A");
  elt.add_attribute("RejRsnCd", "4"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("4");
  elt.add_attribute("Dtls", "RegistRejReasonText_t_1468537320"); // 0
  RegistrationInstructionsResponse_message_t_0.insert("RegistRejReasonText_t_1468537320");
  all_values.push_back(RegistrationInstructionsResponse_message_t_0);
  all_compo_names.insert("RegistrationInstructionsResponse_message_t");

  { // Hdr
    xml_element Hdr_77{"Hdr"};
    multiset<string> Hdr_77_set;
    Hdr_77.add_attribute("SeqNum", "1962536999"); // 1
    Hdr_77_set.insert("1962536999");
    Hdr_77.add_attribute("SID", "SenderCompID_t_570583845"); // 1
    Hdr_77_set.insert("SenderCompID_t_570583845");
    Hdr_77.add_attribute("TID", "TargetCompID_t_2035979686"); // 1
    Hdr_77_set.insert("TargetCompID_t_2035979686");
    Hdr_77.add_attribute("OBID", "OnBehalfOfCompID_t_1843662763"); // 1
    Hdr_77_set.insert("OnBehalfOfCompID_t_1843662763");
    Hdr_77.add_attribute("D2ID", "DeliverToCompID_t_977046702"); // 1
    Hdr_77_set.insert("DeliverToCompID_t_977046702");
    Hdr_77.add_attribute("SSub", "SenderSubID_t_1854652977"); // 1
    Hdr_77_set.insert("SenderSubID_t_1854652977");
    Hdr_77.add_attribute("SLoc", "SenderLocationID_t_204573741"); // 1
    Hdr_77_set.insert("SenderLocationID_t_204573741");
    Hdr_77.add_attribute("TSub", "TargetSubID_t_1296955453"); // 1
    Hdr_77_set.insert("TargetSubID_t_1296955453");
    Hdr_77.add_attribute("TLoc", "TargetLocationID_t_262513939"); // 1
    Hdr_77_set.insert("TargetLocationID_t_262513939");
    Hdr_77.add_attribute("OBSub", "OnBehalfOfSubID_t_1434342774"); // 1
    Hdr_77_set.insert("OnBehalfOfSubID_t_1434342774");
    Hdr_77.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1314011673"); // 1
    Hdr_77_set.insert("OnBehalfOfLocationID_t_1314011673");
    Hdr_77.add_attribute("D2Sub", "DeliverToSubID_t_364944876"); // 1
    Hdr_77_set.insert("DeliverToSubID_t_364944876");
    Hdr_77.add_attribute("D2Loc", "DeliverToLocationID_t_1879822347"); // 1
    Hdr_77_set.insert("DeliverToLocationID_t_1879822347");
    Hdr_77.add_attribute("PosDup", "N"); // 1
    Hdr_77_set.insert("N");
    Hdr_77.add_attribute("PosRsnd", "N"); // 1
    Hdr_77_set.insert("N");
    Hdr_77.add_attribute("Snt", "SendingTime_t_2137845374"); // 1
    Hdr_77_set.insert("SendingTime_t_2137845374");
    Hdr_77.add_attribute("OrigSnt", "OrigSendingTime_t_2009372306"); // 1
    Hdr_77_set.insert("OrigSendingTime_t_2009372306");
    Hdr_77.add_attribute("MsgEncd", "MessageEncoding_t_35938515"); // 1
    Hdr_77_set.insert("MessageEncoding_t_35938515");
    all_values.push_back(Hdr_77_set);
    all_compo_names.insert("Hdr_77_set");

    {
      xml_element Hop_77{"Hop"};
      multiset<string> Hop_77_set;
      Hop_77.add_attribute("ID", "HopCompID_t_1408135750"); // 2
      Hop_77_set.insert("HopCompID_t_1408135750");
      Hop_77.add_attribute("Ref", "1408971340"); // 2
      Hop_77_set.insert("1408971340");
      Hop_77.add_attribute("Snt", "HopSendingTime_t_832334953"); // 2
      Hop_77_set.insert("HopSendingTime_t_832334953");
      all_values.push_back(Hop_77_set);
      all_compo_names.insert("Hop_77_set");

      Hdr_77.add_element(Hop_77);
    }
    elt.add_element(Hdr_77);
  } // end Hdr
  { // Pty
    xml_element Pty_356{"Pty"};
    multiset<string> Pty_356_set;
    Pty_356.add_attribute("ID", "PartyID_t_1201070638"); // 1
    Pty_356_set.insert("PartyID_t_1201070638");
    Pty_356.add_attribute("Src", "F"); // 1
    Pty_356_set.insert("F");
    Pty_356.add_attribute("R", "62"); // 1
    Pty_356_set.insert("62");
    all_values.push_back(Pty_356_set);
    all_compo_names.insert("Pty_356_set");

    {
      xml_element Sub_356{"Sub"};
      multiset<string> Sub_356_set;
      Sub_356.add_attribute("ID", "PartySubID_t_1870590991"); // 2
      Sub_356_set.insert("PartySubID_t_1870590991");
      Sub_356.add_attribute("Typ", "8"); // 2
      Sub_356_set.insert("8");
      all_values.push_back(Sub_356_set);
      all_compo_names.insert("Sub_356_set");

      Pty_356.add_element(Sub_356);
    }
    elt.add_element(Pty_356);
  } // end Pty
  { // Pty
    xml_element Pty_357{"Pty"};
    multiset<string> Pty_357_set;
    Pty_357.add_attribute("ID", "PartyID_t_692667636"); // 1
    Pty_357_set.insert("PartyID_t_692667636");
    Pty_357.add_attribute("Src", "C"); // 1
    Pty_357_set.insert("C");
    Pty_357.add_attribute("R", "29"); // 1
    Pty_357_set.insert("29");
    all_values.push_back(Pty_357_set);
    all_compo_names.insert("Pty_357_set");

    {
      xml_element Sub_357{"Sub"};
      multiset<string> Sub_357_set;
      Sub_357.add_attribute("ID", "PartySubID_t_13721309"); // 2
      Sub_357_set.insert("PartySubID_t_13721309");
      Sub_357.add_attribute("Typ", "11"); // 2
      Sub_357_set.insert("11");
      all_values.push_back(Sub_357_set);
      all_compo_names.insert("Sub_357_set");

      Pty_357.add_element(Sub_357);
    }
    elt.add_element(Pty_357);
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
