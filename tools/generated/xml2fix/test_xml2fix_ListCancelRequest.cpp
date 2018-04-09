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
  elt.add_attribute("ID", "ListID_t_735665208"); // 0
  ListCancelRequest_message_t_0.insert("ListID_t_735665208");
  elt.add_attribute("TxnTm", "TransactTime_t_590287298"); // 0
  ListCancelRequest_message_t_0.insert("TransactTime_t_590287298");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_406362235"); // 0
  ListCancelRequest_message_t_0.insert("TradeOriginationDate_t_406362235");
  elt.add_attribute("TrdDt", "TradeDate_t_257719748"); // 0
  ListCancelRequest_message_t_0.insert("TradeDate_t_257719748");
  elt.add_attribute("Txt", "Text_t_1841051469"); // 0
  ListCancelRequest_message_t_0.insert("Text_t_1841051469");
  elt.add_attribute("EncTxtLen", "1244199781"); // 0
  ListCancelRequest_message_t_0.insert("1244199781");
  elt.add_attribute("EncTxt", "EncodedText_t_548065769"); // 0
  ListCancelRequest_message_t_0.insert("EncodedText_t_548065769");
  all_values.push_back(ListCancelRequest_message_t_0);
  all_compo_names.insert("ListCancelRequest_message_t");

  { // Hdr
    xml_element Hdr_34{"Hdr"};
    multiset<string> Hdr_34_set;
    Hdr_34.add_attribute("SeqNum", "2108162121"); // 1
    Hdr_34_set.insert("2108162121");
    Hdr_34.add_attribute("SID", "SenderCompID_t_1143731335"); // 1
    Hdr_34_set.insert("SenderCompID_t_1143731335");
    Hdr_34.add_attribute("TID", "TargetCompID_t_55151800"); // 1
    Hdr_34_set.insert("TargetCompID_t_55151800");
    Hdr_34.add_attribute("OBID", "OnBehalfOfCompID_t_45199905"); // 1
    Hdr_34_set.insert("OnBehalfOfCompID_t_45199905");
    Hdr_34.add_attribute("D2ID", "DeliverToCompID_t_628492239"); // 1
    Hdr_34_set.insert("DeliverToCompID_t_628492239");
    Hdr_34.add_attribute("SSub", "SenderSubID_t_1562787846"); // 1
    Hdr_34_set.insert("SenderSubID_t_1562787846");
    Hdr_34.add_attribute("SLoc", "SenderLocationID_t_1343627354"); // 1
    Hdr_34_set.insert("SenderLocationID_t_1343627354");
    Hdr_34.add_attribute("TSub", "TargetSubID_t_1371075008"); // 1
    Hdr_34_set.insert("TargetSubID_t_1371075008");
    Hdr_34.add_attribute("TLoc", "TargetLocationID_t_421851968"); // 1
    Hdr_34_set.insert("TargetLocationID_t_421851968");
    Hdr_34.add_attribute("OBSub", "OnBehalfOfSubID_t_1636092587"); // 1
    Hdr_34_set.insert("OnBehalfOfSubID_t_1636092587");
    Hdr_34.add_attribute("OBLoc", "OnBehalfOfLocationID_t_282817300"); // 1
    Hdr_34_set.insert("OnBehalfOfLocationID_t_282817300");
    Hdr_34.add_attribute("D2Sub", "DeliverToSubID_t_1594190234"); // 1
    Hdr_34_set.insert("DeliverToSubID_t_1594190234");
    Hdr_34.add_attribute("D2Loc", "DeliverToLocationID_t_832433107"); // 1
    Hdr_34_set.insert("DeliverToLocationID_t_832433107");
    Hdr_34.add_attribute("PosDup", "N"); // 1
    Hdr_34_set.insert("N");
    Hdr_34.add_attribute("PosRsnd", "N"); // 1
    Hdr_34_set.insert("N");
    Hdr_34.add_attribute("Snt", "SendingTime_t_1708619301"); // 1
    Hdr_34_set.insert("SendingTime_t_1708619301");
    Hdr_34.add_attribute("OrigSnt", "OrigSendingTime_t_6751480"); // 1
    Hdr_34_set.insert("OrigSendingTime_t_6751480");
    Hdr_34.add_attribute("MsgEncd", "MessageEncoding_t_2108653403"); // 1
    Hdr_34_set.insert("MessageEncoding_t_2108653403");
    all_values.push_back(Hdr_34_set);
    all_compo_names.insert("Hdr_34_set");

    {
      xml_element Hop_34{"Hop"};
      multiset<string> Hop_34_set;
      Hop_34.add_attribute("ID", "HopCompID_t_396671646"); // 2
      Hop_34_set.insert("HopCompID_t_396671646");
      Hop_34.add_attribute("Ref", "1282341348"); // 2
      Hop_34_set.insert("1282341348");
      Hop_34.add_attribute("Snt", "HopSendingTime_t_1537197157"); // 2
      Hop_34_set.insert("HopSendingTime_t_1537197157");
      all_values.push_back(Hop_34_set);
      all_compo_names.insert("Hop_34_set");

      Hdr_34.add_element(Hop_34);
    }
    elt.add_element(Hdr_34);
  } // end Hdr
  { // Pty
    xml_element Pty_156{"Pty"};
    multiset<string> Pty_156_set;
    Pty_156.add_attribute("ID", "PartyID_t_732892513"); // 1
    Pty_156_set.insert("PartyID_t_732892513");
    Pty_156.add_attribute("Src", "G"); // 1
    Pty_156_set.insert("G");
    Pty_156.add_attribute("R", "33"); // 1
    Pty_156_set.insert("33");
    all_values.push_back(Pty_156_set);
    all_compo_names.insert("Pty_156_set");

    {
      xml_element Sub_156{"Sub"};
      multiset<string> Sub_156_set;
      Sub_156.add_attribute("ID", "PartySubID_t_1323179811"); // 2
      Sub_156_set.insert("PartySubID_t_1323179811");
      Sub_156.add_attribute("Typ", "19"); // 2
      Sub_156_set.insert("19");
      all_values.push_back(Sub_156_set);
      all_compo_names.insert("Sub_156_set");

      Pty_156.add_element(Sub_156);
    }
    elt.add_element(Pty_156);
  } // end Pty
  { // Pty
    xml_element Pty_157{"Pty"};
    multiset<string> Pty_157_set;
    Pty_157.add_attribute("ID", "PartyID_t_1866919785"); // 1
    Pty_157_set.insert("PartyID_t_1866919785");
    Pty_157.add_attribute("Src", "B"); // 1
    Pty_157_set.insert("B");
    Pty_157.add_attribute("R", "57"); // 1
    Pty_157_set.insert("57");
    all_values.push_back(Pty_157_set);
    all_compo_names.insert("Pty_157_set");

    {
      xml_element Sub_157{"Sub"};
      multiset<string> Sub_157_set;
      Sub_157.add_attribute("ID", "PartySubID_t_267501907"); // 2
      Sub_157_set.insert("PartySubID_t_267501907");
      Sub_157.add_attribute("Typ", "31"); // 2
      Sub_157_set.insert("31");
      all_values.push_back(Sub_157_set);
      all_compo_names.insert("Sub_157_set");

      Pty_157.add_element(Sub_157);
    }
    elt.add_element(Pty_157);
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
