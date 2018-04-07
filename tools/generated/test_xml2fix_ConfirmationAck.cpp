#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ConfirmationAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Confirmation_Ack_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CnfmAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Confirmation_Ack_message_t_0;
  elt.add_attribute("CnfmID", "ConfirmID_t_709132078"); // 0
  Confirmation_Ack_message_t_0.insert("ConfirmID_t_709132078");
  elt.add_attribute("TrdDt", "TradeDate_t_6995476"); // 0
  Confirmation_Ack_message_t_0.insert("TradeDate_t_6995476");
  elt.add_attribute("TxnTm", "TransactTime_t_1468780121"); // 0
  Confirmation_Ack_message_t_0.insert("TransactTime_t_1468780121");
  elt.add_attribute("AffirmStat", "2"); // 0
  Confirmation_Ack_message_t_0.insert("2");
  elt.add_attribute("CnfmRejRsn", "1"); // 0
  Confirmation_Ack_message_t_0.insert("1");
  elt.add_attribute("MtchStat", "2"); // 0
  Confirmation_Ack_message_t_0.insert("2");
  elt.add_attribute("Txt", "Text_t_2114699764"); // 0
  Confirmation_Ack_message_t_0.insert("Text_t_2114699764");
  elt.add_attribute("EncTxtLen", "1019801367"); // 0
  Confirmation_Ack_message_t_0.insert("1019801367");
  elt.add_attribute("EncTxt", "EncodedText_t_1423792060"); // 0
  Confirmation_Ack_message_t_0.insert("EncodedText_t_1423792060");
  all_values.push_back(Confirmation_Ack_message_t_0);
  all_compo_names.insert("Confirmation_Ack_message_t");

  { // Hdr
    xml_element Hdr_21{"Hdr"};
    multiset<string> Hdr_21_set;
    Hdr_21.add_attribute("SeqNum", "1513807151"); // 1
    Hdr_21_set.insert("1513807151");
    Hdr_21.add_attribute("SID", "SenderCompID_t_1346003494"); // 1
    Hdr_21_set.insert("SenderCompID_t_1346003494");
    Hdr_21.add_attribute("TID", "TargetCompID_t_1074447739"); // 1
    Hdr_21_set.insert("TargetCompID_t_1074447739");
    Hdr_21.add_attribute("OBID", "OnBehalfOfCompID_t_1836189173"); // 1
    Hdr_21_set.insert("OnBehalfOfCompID_t_1836189173");
    Hdr_21.add_attribute("D2ID", "DeliverToCompID_t_1452826473"); // 1
    Hdr_21_set.insert("DeliverToCompID_t_1452826473");
    Hdr_21.add_attribute("SSub", "SenderSubID_t_1818637391"); // 1
    Hdr_21_set.insert("SenderSubID_t_1818637391");
    Hdr_21.add_attribute("SLoc", "SenderLocationID_t_1890204625"); // 1
    Hdr_21_set.insert("SenderLocationID_t_1890204625");
    Hdr_21.add_attribute("TSub", "TargetSubID_t_666126872"); // 1
    Hdr_21_set.insert("TargetSubID_t_666126872");
    Hdr_21.add_attribute("TLoc", "TargetLocationID_t_2092306753"); // 1
    Hdr_21_set.insert("TargetLocationID_t_2092306753");
    Hdr_21.add_attribute("OBSub", "OnBehalfOfSubID_t_1714945532"); // 1
    Hdr_21_set.insert("OnBehalfOfSubID_t_1714945532");
    Hdr_21.add_attribute("OBLoc", "OnBehalfOfLocationID_t_816236835"); // 1
    Hdr_21_set.insert("OnBehalfOfLocationID_t_816236835");
    Hdr_21.add_attribute("D2Sub", "DeliverToSubID_t_1713714609"); // 1
    Hdr_21_set.insert("DeliverToSubID_t_1713714609");
    Hdr_21.add_attribute("D2Loc", "DeliverToLocationID_t_54969004"); // 1
    Hdr_21_set.insert("DeliverToLocationID_t_54969004");
    Hdr_21.add_attribute("PosDup", "Y"); // 1
    Hdr_21_set.insert("Y");
    Hdr_21.add_attribute("PosRsnd", "Y"); // 1
    Hdr_21_set.insert("Y");
    Hdr_21.add_attribute("Snt", "SendingTime_t_1339123886"); // 1
    Hdr_21_set.insert("SendingTime_t_1339123886");
    Hdr_21.add_attribute("OrigSnt", "OrigSendingTime_t_788225413"); // 1
    Hdr_21_set.insert("OrigSendingTime_t_788225413");
    Hdr_21.add_attribute("MsgEncd", "MessageEncoding_t_995762691"); // 1
    Hdr_21_set.insert("MessageEncoding_t_995762691");
    all_values.push_back(Hdr_21_set);
    all_compo_names.insert("Hdr_21_set");

    {
      xml_element Hop_21{"Hop"};
      multiset<string> Hop_21_set;
      Hop_21.add_attribute("ID", "HopCompID_t_1721839417"); // 2
      Hop_21_set.insert("HopCompID_t_1721839417");
      Hop_21.add_attribute("Ref", "1903126421"); // 2
      Hop_21_set.insert("1903126421");
      Hop_21.add_attribute("Snt", "HopSendingTime_t_1061654889"); // 2
      Hop_21_set.insert("HopSendingTime_t_1061654889");
      all_values.push_back(Hop_21_set);
      all_compo_names.insert("Hop_21_set");

      Hdr_21.add_element(Hop_21);
    }
    elt.add_element(Hdr_21);
  } // end Hdr
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
