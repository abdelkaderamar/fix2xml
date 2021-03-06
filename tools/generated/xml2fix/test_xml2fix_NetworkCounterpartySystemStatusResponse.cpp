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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"NtwkSysStatRsp" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NetworkCounterpartySystemStatusResponse_message_t_0;
  elt.add_attribute("NtwkStatRspTyp", "1"); // 0
  NetworkCounterpartySystemStatusResponse_message_t_0.insert("1");
  elt.add_attribute("NtwkReqID", "NetworkRequestID_t_291060880"); // 0
  NetworkCounterpartySystemStatusResponse_message_t_0.insert("NetworkRequestID_t_291060880");
  elt.add_attribute("NtwkRspID", "NetworkResponseID_t_1888446819"); // 0
  NetworkCounterpartySystemStatusResponse_message_t_0.insert("NetworkResponseID_t_1888446819");
  elt.add_attribute("LastNtwkRspID", "LastNetworkResponseID_t_1007730458"); // 0
  NetworkCounterpartySystemStatusResponse_message_t_0.insert("LastNetworkResponseID_t_1007730458");
  all_values.push_back(NetworkCounterpartySystemStatusResponse_message_t_0);
  all_compo_names.insert("NetworkCounterpartySystemStatusResponse_message_t");

  { // Hdr
    xml_element Hdr_50{"Hdr"};
    multiset<string> Hdr_50_set;
    Hdr_50.add_attribute("SeqNum", "1472617627"); // 1
    Hdr_50_set.insert("1472617627");
    Hdr_50.add_attribute("SID", "SenderCompID_t_1887392400"); // 1
    Hdr_50_set.insert("SenderCompID_t_1887392400");
    Hdr_50.add_attribute("TID", "TargetCompID_t_1344778151"); // 1
    Hdr_50_set.insert("TargetCompID_t_1344778151");
    Hdr_50.add_attribute("OBID", "OnBehalfOfCompID_t_814483149"); // 1
    Hdr_50_set.insert("OnBehalfOfCompID_t_814483149");
    Hdr_50.add_attribute("D2ID", "DeliverToCompID_t_1943665463"); // 1
    Hdr_50_set.insert("DeliverToCompID_t_1943665463");
    Hdr_50.add_attribute("SSub", "SenderSubID_t_565110915"); // 1
    Hdr_50_set.insert("SenderSubID_t_565110915");
    Hdr_50.add_attribute("SLoc", "SenderLocationID_t_502483728"); // 1
    Hdr_50_set.insert("SenderLocationID_t_502483728");
    Hdr_50.add_attribute("TSub", "TargetSubID_t_1610905501"); // 1
    Hdr_50_set.insert("TargetSubID_t_1610905501");
    Hdr_50.add_attribute("TLoc", "TargetLocationID_t_1938862732"); // 1
    Hdr_50_set.insert("TargetLocationID_t_1938862732");
    Hdr_50.add_attribute("OBSub", "OnBehalfOfSubID_t_871411122"); // 1
    Hdr_50_set.insert("OnBehalfOfSubID_t_871411122");
    Hdr_50.add_attribute("OBLoc", "OnBehalfOfLocationID_t_963029355"); // 1
    Hdr_50_set.insert("OnBehalfOfLocationID_t_963029355");
    Hdr_50.add_attribute("D2Sub", "DeliverToSubID_t_412132460"); // 1
    Hdr_50_set.insert("DeliverToSubID_t_412132460");
    Hdr_50.add_attribute("D2Loc", "DeliverToLocationID_t_472947283"); // 1
    Hdr_50_set.insert("DeliverToLocationID_t_472947283");
    Hdr_50.add_attribute("PosDup", "N"); // 1
    Hdr_50_set.insert("N");
    Hdr_50.add_attribute("PosRsnd", "Y"); // 1
    Hdr_50_set.insert("Y");
    Hdr_50.add_attribute("Snt", "SendingTime_t_1252012274"); // 1
    Hdr_50_set.insert("SendingTime_t_1252012274");
    Hdr_50.add_attribute("OrigSnt", "OrigSendingTime_t_67964066"); // 1
    Hdr_50_set.insert("OrigSendingTime_t_67964066");
    Hdr_50.add_attribute("MsgEncd", "MessageEncoding_t_1403564312"); // 1
    Hdr_50_set.insert("MessageEncoding_t_1403564312");
    all_values.push_back(Hdr_50_set);
    all_compo_names.insert("Hdr_50_set");

    {
      xml_element Hop_50{"Hop"};
      multiset<string> Hop_50_set;
      Hop_50.add_attribute("ID", "HopCompID_t_1712020333"); // 2
      Hop_50_set.insert("HopCompID_t_1712020333");
      Hop_50.add_attribute("Ref", "102371844"); // 2
      Hop_50_set.insert("102371844");
      Hop_50.add_attribute("Snt", "HopSendingTime_t_896720604"); // 2
      Hop_50_set.insert("HopSendingTime_t_896720604");
      all_values.push_back(Hop_50_set);
      all_compo_names.insert("Hop_50_set");

      Hdr_50.add_element(Hop_50);
    }
    elt.add_element(Hdr_50);
  } // end Hdr
  { // CIDStat
    xml_element CIDStat_0{"CIDStat"};
    multiset<string> CIDStat_0_set;
    CIDStat_0.add_attribute("RefCompID", "RefCompID_t_357456753"); // 1
    CIDStat_0_set.insert("RefCompID_t_357456753");
    CIDStat_0.add_attribute("RefSubID", "RefSubID_t_398274758"); // 1
    CIDStat_0_set.insert("RefSubID_t_398274758");
    CIDStat_0.add_attribute("LctnID", "LocationID_t_2144332601"); // 1
    CIDStat_0_set.insert("LocationID_t_2144332601");
    CIDStat_0.add_attribute("DeskID", "DeskID_t_1865876036"); // 1
    CIDStat_0_set.insert("DeskID_t_1865876036");
    CIDStat_0.add_attribute("StatValu", "3"); // 1
    CIDStat_0_set.insert("3");
    CIDStat_0.add_attribute("StatText", "StatusText_t_1051360644"); // 1
    CIDStat_0_set.insert("StatusText_t_1051360644");
    all_values.push_back(CIDStat_0_set);
    all_compo_names.insert("CIDStat_0_set");

    elt.add_element(CIDStat_0);
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
