#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDefinitionRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDefinitionRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MktDefReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDefinitionRequest_message_t_0;
  elt.add_attribute("MktReqID", "MarketReqID_t_1947426762"); // 0
  MarketDefinitionRequest_message_t_0.insert("MarketReqID_t_1947426762");
  elt.add_attribute("SubReqTyp", "2"); // 0
  MarketDefinitionRequest_message_t_0.insert("2");
  elt.add_attribute("MktID", "MarketID_t_593426289"); // 0
  MarketDefinitionRequest_message_t_0.insert("MarketID_t_593426289");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_2117358884"); // 0
  MarketDefinitionRequest_message_t_0.insert("MarketSegmentID_t_2117358884");
  elt.add_attribute("ParentMktSegmID", "ParentMktSegmID_t_2127886410"); // 0
  MarketDefinitionRequest_message_t_0.insert("ParentMktSegmID_t_2127886410");
  all_values.push_back(MarketDefinitionRequest_message_t_0);
  all_compo_names.insert("MarketDefinitionRequest_message_t");

  { // Hdr
    xml_element Hdr_44{"Hdr"};
    multiset<string> Hdr_44_set;
    Hdr_44.add_attribute("SeqNum", "2048303991"); // 1
    Hdr_44_set.insert("2048303991");
    Hdr_44.add_attribute("SID", "SenderCompID_t_1847254897"); // 1
    Hdr_44_set.insert("SenderCompID_t_1847254897");
    Hdr_44.add_attribute("TID", "TargetCompID_t_1917143598"); // 1
    Hdr_44_set.insert("TargetCompID_t_1917143598");
    Hdr_44.add_attribute("OBID", "OnBehalfOfCompID_t_420855715"); // 1
    Hdr_44_set.insert("OnBehalfOfCompID_t_420855715");
    Hdr_44.add_attribute("D2ID", "DeliverToCompID_t_1481233424"); // 1
    Hdr_44_set.insert("DeliverToCompID_t_1481233424");
    Hdr_44.add_attribute("SSub", "SenderSubID_t_1792326529"); // 1
    Hdr_44_set.insert("SenderSubID_t_1792326529");
    Hdr_44.add_attribute("SLoc", "SenderLocationID_t_1381876614"); // 1
    Hdr_44_set.insert("SenderLocationID_t_1381876614");
    Hdr_44.add_attribute("TSub", "TargetSubID_t_1732747334"); // 1
    Hdr_44_set.insert("TargetSubID_t_1732747334");
    Hdr_44.add_attribute("TLoc", "TargetLocationID_t_3099572"); // 1
    Hdr_44_set.insert("TargetLocationID_t_3099572");
    Hdr_44.add_attribute("OBSub", "OnBehalfOfSubID_t_1255851233"); // 1
    Hdr_44_set.insert("OnBehalfOfSubID_t_1255851233");
    Hdr_44.add_attribute("OBLoc", "OnBehalfOfLocationID_t_437338281"); // 1
    Hdr_44_set.insert("OnBehalfOfLocationID_t_437338281");
    Hdr_44.add_attribute("D2Sub", "DeliverToSubID_t_1512590003"); // 1
    Hdr_44_set.insert("DeliverToSubID_t_1512590003");
    Hdr_44.add_attribute("D2Loc", "DeliverToLocationID_t_1963858941"); // 1
    Hdr_44_set.insert("DeliverToLocationID_t_1963858941");
    Hdr_44.add_attribute("PosDup", "N"); // 1
    Hdr_44_set.insert("N");
    Hdr_44.add_attribute("PosRsnd", "N"); // 1
    Hdr_44_set.insert("N");
    Hdr_44.add_attribute("Snt", "SendingTime_t_1712850596"); // 1
    Hdr_44_set.insert("SendingTime_t_1712850596");
    Hdr_44.add_attribute("OrigSnt", "OrigSendingTime_t_1355474486"); // 1
    Hdr_44_set.insert("OrigSendingTime_t_1355474486");
    Hdr_44.add_attribute("MsgEncd", "MessageEncoding_t_186144845"); // 1
    Hdr_44_set.insert("MessageEncoding_t_186144845");
    all_values.push_back(Hdr_44_set);
    all_compo_names.insert("Hdr_44_set");

    {
      xml_element Hop_44{"Hop"};
      multiset<string> Hop_44_set;
      Hop_44.add_attribute("ID", "HopCompID_t_678054909"); // 2
      Hop_44_set.insert("HopCompID_t_678054909");
      Hop_44.add_attribute("Ref", "45166003"); // 2
      Hop_44_set.insert("45166003");
      Hop_44.add_attribute("Snt", "HopSendingTime_t_972959991"); // 2
      Hop_44_set.insert("HopSendingTime_t_972959991");
      all_values.push_back(Hop_44_set);
      all_compo_names.insert("Hop_44_set");

      Hdr_44.add_element(Hop_44);
    }
    elt.add_element(Hdr_44);
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
