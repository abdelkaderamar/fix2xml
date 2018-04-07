#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MultilegOrderCancelReplace.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MultilegOrderCancelReplace_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MlegOrdCxlRplc" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MultilegOrderCancelReplace_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_1143807045"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("OrderID_t_1143807045");
  elt.add_attribute("OrigClOrdID", "OrigClOrdID_t_691730000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("OrigClOrdID_t_691730000");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1702083401"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("ClOrdID_t_1702083401");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1849073425"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("SecondaryClOrdID_t_1849073425");
  elt.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_1846195906"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("ClOrdLinkID_t_1846195906");
  elt.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_1912078912"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("OrigOrdModTime_t_1912078912");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_1087630017"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("TradeOriginationDate_t_1087630017");
  elt.add_attribute("TrdDt", "TradeDate_t_2113716330"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("TradeDate_t_2113716330");
  elt.add_attribute("Acct", "Account_t_634934501"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("Account_t_634934501");
  elt.add_attribute("AcctIDSrc", "99"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("99");
  elt.add_attribute("AcctTyp", "1"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("1");
  elt.add_attribute("DayBkngInst", "2"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("2");
  elt.add_attribute("BkngUnit", "2"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("2");
  elt.add_attribute("PreallocMeth", "0"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("0");
  elt.add_attribute("AllocID", "AllocID_t_1891108878"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("AllocID_t_1891108878");
  elt.add_attribute("SettlTyp", "4"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("4");
  elt.add_attribute("SettlDt", "SettlDate_t_804925850"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("SettlDate_t_804925850");
  elt.add_attribute("CshMgn", "1"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("1");
  elt.add_attribute("ClrFeeInd", "H"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("H");
  elt.add_attribute("HandlInst", "3"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("3");
  elt.add_attribute("ExecInst", "d"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("d");
  elt.add_attribute("MinQty", "14459687.000000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("14459687.000000");
  elt.add_attribute("MtchInc", "14333669.350000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("14333669.350000");
  elt.add_attribute("MxPxLvls", "1876855076"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("1876855076");
  elt.add_attribute("MaxFloor", "18667166.810000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("18667166.810000");
  elt.add_attribute("ExDest", "ExDestination_t_1707601756"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("ExDestination_t_1707601756");
  elt.add_attribute("ExDestIDSrc", "E"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("E");
  elt.add_attribute("ProcCode", "4"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("4");
  elt.add_attribute("Side", "2"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("2");
  elt.add_attribute("PrevClsPx", "4464512.560000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("4464512.560000");
  elt.add_attribute("SwapPnts", "6051694.910000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("6051694.910000");
  elt.add_attribute("LocReqd", "Y"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("Y");
  elt.add_attribute("TxnTm", "TransactTime_t_1138181256"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("TransactTime_t_1138181256");
  elt.add_attribute("QtyTyp", "0"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("0");
  elt.add_attribute("OrdTyp", "H"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("H");
  elt.add_attribute("MlegModel", "2"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("2");
  elt.add_attribute("MlegPxMeth", "1"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("1");
  elt.add_attribute("PxTyp", "13"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("13");
  elt.add_attribute("Px", "8031261.960000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("8031261.960000");
  elt.add_attribute("PxPrtScp", "2"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("2");
  elt.add_attribute("StopPx", "11168293.130000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("11168293.130000");
  elt.add_attribute("Ccy", "EUR"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("EUR");
  elt.add_attribute("ComplianceID", "ComplianceID_t_8499266"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("ComplianceID_t_8499266");
  elt.add_attribute("SolFlag", "Y"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("Y");
  elt.add_attribute("IOIID", "IOIID_t_930880409"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("IOIID_t_930880409");
  elt.add_attribute("QID", "QuoteID_t_1803920395"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("QuoteID_t_1803920395");
  elt.add_attribute("TmInForce", "7"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("7");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_473231770"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("EffectiveTime_t_473231770");
  elt.add_attribute("ExpireDt", "ExpireDate_t_1692622951"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("ExpireDate_t_1692622951");
  elt.add_attribute("ExpireTm", "ExpireTime_t_1430376582"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("ExpireTime_t_1430376582");
  elt.add_attribute("GTBkngInst", "2"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("2");
  elt.add_attribute("Cpcty", "G"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("G");
  elt.add_attribute("Rstctions", "F"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("F");
  elt.add_attribute("PrTrdAnon", "false"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("false");
  elt.add_attribute("CustCpcty", "1"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("1");
  elt.add_attribute("ForexReq", "N"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("N");
  elt.add_attribute("SettlCcy", "CHF"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("CHF");
  elt.add_attribute("BkngTyp", "0"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("0");
  elt.add_attribute("Txt", "Text_t_189764089"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("Text_t_189764089");
  elt.add_attribute("EncTxtLen", "441587718"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("441587718");
  elt.add_attribute("EncTxt", "EncodedText_t_1854155778"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("EncodedText_t_1854155778");
  elt.add_attribute("PosEfct", "F"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("F");
  elt.add_attribute("Covered", "1"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("1");
  elt.add_attribute("MaxShow", "18427961.550000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("18427961.550000");
  elt.add_attribute("TgtStrategy", "2"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("2");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_525721472"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("TargetStrategyParameters_t_525721472");
  elt.add_attribute("RFR", "7715829.000000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("7715829.000000");
  elt.add_attribute("ParticipationRt", "8204814.080000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("8204814.080000");
  elt.add_attribute("CxllationRights", "Y"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("Y");
  elt.add_attribute("MnyLaunderingStat", "N"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("N");
  elt.add_attribute("RegistID", "RegistID_t_181039679"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("RegistID_t_181039679");
  elt.add_attribute("Designation", "Designation_t_124792014"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("Designation_t_124792014");
  elt.add_attribute("MLEGRptTypReq", "2"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("2");
  all_values.push_back(MultilegOrderCancelReplace_message_t_0);
  all_compo_names.insert("MultilegOrderCancelReplace_message_t");

  { // Hdr
    xml_element Hdr_48{"Hdr"};
    multiset<string> Hdr_48_set;
    Hdr_48.add_attribute("SeqNum", "530117356"); // 1
    Hdr_48_set.insert("530117356");
    Hdr_48.add_attribute("SID", "SenderCompID_t_1055672423"); // 1
    Hdr_48_set.insert("SenderCompID_t_1055672423");
    Hdr_48.add_attribute("TID", "TargetCompID_t_1553348227"); // 1
    Hdr_48_set.insert("TargetCompID_t_1553348227");
    Hdr_48.add_attribute("OBID", "OnBehalfOfCompID_t_1684120883"); // 1
    Hdr_48_set.insert("OnBehalfOfCompID_t_1684120883");
    Hdr_48.add_attribute("D2ID", "DeliverToCompID_t_1528904193"); // 1
    Hdr_48_set.insert("DeliverToCompID_t_1528904193");
    Hdr_48.add_attribute("SSub", "SenderSubID_t_1098487530"); // 1
    Hdr_48_set.insert("SenderSubID_t_1098487530");
    Hdr_48.add_attribute("SLoc", "SenderLocationID_t_967013817"); // 1
    Hdr_48_set.insert("SenderLocationID_t_967013817");
    Hdr_48.add_attribute("TSub", "TargetSubID_t_1459597660"); // 1
    Hdr_48_set.insert("TargetSubID_t_1459597660");
    Hdr_48.add_attribute("TLoc", "TargetLocationID_t_2089595533"); // 1
    Hdr_48_set.insert("TargetLocationID_t_2089595533");
    Hdr_48.add_attribute("OBSub", "OnBehalfOfSubID_t_1683273687"); // 1
    Hdr_48_set.insert("OnBehalfOfSubID_t_1683273687");
    Hdr_48.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1119662555"); // 1
    Hdr_48_set.insert("OnBehalfOfLocationID_t_1119662555");
    Hdr_48.add_attribute("D2Sub", "DeliverToSubID_t_652452922"); // 1
    Hdr_48_set.insert("DeliverToSubID_t_652452922");
    Hdr_48.add_attribute("D2Loc", "DeliverToLocationID_t_1959651665"); // 1
    Hdr_48_set.insert("DeliverToLocationID_t_1959651665");
    Hdr_48.add_attribute("PosDup", "N"); // 1
    Hdr_48_set.insert("N");
    Hdr_48.add_attribute("PosRsnd", "Y"); // 1
    Hdr_48_set.insert("Y");
    Hdr_48.add_attribute("Snt", "SendingTime_t_1379273196"); // 1
    Hdr_48_set.insert("SendingTime_t_1379273196");
    Hdr_48.add_attribute("OrigSnt", "OrigSendingTime_t_1052739477"); // 1
    Hdr_48_set.insert("OrigSendingTime_t_1052739477");
    Hdr_48.add_attribute("MsgEncd", "MessageEncoding_t_930458867"); // 1
    Hdr_48_set.insert("MessageEncoding_t_930458867");
    all_values.push_back(Hdr_48_set);
    all_compo_names.insert("Hdr_48_set");

    {
      xml_element Hop_48{"Hop"};
      multiset<string> Hop_48_set;
      Hop_48.add_attribute("ID", "HopCompID_t_1085945327"); // 2
      Hop_48_set.insert("HopCompID_t_1085945327");
      Hop_48.add_attribute("Ref", "233201174"); // 2
      Hop_48_set.insert("233201174");
      Hop_48.add_attribute("Snt", "HopSendingTime_t_1531815831"); // 2
      Hop_48_set.insert("HopSendingTime_t_1531815831");
      all_values.push_back(Hop_48_set);
      all_compo_names.insert("Hop_48_set");

      Hdr_48.add_element(Hop_48);
    }
    elt.add_element(Hdr_48);
  } // end Hdr
  { // Pty
    xml_element Pty_213{"Pty"};
    multiset<string> Pty_213_set;
    Pty_213.add_attribute("ID", "PartyID_t_250556385"); // 1
    Pty_213_set.insert("PartyID_t_250556385");
    Pty_213.add_attribute("Src", "I"); // 1
    Pty_213_set.insert("I");
    Pty_213.add_attribute("R", "27"); // 1
    Pty_213_set.insert("27");
    all_values.push_back(Pty_213_set);
    all_compo_names.insert("Pty_213_set");

    {
      xml_element Sub_213{"Sub"};
      multiset<string> Sub_213_set;
      Sub_213.add_attribute("ID", "PartySubID_t_1071037793"); // 2
      Sub_213_set.insert("PartySubID_t_1071037793");
      Sub_213.add_attribute("Typ", "9"); // 2
      Sub_213_set.insert("9");
      all_values.push_back(Sub_213_set);
      all_compo_names.insert("Sub_213_set");

      Pty_213.add_element(Sub_213);
    }
    elt.add_element(Pty_213);
  } // end Pty
  { // PreAllocMleg
    xml_element PreAllocMleg_0{"PreAllocMleg"};
    multiset<string> PreAllocMleg_0_set;
    PreAllocMleg_0.add_attribute("Acct", "AllocAccount_t_1252077472"); // 1
    PreAllocMleg_0_set.insert("AllocAccount_t_1252077472");
    PreAllocMleg_0.add_attribute("ActIDSrc", "5"); // 1
    PreAllocMleg_0_set.insert("5");
    PreAllocMleg_0.add_attribute("AllocSettlCcy", "GBP"); // 1
    PreAllocMleg_0_set.insert("GBP");
    PreAllocMleg_0.add_attribute("IndAllocID", "IndividualAllocID_t_28054928"); // 1
    PreAllocMleg_0_set.insert("IndividualAllocID_t_28054928");
    PreAllocMleg_0.add_attribute("Qty", "4490617.110000"); // 1
    PreAllocMleg_0_set.insert("4490617.110000");
    all_values.push_back(PreAllocMleg_0_set);
    all_compo_names.insert("PreAllocMleg_0_set");

    {
      xml_element Pty_214{"Pty"};
      multiset<string> Pty_214_set;
      Pty_214.add_attribute("ID", "Nested3PartyID_t_1318832063"); // 2
      Pty_214_set.insert("Nested3PartyID_t_1318832063");
      Pty_214.add_attribute("Src", "I"); // 2
      Pty_214_set.insert("I");
      Pty_214.add_attribute("R", "3"); // 2
      Pty_214_set.insert("3");
      all_values.push_back(Pty_214_set);
      all_compo_names.insert("Pty_214_set");

      {
        xml_element Sub_214{"Sub"};
        multiset<string> Sub_214_set;
        Sub_214.add_attribute("ID", "Nested3PartySubID_t_138362233"); // 3
        Sub_214_set.insert("Nested3PartySubID_t_138362233");
        Sub_214.add_attribute("Typ", "24"); // 3
        Sub_214_set.insert("24");
        all_values.push_back(Sub_214_set);
        all_compo_names.insert("Sub_214_set");

        Pty_214.add_element(Sub_214);
      }
      PreAllocMleg_0.add_element(Pty_214);
    }
    elt.add_element(PreAllocMleg_0);
  } // end PreAllocMleg
  { // PreAllocMleg
    xml_element PreAllocMleg_1{"PreAllocMleg"};
    multiset<string> PreAllocMleg_1_set;
    PreAllocMleg_1.add_attribute("Acct", "AllocAccount_t_1489661126"); // 1
    PreAllocMleg_1_set.insert("AllocAccount_t_1489661126");
    PreAllocMleg_1.add_attribute("ActIDSrc", "5"); // 1
    PreAllocMleg_1_set.insert("5");
    PreAllocMleg_1.add_attribute("AllocSettlCcy", "USD"); // 1
    PreAllocMleg_1_set.insert("USD");
    PreAllocMleg_1.add_attribute("IndAllocID", "IndividualAllocID_t_1633803937"); // 1
    PreAllocMleg_1_set.insert("IndividualAllocID_t_1633803937");
    PreAllocMleg_1.add_attribute("Qty", "7042274.280000"); // 1
    PreAllocMleg_1_set.insert("7042274.280000");
    all_values.push_back(PreAllocMleg_1_set);
    all_compo_names.insert("PreAllocMleg_1_set");

    {
      xml_element Pty_215{"Pty"};
      multiset<string> Pty_215_set;
      Pty_215.add_attribute("ID", "Nested3PartyID_t_483501549"); // 2
      Pty_215_set.insert("Nested3PartyID_t_483501549");
      Pty_215.add_attribute("Src", "I"); // 2
      Pty_215_set.insert("I");
      Pty_215.add_attribute("R", "39"); // 2
      Pty_215_set.insert("39");
      all_values.push_back(Pty_215_set);
      all_compo_names.insert("Pty_215_set");

      {
        xml_element Sub_215{"Sub"};
        multiset<string> Sub_215_set;
        Sub_215.add_attribute("ID", "Nested3PartySubID_t_1413960417"); // 3
        Sub_215_set.insert("Nested3PartySubID_t_1413960417");
        Sub_215.add_attribute("Typ", "9"); // 3
        Sub_215_set.insert("9");
        all_values.push_back(Sub_215_set);
        all_compo_names.insert("Sub_215_set");

        Pty_215.add_element(Sub_215);
      }
      PreAllocMleg_1.add_element(Pty_215);
    }
    elt.add_element(PreAllocMleg_1);
  } // end PreAllocMleg
  { // DsplyInstr
    xml_element DsplyInstr_2{"DsplyInstr"};
    multiset<string> DsplyInstr_2_set;
    DsplyInstr_2.add_attribute("DisplayQty", "19901680.790000"); // 1
    DsplyInstr_2_set.insert("19901680.790000");
    DsplyInstr_2.add_attribute("SecDspQty", "7982926.000000"); // 1
    DsplyInstr_2_set.insert("7982926.000000");
    DsplyInstr_2.add_attribute("DspWhn", "1"); // 1
    DsplyInstr_2_set.insert("1");
    DsplyInstr_2.add_attribute("DspMthd", "2"); // 1
    DsplyInstr_2_set.insert("2");
    DsplyInstr_2.add_attribute("DsplLwQty", "7083462.550000"); // 1
    DsplyInstr_2_set.insert("7083462.550000");
    DsplyInstr_2.add_attribute("DisplayHighQty", "21381537.330000"); // 1
    DsplyInstr_2_set.insert("21381537.330000");
    DsplyInstr_2.add_attribute("DspMinIncr", "11642786.100000"); // 1
    DsplyInstr_2_set.insert("11642786.100000");
    DsplyInstr_2.add_attribute("RfrshQty", "17034203.940000"); // 1
    DsplyInstr_2_set.insert("17034203.940000");
    all_values.push_back(DsplyInstr_2_set);
    all_compo_names.insert("DsplyInstr_2_set");

    elt.add_element(DsplyInstr_2);
  } // end DsplyInstr
  { // TrdSes
    xml_element TrdSes_4{"TrdSes"};
    multiset<string> TrdSes_4_set;
    TrdSes_4.add_attribute("SesID", "4"); // 1
    TrdSes_4_set.insert("4");
    TrdSes_4.add_attribute("SesSub", "2"); // 1
    TrdSes_4_set.insert("2");
    all_values.push_back(TrdSes_4_set);
    all_compo_names.insert("TrdSes_4_set");

    elt.add_element(TrdSes_4);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_5{"TrdSes"};
    multiset<string> TrdSes_5_set;
    TrdSes_5.add_attribute("SesID", "2"); // 1
    TrdSes_5_set.insert("2");
    TrdSes_5.add_attribute("SesSub", "1"); // 1
    TrdSes_5_set.insert("1");
    all_values.push_back(TrdSes_5_set);
    all_compo_names.insert("TrdSes_5_set");

    elt.add_element(TrdSes_5);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_6{"TrdSes"};
    multiset<string> TrdSes_6_set;
    TrdSes_6.add_attribute("SesID", "5"); // 1
    TrdSes_6_set.insert("5");
    TrdSes_6.add_attribute("SesSub", "2"); // 1
    TrdSes_6_set.insert("2");
    all_values.push_back(TrdSes_6_set);
    all_compo_names.insert("TrdSes_6_set");

    elt.add_element(TrdSes_6);
  } // end TrdSes
  { // Instrmt
    xml_element Instrmt_40{"Instrmt"};
    multiset<string> Instrmt_40_set;
    Instrmt_40.add_attribute("Sym", "Symbol_t_1222415679"); // 1
    Instrmt_40_set.insert("Symbol_t_1222415679");
    Instrmt_40.add_attribute("Sfx", "CD"); // 1
    Instrmt_40_set.insert("CD");
    Instrmt_40.add_attribute("ID", "SecurityID_t_29280173"); // 1
    Instrmt_40_set.insert("SecurityID_t_29280173");
    Instrmt_40.add_attribute("Src", "B"); // 1
    Instrmt_40_set.insert("B");
    Instrmt_40.add_attribute("Prod", "5"); // 1
    Instrmt_40_set.insert("5");
    Instrmt_40.add_attribute("ProdCmplx", "ProductComplex_t_1518941299"); // 1
    Instrmt_40_set.insert("ProductComplex_t_1518941299");
    Instrmt_40.add_attribute("SecGrp", "SecurityGroup_t_1034930184"); // 1
    Instrmt_40_set.insert("SecurityGroup_t_1034930184");
    Instrmt_40.add_attribute("CFI", "CFICode_t_823658474"); // 1
    Instrmt_40_set.insert("CFICode_t_823658474");
    Instrmt_40.add_attribute("SecTyp", "OOP"); // 1
    Instrmt_40_set.insert("OOP");
    Instrmt_40.add_attribute("SubTyp", "SecuritySubType_t_521250473"); // 1
    Instrmt_40_set.insert("SecuritySubType_t_521250473");
    Instrmt_40.add_attribute("MMY", "1527885902"); // 1
    Instrmt_40_set.insert("1527885902");
    Instrmt_40.add_attribute("MatDt", "MaturityDate_t_1997073249"); // 1
    Instrmt_40_set.insert("MaturityDate_t_1997073249");
    Instrmt_40.add_attribute("MatTm", "1386843958"); // 1
    Instrmt_40_set.insert("1386843958");
    Instrmt_40.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1137369160"); // 1
    Instrmt_40_set.insert("SettleOnOpenFlag_t_1137369160");
    Instrmt_40.add_attribute("AsgnMeth", "1263550018"); // 1
    Instrmt_40_set.insert("1263550018");
    Instrmt_40.add_attribute("Status", "2"); // 1
    Instrmt_40_set.insert("2");
    Instrmt_40.add_attribute("CpnPmt", "CouponPaymentDate_t_980053591"); // 1
    Instrmt_40_set.insert("CouponPaymentDate_t_980053591");
    Instrmt_40.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_40_set.insert("MM");
    Instrmt_40.add_attribute("Snrty", "SD"); // 1
    Instrmt_40_set.insert("SD");
    Instrmt_40.add_attribute("NotlPctOut", "10732944.080000"); // 1
    Instrmt_40_set.insert("10732944.080000");
    Instrmt_40.add_attribute("OrigNotlPctOut", "6227052.260000"); // 1
    Instrmt_40_set.insert("6227052.260000");
    Instrmt_40.add_attribute("AttchPnt", "17668822.060000"); // 1
    Instrmt_40_set.insert("17668822.060000");
    Instrmt_40.add_attribute("DetchPnt", "900893.710000"); // 1
    Instrmt_40_set.insert("900893.710000");
    Instrmt_40.add_attribute("Issued", "IssueDate_t_178641972"); // 1
    Instrmt_40_set.insert("IssueDate_t_178641972");
    Instrmt_40.add_attribute("RepoCollSecTyp", "903837943"); // 1
    Instrmt_40_set.insert("903837943");
    Instrmt_40.add_attribute("RepoTrm", "358961806"); // 1
    Instrmt_40_set.insert("358961806");
    Instrmt_40.add_attribute("RepoRt", "8544448.700000"); // 1
    Instrmt_40_set.insert("8544448.700000");
    Instrmt_40.add_attribute("Fctr", "10839908.120000"); // 1
    Instrmt_40_set.insert("10839908.120000");
    Instrmt_40.add_attribute("CrdRtg", "CreditRating_t_262545421"); // 1
    Instrmt_40_set.insert("CreditRating_t_262545421");
    Instrmt_40.add_attribute("Rgstry", "InstrRegistry_t_1558302697"); // 1
    Instrmt_40_set.insert("InstrRegistry_t_1558302697");
    Instrmt_40.add_attribute("IssuCtry", "1713205392"); // 1
    Instrmt_40_set.insert("1713205392");
    Instrmt_40.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1484961100"); // 1
    Instrmt_40_set.insert("StateOrProvinceOfIssue_t_1484961100");
    Instrmt_40.add_attribute("Lcl", "LocaleOfIssue_t_1671635997"); // 1
    Instrmt_40_set.insert("LocaleOfIssue_t_1671635997");
    Instrmt_40.add_attribute("Redeem", "RedemptionDate_t_1742485565"); // 1
    Instrmt_40_set.insert("RedemptionDate_t_1742485565");
    Instrmt_40.add_attribute("StrkPx", "6982553.640000"); // 1
    Instrmt_40_set.insert("6982553.640000");
    Instrmt_40.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_40_set.insert("CAN");
    Instrmt_40.add_attribute("StrkMult", "17331855.480000"); // 1
    Instrmt_40_set.insert("17331855.480000");
    Instrmt_40.add_attribute("StrkValu", "13302172.560000"); // 1
    Instrmt_40_set.insert("13302172.560000");
    Instrmt_40.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_40_set.insert("2");
    Instrmt_40.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_40_set.insert("4");
    Instrmt_40.add_attribute("StrkPxBndryPrcsn", "7106195.110000"); // 1
    Instrmt_40_set.insert("7106195.110000");
    Instrmt_40.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_40_set.insert("3");
    Instrmt_40.add_attribute("OptAt", "1493796332"); // 1
    Instrmt_40_set.insert("1493796332");
    Instrmt_40.add_attribute("Mult", "18479886.710000"); // 1
    Instrmt_40_set.insert("18479886.710000");
    Instrmt_40.add_attribute("MultTyp", "0"); // 1
    Instrmt_40_set.insert("0");
    Instrmt_40.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_40_set.insert("2");
    Instrmt_40.add_attribute("MinPxIncr", "6805586.140000"); // 1
    Instrmt_40_set.insert("6805586.140000");
    Instrmt_40.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1507529859"); // 1
    Instrmt_40_set.insert("MinPriceIncrementAmount_t_1507529859");
    Instrmt_40.add_attribute("UOM", "Alw"); // 1
    Instrmt_40_set.insert("Alw");
    Instrmt_40.add_attribute("UOMQty", "17538530.230000"); // 1
    Instrmt_40_set.insert("17538530.230000");
    Instrmt_40.add_attribute("PxUOM", "t"); // 1
    Instrmt_40_set.insert("t");
    Instrmt_40.add_attribute("PxUOMQty", "19328224.870000"); // 1
    Instrmt_40_set.insert("19328224.870000");
    Instrmt_40.add_attribute("SettlMeth", "C"); // 1
    Instrmt_40_set.insert("C");
    Instrmt_40.add_attribute("ExerStyle", "0"); // 1
    Instrmt_40_set.insert("0");
    Instrmt_40.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_40_set.insert("1");
    Instrmt_40.add_attribute("OptPayAmt", "OptPayoutAmount_t_55420552"); // 1
    Instrmt_40_set.insert("OptPayoutAmount_t_55420552");
    Instrmt_40.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_40_set.insert("STD");
    Instrmt_40.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_40_set.insert("EQTY");
    Instrmt_40.add_attribute("ListMeth", "1"); // 1
    Instrmt_40_set.insert("1");
    Instrmt_40.add_attribute("CapPx", "4266573.290000"); // 1
    Instrmt_40_set.insert("4266573.290000");
    Instrmt_40.add_attribute("FlrPx", "13388893.390000"); // 1
    Instrmt_40_set.insert("13388893.390000");
    Instrmt_40.add_attribute("PutCall", "0"); // 1
    Instrmt_40_set.insert("0");
    Instrmt_40.add_attribute("FlexInd", "true"); // 1
    Instrmt_40_set.insert("true");
    Instrmt_40.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_40_set.insert("false");
    Instrmt_40.add_attribute("TmUnit", "Wk"); // 1
    Instrmt_40_set.insert("Wk");
    Instrmt_40.add_attribute("CpnRt", "4573684.600000"); // 1
    Instrmt_40_set.insert("4573684.600000");
    Instrmt_40.add_attribute("Exch", "SecurityExchange_t_2047834474"); // 1
    Instrmt_40_set.insert("SecurityExchange_t_2047834474");
    Instrmt_40.add_attribute("PosLmt", "2086884339"); // 1
    Instrmt_40_set.insert("2086884339");
    Instrmt_40.add_attribute("NTPosLmt", "1787585717"); // 1
    Instrmt_40_set.insert("1787585717");
    Instrmt_40.add_attribute("Issr", "Issuer_t_380382095"); // 1
    Instrmt_40_set.insert("Issuer_t_380382095");
    Instrmt_40.add_attribute("EncIssrLen", "46353064"); // 1
    Instrmt_40_set.insert("46353064");
    Instrmt_40.add_attribute("EncIssr", "EncodedIssuer_t_350721580"); // 1
    Instrmt_40_set.insert("EncodedIssuer_t_350721580");
    Instrmt_40.add_attribute("Desc", "SecurityDesc_t_710002965"); // 1
    Instrmt_40_set.insert("SecurityDesc_t_710002965");
    Instrmt_40.add_attribute("EncSecDescLen", "1540149396"); // 1
    Instrmt_40_set.insert("1540149396");
    Instrmt_40.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_51226603"); // 1
    Instrmt_40_set.insert("EncodedSecurityDesc_t_51226603");
    Instrmt_40.add_attribute("Pool", "Pool_t_155690206"); // 1
    Instrmt_40_set.insert("Pool_t_155690206");
    Instrmt_40.add_attribute("CSetMo", "2077361203"); // 1
    Instrmt_40_set.insert("2077361203");
    Instrmt_40.add_attribute("CPPgm", "99"); // 1
    Instrmt_40_set.insert("99");
    Instrmt_40.add_attribute("CPRegT", "CPRegType_t_1663220066"); // 1
    Instrmt_40_set.insert("CPRegType_t_1663220066");
    Instrmt_40.add_attribute("Dated", "DatedDate_t_95817836"); // 1
    Instrmt_40_set.insert("DatedDate_t_95817836");
    Instrmt_40.add_attribute("IntAcrl", "InterestAccrualDate_t_338154592"); // 1
    Instrmt_40_set.insert("InterestAccrualDate_t_338154592");
    all_values.push_back(Instrmt_40_set);
    all_compo_names.insert("Instrmt_40_set");

    {
      xml_element AID_43{"AID"};
      multiset<string> AID_43_set;
      AID_43.add_attribute("AltID", "SecurityAltID_t_1645971503"); // 2
      AID_43_set.insert("SecurityAltID_t_1645971503");
      AID_43.add_attribute("AltIDSrc", "I"); // 2
      AID_43_set.insert("I");
      all_values.push_back(AID_43_set);
      all_compo_names.insert("AID_43_set");

      Instrmt_40.add_element(AID_43);
    }
    {
      xml_element SecXML_43{"SecXML"};
      multiset<string> SecXML_43_set;
      SecXML_43.add_attribute("Schema", "SecurityXMLSchema_t_34613338"); // 2
      SecXML_43_set.insert("SecurityXMLSchema_t_34613338");
      all_values.push_back(SecXML_43_set);
      all_compo_names.insert("SecXML_43_set");

      Instrmt_40.add_element(SecXML_43);
    }
    {
      xml_element Evnt_43{"Evnt"};
      multiset<string> Evnt_43_set;
      Evnt_43.add_attribute("EventTyp", "13"); // 2
      Evnt_43_set.insert("13");
      Evnt_43.add_attribute("Dt", "EventDate_t_570333457"); // 2
      Evnt_43_set.insert("EventDate_t_570333457");
      Evnt_43.add_attribute("Tm", "EventTime_t_90033890"); // 2
      Evnt_43_set.insert("EventTime_t_90033890");
      Evnt_43.add_attribute("Px", "6757195.450000"); // 2
      Evnt_43_set.insert("6757195.450000");
      Evnt_43.add_attribute("Txt", "EventText_t_196017404"); // 2
      Evnt_43_set.insert("EventText_t_196017404");
      all_values.push_back(Evnt_43_set);
      all_compo_names.insert("Evnt_43_set");

      Instrmt_40.add_element(Evnt_43);
    }
    {
      xml_element Pty_216{"Pty"};
      multiset<string> Pty_216_set;
      Pty_216.add_attribute("ID", "InstrumentPartyID_t_407999864"); // 2
      Pty_216_set.insert("InstrumentPartyID_t_407999864");
      Pty_216.add_attribute("Src", "D"); // 2
      Pty_216_set.insert("D");
      Pty_216.add_attribute("R", "36"); // 2
      Pty_216_set.insert("36");
      all_values.push_back(Pty_216_set);
      all_compo_names.insert("Pty_216_set");

      {
        xml_element Sub_216{"Sub"};
        multiset<string> Sub_216_set;
        Sub_216.add_attribute("ID", "InstrumentPartySubID_t_63443290"); // 3
        Sub_216_set.insert("InstrumentPartySubID_t_63443290");
        Sub_216.add_attribute("Typ", "1"); // 3
        Sub_216_set.insert("1");
        all_values.push_back(Sub_216_set);
        all_compo_names.insert("Sub_216_set");

        Pty_216.add_element(Sub_216);
      }
      Instrmt_40.add_element(Pty_216);
    }
    {
      xml_element CmplxEvnt_40{"CmplxEvnt"};
      multiset<string> CmplxEvnt_40_set;
      CmplxEvnt_40.add_attribute("Typ", "8"); // 2
      CmplxEvnt_40_set.insert("8");
      CmplxEvnt_40.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_417142080"); // 2
      CmplxEvnt_40_set.insert("ComplexOptPayoutAmount_t_417142080");
      CmplxEvnt_40.add_attribute("Px", "15105550.120000"); // 2
      CmplxEvnt_40_set.insert("15105550.120000");
      CmplxEvnt_40.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_40_set.insert("5");
      CmplxEvnt_40.add_attribute("PxBndryPrcsn", "3565427.710000"); // 2
      CmplxEvnt_40_set.insert("3565427.710000");
      CmplxEvnt_40.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_40_set.insert("2");
      CmplxEvnt_40.add_attribute("Cond", "1"); // 2
      CmplxEvnt_40_set.insert("1");
      all_values.push_back(CmplxEvnt_40_set);
      all_compo_names.insert("CmplxEvnt_40_set");

      {
        xml_element EvntDts_40{"EvntDts"};
        multiset<string> EvntDts_40_set;
        EvntDts_40.add_attribute("StartDt", "ComplexEventStartDate_t_402895836"); // 3
        EvntDts_40_set.insert("ComplexEventStartDate_t_402895836");
        EvntDts_40.add_attribute("EndDt", "ComplexEventEndDate_t_1501378661"); // 3
        EvntDts_40_set.insert("ComplexEventEndDate_t_1501378661");
        all_values.push_back(EvntDts_40_set);
        all_compo_names.insert("EvntDts_40_set");

        {
          xml_element EvntTms_40{"EvntTms"};
          multiset<string> EvntTms_40_set;
          EvntTms_40.add_attribute("StartTm", "1312050239"); // 4
          EvntTms_40_set.insert("1312050239");
          EvntTms_40.add_attribute("EndTm", "1943045232"); // 4
          EvntTms_40_set.insert("1943045232");
          all_values.push_back(EvntTms_40_set);
          all_compo_names.insert("EvntTms_40_set");

          EvntDts_40.add_element(EvntTms_40);
        }
        CmplxEvnt_40.add_element(EvntDts_40);
      }
      Instrmt_40.add_element(CmplxEvnt_40);
    }
    elt.add_element(Instrmt_40);
  } // end Instrmt
  { // Undly
    xml_element Undly_54{"Undly"};
    multiset<string> Undly_54_set;
    Undly_54.add_attribute("Sym", "UnderlyingSymbol_t_1467740446"); // 1
    Undly_54_set.insert("UnderlyingSymbol_t_1467740446");
    Undly_54.add_attribute("Sfx", "CD"); // 1
    Undly_54_set.insert("CD");
    Undly_54.add_attribute("ID", "UnderlyingSecurityID_t_136906834"); // 1
    Undly_54_set.insert("UnderlyingSecurityID_t_136906834");
    Undly_54.add_attribute("Src", "J"); // 1
    Undly_54_set.insert("J");
    Undly_54.add_attribute("Prod", "3"); // 1
    Undly_54_set.insert("3");
    Undly_54.add_attribute("CFI", "UnderlyingCFICode_t_475061426"); // 1
    Undly_54_set.insert("UnderlyingCFICode_t_475061426");
    Undly_54.add_attribute("SecTyp", "?"); // 1
    Undly_54_set.insert("?");
    Undly_54.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1849897299"); // 1
    Undly_54_set.insert("UnderlyingSecuritySubType_t_1849897299");
    Undly_54.add_attribute("MMY", "509674765"); // 1
    Undly_54_set.insert("509674765");
    Undly_54.add_attribute("Mat", "UnderlyingMaturityDate_t_141845984"); // 1
    Undly_54_set.insert("UnderlyingMaturityDate_t_141845984");
    Undly_54.add_attribute("MatTm", "272747108"); // 1
    Undly_54_set.insert("272747108");
    Undly_54.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_599708655"); // 1
    Undly_54_set.insert("UnderlyingCouponPaymentDate_t_599708655");
    Undly_54.add_attribute("RestrctTyp", "MR"); // 1
    Undly_54_set.insert("MR");
    Undly_54.add_attribute("Snrty", "SB"); // 1
    Undly_54_set.insert("SB");
    Undly_54.add_attribute("NotlPctOut", "10077085.190000"); // 1
    Undly_54_set.insert("10077085.190000");
    Undly_54.add_attribute("OrigNotlPctOut", "19199424.030000"); // 1
    Undly_54_set.insert("19199424.030000");
    Undly_54.add_attribute("AttchPnt", "20036712.570000"); // 1
    Undly_54_set.insert("20036712.570000");
    Undly_54.add_attribute("DetchPnt", "10711518.090000"); // 1
    Undly_54_set.insert("10711518.090000");
    Undly_54.add_attribute("Issued", "UnderlyingIssueDate_t_825645307"); // 1
    Undly_54_set.insert("UnderlyingIssueDate_t_825645307");
    Undly_54.add_attribute("RepoCollSecTyp", "177501962"); // 1
    Undly_54_set.insert("177501962");
    Undly_54.add_attribute("RepoTrm", "1488293890"); // 1
    Undly_54_set.insert("1488293890");
    Undly_54.add_attribute("RepoRt", "1887166.720000"); // 1
    Undly_54_set.insert("1887166.720000");
    Undly_54.add_attribute("Fctr", "3991671.410000"); // 1
    Undly_54_set.insert("3991671.410000");
    Undly_54.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1844836661"); // 1
    Undly_54_set.insert("UnderlyingCreditRating_t_1844836661");
    Undly_54.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1339373753"); // 1
    Undly_54_set.insert("UnderlyingInstrRegistry_t_1339373753");
    Undly_54.add_attribute("Ctry", "1001214415"); // 1
    Undly_54_set.insert("1001214415");
    Undly_54.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_100248849"); // 1
    Undly_54_set.insert("UnderlyingStateOrProvinceOfIssue_t_100248849");
    Undly_54.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_693268767"); // 1
    Undly_54_set.insert("UnderlyingLocaleOfIssue_t_693268767");
    Undly_54.add_attribute("Redeem", "UnderlyingRedemptionDate_t_165781006"); // 1
    Undly_54_set.insert("UnderlyingRedemptionDate_t_165781006");
    Undly_54.add_attribute("StrkPx", "20432940.820000"); // 1
    Undly_54_set.insert("20432940.820000");
    Undly_54.add_attribute("StrkCcy", "GBP"); // 1
    Undly_54_set.insert("GBP");
    Undly_54.add_attribute("OptA", "1768733222"); // 1
    Undly_54_set.insert("1768733222");
    Undly_54.add_attribute("Mult", "2352972.170000"); // 1
    Undly_54_set.insert("2352972.170000");
    Undly_54.add_attribute("MultTyp", "1"); // 1
    Undly_54_set.insert("1");
    Undly_54.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_54_set.insert("3");
    Undly_54.add_attribute("UOM", "oz_tr"); // 1
    Undly_54_set.insert("oz_tr");
    Undly_54.add_attribute("UOMQty", "9514793.880000"); // 1
    Undly_54_set.insert("9514793.880000");
    Undly_54.add_attribute("PxUOM", "USD"); // 1
    Undly_54_set.insert("USD");
    Undly_54.add_attribute("PxUOMQty", "12200334.090000"); // 1
    Undly_54_set.insert("12200334.090000");
    Undly_54.add_attribute("TmUnit", "Yr"); // 1
    Undly_54_set.insert("Yr");
    Undly_54.add_attribute("ExerStyle", "2"); // 1
    Undly_54_set.insert("2");
    Undly_54.add_attribute("CpnRt", "18197420.640000"); // 1
    Undly_54_set.insert("18197420.640000");
    Undly_54.add_attribute("Exch", "UnderlyingSecurityExchange_t_1910890902"); // 1
    Undly_54_set.insert("UnderlyingSecurityExchange_t_1910890902");
    Undly_54.add_attribute("Issr", "UnderlyingIssuer_t_2033915470"); // 1
    Undly_54_set.insert("UnderlyingIssuer_t_2033915470");
    Undly_54.add_attribute("EncUndIssrLen", "679966936"); // 1
    Undly_54_set.insert("679966936");
    Undly_54.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1683349657"); // 1
    Undly_54_set.insert("EncodedUnderlyingIssuer_t_1683349657");
    Undly_54.add_attribute("Desc", "UnderlyingSecurityDesc_t_1890103079"); // 1
    Undly_54_set.insert("UnderlyingSecurityDesc_t_1890103079");
    Undly_54.add_attribute("EncUndSecDescLen", "1751118745"); // 1
    Undly_54_set.insert("1751118745");
    Undly_54.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_361511317"); // 1
    Undly_54_set.insert("EncodedUnderlyingSecurityDesc_t_361511317");
    Undly_54.add_attribute("CPPgm", "UnderlyingCPProgram_t_2067605041"); // 1
    Undly_54_set.insert("UnderlyingCPProgram_t_2067605041");
    Undly_54.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1091928987"); // 1
    Undly_54_set.insert("UnderlyingCPRegType_t_1091928987");
    Undly_54.add_attribute("AllocPct", "5502279.890000"); // 1
    Undly_54_set.insert("5502279.890000");
    Undly_54.add_attribute("Ccy", "EUR"); // 1
    Undly_54_set.insert("EUR");
    Undly_54.add_attribute("Qty", "18896017.420000"); // 1
    Undly_54_set.insert("18896017.420000");
    Undly_54.add_attribute("SettlTyp", "5"); // 1
    Undly_54_set.insert("5");
    Undly_54.add_attribute("CashAmt", "UnderlyingCashAmount_t_889530850"); // 1
    Undly_54_set.insert("UnderlyingCashAmount_t_889530850");
    Undly_54.add_attribute("CashTyp", "DIFF"); // 1
    Undly_54_set.insert("DIFF");
    Undly_54.add_attribute("Px", "14862839.560000"); // 1
    Undly_54_set.insert("14862839.560000");
    Undly_54.add_attribute("DirtPx", "7853412.840000"); // 1
    Undly_54_set.insert("7853412.840000");
    Undly_54.add_attribute("EndPx", "5337772.450000"); // 1
    Undly_54_set.insert("5337772.450000");
    Undly_54.add_attribute("StartVal", "UnderlyingStartValue_t_972321760"); // 1
    Undly_54_set.insert("UnderlyingStartValue_t_972321760");
    Undly_54.add_attribute("CurVal", "UnderlyingCurrentValue_t_406590858"); // 1
    Undly_54_set.insert("UnderlyingCurrentValue_t_406590858");
    Undly_54.add_attribute("EndVal", "UnderlyingEndValue_t_769074462"); // 1
    Undly_54_set.insert("UnderlyingEndValue_t_769074462");
    Undly_54.add_attribute("AdjQty", "14418364.290000"); // 1
    Undly_54_set.insert("14418364.290000");
    Undly_54.add_attribute("FxRate", "19965810.560000"); // 1
    Undly_54_set.insert("19965810.560000");
    Undly_54.add_attribute("FxRateCalc", "M"); // 1
    Undly_54_set.insert("M");
    Undly_54.add_attribute("CapValu", "UnderlyingCapValue_t_245832169"); // 1
    Undly_54_set.insert("UnderlyingCapValue_t_245832169");
    Undly_54.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1141501257"); // 1
    Undly_54_set.insert("UnderlyingSettlMethod_t_1141501257");
    Undly_54.add_attribute("PutCall", "551982867"); // 1
    Undly_54_set.insert("551982867");
    all_values.push_back(Undly_54_set);
    all_compo_names.insert("Undly_54_set");

    {
      xml_element UndAID_54{"UndAID"};
      multiset<string> UndAID_54_set;
      UndAID_54.add_attribute("AltID", "UnderlyingSecurityAltID_t_1339157541"); // 2
      UndAID_54_set.insert("UnderlyingSecurityAltID_t_1339157541");
      UndAID_54.add_attribute("AltIDSrc", "2"); // 2
      UndAID_54_set.insert("2");
      all_values.push_back(UndAID_54_set);
      all_compo_names.insert("UndAID_54_set");

      Undly_54.add_element(UndAID_54);
    }
    {
      xml_element Stip_78{"Stip"};
      multiset<string> Stip_78_set;
      Stip_78.add_attribute("Typ", "BGNCON"); // 2
      Stip_78_set.insert("BGNCON");
      Stip_78.add_attribute("Val", "UnderlyingStipValue_t_1102564795"); // 2
      Stip_78_set.insert("UnderlyingStipValue_t_1102564795");
      all_values.push_back(Stip_78_set);
      all_compo_names.insert("Stip_78_set");

      Undly_54.add_element(Stip_78);
    }
    {
      xml_element Pty_217{"Pty"};
      multiset<string> Pty_217_set;
      Pty_217.add_attribute("ID", "UnderlyingInstrumentPartyID_t_445600389"); // 2
      Pty_217_set.insert("UnderlyingInstrumentPartyID_t_445600389");
      Pty_217.add_attribute("Src", "1"); // 2
      Pty_217_set.insert("1");
      Pty_217.add_attribute("R", "63"); // 2
      Pty_217_set.insert("63");
      all_values.push_back(Pty_217_set);
      all_compo_names.insert("Pty_217_set");

      {
        xml_element Sub_217{"Sub"};
        multiset<string> Sub_217_set;
        Sub_217.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_188219821"); // 3
        Sub_217_set.insert("UnderlyingInstrumentPartySubID_t_188219821");
        Sub_217.add_attribute("Typ", "22"); // 3
        Sub_217_set.insert("22");
        all_values.push_back(Sub_217_set);
        all_compo_names.insert("Sub_217_set");

        Pty_217.add_element(Sub_217);
      }
      Undly_54.add_element(Pty_217);
    }
    elt.add_element(Undly_54);
  } // end Undly
  { // Ord
    xml_element Ord_0{"Ord"};
    multiset<string> Ord_0_set;
    Ord_0.add_attribute("Qty", "1083412.140000"); // 1
    Ord_0_set.insert("1083412.140000");
    Ord_0.add_attribute("SwapTyp", "2"); // 1
    Ord_0_set.insert("2");
    Ord_0.add_attribute("LegAllocID", "LegAllocID_t_1550170111"); // 1
    Ord_0_set.insert("LegAllocID_t_1550170111");
    Ord_0.add_attribute("PosEfct", "D"); // 1
    Ord_0_set.insert("D");
    Ord_0.add_attribute("Cover", "0"); // 1
    Ord_0_set.insert("0");
    Ord_0.add_attribute("RefID", "LegRefID_t_1292288205"); // 1
    Ord_0_set.insert("LegRefID_t_1292288205");
    Ord_0.add_attribute("SettlTyp", "C"); // 1
    Ord_0_set.insert("C");
    Ord_0.add_attribute("SettlDt", "LegSettlDate_t_1131101508"); // 1
    Ord_0_set.insert("LegSettlDate_t_1131101508");
    Ord_0.add_attribute("SettlCcy", "USD"); // 1
    Ord_0_set.insert("USD");
    Ord_0.add_attribute("OrdQty", "19164427.930000"); // 1
    Ord_0_set.insert("19164427.930000");
    Ord_0.add_attribute("LegVolatility", "1139686.640000"); // 1
    Ord_0_set.insert("1139686.640000");
    Ord_0.add_attribute("LegDividendYield", "20592547.670000"); // 1
    Ord_0_set.insert("20592547.670000");
    Ord_0.add_attribute("LegCurrencyRatio", "1755500.030000"); // 1
    Ord_0_set.insert("1755500.030000");
    Ord_0.add_attribute("LegExecInst", "c"); // 1
    Ord_0_set.insert("c");
    all_values.push_back(Ord_0_set);
    all_compo_names.insert("Ord_0_set");

    {
      xml_element Leg_53{"Leg"};
      multiset<string> Leg_53_set;
      Leg_53.add_attribute("Sym", "LegSymbol_t_1353607548"); // 2
      Leg_53_set.insert("LegSymbol_t_1353607548");
      Leg_53.add_attribute("Sfx", "CD"); // 2
      Leg_53_set.insert("CD");
      Leg_53.add_attribute("ID", "LegSecurityID_t_214992585"); // 2
      Leg_53_set.insert("LegSecurityID_t_214992585");
      Leg_53.add_attribute("Src", "8"); // 2
      Leg_53_set.insert("8");
      Leg_53.add_attribute("Prod", "7"); // 2
      Leg_53_set.insert("7");
      Leg_53.add_attribute("CFI", "LegCFICode_t_766975452"); // 2
      Leg_53_set.insert("LegCFICode_t_766975452");
      Leg_53.add_attribute("SecTyp", "TBA"); // 2
      Leg_53_set.insert("TBA");
      Leg_53.add_attribute("SecSubTyp", "LegSecuritySubType_t_1725317236"); // 2
      Leg_53_set.insert("LegSecuritySubType_t_1725317236");
      Leg_53.add_attribute("MMY", "991216736"); // 2
      Leg_53_set.insert("991216736");
      Leg_53.add_attribute("Mat", "LegMaturityDate_t_1893678406"); // 2
      Leg_53_set.insert("LegMaturityDate_t_1893678406");
      Leg_53.add_attribute("MatTm", "23433978"); // 2
      Leg_53_set.insert("23433978");
      Leg_53.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1895424956"); // 2
      Leg_53_set.insert("LegCouponPaymentDate_t_1895424956");
      Leg_53.add_attribute("Issued", "LegIssueDate_t_384625563"); // 2
      Leg_53_set.insert("LegIssueDate_t_384625563");
      Leg_53.add_attribute("RepoCollSecTyp", "211653799"); // 2
      Leg_53_set.insert("211653799");
      Leg_53.add_attribute("RepoTrm", "255784626"); // 2
      Leg_53_set.insert("255784626");
      Leg_53.add_attribute("RepoRt", "13845676.850000"); // 2
      Leg_53_set.insert("13845676.850000");
      Leg_53.add_attribute("Fctr", "3199950.130000"); // 2
      Leg_53_set.insert("3199950.130000");
      Leg_53.add_attribute("CrdRtg", "LegCreditRating_t_1855556931"); // 2
      Leg_53_set.insert("LegCreditRating_t_1855556931");
      Leg_53.add_attribute("Rgstry", "LegInstrRegistry_t_787254148"); // 2
      Leg_53_set.insert("LegInstrRegistry_t_787254148");
      Leg_53.add_attribute("Ctry", "747624762"); // 2
      Leg_53_set.insert("747624762");
      Leg_53.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2097127589"); // 2
      Leg_53_set.insert("LegStateOrProvinceOfIssue_t_2097127589");
      Leg_53.add_attribute("Lcl", "LegLocaleOfIssue_t_2079542353"); // 2
      Leg_53_set.insert("LegLocaleOfIssue_t_2079542353");
      Leg_53.add_attribute("Redeem", "LegRedemptionDate_t_348273813"); // 2
      Leg_53_set.insert("LegRedemptionDate_t_348273813");
      Leg_53.add_attribute("Strk", "10807454.490000"); // 2
      Leg_53_set.insert("10807454.490000");
      Leg_53.add_attribute("StrkCcy", "CHF"); // 2
      Leg_53_set.insert("CHF");
      Leg_53.add_attribute("OptA", "849704594"); // 2
      Leg_53_set.insert("849704594");
      Leg_53.add_attribute("Cmult", "17737024.360000"); // 2
      Leg_53_set.insert("17737024.360000");
      Leg_53.add_attribute("MultTyp", "0"); // 2
      Leg_53_set.insert("0");
      Leg_53.add_attribute("FlowSchedTyp", "3"); // 2
      Leg_53_set.insert("3");
      Leg_53.add_attribute("UOM", "MMbbl"); // 2
      Leg_53_set.insert("MMbbl");
      Leg_53.add_attribute("UOMQty", "5531018.380000"); // 2
      Leg_53_set.insert("5531018.380000");
      Leg_53.add_attribute("PxUOM", "MMBtu"); // 2
      Leg_53_set.insert("MMBtu");
      Leg_53.add_attribute("PxUOMQty", "7242545.000000"); // 2
      Leg_53_set.insert("7242545.000000");
      Leg_53.add_attribute("TmUnit", "Min"); // 2
      Leg_53_set.insert("Min");
      Leg_53.add_attribute("ExerStyle", "0"); // 2
      Leg_53_set.insert("0");
      Leg_53.add_attribute("CpnRt", "14912299.520000"); // 2
      Leg_53_set.insert("14912299.520000");
      Leg_53.add_attribute("Exch", "LegSecurityExchange_t_796171518"); // 2
      Leg_53_set.insert("LegSecurityExchange_t_796171518");
      Leg_53.add_attribute("Issr", "LegIssuer_t_1793884268"); // 2
      Leg_53_set.insert("LegIssuer_t_1793884268");
      Leg_53.add_attribute("EncLegIssrLen", "334963041"); // 2
      Leg_53_set.insert("334963041");
      Leg_53.add_attribute("EncLegIssr", "EncodedLegIssuer_t_542366276"); // 2
      Leg_53_set.insert("EncodedLegIssuer_t_542366276");
      Leg_53.add_attribute("Desc", "LegSecurityDesc_t_1817318246"); // 2
      Leg_53_set.insert("LegSecurityDesc_t_1817318246");
      Leg_53.add_attribute("EncLegSecDescLen", "82904349"); // 2
      Leg_53_set.insert("82904349");
      Leg_53.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_926991839"); // 2
      Leg_53_set.insert("EncodedLegSecurityDesc_t_926991839");
      Leg_53.add_attribute("RatioQty", "20289720.450000"); // 2
      Leg_53_set.insert("20289720.450000");
      Leg_53.add_attribute("Side", "G"); // 2
      Leg_53_set.insert("G");
      Leg_53.add_attribute("Ccy", "GBP"); // 2
      Leg_53_set.insert("GBP");
      Leg_53.add_attribute("Pool", "LegPool_t_46762258"); // 2
      Leg_53_set.insert("LegPool_t_46762258");
      Leg_53.add_attribute("Dated", "LegDatedDate_t_951330024"); // 2
      Leg_53_set.insert("LegDatedDate_t_951330024");
      Leg_53.add_attribute("CSetMo", "949108173"); // 2
      Leg_53_set.insert("949108173");
      Leg_53.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2143889847"); // 2
      Leg_53_set.insert("LegInterestAccrualDate_t_2143889847");
      Leg_53.add_attribute("PutCall", "883388729"); // 2
      Leg_53_set.insert("883388729");
      Leg_53.add_attribute("LegOptionRatio", "12973819.860000"); // 2
      Leg_53_set.insert("12973819.860000");
      Leg_53.add_attribute("Px", "10771516.490000"); // 2
      Leg_53_set.insert("10771516.490000");
      all_values.push_back(Leg_53_set);
      all_compo_names.insert("Leg_53_set");

      {
        xml_element LegAID_53{"LegAID"};
        multiset<string> LegAID_53_set;
        LegAID_53.add_attribute("SecAltID", "LegSecurityAltID_t_395638854"); // 3
        LegAID_53_set.insert("LegSecurityAltID_t_395638854");
        LegAID_53.add_attribute("SecAltIDSrc", "M"); // 3
        LegAID_53_set.insert("M");
        all_values.push_back(LegAID_53_set);
        all_compo_names.insert("LegAID_53_set");

        Leg_53.add_element(LegAID_53);
      }
      Ord_0.add_element(Leg_53);
    }
    {
      xml_element Stip_79{"Stip"};
      multiset<string> Stip_79_set;
      Stip_79.add_attribute("StipTyp", "BANKQUAL"); // 2
      Stip_79_set.insert("BANKQUAL");
      Stip_79.add_attribute("StipVal", "LegStipulationValue_t_21857642"); // 2
      Stip_79_set.insert("LegStipulationValue_t_21857642");
      all_values.push_back(Stip_79_set);
      all_compo_names.insert("Stip_79_set");

      Ord_0.add_element(Stip_79);
    }
    {
      xml_element PreAll_6{"PreAll"};
      multiset<string> PreAll_6_set;
      PreAll_6.add_attribute("AllocAcct", "LegAllocAccount_t_1932083096"); // 2
      PreAll_6_set.insert("LegAllocAccount_t_1932083096");
      PreAll_6.add_attribute("IndAllocID", "LegIndividualAllocID_t_804627193"); // 2
      PreAll_6_set.insert("LegIndividualAllocID_t_804627193");
      PreAll_6.add_attribute("AllocQty", "5311195.570000"); // 2
      PreAll_6_set.insert("5311195.570000");
      PreAll_6.add_attribute("AllocAcctIDSrc", "LegAllocAcctIDSource_t_337701286"); // 2
      PreAll_6_set.insert("LegAllocAcctIDSource_t_337701286");
      PreAll_6.add_attribute("AllocSettlCcy", "CHF"); // 2
      PreAll_6_set.insert("CHF");
      all_values.push_back(PreAll_6_set);
      all_compo_names.insert("PreAll_6_set");

      {
        xml_element Pty_218{"Pty"};
        multiset<string> Pty_218_set;
        Pty_218.add_attribute("ID", "Nested2PartyID_t_342759194"); // 3
        Pty_218_set.insert("Nested2PartyID_t_342759194");
        Pty_218.add_attribute("Src", "E"); // 3
        Pty_218_set.insert("E");
        Pty_218.add_attribute("R", "30"); // 3
        Pty_218_set.insert("30");
        all_values.push_back(Pty_218_set);
        all_compo_names.insert("Pty_218_set");

        {
          xml_element Sub_218{"Sub"};
          multiset<string> Sub_218_set;
          Sub_218.add_attribute("ID", "Nested2PartySubID_t_1138930712"); // 4
          Sub_218_set.insert("Nested2PartySubID_t_1138930712");
          Sub_218.add_attribute("Typ", "9"); // 4
          Sub_218_set.insert("9");
          all_values.push_back(Sub_218_set);
          all_compo_names.insert("Sub_218_set");

          Pty_218.add_element(Sub_218);
        }
        PreAll_6.add_element(Pty_218);
      }
      Ord_0.add_element(PreAll_6);
    }
    {
      xml_element Pty_219{"Pty"};
      multiset<string> Pty_219_set;
      Pty_219.add_attribute("ID", "NestedPartyID_t_934083403"); // 2
      Pty_219_set.insert("NestedPartyID_t_934083403");
      Pty_219.add_attribute("Src", "5"); // 2
      Pty_219_set.insert("5");
      Pty_219.add_attribute("R", "75"); // 2
      Pty_219_set.insert("75");
      all_values.push_back(Pty_219_set);
      all_compo_names.insert("Pty_219_set");

      {
        xml_element Sub_219{"Sub"};
        multiset<string> Sub_219_set;
        Sub_219.add_attribute("ID", "NestedPartySubID_t_1016987752"); // 3
        Sub_219_set.insert("NestedPartySubID_t_1016987752");
        Sub_219.add_attribute("Typ", "19"); // 3
        Sub_219_set.insert("19");
        all_values.push_back(Sub_219_set);
        all_compo_names.insert("Sub_219_set");

        Pty_219.add_element(Sub_219);
      }
      Ord_0.add_element(Pty_219);
    }
    elt.add_element(Ord_0);
  } // end Ord
  { // Ord
    xml_element Ord_1{"Ord"};
    multiset<string> Ord_1_set;
    Ord_1.add_attribute("Qty", "11208198.500000"); // 1
    Ord_1_set.insert("11208198.500000");
    Ord_1.add_attribute("SwapTyp", "1"); // 1
    Ord_1_set.insert("1");
    Ord_1.add_attribute("LegAllocID", "LegAllocID_t_624881055"); // 1
    Ord_1_set.insert("LegAllocID_t_624881055");
    Ord_1.add_attribute("PosEfct", "N"); // 1
    Ord_1_set.insert("N");
    Ord_1.add_attribute("Cover", "0"); // 1
    Ord_1_set.insert("0");
    Ord_1.add_attribute("RefID", "LegRefID_t_1576211079"); // 1
    Ord_1_set.insert("LegRefID_t_1576211079");
    Ord_1.add_attribute("SettlTyp", "5"); // 1
    Ord_1_set.insert("5");
    Ord_1.add_attribute("SettlDt", "LegSettlDate_t_1398845186"); // 1
    Ord_1_set.insert("LegSettlDate_t_1398845186");
    Ord_1.add_attribute("SettlCcy", "CAN"); // 1
    Ord_1_set.insert("CAN");
    Ord_1.add_attribute("OrdQty", "3285131.870000"); // 1
    Ord_1_set.insert("3285131.870000");
    Ord_1.add_attribute("LegVolatility", "7077550.140000"); // 1
    Ord_1_set.insert("7077550.140000");
    Ord_1.add_attribute("LegDividendYield", "20064149.290000"); // 1
    Ord_1_set.insert("20064149.290000");
    Ord_1.add_attribute("LegCurrencyRatio", "1078857.820000"); // 1
    Ord_1_set.insert("1078857.820000");
    Ord_1.add_attribute("LegExecInst", "K"); // 1
    Ord_1_set.insert("K");
    all_values.push_back(Ord_1_set);
    all_compo_names.insert("Ord_1_set");

    {
      xml_element Leg_54{"Leg"};
      multiset<string> Leg_54_set;
      Leg_54.add_attribute("Sym", "LegSymbol_t_1791014377"); // 2
      Leg_54_set.insert("LegSymbol_t_1791014377");
      Leg_54.add_attribute("Sfx", "CD"); // 2
      Leg_54_set.insert("CD");
      Leg_54.add_attribute("ID", "LegSecurityID_t_1260732214"); // 2
      Leg_54_set.insert("LegSecurityID_t_1260732214");
      Leg_54.add_attribute("Src", "L"); // 2
      Leg_54_set.insert("L");
      Leg_54.add_attribute("Prod", "4"); // 2
      Leg_54_set.insert("4");
      Leg_54.add_attribute("CFI", "LegCFICode_t_368622624"); // 2
      Leg_54_set.insert("LegCFICode_t_368622624");
      Leg_54.add_attribute("SecTyp", "EUCORP"); // 2
      Leg_54_set.insert("EUCORP");
      Leg_54.add_attribute("SecSubTyp", "LegSecuritySubType_t_395171118"); // 2
      Leg_54_set.insert("LegSecuritySubType_t_395171118");
      Leg_54.add_attribute("MMY", "967742986"); // 2
      Leg_54_set.insert("967742986");
      Leg_54.add_attribute("Mat", "LegMaturityDate_t_1462921921"); // 2
      Leg_54_set.insert("LegMaturityDate_t_1462921921");
      Leg_54.add_attribute("MatTm", "1964667973"); // 2
      Leg_54_set.insert("1964667973");
      Leg_54.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1901826389"); // 2
      Leg_54_set.insert("LegCouponPaymentDate_t_1901826389");
      Leg_54.add_attribute("Issued", "LegIssueDate_t_996735261"); // 2
      Leg_54_set.insert("LegIssueDate_t_996735261");
      Leg_54.add_attribute("RepoCollSecTyp", "1056515778"); // 2
      Leg_54_set.insert("1056515778");
      Leg_54.add_attribute("RepoTrm", "771330493"); // 2
      Leg_54_set.insert("771330493");
      Leg_54.add_attribute("RepoRt", "14575404.400000"); // 2
      Leg_54_set.insert("14575404.400000");
      Leg_54.add_attribute("Fctr", "298519.800000"); // 2
      Leg_54_set.insert("298519.800000");
      Leg_54.add_attribute("CrdRtg", "LegCreditRating_t_2127007221"); // 2
      Leg_54_set.insert("LegCreditRating_t_2127007221");
      Leg_54.add_attribute("Rgstry", "LegInstrRegistry_t_2082421495"); // 2
      Leg_54_set.insert("LegInstrRegistry_t_2082421495");
      Leg_54.add_attribute("Ctry", "1352155241"); // 2
      Leg_54_set.insert("1352155241");
      Leg_54.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1381962560"); // 2
      Leg_54_set.insert("LegStateOrProvinceOfIssue_t_1381962560");
      Leg_54.add_attribute("Lcl", "LegLocaleOfIssue_t_1511148926"); // 2
      Leg_54_set.insert("LegLocaleOfIssue_t_1511148926");
      Leg_54.add_attribute("Redeem", "LegRedemptionDate_t_1476083026"); // 2
      Leg_54_set.insert("LegRedemptionDate_t_1476083026");
      Leg_54.add_attribute("Strk", "6333240.980000"); // 2
      Leg_54_set.insert("6333240.980000");
      Leg_54.add_attribute("StrkCcy", "GBP"); // 2
      Leg_54_set.insert("GBP");
      Leg_54.add_attribute("OptA", "961837285"); // 2
      Leg_54_set.insert("961837285");
      Leg_54.add_attribute("Cmult", "3835364.530000"); // 2
      Leg_54_set.insert("3835364.530000");
      Leg_54.add_attribute("MultTyp", "1"); // 2
      Leg_54_set.insert("1");
      Leg_54.add_attribute("FlowSchedTyp", "2"); // 2
      Leg_54_set.insert("2");
      Leg_54.add_attribute("UOM", "oz_tr"); // 2
      Leg_54_set.insert("oz_tr");
      Leg_54.add_attribute("UOMQty", "2523711.600000"); // 2
      Leg_54_set.insert("2523711.600000");
      Leg_54.add_attribute("PxUOM", "oz_tr"); // 2
      Leg_54_set.insert("oz_tr");
      Leg_54.add_attribute("PxUOMQty", "2263976.770000"); // 2
      Leg_54_set.insert("2263976.770000");
      Leg_54.add_attribute("TmUnit", "Min"); // 2
      Leg_54_set.insert("Min");
      Leg_54.add_attribute("ExerStyle", "2"); // 2
      Leg_54_set.insert("2");
      Leg_54.add_attribute("CpnRt", "5950203.010000"); // 2
      Leg_54_set.insert("5950203.010000");
      Leg_54.add_attribute("Exch", "LegSecurityExchange_t_557594385"); // 2
      Leg_54_set.insert("LegSecurityExchange_t_557594385");
      Leg_54.add_attribute("Issr", "LegIssuer_t_849482045"); // 2
      Leg_54_set.insert("LegIssuer_t_849482045");
      Leg_54.add_attribute("EncLegIssrLen", "1562763287"); // 2
      Leg_54_set.insert("1562763287");
      Leg_54.add_attribute("EncLegIssr", "EncodedLegIssuer_t_2020516306"); // 2
      Leg_54_set.insert("EncodedLegIssuer_t_2020516306");
      Leg_54.add_attribute("Desc", "LegSecurityDesc_t_666666371"); // 2
      Leg_54_set.insert("LegSecurityDesc_t_666666371");
      Leg_54.add_attribute("EncLegSecDescLen", "1317106028"); // 2
      Leg_54_set.insert("1317106028");
      Leg_54.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_869767920"); // 2
      Leg_54_set.insert("EncodedLegSecurityDesc_t_869767920");
      Leg_54.add_attribute("RatioQty", "17231821.490000"); // 2
      Leg_54_set.insert("17231821.490000");
      Leg_54.add_attribute("Side", "A"); // 2
      Leg_54_set.insert("A");
      Leg_54.add_attribute("Ccy", "USD"); // 2
      Leg_54_set.insert("USD");
      Leg_54.add_attribute("Pool", "LegPool_t_2067960095"); // 2
      Leg_54_set.insert("LegPool_t_2067960095");
      Leg_54.add_attribute("Dated", "LegDatedDate_t_114762560"); // 2
      Leg_54_set.insert("LegDatedDate_t_114762560");
      Leg_54.add_attribute("CSetMo", "957705723"); // 2
      Leg_54_set.insert("957705723");
      Leg_54.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1302439007"); // 2
      Leg_54_set.insert("LegInterestAccrualDate_t_1302439007");
      Leg_54.add_attribute("PutCall", "1625911486"); // 2
      Leg_54_set.insert("1625911486");
      Leg_54.add_attribute("LegOptionRatio", "2863051.010000"); // 2
      Leg_54_set.insert("2863051.010000");
      Leg_54.add_attribute("Px", "19357631.050000"); // 2
      Leg_54_set.insert("19357631.050000");
      all_values.push_back(Leg_54_set);
      all_compo_names.insert("Leg_54_set");

      {
        xml_element LegAID_54{"LegAID"};
        multiset<string> LegAID_54_set;
        LegAID_54.add_attribute("SecAltID", "LegSecurityAltID_t_1301692925"); // 3
        LegAID_54_set.insert("LegSecurityAltID_t_1301692925");
        LegAID_54.add_attribute("SecAltIDSrc", "I"); // 3
        LegAID_54_set.insert("I");
        all_values.push_back(LegAID_54_set);
        all_compo_names.insert("LegAID_54_set");

        Leg_54.add_element(LegAID_54);
      }
      Ord_1.add_element(Leg_54);
    }
    {
      xml_element Stip_80{"Stip"};
      multiset<string> Stip_80_set;
      Stip_80.add_attribute("StipTyp", "MATURITY"); // 2
      Stip_80_set.insert("MATURITY");
      Stip_80.add_attribute("StipVal", "LegStipulationValue_t_1685229379"); // 2
      Stip_80_set.insert("LegStipulationValue_t_1685229379");
      all_values.push_back(Stip_80_set);
      all_compo_names.insert("Stip_80_set");

      Ord_1.add_element(Stip_80);
    }
    {
      xml_element PreAll_7{"PreAll"};
      multiset<string> PreAll_7_set;
      PreAll_7.add_attribute("AllocAcct", "LegAllocAccount_t_1645054682"); // 2
      PreAll_7_set.insert("LegAllocAccount_t_1645054682");
      PreAll_7.add_attribute("IndAllocID", "LegIndividualAllocID_t_1819839809"); // 2
      PreAll_7_set.insert("LegIndividualAllocID_t_1819839809");
      PreAll_7.add_attribute("AllocQty", "6508948.410000"); // 2
      PreAll_7_set.insert("6508948.410000");
      PreAll_7.add_attribute("AllocAcctIDSrc", "LegAllocAcctIDSource_t_1897425842"); // 2
      PreAll_7_set.insert("LegAllocAcctIDSource_t_1897425842");
      PreAll_7.add_attribute("AllocSettlCcy", "JPY"); // 2
      PreAll_7_set.insert("JPY");
      all_values.push_back(PreAll_7_set);
      all_compo_names.insert("PreAll_7_set");

      {
        xml_element Pty_220{"Pty"};
        multiset<string> Pty_220_set;
        Pty_220.add_attribute("ID", "Nested2PartyID_t_2131029018"); // 3
        Pty_220_set.insert("Nested2PartyID_t_2131029018");
        Pty_220.add_attribute("Src", "3"); // 3
        Pty_220_set.insert("3");
        Pty_220.add_attribute("R", "50"); // 3
        Pty_220_set.insert("50");
        all_values.push_back(Pty_220_set);
        all_compo_names.insert("Pty_220_set");

        {
          xml_element Sub_220{"Sub"};
          multiset<string> Sub_220_set;
          Sub_220.add_attribute("ID", "Nested2PartySubID_t_541139755"); // 4
          Sub_220_set.insert("Nested2PartySubID_t_541139755");
          Sub_220.add_attribute("Typ", "4"); // 4
          Sub_220_set.insert("4");
          all_values.push_back(Sub_220_set);
          all_compo_names.insert("Sub_220_set");

          Pty_220.add_element(Sub_220);
        }
        PreAll_7.add_element(Pty_220);
      }
      Ord_1.add_element(PreAll_7);
    }
    {
      xml_element Pty_221{"Pty"};
      multiset<string> Pty_221_set;
      Pty_221.add_attribute("ID", "NestedPartyID_t_887592458"); // 2
      Pty_221_set.insert("NestedPartyID_t_887592458");
      Pty_221.add_attribute("Src", "A"); // 2
      Pty_221_set.insert("A");
      Pty_221.add_attribute("R", "13"); // 2
      Pty_221_set.insert("13");
      all_values.push_back(Pty_221_set);
      all_compo_names.insert("Pty_221_set");

      {
        xml_element Sub_221{"Sub"};
        multiset<string> Sub_221_set;
        Sub_221.add_attribute("ID", "NestedPartySubID_t_57214838"); // 3
        Sub_221_set.insert("NestedPartySubID_t_57214838");
        Sub_221.add_attribute("Typ", "28"); // 3
        Sub_221_set.insert("28");
        all_values.push_back(Sub_221_set);
        all_compo_names.insert("Sub_221_set");

        Pty_221.add_element(Sub_221);
      }
      Ord_1.add_element(Pty_221);
    }
    elt.add_element(Ord_1);
  } // end Ord
  { // Ord
    xml_element Ord_2{"Ord"};
    multiset<string> Ord_2_set;
    Ord_2.add_attribute("Qty", "10532664.020000"); // 1
    Ord_2_set.insert("10532664.020000");
    Ord_2.add_attribute("SwapTyp", "1"); // 1
    Ord_2_set.insert("1");
    Ord_2.add_attribute("LegAllocID", "LegAllocID_t_1463765046"); // 1
    Ord_2_set.insert("LegAllocID_t_1463765046");
    Ord_2.add_attribute("PosEfct", "C"); // 1
    Ord_2_set.insert("C");
    Ord_2.add_attribute("Cover", "1"); // 1
    Ord_2_set.insert("1");
    Ord_2.add_attribute("RefID", "LegRefID_t_1578527606"); // 1
    Ord_2_set.insert("LegRefID_t_1578527606");
    Ord_2.add_attribute("SettlTyp", "3"); // 1
    Ord_2_set.insert("3");
    Ord_2.add_attribute("SettlDt", "LegSettlDate_t_1221083166"); // 1
    Ord_2_set.insert("LegSettlDate_t_1221083166");
    Ord_2.add_attribute("SettlCcy", "GBP"); // 1
    Ord_2_set.insert("GBP");
    Ord_2.add_attribute("OrdQty", "10093626.230000"); // 1
    Ord_2_set.insert("10093626.230000");
    Ord_2.add_attribute("LegVolatility", "2111647.220000"); // 1
    Ord_2_set.insert("2111647.220000");
    Ord_2.add_attribute("LegDividendYield", "7915583.120000"); // 1
    Ord_2_set.insert("7915583.120000");
    Ord_2.add_attribute("LegCurrencyRatio", "17594793.650000"); // 1
    Ord_2_set.insert("17594793.650000");
    Ord_2.add_attribute("LegExecInst", "G"); // 1
    Ord_2_set.insert("G");
    all_values.push_back(Ord_2_set);
    all_compo_names.insert("Ord_2_set");

    {
      xml_element Leg_55{"Leg"};
      multiset<string> Leg_55_set;
      Leg_55.add_attribute("Sym", "LegSymbol_t_289129346"); // 2
      Leg_55_set.insert("LegSymbol_t_289129346");
      Leg_55.add_attribute("Sfx", "CD"); // 2
      Leg_55_set.insert("CD");
      Leg_55.add_attribute("ID", "LegSecurityID_t_399805294"); // 2
      Leg_55_set.insert("LegSecurityID_t_399805294");
      Leg_55.add_attribute("Src", "4"); // 2
      Leg_55_set.insert("4");
      Leg_55.add_attribute("Prod", "9"); // 2
      Leg_55_set.insert("9");
      Leg_55.add_attribute("CFI", "LegCFICode_t_1277097813"); // 2
      Leg_55_set.insert("LegCFICode_t_1277097813");
      Leg_55.add_attribute("SecTyp", "USTB"); // 2
      Leg_55_set.insert("USTB");
      Leg_55.add_attribute("SecSubTyp", "LegSecuritySubType_t_900363567"); // 2
      Leg_55_set.insert("LegSecuritySubType_t_900363567");
      Leg_55.add_attribute("MMY", "601926984"); // 2
      Leg_55_set.insert("601926984");
      Leg_55.add_attribute("Mat", "LegMaturityDate_t_563756666"); // 2
      Leg_55_set.insert("LegMaturityDate_t_563756666");
      Leg_55.add_attribute("MatTm", "1711265097"); // 2
      Leg_55_set.insert("1711265097");
      Leg_55.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1489519443"); // 2
      Leg_55_set.insert("LegCouponPaymentDate_t_1489519443");
      Leg_55.add_attribute("Issued", "LegIssueDate_t_977929079"); // 2
      Leg_55_set.insert("LegIssueDate_t_977929079");
      Leg_55.add_attribute("RepoCollSecTyp", "1041349349"); // 2
      Leg_55_set.insert("1041349349");
      Leg_55.add_attribute("RepoTrm", "1546734281"); // 2
      Leg_55_set.insert("1546734281");
      Leg_55.add_attribute("RepoRt", "1143857.650000"); // 2
      Leg_55_set.insert("1143857.650000");
      Leg_55.add_attribute("Fctr", "20946157.510000"); // 2
      Leg_55_set.insert("20946157.510000");
      Leg_55.add_attribute("CrdRtg", "LegCreditRating_t_1544901993"); // 2
      Leg_55_set.insert("LegCreditRating_t_1544901993");
      Leg_55.add_attribute("Rgstry", "LegInstrRegistry_t_1578150811"); // 2
      Leg_55_set.insert("LegInstrRegistry_t_1578150811");
      Leg_55.add_attribute("Ctry", "605948987"); // 2
      Leg_55_set.insert("605948987");
      Leg_55.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1463546152"); // 2
      Leg_55_set.insert("LegStateOrProvinceOfIssue_t_1463546152");
      Leg_55.add_attribute("Lcl", "LegLocaleOfIssue_t_1009194769"); // 2
      Leg_55_set.insert("LegLocaleOfIssue_t_1009194769");
      Leg_55.add_attribute("Redeem", "LegRedemptionDate_t_74987946"); // 2
      Leg_55_set.insert("LegRedemptionDate_t_74987946");
      Leg_55.add_attribute("Strk", "5371456.700000"); // 2
      Leg_55_set.insert("5371456.700000");
      Leg_55.add_attribute("StrkCcy", "CHF"); // 2
      Leg_55_set.insert("CHF");
      Leg_55.add_attribute("OptA", "1546508293"); // 2
      Leg_55_set.insert("1546508293");
      Leg_55.add_attribute("Cmult", "1298312.870000"); // 2
      Leg_55_set.insert("1298312.870000");
      Leg_55.add_attribute("MultTyp", "0"); // 2
      Leg_55_set.insert("0");
      Leg_55.add_attribute("FlowSchedTyp", "0"); // 2
      Leg_55_set.insert("0");
      Leg_55.add_attribute("UOM", "tn"); // 2
      Leg_55_set.insert("tn");
      Leg_55.add_attribute("UOMQty", "9110196.650000"); // 2
      Leg_55_set.insert("9110196.650000");
      Leg_55.add_attribute("PxUOM", "oz_tr"); // 2
      Leg_55_set.insert("oz_tr");
      Leg_55.add_attribute("PxUOMQty", "2785470.350000"); // 2
      Leg_55_set.insert("2785470.350000");
      Leg_55.add_attribute("TmUnit", "Min"); // 2
      Leg_55_set.insert("Min");
      Leg_55.add_attribute("ExerStyle", "2"); // 2
      Leg_55_set.insert("2");
      Leg_55.add_attribute("CpnRt", "15556448.480000"); // 2
      Leg_55_set.insert("15556448.480000");
      Leg_55.add_attribute("Exch", "LegSecurityExchange_t_972708117"); // 2
      Leg_55_set.insert("LegSecurityExchange_t_972708117");
      Leg_55.add_attribute("Issr", "LegIssuer_t_134679892"); // 2
      Leg_55_set.insert("LegIssuer_t_134679892");
      Leg_55.add_attribute("EncLegIssrLen", "10088184"); // 2
      Leg_55_set.insert("10088184");
      Leg_55.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1536464783"); // 2
      Leg_55_set.insert("EncodedLegIssuer_t_1536464783");
      Leg_55.add_attribute("Desc", "LegSecurityDesc_t_1845944989"); // 2
      Leg_55_set.insert("LegSecurityDesc_t_1845944989");
      Leg_55.add_attribute("EncLegSecDescLen", "1499607627"); // 2
      Leg_55_set.insert("1499607627");
      Leg_55.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_366910215"); // 2
      Leg_55_set.insert("EncodedLegSecurityDesc_t_366910215");
      Leg_55.add_attribute("RatioQty", "7398106.900000"); // 2
      Leg_55_set.insert("7398106.900000");
      Leg_55.add_attribute("Side", "6"); // 2
      Leg_55_set.insert("6");
      Leg_55.add_attribute("Ccy", "JPY"); // 2
      Leg_55_set.insert("JPY");
      Leg_55.add_attribute("Pool", "LegPool_t_296276606"); // 2
      Leg_55_set.insert("LegPool_t_296276606");
      Leg_55.add_attribute("Dated", "LegDatedDate_t_2059446791"); // 2
      Leg_55_set.insert("LegDatedDate_t_2059446791");
      Leg_55.add_attribute("CSetMo", "1292891781"); // 2
      Leg_55_set.insert("1292891781");
      Leg_55.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1759822759"); // 2
      Leg_55_set.insert("LegInterestAccrualDate_t_1759822759");
      Leg_55.add_attribute("PutCall", "921157912"); // 2
      Leg_55_set.insert("921157912");
      Leg_55.add_attribute("LegOptionRatio", "13678797.280000"); // 2
      Leg_55_set.insert("13678797.280000");
      Leg_55.add_attribute("Px", "1494847.810000"); // 2
      Leg_55_set.insert("1494847.810000");
      all_values.push_back(Leg_55_set);
      all_compo_names.insert("Leg_55_set");

      {
        xml_element LegAID_55{"LegAID"};
        multiset<string> LegAID_55_set;
        LegAID_55.add_attribute("SecAltID", "LegSecurityAltID_t_839824477"); // 3
        LegAID_55_set.insert("LegSecurityAltID_t_839824477");
        LegAID_55.add_attribute("SecAltIDSrc", "I"); // 3
        LegAID_55_set.insert("I");
        all_values.push_back(LegAID_55_set);
        all_compo_names.insert("LegAID_55_set");

        Leg_55.add_element(LegAID_55);
      }
      Ord_2.add_element(Leg_55);
    }
    {
      xml_element Stip_81{"Stip"};
      multiset<string> Stip_81_set;
      Stip_81.add_attribute("StipTyp", "PPT"); // 2
      Stip_81_set.insert("PPT");
      Stip_81.add_attribute("StipVal", "LegStipulationValue_t_969655765"); // 2
      Stip_81_set.insert("LegStipulationValue_t_969655765");
      all_values.push_back(Stip_81_set);
      all_compo_names.insert("Stip_81_set");

      Ord_2.add_element(Stip_81);
    }
    {
      xml_element PreAll_8{"PreAll"};
      multiset<string> PreAll_8_set;
      PreAll_8.add_attribute("AllocAcct", "LegAllocAccount_t_1820102054"); // 2
      PreAll_8_set.insert("LegAllocAccount_t_1820102054");
      PreAll_8.add_attribute("IndAllocID", "LegIndividualAllocID_t_707013437"); // 2
      PreAll_8_set.insert("LegIndividualAllocID_t_707013437");
      PreAll_8.add_attribute("AllocQty", "8483975.050000"); // 2
      PreAll_8_set.insert("8483975.050000");
      PreAll_8.add_attribute("AllocAcctIDSrc", "LegAllocAcctIDSource_t_583638071"); // 2
      PreAll_8_set.insert("LegAllocAcctIDSource_t_583638071");
      PreAll_8.add_attribute("AllocSettlCcy", "USD"); // 2
      PreAll_8_set.insert("USD");
      all_values.push_back(PreAll_8_set);
      all_compo_names.insert("PreAll_8_set");

      {
        xml_element Pty_222{"Pty"};
        multiset<string> Pty_222_set;
        Pty_222.add_attribute("ID", "Nested2PartyID_t_1533729278"); // 3
        Pty_222_set.insert("Nested2PartyID_t_1533729278");
        Pty_222.add_attribute("Src", "6"); // 3
        Pty_222_set.insert("6");
        Pty_222.add_attribute("R", "9"); // 3
        Pty_222_set.insert("9");
        all_values.push_back(Pty_222_set);
        all_compo_names.insert("Pty_222_set");

        {
          xml_element Sub_222{"Sub"};
          multiset<string> Sub_222_set;
          Sub_222.add_attribute("ID", "Nested2PartySubID_t_358953747"); // 4
          Sub_222_set.insert("Nested2PartySubID_t_358953747");
          Sub_222.add_attribute("Typ", "18"); // 4
          Sub_222_set.insert("18");
          all_values.push_back(Sub_222_set);
          all_compo_names.insert("Sub_222_set");

          Pty_222.add_element(Sub_222);
        }
        PreAll_8.add_element(Pty_222);
      }
      Ord_2.add_element(PreAll_8);
    }
    {
      xml_element Pty_223{"Pty"};
      multiset<string> Pty_223_set;
      Pty_223.add_attribute("ID", "NestedPartyID_t_545193925"); // 2
      Pty_223_set.insert("NestedPartyID_t_545193925");
      Pty_223.add_attribute("Src", "A"); // 2
      Pty_223_set.insert("A");
      Pty_223.add_attribute("R", "70"); // 2
      Pty_223_set.insert("70");
      all_values.push_back(Pty_223_set);
      all_compo_names.insert("Pty_223_set");

      {
        xml_element Sub_223{"Sub"};
        multiset<string> Sub_223_set;
        Sub_223.add_attribute("ID", "NestedPartySubID_t_2044801552"); // 3
        Sub_223_set.insert("NestedPartySubID_t_2044801552");
        Sub_223.add_attribute("Typ", "24"); // 3
        Sub_223_set.insert("24");
        all_values.push_back(Sub_223_set);
        all_compo_names.insert("Sub_223_set");

        Pty_223.add_element(Sub_223);
      }
      Ord_2.add_element(Pty_223);
    }
    elt.add_element(Ord_2);
  } // end Ord
  { // OrdQty
    xml_element OrdQty_10{"OrdQty"};
    multiset<string> OrdQty_10_set;
    OrdQty_10.add_attribute("Qty", "9571375.740000"); // 1
    OrdQty_10_set.insert("9571375.740000");
    OrdQty_10.add_attribute("Cash", "7961761.650000"); // 1
    OrdQty_10_set.insert("7961761.650000");
    OrdQty_10.add_attribute("Pct", "5961410.780000"); // 1
    OrdQty_10_set.insert("5961410.780000");
    OrdQty_10.add_attribute("RndDir", "1"); // 1
    OrdQty_10_set.insert("1");
    OrdQty_10.add_attribute("RndMod", "10924527.720000"); // 1
    OrdQty_10_set.insert("10924527.720000");
    all_values.push_back(OrdQty_10_set);
    all_compo_names.insert("OrdQty_10_set");

    elt.add_element(OrdQty_10);
  } // end OrdQty
  { // TrgrInstr
    xml_element TrgrInstr_2{"TrgrInstr"};
    multiset<string> TrgrInstr_2_set;
    TrgrInstr_2.add_attribute("TrgrTyp", "2"); // 1
    TrgrInstr_2_set.insert("2");
    TrgrInstr_2.add_attribute("TrgrActn", "1"); // 1
    TrgrInstr_2_set.insert("1");
    TrgrInstr_2.add_attribute("TrgrPx", "7047918.830000"); // 1
    TrgrInstr_2_set.insert("7047918.830000");
    TrgrInstr_2.add_attribute("TrgrSym", "TriggerSymbol_t_1429262133"); // 1
    TrgrInstr_2_set.insert("TriggerSymbol_t_1429262133");
    TrgrInstr_2.add_attribute("TrgrSecID", "TriggerSecurityID_t_9884582"); // 1
    TrgrInstr_2_set.insert("TriggerSecurityID_t_9884582");
    TrgrInstr_2.add_attribute("TrgrSecIDSrc", "B"); // 1
    TrgrInstr_2_set.insert("B");
    TrgrInstr_2.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_121602962"); // 1
    TrgrInstr_2_set.insert("TriggerSecurityDesc_t_121602962");
    TrgrInstr_2.add_attribute("TrgrPxTyp", "2"); // 1
    TrgrInstr_2_set.insert("2");
    TrgrInstr_2.add_attribute("TrgrPxTypScp", "3"); // 1
    TrgrInstr_2_set.insert("3");
    TrgrInstr_2.add_attribute("TrgrPxDir", "D"); // 1
    TrgrInstr_2_set.insert("D");
    TrgrInstr_2.add_attribute("TrgrNewPx", "8807147.230000"); // 1
    TrgrInstr_2_set.insert("8807147.230000");
    TrgrInstr_2.add_attribute("TrgrOrdTyp", "2"); // 1
    TrgrInstr_2_set.insert("2");
    TrgrInstr_2.add_attribute("TrgrNewQty", "19396562.330000"); // 1
    TrgrInstr_2_set.insert("19396562.330000");
    TrgrInstr_2.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_1464352794"); // 1
    TrgrInstr_2_set.insert("TriggerTradingSessionID_t_1464352794");
    TrgrInstr_2.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_112185207"); // 1
    TrgrInstr_2_set.insert("TriggerTradingSessionSubID_t_112185207");
    all_values.push_back(TrgrInstr_2_set);
    all_compo_names.insert("TrgrInstr_2_set");

    elt.add_element(TrgrInstr_2);
  } // end TrgrInstr
  { // Comm
    xml_element Comm_17{"Comm"};
    multiset<string> Comm_17_set;
    Comm_17.add_attribute("Comm", "Commission_t_919117125"); // 1
    Comm_17_set.insert("Commission_t_919117125");
    Comm_17.add_attribute("CommTyp", "1"); // 1
    Comm_17_set.insert("1");
    Comm_17.add_attribute("Ccy", "JPY"); // 1
    Comm_17_set.insert("JPY");
    Comm_17.add_attribute("FundRenewWaiv", "N"); // 1
    Comm_17_set.insert("N");
    all_values.push_back(Comm_17_set);
    all_compo_names.insert("Comm_17_set");

    elt.add_element(Comm_17);
  } // end Comm
  { // PegInstr
    xml_element PegInstr_2{"PegInstr"};
    multiset<string> PegInstr_2_set;
    PegInstr_2.add_attribute("OfstVal", "10152364.010000"); // 1
    PegInstr_2_set.insert("10152364.010000");
    PegInstr_2.add_attribute("PegPxTyp", "9"); // 1
    PegInstr_2_set.insert("9");
    PegInstr_2.add_attribute("MoveTyp", "1"); // 1
    PegInstr_2_set.insert("1");
    PegInstr_2.add_attribute("OfstTyp", "1"); // 1
    PegInstr_2_set.insert("1");
    PegInstr_2.add_attribute("LmtTyp", "1"); // 1
    PegInstr_2_set.insert("1");
    PegInstr_2.add_attribute("RndDir", "2"); // 1
    PegInstr_2_set.insert("2");
    PegInstr_2.add_attribute("Scope", "1"); // 1
    PegInstr_2_set.insert("1");
    PegInstr_2.add_attribute("PegSecurityIDSource", "2"); // 1
    PegInstr_2_set.insert("2");
    PegInstr_2.add_attribute("PegSecID", "PegSecurityID_t_1668473231"); // 1
    PegInstr_2_set.insert("PegSecurityID_t_1668473231");
    PegInstr_2.add_attribute("PgSymbl", "PegSymbol_t_1686297580"); // 1
    PegInstr_2_set.insert("PegSymbol_t_1686297580");
    PegInstr_2.add_attribute("PegSecDesc", "PegSecurityDesc_t_1637879985"); // 1
    PegInstr_2_set.insert("PegSecurityDesc_t_1637879985");
    all_values.push_back(PegInstr_2_set);
    all_compo_names.insert("PegInstr_2_set");

    elt.add_element(PegInstr_2);
  } // end PegInstr
  { // DiscInstr
    xml_element DiscInstr_2{"DiscInstr"};
    multiset<string> DiscInstr_2_set;
    DiscInstr_2.add_attribute("DsctnInst", "4"); // 1
    DiscInstr_2_set.insert("4");
    DiscInstr_2.add_attribute("OfstValu", "3283024.340000"); // 1
    DiscInstr_2_set.insert("3283024.340000");
    DiscInstr_2.add_attribute("MoveTyp", "0"); // 1
    DiscInstr_2_set.insert("0");
    DiscInstr_2.add_attribute("OfstTyp", "1"); // 1
    DiscInstr_2_set.insert("1");
    DiscInstr_2.add_attribute("LimitTyp", "1"); // 1
    DiscInstr_2_set.insert("1");
    DiscInstr_2.add_attribute("RndDir", "1"); // 1
    DiscInstr_2_set.insert("1");
    DiscInstr_2.add_attribute("Scope", "4"); // 1
    DiscInstr_2_set.insert("4");
    all_values.push_back(DiscInstr_2_set);
    all_compo_names.insert("DiscInstr_2_set");

    elt.add_element(DiscInstr_2);
  } // end DiscInstr
  { // StrtPrmGrp
    xml_element StrtPrmGrp_6{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_6_set;
    StrtPrmGrp_6.add_attribute("StrtPrmNme", "StrategyParameterName_t_1452250976"); // 1
    StrtPrmGrp_6_set.insert("StrategyParameterName_t_1452250976");
    StrtPrmGrp_6.add_attribute("StrtPrmTyp", "12"); // 1
    StrtPrmGrp_6_set.insert("12");
    StrtPrmGrp_6.add_attribute("StrtPrmVal", "StrategyParameterValue_t_279514408"); // 1
    StrtPrmGrp_6_set.insert("StrategyParameterValue_t_279514408");
    all_values.push_back(StrtPrmGrp_6_set);
    all_compo_names.insert("StrtPrmGrp_6_set");

    elt.add_element(StrtPrmGrp_6);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_7{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_7_set;
    StrtPrmGrp_7.add_attribute("StrtPrmNme", "StrategyParameterName_t_414566857"); // 1
    StrtPrmGrp_7_set.insert("StrategyParameterName_t_414566857");
    StrtPrmGrp_7.add_attribute("StrtPrmTyp", "24"); // 1
    StrtPrmGrp_7_set.insert("24");
    StrtPrmGrp_7.add_attribute("StrtPrmVal", "StrategyParameterValue_t_1743867203"); // 1
    StrtPrmGrp_7_set.insert("StrategyParameterValue_t_1743867203");
    all_values.push_back(StrtPrmGrp_7_set);
    all_compo_names.insert("StrtPrmGrp_7_set");

    elt.add_element(StrtPrmGrp_7);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_8{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_8_set;
    StrtPrmGrp_8.add_attribute("StrtPrmNme", "StrategyParameterName_t_526752064"); // 1
    StrtPrmGrp_8_set.insert("StrategyParameterName_t_526752064");
    StrtPrmGrp_8.add_attribute("StrtPrmTyp", "23"); // 1
    StrtPrmGrp_8_set.insert("23");
    StrtPrmGrp_8.add_attribute("StrtPrmVal", "StrategyParameterValue_t_446981979"); // 1
    StrtPrmGrp_8_set.insert("StrategyParameterValue_t_446981979");
    all_values.push_back(StrtPrmGrp_8_set);
    all_compo_names.insert("StrtPrmGrp_8_set");

    elt.add_element(StrtPrmGrp_8);
  } // end StrtPrmGrp
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
