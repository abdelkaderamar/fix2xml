#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/NetworkCounterpartySystemStatusResponse.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( NetworkCounterpartySystemStatusResponse_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"NtwkSysStatRsp" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NetworkCounterpartySystemStatusResponse_message_t_0;
  elt.add_attribute("NtwkStatRspTyp", "2"); // 0
  NetworkCounterpartySystemStatusResponse_message_t_0.insert("2");
  elt.add_attribute("NtwkReqID", "NetworkRequestID_t_1309322361"); // 0
  NetworkCounterpartySystemStatusResponse_message_t_0.insert("NetworkRequestID_t_1309322361");
  elt.add_attribute("NtwkRspID", "NetworkResponseID_t_1693378526"); // 0
  NetworkCounterpartySystemStatusResponse_message_t_0.insert("NetworkResponseID_t_1693378526");
  elt.add_attribute("LastNtwkRspID", "LastNetworkResponseID_t_256349375"); // 0
  NetworkCounterpartySystemStatusResponse_message_t_0.insert("LastNetworkResponseID_t_256349375");
  all_values.push_back(NetworkCounterpartySystemStatusResponse_message_t_0);
  all_compo_names.insert("NetworkCounterpartySystemStatusResponse_message_t");

  { // Hdr
    xml_element Hdr_50{"Hdr"};
    multiset<string> Hdr_50_set;
    Hdr_50.add_attribute("SeqNum", "409624862"); // 1
    Hdr_50_set.insert("409624862");
    Hdr_50.add_attribute("SID", "SenderCompID_t_1217879102"); // 1
    Hdr_50_set.insert("SenderCompID_t_1217879102");
    Hdr_50.add_attribute("TID", "TargetCompID_t_537568251"); // 1
    Hdr_50_set.insert("TargetCompID_t_537568251");
    Hdr_50.add_attribute("OBID", "OnBehalfOfCompID_t_1104525637"); // 1
    Hdr_50_set.insert("OnBehalfOfCompID_t_1104525637");
    Hdr_50.add_attribute("D2ID", "DeliverToCompID_t_1522006996"); // 1
    Hdr_50_set.insert("DeliverToCompID_t_1522006996");
    Hdr_50.add_attribute("SSub", "SenderSubID_t_1154693770"); // 1
    Hdr_50_set.insert("SenderSubID_t_1154693770");
    Hdr_50.add_attribute("SLoc", "SenderLocationID_t_1312447431"); // 1
    Hdr_50_set.insert("SenderLocationID_t_1312447431");
    Hdr_50.add_attribute("TSub", "TargetSubID_t_1166875695"); // 1
    Hdr_50_set.insert("TargetSubID_t_1166875695");
    Hdr_50.add_attribute("TLoc", "TargetLocationID_t_1579139265"); // 1
    Hdr_50_set.insert("TargetLocationID_t_1579139265");
    Hdr_50.add_attribute("OBSub", "OnBehalfOfSubID_t_674665997"); // 1
    Hdr_50_set.insert("OnBehalfOfSubID_t_674665997");
    Hdr_50.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1104208058"); // 1
    Hdr_50_set.insert("OnBehalfOfLocationID_t_1104208058");
    Hdr_50.add_attribute("D2Sub", "DeliverToSubID_t_341075771"); // 1
    Hdr_50_set.insert("DeliverToSubID_t_341075771");
    Hdr_50.add_attribute("D2Loc", "DeliverToLocationID_t_1382972776"); // 1
    Hdr_50_set.insert("DeliverToLocationID_t_1382972776");
    Hdr_50.add_attribute("PosDup", "Y"); // 1
    Hdr_50_set.insert("Y");
    Hdr_50.add_attribute("PosRsnd", "Y"); // 1
    Hdr_50_set.insert("Y");
    Hdr_50.add_attribute("Snt", "SendingTime_t_113371414"); // 1
    Hdr_50_set.insert("SendingTime_t_113371414");
    Hdr_50.add_attribute("OrigSnt", "OrigSendingTime_t_643119323"); // 1
    Hdr_50_set.insert("OrigSendingTime_t_643119323");
    Hdr_50.add_attribute("MsgEncd", "MessageEncoding_t_2049968518"); // 1
    Hdr_50_set.insert("MessageEncoding_t_2049968518");
    all_values.push_back(Hdr_50_set);
    all_compo_names.insert("Hdr_50_set");

    {
      xml_element Hop_50{"Hop"};
      multiset<string> Hop_50_set;
      Hop_50.add_attribute("ID", "HopCompID_t_2088668931"); // 2
      Hop_50_set.insert("HopCompID_t_2088668931");
      Hop_50.add_attribute("Ref", "1016931775"); // 2
      Hop_50_set.insert("1016931775");
      Hop_50.add_attribute("Snt", "HopSendingTime_t_506512536"); // 2
      Hop_50_set.insert("HopSendingTime_t_506512536");
      all_values.push_back(Hop_50_set);
      all_compo_names.insert("Hop_50_set");

      Hdr_50.add_element(Hop_50);
    }
    elt.add_element(Hdr_50);
  } // end Hdr
  { // CIDStat
    xml_element CIDStat_0{"CIDStat"};
    multiset<string> CIDStat_0_set;
    CIDStat_0.add_attribute("RefCompID", "RefCompID_t_764043876"); // 1
    CIDStat_0_set.insert("RefCompID_t_764043876");
    CIDStat_0.add_attribute("RefSubID", "RefSubID_t_1461516025"); // 1
    CIDStat_0_set.insert("RefSubID_t_1461516025");
    CIDStat_0.add_attribute("LctnID", "LocationID_t_1050739930"); // 1
    CIDStat_0_set.insert("LocationID_t_1050739930");
    CIDStat_0.add_attribute("DeskID", "DeskID_t_1512805816"); // 1
    CIDStat_0_set.insert("DeskID_t_1512805816");
    CIDStat_0.add_attribute("StatValu", "4"); // 1
    CIDStat_0_set.insert("4");
    CIDStat_0.add_attribute("StatText", "StatusText_t_71056014"); // 1
    CIDStat_0_set.insert("StatusText_t_71056014");
    all_values.push_back(CIDStat_0_set);
    all_compo_names.insert("CIDStat_0_set");

    elt.add_element(CIDStat_0);
  } // end CIDStat
  { // CIDStat
    xml_element CIDStat_1{"CIDStat"};
    multiset<string> CIDStat_1_set;
    CIDStat_1.add_attribute("RefCompID", "RefCompID_t_674644530"); // 1
    CIDStat_1_set.insert("RefCompID_t_674644530");
    CIDStat_1.add_attribute("RefSubID", "RefSubID_t_1386632949"); // 1
    CIDStat_1_set.insert("RefSubID_t_1386632949");
    CIDStat_1.add_attribute("LctnID", "LocationID_t_327405389"); // 1
    CIDStat_1_set.insert("LocationID_t_327405389");
    CIDStat_1.add_attribute("DeskID", "DeskID_t_1084269392"); // 1
    CIDStat_1_set.insert("DeskID_t_1084269392");
    CIDStat_1.add_attribute("StatValu", "4"); // 1
    CIDStat_1_set.insert("4");
    CIDStat_1.add_attribute("StatText", "StatusText_t_864973641"); // 1
    CIDStat_1_set.insert("StatusText_t_864973641");
    all_values.push_back(CIDStat_1_set);
    all_compo_names.insert("CIDStat_1_set");

    elt.add_element(CIDStat_1);
  } // end CIDStat
  { // CIDStat
    xml_element CIDStat_2{"CIDStat"};
    multiset<string> CIDStat_2_set;
    CIDStat_2.add_attribute("RefCompID", "RefCompID_t_41311381"); // 1
    CIDStat_2_set.insert("RefCompID_t_41311381");
    CIDStat_2.add_attribute("RefSubID", "RefSubID_t_1979035400"); // 1
    CIDStat_2_set.insert("RefSubID_t_1979035400");
    CIDStat_2.add_attribute("LctnID", "LocationID_t_2019667411"); // 1
    CIDStat_2_set.insert("LocationID_t_2019667411");
    CIDStat_2.add_attribute("DeskID", "DeskID_t_1353758813"); // 1
    CIDStat_2_set.insert("DeskID_t_1353758813");
    CIDStat_2.add_attribute("StatValu", "4"); // 1
    CIDStat_2_set.insert("4");
    CIDStat_2.add_attribute("StatText", "StatusText_t_1451323028"); // 1
    CIDStat_2_set.insert("StatusText_t_1451323028");
    all_values.push_back(CIDStat_2_set);
    all_compo_names.insert("CIDStat_2_set");

    elt.add_element(CIDStat_2);
  } // end CIDStat
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
