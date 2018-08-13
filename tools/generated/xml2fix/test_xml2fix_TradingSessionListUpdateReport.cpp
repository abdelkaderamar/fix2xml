#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/TradingSessionListUpdateReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradingSessionListUpdateReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdgSesListUpd" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradingSessionListUpdateReport_message_t_0;
  elt.add_attribute("ReqID", "TradSesReqID_t_2117225010"); // 0
  TradingSessionListUpdateReport_message_t_0.insert("TradSesReqID_t_2117225010");
  all_values.push_back(TradingSessionListUpdateReport_message_t_0);
  all_compo_names.insert("TradingSessionListUpdateReport_message_t");

  { // Hdr
    xml_element Hdr_102{"Hdr"};
    multiset<string> Hdr_102_set;
    Hdr_102.add_attribute("SeqNum", "1985474056"); // 1
    Hdr_102_set.insert("1985474056");
    Hdr_102.add_attribute("SID", "SenderCompID_t_1902726124"); // 1
    Hdr_102_set.insert("SenderCompID_t_1902726124");
    Hdr_102.add_attribute("TID", "TargetCompID_t_1330859551"); // 1
    Hdr_102_set.insert("TargetCompID_t_1330859551");
    Hdr_102.add_attribute("OBID", "OnBehalfOfCompID_t_795093066"); // 1
    Hdr_102_set.insert("OnBehalfOfCompID_t_795093066");
    Hdr_102.add_attribute("D2ID", "DeliverToCompID_t_1322688070"); // 1
    Hdr_102_set.insert("DeliverToCompID_t_1322688070");
    Hdr_102.add_attribute("SSub", "SenderSubID_t_912343053"); // 1
    Hdr_102_set.insert("SenderSubID_t_912343053");
    Hdr_102.add_attribute("SLoc", "SenderLocationID_t_541675761"); // 1
    Hdr_102_set.insert("SenderLocationID_t_541675761");
    Hdr_102.add_attribute("TSub", "TargetSubID_t_1914846179"); // 1
    Hdr_102_set.insert("TargetSubID_t_1914846179");
    Hdr_102.add_attribute("TLoc", "TargetLocationID_t_1482955330"); // 1
    Hdr_102_set.insert("TargetLocationID_t_1482955330");
    Hdr_102.add_attribute("OBSub", "OnBehalfOfSubID_t_627642897"); // 1
    Hdr_102_set.insert("OnBehalfOfSubID_t_627642897");
    Hdr_102.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1865772564"); // 1
    Hdr_102_set.insert("OnBehalfOfLocationID_t_1865772564");
    Hdr_102.add_attribute("D2Sub", "DeliverToSubID_t_345711842"); // 1
    Hdr_102_set.insert("DeliverToSubID_t_345711842");
    Hdr_102.add_attribute("D2Loc", "DeliverToLocationID_t_941789827"); // 1
    Hdr_102_set.insert("DeliverToLocationID_t_941789827");
    Hdr_102.add_attribute("PosDup", "N"); // 1
    Hdr_102_set.insert("N");
    Hdr_102.add_attribute("PosRsnd", "N"); // 1
    Hdr_102_set.insert("N");
    Hdr_102.add_attribute("Snt", "SendingTime_t_261347598"); // 1
    Hdr_102_set.insert("SendingTime_t_261347598");
    Hdr_102.add_attribute("OrigSnt", "OrigSendingTime_t_772969977"); // 1
    Hdr_102_set.insert("OrigSendingTime_t_772969977");
    Hdr_102.add_attribute("MsgEncd", "MessageEncoding_t_1887140520"); // 1
    Hdr_102_set.insert("MessageEncoding_t_1887140520");
    all_values.push_back(Hdr_102_set);
    all_compo_names.insert("Hdr_102_set");

    {
      xml_element Hop_102{"Hop"};
      multiset<string> Hop_102_set;
      Hop_102.add_attribute("ID", "HopCompID_t_336555000"); // 2
      Hop_102_set.insert("HopCompID_t_336555000");
      Hop_102.add_attribute("Ref", "2140356155"); // 2
      Hop_102_set.insert("2140356155");
      Hop_102.add_attribute("Snt", "HopSendingTime_t_692983701"); // 2
      Hop_102_set.insert("HopSendingTime_t_692983701");
      all_values.push_back(Hop_102_set);
      all_compo_names.insert("Hop_102_set");

      Hdr_102.add_element(Hop_102);
    }
    elt.add_element(Hdr_102);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_21{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_21_set;
    ApplSeqCtrl_21.add_attribute("ApplID", "ApplID_t_750522836"); // 1
    ApplSeqCtrl_21_set.insert("ApplID_t_750522836");
    ApplSeqCtrl_21.add_attribute("ApplSeqNum", "565529421"); // 1
    ApplSeqCtrl_21_set.insert("565529421");
    ApplSeqCtrl_21.add_attribute("ApplLastSeqNum", "775604992"); // 1
    ApplSeqCtrl_21_set.insert("775604992");
    ApplSeqCtrl_21.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_21_set.insert("true");
    all_values.push_back(ApplSeqCtrl_21_set);
    all_compo_names.insert("ApplSeqCtrl_21_set");

    elt.add_element(ApplSeqCtrl_21);
  } // end ApplSeqCtrl
  { // TrdSessLstGrp
    xml_element TrdSessLstGrp_3{"TrdSessLstGrp"};
    multiset<string> TrdSessLstGrp_3_set;
    TrdSessLstGrp_3.add_attribute("SesID", "5"); // 1
    TrdSessLstGrp_3_set.insert("5");
    TrdSessLstGrp_3.add_attribute("SesSub", "5"); // 1
    TrdSessLstGrp_3_set.insert("5");
    TrdSessLstGrp_3.add_attribute("TradSesUpdtActn", "M"); // 1
    TrdSessLstGrp_3_set.insert("M");
    TrdSessLstGrp_3.add_attribute("Exch", "SecurityExchange_t_966685247"); // 1
    TrdSessLstGrp_3_set.insert("SecurityExchange_t_966685247");
    TrdSessLstGrp_3.add_attribute("MktID", "MarketID_t_1109259991"); // 1
    TrdSessLstGrp_3_set.insert("MarketID_t_1109259991");
    TrdSessLstGrp_3.add_attribute("MktSegID", "MarketSegmentID_t_415760312"); // 1
    TrdSessLstGrp_3_set.insert("MarketSegmentID_t_415760312");
    TrdSessLstGrp_3.add_attribute("TradingSessionDesc", "TradingSessionDesc_t_721927723"); // 1
    TrdSessLstGrp_3_set.insert("TradingSessionDesc_t_721927723");
    TrdSessLstGrp_3.add_attribute("Method", "1"); // 1
    TrdSessLstGrp_3_set.insert("1");
    TrdSessLstGrp_3.add_attribute("Mode", "3"); // 1
    TrdSessLstGrp_3_set.insert("3");
    TrdSessLstGrp_3.add_attribute("Unsol", "Y"); // 1
    TrdSessLstGrp_3_set.insert("Y");
    TrdSessLstGrp_3.add_attribute("Stat", "4"); // 1
    TrdSessLstGrp_3_set.insert("4");
    TrdSessLstGrp_3.add_attribute("StatRejRsn", "99"); // 1
    TrdSessLstGrp_3_set.insert("99");
    TrdSessLstGrp_3.add_attribute("StartTm", "TradSesStartTime_t_1811978325"); // 1
    TrdSessLstGrp_3_set.insert("TradSesStartTime_t_1811978325");
    TrdSessLstGrp_3.add_attribute("OpenTm", "TradSesOpenTime_t_540450629"); // 1
    TrdSessLstGrp_3_set.insert("TradSesOpenTime_t_540450629");
    TrdSessLstGrp_3.add_attribute("PreClsTm", "TradSesPreCloseTime_t_232688388"); // 1
    TrdSessLstGrp_3_set.insert("TradSesPreCloseTime_t_232688388");
    TrdSessLstGrp_3.add_attribute("ClsTm", "TradSesCloseTime_t_1530267241"); // 1
    TrdSessLstGrp_3_set.insert("TradSesCloseTime_t_1530267241");
    TrdSessLstGrp_3.add_attribute("EndTm", "TradSesEndTime_t_886162472"); // 1
    TrdSessLstGrp_3_set.insert("TradSesEndTime_t_886162472");
    TrdSessLstGrp_3.add_attribute("TotVolTrdd", "11744782.160000"); // 1
    TrdSessLstGrp_3_set.insert("11744782.160000");
    TrdSessLstGrp_3.add_attribute("TxnTm", "TransactTime_t_167246439"); // 1
    TrdSessLstGrp_3_set.insert("TransactTime_t_167246439");
    TrdSessLstGrp_3.add_attribute("Txt", "Text_t_700192332"); // 1
    TrdSessLstGrp_3_set.insert("Text_t_700192332");
    TrdSessLstGrp_3.add_attribute("EncTxtLen", "1435825814"); // 1
    TrdSessLstGrp_3_set.insert("1435825814");
    TrdSessLstGrp_3.add_attribute("EncTxt", "EncodedText_t_940216417"); // 1
    TrdSessLstGrp_3_set.insert("EncodedText_t_940216417");
    all_values.push_back(TrdSessLstGrp_3_set);
    all_compo_names.insert("TrdSessLstGrp_3_set");

    {
      xml_element TrdgSesRules_12{"TrdgSesRules"};
      {
        xml_element OrdTypRules_17{"OrdTypRules"};
        multiset<string> OrdTypRules_17_set;
        OrdTypRules_17.add_attribute("OrdTyp", "5"); // 3
        OrdTypRules_17_set.insert("5");
        all_values.push_back(OrdTypRules_17_set);
        all_compo_names.insert("OrdTypRules_17_set");

        TrdgSesRules_12.add_element(OrdTypRules_17);
      }
      {
        xml_element TmInForceRules_16{"TmInForceRules"};
        multiset<string> TmInForceRules_16_set;
        TmInForceRules_16.add_attribute("TmInForce", "4"); // 3
        TmInForceRules_16_set.insert("4");
        all_values.push_back(TmInForceRules_16_set);
        all_compo_names.insert("TmInForceRules_16_set");

        TrdgSesRules_12.add_element(TmInForceRules_16);
      }
      {
        xml_element ExecInstRules_15{"ExecInstRules"};
        multiset<string> ExecInstRules_15_set;
        ExecInstRules_15.add_attribute("ExecInstValu", "B"); // 3
        ExecInstRules_15_set.insert("B");
        all_values.push_back(ExecInstRules_15_set);
        all_compo_names.insert("ExecInstRules_15_set");

        TrdgSesRules_12.add_element(ExecInstRules_15);
      }
      {
        xml_element MtchRules_12{"MtchRules"};
        multiset<string> MtchRules_12_set;
        MtchRules_12.add_attribute("MtchAlgo", "MatchAlgorithm_t_1132832906"); // 3
        MtchRules_12_set.insert("MatchAlgorithm_t_1132832906");
        MtchRules_12.add_attribute("MtchTyp", "6"); // 3
        MtchRules_12_set.insert("6");
        all_values.push_back(MtchRules_12_set);
        all_compo_names.insert("MtchRules_12_set");

        TrdgSesRules_12.add_element(MtchRules_12);
      }
      {
        xml_element MDFeedTyps_12{"MDFeedTyps"};
        multiset<string> MDFeedTyps_12_set;
        MDFeedTyps_12.add_attribute("MDFeedTyp", "MDFeedType_t_1498618346"); // 3
        MDFeedTyps_12_set.insert("MDFeedType_t_1498618346");
        MDFeedTyps_12.add_attribute("MktDepth", "1908437898"); // 3
        MDFeedTyps_12_set.insert("1908437898");
        MDFeedTyps_12.add_attribute("MDBkTyp", "2"); // 3
        MDFeedTyps_12_set.insert("2");
        all_values.push_back(MDFeedTyps_12_set);
        all_compo_names.insert("MDFeedTyps_12_set");

        TrdgSesRules_12.add_element(MDFeedTyps_12);
      }
      TrdSessLstGrp_3.add_element(TrdgSesRules_12);
    }
    elt.add_element(TrdSessLstGrp_3);
  } // end TrdSessLstGrp
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
