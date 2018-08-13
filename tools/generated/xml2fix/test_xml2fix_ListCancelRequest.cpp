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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ListCxlReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ListCancelRequest_message_t_0;
  elt.add_attribute("ID", "ListID_t_418331217"); // 0
  ListCancelRequest_message_t_0.insert("ListID_t_418331217");
  elt.add_attribute("TxnTm", "TransactTime_t_408240518"); // 0
  ListCancelRequest_message_t_0.insert("TransactTime_t_408240518");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_533522864"); // 0
  ListCancelRequest_message_t_0.insert("TradeOriginationDate_t_533522864");
  elt.add_attribute("TrdDt", "TradeDate_t_28643542"); // 0
  ListCancelRequest_message_t_0.insert("TradeDate_t_28643542");
  elt.add_attribute("Txt", "Text_t_1398172880"); // 0
  ListCancelRequest_message_t_0.insert("Text_t_1398172880");
  elt.add_attribute("EncTxtLen", "1355459937"); // 0
  ListCancelRequest_message_t_0.insert("1355459937");
  elt.add_attribute("EncTxt", "EncodedText_t_1034649117"); // 0
  ListCancelRequest_message_t_0.insert("EncodedText_t_1034649117");
  all_values.push_back(ListCancelRequest_message_t_0);
  all_compo_names.insert("ListCancelRequest_message_t");

  { // Hdr
    xml_element Hdr_34{"Hdr"};
    multiset<string> Hdr_34_set;
    Hdr_34.add_attribute("SeqNum", "2145264875"); // 1
    Hdr_34_set.insert("2145264875");
    Hdr_34.add_attribute("SID", "SenderCompID_t_1037649131"); // 1
    Hdr_34_set.insert("SenderCompID_t_1037649131");
    Hdr_34.add_attribute("TID", "TargetCompID_t_900037551"); // 1
    Hdr_34_set.insert("TargetCompID_t_900037551");
    Hdr_34.add_attribute("OBID", "OnBehalfOfCompID_t_645132196"); // 1
    Hdr_34_set.insert("OnBehalfOfCompID_t_645132196");
    Hdr_34.add_attribute("D2ID", "DeliverToCompID_t_705695689"); // 1
    Hdr_34_set.insert("DeliverToCompID_t_705695689");
    Hdr_34.add_attribute("SSub", "SenderSubID_t_1836023943"); // 1
    Hdr_34_set.insert("SenderSubID_t_1836023943");
    Hdr_34.add_attribute("SLoc", "SenderLocationID_t_202720248"); // 1
    Hdr_34_set.insert("SenderLocationID_t_202720248");
    Hdr_34.add_attribute("TSub", "TargetSubID_t_2079746359"); // 1
    Hdr_34_set.insert("TargetSubID_t_2079746359");
    Hdr_34.add_attribute("TLoc", "TargetLocationID_t_1701564315"); // 1
    Hdr_34_set.insert("TargetLocationID_t_1701564315");
    Hdr_34.add_attribute("OBSub", "OnBehalfOfSubID_t_997312585"); // 1
    Hdr_34_set.insert("OnBehalfOfSubID_t_997312585");
    Hdr_34.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1054048756"); // 1
    Hdr_34_set.insert("OnBehalfOfLocationID_t_1054048756");
    Hdr_34.add_attribute("D2Sub", "DeliverToSubID_t_149251950"); // 1
    Hdr_34_set.insert("DeliverToSubID_t_149251950");
    Hdr_34.add_attribute("D2Loc", "DeliverToLocationID_t_328117382"); // 1
    Hdr_34_set.insert("DeliverToLocationID_t_328117382");
    Hdr_34.add_attribute("PosDup", "N"); // 1
    Hdr_34_set.insert("N");
    Hdr_34.add_attribute("PosRsnd", "N"); // 1
    Hdr_34_set.insert("N");
    Hdr_34.add_attribute("Snt", "SendingTime_t_439575566"); // 1
    Hdr_34_set.insert("SendingTime_t_439575566");
    Hdr_34.add_attribute("OrigSnt", "OrigSendingTime_t_634662716"); // 1
    Hdr_34_set.insert("OrigSendingTime_t_634662716");
    Hdr_34.add_attribute("MsgEncd", "MessageEncoding_t_1099828939"); // 1
    Hdr_34_set.insert("MessageEncoding_t_1099828939");
    all_values.push_back(Hdr_34_set);
    all_compo_names.insert("Hdr_34_set");

    {
      xml_element Hop_34{"Hop"};
      multiset<string> Hop_34_set;
      Hop_34.add_attribute("ID", "HopCompID_t_874308665"); // 2
      Hop_34_set.insert("HopCompID_t_874308665");
      Hop_34.add_attribute("Ref", "1523681697"); // 2
      Hop_34_set.insert("1523681697");
      Hop_34.add_attribute("Snt", "HopSendingTime_t_1471587484"); // 2
      Hop_34_set.insert("HopSendingTime_t_1471587484");
      all_values.push_back(Hop_34_set);
      all_compo_names.insert("Hop_34_set");

      Hdr_34.add_element(Hop_34);
    }
    elt.add_element(Hdr_34);
  } // end Hdr
  { // Pty
    xml_element Pty_161{"Pty"};
    multiset<string> Pty_161_set;
    Pty_161.add_attribute("ID", "PartyID_t_17544258"); // 1
    Pty_161_set.insert("PartyID_t_17544258");
    Pty_161.add_attribute("Src", "1"); // 1
    Pty_161_set.insert("1");
    Pty_161.add_attribute("R", "66"); // 1
    Pty_161_set.insert("66");
    all_values.push_back(Pty_161_set);
    all_compo_names.insert("Pty_161_set");

    {
      xml_element Sub_161{"Sub"};
      multiset<string> Sub_161_set;
      Sub_161.add_attribute("ID", "PartySubID_t_425784777"); // 2
      Sub_161_set.insert("PartySubID_t_425784777");
      Sub_161.add_attribute("Typ", "20"); // 2
      Sub_161_set.insert("20");
      all_values.push_back(Sub_161_set);
      all_compo_names.insert("Sub_161_set");

      Pty_161.add_element(Sub_161);
    }
    elt.add_element(Pty_161);
  } // end Pty
  { // Pty
    xml_element Pty_162{"Pty"};
    multiset<string> Pty_162_set;
    Pty_162.add_attribute("ID", "PartyID_t_613180287"); // 1
    Pty_162_set.insert("PartyID_t_613180287");
    Pty_162.add_attribute("Src", "I"); // 1
    Pty_162_set.insert("I");
    Pty_162.add_attribute("R", "54"); // 1
    Pty_162_set.insert("54");
    all_values.push_back(Pty_162_set);
    all_compo_names.insert("Pty_162_set");

    {
      xml_element Sub_162{"Sub"};
      multiset<string> Sub_162_set;
      Sub_162.add_attribute("ID", "PartySubID_t_1647829404"); // 2
      Sub_162_set.insert("PartySubID_t_1647829404");
      Sub_162.add_attribute("Typ", "4"); // 2
      Sub_162_set.insert("4");
      all_values.push_back(Sub_162_set);
      all_compo_names.insert("Sub_162_set");

      Pty_162.add_element(Sub_162);
    }
    elt.add_element(Pty_162);
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
