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
  elt.add_attribute("MktRptID", "MarketReportID_t_1232493047"); // 0
  MarketDefinition_message_t_0.insert("MarketReportID_t_1232493047");
  elt.add_attribute("MktReqID", "MarketReqID_t_2118210173"); // 0
  MarketDefinition_message_t_0.insert("MarketReqID_t_2118210173");
  elt.add_attribute("MktID", "MarketID_t_746378424"); // 0
  MarketDefinition_message_t_0.insert("MarketID_t_746378424");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_142810641"); // 0
  MarketDefinition_message_t_0.insert("MarketSegmentID_t_142810641");
  elt.add_attribute("MarketSegmentDesc", "MarketSegmentDesc_t_1950207818"); // 0
  MarketDefinition_message_t_0.insert("MarketSegmentDesc_t_1950207818");
  elt.add_attribute("EncodedMktSegmDescLen", "2038445872"); // 0
  MarketDefinition_message_t_0.insert("2038445872");
  elt.add_attribute("EncodedMktSegmDesc", "EncodedMktSegmDesc_t_628321740"); // 0
  MarketDefinition_message_t_0.insert("EncodedMktSegmDesc_t_628321740");
  elt.add_attribute("ParentMktSegmID", "ParentMktSegmID_t_1973834861"); // 0
  MarketDefinition_message_t_0.insert("ParentMktSegmID_t_1973834861");
  elt.add_attribute("Ccy", "USD"); // 0
  MarketDefinition_message_t_0.insert("USD");
  elt.add_attribute("TxnTm", "TransactTime_t_1001823913"); // 0
  MarketDefinition_message_t_0.insert("TransactTime_t_1001823913");
  elt.add_attribute("Txt", "Text_t_1707447538"); // 0
  MarketDefinition_message_t_0.insert("Text_t_1707447538");
  elt.add_attribute("EncTxtLen", "1034118881"); // 0
  MarketDefinition_message_t_0.insert("1034118881");
  elt.add_attribute("EncTxt", "EncodedText_t_1212641317"); // 0
  MarketDefinition_message_t_0.insert("EncodedText_t_1212641317");
  all_values.push_back(MarketDefinition_message_t_0);
  all_compo_names.insert("MarketDefinition_message_t");

  { // Hdr
    xml_element Hdr_43{"Hdr"};
    multiset<string> Hdr_43_set;
    Hdr_43.add_attribute("SeqNum", "2051566163"); // 1
    Hdr_43_set.insert("2051566163");
    Hdr_43.add_attribute("SID", "SenderCompID_t_85925742"); // 1
    Hdr_43_set.insert("SenderCompID_t_85925742");
    Hdr_43.add_attribute("TID", "TargetCompID_t_440985526"); // 1
    Hdr_43_set.insert("TargetCompID_t_440985526");
    Hdr_43.add_attribute("OBID", "OnBehalfOfCompID_t_617535382"); // 1
    Hdr_43_set.insert("OnBehalfOfCompID_t_617535382");
    Hdr_43.add_attribute("D2ID", "DeliverToCompID_t_483073760"); // 1
    Hdr_43_set.insert("DeliverToCompID_t_483073760");
    Hdr_43.add_attribute("SSub", "SenderSubID_t_1060437368"); // 1
    Hdr_43_set.insert("SenderSubID_t_1060437368");
    Hdr_43.add_attribute("SLoc", "SenderLocationID_t_600560685"); // 1
    Hdr_43_set.insert("SenderLocationID_t_600560685");
    Hdr_43.add_attribute("TSub", "TargetSubID_t_1151233740"); // 1
    Hdr_43_set.insert("TargetSubID_t_1151233740");
    Hdr_43.add_attribute("TLoc", "TargetLocationID_t_834033089"); // 1
    Hdr_43_set.insert("TargetLocationID_t_834033089");
    Hdr_43.add_attribute("OBSub", "OnBehalfOfSubID_t_82138326"); // 1
    Hdr_43_set.insert("OnBehalfOfSubID_t_82138326");
    Hdr_43.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1634404655"); // 1
    Hdr_43_set.insert("OnBehalfOfLocationID_t_1634404655");
    Hdr_43.add_attribute("D2Sub", "DeliverToSubID_t_1188467595"); // 1
    Hdr_43_set.insert("DeliverToSubID_t_1188467595");
    Hdr_43.add_attribute("D2Loc", "DeliverToLocationID_t_1197194011"); // 1
    Hdr_43_set.insert("DeliverToLocationID_t_1197194011");
    Hdr_43.add_attribute("PosDup", "Y"); // 1
    Hdr_43_set.insert("Y");
    Hdr_43.add_attribute("PosRsnd", "N"); // 1
    Hdr_43_set.insert("N");
    Hdr_43.add_attribute("Snt", "SendingTime_t_853251881"); // 1
    Hdr_43_set.insert("SendingTime_t_853251881");
    Hdr_43.add_attribute("OrigSnt", "OrigSendingTime_t_962188095"); // 1
    Hdr_43_set.insert("OrigSendingTime_t_962188095");
    Hdr_43.add_attribute("MsgEncd", "MessageEncoding_t_448705706"); // 1
    Hdr_43_set.insert("MessageEncoding_t_448705706");
    all_values.push_back(Hdr_43_set);
    all_compo_names.insert("Hdr_43_set");

    {
      xml_element Hop_43{"Hop"};
      multiset<string> Hop_43_set;
      Hop_43.add_attribute("ID", "HopCompID_t_823978406"); // 2
      Hop_43_set.insert("HopCompID_t_823978406");
      Hop_43.add_attribute("Ref", "1708566520"); // 2
      Hop_43_set.insert("1708566520");
      Hop_43.add_attribute("Snt", "HopSendingTime_t_591516347"); // 2
      Hop_43_set.insert("HopSendingTime_t_591516347");
      all_values.push_back(Hop_43_set);
      all_compo_names.insert("Hop_43_set");

      Hdr_43.add_element(Hop_43);
    }
    elt.add_element(Hdr_43);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_8{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_8_set;
    ApplSeqCtrl_8.add_attribute("ApplID", "ApplID_t_626702576"); // 1
    ApplSeqCtrl_8_set.insert("ApplID_t_626702576");
    ApplSeqCtrl_8.add_attribute("ApplSeqNum", "1599528744"); // 1
    ApplSeqCtrl_8_set.insert("1599528744");
    ApplSeqCtrl_8.add_attribute("ApplLastSeqNum", "1219838087"); // 1
    ApplSeqCtrl_8_set.insert("1219838087");
    ApplSeqCtrl_8.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_8_set.insert("false");
    all_values.push_back(ApplSeqCtrl_8_set);
    all_compo_names.insert("ApplSeqCtrl_8_set");

    elt.add_element(ApplSeqCtrl_8);
  } // end ApplSeqCtrl
  { // BaseTrdgRules
    xml_element BaseTrdgRules_2{"BaseTrdgRules"};
    multiset<string> BaseTrdgRules_2_set;
    BaseTrdgRules_2.add_attribute("ExpirationCycle", "2"); // 1
    BaseTrdgRules_2_set.insert("2");
    BaseTrdgRules_2.add_attribute("MinTrdVol", "9026219.550000"); // 1
    BaseTrdgRules_2_set.insert("9026219.550000");
    BaseTrdgRules_2.add_attribute("MaxTrdVol", "14548777.020000"); // 1
    BaseTrdgRules_2_set.insert("14548777.020000");
    BaseTrdgRules_2.add_attribute("MxPxVar", "18773796.600000"); // 1
    BaseTrdgRules_2_set.insert("18773796.600000");
    BaseTrdgRules_2.add_attribute("ImpldMktInd", "0"); // 1
    BaseTrdgRules_2_set.insert("0");
    BaseTrdgRules_2.add_attribute("TrdCcy", "CHF"); // 1
    BaseTrdgRules_2_set.insert("CHF");
    BaseTrdgRules_2.add_attribute("RndLot", "20226665.780000"); // 1
    BaseTrdgRules_2_set.insert("20226665.780000");
    BaseTrdgRules_2.add_attribute("MlegModel", "1"); // 1
    BaseTrdgRules_2_set.insert("1");
    BaseTrdgRules_2.add_attribute("MlegPxMeth", "0"); // 1
    BaseTrdgRules_2_set.insert("0");
    BaseTrdgRules_2.add_attribute("PxTyp", "8"); // 1
    BaseTrdgRules_2_set.insert("8");
    all_values.push_back(BaseTrdgRules_2_set);
    all_compo_names.insert("BaseTrdgRules_2_set");

    {
      xml_element TickRules_2{"TickRules"};
      multiset<string> TickRules_2_set;
      TickRules_2.add_attribute("StartTickPxRng", "20214582.670000"); // 2
      TickRules_2_set.insert("20214582.670000");
      TickRules_2.add_attribute("EndTickPxRng", "8520745.950000"); // 2
      TickRules_2_set.insert("8520745.950000");
      TickRules_2.add_attribute("TickIncr", "15094904.310000"); // 2
      TickRules_2_set.insert("15094904.310000");
      TickRules_2.add_attribute("TickRuleTyp", "3"); // 2
      TickRules_2_set.insert("3");
      all_values.push_back(TickRules_2_set);
      all_compo_names.insert("TickRules_2_set");

      BaseTrdgRules_2.add_element(TickRules_2);
    }
    {
      xml_element LotTypeRules_2{"LotTypeRules"};
      multiset<string> LotTypeRules_2_set;
      LotTypeRules_2.add_attribute("LotTyp", "2"); // 2
      LotTypeRules_2_set.insert("2");
      LotTypeRules_2.add_attribute("MinLotSz", "9964114.390000"); // 2
      LotTypeRules_2_set.insert("9964114.390000");
      all_values.push_back(LotTypeRules_2_set);
      all_compo_names.insert("LotTypeRules_2_set");

      BaseTrdgRules_2.add_element(LotTypeRules_2);
    }
    {
      xml_element PxLmts_2{"PxLmts"};
      multiset<string> PxLmts_2_set;
      PxLmts_2.add_attribute("PxLmtTyp", "1"); // 2
      PxLmts_2_set.insert("1");
      PxLmts_2.add_attribute("LowLmtPx", "21314069.320000"); // 2
      PxLmts_2_set.insert("21314069.320000");
      PxLmts_2.add_attribute("HiLmtPx", "19721106.980000"); // 2
      PxLmts_2_set.insert("19721106.980000");
      PxLmts_2.add_attribute("TrdgRefPx", "11126879.610000"); // 2
      PxLmts_2_set.insert("11126879.610000");
      all_values.push_back(PxLmts_2_set);
      all_compo_names.insert("PxLmts_2_set");

      BaseTrdgRules_2.add_element(PxLmts_2);
    }
    elt.add_element(BaseTrdgRules_2);
  } // end BaseTrdgRules
  { // OrdTypRules
    xml_element OrdTypRules_2{"OrdTypRules"};
    multiset<string> OrdTypRules_2_set;
    OrdTypRules_2.add_attribute("OrdTyp", "B"); // 1
    OrdTypRules_2_set.insert("B");
    all_values.push_back(OrdTypRules_2_set);
    all_compo_names.insert("OrdTypRules_2_set");

    elt.add_element(OrdTypRules_2);
  } // end OrdTypRules
  { // OrdTypRules
    xml_element OrdTypRules_3{"OrdTypRules"};
    multiset<string> OrdTypRules_3_set;
    OrdTypRules_3.add_attribute("OrdTyp", "C"); // 1
    OrdTypRules_3_set.insert("C");
    all_values.push_back(OrdTypRules_3_set);
    all_compo_names.insert("OrdTypRules_3_set");

    elt.add_element(OrdTypRules_3);
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
    ExecInstRules_2.add_attribute("ExecInstValu", "h"); // 1
    ExecInstRules_2_set.insert("h");
    all_values.push_back(ExecInstRules_2_set);
    all_compo_names.insert("ExecInstRules_2_set");

    elt.add_element(ExecInstRules_2);
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
