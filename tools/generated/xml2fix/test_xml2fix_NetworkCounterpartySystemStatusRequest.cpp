#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/NetworkCounterpartySystemStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( NetworkCounterpartySystemStatusRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"NtwkSysStatReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NetworkCounterpartySystemStatusRequest_message_t_0;
  elt.add_attribute("NtwkReqTyp", "4"); // 0
  NetworkCounterpartySystemStatusRequest_message_t_0.insert("4");
  elt.add_attribute("NtwkReqID", "NetworkRequestID_t_1285047643"); // 0
  NetworkCounterpartySystemStatusRequest_message_t_0.insert("NetworkRequestID_t_1285047643");
  all_values.push_back(NetworkCounterpartySystemStatusRequest_message_t_0);
  all_compo_names.insert("NetworkCounterpartySystemStatusRequest_message_t");

  { // Hdr
    xml_element Hdr_49{"Hdr"};
    multiset<string> Hdr_49_set;
    Hdr_49.add_attribute("SeqNum", "560560421"); // 1
    Hdr_49_set.insert("560560421");
    Hdr_49.add_attribute("SID", "SenderCompID_t_1314156479"); // 1
    Hdr_49_set.insert("SenderCompID_t_1314156479");
    Hdr_49.add_attribute("TID", "TargetCompID_t_1236033292"); // 1
    Hdr_49_set.insert("TargetCompID_t_1236033292");
    Hdr_49.add_attribute("OBID", "OnBehalfOfCompID_t_1247786149"); // 1
    Hdr_49_set.insert("OnBehalfOfCompID_t_1247786149");
    Hdr_49.add_attribute("D2ID", "DeliverToCompID_t_1671984224"); // 1
    Hdr_49_set.insert("DeliverToCompID_t_1671984224");
    Hdr_49.add_attribute("SSub", "SenderSubID_t_281218876"); // 1
    Hdr_49_set.insert("SenderSubID_t_281218876");
    Hdr_49.add_attribute("SLoc", "SenderLocationID_t_694900774"); // 1
    Hdr_49_set.insert("SenderLocationID_t_694900774");
    Hdr_49.add_attribute("TSub", "TargetSubID_t_304127894"); // 1
    Hdr_49_set.insert("TargetSubID_t_304127894");
    Hdr_49.add_attribute("TLoc", "TargetLocationID_t_617125519"); // 1
    Hdr_49_set.insert("TargetLocationID_t_617125519");
    Hdr_49.add_attribute("OBSub", "OnBehalfOfSubID_t_207921794"); // 1
    Hdr_49_set.insert("OnBehalfOfSubID_t_207921794");
    Hdr_49.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1792352346"); // 1
    Hdr_49_set.insert("OnBehalfOfLocationID_t_1792352346");
    Hdr_49.add_attribute("D2Sub", "DeliverToSubID_t_424445494"); // 1
    Hdr_49_set.insert("DeliverToSubID_t_424445494");
    Hdr_49.add_attribute("D2Loc", "DeliverToLocationID_t_1509702213"); // 1
    Hdr_49_set.insert("DeliverToLocationID_t_1509702213");
    Hdr_49.add_attribute("PosDup", "Y"); // 1
    Hdr_49_set.insert("Y");
    Hdr_49.add_attribute("PosRsnd", "N"); // 1
    Hdr_49_set.insert("N");
    Hdr_49.add_attribute("Snt", "SendingTime_t_708306779"); // 1
    Hdr_49_set.insert("SendingTime_t_708306779");
    Hdr_49.add_attribute("OrigSnt", "OrigSendingTime_t_614917817"); // 1
    Hdr_49_set.insert("OrigSendingTime_t_614917817");
    Hdr_49.add_attribute("MsgEncd", "MessageEncoding_t_204510301"); // 1
    Hdr_49_set.insert("MessageEncoding_t_204510301");
    all_values.push_back(Hdr_49_set);
    all_compo_names.insert("Hdr_49_set");

    {
      xml_element Hop_49{"Hop"};
      multiset<string> Hop_49_set;
      Hop_49.add_attribute("ID", "HopCompID_t_877882286"); // 2
      Hop_49_set.insert("HopCompID_t_877882286");
      Hop_49.add_attribute("Ref", "1071477096"); // 2
      Hop_49_set.insert("1071477096");
      Hop_49.add_attribute("Snt", "HopSendingTime_t_1504382445"); // 2
      Hop_49_set.insert("HopSendingTime_t_1504382445");
      all_values.push_back(Hop_49_set);
      all_compo_names.insert("Hop_49_set");

      Hdr_49.add_element(Hop_49);
    }
    elt.add_element(Hdr_49);
  } // end Hdr
  { // CIDReq
    xml_element CIDReq_0{"CIDReq"};
    multiset<string> CIDReq_0_set;
    CIDReq_0.add_attribute("RefCompID", "RefCompID_t_373812451"); // 1
    CIDReq_0_set.insert("RefCompID_t_373812451");
    CIDReq_0.add_attribute("RefSubID", "RefSubID_t_604027666"); // 1
    CIDReq_0_set.insert("RefSubID_t_604027666");
    CIDReq_0.add_attribute("LctnID", "LocationID_t_1226802559"); // 1
    CIDReq_0_set.insert("LocationID_t_1226802559");
    CIDReq_0.add_attribute("DeskID", "DeskID_t_1894595749"); // 1
    CIDReq_0_set.insert("DeskID_t_1894595749");
    all_values.push_back(CIDReq_0_set);
    all_compo_names.insert("CIDReq_0_set");

    elt.add_element(CIDReq_0);
  } // end CIDReq
  { // CIDReq
    xml_element CIDReq_1{"CIDReq"};
    multiset<string> CIDReq_1_set;
    CIDReq_1.add_attribute("RefCompID", "RefCompID_t_955003488"); // 1
    CIDReq_1_set.insert("RefCompID_t_955003488");
    CIDReq_1.add_attribute("RefSubID", "RefSubID_t_2030235736"); // 1
    CIDReq_1_set.insert("RefSubID_t_2030235736");
    CIDReq_1.add_attribute("LctnID", "LocationID_t_748761940"); // 1
    CIDReq_1_set.insert("LocationID_t_748761940");
    CIDReq_1.add_attribute("DeskID", "DeskID_t_379222046"); // 1
    CIDReq_1_set.insert("DeskID_t_379222046");
    all_values.push_back(CIDReq_1_set);
    all_compo_names.insert("CIDReq_1_set");

    elt.add_element(CIDReq_1);
  } // end CIDReq
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
