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
  elt.add_attribute("ReqID", "SecurityReqID_t_344460632"); // 0
  SecurityTypes_message_t_0.insert("SecurityReqID_t_344460632");
  elt.add_attribute("RspID", "SecurityResponseID_t_2050001447"); // 0
  SecurityTypes_message_t_0.insert("SecurityResponseID_t_2050001447");
  elt.add_attribute("RspTyp", "2"); // 0
  SecurityTypes_message_t_0.insert("2");
  elt.add_attribute("TotNoSecTyps", "18781475"); // 0
  SecurityTypes_message_t_0.insert("18781475");
  elt.add_attribute("LastFragment", "N"); // 0
  SecurityTypes_message_t_0.insert("N");
  elt.add_attribute("Txt", "Text_t_1307616432"); // 0
  SecurityTypes_message_t_0.insert("Text_t_1307616432");
  elt.add_attribute("EncTxtLen", "1943136689"); // 0
  SecurityTypes_message_t_0.insert("1943136689");
  elt.add_attribute("EncTxt", "EncodedText_t_1897594337"); // 0
  SecurityTypes_message_t_0.insert("EncodedText_t_1897594337");
  elt.add_attribute("MktID", "MarketID_t_1836092972"); // 0
  SecurityTypes_message_t_0.insert("MarketID_t_1836092972");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1117583350"); // 0
  SecurityTypes_message_t_0.insert("MarketSegmentID_t_1117583350");
  elt.add_attribute("SesID", "4"); // 0
  SecurityTypes_message_t_0.insert("4");
  elt.add_attribute("SesSub", "2"); // 0
  SecurityTypes_message_t_0.insert("2");
  elt.add_attribute("SubReqTyp", "2"); // 0
  SecurityTypes_message_t_0.insert("2");
  all_values.push_back(SecurityTypes_message_t_0);
  all_compo_names.insert("SecurityTypes_message_t");

  { // Hdr
    xml_element Hdr_89{"Hdr"};
    multiset<string> Hdr_89_set;
    Hdr_89.add_attribute("SeqNum", "1987813412"); // 1
    Hdr_89_set.insert("1987813412");
    Hdr_89.add_attribute("SID", "SenderCompID_t_248472858"); // 1
    Hdr_89_set.insert("SenderCompID_t_248472858");
    Hdr_89.add_attribute("TID", "TargetCompID_t_1033576559"); // 1
    Hdr_89_set.insert("TargetCompID_t_1033576559");
    Hdr_89.add_attribute("OBID", "OnBehalfOfCompID_t_1831524511"); // 1
    Hdr_89_set.insert("OnBehalfOfCompID_t_1831524511");
    Hdr_89.add_attribute("D2ID", "DeliverToCompID_t_497041683"); // 1
    Hdr_89_set.insert("DeliverToCompID_t_497041683");
    Hdr_89.add_attribute("SSub", "SenderSubID_t_579365820"); // 1
    Hdr_89_set.insert("SenderSubID_t_579365820");
    Hdr_89.add_attribute("SLoc", "SenderLocationID_t_1011793308"); // 1
    Hdr_89_set.insert("SenderLocationID_t_1011793308");
    Hdr_89.add_attribute("TSub", "TargetSubID_t_1863145479"); // 1
    Hdr_89_set.insert("TargetSubID_t_1863145479");
    Hdr_89.add_attribute("TLoc", "TargetLocationID_t_1210854905"); // 1
    Hdr_89_set.insert("TargetLocationID_t_1210854905");
    Hdr_89.add_attribute("OBSub", "OnBehalfOfSubID_t_1898101322"); // 1
    Hdr_89_set.insert("OnBehalfOfSubID_t_1898101322");
    Hdr_89.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1431889490"); // 1
    Hdr_89_set.insert("OnBehalfOfLocationID_t_1431889490");
    Hdr_89.add_attribute("D2Sub", "DeliverToSubID_t_1085385074"); // 1
    Hdr_89_set.insert("DeliverToSubID_t_1085385074");
    Hdr_89.add_attribute("D2Loc", "DeliverToLocationID_t_993561079"); // 1
    Hdr_89_set.insert("DeliverToLocationID_t_993561079");
    Hdr_89.add_attribute("PosDup", "Y"); // 1
    Hdr_89_set.insert("Y");
    Hdr_89.add_attribute("PosRsnd", "Y"); // 1
    Hdr_89_set.insert("Y");
    Hdr_89.add_attribute("Snt", "SendingTime_t_1358686755"); // 1
    Hdr_89_set.insert("SendingTime_t_1358686755");
    Hdr_89.add_attribute("OrigSnt", "OrigSendingTime_t_544576749"); // 1
    Hdr_89_set.insert("OrigSendingTime_t_544576749");
    Hdr_89.add_attribute("MsgEncd", "MessageEncoding_t_1011690132"); // 1
    Hdr_89_set.insert("MessageEncoding_t_1011690132");
    all_values.push_back(Hdr_89_set);
    all_compo_names.insert("Hdr_89_set");

    {
      xml_element Hop_89{"Hop"};
      multiset<string> Hop_89_set;
      Hop_89.add_attribute("ID", "HopCompID_t_1703147387"); // 2
      Hop_89_set.insert("HopCompID_t_1703147387");
      Hop_89.add_attribute("Ref", "447094548"); // 2
      Hop_89_set.insert("447094548");
      Hop_89.add_attribute("Snt", "HopSendingTime_t_215878601"); // 2
      Hop_89_set.insert("HopSendingTime_t_215878601");
      all_values.push_back(Hop_89_set);
      all_compo_names.insert("Hop_89_set");

      Hdr_89.add_element(Hop_89);
    }
    elt.add_element(Hdr_89);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_17{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_17_set;
    ApplSeqCtrl_17.add_attribute("ApplID", "ApplID_t_1721928863"); // 1
    ApplSeqCtrl_17_set.insert("ApplID_t_1721928863");
    ApplSeqCtrl_17.add_attribute("ApplSeqNum", "361523847"); // 1
    ApplSeqCtrl_17_set.insert("361523847");
    ApplSeqCtrl_17.add_attribute("ApplLastSeqNum", "1523495033"); // 1
    ApplSeqCtrl_17_set.insert("1523495033");
    ApplSeqCtrl_17.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_17_set.insert("true");
    all_values.push_back(ApplSeqCtrl_17_set);
    all_compo_names.insert("ApplSeqCtrl_17_set");

    elt.add_element(ApplSeqCtrl_17);
  } // end ApplSeqCtrl
  { // SecT
    xml_element SecT_0{"SecT"};
    multiset<string> SecT_0_set;
    SecT_0.add_attribute("SecTyp", "OOF"); // 1
    SecT_0_set.insert("OOF");
    SecT_0.add_attribute("SubTyp", "SecuritySubType_t_487681606"); // 1
    SecT_0_set.insert("SecuritySubType_t_487681606");
    SecT_0.add_attribute("Prod", "10"); // 1
    SecT_0_set.insert("10");
    SecT_0.add_attribute("CFI", "CFICode_t_1878282025"); // 1
    SecT_0_set.insert("CFICode_t_1878282025");
    SecT_0.add_attribute("TxnTm", "TransactTime_t_864793813"); // 1
    SecT_0_set.insert("TransactTime_t_864793813");
    all_values.push_back(SecT_0_set);
    all_compo_names.insert("SecT_0_set");

    elt.add_element(SecT_0);
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
