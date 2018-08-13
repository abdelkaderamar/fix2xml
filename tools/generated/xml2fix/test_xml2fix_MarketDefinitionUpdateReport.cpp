#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDefinitionUpdateReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDefinitionUpdateReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MktDefUpd" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDefinitionUpdateReport_message_t_0;
  elt.add_attribute("MktRptID", "MarketReportID_t_34199257"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("MarketReportID_t_34199257");
  elt.add_attribute("MktReqID", "MarketReqID_t_1925539845"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("MarketReqID_t_1925539845");
  elt.add_attribute("MktUpdtActn", "M"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("M");
  elt.add_attribute("MktID", "MarketID_t_1974410360"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("MarketID_t_1974410360");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_382617808"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("MarketSegmentID_t_382617808");
  elt.add_attribute("MarketSegmentDesc", "MarketSegmentDesc_t_1717956887"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("MarketSegmentDesc_t_1717956887");
  elt.add_attribute("EncodedMktSegmDescLen", "1795025422"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("1795025422");
  elt.add_attribute("EncodedMktSegmDesc", "EncodedMktSegmDesc_t_1245604690"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("EncodedMktSegmDesc_t_1245604690");
  elt.add_attribute("ParentMktSegmID", "ParentMktSegmID_t_1271708246"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("ParentMktSegmID_t_1271708246");
  elt.add_attribute("Ccy", "JPY"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("JPY");
  elt.add_attribute("TxnTm", "TransactTime_t_668880720"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("TransactTime_t_668880720");
  elt.add_attribute("Txt", "Text_t_938777310"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("Text_t_938777310");
  elt.add_attribute("EncTxtLen", "364093987"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("364093987");
  elt.add_attribute("EncTxt", "EncodedText_t_107626920"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("EncodedText_t_107626920");
  all_values.push_back(MarketDefinitionUpdateReport_message_t_0);
  all_compo_names.insert("MarketDefinitionUpdateReport_message_t");

  { // Hdr
    xml_element Hdr_45{"Hdr"};
    multiset<string> Hdr_45_set;
    Hdr_45.add_attribute("SeqNum", "1982569953"); // 1
    Hdr_45_set.insert("1982569953");
    Hdr_45.add_attribute("SID", "SenderCompID_t_905674153"); // 1
    Hdr_45_set.insert("SenderCompID_t_905674153");
    Hdr_45.add_attribute("TID", "TargetCompID_t_1981376827"); // 1
    Hdr_45_set.insert("TargetCompID_t_1981376827");
    Hdr_45.add_attribute("OBID", "OnBehalfOfCompID_t_536779916"); // 1
    Hdr_45_set.insert("OnBehalfOfCompID_t_536779916");
    Hdr_45.add_attribute("D2ID", "DeliverToCompID_t_611591069"); // 1
    Hdr_45_set.insert("DeliverToCompID_t_611591069");
    Hdr_45.add_attribute("SSub", "SenderSubID_t_656807244"); // 1
    Hdr_45_set.insert("SenderSubID_t_656807244");
    Hdr_45.add_attribute("SLoc", "SenderLocationID_t_1364369244"); // 1
    Hdr_45_set.insert("SenderLocationID_t_1364369244");
    Hdr_45.add_attribute("TSub", "TargetSubID_t_289831932"); // 1
    Hdr_45_set.insert("TargetSubID_t_289831932");
    Hdr_45.add_attribute("TLoc", "TargetLocationID_t_1486776857"); // 1
    Hdr_45_set.insert("TargetLocationID_t_1486776857");
    Hdr_45.add_attribute("OBSub", "OnBehalfOfSubID_t_1862347073"); // 1
    Hdr_45_set.insert("OnBehalfOfSubID_t_1862347073");
    Hdr_45.add_attribute("OBLoc", "OnBehalfOfLocationID_t_663771894"); // 1
    Hdr_45_set.insert("OnBehalfOfLocationID_t_663771894");
    Hdr_45.add_attribute("D2Sub", "DeliverToSubID_t_1205200486"); // 1
    Hdr_45_set.insert("DeliverToSubID_t_1205200486");
    Hdr_45.add_attribute("D2Loc", "DeliverToLocationID_t_2020587529"); // 1
    Hdr_45_set.insert("DeliverToLocationID_t_2020587529");
    Hdr_45.add_attribute("PosDup", "N"); // 1
    Hdr_45_set.insert("N");
    Hdr_45.add_attribute("PosRsnd", "Y"); // 1
    Hdr_45_set.insert("Y");
    Hdr_45.add_attribute("Snt", "SendingTime_t_2084048718"); // 1
    Hdr_45_set.insert("SendingTime_t_2084048718");
    Hdr_45.add_attribute("OrigSnt", "OrigSendingTime_t_794905640"); // 1
    Hdr_45_set.insert("OrigSendingTime_t_794905640");
    Hdr_45.add_attribute("MsgEncd", "MessageEncoding_t_660723466"); // 1
    Hdr_45_set.insert("MessageEncoding_t_660723466");
    all_values.push_back(Hdr_45_set);
    all_compo_names.insert("Hdr_45_set");

    {
      xml_element Hop_45{"Hop"};
      multiset<string> Hop_45_set;
      Hop_45.add_attribute("ID", "HopCompID_t_670736754"); // 2
      Hop_45_set.insert("HopCompID_t_670736754");
      Hop_45.add_attribute("Ref", "621832352"); // 2
      Hop_45_set.insert("621832352");
      Hop_45.add_attribute("Snt", "HopSendingTime_t_1043341275"); // 2
      Hop_45_set.insert("HopSendingTime_t_1043341275");
      all_values.push_back(Hop_45_set);
      all_compo_names.insert("Hop_45_set");

      Hdr_45.add_element(Hop_45);
    }
    elt.add_element(Hdr_45);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_9{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_9_set;
    ApplSeqCtrl_9.add_attribute("ApplID", "ApplID_t_241209994"); // 1
    ApplSeqCtrl_9_set.insert("ApplID_t_241209994");
    ApplSeqCtrl_9.add_attribute("ApplSeqNum", "269374127"); // 1
    ApplSeqCtrl_9_set.insert("269374127");
    ApplSeqCtrl_9.add_attribute("ApplLastSeqNum", "141462317"); // 1
    ApplSeqCtrl_9_set.insert("141462317");
    ApplSeqCtrl_9.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_9_set.insert("true");
    all_values.push_back(ApplSeqCtrl_9_set);
    all_compo_names.insert("ApplSeqCtrl_9_set");

    elt.add_element(ApplSeqCtrl_9);
  } // end ApplSeqCtrl
  { // BaseTrdgRules
    xml_element BaseTrdgRules_3{"BaseTrdgRules"};
    multiset<string> BaseTrdgRules_3_set;
    BaseTrdgRules_3.add_attribute("ExpirationCycle", "0"); // 1
    BaseTrdgRules_3_set.insert("0");
    BaseTrdgRules_3.add_attribute("MinTrdVol", "9682431.510000"); // 1
    BaseTrdgRules_3_set.insert("9682431.510000");
    BaseTrdgRules_3.add_attribute("MaxTrdVol", "343153.120000"); // 1
    BaseTrdgRules_3_set.insert("343153.120000");
    BaseTrdgRules_3.add_attribute("MxPxVar", "14401634.500000"); // 1
    BaseTrdgRules_3_set.insert("14401634.500000");
    BaseTrdgRules_3.add_attribute("ImpldMktInd", "2"); // 1
    BaseTrdgRules_3_set.insert("2");
    BaseTrdgRules_3.add_attribute("TrdCcy", "CAN"); // 1
    BaseTrdgRules_3_set.insert("CAN");
    BaseTrdgRules_3.add_attribute("RndLot", "905276.440000"); // 1
    BaseTrdgRules_3_set.insert("905276.440000");
    BaseTrdgRules_3.add_attribute("MlegModel", "2"); // 1
    BaseTrdgRules_3_set.insert("2");
    BaseTrdgRules_3.add_attribute("MlegPxMeth", "2"); // 1
    BaseTrdgRules_3_set.insert("2");
    BaseTrdgRules_3.add_attribute("PxTyp", "2"); // 1
    BaseTrdgRules_3_set.insert("2");
    all_values.push_back(BaseTrdgRules_3_set);
    all_compo_names.insert("BaseTrdgRules_3_set");

    {
      xml_element TickRules_3{"TickRules"};
      multiset<string> TickRules_3_set;
      TickRules_3.add_attribute("StartTickPxRng", "6326426.550000"); // 2
      TickRules_3_set.insert("6326426.550000");
      TickRules_3.add_attribute("EndTickPxRng", "10289152.680000"); // 2
      TickRules_3_set.insert("10289152.680000");
      TickRules_3.add_attribute("TickIncr", "9919506.460000"); // 2
      TickRules_3_set.insert("9919506.460000");
      TickRules_3.add_attribute("TickRuleTyp", "2"); // 2
      TickRules_3_set.insert("2");
      all_values.push_back(TickRules_3_set);
      all_compo_names.insert("TickRules_3_set");

      BaseTrdgRules_3.add_element(TickRules_3);
    }
    {
      xml_element LotTypeRules_3{"LotTypeRules"};
      multiset<string> LotTypeRules_3_set;
      LotTypeRules_3.add_attribute("LotTyp", "3"); // 2
      LotTypeRules_3_set.insert("3");
      LotTypeRules_3.add_attribute("MinLotSz", "16557225.400000"); // 2
      LotTypeRules_3_set.insert("16557225.400000");
      all_values.push_back(LotTypeRules_3_set);
      all_compo_names.insert("LotTypeRules_3_set");

      BaseTrdgRules_3.add_element(LotTypeRules_3);
    }
    {
      xml_element PxLmts_3{"PxLmts"};
      multiset<string> PxLmts_3_set;
      PxLmts_3.add_attribute("PxLmtTyp", "1"); // 2
      PxLmts_3_set.insert("1");
      PxLmts_3.add_attribute("LowLmtPx", "6168825.750000"); // 2
      PxLmts_3_set.insert("6168825.750000");
      PxLmts_3.add_attribute("HiLmtPx", "2689452.740000"); // 2
      PxLmts_3_set.insert("2689452.740000");
      PxLmts_3.add_attribute("TrdgRefPx", "20598036.190000"); // 2
      PxLmts_3_set.insert("20598036.190000");
      all_values.push_back(PxLmts_3_set);
      all_compo_names.insert("PxLmts_3_set");

      BaseTrdgRules_3.add_element(PxLmts_3);
    }
    elt.add_element(BaseTrdgRules_3);
  } // end BaseTrdgRules
  { // OrdTypRules
    xml_element OrdTypRules_5{"OrdTypRules"};
    multiset<string> OrdTypRules_5_set;
    OrdTypRules_5.add_attribute("OrdTyp", "B"); // 1
    OrdTypRules_5_set.insert("B");
    all_values.push_back(OrdTypRules_5_set);
    all_compo_names.insert("OrdTypRules_5_set");

    elt.add_element(OrdTypRules_5);
  } // end OrdTypRules
  { // OrdTypRules
    xml_element OrdTypRules_6{"OrdTypRules"};
    multiset<string> OrdTypRules_6_set;
    OrdTypRules_6.add_attribute("OrdTyp", "P"); // 1
    OrdTypRules_6_set.insert("P");
    all_values.push_back(OrdTypRules_6_set);
    all_compo_names.insert("OrdTypRules_6_set");

    elt.add_element(OrdTypRules_6);
  } // end OrdTypRules
  { // TmInForceRules
    xml_element TmInForceRules_3{"TmInForceRules"};
    multiset<string> TmInForceRules_3_set;
    TmInForceRules_3.add_attribute("TmInForce", "7"); // 1
    TmInForceRules_3_set.insert("7");
    all_values.push_back(TmInForceRules_3_set);
    all_compo_names.insert("TmInForceRules_3_set");

    elt.add_element(TmInForceRules_3);
  } // end TmInForceRules
  { // TmInForceRules
    xml_element TmInForceRules_4{"TmInForceRules"};
    multiset<string> TmInForceRules_4_set;
    TmInForceRules_4.add_attribute("TmInForce", "3"); // 1
    TmInForceRules_4_set.insert("3");
    all_values.push_back(TmInForceRules_4_set);
    all_compo_names.insert("TmInForceRules_4_set");

    elt.add_element(TmInForceRules_4);
  } // end TmInForceRules
  { // TmInForceRules
    xml_element TmInForceRules_5{"TmInForceRules"};
    multiset<string> TmInForceRules_5_set;
    TmInForceRules_5.add_attribute("TmInForce", "4"); // 1
    TmInForceRules_5_set.insert("4");
    all_values.push_back(TmInForceRules_5_set);
    all_compo_names.insert("TmInForceRules_5_set");

    elt.add_element(TmInForceRules_5);
  } // end TmInForceRules
  { // ExecInstRules
    xml_element ExecInstRules_4{"ExecInstRules"};
    multiset<string> ExecInstRules_4_set;
    ExecInstRules_4.add_attribute("ExecInstValu", "P"); // 1
    ExecInstRules_4_set.insert("P");
    all_values.push_back(ExecInstRules_4_set);
    all_compo_names.insert("ExecInstRules_4_set");

    elt.add_element(ExecInstRules_4);
  } // end ExecInstRules
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
