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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MktDefUpd" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDefinitionUpdateReport_message_t_0;
  elt.add_attribute("MktRptID", "MarketReportID_t_2070877772"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("MarketReportID_t_2070877772");
  elt.add_attribute("MktReqID", "MarketReqID_t_1021696635"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("MarketReqID_t_1021696635");
  elt.add_attribute("MktUpdtActn", "M"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("M");
  elt.add_attribute("MktID", "MarketID_t_1952073744"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("MarketID_t_1952073744");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1065812508"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("MarketSegmentID_t_1065812508");
  elt.add_attribute("MarketSegmentDesc", "MarketSegmentDesc_t_1852592598"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("MarketSegmentDesc_t_1852592598");
  elt.add_attribute("EncodedMktSegmDescLen", "657079993"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("657079993");
  elt.add_attribute("EncodedMktSegmDesc", "EncodedMktSegmDesc_t_1387329505"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("EncodedMktSegmDesc_t_1387329505");
  elt.add_attribute("ParentMktSegmID", "ParentMktSegmID_t_1179683261"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("ParentMktSegmID_t_1179683261");
  elt.add_attribute("Ccy", "CHF"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("CHF");
  elt.add_attribute("TxnTm", "TransactTime_t_2134273450"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("TransactTime_t_2134273450");
  elt.add_attribute("Txt", "Text_t_1637131943"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("Text_t_1637131943");
  elt.add_attribute("EncTxtLen", "1382385100"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("1382385100");
  elt.add_attribute("EncTxt", "EncodedText_t_1302128000"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("EncodedText_t_1302128000");
  all_values.push_back(MarketDefinitionUpdateReport_message_t_0);
  all_compo_names.insert("MarketDefinitionUpdateReport_message_t");

  { // Hdr
    xml_element Hdr_45{"Hdr"};
    multiset<string> Hdr_45_set;
    Hdr_45.add_attribute("SeqNum", "944860717"); // 1
    Hdr_45_set.insert("944860717");
    Hdr_45.add_attribute("SID", "SenderCompID_t_1666816168"); // 1
    Hdr_45_set.insert("SenderCompID_t_1666816168");
    Hdr_45.add_attribute("TID", "TargetCompID_t_1348513453"); // 1
    Hdr_45_set.insert("TargetCompID_t_1348513453");
    Hdr_45.add_attribute("OBID", "OnBehalfOfCompID_t_1485086881"); // 1
    Hdr_45_set.insert("OnBehalfOfCompID_t_1485086881");
    Hdr_45.add_attribute("D2ID", "DeliverToCompID_t_1922152964"); // 1
    Hdr_45_set.insert("DeliverToCompID_t_1922152964");
    Hdr_45.add_attribute("SSub", "SenderSubID_t_605218660"); // 1
    Hdr_45_set.insert("SenderSubID_t_605218660");
    Hdr_45.add_attribute("SLoc", "SenderLocationID_t_454838768"); // 1
    Hdr_45_set.insert("SenderLocationID_t_454838768");
    Hdr_45.add_attribute("TSub", "TargetSubID_t_401987295"); // 1
    Hdr_45_set.insert("TargetSubID_t_401987295");
    Hdr_45.add_attribute("TLoc", "TargetLocationID_t_326800150"); // 1
    Hdr_45_set.insert("TargetLocationID_t_326800150");
    Hdr_45.add_attribute("OBSub", "OnBehalfOfSubID_t_439493014"); // 1
    Hdr_45_set.insert("OnBehalfOfSubID_t_439493014");
    Hdr_45.add_attribute("OBLoc", "OnBehalfOfLocationID_t_785080933"); // 1
    Hdr_45_set.insert("OnBehalfOfLocationID_t_785080933");
    Hdr_45.add_attribute("D2Sub", "DeliverToSubID_t_1205210593"); // 1
    Hdr_45_set.insert("DeliverToSubID_t_1205210593");
    Hdr_45.add_attribute("D2Loc", "DeliverToLocationID_t_575008613"); // 1
    Hdr_45_set.insert("DeliverToLocationID_t_575008613");
    Hdr_45.add_attribute("PosDup", "N"); // 1
    Hdr_45_set.insert("N");
    Hdr_45.add_attribute("PosRsnd", "N"); // 1
    Hdr_45_set.insert("N");
    Hdr_45.add_attribute("Snt", "SendingTime_t_605590899"); // 1
    Hdr_45_set.insert("SendingTime_t_605590899");
    Hdr_45.add_attribute("OrigSnt", "OrigSendingTime_t_889802780"); // 1
    Hdr_45_set.insert("OrigSendingTime_t_889802780");
    Hdr_45.add_attribute("MsgEncd", "MessageEncoding_t_287856108"); // 1
    Hdr_45_set.insert("MessageEncoding_t_287856108");
    all_values.push_back(Hdr_45_set);
    all_compo_names.insert("Hdr_45_set");

    {
      xml_element Hop_45{"Hop"};
      multiset<string> Hop_45_set;
      Hop_45.add_attribute("ID", "HopCompID_t_427923328"); // 2
      Hop_45_set.insert("HopCompID_t_427923328");
      Hop_45.add_attribute("Ref", "694392877"); // 2
      Hop_45_set.insert("694392877");
      Hop_45.add_attribute("Snt", "HopSendingTime_t_1353668616"); // 2
      Hop_45_set.insert("HopSendingTime_t_1353668616");
      all_values.push_back(Hop_45_set);
      all_compo_names.insert("Hop_45_set");

      Hdr_45.add_element(Hop_45);
    }
    elt.add_element(Hdr_45);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_9{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_9_set;
    ApplSeqCtrl_9.add_attribute("ApplID", "ApplID_t_133032278"); // 1
    ApplSeqCtrl_9_set.insert("ApplID_t_133032278");
    ApplSeqCtrl_9.add_attribute("ApplSeqNum", "1351472870"); // 1
    ApplSeqCtrl_9_set.insert("1351472870");
    ApplSeqCtrl_9.add_attribute("ApplLastSeqNum", "593514473"); // 1
    ApplSeqCtrl_9_set.insert("593514473");
    ApplSeqCtrl_9.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_9_set.insert("false");
    all_values.push_back(ApplSeqCtrl_9_set);
    all_compo_names.insert("ApplSeqCtrl_9_set");

    elt.add_element(ApplSeqCtrl_9);
  } // end ApplSeqCtrl
  { // BaseTrdgRules
    xml_element BaseTrdgRules_3{"BaseTrdgRules"};
    multiset<string> BaseTrdgRules_3_set;
    BaseTrdgRules_3.add_attribute("ExpirationCycle", "0"); // 1
    BaseTrdgRules_3_set.insert("0");
    BaseTrdgRules_3.add_attribute("MinTrdVol", "6569400.440000"); // 1
    BaseTrdgRules_3_set.insert("6569400.440000");
    BaseTrdgRules_3.add_attribute("MaxTrdVol", "12995053.410000"); // 1
    BaseTrdgRules_3_set.insert("12995053.410000");
    BaseTrdgRules_3.add_attribute("MxPxVar", "12184378.060000"); // 1
    BaseTrdgRules_3_set.insert("12184378.060000");
    BaseTrdgRules_3.add_attribute("ImpldMktInd", "0"); // 1
    BaseTrdgRules_3_set.insert("0");
    BaseTrdgRules_3.add_attribute("TrdCcy", "CHF"); // 1
    BaseTrdgRules_3_set.insert("CHF");
    BaseTrdgRules_3.add_attribute("RndLot", "15586576.640000"); // 1
    BaseTrdgRules_3_set.insert("15586576.640000");
    BaseTrdgRules_3.add_attribute("MlegModel", "2"); // 1
    BaseTrdgRules_3_set.insert("2");
    BaseTrdgRules_3.add_attribute("MlegPxMeth", "4"); // 1
    BaseTrdgRules_3_set.insert("4");
    BaseTrdgRules_3.add_attribute("PxTyp", "2"); // 1
    BaseTrdgRules_3_set.insert("2");
    all_values.push_back(BaseTrdgRules_3_set);
    all_compo_names.insert("BaseTrdgRules_3_set");

    {
      xml_element TickRules_3{"TickRules"};
      multiset<string> TickRules_3_set;
      TickRules_3.add_attribute("StartTickPxRng", "2603981.590000"); // 2
      TickRules_3_set.insert("2603981.590000");
      TickRules_3.add_attribute("EndTickPxRng", "19557405.240000"); // 2
      TickRules_3_set.insert("19557405.240000");
      TickRules_3.add_attribute("TickIncr", "17353142.760000"); // 2
      TickRules_3_set.insert("17353142.760000");
      TickRules_3.add_attribute("TickRuleTyp", "4"); // 2
      TickRules_3_set.insert("4");
      all_values.push_back(TickRules_3_set);
      all_compo_names.insert("TickRules_3_set");

      BaseTrdgRules_3.add_element(TickRules_3);
    }
    {
      xml_element LotTypeRules_3{"LotTypeRules"};
      multiset<string> LotTypeRules_3_set;
      LotTypeRules_3.add_attribute("LotTyp", "3"); // 2
      LotTypeRules_3_set.insert("3");
      LotTypeRules_3.add_attribute("MinLotSz", "3729115.610000"); // 2
      LotTypeRules_3_set.insert("3729115.610000");
      all_values.push_back(LotTypeRules_3_set);
      all_compo_names.insert("LotTypeRules_3_set");

      BaseTrdgRules_3.add_element(LotTypeRules_3);
    }
    {
      xml_element PxLmts_3{"PxLmts"};
      multiset<string> PxLmts_3_set;
      PxLmts_3.add_attribute("PxLmtTyp", "0"); // 2
      PxLmts_3_set.insert("0");
      PxLmts_3.add_attribute("LowLmtPx", "8227585.030000"); // 2
      PxLmts_3_set.insert("8227585.030000");
      PxLmts_3.add_attribute("HiLmtPx", "13393202.170000"); // 2
      PxLmts_3_set.insert("13393202.170000");
      PxLmts_3.add_attribute("TrdgRefPx", "10585683.740000"); // 2
      PxLmts_3_set.insert("10585683.740000");
      all_values.push_back(PxLmts_3_set);
      all_compo_names.insert("PxLmts_3_set");

      BaseTrdgRules_3.add_element(PxLmts_3);
    }
    elt.add_element(BaseTrdgRules_3);
  } // end BaseTrdgRules
  { // OrdTypRules
    xml_element OrdTypRules_5{"OrdTypRules"};
    multiset<string> OrdTypRules_5_set;
    OrdTypRules_5.add_attribute("OrdTyp", "F"); // 1
    OrdTypRules_5_set.insert("F");
    all_values.push_back(OrdTypRules_5_set);
    all_compo_names.insert("OrdTypRules_5_set");

    elt.add_element(OrdTypRules_5);
  } // end OrdTypRules
  { // OrdTypRules
    xml_element OrdTypRules_6{"OrdTypRules"};
    multiset<string> OrdTypRules_6_set;
    OrdTypRules_6.add_attribute("OrdTyp", "3"); // 1
    OrdTypRules_6_set.insert("3");
    all_values.push_back(OrdTypRules_6_set);
    all_compo_names.insert("OrdTypRules_6_set");

    elt.add_element(OrdTypRules_6);
  } // end OrdTypRules
  { // OrdTypRules
    xml_element OrdTypRules_7{"OrdTypRules"};
    multiset<string> OrdTypRules_7_set;
    OrdTypRules_7.add_attribute("OrdTyp", "4"); // 1
    OrdTypRules_7_set.insert("4");
    all_values.push_back(OrdTypRules_7_set);
    all_compo_names.insert("OrdTypRules_7_set");

    elt.add_element(OrdTypRules_7);
  } // end OrdTypRules
  { // TmInForceRules
    xml_element TmInForceRules_3{"TmInForceRules"};
    multiset<string> TmInForceRules_3_set;
    TmInForceRules_3.add_attribute("TmInForce", "0"); // 1
    TmInForceRules_3_set.insert("0");
    all_values.push_back(TmInForceRules_3_set);
    all_compo_names.insert("TmInForceRules_3_set");

    elt.add_element(TmInForceRules_3);
  } // end TmInForceRules
  { // ExecInstRules
    xml_element ExecInstRules_4{"ExecInstRules"};
    multiset<string> ExecInstRules_4_set;
    ExecInstRules_4.add_attribute("ExecInstValu", "K"); // 1
    ExecInstRules_4_set.insert("K");
    all_values.push_back(ExecInstRules_4_set);
    all_compo_names.insert("ExecInstRules_4_set");

    elt.add_element(ExecInstRules_4);
  } // end ExecInstRules
  { // ExecInstRules
    xml_element ExecInstRules_5{"ExecInstRules"};
    multiset<string> ExecInstRules_5_set;
    ExecInstRules_5.add_attribute("ExecInstValu", "V"); // 1
    ExecInstRules_5_set.insert("V");
    all_values.push_back(ExecInstRules_5_set);
    all_compo_names.insert("ExecInstRules_5_set");

    elt.add_element(ExecInstRules_5);
  } // end ExecInstRules
  { // ExecInstRules
    xml_element ExecInstRules_6{"ExecInstRules"};
    multiset<string> ExecInstRules_6_set;
    ExecInstRules_6.add_attribute("ExecInstValu", "G"); // 1
    ExecInstRules_6_set.insert("G");
    all_values.push_back(ExecInstRules_6_set);
    all_compo_names.insert("ExecInstRules_6_set");

    elt.add_element(ExecInstRules_6);
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
