#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AllocationInstructionAlert.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationInstructionAlert_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AllocInstrAlert" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationInstructionAlert_message_t_0;
  elt.add_attribute("ID", "AllocID_t_235775511"); // 0
  AllocationInstructionAlert_message_t_0.insert("AllocID_t_235775511");
  elt.add_attribute("TransTyp", "1"); // 0
  AllocationInstructionAlert_message_t_0.insert("1");
  elt.add_attribute("Typ", "14"); // 0
  AllocationInstructionAlert_message_t_0.insert("14");
  elt.add_attribute("ID2", "SecondaryAllocID_t_685143795"); // 0
  AllocationInstructionAlert_message_t_0.insert("SecondaryAllocID_t_685143795");
  elt.add_attribute("RefID", "RefAllocID_t_1361507145"); // 0
  AllocationInstructionAlert_message_t_0.insert("RefAllocID_t_1361507145");
  elt.add_attribute("CxlRplcRsn", "1"); // 0
  AllocationInstructionAlert_message_t_0.insert("1");
  elt.add_attribute("ImReqTyp", "6"); // 0
  AllocationInstructionAlert_message_t_0.insert("6");
  elt.add_attribute("LinkID", "AllocLinkID_t_540697077"); // 0
  AllocationInstructionAlert_message_t_0.insert("AllocLinkID_t_540697077");
  elt.add_attribute("LinkTyp", "1"); // 0
  AllocationInstructionAlert_message_t_0.insert("1");
  elt.add_attribute("BkngRefID", "BookingRefID_t_1206104878"); // 0
  AllocationInstructionAlert_message_t_0.insert("BookingRefID_t_1206104878");
  elt.add_attribute("NoOrdsTyp", "0"); // 0
  AllocationInstructionAlert_message_t_0.insert("0");
  elt.add_attribute("PrevlyRpted", "N"); // 0
  AllocationInstructionAlert_message_t_0.insert("N");
  elt.add_attribute("ReversalInd", "true"); // 0
  AllocationInstructionAlert_message_t_0.insert("true");
  elt.add_attribute("MtchTyp", "M6"); // 0
  AllocationInstructionAlert_message_t_0.insert("M6");
  elt.add_attribute("Side", "G"); // 0
  AllocationInstructionAlert_message_t_0.insert("G");
  elt.add_attribute("Qty", "17553136.110000"); // 0
  AllocationInstructionAlert_message_t_0.insert("17553136.110000");
  elt.add_attribute("QtyTyp", "0"); // 0
  AllocationInstructionAlert_message_t_0.insert("0");
  elt.add_attribute("LastMkt", "LastMkt_t_1757093527"); // 0
  AllocationInstructionAlert_message_t_0.insert("LastMkt_t_1757093527");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_1983219166"); // 0
  AllocationInstructionAlert_message_t_0.insert("TradeOriginationDate_t_1983219166");
  elt.add_attribute("SesID", "3"); // 0
  AllocationInstructionAlert_message_t_0.insert("3");
  elt.add_attribute("SesSub", "7"); // 0
  AllocationInstructionAlert_message_t_0.insert("7");
  elt.add_attribute("PxTyp", "2"); // 0
  AllocationInstructionAlert_message_t_0.insert("2");
  elt.add_attribute("AvgPx", "18347217.030000"); // 0
  AllocationInstructionAlert_message_t_0.insert("18347217.030000");
  elt.add_attribute("AvgParPx", "21298468.970000"); // 0
  AllocationInstructionAlert_message_t_0.insert("21298468.970000");
  elt.add_attribute("Ccy", "JPY"); // 0
  AllocationInstructionAlert_message_t_0.insert("JPY");
  elt.add_attribute("AvgPxPrcsn", "1123401326"); // 0
  AllocationInstructionAlert_message_t_0.insert("1123401326");
  elt.add_attribute("TrdDt", "TradeDate_t_225176217"); // 0
  AllocationInstructionAlert_message_t_0.insert("TradeDate_t_225176217");
  elt.add_attribute("TxnTm", "TransactTime_t_1459330764"); // 0
  AllocationInstructionAlert_message_t_0.insert("TransactTime_t_1459330764");
  elt.add_attribute("SettlTyp", "B"); // 0
  AllocationInstructionAlert_message_t_0.insert("B");
  elt.add_attribute("SettlDt", "SettlDate_t_750984802"); // 0
  AllocationInstructionAlert_message_t_0.insert("SettlDate_t_750984802");
  elt.add_attribute("BkngTyp", "0"); // 0
  AllocationInstructionAlert_message_t_0.insert("0");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_2043556072"); // 0
  AllocationInstructionAlert_message_t_0.insert("GrossTradeAmt_t_2043556072");
  elt.add_attribute("Concession", "Concession_t_465331095"); // 0
  AllocationInstructionAlert_message_t_0.insert("Concession_t_465331095");
  elt.add_attribute("TotTakedown", "TotalTakedown_t_232766423"); // 0
  AllocationInstructionAlert_message_t_0.insert("TotalTakedown_t_232766423");
  elt.add_attribute("NetMny", "NetMoney_t_1257579570"); // 0
  AllocationInstructionAlert_message_t_0.insert("NetMoney_t_1257579570");
  elt.add_attribute("PosEfct", "N"); // 0
  AllocationInstructionAlert_message_t_0.insert("N");
  elt.add_attribute("AutoAcceptInd", "true"); // 0
  AllocationInstructionAlert_message_t_0.insert("true");
  elt.add_attribute("Txt", "Text_t_1798276647"); // 0
  AllocationInstructionAlert_message_t_0.insert("Text_t_1798276647");
  elt.add_attribute("EncTxtLen", "1174979267"); // 0
  AllocationInstructionAlert_message_t_0.insert("1174979267");
  elt.add_attribute("EncTxt", "EncodedText_t_1037540454"); // 0
  AllocationInstructionAlert_message_t_0.insert("EncodedText_t_1037540454");
  elt.add_attribute("NumDaysInt", "1265259983"); // 0
  AllocationInstructionAlert_message_t_0.insert("1265259983");
  elt.add_attribute("AcrdIntRt", "9204183.080000"); // 0
  AllocationInstructionAlert_message_t_0.insert("9204183.080000");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_303389636"); // 0
  AllocationInstructionAlert_message_t_0.insert("AccruedInterestAmt_t_303389636");
  elt.add_attribute("TotAcrdIntAmt", "TotalAccruedInterestAmt_t_2112730304"); // 0
  AllocationInstructionAlert_message_t_0.insert("TotalAccruedInterestAmt_t_2112730304");
  elt.add_attribute("IntAtMat", "InterestAtMaturity_t_1334006307"); // 0
  AllocationInstructionAlert_message_t_0.insert("InterestAtMaturity_t_1334006307");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_2058703247"); // 0
  AllocationInstructionAlert_message_t_0.insert("EndAccruedInterestAmt_t_2058703247");
  elt.add_attribute("StartCsh", "StartCash_t_1454346759"); // 0
  AllocationInstructionAlert_message_t_0.insert("StartCash_t_1454346759");
  elt.add_attribute("EndCsh", "EndCash_t_943616187"); // 0
  AllocationInstructionAlert_message_t_0.insert("EndCash_t_943616187");
  elt.add_attribute("LegalCnfm", "N"); // 0
  AllocationInstructionAlert_message_t_0.insert("N");
  elt.add_attribute("TotNoAllocs", "78398241"); // 0
  AllocationInstructionAlert_message_t_0.insert("78398241");
  elt.add_attribute("LastFragment", "Y"); // 0
  AllocationInstructionAlert_message_t_0.insert("Y");
  elt.add_attribute("AvgPxInd", "2"); // 0
  AllocationInstructionAlert_message_t_0.insert("2");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1913119945"); // 0
  AllocationInstructionAlert_message_t_0.insert("ClearingBusinessDate_t_1913119945");
  elt.add_attribute("TrdTyp", "17"); // 0
  AllocationInstructionAlert_message_t_0.insert("17");
  elt.add_attribute("TrdSubTyp", "2"); // 0
  AllocationInstructionAlert_message_t_0.insert("2");
  elt.add_attribute("CustCpcty", "2"); // 0
  AllocationInstructionAlert_message_t_0.insert("2");
  elt.add_attribute("InptSrc", "TradeInputSource_t_200752460"); // 0
  AllocationInstructionAlert_message_t_0.insert("TradeInputSource_t_200752460");
  elt.add_attribute("MLegRptTyp", "1"); // 0
  AllocationInstructionAlert_message_t_0.insert("1");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_721315502"); // 0
  AllocationInstructionAlert_message_t_0.insert("MessageEventSource_t_721315502");
  elt.add_attribute("RndPx", "12274591.880000"); // 0
  AllocationInstructionAlert_message_t_0.insert("12274591.880000");
  all_values.push_back(AllocationInstructionAlert_message_t_0);
  all_compo_names.insert("AllocationInstructionAlert_message_t");

  { // Hdr
    xml_element Hdr_4{"Hdr"};
    multiset<string> Hdr_4_set;
    Hdr_4.add_attribute("SeqNum", "1495127971"); // 1
    Hdr_4_set.insert("1495127971");
    Hdr_4.add_attribute("SID", "SenderCompID_t_268938129"); // 1
    Hdr_4_set.insert("SenderCompID_t_268938129");
    Hdr_4.add_attribute("TID", "TargetCompID_t_1123531612"); // 1
    Hdr_4_set.insert("TargetCompID_t_1123531612");
    Hdr_4.add_attribute("OBID", "OnBehalfOfCompID_t_1960459067"); // 1
    Hdr_4_set.insert("OnBehalfOfCompID_t_1960459067");
    Hdr_4.add_attribute("D2ID", "DeliverToCompID_t_501704552"); // 1
    Hdr_4_set.insert("DeliverToCompID_t_501704552");
    Hdr_4.add_attribute("SSub", "SenderSubID_t_233627534"); // 1
    Hdr_4_set.insert("SenderSubID_t_233627534");
    Hdr_4.add_attribute("SLoc", "SenderLocationID_t_1163763043"); // 1
    Hdr_4_set.insert("SenderLocationID_t_1163763043");
    Hdr_4.add_attribute("TSub", "TargetSubID_t_333140129"); // 1
    Hdr_4_set.insert("TargetSubID_t_333140129");
    Hdr_4.add_attribute("TLoc", "TargetLocationID_t_2031904181"); // 1
    Hdr_4_set.insert("TargetLocationID_t_2031904181");
    Hdr_4.add_attribute("OBSub", "OnBehalfOfSubID_t_191258662"); // 1
    Hdr_4_set.insert("OnBehalfOfSubID_t_191258662");
    Hdr_4.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1370680583"); // 1
    Hdr_4_set.insert("OnBehalfOfLocationID_t_1370680583");
    Hdr_4.add_attribute("D2Sub", "DeliverToSubID_t_1149680517"); // 1
    Hdr_4_set.insert("DeliverToSubID_t_1149680517");
    Hdr_4.add_attribute("D2Loc", "DeliverToLocationID_t_1111676970"); // 1
    Hdr_4_set.insert("DeliverToLocationID_t_1111676970");
    Hdr_4.add_attribute("PosDup", "N"); // 1
    Hdr_4_set.insert("N");
    Hdr_4.add_attribute("PosRsnd", "Y"); // 1
    Hdr_4_set.insert("Y");
    Hdr_4.add_attribute("Snt", "SendingTime_t_298199630"); // 1
    Hdr_4_set.insert("SendingTime_t_298199630");
    Hdr_4.add_attribute("OrigSnt", "OrigSendingTime_t_1585289819"); // 1
    Hdr_4_set.insert("OrigSendingTime_t_1585289819");
    Hdr_4.add_attribute("MsgEncd", "MessageEncoding_t_421790284"); // 1
    Hdr_4_set.insert("MessageEncoding_t_421790284");
    all_values.push_back(Hdr_4_set);
    all_compo_names.insert("Hdr_4_set");

    {
      xml_element Hop_4{"Hop"};
      multiset<string> Hop_4_set;
      Hop_4.add_attribute("ID", "HopCompID_t_1241815817"); // 2
      Hop_4_set.insert("HopCompID_t_1241815817");
      Hop_4.add_attribute("Ref", "1332244937"); // 2
      Hop_4_set.insert("1332244937");
      Hop_4.add_attribute("Snt", "HopSendingTime_t_500188526"); // 2
      Hop_4_set.insert("HopSendingTime_t_500188526");
      all_values.push_back(Hop_4_set);
      all_compo_names.insert("Hop_4_set");

      Hdr_4.add_element(Hop_4);
    }
    elt.add_element(Hdr_4);
  } // end Hdr
  { // OrdAlloc
    xml_element OrdAlloc_1{"OrdAlloc"};
    multiset<string> OrdAlloc_1_set;
    OrdAlloc_1.add_attribute("ClOrdID", "ClOrdID_t_1259301650"); // 1
    OrdAlloc_1_set.insert("ClOrdID_t_1259301650");
    OrdAlloc_1.add_attribute("OrdID", "OrderID_t_265824823"); // 1
    OrdAlloc_1_set.insert("OrderID_t_265824823");
    OrdAlloc_1.add_attribute("OrdID2", "SecondaryOrderID_t_1561638484"); // 1
    OrdAlloc_1_set.insert("SecondaryOrderID_t_1561638484");
    OrdAlloc_1.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1778268602"); // 1
    OrdAlloc_1_set.insert("SecondaryClOrdID_t_1778268602");
    OrdAlloc_1.add_attribute("ListID", "ListID_t_1675293208"); // 1
    OrdAlloc_1_set.insert("ListID_t_1675293208");
    OrdAlloc_1.add_attribute("Qty", "17623909.450000"); // 1
    OrdAlloc_1_set.insert("17623909.450000");
    OrdAlloc_1.add_attribute("AvgPx", "3749281.230000"); // 1
    OrdAlloc_1_set.insert("3749281.230000");
    OrdAlloc_1.add_attribute("BkngQty", "2491250.620000"); // 1
    OrdAlloc_1_set.insert("2491250.620000");
    all_values.push_back(OrdAlloc_1_set);
    all_compo_names.insert("OrdAlloc_1_set");

    {
      xml_element Pty_18{"Pty"};
      multiset<string> Pty_18_set;
      Pty_18.add_attribute("ID", "Nested2PartyID_t_842366485"); // 2
      Pty_18_set.insert("Nested2PartyID_t_842366485");
      Pty_18.add_attribute("Src", "6"); // 2
      Pty_18_set.insert("6");
      Pty_18.add_attribute("R", "82"); // 2
      Pty_18_set.insert("82");
      all_values.push_back(Pty_18_set);
      all_compo_names.insert("Pty_18_set");

      {
        xml_element Sub_18{"Sub"};
        multiset<string> Sub_18_set;
        Sub_18.add_attribute("ID", "Nested2PartySubID_t_1965898097"); // 3
        Sub_18_set.insert("Nested2PartySubID_t_1965898097");
        Sub_18.add_attribute("Typ", "33"); // 3
        Sub_18_set.insert("33");
        all_values.push_back(Sub_18_set);
        all_compo_names.insert("Sub_18_set");

        Pty_18.add_element(Sub_18);
      }
      OrdAlloc_1.add_element(Pty_18);
    }
    elt.add_element(OrdAlloc_1);
  } // end OrdAlloc
  { // OrdAlloc
    xml_element OrdAlloc_2{"OrdAlloc"};
    multiset<string> OrdAlloc_2_set;
    OrdAlloc_2.add_attribute("ClOrdID", "ClOrdID_t_1019767744"); // 1
    OrdAlloc_2_set.insert("ClOrdID_t_1019767744");
    OrdAlloc_2.add_attribute("OrdID", "OrderID_t_52041984"); // 1
    OrdAlloc_2_set.insert("OrderID_t_52041984");
    OrdAlloc_2.add_attribute("OrdID2", "SecondaryOrderID_t_699310909"); // 1
    OrdAlloc_2_set.insert("SecondaryOrderID_t_699310909");
    OrdAlloc_2.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1352907873"); // 1
    OrdAlloc_2_set.insert("SecondaryClOrdID_t_1352907873");
    OrdAlloc_2.add_attribute("ListID", "ListID_t_2083946165"); // 1
    OrdAlloc_2_set.insert("ListID_t_2083946165");
    OrdAlloc_2.add_attribute("Qty", "8905695.710000"); // 1
    OrdAlloc_2_set.insert("8905695.710000");
    OrdAlloc_2.add_attribute("AvgPx", "5761048.090000"); // 1
    OrdAlloc_2_set.insert("5761048.090000");
    OrdAlloc_2.add_attribute("BkngQty", "10861430.340000"); // 1
    OrdAlloc_2_set.insert("10861430.340000");
    all_values.push_back(OrdAlloc_2_set);
    all_compo_names.insert("OrdAlloc_2_set");

    {
      xml_element Pty_19{"Pty"};
      multiset<string> Pty_19_set;
      Pty_19.add_attribute("ID", "Nested2PartyID_t_2002246542"); // 2
      Pty_19_set.insert("Nested2PartyID_t_2002246542");
      Pty_19.add_attribute("Src", "E"); // 2
      Pty_19_set.insert("E");
      Pty_19.add_attribute("R", "28"); // 2
      Pty_19_set.insert("28");
      all_values.push_back(Pty_19_set);
      all_compo_names.insert("Pty_19_set");

      {
        xml_element Sub_19{"Sub"};
        multiset<string> Sub_19_set;
        Sub_19.add_attribute("ID", "Nested2PartySubID_t_152962524"); // 3
        Sub_19_set.insert("Nested2PartySubID_t_152962524");
        Sub_19.add_attribute("Typ", "23"); // 3
        Sub_19_set.insert("23");
        all_values.push_back(Sub_19_set);
        all_compo_names.insert("Sub_19_set");

        Pty_19.add_element(Sub_19);
      }
      OrdAlloc_2.add_element(Pty_19);
    }
    elt.add_element(OrdAlloc_2);
  } // end OrdAlloc
  { // OrdAlloc
    xml_element OrdAlloc_3{"OrdAlloc"};
    multiset<string> OrdAlloc_3_set;
    OrdAlloc_3.add_attribute("ClOrdID", "ClOrdID_t_475376844"); // 1
    OrdAlloc_3_set.insert("ClOrdID_t_475376844");
    OrdAlloc_3.add_attribute("OrdID", "OrderID_t_1394778341"); // 1
    OrdAlloc_3_set.insert("OrderID_t_1394778341");
    OrdAlloc_3.add_attribute("OrdID2", "SecondaryOrderID_t_872742490"); // 1
    OrdAlloc_3_set.insert("SecondaryOrderID_t_872742490");
    OrdAlloc_3.add_attribute("ClOrdID2", "SecondaryClOrdID_t_975565370"); // 1
    OrdAlloc_3_set.insert("SecondaryClOrdID_t_975565370");
    OrdAlloc_3.add_attribute("ListID", "ListID_t_1731582043"); // 1
    OrdAlloc_3_set.insert("ListID_t_1731582043");
    OrdAlloc_3.add_attribute("Qty", "21320441.400000"); // 1
    OrdAlloc_3_set.insert("21320441.400000");
    OrdAlloc_3.add_attribute("AvgPx", "12413901.930000"); // 1
    OrdAlloc_3_set.insert("12413901.930000");
    OrdAlloc_3.add_attribute("BkngQty", "11457368.790000"); // 1
    OrdAlloc_3_set.insert("11457368.790000");
    all_values.push_back(OrdAlloc_3_set);
    all_compo_names.insert("OrdAlloc_3_set");

    {
      xml_element Pty_20{"Pty"};
      multiset<string> Pty_20_set;
      Pty_20.add_attribute("ID", "Nested2PartyID_t_1762829095"); // 2
      Pty_20_set.insert("Nested2PartyID_t_1762829095");
      Pty_20.add_attribute("Src", "C"); // 2
      Pty_20_set.insert("C");
      Pty_20.add_attribute("R", "70"); // 2
      Pty_20_set.insert("70");
      all_values.push_back(Pty_20_set);
      all_compo_names.insert("Pty_20_set");

      {
        xml_element Sub_20{"Sub"};
        multiset<string> Sub_20_set;
        Sub_20.add_attribute("ID", "Nested2PartySubID_t_2137757218"); // 3
        Sub_20_set.insert("Nested2PartySubID_t_2137757218");
        Sub_20.add_attribute("Typ", "9"); // 3
        Sub_20_set.insert("9");
        all_values.push_back(Sub_20_set);
        all_compo_names.insert("Sub_20_set");

        Pty_20.add_element(Sub_20);
      }
      OrdAlloc_3.add_element(Pty_20);
    }
    elt.add_element(OrdAlloc_3);
  } // end OrdAlloc
  { // AllExc
    xml_element AllExc_3{"AllExc"};
    multiset<string> AllExc_3_set;
    AllExc_3.add_attribute("LastQty", "18603296.650000"); // 1
    AllExc_3_set.insert("18603296.650000");
    AllExc_3.add_attribute("ExecID", "ExecID_t_1536388008"); // 1
    AllExc_3_set.insert("ExecID_t_1536388008");
    AllExc_3.add_attribute("ExecID2", "SecondaryExecID_t_1421425111"); // 1
    AllExc_3_set.insert("SecondaryExecID_t_1421425111");
    AllExc_3.add_attribute("LastPx", "13958775.310000"); // 1
    AllExc_3_set.insert("13958775.310000");
    AllExc_3.add_attribute("LastParPx", "4086721.040000"); // 1
    AllExc_3_set.insert("4086721.040000");
    AllExc_3.add_attribute("LastCpcty", "4"); // 1
    AllExc_3_set.insert("4");
    AllExc_3.add_attribute("TrdID", "TradeID_t_2095188440"); // 1
    AllExc_3_set.insert("TradeID_t_2095188440");
    AllExc_3.add_attribute("FirmTrdID", "FirmTradeID_t_1761579978"); // 1
    AllExc_3_set.insert("FirmTradeID_t_1761579978");
    all_values.push_back(AllExc_3_set);
    all_compo_names.insert("AllExc_3_set");

    elt.add_element(AllExc_3);
  } // end AllExc
  { // Instrmt
    xml_element Instrmt_3{"Instrmt"};
    multiset<string> Instrmt_3_set;
    Instrmt_3.add_attribute("Sym", "Symbol_t_1409929612"); // 1
    Instrmt_3_set.insert("Symbol_t_1409929612");
    Instrmt_3.add_attribute("Sfx", "CD"); // 1
    Instrmt_3_set.insert("CD");
    Instrmt_3.add_attribute("ID", "SecurityID_t_190201139"); // 1
    Instrmt_3_set.insert("SecurityID_t_190201139");
    Instrmt_3.add_attribute("Src", "C"); // 1
    Instrmt_3_set.insert("C");
    Instrmt_3.add_attribute("Prod", "13"); // 1
    Instrmt_3_set.insert("13");
    Instrmt_3.add_attribute("ProdCmplx", "ProductComplex_t_292892520"); // 1
    Instrmt_3_set.insert("ProductComplex_t_292892520");
    Instrmt_3.add_attribute("SecGrp", "SecurityGroup_t_402175558"); // 1
    Instrmt_3_set.insert("SecurityGroup_t_402175558");
    Instrmt_3.add_attribute("CFI", "CFICode_t_845999782"); // 1
    Instrmt_3_set.insert("CFICode_t_845999782");
    Instrmt_3.add_attribute("SecTyp", "OPT"); // 1
    Instrmt_3_set.insert("OPT");
    Instrmt_3.add_attribute("SubTyp", "SecuritySubType_t_877552402"); // 1
    Instrmt_3_set.insert("SecuritySubType_t_877552402");
    Instrmt_3.add_attribute("MMY", "93294475"); // 1
    Instrmt_3_set.insert("93294475");
    Instrmt_3.add_attribute("MatDt", "MaturityDate_t_706132562"); // 1
    Instrmt_3_set.insert("MaturityDate_t_706132562");
    Instrmt_3.add_attribute("MatTm", "1853117772"); // 1
    Instrmt_3_set.insert("1853117772");
    Instrmt_3.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1824876518"); // 1
    Instrmt_3_set.insert("SettleOnOpenFlag_t_1824876518");
    Instrmt_3.add_attribute("AsgnMeth", "690693055"); // 1
    Instrmt_3_set.insert("690693055");
    Instrmt_3.add_attribute("Status", "2"); // 1
    Instrmt_3_set.insert("2");
    Instrmt_3.add_attribute("CpnPmt", "CouponPaymentDate_t_823129749"); // 1
    Instrmt_3_set.insert("CouponPaymentDate_t_823129749");
    Instrmt_3.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_3_set.insert("MM");
    Instrmt_3.add_attribute("Snrty", "SR"); // 1
    Instrmt_3_set.insert("SR");
    Instrmt_3.add_attribute("NotlPctOut", "15837739.260000"); // 1
    Instrmt_3_set.insert("15837739.260000");
    Instrmt_3.add_attribute("OrigNotlPctOut", "2963120.720000"); // 1
    Instrmt_3_set.insert("2963120.720000");
    Instrmt_3.add_attribute("AttchPnt", "5870652.390000"); // 1
    Instrmt_3_set.insert("5870652.390000");
    Instrmt_3.add_attribute("DetchPnt", "10393009.390000"); // 1
    Instrmt_3_set.insert("10393009.390000");
    Instrmt_3.add_attribute("Issued", "IssueDate_t_9158090"); // 1
    Instrmt_3_set.insert("IssueDate_t_9158090");
    Instrmt_3.add_attribute("RepoCollSecTyp", "2123453247"); // 1
    Instrmt_3_set.insert("2123453247");
    Instrmt_3.add_attribute("RepoTrm", "313242402"); // 1
    Instrmt_3_set.insert("313242402");
    Instrmt_3.add_attribute("RepoRt", "14050356.210000"); // 1
    Instrmt_3_set.insert("14050356.210000");
    Instrmt_3.add_attribute("Fctr", "3846417.030000"); // 1
    Instrmt_3_set.insert("3846417.030000");
    Instrmt_3.add_attribute("CrdRtg", "CreditRating_t_1786709497"); // 1
    Instrmt_3_set.insert("CreditRating_t_1786709497");
    Instrmt_3.add_attribute("Rgstry", "InstrRegistry_t_1352740414"); // 1
    Instrmt_3_set.insert("InstrRegistry_t_1352740414");
    Instrmt_3.add_attribute("IssuCtry", "2146221681"); // 1
    Instrmt_3_set.insert("2146221681");
    Instrmt_3.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1049155462"); // 1
    Instrmt_3_set.insert("StateOrProvinceOfIssue_t_1049155462");
    Instrmt_3.add_attribute("Lcl", "LocaleOfIssue_t_43531130"); // 1
    Instrmt_3_set.insert("LocaleOfIssue_t_43531130");
    Instrmt_3.add_attribute("Redeem", "RedemptionDate_t_188939172"); // 1
    Instrmt_3_set.insert("RedemptionDate_t_188939172");
    Instrmt_3.add_attribute("StrkPx", "13977444.610000"); // 1
    Instrmt_3_set.insert("13977444.610000");
    Instrmt_3.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_3_set.insert("USD");
    Instrmt_3.add_attribute("StrkMult", "17999200.190000"); // 1
    Instrmt_3_set.insert("17999200.190000");
    Instrmt_3.add_attribute("StrkValu", "15825681.700000"); // 1
    Instrmt_3_set.insert("15825681.700000");
    Instrmt_3.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_3_set.insert("2");
    Instrmt_3.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_3_set.insert("5");
    Instrmt_3.add_attribute("StrkPxBndryPrcsn", "16758626.450000"); // 1
    Instrmt_3_set.insert("16758626.450000");
    Instrmt_3.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_3_set.insert("4");
    Instrmt_3.add_attribute("OptAt", "235622898"); // 1
    Instrmt_3_set.insert("235622898");
    Instrmt_3.add_attribute("Mult", "13532555.150000"); // 1
    Instrmt_3_set.insert("13532555.150000");
    Instrmt_3.add_attribute("MultTyp", "2"); // 1
    Instrmt_3_set.insert("2");
    Instrmt_3.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_3_set.insert("1");
    Instrmt_3.add_attribute("MinPxIncr", "289016.160000"); // 1
    Instrmt_3_set.insert("289016.160000");
    Instrmt_3.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_2018085884"); // 1
    Instrmt_3_set.insert("MinPriceIncrementAmount_t_2018085884");
    Instrmt_3.add_attribute("UOM", "Bbl"); // 1
    Instrmt_3_set.insert("Bbl");
    Instrmt_3.add_attribute("UOMQty", "16126755.420000"); // 1
    Instrmt_3_set.insert("16126755.420000");
    Instrmt_3.add_attribute("PxUOM", "Gal"); // 1
    Instrmt_3_set.insert("Gal");
    Instrmt_3.add_attribute("PxUOMQty", "13384528.780000"); // 1
    Instrmt_3_set.insert("13384528.780000");
    Instrmt_3.add_attribute("SettlMeth", "C"); // 1
    Instrmt_3_set.insert("C");
    Instrmt_3.add_attribute("ExerStyle", "2"); // 1
    Instrmt_3_set.insert("2");
    Instrmt_3.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_3_set.insert("3");
    Instrmt_3.add_attribute("OptPayAmt", "OptPayoutAmount_t_817735236"); // 1
    Instrmt_3_set.insert("OptPayoutAmount_t_817735236");
    Instrmt_3.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_3_set.insert("STD");
    Instrmt_3.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_3_set.insert("EQTY");
    Instrmt_3.add_attribute("ListMeth", "0"); // 1
    Instrmt_3_set.insert("0");
    Instrmt_3.add_attribute("CapPx", "7863647.860000"); // 1
    Instrmt_3_set.insert("7863647.860000");
    Instrmt_3.add_attribute("FlrPx", "16978022.140000"); // 1
    Instrmt_3_set.insert("16978022.140000");
    Instrmt_3.add_attribute("PutCall", "0"); // 1
    Instrmt_3_set.insert("0");
    Instrmt_3.add_attribute("FlexInd", "true"); // 1
    Instrmt_3_set.insert("true");
    Instrmt_3.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_3_set.insert("true");
    Instrmt_3.add_attribute("TmUnit", "Mo"); // 1
    Instrmt_3_set.insert("Mo");
    Instrmt_3.add_attribute("CpnRt", "15664643.040000"); // 1
    Instrmt_3_set.insert("15664643.040000");
    Instrmt_3.add_attribute("Exch", "SecurityExchange_t_221089431"); // 1
    Instrmt_3_set.insert("SecurityExchange_t_221089431");
    Instrmt_3.add_attribute("PosLmt", "408813732"); // 1
    Instrmt_3_set.insert("408813732");
    Instrmt_3.add_attribute("NTPosLmt", "1001548826"); // 1
    Instrmt_3_set.insert("1001548826");
    Instrmt_3.add_attribute("Issr", "Issuer_t_536311196"); // 1
    Instrmt_3_set.insert("Issuer_t_536311196");
    Instrmt_3.add_attribute("EncIssrLen", "938802506"); // 1
    Instrmt_3_set.insert("938802506");
    Instrmt_3.add_attribute("EncIssr", "EncodedIssuer_t_529927823"); // 1
    Instrmt_3_set.insert("EncodedIssuer_t_529927823");
    Instrmt_3.add_attribute("Desc", "SecurityDesc_t_1557665523"); // 1
    Instrmt_3_set.insert("SecurityDesc_t_1557665523");
    Instrmt_3.add_attribute("EncSecDescLen", "1174425405"); // 1
    Instrmt_3_set.insert("1174425405");
    Instrmt_3.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1883183338"); // 1
    Instrmt_3_set.insert("EncodedSecurityDesc_t_1883183338");
    Instrmt_3.add_attribute("Pool", "Pool_t_1122229258"); // 1
    Instrmt_3_set.insert("Pool_t_1122229258");
    Instrmt_3.add_attribute("CSetMo", "209588973"); // 1
    Instrmt_3_set.insert("209588973");
    Instrmt_3.add_attribute("CPPgm", "99"); // 1
    Instrmt_3_set.insert("99");
    Instrmt_3.add_attribute("CPRegT", "CPRegType_t_992831494"); // 1
    Instrmt_3_set.insert("CPRegType_t_992831494");
    Instrmt_3.add_attribute("Dated", "DatedDate_t_960976612"); // 1
    Instrmt_3_set.insert("DatedDate_t_960976612");
    Instrmt_3.add_attribute("IntAcrl", "InterestAccrualDate_t_1377276849"); // 1
    Instrmt_3_set.insert("InterestAccrualDate_t_1377276849");
    all_values.push_back(Instrmt_3_set);
    all_compo_names.insert("Instrmt_3_set");

    {
      xml_element AID_3{"AID"};
      multiset<string> AID_3_set;
      AID_3.add_attribute("AltID", "SecurityAltID_t_1159745803"); // 2
      AID_3_set.insert("SecurityAltID_t_1159745803");
      AID_3.add_attribute("AltIDSrc", "5"); // 2
      AID_3_set.insert("5");
      all_values.push_back(AID_3_set);
      all_compo_names.insert("AID_3_set");

      Instrmt_3.add_element(AID_3);
    }
    {
      xml_element SecXML_3{"SecXML"};
      multiset<string> SecXML_3_set;
      SecXML_3.add_attribute("Schema", "SecurityXMLSchema_t_1881769683"); // 2
      SecXML_3_set.insert("SecurityXMLSchema_t_1881769683");
      all_values.push_back(SecXML_3_set);
      all_compo_names.insert("SecXML_3_set");

      Instrmt_3.add_element(SecXML_3);
    }
    {
      xml_element Evnt_3{"Evnt"};
      multiset<string> Evnt_3_set;
      Evnt_3.add_attribute("EventTyp", "3"); // 2
      Evnt_3_set.insert("3");
      Evnt_3.add_attribute("Dt", "EventDate_t_1466368319"); // 2
      Evnt_3_set.insert("EventDate_t_1466368319");
      Evnt_3.add_attribute("Tm", "EventTime_t_552021272"); // 2
      Evnt_3_set.insert("EventTime_t_552021272");
      Evnt_3.add_attribute("Px", "7694425.750000"); // 2
      Evnt_3_set.insert("7694425.750000");
      Evnt_3.add_attribute("Txt", "EventText_t_1017948851"); // 2
      Evnt_3_set.insert("EventText_t_1017948851");
      all_values.push_back(Evnt_3_set);
      all_compo_names.insert("Evnt_3_set");

      Instrmt_3.add_element(Evnt_3);
    }
    {
      xml_element Pty_21{"Pty"};
      multiset<string> Pty_21_set;
      Pty_21.add_attribute("ID", "InstrumentPartyID_t_1008982358"); // 2
      Pty_21_set.insert("InstrumentPartyID_t_1008982358");
      Pty_21.add_attribute("Src", "6"); // 2
      Pty_21_set.insert("6");
      Pty_21.add_attribute("R", "33"); // 2
      Pty_21_set.insert("33");
      all_values.push_back(Pty_21_set);
      all_compo_names.insert("Pty_21_set");

      {
        xml_element Sub_21{"Sub"};
        multiset<string> Sub_21_set;
        Sub_21.add_attribute("ID", "InstrumentPartySubID_t_367615258"); // 3
        Sub_21_set.insert("InstrumentPartySubID_t_367615258");
        Sub_21.add_attribute("Typ", "6"); // 3
        Sub_21_set.insert("6");
        all_values.push_back(Sub_21_set);
        all_compo_names.insert("Sub_21_set");

        Pty_21.add_element(Sub_21);
      }
      Instrmt_3.add_element(Pty_21);
    }
    {
      xml_element CmplxEvnt_3{"CmplxEvnt"};
      multiset<string> CmplxEvnt_3_set;
      CmplxEvnt_3.add_attribute("Typ", "8"); // 2
      CmplxEvnt_3_set.insert("8");
      CmplxEvnt_3.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1123992619"); // 2
      CmplxEvnt_3_set.insert("ComplexOptPayoutAmount_t_1123992619");
      CmplxEvnt_3.add_attribute("Px", "18046839.340000"); // 2
      CmplxEvnt_3_set.insert("18046839.340000");
      CmplxEvnt_3.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_3_set.insert("3");
      CmplxEvnt_3.add_attribute("PxBndryPrcsn", "15328063.510000"); // 2
      CmplxEvnt_3_set.insert("15328063.510000");
      CmplxEvnt_3.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_3_set.insert("3");
      CmplxEvnt_3.add_attribute("Cond", "2"); // 2
      CmplxEvnt_3_set.insert("2");
      all_values.push_back(CmplxEvnt_3_set);
      all_compo_names.insert("CmplxEvnt_3_set");

      {
        xml_element EvntDts_3{"EvntDts"};
        multiset<string> EvntDts_3_set;
        EvntDts_3.add_attribute("StartDt", "ComplexEventStartDate_t_324125210"); // 3
        EvntDts_3_set.insert("ComplexEventStartDate_t_324125210");
        EvntDts_3.add_attribute("EndDt", "ComplexEventEndDate_t_1188676936"); // 3
        EvntDts_3_set.insert("ComplexEventEndDate_t_1188676936");
        all_values.push_back(EvntDts_3_set);
        all_compo_names.insert("EvntDts_3_set");

        {
          xml_element EvntTms_3{"EvntTms"};
          multiset<string> EvntTms_3_set;
          EvntTms_3.add_attribute("StartTm", "475107658"); // 4
          EvntTms_3_set.insert("475107658");
          EvntTms_3.add_attribute("EndTm", "1498550615"); // 4
          EvntTms_3_set.insert("1498550615");
          all_values.push_back(EvntTms_3_set);
          all_compo_names.insert("EvntTms_3_set");

          EvntDts_3.add_element(EvntTms_3);
        }
        CmplxEvnt_3.add_element(EvntDts_3);
      }
      Instrmt_3.add_element(CmplxEvnt_3);
    }
    elt.add_element(Instrmt_3);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_1{"InstrmtExt"};
    multiset<string> InstrmtExt_1_set;
    InstrmtExt_1.add_attribute("DlvryForm", "2"); // 1
    InstrmtExt_1_set.insert("2");
    InstrmtExt_1.add_attribute("PctAtRisk", "15973369.160000"); // 1
    InstrmtExt_1_set.insert("15973369.160000");
    all_values.push_back(InstrmtExt_1_set);
    all_compo_names.insert("InstrmtExt_1_set");

    {
      xml_element Attrb_1{"Attrb"};
      multiset<string> Attrb_1_set;
      Attrb_1.add_attribute("Typ", "17"); // 2
      Attrb_1_set.insert("17");
      Attrb_1.add_attribute("Val", "InstrAttribValue_t_688977934"); // 2
      Attrb_1_set.insert("InstrAttribValue_t_688977934");
      all_values.push_back(Attrb_1_set);
      all_compo_names.insert("Attrb_1_set");

      InstrmtExt_1.add_element(Attrb_1);
    }
    elt.add_element(InstrmtExt_1);
  } // end InstrmtExt
  { // FinDetls
    xml_element FinDetls_1{"FinDetls"};
    multiset<string> FinDetls_1_set;
    FinDetls_1.add_attribute("AgmtDesc", "AgreementDesc_t_442684763"); // 1
    FinDetls_1_set.insert("AgreementDesc_t_442684763");
    FinDetls_1.add_attribute("AgmtID", "AgreementID_t_521632552"); // 1
    FinDetls_1_set.insert("AgreementID_t_521632552");
    FinDetls_1.add_attribute("AgmtDt", "AgreementDate_t_2066254783"); // 1
    FinDetls_1_set.insert("AgreementDate_t_2066254783");
    FinDetls_1.add_attribute("AgmtCcy", "JPY"); // 1
    FinDetls_1_set.insert("JPY");
    FinDetls_1.add_attribute("TrmTyp", "4"); // 1
    FinDetls_1_set.insert("4");
    FinDetls_1.add_attribute("StartDt", "StartDate_t_790765121"); // 1
    FinDetls_1_set.insert("StartDate_t_790765121");
    FinDetls_1.add_attribute("EndDt", "EndDate_t_2139946713"); // 1
    FinDetls_1_set.insert("EndDate_t_2139946713");
    FinDetls_1.add_attribute("DlvryTyp", "3"); // 1
    FinDetls_1_set.insert("3");
    FinDetls_1.add_attribute("MgnRatio", "15602076.960000"); // 1
    FinDetls_1_set.insert("15602076.960000");
    all_values.push_back(FinDetls_1_set);
    all_compo_names.insert("FinDetls_1_set");

    elt.add_element(FinDetls_1);
  } // end FinDetls
  { // Undly
    xml_element Undly_3{"Undly"};
    multiset<string> Undly_3_set;
    Undly_3.add_attribute("Sym", "UnderlyingSymbol_t_1214060801"); // 1
    Undly_3_set.insert("UnderlyingSymbol_t_1214060801");
    Undly_3.add_attribute("Sfx", "WI"); // 1
    Undly_3_set.insert("WI");
    Undly_3.add_attribute("ID", "UnderlyingSecurityID_t_1578679334"); // 1
    Undly_3_set.insert("UnderlyingSecurityID_t_1578679334");
    Undly_3.add_attribute("Src", "8"); // 1
    Undly_3_set.insert("8");
    Undly_3.add_attribute("Prod", "1"); // 1
    Undly_3_set.insert("1");
    Undly_3.add_attribute("CFI", "UnderlyingCFICode_t_1886204490"); // 1
    Undly_3_set.insert("UnderlyingCFICode_t_1886204490");
    Undly_3.add_attribute("SecTyp", "TAN"); // 1
    Undly_3_set.insert("TAN");
    Undly_3.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_863951326"); // 1
    Undly_3_set.insert("UnderlyingSecuritySubType_t_863951326");
    Undly_3.add_attribute("MMY", "267335429"); // 1
    Undly_3_set.insert("267335429");
    Undly_3.add_attribute("Mat", "UnderlyingMaturityDate_t_2090991381"); // 1
    Undly_3_set.insert("UnderlyingMaturityDate_t_2090991381");
    Undly_3.add_attribute("MatTm", "1522700439"); // 1
    Undly_3_set.insert("1522700439");
    Undly_3.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1332261212"); // 1
    Undly_3_set.insert("UnderlyingCouponPaymentDate_t_1332261212");
    Undly_3.add_attribute("RestrctTyp", "XR"); // 1
    Undly_3_set.insert("XR");
    Undly_3.add_attribute("Snrty", "SB"); // 1
    Undly_3_set.insert("SB");
    Undly_3.add_attribute("NotlPctOut", "18073688.700000"); // 1
    Undly_3_set.insert("18073688.700000");
    Undly_3.add_attribute("OrigNotlPctOut", "17661835.580000"); // 1
    Undly_3_set.insert("17661835.580000");
    Undly_3.add_attribute("AttchPnt", "14882703.540000"); // 1
    Undly_3_set.insert("14882703.540000");
    Undly_3.add_attribute("DetchPnt", "12572221.390000"); // 1
    Undly_3_set.insert("12572221.390000");
    Undly_3.add_attribute("Issued", "UnderlyingIssueDate_t_1326839498"); // 1
    Undly_3_set.insert("UnderlyingIssueDate_t_1326839498");
    Undly_3.add_attribute("RepoCollSecTyp", "29764640"); // 1
    Undly_3_set.insert("29764640");
    Undly_3.add_attribute("RepoTrm", "1699906902"); // 1
    Undly_3_set.insert("1699906902");
    Undly_3.add_attribute("RepoRt", "18484720.500000"); // 1
    Undly_3_set.insert("18484720.500000");
    Undly_3.add_attribute("Fctr", "20960194.240000"); // 1
    Undly_3_set.insert("20960194.240000");
    Undly_3.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1154853820"); // 1
    Undly_3_set.insert("UnderlyingCreditRating_t_1154853820");
    Undly_3.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_374566796"); // 1
    Undly_3_set.insert("UnderlyingInstrRegistry_t_374566796");
    Undly_3.add_attribute("Ctry", "1749076595"); // 1
    Undly_3_set.insert("1749076595");
    Undly_3.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1945618941"); // 1
    Undly_3_set.insert("UnderlyingStateOrProvinceOfIssue_t_1945618941");
    Undly_3.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_367029861"); // 1
    Undly_3_set.insert("UnderlyingLocaleOfIssue_t_367029861");
    Undly_3.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1954155038"); // 1
    Undly_3_set.insert("UnderlyingRedemptionDate_t_1954155038");
    Undly_3.add_attribute("StrkPx", "13583429.890000"); // 1
    Undly_3_set.insert("13583429.890000");
    Undly_3.add_attribute("StrkCcy", "CAN"); // 1
    Undly_3_set.insert("CAN");
    Undly_3.add_attribute("OptA", "179390751"); // 1
    Undly_3_set.insert("179390751");
    Undly_3.add_attribute("Mult", "8086374.640000"); // 1
    Undly_3_set.insert("8086374.640000");
    Undly_3.add_attribute("MultTyp", "0"); // 1
    Undly_3_set.insert("0");
    Undly_3.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_3_set.insert("0");
    Undly_3.add_attribute("UOM", "MMBtu"); // 1
    Undly_3_set.insert("MMBtu");
    Undly_3.add_attribute("UOMQty", "10131096.320000"); // 1
    Undly_3_set.insert("10131096.320000");
    Undly_3.add_attribute("PxUOM", "MWh"); // 1
    Undly_3_set.insert("MWh");
    Undly_3.add_attribute("PxUOMQty", "8146937.350000"); // 1
    Undly_3_set.insert("8146937.350000");
    Undly_3.add_attribute("TmUnit", "Wk"); // 1
    Undly_3_set.insert("Wk");
    Undly_3.add_attribute("ExerStyle", "0"); // 1
    Undly_3_set.insert("0");
    Undly_3.add_attribute("CpnRt", "21469549.470000"); // 1
    Undly_3_set.insert("21469549.470000");
    Undly_3.add_attribute("Exch", "UnderlyingSecurityExchange_t_1224250309"); // 1
    Undly_3_set.insert("UnderlyingSecurityExchange_t_1224250309");
    Undly_3.add_attribute("Issr", "UnderlyingIssuer_t_41719987"); // 1
    Undly_3_set.insert("UnderlyingIssuer_t_41719987");
    Undly_3.add_attribute("EncUndIssrLen", "1806840169"); // 1
    Undly_3_set.insert("1806840169");
    Undly_3.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_842950219"); // 1
    Undly_3_set.insert("EncodedUnderlyingIssuer_t_842950219");
    Undly_3.add_attribute("Desc", "UnderlyingSecurityDesc_t_1529990341"); // 1
    Undly_3_set.insert("UnderlyingSecurityDesc_t_1529990341");
    Undly_3.add_attribute("EncUndSecDescLen", "916578660"); // 1
    Undly_3_set.insert("916578660");
    Undly_3.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_22306070"); // 1
    Undly_3_set.insert("EncodedUnderlyingSecurityDesc_t_22306070");
    Undly_3.add_attribute("CPPgm", "UnderlyingCPProgram_t_1559754982"); // 1
    Undly_3_set.insert("UnderlyingCPProgram_t_1559754982");
    Undly_3.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_469001914"); // 1
    Undly_3_set.insert("UnderlyingCPRegType_t_469001914");
    Undly_3.add_attribute("AllocPct", "18707781.200000"); // 1
    Undly_3_set.insert("18707781.200000");
    Undly_3.add_attribute("Ccy", "CHF"); // 1
    Undly_3_set.insert("CHF");
    Undly_3.add_attribute("Qty", "978612.690000"); // 1
    Undly_3_set.insert("978612.690000");
    Undly_3.add_attribute("SettlTyp", "2"); // 1
    Undly_3_set.insert("2");
    Undly_3.add_attribute("CashAmt", "UnderlyingCashAmount_t_1421991028"); // 1
    Undly_3_set.insert("UnderlyingCashAmount_t_1421991028");
    Undly_3.add_attribute("CashTyp", "FIXED"); // 1
    Undly_3_set.insert("FIXED");
    Undly_3.add_attribute("Px", "9165550.950000"); // 1
    Undly_3_set.insert("9165550.950000");
    Undly_3.add_attribute("DirtPx", "6328503.700000"); // 1
    Undly_3_set.insert("6328503.700000");
    Undly_3.add_attribute("EndPx", "18423329.080000"); // 1
    Undly_3_set.insert("18423329.080000");
    Undly_3.add_attribute("StartVal", "UnderlyingStartValue_t_1937287286"); // 1
    Undly_3_set.insert("UnderlyingStartValue_t_1937287286");
    Undly_3.add_attribute("CurVal", "UnderlyingCurrentValue_t_812241121"); // 1
    Undly_3_set.insert("UnderlyingCurrentValue_t_812241121");
    Undly_3.add_attribute("EndVal", "UnderlyingEndValue_t_503486724"); // 1
    Undly_3_set.insert("UnderlyingEndValue_t_503486724");
    Undly_3.add_attribute("AdjQty", "2447282.400000"); // 1
    Undly_3_set.insert("2447282.400000");
    Undly_3.add_attribute("FxRate", "508992.630000"); // 1
    Undly_3_set.insert("508992.630000");
    Undly_3.add_attribute("FxRateCalc", "M"); // 1
    Undly_3_set.insert("M");
    Undly_3.add_attribute("CapValu", "UnderlyingCapValue_t_1257837872"); // 1
    Undly_3_set.insert("UnderlyingCapValue_t_1257837872");
    Undly_3.add_attribute("SetMeth", "UnderlyingSettlMethod_t_153508732"); // 1
    Undly_3_set.insert("UnderlyingSettlMethod_t_153508732");
    Undly_3.add_attribute("PutCall", "1865538765"); // 1
    Undly_3_set.insert("1865538765");
    all_values.push_back(Undly_3_set);
    all_compo_names.insert("Undly_3_set");

    {
      xml_element UndAID_3{"UndAID"};
      multiset<string> UndAID_3_set;
      UndAID_3.add_attribute("AltID", "UnderlyingSecurityAltID_t_66971589"); // 2
      UndAID_3_set.insert("UnderlyingSecurityAltID_t_66971589");
      UndAID_3.add_attribute("AltIDSrc", "G"); // 2
      UndAID_3_set.insert("G");
      all_values.push_back(UndAID_3_set);
      all_compo_names.insert("UndAID_3_set");

      Undly_3.add_element(UndAID_3);
    }
    {
      xml_element Stip_6{"Stip"};
      multiset<string> Stip_6_set;
      Stip_6.add_attribute("Typ", "ROLLTYPE"); // 2
      Stip_6_set.insert("ROLLTYPE");
      Stip_6.add_attribute("Val", "UnderlyingStipValue_t_1291221898"); // 2
      Stip_6_set.insert("UnderlyingStipValue_t_1291221898");
      all_values.push_back(Stip_6_set);
      all_compo_names.insert("Stip_6_set");

      Undly_3.add_element(Stip_6);
    }
    {
      xml_element Pty_22{"Pty"};
      multiset<string> Pty_22_set;
      Pty_22.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1820538626"); // 2
      Pty_22_set.insert("UnderlyingInstrumentPartyID_t_1820538626");
      Pty_22.add_attribute("Src", "B"); // 2
      Pty_22_set.insert("B");
      Pty_22.add_attribute("R", "80"); // 2
      Pty_22_set.insert("80");
      all_values.push_back(Pty_22_set);
      all_compo_names.insert("Pty_22_set");

      {
        xml_element Sub_22{"Sub"};
        multiset<string> Sub_22_set;
        Sub_22.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1203045320"); // 3
        Sub_22_set.insert("UnderlyingInstrumentPartySubID_t_1203045320");
        Sub_22.add_attribute("Typ", "7"); // 3
        Sub_22_set.insert("7");
        all_values.push_back(Sub_22_set);
        all_compo_names.insert("Sub_22_set");

        Pty_22.add_element(Sub_22);
      }
      Undly_3.add_element(Pty_22);
    }
    elt.add_element(Undly_3);
  } // end Undly
  { // Leg
    xml_element Leg_4{"Leg"};
    multiset<string> Leg_4_set;
    Leg_4.add_attribute("Sym", "LegSymbol_t_615316654"); // 1
    Leg_4_set.insert("LegSymbol_t_615316654");
    Leg_4.add_attribute("Sfx", "WI"); // 1
    Leg_4_set.insert("WI");
    Leg_4.add_attribute("ID", "LegSecurityID_t_1879772660"); // 1
    Leg_4_set.insert("LegSecurityID_t_1879772660");
    Leg_4.add_attribute("Src", "F"); // 1
    Leg_4_set.insert("F");
    Leg_4.add_attribute("Prod", "12"); // 1
    Leg_4_set.insert("12");
    Leg_4.add_attribute("CFI", "LegCFICode_t_1977633929"); // 1
    Leg_4_set.insert("LegCFICode_t_1977633929");
    Leg_4.add_attribute("SecTyp", "COFP"); // 1
    Leg_4_set.insert("COFP");
    Leg_4.add_attribute("SecSubTyp", "LegSecuritySubType_t_1660826628"); // 1
    Leg_4_set.insert("LegSecuritySubType_t_1660826628");
    Leg_4.add_attribute("MMY", "295041412"); // 1
    Leg_4_set.insert("295041412");
    Leg_4.add_attribute("Mat", "LegMaturityDate_t_2002562564"); // 1
    Leg_4_set.insert("LegMaturityDate_t_2002562564");
    Leg_4.add_attribute("MatTm", "146193350"); // 1
    Leg_4_set.insert("146193350");
    Leg_4.add_attribute("CpnPmt", "LegCouponPaymentDate_t_2137374320"); // 1
    Leg_4_set.insert("LegCouponPaymentDate_t_2137374320");
    Leg_4.add_attribute("Issued", "LegIssueDate_t_1792366202"); // 1
    Leg_4_set.insert("LegIssueDate_t_1792366202");
    Leg_4.add_attribute("RepoCollSecTyp", "958434471"); // 1
    Leg_4_set.insert("958434471");
    Leg_4.add_attribute("RepoTrm", "493377397"); // 1
    Leg_4_set.insert("493377397");
    Leg_4.add_attribute("RepoRt", "20370944.420000"); // 1
    Leg_4_set.insert("20370944.420000");
    Leg_4.add_attribute("Fctr", "10093337.350000"); // 1
    Leg_4_set.insert("10093337.350000");
    Leg_4.add_attribute("CrdRtg", "LegCreditRating_t_1544222427"); // 1
    Leg_4_set.insert("LegCreditRating_t_1544222427");
    Leg_4.add_attribute("Rgstry", "LegInstrRegistry_t_1147448666"); // 1
    Leg_4_set.insert("LegInstrRegistry_t_1147448666");
    Leg_4.add_attribute("Ctry", "1162842467"); // 1
    Leg_4_set.insert("1162842467");
    Leg_4.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1262277545"); // 1
    Leg_4_set.insert("LegStateOrProvinceOfIssue_t_1262277545");
    Leg_4.add_attribute("Lcl", "LegLocaleOfIssue_t_1214420255"); // 1
    Leg_4_set.insert("LegLocaleOfIssue_t_1214420255");
    Leg_4.add_attribute("Redeem", "LegRedemptionDate_t_794177458"); // 1
    Leg_4_set.insert("LegRedemptionDate_t_794177458");
    Leg_4.add_attribute("Strk", "9798039.610000"); // 1
    Leg_4_set.insert("9798039.610000");
    Leg_4.add_attribute("StrkCcy", "CAN"); // 1
    Leg_4_set.insert("CAN");
    Leg_4.add_attribute("OptA", "356686899"); // 1
    Leg_4_set.insert("356686899");
    Leg_4.add_attribute("Cmult", "3448469.760000"); // 1
    Leg_4_set.insert("3448469.760000");
    Leg_4.add_attribute("MultTyp", "1"); // 1
    Leg_4_set.insert("1");
    Leg_4.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_4_set.insert("3");
    Leg_4.add_attribute("UOM", "Bbl"); // 1
    Leg_4_set.insert("Bbl");
    Leg_4.add_attribute("UOMQty", "1381107.630000"); // 1
    Leg_4_set.insert("1381107.630000");
    Leg_4.add_attribute("PxUOM", "tn"); // 1
    Leg_4_set.insert("tn");
    Leg_4.add_attribute("PxUOMQty", "861305.280000"); // 1
    Leg_4_set.insert("861305.280000");
    Leg_4.add_attribute("TmUnit", "Min"); // 1
    Leg_4_set.insert("Min");
    Leg_4.add_attribute("ExerStyle", "0"); // 1
    Leg_4_set.insert("0");
    Leg_4.add_attribute("CpnRt", "20637644.580000"); // 1
    Leg_4_set.insert("20637644.580000");
    Leg_4.add_attribute("Exch", "LegSecurityExchange_t_1200241996"); // 1
    Leg_4_set.insert("LegSecurityExchange_t_1200241996");
    Leg_4.add_attribute("Issr", "LegIssuer_t_1164790591"); // 1
    Leg_4_set.insert("LegIssuer_t_1164790591");
    Leg_4.add_attribute("EncLegIssrLen", "211322222"); // 1
    Leg_4_set.insert("211322222");
    Leg_4.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1055320912"); // 1
    Leg_4_set.insert("EncodedLegIssuer_t_1055320912");
    Leg_4.add_attribute("Desc", "LegSecurityDesc_t_1310983942"); // 1
    Leg_4_set.insert("LegSecurityDesc_t_1310983942");
    Leg_4.add_attribute("EncLegSecDescLen", "201212894"); // 1
    Leg_4_set.insert("201212894");
    Leg_4.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_700203466"); // 1
    Leg_4_set.insert("EncodedLegSecurityDesc_t_700203466");
    Leg_4.add_attribute("RatioQty", "1219347.650000"); // 1
    Leg_4_set.insert("1219347.650000");
    Leg_4.add_attribute("Side", "4"); // 1
    Leg_4_set.insert("4");
    Leg_4.add_attribute("Ccy", "USD"); // 1
    Leg_4_set.insert("USD");
    Leg_4.add_attribute("Pool", "LegPool_t_91329071"); // 1
    Leg_4_set.insert("LegPool_t_91329071");
    Leg_4.add_attribute("Dated", "LegDatedDate_t_1737262926"); // 1
    Leg_4_set.insert("LegDatedDate_t_1737262926");
    Leg_4.add_attribute("CSetMo", "146627319"); // 1
    Leg_4_set.insert("146627319");
    Leg_4.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1353606616"); // 1
    Leg_4_set.insert("LegInterestAccrualDate_t_1353606616");
    Leg_4.add_attribute("PutCall", "804199533"); // 1
    Leg_4_set.insert("804199533");
    Leg_4.add_attribute("LegOptionRatio", "9408047.780000"); // 1
    Leg_4_set.insert("9408047.780000");
    Leg_4.add_attribute("Px", "1859269.290000"); // 1
    Leg_4_set.insert("1859269.290000");
    all_values.push_back(Leg_4_set);
    all_compo_names.insert("Leg_4_set");

    {
      xml_element LegAID_4{"LegAID"};
      multiset<string> LegAID_4_set;
      LegAID_4.add_attribute("SecAltID", "LegSecurityAltID_t_1162358039"); // 2
      LegAID_4_set.insert("LegSecurityAltID_t_1162358039");
      LegAID_4.add_attribute("SecAltIDSrc", "E"); // 2
      LegAID_4_set.insert("E");
      all_values.push_back(LegAID_4_set);
      all_compo_names.insert("LegAID_4_set");

      Leg_4.add_element(LegAID_4);
    }
    elt.add_element(Leg_4);
  } // end Leg
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_1{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_1_set;
    SprdBnchmkCurve_1.add_attribute("Spread", "5426138.290000"); // 1
    SprdBnchmkCurve_1_set.insert("5426138.290000");
    SprdBnchmkCurve_1.add_attribute("Ccy", "USD"); // 1
    SprdBnchmkCurve_1_set.insert("USD");
    SprdBnchmkCurve_1.add_attribute("Name", "OTHER"); // 1
    SprdBnchmkCurve_1_set.insert("OTHER");
    SprdBnchmkCurve_1.add_attribute("Point", "BenchmarkCurvePoint_t_1861046531"); // 1
    SprdBnchmkCurve_1_set.insert("BenchmarkCurvePoint_t_1861046531");
    SprdBnchmkCurve_1.add_attribute("Px", "10689420.870000"); // 1
    SprdBnchmkCurve_1_set.insert("10689420.870000");
    SprdBnchmkCurve_1.add_attribute("PxTyp", "14"); // 1
    SprdBnchmkCurve_1_set.insert("14");
    SprdBnchmkCurve_1.add_attribute("SecID", "BenchmarkSecurityID_t_1947177060"); // 1
    SprdBnchmkCurve_1_set.insert("BenchmarkSecurityID_t_1947177060");
    SprdBnchmkCurve_1.add_attribute("SecIDSrc", "5"); // 1
    SprdBnchmkCurve_1_set.insert("5");
    all_values.push_back(SprdBnchmkCurve_1_set);
    all_compo_names.insert("SprdBnchmkCurve_1_set");

    elt.add_element(SprdBnchmkCurve_1);
  } // end SprdBnchmkCurve
  { // Pty
    xml_element Pty_23{"Pty"};
    multiset<string> Pty_23_set;
    Pty_23.add_attribute("ID", "PartyID_t_1863457870"); // 1
    Pty_23_set.insert("PartyID_t_1863457870");
    Pty_23.add_attribute("Src", "H"); // 1
    Pty_23_set.insert("H");
    Pty_23.add_attribute("R", "5"); // 1
    Pty_23_set.insert("5");
    all_values.push_back(Pty_23_set);
    all_compo_names.insert("Pty_23_set");

    {
      xml_element Sub_23{"Sub"};
      multiset<string> Sub_23_set;
      Sub_23.add_attribute("ID", "PartySubID_t_2074780092"); // 2
      Sub_23_set.insert("PartySubID_t_2074780092");
      Sub_23.add_attribute("Typ", "30"); // 2
      Sub_23_set.insert("30");
      all_values.push_back(Sub_23_set);
      all_compo_names.insert("Sub_23_set");

      Pty_23.add_element(Sub_23);
    }
    elt.add_element(Pty_23);
  } // end Pty
  { // Stip
    xml_element Stip_7{"Stip"};
    multiset<string> Stip_7_set;
    Stip_7.add_attribute("Typ", "WHOLE"); // 1
    Stip_7_set.insert("WHOLE");
    Stip_7.add_attribute("Val", "StipulationValue_t_1991459340"); // 1
    Stip_7_set.insert("StipulationValue_t_1991459340");
    all_values.push_back(Stip_7_set);
    all_compo_names.insert("Stip_7_set");

    elt.add_element(Stip_7);
  } // end Stip
  { // Stip
    xml_element Stip_8{"Stip"};
    multiset<string> Stip_8_set;
    Stip_8.add_attribute("Typ", "ROLLTYPE"); // 1
    Stip_8_set.insert("ROLLTYPE");
    Stip_8.add_attribute("Val", "StipulationValue_t_823099630"); // 1
    Stip_8_set.insert("StipulationValue_t_823099630");
    all_values.push_back(Stip_8_set);
    all_compo_names.insert("Stip_8_set");

    elt.add_element(Stip_8);
  } // end Stip
  { // Yield
    xml_element Yield_1{"Yield"};
    multiset<string> Yield_1_set;
    Yield_1.add_attribute("Typ", "AFTERTAX"); // 1
    Yield_1_set.insert("AFTERTAX");
    Yield_1.add_attribute("Yld", "15433488.040000"); // 1
    Yield_1_set.insert("15433488.040000");
    Yield_1.add_attribute("CalcDt", "YieldCalcDate_t_914428701"); // 1
    Yield_1_set.insert("YieldCalcDate_t_914428701");
    Yield_1.add_attribute("RedDt", "YieldRedemptionDate_t_23569230"); // 1
    Yield_1_set.insert("YieldRedemptionDate_t_23569230");
    Yield_1.add_attribute("RedPx", "16899761.240000"); // 1
    Yield_1_set.insert("16899761.240000");
    Yield_1.add_attribute("RedPxTyp", "19"); // 1
    Yield_1_set.insert("19");
    all_values.push_back(Yield_1_set);
    all_compo_names.insert("Yield_1_set");

    elt.add_element(Yield_1);
  } // end Yield
  { // Amt
    xml_element Amt_2{"Amt"};
    multiset<string> Amt_2_set;
    Amt_2.add_attribute("Typ", "SETL"); // 1
    Amt_2_set.insert("SETL");
    Amt_2.add_attribute("Amt", "PosAmt_t_306478598"); // 1
    Amt_2_set.insert("PosAmt_t_306478598");
    Amt_2.add_attribute("Ccy", "PositionCurrency_t_1990126803"); // 1
    Amt_2_set.insert("PositionCurrency_t_1990126803");
    all_values.push_back(Amt_2_set);
    all_compo_names.insert("Amt_2_set");

    elt.add_element(Amt_2);
  } // end Amt
  { // Alloc
    xml_element Alloc_2{"Alloc"};
    multiset<string> Alloc_2_set;
    Alloc_2.add_attribute("Acct", "AllocAccount_t_849092427"); // 1
    Alloc_2_set.insert("AllocAccount_t_849092427");
    Alloc_2.add_attribute("ActIDSrc", "1"); // 1
    Alloc_2_set.insert("1");
    Alloc_2.add_attribute("MtchStat", "1"); // 1
    Alloc_2_set.insert("1");
    Alloc_2.add_attribute("Px", "20418547.540000"); // 1
    Alloc_2_set.insert("20418547.540000");
    Alloc_2.add_attribute("Qty", "10634110.540000"); // 1
    Alloc_2_set.insert("10634110.540000");
    Alloc_2.add_attribute("IndAllocID", "IndividualAllocID_t_1743624232"); // 1
    Alloc_2_set.insert("IndividualAllocID_t_1743624232");
    Alloc_2.add_attribute("ProcCode", "5"); // 1
    Alloc_2_set.insert("5");
    Alloc_2.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_863104466"); // 1
    Alloc_2_set.insert("SecondaryIndividualAllocID_t_863104466");
    Alloc_2.add_attribute("Meth", "2"); // 1
    Alloc_2_set.insert("2");
    Alloc_2.add_attribute("CustCpcty", "AllocCustomerCapacity_t_314116449"); // 1
    Alloc_2_set.insert("AllocCustomerCapacity_t_314116449");
    Alloc_2.add_attribute("AllocPosEfct", "O"); // 1
    Alloc_2_set.insert("O");
    Alloc_2.add_attribute("Typ", "1"); // 1
    Alloc_2_set.insert("1");
    Alloc_2.add_attribute("NotifyBrkrOfCredit", "N"); // 1
    Alloc_2_set.insert("N");
    Alloc_2.add_attribute("HandlInst", "3"); // 1
    Alloc_2_set.insert("3");
    Alloc_2.add_attribute("Txt", "AllocText_t_159024386"); // 1
    Alloc_2_set.insert("AllocText_t_159024386");
    Alloc_2.add_attribute("EncAllocTextLen", "1730907232"); // 1
    Alloc_2_set.insert("1730907232");
    Alloc_2.add_attribute("EncAllocText", "EncodedAllocText_t_634884470"); // 1
    Alloc_2_set.insert("EncodedAllocText_t_634884470");
    Alloc_2.add_attribute("AvgPx", "30000.780000"); // 1
    Alloc_2_set.insert("30000.780000");
    Alloc_2.add_attribute("NetMny", "AllocNetMoney_t_2142987536"); // 1
    Alloc_2_set.insert("AllocNetMoney_t_2142987536");
    Alloc_2.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1457984100"); // 1
    Alloc_2_set.insert("SettlCurrAmt_t_1457984100");
    Alloc_2.add_attribute("SettlCcyAmt", "AllocSettlCurrAmt_t_436790030"); // 1
    Alloc_2_set.insert("AllocSettlCurrAmt_t_436790030");
    Alloc_2.add_attribute("SettlCcy", "EUR"); // 1
    Alloc_2_set.insert("EUR");
    Alloc_2.add_attribute("AllocSettlCcy", "CAN"); // 1
    Alloc_2_set.insert("CAN");
    Alloc_2.add_attribute("SettlCurrFxRt", "3454808.220000"); // 1
    Alloc_2_set.insert("3454808.220000");
    Alloc_2.add_attribute("SettlCurrFxRtCalc", "D"); // 1
    Alloc_2_set.insert("D");
    Alloc_2.add_attribute("AcrdIntAmt", "AllocAccruedInterestAmt_t_1564642423"); // 1
    Alloc_2_set.insert("AllocAccruedInterestAmt_t_1564642423");
    Alloc_2.add_attribute("IntAtMat", "AllocInterestAtMaturity_t_651959421"); // 1
    Alloc_2_set.insert("AllocInterestAtMaturity_t_651959421");
    Alloc_2.add_attribute("ClrFeeInd", "L"); // 1
    Alloc_2_set.insert("L");
    Alloc_2.add_attribute("SettlInstTyp", "4"); // 1
    Alloc_2_set.insert("4");
    all_values.push_back(Alloc_2_set);
    all_compo_names.insert("Alloc_2_set");

    {
      xml_element Pty_24{"Pty"};
      multiset<string> Pty_24_set;
      Pty_24.add_attribute("ID", "NestedPartyID_t_1501051848"); // 2
      Pty_24_set.insert("NestedPartyID_t_1501051848");
      Pty_24.add_attribute("Src", "I"); // 2
      Pty_24_set.insert("I");
      Pty_24.add_attribute("R", "71"); // 2
      Pty_24_set.insert("71");
      all_values.push_back(Pty_24_set);
      all_compo_names.insert("Pty_24_set");

      {
        xml_element Sub_24{"Sub"};
        multiset<string> Sub_24_set;
        Sub_24.add_attribute("ID", "NestedPartySubID_t_1395422955"); // 3
        Sub_24_set.insert("NestedPartySubID_t_1395422955");
        Sub_24.add_attribute("Typ", "5"); // 3
        Sub_24_set.insert("5");
        all_values.push_back(Sub_24_set);
        all_compo_names.insert("Sub_24_set");

        Pty_24.add_element(Sub_24);
      }
      Alloc_2.add_element(Pty_24);
    }
    {
      xml_element Comm_2{"Comm"};
      multiset<string> Comm_2_set;
      Comm_2.add_attribute("Comm", "Commission_t_1579315973"); // 2
      Comm_2_set.insert("Commission_t_1579315973");
      Comm_2.add_attribute("CommTyp", "6"); // 2
      Comm_2_set.insert("6");
      Comm_2.add_attribute("Ccy", "EUR"); // 2
      Comm_2_set.insert("EUR");
      Comm_2.add_attribute("FundRenewWaiv", "Y"); // 2
      Comm_2_set.insert("Y");
      all_values.push_back(Comm_2_set);
      all_compo_names.insert("Comm_2_set");

      Alloc_2.add_element(Comm_2);
    }
    {
      xml_element MiscFees_2{"MiscFees"};
      multiset<string> MiscFees_2_set;
      MiscFees_2.add_attribute("Amt", "MiscFeeAmt_t_691246261"); // 2
      MiscFees_2_set.insert("MiscFeeAmt_t_691246261");
      MiscFees_2.add_attribute("Curr", "EUR"); // 2
      MiscFees_2_set.insert("EUR");
      MiscFees_2.add_attribute("Typ", "12"); // 2
      MiscFees_2_set.insert("12");
      MiscFees_2.add_attribute("Basis", "2"); // 2
      MiscFees_2_set.insert("2");
      all_values.push_back(MiscFees_2_set);
      all_compo_names.insert("MiscFees_2_set");

      Alloc_2.add_element(MiscFees_2);
    }
    {
      xml_element ClrInst_2{"ClrInst"};
      multiset<string> ClrInst_2_set;
      ClrInst_2.add_attribute("ClrngInstrctn", "3"); // 2
      ClrInst_2_set.insert("3");
      all_values.push_back(ClrInst_2_set);
      all_compo_names.insert("ClrInst_2_set");

      Alloc_2.add_element(ClrInst_2);
    }
    {
      xml_element SetInstr_2{"SetInstr"};
      multiset<string> SetInstr_2_set;
      SetInstr_2.add_attribute("DlvryTyp", "3"); // 2
      SetInstr_2_set.insert("3");
      SetInstr_2.add_attribute("StandInstDbTyp", "2"); // 2
      SetInstr_2_set.insert("2");
      SetInstr_2.add_attribute("StandInstDbName", "StandInstDbName_t_934006720"); // 2
      SetInstr_2_set.insert("StandInstDbName_t_934006720");
      SetInstr_2.add_attribute("StandInstDbID", "StandInstDbID_t_1143006316"); // 2
      SetInstr_2_set.insert("StandInstDbID_t_1143006316");
      all_values.push_back(SetInstr_2_set);
      all_compo_names.insert("SetInstr_2_set");

      {
        xml_element DlvInst_2{"DlvInst"};
        multiset<string> DlvInst_2_set;
        DlvInst_2.add_attribute("InstSrc", "2"); // 3
        DlvInst_2_set.insert("2");
        DlvInst_2.add_attribute("InstTyp", "S"); // 3
        DlvInst_2_set.insert("S");
        all_values.push_back(DlvInst_2_set);
        all_compo_names.insert("DlvInst_2_set");

        {
          xml_element Pty_25{"Pty"};
          multiset<string> Pty_25_set;
          Pty_25.add_attribute("ID", "SettlPartyID_t_1367935469"); // 4
          Pty_25_set.insert("SettlPartyID_t_1367935469");
          Pty_25.add_attribute("Src", "2"); // 4
          Pty_25_set.insert("2");
          Pty_25.add_attribute("R", "68"); // 4
          Pty_25_set.insert("68");
          all_values.push_back(Pty_25_set);
          all_compo_names.insert("Pty_25_set");

          {
            xml_element Sub_25{"Sub"};
            multiset<string> Sub_25_set;
            Sub_25.add_attribute("ID", "SettlPartySubID_t_1713416292"); // 5
            Sub_25_set.insert("SettlPartySubID_t_1713416292");
            Sub_25.add_attribute("Typ", "15"); // 5
            Sub_25_set.insert("15");
            all_values.push_back(Sub_25_set);
            all_compo_names.insert("Sub_25_set");

            Pty_25.add_element(Sub_25);
          }
          DlvInst_2.add_element(Pty_25);
        }
        SetInstr_2.add_element(DlvInst_2);
      }
      Alloc_2.add_element(SetInstr_2);
    }
    elt.add_element(Alloc_2);
  } // end Alloc
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
