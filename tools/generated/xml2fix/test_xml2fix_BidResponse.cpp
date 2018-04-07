#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/BidResponse.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( BidResponse_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"BidRsp" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> BidResponse_message_t_0;
  elt.add_attribute("BidID", "BidID_t_1801637244"); // 0
  BidResponse_message_t_0.insert("BidID_t_1801637244");
  elt.add_attribute("ClBidID", "ClientBidID_t_484994192"); // 0
  BidResponse_message_t_0.insert("ClientBidID_t_484994192");
  all_values.push_back(BidResponse_message_t_0);
  all_compo_names.insert("BidResponse_message_t");

  { // Hdr
    xml_element Hdr_12{"Hdr"};
    multiset<string> Hdr_12_set;
    Hdr_12.add_attribute("SeqNum", "369072106"); // 1
    Hdr_12_set.insert("369072106");
    Hdr_12.add_attribute("SID", "SenderCompID_t_146644550"); // 1
    Hdr_12_set.insert("SenderCompID_t_146644550");
    Hdr_12.add_attribute("TID", "TargetCompID_t_2092320671"); // 1
    Hdr_12_set.insert("TargetCompID_t_2092320671");
    Hdr_12.add_attribute("OBID", "OnBehalfOfCompID_t_771650710"); // 1
    Hdr_12_set.insert("OnBehalfOfCompID_t_771650710");
    Hdr_12.add_attribute("D2ID", "DeliverToCompID_t_1883010159"); // 1
    Hdr_12_set.insert("DeliverToCompID_t_1883010159");
    Hdr_12.add_attribute("SSub", "SenderSubID_t_728825165"); // 1
    Hdr_12_set.insert("SenderSubID_t_728825165");
    Hdr_12.add_attribute("SLoc", "SenderLocationID_t_2109733110"); // 1
    Hdr_12_set.insert("SenderLocationID_t_2109733110");
    Hdr_12.add_attribute("TSub", "TargetSubID_t_893686471"); // 1
    Hdr_12_set.insert("TargetSubID_t_893686471");
    Hdr_12.add_attribute("TLoc", "TargetLocationID_t_1275155639"); // 1
    Hdr_12_set.insert("TargetLocationID_t_1275155639");
    Hdr_12.add_attribute("OBSub", "OnBehalfOfSubID_t_1787509302"); // 1
    Hdr_12_set.insert("OnBehalfOfSubID_t_1787509302");
    Hdr_12.add_attribute("OBLoc", "OnBehalfOfLocationID_t_827384658"); // 1
    Hdr_12_set.insert("OnBehalfOfLocationID_t_827384658");
    Hdr_12.add_attribute("D2Sub", "DeliverToSubID_t_998854415"); // 1
    Hdr_12_set.insert("DeliverToSubID_t_998854415");
    Hdr_12.add_attribute("D2Loc", "DeliverToLocationID_t_2118475387"); // 1
    Hdr_12_set.insert("DeliverToLocationID_t_2118475387");
    Hdr_12.add_attribute("PosDup", "N"); // 1
    Hdr_12_set.insert("N");
    Hdr_12.add_attribute("PosRsnd", "N"); // 1
    Hdr_12_set.insert("N");
    Hdr_12.add_attribute("Snt", "SendingTime_t_1455104634"); // 1
    Hdr_12_set.insert("SendingTime_t_1455104634");
    Hdr_12.add_attribute("OrigSnt", "OrigSendingTime_t_1807577665"); // 1
    Hdr_12_set.insert("OrigSendingTime_t_1807577665");
    Hdr_12.add_attribute("MsgEncd", "MessageEncoding_t_332216706"); // 1
    Hdr_12_set.insert("MessageEncoding_t_332216706");
    all_values.push_back(Hdr_12_set);
    all_compo_names.insert("Hdr_12_set");

    {
      xml_element Hop_12{"Hop"};
      multiset<string> Hop_12_set;
      Hop_12.add_attribute("ID", "HopCompID_t_1642088323"); // 2
      Hop_12_set.insert("HopCompID_t_1642088323");
      Hop_12.add_attribute("Ref", "689544278"); // 2
      Hop_12_set.insert("689544278");
      Hop_12.add_attribute("Snt", "HopSendingTime_t_617934351"); // 2
      Hop_12_set.insert("HopSendingTime_t_617934351");
      all_values.push_back(Hop_12_set);
      all_compo_names.insert("Hop_12_set");

      Hdr_12.add_element(Hop_12);
    }
    elt.add_element(Hdr_12);
  } // end Hdr
  { // CompRsp
    xml_element CompRsp_0{"CompRsp"};
    multiset<string> CompRsp_0_set;
    CompRsp_0.add_attribute("ID", "ListID_t_1917571835"); // 1
    CompRsp_0_set.insert("ListID_t_1917571835");
    CompRsp_0.add_attribute("Ctry", "508355733"); // 1
    CompRsp_0_set.insert("508355733");
    CompRsp_0.add_attribute("Side", "4"); // 1
    CompRsp_0_set.insert("4");
    CompRsp_0.add_attribute("Px", "12720523.350000"); // 1
    CompRsp_0_set.insert("12720523.350000");
    CompRsp_0.add_attribute("PxTyp", "15"); // 1
    CompRsp_0_set.insert("15");
    CompRsp_0.add_attribute("FairValu", "FairValue_t_1409201060"); // 1
    CompRsp_0_set.insert("FairValue_t_1409201060");
    CompRsp_0.add_attribute("NetGrossInd", "2"); // 1
    CompRsp_0_set.insert("2");
    CompRsp_0.add_attribute("SettlTyp", "5"); // 1
    CompRsp_0_set.insert("5");
    CompRsp_0.add_attribute("SettlDt", "SettlDate_t_1894195252"); // 1
    CompRsp_0_set.insert("SettlDate_t_1894195252");
    CompRsp_0.add_attribute("SesID", "4"); // 1
    CompRsp_0_set.insert("4");
    CompRsp_0.add_attribute("SesSub", "1"); // 1
    CompRsp_0_set.insert("1");
    CompRsp_0.add_attribute("Txt", "Text_t_1839032275"); // 1
    CompRsp_0_set.insert("Text_t_1839032275");
    CompRsp_0.add_attribute("EncTxtLen", "176038422"); // 1
    CompRsp_0_set.insert("176038422");
    CompRsp_0.add_attribute("EncTxt", "EncodedText_t_1437374295"); // 1
    CompRsp_0_set.insert("EncodedText_t_1437374295");
    all_values.push_back(CompRsp_0_set);
    all_compo_names.insert("CompRsp_0_set");

    {
      xml_element Comm_9{"Comm"};
      multiset<string> Comm_9_set;
      Comm_9.add_attribute("Comm", "Commission_t_420373792"); // 2
      Comm_9_set.insert("Commission_t_420373792");
      Comm_9.add_attribute("CommTyp", "5"); // 2
      Comm_9_set.insert("5");
      Comm_9.add_attribute("Ccy", "CHF"); // 2
      Comm_9_set.insert("CHF");
      Comm_9.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_9_set.insert("N");
      all_values.push_back(Comm_9_set);
      all_compo_names.insert("Comm_9_set");

      CompRsp_0.add_element(Comm_9);
    }
    elt.add_element(CompRsp_0);
  } // end CompRsp
  { // CompRsp
    xml_element CompRsp_1{"CompRsp"};
    multiset<string> CompRsp_1_set;
    CompRsp_1.add_attribute("ID", "ListID_t_1010961777"); // 1
    CompRsp_1_set.insert("ListID_t_1010961777");
    CompRsp_1.add_attribute("Ctry", "546900199"); // 1
    CompRsp_1_set.insert("546900199");
    CompRsp_1.add_attribute("Side", "E"); // 1
    CompRsp_1_set.insert("E");
    CompRsp_1.add_attribute("Px", "17802922.150000"); // 1
    CompRsp_1_set.insert("17802922.150000");
    CompRsp_1.add_attribute("PxTyp", "8"); // 1
    CompRsp_1_set.insert("8");
    CompRsp_1.add_attribute("FairValu", "FairValue_t_1204409912"); // 1
    CompRsp_1_set.insert("FairValue_t_1204409912");
    CompRsp_1.add_attribute("NetGrossInd", "1"); // 1
    CompRsp_1_set.insert("1");
    CompRsp_1.add_attribute("SettlTyp", "C"); // 1
    CompRsp_1_set.insert("C");
    CompRsp_1.add_attribute("SettlDt", "SettlDate_t_699014587"); // 1
    CompRsp_1_set.insert("SettlDate_t_699014587");
    CompRsp_1.add_attribute("SesID", "3"); // 1
    CompRsp_1_set.insert("3");
    CompRsp_1.add_attribute("SesSub", "3"); // 1
    CompRsp_1_set.insert("3");
    CompRsp_1.add_attribute("Txt", "Text_t_1256568270"); // 1
    CompRsp_1_set.insert("Text_t_1256568270");
    CompRsp_1.add_attribute("EncTxtLen", "1900018697"); // 1
    CompRsp_1_set.insert("1900018697");
    CompRsp_1.add_attribute("EncTxt", "EncodedText_t_585660663"); // 1
    CompRsp_1_set.insert("EncodedText_t_585660663");
    all_values.push_back(CompRsp_1_set);
    all_compo_names.insert("CompRsp_1_set");

    {
      xml_element Comm_10{"Comm"};
      multiset<string> Comm_10_set;
      Comm_10.add_attribute("Comm", "Commission_t_1717454402"); // 2
      Comm_10_set.insert("Commission_t_1717454402");
      Comm_10.add_attribute("CommTyp", "1"); // 2
      Comm_10_set.insert("1");
      Comm_10.add_attribute("Ccy", "GBP"); // 2
      Comm_10_set.insert("GBP");
      Comm_10.add_attribute("FundRenewWaiv", "Y"); // 2
      Comm_10_set.insert("Y");
      all_values.push_back(Comm_10_set);
      all_compo_names.insert("Comm_10_set");

      CompRsp_1.add_element(Comm_10);
    }
    elt.add_element(CompRsp_1);
  } // end CompRsp
  { // CompRsp
    xml_element CompRsp_2{"CompRsp"};
    multiset<string> CompRsp_2_set;
    CompRsp_2.add_attribute("ID", "ListID_t_1894429885"); // 1
    CompRsp_2_set.insert("ListID_t_1894429885");
    CompRsp_2.add_attribute("Ctry", "725883418"); // 1
    CompRsp_2_set.insert("725883418");
    CompRsp_2.add_attribute("Side", "E"); // 1
    CompRsp_2_set.insert("E");
    CompRsp_2.add_attribute("Px", "14487940.210000"); // 1
    CompRsp_2_set.insert("14487940.210000");
    CompRsp_2.add_attribute("PxTyp", "2"); // 1
    CompRsp_2_set.insert("2");
    CompRsp_2.add_attribute("FairValu", "FairValue_t_1787812771"); // 1
    CompRsp_2_set.insert("FairValue_t_1787812771");
    CompRsp_2.add_attribute("NetGrossInd", "1"); // 1
    CompRsp_2_set.insert("1");
    CompRsp_2.add_attribute("SettlTyp", "2"); // 1
    CompRsp_2_set.insert("2");
    CompRsp_2.add_attribute("SettlDt", "SettlDate_t_1926100655"); // 1
    CompRsp_2_set.insert("SettlDate_t_1926100655");
    CompRsp_2.add_attribute("SesID", "6"); // 1
    CompRsp_2_set.insert("6");
    CompRsp_2.add_attribute("SesSub", "2"); // 1
    CompRsp_2_set.insert("2");
    CompRsp_2.add_attribute("Txt", "Text_t_1704414193"); // 1
    CompRsp_2_set.insert("Text_t_1704414193");
    CompRsp_2.add_attribute("EncTxtLen", "1933223564"); // 1
    CompRsp_2_set.insert("1933223564");
    CompRsp_2.add_attribute("EncTxt", "EncodedText_t_932751820"); // 1
    CompRsp_2_set.insert("EncodedText_t_932751820");
    all_values.push_back(CompRsp_2_set);
    all_compo_names.insert("CompRsp_2_set");

    {
      xml_element Comm_11{"Comm"};
      multiset<string> Comm_11_set;
      Comm_11.add_attribute("Comm", "Commission_t_1453719471"); // 2
      Comm_11_set.insert("Commission_t_1453719471");
      Comm_11.add_attribute("CommTyp", "2"); // 2
      Comm_11_set.insert("2");
      Comm_11.add_attribute("Ccy", "CHF"); // 2
      Comm_11_set.insert("CHF");
      Comm_11.add_attribute("FundRenewWaiv", "Y"); // 2
      Comm_11_set.insert("Y");
      all_values.push_back(Comm_11_set);
      all_compo_names.insert("Comm_11_set");

      CompRsp_2.add_element(Comm_11);
    }
    elt.add_element(CompRsp_2);
  } // end CompRsp
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
