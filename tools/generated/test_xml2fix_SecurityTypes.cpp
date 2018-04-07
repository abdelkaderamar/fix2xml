#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityTypes.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityTypes_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecTyps" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityTypes_message_t_0;
  elt.add_attribute("ReqID", "SecurityReqID_t_992368505"); // 0
  SecurityTypes_message_t_0.insert("SecurityReqID_t_992368505");
  elt.add_attribute("RspID", "SecurityResponseID_t_1204785399"); // 0
  SecurityTypes_message_t_0.insert("SecurityResponseID_t_1204785399");
  elt.add_attribute("RspTyp", "5"); // 0
  SecurityTypes_message_t_0.insert("5");
  elt.add_attribute("TotNoSecTyps", "900924512"); // 0
  SecurityTypes_message_t_0.insert("900924512");
  elt.add_attribute("LastFragment", "Y"); // 0
  SecurityTypes_message_t_0.insert("Y");
  elt.add_attribute("Txt", "Text_t_2073103085"); // 0
  SecurityTypes_message_t_0.insert("Text_t_2073103085");
  elt.add_attribute("EncTxtLen", "606836708"); // 0
  SecurityTypes_message_t_0.insert("606836708");
  elt.add_attribute("EncTxt", "EncodedText_t_1514338317"); // 0
  SecurityTypes_message_t_0.insert("EncodedText_t_1514338317");
  elt.add_attribute("MktID", "MarketID_t_206442200"); // 0
  SecurityTypes_message_t_0.insert("MarketID_t_206442200");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1566581373"); // 0
  SecurityTypes_message_t_0.insert("MarketSegmentID_t_1566581373");
  elt.add_attribute("SesID", "6"); // 0
  SecurityTypes_message_t_0.insert("6");
  elt.add_attribute("SesSub", "1"); // 0
  SecurityTypes_message_t_0.insert("1");
  elt.add_attribute("SubReqTyp", "0"); // 0
  SecurityTypes_message_t_0.insert("0");
  all_values.push_back(SecurityTypes_message_t_0);
  all_compo_names.insert("SecurityTypes_message_t");

  { // Hdr
    xml_element Hdr_89{"Hdr"};
    multiset<string> Hdr_89_set;
    Hdr_89.add_attribute("SeqNum", "30127783"); // 1
    Hdr_89_set.insert("30127783");
    Hdr_89.add_attribute("SID", "SenderCompID_t_86176159"); // 1
    Hdr_89_set.insert("SenderCompID_t_86176159");
    Hdr_89.add_attribute("TID", "TargetCompID_t_2064096617"); // 1
    Hdr_89_set.insert("TargetCompID_t_2064096617");
    Hdr_89.add_attribute("OBID", "OnBehalfOfCompID_t_67200677"); // 1
    Hdr_89_set.insert("OnBehalfOfCompID_t_67200677");
    Hdr_89.add_attribute("D2ID", "DeliverToCompID_t_619162975"); // 1
    Hdr_89_set.insert("DeliverToCompID_t_619162975");
    Hdr_89.add_attribute("SSub", "SenderSubID_t_1432382976"); // 1
    Hdr_89_set.insert("SenderSubID_t_1432382976");
    Hdr_89.add_attribute("SLoc", "SenderLocationID_t_360730867"); // 1
    Hdr_89_set.insert("SenderLocationID_t_360730867");
    Hdr_89.add_attribute("TSub", "TargetSubID_t_757608763"); // 1
    Hdr_89_set.insert("TargetSubID_t_757608763");
    Hdr_89.add_attribute("TLoc", "TargetLocationID_t_1156321966"); // 1
    Hdr_89_set.insert("TargetLocationID_t_1156321966");
    Hdr_89.add_attribute("OBSub", "OnBehalfOfSubID_t_1311658045"); // 1
    Hdr_89_set.insert("OnBehalfOfSubID_t_1311658045");
    Hdr_89.add_attribute("OBLoc", "OnBehalfOfLocationID_t_86554301"); // 1
    Hdr_89_set.insert("OnBehalfOfLocationID_t_86554301");
    Hdr_89.add_attribute("D2Sub", "DeliverToSubID_t_375483071"); // 1
    Hdr_89_set.insert("DeliverToSubID_t_375483071");
    Hdr_89.add_attribute("D2Loc", "DeliverToLocationID_t_1945031506"); // 1
    Hdr_89_set.insert("DeliverToLocationID_t_1945031506");
    Hdr_89.add_attribute("PosDup", "N"); // 1
    Hdr_89_set.insert("N");
    Hdr_89.add_attribute("PosRsnd", "N"); // 1
    Hdr_89_set.insert("N");
    Hdr_89.add_attribute("Snt", "SendingTime_t_1298116994"); // 1
    Hdr_89_set.insert("SendingTime_t_1298116994");
    Hdr_89.add_attribute("OrigSnt", "OrigSendingTime_t_2114360304"); // 1
    Hdr_89_set.insert("OrigSendingTime_t_2114360304");
    Hdr_89.add_attribute("MsgEncd", "MessageEncoding_t_176712197"); // 1
    Hdr_89_set.insert("MessageEncoding_t_176712197");
    all_values.push_back(Hdr_89_set);
    all_compo_names.insert("Hdr_89_set");

    {
      xml_element Hop_89{"Hop"};
      multiset<string> Hop_89_set;
      Hop_89.add_attribute("ID", "HopCompID_t_143001851"); // 2
      Hop_89_set.insert("HopCompID_t_143001851");
      Hop_89.add_attribute("Ref", "1171662056"); // 2
      Hop_89_set.insert("1171662056");
      Hop_89.add_attribute("Snt", "HopSendingTime_t_814224867"); // 2
      Hop_89_set.insert("HopSendingTime_t_814224867");
      all_values.push_back(Hop_89_set);
      all_compo_names.insert("Hop_89_set");

      Hdr_89.add_element(Hop_89);
    }
    elt.add_element(Hdr_89);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_17{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_17_set;
    ApplSeqCtrl_17.add_attribute("ApplID", "ApplID_t_1043926363"); // 1
    ApplSeqCtrl_17_set.insert("ApplID_t_1043926363");
    ApplSeqCtrl_17.add_attribute("ApplSeqNum", "1145231263"); // 1
    ApplSeqCtrl_17_set.insert("1145231263");
    ApplSeqCtrl_17.add_attribute("ApplLastSeqNum", "739844304"); // 1
    ApplSeqCtrl_17_set.insert("739844304");
    ApplSeqCtrl_17.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_17_set.insert("false");
    all_values.push_back(ApplSeqCtrl_17_set);
    all_compo_names.insert("ApplSeqCtrl_17_set");

    elt.add_element(ApplSeqCtrl_17);
  } // end ApplSeqCtrl
  { // SecT
    xml_element SecT_0{"SecT"};
    multiset<string> SecT_0_set;
    SecT_0.add_attribute("SecTyp", "CS"); // 1
    SecT_0_set.insert("CS");
    SecT_0.add_attribute("SubTyp", "SecuritySubType_t_1069860797"); // 1
    SecT_0_set.insert("SecuritySubType_t_1069860797");
    SecT_0.add_attribute("Prod", "12"); // 1
    SecT_0_set.insert("12");
    SecT_0.add_attribute("CFI", "CFICode_t_2058757480"); // 1
    SecT_0_set.insert("CFICode_t_2058757480");
    SecT_0.add_attribute("TxnTm", "TransactTime_t_1773875261"); // 1
    SecT_0_set.insert("TransactTime_t_1773875261");
    all_values.push_back(SecT_0_set);
    all_compo_names.insert("SecT_0_set");

    elt.add_element(SecT_0);
  } // end SecT
  { // SecT
    xml_element SecT_1{"SecT"};
    multiset<string> SecT_1_set;
    SecT_1.add_attribute("SecTyp", "TD"); // 1
    SecT_1_set.insert("TD");
    SecT_1.add_attribute("SubTyp", "SecuritySubType_t_2144933640"); // 1
    SecT_1_set.insert("SecuritySubType_t_2144933640");
    SecT_1.add_attribute("Prod", "11"); // 1
    SecT_1_set.insert("11");
    SecT_1.add_attribute("CFI", "CFICode_t_1342376605"); // 1
    SecT_1_set.insert("CFICode_t_1342376605");
    SecT_1.add_attribute("TxnTm", "TransactTime_t_616612967"); // 1
    SecT_1_set.insert("TransactTime_t_616612967");
    all_values.push_back(SecT_1_set);
    all_compo_names.insert("SecT_1_set");

    elt.add_element(SecT_1);
  } // end SecT
  { // SecT
    xml_element SecT_2{"SecT"};
    multiset<string> SecT_2_set;
    SecT_2.add_attribute("SecTyp", "FOR"); // 1
    SecT_2_set.insert("FOR");
    SecT_2.add_attribute("SubTyp", "SecuritySubType_t_1703107473"); // 1
    SecT_2_set.insert("SecuritySubType_t_1703107473");
    SecT_2.add_attribute("Prod", "9"); // 1
    SecT_2_set.insert("9");
    SecT_2.add_attribute("CFI", "CFICode_t_2131709525"); // 1
    SecT_2_set.insert("CFICode_t_2131709525");
    SecT_2.add_attribute("TxnTm", "TransactTime_t_867281870"); // 1
    SecT_2_set.insert("TransactTime_t_867281870");
    all_values.push_back(SecT_2_set);
    all_compo_names.insert("SecT_2_set");

    elt.add_element(SecT_2);
  } // end SecT
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
