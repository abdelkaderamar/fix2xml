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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdgSesList" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradingSessionList_message_t_0;
  elt.add_attribute("ReqID", "TradSesReqID_t_777295495"); // 0
  TradingSessionList_message_t_0.insert("TradSesReqID_t_777295495");
  all_values.push_back(TradingSessionList_message_t_0);
  all_compo_names.insert("TradingSessionList_message_t");

  { // Hdr
    xml_element Hdr_100{"Hdr"};
    multiset<string> Hdr_100_set;
    Hdr_100.add_attribute("SeqNum", "235728374"); // 1
    Hdr_100_set.insert("235728374");
    Hdr_100.add_attribute("SID", "SenderCompID_t_542964311"); // 1
    Hdr_100_set.insert("SenderCompID_t_542964311");
    Hdr_100.add_attribute("TID", "TargetCompID_t_1948166279"); // 1
    Hdr_100_set.insert("TargetCompID_t_1948166279");
    Hdr_100.add_attribute("OBID", "OnBehalfOfCompID_t_1699006107"); // 1
    Hdr_100_set.insert("OnBehalfOfCompID_t_1699006107");
    Hdr_100.add_attribute("D2ID", "DeliverToCompID_t_1341825039"); // 1
    Hdr_100_set.insert("DeliverToCompID_t_1341825039");
    Hdr_100.add_attribute("SSub", "SenderSubID_t_1777399910"); // 1
    Hdr_100_set.insert("SenderSubID_t_1777399910");
    Hdr_100.add_attribute("SLoc", "SenderLocationID_t_1886215223"); // 1
    Hdr_100_set.insert("SenderLocationID_t_1886215223");
    Hdr_100.add_attribute("TSub", "TargetSubID_t_549544747"); // 1
    Hdr_100_set.insert("TargetSubID_t_549544747");
    Hdr_100.add_attribute("TLoc", "TargetLocationID_t_1070633826"); // 1
    Hdr_100_set.insert("TargetLocationID_t_1070633826");
    Hdr_100.add_attribute("OBSub", "OnBehalfOfSubID_t_1117862998"); // 1
    Hdr_100_set.insert("OnBehalfOfSubID_t_1117862998");
    Hdr_100.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1937088398"); // 1
    Hdr_100_set.insert("OnBehalfOfLocationID_t_1937088398");
    Hdr_100.add_attribute("D2Sub", "DeliverToSubID_t_8919206"); // 1
    Hdr_100_set.insert("DeliverToSubID_t_8919206");
    Hdr_100.add_attribute("D2Loc", "DeliverToLocationID_t_1032829465"); // 1
    Hdr_100_set.insert("DeliverToLocationID_t_1032829465");
    Hdr_100.add_attribute("PosDup", "Y"); // 1
    Hdr_100_set.insert("Y");
    Hdr_100.add_attribute("PosRsnd", "N"); // 1
    Hdr_100_set.insert("N");
    Hdr_100.add_attribute("Snt", "SendingTime_t_1107527788"); // 1
    Hdr_100_set.insert("SendingTime_t_1107527788");
    Hdr_100.add_attribute("OrigSnt", "OrigSendingTime_t_292428253"); // 1
    Hdr_100_set.insert("OrigSendingTime_t_292428253");
    Hdr_100.add_attribute("MsgEncd", "MessageEncoding_t_1035644116"); // 1
    Hdr_100_set.insert("MessageEncoding_t_1035644116");
    all_values.push_back(Hdr_100_set);
    all_compo_names.insert("Hdr_100_set");

    {
      xml_element Hop_100{"Hop"};
      multiset<string> Hop_100_set;
      Hop_100.add_attribute("ID", "HopCompID_t_232954209"); // 2
      Hop_100_set.insert("HopCompID_t_232954209");
      Hop_100.add_attribute("Ref", "995899664"); // 2
      Hop_100_set.insert("995899664");
      Hop_100.add_attribute("Snt", "HopSendingTime_t_810456"); // 2
      Hop_100_set.insert("HopSendingTime_t_810456");
      all_values.push_back(Hop_100_set);
      all_compo_names.insert("Hop_100_set");

      Hdr_100.add_element(Hop_100);
    }
    elt.add_element(Hdr_100);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_20{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_20_set;
    ApplSeqCtrl_20.add_attribute("ApplID", "ApplID_t_2083432707"); // 1
    ApplSeqCtrl_20_set.insert("ApplID_t_2083432707");
    ApplSeqCtrl_20.add_attribute("ApplSeqNum", "771840519"); // 1
    ApplSeqCtrl_20_set.insert("771840519");
    ApplSeqCtrl_20.add_attribute("ApplLastSeqNum", "1240905804"); // 1
    ApplSeqCtrl_20_set.insert("1240905804");
    ApplSeqCtrl_20.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_20_set.insert("true");
    all_values.push_back(ApplSeqCtrl_20_set);
    all_compo_names.insert("ApplSeqCtrl_20_set");

    elt.add_element(ApplSeqCtrl_20);
  } // end ApplSeqCtrl
  { // TrdSessLstGrp
    xml_element TrdSessLstGrp_0{"TrdSessLstGrp"};
    multiset<string> TrdSessLstGrp_0_set;
    TrdSessLstGrp_0.add_attribute("SesID", "1"); // 1
    TrdSessLstGrp_0_set.insert("1");
    TrdSessLstGrp_0.add_attribute("SesSub", "5"); // 1
    TrdSessLstGrp_0_set.insert("5");
    TrdSessLstGrp_0.add_attribute("TradSesUpdtActn", "M"); // 1
    TrdSessLstGrp_0_set.insert("M");
    TrdSessLstGrp_0.add_attribute("Exch", "SecurityExchange_t_749068893"); // 1
    TrdSessLstGrp_0_set.insert("SecurityExchange_t_749068893");
    TrdSessLstGrp_0.add_attribute("MktID", "MarketID_t_1991824613"); // 1
    TrdSessLstGrp_0_set.insert("MarketID_t_1991824613");
    TrdSessLstGrp_0.add_attribute("MktSegID", "MarketSegmentID_t_1425180481"); // 1
    TrdSessLstGrp_0_set.insert("MarketSegmentID_t_1425180481");
    TrdSessLstGrp_0.add_attribute("TradingSessionDesc", "TradingSessionDesc_t_1292033204"); // 1
    TrdSessLstGrp_0_set.insert("TradingSessionDesc_t_1292033204");
    TrdSessLstGrp_0.add_attribute("Method", "3"); // 1
    TrdSessLstGrp_0_set.insert("3");
    TrdSessLstGrp_0.add_attribute("Mode", "3"); // 1
    TrdSessLstGrp_0_set.insert("3");
    TrdSessLstGrp_0.add_attribute("Unsol", "N"); // 1
    TrdSessLstGrp_0_set.insert("N");
    TrdSessLstGrp_0.add_attribute("Stat", "1"); // 1
    TrdSessLstGrp_0_set.insert("1");
    TrdSessLstGrp_0.add_attribute("StatRejRsn", "1"); // 1
    TrdSessLstGrp_0_set.insert("1");
    TrdSessLstGrp_0.add_attribute("StartTm", "TradSesStartTime_t_1035919343"); // 1
    TrdSessLstGrp_0_set.insert("TradSesStartTime_t_1035919343");
    TrdSessLstGrp_0.add_attribute("OpenTm", "TradSesOpenTime_t_345573685"); // 1
    TrdSessLstGrp_0_set.insert("TradSesOpenTime_t_345573685");
    TrdSessLstGrp_0.add_attribute("PreClsTm", "TradSesPreCloseTime_t_1833297514"); // 1
    TrdSessLstGrp_0_set.insert("TradSesPreCloseTime_t_1833297514");
    TrdSessLstGrp_0.add_attribute("ClsTm", "TradSesCloseTime_t_825524094"); // 1
    TrdSessLstGrp_0_set.insert("TradSesCloseTime_t_825524094");
    TrdSessLstGrp_0.add_attribute("EndTm", "TradSesEndTime_t_354492891"); // 1
    TrdSessLstGrp_0_set.insert("TradSesEndTime_t_354492891");
    TrdSessLstGrp_0.add_attribute("TotVolTrdd", "7186433.320000"); // 1
    TrdSessLstGrp_0_set.insert("7186433.320000");
    TrdSessLstGrp_0.add_attribute("TxnTm", "TransactTime_t_2127839311"); // 1
    TrdSessLstGrp_0_set.insert("TransactTime_t_2127839311");
    TrdSessLstGrp_0.add_attribute("Txt", "Text_t_1812296789"); // 1
    TrdSessLstGrp_0_set.insert("Text_t_1812296789");
    TrdSessLstGrp_0.add_attribute("EncTxtLen", "1826171120"); // 1
    TrdSessLstGrp_0_set.insert("1826171120");
    TrdSessLstGrp_0.add_attribute("EncTxt", "EncodedText_t_272783916"); // 1
    TrdSessLstGrp_0_set.insert("EncodedText_t_272783916");
    all_values.push_back(TrdSessLstGrp_0_set);
    all_compo_names.insert("TrdSessLstGrp_0_set");

    {
      xml_element TrdgSesRules_9{"TrdgSesRules"};
      {
        xml_element OrdTypRules_14{"OrdTypRules"};
        multiset<string> OrdTypRules_14_set;
        OrdTypRules_14.add_attribute("OrdTyp", "2"); // 3
        OrdTypRules_14_set.insert("2");
        all_values.push_back(OrdTypRules_14_set);
        all_compo_names.insert("OrdTypRules_14_set");

        TrdgSesRules_9.add_element(OrdTypRules_14);
      }
      {
        xml_element TmInForceRules_13{"TmInForceRules"};
        multiset<string> TmInForceRules_13_set;
        TmInForceRules_13.add_attribute("TmInForce", "9"); // 3
        TmInForceRules_13_set.insert("9");
        all_values.push_back(TmInForceRules_13_set);
        all_compo_names.insert("TmInForceRules_13_set");

        TrdgSesRules_9.add_element(TmInForceRules_13);
      }
      {
        xml_element ExecInstRules_12{"ExecInstRules"};
        multiset<string> ExecInstRules_12_set;
        ExecInstRules_12.add_attribute("ExecInstValu", "q"); // 3
        ExecInstRules_12_set.insert("q");
        all_values.push_back(ExecInstRules_12_set);
        all_compo_names.insert("ExecInstRules_12_set");

        TrdgSesRules_9.add_element(ExecInstRules_12);
      }
      {
        xml_element MtchRules_9{"MtchRules"};
        multiset<string> MtchRules_9_set;
        MtchRules_9.add_attribute("MtchAlgo", "MatchAlgorithm_t_701267714"); // 3
        MtchRules_9_set.insert("MatchAlgorithm_t_701267714");
        MtchRules_9.add_attribute("MtchTyp", "M6"); // 3
        MtchRules_9_set.insert("M6");
        all_values.push_back(MtchRules_9_set);
        all_compo_names.insert("MtchRules_9_set");

        TrdgSesRules_9.add_element(MtchRules_9);
      }
      {
        xml_element MDFeedTyps_9{"MDFeedTyps"};
        multiset<string> MDFeedTyps_9_set;
        MDFeedTyps_9.add_attribute("MDFeedTyp", "MDFeedType_t_2040524100"); // 3
        MDFeedTyps_9_set.insert("MDFeedType_t_2040524100");
        MDFeedTyps_9.add_attribute("MktDepth", "1942173518"); // 3
        MDFeedTyps_9_set.insert("1942173518");
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
    TrdSessLstGrp_1.add_attribute("SesSub", "2"); // 1
    TrdSessLstGrp_1_set.insert("2");
    TrdSessLstGrp_1.add_attribute("TradSesUpdtActn", "D"); // 1
    TrdSessLstGrp_1_set.insert("D");
    TrdSessLstGrp_1.add_attribute("Exch", "SecurityExchange_t_1343582981"); // 1
    TrdSessLstGrp_1_set.insert("SecurityExchange_t_1343582981");
    TrdSessLstGrp_1.add_attribute("MktID", "MarketID_t_257871199"); // 1
    TrdSessLstGrp_1_set.insert("MarketID_t_257871199");
    TrdSessLstGrp_1.add_attribute("MktSegID", "MarketSegmentID_t_689032165"); // 1
    TrdSessLstGrp_1_set.insert("MarketSegmentID_t_689032165");
    TrdSessLstGrp_1.add_attribute("TradingSessionDesc", "TradingSessionDesc_t_621279814"); // 1
    TrdSessLstGrp_1_set.insert("TradingSessionDesc_t_621279814");
    TrdSessLstGrp_1.add_attribute("Method", "2"); // 1
    TrdSessLstGrp_1_set.insert("2");
    TrdSessLstGrp_1.add_attribute("Mode", "2"); // 1
    TrdSessLstGrp_1_set.insert("2");
    TrdSessLstGrp_1.add_attribute("Unsol", "Y"); // 1
    TrdSessLstGrp_1_set.insert("Y");
    TrdSessLstGrp_1.add_attribute("Stat", "0"); // 1
    TrdSessLstGrp_1_set.insert("0");
    TrdSessLstGrp_1.add_attribute("StatRejRsn", "1"); // 1
    TrdSessLstGrp_1_set.insert("1");
    TrdSessLstGrp_1.add_attribute("StartTm", "TradSesStartTime_t_165933623"); // 1
    TrdSessLstGrp_1_set.insert("TradSesStartTime_t_165933623");
    TrdSessLstGrp_1.add_attribute("OpenTm", "TradSesOpenTime_t_924714695"); // 1
    TrdSessLstGrp_1_set.insert("TradSesOpenTime_t_924714695");
    TrdSessLstGrp_1.add_attribute("PreClsTm", "TradSesPreCloseTime_t_2102052953"); // 1
    TrdSessLstGrp_1_set.insert("TradSesPreCloseTime_t_2102052953");
    TrdSessLstGrp_1.add_attribute("ClsTm", "TradSesCloseTime_t_1999231137"); // 1
    TrdSessLstGrp_1_set.insert("TradSesCloseTime_t_1999231137");
    TrdSessLstGrp_1.add_attribute("EndTm", "TradSesEndTime_t_1750238789"); // 1
    TrdSessLstGrp_1_set.insert("TradSesEndTime_t_1750238789");
    TrdSessLstGrp_1.add_attribute("TotVolTrdd", "3090621.960000"); // 1
    TrdSessLstGrp_1_set.insert("3090621.960000");
    TrdSessLstGrp_1.add_attribute("TxnTm", "TransactTime_t_570390821"); // 1
    TrdSessLstGrp_1_set.insert("TransactTime_t_570390821");
    TrdSessLstGrp_1.add_attribute("Txt", "Text_t_1730594452"); // 1
    TrdSessLstGrp_1_set.insert("Text_t_1730594452");
    TrdSessLstGrp_1.add_attribute("EncTxtLen", "2121358985"); // 1
    TrdSessLstGrp_1_set.insert("2121358985");
    TrdSessLstGrp_1.add_attribute("EncTxt", "EncodedText_t_249078293"); // 1
    TrdSessLstGrp_1_set.insert("EncodedText_t_249078293");
    all_values.push_back(TrdSessLstGrp_1_set);
    all_compo_names.insert("TrdSessLstGrp_1_set");

    {
      xml_element TrdgSesRules_10{"TrdgSesRules"};
      {
        xml_element OrdTypRules_15{"OrdTypRules"};
        multiset<string> OrdTypRules_15_set;
        OrdTypRules_15.add_attribute("OrdTyp", "H"); // 3
        OrdTypRules_15_set.insert("H");
        all_values.push_back(OrdTypRules_15_set);
        all_compo_names.insert("OrdTypRules_15_set");

        TrdgSesRules_10.add_element(OrdTypRules_15);
      }
      {
        xml_element TmInForceRules_14{"TmInForceRules"};
        multiset<string> TmInForceRules_14_set;
        TmInForceRules_14.add_attribute("TmInForce", "5"); // 3
        TmInForceRules_14_set.insert("5");
        all_values.push_back(TmInForceRules_14_set);
        all_compo_names.insert("TmInForceRules_14_set");

        TrdgSesRules_10.add_element(TmInForceRules_14);
      }
      {
        xml_element ExecInstRules_13{"ExecInstRules"};
        multiset<string> ExecInstRules_13_set;
        ExecInstRules_13.add_attribute("ExecInstValu", "P"); // 3
        ExecInstRules_13_set.insert("P");
        all_values.push_back(ExecInstRules_13_set);
        all_compo_names.insert("ExecInstRules_13_set");

        TrdgSesRules_10.add_element(ExecInstRules_13);
      }
      {
        xml_element MtchRules_10{"MtchRules"};
        multiset<string> MtchRules_10_set;
        MtchRules_10.add_attribute("MtchAlgo", "MatchAlgorithm_t_1124578301"); // 3
        MtchRules_10_set.insert("MatchAlgorithm_t_1124578301");
        MtchRules_10.add_attribute("MtchTyp", "M3"); // 3
        MtchRules_10_set.insert("M3");
        all_values.push_back(MtchRules_10_set);
        all_compo_names.insert("MtchRules_10_set");

        TrdgSesRules_10.add_element(MtchRules_10);
      }
      {
        xml_element MDFeedTyps_10{"MDFeedTyps"};
        multiset<string> MDFeedTyps_10_set;
        MDFeedTyps_10.add_attribute("MDFeedTyp", "MDFeedType_t_8310715"); // 3
        MDFeedTyps_10_set.insert("MDFeedType_t_8310715");
        MDFeedTyps_10.add_attribute("MktDepth", "1017618753"); // 3
        MDFeedTyps_10_set.insert("1017618753");
        MDFeedTyps_10.add_attribute("MDBkTyp", "2"); // 3
        MDFeedTyps_10_set.insert("2");
        all_values.push_back(MDFeedTyps_10_set);
        all_compo_names.insert("MDFeedTyps_10_set");

        TrdgSesRules_10.add_element(MDFeedTyps_10);
      }
      TrdSessLstGrp_1.add_element(TrdgSesRules_10);
    }
    elt.add_element(TrdSessLstGrp_1);
  } // end TrdSessLstGrp
  { // TrdSessLstGrp
    xml_element TrdSessLstGrp_2{"TrdSessLstGrp"};
    multiset<string> TrdSessLstGrp_2_set;
    TrdSessLstGrp_2.add_attribute("SesID", "4"); // 1
    TrdSessLstGrp_2_set.insert("4");
    TrdSessLstGrp_2.add_attribute("SesSub", "7"); // 1
    TrdSessLstGrp_2_set.insert("7");
    TrdSessLstGrp_2.add_attribute("TradSesUpdtActn", "A"); // 1
    TrdSessLstGrp_2_set.insert("A");
    TrdSessLstGrp_2.add_attribute("Exch", "SecurityExchange_t_483163997"); // 1
    TrdSessLstGrp_2_set.insert("SecurityExchange_t_483163997");
    TrdSessLstGrp_2.add_attribute("MktID", "MarketID_t_367848961"); // 1
    TrdSessLstGrp_2_set.insert("MarketID_t_367848961");
    TrdSessLstGrp_2.add_attribute("MktSegID", "MarketSegmentID_t_936963685"); // 1
    TrdSessLstGrp_2_set.insert("MarketSegmentID_t_936963685");
    TrdSessLstGrp_2.add_attribute("TradingSessionDesc", "TradingSessionDesc_t_1172196162"); // 1
    TrdSessLstGrp_2_set.insert("TradingSessionDesc_t_1172196162");
    TrdSessLstGrp_2.add_attribute("Method", "3"); // 1
    TrdSessLstGrp_2_set.insert("3");
    TrdSessLstGrp_2.add_attribute("Mode", "1"); // 1
    TrdSessLstGrp_2_set.insert("1");
    TrdSessLstGrp_2.add_attribute("Unsol", "N"); // 1
    TrdSessLstGrp_2_set.insert("N");
    TrdSessLstGrp_2.add_attribute("Stat", "1"); // 1
    TrdSessLstGrp_2_set.insert("1");
    TrdSessLstGrp_2.add_attribute("StatRejRsn", "99"); // 1
    TrdSessLstGrp_2_set.insert("99");
    TrdSessLstGrp_2.add_attribute("StartTm", "TradSesStartTime_t_1115247544"); // 1
    TrdSessLstGrp_2_set.insert("TradSesStartTime_t_1115247544");
    TrdSessLstGrp_2.add_attribute("OpenTm", "TradSesOpenTime_t_605561505"); // 1
    TrdSessLstGrp_2_set.insert("TradSesOpenTime_t_605561505");
    TrdSessLstGrp_2.add_attribute("PreClsTm", "TradSesPreCloseTime_t_1152894489"); // 1
    TrdSessLstGrp_2_set.insert("TradSesPreCloseTime_t_1152894489");
    TrdSessLstGrp_2.add_attribute("ClsTm", "TradSesCloseTime_t_1069816850"); // 1
    TrdSessLstGrp_2_set.insert("TradSesCloseTime_t_1069816850");
    TrdSessLstGrp_2.add_attribute("EndTm", "TradSesEndTime_t_457308995"); // 1
    TrdSessLstGrp_2_set.insert("TradSesEndTime_t_457308995");
    TrdSessLstGrp_2.add_attribute("TotVolTrdd", "7556496.300000"); // 1
    TrdSessLstGrp_2_set.insert("7556496.300000");
    TrdSessLstGrp_2.add_attribute("TxnTm", "TransactTime_t_1378879046"); // 1
    TrdSessLstGrp_2_set.insert("TransactTime_t_1378879046");
    TrdSessLstGrp_2.add_attribute("Txt", "Text_t_1027699816"); // 1
    TrdSessLstGrp_2_set.insert("Text_t_1027699816");
    TrdSessLstGrp_2.add_attribute("EncTxtLen", "338760435"); // 1
    TrdSessLstGrp_2_set.insert("338760435");
    TrdSessLstGrp_2.add_attribute("EncTxt", "EncodedText_t_1352754384"); // 1
    TrdSessLstGrp_2_set.insert("EncodedText_t_1352754384");
    all_values.push_back(TrdSessLstGrp_2_set);
    all_compo_names.insert("TrdSessLstGrp_2_set");

    {
      xml_element TrdgSesRules_11{"TrdgSesRules"};
      {
        xml_element OrdTypRules_16{"OrdTypRules"};
        multiset<string> OrdTypRules_16_set;
        OrdTypRules_16.add_attribute("OrdTyp", "P"); // 3
        OrdTypRules_16_set.insert("P");
        all_values.push_back(OrdTypRules_16_set);
        all_compo_names.insert("OrdTypRules_16_set");

        TrdgSesRules_11.add_element(OrdTypRules_16);
      }
      {
        xml_element TmInForceRules_15{"TmInForceRules"};
        multiset<string> TmInForceRules_15_set;
        TmInForceRules_15.add_attribute("TmInForce", "5"); // 3
        TmInForceRules_15_set.insert("5");
        all_values.push_back(TmInForceRules_15_set);
        all_compo_names.insert("TmInForceRules_15_set");

        TrdgSesRules_11.add_element(TmInForceRules_15);
      }
      {
        xml_element ExecInstRules_14{"ExecInstRules"};
        multiset<string> ExecInstRules_14_set;
        ExecInstRules_14.add_attribute("ExecInstValu", "h"); // 3
        ExecInstRules_14_set.insert("h");
        all_values.push_back(ExecInstRules_14_set);
        all_compo_names.insert("ExecInstRules_14_set");

        TrdgSesRules_11.add_element(ExecInstRules_14);
      }
      {
        xml_element MtchRules_11{"MtchRules"};
        multiset<string> MtchRules_11_set;
        MtchRules_11.add_attribute("MtchAlgo", "MatchAlgorithm_t_1437498084"); // 3
        MtchRules_11_set.insert("MatchAlgorithm_t_1437498084");
        MtchRules_11.add_attribute("MtchTyp", "M6"); // 3
        MtchRules_11_set.insert("M6");
        all_values.push_back(MtchRules_11_set);
        all_compo_names.insert("MtchRules_11_set");

        TrdgSesRules_11.add_element(MtchRules_11);
      }
      {
        xml_element MDFeedTyps_11{"MDFeedTyps"};
        multiset<string> MDFeedTyps_11_set;
        MDFeedTyps_11.add_attribute("MDFeedTyp", "MDFeedType_t_1255203640"); // 3
        MDFeedTyps_11_set.insert("MDFeedType_t_1255203640");
        MDFeedTyps_11.add_attribute("MktDepth", "1445808799"); // 3
        MDFeedTyps_11_set.insert("1445808799");
        MDFeedTyps_11.add_attribute("MDBkTyp", "3"); // 3
        MDFeedTyps_11_set.insert("3");
        all_values.push_back(MDFeedTyps_11_set);
        all_compo_names.insert("MDFeedTyps_11_set");

        TrdgSesRules_11.add_element(MDFeedTyps_11);
      }
      TrdSessLstGrp_2.add_element(TrdgSesRules_11);
    }
    elt.add_element(TrdSessLstGrp_2);
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
