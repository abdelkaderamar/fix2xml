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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdgSesListUpd" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradingSessionListUpdateReport_message_t_0;
  elt.add_attribute("ReqID", "TradSesReqID_t_209932362"); // 0
  TradingSessionListUpdateReport_message_t_0.insert("TradSesReqID_t_209932362");
  all_values.push_back(TradingSessionListUpdateReport_message_t_0);
  all_compo_names.insert("TradingSessionListUpdateReport_message_t");

  { // Hdr
    xml_element Hdr_102{"Hdr"};
    multiset<string> Hdr_102_set;
    Hdr_102.add_attribute("SeqNum", "844413782"); // 1
    Hdr_102_set.insert("844413782");
    Hdr_102.add_attribute("SID", "SenderCompID_t_1738391553"); // 1
    Hdr_102_set.insert("SenderCompID_t_1738391553");
    Hdr_102.add_attribute("TID", "TargetCompID_t_1121687142"); // 1
    Hdr_102_set.insert("TargetCompID_t_1121687142");
    Hdr_102.add_attribute("OBID", "OnBehalfOfCompID_t_1024461926"); // 1
    Hdr_102_set.insert("OnBehalfOfCompID_t_1024461926");
    Hdr_102.add_attribute("D2ID", "DeliverToCompID_t_1591292946"); // 1
    Hdr_102_set.insert("DeliverToCompID_t_1591292946");
    Hdr_102.add_attribute("SSub", "SenderSubID_t_1428540343"); // 1
    Hdr_102_set.insert("SenderSubID_t_1428540343");
    Hdr_102.add_attribute("SLoc", "SenderLocationID_t_10154086"); // 1
    Hdr_102_set.insert("SenderLocationID_t_10154086");
    Hdr_102.add_attribute("TSub", "TargetSubID_t_2092286499"); // 1
    Hdr_102_set.insert("TargetSubID_t_2092286499");
    Hdr_102.add_attribute("TLoc", "TargetLocationID_t_1229203416"); // 1
    Hdr_102_set.insert("TargetLocationID_t_1229203416");
    Hdr_102.add_attribute("OBSub", "OnBehalfOfSubID_t_297045405"); // 1
    Hdr_102_set.insert("OnBehalfOfSubID_t_297045405");
    Hdr_102.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1156095736"); // 1
    Hdr_102_set.insert("OnBehalfOfLocationID_t_1156095736");
    Hdr_102.add_attribute("D2Sub", "DeliverToSubID_t_61389102"); // 1
    Hdr_102_set.insert("DeliverToSubID_t_61389102");
    Hdr_102.add_attribute("D2Loc", "DeliverToLocationID_t_962631631"); // 1
    Hdr_102_set.insert("DeliverToLocationID_t_962631631");
    Hdr_102.add_attribute("PosDup", "Y"); // 1
    Hdr_102_set.insert("Y");
    Hdr_102.add_attribute("PosRsnd", "N"); // 1
    Hdr_102_set.insert("N");
    Hdr_102.add_attribute("Snt", "SendingTime_t_1484464520"); // 1
    Hdr_102_set.insert("SendingTime_t_1484464520");
    Hdr_102.add_attribute("OrigSnt", "OrigSendingTime_t_1482305640"); // 1
    Hdr_102_set.insert("OrigSendingTime_t_1482305640");
    Hdr_102.add_attribute("MsgEncd", "MessageEncoding_t_569157671"); // 1
    Hdr_102_set.insert("MessageEncoding_t_569157671");
    all_values.push_back(Hdr_102_set);
    all_compo_names.insert("Hdr_102_set");

    {
      xml_element Hop_102{"Hop"};
      multiset<string> Hop_102_set;
      Hop_102.add_attribute("ID", "HopCompID_t_1800504450"); // 2
      Hop_102_set.insert("HopCompID_t_1800504450");
      Hop_102.add_attribute("Ref", "2133745933"); // 2
      Hop_102_set.insert("2133745933");
      Hop_102.add_attribute("Snt", "HopSendingTime_t_1303509576"); // 2
      Hop_102_set.insert("HopSendingTime_t_1303509576");
      all_values.push_back(Hop_102_set);
      all_compo_names.insert("Hop_102_set");

      Hdr_102.add_element(Hop_102);
    }
    elt.add_element(Hdr_102);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_21{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_21_set;
    ApplSeqCtrl_21.add_attribute("ApplID", "ApplID_t_1719608664"); // 1
    ApplSeqCtrl_21_set.insert("ApplID_t_1719608664");
    ApplSeqCtrl_21.add_attribute("ApplSeqNum", "1823850844"); // 1
    ApplSeqCtrl_21_set.insert("1823850844");
    ApplSeqCtrl_21.add_attribute("ApplLastSeqNum", "1625542035"); // 1
    ApplSeqCtrl_21_set.insert("1625542035");
    ApplSeqCtrl_21.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_21_set.insert("false");
    all_values.push_back(ApplSeqCtrl_21_set);
    all_compo_names.insert("ApplSeqCtrl_21_set");

    elt.add_element(ApplSeqCtrl_21);
  } // end ApplSeqCtrl
  { // TrdSessLstGrp
    xml_element TrdSessLstGrp_1{"TrdSessLstGrp"};
    multiset<string> TrdSessLstGrp_1_set;
    TrdSessLstGrp_1.add_attribute("SesID", "2"); // 1
    TrdSessLstGrp_1_set.insert("2");
    TrdSessLstGrp_1.add_attribute("SesSub", "6"); // 1
    TrdSessLstGrp_1_set.insert("6");
    TrdSessLstGrp_1.add_attribute("TradSesUpdtActn", "M"); // 1
    TrdSessLstGrp_1_set.insert("M");
    TrdSessLstGrp_1.add_attribute("Exch", "SecurityExchange_t_981760525"); // 1
    TrdSessLstGrp_1_set.insert("SecurityExchange_t_981760525");
    TrdSessLstGrp_1.add_attribute("MktID", "MarketID_t_1672174953"); // 1
    TrdSessLstGrp_1_set.insert("MarketID_t_1672174953");
    TrdSessLstGrp_1.add_attribute("MktSegID", "MarketSegmentID_t_508250375"); // 1
    TrdSessLstGrp_1_set.insert("MarketSegmentID_t_508250375");
    TrdSessLstGrp_1.add_attribute("TradingSessionDesc", "TradingSessionDesc_t_572668430"); // 1
    TrdSessLstGrp_1_set.insert("TradingSessionDesc_t_572668430");
    TrdSessLstGrp_1.add_attribute("Method", "3"); // 1
    TrdSessLstGrp_1_set.insert("3");
    TrdSessLstGrp_1.add_attribute("Mode", "2"); // 1
    TrdSessLstGrp_1_set.insert("2");
    TrdSessLstGrp_1.add_attribute("Unsol", "N"); // 1
    TrdSessLstGrp_1_set.insert("N");
    TrdSessLstGrp_1.add_attribute("Stat", "1"); // 1
    TrdSessLstGrp_1_set.insert("1");
    TrdSessLstGrp_1.add_attribute("StatRejRsn", "99"); // 1
    TrdSessLstGrp_1_set.insert("99");
    TrdSessLstGrp_1.add_attribute("StartTm", "TradSesStartTime_t_2108764227"); // 1
    TrdSessLstGrp_1_set.insert("TradSesStartTime_t_2108764227");
    TrdSessLstGrp_1.add_attribute("OpenTm", "TradSesOpenTime_t_1156638559"); // 1
    TrdSessLstGrp_1_set.insert("TradSesOpenTime_t_1156638559");
    TrdSessLstGrp_1.add_attribute("PreClsTm", "TradSesPreCloseTime_t_1839911793"); // 1
    TrdSessLstGrp_1_set.insert("TradSesPreCloseTime_t_1839911793");
    TrdSessLstGrp_1.add_attribute("ClsTm", "TradSesCloseTime_t_1117376316"); // 1
    TrdSessLstGrp_1_set.insert("TradSesCloseTime_t_1117376316");
    TrdSessLstGrp_1.add_attribute("EndTm", "TradSesEndTime_t_1218027661"); // 1
    TrdSessLstGrp_1_set.insert("TradSesEndTime_t_1218027661");
    TrdSessLstGrp_1.add_attribute("TotVolTrdd", "6550597.760000"); // 1
    TrdSessLstGrp_1_set.insert("6550597.760000");
    TrdSessLstGrp_1.add_attribute("TxnTm", "TransactTime_t_1716864501"); // 1
    TrdSessLstGrp_1_set.insert("TransactTime_t_1716864501");
    TrdSessLstGrp_1.add_attribute("Txt", "Text_t_1937429649"); // 1
    TrdSessLstGrp_1_set.insert("Text_t_1937429649");
    TrdSessLstGrp_1.add_attribute("EncTxtLen", "2139524296"); // 1
    TrdSessLstGrp_1_set.insert("2139524296");
    TrdSessLstGrp_1.add_attribute("EncTxt", "EncodedText_t_1051686493"); // 1
    TrdSessLstGrp_1_set.insert("EncodedText_t_1051686493");
    all_values.push_back(TrdSessLstGrp_1_set);
    all_compo_names.insert("TrdSessLstGrp_1_set");

    {
      xml_element TrdgSesRules_12{"TrdgSesRules"};
      {
        xml_element OrdTypRules_15{"OrdTypRules"};
        multiset<string> OrdTypRules_15_set;
        OrdTypRules_15.add_attribute("OrdTyp", "1"); // 3
        OrdTypRules_15_set.insert("1");
        all_values.push_back(OrdTypRules_15_set);
        all_compo_names.insert("OrdTypRules_15_set");

        TrdgSesRules_12.add_element(OrdTypRules_15);
      }
      {
        xml_element TmInForceRules_16{"TmInForceRules"};
        multiset<string> TmInForceRules_16_set;
        TmInForceRules_16.add_attribute("TmInForce", "8"); // 3
        TmInForceRules_16_set.insert("8");
        all_values.push_back(TmInForceRules_16_set);
        all_compo_names.insert("TmInForceRules_16_set");

        TrdgSesRules_12.add_element(TmInForceRules_16);
      }
      {
        xml_element ExecInstRules_16{"ExecInstRules"};
        multiset<string> ExecInstRules_16_set;
        ExecInstRules_16.add_attribute("ExecInstValu", "U"); // 3
        ExecInstRules_16_set.insert("U");
        all_values.push_back(ExecInstRules_16_set);
        all_compo_names.insert("ExecInstRules_16_set");

        TrdgSesRules_12.add_element(ExecInstRules_16);
      }
      {
        xml_element MtchRules_12{"MtchRules"};
        multiset<string> MtchRules_12_set;
        MtchRules_12.add_attribute("MtchAlgo", "MatchAlgorithm_t_1662613249"); // 3
        MtchRules_12_set.insert("MatchAlgorithm_t_1662613249");
        MtchRules_12.add_attribute("MtchTyp", "A4"); // 3
        MtchRules_12_set.insert("A4");
        all_values.push_back(MtchRules_12_set);
        all_compo_names.insert("MtchRules_12_set");

        TrdgSesRules_12.add_element(MtchRules_12);
      }
      {
        xml_element MDFeedTyps_12{"MDFeedTyps"};
        multiset<string> MDFeedTyps_12_set;
        MDFeedTyps_12.add_attribute("MDFeedTyp", "MDFeedType_t_714315975"); // 3
        MDFeedTyps_12_set.insert("MDFeedType_t_714315975");
        MDFeedTyps_12.add_attribute("MktDepth", "1140671636"); // 3
        MDFeedTyps_12_set.insert("1140671636");
        MDFeedTyps_12.add_attribute("MDBkTyp", "1"); // 3
        MDFeedTyps_12_set.insert("1");
        all_values.push_back(MDFeedTyps_12_set);
        all_compo_names.insert("MDFeedTyps_12_set");

        TrdgSesRules_12.add_element(MDFeedTyps_12);
      }
      TrdSessLstGrp_1.add_element(TrdgSesRules_12);
    }
    elt.add_element(TrdSessLstGrp_1);
  } // end TrdSessLstGrp
  { // TrdSessLstGrp
    xml_element TrdSessLstGrp_2{"TrdSessLstGrp"};
    multiset<string> TrdSessLstGrp_2_set;
    TrdSessLstGrp_2.add_attribute("SesID", "6"); // 1
    TrdSessLstGrp_2_set.insert("6");
    TrdSessLstGrp_2.add_attribute("SesSub", "5"); // 1
    TrdSessLstGrp_2_set.insert("5");
    TrdSessLstGrp_2.add_attribute("TradSesUpdtActn", "D"); // 1
    TrdSessLstGrp_2_set.insert("D");
    TrdSessLstGrp_2.add_attribute("Exch", "SecurityExchange_t_1450783982"); // 1
    TrdSessLstGrp_2_set.insert("SecurityExchange_t_1450783982");
    TrdSessLstGrp_2.add_attribute("MktID", "MarketID_t_802368524"); // 1
    TrdSessLstGrp_2_set.insert("MarketID_t_802368524");
    TrdSessLstGrp_2.add_attribute("MktSegID", "MarketSegmentID_t_1826255045"); // 1
    TrdSessLstGrp_2_set.insert("MarketSegmentID_t_1826255045");
    TrdSessLstGrp_2.add_attribute("TradingSessionDesc", "TradingSessionDesc_t_1959034357"); // 1
    TrdSessLstGrp_2_set.insert("TradingSessionDesc_t_1959034357");
    TrdSessLstGrp_2.add_attribute("Method", "2"); // 1
    TrdSessLstGrp_2_set.insert("2");
    TrdSessLstGrp_2.add_attribute("Mode", "3"); // 1
    TrdSessLstGrp_2_set.insert("3");
    TrdSessLstGrp_2.add_attribute("Unsol", "Y"); // 1
    TrdSessLstGrp_2_set.insert("Y");
    TrdSessLstGrp_2.add_attribute("Stat", "5"); // 1
    TrdSessLstGrp_2_set.insert("5");
    TrdSessLstGrp_2.add_attribute("StatRejRsn", "1"); // 1
    TrdSessLstGrp_2_set.insert("1");
    TrdSessLstGrp_2.add_attribute("StartTm", "TradSesStartTime_t_739645750"); // 1
    TrdSessLstGrp_2_set.insert("TradSesStartTime_t_739645750");
    TrdSessLstGrp_2.add_attribute("OpenTm", "TradSesOpenTime_t_1352795262"); // 1
    TrdSessLstGrp_2_set.insert("TradSesOpenTime_t_1352795262");
    TrdSessLstGrp_2.add_attribute("PreClsTm", "TradSesPreCloseTime_t_1409223547"); // 1
    TrdSessLstGrp_2_set.insert("TradSesPreCloseTime_t_1409223547");
    TrdSessLstGrp_2.add_attribute("ClsTm", "TradSesCloseTime_t_432073895"); // 1
    TrdSessLstGrp_2_set.insert("TradSesCloseTime_t_432073895");
    TrdSessLstGrp_2.add_attribute("EndTm", "TradSesEndTime_t_322687930"); // 1
    TrdSessLstGrp_2_set.insert("TradSesEndTime_t_322687930");
    TrdSessLstGrp_2.add_attribute("TotVolTrdd", "4797675.610000"); // 1
    TrdSessLstGrp_2_set.insert("4797675.610000");
    TrdSessLstGrp_2.add_attribute("TxnTm", "TransactTime_t_1087133671"); // 1
    TrdSessLstGrp_2_set.insert("TransactTime_t_1087133671");
    TrdSessLstGrp_2.add_attribute("Txt", "Text_t_2039552431"); // 1
    TrdSessLstGrp_2_set.insert("Text_t_2039552431");
    TrdSessLstGrp_2.add_attribute("EncTxtLen", "269713562"); // 1
    TrdSessLstGrp_2_set.insert("269713562");
    TrdSessLstGrp_2.add_attribute("EncTxt", "EncodedText_t_1079174320"); // 1
    TrdSessLstGrp_2_set.insert("EncodedText_t_1079174320");
    all_values.push_back(TrdSessLstGrp_2_set);
    all_compo_names.insert("TrdSessLstGrp_2_set");

    {
      xml_element TrdgSesRules_13{"TrdgSesRules"};
      {
        xml_element OrdTypRules_16{"OrdTypRules"};
        multiset<string> OrdTypRules_16_set;
        OrdTypRules_16.add_attribute("OrdTyp", "E"); // 3
        OrdTypRules_16_set.insert("E");
        all_values.push_back(OrdTypRules_16_set);
        all_compo_names.insert("OrdTypRules_16_set");

        TrdgSesRules_13.add_element(OrdTypRules_16);
      }
      {
        xml_element TmInForceRules_17{"TmInForceRules"};
        multiset<string> TmInForceRules_17_set;
        TmInForceRules_17.add_attribute("TmInForce", "5"); // 3
        TmInForceRules_17_set.insert("5");
        all_values.push_back(TmInForceRules_17_set);
        all_compo_names.insert("TmInForceRules_17_set");

        TrdgSesRules_13.add_element(TmInForceRules_17);
      }
      {
        xml_element ExecInstRules_17{"ExecInstRules"};
        multiset<string> ExecInstRules_17_set;
        ExecInstRules_17.add_attribute("ExecInstValu", "U"); // 3
        ExecInstRules_17_set.insert("U");
        all_values.push_back(ExecInstRules_17_set);
        all_compo_names.insert("ExecInstRules_17_set");

        TrdgSesRules_13.add_element(ExecInstRules_17);
      }
      {
        xml_element MtchRules_13{"MtchRules"};
        multiset<string> MtchRules_13_set;
        MtchRules_13.add_attribute("MtchAlgo", "MatchAlgorithm_t_1981704055"); // 3
        MtchRules_13_set.insert("MatchAlgorithm_t_1981704055");
        MtchRules_13.add_attribute("MtchTyp", "3"); // 3
        MtchRules_13_set.insert("3");
        all_values.push_back(MtchRules_13_set);
        all_compo_names.insert("MtchRules_13_set");

        TrdgSesRules_13.add_element(MtchRules_13);
      }
      {
        xml_element MDFeedTyps_13{"MDFeedTyps"};
        multiset<string> MDFeedTyps_13_set;
        MDFeedTyps_13.add_attribute("MDFeedTyp", "MDFeedType_t_2088905885"); // 3
        MDFeedTyps_13_set.insert("MDFeedType_t_2088905885");
        MDFeedTyps_13.add_attribute("MktDepth", "548536382"); // 3
        MDFeedTyps_13_set.insert("548536382");
        MDFeedTyps_13.add_attribute("MDBkTyp", "2"); // 3
        MDFeedTyps_13_set.insert("2");
        all_values.push_back(MDFeedTyps_13_set);
        all_compo_names.insert("MDFeedTyps_13_set");

        TrdgSesRules_13.add_element(MDFeedTyps_13);
      }
      TrdSessLstGrp_2.add_element(TrdgSesRules_13);
    }
    elt.add_element(TrdSessLstGrp_2);
  } // end TrdSessLstGrp
  { // TrdSessLstGrp
    xml_element TrdSessLstGrp_3{"TrdSessLstGrp"};
    multiset<string> TrdSessLstGrp_3_set;
    TrdSessLstGrp_3.add_attribute("SesID", "5"); // 1
    TrdSessLstGrp_3_set.insert("5");
    TrdSessLstGrp_3.add_attribute("SesSub", "5"); // 1
    TrdSessLstGrp_3_set.insert("5");
    TrdSessLstGrp_3.add_attribute("TradSesUpdtActn", "A"); // 1
    TrdSessLstGrp_3_set.insert("A");
    TrdSessLstGrp_3.add_attribute("Exch", "SecurityExchange_t_934823477"); // 1
    TrdSessLstGrp_3_set.insert("SecurityExchange_t_934823477");
    TrdSessLstGrp_3.add_attribute("MktID", "MarketID_t_1638784106"); // 1
    TrdSessLstGrp_3_set.insert("MarketID_t_1638784106");
    TrdSessLstGrp_3.add_attribute("MktSegID", "MarketSegmentID_t_1907594996"); // 1
    TrdSessLstGrp_3_set.insert("MarketSegmentID_t_1907594996");
    TrdSessLstGrp_3.add_attribute("TradingSessionDesc", "TradingSessionDesc_t_613594874"); // 1
    TrdSessLstGrp_3_set.insert("TradingSessionDesc_t_613594874");
    TrdSessLstGrp_3.add_attribute("Method", "3"); // 1
    TrdSessLstGrp_3_set.insert("3");
    TrdSessLstGrp_3.add_attribute("Mode", "3"); // 1
    TrdSessLstGrp_3_set.insert("3");
    TrdSessLstGrp_3.add_attribute("Unsol", "Y"); // 1
    TrdSessLstGrp_3_set.insert("Y");
    TrdSessLstGrp_3.add_attribute("Stat", "5"); // 1
    TrdSessLstGrp_3_set.insert("5");
    TrdSessLstGrp_3.add_attribute("StatRejRsn", "99"); // 1
    TrdSessLstGrp_3_set.insert("99");
    TrdSessLstGrp_3.add_attribute("StartTm", "TradSesStartTime_t_1191329707"); // 1
    TrdSessLstGrp_3_set.insert("TradSesStartTime_t_1191329707");
    TrdSessLstGrp_3.add_attribute("OpenTm", "TradSesOpenTime_t_1386759929"); // 1
    TrdSessLstGrp_3_set.insert("TradSesOpenTime_t_1386759929");
    TrdSessLstGrp_3.add_attribute("PreClsTm", "TradSesPreCloseTime_t_1731974599"); // 1
    TrdSessLstGrp_3_set.insert("TradSesPreCloseTime_t_1731974599");
    TrdSessLstGrp_3.add_attribute("ClsTm", "TradSesCloseTime_t_453069607"); // 1
    TrdSessLstGrp_3_set.insert("TradSesCloseTime_t_453069607");
    TrdSessLstGrp_3.add_attribute("EndTm", "TradSesEndTime_t_1818833825"); // 1
    TrdSessLstGrp_3_set.insert("TradSesEndTime_t_1818833825");
    TrdSessLstGrp_3.add_attribute("TotVolTrdd", "20546625.290000"); // 1
    TrdSessLstGrp_3_set.insert("20546625.290000");
    TrdSessLstGrp_3.add_attribute("TxnTm", "TransactTime_t_932837168"); // 1
    TrdSessLstGrp_3_set.insert("TransactTime_t_932837168");
    TrdSessLstGrp_3.add_attribute("Txt", "Text_t_758483848"); // 1
    TrdSessLstGrp_3_set.insert("Text_t_758483848");
    TrdSessLstGrp_3.add_attribute("EncTxtLen", "1946731313"); // 1
    TrdSessLstGrp_3_set.insert("1946731313");
    TrdSessLstGrp_3.add_attribute("EncTxt", "EncodedText_t_1202550730"); // 1
    TrdSessLstGrp_3_set.insert("EncodedText_t_1202550730");
    all_values.push_back(TrdSessLstGrp_3_set);
    all_compo_names.insert("TrdSessLstGrp_3_set");

    {
      xml_element TrdgSesRules_14{"TrdgSesRules"};
      {
        xml_element OrdTypRules_17{"OrdTypRules"};
        multiset<string> OrdTypRules_17_set;
        OrdTypRules_17.add_attribute("OrdTyp", "9"); // 3
        OrdTypRules_17_set.insert("9");
        all_values.push_back(OrdTypRules_17_set);
        all_compo_names.insert("OrdTypRules_17_set");

        TrdgSesRules_14.add_element(OrdTypRules_17);
      }
      {
        xml_element TmInForceRules_18{"TmInForceRules"};
        multiset<string> TmInForceRules_18_set;
        TmInForceRules_18.add_attribute("TmInForce", "2"); // 3
        TmInForceRules_18_set.insert("2");
        all_values.push_back(TmInForceRules_18_set);
        all_compo_names.insert("TmInForceRules_18_set");

        TrdgSesRules_14.add_element(TmInForceRules_18);
      }
      {
        xml_element ExecInstRules_18{"ExecInstRules"};
        multiset<string> ExecInstRules_18_set;
        ExecInstRules_18.add_attribute("ExecInstValu", "G"); // 3
        ExecInstRules_18_set.insert("G");
        all_values.push_back(ExecInstRules_18_set);
        all_compo_names.insert("ExecInstRules_18_set");

        TrdgSesRules_14.add_element(ExecInstRules_18);
      }
      {
        xml_element MtchRules_14{"MtchRules"};
        multiset<string> MtchRules_14_set;
        MtchRules_14.add_attribute("MtchAlgo", "MatchAlgorithm_t_414410291"); // 3
        MtchRules_14_set.insert("MatchAlgorithm_t_414410291");
        MtchRules_14.add_attribute("MtchTyp", "A2"); // 3
        MtchRules_14_set.insert("A2");
        all_values.push_back(MtchRules_14_set);
        all_compo_names.insert("MtchRules_14_set");

        TrdgSesRules_14.add_element(MtchRules_14);
      }
      {
        xml_element MDFeedTyps_14{"MDFeedTyps"};
        multiset<string> MDFeedTyps_14_set;
        MDFeedTyps_14.add_attribute("MDFeedTyp", "MDFeedType_t_1975314801"); // 3
        MDFeedTyps_14_set.insert("MDFeedType_t_1975314801");
        MDFeedTyps_14.add_attribute("MktDepth", "355832528"); // 3
        MDFeedTyps_14_set.insert("355832528");
        MDFeedTyps_14.add_attribute("MDBkTyp", "1"); // 3
        MDFeedTyps_14_set.insert("1");
        all_values.push_back(MDFeedTyps_14_set);
        all_compo_names.insert("MDFeedTyps_14_set");

        TrdgSesRules_14.add_element(MDFeedTyps_14);
      }
      TrdSessLstGrp_3.add_element(TrdgSesRules_14);
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
