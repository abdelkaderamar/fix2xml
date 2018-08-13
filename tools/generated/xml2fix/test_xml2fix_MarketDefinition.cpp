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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MktDef" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDefinition_message_t_0;
  elt.add_attribute("MktRptID", "MarketReportID_t_41707022"); // 0
  MarketDefinition_message_t_0.insert("MarketReportID_t_41707022");
  elt.add_attribute("MktReqID", "MarketReqID_t_255083979"); // 0
  MarketDefinition_message_t_0.insert("MarketReqID_t_255083979");
  elt.add_attribute("MktID", "MarketID_t_1186974813"); // 0
  MarketDefinition_message_t_0.insert("MarketID_t_1186974813");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1218440770"); // 0
  MarketDefinition_message_t_0.insert("MarketSegmentID_t_1218440770");
  elt.add_attribute("MarketSegmentDesc", "MarketSegmentDesc_t_520531658"); // 0
  MarketDefinition_message_t_0.insert("MarketSegmentDesc_t_520531658");
  elt.add_attribute("EncodedMktSegmDescLen", "1788676092"); // 0
  MarketDefinition_message_t_0.insert("1788676092");
  elt.add_attribute("EncodedMktSegmDesc", "EncodedMktSegmDesc_t_362425936"); // 0
  MarketDefinition_message_t_0.insert("EncodedMktSegmDesc_t_362425936");
  elt.add_attribute("ParentMktSegmID", "ParentMktSegmID_t_1695068591"); // 0
  MarketDefinition_message_t_0.insert("ParentMktSegmID_t_1695068591");
  elt.add_attribute("Ccy", "JPY"); // 0
  MarketDefinition_message_t_0.insert("JPY");
  elt.add_attribute("TxnTm", "TransactTime_t_404375096"); // 0
  MarketDefinition_message_t_0.insert("TransactTime_t_404375096");
  elt.add_attribute("Txt", "Text_t_735967569"); // 0
  MarketDefinition_message_t_0.insert("Text_t_735967569");
  elt.add_attribute("EncTxtLen", "607247638"); // 0
  MarketDefinition_message_t_0.insert("607247638");
  elt.add_attribute("EncTxt", "EncodedText_t_1273454960"); // 0
  MarketDefinition_message_t_0.insert("EncodedText_t_1273454960");
  all_values.push_back(MarketDefinition_message_t_0);
  all_compo_names.insert("MarketDefinition_message_t");

  { // Hdr
    xml_element Hdr_43{"Hdr"};
    multiset<string> Hdr_43_set;
    Hdr_43.add_attribute("SeqNum", "1505923532"); // 1
    Hdr_43_set.insert("1505923532");
    Hdr_43.add_attribute("SID", "SenderCompID_t_1237947748"); // 1
    Hdr_43_set.insert("SenderCompID_t_1237947748");
    Hdr_43.add_attribute("TID", "TargetCompID_t_198152610"); // 1
    Hdr_43_set.insert("TargetCompID_t_198152610");
    Hdr_43.add_attribute("OBID", "OnBehalfOfCompID_t_214732285"); // 1
    Hdr_43_set.insert("OnBehalfOfCompID_t_214732285");
    Hdr_43.add_attribute("D2ID", "DeliverToCompID_t_1048130004"); // 1
    Hdr_43_set.insert("DeliverToCompID_t_1048130004");
    Hdr_43.add_attribute("SSub", "SenderSubID_t_245946333"); // 1
    Hdr_43_set.insert("SenderSubID_t_245946333");
    Hdr_43.add_attribute("SLoc", "SenderLocationID_t_1468357271"); // 1
    Hdr_43_set.insert("SenderLocationID_t_1468357271");
    Hdr_43.add_attribute("TSub", "TargetSubID_t_307553384"); // 1
    Hdr_43_set.insert("TargetSubID_t_307553384");
    Hdr_43.add_attribute("TLoc", "TargetLocationID_t_809127745"); // 1
    Hdr_43_set.insert("TargetLocationID_t_809127745");
    Hdr_43.add_attribute("OBSub", "OnBehalfOfSubID_t_467994749"); // 1
    Hdr_43_set.insert("OnBehalfOfSubID_t_467994749");
    Hdr_43.add_attribute("OBLoc", "OnBehalfOfLocationID_t_807987197"); // 1
    Hdr_43_set.insert("OnBehalfOfLocationID_t_807987197");
    Hdr_43.add_attribute("D2Sub", "DeliverToSubID_t_1057891391"); // 1
    Hdr_43_set.insert("DeliverToSubID_t_1057891391");
    Hdr_43.add_attribute("D2Loc", "DeliverToLocationID_t_1691976432"); // 1
    Hdr_43_set.insert("DeliverToLocationID_t_1691976432");
    Hdr_43.add_attribute("PosDup", "Y"); // 1
    Hdr_43_set.insert("Y");
    Hdr_43.add_attribute("PosRsnd", "Y"); // 1
    Hdr_43_set.insert("Y");
    Hdr_43.add_attribute("Snt", "SendingTime_t_2137357774"); // 1
    Hdr_43_set.insert("SendingTime_t_2137357774");
    Hdr_43.add_attribute("OrigSnt", "OrigSendingTime_t_1174779076"); // 1
    Hdr_43_set.insert("OrigSendingTime_t_1174779076");
    Hdr_43.add_attribute("MsgEncd", "MessageEncoding_t_1070589138"); // 1
    Hdr_43_set.insert("MessageEncoding_t_1070589138");
    all_values.push_back(Hdr_43_set);
    all_compo_names.insert("Hdr_43_set");

    {
      xml_element Hop_43{"Hop"};
      multiset<string> Hop_43_set;
      Hop_43.add_attribute("ID", "HopCompID_t_244958105"); // 2
      Hop_43_set.insert("HopCompID_t_244958105");
      Hop_43.add_attribute("Ref", "214270242"); // 2
      Hop_43_set.insert("214270242");
      Hop_43.add_attribute("Snt", "HopSendingTime_t_141546260"); // 2
      Hop_43_set.insert("HopSendingTime_t_141546260");
      all_values.push_back(Hop_43_set);
      all_compo_names.insert("Hop_43_set");

      Hdr_43.add_element(Hop_43);
    }
    elt.add_element(Hdr_43);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_8{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_8_set;
    ApplSeqCtrl_8.add_attribute("ApplID", "ApplID_t_765489763"); // 1
    ApplSeqCtrl_8_set.insert("ApplID_t_765489763");
    ApplSeqCtrl_8.add_attribute("ApplSeqNum", "2002946334"); // 1
    ApplSeqCtrl_8_set.insert("2002946334");
    ApplSeqCtrl_8.add_attribute("ApplLastSeqNum", "503972196"); // 1
    ApplSeqCtrl_8_set.insert("503972196");
    ApplSeqCtrl_8.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_8_set.insert("false");
    all_values.push_back(ApplSeqCtrl_8_set);
    all_compo_names.insert("ApplSeqCtrl_8_set");

    elt.add_element(ApplSeqCtrl_8);
  } // end ApplSeqCtrl
  { // BaseTrdgRules
    xml_element BaseTrdgRules_2{"BaseTrdgRules"};
    multiset<string> BaseTrdgRules_2_set;
    BaseTrdgRules_2.add_attribute("ExpirationCycle", "0"); // 1
    BaseTrdgRules_2_set.insert("0");
    BaseTrdgRules_2.add_attribute("MinTrdVol", "2584252.710000"); // 1
    BaseTrdgRules_2_set.insert("2584252.710000");
    BaseTrdgRules_2.add_attribute("MaxTrdVol", "7174498.030000"); // 1
    BaseTrdgRules_2_set.insert("7174498.030000");
    BaseTrdgRules_2.add_attribute("MxPxVar", "7638551.760000"); // 1
    BaseTrdgRules_2_set.insert("7638551.760000");
    BaseTrdgRules_2.add_attribute("ImpldMktInd", "1"); // 1
    BaseTrdgRules_2_set.insert("1");
    BaseTrdgRules_2.add_attribute("TrdCcy", "USD"); // 1
    BaseTrdgRules_2_set.insert("USD");
    BaseTrdgRules_2.add_attribute("RndLot", "21036206.570000"); // 1
    BaseTrdgRules_2_set.insert("21036206.570000");
    BaseTrdgRules_2.add_attribute("MlegModel", "2"); // 1
    BaseTrdgRules_2_set.insert("2");
    BaseTrdgRules_2.add_attribute("MlegPxMeth", "1"); // 1
    BaseTrdgRules_2_set.insert("1");
    BaseTrdgRules_2.add_attribute("PxTyp", "17"); // 1
    BaseTrdgRules_2_set.insert("17");
    all_values.push_back(BaseTrdgRules_2_set);
    all_compo_names.insert("BaseTrdgRules_2_set");

    {
      xml_element TickRules_2{"TickRules"};
      multiset<string> TickRules_2_set;
      TickRules_2.add_attribute("StartTickPxRng", "2875200.590000"); // 2
      TickRules_2_set.insert("2875200.590000");
      TickRules_2.add_attribute("EndTickPxRng", "18053846.160000"); // 2
      TickRules_2_set.insert("18053846.160000");
      TickRules_2.add_attribute("TickIncr", "13118203.970000"); // 2
      TickRules_2_set.insert("13118203.970000");
      TickRules_2.add_attribute("TickRuleTyp", "0"); // 2
      TickRules_2_set.insert("0");
      all_values.push_back(TickRules_2_set);
      all_compo_names.insert("TickRules_2_set");

      BaseTrdgRules_2.add_element(TickRules_2);
    }
    {
      xml_element LotTypeRules_2{"LotTypeRules"};
      multiset<string> LotTypeRules_2_set;
      LotTypeRules_2.add_attribute("LotTyp", "2"); // 2
      LotTypeRules_2_set.insert("2");
      LotTypeRules_2.add_attribute("MinLotSz", "21198075.950000"); // 2
      LotTypeRules_2_set.insert("21198075.950000");
      all_values.push_back(LotTypeRules_2_set);
      all_compo_names.insert("LotTypeRules_2_set");

      BaseTrdgRules_2.add_element(LotTypeRules_2);
    }
    {
      xml_element PxLmts_2{"PxLmts"};
      multiset<string> PxLmts_2_set;
      PxLmts_2.add_attribute("PxLmtTyp", "1"); // 2
      PxLmts_2_set.insert("1");
      PxLmts_2.add_attribute("LowLmtPx", "18178721.490000"); // 2
      PxLmts_2_set.insert("18178721.490000");
      PxLmts_2.add_attribute("HiLmtPx", "6956990.980000"); // 2
      PxLmts_2_set.insert("6956990.980000");
      PxLmts_2.add_attribute("TrdgRefPx", "10359376.640000"); // 2
      PxLmts_2_set.insert("10359376.640000");
      all_values.push_back(PxLmts_2_set);
      all_compo_names.insert("PxLmts_2_set");

      BaseTrdgRules_2.add_element(PxLmts_2);
    }
    elt.add_element(BaseTrdgRules_2);
  } // end BaseTrdgRules
  { // OrdTypRules
    xml_element OrdTypRules_2{"OrdTypRules"};
    multiset<string> OrdTypRules_2_set;
    OrdTypRules_2.add_attribute("OrdTyp", "G"); // 1
    OrdTypRules_2_set.insert("G");
    all_values.push_back(OrdTypRules_2_set);
    all_compo_names.insert("OrdTypRules_2_set");

    elt.add_element(OrdTypRules_2);
  } // end OrdTypRules
  { // OrdTypRules
    xml_element OrdTypRules_3{"OrdTypRules"};
    multiset<string> OrdTypRules_3_set;
    OrdTypRules_3.add_attribute("OrdTyp", "3"); // 1
    OrdTypRules_3_set.insert("3");
    all_values.push_back(OrdTypRules_3_set);
    all_compo_names.insert("OrdTypRules_3_set");

    elt.add_element(OrdTypRules_3);
  } // end OrdTypRules
  { // OrdTypRules
    xml_element OrdTypRules_4{"OrdTypRules"};
    multiset<string> OrdTypRules_4_set;
    OrdTypRules_4.add_attribute("OrdTyp", "5"); // 1
    OrdTypRules_4_set.insert("5");
    all_values.push_back(OrdTypRules_4_set);
    all_compo_names.insert("OrdTypRules_4_set");

    elt.add_element(OrdTypRules_4);
  } // end OrdTypRules
  { // TmInForceRules
    xml_element TmInForceRules_2{"TmInForceRules"};
    multiset<string> TmInForceRules_2_set;
    TmInForceRules_2.add_attribute("TmInForce", "4"); // 1
    TmInForceRules_2_set.insert("4");
    all_values.push_back(TmInForceRules_2_set);
    all_compo_names.insert("TmInForceRules_2_set");

    elt.add_element(TmInForceRules_2);
  } // end TmInForceRules
  { // ExecInstRules
    xml_element ExecInstRules_2{"ExecInstRules"};
    multiset<string> ExecInstRules_2_set;
    ExecInstRules_2.add_attribute("ExecInstValu", "l"); // 1
    ExecInstRules_2_set.insert("l");
    all_values.push_back(ExecInstRules_2_set);
    all_compo_names.insert("ExecInstRules_2_set");

    elt.add_element(ExecInstRules_2);
  } // end ExecInstRules
  { // ExecInstRules
    xml_element ExecInstRules_3{"ExecInstRules"};
    multiset<string> ExecInstRules_3_set;
    ExecInstRules_3.add_attribute("ExecInstValu", "3"); // 1
    ExecInstRules_3_set.insert("3");
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
