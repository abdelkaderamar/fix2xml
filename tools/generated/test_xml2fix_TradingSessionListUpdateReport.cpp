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
  elt.add_attribute("ReqID", "TradSesReqID_t_1353704803"); // 0
  TradingSessionListUpdateReport_message_t_0.insert("TradSesReqID_t_1353704803");
  all_values.push_back(TradingSessionListUpdateReport_message_t_0);
  all_compo_names.insert("TradingSessionListUpdateReport_message_t");

  { // Hdr
    xml_element Hdr_102{"Hdr"};
    multiset<string> Hdr_102_set;
    Hdr_102.add_attribute("SeqNum", "1483270519"); // 1
    Hdr_102_set.insert("1483270519");
    Hdr_102.add_attribute("SID", "SenderCompID_t_758670330"); // 1
    Hdr_102_set.insert("SenderCompID_t_758670330");
    Hdr_102.add_attribute("TID", "TargetCompID_t_1851460487"); // 1
    Hdr_102_set.insert("TargetCompID_t_1851460487");
    Hdr_102.add_attribute("OBID", "OnBehalfOfCompID_t_1635744944"); // 1
    Hdr_102_set.insert("OnBehalfOfCompID_t_1635744944");
    Hdr_102.add_attribute("D2ID", "DeliverToCompID_t_742553267"); // 1
    Hdr_102_set.insert("DeliverToCompID_t_742553267");
    Hdr_102.add_attribute("SSub", "SenderSubID_t_1478391007"); // 1
    Hdr_102_set.insert("SenderSubID_t_1478391007");
    Hdr_102.add_attribute("SLoc", "SenderLocationID_t_725397726"); // 1
    Hdr_102_set.insert("SenderLocationID_t_725397726");
    Hdr_102.add_attribute("TSub", "TargetSubID_t_1708124148"); // 1
    Hdr_102_set.insert("TargetSubID_t_1708124148");
    Hdr_102.add_attribute("TLoc", "TargetLocationID_t_194573774"); // 1
    Hdr_102_set.insert("TargetLocationID_t_194573774");
    Hdr_102.add_attribute("OBSub", "OnBehalfOfSubID_t_1360268311"); // 1
    Hdr_102_set.insert("OnBehalfOfSubID_t_1360268311");
    Hdr_102.add_attribute("OBLoc", "OnBehalfOfLocationID_t_214330552"); // 1
    Hdr_102_set.insert("OnBehalfOfLocationID_t_214330552");
    Hdr_102.add_attribute("D2Sub", "DeliverToSubID_t_1175570873"); // 1
    Hdr_102_set.insert("DeliverToSubID_t_1175570873");
    Hdr_102.add_attribute("D2Loc", "DeliverToLocationID_t_1650323767"); // 1
    Hdr_102_set.insert("DeliverToLocationID_t_1650323767");
    Hdr_102.add_attribute("PosDup", "Y"); // 1
    Hdr_102_set.insert("Y");
    Hdr_102.add_attribute("PosRsnd", "Y"); // 1
    Hdr_102_set.insert("Y");
    Hdr_102.add_attribute("Snt", "SendingTime_t_84146707"); // 1
    Hdr_102_set.insert("SendingTime_t_84146707");
    Hdr_102.add_attribute("OrigSnt", "OrigSendingTime_t_574769028"); // 1
    Hdr_102_set.insert("OrigSendingTime_t_574769028");
    Hdr_102.add_attribute("MsgEncd", "MessageEncoding_t_10623380"); // 1
    Hdr_102_set.insert("MessageEncoding_t_10623380");
    all_values.push_back(Hdr_102_set);
    all_compo_names.insert("Hdr_102_set");

    {
      xml_element Hop_102{"Hop"};
      multiset<string> Hop_102_set;
      Hop_102.add_attribute("ID", "HopCompID_t_470340463"); // 2
      Hop_102_set.insert("HopCompID_t_470340463");
      Hop_102.add_attribute("Ref", "1845374332"); // 2
      Hop_102_set.insert("1845374332");
      Hop_102.add_attribute("Snt", "HopSendingTime_t_307427869"); // 2
      Hop_102_set.insert("HopSendingTime_t_307427869");
      all_values.push_back(Hop_102_set);
      all_compo_names.insert("Hop_102_set");

      Hdr_102.add_element(Hop_102);
    }
    elt.add_element(Hdr_102);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_21{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_21_set;
    ApplSeqCtrl_21.add_attribute("ApplID", "ApplID_t_501089413"); // 1
    ApplSeqCtrl_21_set.insert("ApplID_t_501089413");
    ApplSeqCtrl_21.add_attribute("ApplSeqNum", "1936376959"); // 1
    ApplSeqCtrl_21_set.insert("1936376959");
    ApplSeqCtrl_21.add_attribute("ApplLastSeqNum", "418132649"); // 1
    ApplSeqCtrl_21_set.insert("418132649");
    ApplSeqCtrl_21.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_21_set.insert("false");
    all_values.push_back(ApplSeqCtrl_21_set);
    all_compo_names.insert("ApplSeqCtrl_21_set");

    elt.add_element(ApplSeqCtrl_21);
  } // end ApplSeqCtrl
  { // TrdSessLstGrp
    xml_element TrdSessLstGrp_2{"TrdSessLstGrp"};
    multiset<string> TrdSessLstGrp_2_set;
    TrdSessLstGrp_2.add_attribute("SesID", "6"); // 1
    TrdSessLstGrp_2_set.insert("6");
    TrdSessLstGrp_2.add_attribute("SesSub", "7"); // 1
    TrdSessLstGrp_2_set.insert("7");
    TrdSessLstGrp_2.add_attribute("TradSesUpdtActn", "M"); // 1
    TrdSessLstGrp_2_set.insert("M");
    TrdSessLstGrp_2.add_attribute("Exch", "SecurityExchange_t_1186371972"); // 1
    TrdSessLstGrp_2_set.insert("SecurityExchange_t_1186371972");
    TrdSessLstGrp_2.add_attribute("MktID", "MarketID_t_1478104939"); // 1
    TrdSessLstGrp_2_set.insert("MarketID_t_1478104939");
    TrdSessLstGrp_2.add_attribute("MktSegID", "MarketSegmentID_t_2044214646"); // 1
    TrdSessLstGrp_2_set.insert("MarketSegmentID_t_2044214646");
    TrdSessLstGrp_2.add_attribute("TradingSessionDesc", "TradingSessionDesc_t_1945042302"); // 1
    TrdSessLstGrp_2_set.insert("TradingSessionDesc_t_1945042302");
    TrdSessLstGrp_2.add_attribute("Method", "2"); // 1
    TrdSessLstGrp_2_set.insert("2");
    TrdSessLstGrp_2.add_attribute("Mode", "2"); // 1
    TrdSessLstGrp_2_set.insert("2");
    TrdSessLstGrp_2.add_attribute("Unsol", "Y"); // 1
    TrdSessLstGrp_2_set.insert("Y");
    TrdSessLstGrp_2.add_attribute("Stat", "3"); // 1
    TrdSessLstGrp_2_set.insert("3");
    TrdSessLstGrp_2.add_attribute("StatRejRsn", "99"); // 1
    TrdSessLstGrp_2_set.insert("99");
    TrdSessLstGrp_2.add_attribute("StartTm", "TradSesStartTime_t_100752422"); // 1
    TrdSessLstGrp_2_set.insert("TradSesStartTime_t_100752422");
    TrdSessLstGrp_2.add_attribute("OpenTm", "TradSesOpenTime_t_707562911"); // 1
    TrdSessLstGrp_2_set.insert("TradSesOpenTime_t_707562911");
    TrdSessLstGrp_2.add_attribute("PreClsTm", "TradSesPreCloseTime_t_1470658332"); // 1
    TrdSessLstGrp_2_set.insert("TradSesPreCloseTime_t_1470658332");
    TrdSessLstGrp_2.add_attribute("ClsTm", "TradSesCloseTime_t_315082974"); // 1
    TrdSessLstGrp_2_set.insert("TradSesCloseTime_t_315082974");
    TrdSessLstGrp_2.add_attribute("EndTm", "TradSesEndTime_t_1883133785"); // 1
    TrdSessLstGrp_2_set.insert("TradSesEndTime_t_1883133785");
    TrdSessLstGrp_2.add_attribute("TotVolTrdd", "9734984.510000"); // 1
    TrdSessLstGrp_2_set.insert("9734984.510000");
    TrdSessLstGrp_2.add_attribute("TxnTm", "TransactTime_t_245028499"); // 1
    TrdSessLstGrp_2_set.insert("TransactTime_t_245028499");
    TrdSessLstGrp_2.add_attribute("Txt", "Text_t_1534544084"); // 1
    TrdSessLstGrp_2_set.insert("Text_t_1534544084");
    TrdSessLstGrp_2.add_attribute("EncTxtLen", "1057645158"); // 1
    TrdSessLstGrp_2_set.insert("1057645158");
    TrdSessLstGrp_2.add_attribute("EncTxt", "EncodedText_t_819797528"); // 1
    TrdSessLstGrp_2_set.insert("EncodedText_t_819797528");
    all_values.push_back(TrdSessLstGrp_2_set);
    all_compo_names.insert("TrdSessLstGrp_2_set");

    {
      xml_element TrdgSesRules_11{"TrdgSesRules"};
      {
        xml_element OrdTypRules_17{"OrdTypRules"};
        multiset<string> OrdTypRules_17_set;
        OrdTypRules_17.add_attribute("OrdTyp", "H"); // 3
        OrdTypRules_17_set.insert("H");
        all_values.push_back(OrdTypRules_17_set);
        all_compo_names.insert("OrdTypRules_17_set");

        TrdgSesRules_11.add_element(OrdTypRules_17);
      }
      {
        xml_element TmInForceRules_13{"TmInForceRules"};
        multiset<string> TmInForceRules_13_set;
        TmInForceRules_13.add_attribute("TmInForce", "1"); // 3
        TmInForceRules_13_set.insert("1");
        all_values.push_back(TmInForceRules_13_set);
        all_compo_names.insert("TmInForceRules_13_set");

        TrdgSesRules_11.add_element(TmInForceRules_13);
      }
      {
        xml_element ExecInstRules_16{"ExecInstRules"};
        multiset<string> ExecInstRules_16_set;
        ExecInstRules_16.add_attribute("ExecInstValu", "F"); // 3
        ExecInstRules_16_set.insert("F");
        all_values.push_back(ExecInstRules_16_set);
        all_compo_names.insert("ExecInstRules_16_set");

        TrdgSesRules_11.add_element(ExecInstRules_16);
      }
      {
        xml_element MtchRules_11{"MtchRules"};
        multiset<string> MtchRules_11_set;
        MtchRules_11.add_attribute("MtchAlgo", "MatchAlgorithm_t_1852595333"); // 3
        MtchRules_11_set.insert("MatchAlgorithm_t_1852595333");
        MtchRules_11.add_attribute("MtchTyp", "MT"); // 3
        MtchRules_11_set.insert("MT");
        all_values.push_back(MtchRules_11_set);
        all_compo_names.insert("MtchRules_11_set");

        TrdgSesRules_11.add_element(MtchRules_11);
      }
      {
        xml_element MDFeedTyps_11{"MDFeedTyps"};
        multiset<string> MDFeedTyps_11_set;
        MDFeedTyps_11.add_attribute("MDFeedTyp", "MDFeedType_t_306581523"); // 3
        MDFeedTyps_11_set.insert("MDFeedType_t_306581523");
        MDFeedTyps_11.add_attribute("MktDepth", "123244334"); // 3
        MDFeedTyps_11_set.insert("123244334");
        MDFeedTyps_11.add_attribute("MDBkTyp", "2"); // 3
        MDFeedTyps_11_set.insert("2");
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
