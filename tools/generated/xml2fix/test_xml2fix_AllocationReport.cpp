#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AllocationReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AllocRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationReport_message_t_0;
  elt.add_attribute("RptID", "AllocReportID_t_823879709"); // 0
  AllocationReport_message_t_0.insert("AllocReportID_t_823879709");
  elt.add_attribute("ID", "AllocID_t_217892065"); // 0
  AllocationReport_message_t_0.insert("AllocID_t_217892065");
  elt.add_attribute("TransTyp", "0"); // 0
  AllocationReport_message_t_0.insert("0");
  elt.add_attribute("RptRefID", "AllocReportRefID_t_2132372953"); // 0
  AllocationReport_message_t_0.insert("AllocReportRefID_t_2132372953");
  elt.add_attribute("CxlRplcRsn", "2"); // 0
  AllocationReport_message_t_0.insert("2");
  elt.add_attribute("ID2", "SecondaryAllocID_t_742643044"); // 0
  AllocationReport_message_t_0.insert("SecondaryAllocID_t_742643044");
  elt.add_attribute("RptTyp", "2"); // 0
  AllocationReport_message_t_0.insert("2");
  elt.add_attribute("Stat", "4"); // 0
  AllocationReport_message_t_0.insert("4");
  elt.add_attribute("RejCode", "12"); // 0
  AllocationReport_message_t_0.insert("12");
  elt.add_attribute("RefID", "RefAllocID_t_1399897019"); // 0
  AllocationReport_message_t_0.insert("RefAllocID_t_1399897019");
  elt.add_attribute("ImReqTyp", "1"); // 0
  AllocationReport_message_t_0.insert("1");
  elt.add_attribute("LinkID", "AllocLinkID_t_103873724"); // 0
  AllocationReport_message_t_0.insert("AllocLinkID_t_103873724");
  elt.add_attribute("LinkTyp", "0"); // 0
  AllocationReport_message_t_0.insert("0");
  elt.add_attribute("BkngRefID", "BookingRefID_t_481401877"); // 0
  AllocationReport_message_t_0.insert("BookingRefID_t_481401877");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_795119985"); // 0
  AllocationReport_message_t_0.insert("ClearingBusinessDate_t_795119985");
  elt.add_attribute("TrdTyp", "28"); // 0
  AllocationReport_message_t_0.insert("28");
  elt.add_attribute("TrdSubTyp", "26"); // 0
  AllocationReport_message_t_0.insert("26");
  elt.add_attribute("MLegRptTyp", "1"); // 0
  AllocationReport_message_t_0.insert("1");
  elt.add_attribute("CustCpcty", "3"); // 0
  AllocationReport_message_t_0.insert("3");
  elt.add_attribute("InptSrc", "TradeInputSource_t_627500307"); // 0
  AllocationReport_message_t_0.insert("TradeInputSource_t_627500307");
  elt.add_attribute("RndPx", "16777635.930000"); // 0
  AllocationReport_message_t_0.insert("16777635.930000");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_1316333145"); // 0
  AllocationReport_message_t_0.insert("MessageEventSource_t_1316333145");
  elt.add_attribute("InptDev", "TradeInputDevice_t_1561507027"); // 0
  AllocationReport_message_t_0.insert("TradeInputDevice_t_1561507027");
  elt.add_attribute("AvgPxInd", "2"); // 0
  AllocationReport_message_t_0.insert("2");
  elt.add_attribute("NoOrdsTyp", "0"); // 0
  AllocationReport_message_t_0.insert("0");
  elt.add_attribute("PrevlyRpted", "N"); // 0
  AllocationReport_message_t_0.insert("N");
  elt.add_attribute("ReversalInd", "false"); // 0
  AllocationReport_message_t_0.insert("false");
  elt.add_attribute("MtchTyp", "4"); // 0
  AllocationReport_message_t_0.insert("4");
  elt.add_attribute("Side", "F"); // 0
  AllocationReport_message_t_0.insert("F");
  elt.add_attribute("Qty", "16071543.750000"); // 0
  AllocationReport_message_t_0.insert("16071543.750000");
  elt.add_attribute("QtyTyp", "1"); // 0
  AllocationReport_message_t_0.insert("1");
  elt.add_attribute("LastMkt", "LastMkt_t_1969999787"); // 0
  AllocationReport_message_t_0.insert("LastMkt_t_1969999787");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_1825046440"); // 0
  AllocationReport_message_t_0.insert("TradeOriginationDate_t_1825046440");
  elt.add_attribute("SesID", "1"); // 0
  AllocationReport_message_t_0.insert("1");
  elt.add_attribute("SesSub", "3"); // 0
  AllocationReport_message_t_0.insert("3");
  elt.add_attribute("PxTyp", "17"); // 0
  AllocationReport_message_t_0.insert("17");
  elt.add_attribute("AvgPx", "15630440.140000"); // 0
  AllocationReport_message_t_0.insert("15630440.140000");
  elt.add_attribute("AvgParPx", "17754701.380000"); // 0
  AllocationReport_message_t_0.insert("17754701.380000");
  elt.add_attribute("Ccy", "CHF"); // 0
  AllocationReport_message_t_0.insert("CHF");
  elt.add_attribute("AvgPxPrcsn", "1027883509"); // 0
  AllocationReport_message_t_0.insert("1027883509");
  elt.add_attribute("TrdDt", "TradeDate_t_782990602"); // 0
  AllocationReport_message_t_0.insert("TradeDate_t_782990602");
  elt.add_attribute("TxnTm", "TransactTime_t_1658623889"); // 0
  AllocationReport_message_t_0.insert("TransactTime_t_1658623889");
  elt.add_attribute("SettlTyp", "B"); // 0
  AllocationReport_message_t_0.insert("B");
  elt.add_attribute("SettlDt", "SettlDate_t_1264392479"); // 0
  AllocationReport_message_t_0.insert("SettlDate_t_1264392479");
  elt.add_attribute("BkngTyp", "0"); // 0
  AllocationReport_message_t_0.insert("0");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_1181410980"); // 0
  AllocationReport_message_t_0.insert("GrossTradeAmt_t_1181410980");
  elt.add_attribute("Concession", "Concession_t_953389955"); // 0
  AllocationReport_message_t_0.insert("Concession_t_953389955");
  elt.add_attribute("TotTakedown", "TotalTakedown_t_151517956"); // 0
  AllocationReport_message_t_0.insert("TotalTakedown_t_151517956");
  elt.add_attribute("NetMny", "NetMoney_t_1109317978"); // 0
  AllocationReport_message_t_0.insert("NetMoney_t_1109317978");
  elt.add_attribute("PosEfct", "O"); // 0
  AllocationReport_message_t_0.insert("O");
  elt.add_attribute("AutoAcceptInd", "true"); // 0
  AllocationReport_message_t_0.insert("true");
  elt.add_attribute("Txt", "Text_t_278167475"); // 0
  AllocationReport_message_t_0.insert("Text_t_278167475");
  elt.add_attribute("EncTxtLen", "994913642"); // 0
  AllocationReport_message_t_0.insert("994913642");
  elt.add_attribute("EncTxt", "EncodedText_t_355084163"); // 0
  AllocationReport_message_t_0.insert("EncodedText_t_355084163");
  elt.add_attribute("NumDaysInt", "1272233149"); // 0
  AllocationReport_message_t_0.insert("1272233149");
  elt.add_attribute("AcrdIntRt", "7343127.860000"); // 0
  AllocationReport_message_t_0.insert("7343127.860000");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_248822246"); // 0
  AllocationReport_message_t_0.insert("AccruedInterestAmt_t_248822246");
  elt.add_attribute("TotAcrdIntAmt", "TotalAccruedInterestAmt_t_256906964"); // 0
  AllocationReport_message_t_0.insert("TotalAccruedInterestAmt_t_256906964");
  elt.add_attribute("IntAtMat", "InterestAtMaturity_t_1880432865"); // 0
  AllocationReport_message_t_0.insert("InterestAtMaturity_t_1880432865");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_1855976621"); // 0
  AllocationReport_message_t_0.insert("EndAccruedInterestAmt_t_1855976621");
  elt.add_attribute("StartCsh", "StartCash_t_667800592"); // 0
  AllocationReport_message_t_0.insert("StartCash_t_667800592");
  elt.add_attribute("EndCsh", "EndCash_t_1702949004"); // 0
  AllocationReport_message_t_0.insert("EndCash_t_1702949004");
  elt.add_attribute("LegalCnfm", "Y"); // 0
  AllocationReport_message_t_0.insert("Y");
  elt.add_attribute("TotNoAllocs", "1488201562"); // 0
  AllocationReport_message_t_0.insert("1488201562");
  elt.add_attribute("LastFragment", "Y"); // 0
  AllocationReport_message_t_0.insert("Y");
  all_values.push_back(AllocationReport_message_t_0);
  all_compo_names.insert("AllocationReport_message_t");

  { // Hdr
    xml_element Hdr_5{"Hdr"};
    multiset<string> Hdr_5_set;
    Hdr_5.add_attribute("SeqNum", "782562471"); // 1
    Hdr_5_set.insert("782562471");
    Hdr_5.add_attribute("SID", "SenderCompID_t_903761929"); // 1
    Hdr_5_set.insert("SenderCompID_t_903761929");
    Hdr_5.add_attribute("TID", "TargetCompID_t_1138340939"); // 1
    Hdr_5_set.insert("TargetCompID_t_1138340939");
    Hdr_5.add_attribute("OBID", "OnBehalfOfCompID_t_998468749"); // 1
    Hdr_5_set.insert("OnBehalfOfCompID_t_998468749");
    Hdr_5.add_attribute("D2ID", "DeliverToCompID_t_311028446"); // 1
    Hdr_5_set.insert("DeliverToCompID_t_311028446");
    Hdr_5.add_attribute("SSub", "SenderSubID_t_18740801"); // 1
    Hdr_5_set.insert("SenderSubID_t_18740801");
    Hdr_5.add_attribute("SLoc", "SenderLocationID_t_1781459351"); // 1
    Hdr_5_set.insert("SenderLocationID_t_1781459351");
    Hdr_5.add_attribute("TSub", "TargetSubID_t_1969652336"); // 1
    Hdr_5_set.insert("TargetSubID_t_1969652336");
    Hdr_5.add_attribute("TLoc", "TargetLocationID_t_510187204"); // 1
    Hdr_5_set.insert("TargetLocationID_t_510187204");
    Hdr_5.add_attribute("OBSub", "OnBehalfOfSubID_t_898368182"); // 1
    Hdr_5_set.insert("OnBehalfOfSubID_t_898368182");
    Hdr_5.add_attribute("OBLoc", "OnBehalfOfLocationID_t_128428914"); // 1
    Hdr_5_set.insert("OnBehalfOfLocationID_t_128428914");
    Hdr_5.add_attribute("D2Sub", "DeliverToSubID_t_1691598185"); // 1
    Hdr_5_set.insert("DeliverToSubID_t_1691598185");
    Hdr_5.add_attribute("D2Loc", "DeliverToLocationID_t_1851758137"); // 1
    Hdr_5_set.insert("DeliverToLocationID_t_1851758137");
    Hdr_5.add_attribute("PosDup", "Y"); // 1
    Hdr_5_set.insert("Y");
    Hdr_5.add_attribute("PosRsnd", "Y"); // 1
    Hdr_5_set.insert("Y");
    Hdr_5.add_attribute("Snt", "SendingTime_t_1285164751"); // 1
    Hdr_5_set.insert("SendingTime_t_1285164751");
    Hdr_5.add_attribute("OrigSnt", "OrigSendingTime_t_2109228421"); // 1
    Hdr_5_set.insert("OrigSendingTime_t_2109228421");
    Hdr_5.add_attribute("MsgEncd", "MessageEncoding_t_931599991"); // 1
    Hdr_5_set.insert("MessageEncoding_t_931599991");
    all_values.push_back(Hdr_5_set);
    all_compo_names.insert("Hdr_5_set");

    {
      xml_element Hop_5{"Hop"};
      multiset<string> Hop_5_set;
      Hop_5.add_attribute("ID", "HopCompID_t_132594745"); // 2
      Hop_5_set.insert("HopCompID_t_132594745");
      Hop_5.add_attribute("Ref", "316828936"); // 2
      Hop_5_set.insert("316828936");
      Hop_5.add_attribute("Snt", "HopSendingTime_t_56349492"); // 2
      Hop_5_set.insert("HopSendingTime_t_56349492");
      all_values.push_back(Hop_5_set);
      all_compo_names.insert("Hop_5_set");

      Hdr_5.add_element(Hop_5);
    }
    elt.add_element(Hdr_5);
  } // end Hdr
  { // OrdAlloc
    xml_element OrdAlloc_4{"OrdAlloc"};
    multiset<string> OrdAlloc_4_set;
    OrdAlloc_4.add_attribute("ClOrdID", "ClOrdID_t_565651183"); // 1
    OrdAlloc_4_set.insert("ClOrdID_t_565651183");
    OrdAlloc_4.add_attribute("OrdID", "OrderID_t_313256457"); // 1
    OrdAlloc_4_set.insert("OrderID_t_313256457");
    OrdAlloc_4.add_attribute("OrdID2", "SecondaryOrderID_t_599856749"); // 1
    OrdAlloc_4_set.insert("SecondaryOrderID_t_599856749");
    OrdAlloc_4.add_attribute("ClOrdID2", "SecondaryClOrdID_t_274144156"); // 1
    OrdAlloc_4_set.insert("SecondaryClOrdID_t_274144156");
    OrdAlloc_4.add_attribute("ListID", "ListID_t_981057049"); // 1
    OrdAlloc_4_set.insert("ListID_t_981057049");
    OrdAlloc_4.add_attribute("Qty", "1553221.050000"); // 1
    OrdAlloc_4_set.insert("1553221.050000");
    OrdAlloc_4.add_attribute("AvgPx", "18076835.700000"); // 1
    OrdAlloc_4_set.insert("18076835.700000");
    OrdAlloc_4.add_attribute("BkngQty", "3217749.630000"); // 1
    OrdAlloc_4_set.insert("3217749.630000");
    all_values.push_back(OrdAlloc_4_set);
    all_compo_names.insert("OrdAlloc_4_set");

    {
      xml_element Pty_26{"Pty"};
      multiset<string> Pty_26_set;
      Pty_26.add_attribute("ID", "Nested2PartyID_t_1665676554"); // 2
      Pty_26_set.insert("Nested2PartyID_t_1665676554");
      Pty_26.add_attribute("Src", "E"); // 2
      Pty_26_set.insert("E");
      Pty_26.add_attribute("R", "78"); // 2
      Pty_26_set.insert("78");
      all_values.push_back(Pty_26_set);
      all_compo_names.insert("Pty_26_set");

      {
        xml_element Sub_26{"Sub"};
        multiset<string> Sub_26_set;
        Sub_26.add_attribute("ID", "Nested2PartySubID_t_656533846"); // 3
        Sub_26_set.insert("Nested2PartySubID_t_656533846");
        Sub_26.add_attribute("Typ", "33"); // 3
        Sub_26_set.insert("33");
        all_values.push_back(Sub_26_set);
        all_compo_names.insert("Sub_26_set");

        Pty_26.add_element(Sub_26);
      }
      OrdAlloc_4.add_element(Pty_26);
    }
    elt.add_element(OrdAlloc_4);
  } // end OrdAlloc
  { // OrdAlloc
    xml_element OrdAlloc_5{"OrdAlloc"};
    multiset<string> OrdAlloc_5_set;
    OrdAlloc_5.add_attribute("ClOrdID", "ClOrdID_t_1536565339"); // 1
    OrdAlloc_5_set.insert("ClOrdID_t_1536565339");
    OrdAlloc_5.add_attribute("OrdID", "OrderID_t_675274647"); // 1
    OrdAlloc_5_set.insert("OrderID_t_675274647");
    OrdAlloc_5.add_attribute("OrdID2", "SecondaryOrderID_t_1075206845"); // 1
    OrdAlloc_5_set.insert("SecondaryOrderID_t_1075206845");
    OrdAlloc_5.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1358734027"); // 1
    OrdAlloc_5_set.insert("SecondaryClOrdID_t_1358734027");
    OrdAlloc_5.add_attribute("ListID", "ListID_t_1185461851"); // 1
    OrdAlloc_5_set.insert("ListID_t_1185461851");
    OrdAlloc_5.add_attribute("Qty", "19735750.270000"); // 1
    OrdAlloc_5_set.insert("19735750.270000");
    OrdAlloc_5.add_attribute("AvgPx", "14871629.410000"); // 1
    OrdAlloc_5_set.insert("14871629.410000");
    OrdAlloc_5.add_attribute("BkngQty", "7295763.880000"); // 1
    OrdAlloc_5_set.insert("7295763.880000");
    all_values.push_back(OrdAlloc_5_set);
    all_compo_names.insert("OrdAlloc_5_set");

    {
      xml_element Pty_27{"Pty"};
      multiset<string> Pty_27_set;
      Pty_27.add_attribute("ID", "Nested2PartyID_t_1677849516"); // 2
      Pty_27_set.insert("Nested2PartyID_t_1677849516");
      Pty_27.add_attribute("Src", "7"); // 2
      Pty_27_set.insert("7");
      Pty_27.add_attribute("R", "62"); // 2
      Pty_27_set.insert("62");
      all_values.push_back(Pty_27_set);
      all_compo_names.insert("Pty_27_set");

      {
        xml_element Sub_27{"Sub"};
        multiset<string> Sub_27_set;
        Sub_27.add_attribute("ID", "Nested2PartySubID_t_815530619"); // 3
        Sub_27_set.insert("Nested2PartySubID_t_815530619");
        Sub_27.add_attribute("Typ", "30"); // 3
        Sub_27_set.insert("30");
        all_values.push_back(Sub_27_set);
        all_compo_names.insert("Sub_27_set");

        Pty_27.add_element(Sub_27);
      }
      OrdAlloc_5.add_element(Pty_27);
    }
    elt.add_element(OrdAlloc_5);
  } // end OrdAlloc
  { // AllExc
    xml_element AllExc_4{"AllExc"};
    multiset<string> AllExc_4_set;
    AllExc_4.add_attribute("LastQty", "9481253.650000"); // 1
    AllExc_4_set.insert("9481253.650000");
    AllExc_4.add_attribute("ExecID", "ExecID_t_2045683522"); // 1
    AllExc_4_set.insert("ExecID_t_2045683522");
    AllExc_4.add_attribute("ExecID2", "SecondaryExecID_t_223474739"); // 1
    AllExc_4_set.insert("SecondaryExecID_t_223474739");
    AllExc_4.add_attribute("LastPx", "18150328.970000"); // 1
    AllExc_4_set.insert("18150328.970000");
    AllExc_4.add_attribute("LastParPx", "4638510.570000"); // 1
    AllExc_4_set.insert("4638510.570000");
    AllExc_4.add_attribute("LastCpcty", "1"); // 1
    AllExc_4_set.insert("1");
    AllExc_4.add_attribute("TrdID", "TradeID_t_267405998"); // 1
    AllExc_4_set.insert("TradeID_t_267405998");
    AllExc_4.add_attribute("FirmTrdID", "FirmTradeID_t_737995213"); // 1
    AllExc_4_set.insert("FirmTradeID_t_737995213");
    all_values.push_back(AllExc_4_set);
    all_compo_names.insert("AllExc_4_set");

    elt.add_element(AllExc_4);
  } // end AllExc
  { // AllExc
    xml_element AllExc_5{"AllExc"};
    multiset<string> AllExc_5_set;
    AllExc_5.add_attribute("LastQty", "15177882.450000"); // 1
    AllExc_5_set.insert("15177882.450000");
    AllExc_5.add_attribute("ExecID", "ExecID_t_422728103"); // 1
    AllExc_5_set.insert("ExecID_t_422728103");
    AllExc_5.add_attribute("ExecID2", "SecondaryExecID_t_398195135"); // 1
    AllExc_5_set.insert("SecondaryExecID_t_398195135");
    AllExc_5.add_attribute("LastPx", "18395632.090000"); // 1
    AllExc_5_set.insert("18395632.090000");
    AllExc_5.add_attribute("LastParPx", "20884046.580000"); // 1
    AllExc_5_set.insert("20884046.580000");
    AllExc_5.add_attribute("LastCpcty", "1"); // 1
    AllExc_5_set.insert("1");
    AllExc_5.add_attribute("TrdID", "TradeID_t_917616453"); // 1
    AllExc_5_set.insert("TradeID_t_917616453");
    AllExc_5.add_attribute("FirmTrdID", "FirmTradeID_t_597454856"); // 1
    AllExc_5_set.insert("FirmTradeID_t_597454856");
    all_values.push_back(AllExc_5_set);
    all_compo_names.insert("AllExc_5_set");

    elt.add_element(AllExc_5);
  } // end AllExc
  { // AllExc
    xml_element AllExc_6{"AllExc"};
    multiset<string> AllExc_6_set;
    AllExc_6.add_attribute("LastQty", "1347050.220000"); // 1
    AllExc_6_set.insert("1347050.220000");
    AllExc_6.add_attribute("ExecID", "ExecID_t_306698144"); // 1
    AllExc_6_set.insert("ExecID_t_306698144");
    AllExc_6.add_attribute("ExecID2", "SecondaryExecID_t_1272729503"); // 1
    AllExc_6_set.insert("SecondaryExecID_t_1272729503");
    AllExc_6.add_attribute("LastPx", "12099118.670000"); // 1
    AllExc_6_set.insert("12099118.670000");
    AllExc_6.add_attribute("LastParPx", "16654321.710000"); // 1
    AllExc_6_set.insert("16654321.710000");
    AllExc_6.add_attribute("LastCpcty", "3"); // 1
    AllExc_6_set.insert("3");
    AllExc_6.add_attribute("TrdID", "TradeID_t_1036003246"); // 1
    AllExc_6_set.insert("TradeID_t_1036003246");
    AllExc_6.add_attribute("FirmTrdID", "FirmTradeID_t_1005111465"); // 1
    AllExc_6_set.insert("FirmTradeID_t_1005111465");
    all_values.push_back(AllExc_6_set);
    all_compo_names.insert("AllExc_6_set");

    elt.add_element(AllExc_6);
  } // end AllExc
  { // Instrmt
    xml_element Instrmt_4{"Instrmt"};
    multiset<string> Instrmt_4_set;
    Instrmt_4.add_attribute("Sym", "Symbol_t_1040284095"); // 1
    Instrmt_4_set.insert("Symbol_t_1040284095");
    Instrmt_4.add_attribute("Sfx", "CD"); // 1
    Instrmt_4_set.insert("CD");
    Instrmt_4.add_attribute("ID", "SecurityID_t_624737629"); // 1
    Instrmt_4_set.insert("SecurityID_t_624737629");
    Instrmt_4.add_attribute("Src", "G"); // 1
    Instrmt_4_set.insert("G");
    Instrmt_4.add_attribute("Prod", "4"); // 1
    Instrmt_4_set.insert("4");
    Instrmt_4.add_attribute("ProdCmplx", "ProductComplex_t_206108567"); // 1
    Instrmt_4_set.insert("ProductComplex_t_206108567");
    Instrmt_4.add_attribute("SecGrp", "SecurityGroup_t_442934598"); // 1
    Instrmt_4_set.insert("SecurityGroup_t_442934598");
    Instrmt_4.add_attribute("CFI", "CFICode_t_182541451"); // 1
    Instrmt_4_set.insert("CFICode_t_182541451");
    Instrmt_4.add_attribute("SecTyp", "OOC"); // 1
    Instrmt_4_set.insert("OOC");
    Instrmt_4.add_attribute("SubTyp", "SecuritySubType_t_666409337"); // 1
    Instrmt_4_set.insert("SecuritySubType_t_666409337");
    Instrmt_4.add_attribute("MMY", "1997574348"); // 1
    Instrmt_4_set.insert("1997574348");
    Instrmt_4.add_attribute("MatDt", "MaturityDate_t_568159498"); // 1
    Instrmt_4_set.insert("MaturityDate_t_568159498");
    Instrmt_4.add_attribute("MatTm", "1203140534"); // 1
    Instrmt_4_set.insert("1203140534");
    Instrmt_4.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_117496698"); // 1
    Instrmt_4_set.insert("SettleOnOpenFlag_t_117496698");
    Instrmt_4.add_attribute("AsgnMeth", "1306154711"); // 1
    Instrmt_4_set.insert("1306154711");
    Instrmt_4.add_attribute("Status", "2"); // 1
    Instrmt_4_set.insert("2");
    Instrmt_4.add_attribute("CpnPmt", "CouponPaymentDate_t_540224801"); // 1
    Instrmt_4_set.insert("CouponPaymentDate_t_540224801");
    Instrmt_4.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_4_set.insert("XR");
    Instrmt_4.add_attribute("Snrty", "SB"); // 1
    Instrmt_4_set.insert("SB");
    Instrmt_4.add_attribute("NotlPctOut", "4811458.110000"); // 1
    Instrmt_4_set.insert("4811458.110000");
    Instrmt_4.add_attribute("OrigNotlPctOut", "3978237.270000"); // 1
    Instrmt_4_set.insert("3978237.270000");
    Instrmt_4.add_attribute("AttchPnt", "11831411.460000"); // 1
    Instrmt_4_set.insert("11831411.460000");
    Instrmt_4.add_attribute("DetchPnt", "10786006.670000"); // 1
    Instrmt_4_set.insert("10786006.670000");
    Instrmt_4.add_attribute("Issued", "IssueDate_t_532528750"); // 1
    Instrmt_4_set.insert("IssueDate_t_532528750");
    Instrmt_4.add_attribute("RepoCollSecTyp", "1489839290"); // 1
    Instrmt_4_set.insert("1489839290");
    Instrmt_4.add_attribute("RepoTrm", "203846522"); // 1
    Instrmt_4_set.insert("203846522");
    Instrmt_4.add_attribute("RepoRt", "17424406.170000"); // 1
    Instrmt_4_set.insert("17424406.170000");
    Instrmt_4.add_attribute("Fctr", "10077878.140000"); // 1
    Instrmt_4_set.insert("10077878.140000");
    Instrmt_4.add_attribute("CrdRtg", "CreditRating_t_514554229"); // 1
    Instrmt_4_set.insert("CreditRating_t_514554229");
    Instrmt_4.add_attribute("Rgstry", "InstrRegistry_t_630960216"); // 1
    Instrmt_4_set.insert("InstrRegistry_t_630960216");
    Instrmt_4.add_attribute("IssuCtry", "2012899279"); // 1
    Instrmt_4_set.insert("2012899279");
    Instrmt_4.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1554838324"); // 1
    Instrmt_4_set.insert("StateOrProvinceOfIssue_t_1554838324");
    Instrmt_4.add_attribute("Lcl", "LocaleOfIssue_t_1197329330"); // 1
    Instrmt_4_set.insert("LocaleOfIssue_t_1197329330");
    Instrmt_4.add_attribute("Redeem", "RedemptionDate_t_490153260"); // 1
    Instrmt_4_set.insert("RedemptionDate_t_490153260");
    Instrmt_4.add_attribute("StrkPx", "18306476.750000"); // 1
    Instrmt_4_set.insert("18306476.750000");
    Instrmt_4.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_4_set.insert("CAN");
    Instrmt_4.add_attribute("StrkMult", "1260986.250000"); // 1
    Instrmt_4_set.insert("1260986.250000");
    Instrmt_4.add_attribute("StrkValu", "6142868.670000"); // 1
    Instrmt_4_set.insert("6142868.670000");
    Instrmt_4.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_4_set.insert("1");
    Instrmt_4.add_attribute("StrkPxBndryMeth", "3"); // 1
    Instrmt_4_set.insert("3");
    Instrmt_4.add_attribute("StrkPxBndryPrcsn", "4643775.670000"); // 1
    Instrmt_4_set.insert("4643775.670000");
    Instrmt_4.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_4_set.insert("3");
    Instrmt_4.add_attribute("OptAt", "1995648496"); // 1
    Instrmt_4_set.insert("1995648496");
    Instrmt_4.add_attribute("Mult", "5818742.650000"); // 1
    Instrmt_4_set.insert("5818742.650000");
    Instrmt_4.add_attribute("MultTyp", "2"); // 1
    Instrmt_4_set.insert("2");
    Instrmt_4.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_4_set.insert("0");
    Instrmt_4.add_attribute("MinPxIncr", "11220990.670000"); // 1
    Instrmt_4_set.insert("11220990.670000");
    Instrmt_4.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_84267029"); // 1
    Instrmt_4_set.insert("MinPriceIncrementAmount_t_84267029");
    Instrmt_4.add_attribute("UOM", "Gal"); // 1
    Instrmt_4_set.insert("Gal");
    Instrmt_4.add_attribute("UOMQty", "16032448.780000"); // 1
    Instrmt_4_set.insert("16032448.780000");
    Instrmt_4.add_attribute("PxUOM", "t"); // 1
    Instrmt_4_set.insert("t");
    Instrmt_4.add_attribute("PxUOMQty", "18702758.180000"); // 1
    Instrmt_4_set.insert("18702758.180000");
    Instrmt_4.add_attribute("SettlMeth", "C"); // 1
    Instrmt_4_set.insert("C");
    Instrmt_4.add_attribute("ExerStyle", "0"); // 1
    Instrmt_4_set.insert("0");
    Instrmt_4.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_4_set.insert("1");
    Instrmt_4.add_attribute("OptPayAmt", "OptPayoutAmount_t_738208420"); // 1
    Instrmt_4_set.insert("OptPayoutAmount_t_738208420");
    Instrmt_4.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_4_set.insert("STD");
    Instrmt_4.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_4_set.insert("FUTDA");
    Instrmt_4.add_attribute("ListMeth", "1"); // 1
    Instrmt_4_set.insert("1");
    Instrmt_4.add_attribute("CapPx", "12405366.920000"); // 1
    Instrmt_4_set.insert("12405366.920000");
    Instrmt_4.add_attribute("FlrPx", "20858349.060000"); // 1
    Instrmt_4_set.insert("20858349.060000");
    Instrmt_4.add_attribute("PutCall", "1"); // 1
    Instrmt_4_set.insert("1");
    Instrmt_4.add_attribute("FlexInd", "true"); // 1
    Instrmt_4_set.insert("true");
    Instrmt_4.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_4_set.insert("true");
    Instrmt_4.add_attribute("TmUnit", "Min"); // 1
    Instrmt_4_set.insert("Min");
    Instrmt_4.add_attribute("CpnRt", "7221277.910000"); // 1
    Instrmt_4_set.insert("7221277.910000");
    Instrmt_4.add_attribute("Exch", "SecurityExchange_t_1124766346"); // 1
    Instrmt_4_set.insert("SecurityExchange_t_1124766346");
    Instrmt_4.add_attribute("PosLmt", "469379977"); // 1
    Instrmt_4_set.insert("469379977");
    Instrmt_4.add_attribute("NTPosLmt", "1336414658"); // 1
    Instrmt_4_set.insert("1336414658");
    Instrmt_4.add_attribute("Issr", "Issuer_t_1925336614"); // 1
    Instrmt_4_set.insert("Issuer_t_1925336614");
    Instrmt_4.add_attribute("EncIssrLen", "1261887940"); // 1
    Instrmt_4_set.insert("1261887940");
    Instrmt_4.add_attribute("EncIssr", "EncodedIssuer_t_1800792226"); // 1
    Instrmt_4_set.insert("EncodedIssuer_t_1800792226");
    Instrmt_4.add_attribute("Desc", "SecurityDesc_t_1146582733"); // 1
    Instrmt_4_set.insert("SecurityDesc_t_1146582733");
    Instrmt_4.add_attribute("EncSecDescLen", "1110052788"); // 1
    Instrmt_4_set.insert("1110052788");
    Instrmt_4.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_235182843"); // 1
    Instrmt_4_set.insert("EncodedSecurityDesc_t_235182843");
    Instrmt_4.add_attribute("Pool", "Pool_t_1673983563"); // 1
    Instrmt_4_set.insert("Pool_t_1673983563");
    Instrmt_4.add_attribute("CSetMo", "1531662768"); // 1
    Instrmt_4_set.insert("1531662768");
    Instrmt_4.add_attribute("CPPgm", "2"); // 1
    Instrmt_4_set.insert("2");
    Instrmt_4.add_attribute("CPRegT", "CPRegType_t_1758250592"); // 1
    Instrmt_4_set.insert("CPRegType_t_1758250592");
    Instrmt_4.add_attribute("Dated", "DatedDate_t_71313793"); // 1
    Instrmt_4_set.insert("DatedDate_t_71313793");
    Instrmt_4.add_attribute("IntAcrl", "InterestAccrualDate_t_813043141"); // 1
    Instrmt_4_set.insert("InterestAccrualDate_t_813043141");
    all_values.push_back(Instrmt_4_set);
    all_compo_names.insert("Instrmt_4_set");

    {
      xml_element AID_4{"AID"};
      multiset<string> AID_4_set;
      AID_4.add_attribute("AltID", "SecurityAltID_t_92857700"); // 2
      AID_4_set.insert("SecurityAltID_t_92857700");
      AID_4.add_attribute("AltIDSrc", "6"); // 2
      AID_4_set.insert("6");
      all_values.push_back(AID_4_set);
      all_compo_names.insert("AID_4_set");

      Instrmt_4.add_element(AID_4);
    }
    {
      xml_element SecXML_4{"SecXML"};
      multiset<string> SecXML_4_set;
      SecXML_4.add_attribute("Schema", "SecurityXMLSchema_t_1347405039"); // 2
      SecXML_4_set.insert("SecurityXMLSchema_t_1347405039");
      all_values.push_back(SecXML_4_set);
      all_compo_names.insert("SecXML_4_set");

      Instrmt_4.add_element(SecXML_4);
    }
    {
      xml_element Evnt_4{"Evnt"};
      multiset<string> Evnt_4_set;
      Evnt_4.add_attribute("EventTyp", "7"); // 2
      Evnt_4_set.insert("7");
      Evnt_4.add_attribute("Dt", "EventDate_t_1006737424"); // 2
      Evnt_4_set.insert("EventDate_t_1006737424");
      Evnt_4.add_attribute("Tm", "EventTime_t_2085613459"); // 2
      Evnt_4_set.insert("EventTime_t_2085613459");
      Evnt_4.add_attribute("Px", "17170536.830000"); // 2
      Evnt_4_set.insert("17170536.830000");
      Evnt_4.add_attribute("Txt", "EventText_t_1079673051"); // 2
      Evnt_4_set.insert("EventText_t_1079673051");
      all_values.push_back(Evnt_4_set);
      all_compo_names.insert("Evnt_4_set");

      Instrmt_4.add_element(Evnt_4);
    }
    {
      xml_element Pty_28{"Pty"};
      multiset<string> Pty_28_set;
      Pty_28.add_attribute("ID", "InstrumentPartyID_t_1190892461"); // 2
      Pty_28_set.insert("InstrumentPartyID_t_1190892461");
      Pty_28.add_attribute("Src", "6"); // 2
      Pty_28_set.insert("6");
      Pty_28.add_attribute("R", "10"); // 2
      Pty_28_set.insert("10");
      all_values.push_back(Pty_28_set);
      all_compo_names.insert("Pty_28_set");

      {
        xml_element Sub_28{"Sub"};
        multiset<string> Sub_28_set;
        Sub_28.add_attribute("ID", "InstrumentPartySubID_t_1851009786"); // 3
        Sub_28_set.insert("InstrumentPartySubID_t_1851009786");
        Sub_28.add_attribute("Typ", "3"); // 3
        Sub_28_set.insert("3");
        all_values.push_back(Sub_28_set);
        all_compo_names.insert("Sub_28_set");

        Pty_28.add_element(Sub_28);
      }
      Instrmt_4.add_element(Pty_28);
    }
    {
      xml_element CmplxEvnt_4{"CmplxEvnt"};
      multiset<string> CmplxEvnt_4_set;
      CmplxEvnt_4.add_attribute("Typ", "4"); // 2
      CmplxEvnt_4_set.insert("4");
      CmplxEvnt_4.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_46807491"); // 2
      CmplxEvnt_4_set.insert("ComplexOptPayoutAmount_t_46807491");
      CmplxEvnt_4.add_attribute("Px", "18226168.920000"); // 2
      CmplxEvnt_4_set.insert("18226168.920000");
      CmplxEvnt_4.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_4_set.insert("2");
      CmplxEvnt_4.add_attribute("PxBndryPrcsn", "5161874.680000"); // 2
      CmplxEvnt_4_set.insert("5161874.680000");
      CmplxEvnt_4.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_4_set.insert("2");
      CmplxEvnt_4.add_attribute("Cond", "1"); // 2
      CmplxEvnt_4_set.insert("1");
      all_values.push_back(CmplxEvnt_4_set);
      all_compo_names.insert("CmplxEvnt_4_set");

      {
        xml_element EvntDts_4{"EvntDts"};
        multiset<string> EvntDts_4_set;
        EvntDts_4.add_attribute("StartDt", "ComplexEventStartDate_t_1778075408"); // 3
        EvntDts_4_set.insert("ComplexEventStartDate_t_1778075408");
        EvntDts_4.add_attribute("EndDt", "ComplexEventEndDate_t_664856481"); // 3
        EvntDts_4_set.insert("ComplexEventEndDate_t_664856481");
        all_values.push_back(EvntDts_4_set);
        all_compo_names.insert("EvntDts_4_set");

        {
          xml_element EvntTms_4{"EvntTms"};
          multiset<string> EvntTms_4_set;
          EvntTms_4.add_attribute("StartTm", "1348247225"); // 4
          EvntTms_4_set.insert("1348247225");
          EvntTms_4.add_attribute("EndTm", "740644549"); // 4
          EvntTms_4_set.insert("740644549");
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
    xml_element InstrmtExt_2{"InstrmtExt"};
    multiset<string> InstrmtExt_2_set;
    InstrmtExt_2.add_attribute("DlvryForm", "1"); // 1
    InstrmtExt_2_set.insert("1");
    InstrmtExt_2.add_attribute("PctAtRisk", "8747471.400000"); // 1
    InstrmtExt_2_set.insert("8747471.400000");
    all_values.push_back(InstrmtExt_2_set);
    all_compo_names.insert("InstrmtExt_2_set");

    {
      xml_element Attrb_2{"Attrb"};
      multiset<string> Attrb_2_set;
      Attrb_2.add_attribute("Typ", "29"); // 2
      Attrb_2_set.insert("29");
      Attrb_2.add_attribute("Val", "InstrAttribValue_t_109837587"); // 2
      Attrb_2_set.insert("InstrAttribValue_t_109837587");
      all_values.push_back(Attrb_2_set);
      all_compo_names.insert("Attrb_2_set");

      InstrmtExt_2.add_element(Attrb_2);
    }
    elt.add_element(InstrmtExt_2);
  } // end InstrmtExt
  { // FinDetls
    xml_element FinDetls_2{"FinDetls"};
    multiset<string> FinDetls_2_set;
    FinDetls_2.add_attribute("AgmtDesc", "AgreementDesc_t_485514084"); // 1
    FinDetls_2_set.insert("AgreementDesc_t_485514084");
    FinDetls_2.add_attribute("AgmtID", "AgreementID_t_196137462"); // 1
    FinDetls_2_set.insert("AgreementID_t_196137462");
    FinDetls_2.add_attribute("AgmtDt", "AgreementDate_t_922880728"); // 1
    FinDetls_2_set.insert("AgreementDate_t_922880728");
    FinDetls_2.add_attribute("AgmtCcy", "JPY"); // 1
    FinDetls_2_set.insert("JPY");
    FinDetls_2.add_attribute("TrmTyp", "4"); // 1
    FinDetls_2_set.insert("4");
    FinDetls_2.add_attribute("StartDt", "StartDate_t_1685848992"); // 1
    FinDetls_2_set.insert("StartDate_t_1685848992");
    FinDetls_2.add_attribute("EndDt", "EndDate_t_996980850"); // 1
    FinDetls_2_set.insert("EndDate_t_996980850");
    FinDetls_2.add_attribute("DlvryTyp", "2"); // 1
    FinDetls_2_set.insert("2");
    FinDetls_2.add_attribute("MgnRatio", "12554190.270000"); // 1
    FinDetls_2_set.insert("12554190.270000");
    all_values.push_back(FinDetls_2_set);
    all_compo_names.insert("FinDetls_2_set");

    elt.add_element(FinDetls_2);
  } // end FinDetls
  { // Undly
    xml_element Undly_4{"Undly"};
    multiset<string> Undly_4_set;
    Undly_4.add_attribute("Sym", "UnderlyingSymbol_t_1251824391"); // 1
    Undly_4_set.insert("UnderlyingSymbol_t_1251824391");
    Undly_4.add_attribute("Sfx", "CD"); // 1
    Undly_4_set.insert("CD");
    Undly_4.add_attribute("ID", "UnderlyingSecurityID_t_947194563"); // 1
    Undly_4_set.insert("UnderlyingSecurityID_t_947194563");
    Undly_4.add_attribute("Src", "3"); // 1
    Undly_4_set.insert("3");
    Undly_4.add_attribute("Prod", "2"); // 1
    Undly_4_set.insert("2");
    Undly_4.add_attribute("CFI", "UnderlyingCFICode_t_246239743"); // 1
    Undly_4_set.insert("UnderlyingCFICode_t_246239743");
    Undly_4.add_attribute("SecTyp", "STRUCT"); // 1
    Undly_4_set.insert("STRUCT");
    Undly_4.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_693664452"); // 1
    Undly_4_set.insert("UnderlyingSecuritySubType_t_693664452");
    Undly_4.add_attribute("MMY", "670051269"); // 1
    Undly_4_set.insert("670051269");
    Undly_4.add_attribute("Mat", "UnderlyingMaturityDate_t_1518345489"); // 1
    Undly_4_set.insert("UnderlyingMaturityDate_t_1518345489");
    Undly_4.add_attribute("MatTm", "1705212355"); // 1
    Undly_4_set.insert("1705212355");
    Undly_4.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_871715762"); // 1
    Undly_4_set.insert("UnderlyingCouponPaymentDate_t_871715762");
    Undly_4.add_attribute("RestrctTyp", "MM"); // 1
    Undly_4_set.insert("MM");
    Undly_4.add_attribute("Snrty", "SB"); // 1
    Undly_4_set.insert("SB");
    Undly_4.add_attribute("NotlPctOut", "724793.390000"); // 1
    Undly_4_set.insert("724793.390000");
    Undly_4.add_attribute("OrigNotlPctOut", "18895817.990000"); // 1
    Undly_4_set.insert("18895817.990000");
    Undly_4.add_attribute("AttchPnt", "11226245.120000"); // 1
    Undly_4_set.insert("11226245.120000");
    Undly_4.add_attribute("DetchPnt", "9472264.800000"); // 1
    Undly_4_set.insert("9472264.800000");
    Undly_4.add_attribute("Issued", "UnderlyingIssueDate_t_2014405468"); // 1
    Undly_4_set.insert("UnderlyingIssueDate_t_2014405468");
    Undly_4.add_attribute("RepoCollSecTyp", "1232462099"); // 1
    Undly_4_set.insert("1232462099");
    Undly_4.add_attribute("RepoTrm", "1432740564"); // 1
    Undly_4_set.insert("1432740564");
    Undly_4.add_attribute("RepoRt", "630592.830000"); // 1
    Undly_4_set.insert("630592.830000");
    Undly_4.add_attribute("Fctr", "78591.790000"); // 1
    Undly_4_set.insert("78591.790000");
    Undly_4.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2011112349"); // 1
    Undly_4_set.insert("UnderlyingCreditRating_t_2011112349");
    Undly_4.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_53302709"); // 1
    Undly_4_set.insert("UnderlyingInstrRegistry_t_53302709");
    Undly_4.add_attribute("Ctry", "130661298"); // 1
    Undly_4_set.insert("130661298");
    Undly_4.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1549477693"); // 1
    Undly_4_set.insert("UnderlyingStateOrProvinceOfIssue_t_1549477693");
    Undly_4.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1050283559"); // 1
    Undly_4_set.insert("UnderlyingLocaleOfIssue_t_1050283559");
    Undly_4.add_attribute("Redeem", "UnderlyingRedemptionDate_t_191593229"); // 1
    Undly_4_set.insert("UnderlyingRedemptionDate_t_191593229");
    Undly_4.add_attribute("StrkPx", "6574130.720000"); // 1
    Undly_4_set.insert("6574130.720000");
    Undly_4.add_attribute("StrkCcy", "GBP"); // 1
    Undly_4_set.insert("GBP");
    Undly_4.add_attribute("OptA", "575455178"); // 1
    Undly_4_set.insert("575455178");
    Undly_4.add_attribute("Mult", "19266483.770000"); // 1
    Undly_4_set.insert("19266483.770000");
    Undly_4.add_attribute("MultTyp", "2"); // 1
    Undly_4_set.insert("2");
    Undly_4.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_4_set.insert("1");
    Undly_4.add_attribute("UOM", "Bbl"); // 1
    Undly_4_set.insert("Bbl");
    Undly_4.add_attribute("UOMQty", "12534425.230000"); // 1
    Undly_4_set.insert("12534425.230000");
    Undly_4.add_attribute("PxUOM", "lbs"); // 1
    Undly_4_set.insert("lbs");
    Undly_4.add_attribute("PxUOMQty", "6954557.420000"); // 1
    Undly_4_set.insert("6954557.420000");
    Undly_4.add_attribute("TmUnit", "Yr"); // 1
    Undly_4_set.insert("Yr");
    Undly_4.add_attribute("ExerStyle", "0"); // 1
    Undly_4_set.insert("0");
    Undly_4.add_attribute("CpnRt", "15671715.040000"); // 1
    Undly_4_set.insert("15671715.040000");
    Undly_4.add_attribute("Exch", "UnderlyingSecurityExchange_t_1773241615"); // 1
    Undly_4_set.insert("UnderlyingSecurityExchange_t_1773241615");
    Undly_4.add_attribute("Issr", "UnderlyingIssuer_t_2067964733"); // 1
    Undly_4_set.insert("UnderlyingIssuer_t_2067964733");
    Undly_4.add_attribute("EncUndIssrLen", "1639650843"); // 1
    Undly_4_set.insert("1639650843");
    Undly_4.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1515339766"); // 1
    Undly_4_set.insert("EncodedUnderlyingIssuer_t_1515339766");
    Undly_4.add_attribute("Desc", "UnderlyingSecurityDesc_t_1043105597"); // 1
    Undly_4_set.insert("UnderlyingSecurityDesc_t_1043105597");
    Undly_4.add_attribute("EncUndSecDescLen", "439393675"); // 1
    Undly_4_set.insert("439393675");
    Undly_4.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1382261586"); // 1
    Undly_4_set.insert("EncodedUnderlyingSecurityDesc_t_1382261586");
    Undly_4.add_attribute("CPPgm", "UnderlyingCPProgram_t_128084049"); // 1
    Undly_4_set.insert("UnderlyingCPProgram_t_128084049");
    Undly_4.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1872134240"); // 1
    Undly_4_set.insert("UnderlyingCPRegType_t_1872134240");
    Undly_4.add_attribute("AllocPct", "14453208.690000"); // 1
    Undly_4_set.insert("14453208.690000");
    Undly_4.add_attribute("Ccy", "CHF"); // 1
    Undly_4_set.insert("CHF");
    Undly_4.add_attribute("Qty", "14986235.780000"); // 1
    Undly_4_set.insert("14986235.780000");
    Undly_4.add_attribute("SettlTyp", "5"); // 1
    Undly_4_set.insert("5");
    Undly_4.add_attribute("CashAmt", "UnderlyingCashAmount_t_1137756987"); // 1
    Undly_4_set.insert("UnderlyingCashAmount_t_1137756987");
    Undly_4.add_attribute("CashTyp", "FIXED"); // 1
    Undly_4_set.insert("FIXED");
    Undly_4.add_attribute("Px", "4581977.560000"); // 1
    Undly_4_set.insert("4581977.560000");
    Undly_4.add_attribute("DirtPx", "17951700.590000"); // 1
    Undly_4_set.insert("17951700.590000");
    Undly_4.add_attribute("EndPx", "13808773.030000"); // 1
    Undly_4_set.insert("13808773.030000");
    Undly_4.add_attribute("StartVal", "UnderlyingStartValue_t_1901615376"); // 1
    Undly_4_set.insert("UnderlyingStartValue_t_1901615376");
    Undly_4.add_attribute("CurVal", "UnderlyingCurrentValue_t_223141590"); // 1
    Undly_4_set.insert("UnderlyingCurrentValue_t_223141590");
    Undly_4.add_attribute("EndVal", "UnderlyingEndValue_t_1160042032"); // 1
    Undly_4_set.insert("UnderlyingEndValue_t_1160042032");
    Undly_4.add_attribute("AdjQty", "54162.310000"); // 1
    Undly_4_set.insert("54162.310000");
    Undly_4.add_attribute("FxRate", "18171279.760000"); // 1
    Undly_4_set.insert("18171279.760000");
    Undly_4.add_attribute("FxRateCalc", "D"); // 1
    Undly_4_set.insert("D");
    Undly_4.add_attribute("CapValu", "UnderlyingCapValue_t_1258858754"); // 1
    Undly_4_set.insert("UnderlyingCapValue_t_1258858754");
    Undly_4.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1957295166"); // 1
    Undly_4_set.insert("UnderlyingSettlMethod_t_1957295166");
    Undly_4.add_attribute("PutCall", "1880902247"); // 1
    Undly_4_set.insert("1880902247");
    all_values.push_back(Undly_4_set);
    all_compo_names.insert("Undly_4_set");

    {
      xml_element UndAID_4{"UndAID"};
      multiset<string> UndAID_4_set;
      UndAID_4.add_attribute("AltID", "UnderlyingSecurityAltID_t_1883163119"); // 2
      UndAID_4_set.insert("UnderlyingSecurityAltID_t_1883163119");
      UndAID_4.add_attribute("AltIDSrc", "A"); // 2
      UndAID_4_set.insert("A");
      all_values.push_back(UndAID_4_set);
      all_compo_names.insert("UndAID_4_set");

      Undly_4.add_element(UndAID_4);
    }
    {
      xml_element Stip_9{"Stip"};
      multiset<string> Stip_9_set;
      Stip_9.add_attribute("Typ", "MAXSUBS"); // 2
      Stip_9_set.insert("MAXSUBS");
      Stip_9.add_attribute("Val", "UnderlyingStipValue_t_1508921086"); // 2
      Stip_9_set.insert("UnderlyingStipValue_t_1508921086");
      all_values.push_back(Stip_9_set);
      all_compo_names.insert("Stip_9_set");

      Undly_4.add_element(Stip_9);
    }
    {
      xml_element Pty_29{"Pty"};
      multiset<string> Pty_29_set;
      Pty_29.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1575672148"); // 2
      Pty_29_set.insert("UnderlyingInstrumentPartyID_t_1575672148");
      Pty_29.add_attribute("Src", "3"); // 2
      Pty_29_set.insert("3");
      Pty_29.add_attribute("R", "74"); // 2
      Pty_29_set.insert("74");
      all_values.push_back(Pty_29_set);
      all_compo_names.insert("Pty_29_set");

      {
        xml_element Sub_29{"Sub"};
        multiset<string> Sub_29_set;
        Sub_29.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_471294097"); // 3
        Sub_29_set.insert("UnderlyingInstrumentPartySubID_t_471294097");
        Sub_29.add_attribute("Typ", "19"); // 3
        Sub_29_set.insert("19");
        all_values.push_back(Sub_29_set);
        all_compo_names.insert("Sub_29_set");

        Pty_29.add_element(Sub_29);
      }
      Undly_4.add_element(Pty_29);
    }
    elt.add_element(Undly_4);
  } // end Undly
  { // Undly
    xml_element Undly_5{"Undly"};
    multiset<string> Undly_5_set;
    Undly_5.add_attribute("Sym", "UnderlyingSymbol_t_111555143"); // 1
    Undly_5_set.insert("UnderlyingSymbol_t_111555143");
    Undly_5.add_attribute("Sfx", "CD"); // 1
    Undly_5_set.insert("CD");
    Undly_5.add_attribute("ID", "UnderlyingSecurityID_t_956801566"); // 1
    Undly_5_set.insert("UnderlyingSecurityID_t_956801566");
    Undly_5.add_attribute("Src", "B"); // 1
    Undly_5_set.insert("B");
    Undly_5.add_attribute("Prod", "6"); // 1
    Undly_5_set.insert("6");
    Undly_5.add_attribute("CFI", "UnderlyingCFICode_t_545080859"); // 1
    Undly_5_set.insert("UnderlyingCFICode_t_545080859");
    Undly_5.add_attribute("SecTyp", "MPO"); // 1
    Undly_5_set.insert("MPO");
    Undly_5.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1001925902"); // 1
    Undly_5_set.insert("UnderlyingSecuritySubType_t_1001925902");
    Undly_5.add_attribute("MMY", "1682837846"); // 1
    Undly_5_set.insert("1682837846");
    Undly_5.add_attribute("Mat", "UnderlyingMaturityDate_t_1309439433"); // 1
    Undly_5_set.insert("UnderlyingMaturityDate_t_1309439433");
    Undly_5.add_attribute("MatTm", "1460123658"); // 1
    Undly_5_set.insert("1460123658");
    Undly_5.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1330524258"); // 1
    Undly_5_set.insert("UnderlyingCouponPaymentDate_t_1330524258");
    Undly_5.add_attribute("RestrctTyp", "FR"); // 1
    Undly_5_set.insert("FR");
    Undly_5.add_attribute("Snrty", "SR"); // 1
    Undly_5_set.insert("SR");
    Undly_5.add_attribute("NotlPctOut", "15536658.480000"); // 1
    Undly_5_set.insert("15536658.480000");
    Undly_5.add_attribute("OrigNotlPctOut", "17028751.210000"); // 1
    Undly_5_set.insert("17028751.210000");
    Undly_5.add_attribute("AttchPnt", "12196716.170000"); // 1
    Undly_5_set.insert("12196716.170000");
    Undly_5.add_attribute("DetchPnt", "12233101.760000"); // 1
    Undly_5_set.insert("12233101.760000");
    Undly_5.add_attribute("Issued", "UnderlyingIssueDate_t_740837978"); // 1
    Undly_5_set.insert("UnderlyingIssueDate_t_740837978");
    Undly_5.add_attribute("RepoCollSecTyp", "331046724"); // 1
    Undly_5_set.insert("331046724");
    Undly_5.add_attribute("RepoTrm", "1033121694"); // 1
    Undly_5_set.insert("1033121694");
    Undly_5.add_attribute("RepoRt", "4742565.770000"); // 1
    Undly_5_set.insert("4742565.770000");
    Undly_5.add_attribute("Fctr", "667261.950000"); // 1
    Undly_5_set.insert("667261.950000");
    Undly_5.add_attribute("CrdRtg", "UnderlyingCreditRating_t_540829109"); // 1
    Undly_5_set.insert("UnderlyingCreditRating_t_540829109");
    Undly_5.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1774846680"); // 1
    Undly_5_set.insert("UnderlyingInstrRegistry_t_1774846680");
    Undly_5.add_attribute("Ctry", "1575647282"); // 1
    Undly_5_set.insert("1575647282");
    Undly_5.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2116501257"); // 1
    Undly_5_set.insert("UnderlyingStateOrProvinceOfIssue_t_2116501257");
    Undly_5.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_420120330"); // 1
    Undly_5_set.insert("UnderlyingLocaleOfIssue_t_420120330");
    Undly_5.add_attribute("Redeem", "UnderlyingRedemptionDate_t_304940838"); // 1
    Undly_5_set.insert("UnderlyingRedemptionDate_t_304940838");
    Undly_5.add_attribute("StrkPx", "4403117.060000"); // 1
    Undly_5_set.insert("4403117.060000");
    Undly_5.add_attribute("StrkCcy", "CAN"); // 1
    Undly_5_set.insert("CAN");
    Undly_5.add_attribute("OptA", "1039689853"); // 1
    Undly_5_set.insert("1039689853");
    Undly_5.add_attribute("Mult", "4615892.220000"); // 1
    Undly_5_set.insert("4615892.220000");
    Undly_5.add_attribute("MultTyp", "2"); // 1
    Undly_5_set.insert("2");
    Undly_5.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_5_set.insert("3");
    Undly_5.add_attribute("UOM", "Bbl"); // 1
    Undly_5_set.insert("Bbl");
    Undly_5.add_attribute("UOMQty", "7339042.890000"); // 1
    Undly_5_set.insert("7339042.890000");
    Undly_5.add_attribute("PxUOM", "oz_tr"); // 1
    Undly_5_set.insert("oz_tr");
    Undly_5.add_attribute("PxUOMQty", "5420242.800000"); // 1
    Undly_5_set.insert("5420242.800000");
    Undly_5.add_attribute("TmUnit", "S"); // 1
    Undly_5_set.insert("S");
    Undly_5.add_attribute("ExerStyle", "1"); // 1
    Undly_5_set.insert("1");
    Undly_5.add_attribute("CpnRt", "18725485.380000"); // 1
    Undly_5_set.insert("18725485.380000");
    Undly_5.add_attribute("Exch", "UnderlyingSecurityExchange_t_438693162"); // 1
    Undly_5_set.insert("UnderlyingSecurityExchange_t_438693162");
    Undly_5.add_attribute("Issr", "UnderlyingIssuer_t_1156348878"); // 1
    Undly_5_set.insert("UnderlyingIssuer_t_1156348878");
    Undly_5.add_attribute("EncUndIssrLen", "1278730738"); // 1
    Undly_5_set.insert("1278730738");
    Undly_5.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2141568283"); // 1
    Undly_5_set.insert("EncodedUnderlyingIssuer_t_2141568283");
    Undly_5.add_attribute("Desc", "UnderlyingSecurityDesc_t_228536848"); // 1
    Undly_5_set.insert("UnderlyingSecurityDesc_t_228536848");
    Undly_5.add_attribute("EncUndSecDescLen", "354557266"); // 1
    Undly_5_set.insert("354557266");
    Undly_5.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_734922613"); // 1
    Undly_5_set.insert("EncodedUnderlyingSecurityDesc_t_734922613");
    Undly_5.add_attribute("CPPgm", "UnderlyingCPProgram_t_559583572"); // 1
    Undly_5_set.insert("UnderlyingCPProgram_t_559583572");
    Undly_5.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1387678960"); // 1
    Undly_5_set.insert("UnderlyingCPRegType_t_1387678960");
    Undly_5.add_attribute("AllocPct", "12091791.900000"); // 1
    Undly_5_set.insert("12091791.900000");
    Undly_5.add_attribute("Ccy", "CHF"); // 1
    Undly_5_set.insert("CHF");
    Undly_5.add_attribute("Qty", "8365422.220000"); // 1
    Undly_5_set.insert("8365422.220000");
    Undly_5.add_attribute("SettlTyp", "4"); // 1
    Undly_5_set.insert("4");
    Undly_5.add_attribute("CashAmt", "UnderlyingCashAmount_t_1897525678"); // 1
    Undly_5_set.insert("UnderlyingCashAmount_t_1897525678");
    Undly_5.add_attribute("CashTyp", "DIFF"); // 1
    Undly_5_set.insert("DIFF");
    Undly_5.add_attribute("Px", "3594142.400000"); // 1
    Undly_5_set.insert("3594142.400000");
    Undly_5.add_attribute("DirtPx", "1903537.370000"); // 1
    Undly_5_set.insert("1903537.370000");
    Undly_5.add_attribute("EndPx", "7614502.090000"); // 1
    Undly_5_set.insert("7614502.090000");
    Undly_5.add_attribute("StartVal", "UnderlyingStartValue_t_775910221"); // 1
    Undly_5_set.insert("UnderlyingStartValue_t_775910221");
    Undly_5.add_attribute("CurVal", "UnderlyingCurrentValue_t_1230043590"); // 1
    Undly_5_set.insert("UnderlyingCurrentValue_t_1230043590");
    Undly_5.add_attribute("EndVal", "UnderlyingEndValue_t_1223039432"); // 1
    Undly_5_set.insert("UnderlyingEndValue_t_1223039432");
    Undly_5.add_attribute("AdjQty", "6017985.670000"); // 1
    Undly_5_set.insert("6017985.670000");
    Undly_5.add_attribute("FxRate", "8575711.700000"); // 1
    Undly_5_set.insert("8575711.700000");
    Undly_5.add_attribute("FxRateCalc", "M"); // 1
    Undly_5_set.insert("M");
    Undly_5.add_attribute("CapValu", "UnderlyingCapValue_t_1335702856"); // 1
    Undly_5_set.insert("UnderlyingCapValue_t_1335702856");
    Undly_5.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1487024652"); // 1
    Undly_5_set.insert("UnderlyingSettlMethod_t_1487024652");
    Undly_5.add_attribute("PutCall", "624250146"); // 1
    Undly_5_set.insert("624250146");
    all_values.push_back(Undly_5_set);
    all_compo_names.insert("Undly_5_set");

    {
      xml_element UndAID_5{"UndAID"};
      multiset<string> UndAID_5_set;
      UndAID_5.add_attribute("AltID", "UnderlyingSecurityAltID_t_1231562930"); // 2
      UndAID_5_set.insert("UnderlyingSecurityAltID_t_1231562930");
      UndAID_5.add_attribute("AltIDSrc", "F"); // 2
      UndAID_5_set.insert("F");
      all_values.push_back(UndAID_5_set);
      all_compo_names.insert("UndAID_5_set");

      Undly_5.add_element(UndAID_5);
    }
    {
      xml_element Stip_10{"Stip"};
      multiset<string> Stip_10_set;
      Stip_10.add_attribute("Typ", "TRADERCREDIT"); // 2
      Stip_10_set.insert("TRADERCREDIT");
      Stip_10.add_attribute("Val", "UnderlyingStipValue_t_1670256093"); // 2
      Stip_10_set.insert("UnderlyingStipValue_t_1670256093");
      all_values.push_back(Stip_10_set);
      all_compo_names.insert("Stip_10_set");

      Undly_5.add_element(Stip_10);
    }
    {
      xml_element Pty_30{"Pty"};
      multiset<string> Pty_30_set;
      Pty_30.add_attribute("ID", "UnderlyingInstrumentPartyID_t_437983374"); // 2
      Pty_30_set.insert("UnderlyingInstrumentPartyID_t_437983374");
      Pty_30.add_attribute("Src", "A"); // 2
      Pty_30_set.insert("A");
      Pty_30.add_attribute("R", "17"); // 2
      Pty_30_set.insert("17");
      all_values.push_back(Pty_30_set);
      all_compo_names.insert("Pty_30_set");

      {
        xml_element Sub_30{"Sub"};
        multiset<string> Sub_30_set;
        Sub_30.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_666520222"); // 3
        Sub_30_set.insert("UnderlyingInstrumentPartySubID_t_666520222");
        Sub_30.add_attribute("Typ", "11"); // 3
        Sub_30_set.insert("11");
        all_values.push_back(Sub_30_set);
        all_compo_names.insert("Sub_30_set");

        Pty_30.add_element(Sub_30);
      }
      Undly_5.add_element(Pty_30);
    }
    elt.add_element(Undly_5);
  } // end Undly
  { // Leg
    xml_element Leg_5{"Leg"};
    multiset<string> Leg_5_set;
    Leg_5.add_attribute("Sym", "LegSymbol_t_1226103794"); // 1
    Leg_5_set.insert("LegSymbol_t_1226103794");
    Leg_5.add_attribute("Sfx", "CD"); // 1
    Leg_5_set.insert("CD");
    Leg_5.add_attribute("ID", "LegSecurityID_t_1460958884"); // 1
    Leg_5_set.insert("LegSecurityID_t_1460958884");
    Leg_5.add_attribute("Src", "B"); // 1
    Leg_5_set.insert("B");
    Leg_5.add_attribute("Prod", "5"); // 1
    Leg_5_set.insert("5");
    Leg_5.add_attribute("CFI", "LegCFICode_t_150017459"); // 1
    Leg_5_set.insert("LegCFICode_t_150017459");
    Leg_5.add_attribute("SecTyp", "AMENDED"); // 1
    Leg_5_set.insert("AMENDED");
    Leg_5.add_attribute("SecSubTyp", "LegSecuritySubType_t_753864806"); // 1
    Leg_5_set.insert("LegSecuritySubType_t_753864806");
    Leg_5.add_attribute("MMY", "1406680012"); // 1
    Leg_5_set.insert("1406680012");
    Leg_5.add_attribute("Mat", "LegMaturityDate_t_118817555"); // 1
    Leg_5_set.insert("LegMaturityDate_t_118817555");
    Leg_5.add_attribute("MatTm", "944218543"); // 1
    Leg_5_set.insert("944218543");
    Leg_5.add_attribute("CpnPmt", "LegCouponPaymentDate_t_20646573"); // 1
    Leg_5_set.insert("LegCouponPaymentDate_t_20646573");
    Leg_5.add_attribute("Issued", "LegIssueDate_t_894727777"); // 1
    Leg_5_set.insert("LegIssueDate_t_894727777");
    Leg_5.add_attribute("RepoCollSecTyp", "26778485"); // 1
    Leg_5_set.insert("26778485");
    Leg_5.add_attribute("RepoTrm", "1243686005"); // 1
    Leg_5_set.insert("1243686005");
    Leg_5.add_attribute("RepoRt", "14965263.440000"); // 1
    Leg_5_set.insert("14965263.440000");
    Leg_5.add_attribute("Fctr", "8843496.550000"); // 1
    Leg_5_set.insert("8843496.550000");
    Leg_5.add_attribute("CrdRtg", "LegCreditRating_t_1325911871"); // 1
    Leg_5_set.insert("LegCreditRating_t_1325911871");
    Leg_5.add_attribute("Rgstry", "LegInstrRegistry_t_684745553"); // 1
    Leg_5_set.insert("LegInstrRegistry_t_684745553");
    Leg_5.add_attribute("Ctry", "223890659"); // 1
    Leg_5_set.insert("223890659");
    Leg_5.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1950162018"); // 1
    Leg_5_set.insert("LegStateOrProvinceOfIssue_t_1950162018");
    Leg_5.add_attribute("Lcl", "LegLocaleOfIssue_t_1916308483"); // 1
    Leg_5_set.insert("LegLocaleOfIssue_t_1916308483");
    Leg_5.add_attribute("Redeem", "LegRedemptionDate_t_1653008803"); // 1
    Leg_5_set.insert("LegRedemptionDate_t_1653008803");
    Leg_5.add_attribute("Strk", "1519934.070000"); // 1
    Leg_5_set.insert("1519934.070000");
    Leg_5.add_attribute("StrkCcy", "GBP"); // 1
    Leg_5_set.insert("GBP");
    Leg_5.add_attribute("OptA", "1780039182"); // 1
    Leg_5_set.insert("1780039182");
    Leg_5.add_attribute("Cmult", "9559380.090000"); // 1
    Leg_5_set.insert("9559380.090000");
    Leg_5.add_attribute("MultTyp", "1"); // 1
    Leg_5_set.insert("1");
    Leg_5.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_5_set.insert("1");
    Leg_5.add_attribute("UOM", "Bcf"); // 1
    Leg_5_set.insert("Bcf");
    Leg_5.add_attribute("UOMQty", "18361325.470000"); // 1
    Leg_5_set.insert("18361325.470000");
    Leg_5.add_attribute("PxUOM", "MMbbl"); // 1
    Leg_5_set.insert("MMbbl");
    Leg_5.add_attribute("PxUOMQty", "5211929.390000"); // 1
    Leg_5_set.insert("5211929.390000");
    Leg_5.add_attribute("TmUnit", "Min"); // 1
    Leg_5_set.insert("Min");
    Leg_5.add_attribute("ExerStyle", "0"); // 1
    Leg_5_set.insert("0");
    Leg_5.add_attribute("CpnRt", "6712103.980000"); // 1
    Leg_5_set.insert("6712103.980000");
    Leg_5.add_attribute("Exch", "LegSecurityExchange_t_1300465776"); // 1
    Leg_5_set.insert("LegSecurityExchange_t_1300465776");
    Leg_5.add_attribute("Issr", "LegIssuer_t_300677217"); // 1
    Leg_5_set.insert("LegIssuer_t_300677217");
    Leg_5.add_attribute("EncLegIssrLen", "2077890410"); // 1
    Leg_5_set.insert("2077890410");
    Leg_5.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1419283332"); // 1
    Leg_5_set.insert("EncodedLegIssuer_t_1419283332");
    Leg_5.add_attribute("Desc", "LegSecurityDesc_t_1244895761"); // 1
    Leg_5_set.insert("LegSecurityDesc_t_1244895761");
    Leg_5.add_attribute("EncLegSecDescLen", "2098536984"); // 1
    Leg_5_set.insert("2098536984");
    Leg_5.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_166527461"); // 1
    Leg_5_set.insert("EncodedLegSecurityDesc_t_166527461");
    Leg_5.add_attribute("RatioQty", "12716742.460000"); // 1
    Leg_5_set.insert("12716742.460000");
    Leg_5.add_attribute("Side", "E"); // 1
    Leg_5_set.insert("E");
    Leg_5.add_attribute("Ccy", "JPY"); // 1
    Leg_5_set.insert("JPY");
    Leg_5.add_attribute("Pool", "LegPool_t_373167565"); // 1
    Leg_5_set.insert("LegPool_t_373167565");
    Leg_5.add_attribute("Dated", "LegDatedDate_t_200315710"); // 1
    Leg_5_set.insert("LegDatedDate_t_200315710");
    Leg_5.add_attribute("CSetMo", "232430913"); // 1
    Leg_5_set.insert("232430913");
    Leg_5.add_attribute("IntAcrl", "LegInterestAccrualDate_t_175845935"); // 1
    Leg_5_set.insert("LegInterestAccrualDate_t_175845935");
    Leg_5.add_attribute("PutCall", "2116624194"); // 1
    Leg_5_set.insert("2116624194");
    Leg_5.add_attribute("LegOptionRatio", "18854397.170000"); // 1
    Leg_5_set.insert("18854397.170000");
    Leg_5.add_attribute("Px", "3278393.420000"); // 1
    Leg_5_set.insert("3278393.420000");
    all_values.push_back(Leg_5_set);
    all_compo_names.insert("Leg_5_set");

    {
      xml_element LegAID_5{"LegAID"};
      multiset<string> LegAID_5_set;
      LegAID_5.add_attribute("SecAltID", "LegSecurityAltID_t_1408221474"); // 2
      LegAID_5_set.insert("LegSecurityAltID_t_1408221474");
      LegAID_5.add_attribute("SecAltIDSrc", "6"); // 2
      LegAID_5_set.insert("6");
      all_values.push_back(LegAID_5_set);
      all_compo_names.insert("LegAID_5_set");

      Leg_5.add_element(LegAID_5);
    }
    elt.add_element(Leg_5);
  } // end Leg
  { // Leg
    xml_element Leg_6{"Leg"};
    multiset<string> Leg_6_set;
    Leg_6.add_attribute("Sym", "LegSymbol_t_2107878524"); // 1
    Leg_6_set.insert("LegSymbol_t_2107878524");
    Leg_6.add_attribute("Sfx", "WI"); // 1
    Leg_6_set.insert("WI");
    Leg_6.add_attribute("ID", "LegSecurityID_t_291493351"); // 1
    Leg_6_set.insert("LegSecurityID_t_291493351");
    Leg_6.add_attribute("Src", "2"); // 1
    Leg_6_set.insert("2");
    Leg_6.add_attribute("Prod", "6"); // 1
    Leg_6_set.insert("6");
    Leg_6.add_attribute("CFI", "LegCFICode_t_2127625898"); // 1
    Leg_6_set.insert("LegCFICode_t_2127625898");
    Leg_6.add_attribute("SecTyp", "PFAND"); // 1
    Leg_6_set.insert("PFAND");
    Leg_6.add_attribute("SecSubTyp", "LegSecuritySubType_t_1945586478"); // 1
    Leg_6_set.insert("LegSecuritySubType_t_1945586478");
    Leg_6.add_attribute("MMY", "1521204711"); // 1
    Leg_6_set.insert("1521204711");
    Leg_6.add_attribute("Mat", "LegMaturityDate_t_1812839147"); // 1
    Leg_6_set.insert("LegMaturityDate_t_1812839147");
    Leg_6.add_attribute("MatTm", "469313228"); // 1
    Leg_6_set.insert("469313228");
    Leg_6.add_attribute("CpnPmt", "LegCouponPaymentDate_t_674186840"); // 1
    Leg_6_set.insert("LegCouponPaymentDate_t_674186840");
    Leg_6.add_attribute("Issued", "LegIssueDate_t_2113516364"); // 1
    Leg_6_set.insert("LegIssueDate_t_2113516364");
    Leg_6.add_attribute("RepoCollSecTyp", "399719991"); // 1
    Leg_6_set.insert("399719991");
    Leg_6.add_attribute("RepoTrm", "2093470172"); // 1
    Leg_6_set.insert("2093470172");
    Leg_6.add_attribute("RepoRt", "12109284.770000"); // 1
    Leg_6_set.insert("12109284.770000");
    Leg_6.add_attribute("Fctr", "3507733.270000"); // 1
    Leg_6_set.insert("3507733.270000");
    Leg_6.add_attribute("CrdRtg", "LegCreditRating_t_112513985"); // 1
    Leg_6_set.insert("LegCreditRating_t_112513985");
    Leg_6.add_attribute("Rgstry", "LegInstrRegistry_t_335119076"); // 1
    Leg_6_set.insert("LegInstrRegistry_t_335119076");
    Leg_6.add_attribute("Ctry", "1545512668"); // 1
    Leg_6_set.insert("1545512668");
    Leg_6.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1775567790"); // 1
    Leg_6_set.insert("LegStateOrProvinceOfIssue_t_1775567790");
    Leg_6.add_attribute("Lcl", "LegLocaleOfIssue_t_343659330"); // 1
    Leg_6_set.insert("LegLocaleOfIssue_t_343659330");
    Leg_6.add_attribute("Redeem", "LegRedemptionDate_t_1918680233"); // 1
    Leg_6_set.insert("LegRedemptionDate_t_1918680233");
    Leg_6.add_attribute("Strk", "19758835.010000"); // 1
    Leg_6_set.insert("19758835.010000");
    Leg_6.add_attribute("StrkCcy", "JPY"); // 1
    Leg_6_set.insert("JPY");
    Leg_6.add_attribute("OptA", "1945024047"); // 1
    Leg_6_set.insert("1945024047");
    Leg_6.add_attribute("Cmult", "3140463.120000"); // 1
    Leg_6_set.insert("3140463.120000");
    Leg_6.add_attribute("MultTyp", "1"); // 1
    Leg_6_set.insert("1");
    Leg_6.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_6_set.insert("3");
    Leg_6.add_attribute("UOM", "t"); // 1
    Leg_6_set.insert("t");
    Leg_6.add_attribute("UOMQty", "2352767.390000"); // 1
    Leg_6_set.insert("2352767.390000");
    Leg_6.add_attribute("PxUOM", "t"); // 1
    Leg_6_set.insert("t");
    Leg_6.add_attribute("PxUOMQty", "2870042.630000"); // 1
    Leg_6_set.insert("2870042.630000");
    Leg_6.add_attribute("TmUnit", "D"); // 1
    Leg_6_set.insert("D");
    Leg_6.add_attribute("ExerStyle", "1"); // 1
    Leg_6_set.insert("1");
    Leg_6.add_attribute("CpnRt", "2671465.130000"); // 1
    Leg_6_set.insert("2671465.130000");
    Leg_6.add_attribute("Exch", "LegSecurityExchange_t_1929373280"); // 1
    Leg_6_set.insert("LegSecurityExchange_t_1929373280");
    Leg_6.add_attribute("Issr", "LegIssuer_t_497450429"); // 1
    Leg_6_set.insert("LegIssuer_t_497450429");
    Leg_6.add_attribute("EncLegIssrLen", "1788351225"); // 1
    Leg_6_set.insert("1788351225");
    Leg_6.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1594728779"); // 1
    Leg_6_set.insert("EncodedLegIssuer_t_1594728779");
    Leg_6.add_attribute("Desc", "LegSecurityDesc_t_966763658"); // 1
    Leg_6_set.insert("LegSecurityDesc_t_966763658");
    Leg_6.add_attribute("EncLegSecDescLen", "315054417"); // 1
    Leg_6_set.insert("315054417");
    Leg_6.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1560761495"); // 1
    Leg_6_set.insert("EncodedLegSecurityDesc_t_1560761495");
    Leg_6.add_attribute("RatioQty", "13664836.490000"); // 1
    Leg_6_set.insert("13664836.490000");
    Leg_6.add_attribute("Side", "E"); // 1
    Leg_6_set.insert("E");
    Leg_6.add_attribute("Ccy", "USD"); // 1
    Leg_6_set.insert("USD");
    Leg_6.add_attribute("Pool", "LegPool_t_373554926"); // 1
    Leg_6_set.insert("LegPool_t_373554926");
    Leg_6.add_attribute("Dated", "LegDatedDate_t_959325401"); // 1
    Leg_6_set.insert("LegDatedDate_t_959325401");
    Leg_6.add_attribute("CSetMo", "1115285996"); // 1
    Leg_6_set.insert("1115285996");
    Leg_6.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1639068"); // 1
    Leg_6_set.insert("LegInterestAccrualDate_t_1639068");
    Leg_6.add_attribute("PutCall", "1302984731"); // 1
    Leg_6_set.insert("1302984731");
    Leg_6.add_attribute("LegOptionRatio", "8864825.820000"); // 1
    Leg_6_set.insert("8864825.820000");
    Leg_6.add_attribute("Px", "19775225.690000"); // 1
    Leg_6_set.insert("19775225.690000");
    all_values.push_back(Leg_6_set);
    all_compo_names.insert("Leg_6_set");

    {
      xml_element LegAID_6{"LegAID"};
      multiset<string> LegAID_6_set;
      LegAID_6.add_attribute("SecAltID", "LegSecurityAltID_t_1879074974"); // 2
      LegAID_6_set.insert("LegSecurityAltID_t_1879074974");
      LegAID_6.add_attribute("SecAltIDSrc", "F"); // 2
      LegAID_6_set.insert("F");
      all_values.push_back(LegAID_6_set);
      all_compo_names.insert("LegAID_6_set");

      Leg_6.add_element(LegAID_6);
    }
    elt.add_element(Leg_6);
  } // end Leg
  { // Leg
    xml_element Leg_7{"Leg"};
    multiset<string> Leg_7_set;
    Leg_7.add_attribute("Sym", "LegSymbol_t_1775062968"); // 1
    Leg_7_set.insert("LegSymbol_t_1775062968");
    Leg_7.add_attribute("Sfx", "WI"); // 1
    Leg_7_set.insert("WI");
    Leg_7.add_attribute("ID", "LegSecurityID_t_1108406965"); // 1
    Leg_7_set.insert("LegSecurityID_t_1108406965");
    Leg_7.add_attribute("Src", "5"); // 1
    Leg_7_set.insert("5");
    Leg_7.add_attribute("Prod", "10"); // 1
    Leg_7_set.insert("10");
    Leg_7.add_attribute("CFI", "LegCFICode_t_1343683704"); // 1
    Leg_7_set.insert("LegCFICode_t_1343683704");
    Leg_7.add_attribute("SecTyp", "MTN"); // 1
    Leg_7_set.insert("MTN");
    Leg_7.add_attribute("SecSubTyp", "LegSecuritySubType_t_328152813"); // 1
    Leg_7_set.insert("LegSecuritySubType_t_328152813");
    Leg_7.add_attribute("MMY", "1007030248"); // 1
    Leg_7_set.insert("1007030248");
    Leg_7.add_attribute("Mat", "LegMaturityDate_t_807642854"); // 1
    Leg_7_set.insert("LegMaturityDate_t_807642854");
    Leg_7.add_attribute("MatTm", "595299327"); // 1
    Leg_7_set.insert("595299327");
    Leg_7.add_attribute("CpnPmt", "LegCouponPaymentDate_t_788919880"); // 1
    Leg_7_set.insert("LegCouponPaymentDate_t_788919880");
    Leg_7.add_attribute("Issued", "LegIssueDate_t_1305093284"); // 1
    Leg_7_set.insert("LegIssueDate_t_1305093284");
    Leg_7.add_attribute("RepoCollSecTyp", "236166904"); // 1
    Leg_7_set.insert("236166904");
    Leg_7.add_attribute("RepoTrm", "236165011"); // 1
    Leg_7_set.insert("236165011");
    Leg_7.add_attribute("RepoRt", "1243732.940000"); // 1
    Leg_7_set.insert("1243732.940000");
    Leg_7.add_attribute("Fctr", "5512213.210000"); // 1
    Leg_7_set.insert("5512213.210000");
    Leg_7.add_attribute("CrdRtg", "LegCreditRating_t_1796926506"); // 1
    Leg_7_set.insert("LegCreditRating_t_1796926506");
    Leg_7.add_attribute("Rgstry", "LegInstrRegistry_t_1490856943"); // 1
    Leg_7_set.insert("LegInstrRegistry_t_1490856943");
    Leg_7.add_attribute("Ctry", "812262262"); // 1
    Leg_7_set.insert("812262262");
    Leg_7.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_273649183"); // 1
    Leg_7_set.insert("LegStateOrProvinceOfIssue_t_273649183");
    Leg_7.add_attribute("Lcl", "LegLocaleOfIssue_t_1060630271"); // 1
    Leg_7_set.insert("LegLocaleOfIssue_t_1060630271");
    Leg_7.add_attribute("Redeem", "LegRedemptionDate_t_1185817188"); // 1
    Leg_7_set.insert("LegRedemptionDate_t_1185817188");
    Leg_7.add_attribute("Strk", "12329745.840000"); // 1
    Leg_7_set.insert("12329745.840000");
    Leg_7.add_attribute("StrkCcy", "USD"); // 1
    Leg_7_set.insert("USD");
    Leg_7.add_attribute("OptA", "388475667"); // 1
    Leg_7_set.insert("388475667");
    Leg_7.add_attribute("Cmult", "9149152.010000"); // 1
    Leg_7_set.insert("9149152.010000");
    Leg_7.add_attribute("MultTyp", "1"); // 1
    Leg_7_set.insert("1");
    Leg_7.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_7_set.insert("4");
    Leg_7.add_attribute("UOM", "MWh"); // 1
    Leg_7_set.insert("MWh");
    Leg_7.add_attribute("UOMQty", "6450744.980000"); // 1
    Leg_7_set.insert("6450744.980000");
    Leg_7.add_attribute("PxUOM", "Gal"); // 1
    Leg_7_set.insert("Gal");
    Leg_7.add_attribute("PxUOMQty", "7093636.210000"); // 1
    Leg_7_set.insert("7093636.210000");
    Leg_7.add_attribute("TmUnit", "Mo"); // 1
    Leg_7_set.insert("Mo");
    Leg_7.add_attribute("ExerStyle", "0"); // 1
    Leg_7_set.insert("0");
    Leg_7.add_attribute("CpnRt", "20530473.250000"); // 1
    Leg_7_set.insert("20530473.250000");
    Leg_7.add_attribute("Exch", "LegSecurityExchange_t_1586710947"); // 1
    Leg_7_set.insert("LegSecurityExchange_t_1586710947");
    Leg_7.add_attribute("Issr", "LegIssuer_t_535005997"); // 1
    Leg_7_set.insert("LegIssuer_t_535005997");
    Leg_7.add_attribute("EncLegIssrLen", "912593925"); // 1
    Leg_7_set.insert("912593925");
    Leg_7.add_attribute("EncLegIssr", "EncodedLegIssuer_t_246870154"); // 1
    Leg_7_set.insert("EncodedLegIssuer_t_246870154");
    Leg_7.add_attribute("Desc", "LegSecurityDesc_t_1130305324"); // 1
    Leg_7_set.insert("LegSecurityDesc_t_1130305324");
    Leg_7.add_attribute("EncLegSecDescLen", "1701513805"); // 1
    Leg_7_set.insert("1701513805");
    Leg_7.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1551963438"); // 1
    Leg_7_set.insert("EncodedLegSecurityDesc_t_1551963438");
    Leg_7.add_attribute("RatioQty", "13664722.280000"); // 1
    Leg_7_set.insert("13664722.280000");
    Leg_7.add_attribute("Side", "1"); // 1
    Leg_7_set.insert("1");
    Leg_7.add_attribute("Ccy", "CHF"); // 1
    Leg_7_set.insert("CHF");
    Leg_7.add_attribute("Pool", "LegPool_t_1587121674"); // 1
    Leg_7_set.insert("LegPool_t_1587121674");
    Leg_7.add_attribute("Dated", "LegDatedDate_t_1019710027"); // 1
    Leg_7_set.insert("LegDatedDate_t_1019710027");
    Leg_7.add_attribute("CSetMo", "582472163"); // 1
    Leg_7_set.insert("582472163");
    Leg_7.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1860770858"); // 1
    Leg_7_set.insert("LegInterestAccrualDate_t_1860770858");
    Leg_7.add_attribute("PutCall", "2080340298"); // 1
    Leg_7_set.insert("2080340298");
    Leg_7.add_attribute("LegOptionRatio", "17682893.510000"); // 1
    Leg_7_set.insert("17682893.510000");
    Leg_7.add_attribute("Px", "9462617.940000"); // 1
    Leg_7_set.insert("9462617.940000");
    all_values.push_back(Leg_7_set);
    all_compo_names.insert("Leg_7_set");

    {
      xml_element LegAID_7{"LegAID"};
      multiset<string> LegAID_7_set;
      LegAID_7.add_attribute("SecAltID", "LegSecurityAltID_t_2108772917"); // 2
      LegAID_7_set.insert("LegSecurityAltID_t_2108772917");
      LegAID_7.add_attribute("SecAltIDSrc", "M"); // 2
      LegAID_7_set.insert("M");
      all_values.push_back(LegAID_7_set);
      all_compo_names.insert("LegAID_7_set");

      Leg_7.add_element(LegAID_7);
    }
    elt.add_element(Leg_7);
  } // end Leg
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_2{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_2_set;
    SprdBnchmkCurve_2.add_attribute("Spread", "13347374.620000"); // 1
    SprdBnchmkCurve_2_set.insert("13347374.620000");
    SprdBnchmkCurve_2.add_attribute("Ccy", "EUR"); // 1
    SprdBnchmkCurve_2_set.insert("EUR");
    SprdBnchmkCurve_2.add_attribute("Name", "Pfandbriefe"); // 1
    SprdBnchmkCurve_2_set.insert("Pfandbriefe");
    SprdBnchmkCurve_2.add_attribute("Point", "BenchmarkCurvePoint_t_477161127"); // 1
    SprdBnchmkCurve_2_set.insert("BenchmarkCurvePoint_t_477161127");
    SprdBnchmkCurve_2.add_attribute("Px", "3233479.880000"); // 1
    SprdBnchmkCurve_2_set.insert("3233479.880000");
    SprdBnchmkCurve_2.add_attribute("PxTyp", "15"); // 1
    SprdBnchmkCurve_2_set.insert("15");
    SprdBnchmkCurve_2.add_attribute("SecID", "BenchmarkSecurityID_t_1186524748"); // 1
    SprdBnchmkCurve_2_set.insert("BenchmarkSecurityID_t_1186524748");
    SprdBnchmkCurve_2.add_attribute("SecIDSrc", "3"); // 1
    SprdBnchmkCurve_2_set.insert("3");
    all_values.push_back(SprdBnchmkCurve_2_set);
    all_compo_names.insert("SprdBnchmkCurve_2_set");

    elt.add_element(SprdBnchmkCurve_2);
  } // end SprdBnchmkCurve
  { // Pty
    xml_element Pty_31{"Pty"};
    multiset<string> Pty_31_set;
    Pty_31.add_attribute("ID", "PartyID_t_1092088425"); // 1
    Pty_31_set.insert("PartyID_t_1092088425");
    Pty_31.add_attribute("Src", "7"); // 1
    Pty_31_set.insert("7");
    Pty_31.add_attribute("R", "3"); // 1
    Pty_31_set.insert("3");
    all_values.push_back(Pty_31_set);
    all_compo_names.insert("Pty_31_set");

    {
      xml_element Sub_31{"Sub"};
      multiset<string> Sub_31_set;
      Sub_31.add_attribute("ID", "PartySubID_t_2004682350"); // 2
      Sub_31_set.insert("PartySubID_t_2004682350");
      Sub_31.add_attribute("Typ", "10"); // 2
      Sub_31_set.insert("10");
      all_values.push_back(Sub_31_set);
      all_compo_names.insert("Sub_31_set");

      Pty_31.add_element(Sub_31);
    }
    elt.add_element(Pty_31);
  } // end Pty
  { // Pty
    xml_element Pty_32{"Pty"};
    multiset<string> Pty_32_set;
    Pty_32.add_attribute("ID", "PartyID_t_1345189945"); // 1
    Pty_32_set.insert("PartyID_t_1345189945");
    Pty_32.add_attribute("Src", "6"); // 1
    Pty_32_set.insert("6");
    Pty_32.add_attribute("R", "29"); // 1
    Pty_32_set.insert("29");
    all_values.push_back(Pty_32_set);
    all_compo_names.insert("Pty_32_set");

    {
      xml_element Sub_32{"Sub"};
      multiset<string> Sub_32_set;
      Sub_32.add_attribute("ID", "PartySubID_t_564178525"); // 2
      Sub_32_set.insert("PartySubID_t_564178525");
      Sub_32.add_attribute("Typ", "14"); // 2
      Sub_32_set.insert("14");
      all_values.push_back(Sub_32_set);
      all_compo_names.insert("Sub_32_set");

      Pty_32.add_element(Sub_32);
    }
    elt.add_element(Pty_32);
  } // end Pty
  { // Stip
    xml_element Stip_11{"Stip"};
    multiset<string> Stip_11_set;
    Stip_11.add_attribute("Typ", "MININCR"); // 1
    Stip_11_set.insert("MININCR");
    Stip_11.add_attribute("Val", "StipulationValue_t_788545701"); // 1
    Stip_11_set.insert("StipulationValue_t_788545701");
    all_values.push_back(Stip_11_set);
    all_compo_names.insert("Stip_11_set");

    elt.add_element(Stip_11);
  } // end Stip
  { // Stip
    xml_element Stip_12{"Stip"};
    multiset<string> Stip_12_set;
    Stip_12.add_attribute("Typ", "PPT"); // 1
    Stip_12_set.insert("PPT");
    Stip_12.add_attribute("Val", "StipulationValue_t_916860589"); // 1
    Stip_12_set.insert("StipulationValue_t_916860589");
    all_values.push_back(Stip_12_set);
    all_compo_names.insert("Stip_12_set");

    elt.add_element(Stip_12);
  } // end Stip
  { // Stip
    xml_element Stip_13{"Stip"};
    multiset<string> Stip_13_set;
    Stip_13.add_attribute("Typ", "PMAX"); // 1
    Stip_13_set.insert("PMAX");
    Stip_13.add_attribute("Val", "StipulationValue_t_1373760685"); // 1
    Stip_13_set.insert("StipulationValue_t_1373760685");
    all_values.push_back(Stip_13_set);
    all_compo_names.insert("Stip_13_set");

    elt.add_element(Stip_13);
  } // end Stip
  { // Yield
    xml_element Yield_2{"Yield"};
    multiset<string> Yield_2_set;
    Yield_2.add_attribute("Typ", "LASTQUARTER"); // 1
    Yield_2_set.insert("LASTQUARTER");
    Yield_2.add_attribute("Yld", "14480947.060000"); // 1
    Yield_2_set.insert("14480947.060000");
    Yield_2.add_attribute("CalcDt", "YieldCalcDate_t_1335049954"); // 1
    Yield_2_set.insert("YieldCalcDate_t_1335049954");
    Yield_2.add_attribute("RedDt", "YieldRedemptionDate_t_1345928252"); // 1
    Yield_2_set.insert("YieldRedemptionDate_t_1345928252");
    Yield_2.add_attribute("RedPx", "6353485.200000"); // 1
    Yield_2_set.insert("6353485.200000");
    Yield_2.add_attribute("RedPxTyp", "19"); // 1
    Yield_2_set.insert("19");
    all_values.push_back(Yield_2_set);
    all_compo_names.insert("Yield_2_set");

    elt.add_element(Yield_2);
  } // end Yield
  { // Amt
    xml_element Amt_3{"Amt"};
    multiset<string> Amt_3_set;
    Amt_3.add_attribute("Typ", "ICMTM"); // 1
    Amt_3_set.insert("ICMTM");
    Amt_3.add_attribute("Amt", "PosAmt_t_540931904"); // 1
    Amt_3_set.insert("PosAmt_t_540931904");
    Amt_3.add_attribute("Ccy", "PositionCurrency_t_1347549729"); // 1
    Amt_3_set.insert("PositionCurrency_t_1347549729");
    all_values.push_back(Amt_3_set);
    all_compo_names.insert("Amt_3_set");

    elt.add_element(Amt_3);
  } // end Amt
  { // Amt
    xml_element Amt_4{"Amt"};
    multiset<string> Amt_4_set;
    Amt_4.add_attribute("Typ", "VADJ"); // 1
    Amt_4_set.insert("VADJ");
    Amt_4.add_attribute("Amt", "PosAmt_t_1727456652"); // 1
    Amt_4_set.insert("PosAmt_t_1727456652");
    Amt_4.add_attribute("Ccy", "PositionCurrency_t_1001829762"); // 1
    Amt_4_set.insert("PositionCurrency_t_1001829762");
    all_values.push_back(Amt_4_set);
    all_compo_names.insert("Amt_4_set");

    elt.add_element(Amt_4);
  } // end Amt
  { // Alloc
    xml_element Alloc_3{"Alloc"};
    multiset<string> Alloc_3_set;
    Alloc_3.add_attribute("Acct", "AllocAccount_t_672061429"); // 1
    Alloc_3_set.insert("AllocAccount_t_672061429");
    Alloc_3.add_attribute("ActIDSrc", "5"); // 1
    Alloc_3_set.insert("5");
    Alloc_3.add_attribute("MtchStat", "1"); // 1
    Alloc_3_set.insert("1");
    Alloc_3.add_attribute("Px", "5292601.310000"); // 1
    Alloc_3_set.insert("5292601.310000");
    Alloc_3.add_attribute("Qty", "15831982.280000"); // 1
    Alloc_3_set.insert("15831982.280000");
    Alloc_3.add_attribute("IndAllocID", "IndividualAllocID_t_655647960"); // 1
    Alloc_3_set.insert("IndividualAllocID_t_655647960");
    Alloc_3.add_attribute("ProcCode", "3"); // 1
    Alloc_3_set.insert("3");
    Alloc_3.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_328055504"); // 1
    Alloc_3_set.insert("SecondaryIndividualAllocID_t_328055504");
    Alloc_3.add_attribute("Meth", "3"); // 1
    Alloc_3_set.insert("3");
    Alloc_3.add_attribute("CustCpcty", "AllocCustomerCapacity_t_1289396665"); // 1
    Alloc_3_set.insert("AllocCustomerCapacity_t_1289396665");
    Alloc_3.add_attribute("AllocPosEfct", "O"); // 1
    Alloc_3_set.insert("O");
    Alloc_3.add_attribute("Typ", "1"); // 1
    Alloc_3_set.insert("1");
    Alloc_3.add_attribute("NotifyBrkrOfCredit", "Y"); // 1
    Alloc_3_set.insert("Y");
    Alloc_3.add_attribute("HandlInst", "3"); // 1
    Alloc_3_set.insert("3");
    Alloc_3.add_attribute("Txt", "AllocText_t_323591854"); // 1
    Alloc_3_set.insert("AllocText_t_323591854");
    Alloc_3.add_attribute("EncAllocTextLen", "432291630"); // 1
    Alloc_3_set.insert("432291630");
    Alloc_3.add_attribute("EncAllocText", "EncodedAllocText_t_1416430584"); // 1
    Alloc_3_set.insert("EncodedAllocText_t_1416430584");
    Alloc_3.add_attribute("AvgPx", "8612581.460000"); // 1
    Alloc_3_set.insert("8612581.460000");
    Alloc_3.add_attribute("NetMny", "AllocNetMoney_t_1880386336"); // 1
    Alloc_3_set.insert("AllocNetMoney_t_1880386336");
    Alloc_3.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_603996890"); // 1
    Alloc_3_set.insert("SettlCurrAmt_t_603996890");
    Alloc_3.add_attribute("SettlCcyAmt", "AllocSettlCurrAmt_t_59702750"); // 1
    Alloc_3_set.insert("AllocSettlCurrAmt_t_59702750");
    Alloc_3.add_attribute("SettlCcy", "GBP"); // 1
    Alloc_3_set.insert("GBP");
    Alloc_3.add_attribute("AllocSettlCcy", "GBP"); // 1
    Alloc_3_set.insert("GBP");
    Alloc_3.add_attribute("SettlCurrFxRt", "12086995.720000"); // 1
    Alloc_3_set.insert("12086995.720000");
    Alloc_3.add_attribute("SettlCurrFxRtCalc", "D"); // 1
    Alloc_3_set.insert("D");
    Alloc_3.add_attribute("AcrdIntAmt", "AllocAccruedInterestAmt_t_1874098953"); // 1
    Alloc_3_set.insert("AllocAccruedInterestAmt_t_1874098953");
    Alloc_3.add_attribute("IntAtMat", "AllocInterestAtMaturity_t_788672577"); // 1
    Alloc_3_set.insert("AllocInterestAtMaturity_t_788672577");
    Alloc_3.add_attribute("ClrFeeInd", "2"); // 1
    Alloc_3_set.insert("2");
    Alloc_3.add_attribute("SettlInstTyp", "2"); // 1
    Alloc_3_set.insert("2");
    all_values.push_back(Alloc_3_set);
    all_compo_names.insert("Alloc_3_set");

    {
      xml_element Pty_33{"Pty"};
      multiset<string> Pty_33_set;
      Pty_33.add_attribute("ID", "NestedPartyID_t_1460734006"); // 2
      Pty_33_set.insert("NestedPartyID_t_1460734006");
      Pty_33.add_attribute("Src", "4"); // 2
      Pty_33_set.insert("4");
      Pty_33.add_attribute("R", "30"); // 2
      Pty_33_set.insert("30");
      all_values.push_back(Pty_33_set);
      all_compo_names.insert("Pty_33_set");

      {
        xml_element Sub_33{"Sub"};
        multiset<string> Sub_33_set;
        Sub_33.add_attribute("ID", "NestedPartySubID_t_1989994138"); // 3
        Sub_33_set.insert("NestedPartySubID_t_1989994138");
        Sub_33.add_attribute("Typ", "15"); // 3
        Sub_33_set.insert("15");
        all_values.push_back(Sub_33_set);
        all_compo_names.insert("Sub_33_set");

        Pty_33.add_element(Sub_33);
      }
      Alloc_3.add_element(Pty_33);
    }
    {
      xml_element Comm_3{"Comm"};
      multiset<string> Comm_3_set;
      Comm_3.add_attribute("Comm", "Commission_t_935778322"); // 2
      Comm_3_set.insert("Commission_t_935778322");
      Comm_3.add_attribute("CommTyp", "1"); // 2
      Comm_3_set.insert("1");
      Comm_3.add_attribute("Ccy", "JPY"); // 2
      Comm_3_set.insert("JPY");
      Comm_3.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_3_set.insert("N");
      all_values.push_back(Comm_3_set);
      all_compo_names.insert("Comm_3_set");

      Alloc_3.add_element(Comm_3);
    }
    {
      xml_element MiscFees_3{"MiscFees"};
      multiset<string> MiscFees_3_set;
      MiscFees_3.add_attribute("Amt", "MiscFeeAmt_t_1894157025"); // 2
      MiscFees_3_set.insert("MiscFeeAmt_t_1894157025");
      MiscFees_3.add_attribute("Curr", "CHF"); // 2
      MiscFees_3_set.insert("CHF");
      MiscFees_3.add_attribute("Typ", "2"); // 2
      MiscFees_3_set.insert("2");
      MiscFees_3.add_attribute("Basis", "1"); // 2
      MiscFees_3_set.insert("1");
      all_values.push_back(MiscFees_3_set);
      all_compo_names.insert("MiscFees_3_set");

      Alloc_3.add_element(MiscFees_3);
    }
    {
      xml_element ClrInst_3{"ClrInst"};
      multiset<string> ClrInst_3_set;
      ClrInst_3.add_attribute("ClrngInstrctn", "9"); // 2
      ClrInst_3_set.insert("9");
      all_values.push_back(ClrInst_3_set);
      all_compo_names.insert("ClrInst_3_set");

      Alloc_3.add_element(ClrInst_3);
    }
    {
      xml_element SetInstr_3{"SetInstr"};
      multiset<string> SetInstr_3_set;
      SetInstr_3.add_attribute("DlvryTyp", "0"); // 2
      SetInstr_3_set.insert("0");
      SetInstr_3.add_attribute("StandInstDbTyp", "0"); // 2
      SetInstr_3_set.insert("0");
      SetInstr_3.add_attribute("StandInstDbName", "StandInstDbName_t_1168049184"); // 2
      SetInstr_3_set.insert("StandInstDbName_t_1168049184");
      SetInstr_3.add_attribute("StandInstDbID", "StandInstDbID_t_1809770751"); // 2
      SetInstr_3_set.insert("StandInstDbID_t_1809770751");
      all_values.push_back(SetInstr_3_set);
      all_compo_names.insert("SetInstr_3_set");

      {
        xml_element DlvInst_3{"DlvInst"};
        multiset<string> DlvInst_3_set;
        DlvInst_3.add_attribute("InstSrc", "2"); // 3
        DlvInst_3_set.insert("2");
        DlvInst_3.add_attribute("InstTyp", "C"); // 3
        DlvInst_3_set.insert("C");
        all_values.push_back(DlvInst_3_set);
        all_compo_names.insert("DlvInst_3_set");

        {
          xml_element Pty_34{"Pty"};
          multiset<string> Pty_34_set;
          Pty_34.add_attribute("ID", "SettlPartyID_t_330054771"); // 4
          Pty_34_set.insert("SettlPartyID_t_330054771");
          Pty_34.add_attribute("Src", "3"); // 4
          Pty_34_set.insert("3");
          Pty_34.add_attribute("R", "37"); // 4
          Pty_34_set.insert("37");
          all_values.push_back(Pty_34_set);
          all_compo_names.insert("Pty_34_set");

          {
            xml_element Sub_34{"Sub"};
            multiset<string> Sub_34_set;
            Sub_34.add_attribute("ID", "SettlPartySubID_t_1538754343"); // 5
            Sub_34_set.insert("SettlPartySubID_t_1538754343");
            Sub_34.add_attribute("Typ", "3"); // 5
            Sub_34_set.insert("3");
            all_values.push_back(Sub_34_set);
            all_compo_names.insert("Sub_34_set");

            Pty_34.add_element(Sub_34);
          }
          DlvInst_3.add_element(Pty_34);
        }
        SetInstr_3.add_element(DlvInst_3);
      }
      Alloc_3.add_element(SetInstr_3);
    }
    elt.add_element(Alloc_3);
  } // end Alloc
  { // RtSrc
    xml_element RtSrc_3{"RtSrc"};
    multiset<string> RtSrc_3_set;
    RtSrc_3.add_attribute("RtSrc", "0"); // 1
    RtSrc_3_set.insert("0");
    RtSrc_3.add_attribute("RtSrcTyp", "1"); // 1
    RtSrc_3_set.insert("1");
    RtSrc_3.add_attribute("RefPg", "ReferencePage_t_396024933"); // 1
    RtSrc_3_set.insert("ReferencePage_t_396024933");
    all_values.push_back(RtSrc_3_set);
    all_compo_names.insert("RtSrc_3_set");

    elt.add_element(RtSrc_3);
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
