#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/TradingSessionStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradingSessionStatusRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdgSesStatReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradingSessionStatusRequest_message_t_0;
  elt.add_attribute("ReqID", "TradSesReqID_t_1309421898"); // 0
  TradingSessionStatusRequest_message_t_0.insert("TradSesReqID_t_1309421898");
  elt.add_attribute("MktID", "MarketID_t_1408296755"); // 0
  TradingSessionStatusRequest_message_t_0.insert("MarketID_t_1408296755");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1488915322"); // 0
  TradingSessionStatusRequest_message_t_0.insert("MarketSegmentID_t_1488915322");
  elt.add_attribute("SesID", "5"); // 0
  TradingSessionStatusRequest_message_t_0.insert("5");
  elt.add_attribute("SesSub", "4"); // 0
  TradingSessionStatusRequest_message_t_0.insert("4");
  elt.add_attribute("Method", "2"); // 0
  TradingSessionStatusRequest_message_t_0.insert("2");
  elt.add_attribute("Mode", "2"); // 0
  TradingSessionStatusRequest_message_t_0.insert("2");
  elt.add_attribute("SubReqTyp", "1"); // 0
  TradingSessionStatusRequest_message_t_0.insert("1");
  elt.add_attribute("Exch", "SecurityExchange_t_1559853057"); // 0
  TradingSessionStatusRequest_message_t_0.insert("SecurityExchange_t_1559853057");
  all_values.push_back(TradingSessionStatusRequest_message_t_0);
  all_compo_names.insert("TradingSessionStatusRequest_message_t");

  { // Hdr
    xml_element Hdr_104{"Hdr"};
    multiset<string> Hdr_104_set;
    Hdr_104.add_attribute("SeqNum", "56636824"); // 1
    Hdr_104_set.insert("56636824");
    Hdr_104.add_attribute("SID", "SenderCompID_t_1929294611"); // 1
    Hdr_104_set.insert("SenderCompID_t_1929294611");
    Hdr_104.add_attribute("TID", "TargetCompID_t_269144975"); // 1
    Hdr_104_set.insert("TargetCompID_t_269144975");
    Hdr_104.add_attribute("OBID", "OnBehalfOfCompID_t_1399000363"); // 1
    Hdr_104_set.insert("OnBehalfOfCompID_t_1399000363");
    Hdr_104.add_attribute("D2ID", "DeliverToCompID_t_1869317922"); // 1
    Hdr_104_set.insert("DeliverToCompID_t_1869317922");
    Hdr_104.add_attribute("SSub", "SenderSubID_t_1497479932"); // 1
    Hdr_104_set.insert("SenderSubID_t_1497479932");
    Hdr_104.add_attribute("SLoc", "SenderLocationID_t_1853417452"); // 1
    Hdr_104_set.insert("SenderLocationID_t_1853417452");
    Hdr_104.add_attribute("TSub", "TargetSubID_t_894130418"); // 1
    Hdr_104_set.insert("TargetSubID_t_894130418");
    Hdr_104.add_attribute("TLoc", "TargetLocationID_t_682547759"); // 1
    Hdr_104_set.insert("TargetLocationID_t_682547759");
    Hdr_104.add_attribute("OBSub", "OnBehalfOfSubID_t_1392828220"); // 1
    Hdr_104_set.insert("OnBehalfOfSubID_t_1392828220");
    Hdr_104.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1895216969"); // 1
    Hdr_104_set.insert("OnBehalfOfLocationID_t_1895216969");
    Hdr_104.add_attribute("D2Sub", "DeliverToSubID_t_1576388255"); // 1
    Hdr_104_set.insert("DeliverToSubID_t_1576388255");
    Hdr_104.add_attribute("D2Loc", "DeliverToLocationID_t_2140915025"); // 1
    Hdr_104_set.insert("DeliverToLocationID_t_2140915025");
    Hdr_104.add_attribute("PosDup", "Y"); // 1
    Hdr_104_set.insert("Y");
    Hdr_104.add_attribute("PosRsnd", "Y"); // 1
    Hdr_104_set.insert("Y");
    Hdr_104.add_attribute("Snt", "SendingTime_t_887229589"); // 1
    Hdr_104_set.insert("SendingTime_t_887229589");
    Hdr_104.add_attribute("OrigSnt", "OrigSendingTime_t_372079815"); // 1
    Hdr_104_set.insert("OrigSendingTime_t_372079815");
    Hdr_104.add_attribute("MsgEncd", "MessageEncoding_t_266867858"); // 1
    Hdr_104_set.insert("MessageEncoding_t_266867858");
    all_values.push_back(Hdr_104_set);
    all_compo_names.insert("Hdr_104_set");

    {
      xml_element Hop_104{"Hop"};
      multiset<string> Hop_104_set;
      Hop_104.add_attribute("ID", "HopCompID_t_327356773"); // 2
      Hop_104_set.insert("HopCompID_t_327356773");
      Hop_104.add_attribute("Ref", "1503142841"); // 2
      Hop_104_set.insert("1503142841");
      Hop_104.add_attribute("Snt", "HopSendingTime_t_1893499684"); // 2
      Hop_104_set.insert("HopSendingTime_t_1893499684");
      all_values.push_back(Hop_104_set);
      all_compo_names.insert("Hop_104_set");

      Hdr_104.add_element(Hop_104);
    }
    elt.add_element(Hdr_104);
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
