#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AllocationInstruction.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationInstruction_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AllocInstrctn" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationInstruction_message_t_0;
  elt.add_attribute("ID", "AllocID_t_475502440"); // 0
  AllocationInstruction_message_t_0.insert("AllocID_t_475502440");
  elt.add_attribute("TransTyp", "4"); // 0
  AllocationInstruction_message_t_0.insert("4");
  elt.add_attribute("Typ", "11"); // 0
  AllocationInstruction_message_t_0.insert("11");
  elt.add_attribute("ID2", "SecondaryAllocID_t_934501182"); // 0
  AllocationInstruction_message_t_0.insert("SecondaryAllocID_t_934501182");
  elt.add_attribute("RefID", "RefAllocID_t_472231767"); // 0
  AllocationInstruction_message_t_0.insert("RefAllocID_t_472231767");
  elt.add_attribute("CxlRplcRsn", "2"); // 0
  AllocationInstruction_message_t_0.insert("2");
  elt.add_attribute("ImReqTyp", "1"); // 0
  AllocationInstruction_message_t_0.insert("1");
  elt.add_attribute("LinkID", "AllocLinkID_t_400798156"); // 0
  AllocationInstruction_message_t_0.insert("AllocLinkID_t_400798156");
  elt.add_attribute("LinkTyp", "0"); // 0
  AllocationInstruction_message_t_0.insert("0");
  elt.add_attribute("BkngRefID", "BookingRefID_t_1578886338"); // 0
  AllocationInstruction_message_t_0.insert("BookingRefID_t_1578886338");
  elt.add_attribute("NoOrdsTyp", "0"); // 0
  AllocationInstruction_message_t_0.insert("0");
  elt.add_attribute("PrevlyRpted", "N"); // 0
  AllocationInstruction_message_t_0.insert("N");
  elt.add_attribute("ReversalInd", "true"); // 0
  AllocationInstruction_message_t_0.insert("true");
  elt.add_attribute("MtchTyp", "1"); // 0
  AllocationInstruction_message_t_0.insert("1");
  elt.add_attribute("Side", "C"); // 0
  AllocationInstruction_message_t_0.insert("C");
  elt.add_attribute("Qty", "14069082.930000"); // 0
  AllocationInstruction_message_t_0.insert("14069082.930000");
  elt.add_attribute("QtyTyp", "0"); // 0
  AllocationInstruction_message_t_0.insert("0");
  elt.add_attribute("LastMkt", "LastMkt_t_240166214"); // 0
  AllocationInstruction_message_t_0.insert("LastMkt_t_240166214");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_1509068769"); // 0
  AllocationInstruction_message_t_0.insert("TradeOriginationDate_t_1509068769");
  elt.add_attribute("SesID", "1"); // 0
  AllocationInstruction_message_t_0.insert("1");
  elt.add_attribute("SesSub", "1"); // 0
  AllocationInstruction_message_t_0.insert("1");
  elt.add_attribute("PxTyp", "15"); // 0
  AllocationInstruction_message_t_0.insert("15");
  elt.add_attribute("AvgPx", "556856.140000"); // 0
  AllocationInstruction_message_t_0.insert("556856.140000");
  elt.add_attribute("AvgParPx", "3738150.500000"); // 0
  AllocationInstruction_message_t_0.insert("3738150.500000");
  elt.add_attribute("Ccy", "JPY"); // 0
  AllocationInstruction_message_t_0.insert("JPY");
  elt.add_attribute("AvgPxPrcsn", "989854265"); // 0
  AllocationInstruction_message_t_0.insert("989854265");
  elt.add_attribute("TrdDt", "TradeDate_t_1799696573"); // 0
  AllocationInstruction_message_t_0.insert("TradeDate_t_1799696573");
  elt.add_attribute("TxnTm", "TransactTime_t_1440815946"); // 0
  AllocationInstruction_message_t_0.insert("TransactTime_t_1440815946");
  elt.add_attribute("SettlTyp", "7"); // 0
  AllocationInstruction_message_t_0.insert("7");
  elt.add_attribute("SettlDt", "SettlDate_t_1572535310"); // 0
  AllocationInstruction_message_t_0.insert("SettlDate_t_1572535310");
  elt.add_attribute("BkngTyp", "1"); // 0
  AllocationInstruction_message_t_0.insert("1");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_1479109621"); // 0
  AllocationInstruction_message_t_0.insert("GrossTradeAmt_t_1479109621");
  elt.add_attribute("Concession", "Concession_t_93876360"); // 0
  AllocationInstruction_message_t_0.insert("Concession_t_93876360");
  elt.add_attribute("TotTakedown", "TotalTakedown_t_703335921"); // 0
  AllocationInstruction_message_t_0.insert("TotalTakedown_t_703335921");
  elt.add_attribute("NetMny", "NetMoney_t_1951341388"); // 0
  AllocationInstruction_message_t_0.insert("NetMoney_t_1951341388");
  elt.add_attribute("PosEfct", "N"); // 0
  AllocationInstruction_message_t_0.insert("N");
  elt.add_attribute("AutoAcceptInd", "false"); // 0
  AllocationInstruction_message_t_0.insert("false");
  elt.add_attribute("Txt", "Text_t_204655897"); // 0
  AllocationInstruction_message_t_0.insert("Text_t_204655897");
  elt.add_attribute("EncTxtLen", "325451268"); // 0
  AllocationInstruction_message_t_0.insert("325451268");
  elt.add_attribute("EncTxt", "EncodedText_t_983639510"); // 0
  AllocationInstruction_message_t_0.insert("EncodedText_t_983639510");
  elt.add_attribute("NumDaysInt", "1631820725"); // 0
  AllocationInstruction_message_t_0.insert("1631820725");
  elt.add_attribute("AcrdIntRt", "19378493.280000"); // 0
  AllocationInstruction_message_t_0.insert("19378493.280000");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_338365992"); // 0
  AllocationInstruction_message_t_0.insert("AccruedInterestAmt_t_338365992");
  elt.add_attribute("TotAcrdIntAmt", "TotalAccruedInterestAmt_t_1260519867"); // 0
  AllocationInstruction_message_t_0.insert("TotalAccruedInterestAmt_t_1260519867");
  elt.add_attribute("IntAtMat", "InterestAtMaturity_t_739118364"); // 0
  AllocationInstruction_message_t_0.insert("InterestAtMaturity_t_739118364");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_1745274286"); // 0
  AllocationInstruction_message_t_0.insert("EndAccruedInterestAmt_t_1745274286");
  elt.add_attribute("StartCsh", "StartCash_t_1199269402"); // 0
  AllocationInstruction_message_t_0.insert("StartCash_t_1199269402");
  elt.add_attribute("EndCsh", "EndCash_t_979284578"); // 0
  AllocationInstruction_message_t_0.insert("EndCash_t_979284578");
  elt.add_attribute("LegalCnfm", "Y"); // 0
  AllocationInstruction_message_t_0.insert("Y");
  elt.add_attribute("TotNoAllocs", "1449911147"); // 0
  AllocationInstruction_message_t_0.insert("1449911147");
  elt.add_attribute("LastFragment", "N"); // 0
  AllocationInstruction_message_t_0.insert("N");
  elt.add_attribute("AvgPxInd", "1"); // 0
  AllocationInstruction_message_t_0.insert("1");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1505596761"); // 0
  AllocationInstruction_message_t_0.insert("ClearingBusinessDate_t_1505596761");
  elt.add_attribute("TrdTyp", "15"); // 0
  AllocationInstruction_message_t_0.insert("15");
  elt.add_attribute("TrdSubTyp", "20"); // 0
  AllocationInstruction_message_t_0.insert("20");
  elt.add_attribute("CustCpcty", "2"); // 0
  AllocationInstruction_message_t_0.insert("2");
  elt.add_attribute("InptSrc", "TradeInputSource_t_823959198"); // 0
  AllocationInstruction_message_t_0.insert("TradeInputSource_t_823959198");
  elt.add_attribute("MLegRptTyp", "2"); // 0
  AllocationInstruction_message_t_0.insert("2");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_1023449447"); // 0
  AllocationInstruction_message_t_0.insert("MessageEventSource_t_1023449447");
  elt.add_attribute("RndPx", "8895272.170000"); // 0
  AllocationInstruction_message_t_0.insert("8895272.170000");
  all_values.push_back(AllocationInstruction_message_t_0);
  all_compo_names.insert("AllocationInstruction_message_t");

  { // Hdr
    xml_element Hdr_2{"Hdr"};
    multiset<string> Hdr_2_set;
    Hdr_2.add_attribute("SeqNum", "468875792"); // 1
    Hdr_2_set.insert("468875792");
    Hdr_2.add_attribute("SID", "SenderCompID_t_792284186"); // 1
    Hdr_2_set.insert("SenderCompID_t_792284186");
    Hdr_2.add_attribute("TID", "TargetCompID_t_221153190"); // 1
    Hdr_2_set.insert("TargetCompID_t_221153190");
    Hdr_2.add_attribute("OBID", "OnBehalfOfCompID_t_562752152"); // 1
    Hdr_2_set.insert("OnBehalfOfCompID_t_562752152");
    Hdr_2.add_attribute("D2ID", "DeliverToCompID_t_1495620107"); // 1
    Hdr_2_set.insert("DeliverToCompID_t_1495620107");
    Hdr_2.add_attribute("SSub", "SenderSubID_t_25010931"); // 1
    Hdr_2_set.insert("SenderSubID_t_25010931");
    Hdr_2.add_attribute("SLoc", "SenderLocationID_t_1052357929"); // 1
    Hdr_2_set.insert("SenderLocationID_t_1052357929");
    Hdr_2.add_attribute("TSub", "TargetSubID_t_900373278"); // 1
    Hdr_2_set.insert("TargetSubID_t_900373278");
    Hdr_2.add_attribute("TLoc", "TargetLocationID_t_229666828"); // 1
    Hdr_2_set.insert("TargetLocationID_t_229666828");
    Hdr_2.add_attribute("OBSub", "OnBehalfOfSubID_t_1377809197"); // 1
    Hdr_2_set.insert("OnBehalfOfSubID_t_1377809197");
    Hdr_2.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1884012788"); // 1
    Hdr_2_set.insert("OnBehalfOfLocationID_t_1884012788");
    Hdr_2.add_attribute("D2Sub", "DeliverToSubID_t_1861487553"); // 1
    Hdr_2_set.insert("DeliverToSubID_t_1861487553");
    Hdr_2.add_attribute("D2Loc", "DeliverToLocationID_t_1168174878"); // 1
    Hdr_2_set.insert("DeliverToLocationID_t_1168174878");
    Hdr_2.add_attribute("PosDup", "Y"); // 1
    Hdr_2_set.insert("Y");
    Hdr_2.add_attribute("PosRsnd", "N"); // 1
    Hdr_2_set.insert("N");
    Hdr_2.add_attribute("Snt", "SendingTime_t_1907293242"); // 1
    Hdr_2_set.insert("SendingTime_t_1907293242");
    Hdr_2.add_attribute("OrigSnt", "OrigSendingTime_t_1820169419"); // 1
    Hdr_2_set.insert("OrigSendingTime_t_1820169419");
    Hdr_2.add_attribute("MsgEncd", "MessageEncoding_t_26309527"); // 1
    Hdr_2_set.insert("MessageEncoding_t_26309527");
    all_values.push_back(Hdr_2_set);
    all_compo_names.insert("Hdr_2_set");

    {
      xml_element Hop_2{"Hop"};
      multiset<string> Hop_2_set;
      Hop_2.add_attribute("ID", "HopCompID_t_739094172"); // 2
      Hop_2_set.insert("HopCompID_t_739094172");
      Hop_2.add_attribute("Ref", "779545178"); // 2
      Hop_2_set.insert("779545178");
      Hop_2.add_attribute("Snt", "HopSendingTime_t_1476220674"); // 2
      Hop_2_set.insert("HopSendingTime_t_1476220674");
      all_values.push_back(Hop_2_set);
      all_compo_names.insert("Hop_2_set");

      Hdr_2.add_element(Hop_2);
    }
    elt.add_element(Hdr_2);
  } // end Hdr
  { // OrdAlloc
    xml_element OrdAlloc_0{"OrdAlloc"};
    multiset<string> OrdAlloc_0_set;
    OrdAlloc_0.add_attribute("ClOrdID", "ClOrdID_t_1373957538"); // 1
    OrdAlloc_0_set.insert("ClOrdID_t_1373957538");
    OrdAlloc_0.add_attribute("OrdID", "OrderID_t_834333787"); // 1
    OrdAlloc_0_set.insert("OrderID_t_834333787");
    OrdAlloc_0.add_attribute("OrdID2", "SecondaryOrderID_t_33488987"); // 1
    OrdAlloc_0_set.insert("SecondaryOrderID_t_33488987");
    OrdAlloc_0.add_attribute("ClOrdID2", "SecondaryClOrdID_t_618085095"); // 1
    OrdAlloc_0_set.insert("SecondaryClOrdID_t_618085095");
    OrdAlloc_0.add_attribute("ListID", "ListID_t_416967289"); // 1
    OrdAlloc_0_set.insert("ListID_t_416967289");
    OrdAlloc_0.add_attribute("Qty", "8574481.850000"); // 1
    OrdAlloc_0_set.insert("8574481.850000");
    OrdAlloc_0.add_attribute("AvgPx", "16619092.240000"); // 1
    OrdAlloc_0_set.insert("16619092.240000");
    OrdAlloc_0.add_attribute("BkngQty", "14404167.360000"); // 1
    OrdAlloc_0_set.insert("14404167.360000");
    all_values.push_back(OrdAlloc_0_set);
    all_compo_names.insert("OrdAlloc_0_set");

    {
      xml_element Pty_6{"Pty"};
      multiset<string> Pty_6_set;
      Pty_6.add_attribute("ID", "Nested2PartyID_t_1746975402"); // 2
      Pty_6_set.insert("Nested2PartyID_t_1746975402");
      Pty_6.add_attribute("Src", "7"); // 2
      Pty_6_set.insert("7");
      Pty_6.add_attribute("R", "38"); // 2
      Pty_6_set.insert("38");
      all_values.push_back(Pty_6_set);
      all_compo_names.insert("Pty_6_set");

      {
        xml_element Sub_6{"Sub"};
        multiset<string> Sub_6_set;
        Sub_6.add_attribute("ID", "Nested2PartySubID_t_1968128593"); // 3
        Sub_6_set.insert("Nested2PartySubID_t_1968128593");
        Sub_6.add_attribute("Typ", "21"); // 3
        Sub_6_set.insert("21");
        all_values.push_back(Sub_6_set);
        all_compo_names.insert("Sub_6_set");

        Pty_6.add_element(Sub_6);
      }
      OrdAlloc_0.add_element(Pty_6);
    }
    elt.add_element(OrdAlloc_0);
  } // end OrdAlloc
  { // OrdAlloc
    xml_element OrdAlloc_1{"OrdAlloc"};
    multiset<string> OrdAlloc_1_set;
    OrdAlloc_1.add_attribute("ClOrdID", "ClOrdID_t_1580837381"); // 1
    OrdAlloc_1_set.insert("ClOrdID_t_1580837381");
    OrdAlloc_1.add_attribute("OrdID", "OrderID_t_1993139524"); // 1
    OrdAlloc_1_set.insert("OrderID_t_1993139524");
    OrdAlloc_1.add_attribute("OrdID2", "SecondaryOrderID_t_1598411450"); // 1
    OrdAlloc_1_set.insert("SecondaryOrderID_t_1598411450");
    OrdAlloc_1.add_attribute("ClOrdID2", "SecondaryClOrdID_t_333727012"); // 1
    OrdAlloc_1_set.insert("SecondaryClOrdID_t_333727012");
    OrdAlloc_1.add_attribute("ListID", "ListID_t_75322704"); // 1
    OrdAlloc_1_set.insert("ListID_t_75322704");
    OrdAlloc_1.add_attribute("Qty", "8287369.990000"); // 1
    OrdAlloc_1_set.insert("8287369.990000");
    OrdAlloc_1.add_attribute("AvgPx", "702561.520000"); // 1
    OrdAlloc_1_set.insert("702561.520000");
    OrdAlloc_1.add_attribute("BkngQty", "19368102.570000"); // 1
    OrdAlloc_1_set.insert("19368102.570000");
    all_values.push_back(OrdAlloc_1_set);
    all_compo_names.insert("OrdAlloc_1_set");

    {
      xml_element Pty_7{"Pty"};
      multiset<string> Pty_7_set;
      Pty_7.add_attribute("ID", "Nested2PartyID_t_1996911877"); // 2
      Pty_7_set.insert("Nested2PartyID_t_1996911877");
      Pty_7.add_attribute("Src", "6"); // 2
      Pty_7_set.insert("6");
      Pty_7.add_attribute("R", "79"); // 2
      Pty_7_set.insert("79");
      all_values.push_back(Pty_7_set);
      all_compo_names.insert("Pty_7_set");

      {
        xml_element Sub_7{"Sub"};
        multiset<string> Sub_7_set;
        Sub_7.add_attribute("ID", "Nested2PartySubID_t_1756721471"); // 3
        Sub_7_set.insert("Nested2PartySubID_t_1756721471");
        Sub_7.add_attribute("Typ", "29"); // 3
        Sub_7_set.insert("29");
        all_values.push_back(Sub_7_set);
        all_compo_names.insert("Sub_7_set");

        Pty_7.add_element(Sub_7);
      }
      OrdAlloc_1.add_element(Pty_7);
    }
    elt.add_element(OrdAlloc_1);
  } // end OrdAlloc
  { // OrdAlloc
    xml_element OrdAlloc_2{"OrdAlloc"};
    multiset<string> OrdAlloc_2_set;
    OrdAlloc_2.add_attribute("ClOrdID", "ClOrdID_t_790159908"); // 1
    OrdAlloc_2_set.insert("ClOrdID_t_790159908");
    OrdAlloc_2.add_attribute("OrdID", "OrderID_t_348331996"); // 1
    OrdAlloc_2_set.insert("OrderID_t_348331996");
    OrdAlloc_2.add_attribute("OrdID2", "SecondaryOrderID_t_597382234"); // 1
    OrdAlloc_2_set.insert("SecondaryOrderID_t_597382234");
    OrdAlloc_2.add_attribute("ClOrdID2", "SecondaryClOrdID_t_118896934"); // 1
    OrdAlloc_2_set.insert("SecondaryClOrdID_t_118896934");
    OrdAlloc_2.add_attribute("ListID", "ListID_t_547716051"); // 1
    OrdAlloc_2_set.insert("ListID_t_547716051");
    OrdAlloc_2.add_attribute("Qty", "19713397.730000"); // 1
    OrdAlloc_2_set.insert("19713397.730000");
    OrdAlloc_2.add_attribute("AvgPx", "9532307.220000"); // 1
    OrdAlloc_2_set.insert("9532307.220000");
    OrdAlloc_2.add_attribute("BkngQty", "5812050.380000"); // 1
    OrdAlloc_2_set.insert("5812050.380000");
    all_values.push_back(OrdAlloc_2_set);
    all_compo_names.insert("OrdAlloc_2_set");

    {
      xml_element Pty_8{"Pty"};
      multiset<string> Pty_8_set;
      Pty_8.add_attribute("ID", "Nested2PartyID_t_441941220"); // 2
      Pty_8_set.insert("Nested2PartyID_t_441941220");
      Pty_8.add_attribute("Src", "E"); // 2
      Pty_8_set.insert("E");
      Pty_8.add_attribute("R", "17"); // 2
      Pty_8_set.insert("17");
      all_values.push_back(Pty_8_set);
      all_compo_names.insert("Pty_8_set");

      {
        xml_element Sub_8{"Sub"};
        multiset<string> Sub_8_set;
        Sub_8.add_attribute("ID", "Nested2PartySubID_t_2103850444"); // 3
        Sub_8_set.insert("Nested2PartySubID_t_2103850444");
        Sub_8.add_attribute("Typ", "27"); // 3
        Sub_8_set.insert("27");
        all_values.push_back(Sub_8_set);
        all_compo_names.insert("Sub_8_set");

        Pty_8.add_element(Sub_8);
      }
      OrdAlloc_2.add_element(Pty_8);
    }
    elt.add_element(OrdAlloc_2);
  } // end OrdAlloc
  { // AllExc
    xml_element AllExc_0{"AllExc"};
    multiset<string> AllExc_0_set;
    AllExc_0.add_attribute("LastQty", "20871518.130000"); // 1
    AllExc_0_set.insert("20871518.130000");
    AllExc_0.add_attribute("ExecID", "ExecID_t_748348374"); // 1
    AllExc_0_set.insert("ExecID_t_748348374");
    AllExc_0.add_attribute("ExecID2", "SecondaryExecID_t_858789923"); // 1
    AllExc_0_set.insert("SecondaryExecID_t_858789923");
    AllExc_0.add_attribute("LastPx", "4857216.860000"); // 1
    AllExc_0_set.insert("4857216.860000");
    AllExc_0.add_attribute("LastParPx", "1817021.070000"); // 1
    AllExc_0_set.insert("1817021.070000");
    AllExc_0.add_attribute("LastCpcty", "4"); // 1
    AllExc_0_set.insert("4");
    AllExc_0.add_attribute("TrdID", "TradeID_t_2084133136"); // 1
    AllExc_0_set.insert("TradeID_t_2084133136");
    AllExc_0.add_attribute("FirmTrdID", "FirmTradeID_t_515429119"); // 1
    AllExc_0_set.insert("FirmTradeID_t_515429119");
    all_values.push_back(AllExc_0_set);
    all_compo_names.insert("AllExc_0_set");

    elt.add_element(AllExc_0);
  } // end AllExc
  { // Instrmt
    xml_element Instrmt_2{"Instrmt"};
    multiset<string> Instrmt_2_set;
    Instrmt_2.add_attribute("Sym", "Symbol_t_779768503"); // 1
    Instrmt_2_set.insert("Symbol_t_779768503");
    Instrmt_2.add_attribute("Sfx", "WI"); // 1
    Instrmt_2_set.insert("WI");
    Instrmt_2.add_attribute("ID", "SecurityID_t_585685272"); // 1
    Instrmt_2_set.insert("SecurityID_t_585685272");
    Instrmt_2.add_attribute("Src", "F"); // 1
    Instrmt_2_set.insert("F");
    Instrmt_2.add_attribute("Prod", "7"); // 1
    Instrmt_2_set.insert("7");
    Instrmt_2.add_attribute("ProdCmplx", "ProductComplex_t_730836557"); // 1
    Instrmt_2_set.insert("ProductComplex_t_730836557");
    Instrmt_2.add_attribute("SecGrp", "SecurityGroup_t_1332945494"); // 1
    Instrmt_2_set.insert("SecurityGroup_t_1332945494");
    Instrmt_2.add_attribute("CFI", "CFICode_t_224052540"); // 1
    Instrmt_2_set.insert("CFICode_t_224052540");
    Instrmt_2.add_attribute("SecTyp", "MT"); // 1
    Instrmt_2_set.insert("MT");
    Instrmt_2.add_attribute("SubTyp", "SecuritySubType_t_2123105402"); // 1
    Instrmt_2_set.insert("SecuritySubType_t_2123105402");
    Instrmt_2.add_attribute("MMY", "572384536"); // 1
    Instrmt_2_set.insert("572384536");
    Instrmt_2.add_attribute("MatDt", "MaturityDate_t_1146055848"); // 1
    Instrmt_2_set.insert("MaturityDate_t_1146055848");
    Instrmt_2.add_attribute("MatTm", "94518689"); // 1
    Instrmt_2_set.insert("94518689");
    Instrmt_2.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1120100587"); // 1
    Instrmt_2_set.insert("SettleOnOpenFlag_t_1120100587");
    Instrmt_2.add_attribute("AsgnMeth", "969911973"); // 1
    Instrmt_2_set.insert("969911973");
    Instrmt_2.add_attribute("Status", "2"); // 1
    Instrmt_2_set.insert("2");
    Instrmt_2.add_attribute("CpnPmt", "CouponPaymentDate_t_1701305626"); // 1
    Instrmt_2_set.insert("CouponPaymentDate_t_1701305626");
    Instrmt_2.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_2_set.insert("MR");
    Instrmt_2.add_attribute("Snrty", "SR"); // 1
    Instrmt_2_set.insert("SR");
    Instrmt_2.add_attribute("NotlPctOut", "9924752.020000"); // 1
    Instrmt_2_set.insert("9924752.020000");
    Instrmt_2.add_attribute("OrigNotlPctOut", "13682199.900000"); // 1
    Instrmt_2_set.insert("13682199.900000");
    Instrmt_2.add_attribute("AttchPnt", "9335948.730000"); // 1
    Instrmt_2_set.insert("9335948.730000");
    Instrmt_2.add_attribute("DetchPnt", "20306201.800000"); // 1
    Instrmt_2_set.insert("20306201.800000");
    Instrmt_2.add_attribute("Issued", "IssueDate_t_1307888155"); // 1
    Instrmt_2_set.insert("IssueDate_t_1307888155");
    Instrmt_2.add_attribute("RepoCollSecTyp", "1681943247"); // 1
    Instrmt_2_set.insert("1681943247");
    Instrmt_2.add_attribute("RepoTrm", "741926456"); // 1
    Instrmt_2_set.insert("741926456");
    Instrmt_2.add_attribute("RepoRt", "17936098.410000"); // 1
    Instrmt_2_set.insert("17936098.410000");
    Instrmt_2.add_attribute("Fctr", "18636453.550000"); // 1
    Instrmt_2_set.insert("18636453.550000");
    Instrmt_2.add_attribute("CrdRtg", "CreditRating_t_1446372255"); // 1
    Instrmt_2_set.insert("CreditRating_t_1446372255");
    Instrmt_2.add_attribute("Rgstry", "InstrRegistry_t_1730259329"); // 1
    Instrmt_2_set.insert("InstrRegistry_t_1730259329");
    Instrmt_2.add_attribute("IssuCtry", "231590826"); // 1
    Instrmt_2_set.insert("231590826");
    Instrmt_2.add_attribute("StPrv", "StateOrProvinceOfIssue_t_78657111"); // 1
    Instrmt_2_set.insert("StateOrProvinceOfIssue_t_78657111");
    Instrmt_2.add_attribute("Lcl", "LocaleOfIssue_t_348162168"); // 1
    Instrmt_2_set.insert("LocaleOfIssue_t_348162168");
    Instrmt_2.add_attribute("Redeem", "RedemptionDate_t_817276098"); // 1
    Instrmt_2_set.insert("RedemptionDate_t_817276098");
    Instrmt_2.add_attribute("StrkPx", "6477522.230000"); // 1
    Instrmt_2_set.insert("6477522.230000");
    Instrmt_2.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_2_set.insert("USD");
    Instrmt_2.add_attribute("StrkMult", "19806977.170000"); // 1
    Instrmt_2_set.insert("19806977.170000");
    Instrmt_2.add_attribute("StrkValu", "11870294.260000"); // 1
    Instrmt_2_set.insert("11870294.260000");
    Instrmt_2.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_2_set.insert("3");
    Instrmt_2.add_attribute("StrkPxBndryMeth", "3"); // 1
    Instrmt_2_set.insert("3");
    Instrmt_2.add_attribute("StrkPxBndryPrcsn", "17594139.620000"); // 1
    Instrmt_2_set.insert("17594139.620000");
    Instrmt_2.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_2_set.insert("3");
    Instrmt_2.add_attribute("OptAt", "2050838161"); // 1
    Instrmt_2_set.insert("2050838161");
    Instrmt_2.add_attribute("Mult", "7320309.020000"); // 1
    Instrmt_2_set.insert("7320309.020000");
    Instrmt_2.add_attribute("MultTyp", "1"); // 1
    Instrmt_2_set.insert("1");
    Instrmt_2.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_2_set.insert("4");
    Instrmt_2.add_attribute("MinPxIncr", "2858528.800000"); // 1
    Instrmt_2_set.insert("2858528.800000");
    Instrmt_2.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1329639989"); // 1
    Instrmt_2_set.insert("MinPriceIncrementAmount_t_1329639989");
    Instrmt_2.add_attribute("UOM", "MWh"); // 1
    Instrmt_2_set.insert("MWh");
    Instrmt_2.add_attribute("UOMQty", "12783280.820000"); // 1
    Instrmt_2_set.insert("12783280.820000");
    Instrmt_2.add_attribute("PxUOM", "Bu"); // 1
    Instrmt_2_set.insert("Bu");
    Instrmt_2.add_attribute("PxUOMQty", "76789.230000"); // 1
    Instrmt_2_set.insert("76789.230000");
    Instrmt_2.add_attribute("SettlMeth", "C"); // 1
    Instrmt_2_set.insert("C");
    Instrmt_2.add_attribute("ExerStyle", "1"); // 1
    Instrmt_2_set.insert("1");
    Instrmt_2.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_2_set.insert("2");
    Instrmt_2.add_attribute("OptPayAmt", "OptPayoutAmount_t_1903391070"); // 1
    Instrmt_2_set.insert("OptPayoutAmount_t_1903391070");
    Instrmt_2.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_2_set.insert("PCTPAR");
    Instrmt_2.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_2_set.insert("CDS");
    Instrmt_2.add_attribute("ListMeth", "0"); // 1
    Instrmt_2_set.insert("0");
    Instrmt_2.add_attribute("CapPx", "10871663.600000"); // 1
    Instrmt_2_set.insert("10871663.600000");
    Instrmt_2.add_attribute("FlrPx", "16373747.040000"); // 1
    Instrmt_2_set.insert("16373747.040000");
    Instrmt_2.add_attribute("PutCall", "1"); // 1
    Instrmt_2_set.insert("1");
    Instrmt_2.add_attribute("FlexInd", "false"); // 1
    Instrmt_2_set.insert("false");
    Instrmt_2.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_2_set.insert("false");
    Instrmt_2.add_attribute("TmUnit", "Mo"); // 1
    Instrmt_2_set.insert("Mo");
    Instrmt_2.add_attribute("CpnRt", "2508217.660000"); // 1
    Instrmt_2_set.insert("2508217.660000");
    Instrmt_2.add_attribute("Exch", "SecurityExchange_t_1855279811"); // 1
    Instrmt_2_set.insert("SecurityExchange_t_1855279811");
    Instrmt_2.add_attribute("PosLmt", "1761903082"); // 1
    Instrmt_2_set.insert("1761903082");
    Instrmt_2.add_attribute("NTPosLmt", "1437851192"); // 1
    Instrmt_2_set.insert("1437851192");
    Instrmt_2.add_attribute("Issr", "Issuer_t_1804582433"); // 1
    Instrmt_2_set.insert("Issuer_t_1804582433");
    Instrmt_2.add_attribute("EncIssrLen", "1570738906"); // 1
    Instrmt_2_set.insert("1570738906");
    Instrmt_2.add_attribute("EncIssr", "EncodedIssuer_t_1049781507"); // 1
    Instrmt_2_set.insert("EncodedIssuer_t_1049781507");
    Instrmt_2.add_attribute("Desc", "SecurityDesc_t_752457255"); // 1
    Instrmt_2_set.insert("SecurityDesc_t_752457255");
    Instrmt_2.add_attribute("EncSecDescLen", "1474093419"); // 1
    Instrmt_2_set.insert("1474093419");
    Instrmt_2.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1781812409"); // 1
    Instrmt_2_set.insert("EncodedSecurityDesc_t_1781812409");
    Instrmt_2.add_attribute("Pool", "Pool_t_670244051"); // 1
    Instrmt_2_set.insert("Pool_t_670244051");
    Instrmt_2.add_attribute("CSetMo", "277713695"); // 1
    Instrmt_2_set.insert("277713695");
    Instrmt_2.add_attribute("CPPgm", "1"); // 1
    Instrmt_2_set.insert("1");
    Instrmt_2.add_attribute("CPRegT", "CPRegType_t_1999884041"); // 1
    Instrmt_2_set.insert("CPRegType_t_1999884041");
    Instrmt_2.add_attribute("Dated", "DatedDate_t_1499281393"); // 1
    Instrmt_2_set.insert("DatedDate_t_1499281393");
    Instrmt_2.add_attribute("IntAcrl", "InterestAccrualDate_t_1198509723"); // 1
    Instrmt_2_set.insert("InterestAccrualDate_t_1198509723");
    all_values.push_back(Instrmt_2_set);
    all_compo_names.insert("Instrmt_2_set");

    {
      xml_element AID_2{"AID"};
      multiset<string> AID_2_set;
      AID_2.add_attribute("AltID", "SecurityAltID_t_402776724"); // 2
      AID_2_set.insert("SecurityAltID_t_402776724");
      AID_2.add_attribute("AltIDSrc", "5"); // 2
      AID_2_set.insert("5");
      all_values.push_back(AID_2_set);
      all_compo_names.insert("AID_2_set");

      Instrmt_2.add_element(AID_2);
    }
    {
      xml_element SecXML_2{"SecXML"};
      multiset<string> SecXML_2_set;
      SecXML_2.add_attribute("Schema", "SecurityXMLSchema_t_212490689"); // 2
      SecXML_2_set.insert("SecurityXMLSchema_t_212490689");
      all_values.push_back(SecXML_2_set);
      all_compo_names.insert("SecXML_2_set");

      Instrmt_2.add_element(SecXML_2);
    }
    {
      xml_element Evnt_2{"Evnt"};
      multiset<string> Evnt_2_set;
      Evnt_2.add_attribute("EventTyp", "4"); // 2
      Evnt_2_set.insert("4");
      Evnt_2.add_attribute("Dt", "EventDate_t_1049098839"); // 2
      Evnt_2_set.insert("EventDate_t_1049098839");
      Evnt_2.add_attribute("Tm", "EventTime_t_2115881760"); // 2
      Evnt_2_set.insert("EventTime_t_2115881760");
      Evnt_2.add_attribute("Px", "16179482.420000"); // 2
      Evnt_2_set.insert("16179482.420000");
      Evnt_2.add_attribute("Txt", "EventText_t_307399069"); // 2
      Evnt_2_set.insert("EventText_t_307399069");
      all_values.push_back(Evnt_2_set);
      all_compo_names.insert("Evnt_2_set");

      Instrmt_2.add_element(Evnt_2);
    }
    {
      xml_element Pty_9{"Pty"};
      multiset<string> Pty_9_set;
      Pty_9.add_attribute("ID", "InstrumentPartyID_t_1170677790"); // 2
      Pty_9_set.insert("InstrumentPartyID_t_1170677790");
      Pty_9.add_attribute("Src", "A"); // 2
      Pty_9_set.insert("A");
      Pty_9.add_attribute("R", "64"); // 2
      Pty_9_set.insert("64");
      all_values.push_back(Pty_9_set);
      all_compo_names.insert("Pty_9_set");

      {
        xml_element Sub_9{"Sub"};
        multiset<string> Sub_9_set;
        Sub_9.add_attribute("ID", "InstrumentPartySubID_t_304130931"); // 3
        Sub_9_set.insert("InstrumentPartySubID_t_304130931");
        Sub_9.add_attribute("Typ", "5"); // 3
        Sub_9_set.insert("5");
        all_values.push_back(Sub_9_set);
        all_compo_names.insert("Sub_9_set");

        Pty_9.add_element(Sub_9);
      }
      Instrmt_2.add_element(Pty_9);
    }
    {
      xml_element CmplxEvnt_2{"CmplxEvnt"};
      multiset<string> CmplxEvnt_2_set;
      CmplxEvnt_2.add_attribute("Typ", "6"); // 2
      CmplxEvnt_2_set.insert("6");
      CmplxEvnt_2.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_85336295"); // 2
      CmplxEvnt_2_set.insert("ComplexOptPayoutAmount_t_85336295");
      CmplxEvnt_2.add_attribute("Px", "962976.020000"); // 2
      CmplxEvnt_2_set.insert("962976.020000");
      CmplxEvnt_2.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_2_set.insert("3");
      CmplxEvnt_2.add_attribute("PxBndryPrcsn", "18472393.770000"); // 2
      CmplxEvnt_2_set.insert("18472393.770000");
      CmplxEvnt_2.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_2_set.insert("3");
      CmplxEvnt_2.add_attribute("Cond", "2"); // 2
      CmplxEvnt_2_set.insert("2");
      all_values.push_back(CmplxEvnt_2_set);
      all_compo_names.insert("CmplxEvnt_2_set");

      {
        xml_element EvntDts_2{"EvntDts"};
        multiset<string> EvntDts_2_set;
        EvntDts_2.add_attribute("StartDt", "ComplexEventStartDate_t_1270494635"); // 3
        EvntDts_2_set.insert("ComplexEventStartDate_t_1270494635");
        EvntDts_2.add_attribute("EndDt", "ComplexEventEndDate_t_436446654"); // 3
        EvntDts_2_set.insert("ComplexEventEndDate_t_436446654");
        all_values.push_back(EvntDts_2_set);
        all_compo_names.insert("EvntDts_2_set");

        {
          xml_element EvntTms_2{"EvntTms"};
          multiset<string> EvntTms_2_set;
          EvntTms_2.add_attribute("StartTm", "221809484"); // 4
          EvntTms_2_set.insert("221809484");
          EvntTms_2.add_attribute("EndTm", "597104406"); // 4
          EvntTms_2_set.insert("597104406");
          all_values.push_back(EvntTms_2_set);
          all_compo_names.insert("EvntTms_2_set");

          EvntDts_2.add_element(EvntTms_2);
        }
        CmplxEvnt_2.add_element(EvntDts_2);
      }
      Instrmt_2.add_element(CmplxEvnt_2);
    }
    elt.add_element(Instrmt_2);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_0{"InstrmtExt"};
    multiset<string> InstrmtExt_0_set;
    InstrmtExt_0.add_attribute("DlvryForm", "2"); // 1
    InstrmtExt_0_set.insert("2");
    InstrmtExt_0.add_attribute("PctAtRisk", "8920535.360000"); // 1
    InstrmtExt_0_set.insert("8920535.360000");
    all_values.push_back(InstrmtExt_0_set);
    all_compo_names.insert("InstrmtExt_0_set");

    {
      xml_element Attrb_0{"Attrb"};
      multiset<string> Attrb_0_set;
      Attrb_0.add_attribute("Typ", "2"); // 2
      Attrb_0_set.insert("2");
      Attrb_0.add_attribute("Val", "InstrAttribValue_t_2138440704"); // 2
      Attrb_0_set.insert("InstrAttribValue_t_2138440704");
      all_values.push_back(Attrb_0_set);
      all_compo_names.insert("Attrb_0_set");

      InstrmtExt_0.add_element(Attrb_0);
    }
    elt.add_element(InstrmtExt_0);
  } // end InstrmtExt
  { // FinDetls
    xml_element FinDetls_0{"FinDetls"};
    multiset<string> FinDetls_0_set;
    FinDetls_0.add_attribute("AgmtDesc", "AgreementDesc_t_744453929"); // 1
    FinDetls_0_set.insert("AgreementDesc_t_744453929");
    FinDetls_0.add_attribute("AgmtID", "AgreementID_t_226615846"); // 1
    FinDetls_0_set.insert("AgreementID_t_226615846");
    FinDetls_0.add_attribute("AgmtDt", "AgreementDate_t_1189466779"); // 1
    FinDetls_0_set.insert("AgreementDate_t_1189466779");
    FinDetls_0.add_attribute("AgmtCcy", "CHF"); // 1
    FinDetls_0_set.insert("CHF");
    FinDetls_0.add_attribute("TrmTyp", "1"); // 1
    FinDetls_0_set.insert("1");
    FinDetls_0.add_attribute("StartDt", "StartDate_t_1260788216"); // 1
    FinDetls_0_set.insert("StartDate_t_1260788216");
    FinDetls_0.add_attribute("EndDt", "EndDate_t_635191354"); // 1
    FinDetls_0_set.insert("EndDate_t_635191354");
    FinDetls_0.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_0_set.insert("0");
    FinDetls_0.add_attribute("MgnRatio", "7312528.110000"); // 1
    FinDetls_0_set.insert("7312528.110000");
    all_values.push_back(FinDetls_0_set);
    all_compo_names.insert("FinDetls_0_set");

    elt.add_element(FinDetls_0);
  } // end FinDetls
  { // Undly
    xml_element Undly_2{"Undly"};
    multiset<string> Undly_2_set;
    Undly_2.add_attribute("Sym", "UnderlyingSymbol_t_393549722"); // 1
    Undly_2_set.insert("UnderlyingSymbol_t_393549722");
    Undly_2.add_attribute("Sfx", "CD"); // 1
    Undly_2_set.insert("CD");
    Undly_2.add_attribute("ID", "UnderlyingSecurityID_t_739880550"); // 1
    Undly_2_set.insert("UnderlyingSecurityID_t_739880550");
    Undly_2.add_attribute("Src", "M"); // 1
    Undly_2_set.insert("M");
    Undly_2.add_attribute("Prod", "9"); // 1
    Undly_2_set.insert("9");
    Undly_2.add_attribute("CFI", "UnderlyingCFICode_t_844337831"); // 1
    Undly_2_set.insert("UnderlyingCFICode_t_844337831");
    Undly_2.add_attribute("SecTyp", "BDN"); // 1
    Undly_2_set.insert("BDN");
    Undly_2.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1230657204"); // 1
    Undly_2_set.insert("UnderlyingSecuritySubType_t_1230657204");
    Undly_2.add_attribute("MMY", "656591275"); // 1
    Undly_2_set.insert("656591275");
    Undly_2.add_attribute("Mat", "UnderlyingMaturityDate_t_482772678"); // 1
    Undly_2_set.insert("UnderlyingMaturityDate_t_482772678");
    Undly_2.add_attribute("MatTm", "617322351"); // 1
    Undly_2_set.insert("617322351");
    Undly_2.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_125943504"); // 1
    Undly_2_set.insert("UnderlyingCouponPaymentDate_t_125943504");
    Undly_2.add_attribute("RestrctTyp", "MM"); // 1
    Undly_2_set.insert("MM");
    Undly_2.add_attribute("Snrty", "SD"); // 1
    Undly_2_set.insert("SD");
    Undly_2.add_attribute("NotlPctOut", "3477529.880000"); // 1
    Undly_2_set.insert("3477529.880000");
    Undly_2.add_attribute("OrigNotlPctOut", "2028880.720000"); // 1
    Undly_2_set.insert("2028880.720000");
    Undly_2.add_attribute("AttchPnt", "11245444.200000"); // 1
    Undly_2_set.insert("11245444.200000");
    Undly_2.add_attribute("DetchPnt", "12398065.240000"); // 1
    Undly_2_set.insert("12398065.240000");
    Undly_2.add_attribute("Issued", "UnderlyingIssueDate_t_1077706174"); // 1
    Undly_2_set.insert("UnderlyingIssueDate_t_1077706174");
    Undly_2.add_attribute("RepoCollSecTyp", "1115501476"); // 1
    Undly_2_set.insert("1115501476");
    Undly_2.add_attribute("RepoTrm", "1984260453"); // 1
    Undly_2_set.insert("1984260453");
    Undly_2.add_attribute("RepoRt", "13043220.200000"); // 1
    Undly_2_set.insert("13043220.200000");
    Undly_2.add_attribute("Fctr", "1574846.070000"); // 1
    Undly_2_set.insert("1574846.070000");
    Undly_2.add_attribute("CrdRtg", "UnderlyingCreditRating_t_984007459"); // 1
    Undly_2_set.insert("UnderlyingCreditRating_t_984007459");
    Undly_2.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_890414535"); // 1
    Undly_2_set.insert("UnderlyingInstrRegistry_t_890414535");
    Undly_2.add_attribute("Ctry", "1559442076"); // 1
    Undly_2_set.insert("1559442076");
    Undly_2.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_97312027"); // 1
    Undly_2_set.insert("UnderlyingStateOrProvinceOfIssue_t_97312027");
    Undly_2.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1525605890"); // 1
    Undly_2_set.insert("UnderlyingLocaleOfIssue_t_1525605890");
    Undly_2.add_attribute("Redeem", "UnderlyingRedemptionDate_t_782314008"); // 1
    Undly_2_set.insert("UnderlyingRedemptionDate_t_782314008");
    Undly_2.add_attribute("StrkPx", "8285648.380000"); // 1
    Undly_2_set.insert("8285648.380000");
    Undly_2.add_attribute("StrkCcy", "CHF"); // 1
    Undly_2_set.insert("CHF");
    Undly_2.add_attribute("OptA", "2117448604"); // 1
    Undly_2_set.insert("2117448604");
    Undly_2.add_attribute("Mult", "10605932.160000"); // 1
    Undly_2_set.insert("10605932.160000");
    Undly_2.add_attribute("MultTyp", "2"); // 1
    Undly_2_set.insert("2");
    Undly_2.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_2_set.insert("3");
    Undly_2.add_attribute("UOM", "MMbbl"); // 1
    Undly_2_set.insert("MMbbl");
    Undly_2.add_attribute("UOMQty", "5090776.850000"); // 1
    Undly_2_set.insert("5090776.850000");
    Undly_2.add_attribute("PxUOM", "Alw"); // 1
    Undly_2_set.insert("Alw");
    Undly_2.add_attribute("PxUOMQty", "4140386.740000"); // 1
    Undly_2_set.insert("4140386.740000");
    Undly_2.add_attribute("TmUnit", "Min"); // 1
    Undly_2_set.insert("Min");
    Undly_2.add_attribute("ExerStyle", "2"); // 1
    Undly_2_set.insert("2");
    Undly_2.add_attribute("CpnRt", "5399821.780000"); // 1
    Undly_2_set.insert("5399821.780000");
    Undly_2.add_attribute("Exch", "UnderlyingSecurityExchange_t_597634030"); // 1
    Undly_2_set.insert("UnderlyingSecurityExchange_t_597634030");
    Undly_2.add_attribute("Issr", "UnderlyingIssuer_t_1858589472"); // 1
    Undly_2_set.insert("UnderlyingIssuer_t_1858589472");
    Undly_2.add_attribute("EncUndIssrLen", "887735166"); // 1
    Undly_2_set.insert("887735166");
    Undly_2.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_800522102"); // 1
    Undly_2_set.insert("EncodedUnderlyingIssuer_t_800522102");
    Undly_2.add_attribute("Desc", "UnderlyingSecurityDesc_t_835650244"); // 1
    Undly_2_set.insert("UnderlyingSecurityDesc_t_835650244");
    Undly_2.add_attribute("EncUndSecDescLen", "2127541691"); // 1
    Undly_2_set.insert("2127541691");
    Undly_2.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1878228276"); // 1
    Undly_2_set.insert("EncodedUnderlyingSecurityDesc_t_1878228276");
    Undly_2.add_attribute("CPPgm", "UnderlyingCPProgram_t_1951151721"); // 1
    Undly_2_set.insert("UnderlyingCPProgram_t_1951151721");
    Undly_2.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1964318496"); // 1
    Undly_2_set.insert("UnderlyingCPRegType_t_1964318496");
    Undly_2.add_attribute("AllocPct", "10350666.490000"); // 1
    Undly_2_set.insert("10350666.490000");
    Undly_2.add_attribute("Ccy", "CAN"); // 1
    Undly_2_set.insert("CAN");
    Undly_2.add_attribute("Qty", "19254811.840000"); // 1
    Undly_2_set.insert("19254811.840000");
    Undly_2.add_attribute("SettlTyp", "5"); // 1
    Undly_2_set.insert("5");
    Undly_2.add_attribute("CashAmt", "UnderlyingCashAmount_t_898154335"); // 1
    Undly_2_set.insert("UnderlyingCashAmount_t_898154335");
    Undly_2.add_attribute("CashTyp", "FIXED"); // 1
    Undly_2_set.insert("FIXED");
    Undly_2.add_attribute("Px", "1554251.170000"); // 1
    Undly_2_set.insert("1554251.170000");
    Undly_2.add_attribute("DirtPx", "17267191.730000"); // 1
    Undly_2_set.insert("17267191.730000");
    Undly_2.add_attribute("EndPx", "16243160.920000"); // 1
    Undly_2_set.insert("16243160.920000");
    Undly_2.add_attribute("StartVal", "UnderlyingStartValue_t_1331288848"); // 1
    Undly_2_set.insert("UnderlyingStartValue_t_1331288848");
    Undly_2.add_attribute("CurVal", "UnderlyingCurrentValue_t_1696684130"); // 1
    Undly_2_set.insert("UnderlyingCurrentValue_t_1696684130");
    Undly_2.add_attribute("EndVal", "UnderlyingEndValue_t_537425660"); // 1
    Undly_2_set.insert("UnderlyingEndValue_t_537425660");
    Undly_2.add_attribute("AdjQty", "10573495.840000"); // 1
    Undly_2_set.insert("10573495.840000");
    Undly_2.add_attribute("FxRate", "6535250.400000"); // 1
    Undly_2_set.insert("6535250.400000");
    Undly_2.add_attribute("FxRateCalc", "D"); // 1
    Undly_2_set.insert("D");
    Undly_2.add_attribute("CapValu", "UnderlyingCapValue_t_1566427270"); // 1
    Undly_2_set.insert("UnderlyingCapValue_t_1566427270");
    Undly_2.add_attribute("SetMeth", "UnderlyingSettlMethod_t_841023155"); // 1
    Undly_2_set.insert("UnderlyingSettlMethod_t_841023155");
    Undly_2.add_attribute("PutCall", "708911733"); // 1
    Undly_2_set.insert("708911733");
    all_values.push_back(Undly_2_set);
    all_compo_names.insert("Undly_2_set");

    {
      xml_element UndAID_2{"UndAID"};
      multiset<string> UndAID_2_set;
      UndAID_2.add_attribute("AltID", "UnderlyingSecurityAltID_t_410793986"); // 2
      UndAID_2_set.insert("UnderlyingSecurityAltID_t_410793986");
      UndAID_2.add_attribute("AltIDSrc", "H"); // 2
      UndAID_2_set.insert("H");
      all_values.push_back(UndAID_2_set);
      all_compo_names.insert("UndAID_2_set");

      Undly_2.add_element(UndAID_2);
    }
    {
      xml_element Stip_2{"Stip"};
      multiset<string> Stip_2_set;
      Stip_2.add_attribute("Typ", "INTERNALQTY"); // 2
      Stip_2_set.insert("INTERNALQTY");
      Stip_2.add_attribute("Val", "UnderlyingStipValue_t_1008428016"); // 2
      Stip_2_set.insert("UnderlyingStipValue_t_1008428016");
      all_values.push_back(Stip_2_set);
      all_compo_names.insert("Stip_2_set");

      Undly_2.add_element(Stip_2);
    }
    {
      xml_element Pty_10{"Pty"};
      multiset<string> Pty_10_set;
      Pty_10.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1356949446"); // 2
      Pty_10_set.insert("UnderlyingInstrumentPartyID_t_1356949446");
      Pty_10.add_attribute("Src", "9"); // 2
      Pty_10_set.insert("9");
      Pty_10.add_attribute("R", "41"); // 2
      Pty_10_set.insert("41");
      all_values.push_back(Pty_10_set);
      all_compo_names.insert("Pty_10_set");

      {
        xml_element Sub_10{"Sub"};
        multiset<string> Sub_10_set;
        Sub_10.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_45116042"); // 3
        Sub_10_set.insert("UnderlyingInstrumentPartySubID_t_45116042");
        Sub_10.add_attribute("Typ", "33"); // 3
        Sub_10_set.insert("33");
        all_values.push_back(Sub_10_set);
        all_compo_names.insert("Sub_10_set");

        Pty_10.add_element(Sub_10);
      }
      Undly_2.add_element(Pty_10);
    }
    elt.add_element(Undly_2);
  } // end Undly
  { // Leg
    xml_element Leg_2{"Leg"};
    multiset<string> Leg_2_set;
    Leg_2.add_attribute("Sym", "LegSymbol_t_1996267763"); // 1
    Leg_2_set.insert("LegSymbol_t_1996267763");
    Leg_2.add_attribute("Sfx", "WI"); // 1
    Leg_2_set.insert("WI");
    Leg_2.add_attribute("ID", "LegSecurityID_t_427277748"); // 1
    Leg_2_set.insert("LegSecurityID_t_427277748");
    Leg_2.add_attribute("Src", "D"); // 1
    Leg_2_set.insert("D");
    Leg_2.add_attribute("Prod", "7"); // 1
    Leg_2_set.insert("7");
    Leg_2.add_attribute("CFI", "LegCFICode_t_205275284"); // 1
    Leg_2_set.insert("LegCFICode_t_205275284");
    Leg_2.add_attribute("SecTyp", "COFO"); // 1
    Leg_2_set.insert("COFO");
    Leg_2.add_attribute("SecSubTyp", "LegSecuritySubType_t_1485034964"); // 1
    Leg_2_set.insert("LegSecuritySubType_t_1485034964");
    Leg_2.add_attribute("MMY", "1508878711"); // 1
    Leg_2_set.insert("1508878711");
    Leg_2.add_attribute("Mat", "LegMaturityDate_t_1485956669"); // 1
    Leg_2_set.insert("LegMaturityDate_t_1485956669");
    Leg_2.add_attribute("MatTm", "1064270489"); // 1
    Leg_2_set.insert("1064270489");
    Leg_2.add_attribute("CpnPmt", "LegCouponPaymentDate_t_985711155"); // 1
    Leg_2_set.insert("LegCouponPaymentDate_t_985711155");
    Leg_2.add_attribute("Issued", "LegIssueDate_t_669761869"); // 1
    Leg_2_set.insert("LegIssueDate_t_669761869");
    Leg_2.add_attribute("RepoCollSecTyp", "613470971"); // 1
    Leg_2_set.insert("613470971");
    Leg_2.add_attribute("RepoTrm", "1523136816"); // 1
    Leg_2_set.insert("1523136816");
    Leg_2.add_attribute("RepoRt", "17271114.540000"); // 1
    Leg_2_set.insert("17271114.540000");
    Leg_2.add_attribute("Fctr", "12669960.120000"); // 1
    Leg_2_set.insert("12669960.120000");
    Leg_2.add_attribute("CrdRtg", "LegCreditRating_t_1818009875"); // 1
    Leg_2_set.insert("LegCreditRating_t_1818009875");
    Leg_2.add_attribute("Rgstry", "LegInstrRegistry_t_1146055076"); // 1
    Leg_2_set.insert("LegInstrRegistry_t_1146055076");
    Leg_2.add_attribute("Ctry", "2108019167"); // 1
    Leg_2_set.insert("2108019167");
    Leg_2.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_379437961"); // 1
    Leg_2_set.insert("LegStateOrProvinceOfIssue_t_379437961");
    Leg_2.add_attribute("Lcl", "LegLocaleOfIssue_t_1556849062"); // 1
    Leg_2_set.insert("LegLocaleOfIssue_t_1556849062");
    Leg_2.add_attribute("Redeem", "LegRedemptionDate_t_1606379141"); // 1
    Leg_2_set.insert("LegRedemptionDate_t_1606379141");
    Leg_2.add_attribute("Strk", "16283318.720000"); // 1
    Leg_2_set.insert("16283318.720000");
    Leg_2.add_attribute("StrkCcy", "CHF"); // 1
    Leg_2_set.insert("CHF");
    Leg_2.add_attribute("OptA", "1617477302"); // 1
    Leg_2_set.insert("1617477302");
    Leg_2.add_attribute("Cmult", "792599.000000"); // 1
    Leg_2_set.insert("792599.000000");
    Leg_2.add_attribute("MultTyp", "0"); // 1
    Leg_2_set.insert("0");
    Leg_2.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_2_set.insert("0");
    Leg_2.add_attribute("UOM", "Bu"); // 1
    Leg_2_set.insert("Bu");
    Leg_2.add_attribute("UOMQty", "7097450.970000"); // 1
    Leg_2_set.insert("7097450.970000");
    Leg_2.add_attribute("PxUOM", "USD"); // 1
    Leg_2_set.insert("USD");
    Leg_2.add_attribute("PxUOMQty", "20462323.950000"); // 1
    Leg_2_set.insert("20462323.950000");
    Leg_2.add_attribute("TmUnit", "D"); // 1
    Leg_2_set.insert("D");
    Leg_2.add_attribute("ExerStyle", "2"); // 1
    Leg_2_set.insert("2");
    Leg_2.add_attribute("CpnRt", "1040240.320000"); // 1
    Leg_2_set.insert("1040240.320000");
    Leg_2.add_attribute("Exch", "LegSecurityExchange_t_1850213446"); // 1
    Leg_2_set.insert("LegSecurityExchange_t_1850213446");
    Leg_2.add_attribute("Issr", "LegIssuer_t_1297151042"); // 1
    Leg_2_set.insert("LegIssuer_t_1297151042");
    Leg_2.add_attribute("EncLegIssrLen", "1612902743"); // 1
    Leg_2_set.insert("1612902743");
    Leg_2.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1188686467"); // 1
    Leg_2_set.insert("EncodedLegIssuer_t_1188686467");
    Leg_2.add_attribute("Desc", "LegSecurityDesc_t_213937883"); // 1
    Leg_2_set.insert("LegSecurityDesc_t_213937883");
    Leg_2.add_attribute("EncLegSecDescLen", "451130250"); // 1
    Leg_2_set.insert("451130250");
    Leg_2.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1858448337"); // 1
    Leg_2_set.insert("EncodedLegSecurityDesc_t_1858448337");
    Leg_2.add_attribute("RatioQty", "8274088.550000"); // 1
    Leg_2_set.insert("8274088.550000");
    Leg_2.add_attribute("Side", "B"); // 1
    Leg_2_set.insert("B");
    Leg_2.add_attribute("Ccy", "CAN"); // 1
    Leg_2_set.insert("CAN");
    Leg_2.add_attribute("Pool", "LegPool_t_1644793294"); // 1
    Leg_2_set.insert("LegPool_t_1644793294");
    Leg_2.add_attribute("Dated", "LegDatedDate_t_436647571"); // 1
    Leg_2_set.insert("LegDatedDate_t_436647571");
    Leg_2.add_attribute("CSetMo", "2054940386"); // 1
    Leg_2_set.insert("2054940386");
    Leg_2.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2024231255"); // 1
    Leg_2_set.insert("LegInterestAccrualDate_t_2024231255");
    Leg_2.add_attribute("PutCall", "1993496633"); // 1
    Leg_2_set.insert("1993496633");
    Leg_2.add_attribute("LegOptionRatio", "15138358.800000"); // 1
    Leg_2_set.insert("15138358.800000");
    Leg_2.add_attribute("Px", "15050794.790000"); // 1
    Leg_2_set.insert("15050794.790000");
    all_values.push_back(Leg_2_set);
    all_compo_names.insert("Leg_2_set");

    {
      xml_element LegAID_2{"LegAID"};
      multiset<string> LegAID_2_set;
      LegAID_2.add_attribute("SecAltID", "LegSecurityAltID_t_263806415"); // 2
      LegAID_2_set.insert("LegSecurityAltID_t_263806415");
      LegAID_2.add_attribute("SecAltIDSrc", "E"); // 2
      LegAID_2_set.insert("E");
      all_values.push_back(LegAID_2_set);
      all_compo_names.insert("LegAID_2_set");

      Leg_2.add_element(LegAID_2);
    }
    elt.add_element(Leg_2);
  } // end Leg
  { // Leg
    xml_element Leg_3{"Leg"};
    multiset<string> Leg_3_set;
    Leg_3.add_attribute("Sym", "LegSymbol_t_975073134"); // 1
    Leg_3_set.insert("LegSymbol_t_975073134");
    Leg_3.add_attribute("Sfx", "WI"); // 1
    Leg_3_set.insert("WI");
    Leg_3.add_attribute("ID", "LegSecurityID_t_1043158153"); // 1
    Leg_3_set.insert("LegSecurityID_t_1043158153");
    Leg_3.add_attribute("Src", "A"); // 1
    Leg_3_set.insert("A");
    Leg_3.add_attribute("Prod", "3"); // 1
    Leg_3_set.insert("3");
    Leg_3.add_attribute("CFI", "LegCFICode_t_1752903251"); // 1
    Leg_3_set.insert("LegCFICode_t_1752903251");
    Leg_3.add_attribute("SecTyp", "TAN"); // 1
    Leg_3_set.insert("TAN");
    Leg_3.add_attribute("SecSubTyp", "LegSecuritySubType_t_1860769710"); // 1
    Leg_3_set.insert("LegSecuritySubType_t_1860769710");
    Leg_3.add_attribute("MMY", "125101496"); // 1
    Leg_3_set.insert("125101496");
    Leg_3.add_attribute("Mat", "LegMaturityDate_t_1599105436"); // 1
    Leg_3_set.insert("LegMaturityDate_t_1599105436");
    Leg_3.add_attribute("MatTm", "1964793742"); // 1
    Leg_3_set.insert("1964793742");
    Leg_3.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1975314942"); // 1
    Leg_3_set.insert("LegCouponPaymentDate_t_1975314942");
    Leg_3.add_attribute("Issued", "LegIssueDate_t_748772830"); // 1
    Leg_3_set.insert("LegIssueDate_t_748772830");
    Leg_3.add_attribute("RepoCollSecTyp", "1430212837"); // 1
    Leg_3_set.insert("1430212837");
    Leg_3.add_attribute("RepoTrm", "1016517762"); // 1
    Leg_3_set.insert("1016517762");
    Leg_3.add_attribute("RepoRt", "9627107.140000"); // 1
    Leg_3_set.insert("9627107.140000");
    Leg_3.add_attribute("Fctr", "18813430.880000"); // 1
    Leg_3_set.insert("18813430.880000");
    Leg_3.add_attribute("CrdRtg", "LegCreditRating_t_727482451"); // 1
    Leg_3_set.insert("LegCreditRating_t_727482451");
    Leg_3.add_attribute("Rgstry", "LegInstrRegistry_t_1790119569"); // 1
    Leg_3_set.insert("LegInstrRegistry_t_1790119569");
    Leg_3.add_attribute("Ctry", "1708126506"); // 1
    Leg_3_set.insert("1708126506");
    Leg_3.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_18074946"); // 1
    Leg_3_set.insert("LegStateOrProvinceOfIssue_t_18074946");
    Leg_3.add_attribute("Lcl", "LegLocaleOfIssue_t_1737040788"); // 1
    Leg_3_set.insert("LegLocaleOfIssue_t_1737040788");
    Leg_3.add_attribute("Redeem", "LegRedemptionDate_t_1205436152"); // 1
    Leg_3_set.insert("LegRedemptionDate_t_1205436152");
    Leg_3.add_attribute("Strk", "4547225.170000"); // 1
    Leg_3_set.insert("4547225.170000");
    Leg_3.add_attribute("StrkCcy", "CAN"); // 1
    Leg_3_set.insert("CAN");
    Leg_3.add_attribute("OptA", "300735502"); // 1
    Leg_3_set.insert("300735502");
    Leg_3.add_attribute("Cmult", "10108497.580000"); // 1
    Leg_3_set.insert("10108497.580000");
    Leg_3.add_attribute("MultTyp", "0"); // 1
    Leg_3_set.insert("0");
    Leg_3.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_3_set.insert("2");
    Leg_3.add_attribute("UOM", "Bcf"); // 1
    Leg_3_set.insert("Bcf");
    Leg_3.add_attribute("UOMQty", "14148527.250000"); // 1
    Leg_3_set.insert("14148527.250000");
    Leg_3.add_attribute("PxUOM", "Bu"); // 1
    Leg_3_set.insert("Bu");
    Leg_3.add_attribute("PxUOMQty", "887214.350000"); // 1
    Leg_3_set.insert("887214.350000");
    Leg_3.add_attribute("TmUnit", "Mo"); // 1
    Leg_3_set.insert("Mo");
    Leg_3.add_attribute("ExerStyle", "1"); // 1
    Leg_3_set.insert("1");
    Leg_3.add_attribute("CpnRt", "18416246.860000"); // 1
    Leg_3_set.insert("18416246.860000");
    Leg_3.add_attribute("Exch", "LegSecurityExchange_t_1468628697"); // 1
    Leg_3_set.insert("LegSecurityExchange_t_1468628697");
    Leg_3.add_attribute("Issr", "LegIssuer_t_435431610"); // 1
    Leg_3_set.insert("LegIssuer_t_435431610");
    Leg_3.add_attribute("EncLegIssrLen", "1966726183"); // 1
    Leg_3_set.insert("1966726183");
    Leg_3.add_attribute("EncLegIssr", "EncodedLegIssuer_t_920250485"); // 1
    Leg_3_set.insert("EncodedLegIssuer_t_920250485");
    Leg_3.add_attribute("Desc", "LegSecurityDesc_t_252741704"); // 1
    Leg_3_set.insert("LegSecurityDesc_t_252741704");
    Leg_3.add_attribute("EncLegSecDescLen", "1794557477"); // 1
    Leg_3_set.insert("1794557477");
    Leg_3.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1669023316"); // 1
    Leg_3_set.insert("EncodedLegSecurityDesc_t_1669023316");
    Leg_3.add_attribute("RatioQty", "16829545.420000"); // 1
    Leg_3_set.insert("16829545.420000");
    Leg_3.add_attribute("Side", "8"); // 1
    Leg_3_set.insert("8");
    Leg_3.add_attribute("Ccy", "JPY"); // 1
    Leg_3_set.insert("JPY");
    Leg_3.add_attribute("Pool", "LegPool_t_1391074042"); // 1
    Leg_3_set.insert("LegPool_t_1391074042");
    Leg_3.add_attribute("Dated", "LegDatedDate_t_126886303"); // 1
    Leg_3_set.insert("LegDatedDate_t_126886303");
    Leg_3.add_attribute("CSetMo", "977456840"); // 1
    Leg_3_set.insert("977456840");
    Leg_3.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1409148988"); // 1
    Leg_3_set.insert("LegInterestAccrualDate_t_1409148988");
    Leg_3.add_attribute("PutCall", "1863927091"); // 1
    Leg_3_set.insert("1863927091");
    Leg_3.add_attribute("LegOptionRatio", "354093.450000"); // 1
    Leg_3_set.insert("354093.450000");
    Leg_3.add_attribute("Px", "18638715.050000"); // 1
    Leg_3_set.insert("18638715.050000");
    all_values.push_back(Leg_3_set);
    all_compo_names.insert("Leg_3_set");

    {
      xml_element LegAID_3{"LegAID"};
      multiset<string> LegAID_3_set;
      LegAID_3.add_attribute("SecAltID", "LegSecurityAltID_t_1360940969"); // 2
      LegAID_3_set.insert("LegSecurityAltID_t_1360940969");
      LegAID_3.add_attribute("SecAltIDSrc", "D"); // 2
      LegAID_3_set.insert("D");
      all_values.push_back(LegAID_3_set);
      all_compo_names.insert("LegAID_3_set");

      Leg_3.add_element(LegAID_3);
    }
    elt.add_element(Leg_3);
  } // end Leg
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_0{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_0_set;
    SprdBnchmkCurve_0.add_attribute("Spread", "171233.590000"); // 1
    SprdBnchmkCurve_0_set.insert("171233.590000");
    SprdBnchmkCurve_0.add_attribute("Ccy", "CAN"); // 1
    SprdBnchmkCurve_0_set.insert("CAN");
    SprdBnchmkCurve_0.add_attribute("Name", "LIBID"); // 1
    SprdBnchmkCurve_0_set.insert("LIBID");
    SprdBnchmkCurve_0.add_attribute("Point", "BenchmarkCurvePoint_t_1417354010"); // 1
    SprdBnchmkCurve_0_set.insert("BenchmarkCurvePoint_t_1417354010");
    SprdBnchmkCurve_0.add_attribute("Px", "8247417.720000"); // 1
    SprdBnchmkCurve_0_set.insert("8247417.720000");
    SprdBnchmkCurve_0.add_attribute("PxTyp", "2"); // 1
    SprdBnchmkCurve_0_set.insert("2");
    SprdBnchmkCurve_0.add_attribute("SecID", "BenchmarkSecurityID_t_1506075445"); // 1
    SprdBnchmkCurve_0_set.insert("BenchmarkSecurityID_t_1506075445");
    SprdBnchmkCurve_0.add_attribute("SecIDSrc", "6"); // 1
    SprdBnchmkCurve_0_set.insert("6");
    all_values.push_back(SprdBnchmkCurve_0_set);
    all_compo_names.insert("SprdBnchmkCurve_0_set");

    elt.add_element(SprdBnchmkCurve_0);
  } // end SprdBnchmkCurve
  { // Pty
    xml_element Pty_11{"Pty"};
    multiset<string> Pty_11_set;
    Pty_11.add_attribute("ID", "PartyID_t_1200216484"); // 1
    Pty_11_set.insert("PartyID_t_1200216484");
    Pty_11.add_attribute("Src", "3"); // 1
    Pty_11_set.insert("3");
    Pty_11.add_attribute("R", "41"); // 1
    Pty_11_set.insert("41");
    all_values.push_back(Pty_11_set);
    all_compo_names.insert("Pty_11_set");

    {
      xml_element Sub_11{"Sub"};
      multiset<string> Sub_11_set;
      Sub_11.add_attribute("ID", "PartySubID_t_1019459019"); // 2
      Sub_11_set.insert("PartySubID_t_1019459019");
      Sub_11.add_attribute("Typ", "2"); // 2
      Sub_11_set.insert("2");
      all_values.push_back(Sub_11_set);
      all_compo_names.insert("Sub_11_set");

      Pty_11.add_element(Sub_11);
    }
    elt.add_element(Pty_11);
  } // end Pty
  { // Pty
    xml_element Pty_12{"Pty"};
    multiset<string> Pty_12_set;
    Pty_12.add_attribute("ID", "PartyID_t_752108723"); // 1
    Pty_12_set.insert("PartyID_t_752108723");
    Pty_12.add_attribute("Src", "D"); // 1
    Pty_12_set.insert("D");
    Pty_12.add_attribute("R", "52"); // 1
    Pty_12_set.insert("52");
    all_values.push_back(Pty_12_set);
    all_compo_names.insert("Pty_12_set");

    {
      xml_element Sub_12{"Sub"};
      multiset<string> Sub_12_set;
      Sub_12.add_attribute("ID", "PartySubID_t_287579617"); // 2
      Sub_12_set.insert("PartySubID_t_287579617");
      Sub_12.add_attribute("Typ", "16"); // 2
      Sub_12_set.insert("16");
      all_values.push_back(Sub_12_set);
      all_compo_names.insert("Sub_12_set");

      Pty_12.add_element(Sub_12);
    }
    elt.add_element(Pty_12);
  } // end Pty
  { // Pty
    xml_element Pty_13{"Pty"};
    multiset<string> Pty_13_set;
    Pty_13.add_attribute("ID", "PartyID_t_753566695"); // 1
    Pty_13_set.insert("PartyID_t_753566695");
    Pty_13.add_attribute("Src", "6"); // 1
    Pty_13_set.insert("6");
    Pty_13.add_attribute("R", "45"); // 1
    Pty_13_set.insert("45");
    all_values.push_back(Pty_13_set);
    all_compo_names.insert("Pty_13_set");

    {
      xml_element Sub_13{"Sub"};
      multiset<string> Sub_13_set;
      Sub_13.add_attribute("ID", "PartySubID_t_880452998"); // 2
      Sub_13_set.insert("PartySubID_t_880452998");
      Sub_13.add_attribute("Typ", "11"); // 2
      Sub_13_set.insert("11");
      all_values.push_back(Sub_13_set);
      all_compo_names.insert("Sub_13_set");

      Pty_13.add_element(Sub_13);
    }
    elt.add_element(Pty_13);
  } // end Pty
  { // Stip
    xml_element Stip_3{"Stip"};
    multiset<string> Stip_3_set;
    Stip_3.add_attribute("Typ", "PURPOSE"); // 1
    Stip_3_set.insert("PURPOSE");
    Stip_3.add_attribute("Val", "StipulationValue_t_569776136"); // 1
    Stip_3_set.insert("StipulationValue_t_569776136");
    all_values.push_back(Stip_3_set);
    all_compo_names.insert("Stip_3_set");

    elt.add_element(Stip_3);
  } // end Stip
  { // Stip
    xml_element Stip_4{"Stip"};
    multiset<string> Stip_4_set;
    Stip_4.add_attribute("Typ", "ABS"); // 1
    Stip_4_set.insert("ABS");
    Stip_4.add_attribute("Val", "StipulationValue_t_1957837411"); // 1
    Stip_4_set.insert("StipulationValue_t_1957837411");
    all_values.push_back(Stip_4_set);
    all_compo_names.insert("Stip_4_set");

    elt.add_element(Stip_4);
  } // end Stip
  { // Stip
    xml_element Stip_5{"Stip"};
    multiset<string> Stip_5_set;
    Stip_5.add_attribute("Typ", "PURPOSE"); // 1
    Stip_5_set.insert("PURPOSE");
    Stip_5.add_attribute("Val", "StipulationValue_t_1716375040"); // 1
    Stip_5_set.insert("StipulationValue_t_1716375040");
    all_values.push_back(Stip_5_set);
    all_compo_names.insert("Stip_5_set");

    elt.add_element(Stip_5);
  } // end Stip
  { // Yield
    xml_element Yield_0{"Yield"};
    multiset<string> Yield_0_set;
    Yield_0.add_attribute("Typ", "MARK"); // 1
    Yield_0_set.insert("MARK");
    Yield_0.add_attribute("Yld", "10972582.880000"); // 1
    Yield_0_set.insert("10972582.880000");
    Yield_0.add_attribute("CalcDt", "YieldCalcDate_t_150556668"); // 1
    Yield_0_set.insert("YieldCalcDate_t_150556668");
    Yield_0.add_attribute("RedDt", "YieldRedemptionDate_t_1452014853"); // 1
    Yield_0_set.insert("YieldRedemptionDate_t_1452014853");
    Yield_0.add_attribute("RedPx", "19220000.610000"); // 1
    Yield_0_set.insert("19220000.610000");
    Yield_0.add_attribute("RedPxTyp", "8"); // 1
    Yield_0_set.insert("8");
    all_values.push_back(Yield_0_set);
    all_compo_names.insert("Yield_0_set");

    elt.add_element(Yield_0);
  } // end Yield
  { // Amt
    xml_element Amt_0{"Amt"};
    multiset<string> Amt_0_set;
    Amt_0.add_attribute("Typ", "CASH"); // 1
    Amt_0_set.insert("CASH");
    Amt_0.add_attribute("Amt", "PosAmt_t_1703765586"); // 1
    Amt_0_set.insert("PosAmt_t_1703765586");
    Amt_0.add_attribute("Ccy", "PositionCurrency_t_2010823134"); // 1
    Amt_0_set.insert("PositionCurrency_t_2010823134");
    all_values.push_back(Amt_0_set);
    all_compo_names.insert("Amt_0_set");

    elt.add_element(Amt_0);
  } // end Amt
  { // Amt
    xml_element Amt_1{"Amt"};
    multiset<string> Amt_1_set;
    Amt_1.add_attribute("Typ", "CASH"); // 1
    Amt_1_set.insert("CASH");
    Amt_1.add_attribute("Amt", "PosAmt_t_55648956"); // 1
    Amt_1_set.insert("PosAmt_t_55648956");
    Amt_1.add_attribute("Ccy", "PositionCurrency_t_882798505"); // 1
    Amt_1_set.insert("PositionCurrency_t_882798505");
    all_values.push_back(Amt_1_set);
    all_compo_names.insert("Amt_1_set");

    elt.add_element(Amt_1);
  } // end Amt
  { // Amt
    xml_element Amt_2{"Amt"};
    multiset<string> Amt_2_set;
    Amt_2.add_attribute("Typ", "COLAT"); // 1
    Amt_2_set.insert("COLAT");
    Amt_2.add_attribute("Amt", "PosAmt_t_807757679"); // 1
    Amt_2_set.insert("PosAmt_t_807757679");
    Amt_2.add_attribute("Ccy", "PositionCurrency_t_1549331354"); // 1
    Amt_2_set.insert("PositionCurrency_t_1549331354");
    all_values.push_back(Amt_2_set);
    all_compo_names.insert("Amt_2_set");

    elt.add_element(Amt_2);
  } // end Amt
  { // Alloc
    xml_element Alloc_0{"Alloc"};
    multiset<string> Alloc_0_set;
    Alloc_0.add_attribute("Acct", "AllocAccount_t_1095337296"); // 1
    Alloc_0_set.insert("AllocAccount_t_1095337296");
    Alloc_0.add_attribute("ActIDSrc", "5"); // 1
    Alloc_0_set.insert("5");
    Alloc_0.add_attribute("MtchStat", "2"); // 1
    Alloc_0_set.insert("2");
    Alloc_0.add_attribute("Px", "6522472.470000"); // 1
    Alloc_0_set.insert("6522472.470000");
    Alloc_0.add_attribute("Qty", "13056869.800000"); // 1
    Alloc_0_set.insert("13056869.800000");
    Alloc_0.add_attribute("IndAllocID", "IndividualAllocID_t_612052689"); // 1
    Alloc_0_set.insert("IndividualAllocID_t_612052689");
    Alloc_0.add_attribute("ProcCode", "2"); // 1
    Alloc_0_set.insert("2");
    Alloc_0.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_1141067155"); // 1
    Alloc_0_set.insert("SecondaryIndividualAllocID_t_1141067155");
    Alloc_0.add_attribute("Meth", "2"); // 1
    Alloc_0_set.insert("2");
    Alloc_0.add_attribute("CustCpcty", "AllocCustomerCapacity_t_1756390175"); // 1
    Alloc_0_set.insert("AllocCustomerCapacity_t_1756390175");
    Alloc_0.add_attribute("AllocPosEfct", "O"); // 1
    Alloc_0_set.insert("O");
    Alloc_0.add_attribute("Typ", "2"); // 1
    Alloc_0_set.insert("2");
    Alloc_0.add_attribute("NotifyBrkrOfCredit", "N"); // 1
    Alloc_0_set.insert("N");
    Alloc_0.add_attribute("HandlInst", "2"); // 1
    Alloc_0_set.insert("2");
    Alloc_0.add_attribute("Txt", "AllocText_t_1053963736"); // 1
    Alloc_0_set.insert("AllocText_t_1053963736");
    Alloc_0.add_attribute("EncAllocTextLen", "246050409"); // 1
    Alloc_0_set.insert("246050409");
    Alloc_0.add_attribute("EncAllocText", "EncodedAllocText_t_412283248"); // 1
    Alloc_0_set.insert("EncodedAllocText_t_412283248");
    Alloc_0.add_attribute("AvgPx", "3584949.410000"); // 1
    Alloc_0_set.insert("3584949.410000");
    Alloc_0.add_attribute("NetMny", "AllocNetMoney_t_20566822"); // 1
    Alloc_0_set.insert("AllocNetMoney_t_20566822");
    Alloc_0.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_2052113426"); // 1
    Alloc_0_set.insert("SettlCurrAmt_t_2052113426");
    Alloc_0.add_attribute("SettlCcyAmt", "AllocSettlCurrAmt_t_1169101592"); // 1
    Alloc_0_set.insert("AllocSettlCurrAmt_t_1169101592");
    Alloc_0.add_attribute("SettlCcy", "USD"); // 1
    Alloc_0_set.insert("USD");
    Alloc_0.add_attribute("AllocSettlCcy", "JPY"); // 1
    Alloc_0_set.insert("JPY");
    Alloc_0.add_attribute("SettlCurrFxRt", "16640443.200000"); // 1
    Alloc_0_set.insert("16640443.200000");
    Alloc_0.add_attribute("SettlCurrFxRtCalc", "M"); // 1
    Alloc_0_set.insert("M");
    Alloc_0.add_attribute("AcrdIntAmt", "AllocAccruedInterestAmt_t_1266088359"); // 1
    Alloc_0_set.insert("AllocAccruedInterestAmt_t_1266088359");
    Alloc_0.add_attribute("IntAtMat", "AllocInterestAtMaturity_t_324318352"); // 1
    Alloc_0_set.insert("AllocInterestAtMaturity_t_324318352");
    Alloc_0.add_attribute("ClrFeeInd", "E"); // 1
    Alloc_0_set.insert("E");
    Alloc_0.add_attribute("SettlInstTyp", "4"); // 1
    Alloc_0_set.insert("4");
    all_values.push_back(Alloc_0_set);
    all_compo_names.insert("Alloc_0_set");

    {
      xml_element Pty_14{"Pty"};
      multiset<string> Pty_14_set;
      Pty_14.add_attribute("ID", "NestedPartyID_t_1419655648"); // 2
      Pty_14_set.insert("NestedPartyID_t_1419655648");
      Pty_14.add_attribute("Src", "7"); // 2
      Pty_14_set.insert("7");
      Pty_14.add_attribute("R", "37"); // 2
      Pty_14_set.insert("37");
      all_values.push_back(Pty_14_set);
      all_compo_names.insert("Pty_14_set");

      {
        xml_element Sub_14{"Sub"};
        multiset<string> Sub_14_set;
        Sub_14.add_attribute("ID", "NestedPartySubID_t_2071902896"); // 3
        Sub_14_set.insert("NestedPartySubID_t_2071902896");
        Sub_14.add_attribute("Typ", "17"); // 3
        Sub_14_set.insert("17");
        all_values.push_back(Sub_14_set);
        all_compo_names.insert("Sub_14_set");

        Pty_14.add_element(Sub_14);
      }
      Alloc_0.add_element(Pty_14);
    }
    {
      xml_element Comm_0{"Comm"};
      multiset<string> Comm_0_set;
      Comm_0.add_attribute("Comm", "Commission_t_587773734"); // 2
      Comm_0_set.insert("Commission_t_587773734");
      Comm_0.add_attribute("CommTyp", "4"); // 2
      Comm_0_set.insert("4");
      Comm_0.add_attribute("Ccy", "JPY"); // 2
      Comm_0_set.insert("JPY");
      Comm_0.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_0_set.insert("N");
      all_values.push_back(Comm_0_set);
      all_compo_names.insert("Comm_0_set");

      Alloc_0.add_element(Comm_0);
    }
    {
      xml_element MiscFees_0{"MiscFees"};
      multiset<string> MiscFees_0_set;
      MiscFees_0.add_attribute("Amt", "MiscFeeAmt_t_893681464"); // 2
      MiscFees_0_set.insert("MiscFeeAmt_t_893681464");
      MiscFees_0.add_attribute("Curr", "CHF"); // 2
      MiscFees_0_set.insert("CHF");
      MiscFees_0.add_attribute("Typ", "1"); // 2
      MiscFees_0_set.insert("1");
      MiscFees_0.add_attribute("Basis", "1"); // 2
      MiscFees_0_set.insert("1");
      all_values.push_back(MiscFees_0_set);
      all_compo_names.insert("MiscFees_0_set");

      Alloc_0.add_element(MiscFees_0);
    }
    {
      xml_element ClrInst_0{"ClrInst"};
      multiset<string> ClrInst_0_set;
      ClrInst_0.add_attribute("ClrngInstrctn", "8"); // 2
      ClrInst_0_set.insert("8");
      all_values.push_back(ClrInst_0_set);
      all_compo_names.insert("ClrInst_0_set");

      Alloc_0.add_element(ClrInst_0);
    }
    {
      xml_element SetInstr_0{"SetInstr"};
      multiset<string> SetInstr_0_set;
      SetInstr_0.add_attribute("DlvryTyp", "0"); // 2
      SetInstr_0_set.insert("0");
      SetInstr_0.add_attribute("StandInstDbTyp", "3"); // 2
      SetInstr_0_set.insert("3");
      SetInstr_0.add_attribute("StandInstDbName", "StandInstDbName_t_135349166"); // 2
      SetInstr_0_set.insert("StandInstDbName_t_135349166");
      SetInstr_0.add_attribute("StandInstDbID", "StandInstDbID_t_1472321070"); // 2
      SetInstr_0_set.insert("StandInstDbID_t_1472321070");
      all_values.push_back(SetInstr_0_set);
      all_compo_names.insert("SetInstr_0_set");

      {
        xml_element DlvInst_0{"DlvInst"};
        multiset<string> DlvInst_0_set;
        DlvInst_0.add_attribute("InstSrc", "2"); // 3
        DlvInst_0_set.insert("2");
        DlvInst_0.add_attribute("InstTyp", "C"); // 3
        DlvInst_0_set.insert("C");
        all_values.push_back(DlvInst_0_set);
        all_compo_names.insert("DlvInst_0_set");

        {
          xml_element Pty_15{"Pty"};
          multiset<string> Pty_15_set;
          Pty_15.add_attribute("ID", "SettlPartyID_t_933232786"); // 4
          Pty_15_set.insert("SettlPartyID_t_933232786");
          Pty_15.add_attribute("Src", "H"); // 4
          Pty_15_set.insert("H");
          Pty_15.add_attribute("R", "30"); // 4
          Pty_15_set.insert("30");
          all_values.push_back(Pty_15_set);
          all_compo_names.insert("Pty_15_set");

          {
            xml_element Sub_15{"Sub"};
            multiset<string> Sub_15_set;
            Sub_15.add_attribute("ID", "SettlPartySubID_t_449793459"); // 5
            Sub_15_set.insert("SettlPartySubID_t_449793459");
            Sub_15.add_attribute("Typ", "16"); // 5
            Sub_15_set.insert("16");
            all_values.push_back(Sub_15_set);
            all_compo_names.insert("Sub_15_set");

            Pty_15.add_element(Sub_15);
          }
          DlvInst_0.add_element(Pty_15);
        }
        SetInstr_0.add_element(DlvInst_0);
      }
      Alloc_0.add_element(SetInstr_0);
    }
    elt.add_element(Alloc_0);
  } // end Alloc
  { // Alloc
    xml_element Alloc_1{"Alloc"};
    multiset<string> Alloc_1_set;
    Alloc_1.add_attribute("Acct", "AllocAccount_t_2112789901"); // 1
    Alloc_1_set.insert("AllocAccount_t_2112789901");
    Alloc_1.add_attribute("ActIDSrc", "2"); // 1
    Alloc_1_set.insert("2");
    Alloc_1.add_attribute("MtchStat", "1"); // 1
    Alloc_1_set.insert("1");
    Alloc_1.add_attribute("Px", "2094276.080000"); // 1
    Alloc_1_set.insert("2094276.080000");
    Alloc_1.add_attribute("Qty", "462838.110000"); // 1
    Alloc_1_set.insert("462838.110000");
    Alloc_1.add_attribute("IndAllocID", "IndividualAllocID_t_973995176"); // 1
    Alloc_1_set.insert("IndividualAllocID_t_973995176");
    Alloc_1.add_attribute("ProcCode", "4"); // 1
    Alloc_1_set.insert("4");
    Alloc_1.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_2118186707"); // 1
    Alloc_1_set.insert("SecondaryIndividualAllocID_t_2118186707");
    Alloc_1.add_attribute("Meth", "1"); // 1
    Alloc_1_set.insert("1");
    Alloc_1.add_attribute("CustCpcty", "AllocCustomerCapacity_t_772922387"); // 1
    Alloc_1_set.insert("AllocCustomerCapacity_t_772922387");
    Alloc_1.add_attribute("AllocPosEfct", "R"); // 1
    Alloc_1_set.insert("R");
    Alloc_1.add_attribute("Typ", "2"); // 1
    Alloc_1_set.insert("2");
    Alloc_1.add_attribute("NotifyBrkrOfCredit", "Y"); // 1
    Alloc_1_set.insert("Y");
    Alloc_1.add_attribute("HandlInst", "2"); // 1
    Alloc_1_set.insert("2");
    Alloc_1.add_attribute("Txt", "AllocText_t_1128302037"); // 1
    Alloc_1_set.insert("AllocText_t_1128302037");
    Alloc_1.add_attribute("EncAllocTextLen", "1090703713"); // 1
    Alloc_1_set.insert("1090703713");
    Alloc_1.add_attribute("EncAllocText", "EncodedAllocText_t_1670408096"); // 1
    Alloc_1_set.insert("EncodedAllocText_t_1670408096");
    Alloc_1.add_attribute("AvgPx", "1362264.330000"); // 1
    Alloc_1_set.insert("1362264.330000");
    Alloc_1.add_attribute("NetMny", "AllocNetMoney_t_665725912"); // 1
    Alloc_1_set.insert("AllocNetMoney_t_665725912");
    Alloc_1.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1785190440"); // 1
    Alloc_1_set.insert("SettlCurrAmt_t_1785190440");
    Alloc_1.add_attribute("SettlCcyAmt", "AllocSettlCurrAmt_t_1703917725"); // 1
    Alloc_1_set.insert("AllocSettlCurrAmt_t_1703917725");
    Alloc_1.add_attribute("SettlCcy", "GBP"); // 1
    Alloc_1_set.insert("GBP");
    Alloc_1.add_attribute("AllocSettlCcy", "JPY"); // 1
    Alloc_1_set.insert("JPY");
    Alloc_1.add_attribute("SettlCurrFxRt", "2098694.700000"); // 1
    Alloc_1_set.insert("2098694.700000");
    Alloc_1.add_attribute("SettlCurrFxRtCalc", "M"); // 1
    Alloc_1_set.insert("M");
    Alloc_1.add_attribute("AcrdIntAmt", "AllocAccruedInterestAmt_t_1689437946"); // 1
    Alloc_1_set.insert("AllocAccruedInterestAmt_t_1689437946");
    Alloc_1.add_attribute("IntAtMat", "AllocInterestAtMaturity_t_1056571012"); // 1
    Alloc_1_set.insert("AllocInterestAtMaturity_t_1056571012");
    Alloc_1.add_attribute("ClrFeeInd", "9"); // 1
    Alloc_1_set.insert("9");
    Alloc_1.add_attribute("SettlInstTyp", "0"); // 1
    Alloc_1_set.insert("0");
    all_values.push_back(Alloc_1_set);
    all_compo_names.insert("Alloc_1_set");

    {
      xml_element Pty_16{"Pty"};
      multiset<string> Pty_16_set;
      Pty_16.add_attribute("ID", "NestedPartyID_t_1021877265"); // 2
      Pty_16_set.insert("NestedPartyID_t_1021877265");
      Pty_16.add_attribute("Src", "F"); // 2
      Pty_16_set.insert("F");
      Pty_16.add_attribute("R", "37"); // 2
      Pty_16_set.insert("37");
      all_values.push_back(Pty_16_set);
      all_compo_names.insert("Pty_16_set");

      {
        xml_element Sub_16{"Sub"};
        multiset<string> Sub_16_set;
        Sub_16.add_attribute("ID", "NestedPartySubID_t_1231304873"); // 3
        Sub_16_set.insert("NestedPartySubID_t_1231304873");
        Sub_16.add_attribute("Typ", "1"); // 3
        Sub_16_set.insert("1");
        all_values.push_back(Sub_16_set);
        all_compo_names.insert("Sub_16_set");

        Pty_16.add_element(Sub_16);
      }
      Alloc_1.add_element(Pty_16);
    }
    {
      xml_element Comm_1{"Comm"};
      multiset<string> Comm_1_set;
      Comm_1.add_attribute("Comm", "Commission_t_1343700962"); // 2
      Comm_1_set.insert("Commission_t_1343700962");
      Comm_1.add_attribute("CommTyp", "5"); // 2
      Comm_1_set.insert("5");
      Comm_1.add_attribute("Ccy", "CAN"); // 2
      Comm_1_set.insert("CAN");
      Comm_1.add_attribute("FundRenewWaiv", "Y"); // 2
      Comm_1_set.insert("Y");
      all_values.push_back(Comm_1_set);
      all_compo_names.insert("Comm_1_set");

      Alloc_1.add_element(Comm_1);
    }
    {
      xml_element MiscFees_1{"MiscFees"};
      multiset<string> MiscFees_1_set;
      MiscFees_1.add_attribute("Amt", "MiscFeeAmt_t_2137132774"); // 2
      MiscFees_1_set.insert("MiscFeeAmt_t_2137132774");
      MiscFees_1.add_attribute("Curr", "CHF"); // 2
      MiscFees_1_set.insert("CHF");
      MiscFees_1.add_attribute("Typ", "12"); // 2
      MiscFees_1_set.insert("12");
      MiscFees_1.add_attribute("Basis", "2"); // 2
      MiscFees_1_set.insert("2");
      all_values.push_back(MiscFees_1_set);
      all_compo_names.insert("MiscFees_1_set");

      Alloc_1.add_element(MiscFees_1);
    }
    {
      xml_element ClrInst_1{"ClrInst"};
      multiset<string> ClrInst_1_set;
      ClrInst_1.add_attribute("ClrngInstrctn", "0"); // 2
      ClrInst_1_set.insert("0");
      all_values.push_back(ClrInst_1_set);
      all_compo_names.insert("ClrInst_1_set");

      Alloc_1.add_element(ClrInst_1);
    }
    {
      xml_element SetInstr_1{"SetInstr"};
      multiset<string> SetInstr_1_set;
      SetInstr_1.add_attribute("DlvryTyp", "3"); // 2
      SetInstr_1_set.insert("3");
      SetInstr_1.add_attribute("StandInstDbTyp", "4"); // 2
      SetInstr_1_set.insert("4");
      SetInstr_1.add_attribute("StandInstDbName", "StandInstDbName_t_72999846"); // 2
      SetInstr_1_set.insert("StandInstDbName_t_72999846");
      SetInstr_1.add_attribute("StandInstDbID", "StandInstDbID_t_951956527"); // 2
      SetInstr_1_set.insert("StandInstDbID_t_951956527");
      all_values.push_back(SetInstr_1_set);
      all_compo_names.insert("SetInstr_1_set");

      {
        xml_element DlvInst_1{"DlvInst"};
        multiset<string> DlvInst_1_set;
        DlvInst_1.add_attribute("InstSrc", "1"); // 3
        DlvInst_1_set.insert("1");
        DlvInst_1.add_attribute("InstTyp", "C"); // 3
        DlvInst_1_set.insert("C");
        all_values.push_back(DlvInst_1_set);
        all_compo_names.insert("DlvInst_1_set");

        {
          xml_element Pty_17{"Pty"};
          multiset<string> Pty_17_set;
          Pty_17.add_attribute("ID", "SettlPartyID_t_725012485"); // 4
          Pty_17_set.insert("SettlPartyID_t_725012485");
          Pty_17.add_attribute("Src", "C"); // 4
          Pty_17_set.insert("C");
          Pty_17.add_attribute("R", "41"); // 4
          Pty_17_set.insert("41");
          all_values.push_back(Pty_17_set);
          all_compo_names.insert("Pty_17_set");

          {
            xml_element Sub_17{"Sub"};
            multiset<string> Sub_17_set;
            Sub_17.add_attribute("ID", "SettlPartySubID_t_934881955"); // 5
            Sub_17_set.insert("SettlPartySubID_t_934881955");
            Sub_17.add_attribute("Typ", "32"); // 5
            Sub_17_set.insert("32");
            all_values.push_back(Sub_17_set);
            all_compo_names.insert("Sub_17_set");

            Pty_17.add_element(Sub_17);
          }
          DlvInst_1.add_element(Pty_17);
        }
        SetInstr_1.add_element(DlvInst_1);
      }
      Alloc_1.add_element(SetInstr_1);
    }
    elt.add_element(Alloc_1);
  } // end Alloc
  { // RtSrc
    xml_element RtSrc_0{"RtSrc"};
    multiset<string> RtSrc_0_set;
    RtSrc_0.add_attribute("RtSrc", "99"); // 1
    RtSrc_0_set.insert("99");
    RtSrc_0.add_attribute("RtSrcTyp", "1"); // 1
    RtSrc_0_set.insert("1");
    RtSrc_0.add_attribute("RefPg", "ReferencePage_t_1213345378"); // 1
    RtSrc_0_set.insert("ReferencePage_t_1213345378");
    all_values.push_back(RtSrc_0_set);
    all_compo_names.insert("RtSrc_0_set");

    elt.add_element(RtSrc_0);
  } // end RtSrc
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
