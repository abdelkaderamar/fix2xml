#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDefinition.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDefinition_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MktDef" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDefinition_message_t_0;
  elt.add_attribute("MktRptID", "MarketReportID_t_1776207757"); // 0
  MarketDefinition_message_t_0.insert("MarketReportID_t_1776207757");
  elt.add_attribute("MktReqID", "MarketReqID_t_608246340"); // 0
  MarketDefinition_message_t_0.insert("MarketReqID_t_608246340");
  elt.add_attribute("MktID", "MarketID_t_2048857537"); // 0
  MarketDefinition_message_t_0.insert("MarketID_t_2048857537");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1162565244"); // 0
  MarketDefinition_message_t_0.insert("MarketSegmentID_t_1162565244");
  elt.add_attribute("MarketSegmentDesc", "MarketSegmentDesc_t_152478120"); // 0
  MarketDefinition_message_t_0.insert("MarketSegmentDesc_t_152478120");
  elt.add_attribute("EncodedMktSegmDescLen", "195297257"); // 0
  MarketDefinition_message_t_0.insert("195297257");
  elt.add_attribute("EncodedMktSegmDesc", "EncodedMktSegmDesc_t_2042577037"); // 0
  MarketDefinition_message_t_0.insert("EncodedMktSegmDesc_t_2042577037");
  elt.add_attribute("ParentMktSegmID", "ParentMktSegmID_t_194342925"); // 0
  MarketDefinition_message_t_0.insert("ParentMktSegmID_t_194342925");
  elt.add_attribute("Ccy", "GBP"); // 0
  MarketDefinition_message_t_0.insert("GBP");
  elt.add_attribute("TxnTm", "TransactTime_t_1500771408"); // 0
  MarketDefinition_message_t_0.insert("TransactTime_t_1500771408");
  elt.add_attribute("Txt", "Text_t_43936473"); // 0
  MarketDefinition_message_t_0.insert("Text_t_43936473");
  elt.add_attribute("EncTxtLen", "224661592"); // 0
  MarketDefinition_message_t_0.insert("224661592");
  elt.add_attribute("EncTxt", "EncodedText_t_35701738"); // 0
  MarketDefinition_message_t_0.insert("EncodedText_t_35701738");
  all_values.push_back(MarketDefinition_message_t_0);
  all_compo_names.insert("MarketDefinition_message_t");

  { // Hdr
    xml_element Hdr_43{"Hdr"};
    multiset<string> Hdr_43_set;
    Hdr_43.add_attribute("SeqNum", "524348259"); // 1
    Hdr_43_set.insert("524348259");
    Hdr_43.add_attribute("SID", "SenderCompID_t_2140800746"); // 1
    Hdr_43_set.insert("SenderCompID_t_2140800746");
    Hdr_43.add_attribute("TID", "TargetCompID_t_880732131"); // 1
    Hdr_43_set.insert("TargetCompID_t_880732131");
    Hdr_43.add_attribute("OBID", "OnBehalfOfCompID_t_803302109"); // 1
    Hdr_43_set.insert("OnBehalfOfCompID_t_803302109");
    Hdr_43.add_attribute("D2ID", "DeliverToCompID_t_617575372"); // 1
    Hdr_43_set.insert("DeliverToCompID_t_617575372");
    Hdr_43.add_attribute("SSub", "SenderSubID_t_517782892"); // 1
    Hdr_43_set.insert("SenderSubID_t_517782892");
    Hdr_43.add_attribute("SLoc", "SenderLocationID_t_1037100271"); // 1
    Hdr_43_set.insert("SenderLocationID_t_1037100271");
    Hdr_43.add_attribute("TSub", "TargetSubID_t_1005434188"); // 1
    Hdr_43_set.insert("TargetSubID_t_1005434188");
    Hdr_43.add_attribute("TLoc", "TargetLocationID_t_479272500"); // 1
    Hdr_43_set.insert("TargetLocationID_t_479272500");
    Hdr_43.add_attribute("OBSub", "OnBehalfOfSubID_t_1491995630"); // 1
    Hdr_43_set.insert("OnBehalfOfSubID_t_1491995630");
    Hdr_43.add_attribute("OBLoc", "OnBehalfOfLocationID_t_401075455"); // 1
    Hdr_43_set.insert("OnBehalfOfLocationID_t_401075455");
    Hdr_43.add_attribute("D2Sub", "DeliverToSubID_t_1254556528"); // 1
    Hdr_43_set.insert("DeliverToSubID_t_1254556528");
    Hdr_43.add_attribute("D2Loc", "DeliverToLocationID_t_437892987"); // 1
    Hdr_43_set.insert("DeliverToLocationID_t_437892987");
    Hdr_43.add_attribute("PosDup", "Y"); // 1
    Hdr_43_set.insert("Y");
    Hdr_43.add_attribute("PosRsnd", "N"); // 1
    Hdr_43_set.insert("N");
    Hdr_43.add_attribute("Snt", "SendingTime_t_1283442642"); // 1
    Hdr_43_set.insert("SendingTime_t_1283442642");
    Hdr_43.add_attribute("OrigSnt", "OrigSendingTime_t_42458426"); // 1
    Hdr_43_set.insert("OrigSendingTime_t_42458426");
    Hdr_43.add_attribute("MsgEncd", "MessageEncoding_t_320676779"); // 1
    Hdr_43_set.insert("MessageEncoding_t_320676779");
    all_values.push_back(Hdr_43_set);
    all_compo_names.insert("Hdr_43_set");

    {
      xml_element Hop_43{"Hop"};
      multiset<string> Hop_43_set;
      Hop_43.add_attribute("ID", "HopCompID_t_1891688982"); // 2
      Hop_43_set.insert("HopCompID_t_1891688982");
      Hop_43.add_attribute("Ref", "2091315963"); // 2
      Hop_43_set.insert("2091315963");
      Hop_43.add_attribute("Snt", "HopSendingTime_t_1483242023"); // 2
      Hop_43_set.insert("HopSendingTime_t_1483242023");
      all_values.push_back(Hop_43_set);
      all_compo_names.insert("Hop_43_set");

      Hdr_43.add_element(Hop_43);
    }
    elt.add_element(Hdr_43);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_8{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_8_set;
    ApplSeqCtrl_8.add_attribute("ApplID", "ApplID_t_2044167102"); // 1
    ApplSeqCtrl_8_set.insert("ApplID_t_2044167102");
    ApplSeqCtrl_8.add_attribute("ApplSeqNum", "139129572"); // 1
    ApplSeqCtrl_8_set.insert("139129572");
    ApplSeqCtrl_8.add_attribute("ApplLastSeqNum", "1378335412"); // 1
    ApplSeqCtrl_8_set.insert("1378335412");
    ApplSeqCtrl_8.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_8_set.insert("true");
    all_values.push_back(ApplSeqCtrl_8_set);
    all_compo_names.insert("ApplSeqCtrl_8_set");

    elt.add_element(ApplSeqCtrl_8);
  } // end ApplSeqCtrl
  { // BaseTrdgRules
    xml_element BaseTrdgRules_2{"BaseTrdgRules"};
    multiset<string> BaseTrdgRules_2_set;
    BaseTrdgRules_2.add_attribute("ExpirationCycle", "1"); // 1
    BaseTrdgRules_2_set.insert("1");
    BaseTrdgRules_2.add_attribute("MinTrdVol", "2774011.240000"); // 1
    BaseTrdgRules_2_set.insert("2774011.240000");
    BaseTrdgRules_2.add_attribute("MaxTrdVol", "15917977.880000"); // 1
    BaseTrdgRules_2_set.insert("15917977.880000");
    BaseTrdgRules_2.add_attribute("MxPxVar", "10152303.970000"); // 1
    BaseTrdgRules_2_set.insert("10152303.970000");
    BaseTrdgRules_2.add_attribute("ImpldMktInd", "1"); // 1
    BaseTrdgRules_2_set.insert("1");
    BaseTrdgRules_2.add_attribute("TrdCcy", "CAN"); // 1
    BaseTrdgRules_2_set.insert("CAN");
    BaseTrdgRules_2.add_attribute("RndLot", "4953798.150000"); // 1
    BaseTrdgRules_2_set.insert("4953798.150000");
    BaseTrdgRules_2.add_attribute("MlegModel", "1"); // 1
    BaseTrdgRules_2_set.insert("1");
    BaseTrdgRules_2.add_attribute("MlegPxMeth", "2"); // 1
    BaseTrdgRules_2_set.insert("2");
    BaseTrdgRules_2.add_attribute("PxTyp", "15"); // 1
    BaseTrdgRules_2_set.insert("15");
    all_values.push_back(BaseTrdgRules_2_set);
    all_compo_names.insert("BaseTrdgRules_2_set");

    {
      xml_element TickRules_2{"TickRules"};
      multiset<string> TickRules_2_set;
      TickRules_2.add_attribute("StartTickPxRng", "8785309.020000"); // 2
      TickRules_2_set.insert("8785309.020000");
      TickRules_2.add_attribute("EndTickPxRng", "12324973.890000"); // 2
      TickRules_2_set.insert("12324973.890000");
      TickRules_2.add_attribute("TickIncr", "21183893.750000"); // 2
      TickRules_2_set.insert("21183893.750000");
      TickRules_2.add_attribute("TickRuleTyp", "2"); // 2
      TickRules_2_set.insert("2");
      all_values.push_back(TickRules_2_set);
      all_compo_names.insert("TickRules_2_set");

      BaseTrdgRules_2.add_element(TickRules_2);
    }
    {
      xml_element LotTypeRules_2{"LotTypeRules"};
      multiset<string> LotTypeRules_2_set;
      LotTypeRules_2.add_attribute("LotTyp", "4"); // 2
      LotTypeRules_2_set.insert("4");
      LotTypeRules_2.add_attribute("MinLotSz", "3719811.820000"); // 2
      LotTypeRules_2_set.insert("3719811.820000");
      all_values.push_back(LotTypeRules_2_set);
      all_compo_names.insert("LotTypeRules_2_set");

      BaseTrdgRules_2.add_element(LotTypeRules_2);
    }
    {
      xml_element PxLmts_2{"PxLmts"};
      multiset<string> PxLmts_2_set;
      PxLmts_2.add_attribute("PxLmtTyp", "0"); // 2
      PxLmts_2_set.insert("0");
      PxLmts_2.add_attribute("LowLmtPx", "10149023.590000"); // 2
      PxLmts_2_set.insert("10149023.590000");
      PxLmts_2.add_attribute("HiLmtPx", "19032593.070000"); // 2
      PxLmts_2_set.insert("19032593.070000");
      PxLmts_2.add_attribute("TrdgRefPx", "11568289.530000"); // 2
      PxLmts_2_set.insert("11568289.530000");
      all_values.push_back(PxLmts_2_set);
      all_compo_names.insert("PxLmts_2_set");

      BaseTrdgRules_2.add_element(PxLmts_2);
    }
    elt.add_element(BaseTrdgRules_2);
  } // end BaseTrdgRules
  { // OrdTypRules
    xml_element OrdTypRules_2{"OrdTypRules"};
    multiset<string> OrdTypRules_2_set;
    OrdTypRules_2.add_attribute("OrdTyp", "6"); // 1
    OrdTypRules_2_set.insert("6");
    all_values.push_back(OrdTypRules_2_set);
    all_compo_names.insert("OrdTypRules_2_set");

    elt.add_element(OrdTypRules_2);
  } // end OrdTypRules
  { // OrdTypRules
    xml_element OrdTypRules_3{"OrdTypRules"};
    multiset<string> OrdTypRules_3_set;
    OrdTypRules_3.add_attribute("OrdTyp", "L"); // 1
    OrdTypRules_3_set.insert("L");
    all_values.push_back(OrdTypRules_3_set);
    all_compo_names.insert("OrdTypRules_3_set");

    elt.add_element(OrdTypRules_3);
  } // end OrdTypRules
  { // OrdTypRules
    xml_element OrdTypRules_4{"OrdTypRules"};
    multiset<string> OrdTypRules_4_set;
    OrdTypRules_4.add_attribute("OrdTyp", "Q"); // 1
    OrdTypRules_4_set.insert("Q");
    all_values.push_back(OrdTypRules_4_set);
    all_compo_names.insert("OrdTypRules_4_set");

    elt.add_element(OrdTypRules_4);
  } // end OrdTypRules
  { // TmInForceRules
    xml_element TmInForceRules_2{"TmInForceRules"};
    multiset<string> TmInForceRules_2_set;
    TmInForceRules_2.add_attribute("TmInForce", "8"); // 1
    TmInForceRules_2_set.insert("8");
    all_values.push_back(TmInForceRules_2_set);
    all_compo_names.insert("TmInForceRules_2_set");

    elt.add_element(TmInForceRules_2);
  } // end TmInForceRules
  { // ExecInstRules
    xml_element ExecInstRules_2{"ExecInstRules"};
    multiset<string> ExecInstRules_2_set;
    ExecInstRules_2.add_attribute("ExecInstValu", "i"); // 1
    ExecInstRules_2_set.insert("i");
    all_values.push_back(ExecInstRules_2_set);
    all_compo_names.insert("ExecInstRules_2_set");

    elt.add_element(ExecInstRules_2);
  } // end ExecInstRules
  { // ExecInstRules
    xml_element ExecInstRules_3{"ExecInstRules"};
    multiset<string> ExecInstRules_3_set;
    ExecInstRules_3.add_attribute("ExecInstValu", "J"); // 1
    ExecInstRules_3_set.insert("J");
    all_values.push_back(ExecInstRules_3_set);
    all_compo_names.insert("ExecInstRules_3_set");

    elt.add_element(ExecInstRules_3);
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
