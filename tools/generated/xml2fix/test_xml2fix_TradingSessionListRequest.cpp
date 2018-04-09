#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/TradingSessionListRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradingSessionListRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdgSesListReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradingSessionListRequest_message_t_0;
  elt.add_attribute("ReqID", "TradSesReqID_t_105724955"); // 0
  TradingSessionListRequest_message_t_0.insert("TradSesReqID_t_105724955");
  elt.add_attribute("MktID", "MarketID_t_1584051039"); // 0
  TradingSessionListRequest_message_t_0.insert("MarketID_t_1584051039");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_911754780"); // 0
  TradingSessionListRequest_message_t_0.insert("MarketSegmentID_t_911754780");
  elt.add_attribute("SesID", "1"); // 0
  TradingSessionListRequest_message_t_0.insert("1");
  elt.add_attribute("SesSub", "5"); // 0
  TradingSessionListRequest_message_t_0.insert("5");
  elt.add_attribute("Exch", "SecurityExchange_t_306853200"); // 0
  TradingSessionListRequest_message_t_0.insert("SecurityExchange_t_306853200");
  elt.add_attribute("Method", "1"); // 0
  TradingSessionListRequest_message_t_0.insert("1");
  elt.add_attribute("Mode", "1"); // 0
  TradingSessionListRequest_message_t_0.insert("1");
  elt.add_attribute("SubReqTyp", "1"); // 0
  TradingSessionListRequest_message_t_0.insert("1");
  all_values.push_back(TradingSessionListRequest_message_t_0);
  all_compo_names.insert("TradingSessionListRequest_message_t");

  { // Hdr
    xml_element Hdr_101{"Hdr"};
    multiset<string> Hdr_101_set;
    Hdr_101.add_attribute("SeqNum", "286891319"); // 1
    Hdr_101_set.insert("286891319");
    Hdr_101.add_attribute("SID", "SenderCompID_t_1211292885"); // 1
    Hdr_101_set.insert("SenderCompID_t_1211292885");
    Hdr_101.add_attribute("TID", "TargetCompID_t_979669333"); // 1
    Hdr_101_set.insert("TargetCompID_t_979669333");
    Hdr_101.add_attribute("OBID", "OnBehalfOfCompID_t_665586225"); // 1
    Hdr_101_set.insert("OnBehalfOfCompID_t_665586225");
    Hdr_101.add_attribute("D2ID", "DeliverToCompID_t_1590876097"); // 1
    Hdr_101_set.insert("DeliverToCompID_t_1590876097");
    Hdr_101.add_attribute("SSub", "SenderSubID_t_658012886"); // 1
    Hdr_101_set.insert("SenderSubID_t_658012886");
    Hdr_101.add_attribute("SLoc", "SenderLocationID_t_521832889"); // 1
    Hdr_101_set.insert("SenderLocationID_t_521832889");
    Hdr_101.add_attribute("TSub", "TargetSubID_t_882817454"); // 1
    Hdr_101_set.insert("TargetSubID_t_882817454");
    Hdr_101.add_attribute("TLoc", "TargetLocationID_t_1997239331"); // 1
    Hdr_101_set.insert("TargetLocationID_t_1997239331");
    Hdr_101.add_attribute("OBSub", "OnBehalfOfSubID_t_316039929"); // 1
    Hdr_101_set.insert("OnBehalfOfSubID_t_316039929");
    Hdr_101.add_attribute("OBLoc", "OnBehalfOfLocationID_t_651440293"); // 1
    Hdr_101_set.insert("OnBehalfOfLocationID_t_651440293");
    Hdr_101.add_attribute("D2Sub", "DeliverToSubID_t_734351905"); // 1
    Hdr_101_set.insert("DeliverToSubID_t_734351905");
    Hdr_101.add_attribute("D2Loc", "DeliverToLocationID_t_2066587862"); // 1
    Hdr_101_set.insert("DeliverToLocationID_t_2066587862");
    Hdr_101.add_attribute("PosDup", "Y"); // 1
    Hdr_101_set.insert("Y");
    Hdr_101.add_attribute("PosRsnd", "Y"); // 1
    Hdr_101_set.insert("Y");
    Hdr_101.add_attribute("Snt", "SendingTime_t_2050009665"); // 1
    Hdr_101_set.insert("SendingTime_t_2050009665");
    Hdr_101.add_attribute("OrigSnt", "OrigSendingTime_t_1396264218"); // 1
    Hdr_101_set.insert("OrigSendingTime_t_1396264218");
    Hdr_101.add_attribute("MsgEncd", "MessageEncoding_t_1349361623"); // 1
    Hdr_101_set.insert("MessageEncoding_t_1349361623");
    all_values.push_back(Hdr_101_set);
    all_compo_names.insert("Hdr_101_set");

    {
      xml_element Hop_101{"Hop"};
      multiset<string> Hop_101_set;
      Hop_101.add_attribute("ID", "HopCompID_t_1987591557"); // 2
      Hop_101_set.insert("HopCompID_t_1987591557");
      Hop_101.add_attribute("Ref", "738688826"); // 2
      Hop_101_set.insert("738688826");
      Hop_101.add_attribute("Snt", "HopSendingTime_t_154340514"); // 2
      Hop_101_set.insert("HopSendingTime_t_154340514");
      all_values.push_back(Hop_101_set);
      all_compo_names.insert("Hop_101_set");

      Hdr_101.add_element(Hop_101);
    }
    elt.add_element(Hdr_101);
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
