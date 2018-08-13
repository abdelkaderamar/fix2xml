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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AllocRptAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationReportAck_message_t_0;
  elt.add_attribute("RptID", "AllocReportID_t_1562552092"); // 0
  AllocationReportAck_message_t_0.insert("AllocReportID_t_1562552092");
  elt.add_attribute("ID", "AllocID_t_1257530771"); // 0
  AllocationReportAck_message_t_0.insert("AllocID_t_1257530771");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1593559162"); // 0
  AllocationReportAck_message_t_0.insert("ClearingBusinessDate_t_1593559162");
  elt.add_attribute("AvgPxInd", "2"); // 0
  AllocationReportAck_message_t_0.insert("2");
  elt.add_attribute("Qty", "9423481.790000"); // 0
  AllocationReportAck_message_t_0.insert("9423481.790000");
  elt.add_attribute("TransTyp", "5"); // 0
  AllocationReportAck_message_t_0.insert("5");
  elt.add_attribute("ID2", "SecondaryAllocID_t_1213427356"); // 0
  AllocationReportAck_message_t_0.insert("SecondaryAllocID_t_1213427356");
  elt.add_attribute("TrdDt", "TradeDate_t_1659462718"); // 0
  AllocationReportAck_message_t_0.insert("TradeDate_t_1659462718");
  elt.add_attribute("TxnTm", "TransactTime_t_2102815777"); // 0
  AllocationReportAck_message_t_0.insert("TransactTime_t_2102815777");
  elt.add_attribute("Stat", "0"); // 0
  AllocationReportAck_message_t_0.insert("0");
  elt.add_attribute("RejCode", "10"); // 0
  AllocationReportAck_message_t_0.insert("10");
  elt.add_attribute("RptTyp", "9"); // 0
  AllocationReportAck_message_t_0.insert("9");
  elt.add_attribute("ImReqTyp", "5"); // 0
  AllocationReportAck_message_t_0.insert("5");
  elt.add_attribute("MtchStat", "0"); // 0
  AllocationReportAck_message_t_0.insert("0");
  elt.add_attribute("Prod", "13"); // 0
  AllocationReportAck_message_t_0.insert("13");
  elt.add_attribute("SecTyp", "MLEG"); // 0
  AllocationReportAck_message_t_0.insert("MLEG");
  elt.add_attribute("Txt", "Text_t_846895284"); // 0
  AllocationReportAck_message_t_0.insert("Text_t_846895284");
  elt.add_attribute("EncTxtLen", "1294874113"); // 0
  AllocationReportAck_message_t_0.insert("1294874113");
  elt.add_attribute("EncTxt", "EncodedText_t_408529956"); // 0
  AllocationReportAck_message_t_0.insert("EncodedText_t_408529956");
  all_values.push_back(AllocationReportAck_message_t_0);
  all_compo_names.insert("AllocationReportAck_message_t");

  { // Hdr
    xml_element Hdr_6{"Hdr"};
    multiset<string> Hdr_6_set;
    Hdr_6.add_attribute("SeqNum", "1696640186"); // 1
    Hdr_6_set.insert("1696640186");
    Hdr_6.add_attribute("SID", "SenderCompID_t_869702772"); // 1
    Hdr_6_set.insert("SenderCompID_t_869702772");
    Hdr_6.add_attribute("TID", "TargetCompID_t_1025462952"); // 1
    Hdr_6_set.insert("TargetCompID_t_1025462952");
    Hdr_6.add_attribute("OBID", "OnBehalfOfCompID_t_942489029"); // 1
    Hdr_6_set.insert("OnBehalfOfCompID_t_942489029");
    Hdr_6.add_attribute("D2ID", "DeliverToCompID_t_277880197"); // 1
    Hdr_6_set.insert("DeliverToCompID_t_277880197");
    Hdr_6.add_attribute("SSub", "SenderSubID_t_688514855"); // 1
    Hdr_6_set.insert("SenderSubID_t_688514855");
    Hdr_6.add_attribute("SLoc", "SenderLocationID_t_317968374"); // 1
    Hdr_6_set.insert("SenderLocationID_t_317968374");
    Hdr_6.add_attribute("TSub", "TargetSubID_t_1670306625"); // 1
    Hdr_6_set.insert("TargetSubID_t_1670306625");
    Hdr_6.add_attribute("TLoc", "TargetLocationID_t_1098132995"); // 1
    Hdr_6_set.insert("TargetLocationID_t_1098132995");
    Hdr_6.add_attribute("OBSub", "OnBehalfOfSubID_t_264136783"); // 1
    Hdr_6_set.insert("OnBehalfOfSubID_t_264136783");
    Hdr_6.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1363661229"); // 1
    Hdr_6_set.insert("OnBehalfOfLocationID_t_1363661229");
    Hdr_6.add_attribute("D2Sub", "DeliverToSubID_t_872380980"); // 1
    Hdr_6_set.insert("DeliverToSubID_t_872380980");
    Hdr_6.add_attribute("D2Loc", "DeliverToLocationID_t_1826688875"); // 1
    Hdr_6_set.insert("DeliverToLocationID_t_1826688875");
    Hdr_6.add_attribute("PosDup", "N"); // 1
    Hdr_6_set.insert("N");
    Hdr_6.add_attribute("PosRsnd", "N"); // 1
    Hdr_6_set.insert("N");
    Hdr_6.add_attribute("Snt", "SendingTime_t_599995502"); // 1
    Hdr_6_set.insert("SendingTime_t_599995502");
    Hdr_6.add_attribute("OrigSnt", "OrigSendingTime_t_1416056531"); // 1
    Hdr_6_set.insert("OrigSendingTime_t_1416056531");
    Hdr_6.add_attribute("MsgEncd", "MessageEncoding_t_121420896"); // 1
    Hdr_6_set.insert("MessageEncoding_t_121420896");
    all_values.push_back(Hdr_6_set);
    all_compo_names.insert("Hdr_6_set");

    {
      xml_element Hop_6{"Hop"};
      multiset<string> Hop_6_set;
      Hop_6.add_attribute("ID", "HopCompID_t_1813422858"); // 2
      Hop_6_set.insert("HopCompID_t_1813422858");
      Hop_6.add_attribute("Ref", "928035601"); // 2
      Hop_6_set.insert("928035601");
      Hop_6.add_attribute("Snt", "HopSendingTime_t_76753025"); // 2
      Hop_6_set.insert("HopSendingTime_t_76753025");
      all_values.push_back(Hop_6_set);
      all_compo_names.insert("Hop_6_set");

      Hdr_6.add_element(Hop_6);
    }
    elt.add_element(Hdr_6);
  } // end Hdr
  { // Pty
    xml_element Pty_46{"Pty"};
    multiset<string> Pty_46_set;
    Pty_46.add_attribute("ID", "PartyID_t_2017516743"); // 1
    Pty_46_set.insert("PartyID_t_2017516743");
    Pty_46.add_attribute("Src", "H"); // 1
    Pty_46_set.insert("H");
    Pty_46.add_attribute("R", "65"); // 1
    Pty_46_set.insert("65");
    all_values.push_back(Pty_46_set);
    all_compo_names.insert("Pty_46_set");

    {
      xml_element Sub_46{"Sub"};
      multiset<string> Sub_46_set;
      Sub_46.add_attribute("ID", "PartySubID_t_1467408053"); // 2
      Sub_46_set.insert("PartySubID_t_1467408053");
      Sub_46.add_attribute("Typ", "33"); // 2
      Sub_46_set.insert("33");
      all_values.push_back(Sub_46_set);
      all_compo_names.insert("Sub_46_set");

      Pty_46.add_element(Sub_46);
    }
    elt.add_element(Pty_46);
  } // end Pty
  { // Pty
    xml_element Pty_47{"Pty"};
    multiset<string> Pty_47_set;
    Pty_47.add_attribute("ID", "PartyID_t_1507554885"); // 1
    Pty_47_set.insert("PartyID_t_1507554885");
    Pty_47.add_attribute("Src", "A"); // 1
    Pty_47_set.insert("A");
    Pty_47.add_attribute("R", "24"); // 1
    Pty_47_set.insert("24");
    all_values.push_back(Pty_47_set);
    all_compo_names.insert("Pty_47_set");

    {
      xml_element Sub_47{"Sub"};
      multiset<string> Sub_47_set;
      Sub_47.add_attribute("ID", "PartySubID_t_1916084841"); // 2
      Sub_47_set.insert("PartySubID_t_1916084841");
      Sub_47.add_attribute("Typ", "11"); // 2
      Sub_47_set.insert("11");
      all_values.push_back(Sub_47_set);
      all_compo_names.insert("Sub_47_set");

      Pty_47.add_element(Sub_47);
    }
    elt.add_element(Pty_47);
  } // end Pty
  { // AllocAck
    xml_element AllocAck_1{"AllocAck"};
    multiset<string> AllocAck_1_set;
    AllocAck_1.add_attribute("Acct", "AllocAccount_t_794064146"); // 1
    AllocAck_1_set.insert("AllocAccount_t_794064146");
    AllocAck_1.add_attribute("ActIDSrc", "4"); // 1
    AllocAck_1_set.insert("4");
    AllocAck_1.add_attribute("Px", "11210988.330000"); // 1
    AllocAck_1_set.insert("11210988.330000");
    AllocAck_1.add_attribute("AllocPosEfct", "C"); // 1
    AllocAck_1_set.insert("C");
    AllocAck_1.add_attribute("IndAllocID", "IndividualAllocID_t_976433631"); // 1
    AllocAck_1_set.insert("IndividualAllocID_t_976433631");
    AllocAck_1.add_attribute("IndAllocRejCode", "6"); // 1
    AllocAck_1_set.insert("6");
    AllocAck_1.add_attribute("Txt", "AllocText_t_433228349"); // 1
    AllocAck_1_set.insert("AllocText_t_433228349");
    AllocAck_1.add_attribute("EncAllocTextLen", "1240570414"); // 1
    AllocAck_1_set.insert("1240570414");
    AllocAck_1.add_attribute("EncAllocText", "EncodedAllocText_t_2007583039"); // 1
    AllocAck_1_set.insert("EncodedAllocText_t_2007583039");
    AllocAck_1.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_1305609329"); // 1
    AllocAck_1_set.insert("SecondaryIndividualAllocID_t_1305609329");
    AllocAck_1.add_attribute("CustCpcty", "AllocCustomerCapacity_t_919775642"); // 1
    AllocAck_1_set.insert("AllocCustomerCapacity_t_919775642");
    AllocAck_1.add_attribute("Typ", "2"); // 1
    AllocAck_1_set.insert("2");
    AllocAck_1.add_attribute("Qty", "16240658.230000"); // 1
    AllocAck_1_set.insert("16240658.230000");
    all_values.push_back(AllocAck_1_set);
    all_compo_names.insert("AllocAck_1_set");

    {
      xml_element Pty_48{"Pty"};
      multiset<string> Pty_48_set;
      Pty_48.add_attribute("ID", "NestedPartyID_t_1519771144"); // 2
      Pty_48_set.insert("NestedPartyID_t_1519771144");
      Pty_48.add_attribute("Src", "H"); // 2
      Pty_48_set.insert("H");
      Pty_48.add_attribute("R", "69"); // 2
      Pty_48_set.insert("69");
      all_values.push_back(Pty_48_set);
      all_compo_names.insert("Pty_48_set");

      {
        xml_element Sub_48{"Sub"};
        multiset<string> Sub_48_set;
        Sub_48.add_attribute("ID", "NestedPartySubID_t_1185710355"); // 3
        Sub_48_set.insert("NestedPartySubID_t_1185710355");
        Sub_48.add_attribute("Typ", "1"); // 3
        Sub_48_set.insert("1");
        all_values.push_back(Sub_48_set);
        all_compo_names.insert("Sub_48_set");

        Pty_48.add_element(Sub_48);
      }
      AllocAck_1.add_element(Pty_48);
    }
    elt.add_element(AllocAck_1);
  } // end AllocAck
  { // AllocAck
    xml_element AllocAck_2{"AllocAck"};
    multiset<string> AllocAck_2_set;
    AllocAck_2.add_attribute("Acct", "AllocAccount_t_1822239745"); // 1
    AllocAck_2_set.insert("AllocAccount_t_1822239745");
    AllocAck_2.add_attribute("ActIDSrc", "2"); // 1
    AllocAck_2_set.insert("2");
    AllocAck_2.add_attribute("Px", "4004493.220000"); // 1
    AllocAck_2_set.insert("4004493.220000");
    AllocAck_2.add_attribute("AllocPosEfct", "C"); // 1
    AllocAck_2_set.insert("C");
    AllocAck_2.add_attribute("IndAllocID", "IndividualAllocID_t_1683595088"); // 1
    AllocAck_2_set.insert("IndividualAllocID_t_1683595088");
    AllocAck_2.add_attribute("IndAllocRejCode", "0"); // 1
    AllocAck_2_set.insert("0");
    AllocAck_2.add_attribute("Txt", "AllocText_t_1489815155"); // 1
    AllocAck_2_set.insert("AllocText_t_1489815155");
    AllocAck_2.add_attribute("EncAllocTextLen", "1043666325"); // 1
    AllocAck_2_set.insert("1043666325");
    AllocAck_2.add_attribute("EncAllocText", "EncodedAllocText_t_2034677064"); // 1
    AllocAck_2_set.insert("EncodedAllocText_t_2034677064");
    AllocAck_2.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_1463331018"); // 1
    AllocAck_2_set.insert("SecondaryIndividualAllocID_t_1463331018");
    AllocAck_2.add_attribute("CustCpcty", "AllocCustomerCapacity_t_812267519"); // 1
    AllocAck_2_set.insert("AllocCustomerCapacity_t_812267519");
    AllocAck_2.add_attribute("Typ", "1"); // 1
    AllocAck_2_set.insert("1");
    AllocAck_2.add_attribute("Qty", "1590660.060000"); // 1
    AllocAck_2_set.insert("1590660.060000");
    all_values.push_back(AllocAck_2_set);
    all_compo_names.insert("AllocAck_2_set");

    {
      xml_element Pty_49{"Pty"};
      multiset<string> Pty_49_set;
      Pty_49.add_attribute("ID", "NestedPartyID_t_1606331665"); // 2
      Pty_49_set.insert("NestedPartyID_t_1606331665");
      Pty_49.add_attribute("Src", "6"); // 2
      Pty_49_set.insert("6");
      Pty_49.add_attribute("R", "54"); // 2
      Pty_49_set.insert("54");
      all_values.push_back(Pty_49_set);
      all_compo_names.insert("Pty_49_set");

      {
        xml_element Sub_49{"Sub"};
        multiset<string> Sub_49_set;
        Sub_49.add_attribute("ID", "NestedPartySubID_t_941427018"); // 3
        Sub_49_set.insert("NestedPartySubID_t_941427018");
        Sub_49.add_attribute("Typ", "17"); // 3
        Sub_49_set.insert("17");
        all_values.push_back(Sub_49_set);
        all_compo_names.insert("Sub_49_set");

        Pty_49.add_element(Sub_49);
      }
      AllocAck_2.add_element(Pty_49);
    }
    elt.add_element(AllocAck_2);
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
