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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CnfmReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ConfirmationRequest_message_t_0;
  elt.add_attribute("CnfmReqID", "ConfirmReqID_t_505797752"); // 0
  ConfirmationRequest_message_t_0.insert("ConfirmReqID_t_505797752");
  elt.add_attribute("CnfmTyp", "3"); // 0
  ConfirmationRequest_message_t_0.insert("3");
  elt.add_attribute("AllocID", "AllocID_t_728459849"); // 0
  ConfirmationRequest_message_t_0.insert("AllocID_t_728459849");
  elt.add_attribute("AllocID2", "SecondaryAllocID_t_768479283"); // 0
  ConfirmationRequest_message_t_0.insert("SecondaryAllocID_t_768479283");
  elt.add_attribute("IndAllocID", "IndividualAllocID_t_765499868"); // 0
  ConfirmationRequest_message_t_0.insert("IndividualAllocID_t_765499868");
  elt.add_attribute("TxnTm", "TransactTime_t_231651215"); // 0
  ConfirmationRequest_message_t_0.insert("TransactTime_t_231651215");
  elt.add_attribute("Acct", "AllocAccount_t_1652141851"); // 0
  ConfirmationRequest_message_t_0.insert("AllocAccount_t_1652141851");
  elt.add_attribute("ActIDSrc", "99"); // 0
  ConfirmationRequest_message_t_0.insert("99");
  elt.add_attribute("AcctTyp", "7"); // 0
  ConfirmationRequest_message_t_0.insert("7");
  elt.add_attribute("Txt", "Text_t_1207702646"); // 0
  ConfirmationRequest_message_t_0.insert("Text_t_1207702646");
  elt.add_attribute("EncTxtLen", "1538756030"); // 0
  ConfirmationRequest_message_t_0.insert("1538756030");
  elt.add_attribute("EncTxt", "EncodedText_t_1762866491"); // 0
  ConfirmationRequest_message_t_0.insert("EncodedText_t_1762866491");
  all_values.push_back(ConfirmationRequest_message_t_0);
  all_compo_names.insert("ConfirmationRequest_message_t");

  { // Hdr
    xml_element Hdr_22{"Hdr"};
    multiset<string> Hdr_22_set;
    Hdr_22.add_attribute("SeqNum", "1286335682"); // 1
    Hdr_22_set.insert("1286335682");
    Hdr_22.add_attribute("SID", "SenderCompID_t_580364636"); // 1
    Hdr_22_set.insert("SenderCompID_t_580364636");
    Hdr_22.add_attribute("TID", "TargetCompID_t_1796596488"); // 1
    Hdr_22_set.insert("TargetCompID_t_1796596488");
    Hdr_22.add_attribute("OBID", "OnBehalfOfCompID_t_983584221"); // 1
    Hdr_22_set.insert("OnBehalfOfCompID_t_983584221");
    Hdr_22.add_attribute("D2ID", "DeliverToCompID_t_614380417"); // 1
    Hdr_22_set.insert("DeliverToCompID_t_614380417");
    Hdr_22.add_attribute("SSub", "SenderSubID_t_1767901737"); // 1
    Hdr_22_set.insert("SenderSubID_t_1767901737");
    Hdr_22.add_attribute("SLoc", "SenderLocationID_t_123290103"); // 1
    Hdr_22_set.insert("SenderLocationID_t_123290103");
    Hdr_22.add_attribute("TSub", "TargetSubID_t_1943229363"); // 1
    Hdr_22_set.insert("TargetSubID_t_1943229363");
    Hdr_22.add_attribute("TLoc", "TargetLocationID_t_1918663421"); // 1
    Hdr_22_set.insert("TargetLocationID_t_1918663421");
    Hdr_22.add_attribute("OBSub", "OnBehalfOfSubID_t_596795653"); // 1
    Hdr_22_set.insert("OnBehalfOfSubID_t_596795653");
    Hdr_22.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1206060439"); // 1
    Hdr_22_set.insert("OnBehalfOfLocationID_t_1206060439");
    Hdr_22.add_attribute("D2Sub", "DeliverToSubID_t_2119674772"); // 1
    Hdr_22_set.insert("DeliverToSubID_t_2119674772");
    Hdr_22.add_attribute("D2Loc", "DeliverToLocationID_t_539011222"); // 1
    Hdr_22_set.insert("DeliverToLocationID_t_539011222");
    Hdr_22.add_attribute("PosDup", "Y"); // 1
    Hdr_22_set.insert("Y");
    Hdr_22.add_attribute("PosRsnd", "Y"); // 1
    Hdr_22_set.insert("Y");
    Hdr_22.add_attribute("Snt", "SendingTime_t_166437839"); // 1
    Hdr_22_set.insert("SendingTime_t_166437839");
    Hdr_22.add_attribute("OrigSnt", "OrigSendingTime_t_1966145996"); // 1
    Hdr_22_set.insert("OrigSendingTime_t_1966145996");
    Hdr_22.add_attribute("MsgEncd", "MessageEncoding_t_174319259"); // 1
    Hdr_22_set.insert("MessageEncoding_t_174319259");
    all_values.push_back(Hdr_22_set);
    all_compo_names.insert("Hdr_22_set");

    {
      xml_element Hop_22{"Hop"};
      multiset<string> Hop_22_set;
      Hop_22.add_attribute("ID", "HopCompID_t_2013469251"); // 2
      Hop_22_set.insert("HopCompID_t_2013469251");
      Hop_22.add_attribute("Ref", "324460101"); // 2
      Hop_22_set.insert("324460101");
      Hop_22.add_attribute("Snt", "HopSendingTime_t_630685366"); // 2
      Hop_22_set.insert("HopSendingTime_t_630685366");
      all_values.push_back(Hop_22_set);
      all_compo_names.insert("Hop_22_set");

      Hdr_22.add_element(Hop_22);
    }
    elt.add_element(Hdr_22);
  } // end Hdr
  { // OrdAlloc
    xml_element OrdAlloc_9{"OrdAlloc"};
    multiset<string> OrdAlloc_9_set;
    OrdAlloc_9.add_attribute("ClOrdID", "ClOrdID_t_1092939384"); // 1
    OrdAlloc_9_set.insert("ClOrdID_t_1092939384");
    OrdAlloc_9.add_attribute("OrdID", "OrderID_t_1396185234"); // 1
    OrdAlloc_9_set.insert("OrderID_t_1396185234");
    OrdAlloc_9.add_attribute("OrdID2", "SecondaryOrderID_t_826096667"); // 1
    OrdAlloc_9_set.insert("SecondaryOrderID_t_826096667");
    OrdAlloc_9.add_attribute("ClOrdID2", "SecondaryClOrdID_t_597597587"); // 1
    OrdAlloc_9_set.insert("SecondaryClOrdID_t_597597587");
    OrdAlloc_9.add_attribute("ListID", "ListID_t_1109357704"); // 1
    OrdAlloc_9_set.insert("ListID_t_1109357704");
    OrdAlloc_9.add_attribute("Qty", "5872637.760000"); // 1
    OrdAlloc_9_set.insert("5872637.760000");
    OrdAlloc_9.add_attribute("AvgPx", "18053002.340000"); // 1
    OrdAlloc_9_set.insert("18053002.340000");
    OrdAlloc_9.add_attribute("BkngQty", "5006300.860000"); // 1
    OrdAlloc_9_set.insert("5006300.860000");
    all_values.push_back(OrdAlloc_9_set);
    all_compo_names.insert("OrdAlloc_9_set");

    {
      xml_element Pty_109{"Pty"};
      multiset<string> Pty_109_set;
      Pty_109.add_attribute("ID", "Nested2PartyID_t_202646619"); // 2
      Pty_109_set.insert("Nested2PartyID_t_202646619");
      Pty_109.add_attribute("Src", "F"); // 2
      Pty_109_set.insert("F");
      Pty_109.add_attribute("R", "69"); // 2
      Pty_109_set.insert("69");
      all_values.push_back(Pty_109_set);
      all_compo_names.insert("Pty_109_set");

      {
        xml_element Sub_109{"Sub"};
        multiset<string> Sub_109_set;
        Sub_109.add_attribute("ID", "Nested2PartySubID_t_1999243107"); // 3
        Sub_109_set.insert("Nested2PartySubID_t_1999243107");
        Sub_109.add_attribute("Typ", "17"); // 3
        Sub_109_set.insert("17");
        all_values.push_back(Sub_109_set);
        all_compo_names.insert("Sub_109_set");

        Pty_109.add_element(Sub_109);
      }
      OrdAlloc_9.add_element(Pty_109);
    }
    elt.add_element(OrdAlloc_9);
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
