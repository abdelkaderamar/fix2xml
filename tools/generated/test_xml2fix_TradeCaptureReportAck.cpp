#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/TradeCaptureReportAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradeCaptureReportAck_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdCaptRptAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReportAck_message_t_0;
  elt.add_attribute("RptID", "TradeReportID_t_1038261470"); // 0
  TradeCaptureReportAck_message_t_0.insert("TradeReportID_t_1038261470");
  elt.add_attribute("TrdID", "TradeID_t_368413779"); // 0
  TradeCaptureReportAck_message_t_0.insert("TradeID_t_368413779");
  elt.add_attribute("TrdID2", "SecondaryTradeID_t_1901402421"); // 0
  TradeCaptureReportAck_message_t_0.insert("SecondaryTradeID_t_1901402421");
  elt.add_attribute("FirmTrdID", "FirmTradeID_t_853696227"); // 0
  TradeCaptureReportAck_message_t_0.insert("FirmTradeID_t_853696227");
  elt.add_attribute("FirmTrdID2", "SecondaryFirmTradeID_t_2086225644"); // 0
  TradeCaptureReportAck_message_t_0.insert("SecondaryFirmTradeID_t_2086225644");
  elt.add_attribute("TransTyp", "2"); // 0
  TradeCaptureReportAck_message_t_0.insert("2");
  elt.add_attribute("RptTyp", "1"); // 0
  TradeCaptureReportAck_message_t_0.insert("1");
  elt.add_attribute("TrdTyp", "33"); // 0
  TradeCaptureReportAck_message_t_0.insert("33");
  elt.add_attribute("TrdSubTyp", "4"); // 0
  TradeCaptureReportAck_message_t_0.insert("4");
  elt.add_attribute("TrdTyp2", "28"); // 0
  TradeCaptureReportAck_message_t_0.insert("28");
  elt.add_attribute("TrdHandlInst", "4"); // 0
  TradeCaptureReportAck_message_t_0.insert("4");
  elt.add_attribute("OrigTrdHandlInst", "1"); // 0
  TradeCaptureReportAck_message_t_0.insert("1");
  elt.add_attribute("OrigTrdDt", "OrigTradeDate_t_1848858754"); // 0
  TradeCaptureReportAck_message_t_0.insert("OrigTradeDate_t_1848858754");
  elt.add_attribute("OrigTrdID", "OrigTradeID_t_1413256705"); // 0
  TradeCaptureReportAck_message_t_0.insert("OrigTradeID_t_1413256705");
  elt.add_attribute("OrignTrdID2", "OrigSecondaryTradeID_t_148073248"); // 0
  TradeCaptureReportAck_message_t_0.insert("OrigSecondaryTradeID_t_148073248");
  elt.add_attribute("TrnsfrRsn", "TransferReason_t_1247566155"); // 0
  TradeCaptureReportAck_message_t_0.insert("TransferReason_t_1247566155");
  elt.add_attribute("ExecTyp", "E"); // 0
  TradeCaptureReportAck_message_t_0.insert("E");
  elt.add_attribute("RptRefID", "TradeReportRefID_t_1379802818"); // 0
  TradeCaptureReportAck_message_t_0.insert("TradeReportRefID_t_1379802818");
  elt.add_attribute("RptRefID2", "SecondaryTradeReportRefID_t_872232998"); // 0
  TradeCaptureReportAck_message_t_0.insert("SecondaryTradeReportRefID_t_872232998");
  elt.add_attribute("TrdRptStat", "1"); // 0
  TradeCaptureReportAck_message_t_0.insert("1");
  elt.add_attribute("RejRsn", "99"); // 0
  TradeCaptureReportAck_message_t_0.insert("99");
  elt.add_attribute("RptID2", "SecondaryTradeReportID_t_1547139780"); // 0
  TradeCaptureReportAck_message_t_0.insert("SecondaryTradeReportID_t_1547139780");
  elt.add_attribute("SubReqTyp", "1"); // 0
  TradeCaptureReportAck_message_t_0.insert("1");
  elt.add_attribute("LinkID", "TradeLinkID_t_991823799"); // 0
  TradeCaptureReportAck_message_t_0.insert("TradeLinkID_t_991823799");
  elt.add_attribute("MtchID", "TrdMatchID_t_754157178"); // 0
  TradeCaptureReportAck_message_t_0.insert("TrdMatchID_t_754157178");
  elt.add_attribute("ExecID", "ExecID_t_1348442822"); // 0
  TradeCaptureReportAck_message_t_0.insert("ExecID_t_1348442822");
  elt.add_attribute("ExecID2", "SecondaryExecID_t_1535802734"); // 0
  TradeCaptureReportAck_message_t_0.insert("SecondaryExecID_t_1535802734");
  elt.add_attribute("ExecRstmtRsn", "2"); // 0
  TradeCaptureReportAck_message_t_0.insert("2");
  elt.add_attribute("PrevlyRpted", "Y"); // 0
  TradeCaptureReportAck_message_t_0.insert("Y");
  elt.add_attribute("PxTyp", "6"); // 0
  TradeCaptureReportAck_message_t_0.insert("6");
  elt.add_attribute("UndSesID", "UnderlyingTradingSessionID_t_1837074063"); // 0
  TradeCaptureReportAck_message_t_0.insert("UnderlyingTradingSessionID_t_1837074063");
  elt.add_attribute("UndSesSub", "UnderlyingTradingSessionSubID_t_1350170465"); // 0
  TradeCaptureReportAck_message_t_0.insert("UnderlyingTradingSessionSubID_t_1350170465");
  elt.add_attribute("SetSesID", "RTH"); // 0
  TradeCaptureReportAck_message_t_0.insert("RTH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_1590992836"); // 0
  TradeCaptureReportAck_message_t_0.insert("SettlSessSubID_t_1590992836");
  elt.add_attribute("QtyTyp", "0"); // 0
  TradeCaptureReportAck_message_t_0.insert("0");
  elt.add_attribute("LastQty", "16159267.650000"); // 0
  TradeCaptureReportAck_message_t_0.insert("16159267.650000");
  elt.add_attribute("LastPx", "7587414.590000"); // 0
  TradeCaptureReportAck_message_t_0.insert("7587414.590000");
  elt.add_attribute("VenuTyp", "E"); // 0
  TradeCaptureReportAck_message_t_0.insert("E");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_327823044"); // 0
  TradeCaptureReportAck_message_t_0.insert("MarketSegmentID_t_327823044");
  elt.add_attribute("MktID", "MarketID_t_1349711269"); // 0
  TradeCaptureReportAck_message_t_0.insert("MarketID_t_1349711269");
  elt.add_attribute("LastParPx", "10536896.440000"); // 0
  TradeCaptureReportAck_message_t_0.insert("10536896.440000");
  elt.add_attribute("CalcCcyLastQty", "15743518.840000"); // 0
  TradeCaptureReportAck_message_t_0.insert("15743518.840000");
  elt.add_attribute("LastSwapPnts", "13766696.180000"); // 0
  TradeCaptureReportAck_message_t_0.insert("13766696.180000");
  elt.add_attribute("Ccy", "CHF"); // 0
  TradeCaptureReportAck_message_t_0.insert("CHF");
  elt.add_attribute("SettlCcy", "CHF"); // 0
  TradeCaptureReportAck_message_t_0.insert("CHF");
  elt.add_attribute("LastSpotRt", "2678340.650000"); // 0
  TradeCaptureReportAck_message_t_0.insert("2678340.650000");
  elt.add_attribute("LastFwdPnts", "7570620.360000"); // 0
  TradeCaptureReportAck_message_t_0.insert("7570620.360000");
  elt.add_attribute("LastMkt", "LastMkt_t_727380256"); // 0
  TradeCaptureReportAck_message_t_0.insert("LastMkt_t_727380256");
  elt.add_attribute("TrdDt", "TradeDate_t_1218752667"); // 0
  TradeCaptureReportAck_message_t_0.insert("TradeDate_t_1218752667");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_2086434797"); // 0
  TradeCaptureReportAck_message_t_0.insert("ClearingBusinessDate_t_2086434797");
  elt.add_attribute("AvgPx", "1270363.880000"); // 0
  TradeCaptureReportAck_message_t_0.insert("1270363.880000");
  elt.add_attribute("AvgPxInd", "1"); // 0
  TradeCaptureReportAck_message_t_0.insert("1");
  elt.add_attribute("MLegRptTyp", "2"); // 0
  TradeCaptureReportAck_message_t_0.insert("2");
  elt.add_attribute("TrdLegRefID", "TradeLegRefID_t_881193566"); // 0
  TradeCaptureReportAck_message_t_0.insert("TradeLegRefID_t_881193566");
  elt.add_attribute("TxnTm", "TransactTime_t_534100843"); // 0
  TradeCaptureReportAck_message_t_0.insert("TransactTime_t_534100843");
  elt.add_attribute("SettlTyp", "7"); // 0
  TradeCaptureReportAck_message_t_0.insert("7");
  elt.add_attribute("MtchStat", "2"); // 0
  TradeCaptureReportAck_message_t_0.insert("2");
  elt.add_attribute("MtchTyp", "7"); // 0
  TradeCaptureReportAck_message_t_0.insert("7");
  elt.add_attribute("CopyMsgInd", "false"); // 0
  TradeCaptureReportAck_message_t_0.insert("false");
  elt.add_attribute("PubTrdInd", "N"); // 0
  TradeCaptureReportAck_message_t_0.insert("N");
  elt.add_attribute("TrdPubInd", "1"); // 0
  TradeCaptureReportAck_message_t_0.insert("1");
  elt.add_attribute("ShrtSaleRsn", "0"); // 0
  TradeCaptureReportAck_message_t_0.insert("0");
  elt.add_attribute("RspTransportTyp", "1"); // 0
  TradeCaptureReportAck_message_t_0.insert("1");
  elt.add_attribute("RspDest", "ResponseDestination_t_105079699"); // 0
  TradeCaptureReportAck_message_t_0.insert("ResponseDestination_t_105079699");
  elt.add_attribute("Txt", "Text_t_626009263"); // 0
  TradeCaptureReportAck_message_t_0.insert("Text_t_626009263");
  elt.add_attribute("EncTxtLen", "2117509960"); // 0
  TradeCaptureReportAck_message_t_0.insert("2117509960");
  elt.add_attribute("EncTxt", "EncodedText_t_370937656"); // 0
  TradeCaptureReportAck_message_t_0.insert("EncodedText_t_370937656");
  elt.add_attribute("AsOfInd", "1"); // 0
  TradeCaptureReportAck_message_t_0.insert("1");
  elt.add_attribute("ClrFeeInd", "2"); // 0
  TradeCaptureReportAck_message_t_0.insert("2");
  elt.add_attribute("TierCD", "TierCode_t_1424627300"); // 0
  TradeCaptureReportAck_message_t_0.insert("TierCode_t_1424627300");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_380700543"); // 0
  TradeCaptureReportAck_message_t_0.insert("MessageEventSource_t_380700543");
  elt.add_attribute("LastUpdateTm", "LastUpdateTime_t_548923551"); // 0
  TradeCaptureReportAck_message_t_0.insert("LastUpdateTime_t_548923551");
  elt.add_attribute("RndPx", "322084.030000"); // 0
  TradeCaptureReportAck_message_t_0.insert("322084.030000");
  elt.add_attribute("RptSys", "RptSys_t_1220825484"); // 0
  TradeCaptureReportAck_message_t_0.insert("RptSys_t_1220825484");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_2073666417"); // 0
  TradeCaptureReportAck_message_t_0.insert("GrossTradeAmt_t_2073666417");
  elt.add_attribute("SettlDt", "SettlDate_t_2034839308"); // 0
  TradeCaptureReportAck_message_t_0.insert("SettlDate_t_2034839308");
  elt.add_attribute("FeeMult", "14886595.490000"); // 0
  TradeCaptureReportAck_message_t_0.insert("14886595.490000");
  all_values.push_back(TradeCaptureReportAck_message_t_0);
  all_compo_names.insert("TradeCaptureReportAck_message_t");

  { // Hdr
    xml_element Hdr_97{"Hdr"};
    multiset<string> Hdr_97_set;
    Hdr_97.add_attribute("SeqNum", "683244805"); // 1
    Hdr_97_set.insert("683244805");
    Hdr_97.add_attribute("SID", "SenderCompID_t_614735916"); // 1
    Hdr_97_set.insert("SenderCompID_t_614735916");
    Hdr_97.add_attribute("TID", "TargetCompID_t_559928568"); // 1
    Hdr_97_set.insert("TargetCompID_t_559928568");
    Hdr_97.add_attribute("OBID", "OnBehalfOfCompID_t_622195955"); // 1
    Hdr_97_set.insert("OnBehalfOfCompID_t_622195955");
    Hdr_97.add_attribute("D2ID", "DeliverToCompID_t_741772304"); // 1
    Hdr_97_set.insert("DeliverToCompID_t_741772304");
    Hdr_97.add_attribute("SSub", "SenderSubID_t_1893070237"); // 1
    Hdr_97_set.insert("SenderSubID_t_1893070237");
    Hdr_97.add_attribute("SLoc", "SenderLocationID_t_1552970904"); // 1
    Hdr_97_set.insert("SenderLocationID_t_1552970904");
    Hdr_97.add_attribute("TSub", "TargetSubID_t_1622965871"); // 1
    Hdr_97_set.insert("TargetSubID_t_1622965871");
    Hdr_97.add_attribute("TLoc", "TargetLocationID_t_279687432"); // 1
    Hdr_97_set.insert("TargetLocationID_t_279687432");
    Hdr_97.add_attribute("OBSub", "OnBehalfOfSubID_t_1872064939"); // 1
    Hdr_97_set.insert("OnBehalfOfSubID_t_1872064939");
    Hdr_97.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1701151120"); // 1
    Hdr_97_set.insert("OnBehalfOfLocationID_t_1701151120");
    Hdr_97.add_attribute("D2Sub", "DeliverToSubID_t_1125697270"); // 1
    Hdr_97_set.insert("DeliverToSubID_t_1125697270");
    Hdr_97.add_attribute("D2Loc", "DeliverToLocationID_t_1352446316"); // 1
    Hdr_97_set.insert("DeliverToLocationID_t_1352446316");
    Hdr_97.add_attribute("PosDup", "N"); // 1
    Hdr_97_set.insert("N");
    Hdr_97.add_attribute("PosRsnd", "Y"); // 1
    Hdr_97_set.insert("Y");
    Hdr_97.add_attribute("Snt", "SendingTime_t_362528814"); // 1
    Hdr_97_set.insert("SendingTime_t_362528814");
    Hdr_97.add_attribute("OrigSnt", "OrigSendingTime_t_680211637"); // 1
    Hdr_97_set.insert("OrigSendingTime_t_680211637");
    Hdr_97.add_attribute("MsgEncd", "MessageEncoding_t_1279473624"); // 1
    Hdr_97_set.insert("MessageEncoding_t_1279473624");
    all_values.push_back(Hdr_97_set);
    all_compo_names.insert("Hdr_97_set");

    {
      xml_element Hop_97{"Hop"};
      multiset<string> Hop_97_set;
      Hop_97.add_attribute("ID", "HopCompID_t_988538077"); // 2
      Hop_97_set.insert("HopCompID_t_988538077");
      Hop_97.add_attribute("Ref", "650237949"); // 2
      Hop_97_set.insert("650237949");
      Hop_97.add_attribute("Snt", "HopSendingTime_t_1650411280"); // 2
      Hop_97_set.insert("HopSendingTime_t_1650411280");
      all_values.push_back(Hop_97_set);
      all_compo_names.insert("Hop_97_set");

      Hdr_97.add_element(Hop_97);
    }
    elt.add_element(Hdr_97);
  } // end Hdr
  { // Pty
    xml_element Pty_454{"Pty"};
    multiset<string> Pty_454_set;
    Pty_454.add_attribute("ID", "RootPartyID_t_1969975530"); // 1
    Pty_454_set.insert("RootPartyID_t_1969975530");
    Pty_454.add_attribute("Src", "B"); // 1
    Pty_454_set.insert("B");
    Pty_454.add_attribute("R", "65"); // 1
    Pty_454_set.insert("65");
    all_values.push_back(Pty_454_set);
    all_compo_names.insert("Pty_454_set");

    {
      xml_element Sub_454{"Sub"};
      multiset<string> Sub_454_set;
      Sub_454.add_attribute("ID", "RootPartySubID_t_371415433"); // 2
      Sub_454_set.insert("RootPartySubID_t_371415433");
      Sub_454.add_attribute("Typ", "22"); // 2
      Sub_454_set.insert("22");
      all_values.push_back(Sub_454_set);
      all_compo_names.insert("Sub_454_set");

      Pty_454.add_element(Sub_454);
    }
    elt.add_element(Pty_454);
  } // end Pty
  { // Pty
    xml_element Pty_455{"Pty"};
    multiset<string> Pty_455_set;
    Pty_455.add_attribute("ID", "RootPartyID_t_1396412763"); // 1
    Pty_455_set.insert("RootPartyID_t_1396412763");
    Pty_455.add_attribute("Src", "9"); // 1
    Pty_455_set.insert("9");
    Pty_455.add_attribute("R", "82"); // 1
    Pty_455_set.insert("82");
    all_values.push_back(Pty_455_set);
    all_compo_names.insert("Pty_455_set");

    {
      xml_element Sub_455{"Sub"};
      multiset<string> Sub_455_set;
      Sub_455.add_attribute("ID", "RootPartySubID_t_737588664"); // 2
      Sub_455_set.insert("RootPartySubID_t_737588664");
      Sub_455.add_attribute("Typ", "21"); // 2
      Sub_455_set.insert("21");
      all_values.push_back(Sub_455_set);
      all_compo_names.insert("Sub_455_set");

      Pty_455.add_element(Sub_455);
    }
    elt.add_element(Pty_455);
  } // end Pty
  { // Pty
    xml_element Pty_456{"Pty"};
    multiset<string> Pty_456_set;
    Pty_456.add_attribute("ID", "RootPartyID_t_1461854912"); // 1
    Pty_456_set.insert("RootPartyID_t_1461854912");
    Pty_456.add_attribute("Src", "D"); // 1
    Pty_456_set.insert("D");
    Pty_456.add_attribute("R", "24"); // 1
    Pty_456_set.insert("24");
    all_values.push_back(Pty_456_set);
    all_compo_names.insert("Pty_456_set");

    {
      xml_element Sub_456{"Sub"};
      multiset<string> Sub_456_set;
      Sub_456.add_attribute("ID", "RootPartySubID_t_56143569"); // 2
      Sub_456_set.insert("RootPartySubID_t_56143569");
      Sub_456.add_attribute("Typ", "7"); // 2
      Sub_456_set.insert("7");
      all_values.push_back(Sub_456_set);
      all_compo_names.insert("Sub_456_set");

      Pty_456.add_element(Sub_456);
    }
    elt.add_element(Pty_456);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_92{"Instrmt"};
    multiset<string> Instrmt_92_set;
    Instrmt_92.add_attribute("Sym", "Symbol_t_1008526219"); // 1
    Instrmt_92_set.insert("Symbol_t_1008526219");
    Instrmt_92.add_attribute("Sfx", "CD"); // 1
    Instrmt_92_set.insert("CD");
    Instrmt_92.add_attribute("ID", "SecurityID_t_1322791253"); // 1
    Instrmt_92_set.insert("SecurityID_t_1322791253");
    Instrmt_92.add_attribute("Src", "F"); // 1
    Instrmt_92_set.insert("F");
    Instrmt_92.add_attribute("Prod", "12"); // 1
    Instrmt_92_set.insert("12");
    Instrmt_92.add_attribute("ProdCmplx", "ProductComplex_t_301004875"); // 1
    Instrmt_92_set.insert("ProductComplex_t_301004875");
    Instrmt_92.add_attribute("SecGrp", "SecurityGroup_t_2085553827"); // 1
    Instrmt_92_set.insert("SecurityGroup_t_2085553827");
    Instrmt_92.add_attribute("CFI", "CFICode_t_554220048"); // 1
    Instrmt_92_set.insert("CFICode_t_554220048");
    Instrmt_92.add_attribute("SecTyp", "TD"); // 1
    Instrmt_92_set.insert("TD");
    Instrmt_92.add_attribute("SubTyp", "SecuritySubType_t_300598993"); // 1
    Instrmt_92_set.insert("SecuritySubType_t_300598993");
    Instrmt_92.add_attribute("MMY", "1234431686"); // 1
    Instrmt_92_set.insert("1234431686");
    Instrmt_92.add_attribute("MatDt", "MaturityDate_t_607388776"); // 1
    Instrmt_92_set.insert("MaturityDate_t_607388776");
    Instrmt_92.add_attribute("MatTm", "1289137071"); // 1
    Instrmt_92_set.insert("1289137071");
    Instrmt_92.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1884669635"); // 1
    Instrmt_92_set.insert("SettleOnOpenFlag_t_1884669635");
    Instrmt_92.add_attribute("AsgnMeth", "110316408"); // 1
    Instrmt_92_set.insert("110316408");
    Instrmt_92.add_attribute("Status", "2"); // 1
    Instrmt_92_set.insert("2");
    Instrmt_92.add_attribute("CpnPmt", "CouponPaymentDate_t_1707161518"); // 1
    Instrmt_92_set.insert("CouponPaymentDate_t_1707161518");
    Instrmt_92.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_92_set.insert("MR");
    Instrmt_92.add_attribute("Snrty", "SR"); // 1
    Instrmt_92_set.insert("SR");
    Instrmt_92.add_attribute("NotlPctOut", "20785769.510000"); // 1
    Instrmt_92_set.insert("20785769.510000");
    Instrmt_92.add_attribute("OrigNotlPctOut", "19976346.760000"); // 1
    Instrmt_92_set.insert("19976346.760000");
    Instrmt_92.add_attribute("AttchPnt", "5085402.020000"); // 1
    Instrmt_92_set.insert("5085402.020000");
    Instrmt_92.add_attribute("DetchPnt", "2286915.060000"); // 1
    Instrmt_92_set.insert("2286915.060000");
    Instrmt_92.add_attribute("Issued", "IssueDate_t_697270024"); // 1
    Instrmt_92_set.insert("IssueDate_t_697270024");
    Instrmt_92.add_attribute("RepoCollSecTyp", "1246128867"); // 1
    Instrmt_92_set.insert("1246128867");
    Instrmt_92.add_attribute("RepoTrm", "1209534514"); // 1
    Instrmt_92_set.insert("1209534514");
    Instrmt_92.add_attribute("RepoRt", "116412.890000"); // 1
    Instrmt_92_set.insert("116412.890000");
    Instrmt_92.add_attribute("Fctr", "3961624.510000"); // 1
    Instrmt_92_set.insert("3961624.510000");
    Instrmt_92.add_attribute("CrdRtg", "CreditRating_t_665089829"); // 1
    Instrmt_92_set.insert("CreditRating_t_665089829");
    Instrmt_92.add_attribute("Rgstry", "InstrRegistry_t_67784858"); // 1
    Instrmt_92_set.insert("InstrRegistry_t_67784858");
    Instrmt_92.add_attribute("IssuCtry", "1439266273"); // 1
    Instrmt_92_set.insert("1439266273");
    Instrmt_92.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1673616048"); // 1
    Instrmt_92_set.insert("StateOrProvinceOfIssue_t_1673616048");
    Instrmt_92.add_attribute("Lcl", "LocaleOfIssue_t_1746894298"); // 1
    Instrmt_92_set.insert("LocaleOfIssue_t_1746894298");
    Instrmt_92.add_attribute("Redeem", "RedemptionDate_t_614573878"); // 1
    Instrmt_92_set.insert("RedemptionDate_t_614573878");
    Instrmt_92.add_attribute("StrkPx", "2592399.100000"); // 1
    Instrmt_92_set.insert("2592399.100000");
    Instrmt_92.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_92_set.insert("USD");
    Instrmt_92.add_attribute("StrkMult", "1973100.890000"); // 1
    Instrmt_92_set.insert("1973100.890000");
    Instrmt_92.add_attribute("StrkValu", "13864076.100000"); // 1
    Instrmt_92_set.insert("13864076.100000");
    Instrmt_92.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_92_set.insert("3");
    Instrmt_92.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_92_set.insert("4");
    Instrmt_92.add_attribute("StrkPxBndryPrcsn", "4733556.480000"); // 1
    Instrmt_92_set.insert("4733556.480000");
    Instrmt_92.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_92_set.insert("4");
    Instrmt_92.add_attribute("OptAt", "1787046154"); // 1
    Instrmt_92_set.insert("1787046154");
    Instrmt_92.add_attribute("Mult", "2105416.360000"); // 1
    Instrmt_92_set.insert("2105416.360000");
    Instrmt_92.add_attribute("MultTyp", "0"); // 1
    Instrmt_92_set.insert("0");
    Instrmt_92.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_92_set.insert("3");
    Instrmt_92.add_attribute("MinPxIncr", "19177031.540000"); // 1
    Instrmt_92_set.insert("19177031.540000");
    Instrmt_92.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1999070432"); // 1
    Instrmt_92_set.insert("MinPriceIncrementAmount_t_1999070432");
    Instrmt_92.add_attribute("UOM", "Bbl"); // 1
    Instrmt_92_set.insert("Bbl");
    Instrmt_92.add_attribute("UOMQty", "18487964.570000"); // 1
    Instrmt_92_set.insert("18487964.570000");
    Instrmt_92.add_attribute("PxUOM", "USD"); // 1
    Instrmt_92_set.insert("USD");
    Instrmt_92.add_attribute("PxUOMQty", "3442539.550000"); // 1
    Instrmt_92_set.insert("3442539.550000");
    Instrmt_92.add_attribute("SettlMeth", "P"); // 1
    Instrmt_92_set.insert("P");
    Instrmt_92.add_attribute("ExerStyle", "1"); // 1
    Instrmt_92_set.insert("1");
    Instrmt_92.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_92_set.insert("2");
    Instrmt_92.add_attribute("OptPayAmt", "OptPayoutAmount_t_1139538829"); // 1
    Instrmt_92_set.insert("OptPayoutAmount_t_1139538829");
    Instrmt_92.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_92_set.insert("INT");
    Instrmt_92.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_92_set.insert("CDS");
    Instrmt_92.add_attribute("ListMeth", "0"); // 1
    Instrmt_92_set.insert("0");
    Instrmt_92.add_attribute("CapPx", "4784339.840000"); // 1
    Instrmt_92_set.insert("4784339.840000");
    Instrmt_92.add_attribute("FlrPx", "12783278.980000"); // 1
    Instrmt_92_set.insert("12783278.980000");
    Instrmt_92.add_attribute("PutCall", "0"); // 1
    Instrmt_92_set.insert("0");
    Instrmt_92.add_attribute("FlexInd", "true"); // 1
    Instrmt_92_set.insert("true");
    Instrmt_92.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_92_set.insert("false");
    Instrmt_92.add_attribute("TmUnit", "Wk"); // 1
    Instrmt_92_set.insert("Wk");
    Instrmt_92.add_attribute("CpnRt", "9100321.960000"); // 1
    Instrmt_92_set.insert("9100321.960000");
    Instrmt_92.add_attribute("Exch", "SecurityExchange_t_660996883"); // 1
    Instrmt_92_set.insert("SecurityExchange_t_660996883");
    Instrmt_92.add_attribute("PosLmt", "1787311058"); // 1
    Instrmt_92_set.insert("1787311058");
    Instrmt_92.add_attribute("NTPosLmt", "148956159"); // 1
    Instrmt_92_set.insert("148956159");
    Instrmt_92.add_attribute("Issr", "Issuer_t_904490789"); // 1
    Instrmt_92_set.insert("Issuer_t_904490789");
    Instrmt_92.add_attribute("EncIssrLen", "137736493"); // 1
    Instrmt_92_set.insert("137736493");
    Instrmt_92.add_attribute("EncIssr", "EncodedIssuer_t_622311807"); // 1
    Instrmt_92_set.insert("EncodedIssuer_t_622311807");
    Instrmt_92.add_attribute("Desc", "SecurityDesc_t_1755373472"); // 1
    Instrmt_92_set.insert("SecurityDesc_t_1755373472");
    Instrmt_92.add_attribute("EncSecDescLen", "1924782647"); // 1
    Instrmt_92_set.insert("1924782647");
    Instrmt_92.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_832853443"); // 1
    Instrmt_92_set.insert("EncodedSecurityDesc_t_832853443");
    Instrmt_92.add_attribute("Pool", "Pool_t_569088916"); // 1
    Instrmt_92_set.insert("Pool_t_569088916");
    Instrmt_92.add_attribute("CSetMo", "500885313"); // 1
    Instrmt_92_set.insert("500885313");
    Instrmt_92.add_attribute("CPPgm", "2"); // 1
    Instrmt_92_set.insert("2");
    Instrmt_92.add_attribute("CPRegT", "CPRegType_t_420675700"); // 1
    Instrmt_92_set.insert("CPRegType_t_420675700");
    Instrmt_92.add_attribute("Dated", "DatedDate_t_336599065"); // 1
    Instrmt_92_set.insert("DatedDate_t_336599065");
    Instrmt_92.add_attribute("IntAcrl", "InterestAccrualDate_t_304385759"); // 1
    Instrmt_92_set.insert("InterestAccrualDate_t_304385759");
    all_values.push_back(Instrmt_92_set);
    all_compo_names.insert("Instrmt_92_set");

    {
      xml_element AID_95{"AID"};
      multiset<string> AID_95_set;
      AID_95.add_attribute("AltID", "SecurityAltID_t_122413513"); // 2
      AID_95_set.insert("SecurityAltID_t_122413513");
      AID_95.add_attribute("AltIDSrc", "D"); // 2
      AID_95_set.insert("D");
      all_values.push_back(AID_95_set);
      all_compo_names.insert("AID_95_set");

      Instrmt_92.add_element(AID_95);
    }
    {
      xml_element SecXML_92{"SecXML"};
      multiset<string> SecXML_92_set;
      SecXML_92.add_attribute("Schema", "SecurityXMLSchema_t_234390074"); // 2
      SecXML_92_set.insert("SecurityXMLSchema_t_234390074");
      all_values.push_back(SecXML_92_set);
      all_compo_names.insert("SecXML_92_set");

      Instrmt_92.add_element(SecXML_92);
    }
    {
      xml_element Evnt_92{"Evnt"};
      multiset<string> Evnt_92_set;
      Evnt_92.add_attribute("EventTyp", "10"); // 2
      Evnt_92_set.insert("10");
      Evnt_92.add_attribute("Dt", "EventDate_t_123752194"); // 2
      Evnt_92_set.insert("EventDate_t_123752194");
      Evnt_92.add_attribute("Tm", "EventTime_t_1373928904"); // 2
      Evnt_92_set.insert("EventTime_t_1373928904");
      Evnt_92.add_attribute("Px", "9320704.770000"); // 2
      Evnt_92_set.insert("9320704.770000");
      Evnt_92.add_attribute("Txt", "EventText_t_2110297468"); // 2
      Evnt_92_set.insert("EventText_t_2110297468");
      all_values.push_back(Evnt_92_set);
      all_compo_names.insert("Evnt_92_set");

      Instrmt_92.add_element(Evnt_92);
    }
    {
      xml_element Pty_457{"Pty"};
      multiset<string> Pty_457_set;
      Pty_457.add_attribute("ID", "InstrumentPartyID_t_1031073914"); // 2
      Pty_457_set.insert("InstrumentPartyID_t_1031073914");
      Pty_457.add_attribute("Src", "1"); // 2
      Pty_457_set.insert("1");
      Pty_457.add_attribute("R", "57"); // 2
      Pty_457_set.insert("57");
      all_values.push_back(Pty_457_set);
      all_compo_names.insert("Pty_457_set");

      {
        xml_element Sub_457{"Sub"};
        multiset<string> Sub_457_set;
        Sub_457.add_attribute("ID", "InstrumentPartySubID_t_214351325"); // 3
        Sub_457_set.insert("InstrumentPartySubID_t_214351325");
        Sub_457.add_attribute("Typ", "9"); // 3
        Sub_457_set.insert("9");
        all_values.push_back(Sub_457_set);
        all_compo_names.insert("Sub_457_set");

        Pty_457.add_element(Sub_457);
      }
      Instrmt_92.add_element(Pty_457);
    }
    {
      xml_element CmplxEvnt_89{"CmplxEvnt"};
      multiset<string> CmplxEvnt_89_set;
      CmplxEvnt_89.add_attribute("Typ", "8"); // 2
      CmplxEvnt_89_set.insert("8");
      CmplxEvnt_89.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1804352294"); // 2
      CmplxEvnt_89_set.insert("ComplexOptPayoutAmount_t_1804352294");
      CmplxEvnt_89.add_attribute("Px", "2508976.450000"); // 2
      CmplxEvnt_89_set.insert("2508976.450000");
      CmplxEvnt_89.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_89_set.insert("1");
      CmplxEvnt_89.add_attribute("PxBndryPrcsn", "14441797.040000"); // 2
      CmplxEvnt_89_set.insert("14441797.040000");
      CmplxEvnt_89.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_89_set.insert("2");
      CmplxEvnt_89.add_attribute("Cond", "1"); // 2
      CmplxEvnt_89_set.insert("1");
      all_values.push_back(CmplxEvnt_89_set);
      all_compo_names.insert("CmplxEvnt_89_set");

      {
        xml_element EvntDts_89{"EvntDts"};
        multiset<string> EvntDts_89_set;
        EvntDts_89.add_attribute("StartDt", "ComplexEventStartDate_t_1581916198"); // 3
        EvntDts_89_set.insert("ComplexEventStartDate_t_1581916198");
        EvntDts_89.add_attribute("EndDt", "ComplexEventEndDate_t_1022165611"); // 3
        EvntDts_89_set.insert("ComplexEventEndDate_t_1022165611");
        all_values.push_back(EvntDts_89_set);
        all_compo_names.insert("EvntDts_89_set");

        {
          xml_element EvntTms_89{"EvntTms"};
          multiset<string> EvntTms_89_set;
          EvntTms_89.add_attribute("StartTm", "12453696"); // 4
          EvntTms_89_set.insert("12453696");
          EvntTms_89.add_attribute("EndTm", "1359215197"); // 4
          EvntTms_89_set.insert("1359215197");
          all_values.push_back(EvntTms_89_set);
          all_compo_names.insert("EvntTms_89_set");

          EvntDts_89.add_element(EvntTms_89);
        }
        CmplxEvnt_89.add_element(EvntDts_89);
      }
      Instrmt_92.add_element(CmplxEvnt_89);
    }
    elt.add_element(Instrmt_92);
  } // end Instrmt
  { // Undly
    xml_element Undly_120{"Undly"};
    multiset<string> Undly_120_set;
    Undly_120.add_attribute("Sym", "UnderlyingSymbol_t_581542612"); // 1
    Undly_120_set.insert("UnderlyingSymbol_t_581542612");
    Undly_120.add_attribute("Sfx", "CD"); // 1
    Undly_120_set.insert("CD");
    Undly_120.add_attribute("ID", "UnderlyingSecurityID_t_310608356"); // 1
    Undly_120_set.insert("UnderlyingSecurityID_t_310608356");
    Undly_120.add_attribute("Src", "L"); // 1
    Undly_120_set.insert("L");
    Undly_120.add_attribute("Prod", "5"); // 1
    Undly_120_set.insert("5");
    Undly_120.add_attribute("CFI", "UnderlyingCFICode_t_614994115"); // 1
    Undly_120_set.insert("UnderlyingCFICode_t_614994115");
    Undly_120.add_attribute("SecTyp", "DN"); // 1
    Undly_120_set.insert("DN");
    Undly_120.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_730068948"); // 1
    Undly_120_set.insert("UnderlyingSecuritySubType_t_730068948");
    Undly_120.add_attribute("MMY", "849384190"); // 1
    Undly_120_set.insert("849384190");
    Undly_120.add_attribute("Mat", "UnderlyingMaturityDate_t_1646053177"); // 1
    Undly_120_set.insert("UnderlyingMaturityDate_t_1646053177");
    Undly_120.add_attribute("MatTm", "853821143"); // 1
    Undly_120_set.insert("853821143");
    Undly_120.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_75829446"); // 1
    Undly_120_set.insert("UnderlyingCouponPaymentDate_t_75829446");
    Undly_120.add_attribute("RestrctTyp", "XR"); // 1
    Undly_120_set.insert("XR");
    Undly_120.add_attribute("Snrty", "SR"); // 1
    Undly_120_set.insert("SR");
    Undly_120.add_attribute("NotlPctOut", "11069033.600000"); // 1
    Undly_120_set.insert("11069033.600000");
    Undly_120.add_attribute("OrigNotlPctOut", "18411444.690000"); // 1
    Undly_120_set.insert("18411444.690000");
    Undly_120.add_attribute("AttchPnt", "20577766.810000"); // 1
    Undly_120_set.insert("20577766.810000");
    Undly_120.add_attribute("DetchPnt", "13212546.850000"); // 1
    Undly_120_set.insert("13212546.850000");
    Undly_120.add_attribute("Issued", "UnderlyingIssueDate_t_1182009917"); // 1
    Undly_120_set.insert("UnderlyingIssueDate_t_1182009917");
    Undly_120.add_attribute("RepoCollSecTyp", "896852881"); // 1
    Undly_120_set.insert("896852881");
    Undly_120.add_attribute("RepoTrm", "978123331"); // 1
    Undly_120_set.insert("978123331");
    Undly_120.add_attribute("RepoRt", "14329075.620000"); // 1
    Undly_120_set.insert("14329075.620000");
    Undly_120.add_attribute("Fctr", "3969259.630000"); // 1
    Undly_120_set.insert("3969259.630000");
    Undly_120.add_attribute("CrdRtg", "UnderlyingCreditRating_t_274819388"); // 1
    Undly_120_set.insert("UnderlyingCreditRating_t_274819388");
    Undly_120.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1832761366"); // 1
    Undly_120_set.insert("UnderlyingInstrRegistry_t_1832761366");
    Undly_120.add_attribute("Ctry", "801489835"); // 1
    Undly_120_set.insert("801489835");
    Undly_120.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1856735586"); // 1
    Undly_120_set.insert("UnderlyingStateOrProvinceOfIssue_t_1856735586");
    Undly_120.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_707443330"); // 1
    Undly_120_set.insert("UnderlyingLocaleOfIssue_t_707443330");
    Undly_120.add_attribute("Redeem", "UnderlyingRedemptionDate_t_813943532"); // 1
    Undly_120_set.insert("UnderlyingRedemptionDate_t_813943532");
    Undly_120.add_attribute("StrkPx", "10684671.350000"); // 1
    Undly_120_set.insert("10684671.350000");
    Undly_120.add_attribute("StrkCcy", "USD"); // 1
    Undly_120_set.insert("USD");
    Undly_120.add_attribute("OptA", "781083998"); // 1
    Undly_120_set.insert("781083998");
    Undly_120.add_attribute("Mult", "7255870.930000"); // 1
    Undly_120_set.insert("7255870.930000");
    Undly_120.add_attribute("MultTyp", "1"); // 1
    Undly_120_set.insert("1");
    Undly_120.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_120_set.insert("1");
    Undly_120.add_attribute("UOM", "MMbbl"); // 1
    Undly_120_set.insert("MMbbl");
    Undly_120.add_attribute("UOMQty", "13748526.360000"); // 1
    Undly_120_set.insert("13748526.360000");
    Undly_120.add_attribute("PxUOM", "Alw"); // 1
    Undly_120_set.insert("Alw");
    Undly_120.add_attribute("PxUOMQty", "424817.510000"); // 1
    Undly_120_set.insert("424817.510000");
    Undly_120.add_attribute("TmUnit", "S"); // 1
    Undly_120_set.insert("S");
    Undly_120.add_attribute("ExerStyle", "0"); // 1
    Undly_120_set.insert("0");
    Undly_120.add_attribute("CpnRt", "1183111.970000"); // 1
    Undly_120_set.insert("1183111.970000");
    Undly_120.add_attribute("Exch", "UnderlyingSecurityExchange_t_1304062172"); // 1
    Undly_120_set.insert("UnderlyingSecurityExchange_t_1304062172");
    Undly_120.add_attribute("Issr", "UnderlyingIssuer_t_1083341332"); // 1
    Undly_120_set.insert("UnderlyingIssuer_t_1083341332");
    Undly_120.add_attribute("EncUndIssrLen", "1225214557"); // 1
    Undly_120_set.insert("1225214557");
    Undly_120.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_997722993"); // 1
    Undly_120_set.insert("EncodedUnderlyingIssuer_t_997722993");
    Undly_120.add_attribute("Desc", "UnderlyingSecurityDesc_t_993634366"); // 1
    Undly_120_set.insert("UnderlyingSecurityDesc_t_993634366");
    Undly_120.add_attribute("EncUndSecDescLen", "398985595"); // 1
    Undly_120_set.insert("398985595");
    Undly_120.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_32249263"); // 1
    Undly_120_set.insert("EncodedUnderlyingSecurityDesc_t_32249263");
    Undly_120.add_attribute("CPPgm", "UnderlyingCPProgram_t_1890487247"); // 1
    Undly_120_set.insert("UnderlyingCPProgram_t_1890487247");
    Undly_120.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1377108926"); // 1
    Undly_120_set.insert("UnderlyingCPRegType_t_1377108926");
    Undly_120.add_attribute("AllocPct", "14651568.250000"); // 1
    Undly_120_set.insert("14651568.250000");
    Undly_120.add_attribute("Ccy", "JPY"); // 1
    Undly_120_set.insert("JPY");
    Undly_120.add_attribute("Qty", "11504345.440000"); // 1
    Undly_120_set.insert("11504345.440000");
    Undly_120.add_attribute("SettlTyp", "2"); // 1
    Undly_120_set.insert("2");
    Undly_120.add_attribute("CashAmt", "UnderlyingCashAmount_t_1361180252"); // 1
    Undly_120_set.insert("UnderlyingCashAmount_t_1361180252");
    Undly_120.add_attribute("CashTyp", "FIXED"); // 1
    Undly_120_set.insert("FIXED");
    Undly_120.add_attribute("Px", "17553629.300000"); // 1
    Undly_120_set.insert("17553629.300000");
    Undly_120.add_attribute("DirtPx", "2821637.400000"); // 1
    Undly_120_set.insert("2821637.400000");
    Undly_120.add_attribute("EndPx", "1253729.630000"); // 1
    Undly_120_set.insert("1253729.630000");
    Undly_120.add_attribute("StartVal", "UnderlyingStartValue_t_1003365426"); // 1
    Undly_120_set.insert("UnderlyingStartValue_t_1003365426");
    Undly_120.add_attribute("CurVal", "UnderlyingCurrentValue_t_1063247738"); // 1
    Undly_120_set.insert("UnderlyingCurrentValue_t_1063247738");
    Undly_120.add_attribute("EndVal", "UnderlyingEndValue_t_850960056"); // 1
    Undly_120_set.insert("UnderlyingEndValue_t_850960056");
    Undly_120.add_attribute("AdjQty", "12535862.360000"); // 1
    Undly_120_set.insert("12535862.360000");
    Undly_120.add_attribute("FxRate", "18935476.640000"); // 1
    Undly_120_set.insert("18935476.640000");
    Undly_120.add_attribute("FxRateCalc", "D"); // 1
    Undly_120_set.insert("D");
    Undly_120.add_attribute("CapValu", "UnderlyingCapValue_t_480955224"); // 1
    Undly_120_set.insert("UnderlyingCapValue_t_480955224");
    Undly_120.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1306432890"); // 1
    Undly_120_set.insert("UnderlyingSettlMethod_t_1306432890");
    Undly_120.add_attribute("PutCall", "86539368"); // 1
    Undly_120_set.insert("86539368");
    all_values.push_back(Undly_120_set);
    all_compo_names.insert("Undly_120_set");

    {
      xml_element UndAID_120{"UndAID"};
      multiset<string> UndAID_120_set;
      UndAID_120.add_attribute("AltID", "UnderlyingSecurityAltID_t_1354377389"); // 2
      UndAID_120_set.insert("UnderlyingSecurityAltID_t_1354377389");
      UndAID_120.add_attribute("AltIDSrc", "1"); // 2
      UndAID_120_set.insert("1");
      all_values.push_back(UndAID_120_set);
      all_compo_names.insert("UndAID_120_set");

      Undly_120.add_element(UndAID_120);
    }
    {
      xml_element Stip_191{"Stip"};
      multiset<string> Stip_191_set;
      Stip_191.add_attribute("Typ", "COUPON"); // 2
      Stip_191_set.insert("COUPON");
      Stip_191.add_attribute("Val", "UnderlyingStipValue_t_510955914"); // 2
      Stip_191_set.insert("UnderlyingStipValue_t_510955914");
      all_values.push_back(Stip_191_set);
      all_compo_names.insert("Stip_191_set");

      Undly_120.add_element(Stip_191);
    }
    {
      xml_element Pty_458{"Pty"};
      multiset<string> Pty_458_set;
      Pty_458.add_attribute("ID", "UnderlyingInstrumentPartyID_t_508996944"); // 2
      Pty_458_set.insert("UnderlyingInstrumentPartyID_t_508996944");
      Pty_458.add_attribute("Src", "8"); // 2
      Pty_458_set.insert("8");
      Pty_458.add_attribute("R", "24"); // 2
      Pty_458_set.insert("24");
      all_values.push_back(Pty_458_set);
      all_compo_names.insert("Pty_458_set");

      {
        xml_element Sub_458{"Sub"};
        multiset<string> Sub_458_set;
        Sub_458.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1502631310"); // 3
        Sub_458_set.insert("UnderlyingInstrumentPartySubID_t_1502631310");
        Sub_458.add_attribute("Typ", "2"); // 3
        Sub_458_set.insert("2");
        all_values.push_back(Sub_458_set);
        all_compo_names.insert("Sub_458_set");

        Pty_458.add_element(Sub_458);
      }
      Undly_120.add_element(Pty_458);
    }
    elt.add_element(Undly_120);
  } // end Undly
  { // TrdRepIndicatorsGrp
    xml_element TrdRepIndicatorsGrp_1{"TrdRepIndicatorsGrp"};
    multiset<string> TrdRepIndicatorsGrp_1_set;
    TrdRepIndicatorsGrp_1.add_attribute("PtyRole", "10"); // 1
    TrdRepIndicatorsGrp_1_set.insert("10");
    TrdRepIndicatorsGrp_1.add_attribute("TrdRepInd", "true"); // 1
    TrdRepIndicatorsGrp_1_set.insert("true");
    all_values.push_back(TrdRepIndicatorsGrp_1_set);
    all_compo_names.insert("TrdRepIndicatorsGrp_1_set");

    elt.add_element(TrdRepIndicatorsGrp_1);
  } // end TrdRepIndicatorsGrp
  { // TrdRepIndicatorsGrp
    xml_element TrdRepIndicatorsGrp_2{"TrdRepIndicatorsGrp"};
    multiset<string> TrdRepIndicatorsGrp_2_set;
    TrdRepIndicatorsGrp_2.add_attribute("PtyRole", "55"); // 1
    TrdRepIndicatorsGrp_2_set.insert("55");
    TrdRepIndicatorsGrp_2.add_attribute("TrdRepInd", "true"); // 1
    TrdRepIndicatorsGrp_2_set.insert("true");
    all_values.push_back(TrdRepIndicatorsGrp_2_set);
    all_compo_names.insert("TrdRepIndicatorsGrp_2_set");

    elt.add_element(TrdRepIndicatorsGrp_2);
  } // end TrdRepIndicatorsGrp
  { // TrdLeg
    xml_element TrdLeg_3{"TrdLeg"};
    multiset<string> TrdLeg_3_set;
    TrdLeg_3.add_attribute("Qty", "20090358.920000"); // 1
    TrdLeg_3_set.insert("20090358.920000");
    TrdLeg_3.add_attribute("SwapTyp", "4"); // 1
    TrdLeg_3_set.insert("4");
    TrdLeg_3.add_attribute("RptID", "LegReportID_t_1924300915"); // 1
    TrdLeg_3_set.insert("LegReportID_t_1924300915");
    TrdLeg_3.add_attribute("LegNo", "1719430118"); // 1
    TrdLeg_3_set.insert("1719430118");
    TrdLeg_3.add_attribute("PosEfct", "C"); // 1
    TrdLeg_3_set.insert("C");
    TrdLeg_3.add_attribute("Cover", "1"); // 1
    TrdLeg_3_set.insert("1");
    TrdLeg_3.add_attribute("RefID", "LegRefID_t_1844803081"); // 1
    TrdLeg_3_set.insert("LegRefID_t_1844803081");
    TrdLeg_3.add_attribute("SettlTyp", "C"); // 1
    TrdLeg_3_set.insert("C");
    TrdLeg_3.add_attribute("SettlDt", "LegSettlDate_t_1122228745"); // 1
    TrdLeg_3_set.insert("LegSettlDate_t_1122228745");
    TrdLeg_3.add_attribute("LastPx", "5482794.890000"); // 1
    TrdLeg_3_set.insert("5482794.890000");
    TrdLeg_3.add_attribute("SettlCcy", "EUR"); // 1
    TrdLeg_3_set.insert("EUR");
    TrdLeg_3.add_attribute("LegLastFwdPnts", "5923371.070000"); // 1
    TrdLeg_3_set.insert("5923371.070000");
    TrdLeg_3.add_attribute("LegCalcCcyLastQty", "3778027.420000"); // 1
    TrdLeg_3_set.insert("3778027.420000");
    TrdLeg_3.add_attribute("LegGrossTrdAmt", "LegGrossTradeAmt_t_27242004"); // 1
    TrdLeg_3_set.insert("LegGrossTradeAmt_t_27242004");
    TrdLeg_3.add_attribute("LegVolatility", "6788764.750000"); // 1
    TrdLeg_3_set.insert("6788764.750000");
    TrdLeg_3.add_attribute("LegDividendYield", "17321801.320000"); // 1
    TrdLeg_3_set.insert("17321801.320000");
    TrdLeg_3.add_attribute("LegCurrencyRatio", "16003812.640000"); // 1
    TrdLeg_3_set.insert("16003812.640000");
    TrdLeg_3.add_attribute("LegExecInst", "1"); // 1
    TrdLeg_3_set.insert("1");
    TrdLeg_3.add_attribute("LastQty", "956523.980000"); // 1
    TrdLeg_3_set.insert("956523.980000");
    all_values.push_back(TrdLeg_3_set);
    all_compo_names.insert("TrdLeg_3_set");

    {
      xml_element Leg_104{"Leg"};
      multiset<string> Leg_104_set;
      Leg_104.add_attribute("Sym", "LegSymbol_t_2109378208"); // 2
      Leg_104_set.insert("LegSymbol_t_2109378208");
      Leg_104.add_attribute("Sfx", "CD"); // 2
      Leg_104_set.insert("CD");
      Leg_104.add_attribute("ID", "LegSecurityID_t_1604331305"); // 2
      Leg_104_set.insert("LegSecurityID_t_1604331305");
      Leg_104.add_attribute("Src", "I"); // 2
      Leg_104_set.insert("I");
      Leg_104.add_attribute("Prod", "8"); // 2
      Leg_104_set.insert("8");
      Leg_104.add_attribute("CFI", "LegCFICode_t_997775828"); // 2
      Leg_104_set.insert("LegCFICode_t_997775828");
      Leg_104.add_attribute("SecTyp", "FORWARD"); // 2
      Leg_104_set.insert("FORWARD");
      Leg_104.add_attribute("SecSubTyp", "LegSecuritySubType_t_906551582"); // 2
      Leg_104_set.insert("LegSecuritySubType_t_906551582");
      Leg_104.add_attribute("MMY", "1856377176"); // 2
      Leg_104_set.insert("1856377176");
      Leg_104.add_attribute("Mat", "LegMaturityDate_t_1948241604"); // 2
      Leg_104_set.insert("LegMaturityDate_t_1948241604");
      Leg_104.add_attribute("MatTm", "1469672245"); // 2
      Leg_104_set.insert("1469672245");
      Leg_104.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1717929420"); // 2
      Leg_104_set.insert("LegCouponPaymentDate_t_1717929420");
      Leg_104.add_attribute("Issued", "LegIssueDate_t_2127741826"); // 2
      Leg_104_set.insert("LegIssueDate_t_2127741826");
      Leg_104.add_attribute("RepoCollSecTyp", "1246489513"); // 2
      Leg_104_set.insert("1246489513");
      Leg_104.add_attribute("RepoTrm", "1289875890"); // 2
      Leg_104_set.insert("1289875890");
      Leg_104.add_attribute("RepoRt", "19151213.300000"); // 2
      Leg_104_set.insert("19151213.300000");
      Leg_104.add_attribute("Fctr", "13054705.200000"); // 2
      Leg_104_set.insert("13054705.200000");
      Leg_104.add_attribute("CrdRtg", "LegCreditRating_t_987195323"); // 2
      Leg_104_set.insert("LegCreditRating_t_987195323");
      Leg_104.add_attribute("Rgstry", "LegInstrRegistry_t_558382613"); // 2
      Leg_104_set.insert("LegInstrRegistry_t_558382613");
      Leg_104.add_attribute("Ctry", "280215618"); // 2
      Leg_104_set.insert("280215618");
      Leg_104.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1535474812"); // 2
      Leg_104_set.insert("LegStateOrProvinceOfIssue_t_1535474812");
      Leg_104.add_attribute("Lcl", "LegLocaleOfIssue_t_455230131"); // 2
      Leg_104_set.insert("LegLocaleOfIssue_t_455230131");
      Leg_104.add_attribute("Redeem", "LegRedemptionDate_t_1148508379"); // 2
      Leg_104_set.insert("LegRedemptionDate_t_1148508379");
      Leg_104.add_attribute("Strk", "21278119.190000"); // 2
      Leg_104_set.insert("21278119.190000");
      Leg_104.add_attribute("StrkCcy", "EUR"); // 2
      Leg_104_set.insert("EUR");
      Leg_104.add_attribute("OptA", "659204747"); // 2
      Leg_104_set.insert("659204747");
      Leg_104.add_attribute("Cmult", "4177293.580000"); // 2
      Leg_104_set.insert("4177293.580000");
      Leg_104.add_attribute("MultTyp", "0"); // 2
      Leg_104_set.insert("0");
      Leg_104.add_attribute("FlowSchedTyp", "3"); // 2
      Leg_104_set.insert("3");
      Leg_104.add_attribute("UOM", "t"); // 2
      Leg_104_set.insert("t");
      Leg_104.add_attribute("UOMQty", "5905425.600000"); // 2
      Leg_104_set.insert("5905425.600000");
      Leg_104.add_attribute("PxUOM", "tn"); // 2
      Leg_104_set.insert("tn");
      Leg_104.add_attribute("PxUOMQty", "21177130.610000"); // 2
      Leg_104_set.insert("21177130.610000");
      Leg_104.add_attribute("TmUnit", "D"); // 2
      Leg_104_set.insert("D");
      Leg_104.add_attribute("ExerStyle", "0"); // 2
      Leg_104_set.insert("0");
      Leg_104.add_attribute("CpnRt", "9680052.410000"); // 2
      Leg_104_set.insert("9680052.410000");
      Leg_104.add_attribute("Exch", "LegSecurityExchange_t_470261915"); // 2
      Leg_104_set.insert("LegSecurityExchange_t_470261915");
      Leg_104.add_attribute("Issr", "LegIssuer_t_316183824"); // 2
      Leg_104_set.insert("LegIssuer_t_316183824");
      Leg_104.add_attribute("EncLegIssrLen", "676898769"); // 2
      Leg_104_set.insert("676898769");
      Leg_104.add_attribute("EncLegIssr", "EncodedLegIssuer_t_271019872"); // 2
      Leg_104_set.insert("EncodedLegIssuer_t_271019872");
      Leg_104.add_attribute("Desc", "LegSecurityDesc_t_1785856070"); // 2
      Leg_104_set.insert("LegSecurityDesc_t_1785856070");
      Leg_104.add_attribute("EncLegSecDescLen", "247344541"); // 2
      Leg_104_set.insert("247344541");
      Leg_104.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_251278050"); // 2
      Leg_104_set.insert("EncodedLegSecurityDesc_t_251278050");
      Leg_104.add_attribute("RatioQty", "8848619.350000"); // 2
      Leg_104_set.insert("8848619.350000");
      Leg_104.add_attribute("Side", "G"); // 2
      Leg_104_set.insert("G");
      Leg_104.add_attribute("Ccy", "CAN"); // 2
      Leg_104_set.insert("CAN");
      Leg_104.add_attribute("Pool", "LegPool_t_376932106"); // 2
      Leg_104_set.insert("LegPool_t_376932106");
      Leg_104.add_attribute("Dated", "LegDatedDate_t_577298346"); // 2
      Leg_104_set.insert("LegDatedDate_t_577298346");
      Leg_104.add_attribute("CSetMo", "323064425"); // 2
      Leg_104_set.insert("323064425");
      Leg_104.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1912406919"); // 2
      Leg_104_set.insert("LegInterestAccrualDate_t_1912406919");
      Leg_104.add_attribute("PutCall", "1032528477"); // 2
      Leg_104_set.insert("1032528477");
      Leg_104.add_attribute("LegOptionRatio", "14715728.050000"); // 2
      Leg_104_set.insert("14715728.050000");
      Leg_104.add_attribute("Px", "18927351.900000"); // 2
      Leg_104_set.insert("18927351.900000");
      all_values.push_back(Leg_104_set);
      all_compo_names.insert("Leg_104_set");

      {
        xml_element LegAID_99{"LegAID"};
        multiset<string> LegAID_99_set;
        LegAID_99.add_attribute("SecAltID", "LegSecurityAltID_t_1865561351"); // 3
        LegAID_99_set.insert("LegSecurityAltID_t_1865561351");
        LegAID_99.add_attribute("SecAltIDSrc", "3"); // 3
        LegAID_99_set.insert("3");
        all_values.push_back(LegAID_99_set);
        all_compo_names.insert("LegAID_99_set");

        Leg_104.add_element(LegAID_99);
      }
      TrdLeg_3.add_element(Leg_104);
    }
    {
      xml_element Stip_192{"Stip"};
      multiset<string> Stip_192_set;
      Stip_192.add_attribute("StipTyp", "STRUCT"); // 2
      Stip_192_set.insert("STRUCT");
      Stip_192.add_attribute("StipVal", "LegStipulationValue_t_135807061"); // 2
      Stip_192_set.insert("LegStipulationValue_t_135807061");
      all_values.push_back(Stip_192_set);
      all_compo_names.insert("Stip_192_set");

      TrdLeg_3.add_element(Stip_192);
    }
    {
      xml_element Pty_459{"Pty"};
      multiset<string> Pty_459_set;
      Pty_459.add_attribute("ID", "NestedPartyID_t_1128487540"); // 2
      Pty_459_set.insert("NestedPartyID_t_1128487540");
      Pty_459.add_attribute("Src", "A"); // 2
      Pty_459_set.insert("A");
      Pty_459.add_attribute("R", "33"); // 2
      Pty_459_set.insert("33");
      all_values.push_back(Pty_459_set);
      all_compo_names.insert("Pty_459_set");

      {
        xml_element Sub_459{"Sub"};
        multiset<string> Sub_459_set;
        Sub_459.add_attribute("ID", "NestedPartySubID_t_1719030100"); // 3
        Sub_459_set.insert("NestedPartySubID_t_1719030100");
        Sub_459.add_attribute("Typ", "3"); // 3
        Sub_459_set.insert("3");
        all_values.push_back(Sub_459_set);
        all_compo_names.insert("Sub_459_set");

        Pty_459.add_element(Sub_459);
      }
      TrdLeg_3.add_element(Pty_459);
    }
    {
      xml_element TradeCapLegUndlyGrp_3{"TradeCapLegUndlyGrp"};
      {
        xml_element Instrmt_93{"Instrmt"};
        multiset<string> Instrmt_93_set;
        Instrmt_93.add_attribute("Sym", "UnderlyingLegSymbol_t_619418231"); // 3
        Instrmt_93_set.insert("UnderlyingLegSymbol_t_619418231");
        Instrmt_93.add_attribute("Sfx", "UnderlyingLegSymbolSfx_t_1626614883"); // 3
        Instrmt_93_set.insert("UnderlyingLegSymbolSfx_t_1626614883");
        Instrmt_93.add_attribute("ID", "UnderlyingLegSecurityID_t_918776975"); // 3
        Instrmt_93_set.insert("UnderlyingLegSecurityID_t_918776975");
        Instrmt_93.add_attribute("Src", "UnderlyingLegSecurityIDSource_t_1587423472"); // 3
        Instrmt_93_set.insert("UnderlyingLegSecurityIDSource_t_1587423472");
        Instrmt_93.add_attribute("CFI", "UnderlyingLegCFICode_t_2096876798"); // 3
        Instrmt_93_set.insert("UnderlyingLegCFICode_t_2096876798");
        Instrmt_93.add_attribute("SecType", "UnderlyingLegSecurityType_t_1234960800"); // 3
        Instrmt_93_set.insert("UnderlyingLegSecurityType_t_1234960800");
        Instrmt_93.add_attribute("SubType", "UnderlyingLegSecuritySubType_t_116838594"); // 3
        Instrmt_93_set.insert("UnderlyingLegSecuritySubType_t_116838594");
        Instrmt_93.add_attribute("MMY", "220413022"); // 3
        Instrmt_93_set.insert("220413022");
        Instrmt_93.add_attribute("MatDt", "UnderlyingLegMaturityDate_t_873333222"); // 3
        Instrmt_93_set.insert("UnderlyingLegMaturityDate_t_873333222");
        Instrmt_93.add_attribute("MatTm", "364183135"); // 3
        Instrmt_93_set.insert("364183135");
        Instrmt_93.add_attribute("StrkPx", "4716910.730000"); // 3
        Instrmt_93_set.insert("4716910.730000");
        Instrmt_93.add_attribute("OptAt", "1758195157"); // 3
        Instrmt_93_set.insert("1758195157");
        Instrmt_93.add_attribute("PutCall", "1901403567"); // 3
        Instrmt_93_set.insert("1901403567");
        Instrmt_93.add_attribute("Exch", "UnderlyingLegSecurityExchange_t_490606806"); // 3
        Instrmt_93_set.insert("UnderlyingLegSecurityExchange_t_490606806");
        Instrmt_93.add_attribute("Desc", "UnderlyingLegSecurityDesc_t_1801043964"); // 3
        Instrmt_93_set.insert("UnderlyingLegSecurityDesc_t_1801043964");
        all_values.push_back(Instrmt_93_set);
        all_compo_names.insert("Instrmt_93_set");

        {
          xml_element AID_96{"AID"};
          multiset<string> AID_96_set;
          AID_96.add_attribute("AltID", "UnderlyingLegSecurityAltID_t_130852025"); // 4
          AID_96_set.insert("UnderlyingLegSecurityAltID_t_130852025");
          AID_96.add_attribute("AltIDSrc", "UnderlyingLegSecurityAltIDSource_t_1067905152"); // 4
          AID_96_set.insert("UnderlyingLegSecurityAltIDSource_t_1067905152");
          all_values.push_back(AID_96_set);
          all_compo_names.insert("AID_96_set");

          Instrmt_93.add_element(AID_96);
        }
        TradeCapLegUndlyGrp_3.add_element(Instrmt_93);
      }
      TrdLeg_3.add_element(TradeCapLegUndlyGrp_3);
    }
    elt.add_element(TrdLeg_3);
  } // end TrdLeg
  { // TrdLeg
    xml_element TrdLeg_4{"TrdLeg"};
    multiset<string> TrdLeg_4_set;
    TrdLeg_4.add_attribute("Qty", "21241083.900000"); // 1
    TrdLeg_4_set.insert("21241083.900000");
    TrdLeg_4.add_attribute("SwapTyp", "1"); // 1
    TrdLeg_4_set.insert("1");
    TrdLeg_4.add_attribute("RptID", "LegReportID_t_2100433629"); // 1
    TrdLeg_4_set.insert("LegReportID_t_2100433629");
    TrdLeg_4.add_attribute("LegNo", "1448197547"); // 1
    TrdLeg_4_set.insert("1448197547");
    TrdLeg_4.add_attribute("PosEfct", "F"); // 1
    TrdLeg_4_set.insert("F");
    TrdLeg_4.add_attribute("Cover", "1"); // 1
    TrdLeg_4_set.insert("1");
    TrdLeg_4.add_attribute("RefID", "LegRefID_t_1948037087"); // 1
    TrdLeg_4_set.insert("LegRefID_t_1948037087");
    TrdLeg_4.add_attribute("SettlTyp", "8"); // 1
    TrdLeg_4_set.insert("8");
    TrdLeg_4.add_attribute("SettlDt", "LegSettlDate_t_1954318394"); // 1
    TrdLeg_4_set.insert("LegSettlDate_t_1954318394");
    TrdLeg_4.add_attribute("LastPx", "9290409.790000"); // 1
    TrdLeg_4_set.insert("9290409.790000");
    TrdLeg_4.add_attribute("SettlCcy", "GBP"); // 1
    TrdLeg_4_set.insert("GBP");
    TrdLeg_4.add_attribute("LegLastFwdPnts", "5005874.310000"); // 1
    TrdLeg_4_set.insert("5005874.310000");
    TrdLeg_4.add_attribute("LegCalcCcyLastQty", "13545322.910000"); // 1
    TrdLeg_4_set.insert("13545322.910000");
    TrdLeg_4.add_attribute("LegGrossTrdAmt", "LegGrossTradeAmt_t_1075441795"); // 1
    TrdLeg_4_set.insert("LegGrossTradeAmt_t_1075441795");
    TrdLeg_4.add_attribute("LegVolatility", "21272023.140000"); // 1
    TrdLeg_4_set.insert("21272023.140000");
    TrdLeg_4.add_attribute("LegDividendYield", "1258256.190000"); // 1
    TrdLeg_4_set.insert("1258256.190000");
    TrdLeg_4.add_attribute("LegCurrencyRatio", "5153816.190000"); // 1
    TrdLeg_4_set.insert("5153816.190000");
    TrdLeg_4.add_attribute("LegExecInst", "n"); // 1
    TrdLeg_4_set.insert("n");
    TrdLeg_4.add_attribute("LastQty", "13607864.190000"); // 1
    TrdLeg_4_set.insert("13607864.190000");
    all_values.push_back(TrdLeg_4_set);
    all_compo_names.insert("TrdLeg_4_set");

    {
      xml_element Leg_105{"Leg"};
      multiset<string> Leg_105_set;
      Leg_105.add_attribute("Sym", "LegSymbol_t_632220213"); // 2
      Leg_105_set.insert("LegSymbol_t_632220213");
      Leg_105.add_attribute("Sfx", "WI"); // 2
      Leg_105_set.insert("WI");
      Leg_105.add_attribute("ID", "LegSecurityID_t_86635993"); // 2
      Leg_105_set.insert("LegSecurityID_t_86635993");
      Leg_105.add_attribute("Src", "8"); // 2
      Leg_105_set.insert("8");
      Leg_105.add_attribute("Prod", "2"); // 2
      Leg_105_set.insert("2");
      Leg_105.add_attribute("CFI", "LegCFICode_t_1844831150"); // 2
      Leg_105_set.insert("LegCFICode_t_1844831150");
      Leg_105.add_attribute("SecTyp", "WITHDRN"); // 2
      Leg_105_set.insert("WITHDRN");
      Leg_105.add_attribute("SecSubTyp", "LegSecuritySubType_t_1111822718"); // 2
      Leg_105_set.insert("LegSecuritySubType_t_1111822718");
      Leg_105.add_attribute("MMY", "1498391466"); // 2
      Leg_105_set.insert("1498391466");
      Leg_105.add_attribute("Mat", "LegMaturityDate_t_881175293"); // 2
      Leg_105_set.insert("LegMaturityDate_t_881175293");
      Leg_105.add_attribute("MatTm", "32244222"); // 2
      Leg_105_set.insert("32244222");
      Leg_105.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1475016208"); // 2
      Leg_105_set.insert("LegCouponPaymentDate_t_1475016208");
      Leg_105.add_attribute("Issued", "LegIssueDate_t_776950590"); // 2
      Leg_105_set.insert("LegIssueDate_t_776950590");
      Leg_105.add_attribute("RepoCollSecTyp", "2132677852"); // 2
      Leg_105_set.insert("2132677852");
      Leg_105.add_attribute("RepoTrm", "775730107"); // 2
      Leg_105_set.insert("775730107");
      Leg_105.add_attribute("RepoRt", "4179774.290000"); // 2
      Leg_105_set.insert("4179774.290000");
      Leg_105.add_attribute("Fctr", "18037055.370000"); // 2
      Leg_105_set.insert("18037055.370000");
      Leg_105.add_attribute("CrdRtg", "LegCreditRating_t_576283547"); // 2
      Leg_105_set.insert("LegCreditRating_t_576283547");
      Leg_105.add_attribute("Rgstry", "LegInstrRegistry_t_463460557"); // 2
      Leg_105_set.insert("LegInstrRegistry_t_463460557");
      Leg_105.add_attribute("Ctry", "1610540283"); // 2
      Leg_105_set.insert("1610540283");
      Leg_105.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1505324526"); // 2
      Leg_105_set.insert("LegStateOrProvinceOfIssue_t_1505324526");
      Leg_105.add_attribute("Lcl", "LegLocaleOfIssue_t_308848115"); // 2
      Leg_105_set.insert("LegLocaleOfIssue_t_308848115");
      Leg_105.add_attribute("Redeem", "LegRedemptionDate_t_2066563847"); // 2
      Leg_105_set.insert("LegRedemptionDate_t_2066563847");
      Leg_105.add_attribute("Strk", "20059119.580000"); // 2
      Leg_105_set.insert("20059119.580000");
      Leg_105.add_attribute("StrkCcy", "JPY"); // 2
      Leg_105_set.insert("JPY");
      Leg_105.add_attribute("OptA", "1985630624"); // 2
      Leg_105_set.insert("1985630624");
      Leg_105.add_attribute("Cmult", "17892060.260000"); // 2
      Leg_105_set.insert("17892060.260000");
      Leg_105.add_attribute("MultTyp", "2"); // 2
      Leg_105_set.insert("2");
      Leg_105.add_attribute("FlowSchedTyp", "1"); // 2
      Leg_105_set.insert("1");
      Leg_105.add_attribute("UOM", "t"); // 2
      Leg_105_set.insert("t");
      Leg_105.add_attribute("UOMQty", "21421238.270000"); // 2
      Leg_105_set.insert("21421238.270000");
      Leg_105.add_attribute("PxUOM", "Bu"); // 2
      Leg_105_set.insert("Bu");
      Leg_105.add_attribute("PxUOMQty", "10891447.900000"); // 2
      Leg_105_set.insert("10891447.900000");
      Leg_105.add_attribute("TmUnit", "Yr"); // 2
      Leg_105_set.insert("Yr");
      Leg_105.add_attribute("ExerStyle", "2"); // 2
      Leg_105_set.insert("2");
      Leg_105.add_attribute("CpnRt", "7864922.920000"); // 2
      Leg_105_set.insert("7864922.920000");
      Leg_105.add_attribute("Exch", "LegSecurityExchange_t_1741366796"); // 2
      Leg_105_set.insert("LegSecurityExchange_t_1741366796");
      Leg_105.add_attribute("Issr", "LegIssuer_t_1649822264"); // 2
      Leg_105_set.insert("LegIssuer_t_1649822264");
      Leg_105.add_attribute("EncLegIssrLen", "137400110"); // 2
      Leg_105_set.insert("137400110");
      Leg_105.add_attribute("EncLegIssr", "EncodedLegIssuer_t_475058442"); // 2
      Leg_105_set.insert("EncodedLegIssuer_t_475058442");
      Leg_105.add_attribute("Desc", "LegSecurityDesc_t_1682066486"); // 2
      Leg_105_set.insert("LegSecurityDesc_t_1682066486");
      Leg_105.add_attribute("EncLegSecDescLen", "1612416319"); // 2
      Leg_105_set.insert("1612416319");
      Leg_105.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1252009032"); // 2
      Leg_105_set.insert("EncodedLegSecurityDesc_t_1252009032");
      Leg_105.add_attribute("RatioQty", "16672606.900000"); // 2
      Leg_105_set.insert("16672606.900000");
      Leg_105.add_attribute("Side", "B"); // 2
      Leg_105_set.insert("B");
      Leg_105.add_attribute("Ccy", "CAN"); // 2
      Leg_105_set.insert("CAN");
      Leg_105.add_attribute("Pool", "LegPool_t_816946325"); // 2
      Leg_105_set.insert("LegPool_t_816946325");
      Leg_105.add_attribute("Dated", "LegDatedDate_t_2133447018"); // 2
      Leg_105_set.insert("LegDatedDate_t_2133447018");
      Leg_105.add_attribute("CSetMo", "786539215"); // 2
      Leg_105_set.insert("786539215");
      Leg_105.add_attribute("IntAcrl", "LegInterestAccrualDate_t_174787204"); // 2
      Leg_105_set.insert("LegInterestAccrualDate_t_174787204");
      Leg_105.add_attribute("PutCall", "294811486"); // 2
      Leg_105_set.insert("294811486");
      Leg_105.add_attribute("LegOptionRatio", "7056194.140000"); // 2
      Leg_105_set.insert("7056194.140000");
      Leg_105.add_attribute("Px", "332155.140000"); // 2
      Leg_105_set.insert("332155.140000");
      all_values.push_back(Leg_105_set);
      all_compo_names.insert("Leg_105_set");

      {
        xml_element LegAID_100{"LegAID"};
        multiset<string> LegAID_100_set;
        LegAID_100.add_attribute("SecAltID", "LegSecurityAltID_t_1958191893"); // 3
        LegAID_100_set.insert("LegSecurityAltID_t_1958191893");
        LegAID_100.add_attribute("SecAltIDSrc", "M"); // 3
        LegAID_100_set.insert("M");
        all_values.push_back(LegAID_100_set);
        all_compo_names.insert("LegAID_100_set");

        Leg_105.add_element(LegAID_100);
      }
      TrdLeg_4.add_element(Leg_105);
    }
    {
      xml_element Stip_193{"Stip"};
      multiset<string> Stip_193_set;
      Stip_193.add_attribute("StipTyp", "WHOLE"); // 2
      Stip_193_set.insert("WHOLE");
      Stip_193.add_attribute("StipVal", "LegStipulationValue_t_1599914271"); // 2
      Stip_193_set.insert("LegStipulationValue_t_1599914271");
      all_values.push_back(Stip_193_set);
      all_compo_names.insert("Stip_193_set");

      TrdLeg_4.add_element(Stip_193);
    }
    {
      xml_element Pty_460{"Pty"};
      multiset<string> Pty_460_set;
      Pty_460.add_attribute("ID", "NestedPartyID_t_1062561375"); // 2
      Pty_460_set.insert("NestedPartyID_t_1062561375");
      Pty_460.add_attribute("Src", "F"); // 2
      Pty_460_set.insert("F");
      Pty_460.add_attribute("R", "43"); // 2
      Pty_460_set.insert("43");
      all_values.push_back(Pty_460_set);
      all_compo_names.insert("Pty_460_set");

      {
        xml_element Sub_460{"Sub"};
        multiset<string> Sub_460_set;
        Sub_460.add_attribute("ID", "NestedPartySubID_t_1057201554"); // 3
        Sub_460_set.insert("NestedPartySubID_t_1057201554");
        Sub_460.add_attribute("Typ", "27"); // 3
        Sub_460_set.insert("27");
        all_values.push_back(Sub_460_set);
        all_compo_names.insert("Sub_460_set");

        Pty_460.add_element(Sub_460);
      }
      TrdLeg_4.add_element(Pty_460);
    }
    {
      xml_element TradeCapLegUndlyGrp_4{"TradeCapLegUndlyGrp"};
      {
        xml_element Instrmt_94{"Instrmt"};
        multiset<string> Instrmt_94_set;
        Instrmt_94.add_attribute("Sym", "UnderlyingLegSymbol_t_1544084210"); // 3
        Instrmt_94_set.insert("UnderlyingLegSymbol_t_1544084210");
        Instrmt_94.add_attribute("Sfx", "UnderlyingLegSymbolSfx_t_2048245083"); // 3
        Instrmt_94_set.insert("UnderlyingLegSymbolSfx_t_2048245083");
        Instrmt_94.add_attribute("ID", "UnderlyingLegSecurityID_t_93404462"); // 3
        Instrmt_94_set.insert("UnderlyingLegSecurityID_t_93404462");
        Instrmt_94.add_attribute("Src", "UnderlyingLegSecurityIDSource_t_183092854"); // 3
        Instrmt_94_set.insert("UnderlyingLegSecurityIDSource_t_183092854");
        Instrmt_94.add_attribute("CFI", "UnderlyingLegCFICode_t_1642128231"); // 3
        Instrmt_94_set.insert("UnderlyingLegCFICode_t_1642128231");
        Instrmt_94.add_attribute("SecType", "UnderlyingLegSecurityType_t_1743226726"); // 3
        Instrmt_94_set.insert("UnderlyingLegSecurityType_t_1743226726");
        Instrmt_94.add_attribute("SubType", "UnderlyingLegSecuritySubType_t_320492964"); // 3
        Instrmt_94_set.insert("UnderlyingLegSecuritySubType_t_320492964");
        Instrmt_94.add_attribute("MMY", "2117186673"); // 3
        Instrmt_94_set.insert("2117186673");
        Instrmt_94.add_attribute("MatDt", "UnderlyingLegMaturityDate_t_1277809565"); // 3
        Instrmt_94_set.insert("UnderlyingLegMaturityDate_t_1277809565");
        Instrmt_94.add_attribute("MatTm", "1932909283"); // 3
        Instrmt_94_set.insert("1932909283");
        Instrmt_94.add_attribute("StrkPx", "12217120.570000"); // 3
        Instrmt_94_set.insert("12217120.570000");
        Instrmt_94.add_attribute("OptAt", "797586607"); // 3
        Instrmt_94_set.insert("797586607");
        Instrmt_94.add_attribute("PutCall", "26088414"); // 3
        Instrmt_94_set.insert("26088414");
        Instrmt_94.add_attribute("Exch", "UnderlyingLegSecurityExchange_t_744214870"); // 3
        Instrmt_94_set.insert("UnderlyingLegSecurityExchange_t_744214870");
        Instrmt_94.add_attribute("Desc", "UnderlyingLegSecurityDesc_t_2121069187"); // 3
        Instrmt_94_set.insert("UnderlyingLegSecurityDesc_t_2121069187");
        all_values.push_back(Instrmt_94_set);
        all_compo_names.insert("Instrmt_94_set");

        {
          xml_element AID_97{"AID"};
          multiset<string> AID_97_set;
          AID_97.add_attribute("AltID", "UnderlyingLegSecurityAltID_t_843034739"); // 4
          AID_97_set.insert("UnderlyingLegSecurityAltID_t_843034739");
          AID_97.add_attribute("AltIDSrc", "UnderlyingLegSecurityAltIDSource_t_730178241"); // 4
          AID_97_set.insert("UnderlyingLegSecurityAltIDSource_t_730178241");
          all_values.push_back(AID_97_set);
          all_compo_names.insert("AID_97_set");

          Instrmt_94.add_element(AID_97);
        }
        TradeCapLegUndlyGrp_4.add_element(Instrmt_94);
      }
      TrdLeg_4.add_element(TradeCapLegUndlyGrp_4);
    }
    elt.add_element(TrdLeg_4);
  } // end TrdLeg
  { // TrdLeg
    xml_element TrdLeg_5{"TrdLeg"};
    multiset<string> TrdLeg_5_set;
    TrdLeg_5.add_attribute("Qty", "7601247.540000"); // 1
    TrdLeg_5_set.insert("7601247.540000");
    TrdLeg_5.add_attribute("SwapTyp", "5"); // 1
    TrdLeg_5_set.insert("5");
    TrdLeg_5.add_attribute("RptID", "LegReportID_t_1024989727"); // 1
    TrdLeg_5_set.insert("LegReportID_t_1024989727");
    TrdLeg_5.add_attribute("LegNo", "1465744168"); // 1
    TrdLeg_5_set.insert("1465744168");
    TrdLeg_5.add_attribute("PosEfct", "R"); // 1
    TrdLeg_5_set.insert("R");
    TrdLeg_5.add_attribute("Cover", "0"); // 1
    TrdLeg_5_set.insert("0");
    TrdLeg_5.add_attribute("RefID", "LegRefID_t_1018401929"); // 1
    TrdLeg_5_set.insert("LegRefID_t_1018401929");
    TrdLeg_5.add_attribute("SettlTyp", "4"); // 1
    TrdLeg_5_set.insert("4");
    TrdLeg_5.add_attribute("SettlDt", "LegSettlDate_t_288128595"); // 1
    TrdLeg_5_set.insert("LegSettlDate_t_288128595");
    TrdLeg_5.add_attribute("LastPx", "20809633.040000"); // 1
    TrdLeg_5_set.insert("20809633.040000");
    TrdLeg_5.add_attribute("SettlCcy", "EUR"); // 1
    TrdLeg_5_set.insert("EUR");
    TrdLeg_5.add_attribute("LegLastFwdPnts", "9906812.110000"); // 1
    TrdLeg_5_set.insert("9906812.110000");
    TrdLeg_5.add_attribute("LegCalcCcyLastQty", "1164261.490000"); // 1
    TrdLeg_5_set.insert("1164261.490000");
    TrdLeg_5.add_attribute("LegGrossTrdAmt", "LegGrossTradeAmt_t_139668577"); // 1
    TrdLeg_5_set.insert("LegGrossTradeAmt_t_139668577");
    TrdLeg_5.add_attribute("LegVolatility", "8914426.460000"); // 1
    TrdLeg_5_set.insert("8914426.460000");
    TrdLeg_5.add_attribute("LegDividendYield", "2098306.110000"); // 1
    TrdLeg_5_set.insert("2098306.110000");
    TrdLeg_5.add_attribute("LegCurrencyRatio", "3227614.310000"); // 1
    TrdLeg_5_set.insert("3227614.310000");
    TrdLeg_5.add_attribute("LegExecInst", "T"); // 1
    TrdLeg_5_set.insert("T");
    TrdLeg_5.add_attribute("LastQty", "19530573.380000"); // 1
    TrdLeg_5_set.insert("19530573.380000");
    all_values.push_back(TrdLeg_5_set);
    all_compo_names.insert("TrdLeg_5_set");

    {
      xml_element Leg_106{"Leg"};
      multiset<string> Leg_106_set;
      Leg_106.add_attribute("Sym", "LegSymbol_t_643254395"); // 2
      Leg_106_set.insert("LegSymbol_t_643254395");
      Leg_106.add_attribute("Sfx", "WI"); // 2
      Leg_106_set.insert("WI");
      Leg_106.add_attribute("ID", "LegSecurityID_t_1083383255"); // 2
      Leg_106_set.insert("LegSecurityID_t_1083383255");
      Leg_106.add_attribute("Src", "M"); // 2
      Leg_106_set.insert("M");
      Leg_106.add_attribute("Prod", "6"); // 2
      Leg_106_set.insert("6");
      Leg_106.add_attribute("CFI", "LegCFICode_t_1880969862"); // 2
      Leg_106_set.insert("LegCFICode_t_1880969862");
      Leg_106.add_attribute("SecTyp", "CAN"); // 2
      Leg_106_set.insert("CAN");
      Leg_106.add_attribute("SecSubTyp", "LegSecuritySubType_t_174233535"); // 2
      Leg_106_set.insert("LegSecuritySubType_t_174233535");
      Leg_106.add_attribute("MMY", "1854555401"); // 2
      Leg_106_set.insert("1854555401");
      Leg_106.add_attribute("Mat", "LegMaturityDate_t_1297803184"); // 2
      Leg_106_set.insert("LegMaturityDate_t_1297803184");
      Leg_106.add_attribute("MatTm", "904411776"); // 2
      Leg_106_set.insert("904411776");
      Leg_106.add_attribute("CpnPmt", "LegCouponPaymentDate_t_467196507"); // 2
      Leg_106_set.insert("LegCouponPaymentDate_t_467196507");
      Leg_106.add_attribute("Issued", "LegIssueDate_t_168141480"); // 2
      Leg_106_set.insert("LegIssueDate_t_168141480");
      Leg_106.add_attribute("RepoCollSecTyp", "1929401503"); // 2
      Leg_106_set.insert("1929401503");
      Leg_106.add_attribute("RepoTrm", "1932940676"); // 2
      Leg_106_set.insert("1932940676");
      Leg_106.add_attribute("RepoRt", "12191789.370000"); // 2
      Leg_106_set.insert("12191789.370000");
      Leg_106.add_attribute("Fctr", "6176158.270000"); // 2
      Leg_106_set.insert("6176158.270000");
      Leg_106.add_attribute("CrdRtg", "LegCreditRating_t_803858957"); // 2
      Leg_106_set.insert("LegCreditRating_t_803858957");
      Leg_106.add_attribute("Rgstry", "LegInstrRegistry_t_2141578885"); // 2
      Leg_106_set.insert("LegInstrRegistry_t_2141578885");
      Leg_106.add_attribute("Ctry", "905744422"); // 2
      Leg_106_set.insert("905744422");
      Leg_106.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_737338614"); // 2
      Leg_106_set.insert("LegStateOrProvinceOfIssue_t_737338614");
      Leg_106.add_attribute("Lcl", "LegLocaleOfIssue_t_555116469"); // 2
      Leg_106_set.insert("LegLocaleOfIssue_t_555116469");
      Leg_106.add_attribute("Redeem", "LegRedemptionDate_t_1648812437"); // 2
      Leg_106_set.insert("LegRedemptionDate_t_1648812437");
      Leg_106.add_attribute("Strk", "17280198.250000"); // 2
      Leg_106_set.insert("17280198.250000");
      Leg_106.add_attribute("StrkCcy", "USD"); // 2
      Leg_106_set.insert("USD");
      Leg_106.add_attribute("OptA", "471978823"); // 2
      Leg_106_set.insert("471978823");
      Leg_106.add_attribute("Cmult", "8813732.300000"); // 2
      Leg_106_set.insert("8813732.300000");
      Leg_106.add_attribute("MultTyp", "2"); // 2
      Leg_106_set.insert("2");
      Leg_106.add_attribute("FlowSchedTyp", "2"); // 2
      Leg_106_set.insert("2");
      Leg_106.add_attribute("UOM", "Bcf"); // 2
      Leg_106_set.insert("Bcf");
      Leg_106.add_attribute("UOMQty", "6070131.920000"); // 2
      Leg_106_set.insert("6070131.920000");
      Leg_106.add_attribute("PxUOM", "MMBtu"); // 2
      Leg_106_set.insert("MMBtu");
      Leg_106.add_attribute("PxUOMQty", "17703301.750000"); // 2
      Leg_106_set.insert("17703301.750000");
      Leg_106.add_attribute("TmUnit", "Mo"); // 2
      Leg_106_set.insert("Mo");
      Leg_106.add_attribute("ExerStyle", "2"); // 2
      Leg_106_set.insert("2");
      Leg_106.add_attribute("CpnRt", "15038163.890000"); // 2
      Leg_106_set.insert("15038163.890000");
      Leg_106.add_attribute("Exch", "LegSecurityExchange_t_1490461668"); // 2
      Leg_106_set.insert("LegSecurityExchange_t_1490461668");
      Leg_106.add_attribute("Issr", "LegIssuer_t_818108507"); // 2
      Leg_106_set.insert("LegIssuer_t_818108507");
      Leg_106.add_attribute("EncLegIssrLen", "1210888143"); // 2
      Leg_106_set.insert("1210888143");
      Leg_106.add_attribute("EncLegIssr", "EncodedLegIssuer_t_640781205"); // 2
      Leg_106_set.insert("EncodedLegIssuer_t_640781205");
      Leg_106.add_attribute("Desc", "LegSecurityDesc_t_1722520283"); // 2
      Leg_106_set.insert("LegSecurityDesc_t_1722520283");
      Leg_106.add_attribute("EncLegSecDescLen", "1678084650"); // 2
      Leg_106_set.insert("1678084650");
      Leg_106.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_808922685"); // 2
      Leg_106_set.insert("EncodedLegSecurityDesc_t_808922685");
      Leg_106.add_attribute("RatioQty", "15044381.380000"); // 2
      Leg_106_set.insert("15044381.380000");
      Leg_106.add_attribute("Side", "F"); // 2
      Leg_106_set.insert("F");
      Leg_106.add_attribute("Ccy", "CAN"); // 2
      Leg_106_set.insert("CAN");
      Leg_106.add_attribute("Pool", "LegPool_t_119916988"); // 2
      Leg_106_set.insert("LegPool_t_119916988");
      Leg_106.add_attribute("Dated", "LegDatedDate_t_2022196860"); // 2
      Leg_106_set.insert("LegDatedDate_t_2022196860");
      Leg_106.add_attribute("CSetMo", "880314739"); // 2
      Leg_106_set.insert("880314739");
      Leg_106.add_attribute("IntAcrl", "LegInterestAccrualDate_t_857255602"); // 2
      Leg_106_set.insert("LegInterestAccrualDate_t_857255602");
      Leg_106.add_attribute("PutCall", "429829681"); // 2
      Leg_106_set.insert("429829681");
      Leg_106.add_attribute("LegOptionRatio", "3816435.280000"); // 2
      Leg_106_set.insert("3816435.280000");
      Leg_106.add_attribute("Px", "4377917.790000"); // 2
      Leg_106_set.insert("4377917.790000");
      all_values.push_back(Leg_106_set);
      all_compo_names.insert("Leg_106_set");

      {
        xml_element LegAID_101{"LegAID"};
        multiset<string> LegAID_101_set;
        LegAID_101.add_attribute("SecAltID", "LegSecurityAltID_t_1101372300"); // 3
        LegAID_101_set.insert("LegSecurityAltID_t_1101372300");
        LegAID_101.add_attribute("SecAltIDSrc", "D"); // 3
        LegAID_101_set.insert("D");
        all_values.push_back(LegAID_101_set);
        all_compo_names.insert("LegAID_101_set");

        Leg_106.add_element(LegAID_101);
      }
      TrdLeg_5.add_element(Leg_106);
    }
    {
      xml_element Stip_194{"Stip"};
      multiset<string> Stip_194_set;
      Stip_194.add_attribute("StipTyp", "PXSOURCE"); // 2
      Stip_194_set.insert("PXSOURCE");
      Stip_194.add_attribute("StipVal", "LegStipulationValue_t_1982745530"); // 2
      Stip_194_set.insert("LegStipulationValue_t_1982745530");
      all_values.push_back(Stip_194_set);
      all_compo_names.insert("Stip_194_set");

      TrdLeg_5.add_element(Stip_194);
    }
    {
      xml_element Pty_461{"Pty"};
      multiset<string> Pty_461_set;
      Pty_461.add_attribute("ID", "NestedPartyID_t_2133883339"); // 2
      Pty_461_set.insert("NestedPartyID_t_2133883339");
      Pty_461.add_attribute("Src", "9"); // 2
      Pty_461_set.insert("9");
      Pty_461.add_attribute("R", "41"); // 2
      Pty_461_set.insert("41");
      all_values.push_back(Pty_461_set);
      all_compo_names.insert("Pty_461_set");

      {
        xml_element Sub_461{"Sub"};
        multiset<string> Sub_461_set;
        Sub_461.add_attribute("ID", "NestedPartySubID_t_593412883"); // 3
        Sub_461_set.insert("NestedPartySubID_t_593412883");
        Sub_461.add_attribute("Typ", "13"); // 3
        Sub_461_set.insert("13");
        all_values.push_back(Sub_461_set);
        all_compo_names.insert("Sub_461_set");

        Pty_461.add_element(Sub_461);
      }
      TrdLeg_5.add_element(Pty_461);
    }
    {
      xml_element TradeCapLegUndlyGrp_5{"TradeCapLegUndlyGrp"};
      {
        xml_element Instrmt_95{"Instrmt"};
        multiset<string> Instrmt_95_set;
        Instrmt_95.add_attribute("Sym", "UnderlyingLegSymbol_t_145055329"); // 3
        Instrmt_95_set.insert("UnderlyingLegSymbol_t_145055329");
        Instrmt_95.add_attribute("Sfx", "UnderlyingLegSymbolSfx_t_1629106107"); // 3
        Instrmt_95_set.insert("UnderlyingLegSymbolSfx_t_1629106107");
        Instrmt_95.add_attribute("ID", "UnderlyingLegSecurityID_t_1478084286"); // 3
        Instrmt_95_set.insert("UnderlyingLegSecurityID_t_1478084286");
        Instrmt_95.add_attribute("Src", "UnderlyingLegSecurityIDSource_t_1648871718"); // 3
        Instrmt_95_set.insert("UnderlyingLegSecurityIDSource_t_1648871718");
        Instrmt_95.add_attribute("CFI", "UnderlyingLegCFICode_t_972084127"); // 3
        Instrmt_95_set.insert("UnderlyingLegCFICode_t_972084127");
        Instrmt_95.add_attribute("SecType", "UnderlyingLegSecurityType_t_148709145"); // 3
        Instrmt_95_set.insert("UnderlyingLegSecurityType_t_148709145");
        Instrmt_95.add_attribute("SubType", "UnderlyingLegSecuritySubType_t_712276213"); // 3
        Instrmt_95_set.insert("UnderlyingLegSecuritySubType_t_712276213");
        Instrmt_95.add_attribute("MMY", "1612865332"); // 3
        Instrmt_95_set.insert("1612865332");
        Instrmt_95.add_attribute("MatDt", "UnderlyingLegMaturityDate_t_1871229428"); // 3
        Instrmt_95_set.insert("UnderlyingLegMaturityDate_t_1871229428");
        Instrmt_95.add_attribute("MatTm", "242877216"); // 3
        Instrmt_95_set.insert("242877216");
        Instrmt_95.add_attribute("StrkPx", "2743043.690000"); // 3
        Instrmt_95_set.insert("2743043.690000");
        Instrmt_95.add_attribute("OptAt", "1228183918"); // 3
        Instrmt_95_set.insert("1228183918");
        Instrmt_95.add_attribute("PutCall", "1706418894"); // 3
        Instrmt_95_set.insert("1706418894");
        Instrmt_95.add_attribute("Exch", "UnderlyingLegSecurityExchange_t_154922344"); // 3
        Instrmt_95_set.insert("UnderlyingLegSecurityExchange_t_154922344");
        Instrmt_95.add_attribute("Desc", "UnderlyingLegSecurityDesc_t_1202754235"); // 3
        Instrmt_95_set.insert("UnderlyingLegSecurityDesc_t_1202754235");
        all_values.push_back(Instrmt_95_set);
        all_compo_names.insert("Instrmt_95_set");

        {
          xml_element AID_98{"AID"};
          multiset<string> AID_98_set;
          AID_98.add_attribute("AltID", "UnderlyingLegSecurityAltID_t_1826335882"); // 4
          AID_98_set.insert("UnderlyingLegSecurityAltID_t_1826335882");
          AID_98.add_attribute("AltIDSrc", "UnderlyingLegSecurityAltIDSource_t_29635556"); // 4
          AID_98_set.insert("UnderlyingLegSecurityAltIDSource_t_29635556");
          all_values.push_back(AID_98_set);
          all_compo_names.insert("AID_98_set");

          Instrmt_95.add_element(AID_98);
        }
        TradeCapLegUndlyGrp_5.add_element(Instrmt_95);
      }
      TrdLeg_5.add_element(TradeCapLegUndlyGrp_5);
    }
    elt.add_element(TrdLeg_5);
  } // end TrdLeg
  { // TrdRegTS
    xml_element TrdRegTS_18{"TrdRegTS"};
    multiset<string> TrdRegTS_18_set;
    TrdRegTS_18.add_attribute("TS", "TrdRegTimestamp_t_536107836"); // 1
    TrdRegTS_18_set.insert("TrdRegTimestamp_t_536107836");
    TrdRegTS_18.add_attribute("Typ", "1"); // 1
    TrdRegTS_18_set.insert("1");
    TrdRegTS_18.add_attribute("Src", "TrdRegTimestampOrigin_t_317228854"); // 1
    TrdRegTS_18_set.insert("TrdRegTimestampOrigin_t_317228854");
    TrdRegTS_18.add_attribute("DskTyp", "PR"); // 1
    TrdRegTS_18_set.insert("PR");
    TrdRegTS_18.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_18_set.insert("1");
    TrdRegTS_18.add_attribute("DskOrdHndlInst", "MOO"); // 1
    TrdRegTS_18_set.insert("MOO");
    all_values.push_back(TrdRegTS_18_set);
    all_compo_names.insert("TrdRegTS_18_set");

    elt.add_element(TrdRegTS_18);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_19{"TrdRegTS"};
    multiset<string> TrdRegTS_19_set;
    TrdRegTS_19.add_attribute("TS", "TrdRegTimestamp_t_1883670217"); // 1
    TrdRegTS_19_set.insert("TrdRegTimestamp_t_1883670217");
    TrdRegTS_19.add_attribute("Typ", "2"); // 1
    TrdRegTS_19_set.insert("2");
    TrdRegTS_19.add_attribute("Src", "TrdRegTimestampOrigin_t_326269439"); // 1
    TrdRegTS_19_set.insert("TrdRegTimestampOrigin_t_326269439");
    TrdRegTS_19.add_attribute("DskTyp", "A"); // 1
    TrdRegTS_19_set.insert("A");
    TrdRegTS_19.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_19_set.insert("1");
    TrdRegTS_19.add_attribute("DskOrdHndlInst", "RSV"); // 1
    TrdRegTS_19_set.insert("RSV");
    all_values.push_back(TrdRegTS_19_set);
    all_compo_names.insert("TrdRegTS_19_set");

    elt.add_element(TrdRegTS_19);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_20{"TrdRegTS"};
    multiset<string> TrdRegTS_20_set;
    TrdRegTS_20.add_attribute("TS", "TrdRegTimestamp_t_190748890"); // 1
    TrdRegTS_20_set.insert("TrdRegTimestamp_t_190748890");
    TrdRegTS_20.add_attribute("Typ", "4"); // 1
    TrdRegTS_20_set.insert("4");
    TrdRegTS_20.add_attribute("Src", "TrdRegTimestampOrigin_t_401304781"); // 1
    TrdRegTS_20_set.insert("TrdRegTimestampOrigin_t_401304781");
    TrdRegTS_20.add_attribute("DskTyp", "T"); // 1
    TrdRegTS_20_set.insert("T");
    TrdRegTS_20.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_20_set.insert("1");
    TrdRegTS_20.add_attribute("DskOrdHndlInst", "TMO"); // 1
    TrdRegTS_20_set.insert("TMO");
    all_values.push_back(TrdRegTS_20_set);
    all_compo_names.insert("TrdRegTS_20_set");

    elt.add_element(TrdRegTS_20);
  } // end TrdRegTS
  { // Amt
    xml_element Amt_16{"Amt"};
    multiset<string> Amt_16_set;
    Amt_16.add_attribute("Typ", "PREM"); // 1
    Amt_16_set.insert("PREM");
    Amt_16.add_attribute("Amt", "PosAmt_t_838770593"); // 1
    Amt_16_set.insert("PosAmt_t_838770593");
    Amt_16.add_attribute("Ccy", "PositionCurrency_t_1541288101"); // 1
    Amt_16_set.insert("PositionCurrency_t_1541288101");
    all_values.push_back(Amt_16_set);
    all_compo_names.insert("Amt_16_set");

    elt.add_element(Amt_16);
  } // end Amt
  { // Amt
    xml_element Amt_17{"Amt"};
    multiset<string> Amt_17_set;
    Amt_17.add_attribute("Typ", "BANK"); // 1
    Amt_17_set.insert("BANK");
    Amt_17.add_attribute("Amt", "PosAmt_t_1113074963"); // 1
    Amt_17_set.insert("PosAmt_t_1113074963");
    Amt_17.add_attribute("Ccy", "PositionCurrency_t_621988371"); // 1
    Amt_17_set.insert("PositionCurrency_t_621988371");
    all_values.push_back(Amt_17_set);
    all_compo_names.insert("Amt_17_set");

    elt.add_element(Amt_17);
  } // end Amt
  { // RptSide
    xml_element RptSide_1{"RptSide"};
    multiset<string> RptSide_1_set;
    RptSide_1.add_attribute("Side", "C"); // 1
    RptSide_1_set.insert("C");
    RptSide_1.add_attribute("SideExecID", "SideExecID_t_1824742606"); // 1
    RptSide_1_set.insert("SideExecID_t_1824742606");
    RptSide_1.add_attribute("OrdDelay", "1757692531"); // 1
    RptSide_1_set.insert("1757692531");
    RptSide_1.add_attribute("OrdDelayUnit", "15"); // 1
    RptSide_1_set.insert("15");
    RptSide_1.add_attribute("Acct", "Account_t_1760327932"); // 1
    RptSide_1_set.insert("Account_t_1760327932");
    RptSide_1.add_attribute("AcctIDSrc", "1"); // 1
    RptSide_1_set.insert("1");
    RptSide_1.add_attribute("AcctTyp", "3"); // 1
    RptSide_1_set.insert("3");
    RptSide_1.add_attribute("ProcCode", "4"); // 1
    RptSide_1_set.insert("4");
    RptSide_1.add_attribute("OddLot", "Y"); // 1
    RptSide_1_set.insert("Y");
    RptSide_1.add_attribute("InptSrc", "TradeInputSource_t_1170451990"); // 1
    RptSide_1_set.insert("TradeInputSource_t_1170451990");
    RptSide_1.add_attribute("InptDev", "TradeInputDevice_t_269942886"); // 1
    RptSide_1_set.insert("TradeInputDevice_t_269942886");
    RptSide_1.add_attribute("ComplianceID", "ComplianceID_t_856402905"); // 1
    RptSide_1_set.insert("ComplianceID_t_856402905");
    RptSide_1.add_attribute("SolFlag", "Y"); // 1
    RptSide_1_set.insert("Y");
    RptSide_1.add_attribute("CustCpcty", "2"); // 1
    RptSide_1_set.insert("2");
    RptSide_1.add_attribute("SesID", "4"); // 1
    RptSide_1_set.insert("4");
    RptSide_1.add_attribute("SesSub", "4"); // 1
    RptSide_1_set.insert("4");
    RptSide_1.add_attribute("TmBkt", "TimeBracket_t_1515894647"); // 1
    RptSide_1_set.insert("TimeBracket_t_1515894647");
    RptSide_1.add_attribute("NetGrossInd", "2"); // 1
    RptSide_1_set.insert("2");
    RptSide_1.add_attribute("Ccy", "EUR"); // 1
    RptSide_1_set.insert("EUR");
    RptSide_1.add_attribute("SettlCcy", "USD"); // 1
    RptSide_1_set.insert("USD");
    RptSide_1.add_attribute("NumDaysInt", "1143104690"); // 1
    RptSide_1_set.insert("1143104690");
    RptSide_1.add_attribute("ExDt", "ExDate_t_1742583220"); // 1
    RptSide_1_set.insert("ExDate_t_1742583220");
    RptSide_1.add_attribute("AcrdIntRt", "18000680.450000"); // 1
    RptSide_1_set.insert("18000680.450000");
    RptSide_1.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_1981875283"); // 1
    RptSide_1_set.insert("AccruedInterestAmt_t_1981875283");
    RptSide_1.add_attribute("IntAtMat", "InterestAtMaturity_t_1136387673"); // 1
    RptSide_1_set.insert("InterestAtMaturity_t_1136387673");
    RptSide_1.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_25005799"); // 1
    RptSide_1_set.insert("EndAccruedInterestAmt_t_25005799");
    RptSide_1.add_attribute("StartCsh", "StartCash_t_947466598"); // 1
    RptSide_1_set.insert("StartCash_t_947466598");
    RptSide_1.add_attribute("EndCsh", "EndCash_t_1758376044"); // 1
    RptSide_1_set.insert("EndCash_t_1758376044");
    RptSide_1.add_attribute("Concession", "Concession_t_2103846096"); // 1
    RptSide_1_set.insert("Concession_t_2103846096");
    RptSide_1.add_attribute("TotTakedown", "TotalTakedown_t_67980257"); // 1
    RptSide_1_set.insert("TotalTakedown_t_67980257");
    RptSide_1.add_attribute("NetMny", "NetMoney_t_1435635002"); // 1
    RptSide_1_set.insert("NetMoney_t_1435635002");
    RptSide_1.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1714054980"); // 1
    RptSide_1_set.insert("SettlCurrAmt_t_1714054980");
    RptSide_1.add_attribute("SettlCurrFxRt", "13656131.200000"); // 1
    RptSide_1_set.insert("13656131.200000");
    RptSide_1.add_attribute("SettlCurrFxRtCalc", "M"); // 1
    RptSide_1_set.insert("M");
    RptSide_1.add_attribute("PosEfct", "C"); // 1
    RptSide_1_set.insert("C");
    RptSide_1.add_attribute("MLegRptTyp", "3"); // 1
    RptSide_1_set.insert("3");
    RptSide_1.add_attribute("ExchRule", "ExchangeRule_t_978552424"); // 1
    RptSide_1_set.insert("ExchangeRule_t_978552424");
    RptSide_1.add_attribute("AllocInd", "1"); // 1
    RptSide_1_set.insert("1");
    RptSide_1.add_attribute("PreallocMeth", "1"); // 1
    RptSide_1_set.insert("1");
    RptSide_1.add_attribute("AllocID", "AllocID_t_1248495310"); // 1
    RptSide_1_set.insert("AllocID_t_1248495310");
    RptSide_1.add_attribute("SideGrossTradeAmt", "SideGrossTradeAmt_t_1689507292"); // 1
    RptSide_1_set.insert("SideGrossTradeAmt_t_1689507292");
    RptSide_1.add_attribute("AgrsrInd", "Y"); // 1
    RptSide_1_set.insert("Y");
    RptSide_1.add_attribute("SideQty", "1844707635"); // 1
    RptSide_1_set.insert("1844707635");
    RptSide_1.add_attribute("RptID", "SideTradeReportID_t_1902449773"); // 1
    RptSide_1_set.insert("SideTradeReportID_t_1902449773");
    RptSide_1.add_attribute("FillStationCd", "SideFillStationCd_t_607156011"); // 1
    RptSide_1_set.insert("SideFillStationCd_t_607156011");
    RptSide_1.add_attribute("RsnCD", "SideReasonCd_t_1213118634"); // 1
    RptSide_1_set.insert("SideReasonCd_t_1213118634");
    RptSide_1.add_attribute("RptSeq", "158657496"); // 1
    RptSide_1_set.insert("158657496");
    RptSide_1.add_attribute("TrdSubTyp", "29"); // 1
    RptSide_1_set.insert("29");
    RptSide_1.add_attribute("OrdCat", "9"); // 1
    RptSide_1_set.insert("9");
    all_values.push_back(RptSide_1_set);
    all_compo_names.insert("RptSide_1_set");

    {
      xml_element Pty_462{"Pty"};
      multiset<string> Pty_462_set;
      Pty_462.add_attribute("ID", "PartyID_t_83698395"); // 2
      Pty_462_set.insert("PartyID_t_83698395");
      Pty_462.add_attribute("Src", "G"); // 2
      Pty_462_set.insert("G");
      Pty_462.add_attribute("R", "75"); // 2
      Pty_462_set.insert("75");
      all_values.push_back(Pty_462_set);
      all_compo_names.insert("Pty_462_set");

      {
        xml_element Sub_462{"Sub"};
        multiset<string> Sub_462_set;
        Sub_462.add_attribute("ID", "PartySubID_t_1826281615"); // 3
        Sub_462_set.insert("PartySubID_t_1826281615");
        Sub_462.add_attribute("Typ", "30"); // 3
        Sub_462_set.insert("30");
        all_values.push_back(Sub_462_set);
        all_compo_names.insert("Sub_462_set");

        Pty_462.add_element(Sub_462);
      }
      RptSide_1.add_element(Pty_462);
    }
    {
      xml_element ClrInst_10{"ClrInst"};
      multiset<string> ClrInst_10_set;
      ClrInst_10.add_attribute("ClrngInstrctn", "13"); // 2
      ClrInst_10_set.insert("13");
      all_values.push_back(ClrInst_10_set);
      all_compo_names.insert("ClrInst_10_set");

      RptSide_1.add_element(ClrInst_10);
    }
    {
      xml_element Comm_26{"Comm"};
      multiset<string> Comm_26_set;
      Comm_26.add_attribute("Comm", "Commission_t_815185640"); // 2
      Comm_26_set.insert("Commission_t_815185640");
      Comm_26.add_attribute("CommTyp", "5"); // 2
      Comm_26_set.insert("5");
      Comm_26.add_attribute("Ccy", "USD"); // 2
      Comm_26_set.insert("USD");
      Comm_26.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_26_set.insert("N");
      all_values.push_back(Comm_26_set);
      all_compo_names.insert("Comm_26_set");

      RptSide_1.add_element(Comm_26);
    }
    {
      xml_element ContAmt_3{"ContAmt"};
      multiset<string> ContAmt_3_set;
      ContAmt_3.add_attribute("ContAmtTyp", "4"); // 2
      ContAmt_3_set.insert("4");
      ContAmt_3.add_attribute("ContAmtValu", "18617130.380000"); // 2
      ContAmt_3_set.insert("18617130.380000");
      ContAmt_3.add_attribute("ContAmtCurr", "CAN"); // 2
      ContAmt_3_set.insert("CAN");
      all_values.push_back(ContAmt_3_set);
      all_compo_names.insert("ContAmt_3_set");

      RptSide_1.add_element(ContAmt_3);
    }
    {
      xml_element Stip_195{"Stip"};
      multiset<string> Stip_195_set;
      Stip_195.add_attribute("Typ", "PRICE"); // 2
      Stip_195_set.insert("PRICE");
      Stip_195.add_attribute("Val", "StipulationValue_t_1296864136"); // 2
      Stip_195_set.insert("StipulationValue_t_1296864136");
      all_values.push_back(Stip_195_set);
      all_compo_names.insert("Stip_195_set");

      RptSide_1.add_element(Stip_195);
    }
    {
      xml_element MiscFees_21{"MiscFees"};
      multiset<string> MiscFees_21_set;
      MiscFees_21.add_attribute("Amt", "MiscFeeAmt_t_1021650994"); // 2
      MiscFees_21_set.insert("MiscFeeAmt_t_1021650994");
      MiscFees_21.add_attribute("Curr", "USD"); // 2
      MiscFees_21_set.insert("USD");
      MiscFees_21.add_attribute("Typ", "9"); // 2
      MiscFees_21_set.insert("9");
      MiscFees_21.add_attribute("Basis", "1"); // 2
      MiscFees_21_set.insert("1");
      all_values.push_back(MiscFees_21_set);
      all_compo_names.insert("MiscFees_21_set");

      RptSide_1.add_element(MiscFees_21);
    }
    {
      xml_element SettlDetails_2{"SettlDetails"};
      multiset<string> SettlDetails_2_set;
      SettlDetails_2.add_attribute("SettlSrc", "3"); // 2
      SettlDetails_2_set.insert("3");
      all_values.push_back(SettlDetails_2_set);
      all_compo_names.insert("SettlDetails_2_set");

      {
        xml_element Pty_463{"Pty"};
        multiset<string> Pty_463_set;
        Pty_463.add_attribute("ID", "SettlPartyID_t_1437110586"); // 3
        Pty_463_set.insert("SettlPartyID_t_1437110586");
        Pty_463.add_attribute("Src", "C"); // 3
        Pty_463_set.insert("C");
        Pty_463.add_attribute("R", "64"); // 3
        Pty_463_set.insert("64");
        all_values.push_back(Pty_463_set);
        all_compo_names.insert("Pty_463_set");

        {
          xml_element Sub_463{"Sub"};
          multiset<string> Sub_463_set;
          Sub_463.add_attribute("ID", "SettlPartySubID_t_2044266597"); // 4
          Sub_463_set.insert("SettlPartySubID_t_2044266597");
          Sub_463.add_attribute("Typ", "12"); // 4
          Sub_463_set.insert("12");
          all_values.push_back(Sub_463_set);
          all_compo_names.insert("Sub_463_set");

          Pty_463.add_element(Sub_463);
        }
        SettlDetails_2.add_element(Pty_463);
      }
      RptSide_1.add_element(SettlDetails_2);
    }
    {
      xml_element Alloc_10{"Alloc"};
      multiset<string> Alloc_10_set;
      Alloc_10.add_attribute("Acct", "AllocAccount_t_1585615790"); // 2
      Alloc_10_set.insert("AllocAccount_t_1585615790");
      Alloc_10.add_attribute("ActIDSrc", "1"); // 2
      Alloc_10_set.insert("1");
      Alloc_10.add_attribute("AllocSettlCcy", "USD"); // 2
      Alloc_10_set.insert("USD");
      Alloc_10.add_attribute("IndAllocID", "IndividualAllocID_t_845679658"); // 2
      Alloc_10_set.insert("IndividualAllocID_t_845679658");
      Alloc_10.add_attribute("Qty", "5664216.090000"); // 2
      Alloc_10_set.insert("5664216.090000");
      Alloc_10.add_attribute("CustCpcty", "AllocCustomerCapacity_t_1348112153"); // 2
      Alloc_10_set.insert("AllocCustomerCapacity_t_1348112153");
      Alloc_10.add_attribute("Meth", "2"); // 2
      Alloc_10_set.insert("2");
      Alloc_10.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_379268702"); // 2
      Alloc_10_set.insert("SecondaryIndividualAllocID_t_379268702");
      Alloc_10.add_attribute("ClrFeeInd", "AllocClearingFeeIndicator_t_15814146"); // 2
      Alloc_10_set.insert("AllocClearingFeeIndicator_t_15814146");
      all_values.push_back(Alloc_10_set);
      all_compo_names.insert("Alloc_10_set");

      {
        xml_element Pty_464{"Pty"};
        multiset<string> Pty_464_set;
        Pty_464.add_attribute("ID", "Nested2PartyID_t_647791170"); // 3
        Pty_464_set.insert("Nested2PartyID_t_647791170");
        Pty_464.add_attribute("Src", "I"); // 3
        Pty_464_set.insert("I");
        Pty_464.add_attribute("R", "27"); // 3
        Pty_464_set.insert("27");
        all_values.push_back(Pty_464_set);
        all_compo_names.insert("Pty_464_set");

        {
          xml_element Sub_464{"Sub"};
          multiset<string> Sub_464_set;
          Sub_464.add_attribute("ID", "Nested2PartySubID_t_517712275"); // 4
          Sub_464_set.insert("Nested2PartySubID_t_517712275");
          Sub_464.add_attribute("Typ", "22"); // 4
          Sub_464_set.insert("22");
          all_values.push_back(Sub_464_set);
          all_compo_names.insert("Sub_464_set");

          Pty_464.add_element(Sub_464);
        }
        Alloc_10.add_element(Pty_464);
      }
      RptSide_1.add_element(Alloc_10);
    }
    {
      xml_element TrdRptOrdDetl_1{"TrdRptOrdDetl"};
      multiset<string> TrdRptOrdDetl_1_set;
      TrdRptOrdDetl_1.add_attribute("OrdID", "OrderID_t_156121573"); // 2
      TrdRptOrdDetl_1_set.insert("OrderID_t_156121573");
      TrdRptOrdDetl_1.add_attribute("OrdID2", "SecondaryOrderID_t_2101688359"); // 2
      TrdRptOrdDetl_1_set.insert("SecondaryOrderID_t_2101688359");
      TrdRptOrdDetl_1.add_attribute("ClOrdID", "ClOrdID_t_2014299764"); // 2
      TrdRptOrdDetl_1_set.insert("ClOrdID_t_2014299764");
      TrdRptOrdDetl_1.add_attribute("ClOrdID2", "SecondaryClOrdID_t_918830249"); // 2
      TrdRptOrdDetl_1_set.insert("SecondaryClOrdID_t_918830249");
      TrdRptOrdDetl_1.add_attribute("ListID", "ListID_t_1251068848"); // 2
      TrdRptOrdDetl_1_set.insert("ListID_t_1251068848");
      TrdRptOrdDetl_1.add_attribute("RefOrdID", "RefOrderID_t_888467110"); // 2
      TrdRptOrdDetl_1_set.insert("RefOrderID_t_888467110");
      TrdRptOrdDetl_1.add_attribute("RefOrdIDSrc", "2"); // 2
      TrdRptOrdDetl_1_set.insert("2");
      TrdRptOrdDetl_1.add_attribute("RefOrdIDRsn", "2"); // 2
      TrdRptOrdDetl_1_set.insert("2");
      TrdRptOrdDetl_1.add_attribute("OrdTyp", "5"); // 2
      TrdRptOrdDetl_1_set.insert("5");
      TrdRptOrdDetl_1.add_attribute("Px", "13548804.640000"); // 2
      TrdRptOrdDetl_1_set.insert("13548804.640000");
      TrdRptOrdDetl_1.add_attribute("StopPx", "7580622.440000"); // 2
      TrdRptOrdDetl_1_set.insert("7580622.440000");
      TrdRptOrdDetl_1.add_attribute("ExecInst", "k"); // 2
      TrdRptOrdDetl_1_set.insert("k");
      TrdRptOrdDetl_1.add_attribute("OrdStat", "4"); // 2
      TrdRptOrdDetl_1_set.insert("4");
      TrdRptOrdDetl_1.add_attribute("LeavesQty", "375368.900000"); // 2
      TrdRptOrdDetl_1_set.insert("375368.900000");
      TrdRptOrdDetl_1.add_attribute("CumQty", "10947239.070000"); // 2
      TrdRptOrdDetl_1_set.insert("10947239.070000");
      TrdRptOrdDetl_1.add_attribute("TmInForce", "0"); // 2
      TrdRptOrdDetl_1_set.insert("0");
      TrdRptOrdDetl_1.add_attribute("ExpireTm", "ExpireTime_t_1623152681"); // 2
      TrdRptOrdDetl_1_set.insert("ExpireTime_t_1623152681");
      TrdRptOrdDetl_1.add_attribute("Cpcty", "R"); // 2
      TrdRptOrdDetl_1_set.insert("R");
      TrdRptOrdDetl_1.add_attribute("Rstctions", "C"); // 2
      TrdRptOrdDetl_1_set.insert("C");
      TrdRptOrdDetl_1.add_attribute("BkngTyp", "0"); // 2
      TrdRptOrdDetl_1_set.insert("0");
      TrdRptOrdDetl_1.add_attribute("OrigCustOrdCpcty", "1"); // 2
      TrdRptOrdDetl_1_set.insert("1");
      TrdRptOrdDetl_1.add_attribute("OrdInptDev", "OrderInputDevice_t_506413062"); // 2
      TrdRptOrdDetl_1_set.insert("OrderInputDevice_t_506413062");
      TrdRptOrdDetl_1.add_attribute("LotTyp", "1"); // 2
      TrdRptOrdDetl_1_set.insert("1");
      TrdRptOrdDetl_1.add_attribute("TransBkdTm", "TransBkdTime_t_1136863630"); // 2
      TrdRptOrdDetl_1_set.insert("TransBkdTime_t_1136863630");
      TrdRptOrdDetl_1.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_885681764"); // 2
      TrdRptOrdDetl_1_set.insert("OrigOrdModTime_t_885681764");
      all_values.push_back(TrdRptOrdDetl_1_set);
      all_compo_names.insert("TrdRptOrdDetl_1_set");

      {
        xml_element OrdQty_28{"OrdQty"};
        multiset<string> OrdQty_28_set;
        OrdQty_28.add_attribute("Qty", "3614258.700000"); // 3
        OrdQty_28_set.insert("3614258.700000");
        OrdQty_28.add_attribute("Cash", "17846548.010000"); // 3
        OrdQty_28_set.insert("17846548.010000");
        OrdQty_28.add_attribute("Pct", "20252641.580000"); // 3
        OrdQty_28_set.insert("20252641.580000");
        OrdQty_28.add_attribute("RndDir", "1"); // 3
        OrdQty_28_set.insert("1");
        OrdQty_28.add_attribute("RndMod", "1548834.280000"); // 3
        OrdQty_28_set.insert("1548834.280000");
        all_values.push_back(OrdQty_28_set);
        all_compo_names.insert("OrdQty_28_set");

        TrdRptOrdDetl_1.add_element(OrdQty_28);
      }
      {
        xml_element DsplyInstr_9{"DsplyInstr"};
        multiset<string> DsplyInstr_9_set;
        DsplyInstr_9.add_attribute("DisplayQty", "18456568.520000"); // 3
        DsplyInstr_9_set.insert("18456568.520000");
        DsplyInstr_9.add_attribute("SecDspQty", "9594396.260000"); // 3
        DsplyInstr_9_set.insert("9594396.260000");
        DsplyInstr_9.add_attribute("DspWhn", "2"); // 3
        DsplyInstr_9_set.insert("2");
        DsplyInstr_9.add_attribute("DspMthd", "1"); // 3
        DsplyInstr_9_set.insert("1");
        DsplyInstr_9.add_attribute("DsplLwQty", "18782698.750000"); // 3
        DsplyInstr_9_set.insert("18782698.750000");
        DsplyInstr_9.add_attribute("DisplayHighQty", "13601569.870000"); // 3
        DsplyInstr_9_set.insert("13601569.870000");
        DsplyInstr_9.add_attribute("DspMinIncr", "4534564.310000"); // 3
        DsplyInstr_9_set.insert("4534564.310000");
        DsplyInstr_9.add_attribute("RfrshQty", "2433939.290000"); // 3
        DsplyInstr_9_set.insert("2433939.290000");
        all_values.push_back(DsplyInstr_9_set);
        all_compo_names.insert("DsplyInstr_9_set");

        TrdRptOrdDetl_1.add_element(DsplyInstr_9);
      }
      RptSide_1.add_element(TrdRptOrdDetl_1);
    }
    {
      xml_element TrdRegTS_21{"TrdRegTS"};
      multiset<string> TrdRegTS_21_set;
      TrdRegTS_21.add_attribute("TS", "SideTrdRegTimestamp_t_446227063"); // 2
      TrdRegTS_21_set.insert("SideTrdRegTimestamp_t_446227063");
      TrdRegTS_21.add_attribute("Typ", "4"); // 2
      TrdRegTS_21_set.insert("4");
      TrdRegTS_21.add_attribute("Src", "SideTrdRegTimestampSrc_t_1598274394"); // 2
      TrdRegTS_21_set.insert("SideTrdRegTimestampSrc_t_1598274394");
      all_values.push_back(TrdRegTS_21_set);
      all_compo_names.insert("TrdRegTS_21_set");

      RptSide_1.add_element(TrdRegTS_21);
    }
    elt.add_element(RptSide_1);
  } // end RptSide
  { // RptSide
    xml_element RptSide_2{"RptSide"};
    multiset<string> RptSide_2_set;
    RptSide_2.add_attribute("Side", "D"); // 1
    RptSide_2_set.insert("D");
    RptSide_2.add_attribute("SideExecID", "SideExecID_t_1412227761"); // 1
    RptSide_2_set.insert("SideExecID_t_1412227761");
    RptSide_2.add_attribute("OrdDelay", "1345167960"); // 1
    RptSide_2_set.insert("1345167960");
    RptSide_2.add_attribute("OrdDelayUnit", "10"); // 1
    RptSide_2_set.insert("10");
    RptSide_2.add_attribute("Acct", "Account_t_359468020"); // 1
    RptSide_2_set.insert("Account_t_359468020");
    RptSide_2.add_attribute("AcctIDSrc", "1"); // 1
    RptSide_2_set.insert("1");
    RptSide_2.add_attribute("AcctTyp", "7"); // 1
    RptSide_2_set.insert("7");
    RptSide_2.add_attribute("ProcCode", "5"); // 1
    RptSide_2_set.insert("5");
    RptSide_2.add_attribute("OddLot", "Y"); // 1
    RptSide_2_set.insert("Y");
    RptSide_2.add_attribute("InptSrc", "TradeInputSource_t_1862478450"); // 1
    RptSide_2_set.insert("TradeInputSource_t_1862478450");
    RptSide_2.add_attribute("InptDev", "TradeInputDevice_t_319050594"); // 1
    RptSide_2_set.insert("TradeInputDevice_t_319050594");
    RptSide_2.add_attribute("ComplianceID", "ComplianceID_t_1143597778"); // 1
    RptSide_2_set.insert("ComplianceID_t_1143597778");
    RptSide_2.add_attribute("SolFlag", "Y"); // 1
    RptSide_2_set.insert("Y");
    RptSide_2.add_attribute("CustCpcty", "2"); // 1
    RptSide_2_set.insert("2");
    RptSide_2.add_attribute("SesID", "1"); // 1
    RptSide_2_set.insert("1");
    RptSide_2.add_attribute("SesSub", "4"); // 1
    RptSide_2_set.insert("4");
    RptSide_2.add_attribute("TmBkt", "TimeBracket_t_1093085378"); // 1
    RptSide_2_set.insert("TimeBracket_t_1093085378");
    RptSide_2.add_attribute("NetGrossInd", "1"); // 1
    RptSide_2_set.insert("1");
    RptSide_2.add_attribute("Ccy", "USD"); // 1
    RptSide_2_set.insert("USD");
    RptSide_2.add_attribute("SettlCcy", "USD"); // 1
    RptSide_2_set.insert("USD");
    RptSide_2.add_attribute("NumDaysInt", "1357056945"); // 1
    RptSide_2_set.insert("1357056945");
    RptSide_2.add_attribute("ExDt", "ExDate_t_1170222577"); // 1
    RptSide_2_set.insert("ExDate_t_1170222577");
    RptSide_2.add_attribute("AcrdIntRt", "19155763.040000"); // 1
    RptSide_2_set.insert("19155763.040000");
    RptSide_2.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_569730285"); // 1
    RptSide_2_set.insert("AccruedInterestAmt_t_569730285");
    RptSide_2.add_attribute("IntAtMat", "InterestAtMaturity_t_1623679008"); // 1
    RptSide_2_set.insert("InterestAtMaturity_t_1623679008");
    RptSide_2.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_11486585"); // 1
    RptSide_2_set.insert("EndAccruedInterestAmt_t_11486585");
    RptSide_2.add_attribute("StartCsh", "StartCash_t_1015957348"); // 1
    RptSide_2_set.insert("StartCash_t_1015957348");
    RptSide_2.add_attribute("EndCsh", "EndCash_t_1837965811"); // 1
    RptSide_2_set.insert("EndCash_t_1837965811");
    RptSide_2.add_attribute("Concession", "Concession_t_1609760979"); // 1
    RptSide_2_set.insert("Concession_t_1609760979");
    RptSide_2.add_attribute("TotTakedown", "TotalTakedown_t_72763008"); // 1
    RptSide_2_set.insert("TotalTakedown_t_72763008");
    RptSide_2.add_attribute("NetMny", "NetMoney_t_1102709924"); // 1
    RptSide_2_set.insert("NetMoney_t_1102709924");
    RptSide_2.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_807445291"); // 1
    RptSide_2_set.insert("SettlCurrAmt_t_807445291");
    RptSide_2.add_attribute("SettlCurrFxRt", "13145892.070000"); // 1
    RptSide_2_set.insert("13145892.070000");
    RptSide_2.add_attribute("SettlCurrFxRtCalc", "D"); // 1
    RptSide_2_set.insert("D");
    RptSide_2.add_attribute("PosEfct", "F"); // 1
    RptSide_2_set.insert("F");
    RptSide_2.add_attribute("MLegRptTyp", "2"); // 1
    RptSide_2_set.insert("2");
    RptSide_2.add_attribute("ExchRule", "ExchangeRule_t_1378597423"); // 1
    RptSide_2_set.insert("ExchangeRule_t_1378597423");
    RptSide_2.add_attribute("AllocInd", "5"); // 1
    RptSide_2_set.insert("5");
    RptSide_2.add_attribute("PreallocMeth", "1"); // 1
    RptSide_2_set.insert("1");
    RptSide_2.add_attribute("AllocID", "AllocID_t_1697648018"); // 1
    RptSide_2_set.insert("AllocID_t_1697648018");
    RptSide_2.add_attribute("SideGrossTradeAmt", "SideGrossTradeAmt_t_1137937399"); // 1
    RptSide_2_set.insert("SideGrossTradeAmt_t_1137937399");
    RptSide_2.add_attribute("AgrsrInd", "Y"); // 1
    RptSide_2_set.insert("Y");
    RptSide_2.add_attribute("SideQty", "1006078595"); // 1
    RptSide_2_set.insert("1006078595");
    RptSide_2.add_attribute("RptID", "SideTradeReportID_t_1019733293"); // 1
    RptSide_2_set.insert("SideTradeReportID_t_1019733293");
    RptSide_2.add_attribute("FillStationCd", "SideFillStationCd_t_82234517"); // 1
    RptSide_2_set.insert("SideFillStationCd_t_82234517");
    RptSide_2.add_attribute("RsnCD", "SideReasonCd_t_2099163973"); // 1
    RptSide_2_set.insert("SideReasonCd_t_2099163973");
    RptSide_2.add_attribute("RptSeq", "779309698"); // 1
    RptSide_2_set.insert("779309698");
    RptSide_2.add_attribute("TrdSubTyp", "30"); // 1
    RptSide_2_set.insert("30");
    RptSide_2.add_attribute("OrdCat", "9"); // 1
    RptSide_2_set.insert("9");
    all_values.push_back(RptSide_2_set);
    all_compo_names.insert("RptSide_2_set");

    {
      xml_element Pty_465{"Pty"};
      multiset<string> Pty_465_set;
      Pty_465.add_attribute("ID", "PartyID_t_237059307"); // 2
      Pty_465_set.insert("PartyID_t_237059307");
      Pty_465.add_attribute("Src", "D"); // 2
      Pty_465_set.insert("D");
      Pty_465.add_attribute("R", "51"); // 2
      Pty_465_set.insert("51");
      all_values.push_back(Pty_465_set);
      all_compo_names.insert("Pty_465_set");

      {
        xml_element Sub_465{"Sub"};
        multiset<string> Sub_465_set;
        Sub_465.add_attribute("ID", "PartySubID_t_1407281884"); // 3
        Sub_465_set.insert("PartySubID_t_1407281884");
        Sub_465.add_attribute("Typ", "23"); // 3
        Sub_465_set.insert("23");
        all_values.push_back(Sub_465_set);
        all_compo_names.insert("Sub_465_set");

        Pty_465.add_element(Sub_465);
      }
      RptSide_2.add_element(Pty_465);
    }
    {
      xml_element ClrInst_11{"ClrInst"};
      multiset<string> ClrInst_11_set;
      ClrInst_11.add_attribute("ClrngInstrctn", "7"); // 2
      ClrInst_11_set.insert("7");
      all_values.push_back(ClrInst_11_set);
      all_compo_names.insert("ClrInst_11_set");

      RptSide_2.add_element(ClrInst_11);
    }
    {
      xml_element Comm_27{"Comm"};
      multiset<string> Comm_27_set;
      Comm_27.add_attribute("Comm", "Commission_t_883477245"); // 2
      Comm_27_set.insert("Commission_t_883477245");
      Comm_27.add_attribute("CommTyp", "1"); // 2
      Comm_27_set.insert("1");
      Comm_27.add_attribute("Ccy", "GBP"); // 2
      Comm_27_set.insert("GBP");
      Comm_27.add_attribute("FundRenewWaiv", "Y"); // 2
      Comm_27_set.insert("Y");
      all_values.push_back(Comm_27_set);
      all_compo_names.insert("Comm_27_set");

      RptSide_2.add_element(Comm_27);
    }
    {
      xml_element ContAmt_4{"ContAmt"};
      multiset<string> ContAmt_4_set;
      ContAmt_4.add_attribute("ContAmtTyp", "14"); // 2
      ContAmt_4_set.insert("14");
      ContAmt_4.add_attribute("ContAmtValu", "16766693.330000"); // 2
      ContAmt_4_set.insert("16766693.330000");
      ContAmt_4.add_attribute("ContAmtCurr", "EUR"); // 2
      ContAmt_4_set.insert("EUR");
      all_values.push_back(ContAmt_4_set);
      all_compo_names.insert("ContAmt_4_set");

      RptSide_2.add_element(ContAmt_4);
    }
    {
      xml_element Stip_196{"Stip"};
      multiset<string> Stip_196_set;
      Stip_196.add_attribute("Typ", "PIECES"); // 2
      Stip_196_set.insert("PIECES");
      Stip_196.add_attribute("Val", "StipulationValue_t_751348166"); // 2
      Stip_196_set.insert("StipulationValue_t_751348166");
      all_values.push_back(Stip_196_set);
      all_compo_names.insert("Stip_196_set");

      RptSide_2.add_element(Stip_196);
    }
    {
      xml_element MiscFees_22{"MiscFees"};
      multiset<string> MiscFees_22_set;
      MiscFees_22.add_attribute("Amt", "MiscFeeAmt_t_1119379420"); // 2
      MiscFees_22_set.insert("MiscFeeAmt_t_1119379420");
      MiscFees_22.add_attribute("Curr", "CAN"); // 2
      MiscFees_22_set.insert("CAN");
      MiscFees_22.add_attribute("Typ", "10"); // 2
      MiscFees_22_set.insert("10");
      MiscFees_22.add_attribute("Basis", "2"); // 2
      MiscFees_22_set.insert("2");
      all_values.push_back(MiscFees_22_set);
      all_compo_names.insert("MiscFees_22_set");

      RptSide_2.add_element(MiscFees_22);
    }
    {
      xml_element SettlDetails_3{"SettlDetails"};
      multiset<string> SettlDetails_3_set;
      SettlDetails_3.add_attribute("SettlSrc", "1"); // 2
      SettlDetails_3_set.insert("1");
      all_values.push_back(SettlDetails_3_set);
      all_compo_names.insert("SettlDetails_3_set");

      {
        xml_element Pty_466{"Pty"};
        multiset<string> Pty_466_set;
        Pty_466.add_attribute("ID", "SettlPartyID_t_379177133"); // 3
        Pty_466_set.insert("SettlPartyID_t_379177133");
        Pty_466.add_attribute("Src", "F"); // 3
        Pty_466_set.insert("F");
        Pty_466.add_attribute("R", "78"); // 3
        Pty_466_set.insert("78");
        all_values.push_back(Pty_466_set);
        all_compo_names.insert("Pty_466_set");

        {
          xml_element Sub_466{"Sub"};
          multiset<string> Sub_466_set;
          Sub_466.add_attribute("ID", "SettlPartySubID_t_461411650"); // 4
          Sub_466_set.insert("SettlPartySubID_t_461411650");
          Sub_466.add_attribute("Typ", "21"); // 4
          Sub_466_set.insert("21");
          all_values.push_back(Sub_466_set);
          all_compo_names.insert("Sub_466_set");

          Pty_466.add_element(Sub_466);
        }
        SettlDetails_3.add_element(Pty_466);
      }
      RptSide_2.add_element(SettlDetails_3);
    }
    {
      xml_element Alloc_11{"Alloc"};
      multiset<string> Alloc_11_set;
      Alloc_11.add_attribute("Acct", "AllocAccount_t_1535184530"); // 2
      Alloc_11_set.insert("AllocAccount_t_1535184530");
      Alloc_11.add_attribute("ActIDSrc", "5"); // 2
      Alloc_11_set.insert("5");
      Alloc_11.add_attribute("AllocSettlCcy", "CAN"); // 2
      Alloc_11_set.insert("CAN");
      Alloc_11.add_attribute("IndAllocID", "IndividualAllocID_t_966404367"); // 2
      Alloc_11_set.insert("IndividualAllocID_t_966404367");
      Alloc_11.add_attribute("Qty", "1917886.070000"); // 2
      Alloc_11_set.insert("1917886.070000");
      Alloc_11.add_attribute("CustCpcty", "AllocCustomerCapacity_t_1032042073"); // 2
      Alloc_11_set.insert("AllocCustomerCapacity_t_1032042073");
      Alloc_11.add_attribute("Meth", "1"); // 2
      Alloc_11_set.insert("1");
      Alloc_11.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_1170741320"); // 2
      Alloc_11_set.insert("SecondaryIndividualAllocID_t_1170741320");
      Alloc_11.add_attribute("ClrFeeInd", "AllocClearingFeeIndicator_t_1915519318"); // 2
      Alloc_11_set.insert("AllocClearingFeeIndicator_t_1915519318");
      all_values.push_back(Alloc_11_set);
      all_compo_names.insert("Alloc_11_set");

      {
        xml_element Pty_467{"Pty"};
        multiset<string> Pty_467_set;
        Pty_467.add_attribute("ID", "Nested2PartyID_t_1056375409"); // 3
        Pty_467_set.insert("Nested2PartyID_t_1056375409");
        Pty_467.add_attribute("Src", "3"); // 3
        Pty_467_set.insert("3");
        Pty_467.add_attribute("R", "85"); // 3
        Pty_467_set.insert("85");
        all_values.push_back(Pty_467_set);
        all_compo_names.insert("Pty_467_set");

        {
          xml_element Sub_467{"Sub"};
          multiset<string> Sub_467_set;
          Sub_467.add_attribute("ID", "Nested2PartySubID_t_1643123379"); // 4
          Sub_467_set.insert("Nested2PartySubID_t_1643123379");
          Sub_467.add_attribute("Typ", "20"); // 4
          Sub_467_set.insert("20");
          all_values.push_back(Sub_467_set);
          all_compo_names.insert("Sub_467_set");

          Pty_467.add_element(Sub_467);
        }
        Alloc_11.add_element(Pty_467);
      }
      RptSide_2.add_element(Alloc_11);
    }
    {
      xml_element TrdRptOrdDetl_2{"TrdRptOrdDetl"};
      multiset<string> TrdRptOrdDetl_2_set;
      TrdRptOrdDetl_2.add_attribute("OrdID", "OrderID_t_2018664412"); // 2
      TrdRptOrdDetl_2_set.insert("OrderID_t_2018664412");
      TrdRptOrdDetl_2.add_attribute("OrdID2", "SecondaryOrderID_t_889832992"); // 2
      TrdRptOrdDetl_2_set.insert("SecondaryOrderID_t_889832992");
      TrdRptOrdDetl_2.add_attribute("ClOrdID", "ClOrdID_t_25652138"); // 2
      TrdRptOrdDetl_2_set.insert("ClOrdID_t_25652138");
      TrdRptOrdDetl_2.add_attribute("ClOrdID2", "SecondaryClOrdID_t_862544394"); // 2
      TrdRptOrdDetl_2_set.insert("SecondaryClOrdID_t_862544394");
      TrdRptOrdDetl_2.add_attribute("ListID", "ListID_t_1641181158"); // 2
      TrdRptOrdDetl_2_set.insert("ListID_t_1641181158");
      TrdRptOrdDetl_2.add_attribute("RefOrdID", "RefOrderID_t_1145031558"); // 2
      TrdRptOrdDetl_2_set.insert("RefOrderID_t_1145031558");
      TrdRptOrdDetl_2.add_attribute("RefOrdIDSrc", "4"); // 2
      TrdRptOrdDetl_2_set.insert("4");
      TrdRptOrdDetl_2.add_attribute("RefOrdIDRsn", "1"); // 2
      TrdRptOrdDetl_2_set.insert("1");
      TrdRptOrdDetl_2.add_attribute("OrdTyp", "C"); // 2
      TrdRptOrdDetl_2_set.insert("C");
      TrdRptOrdDetl_2.add_attribute("Px", "8576635.750000"); // 2
      TrdRptOrdDetl_2_set.insert("8576635.750000");
      TrdRptOrdDetl_2.add_attribute("StopPx", "21230104.840000"); // 2
      TrdRptOrdDetl_2_set.insert("21230104.840000");
      TrdRptOrdDetl_2.add_attribute("ExecInst", "R"); // 2
      TrdRptOrdDetl_2_set.insert("R");
      TrdRptOrdDetl_2.add_attribute("OrdStat", "0"); // 2
      TrdRptOrdDetl_2_set.insert("0");
      TrdRptOrdDetl_2.add_attribute("LeavesQty", "7314016.680000"); // 2
      TrdRptOrdDetl_2_set.insert("7314016.680000");
      TrdRptOrdDetl_2.add_attribute("CumQty", "5571117.070000"); // 2
      TrdRptOrdDetl_2_set.insert("5571117.070000");
      TrdRptOrdDetl_2.add_attribute("TmInForce", "3"); // 2
      TrdRptOrdDetl_2_set.insert("3");
      TrdRptOrdDetl_2.add_attribute("ExpireTm", "ExpireTime_t_119102550"); // 2
      TrdRptOrdDetl_2_set.insert("ExpireTime_t_119102550");
      TrdRptOrdDetl_2.add_attribute("Cpcty", "P"); // 2
      TrdRptOrdDetl_2_set.insert("P");
      TrdRptOrdDetl_2.add_attribute("Rstctions", "2"); // 2
      TrdRptOrdDetl_2_set.insert("2");
      TrdRptOrdDetl_2.add_attribute("BkngTyp", "2"); // 2
      TrdRptOrdDetl_2_set.insert("2");
      TrdRptOrdDetl_2.add_attribute("OrigCustOrdCpcty", "1"); // 2
      TrdRptOrdDetl_2_set.insert("1");
      TrdRptOrdDetl_2.add_attribute("OrdInptDev", "OrderInputDevice_t_193655778"); // 2
      TrdRptOrdDetl_2_set.insert("OrderInputDevice_t_193655778");
      TrdRptOrdDetl_2.add_attribute("LotTyp", "2"); // 2
      TrdRptOrdDetl_2_set.insert("2");
      TrdRptOrdDetl_2.add_attribute("TransBkdTm", "TransBkdTime_t_1076933816"); // 2
      TrdRptOrdDetl_2_set.insert("TransBkdTime_t_1076933816");
      TrdRptOrdDetl_2.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_1364397099"); // 2
      TrdRptOrdDetl_2_set.insert("OrigOrdModTime_t_1364397099");
      all_values.push_back(TrdRptOrdDetl_2_set);
      all_compo_names.insert("TrdRptOrdDetl_2_set");

      {
        xml_element OrdQty_29{"OrdQty"};
        multiset<string> OrdQty_29_set;
        OrdQty_29.add_attribute("Qty", "5439404.830000"); // 3
        OrdQty_29_set.insert("5439404.830000");
        OrdQty_29.add_attribute("Cash", "21333092.250000"); // 3
        OrdQty_29_set.insert("21333092.250000");
        OrdQty_29.add_attribute("Pct", "2350811.850000"); // 3
        OrdQty_29_set.insert("2350811.850000");
        OrdQty_29.add_attribute("RndDir", "0"); // 3
        OrdQty_29_set.insert("0");
        OrdQty_29.add_attribute("RndMod", "16289489.560000"); // 3
        OrdQty_29_set.insert("16289489.560000");
        all_values.push_back(OrdQty_29_set);
        all_compo_names.insert("OrdQty_29_set");

        TrdRptOrdDetl_2.add_element(OrdQty_29);
      }
      {
        xml_element DsplyInstr_10{"DsplyInstr"};
        multiset<string> DsplyInstr_10_set;
        DsplyInstr_10.add_attribute("DisplayQty", "11734383.420000"); // 3
        DsplyInstr_10_set.insert("11734383.420000");
        DsplyInstr_10.add_attribute("SecDspQty", "7571163.260000"); // 3
        DsplyInstr_10_set.insert("7571163.260000");
        DsplyInstr_10.add_attribute("DspWhn", "1"); // 3
        DsplyInstr_10_set.insert("1");
        DsplyInstr_10.add_attribute("DspMthd", "2"); // 3
        DsplyInstr_10_set.insert("2");
        DsplyInstr_10.add_attribute("DsplLwQty", "16196607.200000"); // 3
        DsplyInstr_10_set.insert("16196607.200000");
        DsplyInstr_10.add_attribute("DisplayHighQty", "20124794.590000"); // 3
        DsplyInstr_10_set.insert("20124794.590000");
        DsplyInstr_10.add_attribute("DspMinIncr", "1966383.910000"); // 3
        DsplyInstr_10_set.insert("1966383.910000");
        DsplyInstr_10.add_attribute("RfrshQty", "5571988.720000"); // 3
        DsplyInstr_10_set.insert("5571988.720000");
        all_values.push_back(DsplyInstr_10_set);
        all_compo_names.insert("DsplyInstr_10_set");

        TrdRptOrdDetl_2.add_element(DsplyInstr_10);
      }
      RptSide_2.add_element(TrdRptOrdDetl_2);
    }
    {
      xml_element TrdRegTS_22{"TrdRegTS"};
      multiset<string> TrdRegTS_22_set;
      TrdRegTS_22.add_attribute("TS", "SideTrdRegTimestamp_t_104381109"); // 2
      TrdRegTS_22_set.insert("SideTrdRegTimestamp_t_104381109");
      TrdRegTS_22.add_attribute("Typ", "7"); // 2
      TrdRegTS_22_set.insert("7");
      TrdRegTS_22.add_attribute("Src", "SideTrdRegTimestampSrc_t_1414862447"); // 2
      TrdRegTS_22_set.insert("SideTrdRegTimestampSrc_t_1414862447");
      all_values.push_back(TrdRegTS_22_set);
      all_compo_names.insert("TrdRegTS_22_set");

      RptSide_2.add_element(TrdRegTS_22);
    }
    elt.add_element(RptSide_2);
  } // end RptSide
  { // RptSide
    xml_element RptSide_3{"RptSide"};
    multiset<string> RptSide_3_set;
    RptSide_3.add_attribute("Side", "A"); // 1
    RptSide_3_set.insert("A");
    RptSide_3.add_attribute("SideExecID", "SideExecID_t_8861371"); // 1
    RptSide_3_set.insert("SideExecID_t_8861371");
    RptSide_3.add_attribute("OrdDelay", "903762744"); // 1
    RptSide_3_set.insert("903762744");
    RptSide_3.add_attribute("OrdDelayUnit", "10"); // 1
    RptSide_3_set.insert("10");
    RptSide_3.add_attribute("Acct", "Account_t_565973078"); // 1
    RptSide_3_set.insert("Account_t_565973078");
    RptSide_3.add_attribute("AcctIDSrc", "4"); // 1
    RptSide_3_set.insert("4");
    RptSide_3.add_attribute("AcctTyp", "4"); // 1
    RptSide_3_set.insert("4");
    RptSide_3.add_attribute("ProcCode", "0"); // 1
    RptSide_3_set.insert("0");
    RptSide_3.add_attribute("OddLot", "Y"); // 1
    RptSide_3_set.insert("Y");
    RptSide_3.add_attribute("InptSrc", "TradeInputSource_t_674274904"); // 1
    RptSide_3_set.insert("TradeInputSource_t_674274904");
    RptSide_3.add_attribute("InptDev", "TradeInputDevice_t_1889626800"); // 1
    RptSide_3_set.insert("TradeInputDevice_t_1889626800");
    RptSide_3.add_attribute("ComplianceID", "ComplianceID_t_1318586687"); // 1
    RptSide_3_set.insert("ComplianceID_t_1318586687");
    RptSide_3.add_attribute("SolFlag", "Y"); // 1
    RptSide_3_set.insert("Y");
    RptSide_3.add_attribute("CustCpcty", "1"); // 1
    RptSide_3_set.insert("1");
    RptSide_3.add_attribute("SesID", "1"); // 1
    RptSide_3_set.insert("1");
    RptSide_3.add_attribute("SesSub", "3"); // 1
    RptSide_3_set.insert("3");
    RptSide_3.add_attribute("TmBkt", "TimeBracket_t_804902546"); // 1
    RptSide_3_set.insert("TimeBracket_t_804902546");
    RptSide_3.add_attribute("NetGrossInd", "1"); // 1
    RptSide_3_set.insert("1");
    RptSide_3.add_attribute("Ccy", "JPY"); // 1
    RptSide_3_set.insert("JPY");
    RptSide_3.add_attribute("SettlCcy", "CAN"); // 1
    RptSide_3_set.insert("CAN");
    RptSide_3.add_attribute("NumDaysInt", "657666155"); // 1
    RptSide_3_set.insert("657666155");
    RptSide_3.add_attribute("ExDt", "ExDate_t_995626499"); // 1
    RptSide_3_set.insert("ExDate_t_995626499");
    RptSide_3.add_attribute("AcrdIntRt", "9618655.140000"); // 1
    RptSide_3_set.insert("9618655.140000");
    RptSide_3.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_522661966"); // 1
    RptSide_3_set.insert("AccruedInterestAmt_t_522661966");
    RptSide_3.add_attribute("IntAtMat", "InterestAtMaturity_t_1192264891"); // 1
    RptSide_3_set.insert("InterestAtMaturity_t_1192264891");
    RptSide_3.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_1519064386"); // 1
    RptSide_3_set.insert("EndAccruedInterestAmt_t_1519064386");
    RptSide_3.add_attribute("StartCsh", "StartCash_t_627043075"); // 1
    RptSide_3_set.insert("StartCash_t_627043075");
    RptSide_3.add_attribute("EndCsh", "EndCash_t_1105426206"); // 1
    RptSide_3_set.insert("EndCash_t_1105426206");
    RptSide_3.add_attribute("Concession", "Concession_t_786443185"); // 1
    RptSide_3_set.insert("Concession_t_786443185");
    RptSide_3.add_attribute("TotTakedown", "TotalTakedown_t_706951020"); // 1
    RptSide_3_set.insert("TotalTakedown_t_706951020");
    RptSide_3.add_attribute("NetMny", "NetMoney_t_1114287577"); // 1
    RptSide_3_set.insert("NetMoney_t_1114287577");
    RptSide_3.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1690205929"); // 1
    RptSide_3_set.insert("SettlCurrAmt_t_1690205929");
    RptSide_3.add_attribute("SettlCurrFxRt", "15182606.340000"); // 1
    RptSide_3_set.insert("15182606.340000");
    RptSide_3.add_attribute("SettlCurrFxRtCalc", "M"); // 1
    RptSide_3_set.insert("M");
    RptSide_3.add_attribute("PosEfct", "R"); // 1
    RptSide_3_set.insert("R");
    RptSide_3.add_attribute("MLegRptTyp", "3"); // 1
    RptSide_3_set.insert("3");
    RptSide_3.add_attribute("ExchRule", "ExchangeRule_t_277374764"); // 1
    RptSide_3_set.insert("ExchangeRule_t_277374764");
    RptSide_3.add_attribute("AllocInd", "2"); // 1
    RptSide_3_set.insert("2");
    RptSide_3.add_attribute("PreallocMeth", "1"); // 1
    RptSide_3_set.insert("1");
    RptSide_3.add_attribute("AllocID", "AllocID_t_19517916"); // 1
    RptSide_3_set.insert("AllocID_t_19517916");
    RptSide_3.add_attribute("SideGrossTradeAmt", "SideGrossTradeAmt_t_961819967"); // 1
    RptSide_3_set.insert("SideGrossTradeAmt_t_961819967");
    RptSide_3.add_attribute("AgrsrInd", "Y"); // 1
    RptSide_3_set.insert("Y");
    RptSide_3.add_attribute("SideQty", "838594885"); // 1
    RptSide_3_set.insert("838594885");
    RptSide_3.add_attribute("RptID", "SideTradeReportID_t_1497320106"); // 1
    RptSide_3_set.insert("SideTradeReportID_t_1497320106");
    RptSide_3.add_attribute("FillStationCd", "SideFillStationCd_t_124796676"); // 1
    RptSide_3_set.insert("SideFillStationCd_t_124796676");
    RptSide_3.add_attribute("RsnCD", "SideReasonCd_t_1643497431"); // 1
    RptSide_3_set.insert("SideReasonCd_t_1643497431");
    RptSide_3.add_attribute("RptSeq", "120417782"); // 1
    RptSide_3_set.insert("120417782");
    RptSide_3.add_attribute("TrdSubTyp", "25"); // 1
    RptSide_3_set.insert("25");
    RptSide_3.add_attribute("OrdCat", "2"); // 1
    RptSide_3_set.insert("2");
    all_values.push_back(RptSide_3_set);
    all_compo_names.insert("RptSide_3_set");

    {
      xml_element Pty_468{"Pty"};
      multiset<string> Pty_468_set;
      Pty_468.add_attribute("ID", "PartyID_t_2064437448"); // 2
      Pty_468_set.insert("PartyID_t_2064437448");
      Pty_468.add_attribute("Src", "8"); // 2
      Pty_468_set.insert("8");
      Pty_468.add_attribute("R", "25"); // 2
      Pty_468_set.insert("25");
      all_values.push_back(Pty_468_set);
      all_compo_names.insert("Pty_468_set");

      {
        xml_element Sub_468{"Sub"};
        multiset<string> Sub_468_set;
        Sub_468.add_attribute("ID", "PartySubID_t_912580300"); // 3
        Sub_468_set.insert("PartySubID_t_912580300");
        Sub_468.add_attribute("Typ", "16"); // 3
        Sub_468_set.insert("16");
        all_values.push_back(Sub_468_set);
        all_compo_names.insert("Sub_468_set");

        Pty_468.add_element(Sub_468);
      }
      RptSide_3.add_element(Pty_468);
    }
    {
      xml_element ClrInst_12{"ClrInst"};
      multiset<string> ClrInst_12_set;
      ClrInst_12.add_attribute("ClrngInstrctn", "6"); // 2
      ClrInst_12_set.insert("6");
      all_values.push_back(ClrInst_12_set);
      all_compo_names.insert("ClrInst_12_set");

      RptSide_3.add_element(ClrInst_12);
    }
    {
      xml_element Comm_28{"Comm"};
      multiset<string> Comm_28_set;
      Comm_28.add_attribute("Comm", "Commission_t_2104845191"); // 2
      Comm_28_set.insert("Commission_t_2104845191");
      Comm_28.add_attribute("CommTyp", "4"); // 2
      Comm_28_set.insert("4");
      Comm_28.add_attribute("Ccy", "CHF"); // 2
      Comm_28_set.insert("CHF");
      Comm_28.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_28_set.insert("N");
      all_values.push_back(Comm_28_set);
      all_compo_names.insert("Comm_28_set");

      RptSide_3.add_element(Comm_28);
    }
    {
      xml_element ContAmt_5{"ContAmt"};
      multiset<string> ContAmt_5_set;
      ContAmt_5.add_attribute("ContAmtTyp", "6"); // 2
      ContAmt_5_set.insert("6");
      ContAmt_5.add_attribute("ContAmtValu", "295916.780000"); // 2
      ContAmt_5_set.insert("295916.780000");
      ContAmt_5.add_attribute("ContAmtCurr", "GBP"); // 2
      ContAmt_5_set.insert("GBP");
      all_values.push_back(ContAmt_5_set);
      all_compo_names.insert("ContAmt_5_set");

      RptSide_3.add_element(ContAmt_5);
    }
    {
      xml_element Stip_197{"Stip"};
      multiset<string> Stip_197_set;
      Stip_197.add_attribute("Typ", "INSURED"); // 2
      Stip_197_set.insert("INSURED");
      Stip_197.add_attribute("Val", "StipulationValue_t_1527971322"); // 2
      Stip_197_set.insert("StipulationValue_t_1527971322");
      all_values.push_back(Stip_197_set);
      all_compo_names.insert("Stip_197_set");

      RptSide_3.add_element(Stip_197);
    }
    {
      xml_element MiscFees_23{"MiscFees"};
      multiset<string> MiscFees_23_set;
      MiscFees_23.add_attribute("Amt", "MiscFeeAmt_t_1968669991"); // 2
      MiscFees_23_set.insert("MiscFeeAmt_t_1968669991");
      MiscFees_23.add_attribute("Curr", "USD"); // 2
      MiscFees_23_set.insert("USD");
      MiscFees_23.add_attribute("Typ", "13"); // 2
      MiscFees_23_set.insert("13");
      MiscFees_23.add_attribute("Basis", "0"); // 2
      MiscFees_23_set.insert("0");
      all_values.push_back(MiscFees_23_set);
      all_compo_names.insert("MiscFees_23_set");

      RptSide_3.add_element(MiscFees_23);
    }
    {
      xml_element SettlDetails_4{"SettlDetails"};
      multiset<string> SettlDetails_4_set;
      SettlDetails_4.add_attribute("SettlSrc", "1"); // 2
      SettlDetails_4_set.insert("1");
      all_values.push_back(SettlDetails_4_set);
      all_compo_names.insert("SettlDetails_4_set");

      {
        xml_element Pty_469{"Pty"};
        multiset<string> Pty_469_set;
        Pty_469.add_attribute("ID", "SettlPartyID_t_1074810522"); // 3
        Pty_469_set.insert("SettlPartyID_t_1074810522");
        Pty_469.add_attribute("Src", "F"); // 3
        Pty_469_set.insert("F");
        Pty_469.add_attribute("R", "43"); // 3
        Pty_469_set.insert("43");
        all_values.push_back(Pty_469_set);
        all_compo_names.insert("Pty_469_set");

        {
          xml_element Sub_469{"Sub"};
          multiset<string> Sub_469_set;
          Sub_469.add_attribute("ID", "SettlPartySubID_t_1199607199"); // 4
          Sub_469_set.insert("SettlPartySubID_t_1199607199");
          Sub_469.add_attribute("Typ", "26"); // 4
          Sub_469_set.insert("26");
          all_values.push_back(Sub_469_set);
          all_compo_names.insert("Sub_469_set");

          Pty_469.add_element(Sub_469);
        }
        SettlDetails_4.add_element(Pty_469);
      }
      RptSide_3.add_element(SettlDetails_4);
    }
    {
      xml_element Alloc_12{"Alloc"};
      multiset<string> Alloc_12_set;
      Alloc_12.add_attribute("Acct", "AllocAccount_t_1603278810"); // 2
      Alloc_12_set.insert("AllocAccount_t_1603278810");
      Alloc_12.add_attribute("ActIDSrc", "5"); // 2
      Alloc_12_set.insert("5");
      Alloc_12.add_attribute("AllocSettlCcy", "JPY"); // 2
      Alloc_12_set.insert("JPY");
      Alloc_12.add_attribute("IndAllocID", "IndividualAllocID_t_109065927"); // 2
      Alloc_12_set.insert("IndividualAllocID_t_109065927");
      Alloc_12.add_attribute("Qty", "4162994.650000"); // 2
      Alloc_12_set.insert("4162994.650000");
      Alloc_12.add_attribute("CustCpcty", "AllocCustomerCapacity_t_285329262"); // 2
      Alloc_12_set.insert("AllocCustomerCapacity_t_285329262");
      Alloc_12.add_attribute("Meth", "2"); // 2
      Alloc_12_set.insert("2");
      Alloc_12.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_1379009223"); // 2
      Alloc_12_set.insert("SecondaryIndividualAllocID_t_1379009223");
      Alloc_12.add_attribute("ClrFeeInd", "AllocClearingFeeIndicator_t_242690805"); // 2
      Alloc_12_set.insert("AllocClearingFeeIndicator_t_242690805");
      all_values.push_back(Alloc_12_set);
      all_compo_names.insert("Alloc_12_set");

      {
        xml_element Pty_470{"Pty"};
        multiset<string> Pty_470_set;
        Pty_470.add_attribute("ID", "Nested2PartyID_t_1803524863"); // 3
        Pty_470_set.insert("Nested2PartyID_t_1803524863");
        Pty_470.add_attribute("Src", "6"); // 3
        Pty_470_set.insert("6");
        Pty_470.add_attribute("R", "38"); // 3
        Pty_470_set.insert("38");
        all_values.push_back(Pty_470_set);
        all_compo_names.insert("Pty_470_set");

        {
          xml_element Sub_470{"Sub"};
          multiset<string> Sub_470_set;
          Sub_470.add_attribute("ID", "Nested2PartySubID_t_975504237"); // 4
          Sub_470_set.insert("Nested2PartySubID_t_975504237");
          Sub_470.add_attribute("Typ", "32"); // 4
          Sub_470_set.insert("32");
          all_values.push_back(Sub_470_set);
          all_compo_names.insert("Sub_470_set");

          Pty_470.add_element(Sub_470);
        }
        Alloc_12.add_element(Pty_470);
      }
      RptSide_3.add_element(Alloc_12);
    }
    {
      xml_element TrdRptOrdDetl_3{"TrdRptOrdDetl"};
      multiset<string> TrdRptOrdDetl_3_set;
      TrdRptOrdDetl_3.add_attribute("OrdID", "OrderID_t_1335070233"); // 2
      TrdRptOrdDetl_3_set.insert("OrderID_t_1335070233");
      TrdRptOrdDetl_3.add_attribute("OrdID2", "SecondaryOrderID_t_1837689541"); // 2
      TrdRptOrdDetl_3_set.insert("SecondaryOrderID_t_1837689541");
      TrdRptOrdDetl_3.add_attribute("ClOrdID", "ClOrdID_t_490495807"); // 2
      TrdRptOrdDetl_3_set.insert("ClOrdID_t_490495807");
      TrdRptOrdDetl_3.add_attribute("ClOrdID2", "SecondaryClOrdID_t_897438919"); // 2
      TrdRptOrdDetl_3_set.insert("SecondaryClOrdID_t_897438919");
      TrdRptOrdDetl_3.add_attribute("ListID", "ListID_t_1218177215"); // 2
      TrdRptOrdDetl_3_set.insert("ListID_t_1218177215");
      TrdRptOrdDetl_3.add_attribute("RefOrdID", "RefOrderID_t_311682151"); // 2
      TrdRptOrdDetl_3_set.insert("RefOrderID_t_311682151");
      TrdRptOrdDetl_3.add_attribute("RefOrdIDSrc", "0"); // 2
      TrdRptOrdDetl_3_set.insert("0");
      TrdRptOrdDetl_3.add_attribute("RefOrdIDRsn", "1"); // 2
      TrdRptOrdDetl_3_set.insert("1");
      TrdRptOrdDetl_3.add_attribute("OrdTyp", "M"); // 2
      TrdRptOrdDetl_3_set.insert("M");
      TrdRptOrdDetl_3.add_attribute("Px", "5964437.370000"); // 2
      TrdRptOrdDetl_3_set.insert("5964437.370000");
      TrdRptOrdDetl_3.add_attribute("StopPx", "2274390.920000"); // 2
      TrdRptOrdDetl_3_set.insert("2274390.920000");
      TrdRptOrdDetl_3.add_attribute("ExecInst", "J"); // 2
      TrdRptOrdDetl_3_set.insert("J");
      TrdRptOrdDetl_3.add_attribute("OrdStat", "5"); // 2
      TrdRptOrdDetl_3_set.insert("5");
      TrdRptOrdDetl_3.add_attribute("LeavesQty", "17103001.200000"); // 2
      TrdRptOrdDetl_3_set.insert("17103001.200000");
      TrdRptOrdDetl_3.add_attribute("CumQty", "12352666.230000"); // 2
      TrdRptOrdDetl_3_set.insert("12352666.230000");
      TrdRptOrdDetl_3.add_attribute("TmInForce", "4"); // 2
      TrdRptOrdDetl_3_set.insert("4");
      TrdRptOrdDetl_3.add_attribute("ExpireTm", "ExpireTime_t_1166095282"); // 2
      TrdRptOrdDetl_3_set.insert("ExpireTime_t_1166095282");
      TrdRptOrdDetl_3.add_attribute("Cpcty", "W"); // 2
      TrdRptOrdDetl_3_set.insert("W");
      TrdRptOrdDetl_3.add_attribute("Rstctions", "2"); // 2
      TrdRptOrdDetl_3_set.insert("2");
      TrdRptOrdDetl_3.add_attribute("BkngTyp", "0"); // 2
      TrdRptOrdDetl_3_set.insert("0");
      TrdRptOrdDetl_3.add_attribute("OrigCustOrdCpcty", "2"); // 2
      TrdRptOrdDetl_3_set.insert("2");
      TrdRptOrdDetl_3.add_attribute("OrdInptDev", "OrderInputDevice_t_1880721161"); // 2
      TrdRptOrdDetl_3_set.insert("OrderInputDevice_t_1880721161");
      TrdRptOrdDetl_3.add_attribute("LotTyp", "4"); // 2
      TrdRptOrdDetl_3_set.insert("4");
      TrdRptOrdDetl_3.add_attribute("TransBkdTm", "TransBkdTime_t_376846271"); // 2
      TrdRptOrdDetl_3_set.insert("TransBkdTime_t_376846271");
      TrdRptOrdDetl_3.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_1112246737"); // 2
      TrdRptOrdDetl_3_set.insert("OrigOrdModTime_t_1112246737");
      all_values.push_back(TrdRptOrdDetl_3_set);
      all_compo_names.insert("TrdRptOrdDetl_3_set");

      {
        xml_element OrdQty_30{"OrdQty"};
        multiset<string> OrdQty_30_set;
        OrdQty_30.add_attribute("Qty", "10668643.120000"); // 3
        OrdQty_30_set.insert("10668643.120000");
        OrdQty_30.add_attribute("Cash", "328874.870000"); // 3
        OrdQty_30_set.insert("328874.870000");
        OrdQty_30.add_attribute("Pct", "19335251.460000"); // 3
        OrdQty_30_set.insert("19335251.460000");
        OrdQty_30.add_attribute("RndDir", "0"); // 3
        OrdQty_30_set.insert("0");
        OrdQty_30.add_attribute("RndMod", "10083917.240000"); // 3
        OrdQty_30_set.insert("10083917.240000");
        all_values.push_back(OrdQty_30_set);
        all_compo_names.insert("OrdQty_30_set");

        TrdRptOrdDetl_3.add_element(OrdQty_30);
      }
      {
        xml_element DsplyInstr_11{"DsplyInstr"};
        multiset<string> DsplyInstr_11_set;
        DsplyInstr_11.add_attribute("DisplayQty", "7565401.130000"); // 3
        DsplyInstr_11_set.insert("7565401.130000");
        DsplyInstr_11.add_attribute("SecDspQty", "15599294.520000"); // 3
        DsplyInstr_11_set.insert("15599294.520000");
        DsplyInstr_11.add_attribute("DspWhn", "2"); // 3
        DsplyInstr_11_set.insert("2");
        DsplyInstr_11.add_attribute("DspMthd", "1"); // 3
        DsplyInstr_11_set.insert("1");
        DsplyInstr_11.add_attribute("DsplLwQty", "3098847.230000"); // 3
        DsplyInstr_11_set.insert("3098847.230000");
        DsplyInstr_11.add_attribute("DisplayHighQty", "19167748.330000"); // 3
        DsplyInstr_11_set.insert("19167748.330000");
        DsplyInstr_11.add_attribute("DspMinIncr", "15587180.710000"); // 3
        DsplyInstr_11_set.insert("15587180.710000");
        DsplyInstr_11.add_attribute("RfrshQty", "10470670.930000"); // 3
        DsplyInstr_11_set.insert("10470670.930000");
        all_values.push_back(DsplyInstr_11_set);
        all_compo_names.insert("DsplyInstr_11_set");

        TrdRptOrdDetl_3.add_element(DsplyInstr_11);
      }
      RptSide_3.add_element(TrdRptOrdDetl_3);
    }
    {
      xml_element TrdRegTS_23{"TrdRegTS"};
      multiset<string> TrdRegTS_23_set;
      TrdRegTS_23.add_attribute("TS", "SideTrdRegTimestamp_t_11189355"); // 2
      TrdRegTS_23_set.insert("SideTrdRegTimestamp_t_11189355");
      TrdRegTS_23.add_attribute("Typ", "3"); // 2
      TrdRegTS_23_set.insert("3");
      TrdRegTS_23.add_attribute("Src", "SideTrdRegTimestampSrc_t_1643510830"); // 2
      TrdRegTS_23_set.insert("SideTrdRegTimestampSrc_t_1643510830");
      all_values.push_back(TrdRegTS_23_set);
      all_compo_names.insert("TrdRegTS_23_set");

      RptSide_3.add_element(TrdRegTS_23);
    }
    elt.add_element(RptSide_3);
  } // end RptSide
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
