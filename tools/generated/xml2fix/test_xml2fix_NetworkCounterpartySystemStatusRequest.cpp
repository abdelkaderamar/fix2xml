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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"NtwkSysStatReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NetworkCounterpartySystemStatusRequest_message_t_0;
  elt.add_attribute("NtwkReqTyp", "1"); // 0
  NetworkCounterpartySystemStatusRequest_message_t_0.insert("1");
  elt.add_attribute("NtwkReqID", "NetworkRequestID_t_1181556747"); // 0
  NetworkCounterpartySystemStatusRequest_message_t_0.insert("NetworkRequestID_t_1181556747");
  all_values.push_back(NetworkCounterpartySystemStatusRequest_message_t_0);
  all_compo_names.insert("NetworkCounterpartySystemStatusRequest_message_t");

  { // Hdr
    xml_element Hdr_49{"Hdr"};
    multiset<string> Hdr_49_set;
    Hdr_49.add_attribute("SeqNum", "2146429229"); // 1
    Hdr_49_set.insert("2146429229");
    Hdr_49.add_attribute("SID", "SenderCompID_t_337047692"); // 1
    Hdr_49_set.insert("SenderCompID_t_337047692");
    Hdr_49.add_attribute("TID", "TargetCompID_t_1489349170"); // 1
    Hdr_49_set.insert("TargetCompID_t_1489349170");
    Hdr_49.add_attribute("OBID", "OnBehalfOfCompID_t_56273062"); // 1
    Hdr_49_set.insert("OnBehalfOfCompID_t_56273062");
    Hdr_49.add_attribute("D2ID", "DeliverToCompID_t_1367816412"); // 1
    Hdr_49_set.insert("DeliverToCompID_t_1367816412");
    Hdr_49.add_attribute("SSub", "SenderSubID_t_1835484226"); // 1
    Hdr_49_set.insert("SenderSubID_t_1835484226");
    Hdr_49.add_attribute("SLoc", "SenderLocationID_t_1814723686"); // 1
    Hdr_49_set.insert("SenderLocationID_t_1814723686");
    Hdr_49.add_attribute("TSub", "TargetSubID_t_1373751817"); // 1
    Hdr_49_set.insert("TargetSubID_t_1373751817");
    Hdr_49.add_attribute("TLoc", "TargetLocationID_t_368927394"); // 1
    Hdr_49_set.insert("TargetLocationID_t_368927394");
    Hdr_49.add_attribute("OBSub", "OnBehalfOfSubID_t_1499607501"); // 1
    Hdr_49_set.insert("OnBehalfOfSubID_t_1499607501");
    Hdr_49.add_attribute("OBLoc", "OnBehalfOfLocationID_t_620753376"); // 1
    Hdr_49_set.insert("OnBehalfOfLocationID_t_620753376");
    Hdr_49.add_attribute("D2Sub", "DeliverToSubID_t_1749019808"); // 1
    Hdr_49_set.insert("DeliverToSubID_t_1749019808");
    Hdr_49.add_attribute("D2Loc", "DeliverToLocationID_t_1998413291"); // 1
    Hdr_49_set.insert("DeliverToLocationID_t_1998413291");
    Hdr_49.add_attribute("PosDup", "Y"); // 1
    Hdr_49_set.insert("Y");
    Hdr_49.add_attribute("PosRsnd", "Y"); // 1
    Hdr_49_set.insert("Y");
    Hdr_49.add_attribute("Snt", "SendingTime_t_1401488716"); // 1
    Hdr_49_set.insert("SendingTime_t_1401488716");
    Hdr_49.add_attribute("OrigSnt", "OrigSendingTime_t_253092033"); // 1
    Hdr_49_set.insert("OrigSendingTime_t_253092033");
    Hdr_49.add_attribute("MsgEncd", "MessageEncoding_t_460008058"); // 1
    Hdr_49_set.insert("MessageEncoding_t_460008058");
    all_values.push_back(Hdr_49_set);
    all_compo_names.insert("Hdr_49_set");

    {
      xml_element Hop_49{"Hop"};
      multiset<string> Hop_49_set;
      Hop_49.add_attribute("ID", "HopCompID_t_34407778"); // 2
      Hop_49_set.insert("HopCompID_t_34407778");
      Hop_49.add_attribute("Ref", "1640639940"); // 2
      Hop_49_set.insert("1640639940");
      Hop_49.add_attribute("Snt", "HopSendingTime_t_1651912474"); // 2
      Hop_49_set.insert("HopSendingTime_t_1651912474");
      all_values.push_back(Hop_49_set);
      all_compo_names.insert("Hop_49_set");

      Hdr_49.add_element(Hop_49);
    }
    elt.add_element(Hdr_49);
  } // end Hdr
  { // CIDReq
    xml_element CIDReq_0{"CIDReq"};
    multiset<string> CIDReq_0_set;
    CIDReq_0.add_attribute("RefCompID", "RefCompID_t_1649037802"); // 1
    CIDReq_0_set.insert("RefCompID_t_1649037802");
    CIDReq_0.add_attribute("RefSubID", "RefSubID_t_927883442"); // 1
    CIDReq_0_set.insert("RefSubID_t_927883442");
    CIDReq_0.add_attribute("LctnID", "LocationID_t_1508419283"); // 1
    CIDReq_0_set.insert("LocationID_t_1508419283");
    CIDReq_0.add_attribute("DeskID", "DeskID_t_1620363728"); // 1
    CIDReq_0_set.insert("DeskID_t_1620363728");
    all_values.push_back(CIDReq_0_set);
    all_compo_names.insert("CIDReq_0_set");

    elt.add_element(CIDReq_0);
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
