#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ListStatus.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ListStatus_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ListStat" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ListStatus_message_t_0;
  elt.add_attribute("ID", "ListID_t_926665620"); // 0
  ListStatus_message_t_0.insert("ListID_t_926665620");
  elt.add_attribute("ListStatTyp", "4"); // 0
  ListStatus_message_t_0.insert("4");
  elt.add_attribute("NoRpts", "910749508"); // 0
  ListStatus_message_t_0.insert("910749508");
  elt.add_attribute("ListOrdStat", "2"); // 0
  ListStatus_message_t_0.insert("2");
  elt.add_attribute("ContingencyType", "3"); // 0
  ListStatus_message_t_0.insert("3");
  elt.add_attribute("ListRejectReason", "11"); // 0
  ListStatus_message_t_0.insert("11");
  elt.add_attribute("RptSeq", "1017670172"); // 0
  ListStatus_message_t_0.insert("1017670172");
  elt.add_attribute("ListStatText", "ListStatusText_t_220029809"); // 0
  ListStatus_message_t_0.insert("ListStatusText_t_220029809");
  elt.add_attribute("EncListStatTextLen", "1752244622"); // 0
  ListStatus_message_t_0.insert("1752244622");
  elt.add_attribute("EncListStatText", "EncodedListStatusText_t_274541179"); // 0
  ListStatus_message_t_0.insert("EncodedListStatusText_t_274541179");
  elt.add_attribute("TxnTm", "TransactTime_t_2010517727"); // 0
  ListStatus_message_t_0.insert("TransactTime_t_2010517727");
  elt.add_attribute("TotNoOrds", "1124181240"); // 0
  ListStatus_message_t_0.insert("1124181240");
  elt.add_attribute("LastFragment", "Y"); // 0
  ListStatus_message_t_0.insert("Y");
  all_values.push_back(ListStatus_message_t_0);
  all_compo_names.insert("ListStatus_message_t");

  { // Hdr
    xml_element Hdr_36{"Hdr"};
    multiset<string> Hdr_36_set;
    Hdr_36.add_attribute("SeqNum", "1802773947"); // 1
    Hdr_36_set.insert("1802773947");
    Hdr_36.add_attribute("SID", "SenderCompID_t_824235240"); // 1
    Hdr_36_set.insert("SenderCompID_t_824235240");
    Hdr_36.add_attribute("TID", "TargetCompID_t_1691291405"); // 1
    Hdr_36_set.insert("TargetCompID_t_1691291405");
    Hdr_36.add_attribute("OBID", "OnBehalfOfCompID_t_2068740864"); // 1
    Hdr_36_set.insert("OnBehalfOfCompID_t_2068740864");
    Hdr_36.add_attribute("D2ID", "DeliverToCompID_t_963864807"); // 1
    Hdr_36_set.insert("DeliverToCompID_t_963864807");
    Hdr_36.add_attribute("SSub", "SenderSubID_t_1284300935"); // 1
    Hdr_36_set.insert("SenderSubID_t_1284300935");
    Hdr_36.add_attribute("SLoc", "SenderLocationID_t_1287053072"); // 1
    Hdr_36_set.insert("SenderLocationID_t_1287053072");
    Hdr_36.add_attribute("TSub", "TargetSubID_t_1977803039"); // 1
    Hdr_36_set.insert("TargetSubID_t_1977803039");
    Hdr_36.add_attribute("TLoc", "TargetLocationID_t_253508515"); // 1
    Hdr_36_set.insert("TargetLocationID_t_253508515");
    Hdr_36.add_attribute("OBSub", "OnBehalfOfSubID_t_1976952764"); // 1
    Hdr_36_set.insert("OnBehalfOfSubID_t_1976952764");
    Hdr_36.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1010463150"); // 1
    Hdr_36_set.insert("OnBehalfOfLocationID_t_1010463150");
    Hdr_36.add_attribute("D2Sub", "DeliverToSubID_t_1387744001"); // 1
    Hdr_36_set.insert("DeliverToSubID_t_1387744001");
    Hdr_36.add_attribute("D2Loc", "DeliverToLocationID_t_506616779"); // 1
    Hdr_36_set.insert("DeliverToLocationID_t_506616779");
    Hdr_36.add_attribute("PosDup", "N"); // 1
    Hdr_36_set.insert("N");
    Hdr_36.add_attribute("PosRsnd", "N"); // 1
    Hdr_36_set.insert("N");
    Hdr_36.add_attribute("Snt", "SendingTime_t_1704535276"); // 1
    Hdr_36_set.insert("SendingTime_t_1704535276");
    Hdr_36.add_attribute("OrigSnt", "OrigSendingTime_t_858037149"); // 1
    Hdr_36_set.insert("OrigSendingTime_t_858037149");
    Hdr_36.add_attribute("MsgEncd", "MessageEncoding_t_2036774888"); // 1
    Hdr_36_set.insert("MessageEncoding_t_2036774888");
    all_values.push_back(Hdr_36_set);
    all_compo_names.insert("Hdr_36_set");

    {
      xml_element Hop_36{"Hop"};
      multiset<string> Hop_36_set;
      Hop_36.add_attribute("ID", "HopCompID_t_483717248"); // 2
      Hop_36_set.insert("HopCompID_t_483717248");
      Hop_36.add_attribute("Ref", "588760048"); // 2
      Hop_36_set.insert("588760048");
      Hop_36.add_attribute("Snt", "HopSendingTime_t_800040748"); // 2
      Hop_36_set.insert("HopSendingTime_t_800040748");
      all_values.push_back(Hop_36_set);
      all_compo_names.insert("Hop_36_set");

      Hdr_36.add_element(Hop_36);
    }
    elt.add_element(Hdr_36);
  } // end Hdr
  { // ListStat
    xml_element ListStat_0{"ListStat"};
    multiset<string> ListStat_0_set;
    ListStat_0.add_attribute("ClOrdID", "ClOrdID_t_719866255"); // 1
    ListStat_0_set.insert("ClOrdID_t_719866255");
    ListStat_0.add_attribute("OrdID", "OrderID_t_2030177690"); // 1
    ListStat_0_set.insert("OrderID_t_2030177690");
    ListStat_0.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1046965648"); // 1
    ListStat_0_set.insert("SecondaryClOrdID_t_1046965648");
    ListStat_0.add_attribute("CumQty", "9398960.640000"); // 1
    ListStat_0_set.insert("9398960.640000");
    ListStat_0.add_attribute("OrdStat", "5"); // 1
    ListStat_0_set.insert("5");
    ListStat_0.add_attribute("WorkingInd", "Y"); // 1
    ListStat_0_set.insert("Y");
    ListStat_0.add_attribute("LeavesQty", "8029301.440000"); // 1
    ListStat_0_set.insert("8029301.440000");
    ListStat_0.add_attribute("CxlQty", "6116362.570000"); // 1
    ListStat_0_set.insert("6116362.570000");
    ListStat_0.add_attribute("AvgPx", "19069677.710000"); // 1
    ListStat_0_set.insert("19069677.710000");
    ListStat_0.add_attribute("RejRsn", "2"); // 1
    ListStat_0_set.insert("2");
    ListStat_0.add_attribute("Txt", "Text_t_1435871497"); // 1
    ListStat_0_set.insert("Text_t_1435871497");
    ListStat_0.add_attribute("EncTxtLen", "1450775528"); // 1
    ListStat_0_set.insert("1450775528");
    ListStat_0.add_attribute("EncTxt", "EncodedText_t_379477659"); // 1
    ListStat_0_set.insert("EncodedText_t_379477659");
    all_values.push_back(ListStat_0_set);
    all_compo_names.insert("ListStat_0_set");

    elt.add_element(ListStat_0);
  } // end ListStat
  { // ListStat
    xml_element ListStat_1{"ListStat"};
    multiset<string> ListStat_1_set;
    ListStat_1.add_attribute("ClOrdID", "ClOrdID_t_252252656"); // 1
    ListStat_1_set.insert("ClOrdID_t_252252656");
    ListStat_1.add_attribute("OrdID", "OrderID_t_587592816"); // 1
    ListStat_1_set.insert("OrderID_t_587592816");
    ListStat_1.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1666530731"); // 1
    ListStat_1_set.insert("SecondaryClOrdID_t_1666530731");
    ListStat_1.add_attribute("CumQty", "825720.470000"); // 1
    ListStat_1_set.insert("825720.470000");
    ListStat_1.add_attribute("OrdStat", "1"); // 1
    ListStat_1_set.insert("1");
    ListStat_1.add_attribute("WorkingInd", "N"); // 1
    ListStat_1_set.insert("N");
    ListStat_1.add_attribute("LeavesQty", "10930351.980000"); // 1
    ListStat_1_set.insert("10930351.980000");
    ListStat_1.add_attribute("CxlQty", "813616.840000"); // 1
    ListStat_1_set.insert("813616.840000");
    ListStat_1.add_attribute("AvgPx", "20026166.270000"); // 1
    ListStat_1_set.insert("20026166.270000");
    ListStat_1.add_attribute("RejRsn", "3"); // 1
    ListStat_1_set.insert("3");
    ListStat_1.add_attribute("Txt", "Text_t_881642300"); // 1
    ListStat_1_set.insert("Text_t_881642300");
    ListStat_1.add_attribute("EncTxtLen", "1559668255"); // 1
    ListStat_1_set.insert("1559668255");
    ListStat_1.add_attribute("EncTxt", "EncodedText_t_431248706"); // 1
    ListStat_1_set.insert("EncodedText_t_431248706");
    all_values.push_back(ListStat_1_set);
    all_compo_names.insert("ListStat_1_set");

    elt.add_element(ListStat_1);
  } // end ListStat
  { // ListStat
    xml_element ListStat_2{"ListStat"};
    multiset<string> ListStat_2_set;
    ListStat_2.add_attribute("ClOrdID", "ClOrdID_t_770933540"); // 1
    ListStat_2_set.insert("ClOrdID_t_770933540");
    ListStat_2.add_attribute("OrdID", "OrderID_t_2043385503"); // 1
    ListStat_2_set.insert("OrderID_t_2043385503");
    ListStat_2.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1020008754"); // 1
    ListStat_2_set.insert("SecondaryClOrdID_t_1020008754");
    ListStat_2.add_attribute("CumQty", "15709742.880000"); // 1
    ListStat_2_set.insert("15709742.880000");
    ListStat_2.add_attribute("OrdStat", "5"); // 1
    ListStat_2_set.insert("5");
    ListStat_2.add_attribute("WorkingInd", "Y"); // 1
    ListStat_2_set.insert("Y");
    ListStat_2.add_attribute("LeavesQty", "14536683.300000"); // 1
    ListStat_2_set.insert("14536683.300000");
    ListStat_2.add_attribute("CxlQty", "9721629.790000"); // 1
    ListStat_2_set.insert("9721629.790000");
    ListStat_2.add_attribute("AvgPx", "5322874.260000"); // 1
    ListStat_2_set.insert("5322874.260000");
    ListStat_2.add_attribute("RejRsn", "8"); // 1
    ListStat_2_set.insert("8");
    ListStat_2.add_attribute("Txt", "Text_t_146186159"); // 1
    ListStat_2_set.insert("Text_t_146186159");
    ListStat_2.add_attribute("EncTxtLen", "1335217570"); // 1
    ListStat_2_set.insert("1335217570");
    ListStat_2.add_attribute("EncTxt", "EncodedText_t_1552759604"); // 1
    ListStat_2_set.insert("EncodedText_t_1552759604");
    all_values.push_back(ListStat_2_set);
    all_compo_names.insert("ListStat_2_set");

    elt.add_element(ListStat_2);
  } // end ListStat
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
