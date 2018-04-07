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
  elt.add_attribute("RptID", "AllocReportID_t_1407998656"); // 0
  AllocationReportAck_message_t_0.insert("AllocReportID_t_1407998656");
  elt.add_attribute("ID", "AllocID_t_1812306853"); // 0
  AllocationReportAck_message_t_0.insert("AllocID_t_1812306853");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1267883135"); // 0
  AllocationReportAck_message_t_0.insert("ClearingBusinessDate_t_1267883135");
  elt.add_attribute("AvgPxInd", "0"); // 0
  AllocationReportAck_message_t_0.insert("0");
  elt.add_attribute("Qty", "2411460.150000"); // 0
  AllocationReportAck_message_t_0.insert("2411460.150000");
  elt.add_attribute("TransTyp", "6"); // 0
  AllocationReportAck_message_t_0.insert("6");
  elt.add_attribute("ID2", "SecondaryAllocID_t_760378870"); // 0
  AllocationReportAck_message_t_0.insert("SecondaryAllocID_t_760378870");
  elt.add_attribute("TrdDt", "TradeDate_t_2101375856"); // 0
  AllocationReportAck_message_t_0.insert("TradeDate_t_2101375856");
  elt.add_attribute("TxnTm", "TransactTime_t_1735928126"); // 0
  AllocationReportAck_message_t_0.insert("TransactTime_t_1735928126");
  elt.add_attribute("Stat", "7"); // 0
  AllocationReportAck_message_t_0.insert("7");
  elt.add_attribute("RejCode", "8"); // 0
  AllocationReportAck_message_t_0.insert("8");
  elt.add_attribute("RptTyp", "2"); // 0
  AllocationReportAck_message_t_0.insert("2");
  elt.add_attribute("ImReqTyp", "6"); // 0
  AllocationReportAck_message_t_0.insert("6");
  elt.add_attribute("MtchStat", "1"); // 0
  AllocationReportAck_message_t_0.insert("1");
  elt.add_attribute("Prod", "9"); // 0
  AllocationReportAck_message_t_0.insert("9");
  elt.add_attribute("SecTyp", "SECLOAN"); // 0
  AllocationReportAck_message_t_0.insert("SECLOAN");
  elt.add_attribute("Txt", "Text_t_535722446"); // 0
  AllocationReportAck_message_t_0.insert("Text_t_535722446");
  elt.add_attribute("EncTxtLen", "349681752"); // 0
  AllocationReportAck_message_t_0.insert("349681752");
  elt.add_attribute("EncTxt", "EncodedText_t_191386041"); // 0
  AllocationReportAck_message_t_0.insert("EncodedText_t_191386041");
  all_values.push_back(AllocationReportAck_message_t_0);
  all_compo_names.insert("AllocationReportAck_message_t");

  { // Hdr
    xml_element Hdr_6{"Hdr"};
    multiset<string> Hdr_6_set;
    Hdr_6.add_attribute("SeqNum", "2104781601"); // 1
    Hdr_6_set.insert("2104781601");
    Hdr_6.add_attribute("SID", "SenderCompID_t_346486568"); // 1
    Hdr_6_set.insert("SenderCompID_t_346486568");
    Hdr_6.add_attribute("TID", "TargetCompID_t_617390158"); // 1
    Hdr_6_set.insert("TargetCompID_t_617390158");
    Hdr_6.add_attribute("OBID", "OnBehalfOfCompID_t_609447838"); // 1
    Hdr_6_set.insert("OnBehalfOfCompID_t_609447838");
    Hdr_6.add_attribute("D2ID", "DeliverToCompID_t_1844743614"); // 1
    Hdr_6_set.insert("DeliverToCompID_t_1844743614");
    Hdr_6.add_attribute("SSub", "SenderSubID_t_1412519567"); // 1
    Hdr_6_set.insert("SenderSubID_t_1412519567");
    Hdr_6.add_attribute("SLoc", "SenderLocationID_t_1536279031"); // 1
    Hdr_6_set.insert("SenderLocationID_t_1536279031");
    Hdr_6.add_attribute("TSub", "TargetSubID_t_1159082536"); // 1
    Hdr_6_set.insert("TargetSubID_t_1159082536");
    Hdr_6.add_attribute("TLoc", "TargetLocationID_t_608420885"); // 1
    Hdr_6_set.insert("TargetLocationID_t_608420885");
    Hdr_6.add_attribute("OBSub", "OnBehalfOfSubID_t_1723245164"); // 1
    Hdr_6_set.insert("OnBehalfOfSubID_t_1723245164");
    Hdr_6.add_attribute("OBLoc", "OnBehalfOfLocationID_t_311955037"); // 1
    Hdr_6_set.insert("OnBehalfOfLocationID_t_311955037");
    Hdr_6.add_attribute("D2Sub", "DeliverToSubID_t_574953198"); // 1
    Hdr_6_set.insert("DeliverToSubID_t_574953198");
    Hdr_6.add_attribute("D2Loc", "DeliverToLocationID_t_983760172"); // 1
    Hdr_6_set.insert("DeliverToLocationID_t_983760172");
    Hdr_6.add_attribute("PosDup", "N"); // 1
    Hdr_6_set.insert("N");
    Hdr_6.add_attribute("PosRsnd", "Y"); // 1
    Hdr_6_set.insert("Y");
    Hdr_6.add_attribute("Snt", "SendingTime_t_2063402813"); // 1
    Hdr_6_set.insert("SendingTime_t_2063402813");
    Hdr_6.add_attribute("OrigSnt", "OrigSendingTime_t_217924257"); // 1
    Hdr_6_set.insert("OrigSendingTime_t_217924257");
    Hdr_6.add_attribute("MsgEncd", "MessageEncoding_t_1393145676"); // 1
    Hdr_6_set.insert("MessageEncoding_t_1393145676");
    all_values.push_back(Hdr_6_set);
    all_compo_names.insert("Hdr_6_set");

    {
      xml_element Hop_6{"Hop"};
      multiset<string> Hop_6_set;
      Hop_6.add_attribute("ID", "HopCompID_t_676298035"); // 2
      Hop_6_set.insert("HopCompID_t_676298035");
      Hop_6.add_attribute("Ref", "171816465"); // 2
      Hop_6_set.insert("171816465");
      Hop_6.add_attribute("Snt", "HopSendingTime_t_981590154"); // 2
      Hop_6_set.insert("HopSendingTime_t_981590154");
      all_values.push_back(Hop_6_set);
      all_compo_names.insert("Hop_6_set");

      Hdr_6.add_element(Hop_6);
    }
    elt.add_element(Hdr_6);
  } // end Hdr
  { // Pty
    xml_element Pty_52{"Pty"};
    multiset<string> Pty_52_set;
    Pty_52.add_attribute("ID", "PartyID_t_711966117"); // 1
    Pty_52_set.insert("PartyID_t_711966117");
    Pty_52.add_attribute("Src", "D"); // 1
    Pty_52_set.insert("D");
    Pty_52.add_attribute("R", "11"); // 1
    Pty_52_set.insert("11");
    all_values.push_back(Pty_52_set);
    all_compo_names.insert("Pty_52_set");

    {
      xml_element Sub_52{"Sub"};
      multiset<string> Sub_52_set;
      Sub_52.add_attribute("ID", "PartySubID_t_1156250153"); // 2
      Sub_52_set.insert("PartySubID_t_1156250153");
      Sub_52.add_attribute("Typ", "16"); // 2
      Sub_52_set.insert("16");
      all_values.push_back(Sub_52_set);
      all_compo_names.insert("Sub_52_set");

      Pty_52.add_element(Sub_52);
    }
    elt.add_element(Pty_52);
  } // end Pty
  { // AllocAck
    xml_element AllocAck_2{"AllocAck"};
    multiset<string> AllocAck_2_set;
    AllocAck_2.add_attribute("Acct", "AllocAccount_t_1691972599"); // 1
    AllocAck_2_set.insert("AllocAccount_t_1691972599");
    AllocAck_2.add_attribute("ActIDSrc", "5"); // 1
    AllocAck_2_set.insert("5");
    AllocAck_2.add_attribute("Px", "14992128.200000"); // 1
    AllocAck_2_set.insert("14992128.200000");
    AllocAck_2.add_attribute("AllocPosEfct", "O"); // 1
    AllocAck_2_set.insert("O");
    AllocAck_2.add_attribute("IndAllocID", "IndividualAllocID_t_708873822"); // 1
    AllocAck_2_set.insert("IndividualAllocID_t_708873822");
    AllocAck_2.add_attribute("IndAllocRejCode", "12"); // 1
    AllocAck_2_set.insert("12");
    AllocAck_2.add_attribute("Txt", "AllocText_t_111234742"); // 1
    AllocAck_2_set.insert("AllocText_t_111234742");
    AllocAck_2.add_attribute("EncAllocTextLen", "406133789"); // 1
    AllocAck_2_set.insert("406133789");
    AllocAck_2.add_attribute("EncAllocText", "EncodedAllocText_t_1381638898"); // 1
    AllocAck_2_set.insert("EncodedAllocText_t_1381638898");
    AllocAck_2.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_1647513773"); // 1
    AllocAck_2_set.insert("SecondaryIndividualAllocID_t_1647513773");
    AllocAck_2.add_attribute("CustCpcty", "AllocCustomerCapacity_t_1565216325"); // 1
    AllocAck_2_set.insert("AllocCustomerCapacity_t_1565216325");
    AllocAck_2.add_attribute("Typ", "2"); // 1
    AllocAck_2_set.insert("2");
    AllocAck_2.add_attribute("Qty", "12232752.900000"); // 1
    AllocAck_2_set.insert("12232752.900000");
    all_values.push_back(AllocAck_2_set);
    all_compo_names.insert("AllocAck_2_set");

    {
      xml_element Pty_53{"Pty"};
      multiset<string> Pty_53_set;
      Pty_53.add_attribute("ID", "NestedPartyID_t_1877171362"); // 2
      Pty_53_set.insert("NestedPartyID_t_1877171362");
      Pty_53.add_attribute("Src", "2"); // 2
      Pty_53_set.insert("2");
      Pty_53.add_attribute("R", "22"); // 2
      Pty_53_set.insert("22");
      all_values.push_back(Pty_53_set);
      all_compo_names.insert("Pty_53_set");

      {
        xml_element Sub_53{"Sub"};
        multiset<string> Sub_53_set;
        Sub_53.add_attribute("ID", "NestedPartySubID_t_1853949604"); // 3
        Sub_53_set.insert("NestedPartySubID_t_1853949604");
        Sub_53.add_attribute("Typ", "16"); // 3
        Sub_53_set.insert("16");
        all_values.push_back(Sub_53_set);
        all_compo_names.insert("Sub_53_set");

        Pty_53.add_element(Sub_53);
      }
      AllocAck_2.add_element(Pty_53);
    }
    elt.add_element(AllocAck_2);
  } // end AllocAck
  { // AllocAck
    xml_element AllocAck_3{"AllocAck"};
    multiset<string> AllocAck_3_set;
    AllocAck_3.add_attribute("Acct", "AllocAccount_t_2122954627"); // 1
    AllocAck_3_set.insert("AllocAccount_t_2122954627");
    AllocAck_3.add_attribute("ActIDSrc", "3"); // 1
    AllocAck_3_set.insert("3");
    AllocAck_3.add_attribute("Px", "15060276.940000"); // 1
    AllocAck_3_set.insert("15060276.940000");
    AllocAck_3.add_attribute("AllocPosEfct", "F"); // 1
    AllocAck_3_set.insert("F");
    AllocAck_3.add_attribute("IndAllocID", "IndividualAllocID_t_96206679"); // 1
    AllocAck_3_set.insert("IndividualAllocID_t_96206679");
    AllocAck_3.add_attribute("IndAllocRejCode", "2"); // 1
    AllocAck_3_set.insert("2");
    AllocAck_3.add_attribute("Txt", "AllocText_t_1211930986"); // 1
    AllocAck_3_set.insert("AllocText_t_1211930986");
    AllocAck_3.add_attribute("EncAllocTextLen", "808172797"); // 1
    AllocAck_3_set.insert("808172797");
    AllocAck_3.add_attribute("EncAllocText", "EncodedAllocText_t_176813281"); // 1
    AllocAck_3_set.insert("EncodedAllocText_t_176813281");
    AllocAck_3.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_1109409784"); // 1
    AllocAck_3_set.insert("SecondaryIndividualAllocID_t_1109409784");
    AllocAck_3.add_attribute("CustCpcty", "AllocCustomerCapacity_t_1964422950"); // 1
    AllocAck_3_set.insert("AllocCustomerCapacity_t_1964422950");
    AllocAck_3.add_attribute("Typ", "2"); // 1
    AllocAck_3_set.insert("2");
    AllocAck_3.add_attribute("Qty", "2697529.150000"); // 1
    AllocAck_3_set.insert("2697529.150000");
    all_values.push_back(AllocAck_3_set);
    all_compo_names.insert("AllocAck_3_set");

    {
      xml_element Pty_54{"Pty"};
      multiset<string> Pty_54_set;
      Pty_54.add_attribute("ID", "NestedPartyID_t_1508911901"); // 2
      Pty_54_set.insert("NestedPartyID_t_1508911901");
      Pty_54.add_attribute("Src", "B"); // 2
      Pty_54_set.insert("B");
      Pty_54.add_attribute("R", "78"); // 2
      Pty_54_set.insert("78");
      all_values.push_back(Pty_54_set);
      all_compo_names.insert("Pty_54_set");

      {
        xml_element Sub_54{"Sub"};
        multiset<string> Sub_54_set;
        Sub_54.add_attribute("ID", "NestedPartySubID_t_1010698805"); // 3
        Sub_54_set.insert("NestedPartySubID_t_1010698805");
        Sub_54.add_attribute("Typ", "19"); // 3
        Sub_54_set.insert("19");
        all_values.push_back(Sub_54_set);
        all_compo_names.insert("Sub_54_set");

        Pty_54.add_element(Sub_54);
      }
      AllocAck_3.add_element(Pty_54);
    }
    elt.add_element(AllocAck_3);
  } // end AllocAck
  { // AllocAck
    xml_element AllocAck_4{"AllocAck"};
    multiset<string> AllocAck_4_set;
    AllocAck_4.add_attribute("Acct", "AllocAccount_t_1738085067"); // 1
    AllocAck_4_set.insert("AllocAccount_t_1738085067");
    AllocAck_4.add_attribute("ActIDSrc", "5"); // 1
    AllocAck_4_set.insert("5");
    AllocAck_4.add_attribute("Px", "16669136.490000"); // 1
    AllocAck_4_set.insert("16669136.490000");
    AllocAck_4.add_attribute("AllocPosEfct", "C"); // 1
    AllocAck_4_set.insert("C");
    AllocAck_4.add_attribute("IndAllocID", "IndividualAllocID_t_621963673"); // 1
    AllocAck_4_set.insert("IndividualAllocID_t_621963673");
    AllocAck_4.add_attribute("IndAllocRejCode", "10"); // 1
    AllocAck_4_set.insert("10");
    AllocAck_4.add_attribute("Txt", "AllocText_t_814816453"); // 1
    AllocAck_4_set.insert("AllocText_t_814816453");
    AllocAck_4.add_attribute("EncAllocTextLen", "1845238963"); // 1
    AllocAck_4_set.insert("1845238963");
    AllocAck_4.add_attribute("EncAllocText", "EncodedAllocText_t_814334041"); // 1
    AllocAck_4_set.insert("EncodedAllocText_t_814334041");
    AllocAck_4.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_1232345786"); // 1
    AllocAck_4_set.insert("SecondaryIndividualAllocID_t_1232345786");
    AllocAck_4.add_attribute("CustCpcty", "AllocCustomerCapacity_t_1904790778"); // 1
    AllocAck_4_set.insert("AllocCustomerCapacity_t_1904790778");
    AllocAck_4.add_attribute("Typ", "1"); // 1
    AllocAck_4_set.insert("1");
    AllocAck_4.add_attribute("Qty", "13452278.050000"); // 1
    AllocAck_4_set.insert("13452278.050000");
    all_values.push_back(AllocAck_4_set);
    all_compo_names.insert("AllocAck_4_set");

    {
      xml_element Pty_55{"Pty"};
      multiset<string> Pty_55_set;
      Pty_55.add_attribute("ID", "NestedPartyID_t_1880261757"); // 2
      Pty_55_set.insert("NestedPartyID_t_1880261757");
      Pty_55.add_attribute("Src", "B"); // 2
      Pty_55_set.insert("B");
      Pty_55.add_attribute("R", "35"); // 2
      Pty_55_set.insert("35");
      all_values.push_back(Pty_55_set);
      all_compo_names.insert("Pty_55_set");

      {
        xml_element Sub_55{"Sub"};
        multiset<string> Sub_55_set;
        Sub_55.add_attribute("ID", "NestedPartySubID_t_384547124"); // 3
        Sub_55_set.insert("NestedPartySubID_t_384547124");
        Sub_55.add_attribute("Typ", "21"); // 3
        Sub_55_set.insert("21");
        all_values.push_back(Sub_55_set);
        all_compo_names.insert("Sub_55_set");

        Pty_55.add_element(Sub_55);
      }
      AllocAck_4.add_element(Pty_55);
    }
    elt.add_element(AllocAck_4);
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
