#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AllocationReportAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationReportAck_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AllocRptAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationReportAck_message_t_0;
  elt.add_attribute("RptID", "AllocReportID_t_1640677279"); // 0
  AllocationReportAck_message_t_0.insert("AllocReportID_t_1640677279");
  elt.add_attribute("ID", "AllocID_t_399250710"); // 0
  AllocationReportAck_message_t_0.insert("AllocID_t_399250710");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_676155295"); // 0
  AllocationReportAck_message_t_0.insert("ClearingBusinessDate_t_676155295");
  elt.add_attribute("AvgPxInd", "0"); // 0
  AllocationReportAck_message_t_0.insert("0");
  elt.add_attribute("Qty", "12161027.200000"); // 0
  AllocationReportAck_message_t_0.insert("12161027.200000");
  elt.add_attribute("TransTyp", "1"); // 0
  AllocationReportAck_message_t_0.insert("1");
  elt.add_attribute("ID2", "SecondaryAllocID_t_1266187249"); // 0
  AllocationReportAck_message_t_0.insert("SecondaryAllocID_t_1266187249");
  elt.add_attribute("TrdDt", "TradeDate_t_213526585"); // 0
  AllocationReportAck_message_t_0.insert("TradeDate_t_213526585");
  elt.add_attribute("TxnTm", "TransactTime_t_1620054778"); // 0
  AllocationReportAck_message_t_0.insert("TransactTime_t_1620054778");
  elt.add_attribute("Stat", "3"); // 0
  AllocationReportAck_message_t_0.insert("3");
  elt.add_attribute("RejCode", "7"); // 0
  AllocationReportAck_message_t_0.insert("7");
  elt.add_attribute("RptTyp", "8"); // 0
  AllocationReportAck_message_t_0.insert("8");
  elt.add_attribute("ImReqTyp", "3"); // 0
  AllocationReportAck_message_t_0.insert("3");
  elt.add_attribute("MtchStat", "2"); // 0
  AllocationReportAck_message_t_0.insert("2");
  elt.add_attribute("Prod", "4"); // 0
  AllocationReportAck_message_t_0.insert("4");
  elt.add_attribute("SecTyp", "CMB"); // 0
  AllocationReportAck_message_t_0.insert("CMB");
  elt.add_attribute("Txt", "Text_t_955317100"); // 0
  AllocationReportAck_message_t_0.insert("Text_t_955317100");
  elt.add_attribute("EncTxtLen", "1373053908"); // 0
  AllocationReportAck_message_t_0.insert("1373053908");
  elt.add_attribute("EncTxt", "EncodedText_t_1649666644"); // 0
  AllocationReportAck_message_t_0.insert("EncodedText_t_1649666644");
  all_values.push_back(AllocationReportAck_message_t_0);
  all_compo_names.insert("AllocationReportAck_message_t");

  { // Hdr
    xml_element Hdr_6{"Hdr"};
    multiset<string> Hdr_6_set;
    Hdr_6.add_attribute("SeqNum", "617604203"); // 1
    Hdr_6_set.insert("617604203");
    Hdr_6.add_attribute("SID", "SenderCompID_t_2032459084"); // 1
    Hdr_6_set.insert("SenderCompID_t_2032459084");
    Hdr_6.add_attribute("TID", "TargetCompID_t_1038483388"); // 1
    Hdr_6_set.insert("TargetCompID_t_1038483388");
    Hdr_6.add_attribute("OBID", "OnBehalfOfCompID_t_947658974"); // 1
    Hdr_6_set.insert("OnBehalfOfCompID_t_947658974");
    Hdr_6.add_attribute("D2ID", "DeliverToCompID_t_1628285104"); // 1
    Hdr_6_set.insert("DeliverToCompID_t_1628285104");
    Hdr_6.add_attribute("SSub", "SenderSubID_t_738220669"); // 1
    Hdr_6_set.insert("SenderSubID_t_738220669");
    Hdr_6.add_attribute("SLoc", "SenderLocationID_t_338929669"); // 1
    Hdr_6_set.insert("SenderLocationID_t_338929669");
    Hdr_6.add_attribute("TSub", "TargetSubID_t_1508081697"); // 1
    Hdr_6_set.insert("TargetSubID_t_1508081697");
    Hdr_6.add_attribute("TLoc", "TargetLocationID_t_164573256"); // 1
    Hdr_6_set.insert("TargetLocationID_t_164573256");
    Hdr_6.add_attribute("OBSub", "OnBehalfOfSubID_t_518872942"); // 1
    Hdr_6_set.insert("OnBehalfOfSubID_t_518872942");
    Hdr_6.add_attribute("OBLoc", "OnBehalfOfLocationID_t_526194978"); // 1
    Hdr_6_set.insert("OnBehalfOfLocationID_t_526194978");
    Hdr_6.add_attribute("D2Sub", "DeliverToSubID_t_560598189"); // 1
    Hdr_6_set.insert("DeliverToSubID_t_560598189");
    Hdr_6.add_attribute("D2Loc", "DeliverToLocationID_t_12066573"); // 1
    Hdr_6_set.insert("DeliverToLocationID_t_12066573");
    Hdr_6.add_attribute("PosDup", "Y"); // 1
    Hdr_6_set.insert("Y");
    Hdr_6.add_attribute("PosRsnd", "Y"); // 1
    Hdr_6_set.insert("Y");
    Hdr_6.add_attribute("Snt", "SendingTime_t_1495254342"); // 1
    Hdr_6_set.insert("SendingTime_t_1495254342");
    Hdr_6.add_attribute("OrigSnt", "OrigSendingTime_t_2141548409"); // 1
    Hdr_6_set.insert("OrigSendingTime_t_2141548409");
    Hdr_6.add_attribute("MsgEncd", "MessageEncoding_t_701203455"); // 1
    Hdr_6_set.insert("MessageEncoding_t_701203455");
    all_values.push_back(Hdr_6_set);
    all_compo_names.insert("Hdr_6_set");

    {
      xml_element Hop_6{"Hop"};
      multiset<string> Hop_6_set;
      Hop_6.add_attribute("ID", "HopCompID_t_613957943"); // 2
      Hop_6_set.insert("HopCompID_t_613957943");
      Hop_6.add_attribute("Ref", "207591346"); // 2
      Hop_6_set.insert("207591346");
      Hop_6.add_attribute("Snt", "HopSendingTime_t_173774585"); // 2
      Hop_6_set.insert("HopSendingTime_t_173774585");
      all_values.push_back(Hop_6_set);
      all_compo_names.insert("Hop_6_set");

      Hdr_6.add_element(Hop_6);
    }
    elt.add_element(Hdr_6);
  } // end Hdr
  { // Pty
    xml_element Pty_35{"Pty"};
    multiset<string> Pty_35_set;
    Pty_35.add_attribute("ID", "PartyID_t_167791309"); // 1
    Pty_35_set.insert("PartyID_t_167791309");
    Pty_35.add_attribute("Src", "6"); // 1
    Pty_35_set.insert("6");
    Pty_35.add_attribute("R", "46"); // 1
    Pty_35_set.insert("46");
    all_values.push_back(Pty_35_set);
    all_compo_names.insert("Pty_35_set");

    {
      xml_element Sub_35{"Sub"};
      multiset<string> Sub_35_set;
      Sub_35.add_attribute("ID", "PartySubID_t_2064818197"); // 2
      Sub_35_set.insert("PartySubID_t_2064818197");
      Sub_35.add_attribute("Typ", "18"); // 2
      Sub_35_set.insert("18");
      all_values.push_back(Sub_35_set);
      all_compo_names.insert("Sub_35_set");

      Pty_35.add_element(Sub_35);
    }
    elt.add_element(Pty_35);
  } // end Pty
  { // Pty
    xml_element Pty_36{"Pty"};
    multiset<string> Pty_36_set;
    Pty_36.add_attribute("ID", "PartyID_t_333146115"); // 1
    Pty_36_set.insert("PartyID_t_333146115");
    Pty_36.add_attribute("Src", "4"); // 1
    Pty_36_set.insert("4");
    Pty_36.add_attribute("R", "46"); // 1
    Pty_36_set.insert("46");
    all_values.push_back(Pty_36_set);
    all_compo_names.insert("Pty_36_set");

    {
      xml_element Sub_36{"Sub"};
      multiset<string> Sub_36_set;
      Sub_36.add_attribute("ID", "PartySubID_t_1982812759"); // 2
      Sub_36_set.insert("PartySubID_t_1982812759");
      Sub_36.add_attribute("Typ", "17"); // 2
      Sub_36_set.insert("17");
      all_values.push_back(Sub_36_set);
      all_compo_names.insert("Sub_36_set");

      Pty_36.add_element(Sub_36);
    }
    elt.add_element(Pty_36);
  } // end Pty
  { // Pty
    xml_element Pty_37{"Pty"};
    multiset<string> Pty_37_set;
    Pty_37.add_attribute("ID", "PartyID_t_1092578967"); // 1
    Pty_37_set.insert("PartyID_t_1092578967");
    Pty_37.add_attribute("Src", "H"); // 1
    Pty_37_set.insert("H");
    Pty_37.add_attribute("R", "11"); // 1
    Pty_37_set.insert("11");
    all_values.push_back(Pty_37_set);
    all_compo_names.insert("Pty_37_set");

    {
      xml_element Sub_37{"Sub"};
      multiset<string> Sub_37_set;
      Sub_37.add_attribute("ID", "PartySubID_t_573380423"); // 2
      Sub_37_set.insert("PartySubID_t_573380423");
      Sub_37.add_attribute("Typ", "33"); // 2
      Sub_37_set.insert("33");
      all_values.push_back(Sub_37_set);
      all_compo_names.insert("Sub_37_set");

      Pty_37.add_element(Sub_37);
    }
    elt.add_element(Pty_37);
  } // end Pty
  { // AllocAck
    xml_element AllocAck_1{"AllocAck"};
    multiset<string> AllocAck_1_set;
    AllocAck_1.add_attribute("Acct", "AllocAccount_t_2081462121"); // 1
    AllocAck_1_set.insert("AllocAccount_t_2081462121");
    AllocAck_1.add_attribute("ActIDSrc", "99"); // 1
    AllocAck_1_set.insert("99");
    AllocAck_1.add_attribute("Px", "11482337.890000"); // 1
    AllocAck_1_set.insert("11482337.890000");
    AllocAck_1.add_attribute("AllocPosEfct", "F"); // 1
    AllocAck_1_set.insert("F");
    AllocAck_1.add_attribute("IndAllocID", "IndividualAllocID_t_189720967"); // 1
    AllocAck_1_set.insert("IndividualAllocID_t_189720967");
    AllocAck_1.add_attribute("IndAllocRejCode", "3"); // 1
    AllocAck_1_set.insert("3");
    AllocAck_1.add_attribute("Txt", "AllocText_t_1385619140"); // 1
    AllocAck_1_set.insert("AllocText_t_1385619140");
    AllocAck_1.add_attribute("EncAllocTextLen", "1426474452"); // 1
    AllocAck_1_set.insert("1426474452");
    AllocAck_1.add_attribute("EncAllocText", "EncodedAllocText_t_508071056"); // 1
    AllocAck_1_set.insert("EncodedAllocText_t_508071056");
    AllocAck_1.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_1379683901"); // 1
    AllocAck_1_set.insert("SecondaryIndividualAllocID_t_1379683901");
    AllocAck_1.add_attribute("CustCpcty", "AllocCustomerCapacity_t_2127677907"); // 1
    AllocAck_1_set.insert("AllocCustomerCapacity_t_2127677907");
    AllocAck_1.add_attribute("Typ", "1"); // 1
    AllocAck_1_set.insert("1");
    AllocAck_1.add_attribute("Qty", "15872752.480000"); // 1
    AllocAck_1_set.insert("15872752.480000");
    all_values.push_back(AllocAck_1_set);
    all_compo_names.insert("AllocAck_1_set");

    {
      xml_element Pty_38{"Pty"};
      multiset<string> Pty_38_set;
      Pty_38.add_attribute("ID", "NestedPartyID_t_153968844"); // 2
      Pty_38_set.insert("NestedPartyID_t_153968844");
      Pty_38.add_attribute("Src", "E"); // 2
      Pty_38_set.insert("E");
      Pty_38.add_attribute("R", "44"); // 2
      Pty_38_set.insert("44");
      all_values.push_back(Pty_38_set);
      all_compo_names.insert("Pty_38_set");

      {
        xml_element Sub_38{"Sub"};
        multiset<string> Sub_38_set;
        Sub_38.add_attribute("ID", "NestedPartySubID_t_1362650633"); // 3
        Sub_38_set.insert("NestedPartySubID_t_1362650633");
        Sub_38.add_attribute("Typ", "8"); // 3
        Sub_38_set.insert("8");
        all_values.push_back(Sub_38_set);
        all_compo_names.insert("Sub_38_set");

        Pty_38.add_element(Sub_38);
      }
      AllocAck_1.add_element(Pty_38);
    }
    elt.add_element(AllocAck_1);
  } // end AllocAck
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
