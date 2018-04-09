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
  elt.add_attribute("ReqID", "TradSesReqID_t_1000651741"); // 0
  TradingSessionList_message_t_0.insert("TradSesReqID_t_1000651741");
  all_values.push_back(TradingSessionList_message_t_0);
  all_compo_names.insert("TradingSessionList_message_t");

  { // Hdr
    xml_element Hdr_100{"Hdr"};
    multiset<string> Hdr_100_set;
    Hdr_100.add_attribute("SeqNum", "878804474"); // 1
    Hdr_100_set.insert("878804474");
    Hdr_100.add_attribute("SID", "SenderCompID_t_231758158"); // 1
    Hdr_100_set.insert("SenderCompID_t_231758158");
    Hdr_100.add_attribute("TID", "TargetCompID_t_98711452"); // 1
    Hdr_100_set.insert("TargetCompID_t_98711452");
    Hdr_100.add_attribute("OBID", "OnBehalfOfCompID_t_348071497"); // 1
    Hdr_100_set.insert("OnBehalfOfCompID_t_348071497");
    Hdr_100.add_attribute("D2ID", "DeliverToCompID_t_62207171"); // 1
    Hdr_100_set.insert("DeliverToCompID_t_62207171");
    Hdr_100.add_attribute("SSub", "SenderSubID_t_1685196387"); // 1
    Hdr_100_set.insert("SenderSubID_t_1685196387");
    Hdr_100.add_attribute("SLoc", "SenderLocationID_t_1224979394"); // 1
    Hdr_100_set.insert("SenderLocationID_t_1224979394");
    Hdr_100.add_attribute("TSub", "TargetSubID_t_1816767528"); // 1
    Hdr_100_set.insert("TargetSubID_t_1816767528");
    Hdr_100.add_attribute("TLoc", "TargetLocationID_t_646820940"); // 1
    Hdr_100_set.insert("TargetLocationID_t_646820940");
    Hdr_100.add_attribute("OBSub", "OnBehalfOfSubID_t_1625035406"); // 1
    Hdr_100_set.insert("OnBehalfOfSubID_t_1625035406");
    Hdr_100.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1059841793"); // 1
    Hdr_100_set.insert("OnBehalfOfLocationID_t_1059841793");
    Hdr_100.add_attribute("D2Sub", "DeliverToSubID_t_1660882892"); // 1
    Hdr_100_set.insert("DeliverToSubID_t_1660882892");
    Hdr_100.add_attribute("D2Loc", "DeliverToLocationID_t_2085444024"); // 1
    Hdr_100_set.insert("DeliverToLocationID_t_2085444024");
    Hdr_100.add_attribute("PosDup", "Y"); // 1
    Hdr_100_set.insert("Y");
    Hdr_100.add_attribute("PosRsnd", "Y"); // 1
    Hdr_100_set.insert("Y");
    Hdr_100.add_attribute("Snt", "SendingTime_t_1956340893"); // 1
    Hdr_100_set.insert("SendingTime_t_1956340893");
    Hdr_100.add_attribute("OrigSnt", "OrigSendingTime_t_1417525428"); // 1
    Hdr_100_set.insert("OrigSendingTime_t_1417525428");
    Hdr_100.add_attribute("MsgEncd", "MessageEncoding_t_850567979"); // 1
    Hdr_100_set.insert("MessageEncoding_t_850567979");
    all_values.push_back(Hdr_100_set);
    all_compo_names.insert("Hdr_100_set");

    {
      xml_element Hop_100{"Hop"};
      multiset<string> Hop_100_set;
      Hop_100.add_attribute("ID", "HopCompID_t_380357517"); // 2
      Hop_100_set.insert("HopCompID_t_380357517");
      Hop_100.add_attribute("Ref", "520011040"); // 2
      Hop_100_set.insert("520011040");
      Hop_100.add_attribute("Snt", "HopSendingTime_t_1439648611"); // 2
      Hop_100_set.insert("HopSendingTime_t_1439648611");
      all_values.push_back(Hop_100_set);
      all_compo_names.insert("Hop_100_set");

      Hdr_100.add_element(Hop_100);
    }
    elt.add_element(Hdr_100);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_20{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_20_set;
    ApplSeqCtrl_20.add_attribute("ApplID", "ApplID_t_2101643738"); // 1
    ApplSeqCtrl_20_set.insert("ApplID_t_2101643738");
    ApplSeqCtrl_20.add_attribute("ApplSeqNum", "1931232598"); // 1
    ApplSeqCtrl_20_set.insert("1931232598");
    ApplSeqCtrl_20.add_attribute("ApplLastSeqNum", "2072617022"); // 1
    ApplSeqCtrl_20_set.insert("2072617022");
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
    TrdSessLstGrp_0.add_attribute("SesSub", "2"); // 1
    TrdSessLstGrp_0_set.insert("2");
    TrdSessLstGrp_0.add_attribute("TradSesUpdtActn", "D"); // 1
    TrdSessLstGrp_0_set.insert("D");
    TrdSessLstGrp_0.add_attribute("Exch", "SecurityExchange_t_416334002"); // 1
    TrdSessLstGrp_0_set.insert("SecurityExchange_t_416334002");
    TrdSessLstGrp_0.add_attribute("MktID", "MarketID_t_1542582068"); // 1
    TrdSessLstGrp_0_set.insert("MarketID_t_1542582068");
    TrdSessLstGrp_0.add_attribute("MktSegID", "MarketSegmentID_t_953127663"); // 1
    TrdSessLstGrp_0_set.insert("MarketSegmentID_t_953127663");
    TrdSessLstGrp_0.add_attribute("TradingSessionDesc", "TradingSessionDesc_t_648092160"); // 1
    TrdSessLstGrp_0_set.insert("TradingSessionDesc_t_648092160");
    TrdSessLstGrp_0.add_attribute("Method", "2"); // 1
    TrdSessLstGrp_0_set.insert("2");
    TrdSessLstGrp_0.add_attribute("Mode", "2"); // 1
    TrdSessLstGrp_0_set.insert("2");
    TrdSessLstGrp_0.add_attribute("Unsol", "Y"); // 1
    TrdSessLstGrp_0_set.insert("Y");
    TrdSessLstGrp_0.add_attribute("Stat", "5"); // 1
    TrdSessLstGrp_0_set.insert("5");
    TrdSessLstGrp_0.add_attribute("StatRejRsn", "1"); // 1
    TrdSessLstGrp_0_set.insert("1");
    TrdSessLstGrp_0.add_attribute("StartTm", "TradSesStartTime_t_379583212"); // 1
    TrdSessLstGrp_0_set.insert("TradSesStartTime_t_379583212");
    TrdSessLstGrp_0.add_attribute("OpenTm", "TradSesOpenTime_t_1825827200"); // 1
    TrdSessLstGrp_0_set.insert("TradSesOpenTime_t_1825827200");
    TrdSessLstGrp_0.add_attribute("PreClsTm", "TradSesPreCloseTime_t_2003730312"); // 1
    TrdSessLstGrp_0_set.insert("TradSesPreCloseTime_t_2003730312");
    TrdSessLstGrp_0.add_attribute("ClsTm", "TradSesCloseTime_t_1439425005"); // 1
    TrdSessLstGrp_0_set.insert("TradSesCloseTime_t_1439425005");
    TrdSessLstGrp_0.add_attribute("EndTm", "TradSesEndTime_t_1339226445"); // 1
    TrdSessLstGrp_0_set.insert("TradSesEndTime_t_1339226445");
    TrdSessLstGrp_0.add_attribute("TotVolTrdd", "19416906.880000"); // 1
    TrdSessLstGrp_0_set.insert("19416906.880000");
    TrdSessLstGrp_0.add_attribute("TxnTm", "TransactTime_t_1916106486"); // 1
    TrdSessLstGrp_0_set.insert("TransactTime_t_1916106486");
    TrdSessLstGrp_0.add_attribute("Txt", "Text_t_884596222"); // 1
    TrdSessLstGrp_0_set.insert("Text_t_884596222");
    TrdSessLstGrp_0.add_attribute("EncTxtLen", "1750547933"); // 1
    TrdSessLstGrp_0_set.insert("1750547933");
    TrdSessLstGrp_0.add_attribute("EncTxt", "EncodedText_t_1186148266"); // 1
    TrdSessLstGrp_0_set.insert("EncodedText_t_1186148266");
    all_values.push_back(TrdSessLstGrp_0_set);
    all_compo_names.insert("TrdSessLstGrp_0_set");

    {
      xml_element TrdgSesRules_11{"TrdgSesRules"};
      {
        xml_element OrdTypRules_14{"OrdTypRules"};
        multiset<string> OrdTypRules_14_set;
        OrdTypRules_14.add_attribute("OrdTyp", "A"); // 3
        OrdTypRules_14_set.insert("A");
        all_values.push_back(OrdTypRules_14_set);
        all_compo_names.insert("OrdTypRules_14_set");

        TrdgSesRules_11.add_element(OrdTypRules_14);
      }
      {
        xml_element TmInForceRules_15{"TmInForceRules"};
        multiset<string> TmInForceRules_15_set;
        TmInForceRules_15.add_attribute("TmInForce", "0"); // 3
        TmInForceRules_15_set.insert("0");
        all_values.push_back(TmInForceRules_15_set);
        all_compo_names.insert("TmInForceRules_15_set");

        TrdgSesRules_11.add_element(TmInForceRules_15);
      }
      {
        xml_element ExecInstRules_15{"ExecInstRules"};
        multiset<string> ExecInstRules_15_set;
        ExecInstRules_15.add_attribute("ExecInstValu", "L"); // 3
        ExecInstRules_15_set.insert("L");
        all_values.push_back(ExecInstRules_15_set);
        all_compo_names.insert("ExecInstRules_15_set");

        TrdgSesRules_11.add_element(ExecInstRules_15);
      }
      {
        xml_element MtchRules_11{"MtchRules"};
        multiset<string> MtchRules_11_set;
        MtchRules_11.add_attribute("MtchAlgo", "MatchAlgorithm_t_1027329164"); // 3
        MtchRules_11_set.insert("MatchAlgorithm_t_1027329164");
        MtchRules_11.add_attribute("MtchTyp", "MT"); // 3
        MtchRules_11_set.insert("MT");
        all_values.push_back(MtchRules_11_set);
        all_compo_names.insert("MtchRules_11_set");

        TrdgSesRules_11.add_element(MtchRules_11);
      }
      {
        xml_element MDFeedTyps_11{"MDFeedTyps"};
        multiset<string> MDFeedTyps_11_set;
        MDFeedTyps_11.add_attribute("MDFeedTyp", "MDFeedType_t_1489908256"); // 3
        MDFeedTyps_11_set.insert("MDFeedType_t_1489908256");
        MDFeedTyps_11.add_attribute("MktDepth", "952462538"); // 3
        MDFeedTyps_11_set.insert("952462538");
        MDFeedTyps_11.add_attribute("MDBkTyp", "3"); // 3
        MDFeedTyps_11_set.insert("3");
        all_values.push_back(MDFeedTyps_11_set);
        all_compo_names.insert("MDFeedTyps_11_set");

        TrdgSesRules_11.add_element(MDFeedTyps_11);
      }
      TrdSessLstGrp_0.add_element(TrdgSesRules_11);
    }
    elt.add_element(TrdSessLstGrp_0);
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
