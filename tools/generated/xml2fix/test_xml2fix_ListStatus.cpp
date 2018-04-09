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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ListStat" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ListStatus_message_t_0;
  elt.add_attribute("ID", "ListID_t_870941361"); // 0
  ListStatus_message_t_0.insert("ListID_t_870941361");
  elt.add_attribute("ListStatTyp", "6"); // 0
  ListStatus_message_t_0.insert("6");
  elt.add_attribute("NoRpts", "249041915"); // 0
  ListStatus_message_t_0.insert("249041915");
  elt.add_attribute("ListOrdStat", "5"); // 0
  ListStatus_message_t_0.insert("5");
  elt.add_attribute("ContingencyType", "2"); // 0
  ListStatus_message_t_0.insert("2");
  elt.add_attribute("ListRejectReason", "6"); // 0
  ListStatus_message_t_0.insert("6");
  elt.add_attribute("RptSeq", "1509550490"); // 0
  ListStatus_message_t_0.insert("1509550490");
  elt.add_attribute("ListStatText", "ListStatusText_t_880419939"); // 0
  ListStatus_message_t_0.insert("ListStatusText_t_880419939");
  elt.add_attribute("EncListStatTextLen", "1490437643"); // 0
  ListStatus_message_t_0.insert("1490437643");
  elt.add_attribute("EncListStatText", "EncodedListStatusText_t_292950711"); // 0
  ListStatus_message_t_0.insert("EncodedListStatusText_t_292950711");
  elt.add_attribute("TxnTm", "TransactTime_t_1040229813"); // 0
  ListStatus_message_t_0.insert("TransactTime_t_1040229813");
  elt.add_attribute("TotNoOrds", "1197816299"); // 0
  ListStatus_message_t_0.insert("1197816299");
  elt.add_attribute("LastFragment", "Y"); // 0
  ListStatus_message_t_0.insert("Y");
  all_values.push_back(ListStatus_message_t_0);
  all_compo_names.insert("ListStatus_message_t");

  { // Hdr
    xml_element Hdr_36{"Hdr"};
    multiset<string> Hdr_36_set;
    Hdr_36.add_attribute("SeqNum", "646746274"); // 1
    Hdr_36_set.insert("646746274");
    Hdr_36.add_attribute("SID", "SenderCompID_t_1737628062"); // 1
    Hdr_36_set.insert("SenderCompID_t_1737628062");
    Hdr_36.add_attribute("TID", "TargetCompID_t_711322198"); // 1
    Hdr_36_set.insert("TargetCompID_t_711322198");
    Hdr_36.add_attribute("OBID", "OnBehalfOfCompID_t_961392071"); // 1
    Hdr_36_set.insert("OnBehalfOfCompID_t_961392071");
    Hdr_36.add_attribute("D2ID", "DeliverToCompID_t_1838575478"); // 1
    Hdr_36_set.insert("DeliverToCompID_t_1838575478");
    Hdr_36.add_attribute("SSub", "SenderSubID_t_2070227646"); // 1
    Hdr_36_set.insert("SenderSubID_t_2070227646");
    Hdr_36.add_attribute("SLoc", "SenderLocationID_t_1237207623"); // 1
    Hdr_36_set.insert("SenderLocationID_t_1237207623");
    Hdr_36.add_attribute("TSub", "TargetSubID_t_188710893"); // 1
    Hdr_36_set.insert("TargetSubID_t_188710893");
    Hdr_36.add_attribute("TLoc", "TargetLocationID_t_416507146"); // 1
    Hdr_36_set.insert("TargetLocationID_t_416507146");
    Hdr_36.add_attribute("OBSub", "OnBehalfOfSubID_t_902736684"); // 1
    Hdr_36_set.insert("OnBehalfOfSubID_t_902736684");
    Hdr_36.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1559864785"); // 1
    Hdr_36_set.insert("OnBehalfOfLocationID_t_1559864785");
    Hdr_36.add_attribute("D2Sub", "DeliverToSubID_t_1643162807"); // 1
    Hdr_36_set.insert("DeliverToSubID_t_1643162807");
    Hdr_36.add_attribute("D2Loc", "DeliverToLocationID_t_1000256311"); // 1
    Hdr_36_set.insert("DeliverToLocationID_t_1000256311");
    Hdr_36.add_attribute("PosDup", "N"); // 1
    Hdr_36_set.insert("N");
    Hdr_36.add_attribute("PosRsnd", "Y"); // 1
    Hdr_36_set.insert("Y");
    Hdr_36.add_attribute("Snt", "SendingTime_t_1936128738"); // 1
    Hdr_36_set.insert("SendingTime_t_1936128738");
    Hdr_36.add_attribute("OrigSnt", "OrigSendingTime_t_797557837"); // 1
    Hdr_36_set.insert("OrigSendingTime_t_797557837");
    Hdr_36.add_attribute("MsgEncd", "MessageEncoding_t_1317130440"); // 1
    Hdr_36_set.insert("MessageEncoding_t_1317130440");
    all_values.push_back(Hdr_36_set);
    all_compo_names.insert("Hdr_36_set");

    {
      xml_element Hop_36{"Hop"};
      multiset<string> Hop_36_set;
      Hop_36.add_attribute("ID", "HopCompID_t_659586451"); // 2
      Hop_36_set.insert("HopCompID_t_659586451");
      Hop_36.add_attribute("Ref", "1617366162"); // 2
      Hop_36_set.insert("1617366162");
      Hop_36.add_attribute("Snt", "HopSendingTime_t_1566172355"); // 2
      Hop_36_set.insert("HopSendingTime_t_1566172355");
      all_values.push_back(Hop_36_set);
      all_compo_names.insert("Hop_36_set");

      Hdr_36.add_element(Hop_36);
    }
    elt.add_element(Hdr_36);
  } // end Hdr
  { // ListStat
    xml_element ListStat_0{"ListStat"};
    multiset<string> ListStat_0_set;
    ListStat_0.add_attribute("ClOrdID", "ClOrdID_t_612344547"); // 1
    ListStat_0_set.insert("ClOrdID_t_612344547");
    ListStat_0.add_attribute("OrdID", "OrderID_t_690356633"); // 1
    ListStat_0_set.insert("OrderID_t_690356633");
    ListStat_0.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1971394923"); // 1
    ListStat_0_set.insert("SecondaryClOrdID_t_1971394923");
    ListStat_0.add_attribute("CumQty", "14927644.860000"); // 1
    ListStat_0_set.insert("14927644.860000");
    ListStat_0.add_attribute("OrdStat", "9"); // 1
    ListStat_0_set.insert("9");
    ListStat_0.add_attribute("WorkingInd", "N"); // 1
    ListStat_0_set.insert("N");
    ListStat_0.add_attribute("LeavesQty", "3855106.520000"); // 1
    ListStat_0_set.insert("3855106.520000");
    ListStat_0.add_attribute("CxlQty", "12311269.270000"); // 1
    ListStat_0_set.insert("12311269.270000");
    ListStat_0.add_attribute("AvgPx", "16235138.660000"); // 1
    ListStat_0_set.insert("16235138.660000");
    ListStat_0.add_attribute("RejRsn", "18"); // 1
    ListStat_0_set.insert("18");
    ListStat_0.add_attribute("Txt", "Text_t_821271341"); // 1
    ListStat_0_set.insert("Text_t_821271341");
    ListStat_0.add_attribute("EncTxtLen", "187352416"); // 1
    ListStat_0_set.insert("187352416");
    ListStat_0.add_attribute("EncTxt", "EncodedText_t_1993648997"); // 1
    ListStat_0_set.insert("EncodedText_t_1993648997");
    all_values.push_back(ListStat_0_set);
    all_compo_names.insert("ListStat_0_set");

    elt.add_element(ListStat_0);
  } // end ListStat
  { // ListStat
    xml_element ListStat_1{"ListStat"};
    multiset<string> ListStat_1_set;
    ListStat_1.add_attribute("ClOrdID", "ClOrdID_t_512363172"); // 1
    ListStat_1_set.insert("ClOrdID_t_512363172");
    ListStat_1.add_attribute("OrdID", "OrderID_t_110096414"); // 1
    ListStat_1_set.insert("OrderID_t_110096414");
    ListStat_1.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1083372972"); // 1
    ListStat_1_set.insert("SecondaryClOrdID_t_1083372972");
    ListStat_1.add_attribute("CumQty", "7010740.650000"); // 1
    ListStat_1_set.insert("7010740.650000");
    ListStat_1.add_attribute("OrdStat", "0"); // 1
    ListStat_1_set.insert("0");
    ListStat_1.add_attribute("WorkingInd", "N"); // 1
    ListStat_1_set.insert("N");
    ListStat_1.add_attribute("LeavesQty", "1134552.030000"); // 1
    ListStat_1_set.insert("1134552.030000");
    ListStat_1.add_attribute("CxlQty", "222827.190000"); // 1
    ListStat_1_set.insert("222827.190000");
    ListStat_1.add_attribute("AvgPx", "8388823.190000"); // 1
    ListStat_1_set.insert("8388823.190000");
    ListStat_1.add_attribute("RejRsn", "99"); // 1
    ListStat_1_set.insert("99");
    ListStat_1.add_attribute("Txt", "Text_t_2067797351"); // 1
    ListStat_1_set.insert("Text_t_2067797351");
    ListStat_1.add_attribute("EncTxtLen", "627527409"); // 1
    ListStat_1_set.insert("627527409");
    ListStat_1.add_attribute("EncTxt", "EncodedText_t_1156264458"); // 1
    ListStat_1_set.insert("EncodedText_t_1156264458");
    all_values.push_back(ListStat_1_set);
    all_compo_names.insert("ListStat_1_set");

    elt.add_element(ListStat_1);
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
