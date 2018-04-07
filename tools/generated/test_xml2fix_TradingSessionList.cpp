#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/TradingSessionList.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradingSessionList_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdgSesList" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradingSessionList_message_t_0;
  elt.add_attribute("ReqID", "TradSesReqID_t_445420590"); // 0
  TradingSessionList_message_t_0.insert("TradSesReqID_t_445420590");
  all_values.push_back(TradingSessionList_message_t_0);
  all_compo_names.insert("TradingSessionList_message_t");

  { // Hdr
    xml_element Hdr_100{"Hdr"};
    multiset<string> Hdr_100_set;
    Hdr_100.add_attribute("SeqNum", "1334841616"); // 1
    Hdr_100_set.insert("1334841616");
    Hdr_100.add_attribute("SID", "SenderCompID_t_2003732726"); // 1
    Hdr_100_set.insert("SenderCompID_t_2003732726");
    Hdr_100.add_attribute("TID", "TargetCompID_t_874315607"); // 1
    Hdr_100_set.insert("TargetCompID_t_874315607");
    Hdr_100.add_attribute("OBID", "OnBehalfOfCompID_t_1360092606"); // 1
    Hdr_100_set.insert("OnBehalfOfCompID_t_1360092606");
    Hdr_100.add_attribute("D2ID", "DeliverToCompID_t_1068001025"); // 1
    Hdr_100_set.insert("DeliverToCompID_t_1068001025");
    Hdr_100.add_attribute("SSub", "SenderSubID_t_1944378564"); // 1
    Hdr_100_set.insert("SenderSubID_t_1944378564");
    Hdr_100.add_attribute("SLoc", "SenderLocationID_t_667374527"); // 1
    Hdr_100_set.insert("SenderLocationID_t_667374527");
    Hdr_100.add_attribute("TSub", "TargetSubID_t_644400503"); // 1
    Hdr_100_set.insert("TargetSubID_t_644400503");
    Hdr_100.add_attribute("TLoc", "TargetLocationID_t_378615546"); // 1
    Hdr_100_set.insert("TargetLocationID_t_378615546");
    Hdr_100.add_attribute("OBSub", "OnBehalfOfSubID_t_345994207"); // 1
    Hdr_100_set.insert("OnBehalfOfSubID_t_345994207");
    Hdr_100.add_attribute("OBLoc", "OnBehalfOfLocationID_t_568568742"); // 1
    Hdr_100_set.insert("OnBehalfOfLocationID_t_568568742");
    Hdr_100.add_attribute("D2Sub", "DeliverToSubID_t_1025053421"); // 1
    Hdr_100_set.insert("DeliverToSubID_t_1025053421");
    Hdr_100.add_attribute("D2Loc", "DeliverToLocationID_t_2124256959"); // 1
    Hdr_100_set.insert("DeliverToLocationID_t_2124256959");
    Hdr_100.add_attribute("PosDup", "N"); // 1
    Hdr_100_set.insert("N");
    Hdr_100.add_attribute("PosRsnd", "Y"); // 1
    Hdr_100_set.insert("Y");
    Hdr_100.add_attribute("Snt", "SendingTime_t_645525900"); // 1
    Hdr_100_set.insert("SendingTime_t_645525900");
    Hdr_100.add_attribute("OrigSnt", "OrigSendingTime_t_1822091128"); // 1
    Hdr_100_set.insert("OrigSendingTime_t_1822091128");
    Hdr_100.add_attribute("MsgEncd", "MessageEncoding_t_227042926"); // 1
    Hdr_100_set.insert("MessageEncoding_t_227042926");
    all_values.push_back(Hdr_100_set);
    all_compo_names.insert("Hdr_100_set");

    {
      xml_element Hop_100{"Hop"};
      multiset<string> Hop_100_set;
      Hop_100.add_attribute("ID", "HopCompID_t_836817435"); // 2
      Hop_100_set.insert("HopCompID_t_836817435");
      Hop_100.add_attribute("Ref", "852155947"); // 2
      Hop_100_set.insert("852155947");
      Hop_100.add_attribute("Snt", "HopSendingTime_t_361303423"); // 2
      Hop_100_set.insert("HopSendingTime_t_361303423");
      all_values.push_back(Hop_100_set);
      all_compo_names.insert("Hop_100_set");

      Hdr_100.add_element(Hop_100);
    }
    elt.add_element(Hdr_100);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_20{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_20_set;
    ApplSeqCtrl_20.add_attribute("ApplID", "ApplID_t_1560670809"); // 1
    ApplSeqCtrl_20_set.insert("ApplID_t_1560670809");
    ApplSeqCtrl_20.add_attribute("ApplSeqNum", "338753226"); // 1
    ApplSeqCtrl_20_set.insert("338753226");
    ApplSeqCtrl_20.add_attribute("ApplLastSeqNum", "905114277"); // 1
    ApplSeqCtrl_20_set.insert("905114277");
    ApplSeqCtrl_20.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_20_set.insert("true");
    all_values.push_back(ApplSeqCtrl_20_set);
    all_compo_names.insert("ApplSeqCtrl_20_set");

    elt.add_element(ApplSeqCtrl_20);
  } // end ApplSeqCtrl
  { // TrdSessLstGrp
    xml_element TrdSessLstGrp_0{"TrdSessLstGrp"};
    multiset<string> TrdSessLstGrp_0_set;
    TrdSessLstGrp_0.add_attribute("SesID", "3"); // 1
    TrdSessLstGrp_0_set.insert("3");
    TrdSessLstGrp_0.add_attribute("SesSub", "3"); // 1
    TrdSessLstGrp_0_set.insert("3");
    TrdSessLstGrp_0.add_attribute("TradSesUpdtActn", "A"); // 1
    TrdSessLstGrp_0_set.insert("A");
    TrdSessLstGrp_0.add_attribute("Exch", "SecurityExchange_t_103828332"); // 1
    TrdSessLstGrp_0_set.insert("SecurityExchange_t_103828332");
    TrdSessLstGrp_0.add_attribute("MktID", "MarketID_t_1733723840"); // 1
    TrdSessLstGrp_0_set.insert("MarketID_t_1733723840");
    TrdSessLstGrp_0.add_attribute("MktSegID", "MarketSegmentID_t_1641305914"); // 1
    TrdSessLstGrp_0_set.insert("MarketSegmentID_t_1641305914");
    TrdSessLstGrp_0.add_attribute("TradingSessionDesc", "TradingSessionDesc_t_2107561059"); // 1
    TrdSessLstGrp_0_set.insert("TradingSessionDesc_t_2107561059");
    TrdSessLstGrp_0.add_attribute("Method", "3"); // 1
    TrdSessLstGrp_0_set.insert("3");
    TrdSessLstGrp_0.add_attribute("Mode", "1"); // 1
    TrdSessLstGrp_0_set.insert("1");
    TrdSessLstGrp_0.add_attribute("Unsol", "N"); // 1
    TrdSessLstGrp_0_set.insert("N");
    TrdSessLstGrp_0.add_attribute("Stat", "4"); // 1
    TrdSessLstGrp_0_set.insert("4");
    TrdSessLstGrp_0.add_attribute("StatRejRsn", "1"); // 1
    TrdSessLstGrp_0_set.insert("1");
    TrdSessLstGrp_0.add_attribute("StartTm", "TradSesStartTime_t_1672478939"); // 1
    TrdSessLstGrp_0_set.insert("TradSesStartTime_t_1672478939");
    TrdSessLstGrp_0.add_attribute("OpenTm", "TradSesOpenTime_t_636066261"); // 1
    TrdSessLstGrp_0_set.insert("TradSesOpenTime_t_636066261");
    TrdSessLstGrp_0.add_attribute("PreClsTm", "TradSesPreCloseTime_t_1867283607"); // 1
    TrdSessLstGrp_0_set.insert("TradSesPreCloseTime_t_1867283607");
    TrdSessLstGrp_0.add_attribute("ClsTm", "TradSesCloseTime_t_93564033"); // 1
    TrdSessLstGrp_0_set.insert("TradSesCloseTime_t_93564033");
    TrdSessLstGrp_0.add_attribute("EndTm", "TradSesEndTime_t_1661119682"); // 1
    TrdSessLstGrp_0_set.insert("TradSesEndTime_t_1661119682");
    TrdSessLstGrp_0.add_attribute("TotVolTrdd", "18440569.190000"); // 1
    TrdSessLstGrp_0_set.insert("18440569.190000");
    TrdSessLstGrp_0.add_attribute("TxnTm", "TransactTime_t_201701401"); // 1
    TrdSessLstGrp_0_set.insert("TransactTime_t_201701401");
    TrdSessLstGrp_0.add_attribute("Txt", "Text_t_1987151675"); // 1
    TrdSessLstGrp_0_set.insert("Text_t_1987151675");
    TrdSessLstGrp_0.add_attribute("EncTxtLen", "342099171"); // 1
    TrdSessLstGrp_0_set.insert("342099171");
    TrdSessLstGrp_0.add_attribute("EncTxt", "EncodedText_t_2023792529"); // 1
    TrdSessLstGrp_0_set.insert("EncodedText_t_2023792529");
    all_values.push_back(TrdSessLstGrp_0_set);
    all_compo_names.insert("TrdSessLstGrp_0_set");

    {
      xml_element TrdgSesRules_9{"TrdgSesRules"};
      {
        xml_element OrdTypRules_15{"OrdTypRules"};
        multiset<string> OrdTypRules_15_set;
        OrdTypRules_15.add_attribute("OrdTyp", "3"); // 3
        OrdTypRules_15_set.insert("3");
        all_values.push_back(OrdTypRules_15_set);
        all_compo_names.insert("OrdTypRules_15_set");

        TrdgSesRules_9.add_element(OrdTypRules_15);
      }
      {
        xml_element TmInForceRules_11{"TmInForceRules"};
        multiset<string> TmInForceRules_11_set;
        TmInForceRules_11.add_attribute("TmInForce", "7"); // 3
        TmInForceRules_11_set.insert("7");
        all_values.push_back(TmInForceRules_11_set);
        all_compo_names.insert("TmInForceRules_11_set");

        TrdgSesRules_9.add_element(TmInForceRules_11);
      }
      {
        xml_element ExecInstRules_14{"ExecInstRules"};
        multiset<string> ExecInstRules_14_set;
        ExecInstRules_14.add_attribute("ExecInstValu", "O"); // 3
        ExecInstRules_14_set.insert("O");
        all_values.push_back(ExecInstRules_14_set);
        all_compo_names.insert("ExecInstRules_14_set");

        TrdgSesRules_9.add_element(ExecInstRules_14);
      }
      {
        xml_element MtchRules_9{"MtchRules"};
        multiset<string> MtchRules_9_set;
        MtchRules_9.add_attribute("MtchAlgo", "MatchAlgorithm_t_428014377"); // 3
        MtchRules_9_set.insert("MatchAlgorithm_t_428014377");
        MtchRules_9.add_attribute("MtchTyp", "5"); // 3
        MtchRules_9_set.insert("5");
        all_values.push_back(MtchRules_9_set);
        all_compo_names.insert("MtchRules_9_set");

        TrdgSesRules_9.add_element(MtchRules_9);
      }
      {
        xml_element MDFeedTyps_9{"MDFeedTyps"};
        multiset<string> MDFeedTyps_9_set;
        MDFeedTyps_9.add_attribute("MDFeedTyp", "MDFeedType_t_1067218055"); // 3
        MDFeedTyps_9_set.insert("MDFeedType_t_1067218055");
        MDFeedTyps_9.add_attribute("MktDepth", "1333128654"); // 3
        MDFeedTyps_9_set.insert("1333128654");
        MDFeedTyps_9.add_attribute("MDBkTyp", "3"); // 3
        MDFeedTyps_9_set.insert("3");
        all_values.push_back(MDFeedTyps_9_set);
        all_compo_names.insert("MDFeedTyps_9_set");

        TrdgSesRules_9.add_element(MDFeedTyps_9);
      }
      TrdSessLstGrp_0.add_element(TrdgSesRules_9);
    }
    elt.add_element(TrdSessLstGrp_0);
  } // end TrdSessLstGrp
  { // TrdSessLstGrp
    xml_element TrdSessLstGrp_1{"TrdSessLstGrp"};
    multiset<string> TrdSessLstGrp_1_set;
    TrdSessLstGrp_1.add_attribute("SesID", "1"); // 1
    TrdSessLstGrp_1_set.insert("1");
    TrdSessLstGrp_1.add_attribute("SesSub", "5"); // 1
    TrdSessLstGrp_1_set.insert("5");
    TrdSessLstGrp_1.add_attribute("TradSesUpdtActn", "D"); // 1
    TrdSessLstGrp_1_set.insert("D");
    TrdSessLstGrp_1.add_attribute("Exch", "SecurityExchange_t_1487865678"); // 1
    TrdSessLstGrp_1_set.insert("SecurityExchange_t_1487865678");
    TrdSessLstGrp_1.add_attribute("MktID", "MarketID_t_1276658484"); // 1
    TrdSessLstGrp_1_set.insert("MarketID_t_1276658484");
    TrdSessLstGrp_1.add_attribute("MktSegID", "MarketSegmentID_t_1084662004"); // 1
    TrdSessLstGrp_1_set.insert("MarketSegmentID_t_1084662004");
    TrdSessLstGrp_1.add_attribute("TradingSessionDesc", "TradingSessionDesc_t_981687945"); // 1
    TrdSessLstGrp_1_set.insert("TradingSessionDesc_t_981687945");
    TrdSessLstGrp_1.add_attribute("Method", "2"); // 1
    TrdSessLstGrp_1_set.insert("2");
    TrdSessLstGrp_1.add_attribute("Mode", "1"); // 1
    TrdSessLstGrp_1_set.insert("1");
    TrdSessLstGrp_1.add_attribute("Unsol", "N"); // 1
    TrdSessLstGrp_1_set.insert("N");
    TrdSessLstGrp_1.add_attribute("Stat", "1"); // 1
    TrdSessLstGrp_1_set.insert("1");
    TrdSessLstGrp_1.add_attribute("StatRejRsn", "99"); // 1
    TrdSessLstGrp_1_set.insert("99");
    TrdSessLstGrp_1.add_attribute("StartTm", "TradSesStartTime_t_1209408570"); // 1
    TrdSessLstGrp_1_set.insert("TradSesStartTime_t_1209408570");
    TrdSessLstGrp_1.add_attribute("OpenTm", "TradSesOpenTime_t_1789809622"); // 1
    TrdSessLstGrp_1_set.insert("TradSesOpenTime_t_1789809622");
    TrdSessLstGrp_1.add_attribute("PreClsTm", "TradSesPreCloseTime_t_291251132"); // 1
    TrdSessLstGrp_1_set.insert("TradSesPreCloseTime_t_291251132");
    TrdSessLstGrp_1.add_attribute("ClsTm", "TradSesCloseTime_t_929208529"); // 1
    TrdSessLstGrp_1_set.insert("TradSesCloseTime_t_929208529");
    TrdSessLstGrp_1.add_attribute("EndTm", "TradSesEndTime_t_1883373655"); // 1
    TrdSessLstGrp_1_set.insert("TradSesEndTime_t_1883373655");
    TrdSessLstGrp_1.add_attribute("TotVolTrdd", "19523708.150000"); // 1
    TrdSessLstGrp_1_set.insert("19523708.150000");
    TrdSessLstGrp_1.add_attribute("TxnTm", "TransactTime_t_625781800"); // 1
    TrdSessLstGrp_1_set.insert("TransactTime_t_625781800");
    TrdSessLstGrp_1.add_attribute("Txt", "Text_t_2085075056"); // 1
    TrdSessLstGrp_1_set.insert("Text_t_2085075056");
    TrdSessLstGrp_1.add_attribute("EncTxtLen", "1792038842"); // 1
    TrdSessLstGrp_1_set.insert("1792038842");
    TrdSessLstGrp_1.add_attribute("EncTxt", "EncodedText_t_967880972"); // 1
    TrdSessLstGrp_1_set.insert("EncodedText_t_967880972");
    all_values.push_back(TrdSessLstGrp_1_set);
    all_compo_names.insert("TrdSessLstGrp_1_set");

    {
      xml_element TrdgSesRules_10{"TrdgSesRules"};
      {
        xml_element OrdTypRules_16{"OrdTypRules"};
        multiset<string> OrdTypRules_16_set;
        OrdTypRules_16.add_attribute("OrdTyp", "J"); // 3
        OrdTypRules_16_set.insert("J");
        all_values.push_back(OrdTypRules_16_set);
        all_compo_names.insert("OrdTypRules_16_set");

        TrdgSesRules_10.add_element(OrdTypRules_16);
      }
      {
        xml_element TmInForceRules_12{"TmInForceRules"};
        multiset<string> TmInForceRules_12_set;
        TmInForceRules_12.add_attribute("TmInForce", "6"); // 3
        TmInForceRules_12_set.insert("6");
        all_values.push_back(TmInForceRules_12_set);
        all_compo_names.insert("TmInForceRules_12_set");

        TrdgSesRules_10.add_element(TmInForceRules_12);
      }
      {
        xml_element ExecInstRules_15{"ExecInstRules"};
        multiset<string> ExecInstRules_15_set;
        ExecInstRules_15.add_attribute("ExecInstValu", "3"); // 3
        ExecInstRules_15_set.insert("3");
        all_values.push_back(ExecInstRules_15_set);
        all_compo_names.insert("ExecInstRules_15_set");

        TrdgSesRules_10.add_element(ExecInstRules_15);
      }
      {
        xml_element MtchRules_10{"MtchRules"};
        multiset<string> MtchRules_10_set;
        MtchRules_10.add_attribute("MtchAlgo", "MatchAlgorithm_t_542365119"); // 3
        MtchRules_10_set.insert("MatchAlgorithm_t_542365119");
        MtchRules_10.add_attribute("MtchTyp", "M5"); // 3
        MtchRules_10_set.insert("M5");
        all_values.push_back(MtchRules_10_set);
        all_compo_names.insert("MtchRules_10_set");

        TrdgSesRules_10.add_element(MtchRules_10);
      }
      {
        xml_element MDFeedTyps_10{"MDFeedTyps"};
        multiset<string> MDFeedTyps_10_set;
        MDFeedTyps_10.add_attribute("MDFeedTyp", "MDFeedType_t_591417699"); // 3
        MDFeedTyps_10_set.insert("MDFeedType_t_591417699");
        MDFeedTyps_10.add_attribute("MktDepth", "1609583174"); // 3
        MDFeedTyps_10_set.insert("1609583174");
        MDFeedTyps_10.add_attribute("MDBkTyp", "3"); // 3
        MDFeedTyps_10_set.insert("3");
        all_values.push_back(MDFeedTyps_10_set);
        all_compo_names.insert("MDFeedTyps_10_set");

        TrdgSesRules_10.add_element(MDFeedTyps_10);
      }
      TrdSessLstGrp_1.add_element(TrdgSesRules_10);
    }
    elt.add_element(TrdSessLstGrp_1);
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
