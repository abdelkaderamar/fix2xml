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
  elt.add_attribute("BidID", "BidID_t_1794215018"); // 0
  BidResponse_message_t_0.insert("BidID_t_1794215018");
  elt.add_attribute("ClBidID", "ClientBidID_t_14013821"); // 0
  BidResponse_message_t_0.insert("ClientBidID_t_14013821");
  all_values.push_back(BidResponse_message_t_0);
  all_compo_names.insert("BidResponse_message_t");

  { // Hdr
    xml_element Hdr_12{"Hdr"};
    multiset<string> Hdr_12_set;
    Hdr_12.add_attribute("SeqNum", "530854906"); // 1
    Hdr_12_set.insert("530854906");
    Hdr_12.add_attribute("SID", "SenderCompID_t_448604607"); // 1
    Hdr_12_set.insert("SenderCompID_t_448604607");
    Hdr_12.add_attribute("TID", "TargetCompID_t_1446224403"); // 1
    Hdr_12_set.insert("TargetCompID_t_1446224403");
    Hdr_12.add_attribute("OBID", "OnBehalfOfCompID_t_1768727277"); // 1
    Hdr_12_set.insert("OnBehalfOfCompID_t_1768727277");
    Hdr_12.add_attribute("D2ID", "DeliverToCompID_t_1032133511"); // 1
    Hdr_12_set.insert("DeliverToCompID_t_1032133511");
    Hdr_12.add_attribute("SSub", "SenderSubID_t_1108304970"); // 1
    Hdr_12_set.insert("SenderSubID_t_1108304970");
    Hdr_12.add_attribute("SLoc", "SenderLocationID_t_1008128578"); // 1
    Hdr_12_set.insert("SenderLocationID_t_1008128578");
    Hdr_12.add_attribute("TSub", "TargetSubID_t_2061400640"); // 1
    Hdr_12_set.insert("TargetSubID_t_2061400640");
    Hdr_12.add_attribute("TLoc", "TargetLocationID_t_1557248236"); // 1
    Hdr_12_set.insert("TargetLocationID_t_1557248236");
    Hdr_12.add_attribute("OBSub", "OnBehalfOfSubID_t_625780242"); // 1
    Hdr_12_set.insert("OnBehalfOfSubID_t_625780242");
    Hdr_12.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1200441627"); // 1
    Hdr_12_set.insert("OnBehalfOfLocationID_t_1200441627");
    Hdr_12.add_attribute("D2Sub", "DeliverToSubID_t_1564036316"); // 1
    Hdr_12_set.insert("DeliverToSubID_t_1564036316");
    Hdr_12.add_attribute("D2Loc", "DeliverToLocationID_t_754992325"); // 1
    Hdr_12_set.insert("DeliverToLocationID_t_754992325");
    Hdr_12.add_attribute("PosDup", "Y"); // 1
    Hdr_12_set.insert("Y");
    Hdr_12.add_attribute("PosRsnd", "N"); // 1
    Hdr_12_set.insert("N");
    Hdr_12.add_attribute("Snt", "SendingTime_t_1230179574"); // 1
    Hdr_12_set.insert("SendingTime_t_1230179574");
    Hdr_12.add_attribute("OrigSnt", "OrigSendingTime_t_1079848155"); // 1
    Hdr_12_set.insert("OrigSendingTime_t_1079848155");
    Hdr_12.add_attribute("MsgEncd", "MessageEncoding_t_1696132263"); // 1
    Hdr_12_set.insert("MessageEncoding_t_1696132263");
    all_values.push_back(Hdr_12_set);
    all_compo_names.insert("Hdr_12_set");

    {
      xml_element Hop_12{"Hop"};
      multiset<string> Hop_12_set;
      Hop_12.add_attribute("ID", "HopCompID_t_1400474217"); // 2
      Hop_12_set.insert("HopCompID_t_1400474217");
      Hop_12.add_attribute("Ref", "533558608"); // 2
      Hop_12_set.insert("533558608");
      Hop_12.add_attribute("Snt", "HopSendingTime_t_1659973273"); // 2
      Hop_12_set.insert("HopSendingTime_t_1659973273");
      all_values.push_back(Hop_12_set);
      all_compo_names.insert("Hop_12_set");

      Hdr_12.add_element(Hop_12);
    }
    elt.add_element(Hdr_12);
  } // end Hdr
  { // CompRsp
    xml_element CompRsp_0{"CompRsp"};
    multiset<string> CompRsp_0_set;
    CompRsp_0.add_attribute("ID", "ListID_t_735199474"); // 1
    CompRsp_0_set.insert("ListID_t_735199474");
    CompRsp_0.add_attribute("Ctry", "2069853886"); // 1
    CompRsp_0_set.insert("2069853886");
    CompRsp_0.add_attribute("Side", "E"); // 1
    CompRsp_0_set.insert("E");
    CompRsp_0.add_attribute("Px", "12599069.520000"); // 1
    CompRsp_0_set.insert("12599069.520000");
    CompRsp_0.add_attribute("PxTyp", "14"); // 1
    CompRsp_0_set.insert("14");
    CompRsp_0.add_attribute("FairValu", "FairValue_t_1768474019"); // 1
    CompRsp_0_set.insert("FairValue_t_1768474019");
    CompRsp_0.add_attribute("NetGrossInd", "1"); // 1
    CompRsp_0_set.insert("1");
    CompRsp_0.add_attribute("SettlTyp", "6"); // 1
    CompRsp_0_set.insert("6");
    CompRsp_0.add_attribute("SettlDt", "SettlDate_t_1782487840"); // 1
    CompRsp_0_set.insert("SettlDate_t_1782487840");
    CompRsp_0.add_attribute("SesID", "2"); // 1
    CompRsp_0_set.insert("2");
    CompRsp_0.add_attribute("SesSub", "4"); // 1
    CompRsp_0_set.insert("4");
    CompRsp_0.add_attribute("Txt", "Text_t_1081228596"); // 1
    CompRsp_0_set.insert("Text_t_1081228596");
    CompRsp_0.add_attribute("EncTxtLen", "841177604"); // 1
    CompRsp_0_set.insert("841177604");
    CompRsp_0.add_attribute("EncTxt", "EncodedText_t_142209961"); // 1
    CompRsp_0_set.insert("EncodedText_t_142209961");
    all_values.push_back(CompRsp_0_set);
    all_compo_names.insert("CompRsp_0_set");

    {
      xml_element Comm_4{"Comm"};
      multiset<string> Comm_4_set;
      Comm_4.add_attribute("Comm", "Commission_t_42049918"); // 2
      Comm_4_set.insert("Commission_t_42049918");
      Comm_4.add_attribute("CommTyp", "1"); // 2
      Comm_4_set.insert("1");
      Comm_4.add_attribute("Ccy", "GBP"); // 2
      Comm_4_set.insert("GBP");
      Comm_4.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_4_set.insert("N");
      all_values.push_back(Comm_4_set);
      all_compo_names.insert("Comm_4_set");

      CompRsp_0.add_element(Comm_4);
    }
    elt.add_element(CompRsp_0);
  } // end CompRsp
  { // CompRsp
    xml_element CompRsp_1{"CompRsp"};
    multiset<string> CompRsp_1_set;
    CompRsp_1.add_attribute("ID", "ListID_t_1256568580"); // 1
    CompRsp_1_set.insert("ListID_t_1256568580");
    CompRsp_1.add_attribute("Ctry", "1015850823"); // 1
    CompRsp_1_set.insert("1015850823");
    CompRsp_1.add_attribute("Side", "E"); // 1
    CompRsp_1_set.insert("E");
    CompRsp_1.add_attribute("Px", "14647641.550000"); // 1
    CompRsp_1_set.insert("14647641.550000");
    CompRsp_1.add_attribute("PxTyp", "17"); // 1
    CompRsp_1_set.insert("17");
    CompRsp_1.add_attribute("FairValu", "FairValue_t_165291028"); // 1
    CompRsp_1_set.insert("FairValue_t_165291028");
    CompRsp_1.add_attribute("NetGrossInd", "2"); // 1
    CompRsp_1_set.insert("2");
    CompRsp_1.add_attribute("SettlTyp", "4"); // 1
    CompRsp_1_set.insert("4");
    CompRsp_1.add_attribute("SettlDt", "SettlDate_t_1565765245"); // 1
    CompRsp_1_set.insert("SettlDate_t_1565765245");
    CompRsp_1.add_attribute("SesID", "2"); // 1
    CompRsp_1_set.insert("2");
    CompRsp_1.add_attribute("SesSub", "7"); // 1
    CompRsp_1_set.insert("7");
    CompRsp_1.add_attribute("Txt", "Text_t_1158011037"); // 1
    CompRsp_1_set.insert("Text_t_1158011037");
    CompRsp_1.add_attribute("EncTxtLen", "1665886746"); // 1
    CompRsp_1_set.insert("1665886746");
    CompRsp_1.add_attribute("EncTxt", "EncodedText_t_1087102127"); // 1
    CompRsp_1_set.insert("EncodedText_t_1087102127");
    all_values.push_back(CompRsp_1_set);
    all_compo_names.insert("CompRsp_1_set");

    {
      xml_element Comm_5{"Comm"};
      multiset<string> Comm_5_set;
      Comm_5.add_attribute("Comm", "Commission_t_1173156106"); // 2
      Comm_5_set.insert("Commission_t_1173156106");
      Comm_5.add_attribute("CommTyp", "5"); // 2
      Comm_5_set.insert("5");
      Comm_5.add_attribute("Ccy", "EUR"); // 2
      Comm_5_set.insert("EUR");
      Comm_5.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_5_set.insert("N");
      all_values.push_back(Comm_5_set);
      all_compo_names.insert("Comm_5_set");

      CompRsp_1.add_element(Comm_5);
    }
    elt.add_element(CompRsp_1);
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
