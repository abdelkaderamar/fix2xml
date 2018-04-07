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
  elt.add_attribute("CnfmReqID", "ConfirmReqID_t_1638479637"); // 0
  ConfirmationRequest_message_t_0.insert("ConfirmReqID_t_1638479637");
  elt.add_attribute("CnfmTyp", "2"); // 0
  ConfirmationRequest_message_t_0.insert("2");
  elt.add_attribute("AllocID", "AllocID_t_1068650365"); // 0
  ConfirmationRequest_message_t_0.insert("AllocID_t_1068650365");
  elt.add_attribute("AllocID2", "SecondaryAllocID_t_959776110"); // 0
  ConfirmationRequest_message_t_0.insert("SecondaryAllocID_t_959776110");
  elt.add_attribute("IndAllocID", "IndividualAllocID_t_532467980"); // 0
  ConfirmationRequest_message_t_0.insert("IndividualAllocID_t_532467980");
  elt.add_attribute("TxnTm", "TransactTime_t_164483474"); // 0
  ConfirmationRequest_message_t_0.insert("TransactTime_t_164483474");
  elt.add_attribute("Acct", "AllocAccount_t_1730735414"); // 0
  ConfirmationRequest_message_t_0.insert("AllocAccount_t_1730735414");
  elt.add_attribute("ActIDSrc", "99"); // 0
  ConfirmationRequest_message_t_0.insert("99");
  elt.add_attribute("AcctTyp", "8"); // 0
  ConfirmationRequest_message_t_0.insert("8");
  elt.add_attribute("Txt", "Text_t_1007043827"); // 0
  ConfirmationRequest_message_t_0.insert("Text_t_1007043827");
  elt.add_attribute("EncTxtLen", "2013491248"); // 0
  ConfirmationRequest_message_t_0.insert("2013491248");
  elt.add_attribute("EncTxt", "EncodedText_t_382804688"); // 0
  ConfirmationRequest_message_t_0.insert("EncodedText_t_382804688");
  all_values.push_back(ConfirmationRequest_message_t_0);
  all_compo_names.insert("ConfirmationRequest_message_t");

  { // Hdr
    xml_element Hdr_22{"Hdr"};
    multiset<string> Hdr_22_set;
    Hdr_22.add_attribute("SeqNum", "2081491566"); // 1
    Hdr_22_set.insert("2081491566");
    Hdr_22.add_attribute("SID", "SenderCompID_t_1702196773"); // 1
    Hdr_22_set.insert("SenderCompID_t_1702196773");
    Hdr_22.add_attribute("TID", "TargetCompID_t_1835631161"); // 1
    Hdr_22_set.insert("TargetCompID_t_1835631161");
    Hdr_22.add_attribute("OBID", "OnBehalfOfCompID_t_1752645309"); // 1
    Hdr_22_set.insert("OnBehalfOfCompID_t_1752645309");
    Hdr_22.add_attribute("D2ID", "DeliverToCompID_t_1444917751"); // 1
    Hdr_22_set.insert("DeliverToCompID_t_1444917751");
    Hdr_22.add_attribute("SSub", "SenderSubID_t_354274385"); // 1
    Hdr_22_set.insert("SenderSubID_t_354274385");
    Hdr_22.add_attribute("SLoc", "SenderLocationID_t_1697468414"); // 1
    Hdr_22_set.insert("SenderLocationID_t_1697468414");
    Hdr_22.add_attribute("TSub", "TargetSubID_t_1012379635"); // 1
    Hdr_22_set.insert("TargetSubID_t_1012379635");
    Hdr_22.add_attribute("TLoc", "TargetLocationID_t_1170511220"); // 1
    Hdr_22_set.insert("TargetLocationID_t_1170511220");
    Hdr_22.add_attribute("OBSub", "OnBehalfOfSubID_t_1263699375"); // 1
    Hdr_22_set.insert("OnBehalfOfSubID_t_1263699375");
    Hdr_22.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1067348639"); // 1
    Hdr_22_set.insert("OnBehalfOfLocationID_t_1067348639");
    Hdr_22.add_attribute("D2Sub", "DeliverToSubID_t_272411085"); // 1
    Hdr_22_set.insert("DeliverToSubID_t_272411085");
    Hdr_22.add_attribute("D2Loc", "DeliverToLocationID_t_1431818792"); // 1
    Hdr_22_set.insert("DeliverToLocationID_t_1431818792");
    Hdr_22.add_attribute("PosDup", "Y"); // 1
    Hdr_22_set.insert("Y");
    Hdr_22.add_attribute("PosRsnd", "Y"); // 1
    Hdr_22_set.insert("Y");
    Hdr_22.add_attribute("Snt", "SendingTime_t_280097835"); // 1
    Hdr_22_set.insert("SendingTime_t_280097835");
    Hdr_22.add_attribute("OrigSnt", "OrigSendingTime_t_1980828294"); // 1
    Hdr_22_set.insert("OrigSendingTime_t_1980828294");
    Hdr_22.add_attribute("MsgEncd", "MessageEncoding_t_816279272"); // 1
    Hdr_22_set.insert("MessageEncoding_t_816279272");
    all_values.push_back(Hdr_22_set);
    all_compo_names.insert("Hdr_22_set");

    {
      xml_element Hop_22{"Hop"};
      multiset<string> Hop_22_set;
      Hop_22.add_attribute("ID", "HopCompID_t_1341752725"); // 2
      Hop_22_set.insert("HopCompID_t_1341752725");
      Hop_22.add_attribute("Ref", "1471824283"); // 2
      Hop_22_set.insert("1471824283");
      Hop_22.add_attribute("Snt", "HopSendingTime_t_1281054123"); // 2
      Hop_22_set.insert("HopSendingTime_t_1281054123");
      all_values.push_back(Hop_22_set);
      all_compo_names.insert("Hop_22_set");

      Hdr_22.add_element(Hop_22);
    }
    elt.add_element(Hdr_22);
  } // end Hdr
  { // OrdAlloc
    xml_element OrdAlloc_10{"OrdAlloc"};
    multiset<string> OrdAlloc_10_set;
    OrdAlloc_10.add_attribute("ClOrdID", "ClOrdID_t_284116746"); // 1
    OrdAlloc_10_set.insert("ClOrdID_t_284116746");
    OrdAlloc_10.add_attribute("OrdID", "OrderID_t_1813522104"); // 1
    OrdAlloc_10_set.insert("OrderID_t_1813522104");
    OrdAlloc_10.add_attribute("OrdID2", "SecondaryOrderID_t_427402917"); // 1
    OrdAlloc_10_set.insert("SecondaryOrderID_t_427402917");
    OrdAlloc_10.add_attribute("ClOrdID2", "SecondaryClOrdID_t_2014852160"); // 1
    OrdAlloc_10_set.insert("SecondaryClOrdID_t_2014852160");
    OrdAlloc_10.add_attribute("ListID", "ListID_t_165722553"); // 1
    OrdAlloc_10_set.insert("ListID_t_165722553");
    OrdAlloc_10.add_attribute("Qty", "16116877.590000"); // 1
    OrdAlloc_10_set.insert("16116877.590000");
    OrdAlloc_10.add_attribute("AvgPx", "8744123.390000"); // 1
    OrdAlloc_10_set.insert("8744123.390000");
    OrdAlloc_10.add_attribute("BkngQty", "317301.530000"); // 1
    OrdAlloc_10_set.insert("317301.530000");
    all_values.push_back(OrdAlloc_10_set);
    all_compo_names.insert("OrdAlloc_10_set");

    {
      xml_element Pty_113{"Pty"};
      multiset<string> Pty_113_set;
      Pty_113.add_attribute("ID", "Nested2PartyID_t_1994492447"); // 2
      Pty_113_set.insert("Nested2PartyID_t_1994492447");
      Pty_113.add_attribute("Src", "A"); // 2
      Pty_113_set.insert("A");
      Pty_113.add_attribute("R", "27"); // 2
      Pty_113_set.insert("27");
      all_values.push_back(Pty_113_set);
      all_compo_names.insert("Pty_113_set");

      {
        xml_element Sub_113{"Sub"};
        multiset<string> Sub_113_set;
        Sub_113.add_attribute("ID", "Nested2PartySubID_t_1682639960"); // 3
        Sub_113_set.insert("Nested2PartySubID_t_1682639960");
        Sub_113.add_attribute("Typ", "21"); // 3
        Sub_113_set.insert("21");
        all_values.push_back(Sub_113_set);
        all_compo_names.insert("Sub_113_set");

        Pty_113.add_element(Sub_113);
      }
      OrdAlloc_10.add_element(Pty_113);
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
