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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AllocRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationReport_message_t_0;
  elt.add_attribute("RptID", "AllocReportID_t_1272922730"); // 0
  AllocationReport_message_t_0.insert("AllocReportID_t_1272922730");
  elt.add_attribute("ID", "AllocID_t_1250114923"); // 0
  AllocationReport_message_t_0.insert("AllocID_t_1250114923");
  elt.add_attribute("TransTyp", "5"); // 0
  AllocationReport_message_t_0.insert("5");
  elt.add_attribute("RptRefID", "AllocReportRefID_t_251239210"); // 0
  AllocationReport_message_t_0.insert("AllocReportRefID_t_251239210");
  elt.add_attribute("CxlRplcRsn", "99"); // 0
  AllocationReport_message_t_0.insert("99");
  elt.add_attribute("ID2", "SecondaryAllocID_t_874638139"); // 0
  AllocationReport_message_t_0.insert("SecondaryAllocID_t_874638139");
  elt.add_attribute("RptTyp", "12"); // 0
  AllocationReport_message_t_0.insert("12");
  elt.add_attribute("Stat", "3"); // 0
  AllocationReport_message_t_0.insert("3");
  elt.add_attribute("RejCode", "8"); // 0
  AllocationReport_message_t_0.insert("8");
  elt.add_attribute("RefID", "RefAllocID_t_1622655271"); // 0
  AllocationReport_message_t_0.insert("RefAllocID_t_1622655271");
  elt.add_attribute("ImReqTyp", "2"); // 0
  AllocationReport_message_t_0.insert("2");
  elt.add_attribute("LinkID", "AllocLinkID_t_86373204"); // 0
  AllocationReport_message_t_0.insert("AllocLinkID_t_86373204");
  elt.add_attribute("LinkTyp", "0"); // 0
  AllocationReport_message_t_0.insert("0");
  elt.add_attribute("BkngRefID", "BookingRefID_t_1881805477"); // 0
  AllocationReport_message_t_0.insert("BookingRefID_t_1881805477");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_376679834"); // 0
  AllocationReport_message_t_0.insert("ClearingBusinessDate_t_376679834");
  elt.add_attribute("TrdTyp", "25"); // 0
  AllocationReport_message_t_0.insert("25");
  elt.add_attribute("TrdSubTyp", "1"); // 0
  AllocationReport_message_t_0.insert("1");
  elt.add_attribute("MLegRptTyp", "3"); // 0
  AllocationReport_message_t_0.insert("3");
  elt.add_attribute("CustCpcty", "2"); // 0
  AllocationReport_message_t_0.insert("2");
  elt.add_attribute("InptSrc", "TradeInputSource_t_1156750058"); // 0
  AllocationReport_message_t_0.insert("TradeInputSource_t_1156750058");
  elt.add_attribute("RndPx", "5350567.690000"); // 0
  AllocationReport_message_t_0.insert("5350567.690000");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_531901816"); // 0
  AllocationReport_message_t_0.insert("MessageEventSource_t_531901816");
  elt.add_attribute("InptDev", "TradeInputDevice_t_1241567627"); // 0
  AllocationReport_message_t_0.insert("TradeInputDevice_t_1241567627");
  elt.add_attribute("AvgPxInd", "2"); // 0
  AllocationReport_message_t_0.insert("2");
  elt.add_attribute("NoOrdsTyp", "1"); // 0
  AllocationReport_message_t_0.insert("1");
  elt.add_attribute("PrevlyRpted", "N"); // 0
  AllocationReport_message_t_0.insert("N");
  elt.add_attribute("ReversalInd", "false"); // 0
  AllocationReport_message_t_0.insert("false");
  elt.add_attribute("MtchTyp", "M3"); // 0
  AllocationReport_message_t_0.insert("M3");
  elt.add_attribute("Side", "2"); // 0
  AllocationReport_message_t_0.insert("2");
  elt.add_attribute("Qty", "4403363.490000"); // 0
  AllocationReport_message_t_0.insert("4403363.490000");
  elt.add_attribute("QtyTyp", "2"); // 0
  AllocationReport_message_t_0.insert("2");
  elt.add_attribute("LastMkt", "LastMkt_t_740108779"); // 0
  AllocationReport_message_t_0.insert("LastMkt_t_740108779");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_1690451272"); // 0
  AllocationReport_message_t_0.insert("TradeOriginationDate_t_1690451272");
  elt.add_attribute("SesID", "4"); // 0
  AllocationReport_message_t_0.insert("4");
  elt.add_attribute("SesSub", "4"); // 0
  AllocationReport_message_t_0.insert("4");
  elt.add_attribute("PxTyp", "3"); // 0
  AllocationReport_message_t_0.insert("3");
  elt.add_attribute("AvgPx", "10930554.820000"); // 0
  AllocationReport_message_t_0.insert("10930554.820000");
  elt.add_attribute("AvgParPx", "3013233.100000"); // 0
  AllocationReport_message_t_0.insert("3013233.100000");
  elt.add_attribute("Ccy", "EUR"); // 0
  AllocationReport_message_t_0.insert("EUR");
  elt.add_attribute("AvgPxPrcsn", "1923978581"); // 0
  AllocationReport_message_t_0.insert("1923978581");
  elt.add_attribute("TrdDt", "TradeDate_t_2033931749"); // 0
  AllocationReport_message_t_0.insert("TradeDate_t_2033931749");
  elt.add_attribute("TxnTm", "TransactTime_t_1288057363"); // 0
  AllocationReport_message_t_0.insert("TransactTime_t_1288057363");
  elt.add_attribute("SettlTyp", "6"); // 0
  AllocationReport_message_t_0.insert("6");
  elt.add_attribute("SettlDt", "SettlDate_t_1768253579"); // 0
  AllocationReport_message_t_0.insert("SettlDate_t_1768253579");
  elt.add_attribute("BkngTyp", "1"); // 0
  AllocationReport_message_t_0.insert("1");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_149537253"); // 0
  AllocationReport_message_t_0.insert("GrossTradeAmt_t_149537253");
  elt.add_attribute("Concession", "Concession_t_728707850"); // 0
  AllocationReport_message_t_0.insert("Concession_t_728707850");
  elt.add_attribute("TotTakedown", "TotalTakedown_t_1294961080"); // 0
  AllocationReport_message_t_0.insert("TotalTakedown_t_1294961080");
  elt.add_attribute("NetMny", "NetMoney_t_1819292851"); // 0
  AllocationReport_message_t_0.insert("NetMoney_t_1819292851");
  elt.add_attribute("PosEfct", "D"); // 0
  AllocationReport_message_t_0.insert("D");
  elt.add_attribute("AutoAcceptInd", "false"); // 0
  AllocationReport_message_t_0.insert("false");
  elt.add_attribute("Txt", "Text_t_203711019"); // 0
  AllocationReport_message_t_0.insert("Text_t_203711019");
  elt.add_attribute("EncTxtLen", "979541888"); // 0
  AllocationReport_message_t_0.insert("979541888");
  elt.add_attribute("EncTxt", "EncodedText_t_281275284"); // 0
  AllocationReport_message_t_0.insert("EncodedText_t_281275284");
  elt.add_attribute("NumDaysInt", "298310946"); // 0
  AllocationReport_message_t_0.insert("298310946");
  elt.add_attribute("AcrdIntRt", "8737633.100000"); // 0
  AllocationReport_message_t_0.insert("8737633.100000");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_2098901567"); // 0
  AllocationReport_message_t_0.insert("AccruedInterestAmt_t_2098901567");
  elt.add_attribute("TotAcrdIntAmt", "TotalAccruedInterestAmt_t_1930556943"); // 0
  AllocationReport_message_t_0.insert("TotalAccruedInterestAmt_t_1930556943");
  elt.add_attribute("IntAtMat", "InterestAtMaturity_t_340949359"); // 0
  AllocationReport_message_t_0.insert("InterestAtMaturity_t_340949359");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_391754268"); // 0
  AllocationReport_message_t_0.insert("EndAccruedInterestAmt_t_391754268");
  elt.add_attribute("StartCsh", "StartCash_t_2048274528"); // 0
  AllocationReport_message_t_0.insert("StartCash_t_2048274528");
  elt.add_attribute("EndCsh", "EndCash_t_1081058139"); // 0
  AllocationReport_message_t_0.insert("EndCash_t_1081058139");
  elt.add_attribute("LegalCnfm", "N"); // 0
  AllocationReport_message_t_0.insert("N");
  elt.add_attribute("TotNoAllocs", "119208223"); // 0
  AllocationReport_message_t_0.insert("119208223");
  elt.add_attribute("LastFragment", "Y"); // 0
  AllocationReport_message_t_0.insert("Y");
  all_values.push_back(AllocationReport_message_t_0);
  all_compo_names.insert("AllocationReport_message_t");

  { // Hdr
    xml_element Hdr_5{"Hdr"};
    multiset<string> Hdr_5_set;
    Hdr_5.add_attribute("SeqNum", "1368112872"); // 1
    Hdr_5_set.insert("1368112872");
    Hdr_5.add_attribute("SID", "SenderCompID_t_1212263705"); // 1
    Hdr_5_set.insert("SenderCompID_t_1212263705");
    Hdr_5.add_attribute("TID", "TargetCompID_t_226245791"); // 1
    Hdr_5_set.insert("TargetCompID_t_226245791");
    Hdr_5.add_attribute("OBID", "OnBehalfOfCompID_t_1334020456"); // 1
    Hdr_5_set.insert("OnBehalfOfCompID_t_1334020456");
    Hdr_5.add_attribute("D2ID", "DeliverToCompID_t_266464216"); // 1
    Hdr_5_set.insert("DeliverToCompID_t_266464216");
    Hdr_5.add_attribute("SSub", "SenderSubID_t_2740724"); // 1
    Hdr_5_set.insert("SenderSubID_t_2740724");
    Hdr_5.add_attribute("SLoc", "SenderLocationID_t_1220468558"); // 1
    Hdr_5_set.insert("SenderLocationID_t_1220468558");
    Hdr_5.add_attribute("TSub", "TargetSubID_t_1554521580"); // 1
    Hdr_5_set.insert("TargetSubID_t_1554521580");
    Hdr_5.add_attribute("TLoc", "TargetLocationID_t_613578806"); // 1
    Hdr_5_set.insert("TargetLocationID_t_613578806");
    Hdr_5.add_attribute("OBSub", "OnBehalfOfSubID_t_841238489"); // 1
    Hdr_5_set.insert("OnBehalfOfSubID_t_841238489");
    Hdr_5.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1071775130"); // 1
    Hdr_5_set.insert("OnBehalfOfLocationID_t_1071775130");
    Hdr_5.add_attribute("D2Sub", "DeliverToSubID_t_763116060"); // 1
    Hdr_5_set.insert("DeliverToSubID_t_763116060");
    Hdr_5.add_attribute("D2Loc", "DeliverToLocationID_t_1569946339"); // 1
    Hdr_5_set.insert("DeliverToLocationID_t_1569946339");
    Hdr_5.add_attribute("PosDup", "N"); // 1
    Hdr_5_set.insert("N");
    Hdr_5.add_attribute("PosRsnd", "Y"); // 1
    Hdr_5_set.insert("Y");
    Hdr_5.add_attribute("Snt", "SendingTime_t_1307920600"); // 1
    Hdr_5_set.insert("SendingTime_t_1307920600");
    Hdr_5.add_attribute("OrigSnt", "OrigSendingTime_t_2049270411"); // 1
    Hdr_5_set.insert("OrigSendingTime_t_2049270411");
    Hdr_5.add_attribute("MsgEncd", "MessageEncoding_t_638636282"); // 1
    Hdr_5_set.insert("MessageEncoding_t_638636282");
    all_values.push_back(Hdr_5_set);
    all_compo_names.insert("Hdr_5_set");

    {
      xml_element Hop_5{"Hop"};
      multiset<string> Hop_5_set;
      Hop_5.add_attribute("ID", "HopCompID_t_139978841"); // 2
      Hop_5_set.insert("HopCompID_t_139978841");
      Hop_5.add_attribute("Ref", "183062047"); // 2
      Hop_5_set.insert("183062047");
      Hop_5.add_attribute("Snt", "HopSendingTime_t_936947228"); // 2
      Hop_5_set.insert("HopSendingTime_t_936947228");
      all_values.push_back(Hop_5_set);
      all_compo_names.insert("Hop_5_set");

      Hdr_5.add_element(Hop_5);
    }
    elt.add_element(Hdr_5);
  } // end Hdr
  { // OrdAlloc
    xml_element OrdAlloc_4{"OrdAlloc"};
    multiset<string> OrdAlloc_4_set;
    OrdAlloc_4.add_attribute("ClOrdID", "ClOrdID_t_134479966"); // 1
    OrdAlloc_4_set.insert("ClOrdID_t_134479966");
    OrdAlloc_4.add_attribute("OrdID", "OrderID_t_720020523"); // 1
    OrdAlloc_4_set.insert("OrderID_t_720020523");
    OrdAlloc_4.add_attribute("OrdID2", "SecondaryOrderID_t_1354691511"); // 1
    OrdAlloc_4_set.insert("SecondaryOrderID_t_1354691511");
    OrdAlloc_4.add_attribute("ClOrdID2", "SecondaryClOrdID_t_526234234"); // 1
    OrdAlloc_4_set.insert("SecondaryClOrdID_t_526234234");
    OrdAlloc_4.add_attribute("ListID", "ListID_t_620811403"); // 1
    OrdAlloc_4_set.insert("ListID_t_620811403");
    OrdAlloc_4.add_attribute("Qty", "2882660.020000"); // 1
    OrdAlloc_4_set.insert("2882660.020000");
    OrdAlloc_4.add_attribute("AvgPx", "4609561.260000"); // 1
    OrdAlloc_4_set.insert("4609561.260000");
    OrdAlloc_4.add_attribute("BkngQty", "7400196.260000"); // 1
    OrdAlloc_4_set.insert("7400196.260000");
    all_values.push_back(OrdAlloc_4_set);
    all_compo_names.insert("OrdAlloc_4_set");

    {
      xml_element Pty_33{"Pty"};
      multiset<string> Pty_33_set;
      Pty_33.add_attribute("ID", "Nested2PartyID_t_213188483"); // 2
      Pty_33_set.insert("Nested2PartyID_t_213188483");
      Pty_33.add_attribute("Src", "8"); // 2
      Pty_33_set.insert("8");
      Pty_33.add_attribute("R", "28"); // 2
      Pty_33_set.insert("28");
      all_values.push_back(Pty_33_set);
      all_compo_names.insert("Pty_33_set");

      {
        xml_element Sub_33{"Sub"};
        multiset<string> Sub_33_set;
        Sub_33.add_attribute("ID", "Nested2PartySubID_t_439434274"); // 3
        Sub_33_set.insert("Nested2PartySubID_t_439434274");
        Sub_33.add_attribute("Typ", "26"); // 3
        Sub_33_set.insert("26");
        all_values.push_back(Sub_33_set);
        all_compo_names.insert("Sub_33_set");

        Pty_33.add_element(Sub_33);
      }
      OrdAlloc_4.add_element(Pty_33);
    }
    elt.add_element(OrdAlloc_4);
  } // end OrdAlloc
  { // OrdAlloc
    xml_element OrdAlloc_5{"OrdAlloc"};
    multiset<string> OrdAlloc_5_set;
    OrdAlloc_5.add_attribute("ClOrdID", "ClOrdID_t_71263900"); // 1
    OrdAlloc_5_set.insert("ClOrdID_t_71263900");
    OrdAlloc_5.add_attribute("OrdID", "OrderID_t_442174998"); // 1
    OrdAlloc_5_set.insert("OrderID_t_442174998");
    OrdAlloc_5.add_attribute("OrdID2", "SecondaryOrderID_t_88590717"); // 1
    OrdAlloc_5_set.insert("SecondaryOrderID_t_88590717");
    OrdAlloc_5.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1625785480"); // 1
    OrdAlloc_5_set.insert("SecondaryClOrdID_t_1625785480");
    OrdAlloc_5.add_attribute("ListID", "ListID_t_1055753805"); // 1
    OrdAlloc_5_set.insert("ListID_t_1055753805");
    OrdAlloc_5.add_attribute("Qty", "9298292.060000"); // 1
    OrdAlloc_5_set.insert("9298292.060000");
    OrdAlloc_5.add_attribute("AvgPx", "5500769.620000"); // 1
    OrdAlloc_5_set.insert("5500769.620000");
    OrdAlloc_5.add_attribute("BkngQty", "18188698.650000"); // 1
    OrdAlloc_5_set.insert("18188698.650000");
    all_values.push_back(OrdAlloc_5_set);
    all_compo_names.insert("OrdAlloc_5_set");

    {
      xml_element Pty_34{"Pty"};
      multiset<string> Pty_34_set;
      Pty_34.add_attribute("ID", "Nested2PartyID_t_352291898"); // 2
      Pty_34_set.insert("Nested2PartyID_t_352291898");
      Pty_34.add_attribute("Src", "3"); // 2
      Pty_34_set.insert("3");
      Pty_34.add_attribute("R", "74"); // 2
      Pty_34_set.insert("74");
      all_values.push_back(Pty_34_set);
      all_compo_names.insert("Pty_34_set");

      {
        xml_element Sub_34{"Sub"};
        multiset<string> Sub_34_set;
        Sub_34.add_attribute("ID", "Nested2PartySubID_t_1660212498"); // 3
        Sub_34_set.insert("Nested2PartySubID_t_1660212498");
        Sub_34.add_attribute("Typ", "15"); // 3
        Sub_34_set.insert("15");
        all_values.push_back(Sub_34_set);
        all_compo_names.insert("Sub_34_set");

        Pty_34.add_element(Sub_34);
      }
      OrdAlloc_5.add_element(Pty_34);
    }
    elt.add_element(OrdAlloc_5);
  } // end OrdAlloc
  { // AllExc
    xml_element AllExc_3{"AllExc"};
    multiset<string> AllExc_3_set;
    AllExc_3.add_attribute("LastQty", "18001913.390000"); // 1
    AllExc_3_set.insert("18001913.390000");
    AllExc_3.add_attribute("ExecID", "ExecID_t_854178335"); // 1
    AllExc_3_set.insert("ExecID_t_854178335");
    AllExc_3.add_attribute("ExecID2", "SecondaryExecID_t_1681894990"); // 1
    AllExc_3_set.insert("SecondaryExecID_t_1681894990");
    AllExc_3.add_attribute("LastPx", "6664498.430000"); // 1
    AllExc_3_set.insert("6664498.430000");
    AllExc_3.add_attribute("LastParPx", "9886583.010000"); // 1
    AllExc_3_set.insert("9886583.010000");
    AllExc_3.add_attribute("LastCpcty", "2"); // 1
    AllExc_3_set.insert("2");
    AllExc_3.add_attribute("TrdID", "TradeID_t_2021141354"); // 1
    AllExc_3_set.insert("TradeID_t_2021141354");
    AllExc_3.add_attribute("FirmTrdID", "FirmTradeID_t_1514892536"); // 1
    AllExc_3_set.insert("FirmTradeID_t_1514892536");
    all_values.push_back(AllExc_3_set);
    all_compo_names.insert("AllExc_3_set");

    elt.add_element(AllExc_3);
  } // end AllExc
  { // AllExc
    xml_element AllExc_4{"AllExc"};
    multiset<string> AllExc_4_set;
    AllExc_4.add_attribute("LastQty", "8752432.690000"); // 1
    AllExc_4_set.insert("8752432.690000");
    AllExc_4.add_attribute("ExecID", "ExecID_t_161923708"); // 1
    AllExc_4_set.insert("ExecID_t_161923708");
    AllExc_4.add_attribute("ExecID2", "SecondaryExecID_t_1975848662"); // 1
    AllExc_4_set.insert("SecondaryExecID_t_1975848662");
    AllExc_4.add_attribute("LastPx", "16152628.950000"); // 1
    AllExc_4_set.insert("16152628.950000");
    AllExc_4.add_attribute("LastParPx", "3751121.910000"); // 1
    AllExc_4_set.insert("3751121.910000");
    AllExc_4.add_attribute("LastCpcty", "2"); // 1
    AllExc_4_set.insert("2");
    AllExc_4.add_attribute("TrdID", "TradeID_t_1420062579"); // 1
    AllExc_4_set.insert("TradeID_t_1420062579");
    AllExc_4.add_attribute("FirmTrdID", "FirmTradeID_t_814546465"); // 1
    AllExc_4_set.insert("FirmTradeID_t_814546465");
    all_values.push_back(AllExc_4_set);
    all_compo_names.insert("AllExc_4_set");

    elt.add_element(AllExc_4);
  } // end AllExc
  { // AllExc
    xml_element AllExc_5{"AllExc"};
    multiset<string> AllExc_5_set;
    AllExc_5.add_attribute("LastQty", "5255561.730000"); // 1
    AllExc_5_set.insert("5255561.730000");
    AllExc_5.add_attribute("ExecID", "ExecID_t_1491326479"); // 1
    AllExc_5_set.insert("ExecID_t_1491326479");
    AllExc_5.add_attribute("ExecID2", "SecondaryExecID_t_1256721463"); // 1
    AllExc_5_set.insert("SecondaryExecID_t_1256721463");
    AllExc_5.add_attribute("LastPx", "6141468.900000"); // 1
    AllExc_5_set.insert("6141468.900000");
    AllExc_5.add_attribute("LastParPx", "9696283.110000"); // 1
    AllExc_5_set.insert("9696283.110000");
    AllExc_5.add_attribute("LastCpcty", "1"); // 1
    AllExc_5_set.insert("1");
    AllExc_5.add_attribute("TrdID", "TradeID_t_1543976097"); // 1
    AllExc_5_set.insert("TradeID_t_1543976097");
    AllExc_5.add_attribute("FirmTrdID", "FirmTradeID_t_1519705273"); // 1
    AllExc_5_set.insert("FirmTradeID_t_1519705273");
    all_values.push_back(AllExc_5_set);
    all_compo_names.insert("AllExc_5_set");

    elt.add_element(AllExc_5);
  } // end AllExc
  { // Instrmt
    xml_element Instrmt_4{"Instrmt"};
    multiset<string> Instrmt_4_set;
    Instrmt_4.add_attribute("Sym", "Symbol_t_1983861485"); // 1
    Instrmt_4_set.insert("Symbol_t_1983861485");
    Instrmt_4.add_attribute("Sfx", "WI"); // 1
    Instrmt_4_set.insert("WI");
    Instrmt_4.add_attribute("ID", "SecurityID_t_141551149"); // 1
    Instrmt_4_set.insert("SecurityID_t_141551149");
    Instrmt_4.add_attribute("Src", "2"); // 1
    Instrmt_4_set.insert("2");
    Instrmt_4.add_attribute("Prod", "6"); // 1
    Instrmt_4_set.insert("6");
    Instrmt_4.add_attribute("ProdCmplx", "ProductComplex_t_812667436"); // 1
    Instrmt_4_set.insert("ProductComplex_t_812667436");
    Instrmt_4.add_attribute("SecGrp", "SecurityGroup_t_687637079"); // 1
    Instrmt_4_set.insert("SecurityGroup_t_687637079");
    Instrmt_4.add_attribute("CFI", "CFICode_t_1061704537"); // 1
    Instrmt_4_set.insert("CFICode_t_1061704537");
    Instrmt_4.add_attribute("SecTyp", "TAXA"); // 1
    Instrmt_4_set.insert("TAXA");
    Instrmt_4.add_attribute("SubTyp", "SecuritySubType_t_222048421"); // 1
    Instrmt_4_set.insert("SecuritySubType_t_222048421");
    Instrmt_4.add_attribute("MMY", "1728154380"); // 1
    Instrmt_4_set.insert("1728154380");
    Instrmt_4.add_attribute("MatDt", "MaturityDate_t_508020425"); // 1
    Instrmt_4_set.insert("MaturityDate_t_508020425");
    Instrmt_4.add_attribute("MatTm", "476480287"); // 1
    Instrmt_4_set.insert("476480287");
    Instrmt_4.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1601812086"); // 1
    Instrmt_4_set.insert("SettleOnOpenFlag_t_1601812086");
    Instrmt_4.add_attribute("AsgnMeth", "2022912961"); // 1
    Instrmt_4_set.insert("2022912961");
    Instrmt_4.add_attribute("Status", "1"); // 1
    Instrmt_4_set.insert("1");
    Instrmt_4.add_attribute("CpnPmt", "CouponPaymentDate_t_1763735794"); // 1
    Instrmt_4_set.insert("CouponPaymentDate_t_1763735794");
    Instrmt_4.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_4_set.insert("XR");
    Instrmt_4.add_attribute("Snrty", "SD"); // 1
    Instrmt_4_set.insert("SD");
    Instrmt_4.add_attribute("NotlPctOut", "21388479.850000"); // 1
    Instrmt_4_set.insert("21388479.850000");
    Instrmt_4.add_attribute("OrigNotlPctOut", "13612283.410000"); // 1
    Instrmt_4_set.insert("13612283.410000");
    Instrmt_4.add_attribute("AttchPnt", "920817.340000"); // 1
    Instrmt_4_set.insert("920817.340000");
    Instrmt_4.add_attribute("DetchPnt", "8059108.020000"); // 1
    Instrmt_4_set.insert("8059108.020000");
    Instrmt_4.add_attribute("Issued", "IssueDate_t_1886784514"); // 1
    Instrmt_4_set.insert("IssueDate_t_1886784514");
    Instrmt_4.add_attribute("RepoCollSecTyp", "1583408213"); // 1
    Instrmt_4_set.insert("1583408213");
    Instrmt_4.add_attribute("RepoTrm", "2062632265"); // 1
    Instrmt_4_set.insert("2062632265");
    Instrmt_4.add_attribute("RepoRt", "3534477.560000"); // 1
    Instrmt_4_set.insert("3534477.560000");
    Instrmt_4.add_attribute("Fctr", "4055528.760000"); // 1
    Instrmt_4_set.insert("4055528.760000");
    Instrmt_4.add_attribute("CrdRtg", "CreditRating_t_80140238"); // 1
    Instrmt_4_set.insert("CreditRating_t_80140238");
    Instrmt_4.add_attribute("Rgstry", "InstrRegistry_t_1897423853"); // 1
    Instrmt_4_set.insert("InstrRegistry_t_1897423853");
    Instrmt_4.add_attribute("IssuCtry", "1925258149"); // 1
    Instrmt_4_set.insert("1925258149");
    Instrmt_4.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2064001723"); // 1
    Instrmt_4_set.insert("StateOrProvinceOfIssue_t_2064001723");
    Instrmt_4.add_attribute("Lcl", "LocaleOfIssue_t_1646208200"); // 1
    Instrmt_4_set.insert("LocaleOfIssue_t_1646208200");
    Instrmt_4.add_attribute("Redeem", "RedemptionDate_t_2066809298"); // 1
    Instrmt_4_set.insert("RedemptionDate_t_2066809298");
    Instrmt_4.add_attribute("StrkPx", "20066910.410000"); // 1
    Instrmt_4_set.insert("20066910.410000");
    Instrmt_4.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_4_set.insert("CAN");
    Instrmt_4.add_attribute("StrkMult", "5468444.720000"); // 1
    Instrmt_4_set.insert("5468444.720000");
    Instrmt_4.add_attribute("StrkValu", "19694259.350000"); // 1
    Instrmt_4_set.insert("19694259.350000");
    Instrmt_4.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_4_set.insert("3");
    Instrmt_4.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_4_set.insert("5");
    Instrmt_4.add_attribute("StrkPxBndryPrcsn", "15500966.670000"); // 1
    Instrmt_4_set.insert("15500966.670000");
    Instrmt_4.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_4_set.insert("4");
    Instrmt_4.add_attribute("OptAt", "1245373181"); // 1
    Instrmt_4_set.insert("1245373181");
    Instrmt_4.add_attribute("Mult", "10044251.050000"); // 1
    Instrmt_4_set.insert("10044251.050000");
    Instrmt_4.add_attribute("MultTyp", "1"); // 1
    Instrmt_4_set.insert("1");
    Instrmt_4.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_4_set.insert("4");
    Instrmt_4.add_attribute("MinPxIncr", "6206772.510000"); // 1
    Instrmt_4_set.insert("6206772.510000");
    Instrmt_4.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_338599276"); // 1
    Instrmt_4_set.insert("MinPriceIncrementAmount_t_338599276");
    Instrmt_4.add_attribute("UOM", "tn"); // 1
    Instrmt_4_set.insert("tn");
    Instrmt_4.add_attribute("UOMQty", "6120415.880000"); // 1
    Instrmt_4_set.insert("6120415.880000");
    Instrmt_4.add_attribute("PxUOM", "lbs"); // 1
    Instrmt_4_set.insert("lbs");
    Instrmt_4.add_attribute("PxUOMQty", "13611976.270000"); // 1
    Instrmt_4_set.insert("13611976.270000");
    Instrmt_4.add_attribute("SettlMeth", "C"); // 1
    Instrmt_4_set.insert("C");
    Instrmt_4.add_attribute("ExerStyle", "1"); // 1
    Instrmt_4_set.insert("1");
    Instrmt_4.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_4_set.insert("2");
    Instrmt_4.add_attribute("OptPayAmt", "OptPayoutAmount_t_1333101007"); // 1
    Instrmt_4_set.insert("OptPayoutAmount_t_1333101007");
    Instrmt_4.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_4_set.insert("PCTPAR");
    Instrmt_4.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_4_set.insert("CDSD");
    Instrmt_4.add_attribute("ListMeth", "1"); // 1
    Instrmt_4_set.insert("1");
    Instrmt_4.add_attribute("CapPx", "15425164.450000"); // 1
    Instrmt_4_set.insert("15425164.450000");
    Instrmt_4.add_attribute("FlrPx", "9804495.700000"); // 1
    Instrmt_4_set.insert("9804495.700000");
    Instrmt_4.add_attribute("PutCall", "1"); // 1
    Instrmt_4_set.insert("1");
    Instrmt_4.add_attribute("FlexInd", "false"); // 1
    Instrmt_4_set.insert("false");
    Instrmt_4.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_4_set.insert("false");
    Instrmt_4.add_attribute("TmUnit", "Mo"); // 1
    Instrmt_4_set.insert("Mo");
    Instrmt_4.add_attribute("CpnRt", "19489623.950000"); // 1
    Instrmt_4_set.insert("19489623.950000");
    Instrmt_4.add_attribute("Exch", "SecurityExchange_t_1631768308"); // 1
    Instrmt_4_set.insert("SecurityExchange_t_1631768308");
    Instrmt_4.add_attribute("PosLmt", "1735811186"); // 1
    Instrmt_4_set.insert("1735811186");
    Instrmt_4.add_attribute("NTPosLmt", "1770904682"); // 1
    Instrmt_4_set.insert("1770904682");
    Instrmt_4.add_attribute("Issr", "Issuer_t_1883123518"); // 1
    Instrmt_4_set.insert("Issuer_t_1883123518");
    Instrmt_4.add_attribute("EncIssrLen", "357220432"); // 1
    Instrmt_4_set.insert("357220432");
    Instrmt_4.add_attribute("EncIssr", "EncodedIssuer_t_1173517701"); // 1
    Instrmt_4_set.insert("EncodedIssuer_t_1173517701");
    Instrmt_4.add_attribute("Desc", "SecurityDesc_t_495015506"); // 1
    Instrmt_4_set.insert("SecurityDesc_t_495015506");
    Instrmt_4.add_attribute("EncSecDescLen", "1602593613"); // 1
    Instrmt_4_set.insert("1602593613");
    Instrmt_4.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_30459158"); // 1
    Instrmt_4_set.insert("EncodedSecurityDesc_t_30459158");
    Instrmt_4.add_attribute("Pool", "Pool_t_1129820454"); // 1
    Instrmt_4_set.insert("Pool_t_1129820454");
    Instrmt_4.add_attribute("CSetMo", "2052206702"); // 1
    Instrmt_4_set.insert("2052206702");
    Instrmt_4.add_attribute("CPPgm", "99"); // 1
    Instrmt_4_set.insert("99");
    Instrmt_4.add_attribute("CPRegT", "CPRegType_t_1468419730"); // 1
    Instrmt_4_set.insert("CPRegType_t_1468419730");
    Instrmt_4.add_attribute("Dated", "DatedDate_t_1173838947"); // 1
    Instrmt_4_set.insert("DatedDate_t_1173838947");
    Instrmt_4.add_attribute("IntAcrl", "InterestAccrualDate_t_1263177997"); // 1
    Instrmt_4_set.insert("InterestAccrualDate_t_1263177997");
    all_values.push_back(Instrmt_4_set);
    all_compo_names.insert("Instrmt_4_set");

    {
      xml_element AID_4{"AID"};
      multiset<string> AID_4_set;
      AID_4.add_attribute("AltID", "SecurityAltID_t_1020763699"); // 2
      AID_4_set.insert("SecurityAltID_t_1020763699");
      AID_4.add_attribute("AltIDSrc", "3"); // 2
      AID_4_set.insert("3");
      all_values.push_back(AID_4_set);
      all_compo_names.insert("AID_4_set");

      Instrmt_4.add_element(AID_4);
    }
    {
      xml_element SecXML_4{"SecXML"};
      multiset<string> SecXML_4_set;
      SecXML_4.add_attribute("Schema", "SecurityXMLSchema_t_533646739"); // 2
      SecXML_4_set.insert("SecurityXMLSchema_t_533646739");
      all_values.push_back(SecXML_4_set);
      all_compo_names.insert("SecXML_4_set");

      Instrmt_4.add_element(SecXML_4);
    }
    {
      xml_element Evnt_4{"Evnt"};
      multiset<string> Evnt_4_set;
      Evnt_4.add_attribute("EventTyp", "14"); // 2
      Evnt_4_set.insert("14");
      Evnt_4.add_attribute("Dt", "EventDate_t_1184675118"); // 2
      Evnt_4_set.insert("EventDate_t_1184675118");
      Evnt_4.add_attribute("Tm", "EventTime_t_1866747747"); // 2
      Evnt_4_set.insert("EventTime_t_1866747747");
      Evnt_4.add_attribute("Px", "21049847.740000"); // 2
      Evnt_4_set.insert("21049847.740000");
      Evnt_4.add_attribute("Txt", "EventText_t_239866539"); // 2
      Evnt_4_set.insert("EventText_t_239866539");
      all_values.push_back(Evnt_4_set);
      all_compo_names.insert("Evnt_4_set");

      Instrmt_4.add_element(Evnt_4);
    }
    {
      xml_element Pty_35{"Pty"};
      multiset<string> Pty_35_set;
      Pty_35.add_attribute("ID", "InstrumentPartyID_t_1132505344"); // 2
      Pty_35_set.insert("InstrumentPartyID_t_1132505344");
      Pty_35.add_attribute("Src", "A"); // 2
      Pty_35_set.insert("A");
      Pty_35.add_attribute("R", "64"); // 2
      Pty_35_set.insert("64");
      all_values.push_back(Pty_35_set);
      all_compo_names.insert("Pty_35_set");

      {
        xml_element Sub_35{"Sub"};
        multiset<string> Sub_35_set;
        Sub_35.add_attribute("ID", "InstrumentPartySubID_t_314781017"); // 3
        Sub_35_set.insert("InstrumentPartySubID_t_314781017");
        Sub_35.add_attribute("Typ", "2"); // 3
        Sub_35_set.insert("2");
        all_values.push_back(Sub_35_set);
        all_compo_names.insert("Sub_35_set");

        Pty_35.add_element(Sub_35);
      }
      Instrmt_4.add_element(Pty_35);
    }
    {
      xml_element CmplxEvnt_4{"CmplxEvnt"};
      multiset<string> CmplxEvnt_4_set;
      CmplxEvnt_4.add_attribute("Typ", "5"); // 2
      CmplxEvnt_4_set.insert("5");
      CmplxEvnt_4.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1503747731"); // 2
      CmplxEvnt_4_set.insert("ComplexOptPayoutAmount_t_1503747731");
      CmplxEvnt_4.add_attribute("Px", "1952536.680000"); // 2
      CmplxEvnt_4_set.insert("1952536.680000");
      CmplxEvnt_4.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_4_set.insert("2");
      CmplxEvnt_4.add_attribute("PxBndryPrcsn", "10920752.700000"); // 2
      CmplxEvnt_4_set.insert("10920752.700000");
      CmplxEvnt_4.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_4_set.insert("3");
      CmplxEvnt_4.add_attribute("Cond", "2"); // 2
      CmplxEvnt_4_set.insert("2");
      all_values.push_back(CmplxEvnt_4_set);
      all_compo_names.insert("CmplxEvnt_4_set");

      {
        xml_element EvntDts_4{"EvntDts"};
        multiset<string> EvntDts_4_set;
        EvntDts_4.add_attribute("StartDt", "ComplexEventStartDate_t_1449295702"); // 3
        EvntDts_4_set.insert("ComplexEventStartDate_t_1449295702");
        EvntDts_4.add_attribute("EndDt", "ComplexEventEndDate_t_992192404"); // 3
        EvntDts_4_set.insert("ComplexEventEndDate_t_992192404");
        all_values.push_back(EvntDts_4_set);
        all_compo_names.insert("EvntDts_4_set");

        {
          xml_element EvntTms_4{"EvntTms"};
          multiset<string> EvntTms_4_set;
          EvntTms_4.add_attribute("StartTm", "1835031367"); // 4
          EvntTms_4_set.insert("1835031367");
          EvntTms_4.add_attribute("EndTm", "904405668"); // 4
          EvntTms_4_set.insert("904405668");
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
    InstrmtExt_2.add_attribute("PctAtRisk", "8173681.740000"); // 1
    InstrmtExt_2_set.insert("8173681.740000");
    all_values.push_back(InstrmtExt_2_set);
    all_compo_names.insert("InstrmtExt_2_set");

    {
      xml_element Attrb_2{"Attrb"};
      multiset<string> Attrb_2_set;
      Attrb_2.add_attribute("Typ", "20"); // 2
      Attrb_2_set.insert("20");
      Attrb_2.add_attribute("Val", "InstrAttribValue_t_1673787972"); // 2
      Attrb_2_set.insert("InstrAttribValue_t_1673787972");
      all_values.push_back(Attrb_2_set);
      all_compo_names.insert("Attrb_2_set");

      InstrmtExt_2.add_element(Attrb_2);
    }
    elt.add_element(InstrmtExt_2);
  } // end InstrmtExt
  { // FinDetls
    xml_element FinDetls_2{"FinDetls"};
    multiset<string> FinDetls_2_set;
    FinDetls_2.add_attribute("AgmtDesc", "AgreementDesc_t_138304256"); // 1
    FinDetls_2_set.insert("AgreementDesc_t_138304256");
    FinDetls_2.add_attribute("AgmtID", "AgreementID_t_1982967669"); // 1
    FinDetls_2_set.insert("AgreementID_t_1982967669");
    FinDetls_2.add_attribute("AgmtDt", "AgreementDate_t_789482321"); // 1
    FinDetls_2_set.insert("AgreementDate_t_789482321");
    FinDetls_2.add_attribute("AgmtCcy", "CHF"); // 1
    FinDetls_2_set.insert("CHF");
    FinDetls_2.add_attribute("TrmTyp", "2"); // 1
    FinDetls_2_set.insert("2");
    FinDetls_2.add_attribute("StartDt", "StartDate_t_1471476490"); // 1
    FinDetls_2_set.insert("StartDate_t_1471476490");
    FinDetls_2.add_attribute("EndDt", "EndDate_t_1407712066"); // 1
    FinDetls_2_set.insert("EndDate_t_1407712066");
    FinDetls_2.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_2_set.insert("0");
    FinDetls_2.add_attribute("MgnRatio", "14289776.160000"); // 1
    FinDetls_2_set.insert("14289776.160000");
    all_values.push_back(FinDetls_2_set);
    all_compo_names.insert("FinDetls_2_set");

    elt.add_element(FinDetls_2);
  } // end FinDetls
  { // Undly
    xml_element Undly_4{"Undly"};
    multiset<string> Undly_4_set;
    Undly_4.add_attribute("Sym", "UnderlyingSymbol_t_27414856"); // 1
    Undly_4_set.insert("UnderlyingSymbol_t_27414856");
    Undly_4.add_attribute("Sfx", "WI"); // 1
    Undly_4_set.insert("WI");
    Undly_4.add_attribute("ID", "UnderlyingSecurityID_t_720411067"); // 1
    Undly_4_set.insert("UnderlyingSecurityID_t_720411067");
    Undly_4.add_attribute("Src", "K"); // 1
    Undly_4_set.insert("K");
    Undly_4.add_attribute("Prod", "7"); // 1
    Undly_4_set.insert("7");
    Undly_4.add_attribute("CFI", "UnderlyingCFICode_t_693018750"); // 1
    Undly_4_set.insert("UnderlyingCFICode_t_693018750");
    Undly_4.add_attribute("SecTyp", "CAN"); // 1
    Undly_4_set.insert("CAN");
    Undly_4.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1370540128"); // 1
    Undly_4_set.insert("UnderlyingSecuritySubType_t_1370540128");
    Undly_4.add_attribute("MMY", "149911093"); // 1
    Undly_4_set.insert("149911093");
    Undly_4.add_attribute("Mat", "UnderlyingMaturityDate_t_790535227"); // 1
    Undly_4_set.insert("UnderlyingMaturityDate_t_790535227");
    Undly_4.add_attribute("MatTm", "1189214830"); // 1
    Undly_4_set.insert("1189214830");
    Undly_4.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1489926955"); // 1
    Undly_4_set.insert("UnderlyingCouponPaymentDate_t_1489926955");
    Undly_4.add_attribute("RestrctTyp", "MM"); // 1
    Undly_4_set.insert("MM");
    Undly_4.add_attribute("Snrty", "SD"); // 1
    Undly_4_set.insert("SD");
    Undly_4.add_attribute("NotlPctOut", "11774746.740000"); // 1
    Undly_4_set.insert("11774746.740000");
    Undly_4.add_attribute("OrigNotlPctOut", "9967529.500000"); // 1
    Undly_4_set.insert("9967529.500000");
    Undly_4.add_attribute("AttchPnt", "10565751.490000"); // 1
    Undly_4_set.insert("10565751.490000");
    Undly_4.add_attribute("DetchPnt", "19948428.480000"); // 1
    Undly_4_set.insert("19948428.480000");
    Undly_4.add_attribute("Issued", "UnderlyingIssueDate_t_1805881672"); // 1
    Undly_4_set.insert("UnderlyingIssueDate_t_1805881672");
    Undly_4.add_attribute("RepoCollSecTyp", "582879473"); // 1
    Undly_4_set.insert("582879473");
    Undly_4.add_attribute("RepoTrm", "2133147105"); // 1
    Undly_4_set.insert("2133147105");
    Undly_4.add_attribute("RepoRt", "16413656.940000"); // 1
    Undly_4_set.insert("16413656.940000");
    Undly_4.add_attribute("Fctr", "13723617.940000"); // 1
    Undly_4_set.insert("13723617.940000");
    Undly_4.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1144731413"); // 1
    Undly_4_set.insert("UnderlyingCreditRating_t_1144731413");
    Undly_4.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1864402641"); // 1
    Undly_4_set.insert("UnderlyingInstrRegistry_t_1864402641");
    Undly_4.add_attribute("Ctry", "548007207"); // 1
    Undly_4_set.insert("548007207");
    Undly_4.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_468724255"); // 1
    Undly_4_set.insert("UnderlyingStateOrProvinceOfIssue_t_468724255");
    Undly_4.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1124631059"); // 1
    Undly_4_set.insert("UnderlyingLocaleOfIssue_t_1124631059");
    Undly_4.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1590400367"); // 1
    Undly_4_set.insert("UnderlyingRedemptionDate_t_1590400367");
    Undly_4.add_attribute("StrkPx", "18977018.720000"); // 1
    Undly_4_set.insert("18977018.720000");
    Undly_4.add_attribute("StrkCcy", "JPY"); // 1
    Undly_4_set.insert("JPY");
    Undly_4.add_attribute("OptA", "531729763"); // 1
    Undly_4_set.insert("531729763");
    Undly_4.add_attribute("Mult", "13451370.840000"); // 1
    Undly_4_set.insert("13451370.840000");
    Undly_4.add_attribute("MultTyp", "2"); // 1
    Undly_4_set.insert("2");
    Undly_4.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_4_set.insert("3");
    Undly_4.add_attribute("UOM", "MMBtu"); // 1
    Undly_4_set.insert("MMBtu");
    Undly_4.add_attribute("UOMQty", "16584710.550000"); // 1
    Undly_4_set.insert("16584710.550000");
    Undly_4.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_4_set.insert("MMBtu");
    Undly_4.add_attribute("PxUOMQty", "405832.800000"); // 1
    Undly_4_set.insert("405832.800000");
    Undly_4.add_attribute("TmUnit", "Min"); // 1
    Undly_4_set.insert("Min");
    Undly_4.add_attribute("ExerStyle", "0"); // 1
    Undly_4_set.insert("0");
    Undly_4.add_attribute("CpnRt", "15305102.350000"); // 1
    Undly_4_set.insert("15305102.350000");
    Undly_4.add_attribute("Exch", "UnderlyingSecurityExchange_t_393869917"); // 1
    Undly_4_set.insert("UnderlyingSecurityExchange_t_393869917");
    Undly_4.add_attribute("Issr", "UnderlyingIssuer_t_5727472"); // 1
    Undly_4_set.insert("UnderlyingIssuer_t_5727472");
    Undly_4.add_attribute("EncUndIssrLen", "560501262"); // 1
    Undly_4_set.insert("560501262");
    Undly_4.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1390622867"); // 1
    Undly_4_set.insert("EncodedUnderlyingIssuer_t_1390622867");
    Undly_4.add_attribute("Desc", "UnderlyingSecurityDesc_t_1062302621"); // 1
    Undly_4_set.insert("UnderlyingSecurityDesc_t_1062302621");
    Undly_4.add_attribute("EncUndSecDescLen", "407860462"); // 1
    Undly_4_set.insert("407860462");
    Undly_4.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1049020891"); // 1
    Undly_4_set.insert("EncodedUnderlyingSecurityDesc_t_1049020891");
    Undly_4.add_attribute("CPPgm", "UnderlyingCPProgram_t_1645182094"); // 1
    Undly_4_set.insert("UnderlyingCPProgram_t_1645182094");
    Undly_4.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_393523919"); // 1
    Undly_4_set.insert("UnderlyingCPRegType_t_393523919");
    Undly_4.add_attribute("AllocPct", "5429029.370000"); // 1
    Undly_4_set.insert("5429029.370000");
    Undly_4.add_attribute("Ccy", "JPY"); // 1
    Undly_4_set.insert("JPY");
    Undly_4.add_attribute("Qty", "2598219.310000"); // 1
    Undly_4_set.insert("2598219.310000");
    Undly_4.add_attribute("SettlTyp", "4"); // 1
    Undly_4_set.insert("4");
    Undly_4.add_attribute("CashAmt", "UnderlyingCashAmount_t_2006979588"); // 1
    Undly_4_set.insert("UnderlyingCashAmount_t_2006979588");
    Undly_4.add_attribute("CashTyp", "FIXED"); // 1
    Undly_4_set.insert("FIXED");
    Undly_4.add_attribute("Px", "8609841.680000"); // 1
    Undly_4_set.insert("8609841.680000");
    Undly_4.add_attribute("DirtPx", "17571978.120000"); // 1
    Undly_4_set.insert("17571978.120000");
    Undly_4.add_attribute("EndPx", "20091790.070000"); // 1
    Undly_4_set.insert("20091790.070000");
    Undly_4.add_attribute("StartVal", "UnderlyingStartValue_t_331315744"); // 1
    Undly_4_set.insert("UnderlyingStartValue_t_331315744");
    Undly_4.add_attribute("CurVal", "UnderlyingCurrentValue_t_141443927"); // 1
    Undly_4_set.insert("UnderlyingCurrentValue_t_141443927");
    Undly_4.add_attribute("EndVal", "UnderlyingEndValue_t_1206832444"); // 1
    Undly_4_set.insert("UnderlyingEndValue_t_1206832444");
    Undly_4.add_attribute("AdjQty", "1438431.940000"); // 1
    Undly_4_set.insert("1438431.940000");
    Undly_4.add_attribute("FxRate", "18484601.510000"); // 1
    Undly_4_set.insert("18484601.510000");
    Undly_4.add_attribute("FxRateCalc", "D"); // 1
    Undly_4_set.insert("D");
    Undly_4.add_attribute("CapValu", "UnderlyingCapValue_t_1802314249"); // 1
    Undly_4_set.insert("UnderlyingCapValue_t_1802314249");
    Undly_4.add_attribute("SetMeth", "UnderlyingSettlMethod_t_631049206"); // 1
    Undly_4_set.insert("UnderlyingSettlMethod_t_631049206");
    Undly_4.add_attribute("PutCall", "1138087911"); // 1
    Undly_4_set.insert("1138087911");
    all_values.push_back(Undly_4_set);
    all_compo_names.insert("Undly_4_set");

    {
      xml_element UndAID_4{"UndAID"};
      multiset<string> UndAID_4_set;
      UndAID_4.add_attribute("AltID", "UnderlyingSecurityAltID_t_2103836884"); // 2
      UndAID_4_set.insert("UnderlyingSecurityAltID_t_2103836884");
      UndAID_4.add_attribute("AltIDSrc", "7"); // 2
      UndAID_4_set.insert("7");
      all_values.push_back(UndAID_4_set);
      all_compo_names.insert("UndAID_4_set");

      Undly_4.add_element(UndAID_4);
    }
    {
      xml_element Stip_9{"Stip"};
      multiset<string> Stip_9_set;
      Stip_9.add_attribute("Typ", "LOT"); // 2
      Stip_9_set.insert("LOT");
      Stip_9.add_attribute("Val", "UnderlyingStipValue_t_350223153"); // 2
      Stip_9_set.insert("UnderlyingStipValue_t_350223153");
      all_values.push_back(Stip_9_set);
      all_compo_names.insert("Stip_9_set");

      Undly_4.add_element(Stip_9);
    }
    {
      xml_element Pty_36{"Pty"};
      multiset<string> Pty_36_set;
      Pty_36.add_attribute("ID", "UnderlyingInstrumentPartyID_t_608580565"); // 2
      Pty_36_set.insert("UnderlyingInstrumentPartyID_t_608580565");
      Pty_36.add_attribute("Src", "A"); // 2
      Pty_36_set.insert("A");
      Pty_36.add_attribute("R", "5"); // 2
      Pty_36_set.insert("5");
      all_values.push_back(Pty_36_set);
      all_compo_names.insert("Pty_36_set");

      {
        xml_element Sub_36{"Sub"};
        multiset<string> Sub_36_set;
        Sub_36.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1670883186"); // 3
        Sub_36_set.insert("UnderlyingInstrumentPartySubID_t_1670883186");
        Sub_36.add_attribute("Typ", "13"); // 3
        Sub_36_set.insert("13");
        all_values.push_back(Sub_36_set);
        all_compo_names.insert("Sub_36_set");

        Pty_36.add_element(Sub_36);
      }
      Undly_4.add_element(Pty_36);
    }
    elt.add_element(Undly_4);
  } // end Undly
  { // Undly
    xml_element Undly_5{"Undly"};
    multiset<string> Undly_5_set;
    Undly_5.add_attribute("Sym", "UnderlyingSymbol_t_642383264"); // 1
    Undly_5_set.insert("UnderlyingSymbol_t_642383264");
    Undly_5.add_attribute("Sfx", "WI"); // 1
    Undly_5_set.insert("WI");
    Undly_5.add_attribute("ID", "UnderlyingSecurityID_t_1883000143"); // 1
    Undly_5_set.insert("UnderlyingSecurityID_t_1883000143");
    Undly_5.add_attribute("Src", "C"); // 1
    Undly_5_set.insert("C");
    Undly_5.add_attribute("Prod", "6"); // 1
    Undly_5_set.insert("6");
    Undly_5.add_attribute("CFI", "UnderlyingCFICode_t_1273771827"); // 1
    Undly_5_set.insert("UnderlyingCFICode_t_1273771827");
    Undly_5.add_attribute("SecTyp", "CD"); // 1
    Undly_5_set.insert("CD");
    Undly_5.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1309225674"); // 1
    Undly_5_set.insert("UnderlyingSecuritySubType_t_1309225674");
    Undly_5.add_attribute("MMY", "1133267767"); // 1
    Undly_5_set.insert("1133267767");
    Undly_5.add_attribute("Mat", "UnderlyingMaturityDate_t_682077475"); // 1
    Undly_5_set.insert("UnderlyingMaturityDate_t_682077475");
    Undly_5.add_attribute("MatTm", "22726194"); // 1
    Undly_5_set.insert("22726194");
    Undly_5.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_742981931"); // 1
    Undly_5_set.insert("UnderlyingCouponPaymentDate_t_742981931");
    Undly_5.add_attribute("RestrctTyp", "MM"); // 1
    Undly_5_set.insert("MM");
    Undly_5.add_attribute("Snrty", "SR"); // 1
    Undly_5_set.insert("SR");
    Undly_5.add_attribute("NotlPctOut", "8844258.590000"); // 1
    Undly_5_set.insert("8844258.590000");
    Undly_5.add_attribute("OrigNotlPctOut", "17506052.780000"); // 1
    Undly_5_set.insert("17506052.780000");
    Undly_5.add_attribute("AttchPnt", "4978851.320000"); // 1
    Undly_5_set.insert("4978851.320000");
    Undly_5.add_attribute("DetchPnt", "5854023.620000"); // 1
    Undly_5_set.insert("5854023.620000");
    Undly_5.add_attribute("Issued", "UnderlyingIssueDate_t_700626261"); // 1
    Undly_5_set.insert("UnderlyingIssueDate_t_700626261");
    Undly_5.add_attribute("RepoCollSecTyp", "152715734"); // 1
    Undly_5_set.insert("152715734");
    Undly_5.add_attribute("RepoTrm", "1216451568"); // 1
    Undly_5_set.insert("1216451568");
    Undly_5.add_attribute("RepoRt", "18387141.730000"); // 1
    Undly_5_set.insert("18387141.730000");
    Undly_5.add_attribute("Fctr", "1090689.700000"); // 1
    Undly_5_set.insert("1090689.700000");
    Undly_5.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1819304661"); // 1
    Undly_5_set.insert("UnderlyingCreditRating_t_1819304661");
    Undly_5.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_212345024"); // 1
    Undly_5_set.insert("UnderlyingInstrRegistry_t_212345024");
    Undly_5.add_attribute("Ctry", "459292124"); // 1
    Undly_5_set.insert("459292124");
    Undly_5.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_280401578"); // 1
    Undly_5_set.insert("UnderlyingStateOrProvinceOfIssue_t_280401578");
    Undly_5.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1293960785"); // 1
    Undly_5_set.insert("UnderlyingLocaleOfIssue_t_1293960785");
    Undly_5.add_attribute("Redeem", "UnderlyingRedemptionDate_t_52654496"); // 1
    Undly_5_set.insert("UnderlyingRedemptionDate_t_52654496");
    Undly_5.add_attribute("StrkPx", "19512847.640000"); // 1
    Undly_5_set.insert("19512847.640000");
    Undly_5.add_attribute("StrkCcy", "JPY"); // 1
    Undly_5_set.insert("JPY");
    Undly_5.add_attribute("OptA", "972382749"); // 1
    Undly_5_set.insert("972382749");
    Undly_5.add_attribute("Mult", "3714698.550000"); // 1
    Undly_5_set.insert("3714698.550000");
    Undly_5.add_attribute("MultTyp", "0"); // 1
    Undly_5_set.insert("0");
    Undly_5.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_5_set.insert("0");
    Undly_5.add_attribute("UOM", "lbs"); // 1
    Undly_5_set.insert("lbs");
    Undly_5.add_attribute("UOMQty", "11779484.460000"); // 1
    Undly_5_set.insert("11779484.460000");
    Undly_5.add_attribute("PxUOM", "t"); // 1
    Undly_5_set.insert("t");
    Undly_5.add_attribute("PxUOMQty", "6310258.020000"); // 1
    Undly_5_set.insert("6310258.020000");
    Undly_5.add_attribute("TmUnit", "Mo"); // 1
    Undly_5_set.insert("Mo");
    Undly_5.add_attribute("ExerStyle", "1"); // 1
    Undly_5_set.insert("1");
    Undly_5.add_attribute("CpnRt", "13740077.340000"); // 1
    Undly_5_set.insert("13740077.340000");
    Undly_5.add_attribute("Exch", "UnderlyingSecurityExchange_t_256315108"); // 1
    Undly_5_set.insert("UnderlyingSecurityExchange_t_256315108");
    Undly_5.add_attribute("Issr", "UnderlyingIssuer_t_402051135"); // 1
    Undly_5_set.insert("UnderlyingIssuer_t_402051135");
    Undly_5.add_attribute("EncUndIssrLen", "110949945"); // 1
    Undly_5_set.insert("110949945");
    Undly_5.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2006920386"); // 1
    Undly_5_set.insert("EncodedUnderlyingIssuer_t_2006920386");
    Undly_5.add_attribute("Desc", "UnderlyingSecurityDesc_t_899936267"); // 1
    Undly_5_set.insert("UnderlyingSecurityDesc_t_899936267");
    Undly_5.add_attribute("EncUndSecDescLen", "696352307"); // 1
    Undly_5_set.insert("696352307");
    Undly_5.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_560063000"); // 1
    Undly_5_set.insert("EncodedUnderlyingSecurityDesc_t_560063000");
    Undly_5.add_attribute("CPPgm", "UnderlyingCPProgram_t_1052652001"); // 1
    Undly_5_set.insert("UnderlyingCPProgram_t_1052652001");
    Undly_5.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1912803875"); // 1
    Undly_5_set.insert("UnderlyingCPRegType_t_1912803875");
    Undly_5.add_attribute("AllocPct", "2512935.250000"); // 1
    Undly_5_set.insert("2512935.250000");
    Undly_5.add_attribute("Ccy", "USD"); // 1
    Undly_5_set.insert("USD");
    Undly_5.add_attribute("Qty", "4636385.490000"); // 1
    Undly_5_set.insert("4636385.490000");
    Undly_5.add_attribute("SettlTyp", "5"); // 1
    Undly_5_set.insert("5");
    Undly_5.add_attribute("CashAmt", "UnderlyingCashAmount_t_1865026466"); // 1
    Undly_5_set.insert("UnderlyingCashAmount_t_1865026466");
    Undly_5.add_attribute("CashTyp", "FIXED"); // 1
    Undly_5_set.insert("FIXED");
    Undly_5.add_attribute("Px", "16736675.920000"); // 1
    Undly_5_set.insert("16736675.920000");
    Undly_5.add_attribute("DirtPx", "16688275.830000"); // 1
    Undly_5_set.insert("16688275.830000");
    Undly_5.add_attribute("EndPx", "2460690.460000"); // 1
    Undly_5_set.insert("2460690.460000");
    Undly_5.add_attribute("StartVal", "UnderlyingStartValue_t_221221705"); // 1
    Undly_5_set.insert("UnderlyingStartValue_t_221221705");
    Undly_5.add_attribute("CurVal", "UnderlyingCurrentValue_t_493726684"); // 1
    Undly_5_set.insert("UnderlyingCurrentValue_t_493726684");
    Undly_5.add_attribute("EndVal", "UnderlyingEndValue_t_617538902"); // 1
    Undly_5_set.insert("UnderlyingEndValue_t_617538902");
    Undly_5.add_attribute("AdjQty", "21015456.670000"); // 1
    Undly_5_set.insert("21015456.670000");
    Undly_5.add_attribute("FxRate", "13572676.600000"); // 1
    Undly_5_set.insert("13572676.600000");
    Undly_5.add_attribute("FxRateCalc", "D"); // 1
    Undly_5_set.insert("D");
    Undly_5.add_attribute("CapValu", "UnderlyingCapValue_t_1132010465"); // 1
    Undly_5_set.insert("UnderlyingCapValue_t_1132010465");
    Undly_5.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1382550662"); // 1
    Undly_5_set.insert("UnderlyingSettlMethod_t_1382550662");
    Undly_5.add_attribute("PutCall", "746322739"); // 1
    Undly_5_set.insert("746322739");
    all_values.push_back(Undly_5_set);
    all_compo_names.insert("Undly_5_set");

    {
      xml_element UndAID_5{"UndAID"};
      multiset<string> UndAID_5_set;
      UndAID_5.add_attribute("AltID", "UnderlyingSecurityAltID_t_844552739"); // 2
      UndAID_5_set.insert("UnderlyingSecurityAltID_t_844552739");
      UndAID_5.add_attribute("AltIDSrc", "3"); // 2
      UndAID_5_set.insert("3");
      all_values.push_back(UndAID_5_set);
      all_compo_names.insert("UndAID_5_set");

      Undly_5.add_element(UndAID_5);
    }
    {
      xml_element Stip_10{"Stip"};
      multiset<string> Stip_10_set;
      Stip_10.add_attribute("Typ", "MAXORDQTY"); // 2
      Stip_10_set.insert("MAXORDQTY");
      Stip_10.add_attribute("Val", "UnderlyingStipValue_t_1100867847"); // 2
      Stip_10_set.insert("UnderlyingStipValue_t_1100867847");
      all_values.push_back(Stip_10_set);
      all_compo_names.insert("Stip_10_set");

      Undly_5.add_element(Stip_10);
    }
    {
      xml_element Pty_37{"Pty"};
      multiset<string> Pty_37_set;
      Pty_37.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1832610993"); // 2
      Pty_37_set.insert("UnderlyingInstrumentPartyID_t_1832610993");
      Pty_37.add_attribute("Src", "3"); // 2
      Pty_37_set.insert("3");
      Pty_37.add_attribute("R", "60"); // 2
      Pty_37_set.insert("60");
      all_values.push_back(Pty_37_set);
      all_compo_names.insert("Pty_37_set");

      {
        xml_element Sub_37{"Sub"};
        multiset<string> Sub_37_set;
        Sub_37.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_585063613"); // 3
        Sub_37_set.insert("UnderlyingInstrumentPartySubID_t_585063613");
        Sub_37.add_attribute("Typ", "13"); // 3
        Sub_37_set.insert("13");
        all_values.push_back(Sub_37_set);
        all_compo_names.insert("Sub_37_set");

        Pty_37.add_element(Sub_37);
      }
      Undly_5.add_element(Pty_37);
    }
    elt.add_element(Undly_5);
  } // end Undly
  { // Leg
    xml_element Leg_6{"Leg"};
    multiset<string> Leg_6_set;
    Leg_6.add_attribute("Sym", "LegSymbol_t_1637715614"); // 1
    Leg_6_set.insert("LegSymbol_t_1637715614");
    Leg_6.add_attribute("Sfx", "WI"); // 1
    Leg_6_set.insert("WI");
    Leg_6.add_attribute("ID", "LegSecurityID_t_1771661110"); // 1
    Leg_6_set.insert("LegSecurityID_t_1771661110");
    Leg_6.add_attribute("Src", "B"); // 1
    Leg_6_set.insert("B");
    Leg_6.add_attribute("Prod", "3"); // 1
    Leg_6_set.insert("3");
    Leg_6.add_attribute("CFI", "LegCFICode_t_87816011"); // 1
    Leg_6_set.insert("LegCFICode_t_87816011");
    Leg_6.add_attribute("SecTyp", "BRADY"); // 1
    Leg_6_set.insert("BRADY");
    Leg_6.add_attribute("SecSubTyp", "LegSecuritySubType_t_1847637012"); // 1
    Leg_6_set.insert("LegSecuritySubType_t_1847637012");
    Leg_6.add_attribute("MMY", "1845415345"); // 1
    Leg_6_set.insert("1845415345");
    Leg_6.add_attribute("Mat", "LegMaturityDate_t_1799149979"); // 1
    Leg_6_set.insert("LegMaturityDate_t_1799149979");
    Leg_6.add_attribute("MatTm", "1368980947"); // 1
    Leg_6_set.insert("1368980947");
    Leg_6.add_attribute("CpnPmt", "LegCouponPaymentDate_t_2091484392"); // 1
    Leg_6_set.insert("LegCouponPaymentDate_t_2091484392");
    Leg_6.add_attribute("Issued", "LegIssueDate_t_2020371684"); // 1
    Leg_6_set.insert("LegIssueDate_t_2020371684");
    Leg_6.add_attribute("RepoCollSecTyp", "1862707631"); // 1
    Leg_6_set.insert("1862707631");
    Leg_6.add_attribute("RepoTrm", "561539646"); // 1
    Leg_6_set.insert("561539646");
    Leg_6.add_attribute("RepoRt", "19744337.030000"); // 1
    Leg_6_set.insert("19744337.030000");
    Leg_6.add_attribute("Fctr", "10724916.430000"); // 1
    Leg_6_set.insert("10724916.430000");
    Leg_6.add_attribute("CrdRtg", "LegCreditRating_t_676836583"); // 1
    Leg_6_set.insert("LegCreditRating_t_676836583");
    Leg_6.add_attribute("Rgstry", "LegInstrRegistry_t_958960520"); // 1
    Leg_6_set.insert("LegInstrRegistry_t_958960520");
    Leg_6.add_attribute("Ctry", "307558657"); // 1
    Leg_6_set.insert("307558657");
    Leg_6.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1423159322"); // 1
    Leg_6_set.insert("LegStateOrProvinceOfIssue_t_1423159322");
    Leg_6.add_attribute("Lcl", "LegLocaleOfIssue_t_1803513259"); // 1
    Leg_6_set.insert("LegLocaleOfIssue_t_1803513259");
    Leg_6.add_attribute("Redeem", "LegRedemptionDate_t_1738118516"); // 1
    Leg_6_set.insert("LegRedemptionDate_t_1738118516");
    Leg_6.add_attribute("Strk", "13960061.480000"); // 1
    Leg_6_set.insert("13960061.480000");
    Leg_6.add_attribute("StrkCcy", "CHF"); // 1
    Leg_6_set.insert("CHF");
    Leg_6.add_attribute("OptA", "1479802918"); // 1
    Leg_6_set.insert("1479802918");
    Leg_6.add_attribute("Cmult", "17172020.440000"); // 1
    Leg_6_set.insert("17172020.440000");
    Leg_6.add_attribute("MultTyp", "1"); // 1
    Leg_6_set.insert("1");
    Leg_6.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_6_set.insert("3");
    Leg_6.add_attribute("UOM", "Bcf"); // 1
    Leg_6_set.insert("Bcf");
    Leg_6.add_attribute("UOMQty", "14985414.410000"); // 1
    Leg_6_set.insert("14985414.410000");
    Leg_6.add_attribute("PxUOM", "USD"); // 1
    Leg_6_set.insert("USD");
    Leg_6.add_attribute("PxUOMQty", "7142634.440000"); // 1
    Leg_6_set.insert("7142634.440000");
    Leg_6.add_attribute("TmUnit", "D"); // 1
    Leg_6_set.insert("D");
    Leg_6.add_attribute("ExerStyle", "0"); // 1
    Leg_6_set.insert("0");
    Leg_6.add_attribute("CpnRt", "8020794.550000"); // 1
    Leg_6_set.insert("8020794.550000");
    Leg_6.add_attribute("Exch", "LegSecurityExchange_t_128493118"); // 1
    Leg_6_set.insert("LegSecurityExchange_t_128493118");
    Leg_6.add_attribute("Issr", "LegIssuer_t_340701562"); // 1
    Leg_6_set.insert("LegIssuer_t_340701562");
    Leg_6.add_attribute("EncLegIssrLen", "500011153"); // 1
    Leg_6_set.insert("500011153");
    Leg_6.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1927643097"); // 1
    Leg_6_set.insert("EncodedLegIssuer_t_1927643097");
    Leg_6.add_attribute("Desc", "LegSecurityDesc_t_1709682509"); // 1
    Leg_6_set.insert("LegSecurityDesc_t_1709682509");
    Leg_6.add_attribute("EncLegSecDescLen", "444011897"); // 1
    Leg_6_set.insert("444011897");
    Leg_6.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1800531133"); // 1
    Leg_6_set.insert("EncodedLegSecurityDesc_t_1800531133");
    Leg_6.add_attribute("RatioQty", "14249064.930000"); // 1
    Leg_6_set.insert("14249064.930000");
    Leg_6.add_attribute("Side", "8"); // 1
    Leg_6_set.insert("8");
    Leg_6.add_attribute("Ccy", "GBP"); // 1
    Leg_6_set.insert("GBP");
    Leg_6.add_attribute("Pool", "LegPool_t_1682388126"); // 1
    Leg_6_set.insert("LegPool_t_1682388126");
    Leg_6.add_attribute("Dated", "LegDatedDate_t_438958060"); // 1
    Leg_6_set.insert("LegDatedDate_t_438958060");
    Leg_6.add_attribute("CSetMo", "657473146"); // 1
    Leg_6_set.insert("657473146");
    Leg_6.add_attribute("IntAcrl", "LegInterestAccrualDate_t_958063800"); // 1
    Leg_6_set.insert("LegInterestAccrualDate_t_958063800");
    Leg_6.add_attribute("PutCall", "94987672"); // 1
    Leg_6_set.insert("94987672");
    Leg_6.add_attribute("LegOptionRatio", "2481080.140000"); // 1
    Leg_6_set.insert("2481080.140000");
    Leg_6.add_attribute("Px", "2065863.000000"); // 1
    Leg_6_set.insert("2065863.000000");
    all_values.push_back(Leg_6_set);
    all_compo_names.insert("Leg_6_set");

    {
      xml_element LegAID_6{"LegAID"};
      multiset<string> LegAID_6_set;
      LegAID_6.add_attribute("SecAltID", "LegSecurityAltID_t_851885130"); // 2
      LegAID_6_set.insert("LegSecurityAltID_t_851885130");
      LegAID_6.add_attribute("SecAltIDSrc", "G"); // 2
      LegAID_6_set.insert("G");
      all_values.push_back(LegAID_6_set);
      all_compo_names.insert("LegAID_6_set");

      Leg_6.add_element(LegAID_6);
    }
    elt.add_element(Leg_6);
  } // end Leg
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_2{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_2_set;
    SprdBnchmkCurve_2.add_attribute("Spread", "16863892.190000"); // 1
    SprdBnchmkCurve_2_set.insert("16863892.190000");
    SprdBnchmkCurve_2.add_attribute("Ccy", "JPY"); // 1
    SprdBnchmkCurve_2_set.insert("JPY");
    SprdBnchmkCurve_2.add_attribute("Name", "FutureSWAP"); // 1
    SprdBnchmkCurve_2_set.insert("FutureSWAP");
    SprdBnchmkCurve_2.add_attribute("Point", "BenchmarkCurvePoint_t_1511689508"); // 1
    SprdBnchmkCurve_2_set.insert("BenchmarkCurvePoint_t_1511689508");
    SprdBnchmkCurve_2.add_attribute("Px", "8832374.950000"); // 1
    SprdBnchmkCurve_2_set.insert("8832374.950000");
    SprdBnchmkCurve_2.add_attribute("PxTyp", "3"); // 1
    SprdBnchmkCurve_2_set.insert("3");
    SprdBnchmkCurve_2.add_attribute("SecID", "BenchmarkSecurityID_t_78469304"); // 1
    SprdBnchmkCurve_2_set.insert("BenchmarkSecurityID_t_78469304");
    SprdBnchmkCurve_2.add_attribute("SecIDSrc", "7"); // 1
    SprdBnchmkCurve_2_set.insert("7");
    all_values.push_back(SprdBnchmkCurve_2_set);
    all_compo_names.insert("SprdBnchmkCurve_2_set");

    elt.add_element(SprdBnchmkCurve_2);
  } // end SprdBnchmkCurve
  { // Pty
    xml_element Pty_38{"Pty"};
    multiset<string> Pty_38_set;
    Pty_38.add_attribute("ID", "PartyID_t_880548759"); // 1
    Pty_38_set.insert("PartyID_t_880548759");
    Pty_38.add_attribute("Src", "3"); // 1
    Pty_38_set.insert("3");
    Pty_38.add_attribute("R", "6"); // 1
    Pty_38_set.insert("6");
    all_values.push_back(Pty_38_set);
    all_compo_names.insert("Pty_38_set");

    {
      xml_element Sub_38{"Sub"};
      multiset<string> Sub_38_set;
      Sub_38.add_attribute("ID", "PartySubID_t_1380559912"); // 2
      Sub_38_set.insert("PartySubID_t_1380559912");
      Sub_38.add_attribute("Typ", "28"); // 2
      Sub_38_set.insert("28");
      all_values.push_back(Sub_38_set);
      all_compo_names.insert("Sub_38_set");

      Pty_38.add_element(Sub_38);
    }
    elt.add_element(Pty_38);
  } // end Pty
  { // Pty
    xml_element Pty_39{"Pty"};
    multiset<string> Pty_39_set;
    Pty_39.add_attribute("ID", "PartyID_t_852760194"); // 1
    Pty_39_set.insert("PartyID_t_852760194");
    Pty_39.add_attribute("Src", "A"); // 1
    Pty_39_set.insert("A");
    Pty_39.add_attribute("R", "53"); // 1
    Pty_39_set.insert("53");
    all_values.push_back(Pty_39_set);
    all_compo_names.insert("Pty_39_set");

    {
      xml_element Sub_39{"Sub"};
      multiset<string> Sub_39_set;
      Sub_39.add_attribute("ID", "PartySubID_t_130183039"); // 2
      Sub_39_set.insert("PartySubID_t_130183039");
      Sub_39.add_attribute("Typ", "5"); // 2
      Sub_39_set.insert("5");
      all_values.push_back(Sub_39_set);
      all_compo_names.insert("Sub_39_set");

      Pty_39.add_element(Sub_39);
    }
    elt.add_element(Pty_39);
  } // end Pty
  { // Stip
    xml_element Stip_11{"Stip"};
    multiset<string> Stip_11_set;
    Stip_11.add_attribute("Typ", "CPY"); // 1
    Stip_11_set.insert("CPY");
    Stip_11.add_attribute("Val", "StipulationValue_t_217544182"); // 1
    Stip_11_set.insert("StipulationValue_t_217544182");
    all_values.push_back(Stip_11_set);
    all_compo_names.insert("Stip_11_set");

    elt.add_element(Stip_11);
  } // end Stip
  { // Yield
    xml_element Yield_2{"Yield"};
    multiset<string> Yield_2_set;
    Yield_2.add_attribute("Typ", "MARK"); // 1
    Yield_2_set.insert("MARK");
    Yield_2.add_attribute("Yld", "11375706.740000"); // 1
    Yield_2_set.insert("11375706.740000");
    Yield_2.add_attribute("CalcDt", "YieldCalcDate_t_1175607983"); // 1
    Yield_2_set.insert("YieldCalcDate_t_1175607983");
    Yield_2.add_attribute("RedDt", "YieldRedemptionDate_t_461891551"); // 1
    Yield_2_set.insert("YieldRedemptionDate_t_461891551");
    Yield_2.add_attribute("RedPx", "13856786.880000"); // 1
    Yield_2_set.insert("13856786.880000");
    Yield_2.add_attribute("RedPxTyp", "4"); // 1
    Yield_2_set.insert("4");
    all_values.push_back(Yield_2_set);
    all_compo_names.insert("Yield_2_set");

    elt.add_element(Yield_2);
  } // end Yield
  { // Amt
    xml_element Amt_5{"Amt"};
    multiset<string> Amt_5_set;
    Amt_5.add_attribute("Typ", "SMTM"); // 1
    Amt_5_set.insert("SMTM");
    Amt_5.add_attribute("Amt", "PosAmt_t_921099854"); // 1
    Amt_5_set.insert("PosAmt_t_921099854");
    Amt_5.add_attribute("Ccy", "PositionCurrency_t_1735380208"); // 1
    Amt_5_set.insert("PositionCurrency_t_1735380208");
    all_values.push_back(Amt_5_set);
    all_compo_names.insert("Amt_5_set");

    elt.add_element(Amt_5);
  } // end Amt
  { // Amt
    xml_element Amt_6{"Amt"};
    multiset<string> Amt_6_set;
    Amt_6.add_attribute("Typ", "CMTM"); // 1
    Amt_6_set.insert("CMTM");
    Amt_6.add_attribute("Amt", "PosAmt_t_572473773"); // 1
    Amt_6_set.insert("PosAmt_t_572473773");
    Amt_6.add_attribute("Ccy", "PositionCurrency_t_1099586068"); // 1
    Amt_6_set.insert("PositionCurrency_t_1099586068");
    all_values.push_back(Amt_6_set);
    all_compo_names.insert("Amt_6_set");

    elt.add_element(Amt_6);
  } // end Amt
  { // Alloc
    xml_element Alloc_5{"Alloc"};
    multiset<string> Alloc_5_set;
    Alloc_5.add_attribute("Acct", "AllocAccount_t_881785345"); // 1
    Alloc_5_set.insert("AllocAccount_t_881785345");
    Alloc_5.add_attribute("ActIDSrc", "1"); // 1
    Alloc_5_set.insert("1");
    Alloc_5.add_attribute("MtchStat", "1"); // 1
    Alloc_5_set.insert("1");
    Alloc_5.add_attribute("Px", "18316451.160000"); // 1
    Alloc_5_set.insert("18316451.160000");
    Alloc_5.add_attribute("Qty", "20586041.310000"); // 1
    Alloc_5_set.insert("20586041.310000");
    Alloc_5.add_attribute("IndAllocID", "IndividualAllocID_t_930988387"); // 1
    Alloc_5_set.insert("IndividualAllocID_t_930988387");
    Alloc_5.add_attribute("ProcCode", "3"); // 1
    Alloc_5_set.insert("3");
    Alloc_5.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_1291680396"); // 1
    Alloc_5_set.insert("SecondaryIndividualAllocID_t_1291680396");
    Alloc_5.add_attribute("Meth", "3"); // 1
    Alloc_5_set.insert("3");
    Alloc_5.add_attribute("CustCpcty", "AllocCustomerCapacity_t_1827482995"); // 1
    Alloc_5_set.insert("AllocCustomerCapacity_t_1827482995");
    Alloc_5.add_attribute("AllocPosEfct", "C"); // 1
    Alloc_5_set.insert("C");
    Alloc_5.add_attribute("Typ", "2"); // 1
    Alloc_5_set.insert("2");
    Alloc_5.add_attribute("NotifyBrkrOfCredit", "Y"); // 1
    Alloc_5_set.insert("Y");
    Alloc_5.add_attribute("HandlInst", "3"); // 1
    Alloc_5_set.insert("3");
    Alloc_5.add_attribute("Txt", "AllocText_t_2101783278"); // 1
    Alloc_5_set.insert("AllocText_t_2101783278");
    Alloc_5.add_attribute("EncAllocTextLen", "290279915"); // 1
    Alloc_5_set.insert("290279915");
    Alloc_5.add_attribute("EncAllocText", "EncodedAllocText_t_1868952444"); // 1
    Alloc_5_set.insert("EncodedAllocText_t_1868952444");
    Alloc_5.add_attribute("AvgPx", "3212035.090000"); // 1
    Alloc_5_set.insert("3212035.090000");
    Alloc_5.add_attribute("NetMny", "AllocNetMoney_t_1427850589"); // 1
    Alloc_5_set.insert("AllocNetMoney_t_1427850589");
    Alloc_5.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_897076779"); // 1
    Alloc_5_set.insert("SettlCurrAmt_t_897076779");
    Alloc_5.add_attribute("SettlCcyAmt", "AllocSettlCurrAmt_t_783095060"); // 1
    Alloc_5_set.insert("AllocSettlCurrAmt_t_783095060");
    Alloc_5.add_attribute("SettlCcy", "EUR"); // 1
    Alloc_5_set.insert("EUR");
    Alloc_5.add_attribute("AllocSettlCcy", "JPY"); // 1
    Alloc_5_set.insert("JPY");
    Alloc_5.add_attribute("SettlCurrFxRt", "10528872.690000"); // 1
    Alloc_5_set.insert("10528872.690000");
    Alloc_5.add_attribute("SettlCurrFxRtCalc", "D"); // 1
    Alloc_5_set.insert("D");
    Alloc_5.add_attribute("AcrdIntAmt", "AllocAccruedInterestAmt_t_1869839514"); // 1
    Alloc_5_set.insert("AllocAccruedInterestAmt_t_1869839514");
    Alloc_5.add_attribute("IntAtMat", "AllocInterestAtMaturity_t_1625361043"); // 1
    Alloc_5_set.insert("AllocInterestAtMaturity_t_1625361043");
    Alloc_5.add_attribute("ClrFeeInd", "I"); // 1
    Alloc_5_set.insert("I");
    Alloc_5.add_attribute("SettlInstTyp", "0"); // 1
    Alloc_5_set.insert("0");
    all_values.push_back(Alloc_5_set);
    all_compo_names.insert("Alloc_5_set");

    {
      xml_element Pty_40{"Pty"};
      multiset<string> Pty_40_set;
      Pty_40.add_attribute("ID", "NestedPartyID_t_359662740"); // 2
      Pty_40_set.insert("NestedPartyID_t_359662740");
      Pty_40.add_attribute("Src", "8"); // 2
      Pty_40_set.insert("8");
      Pty_40.add_attribute("R", "14"); // 2
      Pty_40_set.insert("14");
      all_values.push_back(Pty_40_set);
      all_compo_names.insert("Pty_40_set");

      {
        xml_element Sub_40{"Sub"};
        multiset<string> Sub_40_set;
        Sub_40.add_attribute("ID", "NestedPartySubID_t_43824208"); // 3
        Sub_40_set.insert("NestedPartySubID_t_43824208");
        Sub_40.add_attribute("Typ", "8"); // 3
        Sub_40_set.insert("8");
        all_values.push_back(Sub_40_set);
        all_compo_names.insert("Sub_40_set");

        Pty_40.add_element(Sub_40);
      }
      Alloc_5.add_element(Pty_40);
    }
    {
      xml_element Comm_5{"Comm"};
      multiset<string> Comm_5_set;
      Comm_5.add_attribute("Comm", "Commission_t_1747073761"); // 2
      Comm_5_set.insert("Commission_t_1747073761");
      Comm_5.add_attribute("CommTyp", "6"); // 2
      Comm_5_set.insert("6");
      Comm_5.add_attribute("Ccy", "JPY"); // 2
      Comm_5_set.insert("JPY");
      Comm_5.add_attribute("FundRenewWaiv", "Y"); // 2
      Comm_5_set.insert("Y");
      all_values.push_back(Comm_5_set);
      all_compo_names.insert("Comm_5_set");

      Alloc_5.add_element(Comm_5);
    }
    {
      xml_element MiscFees_5{"MiscFees"};
      multiset<string> MiscFees_5_set;
      MiscFees_5.add_attribute("Amt", "MiscFeeAmt_t_1839011882"); // 2
      MiscFees_5_set.insert("MiscFeeAmt_t_1839011882");
      MiscFees_5.add_attribute("Curr", "USD"); // 2
      MiscFees_5_set.insert("USD");
      MiscFees_5.add_attribute("Typ", "4"); // 2
      MiscFees_5_set.insert("4");
      MiscFees_5.add_attribute("Basis", "1"); // 2
      MiscFees_5_set.insert("1");
      all_values.push_back(MiscFees_5_set);
      all_compo_names.insert("MiscFees_5_set");

      Alloc_5.add_element(MiscFees_5);
    }
    {
      xml_element ClrInst_5{"ClrInst"};
      multiset<string> ClrInst_5_set;
      ClrInst_5.add_attribute("ClrngInstrctn", "1"); // 2
      ClrInst_5_set.insert("1");
      all_values.push_back(ClrInst_5_set);
      all_compo_names.insert("ClrInst_5_set");

      Alloc_5.add_element(ClrInst_5);
    }
    {
      xml_element SetInstr_5{"SetInstr"};
      multiset<string> SetInstr_5_set;
      SetInstr_5.add_attribute("DlvryTyp", "1"); // 2
      SetInstr_5_set.insert("1");
      SetInstr_5.add_attribute("StandInstDbTyp", "4"); // 2
      SetInstr_5_set.insert("4");
      SetInstr_5.add_attribute("StandInstDbName", "StandInstDbName_t_79375600"); // 2
      SetInstr_5_set.insert("StandInstDbName_t_79375600");
      SetInstr_5.add_attribute("StandInstDbID", "StandInstDbID_t_1961482072"); // 2
      SetInstr_5_set.insert("StandInstDbID_t_1961482072");
      all_values.push_back(SetInstr_5_set);
      all_compo_names.insert("SetInstr_5_set");

      {
        xml_element DlvInst_5{"DlvInst"};
        multiset<string> DlvInst_5_set;
        DlvInst_5.add_attribute("InstSrc", "3"); // 3
        DlvInst_5_set.insert("3");
        DlvInst_5.add_attribute("InstTyp", "S"); // 3
        DlvInst_5_set.insert("S");
        all_values.push_back(DlvInst_5_set);
        all_compo_names.insert("DlvInst_5_set");

        {
          xml_element Pty_41{"Pty"};
          multiset<string> Pty_41_set;
          Pty_41.add_attribute("ID", "SettlPartyID_t_2093269487"); // 4
          Pty_41_set.insert("SettlPartyID_t_2093269487");
          Pty_41.add_attribute("Src", "B"); // 4
          Pty_41_set.insert("B");
          Pty_41.add_attribute("R", "56"); // 4
          Pty_41_set.insert("56");
          all_values.push_back(Pty_41_set);
          all_compo_names.insert("Pty_41_set");

          {
            xml_element Sub_41{"Sub"};
            multiset<string> Sub_41_set;
            Sub_41.add_attribute("ID", "SettlPartySubID_t_998673109"); // 5
            Sub_41_set.insert("SettlPartySubID_t_998673109");
            Sub_41.add_attribute("Typ", "26"); // 5
            Sub_41_set.insert("26");
            all_values.push_back(Sub_41_set);
            all_compo_names.insert("Sub_41_set");

            Pty_41.add_element(Sub_41);
          }
          DlvInst_5.add_element(Pty_41);
        }
        SetInstr_5.add_element(DlvInst_5);
      }
      Alloc_5.add_element(SetInstr_5);
    }
    elt.add_element(Alloc_5);
  } // end Alloc
  { // Alloc
    xml_element Alloc_6{"Alloc"};
    multiset<string> Alloc_6_set;
    Alloc_6.add_attribute("Acct", "AllocAccount_t_2043371639"); // 1
    Alloc_6_set.insert("AllocAccount_t_2043371639");
    Alloc_6.add_attribute("ActIDSrc", "1"); // 1
    Alloc_6_set.insert("1");
    Alloc_6.add_attribute("MtchStat", "0"); // 1
    Alloc_6_set.insert("0");
    Alloc_6.add_attribute("Px", "7957263.220000"); // 1
    Alloc_6_set.insert("7957263.220000");
    Alloc_6.add_attribute("Qty", "8362132.440000"); // 1
    Alloc_6_set.insert("8362132.440000");
    Alloc_6.add_attribute("IndAllocID", "IndividualAllocID_t_53933570"); // 1
    Alloc_6_set.insert("IndividualAllocID_t_53933570");
    Alloc_6.add_attribute("ProcCode", "4"); // 1
    Alloc_6_set.insert("4");
    Alloc_6.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_880037453"); // 1
    Alloc_6_set.insert("SecondaryIndividualAllocID_t_880037453");
    Alloc_6.add_attribute("Meth", "3"); // 1
    Alloc_6_set.insert("3");
    Alloc_6.add_attribute("CustCpcty", "AllocCustomerCapacity_t_1211401808"); // 1
    Alloc_6_set.insert("AllocCustomerCapacity_t_1211401808");
    Alloc_6.add_attribute("AllocPosEfct", "R"); // 1
    Alloc_6_set.insert("R");
    Alloc_6.add_attribute("Typ", "1"); // 1
    Alloc_6_set.insert("1");
    Alloc_6.add_attribute("NotifyBrkrOfCredit", "N"); // 1
    Alloc_6_set.insert("N");
    Alloc_6.add_attribute("HandlInst", "2"); // 1
    Alloc_6_set.insert("2");
    Alloc_6.add_attribute("Txt", "AllocText_t_194268059"); // 1
    Alloc_6_set.insert("AllocText_t_194268059");
    Alloc_6.add_attribute("EncAllocTextLen", "1741230560"); // 1
    Alloc_6_set.insert("1741230560");
    Alloc_6.add_attribute("EncAllocText", "EncodedAllocText_t_958375915"); // 1
    Alloc_6_set.insert("EncodedAllocText_t_958375915");
    Alloc_6.add_attribute("AvgPx", "15372045.550000"); // 1
    Alloc_6_set.insert("15372045.550000");
    Alloc_6.add_attribute("NetMny", "AllocNetMoney_t_899879647"); // 1
    Alloc_6_set.insert("AllocNetMoney_t_899879647");
    Alloc_6.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1757384574"); // 1
    Alloc_6_set.insert("SettlCurrAmt_t_1757384574");
    Alloc_6.add_attribute("SettlCcyAmt", "AllocSettlCurrAmt_t_454126200"); // 1
    Alloc_6_set.insert("AllocSettlCurrAmt_t_454126200");
    Alloc_6.add_attribute("SettlCcy", "JPY"); // 1
    Alloc_6_set.insert("JPY");
    Alloc_6.add_attribute("AllocSettlCcy", "JPY"); // 1
    Alloc_6_set.insert("JPY");
    Alloc_6.add_attribute("SettlCurrFxRt", "4346977.550000"); // 1
    Alloc_6_set.insert("4346977.550000");
    Alloc_6.add_attribute("SettlCurrFxRtCalc", "M"); // 1
    Alloc_6_set.insert("M");
    Alloc_6.add_attribute("AcrdIntAmt", "AllocAccruedInterestAmt_t_855015650"); // 1
    Alloc_6_set.insert("AllocAccruedInterestAmt_t_855015650");
    Alloc_6.add_attribute("IntAtMat", "AllocInterestAtMaturity_t_608229881"); // 1
    Alloc_6_set.insert("AllocInterestAtMaturity_t_608229881");
    Alloc_6.add_attribute("ClrFeeInd", "9"); // 1
    Alloc_6_set.insert("9");
    Alloc_6.add_attribute("SettlInstTyp", "4"); // 1
    Alloc_6_set.insert("4");
    all_values.push_back(Alloc_6_set);
    all_compo_names.insert("Alloc_6_set");

    {
      xml_element Pty_42{"Pty"};
      multiset<string> Pty_42_set;
      Pty_42.add_attribute("ID", "NestedPartyID_t_504117872"); // 2
      Pty_42_set.insert("NestedPartyID_t_504117872");
      Pty_42.add_attribute("Src", "2"); // 2
      Pty_42_set.insert("2");
      Pty_42.add_attribute("R", "16"); // 2
      Pty_42_set.insert("16");
      all_values.push_back(Pty_42_set);
      all_compo_names.insert("Pty_42_set");

      {
        xml_element Sub_42{"Sub"};
        multiset<string> Sub_42_set;
        Sub_42.add_attribute("ID", "NestedPartySubID_t_1299844194"); // 3
        Sub_42_set.insert("NestedPartySubID_t_1299844194");
        Sub_42.add_attribute("Typ", "20"); // 3
        Sub_42_set.insert("20");
        all_values.push_back(Sub_42_set);
        all_compo_names.insert("Sub_42_set");

        Pty_42.add_element(Sub_42);
      }
      Alloc_6.add_element(Pty_42);
    }
    {
      xml_element Comm_6{"Comm"};
      multiset<string> Comm_6_set;
      Comm_6.add_attribute("Comm", "Commission_t_1045060749"); // 2
      Comm_6_set.insert("Commission_t_1045060749");
      Comm_6.add_attribute("CommTyp", "3"); // 2
      Comm_6_set.insert("3");
      Comm_6.add_attribute("Ccy", "EUR"); // 2
      Comm_6_set.insert("EUR");
      Comm_6.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_6_set.insert("N");
      all_values.push_back(Comm_6_set);
      all_compo_names.insert("Comm_6_set");

      Alloc_6.add_element(Comm_6);
    }
    {
      xml_element MiscFees_6{"MiscFees"};
      multiset<string> MiscFees_6_set;
      MiscFees_6.add_attribute("Amt", "MiscFeeAmt_t_1009001941"); // 2
      MiscFees_6_set.insert("MiscFeeAmt_t_1009001941");
      MiscFees_6.add_attribute("Curr", "EUR"); // 2
      MiscFees_6_set.insert("EUR");
      MiscFees_6.add_attribute("Typ", "3"); // 2
      MiscFees_6_set.insert("3");
      MiscFees_6.add_attribute("Basis", "1"); // 2
      MiscFees_6_set.insert("1");
      all_values.push_back(MiscFees_6_set);
      all_compo_names.insert("MiscFees_6_set");

      Alloc_6.add_element(MiscFees_6);
    }
    {
      xml_element ClrInst_6{"ClrInst"};
      multiset<string> ClrInst_6_set;
      ClrInst_6.add_attribute("ClrngInstrctn", "13"); // 2
      ClrInst_6_set.insert("13");
      all_values.push_back(ClrInst_6_set);
      all_compo_names.insert("ClrInst_6_set");

      Alloc_6.add_element(ClrInst_6);
    }
    {
      xml_element SetInstr_6{"SetInstr"};
      multiset<string> SetInstr_6_set;
      SetInstr_6.add_attribute("DlvryTyp", "0"); // 2
      SetInstr_6_set.insert("0");
      SetInstr_6.add_attribute("StandInstDbTyp", "0"); // 2
      SetInstr_6_set.insert("0");
      SetInstr_6.add_attribute("StandInstDbName", "StandInstDbName_t_711114416"); // 2
      SetInstr_6_set.insert("StandInstDbName_t_711114416");
      SetInstr_6.add_attribute("StandInstDbID", "StandInstDbID_t_2026925955"); // 2
      SetInstr_6_set.insert("StandInstDbID_t_2026925955");
      all_values.push_back(SetInstr_6_set);
      all_compo_names.insert("SetInstr_6_set");

      {
        xml_element DlvInst_6{"DlvInst"};
        multiset<string> DlvInst_6_set;
        DlvInst_6.add_attribute("InstSrc", "2"); // 3
        DlvInst_6_set.insert("2");
        DlvInst_6.add_attribute("InstTyp", "C"); // 3
        DlvInst_6_set.insert("C");
        all_values.push_back(DlvInst_6_set);
        all_compo_names.insert("DlvInst_6_set");

        {
          xml_element Pty_43{"Pty"};
          multiset<string> Pty_43_set;
          Pty_43.add_attribute("ID", "SettlPartyID_t_1716202481"); // 4
          Pty_43_set.insert("SettlPartyID_t_1716202481");
          Pty_43.add_attribute("Src", "8"); // 4
          Pty_43_set.insert("8");
          Pty_43.add_attribute("R", "83"); // 4
          Pty_43_set.insert("83");
          all_values.push_back(Pty_43_set);
          all_compo_names.insert("Pty_43_set");

          {
            xml_element Sub_43{"Sub"};
            multiset<string> Sub_43_set;
            Sub_43.add_attribute("ID", "SettlPartySubID_t_3416589"); // 5
            Sub_43_set.insert("SettlPartySubID_t_3416589");
            Sub_43.add_attribute("Typ", "33"); // 5
            Sub_43_set.insert("33");
            all_values.push_back(Sub_43_set);
            all_compo_names.insert("Sub_43_set");

            Pty_43.add_element(Sub_43);
          }
          DlvInst_6.add_element(Pty_43);
        }
        SetInstr_6.add_element(DlvInst_6);
      }
      Alloc_6.add_element(SetInstr_6);
    }
    elt.add_element(Alloc_6);
  } // end Alloc
  { // Alloc
    xml_element Alloc_7{"Alloc"};
    multiset<string> Alloc_7_set;
    Alloc_7.add_attribute("Acct", "AllocAccount_t_441058563"); // 1
    Alloc_7_set.insert("AllocAccount_t_441058563");
    Alloc_7.add_attribute("ActIDSrc", "3"); // 1
    Alloc_7_set.insert("3");
    Alloc_7.add_attribute("MtchStat", "1"); // 1
    Alloc_7_set.insert("1");
    Alloc_7.add_attribute("Px", "10456946.170000"); // 1
    Alloc_7_set.insert("10456946.170000");
    Alloc_7.add_attribute("Qty", "11157643.420000"); // 1
    Alloc_7_set.insert("11157643.420000");
    Alloc_7.add_attribute("IndAllocID", "IndividualAllocID_t_307197685"); // 1
    Alloc_7_set.insert("IndividualAllocID_t_307197685");
    Alloc_7.add_attribute("ProcCode", "2"); // 1
    Alloc_7_set.insert("2");
    Alloc_7.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_268124889"); // 1
    Alloc_7_set.insert("SecondaryIndividualAllocID_t_268124889");
    Alloc_7.add_attribute("Meth", "2"); // 1
    Alloc_7_set.insert("2");
    Alloc_7.add_attribute("CustCpcty", "AllocCustomerCapacity_t_934398898"); // 1
    Alloc_7_set.insert("AllocCustomerCapacity_t_934398898");
    Alloc_7.add_attribute("AllocPosEfct", "F"); // 1
    Alloc_7_set.insert("F");
    Alloc_7.add_attribute("Typ", "1"); // 1
    Alloc_7_set.insert("1");
    Alloc_7.add_attribute("NotifyBrkrOfCredit", "Y"); // 1
    Alloc_7_set.insert("Y");
    Alloc_7.add_attribute("HandlInst", "2"); // 1
    Alloc_7_set.insert("2");
    Alloc_7.add_attribute("Txt", "AllocText_t_804480779"); // 1
    Alloc_7_set.insert("AllocText_t_804480779");
    Alloc_7.add_attribute("EncAllocTextLen", "644769572"); // 1
    Alloc_7_set.insert("644769572");
    Alloc_7.add_attribute("EncAllocText", "EncodedAllocText_t_1077875390"); // 1
    Alloc_7_set.insert("EncodedAllocText_t_1077875390");
    Alloc_7.add_attribute("AvgPx", "1156462.440000"); // 1
    Alloc_7_set.insert("1156462.440000");
    Alloc_7.add_attribute("NetMny", "AllocNetMoney_t_2019334705"); // 1
    Alloc_7_set.insert("AllocNetMoney_t_2019334705");
    Alloc_7.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_889110159"); // 1
    Alloc_7_set.insert("SettlCurrAmt_t_889110159");
    Alloc_7.add_attribute("SettlCcyAmt", "AllocSettlCurrAmt_t_385187625"); // 1
    Alloc_7_set.insert("AllocSettlCurrAmt_t_385187625");
    Alloc_7.add_attribute("SettlCcy", "USD"); // 1
    Alloc_7_set.insert("USD");
    Alloc_7.add_attribute("AllocSettlCcy", "EUR"); // 1
    Alloc_7_set.insert("EUR");
    Alloc_7.add_attribute("SettlCurrFxRt", "5435875.880000"); // 1
    Alloc_7_set.insert("5435875.880000");
    Alloc_7.add_attribute("SettlCurrFxRtCalc", "D"); // 1
    Alloc_7_set.insert("D");
    Alloc_7.add_attribute("AcrdIntAmt", "AllocAccruedInterestAmt_t_1193602555"); // 1
    Alloc_7_set.insert("AllocAccruedInterestAmt_t_1193602555");
    Alloc_7.add_attribute("IntAtMat", "AllocInterestAtMaturity_t_129630501"); // 1
    Alloc_7_set.insert("AllocInterestAtMaturity_t_129630501");
    Alloc_7.add_attribute("ClrFeeInd", "E"); // 1
    Alloc_7_set.insert("E");
    Alloc_7.add_attribute("SettlInstTyp", "2"); // 1
    Alloc_7_set.insert("2");
    all_values.push_back(Alloc_7_set);
    all_compo_names.insert("Alloc_7_set");

    {
      xml_element Pty_44{"Pty"};
      multiset<string> Pty_44_set;
      Pty_44.add_attribute("ID", "NestedPartyID_t_570689065"); // 2
      Pty_44_set.insert("NestedPartyID_t_570689065");
      Pty_44.add_attribute("Src", "1"); // 2
      Pty_44_set.insert("1");
      Pty_44.add_attribute("R", "17"); // 2
      Pty_44_set.insert("17");
      all_values.push_back(Pty_44_set);
      all_compo_names.insert("Pty_44_set");

      {
        xml_element Sub_44{"Sub"};
        multiset<string> Sub_44_set;
        Sub_44.add_attribute("ID", "NestedPartySubID_t_1616383682"); // 3
        Sub_44_set.insert("NestedPartySubID_t_1616383682");
        Sub_44.add_attribute("Typ", "27"); // 3
        Sub_44_set.insert("27");
        all_values.push_back(Sub_44_set);
        all_compo_names.insert("Sub_44_set");

        Pty_44.add_element(Sub_44);
      }
      Alloc_7.add_element(Pty_44);
    }
    {
      xml_element Comm_7{"Comm"};
      multiset<string> Comm_7_set;
      Comm_7.add_attribute("Comm", "Commission_t_1819311177"); // 2
      Comm_7_set.insert("Commission_t_1819311177");
      Comm_7.add_attribute("CommTyp", "4"); // 2
      Comm_7_set.insert("4");
      Comm_7.add_attribute("Ccy", "GBP"); // 2
      Comm_7_set.insert("GBP");
      Comm_7.add_attribute("FundRenewWaiv", "Y"); // 2
      Comm_7_set.insert("Y");
      all_values.push_back(Comm_7_set);
      all_compo_names.insert("Comm_7_set");

      Alloc_7.add_element(Comm_7);
    }
    {
      xml_element MiscFees_7{"MiscFees"};
      multiset<string> MiscFees_7_set;
      MiscFees_7.add_attribute("Amt", "MiscFeeAmt_t_717114539"); // 2
      MiscFees_7_set.insert("MiscFeeAmt_t_717114539");
      MiscFees_7.add_attribute("Curr", "JPY"); // 2
      MiscFees_7_set.insert("JPY");
      MiscFees_7.add_attribute("Typ", "4"); // 2
      MiscFees_7_set.insert("4");
      MiscFees_7.add_attribute("Basis", "0"); // 2
      MiscFees_7_set.insert("0");
      all_values.push_back(MiscFees_7_set);
      all_compo_names.insert("MiscFees_7_set");

      Alloc_7.add_element(MiscFees_7);
    }
    {
      xml_element ClrInst_7{"ClrInst"};
      multiset<string> ClrInst_7_set;
      ClrInst_7.add_attribute("ClrngInstrctn", "6"); // 2
      ClrInst_7_set.insert("6");
      all_values.push_back(ClrInst_7_set);
      all_compo_names.insert("ClrInst_7_set");

      Alloc_7.add_element(ClrInst_7);
    }
    {
      xml_element SetInstr_7{"SetInstr"};
      multiset<string> SetInstr_7_set;
      SetInstr_7.add_attribute("DlvryTyp", "3"); // 2
      SetInstr_7_set.insert("3");
      SetInstr_7.add_attribute("StandInstDbTyp", "0"); // 2
      SetInstr_7_set.insert("0");
      SetInstr_7.add_attribute("StandInstDbName", "StandInstDbName_t_273730209"); // 2
      SetInstr_7_set.insert("StandInstDbName_t_273730209");
      SetInstr_7.add_attribute("StandInstDbID", "StandInstDbID_t_1397003974"); // 2
      SetInstr_7_set.insert("StandInstDbID_t_1397003974");
      all_values.push_back(SetInstr_7_set);
      all_compo_names.insert("SetInstr_7_set");

      {
        xml_element DlvInst_7{"DlvInst"};
        multiset<string> DlvInst_7_set;
        DlvInst_7.add_attribute("InstSrc", "1"); // 3
        DlvInst_7_set.insert("1");
        DlvInst_7.add_attribute("InstTyp", "C"); // 3
        DlvInst_7_set.insert("C");
        all_values.push_back(DlvInst_7_set);
        all_compo_names.insert("DlvInst_7_set");

        {
          xml_element Pty_45{"Pty"};
          multiset<string> Pty_45_set;
          Pty_45.add_attribute("ID", "SettlPartyID_t_849744902"); // 4
          Pty_45_set.insert("SettlPartyID_t_849744902");
          Pty_45.add_attribute("Src", "2"); // 4
          Pty_45_set.insert("2");
          Pty_45.add_attribute("R", "9"); // 4
          Pty_45_set.insert("9");
          all_values.push_back(Pty_45_set);
          all_compo_names.insert("Pty_45_set");

          {
            xml_element Sub_45{"Sub"};
            multiset<string> Sub_45_set;
            Sub_45.add_attribute("ID", "SettlPartySubID_t_1393332491"); // 5
            Sub_45_set.insert("SettlPartySubID_t_1393332491");
            Sub_45.add_attribute("Typ", "5"); // 5
            Sub_45_set.insert("5");
            all_values.push_back(Sub_45_set);
            all_compo_names.insert("Sub_45_set");

            Pty_45.add_element(Sub_45);
          }
          DlvInst_7.add_element(Pty_45);
        }
        SetInstr_7.add_element(DlvInst_7);
      }
      Alloc_7.add_element(SetInstr_7);
    }
    elt.add_element(Alloc_7);
  } // end Alloc
  { // RtSrc
    xml_element RtSrc_1{"RtSrc"};
    multiset<string> RtSrc_1_set;
    RtSrc_1.add_attribute("RtSrc", "0"); // 1
    RtSrc_1_set.insert("0");
    RtSrc_1.add_attribute("RtSrcTyp", "1"); // 1
    RtSrc_1_set.insert("1");
    RtSrc_1.add_attribute("RefPg", "ReferencePage_t_409618140"); // 1
    RtSrc_1_set.insert("ReferencePage_t_409618140");
    all_values.push_back(RtSrc_1_set);
    all_compo_names.insert("RtSrc_1_set");

    elt.add_element(RtSrc_1);
  } // end RtSrc
  { // RtSrc
    xml_element RtSrc_2{"RtSrc"};
    multiset<string> RtSrc_2_set;
    RtSrc_2.add_attribute("RtSrc", "1"); // 1
    RtSrc_2_set.insert("1");
    RtSrc_2.add_attribute("RtSrcTyp", "0"); // 1
    RtSrc_2_set.insert("0");
    RtSrc_2.add_attribute("RefPg", "ReferencePage_t_1921731632"); // 1
    RtSrc_2_set.insert("ReferencePage_t_1921731632");
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
