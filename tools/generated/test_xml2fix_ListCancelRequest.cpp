#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ListCancelRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ListCancelRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ListCxlReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ListCancelRequest_message_t_0;
  elt.add_attribute("ID", "ListID_t_419726052"); // 0
  ListCancelRequest_message_t_0.insert("ListID_t_419726052");
  elt.add_attribute("TxnTm", "TransactTime_t_1969090168"); // 0
  ListCancelRequest_message_t_0.insert("TransactTime_t_1969090168");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_2094137903"); // 0
  ListCancelRequest_message_t_0.insert("TradeOriginationDate_t_2094137903");
  elt.add_attribute("TrdDt", "TradeDate_t_413149257"); // 0
  ListCancelRequest_message_t_0.insert("TradeDate_t_413149257");
  elt.add_attribute("Txt", "Text_t_1408319638"); // 0
  ListCancelRequest_message_t_0.insert("Text_t_1408319638");
  elt.add_attribute("EncTxtLen", "988076184"); // 0
  ListCancelRequest_message_t_0.insert("988076184");
  elt.add_attribute("EncTxt", "EncodedText_t_610126754"); // 0
  ListCancelRequest_message_t_0.insert("EncodedText_t_610126754");
  all_values.push_back(ListCancelRequest_message_t_0);
  all_compo_names.insert("ListCancelRequest_message_t");

  { // Hdr
    xml_element Hdr_34{"Hdr"};
    multiset<string> Hdr_34_set;
    Hdr_34.add_attribute("SeqNum", "1462148866"); // 1
    Hdr_34_set.insert("1462148866");
    Hdr_34.add_attribute("SID", "SenderCompID_t_1430732063"); // 1
    Hdr_34_set.insert("SenderCompID_t_1430732063");
    Hdr_34.add_attribute("TID", "TargetCompID_t_1430992024"); // 1
    Hdr_34_set.insert("TargetCompID_t_1430992024");
    Hdr_34.add_attribute("OBID", "OnBehalfOfCompID_t_1288267310"); // 1
    Hdr_34_set.insert("OnBehalfOfCompID_t_1288267310");
    Hdr_34.add_attribute("D2ID", "DeliverToCompID_t_1548172011"); // 1
    Hdr_34_set.insert("DeliverToCompID_t_1548172011");
    Hdr_34.add_attribute("SSub", "SenderSubID_t_580642150"); // 1
    Hdr_34_set.insert("SenderSubID_t_580642150");
    Hdr_34.add_attribute("SLoc", "SenderLocationID_t_564538001"); // 1
    Hdr_34_set.insert("SenderLocationID_t_564538001");
    Hdr_34.add_attribute("TSub", "TargetSubID_t_1104427046"); // 1
    Hdr_34_set.insert("TargetSubID_t_1104427046");
    Hdr_34.add_attribute("TLoc", "TargetLocationID_t_2079156815"); // 1
    Hdr_34_set.insert("TargetLocationID_t_2079156815");
    Hdr_34.add_attribute("OBSub", "OnBehalfOfSubID_t_881397392"); // 1
    Hdr_34_set.insert("OnBehalfOfSubID_t_881397392");
    Hdr_34.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1721847669"); // 1
    Hdr_34_set.insert("OnBehalfOfLocationID_t_1721847669");
    Hdr_34.add_attribute("D2Sub", "DeliverToSubID_t_192245463"); // 1
    Hdr_34_set.insert("DeliverToSubID_t_192245463");
    Hdr_34.add_attribute("D2Loc", "DeliverToLocationID_t_2021610481"); // 1
    Hdr_34_set.insert("DeliverToLocationID_t_2021610481");
    Hdr_34.add_attribute("PosDup", "N"); // 1
    Hdr_34_set.insert("N");
    Hdr_34.add_attribute("PosRsnd", "N"); // 1
    Hdr_34_set.insert("N");
    Hdr_34.add_attribute("Snt", "SendingTime_t_637829589"); // 1
    Hdr_34_set.insert("SendingTime_t_637829589");
    Hdr_34.add_attribute("OrigSnt", "OrigSendingTime_t_1948439495"); // 1
    Hdr_34_set.insert("OrigSendingTime_t_1948439495");
    Hdr_34.add_attribute("MsgEncd", "MessageEncoding_t_1187672049"); // 1
    Hdr_34_set.insert("MessageEncoding_t_1187672049");
    all_values.push_back(Hdr_34_set);
    all_compo_names.insert("Hdr_34_set");

    {
      xml_element Hop_34{"Hop"};
      multiset<string> Hop_34_set;
      Hop_34.add_attribute("ID", "HopCompID_t_134989222"); // 2
      Hop_34_set.insert("HopCompID_t_134989222");
      Hop_34.add_attribute("Ref", "950550547"); // 2
      Hop_34_set.insert("950550547");
      Hop_34.add_attribute("Snt", "HopSendingTime_t_1801756201"); // 2
      Hop_34_set.insert("HopSendingTime_t_1801756201");
      all_values.push_back(Hop_34_set);
      all_compo_names.insert("Hop_34_set");

      Hdr_34.add_element(Hop_34);
    }
    elt.add_element(Hdr_34);
  } // end Hdr
  { // Pty
    xml_element Pty_177{"Pty"};
    multiset<string> Pty_177_set;
    Pty_177.add_attribute("ID", "PartyID_t_709736988"); // 1
    Pty_177_set.insert("PartyID_t_709736988");
    Pty_177.add_attribute("Src", "B"); // 1
    Pty_177_set.insert("B");
    Pty_177.add_attribute("R", "8"); // 1
    Pty_177_set.insert("8");
    all_values.push_back(Pty_177_set);
    all_compo_names.insert("Pty_177_set");

    {
      xml_element Sub_177{"Sub"};
      multiset<string> Sub_177_set;
      Sub_177.add_attribute("ID", "PartySubID_t_531343508"); // 2
      Sub_177_set.insert("PartySubID_t_531343508");
      Sub_177.add_attribute("Typ", "22"); // 2
      Sub_177_set.insert("22");
      all_values.push_back(Sub_177_set);
      all_compo_names.insert("Sub_177_set");

      Pty_177.add_element(Sub_177);
    }
    elt.add_element(Pty_177);
  } // end Pty
  { // Pty
    xml_element Pty_178{"Pty"};
    multiset<string> Pty_178_set;
    Pty_178.add_attribute("ID", "PartyID_t_736790876"); // 1
    Pty_178_set.insert("PartyID_t_736790876");
    Pty_178.add_attribute("Src", "E"); // 1
    Pty_178_set.insert("E");
    Pty_178.add_attribute("R", "57"); // 1
    Pty_178_set.insert("57");
    all_values.push_back(Pty_178_set);
    all_compo_names.insert("Pty_178_set");

    {
      xml_element Sub_178{"Sub"};
      multiset<string> Sub_178_set;
      Sub_178.add_attribute("ID", "PartySubID_t_1346917630"); // 2
      Sub_178_set.insert("PartySubID_t_1346917630");
      Sub_178.add_attribute("Typ", "23"); // 2
      Sub_178_set.insert("23");
      all_values.push_back(Sub_178_set);
      all_compo_names.insert("Sub_178_set");

      Pty_178.add_element(Sub_178);
    }
    elt.add_element(Pty_178);
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
