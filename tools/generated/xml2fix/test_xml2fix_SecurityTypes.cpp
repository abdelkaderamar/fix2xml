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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecTyps" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityTypes_message_t_0;
  elt.add_attribute("ReqID", "SecurityReqID_t_1458483877"); // 0
  SecurityTypes_message_t_0.insert("SecurityReqID_t_1458483877");
  elt.add_attribute("RspID", "SecurityResponseID_t_81445802"); // 0
  SecurityTypes_message_t_0.insert("SecurityResponseID_t_81445802");
  elt.add_attribute("RspTyp", "5"); // 0
  SecurityTypes_message_t_0.insert("5");
  elt.add_attribute("TotNoSecTyps", "233730192"); // 0
  SecurityTypes_message_t_0.insert("233730192");
  elt.add_attribute("LastFragment", "Y"); // 0
  SecurityTypes_message_t_0.insert("Y");
  elt.add_attribute("Txt", "Text_t_1714741219"); // 0
  SecurityTypes_message_t_0.insert("Text_t_1714741219");
  elt.add_attribute("EncTxtLen", "1603628511"); // 0
  SecurityTypes_message_t_0.insert("1603628511");
  elt.add_attribute("EncTxt", "EncodedText_t_170142259"); // 0
  SecurityTypes_message_t_0.insert("EncodedText_t_170142259");
  elt.add_attribute("MktID", "MarketID_t_1094405862"); // 0
  SecurityTypes_message_t_0.insert("MarketID_t_1094405862");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_2081237706"); // 0
  SecurityTypes_message_t_0.insert("MarketSegmentID_t_2081237706");
  elt.add_attribute("SesID", "2"); // 0
  SecurityTypes_message_t_0.insert("2");
  elt.add_attribute("SesSub", "3"); // 0
  SecurityTypes_message_t_0.insert("3");
  elt.add_attribute("SubReqTyp", "1"); // 0
  SecurityTypes_message_t_0.insert("1");
  all_values.push_back(SecurityTypes_message_t_0);
  all_compo_names.insert("SecurityTypes_message_t");

  { // Hdr
    xml_element Hdr_89{"Hdr"};
    multiset<string> Hdr_89_set;
    Hdr_89.add_attribute("SeqNum", "97087684"); // 1
    Hdr_89_set.insert("97087684");
    Hdr_89.add_attribute("SID", "SenderCompID_t_1695068135"); // 1
    Hdr_89_set.insert("SenderCompID_t_1695068135");
    Hdr_89.add_attribute("TID", "TargetCompID_t_1634133664"); // 1
    Hdr_89_set.insert("TargetCompID_t_1634133664");
    Hdr_89.add_attribute("OBID", "OnBehalfOfCompID_t_1643904055"); // 1
    Hdr_89_set.insert("OnBehalfOfCompID_t_1643904055");
    Hdr_89.add_attribute("D2ID", "DeliverToCompID_t_514575827"); // 1
    Hdr_89_set.insert("DeliverToCompID_t_514575827");
    Hdr_89.add_attribute("SSub", "SenderSubID_t_1482194448"); // 1
    Hdr_89_set.insert("SenderSubID_t_1482194448");
    Hdr_89.add_attribute("SLoc", "SenderLocationID_t_953764755"); // 1
    Hdr_89_set.insert("SenderLocationID_t_953764755");
    Hdr_89.add_attribute("TSub", "TargetSubID_t_1875488730"); // 1
    Hdr_89_set.insert("TargetSubID_t_1875488730");
    Hdr_89.add_attribute("TLoc", "TargetLocationID_t_568176569"); // 1
    Hdr_89_set.insert("TargetLocationID_t_568176569");
    Hdr_89.add_attribute("OBSub", "OnBehalfOfSubID_t_1665852818"); // 1
    Hdr_89_set.insert("OnBehalfOfSubID_t_1665852818");
    Hdr_89.add_attribute("OBLoc", "OnBehalfOfLocationID_t_362192901"); // 1
    Hdr_89_set.insert("OnBehalfOfLocationID_t_362192901");
    Hdr_89.add_attribute("D2Sub", "DeliverToSubID_t_1908093570"); // 1
    Hdr_89_set.insert("DeliverToSubID_t_1908093570");
    Hdr_89.add_attribute("D2Loc", "DeliverToLocationID_t_269508166"); // 1
    Hdr_89_set.insert("DeliverToLocationID_t_269508166");
    Hdr_89.add_attribute("PosDup", "N"); // 1
    Hdr_89_set.insert("N");
    Hdr_89.add_attribute("PosRsnd", "Y"); // 1
    Hdr_89_set.insert("Y");
    Hdr_89.add_attribute("Snt", "SendingTime_t_847412332"); // 1
    Hdr_89_set.insert("SendingTime_t_847412332");
    Hdr_89.add_attribute("OrigSnt", "OrigSendingTime_t_442254979"); // 1
    Hdr_89_set.insert("OrigSendingTime_t_442254979");
    Hdr_89.add_attribute("MsgEncd", "MessageEncoding_t_232807356"); // 1
    Hdr_89_set.insert("MessageEncoding_t_232807356");
    all_values.push_back(Hdr_89_set);
    all_compo_names.insert("Hdr_89_set");

    {
      xml_element Hop_89{"Hop"};
      multiset<string> Hop_89_set;
      Hop_89.add_attribute("ID", "HopCompID_t_158412561"); // 2
      Hop_89_set.insert("HopCompID_t_158412561");
      Hop_89.add_attribute("Ref", "523700781"); // 2
      Hop_89_set.insert("523700781");
      Hop_89.add_attribute("Snt", "HopSendingTime_t_784353407"); // 2
      Hop_89_set.insert("HopSendingTime_t_784353407");
      all_values.push_back(Hop_89_set);
      all_compo_names.insert("Hop_89_set");

      Hdr_89.add_element(Hop_89);
    }
    elt.add_element(Hdr_89);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_17{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_17_set;
    ApplSeqCtrl_17.add_attribute("ApplID", "ApplID_t_392142754"); // 1
    ApplSeqCtrl_17_set.insert("ApplID_t_392142754");
    ApplSeqCtrl_17.add_attribute("ApplSeqNum", "868903852"); // 1
    ApplSeqCtrl_17_set.insert("868903852");
    ApplSeqCtrl_17.add_attribute("ApplLastSeqNum", "351610978"); // 1
    ApplSeqCtrl_17_set.insert("351610978");
    ApplSeqCtrl_17.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_17_set.insert("false");
    all_values.push_back(ApplSeqCtrl_17_set);
    all_compo_names.insert("ApplSeqCtrl_17_set");

    elt.add_element(ApplSeqCtrl_17);
  } // end ApplSeqCtrl
  { // SecT
    xml_element SecT_0{"SecT"};
    multiset<string> SecT_0_set;
    SecT_0.add_attribute("SecTyp", "ABS"); // 1
    SecT_0_set.insert("ABS");
    SecT_0.add_attribute("SubTyp", "SecuritySubType_t_1929525323"); // 1
    SecT_0_set.insert("SecuritySubType_t_1929525323");
    SecT_0.add_attribute("Prod", "7"); // 1
    SecT_0_set.insert("7");
    SecT_0.add_attribute("CFI", "CFICode_t_484758808"); // 1
    SecT_0_set.insert("CFICode_t_484758808");
    SecT_0.add_attribute("TxnTm", "TransactTime_t_1396988626"); // 1
    SecT_0_set.insert("TransactTime_t_1396988626");
    all_values.push_back(SecT_0_set);
    all_compo_names.insert("SecT_0_set");

    elt.add_element(SecT_0);
  } // end SecT
  { // SecT
    xml_element SecT_1{"SecT"};
    multiset<string> SecT_1_set;
    SecT_1.add_attribute("SecTyp", "STN"); // 1
    SecT_1_set.insert("STN");
    SecT_1.add_attribute("SubTyp", "SecuritySubType_t_32343295"); // 1
    SecT_1_set.insert("SecuritySubType_t_32343295");
    SecT_1.add_attribute("Prod", "12"); // 1
    SecT_1_set.insert("12");
    SecT_1.add_attribute("CFI", "CFICode_t_635585631"); // 1
    SecT_1_set.insert("CFICode_t_635585631");
    SecT_1.add_attribute("TxnTm", "TransactTime_t_546919123"); // 1
    SecT_1_set.insert("TransactTime_t_546919123");
    all_values.push_back(SecT_1_set);
    all_compo_names.insert("SecT_1_set");

    elt.add_element(SecT_1);
  } // end SecT
  { // SecT
    xml_element SecT_2{"SecT"};
    multiset<string> SecT_2_set;
    SecT_2.add_attribute("SecTyp", "AMENDED"); // 1
    SecT_2_set.insert("AMENDED");
    SecT_2.add_attribute("SubTyp", "SecuritySubType_t_1589350387"); // 1
    SecT_2_set.insert("SecuritySubType_t_1589350387");
    SecT_2.add_attribute("Prod", "7"); // 1
    SecT_2_set.insert("7");
    SecT_2.add_attribute("CFI", "CFICode_t_786526012"); // 1
    SecT_2_set.insert("CFICode_t_786526012");
    SecT_2.add_attribute("TxnTm", "TransactTime_t_1107719557"); // 1
    SecT_2_set.insert("TransactTime_t_1107719557");
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
