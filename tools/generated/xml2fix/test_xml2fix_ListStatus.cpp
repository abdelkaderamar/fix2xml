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
  elt.add_attribute("ID", "ListID_t_1287283308"); // 0
  ListStatus_message_t_0.insert("ListID_t_1287283308");
  elt.add_attribute("ListStatTyp", "3"); // 0
  ListStatus_message_t_0.insert("3");
  elt.add_attribute("NoRpts", "684836715"); // 0
  ListStatus_message_t_0.insert("684836715");
  elt.add_attribute("ListOrdStat", "5"); // 0
  ListStatus_message_t_0.insert("5");
  elt.add_attribute("ContingencyType", "3"); // 0
  ListStatus_message_t_0.insert("3");
  elt.add_attribute("ListRejectReason", "11"); // 0
  ListStatus_message_t_0.insert("11");
  elt.add_attribute("RptSeq", "106412401"); // 0
  ListStatus_message_t_0.insert("106412401");
  elt.add_attribute("ListStatText", "ListStatusText_t_198301979"); // 0
  ListStatus_message_t_0.insert("ListStatusText_t_198301979");
  elt.add_attribute("EncListStatTextLen", "2039598771"); // 0
  ListStatus_message_t_0.insert("2039598771");
  elt.add_attribute("EncListStatText", "EncodedListStatusText_t_320748175"); // 0
  ListStatus_message_t_0.insert("EncodedListStatusText_t_320748175");
  elt.add_attribute("TxnTm", "TransactTime_t_1341043302"); // 0
  ListStatus_message_t_0.insert("TransactTime_t_1341043302");
  elt.add_attribute("TotNoOrds", "1733162545"); // 0
  ListStatus_message_t_0.insert("1733162545");
  elt.add_attribute("LastFragment", "Y"); // 0
  ListStatus_message_t_0.insert("Y");
  all_values.push_back(ListStatus_message_t_0);
  all_compo_names.insert("ListStatus_message_t");

  { // Hdr
    xml_element Hdr_36{"Hdr"};
    multiset<string> Hdr_36_set;
    Hdr_36.add_attribute("SeqNum", "528546441"); // 1
    Hdr_36_set.insert("528546441");
    Hdr_36.add_attribute("SID", "SenderCompID_t_1300853152"); // 1
    Hdr_36_set.insert("SenderCompID_t_1300853152");
    Hdr_36.add_attribute("TID", "TargetCompID_t_2050157226"); // 1
    Hdr_36_set.insert("TargetCompID_t_2050157226");
    Hdr_36.add_attribute("OBID", "OnBehalfOfCompID_t_1618775920"); // 1
    Hdr_36_set.insert("OnBehalfOfCompID_t_1618775920");
    Hdr_36.add_attribute("D2ID", "DeliverToCompID_t_1506373348"); // 1
    Hdr_36_set.insert("DeliverToCompID_t_1506373348");
    Hdr_36.add_attribute("SSub", "SenderSubID_t_1644338681"); // 1
    Hdr_36_set.insert("SenderSubID_t_1644338681");
    Hdr_36.add_attribute("SLoc", "SenderLocationID_t_1749193800"); // 1
    Hdr_36_set.insert("SenderLocationID_t_1749193800");
    Hdr_36.add_attribute("TSub", "TargetSubID_t_1846882766"); // 1
    Hdr_36_set.insert("TargetSubID_t_1846882766");
    Hdr_36.add_attribute("TLoc", "TargetLocationID_t_41587035"); // 1
    Hdr_36_set.insert("TargetLocationID_t_41587035");
    Hdr_36.add_attribute("OBSub", "OnBehalfOfSubID_t_1533884234"); // 1
    Hdr_36_set.insert("OnBehalfOfSubID_t_1533884234");
    Hdr_36.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2091307752"); // 1
    Hdr_36_set.insert("OnBehalfOfLocationID_t_2091307752");
    Hdr_36.add_attribute("D2Sub", "DeliverToSubID_t_1296056025"); // 1
    Hdr_36_set.insert("DeliverToSubID_t_1296056025");
    Hdr_36.add_attribute("D2Loc", "DeliverToLocationID_t_809816178"); // 1
    Hdr_36_set.insert("DeliverToLocationID_t_809816178");
    Hdr_36.add_attribute("PosDup", "Y"); // 1
    Hdr_36_set.insert("Y");
    Hdr_36.add_attribute("PosRsnd", "N"); // 1
    Hdr_36_set.insert("N");
    Hdr_36.add_attribute("Snt", "SendingTime_t_1671127536"); // 1
    Hdr_36_set.insert("SendingTime_t_1671127536");
    Hdr_36.add_attribute("OrigSnt", "OrigSendingTime_t_1816748190"); // 1
    Hdr_36_set.insert("OrigSendingTime_t_1816748190");
    Hdr_36.add_attribute("MsgEncd", "MessageEncoding_t_364893225"); // 1
    Hdr_36_set.insert("MessageEncoding_t_364893225");
    all_values.push_back(Hdr_36_set);
    all_compo_names.insert("Hdr_36_set");

    {
      xml_element Hop_36{"Hop"};
      multiset<string> Hop_36_set;
      Hop_36.add_attribute("ID", "HopCompID_t_810927196"); // 2
      Hop_36_set.insert("HopCompID_t_810927196");
      Hop_36.add_attribute("Ref", "173556006"); // 2
      Hop_36_set.insert("173556006");
      Hop_36.add_attribute("Snt", "HopSendingTime_t_1049729940"); // 2
      Hop_36_set.insert("HopSendingTime_t_1049729940");
      all_values.push_back(Hop_36_set);
      all_compo_names.insert("Hop_36_set");

      Hdr_36.add_element(Hop_36);
    }
    elt.add_element(Hdr_36);
  } // end Hdr
  { // ListStat
    xml_element ListStat_0{"ListStat"};
    multiset<string> ListStat_0_set;
    ListStat_0.add_attribute("ClOrdID", "ClOrdID_t_1308273477"); // 1
    ListStat_0_set.insert("ClOrdID_t_1308273477");
    ListStat_0.add_attribute("OrdID", "OrderID_t_2129678683"); // 1
    ListStat_0_set.insert("OrderID_t_2129678683");
    ListStat_0.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1913843270"); // 1
    ListStat_0_set.insert("SecondaryClOrdID_t_1913843270");
    ListStat_0.add_attribute("CumQty", "15065754.560000"); // 1
    ListStat_0_set.insert("15065754.560000");
    ListStat_0.add_attribute("OrdStat", "C"); // 1
    ListStat_0_set.insert("C");
    ListStat_0.add_attribute("WorkingInd", "Y"); // 1
    ListStat_0_set.insert("Y");
    ListStat_0.add_attribute("LeavesQty", "7001351.100000"); // 1
    ListStat_0_set.insert("7001351.100000");
    ListStat_0.add_attribute("CxlQty", "16074727.030000"); // 1
    ListStat_0_set.insert("16074727.030000");
    ListStat_0.add_attribute("AvgPx", "1965557.680000"); // 1
    ListStat_0_set.insert("1965557.680000");
    ListStat_0.add_attribute("RejRsn", "10"); // 1
    ListStat_0_set.insert("10");
    ListStat_0.add_attribute("Txt", "Text_t_760842207"); // 1
    ListStat_0_set.insert("Text_t_760842207");
    ListStat_0.add_attribute("EncTxtLen", "99229347"); // 1
    ListStat_0_set.insert("99229347");
    ListStat_0.add_attribute("EncTxt", "EncodedText_t_699973824"); // 1
    ListStat_0_set.insert("EncodedText_t_699973824");
    all_values.push_back(ListStat_0_set);
    all_compo_names.insert("ListStat_0_set");

    elt.add_element(ListStat_0);
  } // end ListStat
  { // ListStat
    xml_element ListStat_1{"ListStat"};
    multiset<string> ListStat_1_set;
    ListStat_1.add_attribute("ClOrdID", "ClOrdID_t_119731907"); // 1
    ListStat_1_set.insert("ClOrdID_t_119731907");
    ListStat_1.add_attribute("OrdID", "OrderID_t_1743568028"); // 1
    ListStat_1_set.insert("OrderID_t_1743568028");
    ListStat_1.add_attribute("ClOrdID2", "SecondaryClOrdID_t_301683977"); // 1
    ListStat_1_set.insert("SecondaryClOrdID_t_301683977");
    ListStat_1.add_attribute("CumQty", "19666146.740000"); // 1
    ListStat_1_set.insert("19666146.740000");
    ListStat_1.add_attribute("OrdStat", "A"); // 1
    ListStat_1_set.insert("A");
    ListStat_1.add_attribute("WorkingInd", "Y"); // 1
    ListStat_1_set.insert("Y");
    ListStat_1.add_attribute("LeavesQty", "19104387.780000"); // 1
    ListStat_1_set.insert("19104387.780000");
    ListStat_1.add_attribute("CxlQty", "9337274.410000"); // 1
    ListStat_1_set.insert("9337274.410000");
    ListStat_1.add_attribute("AvgPx", "4979007.410000"); // 1
    ListStat_1_set.insert("4979007.410000");
    ListStat_1.add_attribute("RejRsn", "3"); // 1
    ListStat_1_set.insert("3");
    ListStat_1.add_attribute("Txt", "Text_t_1868112317"); // 1
    ListStat_1_set.insert("Text_t_1868112317");
    ListStat_1.add_attribute("EncTxtLen", "21544629"); // 1
    ListStat_1_set.insert("21544629");
    ListStat_1.add_attribute("EncTxt", "EncodedText_t_2091594029"); // 1
    ListStat_1_set.insert("EncodedText_t_2091594029");
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
