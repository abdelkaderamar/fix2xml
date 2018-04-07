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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AllocInstrctn" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationInstruction_message_t_0;
  elt.add_attribute("ID", "AllocID_t_1467531105"); // 0
  AllocationInstruction_message_t_0.insert("AllocID_t_1467531105");
  elt.add_attribute("TransTyp", "0"); // 0
  AllocationInstruction_message_t_0.insert("0");
  elt.add_attribute("Typ", "4"); // 0
  AllocationInstruction_message_t_0.insert("4");
  elt.add_attribute("ID2", "SecondaryAllocID_t_618385820"); // 0
  AllocationInstruction_message_t_0.insert("SecondaryAllocID_t_618385820");
  elt.add_attribute("RefID", "RefAllocID_t_993574733"); // 0
  AllocationInstruction_message_t_0.insert("RefAllocID_t_993574733");
  elt.add_attribute("CxlRplcRsn", "1"); // 0
  AllocationInstruction_message_t_0.insert("1");
  elt.add_attribute("ImReqTyp", "4"); // 0
  AllocationInstruction_message_t_0.insert("4");
  elt.add_attribute("LinkID", "AllocLinkID_t_1994802657"); // 0
  AllocationInstruction_message_t_0.insert("AllocLinkID_t_1994802657");
  elt.add_attribute("LinkTyp", "0"); // 0
  AllocationInstruction_message_t_0.insert("0");
  elt.add_attribute("BkngRefID", "BookingRefID_t_2118874548"); // 0
  AllocationInstruction_message_t_0.insert("BookingRefID_t_2118874548");
  elt.add_attribute("NoOrdsTyp", "1"); // 0
  AllocationInstruction_message_t_0.insert("1");
  elt.add_attribute("PrevlyRpted", "Y"); // 0
  AllocationInstruction_message_t_0.insert("Y");
  elt.add_attribute("ReversalInd", "false"); // 0
  AllocationInstruction_message_t_0.insert("false");
  elt.add_attribute("MtchTyp", "AQ"); // 0
  AllocationInstruction_message_t_0.insert("AQ");
  elt.add_attribute("Side", "G"); // 0
  AllocationInstruction_message_t_0.insert("G");
  elt.add_attribute("Qty", "19602657.680000"); // 0
  AllocationInstruction_message_t_0.insert("19602657.680000");
  elt.add_attribute("QtyTyp", "0"); // 0
  AllocationInstruction_message_t_0.insert("0");
  elt.add_attribute("LastMkt", "LastMkt_t_1511316797"); // 0
  AllocationInstruction_message_t_0.insert("LastMkt_t_1511316797");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_1534477882"); // 0
  AllocationInstruction_message_t_0.insert("TradeOriginationDate_t_1534477882");
  elt.add_attribute("SesID", "1"); // 0
  AllocationInstruction_message_t_0.insert("1");
  elt.add_attribute("SesSub", "2"); // 0
  AllocationInstruction_message_t_0.insert("2");
  elt.add_attribute("PxTyp", "9"); // 0
  AllocationInstruction_message_t_0.insert("9");
  elt.add_attribute("AvgPx", "2894768.180000"); // 0
  AllocationInstruction_message_t_0.insert("2894768.180000");
  elt.add_attribute("AvgParPx", "15044091.600000"); // 0
  AllocationInstruction_message_t_0.insert("15044091.600000");
  elt.add_attribute("Ccy", "GBP"); // 0
  AllocationInstruction_message_t_0.insert("GBP");
  elt.add_attribute("AvgPxPrcsn", "1337488868"); // 0
  AllocationInstruction_message_t_0.insert("1337488868");
  elt.add_attribute("TrdDt", "TradeDate_t_511580846"); // 0
  AllocationInstruction_message_t_0.insert("TradeDate_t_511580846");
  elt.add_attribute("TxnTm", "TransactTime_t_397874796"); // 0
  AllocationInstruction_message_t_0.insert("TransactTime_t_397874796");
  elt.add_attribute("SettlTyp", "B"); // 0
  AllocationInstruction_message_t_0.insert("B");
  elt.add_attribute("SettlDt", "SettlDate_t_989484594"); // 0
  AllocationInstruction_message_t_0.insert("SettlDate_t_989484594");
  elt.add_attribute("BkngTyp", "1"); // 0
  AllocationInstruction_message_t_0.insert("1");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_1170519650"); // 0
  AllocationInstruction_message_t_0.insert("GrossTradeAmt_t_1170519650");
  elt.add_attribute("Concession", "Concession_t_1173376277"); // 0
  AllocationInstruction_message_t_0.insert("Concession_t_1173376277");
  elt.add_attribute("TotTakedown", "TotalTakedown_t_336308074"); // 0
  AllocationInstruction_message_t_0.insert("TotalTakedown_t_336308074");
  elt.add_attribute("NetMny", "NetMoney_t_16610736"); // 0
  AllocationInstruction_message_t_0.insert("NetMoney_t_16610736");
  elt.add_attribute("PosEfct", "O"); // 0
  AllocationInstruction_message_t_0.insert("O");
  elt.add_attribute("AutoAcceptInd", "false"); // 0
  AllocationInstruction_message_t_0.insert("false");
  elt.add_attribute("Txt", "Text_t_2011413393"); // 0
  AllocationInstruction_message_t_0.insert("Text_t_2011413393");
  elt.add_attribute("EncTxtLen", "188314848"); // 0
  AllocationInstruction_message_t_0.insert("188314848");
  elt.add_attribute("EncTxt", "EncodedText_t_33614548"); // 0
  AllocationInstruction_message_t_0.insert("EncodedText_t_33614548");
  elt.add_attribute("NumDaysInt", "1008991400"); // 0
  AllocationInstruction_message_t_0.insert("1008991400");
  elt.add_attribute("AcrdIntRt", "11981029.110000"); // 0
  AllocationInstruction_message_t_0.insert("11981029.110000");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_1919486355"); // 0
  AllocationInstruction_message_t_0.insert("AccruedInterestAmt_t_1919486355");
  elt.add_attribute("TotAcrdIntAmt", "TotalAccruedInterestAmt_t_776058036"); // 0
  AllocationInstruction_message_t_0.insert("TotalAccruedInterestAmt_t_776058036");
  elt.add_attribute("IntAtMat", "InterestAtMaturity_t_1057992030"); // 0
  AllocationInstruction_message_t_0.insert("InterestAtMaturity_t_1057992030");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_1732268476"); // 0
  AllocationInstruction_message_t_0.insert("EndAccruedInterestAmt_t_1732268476");
  elt.add_attribute("StartCsh", "StartCash_t_1184816853"); // 0
  AllocationInstruction_message_t_0.insert("StartCash_t_1184816853");
  elt.add_attribute("EndCsh", "EndCash_t_421825180"); // 0
  AllocationInstruction_message_t_0.insert("EndCash_t_421825180");
  elt.add_attribute("LegalCnfm", "N"); // 0
  AllocationInstruction_message_t_0.insert("N");
  elt.add_attribute("TotNoAllocs", "21001621"); // 0
  AllocationInstruction_message_t_0.insert("21001621");
  elt.add_attribute("LastFragment", "Y"); // 0
  AllocationInstruction_message_t_0.insert("Y");
  elt.add_attribute("AvgPxInd", "2"); // 0
  AllocationInstruction_message_t_0.insert("2");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_310478440"); // 0
  AllocationInstruction_message_t_0.insert("ClearingBusinessDate_t_310478440");
  elt.add_attribute("TrdTyp", "17"); // 0
  AllocationInstruction_message_t_0.insert("17");
  elt.add_attribute("TrdSubTyp", "24"); // 0
  AllocationInstruction_message_t_0.insert("24");
  elt.add_attribute("CustCpcty", "3"); // 0
  AllocationInstruction_message_t_0.insert("3");
  elt.add_attribute("InptSrc", "TradeInputSource_t_1446048216"); // 0
  AllocationInstruction_message_t_0.insert("TradeInputSource_t_1446048216");
  elt.add_attribute("MLegRptTyp", "1"); // 0
  AllocationInstruction_message_t_0.insert("1");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_1864424802"); // 0
  AllocationInstruction_message_t_0.insert("MessageEventSource_t_1864424802");
  elt.add_attribute("RndPx", "12740563.110000"); // 0
  AllocationInstruction_message_t_0.insert("12740563.110000");
  all_values.push_back(AllocationInstruction_message_t_0);
  all_compo_names.insert("AllocationInstruction_message_t");

  { // Hdr
    xml_element Hdr_2{"Hdr"};
    multiset<string> Hdr_2_set;
    Hdr_2.add_attribute("SeqNum", "1780483224"); // 1
    Hdr_2_set.insert("1780483224");
    Hdr_2.add_attribute("SID", "SenderCompID_t_1582347056"); // 1
    Hdr_2_set.insert("SenderCompID_t_1582347056");
    Hdr_2.add_attribute("TID", "TargetCompID_t_297092313"); // 1
    Hdr_2_set.insert("TargetCompID_t_297092313");
    Hdr_2.add_attribute("OBID", "OnBehalfOfCompID_t_806375853"); // 1
    Hdr_2_set.insert("OnBehalfOfCompID_t_806375853");
    Hdr_2.add_attribute("D2ID", "DeliverToCompID_t_1918655130"); // 1
    Hdr_2_set.insert("DeliverToCompID_t_1918655130");
    Hdr_2.add_attribute("SSub", "SenderSubID_t_313703049"); // 1
    Hdr_2_set.insert("SenderSubID_t_313703049");
    Hdr_2.add_attribute("SLoc", "SenderLocationID_t_93290133"); // 1
    Hdr_2_set.insert("SenderLocationID_t_93290133");
    Hdr_2.add_attribute("TSub", "TargetSubID_t_1980878778"); // 1
    Hdr_2_set.insert("TargetSubID_t_1980878778");
    Hdr_2.add_attribute("TLoc", "TargetLocationID_t_177632794"); // 1
    Hdr_2_set.insert("TargetLocationID_t_177632794");
    Hdr_2.add_attribute("OBSub", "OnBehalfOfSubID_t_281604981"); // 1
    Hdr_2_set.insert("OnBehalfOfSubID_t_281604981");
    Hdr_2.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2014493326"); // 1
    Hdr_2_set.insert("OnBehalfOfLocationID_t_2014493326");
    Hdr_2.add_attribute("D2Sub", "DeliverToSubID_t_1186624195"); // 1
    Hdr_2_set.insert("DeliverToSubID_t_1186624195");
    Hdr_2.add_attribute("D2Loc", "DeliverToLocationID_t_1479707892"); // 1
    Hdr_2_set.insert("DeliverToLocationID_t_1479707892");
    Hdr_2.add_attribute("PosDup", "Y"); // 1
    Hdr_2_set.insert("Y");
    Hdr_2.add_attribute("PosRsnd", "Y"); // 1
    Hdr_2_set.insert("Y");
    Hdr_2.add_attribute("Snt", "SendingTime_t_390216275"); // 1
    Hdr_2_set.insert("SendingTime_t_390216275");
    Hdr_2.add_attribute("OrigSnt", "OrigSendingTime_t_1371280861"); // 1
    Hdr_2_set.insert("OrigSendingTime_t_1371280861");
    Hdr_2.add_attribute("MsgEncd", "MessageEncoding_t_1000015436"); // 1
    Hdr_2_set.insert("MessageEncoding_t_1000015436");
    all_values.push_back(Hdr_2_set);
    all_compo_names.insert("Hdr_2_set");

    {
      xml_element Hop_2{"Hop"};
      multiset<string> Hop_2_set;
      Hop_2.add_attribute("ID", "HopCompID_t_812041455"); // 2
      Hop_2_set.insert("HopCompID_t_812041455");
      Hop_2.add_attribute("Ref", "343059923"); // 2
      Hop_2_set.insert("343059923");
      Hop_2.add_attribute("Snt", "HopSendingTime_t_1021017057"); // 2
      Hop_2_set.insert("HopSendingTime_t_1021017057");
      all_values.push_back(Hop_2_set);
      all_compo_names.insert("Hop_2_set");

      Hdr_2.add_element(Hop_2);
    }
    elt.add_element(Hdr_2);
  } // end Hdr
  { // OrdAlloc
    xml_element OrdAlloc_0{"OrdAlloc"};
    multiset<string> OrdAlloc_0_set;
    OrdAlloc_0.add_attribute("ClOrdID", "ClOrdID_t_677220475"); // 1
    OrdAlloc_0_set.insert("ClOrdID_t_677220475");
    OrdAlloc_0.add_attribute("OrdID", "OrderID_t_1331495497"); // 1
    OrdAlloc_0_set.insert("OrderID_t_1331495497");
    OrdAlloc_0.add_attribute("OrdID2", "SecondaryOrderID_t_1672234638"); // 1
    OrdAlloc_0_set.insert("SecondaryOrderID_t_1672234638");
    OrdAlloc_0.add_attribute("ClOrdID2", "SecondaryClOrdID_t_956638259"); // 1
    OrdAlloc_0_set.insert("SecondaryClOrdID_t_956638259");
    OrdAlloc_0.add_attribute("ListID", "ListID_t_650561855"); // 1
    OrdAlloc_0_set.insert("ListID_t_650561855");
    OrdAlloc_0.add_attribute("Qty", "9707992.060000"); // 1
    OrdAlloc_0_set.insert("9707992.060000");
    OrdAlloc_0.add_attribute("AvgPx", "17476368.900000"); // 1
    OrdAlloc_0_set.insert("17476368.900000");
    OrdAlloc_0.add_attribute("BkngQty", "3675030.100000"); // 1
    OrdAlloc_0_set.insert("3675030.100000");
    all_values.push_back(OrdAlloc_0_set);
    all_compo_names.insert("OrdAlloc_0_set");

    {
      xml_element Pty_9{"Pty"};
      multiset<string> Pty_9_set;
      Pty_9.add_attribute("ID", "Nested2PartyID_t_97371869"); // 2
      Pty_9_set.insert("Nested2PartyID_t_97371869");
      Pty_9.add_attribute("Src", "H"); // 2
      Pty_9_set.insert("H");
      Pty_9.add_attribute("R", "68"); // 2
      Pty_9_set.insert("68");
      all_values.push_back(Pty_9_set);
      all_compo_names.insert("Pty_9_set");

      {
        xml_element Sub_9{"Sub"};
        multiset<string> Sub_9_set;
        Sub_9.add_attribute("ID", "Nested2PartySubID_t_394464182"); // 3
        Sub_9_set.insert("Nested2PartySubID_t_394464182");
        Sub_9.add_attribute("Typ", "26"); // 3
        Sub_9_set.insert("26");
        all_values.push_back(Sub_9_set);
        all_compo_names.insert("Sub_9_set");

        Pty_9.add_element(Sub_9);
      }
      OrdAlloc_0.add_element(Pty_9);
    }
    elt.add_element(OrdAlloc_0);
  } // end OrdAlloc
  { // OrdAlloc
    xml_element OrdAlloc_1{"OrdAlloc"};
    multiset<string> OrdAlloc_1_set;
    OrdAlloc_1.add_attribute("ClOrdID", "ClOrdID_t_1721021549"); // 1
    OrdAlloc_1_set.insert("ClOrdID_t_1721021549");
    OrdAlloc_1.add_attribute("OrdID", "OrderID_t_708167232"); // 1
    OrdAlloc_1_set.insert("OrderID_t_708167232");
    OrdAlloc_1.add_attribute("OrdID2", "SecondaryOrderID_t_132818805"); // 1
    OrdAlloc_1_set.insert("SecondaryOrderID_t_132818805");
    OrdAlloc_1.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1554416679"); // 1
    OrdAlloc_1_set.insert("SecondaryClOrdID_t_1554416679");
    OrdAlloc_1.add_attribute("ListID", "ListID_t_885800026"); // 1
    OrdAlloc_1_set.insert("ListID_t_885800026");
    OrdAlloc_1.add_attribute("Qty", "4144237.870000"); // 1
    OrdAlloc_1_set.insert("4144237.870000");
    OrdAlloc_1.add_attribute("AvgPx", "14214263.570000"); // 1
    OrdAlloc_1_set.insert("14214263.570000");
    OrdAlloc_1.add_attribute("BkngQty", "20724242.210000"); // 1
    OrdAlloc_1_set.insert("20724242.210000");
    all_values.push_back(OrdAlloc_1_set);
    all_compo_names.insert("OrdAlloc_1_set");

    {
      xml_element Pty_10{"Pty"};
      multiset<string> Pty_10_set;
      Pty_10.add_attribute("ID", "Nested2PartyID_t_1894131679"); // 2
      Pty_10_set.insert("Nested2PartyID_t_1894131679");
      Pty_10.add_attribute("Src", "9"); // 2
      Pty_10_set.insert("9");
      Pty_10.add_attribute("R", "13"); // 2
      Pty_10_set.insert("13");
      all_values.push_back(Pty_10_set);
      all_compo_names.insert("Pty_10_set");

      {
        xml_element Sub_10{"Sub"};
        multiset<string> Sub_10_set;
        Sub_10.add_attribute("ID", "Nested2PartySubID_t_136864306"); // 3
        Sub_10_set.insert("Nested2PartySubID_t_136864306");
        Sub_10.add_attribute("Typ", "27"); // 3
        Sub_10_set.insert("27");
        all_values.push_back(Sub_10_set);
        all_compo_names.insert("Sub_10_set");

        Pty_10.add_element(Sub_10);
      }
      OrdAlloc_1.add_element(Pty_10);
    }
    elt.add_element(OrdAlloc_1);
  } // end OrdAlloc
  { // OrdAlloc
    xml_element OrdAlloc_2{"OrdAlloc"};
    multiset<string> OrdAlloc_2_set;
    OrdAlloc_2.add_attribute("ClOrdID", "ClOrdID_t_740154592"); // 1
    OrdAlloc_2_set.insert("ClOrdID_t_740154592");
    OrdAlloc_2.add_attribute("OrdID", "OrderID_t_948905761"); // 1
    OrdAlloc_2_set.insert("OrderID_t_948905761");
    OrdAlloc_2.add_attribute("OrdID2", "SecondaryOrderID_t_627295879"); // 1
    OrdAlloc_2_set.insert("SecondaryOrderID_t_627295879");
    OrdAlloc_2.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1761171650"); // 1
    OrdAlloc_2_set.insert("SecondaryClOrdID_t_1761171650");
    OrdAlloc_2.add_attribute("ListID", "ListID_t_365097404"); // 1
    OrdAlloc_2_set.insert("ListID_t_365097404");
    OrdAlloc_2.add_attribute("Qty", "13045163.550000"); // 1
    OrdAlloc_2_set.insert("13045163.550000");
    OrdAlloc_2.add_attribute("AvgPx", "9451834.990000"); // 1
    OrdAlloc_2_set.insert("9451834.990000");
    OrdAlloc_2.add_attribute("BkngQty", "20373320.420000"); // 1
    OrdAlloc_2_set.insert("20373320.420000");
    all_values.push_back(OrdAlloc_2_set);
    all_compo_names.insert("OrdAlloc_2_set");

    {
      xml_element Pty_11{"Pty"};
      multiset<string> Pty_11_set;
      Pty_11.add_attribute("ID", "Nested2PartyID_t_113670966"); // 2
      Pty_11_set.insert("Nested2PartyID_t_113670966");
      Pty_11.add_attribute("Src", "E"); // 2
      Pty_11_set.insert("E");
      Pty_11.add_attribute("R", "66"); // 2
      Pty_11_set.insert("66");
      all_values.push_back(Pty_11_set);
      all_compo_names.insert("Pty_11_set");

      {
        xml_element Sub_11{"Sub"};
        multiset<string> Sub_11_set;
        Sub_11.add_attribute("ID", "Nested2PartySubID_t_1861307856"); // 3
        Sub_11_set.insert("Nested2PartySubID_t_1861307856");
        Sub_11.add_attribute("Typ", "7"); // 3
        Sub_11_set.insert("7");
        all_values.push_back(Sub_11_set);
        all_compo_names.insert("Sub_11_set");

        Pty_11.add_element(Sub_11);
      }
      OrdAlloc_2.add_element(Pty_11);
    }
    elt.add_element(OrdAlloc_2);
  } // end OrdAlloc
  { // AllExc
    xml_element AllExc_0{"AllExc"};
    multiset<string> AllExc_0_set;
    AllExc_0.add_attribute("LastQty", "10944606.750000"); // 1
    AllExc_0_set.insert("10944606.750000");
    AllExc_0.add_attribute("ExecID", "ExecID_t_1765614783"); // 1
    AllExc_0_set.insert("ExecID_t_1765614783");
    AllExc_0.add_attribute("ExecID2", "SecondaryExecID_t_1352483651"); // 1
    AllExc_0_set.insert("SecondaryExecID_t_1352483651");
    AllExc_0.add_attribute("LastPx", "11339893.470000"); // 1
    AllExc_0_set.insert("11339893.470000");
    AllExc_0.add_attribute("LastParPx", "13391526.840000"); // 1
    AllExc_0_set.insert("13391526.840000");
    AllExc_0.add_attribute("LastCpcty", "4"); // 1
    AllExc_0_set.insert("4");
    AllExc_0.add_attribute("TrdID", "TradeID_t_1266808152"); // 1
    AllExc_0_set.insert("TradeID_t_1266808152");
    AllExc_0.add_attribute("FirmTrdID", "FirmTradeID_t_746085715"); // 1
    AllExc_0_set.insert("FirmTradeID_t_746085715");
    all_values.push_back(AllExc_0_set);
    all_compo_names.insert("AllExc_0_set");

    elt.add_element(AllExc_0);
  } // end AllExc
  { // Instrmt
    xml_element Instrmt_4{"Instrmt"};
    multiset<string> Instrmt_4_set;
    Instrmt_4.add_attribute("Sym", "Symbol_t_798967262"); // 1
    Instrmt_4_set.insert("Symbol_t_798967262");
    Instrmt_4.add_attribute("Sfx", "WI"); // 1
    Instrmt_4_set.insert("WI");
    Instrmt_4.add_attribute("ID", "SecurityID_t_20028424"); // 1
    Instrmt_4_set.insert("SecurityID_t_20028424");
    Instrmt_4.add_attribute("Src", "E"); // 1
    Instrmt_4_set.insert("E");
    Instrmt_4.add_attribute("Prod", "8"); // 1
    Instrmt_4_set.insert("8");
    Instrmt_4.add_attribute("ProdCmplx", "ProductComplex_t_1080467167"); // 1
    Instrmt_4_set.insert("ProductComplex_t_1080467167");
    Instrmt_4.add_attribute("SecGrp", "SecurityGroup_t_464046992"); // 1
    Instrmt_4_set.insert("SecurityGroup_t_464046992");
    Instrmt_4.add_attribute("CFI", "CFICode_t_1564744277"); // 1
    Instrmt_4_set.insert("CFICode_t_1564744277");
    Instrmt_4.add_attribute("SecTyp", "TNOTE"); // 1
    Instrmt_4_set.insert("TNOTE");
    Instrmt_4.add_attribute("SubTyp", "SecuritySubType_t_1204201584"); // 1
    Instrmt_4_set.insert("SecuritySubType_t_1204201584");
    Instrmt_4.add_attribute("MMY", "366166391"); // 1
    Instrmt_4_set.insert("366166391");
    Instrmt_4.add_attribute("MatDt", "MaturityDate_t_1991999002"); // 1
    Instrmt_4_set.insert("MaturityDate_t_1991999002");
    Instrmt_4.add_attribute("MatTm", "817889586"); // 1
    Instrmt_4_set.insert("817889586");
    Instrmt_4.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_731263795"); // 1
    Instrmt_4_set.insert("SettleOnOpenFlag_t_731263795");
    Instrmt_4.add_attribute("AsgnMeth", "1149031709"); // 1
    Instrmt_4_set.insert("1149031709");
    Instrmt_4.add_attribute("Status", "1"); // 1
    Instrmt_4_set.insert("1");
    Instrmt_4.add_attribute("CpnPmt", "CouponPaymentDate_t_621112189"); // 1
    Instrmt_4_set.insert("CouponPaymentDate_t_621112189");
    Instrmt_4.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_4_set.insert("FR");
    Instrmt_4.add_attribute("Snrty", "SR"); // 1
    Instrmt_4_set.insert("SR");
    Instrmt_4.add_attribute("NotlPctOut", "14817597.890000"); // 1
    Instrmt_4_set.insert("14817597.890000");
    Instrmt_4.add_attribute("OrigNotlPctOut", "9765268.840000"); // 1
    Instrmt_4_set.insert("9765268.840000");
    Instrmt_4.add_attribute("AttchPnt", "10270995.100000"); // 1
    Instrmt_4_set.insert("10270995.100000");
    Instrmt_4.add_attribute("DetchPnt", "2922956.100000"); // 1
    Instrmt_4_set.insert("2922956.100000");
    Instrmt_4.add_attribute("Issued", "IssueDate_t_2070987559"); // 1
    Instrmt_4_set.insert("IssueDate_t_2070987559");
    Instrmt_4.add_attribute("RepoCollSecTyp", "645230645"); // 1
    Instrmt_4_set.insert("645230645");
    Instrmt_4.add_attribute("RepoTrm", "1644779261"); // 1
    Instrmt_4_set.insert("1644779261");
    Instrmt_4.add_attribute("RepoRt", "10574932.580000"); // 1
    Instrmt_4_set.insert("10574932.580000");
    Instrmt_4.add_attribute("Fctr", "19843833.300000"); // 1
    Instrmt_4_set.insert("19843833.300000");
    Instrmt_4.add_attribute("CrdRtg", "CreditRating_t_1557946497"); // 1
    Instrmt_4_set.insert("CreditRating_t_1557946497");
    Instrmt_4.add_attribute("Rgstry", "InstrRegistry_t_176817763"); // 1
    Instrmt_4_set.insert("InstrRegistry_t_176817763");
    Instrmt_4.add_attribute("IssuCtry", "582985397"); // 1
    Instrmt_4_set.insert("582985397");
    Instrmt_4.add_attribute("StPrv", "StateOrProvinceOfIssue_t_209430111"); // 1
    Instrmt_4_set.insert("StateOrProvinceOfIssue_t_209430111");
    Instrmt_4.add_attribute("Lcl", "LocaleOfIssue_t_1858049702"); // 1
    Instrmt_4_set.insert("LocaleOfIssue_t_1858049702");
    Instrmt_4.add_attribute("Redeem", "RedemptionDate_t_603013822"); // 1
    Instrmt_4_set.insert("RedemptionDate_t_603013822");
    Instrmt_4.add_attribute("StrkPx", "9333379.460000"); // 1
    Instrmt_4_set.insert("9333379.460000");
    Instrmt_4.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_4_set.insert("CAN");
    Instrmt_4.add_attribute("StrkMult", "13973849.380000"); // 1
    Instrmt_4_set.insert("13973849.380000");
    Instrmt_4.add_attribute("StrkValu", "5557066.550000"); // 1
    Instrmt_4_set.insert("5557066.550000");
    Instrmt_4.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_4_set.insert("1");
    Instrmt_4.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_4_set.insert("1");
    Instrmt_4.add_attribute("StrkPxBndryPrcsn", "9218730.460000"); // 1
    Instrmt_4_set.insert("9218730.460000");
    Instrmt_4.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_4_set.insert("3");
    Instrmt_4.add_attribute("OptAt", "1271992461"); // 1
    Instrmt_4_set.insert("1271992461");
    Instrmt_4.add_attribute("Mult", "16531368.410000"); // 1
    Instrmt_4_set.insert("16531368.410000");
    Instrmt_4.add_attribute("MultTyp", "2"); // 1
    Instrmt_4_set.insert("2");
    Instrmt_4.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_4_set.insert("4");
    Instrmt_4.add_attribute("MinPxIncr", "1267653.820000"); // 1
    Instrmt_4_set.insert("1267653.820000");
    Instrmt_4.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1009466556"); // 1
    Instrmt_4_set.insert("MinPriceIncrementAmount_t_1009466556");
    Instrmt_4.add_attribute("UOM", "Bbl"); // 1
    Instrmt_4_set.insert("Bbl");
    Instrmt_4.add_attribute("UOMQty", "16085251.710000"); // 1
    Instrmt_4_set.insert("16085251.710000");
    Instrmt_4.add_attribute("PxUOM", "Bbl"); // 1
    Instrmt_4_set.insert("Bbl");
    Instrmt_4.add_attribute("PxUOMQty", "9785325.540000"); // 1
    Instrmt_4_set.insert("9785325.540000");
    Instrmt_4.add_attribute("SettlMeth", "P"); // 1
    Instrmt_4_set.insert("P");
    Instrmt_4.add_attribute("ExerStyle", "1"); // 1
    Instrmt_4_set.insert("1");
    Instrmt_4.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_4_set.insert("1");
    Instrmt_4.add_attribute("OptPayAmt", "OptPayoutAmount_t_1398116394"); // 1
    Instrmt_4_set.insert("OptPayoutAmount_t_1398116394");
    Instrmt_4.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_4_set.insert("INT");
    Instrmt_4.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_4_set.insert("FUTDA");
    Instrmt_4.add_attribute("ListMeth", "1"); // 1
    Instrmt_4_set.insert("1");
    Instrmt_4.add_attribute("CapPx", "9963247.250000"); // 1
    Instrmt_4_set.insert("9963247.250000");
    Instrmt_4.add_attribute("FlrPx", "20436482.790000"); // 1
    Instrmt_4_set.insert("20436482.790000");
    Instrmt_4.add_attribute("PutCall", "0"); // 1
    Instrmt_4_set.insert("0");
    Instrmt_4.add_attribute("FlexInd", "true"); // 1
    Instrmt_4_set.insert("true");
    Instrmt_4.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_4_set.insert("false");
    Instrmt_4.add_attribute("TmUnit", "Min"); // 1
    Instrmt_4_set.insert("Min");
    Instrmt_4.add_attribute("CpnRt", "18453368.050000"); // 1
    Instrmt_4_set.insert("18453368.050000");
    Instrmt_4.add_attribute("Exch", "SecurityExchange_t_35175794"); // 1
    Instrmt_4_set.insert("SecurityExchange_t_35175794");
    Instrmt_4.add_attribute("PosLmt", "1201248591"); // 1
    Instrmt_4_set.insert("1201248591");
    Instrmt_4.add_attribute("NTPosLmt", "253559812"); // 1
    Instrmt_4_set.insert("253559812");
    Instrmt_4.add_attribute("Issr", "Issuer_t_935876258"); // 1
    Instrmt_4_set.insert("Issuer_t_935876258");
    Instrmt_4.add_attribute("EncIssrLen", "1655351466"); // 1
    Instrmt_4_set.insert("1655351466");
    Instrmt_4.add_attribute("EncIssr", "EncodedIssuer_t_1175432858"); // 1
    Instrmt_4_set.insert("EncodedIssuer_t_1175432858");
    Instrmt_4.add_attribute("Desc", "SecurityDesc_t_1681092077"); // 1
    Instrmt_4_set.insert("SecurityDesc_t_1681092077");
    Instrmt_4.add_attribute("EncSecDescLen", "779860280"); // 1
    Instrmt_4_set.insert("779860280");
    Instrmt_4.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_681086051"); // 1
    Instrmt_4_set.insert("EncodedSecurityDesc_t_681086051");
    Instrmt_4.add_attribute("Pool", "Pool_t_1427855957"); // 1
    Instrmt_4_set.insert("Pool_t_1427855957");
    Instrmt_4.add_attribute("CSetMo", "1667442179"); // 1
    Instrmt_4_set.insert("1667442179");
    Instrmt_4.add_attribute("CPPgm", "1"); // 1
    Instrmt_4_set.insert("1");
    Instrmt_4.add_attribute("CPRegT", "CPRegType_t_289838865"); // 1
    Instrmt_4_set.insert("CPRegType_t_289838865");
    Instrmt_4.add_attribute("Dated", "DatedDate_t_1618875224"); // 1
    Instrmt_4_set.insert("DatedDate_t_1618875224");
    Instrmt_4.add_attribute("IntAcrl", "InterestAccrualDate_t_268892956"); // 1
    Instrmt_4_set.insert("InterestAccrualDate_t_268892956");
    all_values.push_back(Instrmt_4_set);
    all_compo_names.insert("Instrmt_4_set");

    {
      xml_element AID_4{"AID"};
      multiset<string> AID_4_set;
      AID_4.add_attribute("AltID", "SecurityAltID_t_128348657"); // 2
      AID_4_set.insert("SecurityAltID_t_128348657");
      AID_4.add_attribute("AltIDSrc", "J"); // 2
      AID_4_set.insert("J");
      all_values.push_back(AID_4_set);
      all_compo_names.insert("AID_4_set");

      Instrmt_4.add_element(AID_4);
    }
    {
      xml_element SecXML_4{"SecXML"};
      multiset<string> SecXML_4_set;
      SecXML_4.add_attribute("Schema", "SecurityXMLSchema_t_22230089"); // 2
      SecXML_4_set.insert("SecurityXMLSchema_t_22230089");
      all_values.push_back(SecXML_4_set);
      all_compo_names.insert("SecXML_4_set");

      Instrmt_4.add_element(SecXML_4);
    }
    {
      xml_element Evnt_4{"Evnt"};
      multiset<string> Evnt_4_set;
      Evnt_4.add_attribute("EventTyp", "9"); // 2
      Evnt_4_set.insert("9");
      Evnt_4.add_attribute("Dt", "EventDate_t_2073687330"); // 2
      Evnt_4_set.insert("EventDate_t_2073687330");
      Evnt_4.add_attribute("Tm", "EventTime_t_1420346484"); // 2
      Evnt_4_set.insert("EventTime_t_1420346484");
      Evnt_4.add_attribute("Px", "7098693.240000"); // 2
      Evnt_4_set.insert("7098693.240000");
      Evnt_4.add_attribute("Txt", "EventText_t_1386866564"); // 2
      Evnt_4_set.insert("EventText_t_1386866564");
      all_values.push_back(Evnt_4_set);
      all_compo_names.insert("Evnt_4_set");

      Instrmt_4.add_element(Evnt_4);
    }
    {
      xml_element Pty_12{"Pty"};
      multiset<string> Pty_12_set;
      Pty_12.add_attribute("ID", "InstrumentPartyID_t_81442079"); // 2
      Pty_12_set.insert("InstrumentPartyID_t_81442079");
      Pty_12.add_attribute("Src", "6"); // 2
      Pty_12_set.insert("6");
      Pty_12.add_attribute("R", "78"); // 2
      Pty_12_set.insert("78");
      all_values.push_back(Pty_12_set);
      all_compo_names.insert("Pty_12_set");

      {
        xml_element Sub_12{"Sub"};
        multiset<string> Sub_12_set;
        Sub_12.add_attribute("ID", "InstrumentPartySubID_t_1099451434"); // 3
        Sub_12_set.insert("InstrumentPartySubID_t_1099451434");
        Sub_12.add_attribute("Typ", "5"); // 3
        Sub_12_set.insert("5");
        all_values.push_back(Sub_12_set);
        all_compo_names.insert("Sub_12_set");

        Pty_12.add_element(Sub_12);
      }
      Instrmt_4.add_element(Pty_12);
    }
    {
      xml_element CmplxEvnt_4{"CmplxEvnt"};
      multiset<string> CmplxEvnt_4_set;
      CmplxEvnt_4.add_attribute("Typ", "4"); // 2
      CmplxEvnt_4_set.insert("4");
      CmplxEvnt_4.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_903315087"); // 2
      CmplxEvnt_4_set.insert("ComplexOptPayoutAmount_t_903315087");
      CmplxEvnt_4.add_attribute("Px", "21109379.870000"); // 2
      CmplxEvnt_4_set.insert("21109379.870000");
      CmplxEvnt_4.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_4_set.insert("5");
      CmplxEvnt_4.add_attribute("PxBndryPrcsn", "21045636.780000"); // 2
      CmplxEvnt_4_set.insert("21045636.780000");
      CmplxEvnt_4.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_4_set.insert("2");
      CmplxEvnt_4.add_attribute("Cond", "1"); // 2
      CmplxEvnt_4_set.insert("1");
      all_values.push_back(CmplxEvnt_4_set);
      all_compo_names.insert("CmplxEvnt_4_set");

      {
        xml_element EvntDts_4{"EvntDts"};
        multiset<string> EvntDts_4_set;
        EvntDts_4.add_attribute("StartDt", "ComplexEventStartDate_t_1612431497"); // 3
        EvntDts_4_set.insert("ComplexEventStartDate_t_1612431497");
        EvntDts_4.add_attribute("EndDt", "ComplexEventEndDate_t_1392447010"); // 3
        EvntDts_4_set.insert("ComplexEventEndDate_t_1392447010");
        all_values.push_back(EvntDts_4_set);
        all_compo_names.insert("EvntDts_4_set");

        {
          xml_element EvntTms_4{"EvntTms"};
          multiset<string> EvntTms_4_set;
          EvntTms_4.add_attribute("StartTm", "139386483"); // 4
          EvntTms_4_set.insert("139386483");
          EvntTms_4.add_attribute("EndTm", "244808129"); // 4
          EvntTms_4_set.insert("244808129");
          all_values.push_back(EvntTms_4_set);
          all_compo_names.insert("EvntTms_4_set");

          EvntDts_4.add_element(EvntTms_4);
        }
        CmplxEvnt_4.add_element(EvntDts_4);
      }
      Instrmt_4.add_element(CmplxEvnt_4);
    }
    elt.add_element(Instrmt_4);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_0{"InstrmtExt"};
    multiset<string> InstrmtExt_0_set;
    InstrmtExt_0.add_attribute("DlvryForm", "2"); // 1
    InstrmtExt_0_set.insert("2");
    InstrmtExt_0.add_attribute("PctAtRisk", "15672424.400000"); // 1
    InstrmtExt_0_set.insert("15672424.400000");
    all_values.push_back(InstrmtExt_0_set);
    all_compo_names.insert("InstrmtExt_0_set");

    {
      xml_element Attrb_0{"Attrb"};
      multiset<string> Attrb_0_set;
      Attrb_0.add_attribute("Typ", "28"); // 2
      Attrb_0_set.insert("28");
      Attrb_0.add_attribute("Val", "InstrAttribValue_t_733900847"); // 2
      Attrb_0_set.insert("InstrAttribValue_t_733900847");
      all_values.push_back(Attrb_0_set);
      all_compo_names.insert("Attrb_0_set");

      InstrmtExt_0.add_element(Attrb_0);
    }
    elt.add_element(InstrmtExt_0);
  } // end InstrmtExt
  { // FinDetls
    xml_element FinDetls_0{"FinDetls"};
    multiset<string> FinDetls_0_set;
    FinDetls_0.add_attribute("AgmtDesc", "AgreementDesc_t_1857081305"); // 1
    FinDetls_0_set.insert("AgreementDesc_t_1857081305");
    FinDetls_0.add_attribute("AgmtID", "AgreementID_t_1383641884"); // 1
    FinDetls_0_set.insert("AgreementID_t_1383641884");
    FinDetls_0.add_attribute("AgmtDt", "AgreementDate_t_1002793803"); // 1
    FinDetls_0_set.insert("AgreementDate_t_1002793803");
    FinDetls_0.add_attribute("AgmtCcy", "CAN"); // 1
    FinDetls_0_set.insert("CAN");
    FinDetls_0.add_attribute("TrmTyp", "2"); // 1
    FinDetls_0_set.insert("2");
    FinDetls_0.add_attribute("StartDt", "StartDate_t_1875792324"); // 1
    FinDetls_0_set.insert("StartDate_t_1875792324");
    FinDetls_0.add_attribute("EndDt", "EndDate_t_1759769697"); // 1
    FinDetls_0_set.insert("EndDate_t_1759769697");
    FinDetls_0.add_attribute("DlvryTyp", "1"); // 1
    FinDetls_0_set.insert("1");
    FinDetls_0.add_attribute("MgnRatio", "4381780.000000"); // 1
    FinDetls_0_set.insert("4381780.000000");
    all_values.push_back(FinDetls_0_set);
    all_compo_names.insert("FinDetls_0_set");

    elt.add_element(FinDetls_0);
  } // end FinDetls
  { // Undly
    xml_element Undly_1{"Undly"};
    multiset<string> Undly_1_set;
    Undly_1.add_attribute("Sym", "UnderlyingSymbol_t_379328808"); // 1
    Undly_1_set.insert("UnderlyingSymbol_t_379328808");
    Undly_1.add_attribute("Sfx", "CD"); // 1
    Undly_1_set.insert("CD");
    Undly_1.add_attribute("ID", "UnderlyingSecurityID_t_134700162"); // 1
    Undly_1_set.insert("UnderlyingSecurityID_t_134700162");
    Undly_1.add_attribute("Src", "H"); // 1
    Undly_1_set.insert("H");
    Undly_1.add_attribute("Prod", "2"); // 1
    Undly_1_set.insert("2");
    Undly_1.add_attribute("CFI", "UnderlyingCFICode_t_1916909811"); // 1
    Undly_1_set.insert("UnderlyingCFICode_t_1916909811");
    Undly_1.add_attribute("SecTyp", "STRUCT"); // 1
    Undly_1_set.insert("STRUCT");
    Undly_1.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_225943922"); // 1
    Undly_1_set.insert("UnderlyingSecuritySubType_t_225943922");
    Undly_1.add_attribute("MMY", "1586811607"); // 1
    Undly_1_set.insert("1586811607");
    Undly_1.add_attribute("Mat", "UnderlyingMaturityDate_t_191691712"); // 1
    Undly_1_set.insert("UnderlyingMaturityDate_t_191691712");
    Undly_1.add_attribute("MatTm", "442958074"); // 1
    Undly_1_set.insert("442958074");
    Undly_1.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_45106014"); // 1
    Undly_1_set.insert("UnderlyingCouponPaymentDate_t_45106014");
    Undly_1.add_attribute("RestrctTyp", "MR"); // 1
    Undly_1_set.insert("MR");
    Undly_1.add_attribute("Snrty", "SB"); // 1
    Undly_1_set.insert("SB");
    Undly_1.add_attribute("NotlPctOut", "1844924.970000"); // 1
    Undly_1_set.insert("1844924.970000");
    Undly_1.add_attribute("OrigNotlPctOut", "20489313.380000"); // 1
    Undly_1_set.insert("20489313.380000");
    Undly_1.add_attribute("AttchPnt", "17614544.970000"); // 1
    Undly_1_set.insert("17614544.970000");
    Undly_1.add_attribute("DetchPnt", "17517349.380000"); // 1
    Undly_1_set.insert("17517349.380000");
    Undly_1.add_attribute("Issued", "UnderlyingIssueDate_t_1813697998"); // 1
    Undly_1_set.insert("UnderlyingIssueDate_t_1813697998");
    Undly_1.add_attribute("RepoCollSecTyp", "347871696"); // 1
    Undly_1_set.insert("347871696");
    Undly_1.add_attribute("RepoTrm", "1461332595"); // 1
    Undly_1_set.insert("1461332595");
    Undly_1.add_attribute("RepoRt", "10498562.350000"); // 1
    Undly_1_set.insert("10498562.350000");
    Undly_1.add_attribute("Fctr", "13506655.000000"); // 1
    Undly_1_set.insert("13506655.000000");
    Undly_1.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1299278910"); // 1
    Undly_1_set.insert("UnderlyingCreditRating_t_1299278910");
    Undly_1.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_735938602"); // 1
    Undly_1_set.insert("UnderlyingInstrRegistry_t_735938602");
    Undly_1.add_attribute("Ctry", "228205745"); // 1
    Undly_1_set.insert("228205745");
    Undly_1.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1027587587"); // 1
    Undly_1_set.insert("UnderlyingStateOrProvinceOfIssue_t_1027587587");
    Undly_1.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_348224651"); // 1
    Undly_1_set.insert("UnderlyingLocaleOfIssue_t_348224651");
    Undly_1.add_attribute("Redeem", "UnderlyingRedemptionDate_t_526092474"); // 1
    Undly_1_set.insert("UnderlyingRedemptionDate_t_526092474");
    Undly_1.add_attribute("StrkPx", "14657655.870000"); // 1
    Undly_1_set.insert("14657655.870000");
    Undly_1.add_attribute("StrkCcy", "USD"); // 1
    Undly_1_set.insert("USD");
    Undly_1.add_attribute("OptA", "1462653989"); // 1
    Undly_1_set.insert("1462653989");
    Undly_1.add_attribute("Mult", "14820774.270000"); // 1
    Undly_1_set.insert("14820774.270000");
    Undly_1.add_attribute("MultTyp", "0"); // 1
    Undly_1_set.insert("0");
    Undly_1.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_1_set.insert("3");
    Undly_1.add_attribute("UOM", "MWh"); // 1
    Undly_1_set.insert("MWh");
    Undly_1.add_attribute("UOMQty", "4713295.580000"); // 1
    Undly_1_set.insert("4713295.580000");
    Undly_1.add_attribute("PxUOM", "MMbbl"); // 1
    Undly_1_set.insert("MMbbl");
    Undly_1.add_attribute("PxUOMQty", "6908315.500000"); // 1
    Undly_1_set.insert("6908315.500000");
    Undly_1.add_attribute("TmUnit", "H"); // 1
    Undly_1_set.insert("H");
    Undly_1.add_attribute("ExerStyle", "0"); // 1
    Undly_1_set.insert("0");
    Undly_1.add_attribute("CpnRt", "7359375.640000"); // 1
    Undly_1_set.insert("7359375.640000");
    Undly_1.add_attribute("Exch", "UnderlyingSecurityExchange_t_319660831"); // 1
    Undly_1_set.insert("UnderlyingSecurityExchange_t_319660831");
    Undly_1.add_attribute("Issr", "UnderlyingIssuer_t_2081967005"); // 1
    Undly_1_set.insert("UnderlyingIssuer_t_2081967005");
    Undly_1.add_attribute("EncUndIssrLen", "920430062"); // 1
    Undly_1_set.insert("920430062");
    Undly_1.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_221108521"); // 1
    Undly_1_set.insert("EncodedUnderlyingIssuer_t_221108521");
    Undly_1.add_attribute("Desc", "UnderlyingSecurityDesc_t_1695937855"); // 1
    Undly_1_set.insert("UnderlyingSecurityDesc_t_1695937855");
    Undly_1.add_attribute("EncUndSecDescLen", "524681352"); // 1
    Undly_1_set.insert("524681352");
    Undly_1.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2034806520"); // 1
    Undly_1_set.insert("EncodedUnderlyingSecurityDesc_t_2034806520");
    Undly_1.add_attribute("CPPgm", "UnderlyingCPProgram_t_2043809551"); // 1
    Undly_1_set.insert("UnderlyingCPProgram_t_2043809551");
    Undly_1.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1986013947"); // 1
    Undly_1_set.insert("UnderlyingCPRegType_t_1986013947");
    Undly_1.add_attribute("AllocPct", "9371791.070000"); // 1
    Undly_1_set.insert("9371791.070000");
    Undly_1.add_attribute("Ccy", "GBP"); // 1
    Undly_1_set.insert("GBP");
    Undly_1.add_attribute("Qty", "16731177.090000"); // 1
    Undly_1_set.insert("16731177.090000");
    Undly_1.add_attribute("SettlTyp", "5"); // 1
    Undly_1_set.insert("5");
    Undly_1.add_attribute("CashAmt", "UnderlyingCashAmount_t_17913149"); // 1
    Undly_1_set.insert("UnderlyingCashAmount_t_17913149");
    Undly_1.add_attribute("CashTyp", "FIXED"); // 1
    Undly_1_set.insert("FIXED");
    Undly_1.add_attribute("Px", "20012896.220000"); // 1
    Undly_1_set.insert("20012896.220000");
    Undly_1.add_attribute("DirtPx", "14836787.360000"); // 1
    Undly_1_set.insert("14836787.360000");
    Undly_1.add_attribute("EndPx", "12212359.780000"); // 1
    Undly_1_set.insert("12212359.780000");
    Undly_1.add_attribute("StartVal", "UnderlyingStartValue_t_759227257"); // 1
    Undly_1_set.insert("UnderlyingStartValue_t_759227257");
    Undly_1.add_attribute("CurVal", "UnderlyingCurrentValue_t_798849078"); // 1
    Undly_1_set.insert("UnderlyingCurrentValue_t_798849078");
    Undly_1.add_attribute("EndVal", "UnderlyingEndValue_t_555829757"); // 1
    Undly_1_set.insert("UnderlyingEndValue_t_555829757");
    Undly_1.add_attribute("AdjQty", "9959451.340000"); // 1
    Undly_1_set.insert("9959451.340000");
    Undly_1.add_attribute("FxRate", "3765090.030000"); // 1
    Undly_1_set.insert("3765090.030000");
    Undly_1.add_attribute("FxRateCalc", "M"); // 1
    Undly_1_set.insert("M");
    Undly_1.add_attribute("CapValu", "UnderlyingCapValue_t_1467274692"); // 1
    Undly_1_set.insert("UnderlyingCapValue_t_1467274692");
    Undly_1.add_attribute("SetMeth", "UnderlyingSettlMethod_t_180112850"); // 1
    Undly_1_set.insert("UnderlyingSettlMethod_t_180112850");
    Undly_1.add_attribute("PutCall", "350681251"); // 1
    Undly_1_set.insert("350681251");
    all_values.push_back(Undly_1_set);
    all_compo_names.insert("Undly_1_set");

    {
      xml_element UndAID_1{"UndAID"};
      multiset<string> UndAID_1_set;
      UndAID_1.add_attribute("AltID", "UnderlyingSecurityAltID_t_2130295963"); // 2
      UndAID_1_set.insert("UnderlyingSecurityAltID_t_2130295963");
      UndAID_1.add_attribute("AltIDSrc", "J"); // 2
      UndAID_1_set.insert("J");
      all_values.push_back(UndAID_1_set);
      all_compo_names.insert("UndAID_1_set");

      Undly_1.add_element(UndAID_1);
    }
    {
      xml_element Stip_1{"Stip"};
      multiset<string> Stip_1_set;
      Stip_1.add_attribute("Typ", "ISSUE"); // 2
      Stip_1_set.insert("ISSUE");
      Stip_1.add_attribute("Val", "UnderlyingStipValue_t_302473146"); // 2
      Stip_1_set.insert("UnderlyingStipValue_t_302473146");
      all_values.push_back(Stip_1_set);
      all_compo_names.insert("Stip_1_set");

      Undly_1.add_element(Stip_1);
    }
    {
      xml_element Pty_13{"Pty"};
      multiset<string> Pty_13_set;
      Pty_13.add_attribute("ID", "UnderlyingInstrumentPartyID_t_361158129"); // 2
      Pty_13_set.insert("UnderlyingInstrumentPartyID_t_361158129");
      Pty_13.add_attribute("Src", "8"); // 2
      Pty_13_set.insert("8");
      Pty_13.add_attribute("R", "17"); // 2
      Pty_13_set.insert("17");
      all_values.push_back(Pty_13_set);
      all_compo_names.insert("Pty_13_set");

      {
        xml_element Sub_13{"Sub"};
        multiset<string> Sub_13_set;
        Sub_13.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2057095984"); // 3
        Sub_13_set.insert("UnderlyingInstrumentPartySubID_t_2057095984");
        Sub_13.add_attribute("Typ", "27"); // 3
        Sub_13_set.insert("27");
        all_values.push_back(Sub_13_set);
        all_compo_names.insert("Sub_13_set");

        Pty_13.add_element(Sub_13);
      }
      Undly_1.add_element(Pty_13);
    }
    elt.add_element(Undly_1);
  } // end Undly
  { // Undly
    xml_element Undly_2{"Undly"};
    multiset<string> Undly_2_set;
    Undly_2.add_attribute("Sym", "UnderlyingSymbol_t_410904540"); // 1
    Undly_2_set.insert("UnderlyingSymbol_t_410904540");
    Undly_2.add_attribute("Sfx", "CD"); // 1
    Undly_2_set.insert("CD");
    Undly_2.add_attribute("ID", "UnderlyingSecurityID_t_222776881"); // 1
    Undly_2_set.insert("UnderlyingSecurityID_t_222776881");
    Undly_2.add_attribute("Src", "A"); // 1
    Undly_2_set.insert("A");
    Undly_2.add_attribute("Prod", "9"); // 1
    Undly_2_set.insert("9");
    Undly_2.add_attribute("CFI", "UnderlyingCFICode_t_1360586091"); // 1
    Undly_2_set.insert("UnderlyingCFICode_t_1360586091");
    Undly_2.add_attribute("SecTyp", "MLEG"); // 1
    Undly_2_set.insert("MLEG");
    Undly_2.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_380643144"); // 1
    Undly_2_set.insert("UnderlyingSecuritySubType_t_380643144");
    Undly_2.add_attribute("MMY", "1378499240"); // 1
    Undly_2_set.insert("1378499240");
    Undly_2.add_attribute("Mat", "UnderlyingMaturityDate_t_747576420"); // 1
    Undly_2_set.insert("UnderlyingMaturityDate_t_747576420");
    Undly_2.add_attribute("MatTm", "234449118"); // 1
    Undly_2_set.insert("234449118");
    Undly_2.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_714694328"); // 1
    Undly_2_set.insert("UnderlyingCouponPaymentDate_t_714694328");
    Undly_2.add_attribute("RestrctTyp", "MM"); // 1
    Undly_2_set.insert("MM");
    Undly_2.add_attribute("Snrty", "SR"); // 1
    Undly_2_set.insert("SR");
    Undly_2.add_attribute("NotlPctOut", "15135434.060000"); // 1
    Undly_2_set.insert("15135434.060000");
    Undly_2.add_attribute("OrigNotlPctOut", "3771585.080000"); // 1
    Undly_2_set.insert("3771585.080000");
    Undly_2.add_attribute("AttchPnt", "19896215.090000"); // 1
    Undly_2_set.insert("19896215.090000");
    Undly_2.add_attribute("DetchPnt", "18900524.090000"); // 1
    Undly_2_set.insert("18900524.090000");
    Undly_2.add_attribute("Issued", "UnderlyingIssueDate_t_37008208"); // 1
    Undly_2_set.insert("UnderlyingIssueDate_t_37008208");
    Undly_2.add_attribute("RepoCollSecTyp", "1309412554"); // 1
    Undly_2_set.insert("1309412554");
    Undly_2.add_attribute("RepoTrm", "2070165260"); // 1
    Undly_2_set.insert("2070165260");
    Undly_2.add_attribute("RepoRt", "3876894.590000"); // 1
    Undly_2_set.insert("3876894.590000");
    Undly_2.add_attribute("Fctr", "12922248.690000"); // 1
    Undly_2_set.insert("12922248.690000");
    Undly_2.add_attribute("CrdRtg", "UnderlyingCreditRating_t_349356384"); // 1
    Undly_2_set.insert("UnderlyingCreditRating_t_349356384");
    Undly_2.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1474308275"); // 1
    Undly_2_set.insert("UnderlyingInstrRegistry_t_1474308275");
    Undly_2.add_attribute("Ctry", "1594698015"); // 1
    Undly_2_set.insert("1594698015");
    Undly_2.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_710514513"); // 1
    Undly_2_set.insert("UnderlyingStateOrProvinceOfIssue_t_710514513");
    Undly_2.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1333873504"); // 1
    Undly_2_set.insert("UnderlyingLocaleOfIssue_t_1333873504");
    Undly_2.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2118279683"); // 1
    Undly_2_set.insert("UnderlyingRedemptionDate_t_2118279683");
    Undly_2.add_attribute("StrkPx", "6201268.500000"); // 1
    Undly_2_set.insert("6201268.500000");
    Undly_2.add_attribute("StrkCcy", "CHF"); // 1
    Undly_2_set.insert("CHF");
    Undly_2.add_attribute("OptA", "426065090"); // 1
    Undly_2_set.insert("426065090");
    Undly_2.add_attribute("Mult", "19408969.670000"); // 1
    Undly_2_set.insert("19408969.670000");
    Undly_2.add_attribute("MultTyp", "2"); // 1
    Undly_2_set.insert("2");
    Undly_2.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_2_set.insert("3");
    Undly_2.add_attribute("UOM", "tn"); // 1
    Undly_2_set.insert("tn");
    Undly_2.add_attribute("UOMQty", "4560182.820000"); // 1
    Undly_2_set.insert("4560182.820000");
    Undly_2.add_attribute("PxUOM", "MMbbl"); // 1
    Undly_2_set.insert("MMbbl");
    Undly_2.add_attribute("PxUOMQty", "3850150.020000"); // 1
    Undly_2_set.insert("3850150.020000");
    Undly_2.add_attribute("TmUnit", "D"); // 1
    Undly_2_set.insert("D");
    Undly_2.add_attribute("ExerStyle", "2"); // 1
    Undly_2_set.insert("2");
    Undly_2.add_attribute("CpnRt", "10997093.300000"); // 1
    Undly_2_set.insert("10997093.300000");
    Undly_2.add_attribute("Exch", "UnderlyingSecurityExchange_t_1024923453"); // 1
    Undly_2_set.insert("UnderlyingSecurityExchange_t_1024923453");
    Undly_2.add_attribute("Issr", "UnderlyingIssuer_t_940279723"); // 1
    Undly_2_set.insert("UnderlyingIssuer_t_940279723");
    Undly_2.add_attribute("EncUndIssrLen", "465769089"); // 1
    Undly_2_set.insert("465769089");
    Undly_2.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1402081961"); // 1
    Undly_2_set.insert("EncodedUnderlyingIssuer_t_1402081961");
    Undly_2.add_attribute("Desc", "UnderlyingSecurityDesc_t_782417585"); // 1
    Undly_2_set.insert("UnderlyingSecurityDesc_t_782417585");
    Undly_2.add_attribute("EncUndSecDescLen", "208337850"); // 1
    Undly_2_set.insert("208337850");
    Undly_2.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1439090170"); // 1
    Undly_2_set.insert("EncodedUnderlyingSecurityDesc_t_1439090170");
    Undly_2.add_attribute("CPPgm", "UnderlyingCPProgram_t_2091830139"); // 1
    Undly_2_set.insert("UnderlyingCPProgram_t_2091830139");
    Undly_2.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_131019462"); // 1
    Undly_2_set.insert("UnderlyingCPRegType_t_131019462");
    Undly_2.add_attribute("AllocPct", "18267796.290000"); // 1
    Undly_2_set.insert("18267796.290000");
    Undly_2.add_attribute("Ccy", "USD"); // 1
    Undly_2_set.insert("USD");
    Undly_2.add_attribute("Qty", "11536042.560000"); // 1
    Undly_2_set.insert("11536042.560000");
    Undly_2.add_attribute("SettlTyp", "5"); // 1
    Undly_2_set.insert("5");
    Undly_2.add_attribute("CashAmt", "UnderlyingCashAmount_t_1190890360"); // 1
    Undly_2_set.insert("UnderlyingCashAmount_t_1190890360");
    Undly_2.add_attribute("CashTyp", "DIFF"); // 1
    Undly_2_set.insert("DIFF");
    Undly_2.add_attribute("Px", "6545817.630000"); // 1
    Undly_2_set.insert("6545817.630000");
    Undly_2.add_attribute("DirtPx", "18110172.100000"); // 1
    Undly_2_set.insert("18110172.100000");
    Undly_2.add_attribute("EndPx", "20581141.990000"); // 1
    Undly_2_set.insert("20581141.990000");
    Undly_2.add_attribute("StartVal", "UnderlyingStartValue_t_1036282338"); // 1
    Undly_2_set.insert("UnderlyingStartValue_t_1036282338");
    Undly_2.add_attribute("CurVal", "UnderlyingCurrentValue_t_89598652"); // 1
    Undly_2_set.insert("UnderlyingCurrentValue_t_89598652");
    Undly_2.add_attribute("EndVal", "UnderlyingEndValue_t_1851527518"); // 1
    Undly_2_set.insert("UnderlyingEndValue_t_1851527518");
    Undly_2.add_attribute("AdjQty", "6185829.130000"); // 1
    Undly_2_set.insert("6185829.130000");
    Undly_2.add_attribute("FxRate", "15685933.850000"); // 1
    Undly_2_set.insert("15685933.850000");
    Undly_2.add_attribute("FxRateCalc", "M"); // 1
    Undly_2_set.insert("M");
    Undly_2.add_attribute("CapValu", "UnderlyingCapValue_t_1074601195"); // 1
    Undly_2_set.insert("UnderlyingCapValue_t_1074601195");
    Undly_2.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1280747615"); // 1
    Undly_2_set.insert("UnderlyingSettlMethod_t_1280747615");
    Undly_2.add_attribute("PutCall", "1243058282"); // 1
    Undly_2_set.insert("1243058282");
    all_values.push_back(Undly_2_set);
    all_compo_names.insert("Undly_2_set");

    {
      xml_element UndAID_2{"UndAID"};
      multiset<string> UndAID_2_set;
      UndAID_2.add_attribute("AltID", "UnderlyingSecurityAltID_t_130712250"); // 2
      UndAID_2_set.insert("UnderlyingSecurityAltID_t_130712250");
      UndAID_2.add_attribute("AltIDSrc", "4"); // 2
      UndAID_2_set.insert("4");
      all_values.push_back(UndAID_2_set);
      all_compo_names.insert("UndAID_2_set");

      Undly_2.add_element(UndAID_2);
    }
    {
      xml_element Stip_2{"Stip"};
      multiset<string> Stip_2_set;
      Stip_2.add_attribute("Typ", "REDEMPTION"); // 2
      Stip_2_set.insert("REDEMPTION");
      Stip_2.add_attribute("Val", "UnderlyingStipValue_t_1155635704"); // 2
      Stip_2_set.insert("UnderlyingStipValue_t_1155635704");
      all_values.push_back(Stip_2_set);
      all_compo_names.insert("Stip_2_set");

      Undly_2.add_element(Stip_2);
    }
    {
      xml_element Pty_14{"Pty"};
      multiset<string> Pty_14_set;
      Pty_14.add_attribute("ID", "UnderlyingInstrumentPartyID_t_20147038"); // 2
      Pty_14_set.insert("UnderlyingInstrumentPartyID_t_20147038");
      Pty_14.add_attribute("Src", "C"); // 2
      Pty_14_set.insert("C");
      Pty_14.add_attribute("R", "33"); // 2
      Pty_14_set.insert("33");
      all_values.push_back(Pty_14_set);
      all_compo_names.insert("Pty_14_set");

      {
        xml_element Sub_14{"Sub"};
        multiset<string> Sub_14_set;
        Sub_14.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_802564623"); // 3
        Sub_14_set.insert("UnderlyingInstrumentPartySubID_t_802564623");
        Sub_14.add_attribute("Typ", "31"); // 3
        Sub_14_set.insert("31");
        all_values.push_back(Sub_14_set);
        all_compo_names.insert("Sub_14_set");

        Pty_14.add_element(Sub_14);
      }
      Undly_2.add_element(Pty_14);
    }
    elt.add_element(Undly_2);
  } // end Undly
  { // Leg
    xml_element Leg_2{"Leg"};
    multiset<string> Leg_2_set;
    Leg_2.add_attribute("Sym", "LegSymbol_t_746911114"); // 1
    Leg_2_set.insert("LegSymbol_t_746911114");
    Leg_2.add_attribute("Sfx", "CD"); // 1
    Leg_2_set.insert("CD");
    Leg_2.add_attribute("ID", "LegSecurityID_t_1528620169"); // 1
    Leg_2_set.insert("LegSecurityID_t_1528620169");
    Leg_2.add_attribute("Src", "7"); // 1
    Leg_2_set.insert("7");
    Leg_2.add_attribute("Prod", "7"); // 1
    Leg_2_set.insert("7");
    Leg_2.add_attribute("CFI", "LegCFICode_t_534740777"); // 1
    Leg_2_set.insert("LegCFICode_t_534740777");
    Leg_2.add_attribute("SecTyp", "IRS"); // 1
    Leg_2_set.insert("IRS");
    Leg_2.add_attribute("SecSubTyp", "LegSecuritySubType_t_524192925"); // 1
    Leg_2_set.insert("LegSecuritySubType_t_524192925");
    Leg_2.add_attribute("MMY", "874734890"); // 1
    Leg_2_set.insert("874734890");
    Leg_2.add_attribute("Mat", "LegMaturityDate_t_1174366317"); // 1
    Leg_2_set.insert("LegMaturityDate_t_1174366317");
    Leg_2.add_attribute("MatTm", "187726487"); // 1
    Leg_2_set.insert("187726487");
    Leg_2.add_attribute("CpnPmt", "LegCouponPaymentDate_t_785365441"); // 1
    Leg_2_set.insert("LegCouponPaymentDate_t_785365441");
    Leg_2.add_attribute("Issued", "LegIssueDate_t_63165007"); // 1
    Leg_2_set.insert("LegIssueDate_t_63165007");
    Leg_2.add_attribute("RepoCollSecTyp", "277325139"); // 1
    Leg_2_set.insert("277325139");
    Leg_2.add_attribute("RepoTrm", "489409311"); // 1
    Leg_2_set.insert("489409311");
    Leg_2.add_attribute("RepoRt", "6817479.200000"); // 1
    Leg_2_set.insert("6817479.200000");
    Leg_2.add_attribute("Fctr", "18459185.240000"); // 1
    Leg_2_set.insert("18459185.240000");
    Leg_2.add_attribute("CrdRtg", "LegCreditRating_t_1347452591"); // 1
    Leg_2_set.insert("LegCreditRating_t_1347452591");
    Leg_2.add_attribute("Rgstry", "LegInstrRegistry_t_1756349116"); // 1
    Leg_2_set.insert("LegInstrRegistry_t_1756349116");
    Leg_2.add_attribute("Ctry", "979182491"); // 1
    Leg_2_set.insert("979182491");
    Leg_2.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_443027225"); // 1
    Leg_2_set.insert("LegStateOrProvinceOfIssue_t_443027225");
    Leg_2.add_attribute("Lcl", "LegLocaleOfIssue_t_1887061366"); // 1
    Leg_2_set.insert("LegLocaleOfIssue_t_1887061366");
    Leg_2.add_attribute("Redeem", "LegRedemptionDate_t_59049806"); // 1
    Leg_2_set.insert("LegRedemptionDate_t_59049806");
    Leg_2.add_attribute("Strk", "6383111.900000"); // 1
    Leg_2_set.insert("6383111.900000");
    Leg_2.add_attribute("StrkCcy", "EUR"); // 1
    Leg_2_set.insert("EUR");
    Leg_2.add_attribute("OptA", "1299364243"); // 1
    Leg_2_set.insert("1299364243");
    Leg_2.add_attribute("Cmult", "13054474.400000"); // 1
    Leg_2_set.insert("13054474.400000");
    Leg_2.add_attribute("MultTyp", "1"); // 1
    Leg_2_set.insert("1");
    Leg_2.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_2_set.insert("4");
    Leg_2.add_attribute("UOM", "USD"); // 1
    Leg_2_set.insert("USD");
    Leg_2.add_attribute("UOMQty", "16286725.830000"); // 1
    Leg_2_set.insert("16286725.830000");
    Leg_2.add_attribute("PxUOM", "Bcf"); // 1
    Leg_2_set.insert("Bcf");
    Leg_2.add_attribute("PxUOMQty", "3884245.000000"); // 1
    Leg_2_set.insert("3884245.000000");
    Leg_2.add_attribute("TmUnit", "Mo"); // 1
    Leg_2_set.insert("Mo");
    Leg_2.add_attribute("ExerStyle", "2"); // 1
    Leg_2_set.insert("2");
    Leg_2.add_attribute("CpnRt", "9231652.780000"); // 1
    Leg_2_set.insert("9231652.780000");
    Leg_2.add_attribute("Exch", "LegSecurityExchange_t_1984455963"); // 1
    Leg_2_set.insert("LegSecurityExchange_t_1984455963");
    Leg_2.add_attribute("Issr", "LegIssuer_t_879177356"); // 1
    Leg_2_set.insert("LegIssuer_t_879177356");
    Leg_2.add_attribute("EncLegIssrLen", "1797900168"); // 1
    Leg_2_set.insert("1797900168");
    Leg_2.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1011338632"); // 1
    Leg_2_set.insert("EncodedLegIssuer_t_1011338632");
    Leg_2.add_attribute("Desc", "LegSecurityDesc_t_1066903843"); // 1
    Leg_2_set.insert("LegSecurityDesc_t_1066903843");
    Leg_2.add_attribute("EncLegSecDescLen", "435781962"); // 1
    Leg_2_set.insert("435781962");
    Leg_2.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1074503640"); // 1
    Leg_2_set.insert("EncodedLegSecurityDesc_t_1074503640");
    Leg_2.add_attribute("RatioQty", "13442289.820000"); // 1
    Leg_2_set.insert("13442289.820000");
    Leg_2.add_attribute("Side", "A"); // 1
    Leg_2_set.insert("A");
    Leg_2.add_attribute("Ccy", "JPY"); // 1
    Leg_2_set.insert("JPY");
    Leg_2.add_attribute("Pool", "LegPool_t_125160217"); // 1
    Leg_2_set.insert("LegPool_t_125160217");
    Leg_2.add_attribute("Dated", "LegDatedDate_t_1365117028"); // 1
    Leg_2_set.insert("LegDatedDate_t_1365117028");
    Leg_2.add_attribute("CSetMo", "2021846350"); // 1
    Leg_2_set.insert("2021846350");
    Leg_2.add_attribute("IntAcrl", "LegInterestAccrualDate_t_568187442"); // 1
    Leg_2_set.insert("LegInterestAccrualDate_t_568187442");
    Leg_2.add_attribute("PutCall", "1104694747"); // 1
    Leg_2_set.insert("1104694747");
    Leg_2.add_attribute("LegOptionRatio", "20808961.560000"); // 1
    Leg_2_set.insert("20808961.560000");
    Leg_2.add_attribute("Px", "12064986.320000"); // 1
    Leg_2_set.insert("12064986.320000");
    all_values.push_back(Leg_2_set);
    all_compo_names.insert("Leg_2_set");

    {
      xml_element LegAID_2{"LegAID"};
      multiset<string> LegAID_2_set;
      LegAID_2.add_attribute("SecAltID", "LegSecurityAltID_t_1999908169"); // 2
      LegAID_2_set.insert("LegSecurityAltID_t_1999908169");
      LegAID_2.add_attribute("SecAltIDSrc", "A"); // 2
      LegAID_2_set.insert("A");
      all_values.push_back(LegAID_2_set);
      all_compo_names.insert("LegAID_2_set");

      Leg_2.add_element(LegAID_2);
    }
    elt.add_element(Leg_2);
  } // end Leg
  { // Leg
    xml_element Leg_3{"Leg"};
    multiset<string> Leg_3_set;
    Leg_3.add_attribute("Sym", "LegSymbol_t_358379228"); // 1
    Leg_3_set.insert("LegSymbol_t_358379228");
    Leg_3.add_attribute("Sfx", "WI"); // 1
    Leg_3_set.insert("WI");
    Leg_3.add_attribute("ID", "LegSecurityID_t_894370822"); // 1
    Leg_3_set.insert("LegSecurityID_t_894370822");
    Leg_3.add_attribute("Src", "6"); // 1
    Leg_3_set.insert("6");
    Leg_3.add_attribute("Prod", "8"); // 1
    Leg_3_set.insert("8");
    Leg_3.add_attribute("CFI", "LegCFICode_t_375559757"); // 1
    Leg_3_set.insert("LegCFICode_t_375559757");
    Leg_3.add_attribute("SecTyp", "TB"); // 1
    Leg_3_set.insert("TB");
    Leg_3.add_attribute("SecSubTyp", "LegSecuritySubType_t_406100793"); // 1
    Leg_3_set.insert("LegSecuritySubType_t_406100793");
    Leg_3.add_attribute("MMY", "1840231166"); // 1
    Leg_3_set.insert("1840231166");
    Leg_3.add_attribute("Mat", "LegMaturityDate_t_1756317024"); // 1
    Leg_3_set.insert("LegMaturityDate_t_1756317024");
    Leg_3.add_attribute("MatTm", "1329266071"); // 1
    Leg_3_set.insert("1329266071");
    Leg_3.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1677203482"); // 1
    Leg_3_set.insert("LegCouponPaymentDate_t_1677203482");
    Leg_3.add_attribute("Issued", "LegIssueDate_t_488010732"); // 1
    Leg_3_set.insert("LegIssueDate_t_488010732");
    Leg_3.add_attribute("RepoCollSecTyp", "979682592"); // 1
    Leg_3_set.insert("979682592");
    Leg_3.add_attribute("RepoTrm", "541058466"); // 1
    Leg_3_set.insert("541058466");
    Leg_3.add_attribute("RepoRt", "15549145.750000"); // 1
    Leg_3_set.insert("15549145.750000");
    Leg_3.add_attribute("Fctr", "14154645.540000"); // 1
    Leg_3_set.insert("14154645.540000");
    Leg_3.add_attribute("CrdRtg", "LegCreditRating_t_1615562106"); // 1
    Leg_3_set.insert("LegCreditRating_t_1615562106");
    Leg_3.add_attribute("Rgstry", "LegInstrRegistry_t_751659909"); // 1
    Leg_3_set.insert("LegInstrRegistry_t_751659909");
    Leg_3.add_attribute("Ctry", "193172179"); // 1
    Leg_3_set.insert("193172179");
    Leg_3.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1224330019"); // 1
    Leg_3_set.insert("LegStateOrProvinceOfIssue_t_1224330019");
    Leg_3.add_attribute("Lcl", "LegLocaleOfIssue_t_1794323768"); // 1
    Leg_3_set.insert("LegLocaleOfIssue_t_1794323768");
    Leg_3.add_attribute("Redeem", "LegRedemptionDate_t_318332396"); // 1
    Leg_3_set.insert("LegRedemptionDate_t_318332396");
    Leg_3.add_attribute("Strk", "4419633.990000"); // 1
    Leg_3_set.insert("4419633.990000");
    Leg_3.add_attribute("StrkCcy", "CHF"); // 1
    Leg_3_set.insert("CHF");
    Leg_3.add_attribute("OptA", "1546658146"); // 1
    Leg_3_set.insert("1546658146");
    Leg_3.add_attribute("Cmult", "16020989.780000"); // 1
    Leg_3_set.insert("16020989.780000");
    Leg_3.add_attribute("MultTyp", "2"); // 1
    Leg_3_set.insert("2");
    Leg_3.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_3_set.insert("3");
    Leg_3.add_attribute("UOM", "Gal"); // 1
    Leg_3_set.insert("Gal");
    Leg_3.add_attribute("UOMQty", "3039140.510000"); // 1
    Leg_3_set.insert("3039140.510000");
    Leg_3.add_attribute("PxUOM", "Bcf"); // 1
    Leg_3_set.insert("Bcf");
    Leg_3.add_attribute("PxUOMQty", "3615955.060000"); // 1
    Leg_3_set.insert("3615955.060000");
    Leg_3.add_attribute("TmUnit", "H"); // 1
    Leg_3_set.insert("H");
    Leg_3.add_attribute("ExerStyle", "2"); // 1
    Leg_3_set.insert("2");
    Leg_3.add_attribute("CpnRt", "7371552.630000"); // 1
    Leg_3_set.insert("7371552.630000");
    Leg_3.add_attribute("Exch", "LegSecurityExchange_t_2084897372"); // 1
    Leg_3_set.insert("LegSecurityExchange_t_2084897372");
    Leg_3.add_attribute("Issr", "LegIssuer_t_833248068"); // 1
    Leg_3_set.insert("LegIssuer_t_833248068");
    Leg_3.add_attribute("EncLegIssrLen", "429902781"); // 1
    Leg_3_set.insert("429902781");
    Leg_3.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1693730749"); // 1
    Leg_3_set.insert("EncodedLegIssuer_t_1693730749");
    Leg_3.add_attribute("Desc", "LegSecurityDesc_t_15030491"); // 1
    Leg_3_set.insert("LegSecurityDesc_t_15030491");
    Leg_3.add_attribute("EncLegSecDescLen", "2107106263"); // 1
    Leg_3_set.insert("2107106263");
    Leg_3.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_34257833"); // 1
    Leg_3_set.insert("EncodedLegSecurityDesc_t_34257833");
    Leg_3.add_attribute("RatioQty", "9947130.830000"); // 1
    Leg_3_set.insert("9947130.830000");
    Leg_3.add_attribute("Side", "B"); // 1
    Leg_3_set.insert("B");
    Leg_3.add_attribute("Ccy", "CHF"); // 1
    Leg_3_set.insert("CHF");
    Leg_3.add_attribute("Pool", "LegPool_t_2116243188"); // 1
    Leg_3_set.insert("LegPool_t_2116243188");
    Leg_3.add_attribute("Dated", "LegDatedDate_t_193348670"); // 1
    Leg_3_set.insert("LegDatedDate_t_193348670");
    Leg_3.add_attribute("CSetMo", "455866169"); // 1
    Leg_3_set.insert("455866169");
    Leg_3.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1193089559"); // 1
    Leg_3_set.insert("LegInterestAccrualDate_t_1193089559");
    Leg_3.add_attribute("PutCall", "1987672438"); // 1
    Leg_3_set.insert("1987672438");
    Leg_3.add_attribute("LegOptionRatio", "7741985.650000"); // 1
    Leg_3_set.insert("7741985.650000");
    Leg_3.add_attribute("Px", "16350529.590000"); // 1
    Leg_3_set.insert("16350529.590000");
    all_values.push_back(Leg_3_set);
    all_compo_names.insert("Leg_3_set");

    {
      xml_element LegAID_3{"LegAID"};
      multiset<string> LegAID_3_set;
      LegAID_3.add_attribute("SecAltID", "LegSecurityAltID_t_1508875260"); // 2
      LegAID_3_set.insert("LegSecurityAltID_t_1508875260");
      LegAID_3.add_attribute("SecAltIDSrc", "5"); // 2
      LegAID_3_set.insert("5");
      all_values.push_back(LegAID_3_set);
      all_compo_names.insert("LegAID_3_set");

      Leg_3.add_element(LegAID_3);
    }
    elt.add_element(Leg_3);
  } // end Leg
  { // Leg
    xml_element Leg_4{"Leg"};
    multiset<string> Leg_4_set;
    Leg_4.add_attribute("Sym", "LegSymbol_t_1034227457"); // 1
    Leg_4_set.insert("LegSymbol_t_1034227457");
    Leg_4.add_attribute("Sfx", "WI"); // 1
    Leg_4_set.insert("WI");
    Leg_4.add_attribute("ID", "LegSecurityID_t_1606253228"); // 1
    Leg_4_set.insert("LegSecurityID_t_1606253228");
    Leg_4.add_attribute("Src", "E"); // 1
    Leg_4_set.insert("E");
    Leg_4.add_attribute("Prod", "12"); // 1
    Leg_4_set.insert("12");
    Leg_4.add_attribute("CFI", "LegCFICode_t_1910167279"); // 1
    Leg_4_set.insert("LegCFICode_t_1910167279");
    Leg_4.add_attribute("SecTyp", "MIO"); // 1
    Leg_4_set.insert("MIO");
    Leg_4.add_attribute("SecSubTyp", "LegSecuritySubType_t_792310781"); // 1
    Leg_4_set.insert("LegSecuritySubType_t_792310781");
    Leg_4.add_attribute("MMY", "446248410"); // 1
    Leg_4_set.insert("446248410");
    Leg_4.add_attribute("Mat", "LegMaturityDate_t_1122444733"); // 1
    Leg_4_set.insert("LegMaturityDate_t_1122444733");
    Leg_4.add_attribute("MatTm", "1529466044"); // 1
    Leg_4_set.insert("1529466044");
    Leg_4.add_attribute("CpnPmt", "LegCouponPaymentDate_t_383662135"); // 1
    Leg_4_set.insert("LegCouponPaymentDate_t_383662135");
    Leg_4.add_attribute("Issued", "LegIssueDate_t_1955692801"); // 1
    Leg_4_set.insert("LegIssueDate_t_1955692801");
    Leg_4.add_attribute("RepoCollSecTyp", "1959368825"); // 1
    Leg_4_set.insert("1959368825");
    Leg_4.add_attribute("RepoTrm", "2077392884"); // 1
    Leg_4_set.insert("2077392884");
    Leg_4.add_attribute("RepoRt", "19707232.930000"); // 1
    Leg_4_set.insert("19707232.930000");
    Leg_4.add_attribute("Fctr", "19189914.410000"); // 1
    Leg_4_set.insert("19189914.410000");
    Leg_4.add_attribute("CrdRtg", "LegCreditRating_t_2111650717"); // 1
    Leg_4_set.insert("LegCreditRating_t_2111650717");
    Leg_4.add_attribute("Rgstry", "LegInstrRegistry_t_817952728"); // 1
    Leg_4_set.insert("LegInstrRegistry_t_817952728");
    Leg_4.add_attribute("Ctry", "272188875"); // 1
    Leg_4_set.insert("272188875");
    Leg_4.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1553339478"); // 1
    Leg_4_set.insert("LegStateOrProvinceOfIssue_t_1553339478");
    Leg_4.add_attribute("Lcl", "LegLocaleOfIssue_t_1080646718"); // 1
    Leg_4_set.insert("LegLocaleOfIssue_t_1080646718");
    Leg_4.add_attribute("Redeem", "LegRedemptionDate_t_240948415"); // 1
    Leg_4_set.insert("LegRedemptionDate_t_240948415");
    Leg_4.add_attribute("Strk", "17466881.490000"); // 1
    Leg_4_set.insert("17466881.490000");
    Leg_4.add_attribute("StrkCcy", "EUR"); // 1
    Leg_4_set.insert("EUR");
    Leg_4.add_attribute("OptA", "1586876939"); // 1
    Leg_4_set.insert("1586876939");
    Leg_4.add_attribute("Cmult", "1632278.040000"); // 1
    Leg_4_set.insert("1632278.040000");
    Leg_4.add_attribute("MultTyp", "2"); // 1
    Leg_4_set.insert("2");
    Leg_4.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_4_set.insert("2");
    Leg_4.add_attribute("UOM", "lbs"); // 1
    Leg_4_set.insert("lbs");
    Leg_4.add_attribute("UOMQty", "19558347.430000"); // 1
    Leg_4_set.insert("19558347.430000");
    Leg_4.add_attribute("PxUOM", "oz_tr"); // 1
    Leg_4_set.insert("oz_tr");
    Leg_4.add_attribute("PxUOMQty", "12827157.890000"); // 1
    Leg_4_set.insert("12827157.890000");
    Leg_4.add_attribute("TmUnit", "S"); // 1
    Leg_4_set.insert("S");
    Leg_4.add_attribute("ExerStyle", "1"); // 1
    Leg_4_set.insert("1");
    Leg_4.add_attribute("CpnRt", "10453994.200000"); // 1
    Leg_4_set.insert("10453994.200000");
    Leg_4.add_attribute("Exch", "LegSecurityExchange_t_789475032"); // 1
    Leg_4_set.insert("LegSecurityExchange_t_789475032");
    Leg_4.add_attribute("Issr", "LegIssuer_t_987301551"); // 1
    Leg_4_set.insert("LegIssuer_t_987301551");
    Leg_4.add_attribute("EncLegIssrLen", "1491647831"); // 1
    Leg_4_set.insert("1491647831");
    Leg_4.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1911919765"); // 1
    Leg_4_set.insert("EncodedLegIssuer_t_1911919765");
    Leg_4.add_attribute("Desc", "LegSecurityDesc_t_369283947"); // 1
    Leg_4_set.insert("LegSecurityDesc_t_369283947");
    Leg_4.add_attribute("EncLegSecDescLen", "1875309966"); // 1
    Leg_4_set.insert("1875309966");
    Leg_4.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1720128919"); // 1
    Leg_4_set.insert("EncodedLegSecurityDesc_t_1720128919");
    Leg_4.add_attribute("RatioQty", "1811691.240000"); // 1
    Leg_4_set.insert("1811691.240000");
    Leg_4.add_attribute("Side", "3"); // 1
    Leg_4_set.insert("3");
    Leg_4.add_attribute("Ccy", "CAN"); // 1
    Leg_4_set.insert("CAN");
    Leg_4.add_attribute("Pool", "LegPool_t_1769386271"); // 1
    Leg_4_set.insert("LegPool_t_1769386271");
    Leg_4.add_attribute("Dated", "LegDatedDate_t_213837644"); // 1
    Leg_4_set.insert("LegDatedDate_t_213837644");
    Leg_4.add_attribute("CSetMo", "224865792"); // 1
    Leg_4_set.insert("224865792");
    Leg_4.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1175242102"); // 1
    Leg_4_set.insert("LegInterestAccrualDate_t_1175242102");
    Leg_4.add_attribute("PutCall", "1294484362"); // 1
    Leg_4_set.insert("1294484362");
    Leg_4.add_attribute("LegOptionRatio", "4658142.080000"); // 1
    Leg_4_set.insert("4658142.080000");
    Leg_4.add_attribute("Px", "7744466.030000"); // 1
    Leg_4_set.insert("7744466.030000");
    all_values.push_back(Leg_4_set);
    all_compo_names.insert("Leg_4_set");

    {
      xml_element LegAID_4{"LegAID"};
      multiset<string> LegAID_4_set;
      LegAID_4.add_attribute("SecAltID", "LegSecurityAltID_t_683513601"); // 2
      LegAID_4_set.insert("LegSecurityAltID_t_683513601");
      LegAID_4.add_attribute("SecAltIDSrc", "A"); // 2
      LegAID_4_set.insert("A");
      all_values.push_back(LegAID_4_set);
      all_compo_names.insert("LegAID_4_set");

      Leg_4.add_element(LegAID_4);
    }
    elt.add_element(Leg_4);
  } // end Leg
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_0{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_0_set;
    SprdBnchmkCurve_0.add_attribute("Spread", "2138398.940000"); // 1
    SprdBnchmkCurve_0_set.insert("2138398.940000");
    SprdBnchmkCurve_0.add_attribute("Ccy", "CHF"); // 1
    SprdBnchmkCurve_0_set.insert("CHF");
    SprdBnchmkCurve_0.add_attribute("Name", "MuniAAA"); // 1
    SprdBnchmkCurve_0_set.insert("MuniAAA");
    SprdBnchmkCurve_0.add_attribute("Point", "BenchmarkCurvePoint_t_523203967"); // 1
    SprdBnchmkCurve_0_set.insert("BenchmarkCurvePoint_t_523203967");
    SprdBnchmkCurve_0.add_attribute("Px", "4823269.160000"); // 1
    SprdBnchmkCurve_0_set.insert("4823269.160000");
    SprdBnchmkCurve_0.add_attribute("PxTyp", "8"); // 1
    SprdBnchmkCurve_0_set.insert("8");
    SprdBnchmkCurve_0.add_attribute("SecID", "BenchmarkSecurityID_t_1805919756"); // 1
    SprdBnchmkCurve_0_set.insert("BenchmarkSecurityID_t_1805919756");
    SprdBnchmkCurve_0.add_attribute("SecIDSrc", "C"); // 1
    SprdBnchmkCurve_0_set.insert("C");
    all_values.push_back(SprdBnchmkCurve_0_set);
    all_compo_names.insert("SprdBnchmkCurve_0_set");

    elt.add_element(SprdBnchmkCurve_0);
  } // end SprdBnchmkCurve
  { // Pty
    xml_element Pty_15{"Pty"};
    multiset<string> Pty_15_set;
    Pty_15.add_attribute("ID", "PartyID_t_703835528"); // 1
    Pty_15_set.insert("PartyID_t_703835528");
    Pty_15.add_attribute("Src", "4"); // 1
    Pty_15_set.insert("4");
    Pty_15.add_attribute("R", "72"); // 1
    Pty_15_set.insert("72");
    all_values.push_back(Pty_15_set);
    all_compo_names.insert("Pty_15_set");

    {
      xml_element Sub_15{"Sub"};
      multiset<string> Sub_15_set;
      Sub_15.add_attribute("ID", "PartySubID_t_47999711"); // 2
      Sub_15_set.insert("PartySubID_t_47999711");
      Sub_15.add_attribute("Typ", "20"); // 2
      Sub_15_set.insert("20");
      all_values.push_back(Sub_15_set);
      all_compo_names.insert("Sub_15_set");

      Pty_15.add_element(Sub_15);
    }
    elt.add_element(Pty_15);
  } // end Pty
  { // Pty
    xml_element Pty_16{"Pty"};
    multiset<string> Pty_16_set;
    Pty_16.add_attribute("ID", "PartyID_t_330476561"); // 1
    Pty_16_set.insert("PartyID_t_330476561");
    Pty_16.add_attribute("Src", "C"); // 1
    Pty_16_set.insert("C");
    Pty_16.add_attribute("R", "64"); // 1
    Pty_16_set.insert("64");
    all_values.push_back(Pty_16_set);
    all_compo_names.insert("Pty_16_set");

    {
      xml_element Sub_16{"Sub"};
      multiset<string> Sub_16_set;
      Sub_16.add_attribute("ID", "PartySubID_t_511645686"); // 2
      Sub_16_set.insert("PartySubID_t_511645686");
      Sub_16.add_attribute("Typ", "26"); // 2
      Sub_16_set.insert("26");
      all_values.push_back(Sub_16_set);
      all_compo_names.insert("Sub_16_set");

      Pty_16.add_element(Sub_16);
    }
    elt.add_element(Pty_16);
  } // end Pty
  { // Stip
    xml_element Stip_3{"Stip"};
    multiset<string> Stip_3_set;
    Stip_3.add_attribute("Typ", "RATING"); // 1
    Stip_3_set.insert("RATING");
    Stip_3.add_attribute("Val", "StipulationValue_t_1202947855"); // 1
    Stip_3_set.insert("StipulationValue_t_1202947855");
    all_values.push_back(Stip_3_set);
    all_compo_names.insert("Stip_3_set");

    elt.add_element(Stip_3);
  } // end Stip
  { // Yield
    xml_element Yield_0{"Yield"};
    multiset<string> Yield_0_set;
    Yield_0.add_attribute("Typ", "SIMPLE"); // 1
    Yield_0_set.insert("SIMPLE");
    Yield_0.add_attribute("Yld", "6891883.960000"); // 1
    Yield_0_set.insert("6891883.960000");
    Yield_0.add_attribute("CalcDt", "YieldCalcDate_t_230706309"); // 1
    Yield_0_set.insert("YieldCalcDate_t_230706309");
    Yield_0.add_attribute("RedDt", "YieldRedemptionDate_t_1607267833"); // 1
    Yield_0_set.insert("YieldRedemptionDate_t_1607267833");
    Yield_0.add_attribute("RedPx", "11550026.040000"); // 1
    Yield_0_set.insert("11550026.040000");
    Yield_0.add_attribute("RedPxTyp", "7"); // 1
    Yield_0_set.insert("7");
    all_values.push_back(Yield_0_set);
    all_compo_names.insert("Yield_0_set");

    elt.add_element(Yield_0);
  } // end Yield
  { // Amt
    xml_element Amt_0{"Amt"};
    multiset<string> Amt_0_set;
    Amt_0.add_attribute("Typ", "CMTM"); // 1
    Amt_0_set.insert("CMTM");
    Amt_0.add_attribute("Amt", "PosAmt_t_1218992806"); // 1
    Amt_0_set.insert("PosAmt_t_1218992806");
    Amt_0.add_attribute("Ccy", "PositionCurrency_t_990039192"); // 1
    Amt_0_set.insert("PositionCurrency_t_990039192");
    all_values.push_back(Amt_0_set);
    all_compo_names.insert("Amt_0_set");

    elt.add_element(Amt_0);
  } // end Amt
  { // Amt
    xml_element Amt_1{"Amt"};
    multiset<string> Amt_1_set;
    Amt_1.add_attribute("Typ", "BANK"); // 1
    Amt_1_set.insert("BANK");
    Amt_1.add_attribute("Amt", "PosAmt_t_233617605"); // 1
    Amt_1_set.insert("PosAmt_t_233617605");
    Amt_1.add_attribute("Ccy", "PositionCurrency_t_1513243159"); // 1
    Amt_1_set.insert("PositionCurrency_t_1513243159");
    all_values.push_back(Amt_1_set);
    all_compo_names.insert("Amt_1_set");

    elt.add_element(Amt_1);
  } // end Amt
  { // Amt
    xml_element Amt_2{"Amt"};
    multiset<string> Amt_2_set;
    Amt_2.add_attribute("Typ", "IACPN"); // 1
    Amt_2_set.insert("IACPN");
    Amt_2.add_attribute("Amt", "PosAmt_t_1160001546"); // 1
    Amt_2_set.insert("PosAmt_t_1160001546");
    Amt_2.add_attribute("Ccy", "PositionCurrency_t_1171679267"); // 1
    Amt_2_set.insert("PositionCurrency_t_1171679267");
    all_values.push_back(Amt_2_set);
    all_compo_names.insert("Amt_2_set");

    elt.add_element(Amt_2);
  } // end Amt
  { // Alloc
    xml_element Alloc_0{"Alloc"};
    multiset<string> Alloc_0_set;
    Alloc_0.add_attribute("Acct", "AllocAccount_t_133892610"); // 1
    Alloc_0_set.insert("AllocAccount_t_133892610");
    Alloc_0.add_attribute("ActIDSrc", "3"); // 1
    Alloc_0_set.insert("3");
    Alloc_0.add_attribute("MtchStat", "2"); // 1
    Alloc_0_set.insert("2");
    Alloc_0.add_attribute("Px", "950852.240000"); // 1
    Alloc_0_set.insert("950852.240000");
    Alloc_0.add_attribute("Qty", "19235145.070000"); // 1
    Alloc_0_set.insert("19235145.070000");
    Alloc_0.add_attribute("IndAllocID", "IndividualAllocID_t_841606230"); // 1
    Alloc_0_set.insert("IndividualAllocID_t_841606230");
    Alloc_0.add_attribute("ProcCode", "6"); // 1
    Alloc_0_set.insert("6");
    Alloc_0.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_1699340537"); // 1
    Alloc_0_set.insert("SecondaryIndividualAllocID_t_1699340537");
    Alloc_0.add_attribute("Meth", "3"); // 1
    Alloc_0_set.insert("3");
    Alloc_0.add_attribute("CustCpcty", "AllocCustomerCapacity_t_937207472"); // 1
    Alloc_0_set.insert("AllocCustomerCapacity_t_937207472");
    Alloc_0.add_attribute("AllocPosEfct", "O"); // 1
    Alloc_0_set.insert("O");
    Alloc_0.add_attribute("Typ", "1"); // 1
    Alloc_0_set.insert("1");
    Alloc_0.add_attribute("NotifyBrkrOfCredit", "Y"); // 1
    Alloc_0_set.insert("Y");
    Alloc_0.add_attribute("HandlInst", "3"); // 1
    Alloc_0_set.insert("3");
    Alloc_0.add_attribute("Txt", "AllocText_t_1956396437"); // 1
    Alloc_0_set.insert("AllocText_t_1956396437");
    Alloc_0.add_attribute("EncAllocTextLen", "2090718471"); // 1
    Alloc_0_set.insert("2090718471");
    Alloc_0.add_attribute("EncAllocText", "EncodedAllocText_t_419072636"); // 1
    Alloc_0_set.insert("EncodedAllocText_t_419072636");
    Alloc_0.add_attribute("AvgPx", "14161806.220000"); // 1
    Alloc_0_set.insert("14161806.220000");
    Alloc_0.add_attribute("NetMny", "AllocNetMoney_t_1098237427"); // 1
    Alloc_0_set.insert("AllocNetMoney_t_1098237427");
    Alloc_0.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1424225548"); // 1
    Alloc_0_set.insert("SettlCurrAmt_t_1424225548");
    Alloc_0.add_attribute("SettlCcyAmt", "AllocSettlCurrAmt_t_1559478408"); // 1
    Alloc_0_set.insert("AllocSettlCurrAmt_t_1559478408");
    Alloc_0.add_attribute("SettlCcy", "EUR"); // 1
    Alloc_0_set.insert("EUR");
    Alloc_0.add_attribute("AllocSettlCcy", "JPY"); // 1
    Alloc_0_set.insert("JPY");
    Alloc_0.add_attribute("SettlCurrFxRt", "7293523.120000"); // 1
    Alloc_0_set.insert("7293523.120000");
    Alloc_0.add_attribute("SettlCurrFxRtCalc", "M"); // 1
    Alloc_0_set.insert("M");
    Alloc_0.add_attribute("AcrdIntAmt", "AllocAccruedInterestAmt_t_1355662107"); // 1
    Alloc_0_set.insert("AllocAccruedInterestAmt_t_1355662107");
    Alloc_0.add_attribute("IntAtMat", "AllocInterestAtMaturity_t_1889353858"); // 1
    Alloc_0_set.insert("AllocInterestAtMaturity_t_1889353858");
    Alloc_0.add_attribute("ClrFeeInd", "3"); // 1
    Alloc_0_set.insert("3");
    Alloc_0.add_attribute("SettlInstTyp", "0"); // 1
    Alloc_0_set.insert("0");
    all_values.push_back(Alloc_0_set);
    all_compo_names.insert("Alloc_0_set");

    {
      xml_element Pty_17{"Pty"};
      multiset<string> Pty_17_set;
      Pty_17.add_attribute("ID", "NestedPartyID_t_2023246468"); // 2
      Pty_17_set.insert("NestedPartyID_t_2023246468");
      Pty_17.add_attribute("Src", "H"); // 2
      Pty_17_set.insert("H");
      Pty_17.add_attribute("R", "59"); // 2
      Pty_17_set.insert("59");
      all_values.push_back(Pty_17_set);
      all_compo_names.insert("Pty_17_set");

      {
        xml_element Sub_17{"Sub"};
        multiset<string> Sub_17_set;
        Sub_17.add_attribute("ID", "NestedPartySubID_t_2118331693"); // 3
        Sub_17_set.insert("NestedPartySubID_t_2118331693");
        Sub_17.add_attribute("Typ", "5"); // 3
        Sub_17_set.insert("5");
        all_values.push_back(Sub_17_set);
        all_compo_names.insert("Sub_17_set");

        Pty_17.add_element(Sub_17);
      }
      Alloc_0.add_element(Pty_17);
    }
    {
      xml_element Comm_0{"Comm"};
      multiset<string> Comm_0_set;
      Comm_0.add_attribute("Comm", "Commission_t_253669999"); // 2
      Comm_0_set.insert("Commission_t_253669999");
      Comm_0.add_attribute("CommTyp", "2"); // 2
      Comm_0_set.insert("2");
      Comm_0.add_attribute("Ccy", "CHF"); // 2
      Comm_0_set.insert("CHF");
      Comm_0.add_attribute("FundRenewWaiv", "Y"); // 2
      Comm_0_set.insert("Y");
      all_values.push_back(Comm_0_set);
      all_compo_names.insert("Comm_0_set");

      Alloc_0.add_element(Comm_0);
    }
    {
      xml_element MiscFees_0{"MiscFees"};
      multiset<string> MiscFees_0_set;
      MiscFees_0.add_attribute("Amt", "MiscFeeAmt_t_1128293749"); // 2
      MiscFees_0_set.insert("MiscFeeAmt_t_1128293749");
      MiscFees_0.add_attribute("Curr", "USD"); // 2
      MiscFees_0_set.insert("USD");
      MiscFees_0.add_attribute("Typ", "2"); // 2
      MiscFees_0_set.insert("2");
      MiscFees_0.add_attribute("Basis", "1"); // 2
      MiscFees_0_set.insert("1");
      all_values.push_back(MiscFees_0_set);
      all_compo_names.insert("MiscFees_0_set");

      Alloc_0.add_element(MiscFees_0);
    }
    {
      xml_element ClrInst_0{"ClrInst"};
      multiset<string> ClrInst_0_set;
      ClrInst_0.add_attribute("ClrngInstrctn", "12"); // 2
      ClrInst_0_set.insert("12");
      all_values.push_back(ClrInst_0_set);
      all_compo_names.insert("ClrInst_0_set");

      Alloc_0.add_element(ClrInst_0);
    }
    {
      xml_element SetInstr_0{"SetInstr"};
      multiset<string> SetInstr_0_set;
      SetInstr_0.add_attribute("DlvryTyp", "1"); // 2
      SetInstr_0_set.insert("1");
      SetInstr_0.add_attribute("StandInstDbTyp", "1"); // 2
      SetInstr_0_set.insert("1");
      SetInstr_0.add_attribute("StandInstDbName", "StandInstDbName_t_1629135981"); // 2
      SetInstr_0_set.insert("StandInstDbName_t_1629135981");
      SetInstr_0.add_attribute("StandInstDbID", "StandInstDbID_t_1012474613"); // 2
      SetInstr_0_set.insert("StandInstDbID_t_1012474613");
      all_values.push_back(SetInstr_0_set);
      all_compo_names.insert("SetInstr_0_set");

      {
        xml_element DlvInst_0{"DlvInst"};
        multiset<string> DlvInst_0_set;
        DlvInst_0.add_attribute("InstSrc", "1"); // 3
        DlvInst_0_set.insert("1");
        DlvInst_0.add_attribute("InstTyp", "C"); // 3
        DlvInst_0_set.insert("C");
        all_values.push_back(DlvInst_0_set);
        all_compo_names.insert("DlvInst_0_set");

        {
          xml_element Pty_18{"Pty"};
          multiset<string> Pty_18_set;
          Pty_18.add_attribute("ID", "SettlPartyID_t_1508209320"); // 4
          Pty_18_set.insert("SettlPartyID_t_1508209320");
          Pty_18.add_attribute("Src", "1"); // 4
          Pty_18_set.insert("1");
          Pty_18.add_attribute("R", "38"); // 4
          Pty_18_set.insert("38");
          all_values.push_back(Pty_18_set);
          all_compo_names.insert("Pty_18_set");

          {
            xml_element Sub_18{"Sub"};
            multiset<string> Sub_18_set;
            Sub_18.add_attribute("ID", "SettlPartySubID_t_90077984"); // 5
            Sub_18_set.insert("SettlPartySubID_t_90077984");
            Sub_18.add_attribute("Typ", "29"); // 5
            Sub_18_set.insert("29");
            all_values.push_back(Sub_18_set);
            all_compo_names.insert("Sub_18_set");

            Pty_18.add_element(Sub_18);
          }
          DlvInst_0.add_element(Pty_18);
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
    Alloc_1.add_attribute("Acct", "AllocAccount_t_2134911237"); // 1
    Alloc_1_set.insert("AllocAccount_t_2134911237");
    Alloc_1.add_attribute("ActIDSrc", "2"); // 1
    Alloc_1_set.insert("2");
    Alloc_1.add_attribute("MtchStat", "0"); // 1
    Alloc_1_set.insert("0");
    Alloc_1.add_attribute("Px", "18357844.140000"); // 1
    Alloc_1_set.insert("18357844.140000");
    Alloc_1.add_attribute("Qty", "18551946.630000"); // 1
    Alloc_1_set.insert("18551946.630000");
    Alloc_1.add_attribute("IndAllocID", "IndividualAllocID_t_1560875011"); // 1
    Alloc_1_set.insert("IndividualAllocID_t_1560875011");
    Alloc_1.add_attribute("ProcCode", "1"); // 1
    Alloc_1_set.insert("1");
    Alloc_1.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_1826042708"); // 1
    Alloc_1_set.insert("SecondaryIndividualAllocID_t_1826042708");
    Alloc_1.add_attribute("Meth", "2"); // 1
    Alloc_1_set.insert("2");
    Alloc_1.add_attribute("CustCpcty", "AllocCustomerCapacity_t_1501518182"); // 1
    Alloc_1_set.insert("AllocCustomerCapacity_t_1501518182");
    Alloc_1.add_attribute("AllocPosEfct", "F"); // 1
    Alloc_1_set.insert("F");
    Alloc_1.add_attribute("Typ", "2"); // 1
    Alloc_1_set.insert("2");
    Alloc_1.add_attribute("NotifyBrkrOfCredit", "Y"); // 1
    Alloc_1_set.insert("Y");
    Alloc_1.add_attribute("HandlInst", "2"); // 1
    Alloc_1_set.insert("2");
    Alloc_1.add_attribute("Txt", "AllocText_t_980611480"); // 1
    Alloc_1_set.insert("AllocText_t_980611480");
    Alloc_1.add_attribute("EncAllocTextLen", "299354483"); // 1
    Alloc_1_set.insert("299354483");
    Alloc_1.add_attribute("EncAllocText", "EncodedAllocText_t_1996249925"); // 1
    Alloc_1_set.insert("EncodedAllocText_t_1996249925");
    Alloc_1.add_attribute("AvgPx", "1497879.080000"); // 1
    Alloc_1_set.insert("1497879.080000");
    Alloc_1.add_attribute("NetMny", "AllocNetMoney_t_1402733730"); // 1
    Alloc_1_set.insert("AllocNetMoney_t_1402733730");
    Alloc_1.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_379664831"); // 1
    Alloc_1_set.insert("SettlCurrAmt_t_379664831");
    Alloc_1.add_attribute("SettlCcyAmt", "AllocSettlCurrAmt_t_1885520621"); // 1
    Alloc_1_set.insert("AllocSettlCurrAmt_t_1885520621");
    Alloc_1.add_attribute("SettlCcy", "GBP"); // 1
    Alloc_1_set.insert("GBP");
    Alloc_1.add_attribute("AllocSettlCcy", "CAN"); // 1
    Alloc_1_set.insert("CAN");
    Alloc_1.add_attribute("SettlCurrFxRt", "13485780.640000"); // 1
    Alloc_1_set.insert("13485780.640000");
    Alloc_1.add_attribute("SettlCurrFxRtCalc", "D"); // 1
    Alloc_1_set.insert("D");
    Alloc_1.add_attribute("AcrdIntAmt", "AllocAccruedInterestAmt_t_1744985867"); // 1
    Alloc_1_set.insert("AllocAccruedInterestAmt_t_1744985867");
    Alloc_1.add_attribute("IntAtMat", "AllocInterestAtMaturity_t_2127827195"); // 1
    Alloc_1_set.insert("AllocInterestAtMaturity_t_2127827195");
    Alloc_1.add_attribute("ClrFeeInd", "5"); // 1
    Alloc_1_set.insert("5");
    Alloc_1.add_attribute("SettlInstTyp", "1"); // 1
    Alloc_1_set.insert("1");
    all_values.push_back(Alloc_1_set);
    all_compo_names.insert("Alloc_1_set");

    {
      xml_element Pty_19{"Pty"};
      multiset<string> Pty_19_set;
      Pty_19.add_attribute("ID", "NestedPartyID_t_2115254784"); // 2
      Pty_19_set.insert("NestedPartyID_t_2115254784");
      Pty_19.add_attribute("Src", "G"); // 2
      Pty_19_set.insert("G");
      Pty_19.add_attribute("R", "67"); // 2
      Pty_19_set.insert("67");
      all_values.push_back(Pty_19_set);
      all_compo_names.insert("Pty_19_set");

      {
        xml_element Sub_19{"Sub"};
        multiset<string> Sub_19_set;
        Sub_19.add_attribute("ID", "NestedPartySubID_t_1803555551"); // 3
        Sub_19_set.insert("NestedPartySubID_t_1803555551");
        Sub_19.add_attribute("Typ", "12"); // 3
        Sub_19_set.insert("12");
        all_values.push_back(Sub_19_set);
        all_compo_names.insert("Sub_19_set");

        Pty_19.add_element(Sub_19);
      }
      Alloc_1.add_element(Pty_19);
    }
    {
      xml_element Comm_1{"Comm"};
      multiset<string> Comm_1_set;
      Comm_1.add_attribute("Comm", "Commission_t_2005646760"); // 2
      Comm_1_set.insert("Commission_t_2005646760");
      Comm_1.add_attribute("CommTyp", "5"); // 2
      Comm_1_set.insert("5");
      Comm_1.add_attribute("Ccy", "CHF"); // 2
      Comm_1_set.insert("CHF");
      Comm_1.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_1_set.insert("N");
      all_values.push_back(Comm_1_set);
      all_compo_names.insert("Comm_1_set");

      Alloc_1.add_element(Comm_1);
    }
    {
      xml_element MiscFees_1{"MiscFees"};
      multiset<string> MiscFees_1_set;
      MiscFees_1.add_attribute("Amt", "MiscFeeAmt_t_1641986054"); // 2
      MiscFees_1_set.insert("MiscFeeAmt_t_1641986054");
      MiscFees_1.add_attribute("Curr", "EUR"); // 2
      MiscFees_1_set.insert("EUR");
      MiscFees_1.add_attribute("Typ", "7"); // 2
      MiscFees_1_set.insert("7");
      MiscFees_1.add_attribute("Basis", "2"); // 2
      MiscFees_1_set.insert("2");
      all_values.push_back(MiscFees_1_set);
      all_compo_names.insert("MiscFees_1_set");

      Alloc_1.add_element(MiscFees_1);
    }
    {
      xml_element ClrInst_1{"ClrInst"};
      multiset<string> ClrInst_1_set;
      ClrInst_1.add_attribute("ClrngInstrctn", "3"); // 2
      ClrInst_1_set.insert("3");
      all_values.push_back(ClrInst_1_set);
      all_compo_names.insert("ClrInst_1_set");

      Alloc_1.add_element(ClrInst_1);
    }
    {
      xml_element SetInstr_1{"SetInstr"};
      multiset<string> SetInstr_1_set;
      SetInstr_1.add_attribute("DlvryTyp", "2"); // 2
      SetInstr_1_set.insert("2");
      SetInstr_1.add_attribute("StandInstDbTyp", "4"); // 2
      SetInstr_1_set.insert("4");
      SetInstr_1.add_attribute("StandInstDbName", "StandInstDbName_t_964930859"); // 2
      SetInstr_1_set.insert("StandInstDbName_t_964930859");
      SetInstr_1.add_attribute("StandInstDbID", "StandInstDbID_t_1131519709"); // 2
      SetInstr_1_set.insert("StandInstDbID_t_1131519709");
      all_values.push_back(SetInstr_1_set);
      all_compo_names.insert("SetInstr_1_set");

      {
        xml_element DlvInst_1{"DlvInst"};
        multiset<string> DlvInst_1_set;
        DlvInst_1.add_attribute("InstSrc", "3"); // 3
        DlvInst_1_set.insert("3");
        DlvInst_1.add_attribute("InstTyp", "S"); // 3
        DlvInst_1_set.insert("S");
        all_values.push_back(DlvInst_1_set);
        all_compo_names.insert("DlvInst_1_set");

        {
          xml_element Pty_20{"Pty"};
          multiset<string> Pty_20_set;
          Pty_20.add_attribute("ID", "SettlPartyID_t_992836873"); // 4
          Pty_20_set.insert("SettlPartyID_t_992836873");
          Pty_20.add_attribute("Src", "6"); // 4
          Pty_20_set.insert("6");
          Pty_20.add_attribute("R", "36"); // 4
          Pty_20_set.insert("36");
          all_values.push_back(Pty_20_set);
          all_compo_names.insert("Pty_20_set");

          {
            xml_element Sub_20{"Sub"};
            multiset<string> Sub_20_set;
            Sub_20.add_attribute("ID", "SettlPartySubID_t_193931290"); // 5
            Sub_20_set.insert("SettlPartySubID_t_193931290");
            Sub_20.add_attribute("Typ", "20"); // 5
            Sub_20_set.insert("20");
            all_values.push_back(Sub_20_set);
            all_compo_names.insert("Sub_20_set");

            Pty_20.add_element(Sub_20);
          }
          DlvInst_1.add_element(Pty_20);
        }
        SetInstr_1.add_element(DlvInst_1);
      }
      Alloc_1.add_element(SetInstr_1);
    }
    elt.add_element(Alloc_1);
  } // end Alloc
  { // Alloc
    xml_element Alloc_2{"Alloc"};
    multiset<string> Alloc_2_set;
    Alloc_2.add_attribute("Acct", "AllocAccount_t_1748640315"); // 1
    Alloc_2_set.insert("AllocAccount_t_1748640315");
    Alloc_2.add_attribute("ActIDSrc", "2"); // 1
    Alloc_2_set.insert("2");
    Alloc_2.add_attribute("MtchStat", "1"); // 1
    Alloc_2_set.insert("1");
    Alloc_2.add_attribute("Px", "13000409.340000"); // 1
    Alloc_2_set.insert("13000409.340000");
    Alloc_2.add_attribute("Qty", "1420459.730000"); // 1
    Alloc_2_set.insert("1420459.730000");
    Alloc_2.add_attribute("IndAllocID", "IndividualAllocID_t_1532170837"); // 1
    Alloc_2_set.insert("IndividualAllocID_t_1532170837");
    Alloc_2.add_attribute("ProcCode", "5"); // 1
    Alloc_2_set.insert("5");
    Alloc_2.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_1945601524"); // 1
    Alloc_2_set.insert("SecondaryIndividualAllocID_t_1945601524");
    Alloc_2.add_attribute("Meth", "1"); // 1
    Alloc_2_set.insert("1");
    Alloc_2.add_attribute("CustCpcty", "AllocCustomerCapacity_t_1602975796"); // 1
    Alloc_2_set.insert("AllocCustomerCapacity_t_1602975796");
    Alloc_2.add_attribute("AllocPosEfct", "R"); // 1
    Alloc_2_set.insert("R");
    Alloc_2.add_attribute("Typ", "2"); // 1
    Alloc_2_set.insert("2");
    Alloc_2.add_attribute("NotifyBrkrOfCredit", "Y"); // 1
    Alloc_2_set.insert("Y");
    Alloc_2.add_attribute("HandlInst", "2"); // 1
    Alloc_2_set.insert("2");
    Alloc_2.add_attribute("Txt", "AllocText_t_187181213"); // 1
    Alloc_2_set.insert("AllocText_t_187181213");
    Alloc_2.add_attribute("EncAllocTextLen", "885471957"); // 1
    Alloc_2_set.insert("885471957");
    Alloc_2.add_attribute("EncAllocText", "EncodedAllocText_t_222835228"); // 1
    Alloc_2_set.insert("EncodedAllocText_t_222835228");
    Alloc_2.add_attribute("AvgPx", "10902698.140000"); // 1
    Alloc_2_set.insert("10902698.140000");
    Alloc_2.add_attribute("NetMny", "AllocNetMoney_t_1433490383"); // 1
    Alloc_2_set.insert("AllocNetMoney_t_1433490383");
    Alloc_2.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1932516005"); // 1
    Alloc_2_set.insert("SettlCurrAmt_t_1932516005");
    Alloc_2.add_attribute("SettlCcyAmt", "AllocSettlCurrAmt_t_1842124692"); // 1
    Alloc_2_set.insert("AllocSettlCurrAmt_t_1842124692");
    Alloc_2.add_attribute("SettlCcy", "GBP"); // 1
    Alloc_2_set.insert("GBP");
    Alloc_2.add_attribute("AllocSettlCcy", "CHF"); // 1
    Alloc_2_set.insert("CHF");
    Alloc_2.add_attribute("SettlCurrFxRt", "13422203.790000"); // 1
    Alloc_2_set.insert("13422203.790000");
    Alloc_2.add_attribute("SettlCurrFxRtCalc", "D"); // 1
    Alloc_2_set.insert("D");
    Alloc_2.add_attribute("AcrdIntAmt", "AllocAccruedInterestAmt_t_1606011272"); // 1
    Alloc_2_set.insert("AllocAccruedInterestAmt_t_1606011272");
    Alloc_2.add_attribute("IntAtMat", "AllocInterestAtMaturity_t_1345874827"); // 1
    Alloc_2_set.insert("AllocInterestAtMaturity_t_1345874827");
    Alloc_2.add_attribute("ClrFeeInd", "M"); // 1
    Alloc_2_set.insert("M");
    Alloc_2.add_attribute("SettlInstTyp", "4"); // 1
    Alloc_2_set.insert("4");
    all_values.push_back(Alloc_2_set);
    all_compo_names.insert("Alloc_2_set");

    {
      xml_element Pty_21{"Pty"};
      multiset<string> Pty_21_set;
      Pty_21.add_attribute("ID", "NestedPartyID_t_947031495"); // 2
      Pty_21_set.insert("NestedPartyID_t_947031495");
      Pty_21.add_attribute("Src", "B"); // 2
      Pty_21_set.insert("B");
      Pty_21.add_attribute("R", "18"); // 2
      Pty_21_set.insert("18");
      all_values.push_back(Pty_21_set);
      all_compo_names.insert("Pty_21_set");

      {
        xml_element Sub_21{"Sub"};
        multiset<string> Sub_21_set;
        Sub_21.add_attribute("ID", "NestedPartySubID_t_99588781"); // 3
        Sub_21_set.insert("NestedPartySubID_t_99588781");
        Sub_21.add_attribute("Typ", "1"); // 3
        Sub_21_set.insert("1");
        all_values.push_back(Sub_21_set);
        all_compo_names.insert("Sub_21_set");

        Pty_21.add_element(Sub_21);
      }
      Alloc_2.add_element(Pty_21);
    }
    {
      xml_element Comm_2{"Comm"};
      multiset<string> Comm_2_set;
      Comm_2.add_attribute("Comm", "Commission_t_1639714367"); // 2
      Comm_2_set.insert("Commission_t_1639714367");
      Comm_2.add_attribute("CommTyp", "1"); // 2
      Comm_2_set.insert("1");
      Comm_2.add_attribute("Ccy", "CHF"); // 2
      Comm_2_set.insert("CHF");
      Comm_2.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_2_set.insert("N");
      all_values.push_back(Comm_2_set);
      all_compo_names.insert("Comm_2_set");

      Alloc_2.add_element(Comm_2);
    }
    {
      xml_element MiscFees_2{"MiscFees"};
      multiset<string> MiscFees_2_set;
      MiscFees_2.add_attribute("Amt", "MiscFeeAmt_t_681921918"); // 2
      MiscFees_2_set.insert("MiscFeeAmt_t_681921918");
      MiscFees_2.add_attribute("Curr", "CAN"); // 2
      MiscFees_2_set.insert("CAN");
      MiscFees_2.add_attribute("Typ", "12"); // 2
      MiscFees_2_set.insert("12");
      MiscFees_2.add_attribute("Basis", "1"); // 2
      MiscFees_2_set.insert("1");
      all_values.push_back(MiscFees_2_set);
      all_compo_names.insert("MiscFees_2_set");

      Alloc_2.add_element(MiscFees_2);
    }
    {
      xml_element ClrInst_2{"ClrInst"};
      multiset<string> ClrInst_2_set;
      ClrInst_2.add_attribute("ClrngInstrctn", "12"); // 2
      ClrInst_2_set.insert("12");
      all_values.push_back(ClrInst_2_set);
      all_compo_names.insert("ClrInst_2_set");

      Alloc_2.add_element(ClrInst_2);
    }
    {
      xml_element SetInstr_2{"SetInstr"};
      multiset<string> SetInstr_2_set;
      SetInstr_2.add_attribute("DlvryTyp", "1"); // 2
      SetInstr_2_set.insert("1");
      SetInstr_2.add_attribute("StandInstDbTyp", "3"); // 2
      SetInstr_2_set.insert("3");
      SetInstr_2.add_attribute("StandInstDbName", "StandInstDbName_t_641953667"); // 2
      SetInstr_2_set.insert("StandInstDbName_t_641953667");
      SetInstr_2.add_attribute("StandInstDbID", "StandInstDbID_t_1649782086"); // 2
      SetInstr_2_set.insert("StandInstDbID_t_1649782086");
      all_values.push_back(SetInstr_2_set);
      all_compo_names.insert("SetInstr_2_set");

      {
        xml_element DlvInst_2{"DlvInst"};
        multiset<string> DlvInst_2_set;
        DlvInst_2.add_attribute("InstSrc", "3"); // 3
        DlvInst_2_set.insert("3");
        DlvInst_2.add_attribute("InstTyp", "S"); // 3
        DlvInst_2_set.insert("S");
        all_values.push_back(DlvInst_2_set);
        all_compo_names.insert("DlvInst_2_set");

        {
          xml_element Pty_22{"Pty"};
          multiset<string> Pty_22_set;
          Pty_22.add_attribute("ID", "SettlPartyID_t_252261654"); // 4
          Pty_22_set.insert("SettlPartyID_t_252261654");
          Pty_22.add_attribute("Src", "3"); // 4
          Pty_22_set.insert("3");
          Pty_22.add_attribute("R", "30"); // 4
          Pty_22_set.insert("30");
          all_values.push_back(Pty_22_set);
          all_compo_names.insert("Pty_22_set");

          {
            xml_element Sub_22{"Sub"};
            multiset<string> Sub_22_set;
            Sub_22.add_attribute("ID", "SettlPartySubID_t_1594482034"); // 5
            Sub_22_set.insert("SettlPartySubID_t_1594482034");
            Sub_22.add_attribute("Typ", "19"); // 5
            Sub_22_set.insert("19");
            all_values.push_back(Sub_22_set);
            all_compo_names.insert("Sub_22_set");

            Pty_22.add_element(Sub_22);
          }
          DlvInst_2.add_element(Pty_22);
        }
        SetInstr_2.add_element(DlvInst_2);
      }
      Alloc_2.add_element(SetInstr_2);
    }
    elt.add_element(Alloc_2);
  } // end Alloc
  { // RtSrc
    xml_element RtSrc_0{"RtSrc"};
    multiset<string> RtSrc_0_set;
    RtSrc_0.add_attribute("RtSrc", "1"); // 1
    RtSrc_0_set.insert("1");
    RtSrc_0.add_attribute("RtSrcTyp", "0"); // 1
    RtSrc_0_set.insert("0");
    RtSrc_0.add_attribute("RefPg", "ReferencePage_t_1260070518"); // 1
    RtSrc_0_set.insert("ReferencePage_t_1260070518");
    all_values.push_back(RtSrc_0_set);
    all_compo_names.insert("RtSrc_0_set");

    elt.add_element(RtSrc_0);
  } // end RtSrc
  { // RtSrc
    xml_element RtSrc_1{"RtSrc"};
    multiset<string> RtSrc_1_set;
    RtSrc_1.add_attribute("RtSrc", "0"); // 1
    RtSrc_1_set.insert("0");
    RtSrc_1.add_attribute("RtSrcTyp", "0"); // 1
    RtSrc_1_set.insert("0");
    RtSrc_1.add_attribute("RefPg", "ReferencePage_t_1367614047"); // 1
    RtSrc_1_set.insert("ReferencePage_t_1367614047");
    all_values.push_back(RtSrc_1_set);
    all_compo_names.insert("RtSrc_1_set");

    elt.add_element(RtSrc_1);
  } // end RtSrc
  { // RtSrc
    xml_element RtSrc_2{"RtSrc"};
    multiset<string> RtSrc_2_set;
    RtSrc_2.add_attribute("RtSrc", "1"); // 1
    RtSrc_2_set.insert("1");
    RtSrc_2.add_attribute("RtSrcTyp", "1"); // 1
    RtSrc_2_set.insert("1");
    RtSrc_2.add_attribute("RefPg", "ReferencePage_t_859844766"); // 1
    RtSrc_2_set.insert("ReferencePage_t_859844766");
    all_values.push_back(RtSrc_2_set);
    all_compo_names.insert("RtSrc_2_set");

    elt.add_element(RtSrc_2);
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
