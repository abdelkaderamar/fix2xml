#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDataRequestReject.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDataRequestReject_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MktDataReqRej" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDataRequestReject_message_t_0;
  elt.add_attribute("ReqID", "MDReqID_t_1304187159"); // 0
  MarketDataRequestReject_message_t_0.insert("MDReqID_t_1304187159");
  elt.add_attribute("ReqRejResn", "1"); // 0
  MarketDataRequestReject_message_t_0.insert("1");
  elt.add_attribute("Txt", "Text_t_471931999"); // 0
  MarketDataRequestReject_message_t_0.insert("Text_t_471931999");
  elt.add_attribute("EncTxtLen", "411009640"); // 0
  MarketDataRequestReject_message_t_0.insert("411009640");
  elt.add_attribute("EncTxt", "EncodedText_t_710296750"); // 0
  MarketDataRequestReject_message_t_0.insert("EncodedText_t_710296750");
  all_values.push_back(MarketDataRequestReject_message_t_0);
  all_compo_names.insert("MarketDataRequestReject_message_t");

  { // Hdr
    xml_element Hdr_41{"Hdr"};
    multiset<string> Hdr_41_set;
    Hdr_41.add_attribute("SeqNum", "221113126"); // 1
    Hdr_41_set.insert("221113126");
    Hdr_41.add_attribute("SID", "SenderCompID_t_269670869"); // 1
    Hdr_41_set.insert("SenderCompID_t_269670869");
    Hdr_41.add_attribute("TID", "TargetCompID_t_1157404074"); // 1
    Hdr_41_set.insert("TargetCompID_t_1157404074");
    Hdr_41.add_attribute("OBID", "OnBehalfOfCompID_t_1328357292"); // 1
    Hdr_41_set.insert("OnBehalfOfCompID_t_1328357292");
    Hdr_41.add_attribute("D2ID", "DeliverToCompID_t_1294298148"); // 1
    Hdr_41_set.insert("DeliverToCompID_t_1294298148");
    Hdr_41.add_attribute("SSub", "SenderSubID_t_416992690"); // 1
    Hdr_41_set.insert("SenderSubID_t_416992690");
    Hdr_41.add_attribute("SLoc", "SenderLocationID_t_219691965"); // 1
    Hdr_41_set.insert("SenderLocationID_t_219691965");
    Hdr_41.add_attribute("TSub", "TargetSubID_t_1284110474"); // 1
    Hdr_41_set.insert("TargetSubID_t_1284110474");
    Hdr_41.add_attribute("TLoc", "TargetLocationID_t_110187667"); // 1
    Hdr_41_set.insert("TargetLocationID_t_110187667");
    Hdr_41.add_attribute("OBSub", "OnBehalfOfSubID_t_377289028"); // 1
    Hdr_41_set.insert("OnBehalfOfSubID_t_377289028");
    Hdr_41.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2027217122"); // 1
    Hdr_41_set.insert("OnBehalfOfLocationID_t_2027217122");
    Hdr_41.add_attribute("D2Sub", "DeliverToSubID_t_180146040"); // 1
    Hdr_41_set.insert("DeliverToSubID_t_180146040");
    Hdr_41.add_attribute("D2Loc", "DeliverToLocationID_t_1069079602"); // 1
    Hdr_41_set.insert("DeliverToLocationID_t_1069079602");
    Hdr_41.add_attribute("PosDup", "N"); // 1
    Hdr_41_set.insert("N");
    Hdr_41.add_attribute("PosRsnd", "Y"); // 1
    Hdr_41_set.insert("Y");
    Hdr_41.add_attribute("Snt", "SendingTime_t_1257562952"); // 1
    Hdr_41_set.insert("SendingTime_t_1257562952");
    Hdr_41.add_attribute("OrigSnt", "OrigSendingTime_t_1675813373"); // 1
    Hdr_41_set.insert("OrigSendingTime_t_1675813373");
    Hdr_41.add_attribute("MsgEncd", "MessageEncoding_t_1635731531"); // 1
    Hdr_41_set.insert("MessageEncoding_t_1635731531");
    all_values.push_back(Hdr_41_set);
    all_compo_names.insert("Hdr_41_set");

    {
      xml_element Hop_41{"Hop"};
      multiset<string> Hop_41_set;
      Hop_41.add_attribute("ID", "HopCompID_t_2018765501"); // 2
      Hop_41_set.insert("HopCompID_t_2018765501");
      Hop_41.add_attribute("Ref", "565591342"); // 2
      Hop_41_set.insert("565591342");
      Hop_41.add_attribute("Snt", "HopSendingTime_t_1547186961"); // 2
      Hop_41_set.insert("HopSendingTime_t_1547186961");
      all_values.push_back(Hop_41_set);
      all_compo_names.insert("Hop_41_set");

      Hdr_41.add_element(Hop_41);
    }
    elt.add_element(Hdr_41);
  } // end Hdr
  { // Pty
    xml_element Pty_193{"Pty"};
    multiset<string> Pty_193_set;
    Pty_193.add_attribute("ID", "PartyID_t_1132235978"); // 1
    Pty_193_set.insert("PartyID_t_1132235978");
    Pty_193.add_attribute("Src", "H"); // 1
    Pty_193_set.insert("H");
    Pty_193.add_attribute("R", "43"); // 1
    Pty_193_set.insert("43");
    all_values.push_back(Pty_193_set);
    all_compo_names.insert("Pty_193_set");

    {
      xml_element Sub_193{"Sub"};
      multiset<string> Sub_193_set;
      Sub_193.add_attribute("ID", "PartySubID_t_1018898527"); // 2
      Sub_193_set.insert("PartySubID_t_1018898527");
      Sub_193.add_attribute("Typ", "4"); // 2
      Sub_193_set.insert("4");
      all_values.push_back(Sub_193_set);
      all_compo_names.insert("Sub_193_set");

      Pty_193.add_element(Sub_193);
    }
    elt.add_element(Pty_193);
  } // end Pty
  { // Pty
    xml_element Pty_194{"Pty"};
    multiset<string> Pty_194_set;
    Pty_194.add_attribute("ID", "PartyID_t_1694434097"); // 1
    Pty_194_set.insert("PartyID_t_1694434097");
    Pty_194.add_attribute("Src", "3"); // 1
    Pty_194_set.insert("3");
    Pty_194.add_attribute("R", "25"); // 1
    Pty_194_set.insert("25");
    all_values.push_back(Pty_194_set);
    all_compo_names.insert("Pty_194_set");

    {
      xml_element Sub_194{"Sub"};
      multiset<string> Sub_194_set;
      Sub_194.add_attribute("ID", "PartySubID_t_257247199"); // 2
      Sub_194_set.insert("PartySubID_t_257247199");
      Sub_194.add_attribute("Typ", "21"); // 2
      Sub_194_set.insert("21");
      all_values.push_back(Sub_194_set);
      all_compo_names.insert("Sub_194_set");

      Pty_194.add_element(Sub_194);
    }
    elt.add_element(Pty_194);
  } // end Pty
  { // Rjct
    xml_element Rjct_0{"Rjct"};
    multiset<string> Rjct_0_set;
    Rjct_0.add_attribute("AltMDSrcID", "AltMDSourceID_t_1414651273"); // 1
    Rjct_0_set.insert("AltMDSourceID_t_1414651273");
    all_values.push_back(Rjct_0_set);
    all_compo_names.insert("Rjct_0_set");

    elt.add_element(Rjct_0);
  } // end Rjct
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
