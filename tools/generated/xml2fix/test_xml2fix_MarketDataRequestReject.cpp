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
  elt.add_attribute("ReqID", "MDReqID_t_2070682609"); // 0
  MarketDataRequestReject_message_t_0.insert("MDReqID_t_2070682609");
  elt.add_attribute("ReqRejResn", "C"); // 0
  MarketDataRequestReject_message_t_0.insert("C");
  elt.add_attribute("Txt", "Text_t_480440697"); // 0
  MarketDataRequestReject_message_t_0.insert("Text_t_480440697");
  elt.add_attribute("EncTxtLen", "1412202430"); // 0
  MarketDataRequestReject_message_t_0.insert("1412202430");
  elt.add_attribute("EncTxt", "EncodedText_t_782568531"); // 0
  MarketDataRequestReject_message_t_0.insert("EncodedText_t_782568531");
  all_values.push_back(MarketDataRequestReject_message_t_0);
  all_compo_names.insert("MarketDataRequestReject_message_t");

  { // Hdr
    xml_element Hdr_41{"Hdr"};
    multiset<string> Hdr_41_set;
    Hdr_41.add_attribute("SeqNum", "1430161711"); // 1
    Hdr_41_set.insert("1430161711");
    Hdr_41.add_attribute("SID", "SenderCompID_t_1851026211"); // 1
    Hdr_41_set.insert("SenderCompID_t_1851026211");
    Hdr_41.add_attribute("TID", "TargetCompID_t_251555144"); // 1
    Hdr_41_set.insert("TargetCompID_t_251555144");
    Hdr_41.add_attribute("OBID", "OnBehalfOfCompID_t_45751571"); // 1
    Hdr_41_set.insert("OnBehalfOfCompID_t_45751571");
    Hdr_41.add_attribute("D2ID", "DeliverToCompID_t_668748628"); // 1
    Hdr_41_set.insert("DeliverToCompID_t_668748628");
    Hdr_41.add_attribute("SSub", "SenderSubID_t_1908747247"); // 1
    Hdr_41_set.insert("SenderSubID_t_1908747247");
    Hdr_41.add_attribute("SLoc", "SenderLocationID_t_1109441312"); // 1
    Hdr_41_set.insert("SenderLocationID_t_1109441312");
    Hdr_41.add_attribute("TSub", "TargetSubID_t_1106699125"); // 1
    Hdr_41_set.insert("TargetSubID_t_1106699125");
    Hdr_41.add_attribute("TLoc", "TargetLocationID_t_1443086372"); // 1
    Hdr_41_set.insert("TargetLocationID_t_1443086372");
    Hdr_41.add_attribute("OBSub", "OnBehalfOfSubID_t_1904602819"); // 1
    Hdr_41_set.insert("OnBehalfOfSubID_t_1904602819");
    Hdr_41.add_attribute("OBLoc", "OnBehalfOfLocationID_t_934115129"); // 1
    Hdr_41_set.insert("OnBehalfOfLocationID_t_934115129");
    Hdr_41.add_attribute("D2Sub", "DeliverToSubID_t_1579790454"); // 1
    Hdr_41_set.insert("DeliverToSubID_t_1579790454");
    Hdr_41.add_attribute("D2Loc", "DeliverToLocationID_t_665484434"); // 1
    Hdr_41_set.insert("DeliverToLocationID_t_665484434");
    Hdr_41.add_attribute("PosDup", "Y"); // 1
    Hdr_41_set.insert("Y");
    Hdr_41.add_attribute("PosRsnd", "Y"); // 1
    Hdr_41_set.insert("Y");
    Hdr_41.add_attribute("Snt", "SendingTime_t_1298308036"); // 1
    Hdr_41_set.insert("SendingTime_t_1298308036");
    Hdr_41.add_attribute("OrigSnt", "OrigSendingTime_t_693331468"); // 1
    Hdr_41_set.insert("OrigSendingTime_t_693331468");
    Hdr_41.add_attribute("MsgEncd", "MessageEncoding_t_1108406469"); // 1
    Hdr_41_set.insert("MessageEncoding_t_1108406469");
    all_values.push_back(Hdr_41_set);
    all_compo_names.insert("Hdr_41_set");

    {
      xml_element Hop_41{"Hop"};
      multiset<string> Hop_41_set;
      Hop_41.add_attribute("ID", "HopCompID_t_1493391527"); // 2
      Hop_41_set.insert("HopCompID_t_1493391527");
      Hop_41.add_attribute("Ref", "1232021917"); // 2
      Hop_41_set.insert("1232021917");
      Hop_41.add_attribute("Snt", "HopSendingTime_t_1711827404"); // 2
      Hop_41_set.insert("HopSendingTime_t_1711827404");
      all_values.push_back(Hop_41_set);
      all_compo_names.insert("Hop_41_set");

      Hdr_41.add_element(Hop_41);
    }
    elt.add_element(Hdr_41);
  } // end Hdr
  { // Pty
    xml_element Pty_174{"Pty"};
    multiset<string> Pty_174_set;
    Pty_174.add_attribute("ID", "PartyID_t_543451274"); // 1
    Pty_174_set.insert("PartyID_t_543451274");
    Pty_174.add_attribute("Src", "F"); // 1
    Pty_174_set.insert("F");
    Pty_174.add_attribute("R", "37"); // 1
    Pty_174_set.insert("37");
    all_values.push_back(Pty_174_set);
    all_compo_names.insert("Pty_174_set");

    {
      xml_element Sub_174{"Sub"};
      multiset<string> Sub_174_set;
      Sub_174.add_attribute("ID", "PartySubID_t_1749283334"); // 2
      Sub_174_set.insert("PartySubID_t_1749283334");
      Sub_174.add_attribute("Typ", "10"); // 2
      Sub_174_set.insert("10");
      all_values.push_back(Sub_174_set);
      all_compo_names.insert("Sub_174_set");

      Pty_174.add_element(Sub_174);
    }
    elt.add_element(Pty_174);
  } // end Pty
  { // Pty
    xml_element Pty_175{"Pty"};
    multiset<string> Pty_175_set;
    Pty_175.add_attribute("ID", "PartyID_t_1513691928"); // 1
    Pty_175_set.insert("PartyID_t_1513691928");
    Pty_175.add_attribute("Src", "4"); // 1
    Pty_175_set.insert("4");
    Pty_175.add_attribute("R", "39"); // 1
    Pty_175_set.insert("39");
    all_values.push_back(Pty_175_set);
    all_compo_names.insert("Pty_175_set");

    {
      xml_element Sub_175{"Sub"};
      multiset<string> Sub_175_set;
      Sub_175.add_attribute("ID", "PartySubID_t_148776811"); // 2
      Sub_175_set.insert("PartySubID_t_148776811");
      Sub_175.add_attribute("Typ", "24"); // 2
      Sub_175_set.insert("24");
      all_values.push_back(Sub_175_set);
      all_compo_names.insert("Sub_175_set");

      Pty_175.add_element(Sub_175);
    }
    elt.add_element(Pty_175);
  } // end Pty
  { // Pty
    xml_element Pty_176{"Pty"};
    multiset<string> Pty_176_set;
    Pty_176.add_attribute("ID", "PartyID_t_987768221"); // 1
    Pty_176_set.insert("PartyID_t_987768221");
    Pty_176.add_attribute("Src", "4"); // 1
    Pty_176_set.insert("4");
    Pty_176.add_attribute("R", "7"); // 1
    Pty_176_set.insert("7");
    all_values.push_back(Pty_176_set);
    all_compo_names.insert("Pty_176_set");

    {
      xml_element Sub_176{"Sub"};
      multiset<string> Sub_176_set;
      Sub_176.add_attribute("ID", "PartySubID_t_1656516849"); // 2
      Sub_176_set.insert("PartySubID_t_1656516849");
      Sub_176.add_attribute("Typ", "1"); // 2
      Sub_176_set.insert("1");
      all_values.push_back(Sub_176_set);
      all_compo_names.insert("Sub_176_set");

      Pty_176.add_element(Sub_176);
    }
    elt.add_element(Pty_176);
  } // end Pty
  { // Rjct
    xml_element Rjct_0{"Rjct"};
    multiset<string> Rjct_0_set;
    Rjct_0.add_attribute("AltMDSrcID", "AltMDSourceID_t_615732326"); // 1
    Rjct_0_set.insert("AltMDSourceID_t_615732326");
    all_values.push_back(Rjct_0_set);
    all_compo_names.insert("Rjct_0_set");

    elt.add_element(Rjct_0);
  } // end Rjct
  { // Rjct
    xml_element Rjct_1{"Rjct"};
    multiset<string> Rjct_1_set;
    Rjct_1.add_attribute("AltMDSrcID", "AltMDSourceID_t_1604681927"); // 1
    Rjct_1_set.insert("AltMDSourceID_t_1604681927");
    all_values.push_back(Rjct_1_set);
    all_compo_names.insert("Rjct_1_set");

    elt.add_element(Rjct_1);
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
