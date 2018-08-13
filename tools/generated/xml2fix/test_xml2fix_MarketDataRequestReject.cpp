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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MktDataReqRej" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDataRequestReject_message_t_0;
  elt.add_attribute("ReqID", "MDReqID_t_1416155767"); // 0
  MarketDataRequestReject_message_t_0.insert("MDReqID_t_1416155767");
  elt.add_attribute("ReqRejResn", "3"); // 0
  MarketDataRequestReject_message_t_0.insert("3");
  elt.add_attribute("Txt", "Text_t_1349338551"); // 0
  MarketDataRequestReject_message_t_0.insert("Text_t_1349338551");
  elt.add_attribute("EncTxtLen", "1828813391"); // 0
  MarketDataRequestReject_message_t_0.insert("1828813391");
  elt.add_attribute("EncTxt", "EncodedText_t_740983147"); // 0
  MarketDataRequestReject_message_t_0.insert("EncodedText_t_740983147");
  all_values.push_back(MarketDataRequestReject_message_t_0);
  all_compo_names.insert("MarketDataRequestReject_message_t");

  { // Hdr
    xml_element Hdr_41{"Hdr"};
    multiset<string> Hdr_41_set;
    Hdr_41.add_attribute("SeqNum", "1175797006"); // 1
    Hdr_41_set.insert("1175797006");
    Hdr_41.add_attribute("SID", "SenderCompID_t_904608519"); // 1
    Hdr_41_set.insert("SenderCompID_t_904608519");
    Hdr_41.add_attribute("TID", "TargetCompID_t_464779209"); // 1
    Hdr_41_set.insert("TargetCompID_t_464779209");
    Hdr_41.add_attribute("OBID", "OnBehalfOfCompID_t_1923722732"); // 1
    Hdr_41_set.insert("OnBehalfOfCompID_t_1923722732");
    Hdr_41.add_attribute("D2ID", "DeliverToCompID_t_213003996"); // 1
    Hdr_41_set.insert("DeliverToCompID_t_213003996");
    Hdr_41.add_attribute("SSub", "SenderSubID_t_84360591"); // 1
    Hdr_41_set.insert("SenderSubID_t_84360591");
    Hdr_41.add_attribute("SLoc", "SenderLocationID_t_637118693"); // 1
    Hdr_41_set.insert("SenderLocationID_t_637118693");
    Hdr_41.add_attribute("TSub", "TargetSubID_t_1008481804"); // 1
    Hdr_41_set.insert("TargetSubID_t_1008481804");
    Hdr_41.add_attribute("TLoc", "TargetLocationID_t_590886818"); // 1
    Hdr_41_set.insert("TargetLocationID_t_590886818");
    Hdr_41.add_attribute("OBSub", "OnBehalfOfSubID_t_1212397676"); // 1
    Hdr_41_set.insert("OnBehalfOfSubID_t_1212397676");
    Hdr_41.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1275058407"); // 1
    Hdr_41_set.insert("OnBehalfOfLocationID_t_1275058407");
    Hdr_41.add_attribute("D2Sub", "DeliverToSubID_t_238197455"); // 1
    Hdr_41_set.insert("DeliverToSubID_t_238197455");
    Hdr_41.add_attribute("D2Loc", "DeliverToLocationID_t_1364731361"); // 1
    Hdr_41_set.insert("DeliverToLocationID_t_1364731361");
    Hdr_41.add_attribute("PosDup", "Y"); // 1
    Hdr_41_set.insert("Y");
    Hdr_41.add_attribute("PosRsnd", "N"); // 1
    Hdr_41_set.insert("N");
    Hdr_41.add_attribute("Snt", "SendingTime_t_1245302534"); // 1
    Hdr_41_set.insert("SendingTime_t_1245302534");
    Hdr_41.add_attribute("OrigSnt", "OrigSendingTime_t_1095220400"); // 1
    Hdr_41_set.insert("OrigSendingTime_t_1095220400");
    Hdr_41.add_attribute("MsgEncd", "MessageEncoding_t_478824975"); // 1
    Hdr_41_set.insert("MessageEncoding_t_478824975");
    all_values.push_back(Hdr_41_set);
    all_compo_names.insert("Hdr_41_set");

    {
      xml_element Hop_41{"Hop"};
      multiset<string> Hop_41_set;
      Hop_41.add_attribute("ID", "HopCompID_t_1825586987"); // 2
      Hop_41_set.insert("HopCompID_t_1825586987");
      Hop_41.add_attribute("Ref", "689405570"); // 2
      Hop_41_set.insert("689405570");
      Hop_41.add_attribute("Snt", "HopSendingTime_t_864205647"); // 2
      Hop_41_set.insert("HopSendingTime_t_864205647");
      all_values.push_back(Hop_41_set);
      all_compo_names.insert("Hop_41_set");

      Hdr_41.add_element(Hop_41);
    }
    elt.add_element(Hdr_41);
  } // end Hdr
  { // Pty
    xml_element Pty_183{"Pty"};
    multiset<string> Pty_183_set;
    Pty_183.add_attribute("ID", "PartyID_t_1205807964"); // 1
    Pty_183_set.insert("PartyID_t_1205807964");
    Pty_183.add_attribute("Src", "B"); // 1
    Pty_183_set.insert("B");
    Pty_183.add_attribute("R", "4"); // 1
    Pty_183_set.insert("4");
    all_values.push_back(Pty_183_set);
    all_compo_names.insert("Pty_183_set");

    {
      xml_element Sub_183{"Sub"};
      multiset<string> Sub_183_set;
      Sub_183.add_attribute("ID", "PartySubID_t_727009880"); // 2
      Sub_183_set.insert("PartySubID_t_727009880");
      Sub_183.add_attribute("Typ", "25"); // 2
      Sub_183_set.insert("25");
      all_values.push_back(Sub_183_set);
      all_compo_names.insert("Sub_183_set");

      Pty_183.add_element(Sub_183);
    }
    elt.add_element(Pty_183);
  } // end Pty
  { // Pty
    xml_element Pty_184{"Pty"};
    multiset<string> Pty_184_set;
    Pty_184.add_attribute("ID", "PartyID_t_113267578"); // 1
    Pty_184_set.insert("PartyID_t_113267578");
    Pty_184.add_attribute("Src", "D"); // 1
    Pty_184_set.insert("D");
    Pty_184.add_attribute("R", "22"); // 1
    Pty_184_set.insert("22");
    all_values.push_back(Pty_184_set);
    all_compo_names.insert("Pty_184_set");

    {
      xml_element Sub_184{"Sub"};
      multiset<string> Sub_184_set;
      Sub_184.add_attribute("ID", "PartySubID_t_854250725"); // 2
      Sub_184_set.insert("PartySubID_t_854250725");
      Sub_184.add_attribute("Typ", "7"); // 2
      Sub_184_set.insert("7");
      all_values.push_back(Sub_184_set);
      all_compo_names.insert("Sub_184_set");

      Pty_184.add_element(Sub_184);
    }
    elt.add_element(Pty_184);
  } // end Pty
  { // Pty
    xml_element Pty_185{"Pty"};
    multiset<string> Pty_185_set;
    Pty_185.add_attribute("ID", "PartyID_t_82809190"); // 1
    Pty_185_set.insert("PartyID_t_82809190");
    Pty_185.add_attribute("Src", "G"); // 1
    Pty_185_set.insert("G");
    Pty_185.add_attribute("R", "22"); // 1
    Pty_185_set.insert("22");
    all_values.push_back(Pty_185_set);
    all_compo_names.insert("Pty_185_set");

    {
      xml_element Sub_185{"Sub"};
      multiset<string> Sub_185_set;
      Sub_185.add_attribute("ID", "PartySubID_t_295813186"); // 2
      Sub_185_set.insert("PartySubID_t_295813186");
      Sub_185.add_attribute("Typ", "5"); // 2
      Sub_185_set.insert("5");
      all_values.push_back(Sub_185_set);
      all_compo_names.insert("Sub_185_set");

      Pty_185.add_element(Sub_185);
    }
    elt.add_element(Pty_185);
  } // end Pty
  { // Rjct
    xml_element Rjct_0{"Rjct"};
    multiset<string> Rjct_0_set;
    Rjct_0.add_attribute("AltMDSrcID", "AltMDSourceID_t_1304294991"); // 1
    Rjct_0_set.insert("AltMDSourceID_t_1304294991");
    all_values.push_back(Rjct_0_set);
    all_compo_names.insert("Rjct_0_set");

    elt.add_element(Rjct_0);
  } // end Rjct
  { // Rjct
    xml_element Rjct_1{"Rjct"};
    multiset<string> Rjct_1_set;
    Rjct_1.add_attribute("AltMDSrcID", "AltMDSourceID_t_1994277344"); // 1
    Rjct_1_set.insert("AltMDSourceID_t_1994277344");
    all_values.push_back(Rjct_1_set);
    all_compo_names.insert("Rjct_1_set");

    elt.add_element(Rjct_1);
  } // end Rjct
  { // Rjct
    xml_element Rjct_2{"Rjct"};
    multiset<string> Rjct_2_set;
    Rjct_2.add_attribute("AltMDSrcID", "AltMDSourceID_t_582933596"); // 1
    Rjct_2_set.insert("AltMDSourceID_t_582933596");
    all_values.push_back(Rjct_2_set);
    all_compo_names.insert("Rjct_2_set");

    elt.add_element(Rjct_2);
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
