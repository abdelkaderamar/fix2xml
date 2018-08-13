#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderCancelReplaceRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderCancelReplaceRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdCxlRplcReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderCancelReplaceRequest_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_2129659795"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("OrderID_t_2129659795");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_561681861"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("TradeOriginationDate_t_561681861");
  elt.add_attribute("TrdDt", "TradeDate_t_316231027"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("TradeDate_t_316231027");
  elt.add_attribute("OrigID", "OrigClOrdID_t_1810929937"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("OrigClOrdID_t_1810929937");
  elt.add_attribute("ID", "ClOrdID_t_1185777886"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ClOrdID_t_1185777886");
  elt.add_attribute("ID2", "SecondaryClOrdID_t_39134854"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("SecondaryClOrdID_t_39134854");
  elt.add_attribute("LnkID", "ClOrdLinkID_t_1479563312"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ClOrdLinkID_t_1479563312");
  elt.add_attribute("ListID", "ListID_t_2124243022"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ListID_t_2124243022");
  elt.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_1576374877"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("OrigOrdModTime_t_1576374877");
  elt.add_attribute("Acct", "Account_t_1164206784"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("Account_t_1164206784");
  elt.add_attribute("AcctIDSrc", "1"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("1");
  elt.add_attribute("AcctTyp", "3"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("3");
  elt.add_attribute("DayBkngInst", "2"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("BkngUnit", "2"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("PreallocMeth", "1"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("1");
  elt.add_attribute("AllocID", "AllocID_t_1712207437"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("AllocID_t_1712207437");
  elt.add_attribute("SettlTyp", "6"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("6");
  elt.add_attribute("SettlDt", "SettlDate_t_2135373289"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("SettlDate_t_2135373289");
  elt.add_attribute("CshMgn", "1"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("1");
  elt.add_attribute("ClrFeeInd", "B"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("B");
  elt.add_attribute("HandlInst", "3"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("3");
  elt.add_attribute("ExecInst", "D"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("D");
  elt.add_attribute("MinQty", "5714169.810000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("5714169.810000");
  elt.add_attribute("MtchInc", "11289509.790000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("11289509.790000");
  elt.add_attribute("MxPxLvls", "662066470"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("662066470");
  elt.add_attribute("MaxFloor", "5824193.650000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("5824193.650000");
  elt.add_attribute("ExDest", "ExDestination_t_1631186970"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ExDestination_t_1631186970");
  elt.add_attribute("ExDestIDSrc", "D"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("D");
  elt.add_attribute("Side", "C"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("C");
  elt.add_attribute("TxnTm", "TransactTime_t_1642736504"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("TransactTime_t_1642736504");
  elt.add_attribute("QtyTyp", "2"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("Typ", "P"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("P");
  elt.add_attribute("PxTyp", "17"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("17");
  elt.add_attribute("Px", "19545390.900000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("19545390.900000");
  elt.add_attribute("PxPrtScp", "3"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("3");
  elt.add_attribute("StopPx", "12427126.030000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("12427126.030000");
  elt.add_attribute("TgtStrategy", "2"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_1441653840"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("TargetStrategyParameters_t_1441653840");
  elt.add_attribute("ParticipationRt", "12194719.780000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("12194719.780000");
  elt.add_attribute("ComplianceID", "ComplianceID_t_1422565173"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ComplianceID_t_1422565173");
  elt.add_attribute("SolFlag", "N"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("N");
  elt.add_attribute("Ccy", "EUR"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("EUR");
  elt.add_attribute("TmInForce", "5"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("5");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_1611621397"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("EffectiveTime_t_1611621397");
  elt.add_attribute("ExpireDt", "ExpireDate_t_1261966567"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ExpireDate_t_1261966567");
  elt.add_attribute("ExpireTm", "ExpireTime_t_1719672542"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ExpireTime_t_1719672542");
  elt.add_attribute("GTBkngInst", "2"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("Cpcty", "A"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("A");
  elt.add_attribute("Rstctions", "5"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("5");
  elt.add_attribute("PrTrdAnon", "false"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("false");
  elt.add_attribute("CustCpcty", "4"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("4");
  elt.add_attribute("ForexReq", "Y"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("Y");
  elt.add_attribute("SettlCcy", "EUR"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("EUR");
  elt.add_attribute("BkngTyp", "0"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("0");
  elt.add_attribute("Txt", "Text_t_1519406860"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("Text_t_1519406860");
  elt.add_attribute("EncTxtLen", "169332041"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("169332041");
  elt.add_attribute("EncTxt", "EncodedText_t_605348864"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("EncodedText_t_605348864");
  elt.add_attribute("SettlDt2", "SettlDate2_t_1835874951"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("SettlDate2_t_1835874951");
  elt.add_attribute("Qty2", "18120685.450000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("18120685.450000");
  elt.add_attribute("Px2", "961732.790000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("961732.790000");
  elt.add_attribute("PosEfct", "O"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("O");
  elt.add_attribute("Covered", "0"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("0");
  elt.add_attribute("MaxShow", "20507123.690000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("20507123.690000");
  elt.add_attribute("LocReqd", "Y"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("Y");
  elt.add_attribute("CxllationRights", "O"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("O");
  elt.add_attribute("MnyLaunderingStat", "1"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("1");
  elt.add_attribute("RegistID", "RegistID_t_1390779909"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("RegistID_t_1390779909");
  elt.add_attribute("Designation", "Designation_t_36220548"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("Designation_t_36220548");
  elt.add_attribute("ManOrdInd", "true"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("true");
  elt.add_attribute("CustDrctdOrd", "true"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("true");
  elt.add_attribute("RcvdDptID", "ReceivedDeptID_t_1748176702"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ReceivedDeptID_t_1748176702");
  elt.add_attribute("CustOrdHdlInst", "LOC"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("LOC");
  elt.add_attribute("OrdHndlInstSrc", "1"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("1");
  all_values.push_back(OrderCancelReplaceRequest_message_t_0);
  all_compo_names.insert("OrderCancelReplaceRequest_message_t");

  { // Hdr
    xml_element Hdr_57{"Hdr"};
    multiset<string> Hdr_57_set;
    Hdr_57.add_attribute("SeqNum", "1212314451"); // 1
    Hdr_57_set.insert("1212314451");
    Hdr_57.add_attribute("SID", "SenderCompID_t_1132530272"); // 1
    Hdr_57_set.insert("SenderCompID_t_1132530272");
    Hdr_57.add_attribute("TID", "TargetCompID_t_1428810886"); // 1
    Hdr_57_set.insert("TargetCompID_t_1428810886");
    Hdr_57.add_attribute("OBID", "OnBehalfOfCompID_t_1495238702"); // 1
    Hdr_57_set.insert("OnBehalfOfCompID_t_1495238702");
    Hdr_57.add_attribute("D2ID", "DeliverToCompID_t_234902832"); // 1
    Hdr_57_set.insert("DeliverToCompID_t_234902832");
    Hdr_57.add_attribute("SSub", "SenderSubID_t_798403452"); // 1
    Hdr_57_set.insert("SenderSubID_t_798403452");
    Hdr_57.add_attribute("SLoc", "SenderLocationID_t_1860809216"); // 1
    Hdr_57_set.insert("SenderLocationID_t_1860809216");
    Hdr_57.add_attribute("TSub", "TargetSubID_t_1939064220"); // 1
    Hdr_57_set.insert("TargetSubID_t_1939064220");
    Hdr_57.add_attribute("TLoc", "TargetLocationID_t_656783803"); // 1
    Hdr_57_set.insert("TargetLocationID_t_656783803");
    Hdr_57.add_attribute("OBSub", "OnBehalfOfSubID_t_650313063"); // 1
    Hdr_57_set.insert("OnBehalfOfSubID_t_650313063");
    Hdr_57.add_attribute("OBLoc", "OnBehalfOfLocationID_t_477209291"); // 1
    Hdr_57_set.insert("OnBehalfOfLocationID_t_477209291");
    Hdr_57.add_attribute("D2Sub", "DeliverToSubID_t_1177230625"); // 1
    Hdr_57_set.insert("DeliverToSubID_t_1177230625");
    Hdr_57.add_attribute("D2Loc", "DeliverToLocationID_t_22236275"); // 1
    Hdr_57_set.insert("DeliverToLocationID_t_22236275");
    Hdr_57.add_attribute("PosDup", "N"); // 1
    Hdr_57_set.insert("N");
    Hdr_57.add_attribute("PosRsnd", "Y"); // 1
    Hdr_57_set.insert("Y");
    Hdr_57.add_attribute("Snt", "SendingTime_t_1858111226"); // 1
    Hdr_57_set.insert("SendingTime_t_1858111226");
    Hdr_57.add_attribute("OrigSnt", "OrigSendingTime_t_311126230"); // 1
    Hdr_57_set.insert("OrigSendingTime_t_311126230");
    Hdr_57.add_attribute("MsgEncd", "MessageEncoding_t_1878752768"); // 1
    Hdr_57_set.insert("MessageEncoding_t_1878752768");
    all_values.push_back(Hdr_57_set);
    all_compo_names.insert("Hdr_57_set");

    {
      xml_element Hop_57{"Hop"};
      multiset<string> Hop_57_set;
      Hop_57.add_attribute("ID", "HopCompID_t_1845146768"); // 2
      Hop_57_set.insert("HopCompID_t_1845146768");
      Hop_57.add_attribute("Ref", "32645844"); // 2
      Hop_57_set.insert("32645844");
      Hop_57.add_attribute("Snt", "HopSendingTime_t_1781981489"); // 2
      Hop_57_set.insert("HopSendingTime_t_1781981489");
      all_values.push_back(Hop_57_set);
      all_compo_names.insert("Hop_57_set");

      Hdr_57.add_element(Hop_57);
    }
    elt.add_element(Hdr_57);
  } // end Hdr
  { // Pty
    xml_element Pty_255{"Pty"};
    multiset<string> Pty_255_set;
    Pty_255.add_attribute("ID", "PartyID_t_996878062"); // 1
    Pty_255_set.insert("PartyID_t_996878062");
    Pty_255.add_attribute("Src", "H"); // 1
    Pty_255_set.insert("H");
    Pty_255.add_attribute("R", "16"); // 1
    Pty_255_set.insert("16");
    all_values.push_back(Pty_255_set);
    all_compo_names.insert("Pty_255_set");

    {
      xml_element Sub_255{"Sub"};
      multiset<string> Sub_255_set;
      Sub_255.add_attribute("ID", "PartySubID_t_1033098610"); // 2
      Sub_255_set.insert("PartySubID_t_1033098610");
      Sub_255.add_attribute("Typ", "19"); // 2
      Sub_255_set.insert("19");
      all_values.push_back(Sub_255_set);
      all_compo_names.insert("Sub_255_set");

      Pty_255.add_element(Sub_255);
    }
    elt.add_element(Pty_255);
  } // end Pty
  { // PreAll
    xml_element PreAll_13{"PreAll"};
    multiset<string> PreAll_13_set;
    PreAll_13.add_attribute("Acct", "AllocAccount_t_633791664"); // 1
    PreAll_13_set.insert("AllocAccount_t_633791664");
    PreAll_13.add_attribute("ActIDSrc", "1"); // 1
    PreAll_13_set.insert("1");
    PreAll_13.add_attribute("AllocSettlCcy", "CHF"); // 1
    PreAll_13_set.insert("CHF");
    PreAll_13.add_attribute("IndAllocID", "IndividualAllocID_t_1558995026"); // 1
    PreAll_13_set.insert("IndividualAllocID_t_1558995026");
    PreAll_13.add_attribute("Qty", "18771915.670000"); // 1
    PreAll_13_set.insert("18771915.670000");
    all_values.push_back(PreAll_13_set);
    all_compo_names.insert("PreAll_13_set");

    {
      xml_element Pty_256{"Pty"};
      multiset<string> Pty_256_set;
      Pty_256.add_attribute("ID", "NestedPartyID_t_1193861170"); // 2
      Pty_256_set.insert("NestedPartyID_t_1193861170");
      Pty_256.add_attribute("Src", "4"); // 2
      Pty_256_set.insert("4");
      Pty_256.add_attribute("R", "2"); // 2
      Pty_256_set.insert("2");
      all_values.push_back(Pty_256_set);
      all_compo_names.insert("Pty_256_set");

      {
        xml_element Sub_256{"Sub"};
        multiset<string> Sub_256_set;
        Sub_256.add_attribute("ID", "NestedPartySubID_t_907186738"); // 3
        Sub_256_set.insert("NestedPartySubID_t_907186738");
        Sub_256.add_attribute("Typ", "32"); // 3
        Sub_256_set.insert("32");
        all_values.push_back(Sub_256_set);
        all_compo_names.insert("Sub_256_set");

        Pty_256.add_element(Sub_256);
      }
      PreAll_13.add_element(Pty_256);
    }
    elt.add_element(PreAll_13);
  } // end PreAll
  { // PreAll
    xml_element PreAll_14{"PreAll"};
    multiset<string> PreAll_14_set;
    PreAll_14.add_attribute("Acct", "AllocAccount_t_1184895174"); // 1
    PreAll_14_set.insert("AllocAccount_t_1184895174");
    PreAll_14.add_attribute("ActIDSrc", "2"); // 1
    PreAll_14_set.insert("2");
    PreAll_14.add_attribute("AllocSettlCcy", "USD"); // 1
    PreAll_14_set.insert("USD");
    PreAll_14.add_attribute("IndAllocID", "IndividualAllocID_t_1579736076"); // 1
    PreAll_14_set.insert("IndividualAllocID_t_1579736076");
    PreAll_14.add_attribute("Qty", "5617454.060000"); // 1
    PreAll_14_set.insert("5617454.060000");
    all_values.push_back(PreAll_14_set);
    all_compo_names.insert("PreAll_14_set");

    {
      xml_element Pty_257{"Pty"};
      multiset<string> Pty_257_set;
      Pty_257.add_attribute("ID", "NestedPartyID_t_1997221641"); // 2
      Pty_257_set.insert("NestedPartyID_t_1997221641");
      Pty_257.add_attribute("Src", "D"); // 2
      Pty_257_set.insert("D");
      Pty_257.add_attribute("R", "1"); // 2
      Pty_257_set.insert("1");
      all_values.push_back(Pty_257_set);
      all_compo_names.insert("Pty_257_set");

      {
        xml_element Sub_257{"Sub"};
        multiset<string> Sub_257_set;
        Sub_257.add_attribute("ID", "NestedPartySubID_t_1728490762"); // 3
        Sub_257_set.insert("NestedPartySubID_t_1728490762");
        Sub_257.add_attribute("Typ", "19"); // 3
        Sub_257_set.insert("19");
        all_values.push_back(Sub_257_set);
        all_compo_names.insert("Sub_257_set");

        Pty_257.add_element(Sub_257);
      }
      PreAll_14.add_element(Pty_257);
    }
    elt.add_element(PreAll_14);
  } // end PreAll
  { // DsplyInstr
    xml_element DsplyInstr_9{"DsplyInstr"};
    multiset<string> DsplyInstr_9_set;
    DsplyInstr_9.add_attribute("DisplayQty", "9055174.810000"); // 1
    DsplyInstr_9_set.insert("9055174.810000");
    DsplyInstr_9.add_attribute("SecDspQty", "13629886.030000"); // 1
    DsplyInstr_9_set.insert("13629886.030000");
    DsplyInstr_9.add_attribute("DspWhn", "2"); // 1
    DsplyInstr_9_set.insert("2");
    DsplyInstr_9.add_attribute("DspMthd", "4"); // 1
    DsplyInstr_9_set.insert("4");
    DsplyInstr_9.add_attribute("DsplLwQty", "7469054.620000"); // 1
    DsplyInstr_9_set.insert("7469054.620000");
    DsplyInstr_9.add_attribute("DisplayHighQty", "16723850.640000"); // 1
    DsplyInstr_9_set.insert("16723850.640000");
    DsplyInstr_9.add_attribute("DspMinIncr", "7880105.060000"); // 1
    DsplyInstr_9_set.insert("7880105.060000");
    DsplyInstr_9.add_attribute("RfrshQty", "13028065.100000"); // 1
    DsplyInstr_9_set.insert("13028065.100000");
    all_values.push_back(DsplyInstr_9_set);
    all_compo_names.insert("DsplyInstr_9_set");

    elt.add_element(DsplyInstr_9);
  } // end DsplyInstr
  { // TrdSes
    xml_element TrdSes_16{"TrdSes"};
    multiset<string> TrdSes_16_set;
    TrdSes_16.add_attribute("SesID", "3"); // 1
    TrdSes_16_set.insert("3");
    TrdSes_16.add_attribute("SesSub", "1"); // 1
    TrdSes_16_set.insert("1");
    all_values.push_back(TrdSes_16_set);
    all_compo_names.insert("TrdSes_16_set");

    elt.add_element(TrdSes_16);
  } // end TrdSes
  { // Instrmt
    xml_element Instrmt_47{"Instrmt"};
    multiset<string> Instrmt_47_set;
    Instrmt_47.add_attribute("Sym", "Symbol_t_712524435"); // 1
    Instrmt_47_set.insert("Symbol_t_712524435");
    Instrmt_47.add_attribute("Sfx", "CD"); // 1
    Instrmt_47_set.insert("CD");
    Instrmt_47.add_attribute("ID", "SecurityID_t_1140782643"); // 1
    Instrmt_47_set.insert("SecurityID_t_1140782643");
    Instrmt_47.add_attribute("Src", "F"); // 1
    Instrmt_47_set.insert("F");
    Instrmt_47.add_attribute("Prod", "2"); // 1
    Instrmt_47_set.insert("2");
    Instrmt_47.add_attribute("ProdCmplx", "ProductComplex_t_787196854"); // 1
    Instrmt_47_set.insert("ProductComplex_t_787196854");
    Instrmt_47.add_attribute("SecGrp", "SecurityGroup_t_970343725"); // 1
    Instrmt_47_set.insert("SecurityGroup_t_970343725");
    Instrmt_47.add_attribute("CFI", "CFICode_t_1073988898"); // 1
    Instrmt_47_set.insert("CFICode_t_1073988898");
    Instrmt_47.add_attribute("SecTyp", "TNOTE"); // 1
    Instrmt_47_set.insert("TNOTE");
    Instrmt_47.add_attribute("SubTyp", "SecuritySubType_t_7755251"); // 1
    Instrmt_47_set.insert("SecuritySubType_t_7755251");
    Instrmt_47.add_attribute("MMY", "484005051"); // 1
    Instrmt_47_set.insert("484005051");
    Instrmt_47.add_attribute("MatDt", "MaturityDate_t_140395711"); // 1
    Instrmt_47_set.insert("MaturityDate_t_140395711");
    Instrmt_47.add_attribute("MatTm", "222397403"); // 1
    Instrmt_47_set.insert("222397403");
    Instrmt_47.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_2063741127"); // 1
    Instrmt_47_set.insert("SettleOnOpenFlag_t_2063741127");
    Instrmt_47.add_attribute("AsgnMeth", "702141117"); // 1
    Instrmt_47_set.insert("702141117");
    Instrmt_47.add_attribute("Status", "2"); // 1
    Instrmt_47_set.insert("2");
    Instrmt_47.add_attribute("CpnPmt", "CouponPaymentDate_t_1206621133"); // 1
    Instrmt_47_set.insert("CouponPaymentDate_t_1206621133");
    Instrmt_47.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_47_set.insert("MM");
    Instrmt_47.add_attribute("Snrty", "SB"); // 1
    Instrmt_47_set.insert("SB");
    Instrmt_47.add_attribute("NotlPctOut", "471642.600000"); // 1
    Instrmt_47_set.insert("471642.600000");
    Instrmt_47.add_attribute("OrigNotlPctOut", "3330465.870000"); // 1
    Instrmt_47_set.insert("3330465.870000");
    Instrmt_47.add_attribute("AttchPnt", "10161311.140000"); // 1
    Instrmt_47_set.insert("10161311.140000");
    Instrmt_47.add_attribute("DetchPnt", "6819802.250000"); // 1
    Instrmt_47_set.insert("6819802.250000");
    Instrmt_47.add_attribute("Issued", "IssueDate_t_87958482"); // 1
    Instrmt_47_set.insert("IssueDate_t_87958482");
    Instrmt_47.add_attribute("RepoCollSecTyp", "1763036576"); // 1
    Instrmt_47_set.insert("1763036576");
    Instrmt_47.add_attribute("RepoTrm", "206881642"); // 1
    Instrmt_47_set.insert("206881642");
    Instrmt_47.add_attribute("RepoRt", "8759689.880000"); // 1
    Instrmt_47_set.insert("8759689.880000");
    Instrmt_47.add_attribute("Fctr", "9183594.390000"); // 1
    Instrmt_47_set.insert("9183594.390000");
    Instrmt_47.add_attribute("CrdRtg", "CreditRating_t_471025396"); // 1
    Instrmt_47_set.insert("CreditRating_t_471025396");
    Instrmt_47.add_attribute("Rgstry", "InstrRegistry_t_150287511"); // 1
    Instrmt_47_set.insert("InstrRegistry_t_150287511");
    Instrmt_47.add_attribute("IssuCtry", "500147055"); // 1
    Instrmt_47_set.insert("500147055");
    Instrmt_47.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1183549831"); // 1
    Instrmt_47_set.insert("StateOrProvinceOfIssue_t_1183549831");
    Instrmt_47.add_attribute("Lcl", "LocaleOfIssue_t_1270712149"); // 1
    Instrmt_47_set.insert("LocaleOfIssue_t_1270712149");
    Instrmt_47.add_attribute("Redeem", "RedemptionDate_t_1640929698"); // 1
    Instrmt_47_set.insert("RedemptionDate_t_1640929698");
    Instrmt_47.add_attribute("StrkPx", "16257821.850000"); // 1
    Instrmt_47_set.insert("16257821.850000");
    Instrmt_47.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_47_set.insert("GBP");
    Instrmt_47.add_attribute("StrkMult", "4486422.620000"); // 1
    Instrmt_47_set.insert("4486422.620000");
    Instrmt_47.add_attribute("StrkValu", "3640195.590000"); // 1
    Instrmt_47_set.insert("3640195.590000");
    Instrmt_47.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_47_set.insert("2");
    Instrmt_47.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_47_set.insert("4");
    Instrmt_47.add_attribute("StrkPxBndryPrcsn", "8480246.100000"); // 1
    Instrmt_47_set.insert("8480246.100000");
    Instrmt_47.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_47_set.insert("1");
    Instrmt_47.add_attribute("OptAt", "678794917"); // 1
    Instrmt_47_set.insert("678794917");
    Instrmt_47.add_attribute("Mult", "7642820.890000"); // 1
    Instrmt_47_set.insert("7642820.890000");
    Instrmt_47.add_attribute("MultTyp", "1"); // 1
    Instrmt_47_set.insert("1");
    Instrmt_47.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_47_set.insert("4");
    Instrmt_47.add_attribute("MinPxIncr", "19709032.220000"); // 1
    Instrmt_47_set.insert("19709032.220000");
    Instrmt_47.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_775900476"); // 1
    Instrmt_47_set.insert("MinPriceIncrementAmount_t_775900476");
    Instrmt_47.add_attribute("UOM", "MWh"); // 1
    Instrmt_47_set.insert("MWh");
    Instrmt_47.add_attribute("UOMQty", "20180674.830000"); // 1
    Instrmt_47_set.insert("20180674.830000");
    Instrmt_47.add_attribute("PxUOM", "Gal"); // 1
    Instrmt_47_set.insert("Gal");
    Instrmt_47.add_attribute("PxUOMQty", "14202039.390000"); // 1
    Instrmt_47_set.insert("14202039.390000");
    Instrmt_47.add_attribute("SettlMeth", "C"); // 1
    Instrmt_47_set.insert("C");
    Instrmt_47.add_attribute("ExerStyle", "0"); // 1
    Instrmt_47_set.insert("0");
    Instrmt_47.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_47_set.insert("2");
    Instrmt_47.add_attribute("OptPayAmt", "OptPayoutAmount_t_759445702"); // 1
    Instrmt_47_set.insert("OptPayoutAmount_t_759445702");
    Instrmt_47.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_47_set.insert("INT");
    Instrmt_47.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_47_set.insert("FUTDA");
    Instrmt_47.add_attribute("ListMeth", "0"); // 1
    Instrmt_47_set.insert("0");
    Instrmt_47.add_attribute("CapPx", "756783.970000"); // 1
    Instrmt_47_set.insert("756783.970000");
    Instrmt_47.add_attribute("FlrPx", "3067797.140000"); // 1
    Instrmt_47_set.insert("3067797.140000");
    Instrmt_47.add_attribute("PutCall", "1"); // 1
    Instrmt_47_set.insert("1");
    Instrmt_47.add_attribute("FlexInd", "true"); // 1
    Instrmt_47_set.insert("true");
    Instrmt_47.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_47_set.insert("false");
    Instrmt_47.add_attribute("TmUnit", "H"); // 1
    Instrmt_47_set.insert("H");
    Instrmt_47.add_attribute("CpnRt", "6364212.070000"); // 1
    Instrmt_47_set.insert("6364212.070000");
    Instrmt_47.add_attribute("Exch", "SecurityExchange_t_80868669"); // 1
    Instrmt_47_set.insert("SecurityExchange_t_80868669");
    Instrmt_47.add_attribute("PosLmt", "193478080"); // 1
    Instrmt_47_set.insert("193478080");
    Instrmt_47.add_attribute("NTPosLmt", "1000440766"); // 1
    Instrmt_47_set.insert("1000440766");
    Instrmt_47.add_attribute("Issr", "Issuer_t_586703211"); // 1
    Instrmt_47_set.insert("Issuer_t_586703211");
    Instrmt_47.add_attribute("EncIssrLen", "649875594"); // 1
    Instrmt_47_set.insert("649875594");
    Instrmt_47.add_attribute("EncIssr", "EncodedIssuer_t_1848465376"); // 1
    Instrmt_47_set.insert("EncodedIssuer_t_1848465376");
    Instrmt_47.add_attribute("Desc", "SecurityDesc_t_1232933463"); // 1
    Instrmt_47_set.insert("SecurityDesc_t_1232933463");
    Instrmt_47.add_attribute("EncSecDescLen", "1328670511"); // 1
    Instrmt_47_set.insert("1328670511");
    Instrmt_47.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_465263817"); // 1
    Instrmt_47_set.insert("EncodedSecurityDesc_t_465263817");
    Instrmt_47.add_attribute("Pool", "Pool_t_433821185"); // 1
    Instrmt_47_set.insert("Pool_t_433821185");
    Instrmt_47.add_attribute("CSetMo", "2079600825"); // 1
    Instrmt_47_set.insert("2079600825");
    Instrmt_47.add_attribute("CPPgm", "1"); // 1
    Instrmt_47_set.insert("1");
    Instrmt_47.add_attribute("CPRegT", "CPRegType_t_1209721661"); // 1
    Instrmt_47_set.insert("CPRegType_t_1209721661");
    Instrmt_47.add_attribute("Dated", "DatedDate_t_336190002"); // 1
    Instrmt_47_set.insert("DatedDate_t_336190002");
    Instrmt_47.add_attribute("IntAcrl", "InterestAccrualDate_t_159267226"); // 1
    Instrmt_47_set.insert("InterestAccrualDate_t_159267226");
    all_values.push_back(Instrmt_47_set);
    all_compo_names.insert("Instrmt_47_set");

    {
      xml_element AID_50{"AID"};
      multiset<string> AID_50_set;
      AID_50.add_attribute("AltID", "SecurityAltID_t_171185076"); // 2
      AID_50_set.insert("SecurityAltID_t_171185076");
      AID_50.add_attribute("AltIDSrc", "6"); // 2
      AID_50_set.insert("6");
      all_values.push_back(AID_50_set);
      all_compo_names.insert("AID_50_set");

      Instrmt_47.add_element(AID_50);
    }
    {
      xml_element SecXML_50{"SecXML"};
      multiset<string> SecXML_50_set;
      SecXML_50.add_attribute("Schema", "SecurityXMLSchema_t_711831287"); // 2
      SecXML_50_set.insert("SecurityXMLSchema_t_711831287");
      all_values.push_back(SecXML_50_set);
      all_compo_names.insert("SecXML_50_set");

      Instrmt_47.add_element(SecXML_50);
    }
    {
      xml_element Evnt_50{"Evnt"};
      multiset<string> Evnt_50_set;
      Evnt_50.add_attribute("EventTyp", "3"); // 2
      Evnt_50_set.insert("3");
      Evnt_50.add_attribute("Dt", "EventDate_t_644667161"); // 2
      Evnt_50_set.insert("EventDate_t_644667161");
      Evnt_50.add_attribute("Tm", "EventTime_t_1471276989"); // 2
      Evnt_50_set.insert("EventTime_t_1471276989");
      Evnt_50.add_attribute("Px", "12934815.080000"); // 2
      Evnt_50_set.insert("12934815.080000");
      Evnt_50.add_attribute("Txt", "EventText_t_451299820"); // 2
      Evnt_50_set.insert("EventText_t_451299820");
      all_values.push_back(Evnt_50_set);
      all_compo_names.insert("Evnt_50_set");

      Instrmt_47.add_element(Evnt_50);
    }
    {
      xml_element Pty_258{"Pty"};
      multiset<string> Pty_258_set;
      Pty_258.add_attribute("ID", "InstrumentPartyID_t_554264440"); // 2
      Pty_258_set.insert("InstrumentPartyID_t_554264440");
      Pty_258.add_attribute("Src", "4"); // 2
      Pty_258_set.insert("4");
      Pty_258.add_attribute("R", "4"); // 2
      Pty_258_set.insert("4");
      all_values.push_back(Pty_258_set);
      all_compo_names.insert("Pty_258_set");

      {
        xml_element Sub_258{"Sub"};
        multiset<string> Sub_258_set;
        Sub_258.add_attribute("ID", "InstrumentPartySubID_t_820801721"); // 3
        Sub_258_set.insert("InstrumentPartySubID_t_820801721");
        Sub_258.add_attribute("Typ", "26"); // 3
        Sub_258_set.insert("26");
        all_values.push_back(Sub_258_set);
        all_compo_names.insert("Sub_258_set");

        Pty_258.add_element(Sub_258);
      }
      Instrmt_47.add_element(Pty_258);
    }
    {
      xml_element CmplxEvnt_47{"CmplxEvnt"};
      multiset<string> CmplxEvnt_47_set;
      CmplxEvnt_47.add_attribute("Typ", "3"); // 2
      CmplxEvnt_47_set.insert("3");
      CmplxEvnt_47.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_565637540"); // 2
      CmplxEvnt_47_set.insert("ComplexOptPayoutAmount_t_565637540");
      CmplxEvnt_47.add_attribute("Px", "12044880.100000"); // 2
      CmplxEvnt_47_set.insert("12044880.100000");
      CmplxEvnt_47.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_47_set.insert("5");
      CmplxEvnt_47.add_attribute("PxBndryPrcsn", "7591156.200000"); // 2
      CmplxEvnt_47_set.insert("7591156.200000");
      CmplxEvnt_47.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_47_set.insert("1");
      CmplxEvnt_47.add_attribute("Cond", "1"); // 2
      CmplxEvnt_47_set.insert("1");
      all_values.push_back(CmplxEvnt_47_set);
      all_compo_names.insert("CmplxEvnt_47_set");

      {
        xml_element EvntDts_47{"EvntDts"};
        multiset<string> EvntDts_47_set;
        EvntDts_47.add_attribute("StartDt", "ComplexEventStartDate_t_1408991214"); // 3
        EvntDts_47_set.insert("ComplexEventStartDate_t_1408991214");
        EvntDts_47.add_attribute("EndDt", "ComplexEventEndDate_t_1905910504"); // 3
        EvntDts_47_set.insert("ComplexEventEndDate_t_1905910504");
        all_values.push_back(EvntDts_47_set);
        all_compo_names.insert("EvntDts_47_set");

        {
          xml_element EvntTms_47{"EvntTms"};
          multiset<string> EvntTms_47_set;
          EvntTms_47.add_attribute("StartTm", "311326996"); // 4
          EvntTms_47_set.insert("311326996");
          EvntTms_47.add_attribute("EndTm", "590178077"); // 4
          EvntTms_47_set.insert("590178077");
          all_values.push_back(EvntTms_47_set);
          all_compo_names.insert("EvntTms_47_set");

          EvntDts_47.add_element(EvntTms_47);
        }
        CmplxEvnt_47.add_element(EvntDts_47);
      }
      Instrmt_47.add_element(CmplxEvnt_47);
    }
    elt.add_element(Instrmt_47);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_13{"FinDetls"};
    multiset<string> FinDetls_13_set;
    FinDetls_13.add_attribute("AgmtDesc", "AgreementDesc_t_223690673"); // 1
    FinDetls_13_set.insert("AgreementDesc_t_223690673");
    FinDetls_13.add_attribute("AgmtID", "AgreementID_t_745148181"); // 1
    FinDetls_13_set.insert("AgreementID_t_745148181");
    FinDetls_13.add_attribute("AgmtDt", "AgreementDate_t_522295254"); // 1
    FinDetls_13_set.insert("AgreementDate_t_522295254");
    FinDetls_13.add_attribute("AgmtCcy", "CHF"); // 1
    FinDetls_13_set.insert("CHF");
    FinDetls_13.add_attribute("TrmTyp", "1"); // 1
    FinDetls_13_set.insert("1");
    FinDetls_13.add_attribute("StartDt", "StartDate_t_671641291"); // 1
    FinDetls_13_set.insert("StartDate_t_671641291");
    FinDetls_13.add_attribute("EndDt", "EndDate_t_2126054919"); // 1
    FinDetls_13_set.insert("EndDate_t_2126054919");
    FinDetls_13.add_attribute("DlvryTyp", "2"); // 1
    FinDetls_13_set.insert("2");
    FinDetls_13.add_attribute("MgnRatio", "13834725.780000"); // 1
    FinDetls_13_set.insert("13834725.780000");
    all_values.push_back(FinDetls_13_set);
    all_compo_names.insert("FinDetls_13_set");

    elt.add_element(FinDetls_13);
  } // end FinDetls
  { // Undly
    xml_element Undly_64{"Undly"};
    multiset<string> Undly_64_set;
    Undly_64.add_attribute("Sym", "UnderlyingSymbol_t_1112062711"); // 1
    Undly_64_set.insert("UnderlyingSymbol_t_1112062711");
    Undly_64.add_attribute("Sfx", "WI"); // 1
    Undly_64_set.insert("WI");
    Undly_64.add_attribute("ID", "UnderlyingSecurityID_t_492659753"); // 1
    Undly_64_set.insert("UnderlyingSecurityID_t_492659753");
    Undly_64.add_attribute("Src", "7"); // 1
    Undly_64_set.insert("7");
    Undly_64.add_attribute("Prod", "8"); // 1
    Undly_64_set.insert("8");
    Undly_64.add_attribute("CFI", "UnderlyingCFICode_t_1861819658"); // 1
    Undly_64_set.insert("UnderlyingCFICode_t_1861819658");
    Undly_64.add_attribute("SecTyp", "CDS"); // 1
    Undly_64_set.insert("CDS");
    Undly_64.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2082332081"); // 1
    Undly_64_set.insert("UnderlyingSecuritySubType_t_2082332081");
    Undly_64.add_attribute("MMY", "282402813"); // 1
    Undly_64_set.insert("282402813");
    Undly_64.add_attribute("Mat", "UnderlyingMaturityDate_t_732263719"); // 1
    Undly_64_set.insert("UnderlyingMaturityDate_t_732263719");
    Undly_64.add_attribute("MatTm", "500485973"); // 1
    Undly_64_set.insert("500485973");
    Undly_64.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1486890823"); // 1
    Undly_64_set.insert("UnderlyingCouponPaymentDate_t_1486890823");
    Undly_64.add_attribute("RestrctTyp", "FR"); // 1
    Undly_64_set.insert("FR");
    Undly_64.add_attribute("Snrty", "SB"); // 1
    Undly_64_set.insert("SB");
    Undly_64.add_attribute("NotlPctOut", "15443359.510000"); // 1
    Undly_64_set.insert("15443359.510000");
    Undly_64.add_attribute("OrigNotlPctOut", "4498312.210000"); // 1
    Undly_64_set.insert("4498312.210000");
    Undly_64.add_attribute("AttchPnt", "5211091.600000"); // 1
    Undly_64_set.insert("5211091.600000");
    Undly_64.add_attribute("DetchPnt", "13027628.070000"); // 1
    Undly_64_set.insert("13027628.070000");
    Undly_64.add_attribute("Issued", "UnderlyingIssueDate_t_761158217"); // 1
    Undly_64_set.insert("UnderlyingIssueDate_t_761158217");
    Undly_64.add_attribute("RepoCollSecTyp", "1111287237"); // 1
    Undly_64_set.insert("1111287237");
    Undly_64.add_attribute("RepoTrm", "1526453480"); // 1
    Undly_64_set.insert("1526453480");
    Undly_64.add_attribute("RepoRt", "15063063.980000"); // 1
    Undly_64_set.insert("15063063.980000");
    Undly_64.add_attribute("Fctr", "16335824.920000"); // 1
    Undly_64_set.insert("16335824.920000");
    Undly_64.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2038827545"); // 1
    Undly_64_set.insert("UnderlyingCreditRating_t_2038827545");
    Undly_64.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1313692593"); // 1
    Undly_64_set.insert("UnderlyingInstrRegistry_t_1313692593");
    Undly_64.add_attribute("Ctry", "344584100"); // 1
    Undly_64_set.insert("344584100");
    Undly_64.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_562985188"); // 1
    Undly_64_set.insert("UnderlyingStateOrProvinceOfIssue_t_562985188");
    Undly_64.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1292263865"); // 1
    Undly_64_set.insert("UnderlyingLocaleOfIssue_t_1292263865");
    Undly_64.add_attribute("Redeem", "UnderlyingRedemptionDate_t_811979650"); // 1
    Undly_64_set.insert("UnderlyingRedemptionDate_t_811979650");
    Undly_64.add_attribute("StrkPx", "19464577.660000"); // 1
    Undly_64_set.insert("19464577.660000");
    Undly_64.add_attribute("StrkCcy", "USD"); // 1
    Undly_64_set.insert("USD");
    Undly_64.add_attribute("OptA", "506240037"); // 1
    Undly_64_set.insert("506240037");
    Undly_64.add_attribute("Mult", "9841018.640000"); // 1
    Undly_64_set.insert("9841018.640000");
    Undly_64.add_attribute("MultTyp", "1"); // 1
    Undly_64_set.insert("1");
    Undly_64.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_64_set.insert("2");
    Undly_64.add_attribute("UOM", "t"); // 1
    Undly_64_set.insert("t");
    Undly_64.add_attribute("UOMQty", "15138796.650000"); // 1
    Undly_64_set.insert("15138796.650000");
    Undly_64.add_attribute("PxUOM", "Gal"); // 1
    Undly_64_set.insert("Gal");
    Undly_64.add_attribute("PxUOMQty", "9808406.880000"); // 1
    Undly_64_set.insert("9808406.880000");
    Undly_64.add_attribute("TmUnit", "S"); // 1
    Undly_64_set.insert("S");
    Undly_64.add_attribute("ExerStyle", "0"); // 1
    Undly_64_set.insert("0");
    Undly_64.add_attribute("CpnRt", "3202478.630000"); // 1
    Undly_64_set.insert("3202478.630000");
    Undly_64.add_attribute("Exch", "UnderlyingSecurityExchange_t_1470097424"); // 1
    Undly_64_set.insert("UnderlyingSecurityExchange_t_1470097424");
    Undly_64.add_attribute("Issr", "UnderlyingIssuer_t_1315222748"); // 1
    Undly_64_set.insert("UnderlyingIssuer_t_1315222748");
    Undly_64.add_attribute("EncUndIssrLen", "1864583815"); // 1
    Undly_64_set.insert("1864583815");
    Undly_64.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1919928645"); // 1
    Undly_64_set.insert("EncodedUnderlyingIssuer_t_1919928645");
    Undly_64.add_attribute("Desc", "UnderlyingSecurityDesc_t_1836331908"); // 1
    Undly_64_set.insert("UnderlyingSecurityDesc_t_1836331908");
    Undly_64.add_attribute("EncUndSecDescLen", "1019862974"); // 1
    Undly_64_set.insert("1019862974");
    Undly_64.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_533603214"); // 1
    Undly_64_set.insert("EncodedUnderlyingSecurityDesc_t_533603214");
    Undly_64.add_attribute("CPPgm", "UnderlyingCPProgram_t_800135498"); // 1
    Undly_64_set.insert("UnderlyingCPProgram_t_800135498");
    Undly_64.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_398832807"); // 1
    Undly_64_set.insert("UnderlyingCPRegType_t_398832807");
    Undly_64.add_attribute("AllocPct", "20399096.130000"); // 1
    Undly_64_set.insert("20399096.130000");
    Undly_64.add_attribute("Ccy", "USD"); // 1
    Undly_64_set.insert("USD");
    Undly_64.add_attribute("Qty", "12061185.580000"); // 1
    Undly_64_set.insert("12061185.580000");
    Undly_64.add_attribute("SettlTyp", "2"); // 1
    Undly_64_set.insert("2");
    Undly_64.add_attribute("CashAmt", "UnderlyingCashAmount_t_853161892"); // 1
    Undly_64_set.insert("UnderlyingCashAmount_t_853161892");
    Undly_64.add_attribute("CashTyp", "DIFF"); // 1
    Undly_64_set.insert("DIFF");
    Undly_64.add_attribute("Px", "14427980.930000"); // 1
    Undly_64_set.insert("14427980.930000");
    Undly_64.add_attribute("DirtPx", "6521360.100000"); // 1
    Undly_64_set.insert("6521360.100000");
    Undly_64.add_attribute("EndPx", "8423408.860000"); // 1
    Undly_64_set.insert("8423408.860000");
    Undly_64.add_attribute("StartVal", "UnderlyingStartValue_t_1219356807"); // 1
    Undly_64_set.insert("UnderlyingStartValue_t_1219356807");
    Undly_64.add_attribute("CurVal", "UnderlyingCurrentValue_t_1158376047"); // 1
    Undly_64_set.insert("UnderlyingCurrentValue_t_1158376047");
    Undly_64.add_attribute("EndVal", "UnderlyingEndValue_t_1826442750"); // 1
    Undly_64_set.insert("UnderlyingEndValue_t_1826442750");
    Undly_64.add_attribute("AdjQty", "4117944.050000"); // 1
    Undly_64_set.insert("4117944.050000");
    Undly_64.add_attribute("FxRate", "7786627.960000"); // 1
    Undly_64_set.insert("7786627.960000");
    Undly_64.add_attribute("FxRateCalc", "M"); // 1
    Undly_64_set.insert("M");
    Undly_64.add_attribute("CapValu", "UnderlyingCapValue_t_1925674070"); // 1
    Undly_64_set.insert("UnderlyingCapValue_t_1925674070");
    Undly_64.add_attribute("SetMeth", "UnderlyingSettlMethod_t_333797978"); // 1
    Undly_64_set.insert("UnderlyingSettlMethod_t_333797978");
    Undly_64.add_attribute("PutCall", "1358237664"); // 1
    Undly_64_set.insert("1358237664");
    all_values.push_back(Undly_64_set);
    all_compo_names.insert("Undly_64_set");

    {
      xml_element UndAID_64{"UndAID"};
      multiset<string> UndAID_64_set;
      UndAID_64.add_attribute("AltID", "UnderlyingSecurityAltID_t_2024333806"); // 2
      UndAID_64_set.insert("UnderlyingSecurityAltID_t_2024333806");
      UndAID_64.add_attribute("AltIDSrc", "G"); // 2
      UndAID_64_set.insert("G");
      all_values.push_back(UndAID_64_set);
      all_compo_names.insert("UndAID_64_set");

      Undly_64.add_element(UndAID_64);
    }
    {
      xml_element Stip_102{"Stip"};
      multiset<string> Stip_102_set;
      Stip_102.add_attribute("Typ", "CPY"); // 2
      Stip_102_set.insert("CPY");
      Stip_102.add_attribute("Val", "UnderlyingStipValue_t_1346947582"); // 2
      Stip_102_set.insert("UnderlyingStipValue_t_1346947582");
      all_values.push_back(Stip_102_set);
      all_compo_names.insert("Stip_102_set");

      Undly_64.add_element(Stip_102);
    }
    {
      xml_element Pty_259{"Pty"};
      multiset<string> Pty_259_set;
      Pty_259.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1704641882"); // 2
      Pty_259_set.insert("UnderlyingInstrumentPartyID_t_1704641882");
      Pty_259.add_attribute("Src", "C"); // 2
      Pty_259_set.insert("C");
      Pty_259.add_attribute("R", "20"); // 2
      Pty_259_set.insert("20");
      all_values.push_back(Pty_259_set);
      all_compo_names.insert("Pty_259_set");

      {
        xml_element Sub_259{"Sub"};
        multiset<string> Sub_259_set;
        Sub_259.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1393490142"); // 3
        Sub_259_set.insert("UnderlyingInstrumentPartySubID_t_1393490142");
        Sub_259.add_attribute("Typ", "14"); // 3
        Sub_259_set.insert("14");
        all_values.push_back(Sub_259_set);
        all_compo_names.insert("Sub_259_set");

        Pty_259.add_element(Sub_259);
      }
      Undly_64.add_element(Pty_259);
    }
    elt.add_element(Undly_64);
  } // end Undly
  { // Undly
    xml_element Undly_65{"Undly"};
    multiset<string> Undly_65_set;
    Undly_65.add_attribute("Sym", "UnderlyingSymbol_t_1652995794"); // 1
    Undly_65_set.insert("UnderlyingSymbol_t_1652995794");
    Undly_65.add_attribute("Sfx", "CD"); // 1
    Undly_65_set.insert("CD");
    Undly_65.add_attribute("ID", "UnderlyingSecurityID_t_666797828"); // 1
    Undly_65_set.insert("UnderlyingSecurityID_t_666797828");
    Undly_65.add_attribute("Src", "E"); // 1
    Undly_65_set.insert("E");
    Undly_65.add_attribute("Prod", "13"); // 1
    Undly_65_set.insert("13");
    Undly_65.add_attribute("CFI", "UnderlyingCFICode_t_956974532"); // 1
    Undly_65_set.insert("UnderlyingCFICode_t_956974532");
    Undly_65.add_attribute("SecTyp", "MATURED"); // 1
    Undly_65_set.insert("MATURED");
    Undly_65.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_963194777"); // 1
    Undly_65_set.insert("UnderlyingSecuritySubType_t_963194777");
    Undly_65.add_attribute("MMY", "1810136424"); // 1
    Undly_65_set.insert("1810136424");
    Undly_65.add_attribute("Mat", "UnderlyingMaturityDate_t_954955445"); // 1
    Undly_65_set.insert("UnderlyingMaturityDate_t_954955445");
    Undly_65.add_attribute("MatTm", "258509222"); // 1
    Undly_65_set.insert("258509222");
    Undly_65.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_314788786"); // 1
    Undly_65_set.insert("UnderlyingCouponPaymentDate_t_314788786");
    Undly_65.add_attribute("RestrctTyp", "XR"); // 1
    Undly_65_set.insert("XR");
    Undly_65.add_attribute("Snrty", "SB"); // 1
    Undly_65_set.insert("SB");
    Undly_65.add_attribute("NotlPctOut", "14731648.340000"); // 1
    Undly_65_set.insert("14731648.340000");
    Undly_65.add_attribute("OrigNotlPctOut", "14762554.330000"); // 1
    Undly_65_set.insert("14762554.330000");
    Undly_65.add_attribute("AttchPnt", "18896604.340000"); // 1
    Undly_65_set.insert("18896604.340000");
    Undly_65.add_attribute("DetchPnt", "1043439.820000"); // 1
    Undly_65_set.insert("1043439.820000");
    Undly_65.add_attribute("Issued", "UnderlyingIssueDate_t_1853652410"); // 1
    Undly_65_set.insert("UnderlyingIssueDate_t_1853652410");
    Undly_65.add_attribute("RepoCollSecTyp", "1667850856"); // 1
    Undly_65_set.insert("1667850856");
    Undly_65.add_attribute("RepoTrm", "438141961"); // 1
    Undly_65_set.insert("438141961");
    Undly_65.add_attribute("RepoRt", "10644064.260000"); // 1
    Undly_65_set.insert("10644064.260000");
    Undly_65.add_attribute("Fctr", "15447010.140000"); // 1
    Undly_65_set.insert("15447010.140000");
    Undly_65.add_attribute("CrdRtg", "UnderlyingCreditRating_t_827561094"); // 1
    Undly_65_set.insert("UnderlyingCreditRating_t_827561094");
    Undly_65.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_595408306"); // 1
    Undly_65_set.insert("UnderlyingInstrRegistry_t_595408306");
    Undly_65.add_attribute("Ctry", "744164948"); // 1
    Undly_65_set.insert("744164948");
    Undly_65.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_384719328"); // 1
    Undly_65_set.insert("UnderlyingStateOrProvinceOfIssue_t_384719328");
    Undly_65.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1990994001"); // 1
    Undly_65_set.insert("UnderlyingLocaleOfIssue_t_1990994001");
    Undly_65.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1863557528"); // 1
    Undly_65_set.insert("UnderlyingRedemptionDate_t_1863557528");
    Undly_65.add_attribute("StrkPx", "17782094.710000"); // 1
    Undly_65_set.insert("17782094.710000");
    Undly_65.add_attribute("StrkCcy", "EUR"); // 1
    Undly_65_set.insert("EUR");
    Undly_65.add_attribute("OptA", "1824351463"); // 1
    Undly_65_set.insert("1824351463");
    Undly_65.add_attribute("Mult", "7782732.030000"); // 1
    Undly_65_set.insert("7782732.030000");
    Undly_65.add_attribute("MultTyp", "0"); // 1
    Undly_65_set.insert("0");
    Undly_65.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_65_set.insert("0");
    Undly_65.add_attribute("UOM", "MMBtu"); // 1
    Undly_65_set.insert("MMBtu");
    Undly_65.add_attribute("UOMQty", "13710644.560000"); // 1
    Undly_65_set.insert("13710644.560000");
    Undly_65.add_attribute("PxUOM", "tn"); // 1
    Undly_65_set.insert("tn");
    Undly_65.add_attribute("PxUOMQty", "13979005.120000"); // 1
    Undly_65_set.insert("13979005.120000");
    Undly_65.add_attribute("TmUnit", "Min"); // 1
    Undly_65_set.insert("Min");
    Undly_65.add_attribute("ExerStyle", "2"); // 1
    Undly_65_set.insert("2");
    Undly_65.add_attribute("CpnRt", "17126892.990000"); // 1
    Undly_65_set.insert("17126892.990000");
    Undly_65.add_attribute("Exch", "UnderlyingSecurityExchange_t_1975832585"); // 1
    Undly_65_set.insert("UnderlyingSecurityExchange_t_1975832585");
    Undly_65.add_attribute("Issr", "UnderlyingIssuer_t_561330530"); // 1
    Undly_65_set.insert("UnderlyingIssuer_t_561330530");
    Undly_65.add_attribute("EncUndIssrLen", "1038370485"); // 1
    Undly_65_set.insert("1038370485");
    Undly_65.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1304604371"); // 1
    Undly_65_set.insert("EncodedUnderlyingIssuer_t_1304604371");
    Undly_65.add_attribute("Desc", "UnderlyingSecurityDesc_t_303507316"); // 1
    Undly_65_set.insert("UnderlyingSecurityDesc_t_303507316");
    Undly_65.add_attribute("EncUndSecDescLen", "1142714467"); // 1
    Undly_65_set.insert("1142714467");
    Undly_65.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1010773133"); // 1
    Undly_65_set.insert("EncodedUnderlyingSecurityDesc_t_1010773133");
    Undly_65.add_attribute("CPPgm", "UnderlyingCPProgram_t_1971358172"); // 1
    Undly_65_set.insert("UnderlyingCPProgram_t_1971358172");
    Undly_65.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1580856428"); // 1
    Undly_65_set.insert("UnderlyingCPRegType_t_1580856428");
    Undly_65.add_attribute("AllocPct", "20751795.590000"); // 1
    Undly_65_set.insert("20751795.590000");
    Undly_65.add_attribute("Ccy", "EUR"); // 1
    Undly_65_set.insert("EUR");
    Undly_65.add_attribute("Qty", "5231042.180000"); // 1
    Undly_65_set.insert("5231042.180000");
    Undly_65.add_attribute("SettlTyp", "5"); // 1
    Undly_65_set.insert("5");
    Undly_65.add_attribute("CashAmt", "UnderlyingCashAmount_t_645653203"); // 1
    Undly_65_set.insert("UnderlyingCashAmount_t_645653203");
    Undly_65.add_attribute("CashTyp", "DIFF"); // 1
    Undly_65_set.insert("DIFF");
    Undly_65.add_attribute("Px", "18288143.670000"); // 1
    Undly_65_set.insert("18288143.670000");
    Undly_65.add_attribute("DirtPx", "2763790.260000"); // 1
    Undly_65_set.insert("2763790.260000");
    Undly_65.add_attribute("EndPx", "4780899.460000"); // 1
    Undly_65_set.insert("4780899.460000");
    Undly_65.add_attribute("StartVal", "UnderlyingStartValue_t_1050400394"); // 1
    Undly_65_set.insert("UnderlyingStartValue_t_1050400394");
    Undly_65.add_attribute("CurVal", "UnderlyingCurrentValue_t_2100730490"); // 1
    Undly_65_set.insert("UnderlyingCurrentValue_t_2100730490");
    Undly_65.add_attribute("EndVal", "UnderlyingEndValue_t_1256363150"); // 1
    Undly_65_set.insert("UnderlyingEndValue_t_1256363150");
    Undly_65.add_attribute("AdjQty", "18174081.800000"); // 1
    Undly_65_set.insert("18174081.800000");
    Undly_65.add_attribute("FxRate", "21099746.400000"); // 1
    Undly_65_set.insert("21099746.400000");
    Undly_65.add_attribute("FxRateCalc", "M"); // 1
    Undly_65_set.insert("M");
    Undly_65.add_attribute("CapValu", "UnderlyingCapValue_t_1040988989"); // 1
    Undly_65_set.insert("UnderlyingCapValue_t_1040988989");
    Undly_65.add_attribute("SetMeth", "UnderlyingSettlMethod_t_934929919"); // 1
    Undly_65_set.insert("UnderlyingSettlMethod_t_934929919");
    Undly_65.add_attribute("PutCall", "94544102"); // 1
    Undly_65_set.insert("94544102");
    all_values.push_back(Undly_65_set);
    all_compo_names.insert("Undly_65_set");

    {
      xml_element UndAID_65{"UndAID"};
      multiset<string> UndAID_65_set;
      UndAID_65.add_attribute("AltID", "UnderlyingSecurityAltID_t_1219525243"); // 2
      UndAID_65_set.insert("UnderlyingSecurityAltID_t_1219525243");
      UndAID_65.add_attribute("AltIDSrc", "1"); // 2
      UndAID_65_set.insert("1");
      all_values.push_back(UndAID_65_set);
      all_compo_names.insert("UndAID_65_set");

      Undly_65.add_element(UndAID_65);
    }
    {
      xml_element Stip_103{"Stip"};
      multiset<string> Stip_103_set;
      Stip_103.add_attribute("Typ", "PURPOSE"); // 2
      Stip_103_set.insert("PURPOSE");
      Stip_103.add_attribute("Val", "UnderlyingStipValue_t_1047874180"); // 2
      Stip_103_set.insert("UnderlyingStipValue_t_1047874180");
      all_values.push_back(Stip_103_set);
      all_compo_names.insert("Stip_103_set");

      Undly_65.add_element(Stip_103);
    }
    {
      xml_element Pty_260{"Pty"};
      multiset<string> Pty_260_set;
      Pty_260.add_attribute("ID", "UnderlyingInstrumentPartyID_t_579724950"); // 2
      Pty_260_set.insert("UnderlyingInstrumentPartyID_t_579724950");
      Pty_260.add_attribute("Src", "D"); // 2
      Pty_260_set.insert("D");
      Pty_260.add_attribute("R", "46"); // 2
      Pty_260_set.insert("46");
      all_values.push_back(Pty_260_set);
      all_compo_names.insert("Pty_260_set");

      {
        xml_element Sub_260{"Sub"};
        multiset<string> Sub_260_set;
        Sub_260.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_883232266"); // 3
        Sub_260_set.insert("UnderlyingInstrumentPartySubID_t_883232266");
        Sub_260.add_attribute("Typ", "30"); // 3
        Sub_260_set.insert("30");
        all_values.push_back(Sub_260_set);
        all_compo_names.insert("Sub_260_set");

        Pty_260.add_element(Sub_260);
      }
      Undly_65.add_element(Pty_260);
    }
    elt.add_element(Undly_65);
  } // end Undly
  { // Undly
    xml_element Undly_66{"Undly"};
    multiset<string> Undly_66_set;
    Undly_66.add_attribute("Sym", "UnderlyingSymbol_t_1215768036"); // 1
    Undly_66_set.insert("UnderlyingSymbol_t_1215768036");
    Undly_66.add_attribute("Sfx", "CD"); // 1
    Undly_66_set.insert("CD");
    Undly_66.add_attribute("ID", "UnderlyingSecurityID_t_1274207486"); // 1
    Undly_66_set.insert("UnderlyingSecurityID_t_1274207486");
    Undly_66.add_attribute("Src", "1"); // 1
    Undly_66_set.insert("1");
    Undly_66.add_attribute("Prod", "2"); // 1
    Undly_66_set.insert("2");
    Undly_66.add_attribute("CFI", "UnderlyingCFICode_t_1535141361"); // 1
    Undly_66_set.insert("UnderlyingCFICode_t_1535141361");
    Undly_66.add_attribute("SecTyp", "BN"); // 1
    Undly_66_set.insert("BN");
    Undly_66.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2040939166"); // 1
    Undly_66_set.insert("UnderlyingSecuritySubType_t_2040939166");
    Undly_66.add_attribute("MMY", "33310917"); // 1
    Undly_66_set.insert("33310917");
    Undly_66.add_attribute("Mat", "UnderlyingMaturityDate_t_2033182737"); // 1
    Undly_66_set.insert("UnderlyingMaturityDate_t_2033182737");
    Undly_66.add_attribute("MatTm", "1722269885"); // 1
    Undly_66_set.insert("1722269885");
    Undly_66.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_309689943"); // 1
    Undly_66_set.insert("UnderlyingCouponPaymentDate_t_309689943");
    Undly_66.add_attribute("RestrctTyp", "FR"); // 1
    Undly_66_set.insert("FR");
    Undly_66.add_attribute("Snrty", "SB"); // 1
    Undly_66_set.insert("SB");
    Undly_66.add_attribute("NotlPctOut", "2629367.850000"); // 1
    Undly_66_set.insert("2629367.850000");
    Undly_66.add_attribute("OrigNotlPctOut", "16201521.860000"); // 1
    Undly_66_set.insert("16201521.860000");
    Undly_66.add_attribute("AttchPnt", "2951111.640000"); // 1
    Undly_66_set.insert("2951111.640000");
    Undly_66.add_attribute("DetchPnt", "2254277.770000"); // 1
    Undly_66_set.insert("2254277.770000");
    Undly_66.add_attribute("Issued", "UnderlyingIssueDate_t_316795776"); // 1
    Undly_66_set.insert("UnderlyingIssueDate_t_316795776");
    Undly_66.add_attribute("RepoCollSecTyp", "1336100153"); // 1
    Undly_66_set.insert("1336100153");
    Undly_66.add_attribute("RepoTrm", "1160357696"); // 1
    Undly_66_set.insert("1160357696");
    Undly_66.add_attribute("RepoRt", "4113398.780000"); // 1
    Undly_66_set.insert("4113398.780000");
    Undly_66.add_attribute("Fctr", "4081417.480000"); // 1
    Undly_66_set.insert("4081417.480000");
    Undly_66.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1178752116"); // 1
    Undly_66_set.insert("UnderlyingCreditRating_t_1178752116");
    Undly_66.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_71089632"); // 1
    Undly_66_set.insert("UnderlyingInstrRegistry_t_71089632");
    Undly_66.add_attribute("Ctry", "1456015928"); // 1
    Undly_66_set.insert("1456015928");
    Undly_66.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1758477066"); // 1
    Undly_66_set.insert("UnderlyingStateOrProvinceOfIssue_t_1758477066");
    Undly_66.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_769209870"); // 1
    Undly_66_set.insert("UnderlyingLocaleOfIssue_t_769209870");
    Undly_66.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1661010832"); // 1
    Undly_66_set.insert("UnderlyingRedemptionDate_t_1661010832");
    Undly_66.add_attribute("StrkPx", "4942256.840000"); // 1
    Undly_66_set.insert("4942256.840000");
    Undly_66.add_attribute("StrkCcy", "GBP"); // 1
    Undly_66_set.insert("GBP");
    Undly_66.add_attribute("OptA", "1201332474"); // 1
    Undly_66_set.insert("1201332474");
    Undly_66.add_attribute("Mult", "17367684.150000"); // 1
    Undly_66_set.insert("17367684.150000");
    Undly_66.add_attribute("MultTyp", "0"); // 1
    Undly_66_set.insert("0");
    Undly_66.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_66_set.insert("4");
    Undly_66.add_attribute("UOM", "lbs"); // 1
    Undly_66_set.insert("lbs");
    Undly_66.add_attribute("UOMQty", "13918436.860000"); // 1
    Undly_66_set.insert("13918436.860000");
    Undly_66.add_attribute("PxUOM", "lbs"); // 1
    Undly_66_set.insert("lbs");
    Undly_66.add_attribute("PxUOMQty", "11577370.450000"); // 1
    Undly_66_set.insert("11577370.450000");
    Undly_66.add_attribute("TmUnit", "Yr"); // 1
    Undly_66_set.insert("Yr");
    Undly_66.add_attribute("ExerStyle", "2"); // 1
    Undly_66_set.insert("2");
    Undly_66.add_attribute("CpnRt", "14674269.890000"); // 1
    Undly_66_set.insert("14674269.890000");
    Undly_66.add_attribute("Exch", "UnderlyingSecurityExchange_t_1641331812"); // 1
    Undly_66_set.insert("UnderlyingSecurityExchange_t_1641331812");
    Undly_66.add_attribute("Issr", "UnderlyingIssuer_t_1222959542"); // 1
    Undly_66_set.insert("UnderlyingIssuer_t_1222959542");
    Undly_66.add_attribute("EncUndIssrLen", "1730363774"); // 1
    Undly_66_set.insert("1730363774");
    Undly_66.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1114000350"); // 1
    Undly_66_set.insert("EncodedUnderlyingIssuer_t_1114000350");
    Undly_66.add_attribute("Desc", "UnderlyingSecurityDesc_t_1518070706"); // 1
    Undly_66_set.insert("UnderlyingSecurityDesc_t_1518070706");
    Undly_66.add_attribute("EncUndSecDescLen", "1955791552"); // 1
    Undly_66_set.insert("1955791552");
    Undly_66.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1430796126"); // 1
    Undly_66_set.insert("EncodedUnderlyingSecurityDesc_t_1430796126");
    Undly_66.add_attribute("CPPgm", "UnderlyingCPProgram_t_706687211"); // 1
    Undly_66_set.insert("UnderlyingCPProgram_t_706687211");
    Undly_66.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_968665600"); // 1
    Undly_66_set.insert("UnderlyingCPRegType_t_968665600");
    Undly_66.add_attribute("AllocPct", "18421360.040000"); // 1
    Undly_66_set.insert("18421360.040000");
    Undly_66.add_attribute("Ccy", "CAN"); // 1
    Undly_66_set.insert("CAN");
    Undly_66.add_attribute("Qty", "19132256.360000"); // 1
    Undly_66_set.insert("19132256.360000");
    Undly_66.add_attribute("SettlTyp", "2"); // 1
    Undly_66_set.insert("2");
    Undly_66.add_attribute("CashAmt", "UnderlyingCashAmount_t_1758411135"); // 1
    Undly_66_set.insert("UnderlyingCashAmount_t_1758411135");
    Undly_66.add_attribute("CashTyp", "DIFF"); // 1
    Undly_66_set.insert("DIFF");
    Undly_66.add_attribute("Px", "20843720.710000"); // 1
    Undly_66_set.insert("20843720.710000");
    Undly_66.add_attribute("DirtPx", "1051531.720000"); // 1
    Undly_66_set.insert("1051531.720000");
    Undly_66.add_attribute("EndPx", "9975127.870000"); // 1
    Undly_66_set.insert("9975127.870000");
    Undly_66.add_attribute("StartVal", "UnderlyingStartValue_t_666183644"); // 1
    Undly_66_set.insert("UnderlyingStartValue_t_666183644");
    Undly_66.add_attribute("CurVal", "UnderlyingCurrentValue_t_1306485646"); // 1
    Undly_66_set.insert("UnderlyingCurrentValue_t_1306485646");
    Undly_66.add_attribute("EndVal", "UnderlyingEndValue_t_586797554"); // 1
    Undly_66_set.insert("UnderlyingEndValue_t_586797554");
    Undly_66.add_attribute("AdjQty", "3914591.640000"); // 1
    Undly_66_set.insert("3914591.640000");
    Undly_66.add_attribute("FxRate", "2885331.530000"); // 1
    Undly_66_set.insert("2885331.530000");
    Undly_66.add_attribute("FxRateCalc", "D"); // 1
    Undly_66_set.insert("D");
    Undly_66.add_attribute("CapValu", "UnderlyingCapValue_t_1783302851"); // 1
    Undly_66_set.insert("UnderlyingCapValue_t_1783302851");
    Undly_66.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1311519826"); // 1
    Undly_66_set.insert("UnderlyingSettlMethod_t_1311519826");
    Undly_66.add_attribute("PutCall", "721477080"); // 1
    Undly_66_set.insert("721477080");
    all_values.push_back(Undly_66_set);
    all_compo_names.insert("Undly_66_set");

    {
      xml_element UndAID_66{"UndAID"};
      multiset<string> UndAID_66_set;
      UndAID_66.add_attribute("AltID", "UnderlyingSecurityAltID_t_913361979"); // 2
      UndAID_66_set.insert("UnderlyingSecurityAltID_t_913361979");
      UndAID_66.add_attribute("AltIDSrc", "B"); // 2
      UndAID_66_set.insert("B");
      all_values.push_back(UndAID_66_set);
      all_compo_names.insert("UndAID_66_set");

      Undly_66.add_element(UndAID_66);
    }
    {
      xml_element Stip_104{"Stip"};
      multiset<string> Stip_104_set;
      Stip_104.add_attribute("Typ", "MAT"); // 2
      Stip_104_set.insert("MAT");
      Stip_104.add_attribute("Val", "UnderlyingStipValue_t_407210143"); // 2
      Stip_104_set.insert("UnderlyingStipValue_t_407210143");
      all_values.push_back(Stip_104_set);
      all_compo_names.insert("Stip_104_set");

      Undly_66.add_element(Stip_104);
    }
    {
      xml_element Pty_261{"Pty"};
      multiset<string> Pty_261_set;
      Pty_261.add_attribute("ID", "UnderlyingInstrumentPartyID_t_984768630"); // 2
      Pty_261_set.insert("UnderlyingInstrumentPartyID_t_984768630");
      Pty_261.add_attribute("Src", "7"); // 2
      Pty_261_set.insert("7");
      Pty_261.add_attribute("R", "63"); // 2
      Pty_261_set.insert("63");
      all_values.push_back(Pty_261_set);
      all_compo_names.insert("Pty_261_set");

      {
        xml_element Sub_261{"Sub"};
        multiset<string> Sub_261_set;
        Sub_261.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_355355688"); // 3
        Sub_261_set.insert("UnderlyingInstrumentPartySubID_t_355355688");
        Sub_261.add_attribute("Typ", "27"); // 3
        Sub_261_set.insert("27");
        all_values.push_back(Sub_261_set);
        all_compo_names.insert("Sub_261_set");

        Pty_261.add_element(Sub_261);
      }
      Undly_66.add_element(Pty_261);
    }
    elt.add_element(Undly_66);
  } // end Undly
  { // OrdQty
    xml_element OrdQty_16{"OrdQty"};
    multiset<string> OrdQty_16_set;
    OrdQty_16.add_attribute("Qty", "8045229.710000"); // 1
    OrdQty_16_set.insert("8045229.710000");
    OrdQty_16.add_attribute("Cash", "10620428.990000"); // 1
    OrdQty_16_set.insert("10620428.990000");
    OrdQty_16.add_attribute("Pct", "4012740.520000"); // 1
    OrdQty_16_set.insert("4012740.520000");
    OrdQty_16.add_attribute("RndDir", "2"); // 1
    OrdQty_16_set.insert("2");
    OrdQty_16.add_attribute("RndMod", "293882.100000"); // 1
    OrdQty_16_set.insert("293882.100000");
    all_values.push_back(OrdQty_16_set);
    all_compo_names.insert("OrdQty_16_set");

    elt.add_element(OrdQty_16);
  } // end OrdQty
  { // TrgrInstr
    xml_element TrgrInstr_9{"TrgrInstr"};
    multiset<string> TrgrInstr_9_set;
    TrgrInstr_9.add_attribute("TrgrTyp", "2"); // 1
    TrgrInstr_9_set.insert("2");
    TrgrInstr_9.add_attribute("TrgrActn", "1"); // 1
    TrgrInstr_9_set.insert("1");
    TrgrInstr_9.add_attribute("TrgrPx", "4527494.500000"); // 1
    TrgrInstr_9_set.insert("4527494.500000");
    TrgrInstr_9.add_attribute("TrgrSym", "TriggerSymbol_t_12135609"); // 1
    TrgrInstr_9_set.insert("TriggerSymbol_t_12135609");
    TrgrInstr_9.add_attribute("TrgrSecID", "TriggerSecurityID_t_799869175"); // 1
    TrgrInstr_9_set.insert("TriggerSecurityID_t_799869175");
    TrgrInstr_9.add_attribute("TrgrSecIDSrc", "A"); // 1
    TrgrInstr_9_set.insert("A");
    TrgrInstr_9.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_117288781"); // 1
    TrgrInstr_9_set.insert("TriggerSecurityDesc_t_117288781");
    TrgrInstr_9.add_attribute("TrgrPxTyp", "3"); // 1
    TrgrInstr_9_set.insert("3");
    TrgrInstr_9.add_attribute("TrgrPxTypScp", "1"); // 1
    TrgrInstr_9_set.insert("1");
    TrgrInstr_9.add_attribute("TrgrPxDir", "D"); // 1
    TrgrInstr_9_set.insert("D");
    TrgrInstr_9.add_attribute("TrgrNewPx", "2366958.690000"); // 1
    TrgrInstr_9_set.insert("2366958.690000");
    TrgrInstr_9.add_attribute("TrgrOrdTyp", "1"); // 1
    TrgrInstr_9_set.insert("1");
    TrgrInstr_9.add_attribute("TrgrNewQty", "17123075.800000"); // 1
    TrgrInstr_9_set.insert("17123075.800000");
    TrgrInstr_9.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_1947919552"); // 1
    TrgrInstr_9_set.insert("TriggerTradingSessionID_t_1947919552");
    TrgrInstr_9.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_1083099885"); // 1
    TrgrInstr_9_set.insert("TriggerTradingSessionSubID_t_1083099885");
    all_values.push_back(TrgrInstr_9_set);
    all_compo_names.insert("TrgrInstr_9_set");

    elt.add_element(TrgrInstr_9);
  } // end TrgrInstr
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_22{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_22_set;
    SprdBnchmkCurve_22.add_attribute("Spread", "8763437.580000"); // 1
    SprdBnchmkCurve_22_set.insert("8763437.580000");
    SprdBnchmkCurve_22.add_attribute("Ccy", "USD"); // 1
    SprdBnchmkCurve_22_set.insert("USD");
    SprdBnchmkCurve_22.add_attribute("Name", "Treasury"); // 1
    SprdBnchmkCurve_22_set.insert("Treasury");
    SprdBnchmkCurve_22.add_attribute("Point", "BenchmarkCurvePoint_t_563333406"); // 1
    SprdBnchmkCurve_22_set.insert("BenchmarkCurvePoint_t_563333406");
    SprdBnchmkCurve_22.add_attribute("Px", "2561883.590000"); // 1
    SprdBnchmkCurve_22_set.insert("2561883.590000");
    SprdBnchmkCurve_22.add_attribute("PxTyp", "4"); // 1
    SprdBnchmkCurve_22_set.insert("4");
    SprdBnchmkCurve_22.add_attribute("SecID", "BenchmarkSecurityID_t_187633954"); // 1
    SprdBnchmkCurve_22_set.insert("BenchmarkSecurityID_t_187633954");
    SprdBnchmkCurve_22.add_attribute("SecIDSrc", "K"); // 1
    SprdBnchmkCurve_22_set.insert("K");
    all_values.push_back(SprdBnchmkCurve_22_set);
    all_compo_names.insert("SprdBnchmkCurve_22_set");

    elt.add_element(SprdBnchmkCurve_22);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_17{"Yield"};
    multiset<string> Yield_17_set;
    Yield_17.add_attribute("Typ", "LONGAVGLIFE"); // 1
    Yield_17_set.insert("LONGAVGLIFE");
    Yield_17.add_attribute("Yld", "17677260.540000"); // 1
    Yield_17_set.insert("17677260.540000");
    Yield_17.add_attribute("CalcDt", "YieldCalcDate_t_434438175"); // 1
    Yield_17_set.insert("YieldCalcDate_t_434438175");
    Yield_17.add_attribute("RedDt", "YieldRedemptionDate_t_892836417"); // 1
    Yield_17_set.insert("YieldRedemptionDate_t_892836417");
    Yield_17.add_attribute("RedPx", "215164.580000"); // 1
    Yield_17_set.insert("215164.580000");
    Yield_17.add_attribute("RedPxTyp", "16"); // 1
    Yield_17_set.insert("16");
    all_values.push_back(Yield_17_set);
    all_compo_names.insert("Yield_17_set");

    elt.add_element(Yield_17);
  } // end Yield
  { // PegInstr
    xml_element PegInstr_9{"PegInstr"};
    multiset<string> PegInstr_9_set;
    PegInstr_9.add_attribute("OfstVal", "9222246.280000"); // 1
    PegInstr_9_set.insert("9222246.280000");
    PegInstr_9.add_attribute("PegPxTyp", "5"); // 1
    PegInstr_9_set.insert("5");
    PegInstr_9.add_attribute("MoveTyp", "0"); // 1
    PegInstr_9_set.insert("0");
    PegInstr_9.add_attribute("OfstTyp", "2"); // 1
    PegInstr_9_set.insert("2");
    PegInstr_9.add_attribute("LmtTyp", "1"); // 1
    PegInstr_9_set.insert("1");
    PegInstr_9.add_attribute("RndDir", "2"); // 1
    PegInstr_9_set.insert("2");
    PegInstr_9.add_attribute("Scope", "4"); // 1
    PegInstr_9_set.insert("4");
    PegInstr_9.add_attribute("PegSecurityIDSource", "B"); // 1
    PegInstr_9_set.insert("B");
    PegInstr_9.add_attribute("PegSecID", "PegSecurityID_t_1648298308"); // 1
    PegInstr_9_set.insert("PegSecurityID_t_1648298308");
    PegInstr_9.add_attribute("PgSymbl", "PegSymbol_t_672949821"); // 1
    PegInstr_9_set.insert("PegSymbol_t_672949821");
    PegInstr_9.add_attribute("PegSecDesc", "PegSecurityDesc_t_1975923397"); // 1
    PegInstr_9_set.insert("PegSecurityDesc_t_1975923397");
    all_values.push_back(PegInstr_9_set);
    all_compo_names.insert("PegInstr_9_set");

    elt.add_element(PegInstr_9);
  } // end PegInstr
  { // DiscInstr
    xml_element DiscInstr_9{"DiscInstr"};
    multiset<string> DiscInstr_9_set;
    DiscInstr_9.add_attribute("DsctnInst", "1"); // 1
    DiscInstr_9_set.insert("1");
    DiscInstr_9.add_attribute("OfstValu", "21202305.030000"); // 1
    DiscInstr_9_set.insert("21202305.030000");
    DiscInstr_9.add_attribute("MoveTyp", "0"); // 1
    DiscInstr_9_set.insert("0");
    DiscInstr_9.add_attribute("OfstTyp", "1"); // 1
    DiscInstr_9_set.insert("1");
    DiscInstr_9.add_attribute("LimitTyp", "1"); // 1
    DiscInstr_9_set.insert("1");
    DiscInstr_9.add_attribute("RndDir", "1"); // 1
    DiscInstr_9_set.insert("1");
    DiscInstr_9.add_attribute("Scope", "2"); // 1
    DiscInstr_9_set.insert("2");
    all_values.push_back(DiscInstr_9_set);
    all_compo_names.insert("DiscInstr_9_set");

    elt.add_element(DiscInstr_9);
  } // end DiscInstr
  { // StrtPrmGrp
    xml_element StrtPrmGrp_14{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_14_set;
    StrtPrmGrp_14.add_attribute("StrtPrmNme", "StrategyParameterName_t_907760287"); // 1
    StrtPrmGrp_14_set.insert("StrategyParameterName_t_907760287");
    StrtPrmGrp_14.add_attribute("StrtPrmTyp", "21"); // 1
    StrtPrmGrp_14_set.insert("21");
    StrtPrmGrp_14.add_attribute("StrtPrmVal", "StrategyParameterValue_t_1161013315"); // 1
    StrtPrmGrp_14_set.insert("StrategyParameterValue_t_1161013315");
    all_values.push_back(StrtPrmGrp_14_set);
    all_compo_names.insert("StrtPrmGrp_14_set");

    elt.add_element(StrtPrmGrp_14);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_15{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_15_set;
    StrtPrmGrp_15.add_attribute("StrtPrmNme", "StrategyParameterName_t_383198117"); // 1
    StrtPrmGrp_15_set.insert("StrategyParameterName_t_383198117");
    StrtPrmGrp_15.add_attribute("StrtPrmTyp", "2"); // 1
    StrtPrmGrp_15_set.insert("2");
    StrtPrmGrp_15.add_attribute("StrtPrmVal", "StrategyParameterValue_t_790928519"); // 1
    StrtPrmGrp_15_set.insert("StrategyParameterValue_t_790928519");
    all_values.push_back(StrtPrmGrp_15_set);
    all_compo_names.insert("StrtPrmGrp_15_set");

    elt.add_element(StrtPrmGrp_15);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_16{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_16_set;
    StrtPrmGrp_16.add_attribute("StrtPrmNme", "StrategyParameterName_t_213991635"); // 1
    StrtPrmGrp_16_set.insert("StrategyParameterName_t_213991635");
    StrtPrmGrp_16.add_attribute("StrtPrmTyp", "18"); // 1
    StrtPrmGrp_16_set.insert("18");
    StrtPrmGrp_16.add_attribute("StrtPrmVal", "StrategyParameterValue_t_1225366694"); // 1
    StrtPrmGrp_16_set.insert("StrategyParameterValue_t_1225366694");
    all_values.push_back(StrtPrmGrp_16_set);
    all_compo_names.insert("StrtPrmGrp_16_set");

    elt.add_element(StrtPrmGrp_16);
  } // end StrtPrmGrp
  { // Comm
    xml_element Comm_22{"Comm"};
    multiset<string> Comm_22_set;
    Comm_22.add_attribute("Comm", "Commission_t_1106828052"); // 1
    Comm_22_set.insert("Commission_t_1106828052");
    Comm_22.add_attribute("CommTyp", "3"); // 1
    Comm_22_set.insert("3");
    Comm_22.add_attribute("Ccy", "JPY"); // 1
    Comm_22_set.insert("JPY");
    Comm_22.add_attribute("FundRenewWaiv", "N"); // 1
    Comm_22_set.insert("N");
    all_values.push_back(Comm_22_set);
    all_compo_names.insert("Comm_22_set");

    elt.add_element(Comm_22);
  } // end Comm
  { // TrdRegTS
    xml_element TrdRegTS_13{"TrdRegTS"};
    multiset<string> TrdRegTS_13_set;
    TrdRegTS_13.add_attribute("TS", "TrdRegTimestamp_t_1256543110"); // 1
    TrdRegTS_13_set.insert("TrdRegTimestamp_t_1256543110");
    TrdRegTS_13.add_attribute("Typ", "5"); // 1
    TrdRegTS_13_set.insert("5");
    TrdRegTS_13.add_attribute("Src", "TrdRegTimestampOrigin_t_1060943712"); // 1
    TrdRegTS_13_set.insert("TrdRegTimestampOrigin_t_1060943712");
    TrdRegTS_13.add_attribute("DskTyp", "A"); // 1
    TrdRegTS_13_set.insert("A");
    TrdRegTS_13.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_13_set.insert("1");
    TrdRegTS_13.add_attribute("DskOrdHndlInst", "SCL"); // 1
    TrdRegTS_13_set.insert("SCL");
    all_values.push_back(TrdRegTS_13_set);
    all_compo_names.insert("TrdRegTS_13_set");

    elt.add_element(TrdRegTS_13);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_14{"TrdRegTS"};
    multiset<string> TrdRegTS_14_set;
    TrdRegTS_14.add_attribute("TS", "TrdRegTimestamp_t_1546621235"); // 1
    TrdRegTS_14_set.insert("TrdRegTimestamp_t_1546621235");
    TrdRegTS_14.add_attribute("Typ", "5"); // 1
    TrdRegTS_14_set.insert("5");
    TrdRegTS_14.add_attribute("Src", "TrdRegTimestampOrigin_t_299268901"); // 1
    TrdRegTS_14_set.insert("TrdRegTimestampOrigin_t_299268901");
    TrdRegTS_14.add_attribute("DskTyp", "S"); // 1
    TrdRegTS_14_set.insert("S");
    TrdRegTS_14.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_14_set.insert("1");
    TrdRegTS_14.add_attribute("DskOrdHndlInst", "TS"); // 1
    TrdRegTS_14_set.insert("TS");
    all_values.push_back(TrdRegTS_14_set);
    all_compo_names.insert("TrdRegTS_14_set");

    elt.add_element(TrdRegTS_14);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_15{"TrdRegTS"};
    multiset<string> TrdRegTS_15_set;
    TrdRegTS_15.add_attribute("TS", "TrdRegTimestamp_t_427731182"); // 1
    TrdRegTS_15_set.insert("TrdRegTimestamp_t_427731182");
    TrdRegTS_15.add_attribute("Typ", "4"); // 1
    TrdRegTS_15_set.insert("4");
    TrdRegTS_15.add_attribute("Src", "TrdRegTimestampOrigin_t_2044558400"); // 1
    TrdRegTS_15_set.insert("TrdRegTimestampOrigin_t_2044558400");
    TrdRegTS_15.add_attribute("DskTyp", "AR"); // 1
    TrdRegTS_15_set.insert("AR");
    TrdRegTS_15.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_15_set.insert("1");
    TrdRegTS_15.add_attribute("DskOrdHndlInst", "NH"); // 1
    TrdRegTS_15_set.insert("NH");
    all_values.push_back(TrdRegTS_15_set);
    all_compo_names.insert("TrdRegTS_15_set");

    elt.add_element(TrdRegTS_15);
  } // end TrdRegTS
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
