#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ConfirmationRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ConfirmationRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CnfmReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ConfirmationRequest_message_t_0;
  elt.add_attribute("CnfmReqID", "ConfirmReqID_t_800967458"); // 0
  ConfirmationRequest_message_t_0.insert("ConfirmReqID_t_800967458");
  elt.add_attribute("CnfmTyp", "2"); // 0
  ConfirmationRequest_message_t_0.insert("2");
  elt.add_attribute("AllocID", "AllocID_t_457837140"); // 0
  ConfirmationRequest_message_t_0.insert("AllocID_t_457837140");
  elt.add_attribute("AllocID2", "SecondaryAllocID_t_1246640276"); // 0
  ConfirmationRequest_message_t_0.insert("SecondaryAllocID_t_1246640276");
  elt.add_attribute("IndAllocID", "IndividualAllocID_t_148030097"); // 0
  ConfirmationRequest_message_t_0.insert("IndividualAllocID_t_148030097");
  elt.add_attribute("TxnTm", "TransactTime_t_1904221739"); // 0
  ConfirmationRequest_message_t_0.insert("TransactTime_t_1904221739");
  elt.add_attribute("Acct", "AllocAccount_t_1524777708"); // 0
  ConfirmationRequest_message_t_0.insert("AllocAccount_t_1524777708");
  elt.add_attribute("ActIDSrc", "99"); // 0
  ConfirmationRequest_message_t_0.insert("99");
  elt.add_attribute("AcctTyp", "7"); // 0
  ConfirmationRequest_message_t_0.insert("7");
  elt.add_attribute("Txt", "Text_t_58715707"); // 0
  ConfirmationRequest_message_t_0.insert("Text_t_58715707");
  elt.add_attribute("EncTxtLen", "665927199"); // 0
  ConfirmationRequest_message_t_0.insert("665927199");
  elt.add_attribute("EncTxt", "EncodedText_t_692434821"); // 0
  ConfirmationRequest_message_t_0.insert("EncodedText_t_692434821");
  all_values.push_back(ConfirmationRequest_message_t_0);
  all_compo_names.insert("ConfirmationRequest_message_t");

  { // Hdr
    xml_element Hdr_22{"Hdr"};
    multiset<string> Hdr_22_set;
    Hdr_22.add_attribute("SeqNum", "811966993"); // 1
    Hdr_22_set.insert("811966993");
    Hdr_22.add_attribute("SID", "SenderCompID_t_1564026208"); // 1
    Hdr_22_set.insert("SenderCompID_t_1564026208");
    Hdr_22.add_attribute("TID", "TargetCompID_t_522730670"); // 1
    Hdr_22_set.insert("TargetCompID_t_522730670");
    Hdr_22.add_attribute("OBID", "OnBehalfOfCompID_t_827588218"); // 1
    Hdr_22_set.insert("OnBehalfOfCompID_t_827588218");
    Hdr_22.add_attribute("D2ID", "DeliverToCompID_t_1526597951"); // 1
    Hdr_22_set.insert("DeliverToCompID_t_1526597951");
    Hdr_22.add_attribute("SSub", "SenderSubID_t_373841899"); // 1
    Hdr_22_set.insert("SenderSubID_t_373841899");
    Hdr_22.add_attribute("SLoc", "SenderLocationID_t_1660247719"); // 1
    Hdr_22_set.insert("SenderLocationID_t_1660247719");
    Hdr_22.add_attribute("TSub", "TargetSubID_t_517903621"); // 1
    Hdr_22_set.insert("TargetSubID_t_517903621");
    Hdr_22.add_attribute("TLoc", "TargetLocationID_t_543713270"); // 1
    Hdr_22_set.insert("TargetLocationID_t_543713270");
    Hdr_22.add_attribute("OBSub", "OnBehalfOfSubID_t_1353411060"); // 1
    Hdr_22_set.insert("OnBehalfOfSubID_t_1353411060");
    Hdr_22.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1046110445"); // 1
    Hdr_22_set.insert("OnBehalfOfLocationID_t_1046110445");
    Hdr_22.add_attribute("D2Sub", "DeliverToSubID_t_1837151869"); // 1
    Hdr_22_set.insert("DeliverToSubID_t_1837151869");
    Hdr_22.add_attribute("D2Loc", "DeliverToLocationID_t_851469502"); // 1
    Hdr_22_set.insert("DeliverToLocationID_t_851469502");
    Hdr_22.add_attribute("PosDup", "N"); // 1
    Hdr_22_set.insert("N");
    Hdr_22.add_attribute("PosRsnd", "Y"); // 1
    Hdr_22_set.insert("Y");
    Hdr_22.add_attribute("Snt", "SendingTime_t_768252903"); // 1
    Hdr_22_set.insert("SendingTime_t_768252903");
    Hdr_22.add_attribute("OrigSnt", "OrigSendingTime_t_939880003"); // 1
    Hdr_22_set.insert("OrigSendingTime_t_939880003");
    Hdr_22.add_attribute("MsgEncd", "MessageEncoding_t_1330606560"); // 1
    Hdr_22_set.insert("MessageEncoding_t_1330606560");
    all_values.push_back(Hdr_22_set);
    all_compo_names.insert("Hdr_22_set");

    {
      xml_element Hop_22{"Hop"};
      multiset<string> Hop_22_set;
      Hop_22.add_attribute("ID", "HopCompID_t_1966388854"); // 2
      Hop_22_set.insert("HopCompID_t_1966388854");
      Hop_22.add_attribute("Ref", "1740847461"); // 2
      Hop_22_set.insert("1740847461");
      Hop_22.add_attribute("Snt", "HopSendingTime_t_1078935552"); // 2
      Hop_22_set.insert("HopSendingTime_t_1078935552");
      all_values.push_back(Hop_22_set);
      all_compo_names.insert("Hop_22_set");

      Hdr_22.add_element(Hop_22);
    }
    elt.add_element(Hdr_22);
  } // end Hdr
  { // OrdAlloc
    xml_element OrdAlloc_8{"OrdAlloc"};
    multiset<string> OrdAlloc_8_set;
    OrdAlloc_8.add_attribute("ClOrdID", "ClOrdID_t_840004089"); // 1
    OrdAlloc_8_set.insert("ClOrdID_t_840004089");
    OrdAlloc_8.add_attribute("OrdID", "OrderID_t_1226965649"); // 1
    OrdAlloc_8_set.insert("OrderID_t_1226965649");
    OrdAlloc_8.add_attribute("OrdID2", "SecondaryOrderID_t_33480437"); // 1
    OrdAlloc_8_set.insert("SecondaryOrderID_t_33480437");
    OrdAlloc_8.add_attribute("ClOrdID2", "SecondaryClOrdID_t_217298150"); // 1
    OrdAlloc_8_set.insert("SecondaryClOrdID_t_217298150");
    OrdAlloc_8.add_attribute("ListID", "ListID_t_1183017038"); // 1
    OrdAlloc_8_set.insert("ListID_t_1183017038");
    OrdAlloc_8.add_attribute("Qty", "16047421.140000"); // 1
    OrdAlloc_8_set.insert("16047421.140000");
    OrdAlloc_8.add_attribute("AvgPx", "2760138.570000"); // 1
    OrdAlloc_8_set.insert("2760138.570000");
    OrdAlloc_8.add_attribute("BkngQty", "18489442.370000"); // 1
    OrdAlloc_8_set.insert("18489442.370000");
    all_values.push_back(OrdAlloc_8_set);
    all_compo_names.insert("OrdAlloc_8_set");

    {
      xml_element Pty_93{"Pty"};
      multiset<string> Pty_93_set;
      Pty_93.add_attribute("ID", "Nested2PartyID_t_149693287"); // 2
      Pty_93_set.insert("Nested2PartyID_t_149693287");
      Pty_93.add_attribute("Src", "B"); // 2
      Pty_93_set.insert("B");
      Pty_93.add_attribute("R", "10"); // 2
      Pty_93_set.insert("10");
      all_values.push_back(Pty_93_set);
      all_compo_names.insert("Pty_93_set");

      {
        xml_element Sub_93{"Sub"};
        multiset<string> Sub_93_set;
        Sub_93.add_attribute("ID", "Nested2PartySubID_t_672423957"); // 3
        Sub_93_set.insert("Nested2PartySubID_t_672423957");
        Sub_93.add_attribute("Typ", "25"); // 3
        Sub_93_set.insert("25");
        all_values.push_back(Sub_93_set);
        all_compo_names.insert("Sub_93_set");

        Pty_93.add_element(Sub_93);
      }
      OrdAlloc_8.add_element(Pty_93);
    }
    elt.add_element(OrdAlloc_8);
  } // end OrdAlloc
  { // OrdAlloc
    xml_element OrdAlloc_9{"OrdAlloc"};
    multiset<string> OrdAlloc_9_set;
    OrdAlloc_9.add_attribute("ClOrdID", "ClOrdID_t_644601101"); // 1
    OrdAlloc_9_set.insert("ClOrdID_t_644601101");
    OrdAlloc_9.add_attribute("OrdID", "OrderID_t_1046265856"); // 1
    OrdAlloc_9_set.insert("OrderID_t_1046265856");
    OrdAlloc_9.add_attribute("OrdID2", "SecondaryOrderID_t_1428333139"); // 1
    OrdAlloc_9_set.insert("SecondaryOrderID_t_1428333139");
    OrdAlloc_9.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1162504722"); // 1
    OrdAlloc_9_set.insert("SecondaryClOrdID_t_1162504722");
    OrdAlloc_9.add_attribute("ListID", "ListID_t_1589979126"); // 1
    OrdAlloc_9_set.insert("ListID_t_1589979126");
    OrdAlloc_9.add_attribute("Qty", "6342605.520000"); // 1
    OrdAlloc_9_set.insert("6342605.520000");
    OrdAlloc_9.add_attribute("AvgPx", "611315.190000"); // 1
    OrdAlloc_9_set.insert("611315.190000");
    OrdAlloc_9.add_attribute("BkngQty", "12796473.470000"); // 1
    OrdAlloc_9_set.insert("12796473.470000");
    all_values.push_back(OrdAlloc_9_set);
    all_compo_names.insert("OrdAlloc_9_set");

    {
      xml_element Pty_94{"Pty"};
      multiset<string> Pty_94_set;
      Pty_94.add_attribute("ID", "Nested2PartyID_t_1485730054"); // 2
      Pty_94_set.insert("Nested2PartyID_t_1485730054");
      Pty_94.add_attribute("Src", "6"); // 2
      Pty_94_set.insert("6");
      Pty_94.add_attribute("R", "78"); // 2
      Pty_94_set.insert("78");
      all_values.push_back(Pty_94_set);
      all_compo_names.insert("Pty_94_set");

      {
        xml_element Sub_94{"Sub"};
        multiset<string> Sub_94_set;
        Sub_94.add_attribute("ID", "Nested2PartySubID_t_106499309"); // 3
        Sub_94_set.insert("Nested2PartySubID_t_106499309");
        Sub_94.add_attribute("Typ", "1"); // 3
        Sub_94_set.insert("1");
        all_values.push_back(Sub_94_set);
        all_compo_names.insert("Sub_94_set");

        Pty_94.add_element(Sub_94);
      }
      OrdAlloc_9.add_element(Pty_94);
    }
    elt.add_element(OrdAlloc_9);
  } // end OrdAlloc
  { // OrdAlloc
    xml_element OrdAlloc_10{"OrdAlloc"};
    multiset<string> OrdAlloc_10_set;
    OrdAlloc_10.add_attribute("ClOrdID", "ClOrdID_t_1105902477"); // 1
    OrdAlloc_10_set.insert("ClOrdID_t_1105902477");
    OrdAlloc_10.add_attribute("OrdID", "OrderID_t_2072888164"); // 1
    OrdAlloc_10_set.insert("OrderID_t_2072888164");
    OrdAlloc_10.add_attribute("OrdID2", "SecondaryOrderID_t_991042052"); // 1
    OrdAlloc_10_set.insert("SecondaryOrderID_t_991042052");
    OrdAlloc_10.add_attribute("ClOrdID2", "SecondaryClOrdID_t_37354381"); // 1
    OrdAlloc_10_set.insert("SecondaryClOrdID_t_37354381");
    OrdAlloc_10.add_attribute("ListID", "ListID_t_202146862"); // 1
    OrdAlloc_10_set.insert("ListID_t_202146862");
    OrdAlloc_10.add_attribute("Qty", "18310461.410000"); // 1
    OrdAlloc_10_set.insert("18310461.410000");
    OrdAlloc_10.add_attribute("AvgPx", "12643200.300000"); // 1
    OrdAlloc_10_set.insert("12643200.300000");
    OrdAlloc_10.add_attribute("BkngQty", "2356273.000000"); // 1
    OrdAlloc_10_set.insert("2356273.000000");
    all_values.push_back(OrdAlloc_10_set);
    all_compo_names.insert("OrdAlloc_10_set");

    {
      xml_element Pty_95{"Pty"};
      multiset<string> Pty_95_set;
      Pty_95.add_attribute("ID", "Nested2PartyID_t_2048344291"); // 2
      Pty_95_set.insert("Nested2PartyID_t_2048344291");
      Pty_95.add_attribute("Src", "7"); // 2
      Pty_95_set.insert("7");
      Pty_95.add_attribute("R", "40"); // 2
      Pty_95_set.insert("40");
      all_values.push_back(Pty_95_set);
      all_compo_names.insert("Pty_95_set");

      {
        xml_element Sub_95{"Sub"};
        multiset<string> Sub_95_set;
        Sub_95.add_attribute("ID", "Nested2PartySubID_t_176874500"); // 3
        Sub_95_set.insert("Nested2PartySubID_t_176874500");
        Sub_95.add_attribute("Typ", "24"); // 3
        Sub_95_set.insert("24");
        all_values.push_back(Sub_95_set);
        all_compo_names.insert("Sub_95_set");

        Pty_95.add_element(Sub_95);
      }
      OrdAlloc_10.add_element(Pty_95);
    }
    elt.add_element(OrdAlloc_10);
  } // end OrdAlloc
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
