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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CnfmAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Confirmation_Ack_message_t_0;
  elt.add_attribute("CnfmID", "ConfirmID_t_867358911"); // 0
  Confirmation_Ack_message_t_0.insert("ConfirmID_t_867358911");
  elt.add_attribute("TrdDt", "TradeDate_t_1028912085"); // 0
  Confirmation_Ack_message_t_0.insert("TradeDate_t_1028912085");
  elt.add_attribute("TxnTm", "TransactTime_t_262681531"); // 0
  Confirmation_Ack_message_t_0.insert("TransactTime_t_262681531");
  elt.add_attribute("AffirmStat", "3"); // 0
  Confirmation_Ack_message_t_0.insert("3");
  elt.add_attribute("CnfmRejRsn", "99"); // 0
  Confirmation_Ack_message_t_0.insert("99");
  elt.add_attribute("MtchStat", "0"); // 0
  Confirmation_Ack_message_t_0.insert("0");
  elt.add_attribute("Txt", "Text_t_1095156249"); // 0
  Confirmation_Ack_message_t_0.insert("Text_t_1095156249");
  elt.add_attribute("EncTxtLen", "1676999541"); // 0
  Confirmation_Ack_message_t_0.insert("1676999541");
  elt.add_attribute("EncTxt", "EncodedText_t_1703044443"); // 0
  Confirmation_Ack_message_t_0.insert("EncodedText_t_1703044443");
  all_values.push_back(Confirmation_Ack_message_t_0);
  all_compo_names.insert("Confirmation_Ack_message_t");

  { // Hdr
    xml_element Hdr_21{"Hdr"};
    multiset<string> Hdr_21_set;
    Hdr_21.add_attribute("SeqNum", "1825583561"); // 1
    Hdr_21_set.insert("1825583561");
    Hdr_21.add_attribute("SID", "SenderCompID_t_2001699383"); // 1
    Hdr_21_set.insert("SenderCompID_t_2001699383");
    Hdr_21.add_attribute("TID", "TargetCompID_t_78633035"); // 1
    Hdr_21_set.insert("TargetCompID_t_78633035");
    Hdr_21.add_attribute("OBID", "OnBehalfOfCompID_t_1189092254"); // 1
    Hdr_21_set.insert("OnBehalfOfCompID_t_1189092254");
    Hdr_21.add_attribute("D2ID", "DeliverToCompID_t_33729996"); // 1
    Hdr_21_set.insert("DeliverToCompID_t_33729996");
    Hdr_21.add_attribute("SSub", "SenderSubID_t_1844732187"); // 1
    Hdr_21_set.insert("SenderSubID_t_1844732187");
    Hdr_21.add_attribute("SLoc", "SenderLocationID_t_34015781"); // 1
    Hdr_21_set.insert("SenderLocationID_t_34015781");
    Hdr_21.add_attribute("TSub", "TargetSubID_t_2118788897"); // 1
    Hdr_21_set.insert("TargetSubID_t_2118788897");
    Hdr_21.add_attribute("TLoc", "TargetLocationID_t_1287189530"); // 1
    Hdr_21_set.insert("TargetLocationID_t_1287189530");
    Hdr_21.add_attribute("OBSub", "OnBehalfOfSubID_t_1328848945"); // 1
    Hdr_21_set.insert("OnBehalfOfSubID_t_1328848945");
    Hdr_21.add_attribute("OBLoc", "OnBehalfOfLocationID_t_150761683"); // 1
    Hdr_21_set.insert("OnBehalfOfLocationID_t_150761683");
    Hdr_21.add_attribute("D2Sub", "DeliverToSubID_t_473505549"); // 1
    Hdr_21_set.insert("DeliverToSubID_t_473505549");
    Hdr_21.add_attribute("D2Loc", "DeliverToLocationID_t_1410314724"); // 1
    Hdr_21_set.insert("DeliverToLocationID_t_1410314724");
    Hdr_21.add_attribute("PosDup", "Y"); // 1
    Hdr_21_set.insert("Y");
    Hdr_21.add_attribute("PosRsnd", "Y"); // 1
    Hdr_21_set.insert("Y");
    Hdr_21.add_attribute("Snt", "SendingTime_t_268876813"); // 1
    Hdr_21_set.insert("SendingTime_t_268876813");
    Hdr_21.add_attribute("OrigSnt", "OrigSendingTime_t_613120939"); // 1
    Hdr_21_set.insert("OrigSendingTime_t_613120939");
    Hdr_21.add_attribute("MsgEncd", "MessageEncoding_t_1774910265"); // 1
    Hdr_21_set.insert("MessageEncoding_t_1774910265");
    all_values.push_back(Hdr_21_set);
    all_compo_names.insert("Hdr_21_set");

    {
      xml_element Hop_21{"Hop"};
      multiset<string> Hop_21_set;
      Hop_21.add_attribute("ID", "HopCompID_t_491208743"); // 2
      Hop_21_set.insert("HopCompID_t_491208743");
      Hop_21.add_attribute("Ref", "1736490844"); // 2
      Hop_21_set.insert("1736490844");
      Hop_21.add_attribute("Snt", "HopSendingTime_t_1847031412"); // 2
      Hop_21_set.insert("HopSendingTime_t_1847031412");
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
