#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderCancelReject.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderCancelReject_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdCxlRej" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderCancelReject_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_1271215626"); // 0
  OrderCancelReject_message_t_0.insert("OrderID_t_1271215626");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_1335362266"); // 0
  OrderCancelReject_message_t_0.insert("SecondaryOrderID_t_1335362266");
  elt.add_attribute("ID2", "SecondaryClOrdID_t_270572572"); // 0
  OrderCancelReject_message_t_0.insert("SecondaryClOrdID_t_270572572");
  elt.add_attribute("ID", "ClOrdID_t_1912418897"); // 0
  OrderCancelReject_message_t_0.insert("ClOrdID_t_1912418897");
  elt.add_attribute("LnkID", "ClOrdLinkID_t_1597782693"); // 0
  OrderCancelReject_message_t_0.insert("ClOrdLinkID_t_1597782693");
  elt.add_attribute("OrigID", "OrigClOrdID_t_1152153446"); // 0
  OrderCancelReject_message_t_0.insert("OrigClOrdID_t_1152153446");
  elt.add_attribute("Stat", "7"); // 0
  OrderCancelReject_message_t_0.insert("7");
  elt.add_attribute("WorkingInd", "Y"); // 0
  OrderCancelReject_message_t_0.insert("Y");
  elt.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_1206585664"); // 0
  OrderCancelReject_message_t_0.insert("OrigOrdModTime_t_1206585664");
  elt.add_attribute("ListID", "ListID_t_604995183"); // 0
  OrderCancelReject_message_t_0.insert("ListID_t_604995183");
  elt.add_attribute("Acct", "Account_t_722692941"); // 0
  OrderCancelReject_message_t_0.insert("Account_t_722692941");
  elt.add_attribute("AcctIDSrc", "1"); // 0
  OrderCancelReject_message_t_0.insert("1");
  elt.add_attribute("AcctTyp", "1"); // 0
  OrderCancelReject_message_t_0.insert("1");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_1442344915"); // 0
  OrderCancelReject_message_t_0.insert("TradeOriginationDate_t_1442344915");
  elt.add_attribute("TrdDt", "TradeDate_t_1013986942"); // 0
  OrderCancelReject_message_t_0.insert("TradeDate_t_1013986942");
  elt.add_attribute("TxnTm", "TransactTime_t_1126562902"); // 0
  OrderCancelReject_message_t_0.insert("TransactTime_t_1126562902");
  elt.add_attribute("CxlRejRspTo", "1"); // 0
  OrderCancelReject_message_t_0.insert("1");
  elt.add_attribute("CxlRejRsn", "2"); // 0
  OrderCancelReject_message_t_0.insert("2");
  elt.add_attribute("Txt", "Text_t_737934347"); // 0
  OrderCancelReject_message_t_0.insert("Text_t_737934347");
  elt.add_attribute("EncTxtLen", "2005786801"); // 0
  OrderCancelReject_message_t_0.insert("2005786801");
  elt.add_attribute("EncTxt", "EncodedText_t_1032241504"); // 0
  OrderCancelReject_message_t_0.insert("EncodedText_t_1032241504");
  all_values.push_back(OrderCancelReject_message_t_0);
  all_compo_names.insert("OrderCancelReject_message_t");

  { // Hdr
    xml_element Hdr_56{"Hdr"};
    multiset<string> Hdr_56_set;
    Hdr_56.add_attribute("SeqNum", "495794840"); // 1
    Hdr_56_set.insert("495794840");
    Hdr_56.add_attribute("SID", "SenderCompID_t_2025123764"); // 1
    Hdr_56_set.insert("SenderCompID_t_2025123764");
    Hdr_56.add_attribute("TID", "TargetCompID_t_1258775176"); // 1
    Hdr_56_set.insert("TargetCompID_t_1258775176");
    Hdr_56.add_attribute("OBID", "OnBehalfOfCompID_t_853584739"); // 1
    Hdr_56_set.insert("OnBehalfOfCompID_t_853584739");
    Hdr_56.add_attribute("D2ID", "DeliverToCompID_t_792984139"); // 1
    Hdr_56_set.insert("DeliverToCompID_t_792984139");
    Hdr_56.add_attribute("SSub", "SenderSubID_t_185089497"); // 1
    Hdr_56_set.insert("SenderSubID_t_185089497");
    Hdr_56.add_attribute("SLoc", "SenderLocationID_t_1464072841"); // 1
    Hdr_56_set.insert("SenderLocationID_t_1464072841");
    Hdr_56.add_attribute("TSub", "TargetSubID_t_1930363759"); // 1
    Hdr_56_set.insert("TargetSubID_t_1930363759");
    Hdr_56.add_attribute("TLoc", "TargetLocationID_t_195309735"); // 1
    Hdr_56_set.insert("TargetLocationID_t_195309735");
    Hdr_56.add_attribute("OBSub", "OnBehalfOfSubID_t_2045183726"); // 1
    Hdr_56_set.insert("OnBehalfOfSubID_t_2045183726");
    Hdr_56.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1054095738"); // 1
    Hdr_56_set.insert("OnBehalfOfLocationID_t_1054095738");
    Hdr_56.add_attribute("D2Sub", "DeliverToSubID_t_1530672002"); // 1
    Hdr_56_set.insert("DeliverToSubID_t_1530672002");
    Hdr_56.add_attribute("D2Loc", "DeliverToLocationID_t_168272650"); // 1
    Hdr_56_set.insert("DeliverToLocationID_t_168272650");
    Hdr_56.add_attribute("PosDup", "Y"); // 1
    Hdr_56_set.insert("Y");
    Hdr_56.add_attribute("PosRsnd", "Y"); // 1
    Hdr_56_set.insert("Y");
    Hdr_56.add_attribute("Snt", "SendingTime_t_1320426096"); // 1
    Hdr_56_set.insert("SendingTime_t_1320426096");
    Hdr_56.add_attribute("OrigSnt", "OrigSendingTime_t_1775755203"); // 1
    Hdr_56_set.insert("OrigSendingTime_t_1775755203");
    Hdr_56.add_attribute("MsgEncd", "MessageEncoding_t_979567738"); // 1
    Hdr_56_set.insert("MessageEncoding_t_979567738");
    all_values.push_back(Hdr_56_set);
    all_compo_names.insert("Hdr_56_set");

    {
      xml_element Hop_56{"Hop"};
      multiset<string> Hop_56_set;
      Hop_56.add_attribute("ID", "HopCompID_t_379528112"); // 2
      Hop_56_set.insert("HopCompID_t_379528112");
      Hop_56.add_attribute("Ref", "233266739"); // 2
      Hop_56_set.insert("233266739");
      Hop_56.add_attribute("Snt", "HopSendingTime_t_1702260680"); // 2
      Hop_56_set.insert("HopSendingTime_t_1702260680");
      all_values.push_back(Hop_56_set);
      all_compo_names.insert("Hop_56_set");

      Hdr_56.add_element(Hop_56);
    }
    elt.add_element(Hdr_56);
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
