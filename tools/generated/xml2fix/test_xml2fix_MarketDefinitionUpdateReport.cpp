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
  elt.add_attribute("MktRptID", "MarketReportID_t_91964929"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("MarketReportID_t_91964929");
  elt.add_attribute("MktReqID", "MarketReqID_t_1706319574"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("MarketReqID_t_1706319574");
  elt.add_attribute("MktUpdtActn", "A"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("A");
  elt.add_attribute("MktID", "MarketID_t_97391296"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("MarketID_t_97391296");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1846692074"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("MarketSegmentID_t_1846692074");
  elt.add_attribute("MarketSegmentDesc", "MarketSegmentDesc_t_1120801123"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("MarketSegmentDesc_t_1120801123");
  elt.add_attribute("EncodedMktSegmDescLen", "1322655750"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("1322655750");
  elt.add_attribute("EncodedMktSegmDesc", "EncodedMktSegmDesc_t_292634715"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("EncodedMktSegmDesc_t_292634715");
  elt.add_attribute("ParentMktSegmID", "ParentMktSegmID_t_1090676360"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("ParentMktSegmID_t_1090676360");
  elt.add_attribute("Ccy", "JPY"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("JPY");
  elt.add_attribute("TxnTm", "TransactTime_t_790447609"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("TransactTime_t_790447609");
  elt.add_attribute("Txt", "Text_t_1072718463"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("Text_t_1072718463");
  elt.add_attribute("EncTxtLen", "614310774"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("614310774");
  elt.add_attribute("EncTxt", "EncodedText_t_124197385"); // 0
  MarketDefinitionUpdateReport_message_t_0.insert("EncodedText_t_124197385");
  all_values.push_back(MarketDefinitionUpdateReport_message_t_0);
  all_compo_names.insert("MarketDefinitionUpdateReport_message_t");

  { // Hdr
    xml_element Hdr_45{"Hdr"};
    multiset<string> Hdr_45_set;
    Hdr_45.add_attribute("SeqNum", "717561344"); // 1
    Hdr_45_set.insert("717561344");
    Hdr_45.add_attribute("SID", "SenderCompID_t_1996187388"); // 1
    Hdr_45_set.insert("SenderCompID_t_1996187388");
    Hdr_45.add_attribute("TID", "TargetCompID_t_1856944720"); // 1
    Hdr_45_set.insert("TargetCompID_t_1856944720");
    Hdr_45.add_attribute("OBID", "OnBehalfOfCompID_t_720660916"); // 1
    Hdr_45_set.insert("OnBehalfOfCompID_t_720660916");
    Hdr_45.add_attribute("D2ID", "DeliverToCompID_t_1104554973"); // 1
    Hdr_45_set.insert("DeliverToCompID_t_1104554973");
    Hdr_45.add_attribute("SSub", "SenderSubID_t_146799353"); // 1
    Hdr_45_set.insert("SenderSubID_t_146799353");
    Hdr_45.add_attribute("SLoc", "SenderLocationID_t_85767271"); // 1
    Hdr_45_set.insert("SenderLocationID_t_85767271");
    Hdr_45.add_attribute("TSub", "TargetSubID_t_920930266"); // 1
    Hdr_45_set.insert("TargetSubID_t_920930266");
    Hdr_45.add_attribute("TLoc", "TargetLocationID_t_1518350556"); // 1
    Hdr_45_set.insert("TargetLocationID_t_1518350556");
    Hdr_45.add_attribute("OBSub", "OnBehalfOfSubID_t_447285066"); // 1
    Hdr_45_set.insert("OnBehalfOfSubID_t_447285066");
    Hdr_45.add_attribute("OBLoc", "OnBehalfOfLocationID_t_486297214"); // 1
    Hdr_45_set.insert("OnBehalfOfLocationID_t_486297214");
    Hdr_45.add_attribute("D2Sub", "DeliverToSubID_t_726341394"); // 1
    Hdr_45_set.insert("DeliverToSubID_t_726341394");
    Hdr_45.add_attribute("D2Loc", "DeliverToLocationID_t_633429911"); // 1
    Hdr_45_set.insert("DeliverToLocationID_t_633429911");
    Hdr_45.add_attribute("PosDup", "Y"); // 1
    Hdr_45_set.insert("Y");
    Hdr_45.add_attribute("PosRsnd", "N"); // 1
    Hdr_45_set.insert("N");
    Hdr_45.add_attribute("Snt", "SendingTime_t_1606389902"); // 1
    Hdr_45_set.insert("SendingTime_t_1606389902");
    Hdr_45.add_attribute("OrigSnt", "OrigSendingTime_t_1256317052"); // 1
    Hdr_45_set.insert("OrigSendingTime_t_1256317052");
    Hdr_45.add_attribute("MsgEncd", "MessageEncoding_t_330343324"); // 1
    Hdr_45_set.insert("MessageEncoding_t_330343324");
    all_values.push_back(Hdr_45_set);
    all_compo_names.insert("Hdr_45_set");

    {
      xml_element Hop_45{"Hop"};
      multiset<string> Hop_45_set;
      Hop_45.add_attribute("ID", "HopCompID_t_779764263"); // 2
      Hop_45_set.insert("HopCompID_t_779764263");
      Hop_45.add_attribute("Ref", "1353708348"); // 2
      Hop_45_set.insert("1353708348");
      Hop_45.add_attribute("Snt", "HopSendingTime_t_29551750"); // 2
      Hop_45_set.insert("HopSendingTime_t_29551750");
      all_values.push_back(Hop_45_set);
      all_compo_names.insert("Hop_45_set");

      Hdr_45.add_element(Hop_45);
    }
    elt.add_element(Hdr_45);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_9{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_9_set;
    ApplSeqCtrl_9.add_attribute("ApplID", "ApplID_t_1900565386"); // 1
    ApplSeqCtrl_9_set.insert("ApplID_t_1900565386");
    ApplSeqCtrl_9.add_attribute("ApplSeqNum", "528880451"); // 1
    ApplSeqCtrl_9_set.insert("528880451");
    ApplSeqCtrl_9.add_attribute("ApplLastSeqNum", "322186465"); // 1
    ApplSeqCtrl_9_set.insert("322186465");
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
    BaseTrdgRules_3.add_attribute("MinTrdVol", "5156415.240000"); // 1
    BaseTrdgRules_3_set.insert("5156415.240000");
    BaseTrdgRules_3.add_attribute("MaxTrdVol", "16342057.070000"); // 1
    BaseTrdgRules_3_set.insert("16342057.070000");
    BaseTrdgRules_3.add_attribute("MxPxVar", "7571737.780000"); // 1
    BaseTrdgRules_3_set.insert("7571737.780000");
    BaseTrdgRules_3.add_attribute("ImpldMktInd", "2"); // 1
    BaseTrdgRules_3_set.insert("2");
    BaseTrdgRules_3.add_attribute("TrdCcy", "USD"); // 1
    BaseTrdgRules_3_set.insert("USD");
    BaseTrdgRules_3.add_attribute("RndLot", "9786560.380000"); // 1
    BaseTrdgRules_3_set.insert("9786560.380000");
    BaseTrdgRules_3.add_attribute("MlegModel", "0"); // 1
    BaseTrdgRules_3_set.insert("0");
    BaseTrdgRules_3.add_attribute("MlegPxMeth", "2"); // 1
    BaseTrdgRules_3_set.insert("2");
    BaseTrdgRules_3.add_attribute("PxTyp", "10"); // 1
    BaseTrdgRules_3_set.insert("10");
    all_values.push_back(BaseTrdgRules_3_set);
    all_compo_names.insert("BaseTrdgRules_3_set");

    {
      xml_element TickRules_3{"TickRules"};
      multiset<string> TickRules_3_set;
      TickRules_3.add_attribute("StartTickPxRng", "16146635.180000"); // 2
      TickRules_3_set.insert("16146635.180000");
      TickRules_3.add_attribute("EndTickPxRng", "1336796.620000"); // 2
      TickRules_3_set.insert("1336796.620000");
      TickRules_3.add_attribute("TickIncr", "8566576.290000"); // 2
      TickRules_3_set.insert("8566576.290000");
      TickRules_3.add_attribute("TickRuleTyp", "1"); // 2
      TickRules_3_set.insert("1");
      all_values.push_back(TickRules_3_set);
      all_compo_names.insert("TickRules_3_set");

      BaseTrdgRules_3.add_element(TickRules_3);
    }
    {
      xml_element LotTypeRules_3{"LotTypeRules"};
      multiset<string> LotTypeRules_3_set;
      LotTypeRules_3.add_attribute("LotTyp", "1"); // 2
      LotTypeRules_3_set.insert("1");
      LotTypeRules_3.add_attribute("MinLotSz", "13429548.430000"); // 2
      LotTypeRules_3_set.insert("13429548.430000");
      all_values.push_back(LotTypeRules_3_set);
      all_compo_names.insert("LotTypeRules_3_set");

      BaseTrdgRules_3.add_element(LotTypeRules_3);
    }
    {
      xml_element PxLmts_3{"PxLmts"};
      multiset<string> PxLmts_3_set;
      PxLmts_3.add_attribute("PxLmtTyp", "1"); // 2
      PxLmts_3_set.insert("1");
      PxLmts_3.add_attribute("LowLmtPx", "12143946.390000"); // 2
      PxLmts_3_set.insert("12143946.390000");
      PxLmts_3.add_attribute("HiLmtPx", "3598233.180000"); // 2
      PxLmts_3_set.insert("3598233.180000");
      PxLmts_3.add_attribute("TrdgRefPx", "3358955.710000"); // 2
      PxLmts_3_set.insert("3358955.710000");
      all_values.push_back(PxLmts_3_set);
      all_compo_names.insert("PxLmts_3_set");

      BaseTrdgRules_3.add_element(PxLmts_3);
    }
    elt.add_element(BaseTrdgRules_3);
  } // end BaseTrdgRules
  { // OrdTypRules
    xml_element OrdTypRules_4{"OrdTypRules"};
    multiset<string> OrdTypRules_4_set;
    OrdTypRules_4.add_attribute("OrdTyp", "4"); // 1
    OrdTypRules_4_set.insert("4");
    all_values.push_back(OrdTypRules_4_set);
    all_compo_names.insert("OrdTypRules_4_set");

    elt.add_element(OrdTypRules_4);
  } // end OrdTypRules
  { // TmInForceRules
    xml_element TmInForceRules_3{"TmInForceRules"};
    multiset<string> TmInForceRules_3_set;
    TmInForceRules_3.add_attribute("TmInForce", "6"); // 1
    TmInForceRules_3_set.insert("6");
    all_values.push_back(TmInForceRules_3_set);
    all_compo_names.insert("TmInForceRules_3_set");

    elt.add_element(TmInForceRules_3);
  } // end TmInForceRules
  { // TmInForceRules
    xml_element TmInForceRules_4{"TmInForceRules"};
    multiset<string> TmInForceRules_4_set;
    TmInForceRules_4.add_attribute("TmInForce", "1"); // 1
    TmInForceRules_4_set.insert("1");
    all_values.push_back(TmInForceRules_4_set);
    all_compo_names.insert("TmInForceRules_4_set");

    elt.add_element(TmInForceRules_4);
  } // end TmInForceRules
  { // TmInForceRules
    xml_element TmInForceRules_5{"TmInForceRules"};
    multiset<string> TmInForceRules_5_set;
    TmInForceRules_5.add_attribute("TmInForce", "6"); // 1
    TmInForceRules_5_set.insert("6");
    all_values.push_back(TmInForceRules_5_set);
    all_compo_names.insert("TmInForceRules_5_set");

    elt.add_element(TmInForceRules_5);
  } // end TmInForceRules
  { // ExecInstRules
    xml_element ExecInstRules_3{"ExecInstRules"};
    multiset<string> ExecInstRules_3_set;
    ExecInstRules_3.add_attribute("ExecInstValu", "E"); // 1
    ExecInstRules_3_set.insert("E");
    all_values.push_back(ExecInstRules_3_set);
    all_compo_names.insert("ExecInstRules_3_set");

    elt.add_element(ExecInstRules_3);
  } // end ExecInstRules
  { // ExecInstRules
    xml_element ExecInstRules_4{"ExecInstRules"};
    multiset<string> ExecInstRules_4_set;
    ExecInstRules_4.add_attribute("ExecInstValu", "Z"); // 1
    ExecInstRules_4_set.insert("Z");
    all_values.push_back(ExecInstRules_4_set);
    all_compo_names.insert("ExecInstRules_4_set");

    elt.add_element(ExecInstRules_4);
  } // end ExecInstRules
  { // ExecInstRules
    xml_element ExecInstRules_5{"ExecInstRules"};
    multiset<string> ExecInstRules_5_set;
    ExecInstRules_5.add_attribute("ExecInstValu", "D"); // 1
    ExecInstRules_5_set.insert("D");
    all_values.push_back(ExecInstRules_5_set);
    all_compo_names.insert("ExecInstRules_5_set");

    elt.add_element(ExecInstRules_5);
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
