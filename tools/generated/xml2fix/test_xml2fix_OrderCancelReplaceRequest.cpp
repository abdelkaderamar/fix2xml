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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdCxlRplcReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderCancelReplaceRequest_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_159445471"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("OrderID_t_159445471");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_254323061"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("TradeOriginationDate_t_254323061");
  elt.add_attribute("TrdDt", "TradeDate_t_997121947"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("TradeDate_t_997121947");
  elt.add_attribute("OrigID", "OrigClOrdID_t_1173432413"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("OrigClOrdID_t_1173432413");
  elt.add_attribute("ID", "ClOrdID_t_1380885964"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ClOrdID_t_1380885964");
  elt.add_attribute("ID2", "SecondaryClOrdID_t_521674370"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("SecondaryClOrdID_t_521674370");
  elt.add_attribute("LnkID", "ClOrdLinkID_t_2131420205"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ClOrdLinkID_t_2131420205");
  elt.add_attribute("ListID", "ListID_t_2118820311"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ListID_t_2118820311");
  elt.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_379977523"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("OrigOrdModTime_t_379977523");
  elt.add_attribute("Acct", "Account_t_1016178061"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("Account_t_1016178061");
  elt.add_attribute("AcctIDSrc", "4"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("4");
  elt.add_attribute("AcctTyp", "8"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("8");
  elt.add_attribute("DayBkngInst", "0"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("0");
  elt.add_attribute("BkngUnit", "1"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("1");
  elt.add_attribute("PreallocMeth", "0"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("0");
  elt.add_attribute("AllocID", "AllocID_t_312559086"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("AllocID_t_312559086");
  elt.add_attribute("SettlTyp", "3"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("3");
  elt.add_attribute("SettlDt", "SettlDate_t_833481890"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("SettlDate_t_833481890");
  elt.add_attribute("CshMgn", "2"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("ClrFeeInd", "E"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("E");
  elt.add_attribute("HandlInst", "3"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("3");
  elt.add_attribute("ExecInst", "f"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("f");
  elt.add_attribute("MinQty", "7032781.640000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("7032781.640000");
  elt.add_attribute("MtchInc", "5591249.670000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("5591249.670000");
  elt.add_attribute("MxPxLvls", "872028223"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("872028223");
  elt.add_attribute("MaxFloor", "20237042.610000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("20237042.610000");
  elt.add_attribute("ExDest", "ExDestination_t_187396522"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ExDestination_t_187396522");
  elt.add_attribute("ExDestIDSrc", "C"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("C");
  elt.add_attribute("Side", "6"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("6");
  elt.add_attribute("TxnTm", "TransactTime_t_420663261"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("TransactTime_t_420663261");
  elt.add_attribute("QtyTyp", "2"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("Typ", "5"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("5");
  elt.add_attribute("PxTyp", "2"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("Px", "2560112.930000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("2560112.930000");
  elt.add_attribute("PxPrtScp", "2"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("StopPx", "20558722.870000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("20558722.870000");
  elt.add_attribute("TgtStrategy", "2"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_1572563167"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("TargetStrategyParameters_t_1572563167");
  elt.add_attribute("ParticipationRt", "20272089.500000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("20272089.500000");
  elt.add_attribute("ComplianceID", "ComplianceID_t_1157663186"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ComplianceID_t_1157663186");
  elt.add_attribute("SolFlag", "N"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("N");
  elt.add_attribute("Ccy", "CHF"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("CHF");
  elt.add_attribute("TmInForce", "9"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("9");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_1667573048"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("EffectiveTime_t_1667573048");
  elt.add_attribute("ExpireDt", "ExpireDate_t_318398956"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ExpireDate_t_318398956");
  elt.add_attribute("ExpireTm", "ExpireTime_t_881286256"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ExpireTime_t_881286256");
  elt.add_attribute("GTBkngInst", "0"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("0");
  elt.add_attribute("Cpcty", "A"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("A");
  elt.add_attribute("Rstctions", "9"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("9");
  elt.add_attribute("PrTrdAnon", "false"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("false");
  elt.add_attribute("CustCpcty", "3"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("3");
  elt.add_attribute("ForexReq", "N"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("N");
  elt.add_attribute("SettlCcy", "CHF"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("CHF");
  elt.add_attribute("BkngTyp", "2"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("Txt", "Text_t_1271899127"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("Text_t_1271899127");
  elt.add_attribute("EncTxtLen", "1638496315"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("1638496315");
  elt.add_attribute("EncTxt", "EncodedText_t_1856352790"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("EncodedText_t_1856352790");
  elt.add_attribute("SettlDt2", "SettlDate2_t_1527647852"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("SettlDate2_t_1527647852");
  elt.add_attribute("Qty2", "20591595.770000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("20591595.770000");
  elt.add_attribute("Px2", "11152421.360000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("11152421.360000");
  elt.add_attribute("PosEfct", "F"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("F");
  elt.add_attribute("Covered", "0"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("0");
  elt.add_attribute("MaxShow", "13712534.290000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("13712534.290000");
  elt.add_attribute("LocReqd", "Y"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("Y");
  elt.add_attribute("CxllationRights", "Y"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("Y");
  elt.add_attribute("MnyLaunderingStat", "Y"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("Y");
  elt.add_attribute("RegistID", "RegistID_t_809064530"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("RegistID_t_809064530");
  elt.add_attribute("Designation", "Designation_t_374776193"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("Designation_t_374776193");
  elt.add_attribute("ManOrdInd", "true"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("true");
  elt.add_attribute("CustDrctdOrd", "true"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("true");
  elt.add_attribute("RcvdDptID", "ReceivedDeptID_t_721632998"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ReceivedDeptID_t_721632998");
  elt.add_attribute("CustOrdHdlInst", "NH"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("NH");
  elt.add_attribute("OrdHndlInstSrc", "1"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("1");
  all_values.push_back(OrderCancelReplaceRequest_message_t_0);
  all_compo_names.insert("OrderCancelReplaceRequest_message_t");

  { // Hdr
    xml_element Hdr_57{"Hdr"};
    multiset<string> Hdr_57_set;
    Hdr_57.add_attribute("SeqNum", "241722398"); // 1
    Hdr_57_set.insert("241722398");
    Hdr_57.add_attribute("SID", "SenderCompID_t_745314763"); // 1
    Hdr_57_set.insert("SenderCompID_t_745314763");
    Hdr_57.add_attribute("TID", "TargetCompID_t_552851887"); // 1
    Hdr_57_set.insert("TargetCompID_t_552851887");
    Hdr_57.add_attribute("OBID", "OnBehalfOfCompID_t_399117234"); // 1
    Hdr_57_set.insert("OnBehalfOfCompID_t_399117234");
    Hdr_57.add_attribute("D2ID", "DeliverToCompID_t_1897195609"); // 1
    Hdr_57_set.insert("DeliverToCompID_t_1897195609");
    Hdr_57.add_attribute("SSub", "SenderSubID_t_1942006965"); // 1
    Hdr_57_set.insert("SenderSubID_t_1942006965");
    Hdr_57.add_attribute("SLoc", "SenderLocationID_t_1091517583"); // 1
    Hdr_57_set.insert("SenderLocationID_t_1091517583");
    Hdr_57.add_attribute("TSub", "TargetSubID_t_641686787"); // 1
    Hdr_57_set.insert("TargetSubID_t_641686787");
    Hdr_57.add_attribute("TLoc", "TargetLocationID_t_1074735571"); // 1
    Hdr_57_set.insert("TargetLocationID_t_1074735571");
    Hdr_57.add_attribute("OBSub", "OnBehalfOfSubID_t_339712449"); // 1
    Hdr_57_set.insert("OnBehalfOfSubID_t_339712449");
    Hdr_57.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2092786580"); // 1
    Hdr_57_set.insert("OnBehalfOfLocationID_t_2092786580");
    Hdr_57.add_attribute("D2Sub", "DeliverToSubID_t_1079492400"); // 1
    Hdr_57_set.insert("DeliverToSubID_t_1079492400");
    Hdr_57.add_attribute("D2Loc", "DeliverToLocationID_t_1611611576"); // 1
    Hdr_57_set.insert("DeliverToLocationID_t_1611611576");
    Hdr_57.add_attribute("PosDup", "N"); // 1
    Hdr_57_set.insert("N");
    Hdr_57.add_attribute("PosRsnd", "Y"); // 1
    Hdr_57_set.insert("Y");
    Hdr_57.add_attribute("Snt", "SendingTime_t_991775781"); // 1
    Hdr_57_set.insert("SendingTime_t_991775781");
    Hdr_57.add_attribute("OrigSnt", "OrigSendingTime_t_1495475177"); // 1
    Hdr_57_set.insert("OrigSendingTime_t_1495475177");
    Hdr_57.add_attribute("MsgEncd", "MessageEncoding_t_1903603679"); // 1
    Hdr_57_set.insert("MessageEncoding_t_1903603679");
    all_values.push_back(Hdr_57_set);
    all_compo_names.insert("Hdr_57_set");

    {
      xml_element Hop_57{"Hop"};
      multiset<string> Hop_57_set;
      Hop_57.add_attribute("ID", "HopCompID_t_787134182"); // 2
      Hop_57_set.insert("HopCompID_t_787134182");
      Hop_57.add_attribute("Ref", "2082137429"); // 2
      Hop_57_set.insert("2082137429");
      Hop_57.add_attribute("Snt", "HopSendingTime_t_1127373460"); // 2
      Hop_57_set.insert("HopSendingTime_t_1127373460");
      all_values.push_back(Hop_57_set);
      all_compo_names.insert("Hop_57_set");

      Hdr_57.add_element(Hop_57);
    }
    elt.add_element(Hdr_57);
  } // end Hdr
  { // Pty
    xml_element Pty_236{"Pty"};
    multiset<string> Pty_236_set;
    Pty_236.add_attribute("ID", "PartyID_t_429704672"); // 1
    Pty_236_set.insert("PartyID_t_429704672");
    Pty_236.add_attribute("Src", "H"); // 1
    Pty_236_set.insert("H");
    Pty_236.add_attribute("R", "2"); // 1
    Pty_236_set.insert("2");
    all_values.push_back(Pty_236_set);
    all_compo_names.insert("Pty_236_set");

    {
      xml_element Sub_236{"Sub"};
      multiset<string> Sub_236_set;
      Sub_236.add_attribute("ID", "PartySubID_t_804480865"); // 2
      Sub_236_set.insert("PartySubID_t_804480865");
      Sub_236.add_attribute("Typ", "21"); // 2
      Sub_236_set.insert("21");
      all_values.push_back(Sub_236_set);
      all_compo_names.insert("Sub_236_set");

      Pty_236.add_element(Sub_236);
    }
    elt.add_element(Pty_236);
  } // end Pty
  { // PreAll
    xml_element PreAll_14{"PreAll"};
    multiset<string> PreAll_14_set;
    PreAll_14.add_attribute("Acct", "AllocAccount_t_1526113863"); // 1
    PreAll_14_set.insert("AllocAccount_t_1526113863");
    PreAll_14.add_attribute("ActIDSrc", "2"); // 1
    PreAll_14_set.insert("2");
    PreAll_14.add_attribute("AllocSettlCcy", "USD"); // 1
    PreAll_14_set.insert("USD");
    PreAll_14.add_attribute("IndAllocID", "IndividualAllocID_t_1312694457"); // 1
    PreAll_14_set.insert("IndividualAllocID_t_1312694457");
    PreAll_14.add_attribute("Qty", "1599560.560000"); // 1
    PreAll_14_set.insert("1599560.560000");
    all_values.push_back(PreAll_14_set);
    all_compo_names.insert("PreAll_14_set");

    {
      xml_element Pty_237{"Pty"};
      multiset<string> Pty_237_set;
      Pty_237.add_attribute("ID", "NestedPartyID_t_19469848"); // 2
      Pty_237_set.insert("NestedPartyID_t_19469848");
      Pty_237.add_attribute("Src", "F"); // 2
      Pty_237_set.insert("F");
      Pty_237.add_attribute("R", "33"); // 2
      Pty_237_set.insert("33");
      all_values.push_back(Pty_237_set);
      all_compo_names.insert("Pty_237_set");

      {
        xml_element Sub_237{"Sub"};
        multiset<string> Sub_237_set;
        Sub_237.add_attribute("ID", "NestedPartySubID_t_1110987431"); // 3
        Sub_237_set.insert("NestedPartySubID_t_1110987431");
        Sub_237.add_attribute("Typ", "11"); // 3
        Sub_237_set.insert("11");
        all_values.push_back(Sub_237_set);
        all_compo_names.insert("Sub_237_set");

        Pty_237.add_element(Sub_237);
      }
      PreAll_14.add_element(Pty_237);
    }
    elt.add_element(PreAll_14);
  } // end PreAll
  { // PreAll
    xml_element PreAll_15{"PreAll"};
    multiset<string> PreAll_15_set;
    PreAll_15.add_attribute("Acct", "AllocAccount_t_1029214945"); // 1
    PreAll_15_set.insert("AllocAccount_t_1029214945");
    PreAll_15.add_attribute("ActIDSrc", "4"); // 1
    PreAll_15_set.insert("4");
    PreAll_15.add_attribute("AllocSettlCcy", "EUR"); // 1
    PreAll_15_set.insert("EUR");
    PreAll_15.add_attribute("IndAllocID", "IndividualAllocID_t_914827809"); // 1
    PreAll_15_set.insert("IndividualAllocID_t_914827809");
    PreAll_15.add_attribute("Qty", "10857117.380000"); // 1
    PreAll_15_set.insert("10857117.380000");
    all_values.push_back(PreAll_15_set);
    all_compo_names.insert("PreAll_15_set");

    {
      xml_element Pty_238{"Pty"};
      multiset<string> Pty_238_set;
      Pty_238.add_attribute("ID", "NestedPartyID_t_749585240"); // 2
      Pty_238_set.insert("NestedPartyID_t_749585240");
      Pty_238.add_attribute("Src", "D"); // 2
      Pty_238_set.insert("D");
      Pty_238.add_attribute("R", "2"); // 2
      Pty_238_set.insert("2");
      all_values.push_back(Pty_238_set);
      all_compo_names.insert("Pty_238_set");

      {
        xml_element Sub_238{"Sub"};
        multiset<string> Sub_238_set;
        Sub_238.add_attribute("ID", "NestedPartySubID_t_505705271"); // 3
        Sub_238_set.insert("NestedPartySubID_t_505705271");
        Sub_238.add_attribute("Typ", "18"); // 3
        Sub_238_set.insert("18");
        all_values.push_back(Sub_238_set);
        all_compo_names.insert("Sub_238_set");

        Pty_238.add_element(Sub_238);
      }
      PreAll_15.add_element(Pty_238);
    }
    elt.add_element(PreAll_15);
  } // end PreAll
  { // DsplyInstr
    xml_element DsplyInstr_7{"DsplyInstr"};
    multiset<string> DsplyInstr_7_set;
    DsplyInstr_7.add_attribute("DisplayQty", "3683570.480000"); // 1
    DsplyInstr_7_set.insert("3683570.480000");
    DsplyInstr_7.add_attribute("SecDspQty", "16330787.310000"); // 1
    DsplyInstr_7_set.insert("16330787.310000");
    DsplyInstr_7.add_attribute("DspWhn", "2"); // 1
    DsplyInstr_7_set.insert("2");
    DsplyInstr_7.add_attribute("DspMthd", "1"); // 1
    DsplyInstr_7_set.insert("1");
    DsplyInstr_7.add_attribute("DsplLwQty", "6144239.870000"); // 1
    DsplyInstr_7_set.insert("6144239.870000");
    DsplyInstr_7.add_attribute("DisplayHighQty", "14025897.440000"); // 1
    DsplyInstr_7_set.insert("14025897.440000");
    DsplyInstr_7.add_attribute("DspMinIncr", "16025425.850000"); // 1
    DsplyInstr_7_set.insert("16025425.850000");
    DsplyInstr_7.add_attribute("RfrshQty", "7548878.730000"); // 1
    DsplyInstr_7_set.insert("7548878.730000");
    all_values.push_back(DsplyInstr_7_set);
    all_compo_names.insert("DsplyInstr_7_set");

    elt.add_element(DsplyInstr_7);
  } // end DsplyInstr
  { // TrdSes
    xml_element TrdSes_12{"TrdSes"};
    multiset<string> TrdSes_12_set;
    TrdSes_12.add_attribute("SesID", "2"); // 1
    TrdSes_12_set.insert("2");
    TrdSes_12.add_attribute("SesSub", "6"); // 1
    TrdSes_12_set.insert("6");
    all_values.push_back(TrdSes_12_set);
    all_compo_names.insert("TrdSes_12_set");

    elt.add_element(TrdSes_12);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_13{"TrdSes"};
    multiset<string> TrdSes_13_set;
    TrdSes_13.add_attribute("SesID", "5"); // 1
    TrdSes_13_set.insert("5");
    TrdSes_13.add_attribute("SesSub", "2"); // 1
    TrdSes_13_set.insert("2");
    all_values.push_back(TrdSes_13_set);
    all_compo_names.insert("TrdSes_13_set");

    elt.add_element(TrdSes_13);
  } // end TrdSes
  { // Instrmt
    xml_element Instrmt_45{"Instrmt"};
    multiset<string> Instrmt_45_set;
    Instrmt_45.add_attribute("Sym", "Symbol_t_487478376"); // 1
    Instrmt_45_set.insert("Symbol_t_487478376");
    Instrmt_45.add_attribute("Sfx", "CD"); // 1
    Instrmt_45_set.insert("CD");
    Instrmt_45.add_attribute("ID", "SecurityID_t_620995263"); // 1
    Instrmt_45_set.insert("SecurityID_t_620995263");
    Instrmt_45.add_attribute("Src", "J"); // 1
    Instrmt_45_set.insert("J");
    Instrmt_45.add_attribute("Prod", "7"); // 1
    Instrmt_45_set.insert("7");
    Instrmt_45.add_attribute("ProdCmplx", "ProductComplex_t_1731982694"); // 1
    Instrmt_45_set.insert("ProductComplex_t_1731982694");
    Instrmt_45.add_attribute("SecGrp", "SecurityGroup_t_1106494352"); // 1
    Instrmt_45_set.insert("SecurityGroup_t_1106494352");
    Instrmt_45.add_attribute("CFI", "CFICode_t_2088882824"); // 1
    Instrmt_45_set.insert("CFICode_t_2088882824");
    Instrmt_45.add_attribute("SecTyp", "FOR"); // 1
    Instrmt_45_set.insert("FOR");
    Instrmt_45.add_attribute("SubTyp", "SecuritySubType_t_608406843"); // 1
    Instrmt_45_set.insert("SecuritySubType_t_608406843");
    Instrmt_45.add_attribute("MMY", "2050106522"); // 1
    Instrmt_45_set.insert("2050106522");
    Instrmt_45.add_attribute("MatDt", "MaturityDate_t_1950026737"); // 1
    Instrmt_45_set.insert("MaturityDate_t_1950026737");
    Instrmt_45.add_attribute("MatTm", "1694118581"); // 1
    Instrmt_45_set.insert("1694118581");
    Instrmt_45.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_652208114"); // 1
    Instrmt_45_set.insert("SettleOnOpenFlag_t_652208114");
    Instrmt_45.add_attribute("AsgnMeth", "1709146679"); // 1
    Instrmt_45_set.insert("1709146679");
    Instrmt_45.add_attribute("Status", "2"); // 1
    Instrmt_45_set.insert("2");
    Instrmt_45.add_attribute("CpnPmt", "CouponPaymentDate_t_1157913386"); // 1
    Instrmt_45_set.insert("CouponPaymentDate_t_1157913386");
    Instrmt_45.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_45_set.insert("FR");
    Instrmt_45.add_attribute("Snrty", "SB"); // 1
    Instrmt_45_set.insert("SB");
    Instrmt_45.add_attribute("NotlPctOut", "6435084.690000"); // 1
    Instrmt_45_set.insert("6435084.690000");
    Instrmt_45.add_attribute("OrigNotlPctOut", "6778068.250000"); // 1
    Instrmt_45_set.insert("6778068.250000");
    Instrmt_45.add_attribute("AttchPnt", "11467569.700000"); // 1
    Instrmt_45_set.insert("11467569.700000");
    Instrmt_45.add_attribute("DetchPnt", "12579324.570000"); // 1
    Instrmt_45_set.insert("12579324.570000");
    Instrmt_45.add_attribute("Issued", "IssueDate_t_2080396570"); // 1
    Instrmt_45_set.insert("IssueDate_t_2080396570");
    Instrmt_45.add_attribute("RepoCollSecTyp", "601815907"); // 1
    Instrmt_45_set.insert("601815907");
    Instrmt_45.add_attribute("RepoTrm", "2012820330"); // 1
    Instrmt_45_set.insert("2012820330");
    Instrmt_45.add_attribute("RepoRt", "12710412.030000"); // 1
    Instrmt_45_set.insert("12710412.030000");
    Instrmt_45.add_attribute("Fctr", "15829887.080000"); // 1
    Instrmt_45_set.insert("15829887.080000");
    Instrmt_45.add_attribute("CrdRtg", "CreditRating_t_1187604249"); // 1
    Instrmt_45_set.insert("CreditRating_t_1187604249");
    Instrmt_45.add_attribute("Rgstry", "InstrRegistry_t_68790005"); // 1
    Instrmt_45_set.insert("InstrRegistry_t_68790005");
    Instrmt_45.add_attribute("IssuCtry", "37030475"); // 1
    Instrmt_45_set.insert("37030475");
    Instrmt_45.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1675082625"); // 1
    Instrmt_45_set.insert("StateOrProvinceOfIssue_t_1675082625");
    Instrmt_45.add_attribute("Lcl", "LocaleOfIssue_t_1173978511"); // 1
    Instrmt_45_set.insert("LocaleOfIssue_t_1173978511");
    Instrmt_45.add_attribute("Redeem", "RedemptionDate_t_658025738"); // 1
    Instrmt_45_set.insert("RedemptionDate_t_658025738");
    Instrmt_45.add_attribute("StrkPx", "10774837.720000"); // 1
    Instrmt_45_set.insert("10774837.720000");
    Instrmt_45.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_45_set.insert("CHF");
    Instrmt_45.add_attribute("StrkMult", "364944.760000"); // 1
    Instrmt_45_set.insert("364944.760000");
    Instrmt_45.add_attribute("StrkValu", "275619.190000"); // 1
    Instrmt_45_set.insert("275619.190000");
    Instrmt_45.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_45_set.insert("1");
    Instrmt_45.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_45_set.insert("5");
    Instrmt_45.add_attribute("StrkPxBndryPrcsn", "20776684.410000"); // 1
    Instrmt_45_set.insert("20776684.410000");
    Instrmt_45.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_45_set.insert("2");
    Instrmt_45.add_attribute("OptAt", "191536253"); // 1
    Instrmt_45_set.insert("191536253");
    Instrmt_45.add_attribute("Mult", "5823929.080000"); // 1
    Instrmt_45_set.insert("5823929.080000");
    Instrmt_45.add_attribute("MultTyp", "0"); // 1
    Instrmt_45_set.insert("0");
    Instrmt_45.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_45_set.insert("4");
    Instrmt_45.add_attribute("MinPxIncr", "17403062.940000"); // 1
    Instrmt_45_set.insert("17403062.940000");
    Instrmt_45.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_749846989"); // 1
    Instrmt_45_set.insert("MinPriceIncrementAmount_t_749846989");
    Instrmt_45.add_attribute("UOM", "t"); // 1
    Instrmt_45_set.insert("t");
    Instrmt_45.add_attribute("UOMQty", "2363311.150000"); // 1
    Instrmt_45_set.insert("2363311.150000");
    Instrmt_45.add_attribute("PxUOM", "Bbl"); // 1
    Instrmt_45_set.insert("Bbl");
    Instrmt_45.add_attribute("PxUOMQty", "16673266.730000"); // 1
    Instrmt_45_set.insert("16673266.730000");
    Instrmt_45.add_attribute("SettlMeth", "C"); // 1
    Instrmt_45_set.insert("C");
    Instrmt_45.add_attribute("ExerStyle", "1"); // 1
    Instrmt_45_set.insert("1");
    Instrmt_45.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_45_set.insert("3");
    Instrmt_45.add_attribute("OptPayAmt", "OptPayoutAmount_t_1359600255"); // 1
    Instrmt_45_set.insert("OptPayoutAmount_t_1359600255");
    Instrmt_45.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_45_set.insert("STD");
    Instrmt_45.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_45_set.insert("FUT");
    Instrmt_45.add_attribute("ListMeth", "0"); // 1
    Instrmt_45_set.insert("0");
    Instrmt_45.add_attribute("CapPx", "5529142.970000"); // 1
    Instrmt_45_set.insert("5529142.970000");
    Instrmt_45.add_attribute("FlrPx", "17416781.170000"); // 1
    Instrmt_45_set.insert("17416781.170000");
    Instrmt_45.add_attribute("PutCall", "0"); // 1
    Instrmt_45_set.insert("0");
    Instrmt_45.add_attribute("FlexInd", "false"); // 1
    Instrmt_45_set.insert("false");
    Instrmt_45.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_45_set.insert("false");
    Instrmt_45.add_attribute("TmUnit", "H"); // 1
    Instrmt_45_set.insert("H");
    Instrmt_45.add_attribute("CpnRt", "18130555.520000"); // 1
    Instrmt_45_set.insert("18130555.520000");
    Instrmt_45.add_attribute("Exch", "SecurityExchange_t_494744992"); // 1
    Instrmt_45_set.insert("SecurityExchange_t_494744992");
    Instrmt_45.add_attribute("PosLmt", "1041298082"); // 1
    Instrmt_45_set.insert("1041298082");
    Instrmt_45.add_attribute("NTPosLmt", "1840617471"); // 1
    Instrmt_45_set.insert("1840617471");
    Instrmt_45.add_attribute("Issr", "Issuer_t_1772468705"); // 1
    Instrmt_45_set.insert("Issuer_t_1772468705");
    Instrmt_45.add_attribute("EncIssrLen", "1686199402"); // 1
    Instrmt_45_set.insert("1686199402");
    Instrmt_45.add_attribute("EncIssr", "EncodedIssuer_t_1770802265"); // 1
    Instrmt_45_set.insert("EncodedIssuer_t_1770802265");
    Instrmt_45.add_attribute("Desc", "SecurityDesc_t_705251858"); // 1
    Instrmt_45_set.insert("SecurityDesc_t_705251858");
    Instrmt_45.add_attribute("EncSecDescLen", "1877735655"); // 1
    Instrmt_45_set.insert("1877735655");
    Instrmt_45.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_205711525"); // 1
    Instrmt_45_set.insert("EncodedSecurityDesc_t_205711525");
    Instrmt_45.add_attribute("Pool", "Pool_t_1347181691"); // 1
    Instrmt_45_set.insert("Pool_t_1347181691");
    Instrmt_45.add_attribute("CSetMo", "2049610109"); // 1
    Instrmt_45_set.insert("2049610109");
    Instrmt_45.add_attribute("CPPgm", "2"); // 1
    Instrmt_45_set.insert("2");
    Instrmt_45.add_attribute("CPRegT", "CPRegType_t_2097028680"); // 1
    Instrmt_45_set.insert("CPRegType_t_2097028680");
    Instrmt_45.add_attribute("Dated", "DatedDate_t_422696164"); // 1
    Instrmt_45_set.insert("DatedDate_t_422696164");
    Instrmt_45.add_attribute("IntAcrl", "InterestAccrualDate_t_34865286"); // 1
    Instrmt_45_set.insert("InterestAccrualDate_t_34865286");
    all_values.push_back(Instrmt_45_set);
    all_compo_names.insert("Instrmt_45_set");

    {
      xml_element AID_48{"AID"};
      multiset<string> AID_48_set;
      AID_48.add_attribute("AltID", "SecurityAltID_t_1377198847"); // 2
      AID_48_set.insert("SecurityAltID_t_1377198847");
      AID_48.add_attribute("AltIDSrc", "3"); // 2
      AID_48_set.insert("3");
      all_values.push_back(AID_48_set);
      all_compo_names.insert("AID_48_set");

      Instrmt_45.add_element(AID_48);
    }
    {
      xml_element SecXML_48{"SecXML"};
      multiset<string> SecXML_48_set;
      SecXML_48.add_attribute("Schema", "SecurityXMLSchema_t_1529128859"); // 2
      SecXML_48_set.insert("SecurityXMLSchema_t_1529128859");
      all_values.push_back(SecXML_48_set);
      all_compo_names.insert("SecXML_48_set");

      Instrmt_45.add_element(SecXML_48);
    }
    {
      xml_element Evnt_48{"Evnt"};
      multiset<string> Evnt_48_set;
      Evnt_48.add_attribute("EventTyp", "15"); // 2
      Evnt_48_set.insert("15");
      Evnt_48.add_attribute("Dt", "EventDate_t_64198123"); // 2
      Evnt_48_set.insert("EventDate_t_64198123");
      Evnt_48.add_attribute("Tm", "EventTime_t_741245466"); // 2
      Evnt_48_set.insert("EventTime_t_741245466");
      Evnt_48.add_attribute("Px", "10744062.270000"); // 2
      Evnt_48_set.insert("10744062.270000");
      Evnt_48.add_attribute("Txt", "EventText_t_1768845764"); // 2
      Evnt_48_set.insert("EventText_t_1768845764");
      all_values.push_back(Evnt_48_set);
      all_compo_names.insert("Evnt_48_set");

      Instrmt_45.add_element(Evnt_48);
    }
    {
      xml_element Pty_239{"Pty"};
      multiset<string> Pty_239_set;
      Pty_239.add_attribute("ID", "InstrumentPartyID_t_1140966322"); // 2
      Pty_239_set.insert("InstrumentPartyID_t_1140966322");
      Pty_239.add_attribute("Src", "G"); // 2
      Pty_239_set.insert("G");
      Pty_239.add_attribute("R", "60"); // 2
      Pty_239_set.insert("60");
      all_values.push_back(Pty_239_set);
      all_compo_names.insert("Pty_239_set");

      {
        xml_element Sub_239{"Sub"};
        multiset<string> Sub_239_set;
        Sub_239.add_attribute("ID", "InstrumentPartySubID_t_1068286156"); // 3
        Sub_239_set.insert("InstrumentPartySubID_t_1068286156");
        Sub_239.add_attribute("Typ", "17"); // 3
        Sub_239_set.insert("17");
        all_values.push_back(Sub_239_set);
        all_compo_names.insert("Sub_239_set");

        Pty_239.add_element(Sub_239);
      }
      Instrmt_45.add_element(Pty_239);
    }
    {
      xml_element CmplxEvnt_45{"CmplxEvnt"};
      multiset<string> CmplxEvnt_45_set;
      CmplxEvnt_45.add_attribute("Typ", "4"); // 2
      CmplxEvnt_45_set.insert("4");
      CmplxEvnt_45.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2073089762"); // 2
      CmplxEvnt_45_set.insert("ComplexOptPayoutAmount_t_2073089762");
      CmplxEvnt_45.add_attribute("Px", "8723015.900000"); // 2
      CmplxEvnt_45_set.insert("8723015.900000");
      CmplxEvnt_45.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_45_set.insert("4");
      CmplxEvnt_45.add_attribute("PxBndryPrcsn", "9669041.970000"); // 2
      CmplxEvnt_45_set.insert("9669041.970000");
      CmplxEvnt_45.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_45_set.insert("1");
      CmplxEvnt_45.add_attribute("Cond", "1"); // 2
      CmplxEvnt_45_set.insert("1");
      all_values.push_back(CmplxEvnt_45_set);
      all_compo_names.insert("CmplxEvnt_45_set");

      {
        xml_element EvntDts_45{"EvntDts"};
        multiset<string> EvntDts_45_set;
        EvntDts_45.add_attribute("StartDt", "ComplexEventStartDate_t_505619951"); // 3
        EvntDts_45_set.insert("ComplexEventStartDate_t_505619951");
        EvntDts_45.add_attribute("EndDt", "ComplexEventEndDate_t_188754030"); // 3
        EvntDts_45_set.insert("ComplexEventEndDate_t_188754030");
        all_values.push_back(EvntDts_45_set);
        all_compo_names.insert("EvntDts_45_set");

        {
          xml_element EvntTms_45{"EvntTms"};
          multiset<string> EvntTms_45_set;
          EvntTms_45.add_attribute("StartTm", "292758701"); // 4
          EvntTms_45_set.insert("292758701");
          EvntTms_45.add_attribute("EndTm", "235871958"); // 4
          EvntTms_45_set.insert("235871958");
          all_values.push_back(EvntTms_45_set);
          all_compo_names.insert("EvntTms_45_set");

          EvntDts_45.add_element(EvntTms_45);
        }
        CmplxEvnt_45.add_element(EvntDts_45);
      }
      Instrmt_45.add_element(CmplxEvnt_45);
    }
    elt.add_element(Instrmt_45);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_13{"FinDetls"};
    multiset<string> FinDetls_13_set;
    FinDetls_13.add_attribute("AgmtDesc", "AgreementDesc_t_394465555"); // 1
    FinDetls_13_set.insert("AgreementDesc_t_394465555");
    FinDetls_13.add_attribute("AgmtID", "AgreementID_t_1639940392"); // 1
    FinDetls_13_set.insert("AgreementID_t_1639940392");
    FinDetls_13.add_attribute("AgmtDt", "AgreementDate_t_137998419"); // 1
    FinDetls_13_set.insert("AgreementDate_t_137998419");
    FinDetls_13.add_attribute("AgmtCcy", "CHF"); // 1
    FinDetls_13_set.insert("CHF");
    FinDetls_13.add_attribute("TrmTyp", "4"); // 1
    FinDetls_13_set.insert("4");
    FinDetls_13.add_attribute("StartDt", "StartDate_t_227865013"); // 1
    FinDetls_13_set.insert("StartDate_t_227865013");
    FinDetls_13.add_attribute("EndDt", "EndDate_t_819200624"); // 1
    FinDetls_13_set.insert("EndDate_t_819200624");
    FinDetls_13.add_attribute("DlvryTyp", "1"); // 1
    FinDetls_13_set.insert("1");
    FinDetls_13.add_attribute("MgnRatio", "17569938.720000"); // 1
    FinDetls_13_set.insert("17569938.720000");
    all_values.push_back(FinDetls_13_set);
    all_compo_names.insert("FinDetls_13_set");

    elt.add_element(FinDetls_13);
  } // end FinDetls
  { // Undly
    xml_element Undly_58{"Undly"};
    multiset<string> Undly_58_set;
    Undly_58.add_attribute("Sym", "UnderlyingSymbol_t_567431896"); // 1
    Undly_58_set.insert("UnderlyingSymbol_t_567431896");
    Undly_58.add_attribute("Sfx", "CD"); // 1
    Undly_58_set.insert("CD");
    Undly_58.add_attribute("ID", "UnderlyingSecurityID_t_336405139"); // 1
    Undly_58_set.insert("UnderlyingSecurityID_t_336405139");
    Undly_58.add_attribute("Src", "2"); // 1
    Undly_58_set.insert("2");
    Undly_58.add_attribute("Prod", "10"); // 1
    Undly_58_set.insert("10");
    Undly_58.add_attribute("CFI", "UnderlyingCFICode_t_1963725664"); // 1
    Undly_58_set.insert("UnderlyingCFICode_t_1963725664");
    Undly_58.add_attribute("SecTyp", "TERM"); // 1
    Undly_58_set.insert("TERM");
    Undly_58.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_412524521"); // 1
    Undly_58_set.insert("UnderlyingSecuritySubType_t_412524521");
    Undly_58.add_attribute("MMY", "1022971702"); // 1
    Undly_58_set.insert("1022971702");
    Undly_58.add_attribute("Mat", "UnderlyingMaturityDate_t_1019611039"); // 1
    Undly_58_set.insert("UnderlyingMaturityDate_t_1019611039");
    Undly_58.add_attribute("MatTm", "338130635"); // 1
    Undly_58_set.insert("338130635");
    Undly_58.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1895273292"); // 1
    Undly_58_set.insert("UnderlyingCouponPaymentDate_t_1895273292");
    Undly_58.add_attribute("RestrctTyp", "MR"); // 1
    Undly_58_set.insert("MR");
    Undly_58.add_attribute("Snrty", "SB"); // 1
    Undly_58_set.insert("SB");
    Undly_58.add_attribute("NotlPctOut", "3132250.570000"); // 1
    Undly_58_set.insert("3132250.570000");
    Undly_58.add_attribute("OrigNotlPctOut", "5696396.670000"); // 1
    Undly_58_set.insert("5696396.670000");
    Undly_58.add_attribute("AttchPnt", "18106547.830000"); // 1
    Undly_58_set.insert("18106547.830000");
    Undly_58.add_attribute("DetchPnt", "5019790.880000"); // 1
    Undly_58_set.insert("5019790.880000");
    Undly_58.add_attribute("Issued", "UnderlyingIssueDate_t_862398368"); // 1
    Undly_58_set.insert("UnderlyingIssueDate_t_862398368");
    Undly_58.add_attribute("RepoCollSecTyp", "2046526741"); // 1
    Undly_58_set.insert("2046526741");
    Undly_58.add_attribute("RepoTrm", "896444643"); // 1
    Undly_58_set.insert("896444643");
    Undly_58.add_attribute("RepoRt", "3548551.130000"); // 1
    Undly_58_set.insert("3548551.130000");
    Undly_58.add_attribute("Fctr", "370415.120000"); // 1
    Undly_58_set.insert("370415.120000");
    Undly_58.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1089444370"); // 1
    Undly_58_set.insert("UnderlyingCreditRating_t_1089444370");
    Undly_58.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1944340538"); // 1
    Undly_58_set.insert("UnderlyingInstrRegistry_t_1944340538");
    Undly_58.add_attribute("Ctry", "597736096"); // 1
    Undly_58_set.insert("597736096");
    Undly_58.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1317309383"); // 1
    Undly_58_set.insert("UnderlyingStateOrProvinceOfIssue_t_1317309383");
    Undly_58.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_616057514"); // 1
    Undly_58_set.insert("UnderlyingLocaleOfIssue_t_616057514");
    Undly_58.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1100969869"); // 1
    Undly_58_set.insert("UnderlyingRedemptionDate_t_1100969869");
    Undly_58.add_attribute("StrkPx", "9268196.070000"); // 1
    Undly_58_set.insert("9268196.070000");
    Undly_58.add_attribute("StrkCcy", "USD"); // 1
    Undly_58_set.insert("USD");
    Undly_58.add_attribute("OptA", "1277575297"); // 1
    Undly_58_set.insert("1277575297");
    Undly_58.add_attribute("Mult", "2144615.640000"); // 1
    Undly_58_set.insert("2144615.640000");
    Undly_58.add_attribute("MultTyp", "2"); // 1
    Undly_58_set.insert("2");
    Undly_58.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_58_set.insert("1");
    Undly_58.add_attribute("UOM", "Bu"); // 1
    Undly_58_set.insert("Bu");
    Undly_58.add_attribute("UOMQty", "12615463.770000"); // 1
    Undly_58_set.insert("12615463.770000");
    Undly_58.add_attribute("PxUOM", "lbs"); // 1
    Undly_58_set.insert("lbs");
    Undly_58.add_attribute("PxUOMQty", "10536752.820000"); // 1
    Undly_58_set.insert("10536752.820000");
    Undly_58.add_attribute("TmUnit", "Mo"); // 1
    Undly_58_set.insert("Mo");
    Undly_58.add_attribute("ExerStyle", "0"); // 1
    Undly_58_set.insert("0");
    Undly_58.add_attribute("CpnRt", "8014649.260000"); // 1
    Undly_58_set.insert("8014649.260000");
    Undly_58.add_attribute("Exch", "UnderlyingSecurityExchange_t_1115806594"); // 1
    Undly_58_set.insert("UnderlyingSecurityExchange_t_1115806594");
    Undly_58.add_attribute("Issr", "UnderlyingIssuer_t_530020002"); // 1
    Undly_58_set.insert("UnderlyingIssuer_t_530020002");
    Undly_58.add_attribute("EncUndIssrLen", "1114689984"); // 1
    Undly_58_set.insert("1114689984");
    Undly_58.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1685446261"); // 1
    Undly_58_set.insert("EncodedUnderlyingIssuer_t_1685446261");
    Undly_58.add_attribute("Desc", "UnderlyingSecurityDesc_t_193191138"); // 1
    Undly_58_set.insert("UnderlyingSecurityDesc_t_193191138");
    Undly_58.add_attribute("EncUndSecDescLen", "1616669072"); // 1
    Undly_58_set.insert("1616669072");
    Undly_58.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_400360982"); // 1
    Undly_58_set.insert("EncodedUnderlyingSecurityDesc_t_400360982");
    Undly_58.add_attribute("CPPgm", "UnderlyingCPProgram_t_92234231"); // 1
    Undly_58_set.insert("UnderlyingCPProgram_t_92234231");
    Undly_58.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_365630067"); // 1
    Undly_58_set.insert("UnderlyingCPRegType_t_365630067");
    Undly_58.add_attribute("AllocPct", "7552160.950000"); // 1
    Undly_58_set.insert("7552160.950000");
    Undly_58.add_attribute("Ccy", "EUR"); // 1
    Undly_58_set.insert("EUR");
    Undly_58.add_attribute("Qty", "5520729.850000"); // 1
    Undly_58_set.insert("5520729.850000");
    Undly_58.add_attribute("SettlTyp", "2"); // 1
    Undly_58_set.insert("2");
    Undly_58.add_attribute("CashAmt", "UnderlyingCashAmount_t_624900172"); // 1
    Undly_58_set.insert("UnderlyingCashAmount_t_624900172");
    Undly_58.add_attribute("CashTyp", "DIFF"); // 1
    Undly_58_set.insert("DIFF");
    Undly_58.add_attribute("Px", "18279817.090000"); // 1
    Undly_58_set.insert("18279817.090000");
    Undly_58.add_attribute("DirtPx", "15517197.790000"); // 1
    Undly_58_set.insert("15517197.790000");
    Undly_58.add_attribute("EndPx", "10461869.240000"); // 1
    Undly_58_set.insert("10461869.240000");
    Undly_58.add_attribute("StartVal", "UnderlyingStartValue_t_1348899827"); // 1
    Undly_58_set.insert("UnderlyingStartValue_t_1348899827");
    Undly_58.add_attribute("CurVal", "UnderlyingCurrentValue_t_681811428"); // 1
    Undly_58_set.insert("UnderlyingCurrentValue_t_681811428");
    Undly_58.add_attribute("EndVal", "UnderlyingEndValue_t_1260648489"); // 1
    Undly_58_set.insert("UnderlyingEndValue_t_1260648489");
    Undly_58.add_attribute("AdjQty", "10586119.580000"); // 1
    Undly_58_set.insert("10586119.580000");
    Undly_58.add_attribute("FxRate", "13036250.900000"); // 1
    Undly_58_set.insert("13036250.900000");
    Undly_58.add_attribute("FxRateCalc", "D"); // 1
    Undly_58_set.insert("D");
    Undly_58.add_attribute("CapValu", "UnderlyingCapValue_t_172674688"); // 1
    Undly_58_set.insert("UnderlyingCapValue_t_172674688");
    Undly_58.add_attribute("SetMeth", "UnderlyingSettlMethod_t_190479624"); // 1
    Undly_58_set.insert("UnderlyingSettlMethod_t_190479624");
    Undly_58.add_attribute("PutCall", "197543704"); // 1
    Undly_58_set.insert("197543704");
    all_values.push_back(Undly_58_set);
    all_compo_names.insert("Undly_58_set");

    {
      xml_element UndAID_58{"UndAID"};
      multiset<string> UndAID_58_set;
      UndAID_58.add_attribute("AltID", "UnderlyingSecurityAltID_t_306348457"); // 2
      UndAID_58_set.insert("UnderlyingSecurityAltID_t_306348457");
      UndAID_58.add_attribute("AltIDSrc", "1"); // 2
      UndAID_58_set.insert("1");
      all_values.push_back(UndAID_58_set);
      all_compo_names.insert("UndAID_58_set");

      Undly_58.add_element(UndAID_58);
    }
    {
      xml_element Stip_95{"Stip"};
      multiset<string> Stip_95_set;
      Stip_95.add_attribute("Typ", "INTERNALPX"); // 2
      Stip_95_set.insert("INTERNALPX");
      Stip_95.add_attribute("Val", "UnderlyingStipValue_t_1422155051"); // 2
      Stip_95_set.insert("UnderlyingStipValue_t_1422155051");
      all_values.push_back(Stip_95_set);
      all_compo_names.insert("Stip_95_set");

      Undly_58.add_element(Stip_95);
    }
    {
      xml_element Pty_240{"Pty"};
      multiset<string> Pty_240_set;
      Pty_240.add_attribute("ID", "UnderlyingInstrumentPartyID_t_2092968445"); // 2
      Pty_240_set.insert("UnderlyingInstrumentPartyID_t_2092968445");
      Pty_240.add_attribute("Src", "F"); // 2
      Pty_240_set.insert("F");
      Pty_240.add_attribute("R", "25"); // 2
      Pty_240_set.insert("25");
      all_values.push_back(Pty_240_set);
      all_compo_names.insert("Pty_240_set");

      {
        xml_element Sub_240{"Sub"};
        multiset<string> Sub_240_set;
        Sub_240.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_138675935"); // 3
        Sub_240_set.insert("UnderlyingInstrumentPartySubID_t_138675935");
        Sub_240.add_attribute("Typ", "33"); // 3
        Sub_240_set.insert("33");
        all_values.push_back(Sub_240_set);
        all_compo_names.insert("Sub_240_set");

        Pty_240.add_element(Sub_240);
      }
      Undly_58.add_element(Pty_240);
    }
    elt.add_element(Undly_58);
  } // end Undly
  { // Undly
    xml_element Undly_59{"Undly"};
    multiset<string> Undly_59_set;
    Undly_59.add_attribute("Sym", "UnderlyingSymbol_t_1360478646"); // 1
    Undly_59_set.insert("UnderlyingSymbol_t_1360478646");
    Undly_59.add_attribute("Sfx", "CD"); // 1
    Undly_59_set.insert("CD");
    Undly_59.add_attribute("ID", "UnderlyingSecurityID_t_1948514106"); // 1
    Undly_59_set.insert("UnderlyingSecurityID_t_1948514106");
    Undly_59.add_attribute("Src", "I"); // 1
    Undly_59_set.insert("I");
    Undly_59.add_attribute("Prod", "3"); // 1
    Undly_59_set.insert("3");
    Undly_59.add_attribute("CFI", "UnderlyingCFICode_t_1256104895"); // 1
    Undly_59_set.insert("UnderlyingCFICode_t_1256104895");
    Undly_59.add_attribute("SecTyp", "CMBS"); // 1
    Undly_59_set.insert("CMBS");
    Undly_59.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1087197750"); // 1
    Undly_59_set.insert("UnderlyingSecuritySubType_t_1087197750");
    Undly_59.add_attribute("MMY", "1881005068"); // 1
    Undly_59_set.insert("1881005068");
    Undly_59.add_attribute("Mat", "UnderlyingMaturityDate_t_1688414577"); // 1
    Undly_59_set.insert("UnderlyingMaturityDate_t_1688414577");
    Undly_59.add_attribute("MatTm", "767695812"); // 1
    Undly_59_set.insert("767695812");
    Undly_59.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1285241199"); // 1
    Undly_59_set.insert("UnderlyingCouponPaymentDate_t_1285241199");
    Undly_59.add_attribute("RestrctTyp", "MM"); // 1
    Undly_59_set.insert("MM");
    Undly_59.add_attribute("Snrty", "SB"); // 1
    Undly_59_set.insert("SB");
    Undly_59.add_attribute("NotlPctOut", "19670526.280000"); // 1
    Undly_59_set.insert("19670526.280000");
    Undly_59.add_attribute("OrigNotlPctOut", "18477663.430000"); // 1
    Undly_59_set.insert("18477663.430000");
    Undly_59.add_attribute("AttchPnt", "10277239.500000"); // 1
    Undly_59_set.insert("10277239.500000");
    Undly_59.add_attribute("DetchPnt", "11231940.700000"); // 1
    Undly_59_set.insert("11231940.700000");
    Undly_59.add_attribute("Issued", "UnderlyingIssueDate_t_991634764"); // 1
    Undly_59_set.insert("UnderlyingIssueDate_t_991634764");
    Undly_59.add_attribute("RepoCollSecTyp", "1200398638"); // 1
    Undly_59_set.insert("1200398638");
    Undly_59.add_attribute("RepoTrm", "1313673694"); // 1
    Undly_59_set.insert("1313673694");
    Undly_59.add_attribute("RepoRt", "11891784.680000"); // 1
    Undly_59_set.insert("11891784.680000");
    Undly_59.add_attribute("Fctr", "15067470.950000"); // 1
    Undly_59_set.insert("15067470.950000");
    Undly_59.add_attribute("CrdRtg", "UnderlyingCreditRating_t_729138489"); // 1
    Undly_59_set.insert("UnderlyingCreditRating_t_729138489");
    Undly_59.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_40703451"); // 1
    Undly_59_set.insert("UnderlyingInstrRegistry_t_40703451");
    Undly_59.add_attribute("Ctry", "781418498"); // 1
    Undly_59_set.insert("781418498");
    Undly_59.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_674623286"); // 1
    Undly_59_set.insert("UnderlyingStateOrProvinceOfIssue_t_674623286");
    Undly_59.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_6918417"); // 1
    Undly_59_set.insert("UnderlyingLocaleOfIssue_t_6918417");
    Undly_59.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1741536162"); // 1
    Undly_59_set.insert("UnderlyingRedemptionDate_t_1741536162");
    Undly_59.add_attribute("StrkPx", "8132992.210000"); // 1
    Undly_59_set.insert("8132992.210000");
    Undly_59.add_attribute("StrkCcy", "CAN"); // 1
    Undly_59_set.insert("CAN");
    Undly_59.add_attribute("OptA", "1044209387"); // 1
    Undly_59_set.insert("1044209387");
    Undly_59.add_attribute("Mult", "13908329.140000"); // 1
    Undly_59_set.insert("13908329.140000");
    Undly_59.add_attribute("MultTyp", "1"); // 1
    Undly_59_set.insert("1");
    Undly_59.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_59_set.insert("3");
    Undly_59.add_attribute("UOM", "Bu"); // 1
    Undly_59_set.insert("Bu");
    Undly_59.add_attribute("UOMQty", "14430263.330000"); // 1
    Undly_59_set.insert("14430263.330000");
    Undly_59.add_attribute("PxUOM", "Bu"); // 1
    Undly_59_set.insert("Bu");
    Undly_59.add_attribute("PxUOMQty", "2329755.810000"); // 1
    Undly_59_set.insert("2329755.810000");
    Undly_59.add_attribute("TmUnit", "Min"); // 1
    Undly_59_set.insert("Min");
    Undly_59.add_attribute("ExerStyle", "1"); // 1
    Undly_59_set.insert("1");
    Undly_59.add_attribute("CpnRt", "15182167.810000"); // 1
    Undly_59_set.insert("15182167.810000");
    Undly_59.add_attribute("Exch", "UnderlyingSecurityExchange_t_1571075116"); // 1
    Undly_59_set.insert("UnderlyingSecurityExchange_t_1571075116");
    Undly_59.add_attribute("Issr", "UnderlyingIssuer_t_1080917204"); // 1
    Undly_59_set.insert("UnderlyingIssuer_t_1080917204");
    Undly_59.add_attribute("EncUndIssrLen", "1337785761"); // 1
    Undly_59_set.insert("1337785761");
    Undly_59.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1271357811"); // 1
    Undly_59_set.insert("EncodedUnderlyingIssuer_t_1271357811");
    Undly_59.add_attribute("Desc", "UnderlyingSecurityDesc_t_2108641154"); // 1
    Undly_59_set.insert("UnderlyingSecurityDesc_t_2108641154");
    Undly_59.add_attribute("EncUndSecDescLen", "313496183"); // 1
    Undly_59_set.insert("313496183");
    Undly_59.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_115508928"); // 1
    Undly_59_set.insert("EncodedUnderlyingSecurityDesc_t_115508928");
    Undly_59.add_attribute("CPPgm", "UnderlyingCPProgram_t_1161556144"); // 1
    Undly_59_set.insert("UnderlyingCPProgram_t_1161556144");
    Undly_59.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1627169877"); // 1
    Undly_59_set.insert("UnderlyingCPRegType_t_1627169877");
    Undly_59.add_attribute("AllocPct", "13046873.960000"); // 1
    Undly_59_set.insert("13046873.960000");
    Undly_59.add_attribute("Ccy", "JPY"); // 1
    Undly_59_set.insert("JPY");
    Undly_59.add_attribute("Qty", "13453908.470000"); // 1
    Undly_59_set.insert("13453908.470000");
    Undly_59.add_attribute("SettlTyp", "2"); // 1
    Undly_59_set.insert("2");
    Undly_59.add_attribute("CashAmt", "UnderlyingCashAmount_t_883448004"); // 1
    Undly_59_set.insert("UnderlyingCashAmount_t_883448004");
    Undly_59.add_attribute("CashTyp", "DIFF"); // 1
    Undly_59_set.insert("DIFF");
    Undly_59.add_attribute("Px", "8962906.030000"); // 1
    Undly_59_set.insert("8962906.030000");
    Undly_59.add_attribute("DirtPx", "16967472.250000"); // 1
    Undly_59_set.insert("16967472.250000");
    Undly_59.add_attribute("EndPx", "7946280.730000"); // 1
    Undly_59_set.insert("7946280.730000");
    Undly_59.add_attribute("StartVal", "UnderlyingStartValue_t_1850821764"); // 1
    Undly_59_set.insert("UnderlyingStartValue_t_1850821764");
    Undly_59.add_attribute("CurVal", "UnderlyingCurrentValue_t_593472965"); // 1
    Undly_59_set.insert("UnderlyingCurrentValue_t_593472965");
    Undly_59.add_attribute("EndVal", "UnderlyingEndValue_t_37977339"); // 1
    Undly_59_set.insert("UnderlyingEndValue_t_37977339");
    Undly_59.add_attribute("AdjQty", "6260803.710000"); // 1
    Undly_59_set.insert("6260803.710000");
    Undly_59.add_attribute("FxRate", "19978682.630000"); // 1
    Undly_59_set.insert("19978682.630000");
    Undly_59.add_attribute("FxRateCalc", "M"); // 1
    Undly_59_set.insert("M");
    Undly_59.add_attribute("CapValu", "UnderlyingCapValue_t_2069106704"); // 1
    Undly_59_set.insert("UnderlyingCapValue_t_2069106704");
    Undly_59.add_attribute("SetMeth", "UnderlyingSettlMethod_t_194494015"); // 1
    Undly_59_set.insert("UnderlyingSettlMethod_t_194494015");
    Undly_59.add_attribute("PutCall", "770407082"); // 1
    Undly_59_set.insert("770407082");
    all_values.push_back(Undly_59_set);
    all_compo_names.insert("Undly_59_set");

    {
      xml_element UndAID_59{"UndAID"};
      multiset<string> UndAID_59_set;
      UndAID_59.add_attribute("AltID", "UnderlyingSecurityAltID_t_905580318"); // 2
      UndAID_59_set.insert("UnderlyingSecurityAltID_t_905580318");
      UndAID_59.add_attribute("AltIDSrc", "F"); // 2
      UndAID_59_set.insert("F");
      all_values.push_back(UndAID_59_set);
      all_compo_names.insert("UndAID_59_set");

      Undly_59.add_element(UndAID_59);
    }
    {
      xml_element Stip_96{"Stip"};
      multiset<string> Stip_96_set;
      Stip_96.add_attribute("Typ", "WAL"); // 2
      Stip_96_set.insert("WAL");
      Stip_96.add_attribute("Val", "UnderlyingStipValue_t_329171787"); // 2
      Stip_96_set.insert("UnderlyingStipValue_t_329171787");
      all_values.push_back(Stip_96_set);
      all_compo_names.insert("Stip_96_set");

      Undly_59.add_element(Stip_96);
    }
    {
      xml_element Pty_241{"Pty"};
      multiset<string> Pty_241_set;
      Pty_241.add_attribute("ID", "UnderlyingInstrumentPartyID_t_239732784"); // 2
      Pty_241_set.insert("UnderlyingInstrumentPartyID_t_239732784");
      Pty_241.add_attribute("Src", "5"); // 2
      Pty_241_set.insert("5");
      Pty_241.add_attribute("R", "68"); // 2
      Pty_241_set.insert("68");
      all_values.push_back(Pty_241_set);
      all_compo_names.insert("Pty_241_set");

      {
        xml_element Sub_241{"Sub"};
        multiset<string> Sub_241_set;
        Sub_241.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_200890290"); // 3
        Sub_241_set.insert("UnderlyingInstrumentPartySubID_t_200890290");
        Sub_241.add_attribute("Typ", "1"); // 3
        Sub_241_set.insert("1");
        all_values.push_back(Sub_241_set);
        all_compo_names.insert("Sub_241_set");

        Pty_241.add_element(Sub_241);
      }
      Undly_59.add_element(Pty_241);
    }
    elt.add_element(Undly_59);
  } // end Undly
  { // Undly
    xml_element Undly_60{"Undly"};
    multiset<string> Undly_60_set;
    Undly_60.add_attribute("Sym", "UnderlyingSymbol_t_1716038526"); // 1
    Undly_60_set.insert("UnderlyingSymbol_t_1716038526");
    Undly_60.add_attribute("Sfx", "CD"); // 1
    Undly_60_set.insert("CD");
    Undly_60.add_attribute("ID", "UnderlyingSecurityID_t_1272108388"); // 1
    Undly_60_set.insert("UnderlyingSecurityID_t_1272108388");
    Undly_60.add_attribute("Src", "G"); // 1
    Undly_60_set.insert("G");
    Undly_60.add_attribute("Prod", "13"); // 1
    Undly_60_set.insert("13");
    Undly_60.add_attribute("CFI", "UnderlyingCFICode_t_1480933107"); // 1
    Undly_60_set.insert("UnderlyingCFICode_t_1480933107");
    Undly_60.add_attribute("SecTyp", "TBOND"); // 1
    Undly_60_set.insert("TBOND");
    Undly_60.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1038020466"); // 1
    Undly_60_set.insert("UnderlyingSecuritySubType_t_1038020466");
    Undly_60.add_attribute("MMY", "216897463"); // 1
    Undly_60_set.insert("216897463");
    Undly_60.add_attribute("Mat", "UnderlyingMaturityDate_t_1423458739"); // 1
    Undly_60_set.insert("UnderlyingMaturityDate_t_1423458739");
    Undly_60.add_attribute("MatTm", "1934311069"); // 1
    Undly_60_set.insert("1934311069");
    Undly_60.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1913644689"); // 1
    Undly_60_set.insert("UnderlyingCouponPaymentDate_t_1913644689");
    Undly_60.add_attribute("RestrctTyp", "FR"); // 1
    Undly_60_set.insert("FR");
    Undly_60.add_attribute("Snrty", "SD"); // 1
    Undly_60_set.insert("SD");
    Undly_60.add_attribute("NotlPctOut", "3596340.060000"); // 1
    Undly_60_set.insert("3596340.060000");
    Undly_60.add_attribute("OrigNotlPctOut", "1085805.030000"); // 1
    Undly_60_set.insert("1085805.030000");
    Undly_60.add_attribute("AttchPnt", "1162459.090000"); // 1
    Undly_60_set.insert("1162459.090000");
    Undly_60.add_attribute("DetchPnt", "2100186.210000"); // 1
    Undly_60_set.insert("2100186.210000");
    Undly_60.add_attribute("Issued", "UnderlyingIssueDate_t_646012004"); // 1
    Undly_60_set.insert("UnderlyingIssueDate_t_646012004");
    Undly_60.add_attribute("RepoCollSecTyp", "37868965"); // 1
    Undly_60_set.insert("37868965");
    Undly_60.add_attribute("RepoTrm", "404512636"); // 1
    Undly_60_set.insert("404512636");
    Undly_60.add_attribute("RepoRt", "14164190.860000"); // 1
    Undly_60_set.insert("14164190.860000");
    Undly_60.add_attribute("Fctr", "9434492.830000"); // 1
    Undly_60_set.insert("9434492.830000");
    Undly_60.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1710811864"); // 1
    Undly_60_set.insert("UnderlyingCreditRating_t_1710811864");
    Undly_60.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1557559301"); // 1
    Undly_60_set.insert("UnderlyingInstrRegistry_t_1557559301");
    Undly_60.add_attribute("Ctry", "1272621070"); // 1
    Undly_60_set.insert("1272621070");
    Undly_60.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1950544648"); // 1
    Undly_60_set.insert("UnderlyingStateOrProvinceOfIssue_t_1950544648");
    Undly_60.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_889001629"); // 1
    Undly_60_set.insert("UnderlyingLocaleOfIssue_t_889001629");
    Undly_60.add_attribute("Redeem", "UnderlyingRedemptionDate_t_725667021"); // 1
    Undly_60_set.insert("UnderlyingRedemptionDate_t_725667021");
    Undly_60.add_attribute("StrkPx", "39512.900000"); // 1
    Undly_60_set.insert("39512.900000");
    Undly_60.add_attribute("StrkCcy", "EUR"); // 1
    Undly_60_set.insert("EUR");
    Undly_60.add_attribute("OptA", "1366397724"); // 1
    Undly_60_set.insert("1366397724");
    Undly_60.add_attribute("Mult", "18060485.280000"); // 1
    Undly_60_set.insert("18060485.280000");
    Undly_60.add_attribute("MultTyp", "2"); // 1
    Undly_60_set.insert("2");
    Undly_60.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_60_set.insert("1");
    Undly_60.add_attribute("UOM", "t"); // 1
    Undly_60_set.insert("t");
    Undly_60.add_attribute("UOMQty", "12386136.490000"); // 1
    Undly_60_set.insert("12386136.490000");
    Undly_60.add_attribute("PxUOM", "Bu"); // 1
    Undly_60_set.insert("Bu");
    Undly_60.add_attribute("PxUOMQty", "13563954.510000"); // 1
    Undly_60_set.insert("13563954.510000");
    Undly_60.add_attribute("TmUnit", "Min"); // 1
    Undly_60_set.insert("Min");
    Undly_60.add_attribute("ExerStyle", "0"); // 1
    Undly_60_set.insert("0");
    Undly_60.add_attribute("CpnRt", "11225564.920000"); // 1
    Undly_60_set.insert("11225564.920000");
    Undly_60.add_attribute("Exch", "UnderlyingSecurityExchange_t_585191905"); // 1
    Undly_60_set.insert("UnderlyingSecurityExchange_t_585191905");
    Undly_60.add_attribute("Issr", "UnderlyingIssuer_t_1417193527"); // 1
    Undly_60_set.insert("UnderlyingIssuer_t_1417193527");
    Undly_60.add_attribute("EncUndIssrLen", "1482190498"); // 1
    Undly_60_set.insert("1482190498");
    Undly_60.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_693772408"); // 1
    Undly_60_set.insert("EncodedUnderlyingIssuer_t_693772408");
    Undly_60.add_attribute("Desc", "UnderlyingSecurityDesc_t_1533439436"); // 1
    Undly_60_set.insert("UnderlyingSecurityDesc_t_1533439436");
    Undly_60.add_attribute("EncUndSecDescLen", "1692209119"); // 1
    Undly_60_set.insert("1692209119");
    Undly_60.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1339784412"); // 1
    Undly_60_set.insert("EncodedUnderlyingSecurityDesc_t_1339784412");
    Undly_60.add_attribute("CPPgm", "UnderlyingCPProgram_t_1571308401"); // 1
    Undly_60_set.insert("UnderlyingCPProgram_t_1571308401");
    Undly_60.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2096721755"); // 1
    Undly_60_set.insert("UnderlyingCPRegType_t_2096721755");
    Undly_60.add_attribute("AllocPct", "6087198.500000"); // 1
    Undly_60_set.insert("6087198.500000");
    Undly_60.add_attribute("Ccy", "GBP"); // 1
    Undly_60_set.insert("GBP");
    Undly_60.add_attribute("Qty", "187955.030000"); // 1
    Undly_60_set.insert("187955.030000");
    Undly_60.add_attribute("SettlTyp", "4"); // 1
    Undly_60_set.insert("4");
    Undly_60.add_attribute("CashAmt", "UnderlyingCashAmount_t_1463110972"); // 1
    Undly_60_set.insert("UnderlyingCashAmount_t_1463110972");
    Undly_60.add_attribute("CashTyp", "FIXED"); // 1
    Undly_60_set.insert("FIXED");
    Undly_60.add_attribute("Px", "2180784.800000"); // 1
    Undly_60_set.insert("2180784.800000");
    Undly_60.add_attribute("DirtPx", "14670622.630000"); // 1
    Undly_60_set.insert("14670622.630000");
    Undly_60.add_attribute("EndPx", "14417372.720000"); // 1
    Undly_60_set.insert("14417372.720000");
    Undly_60.add_attribute("StartVal", "UnderlyingStartValue_t_512300379"); // 1
    Undly_60_set.insert("UnderlyingStartValue_t_512300379");
    Undly_60.add_attribute("CurVal", "UnderlyingCurrentValue_t_685976339"); // 1
    Undly_60_set.insert("UnderlyingCurrentValue_t_685976339");
    Undly_60.add_attribute("EndVal", "UnderlyingEndValue_t_1100302153"); // 1
    Undly_60_set.insert("UnderlyingEndValue_t_1100302153");
    Undly_60.add_attribute("AdjQty", "16797645.540000"); // 1
    Undly_60_set.insert("16797645.540000");
    Undly_60.add_attribute("FxRate", "17881564.410000"); // 1
    Undly_60_set.insert("17881564.410000");
    Undly_60.add_attribute("FxRateCalc", "M"); // 1
    Undly_60_set.insert("M");
    Undly_60.add_attribute("CapValu", "UnderlyingCapValue_t_770894555"); // 1
    Undly_60_set.insert("UnderlyingCapValue_t_770894555");
    Undly_60.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1780873360"); // 1
    Undly_60_set.insert("UnderlyingSettlMethod_t_1780873360");
    Undly_60.add_attribute("PutCall", "1448711943"); // 1
    Undly_60_set.insert("1448711943");
    all_values.push_back(Undly_60_set);
    all_compo_names.insert("Undly_60_set");

    {
      xml_element UndAID_60{"UndAID"};
      multiset<string> UndAID_60_set;
      UndAID_60.add_attribute("AltID", "UnderlyingSecurityAltID_t_1285483295"); // 2
      UndAID_60_set.insert("UnderlyingSecurityAltID_t_1285483295");
      UndAID_60.add_attribute("AltIDSrc", "8"); // 2
      UndAID_60_set.insert("8");
      all_values.push_back(UndAID_60_set);
      all_compo_names.insert("UndAID_60_set");

      Undly_60.add_element(UndAID_60);
    }
    {
      xml_element Stip_97{"Stip"};
      multiset<string> Stip_97_set;
      Stip_97.add_attribute("Typ", "REFINT"); // 2
      Stip_97_set.insert("REFINT");
      Stip_97.add_attribute("Val", "UnderlyingStipValue_t_1870675200"); // 2
      Stip_97_set.insert("UnderlyingStipValue_t_1870675200");
      all_values.push_back(Stip_97_set);
      all_compo_names.insert("Stip_97_set");

      Undly_60.add_element(Stip_97);
    }
    {
      xml_element Pty_242{"Pty"};
      multiset<string> Pty_242_set;
      Pty_242.add_attribute("ID", "UnderlyingInstrumentPartyID_t_830127580"); // 2
      Pty_242_set.insert("UnderlyingInstrumentPartyID_t_830127580");
      Pty_242.add_attribute("Src", "G"); // 2
      Pty_242_set.insert("G");
      Pty_242.add_attribute("R", "39"); // 2
      Pty_242_set.insert("39");
      all_values.push_back(Pty_242_set);
      all_compo_names.insert("Pty_242_set");

      {
        xml_element Sub_242{"Sub"};
        multiset<string> Sub_242_set;
        Sub_242.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_216083368"); // 3
        Sub_242_set.insert("UnderlyingInstrumentPartySubID_t_216083368");
        Sub_242.add_attribute("Typ", "33"); // 3
        Sub_242_set.insert("33");
        all_values.push_back(Sub_242_set);
        all_compo_names.insert("Sub_242_set");

        Pty_242.add_element(Sub_242);
      }
      Undly_60.add_element(Pty_242);
    }
    elt.add_element(Undly_60);
  } // end Undly
  { // OrdQty
    xml_element OrdQty_16{"OrdQty"};
    multiset<string> OrdQty_16_set;
    OrdQty_16.add_attribute("Qty", "17567483.730000"); // 1
    OrdQty_16_set.insert("17567483.730000");
    OrdQty_16.add_attribute("Cash", "17873917.690000"); // 1
    OrdQty_16_set.insert("17873917.690000");
    OrdQty_16.add_attribute("Pct", "13999388.640000"); // 1
    OrdQty_16_set.insert("13999388.640000");
    OrdQty_16.add_attribute("RndDir", "1"); // 1
    OrdQty_16_set.insert("1");
    OrdQty_16.add_attribute("RndMod", "71821.580000"); // 1
    OrdQty_16_set.insert("71821.580000");
    all_values.push_back(OrdQty_16_set);
    all_compo_names.insert("OrdQty_16_set");

    elt.add_element(OrdQty_16);
  } // end OrdQty
  { // TrgrInstr
    xml_element TrgrInstr_7{"TrgrInstr"};
    multiset<string> TrgrInstr_7_set;
    TrgrInstr_7.add_attribute("TrgrTyp", "1"); // 1
    TrgrInstr_7_set.insert("1");
    TrgrInstr_7.add_attribute("TrgrActn", "1"); // 1
    TrgrInstr_7_set.insert("1");
    TrgrInstr_7.add_attribute("TrgrPx", "16470772.650000"); // 1
    TrgrInstr_7_set.insert("16470772.650000");
    TrgrInstr_7.add_attribute("TrgrSym", "TriggerSymbol_t_228132512"); // 1
    TrgrInstr_7_set.insert("TriggerSymbol_t_228132512");
    TrgrInstr_7.add_attribute("TrgrSecID", "TriggerSecurityID_t_1144577212"); // 1
    TrgrInstr_7_set.insert("TriggerSecurityID_t_1144577212");
    TrgrInstr_7.add_attribute("TrgrSecIDSrc", "E"); // 1
    TrgrInstr_7_set.insert("E");
    TrgrInstr_7.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_1695194775"); // 1
    TrgrInstr_7_set.insert("TriggerSecurityDesc_t_1695194775");
    TrgrInstr_7.add_attribute("TrgrPxTyp", "5"); // 1
    TrgrInstr_7_set.insert("5");
    TrgrInstr_7.add_attribute("TrgrPxTypScp", "0"); // 1
    TrgrInstr_7_set.insert("0");
    TrgrInstr_7.add_attribute("TrgrPxDir", "D"); // 1
    TrgrInstr_7_set.insert("D");
    TrgrInstr_7.add_attribute("TrgrNewPx", "15391329.890000"); // 1
    TrgrInstr_7_set.insert("15391329.890000");
    TrgrInstr_7.add_attribute("TrgrOrdTyp", "1"); // 1
    TrgrInstr_7_set.insert("1");
    TrgrInstr_7.add_attribute("TrgrNewQty", "20218439.080000"); // 1
    TrgrInstr_7_set.insert("20218439.080000");
    TrgrInstr_7.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_1631449482"); // 1
    TrgrInstr_7_set.insert("TriggerTradingSessionID_t_1631449482");
    TrgrInstr_7.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_533147937"); // 1
    TrgrInstr_7_set.insert("TriggerTradingSessionSubID_t_533147937");
    all_values.push_back(TrgrInstr_7_set);
    all_compo_names.insert("TrgrInstr_7_set");

    elt.add_element(TrgrInstr_7);
  } // end TrgrInstr
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_18{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_18_set;
    SprdBnchmkCurve_18.add_attribute("Spread", "16552336.200000"); // 1
    SprdBnchmkCurve_18_set.insert("16552336.200000");
    SprdBnchmkCurve_18.add_attribute("Ccy", "CHF"); // 1
    SprdBnchmkCurve_18_set.insert("CHF");
    SprdBnchmkCurve_18.add_attribute("Name", "SWAP"); // 1
    SprdBnchmkCurve_18_set.insert("SWAP");
    SprdBnchmkCurve_18.add_attribute("Point", "BenchmarkCurvePoint_t_1356462565"); // 1
    SprdBnchmkCurve_18_set.insert("BenchmarkCurvePoint_t_1356462565");
    SprdBnchmkCurve_18.add_attribute("Px", "15418227.850000"); // 1
    SprdBnchmkCurve_18_set.insert("15418227.850000");
    SprdBnchmkCurve_18.add_attribute("PxTyp", "7"); // 1
    SprdBnchmkCurve_18_set.insert("7");
    SprdBnchmkCurve_18.add_attribute("SecID", "BenchmarkSecurityID_t_1114954202"); // 1
    SprdBnchmkCurve_18_set.insert("BenchmarkSecurityID_t_1114954202");
    SprdBnchmkCurve_18.add_attribute("SecIDSrc", "5"); // 1
    SprdBnchmkCurve_18_set.insert("5");
    all_values.push_back(SprdBnchmkCurve_18_set);
    all_compo_names.insert("SprdBnchmkCurve_18_set");

    elt.add_element(SprdBnchmkCurve_18);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_13{"Yield"};
    multiset<string> Yield_13_set;
    Yield_13.add_attribute("Typ", "MARK"); // 1
    Yield_13_set.insert("MARK");
    Yield_13.add_attribute("Yld", "4181713.110000"); // 1
    Yield_13_set.insert("4181713.110000");
    Yield_13.add_attribute("CalcDt", "YieldCalcDate_t_1568051472"); // 1
    Yield_13_set.insert("YieldCalcDate_t_1568051472");
    Yield_13.add_attribute("RedDt", "YieldRedemptionDate_t_1754286744"); // 1
    Yield_13_set.insert("YieldRedemptionDate_t_1754286744");
    Yield_13.add_attribute("RedPx", "18181101.750000"); // 1
    Yield_13_set.insert("18181101.750000");
    Yield_13.add_attribute("RedPxTyp", "18"); // 1
    Yield_13_set.insert("18");
    all_values.push_back(Yield_13_set);
    all_compo_names.insert("Yield_13_set");

    elt.add_element(Yield_13);
  } // end Yield
  { // PegInstr
    xml_element PegInstr_7{"PegInstr"};
    multiset<string> PegInstr_7_set;
    PegInstr_7.add_attribute("OfstVal", "17614689.020000"); // 1
    PegInstr_7_set.insert("17614689.020000");
    PegInstr_7.add_attribute("PegPxTyp", "4"); // 1
    PegInstr_7_set.insert("4");
    PegInstr_7.add_attribute("MoveTyp", "1"); // 1
    PegInstr_7_set.insert("1");
    PegInstr_7.add_attribute("OfstTyp", "3"); // 1
    PegInstr_7_set.insert("3");
    PegInstr_7.add_attribute("LmtTyp", "0"); // 1
    PegInstr_7_set.insert("0");
    PegInstr_7.add_attribute("RndDir", "2"); // 1
    PegInstr_7_set.insert("2");
    PegInstr_7.add_attribute("Scope", "1"); // 1
    PegInstr_7_set.insert("1");
    PegInstr_7.add_attribute("PegSecurityIDSource", "E"); // 1
    PegInstr_7_set.insert("E");
    PegInstr_7.add_attribute("PegSecID", "PegSecurityID_t_1458740528"); // 1
    PegInstr_7_set.insert("PegSecurityID_t_1458740528");
    PegInstr_7.add_attribute("PgSymbl", "PegSymbol_t_1208707093"); // 1
    PegInstr_7_set.insert("PegSymbol_t_1208707093");
    PegInstr_7.add_attribute("PegSecDesc", "PegSecurityDesc_t_592662822"); // 1
    PegInstr_7_set.insert("PegSecurityDesc_t_592662822");
    all_values.push_back(PegInstr_7_set);
    all_compo_names.insert("PegInstr_7_set");

    elt.add_element(PegInstr_7);
  } // end PegInstr
  { // DiscInstr
    xml_element DiscInstr_7{"DiscInstr"};
    multiset<string> DiscInstr_7_set;
    DiscInstr_7.add_attribute("DsctnInst", "5"); // 1
    DiscInstr_7_set.insert("5");
    DiscInstr_7.add_attribute("OfstValu", "9709604.750000"); // 1
    DiscInstr_7_set.insert("9709604.750000");
    DiscInstr_7.add_attribute("MoveTyp", "0"); // 1
    DiscInstr_7_set.insert("0");
    DiscInstr_7.add_attribute("OfstTyp", "3"); // 1
    DiscInstr_7_set.insert("3");
    DiscInstr_7.add_attribute("LimitTyp", "0"); // 1
    DiscInstr_7_set.insert("0");
    DiscInstr_7.add_attribute("RndDir", "1"); // 1
    DiscInstr_7_set.insert("1");
    DiscInstr_7.add_attribute("Scope", "2"); // 1
    DiscInstr_7_set.insert("2");
    all_values.push_back(DiscInstr_7_set);
    all_compo_names.insert("DiscInstr_7_set");

    elt.add_element(DiscInstr_7);
  } // end DiscInstr
  { // StrtPrmGrp
    xml_element StrtPrmGrp_13{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_13_set;
    StrtPrmGrp_13.add_attribute("StrtPrmNme", "StrategyParameterName_t_1042940728"); // 1
    StrtPrmGrp_13_set.insert("StrategyParameterName_t_1042940728");
    StrtPrmGrp_13.add_attribute("StrtPrmTyp", "19"); // 1
    StrtPrmGrp_13_set.insert("19");
    StrtPrmGrp_13.add_attribute("StrtPrmVal", "StrategyParameterValue_t_569595135"); // 1
    StrtPrmGrp_13_set.insert("StrategyParameterValue_t_569595135");
    all_values.push_back(StrtPrmGrp_13_set);
    all_compo_names.insert("StrtPrmGrp_13_set");

    elt.add_element(StrtPrmGrp_13);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_14{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_14_set;
    StrtPrmGrp_14.add_attribute("StrtPrmNme", "StrategyParameterName_t_793752335"); // 1
    StrtPrmGrp_14_set.insert("StrategyParameterName_t_793752335");
    StrtPrmGrp_14.add_attribute("StrtPrmTyp", "8"); // 1
    StrtPrmGrp_14_set.insert("8");
    StrtPrmGrp_14.add_attribute("StrtPrmVal", "StrategyParameterValue_t_380898234"); // 1
    StrtPrmGrp_14_set.insert("StrategyParameterValue_t_380898234");
    all_values.push_back(StrtPrmGrp_14_set);
    all_compo_names.insert("StrtPrmGrp_14_set");

    elt.add_element(StrtPrmGrp_14);
  } // end StrtPrmGrp
  { // Comm
    xml_element Comm_17{"Comm"};
    multiset<string> Comm_17_set;
    Comm_17.add_attribute("Comm", "Commission_t_760647310"); // 1
    Comm_17_set.insert("Commission_t_760647310");
    Comm_17.add_attribute("CommTyp", "4"); // 1
    Comm_17_set.insert("4");
    Comm_17.add_attribute("Ccy", "GBP"); // 1
    Comm_17_set.insert("GBP");
    Comm_17.add_attribute("FundRenewWaiv", "N"); // 1
    Comm_17_set.insert("N");
    all_values.push_back(Comm_17_set);
    all_compo_names.insert("Comm_17_set");

    elt.add_element(Comm_17);
  } // end Comm
  { // TrdRegTS
    xml_element TrdRegTS_12{"TrdRegTS"};
    multiset<string> TrdRegTS_12_set;
    TrdRegTS_12.add_attribute("TS", "TrdRegTimestamp_t_2128919309"); // 1
    TrdRegTS_12_set.insert("TrdRegTimestamp_t_2128919309");
    TrdRegTS_12.add_attribute("Typ", "6"); // 1
    TrdRegTS_12_set.insert("6");
    TrdRegTS_12.add_attribute("Src", "TrdRegTimestampOrigin_t_1462834585"); // 1
    TrdRegTS_12_set.insert("TrdRegTimestampOrigin_t_1462834585");
    TrdRegTS_12.add_attribute("DskTyp", "A"); // 1
    TrdRegTS_12_set.insert("A");
    TrdRegTS_12.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_12_set.insert("1");
    TrdRegTS_12.add_attribute("DskOrdHndlInst", "TMO"); // 1
    TrdRegTS_12_set.insert("TMO");
    all_values.push_back(TrdRegTS_12_set);
    all_compo_names.insert("TrdRegTS_12_set");

    elt.add_element(TrdRegTS_12);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_13{"TrdRegTS"};
    multiset<string> TrdRegTS_13_set;
    TrdRegTS_13.add_attribute("TS", "TrdRegTimestamp_t_73749149"); // 1
    TrdRegTS_13_set.insert("TrdRegTimestamp_t_73749149");
    TrdRegTS_13.add_attribute("Typ", "1"); // 1
    TrdRegTS_13_set.insert("1");
    TrdRegTS_13.add_attribute("Src", "TrdRegTimestampOrigin_t_1794001157"); // 1
    TrdRegTS_13_set.insert("TrdRegTimestampOrigin_t_1794001157");
    TrdRegTS_13.add_attribute("DskTyp", "AR"); // 1
    TrdRegTS_13_set.insert("AR");
    TrdRegTS_13.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_13_set.insert("1");
    TrdRegTS_13.add_attribute("DskOrdHndlInst", "CNH"); // 1
    TrdRegTS_13_set.insert("CNH");
    all_values.push_back(TrdRegTS_13_set);
    all_compo_names.insert("TrdRegTS_13_set");

    elt.add_element(TrdRegTS_13);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_14{"TrdRegTS"};
    multiset<string> TrdRegTS_14_set;
    TrdRegTS_14.add_attribute("TS", "TrdRegTimestamp_t_105933069"); // 1
    TrdRegTS_14_set.insert("TrdRegTimestamp_t_105933069");
    TrdRegTS_14.add_attribute("Typ", "3"); // 1
    TrdRegTS_14_set.insert("3");
    TrdRegTS_14.add_attribute("Src", "TrdRegTimestampOrigin_t_831263082"); // 1
    TrdRegTS_14_set.insert("TrdRegTimestampOrigin_t_831263082");
    TrdRegTS_14.add_attribute("DskTyp", "O"); // 1
    TrdRegTS_14_set.insert("O");
    TrdRegTS_14.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_14_set.insert("1");
    TrdRegTS_14.add_attribute("DskOrdHndlInst", "MAC"); // 1
    TrdRegTS_14_set.insert("MAC");
    all_values.push_back(TrdRegTS_14_set);
    all_compo_names.insert("TrdRegTS_14_set");

    elt.add_element(TrdRegTS_14);
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
