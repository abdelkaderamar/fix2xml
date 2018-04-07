#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/TradeCaptureReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradeCaptureReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdCaptRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReport_message_t_0;
  elt.add_attribute("RptID", "TradeReportID_t_820203680"); // 0
  TradeCaptureReport_message_t_0.insert("TradeReportID_t_820203680");
  elt.add_attribute("TrdID", "TradeID_t_941386958"); // 0
  TradeCaptureReport_message_t_0.insert("TradeID_t_941386958");
  elt.add_attribute("TrdID2", "SecondaryTradeID_t_745678500"); // 0
  TradeCaptureReport_message_t_0.insert("SecondaryTradeID_t_745678500");
  elt.add_attribute("FirmTrdID", "FirmTradeID_t_588099731"); // 0
  TradeCaptureReport_message_t_0.insert("FirmTradeID_t_588099731");
  elt.add_attribute("FirmTrdID2", "SecondaryFirmTradeID_t_1040857814"); // 0
  TradeCaptureReport_message_t_0.insert("SecondaryFirmTradeID_t_1040857814");
  elt.add_attribute("TransTyp", "0"); // 0
  TradeCaptureReport_message_t_0.insert("0");
  elt.add_attribute("RptTyp", "2"); // 0
  TradeCaptureReport_message_t_0.insert("2");
  elt.add_attribute("TrdRptStat", "0"); // 0
  TradeCaptureReport_message_t_0.insert("0");
  elt.add_attribute("ReqID", "TradeRequestID_t_2019601130"); // 0
  TradeCaptureReport_message_t_0.insert("TradeRequestID_t_2019601130");
  elt.add_attribute("TrdTyp", "50"); // 0
  TradeCaptureReport_message_t_0.insert("50");
  elt.add_attribute("TrdSubTyp", "19"); // 0
  TradeCaptureReport_message_t_0.insert("19");
  elt.add_attribute("TrdTyp2", "0"); // 0
  TradeCaptureReport_message_t_0.insert("0");
  elt.add_attribute("TrdHandlInst", "1"); // 0
  TradeCaptureReport_message_t_0.insert("1");
  elt.add_attribute("OrigTrdHandlInst", "3"); // 0
  TradeCaptureReport_message_t_0.insert("3");
  elt.add_attribute("OrigTrdDt", "OrigTradeDate_t_1412540709"); // 0
  TradeCaptureReport_message_t_0.insert("OrigTradeDate_t_1412540709");
  elt.add_attribute("OrigTrdID", "OrigTradeID_t_146842813"); // 0
  TradeCaptureReport_message_t_0.insert("OrigTradeID_t_146842813");
  elt.add_attribute("OrignTrdID2", "OrigSecondaryTradeID_t_1957442021"); // 0
  TradeCaptureReport_message_t_0.insert("OrigSecondaryTradeID_t_1957442021");
  elt.add_attribute("TrnsfrRsn", "TransferReason_t_298078982"); // 0
  TradeCaptureReport_message_t_0.insert("TransferReason_t_298078982");
  elt.add_attribute("ExecTyp", "B"); // 0
  TradeCaptureReport_message_t_0.insert("B");
  elt.add_attribute("TotNumTrdRpts", "1696406771"); // 0
  TradeCaptureReport_message_t_0.insert("1696406771");
  elt.add_attribute("LastRptReqed", "Y"); // 0
  TradeCaptureReport_message_t_0.insert("Y");
  elt.add_attribute("Unsol", "N"); // 0
  TradeCaptureReport_message_t_0.insert("N");
  elt.add_attribute("SubReqTyp", "2"); // 0
  TradeCaptureReport_message_t_0.insert("2");
  elt.add_attribute("RptRefID", "TradeReportRefID_t_920942661"); // 0
  TradeCaptureReport_message_t_0.insert("TradeReportRefID_t_920942661");
  elt.add_attribute("RptRefID2", "SecondaryTradeReportRefID_t_2032161326"); // 0
  TradeCaptureReport_message_t_0.insert("SecondaryTradeReportRefID_t_2032161326");
  elt.add_attribute("RptID2", "SecondaryTradeReportID_t_765103529"); // 0
  TradeCaptureReport_message_t_0.insert("SecondaryTradeReportID_t_765103529");
  elt.add_attribute("LinkID", "TradeLinkID_t_1688017454"); // 0
  TradeCaptureReport_message_t_0.insert("TradeLinkID_t_1688017454");
  elt.add_attribute("MtchID", "TrdMatchID_t_1718213376"); // 0
  TradeCaptureReport_message_t_0.insert("TrdMatchID_t_1718213376");
  elt.add_attribute("ExecID", "ExecID_t_1481582682"); // 0
  TradeCaptureReport_message_t_0.insert("ExecID_t_1481582682");
  elt.add_attribute("ExecID2", "SecondaryExecID_t_782733505"); // 0
  TradeCaptureReport_message_t_0.insert("SecondaryExecID_t_782733505");
  elt.add_attribute("ExecRstmtRsn", "4"); // 0
  TradeCaptureReport_message_t_0.insert("4");
  elt.add_attribute("PrevlyRpted", "N"); // 0
  TradeCaptureReport_message_t_0.insert("N");
  elt.add_attribute("PxTyp", "3"); // 0
  TradeCaptureReport_message_t_0.insert("3");
  elt.add_attribute("AsOfInd", "0"); // 0
  TradeCaptureReport_message_t_0.insert("0");
  elt.add_attribute("SetSesID", "RTH"); // 0
  TradeCaptureReport_message_t_0.insert("RTH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_617494630"); // 0
  TradeCaptureReport_message_t_0.insert("SettlSessSubID_t_617494630");
  elt.add_attribute("VenuTyp", "E"); // 0
  TradeCaptureReport_message_t_0.insert("E");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1412727215"); // 0
  TradeCaptureReport_message_t_0.insert("MarketSegmentID_t_1412727215");
  elt.add_attribute("MktID", "MarketID_t_941487571"); // 0
  TradeCaptureReport_message_t_0.insert("MarketID_t_941487571");
  elt.add_attribute("QtyTyp", "0"); // 0
  TradeCaptureReport_message_t_0.insert("0");
  elt.add_attribute("UndSesID", "UnderlyingTradingSessionID_t_1957309379"); // 0
  TradeCaptureReport_message_t_0.insert("UnderlyingTradingSessionID_t_1957309379");
  elt.add_attribute("UndSesSub", "UnderlyingTradingSessionSubID_t_705706991"); // 0
  TradeCaptureReport_message_t_0.insert("UnderlyingTradingSessionSubID_t_705706991");
  elt.add_attribute("LastQty", "18574918.720000"); // 0
  TradeCaptureReport_message_t_0.insert("18574918.720000");
  elt.add_attribute("LastPx", "16244952.280000"); // 0
  TradeCaptureReport_message_t_0.insert("16244952.280000");
  elt.add_attribute("CalcCcyLastQty", "13848910.100000"); // 0
  TradeCaptureReport_message_t_0.insert("13848910.100000");
  elt.add_attribute("Ccy", "USD"); // 0
  TradeCaptureReport_message_t_0.insert("USD");
  elt.add_attribute("SettlCcy", "GBP"); // 0
  TradeCaptureReport_message_t_0.insert("GBP");
  elt.add_attribute("LastParPx", "17391377.030000"); // 0
  TradeCaptureReport_message_t_0.insert("17391377.030000");
  elt.add_attribute("LastSpotRt", "7437725.060000"); // 0
  TradeCaptureReport_message_t_0.insert("7437725.060000");
  elt.add_attribute("LastFwdPnts", "21072070.930000"); // 0
  TradeCaptureReport_message_t_0.insert("21072070.930000");
  elt.add_attribute("LastSwapPnts", "4742518.380000"); // 0
  TradeCaptureReport_message_t_0.insert("4742518.380000");
  elt.add_attribute("LastMkt", "LastMkt_t_861251641"); // 0
  TradeCaptureReport_message_t_0.insert("LastMkt_t_861251641");
  elt.add_attribute("TrdDt", "TradeDate_t_880666106"); // 0
  TradeCaptureReport_message_t_0.insert("TradeDate_t_880666106");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_358929516"); // 0
  TradeCaptureReport_message_t_0.insert("ClearingBusinessDate_t_358929516");
  elt.add_attribute("AvgPx", "16263551.700000"); // 0
  TradeCaptureReport_message_t_0.insert("16263551.700000");
  elt.add_attribute("AvgPxInd", "0"); // 0
  TradeCaptureReport_message_t_0.insert("0");
  elt.add_attribute("MLegRptTyp", "1"); // 0
  TradeCaptureReport_message_t_0.insert("1");
  elt.add_attribute("TrdLegRefID", "TradeLegRefID_t_960454204"); // 0
  TradeCaptureReport_message_t_0.insert("TradeLegRefID_t_960454204");
  elt.add_attribute("TxnTm", "TransactTime_t_1203933418"); // 0
  TradeCaptureReport_message_t_0.insert("TransactTime_t_1203933418");
  elt.add_attribute("SettlTyp", "6"); // 0
  TradeCaptureReport_message_t_0.insert("6");
  elt.add_attribute("SettlDt", "SettlDate_t_1114756918"); // 0
  TradeCaptureReport_message_t_0.insert("SettlDate_t_1114756918");
  elt.add_attribute("StlDt", "UnderlyingSettlementDate_t_780570234"); // 0
  TradeCaptureReport_message_t_0.insert("UnderlyingSettlementDate_t_780570234");
  elt.add_attribute("MtchStat", "0"); // 0
  TradeCaptureReport_message_t_0.insert("0");
  elt.add_attribute("MtchTyp", "M5"); // 0
  TradeCaptureReport_message_t_0.insert("M5");
  elt.add_attribute("Vol", "13980648.650000"); // 0
  TradeCaptureReport_message_t_0.insert("13980648.650000");
  elt.add_attribute("DividendYield", "11081182.380000"); // 0
  TradeCaptureReport_message_t_0.insert("11081182.380000");
  elt.add_attribute("RFR", "11224029.300000"); // 0
  TradeCaptureReport_message_t_0.insert("11224029.300000");
  elt.add_attribute("CurrencyRatio", "1920687.880000"); // 0
  TradeCaptureReport_message_t_0.insert("1920687.880000");
  elt.add_attribute("CopyMsgInd", "false"); // 0
  TradeCaptureReport_message_t_0.insert("false");
  elt.add_attribute("PubTrdInd", "Y"); // 0
  TradeCaptureReport_message_t_0.insert("Y");
  elt.add_attribute("TrdPubInd", "0"); // 0
  TradeCaptureReport_message_t_0.insert("0");
  elt.add_attribute("ShrtSaleRsn", "3"); // 0
  TradeCaptureReport_message_t_0.insert("3");
  elt.add_attribute("TierCD", "TierCode_t_409240242"); // 0
  TradeCaptureReport_message_t_0.insert("TierCode_t_409240242");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_135183141"); // 0
  TradeCaptureReport_message_t_0.insert("MessageEventSource_t_135183141");
  elt.add_attribute("LastUpdateTm", "LastUpdateTime_t_485667241"); // 0
  TradeCaptureReport_message_t_0.insert("LastUpdateTime_t_485667241");
  elt.add_attribute("RndPx", "330946.360000"); // 0
  TradeCaptureReport_message_t_0.insert("330946.360000");
  elt.add_attribute("TZTransactTime", "TZTransactTime_t_1330032524"); // 0
  TradeCaptureReport_message_t_0.insert("TZTransactTime_t_1330032524");
  elt.add_attribute("ReportedPxDiff", "true"); // 0
  TradeCaptureReport_message_t_0.insert("true");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_1772232339"); // 0
  TradeCaptureReport_message_t_0.insert("GrossTradeAmt_t_1772232339");
  elt.add_attribute("RejTxt", "RejectText_t_2073805030"); // 0
  TradeCaptureReport_message_t_0.insert("RejectText_t_2073805030");
  elt.add_attribute("FeeMult", "18660186.030000"); // 0
  TradeCaptureReport_message_t_0.insert("18660186.030000");
  all_values.push_back(TradeCaptureReport_message_t_0);
  all_compo_names.insert("TradeCaptureReport_message_t");

  { // Hdr
    xml_element Hdr_96{"Hdr"};
    multiset<string> Hdr_96_set;
    Hdr_96.add_attribute("SeqNum", "99000529"); // 1
    Hdr_96_set.insert("99000529");
    Hdr_96.add_attribute("SID", "SenderCompID_t_787573023"); // 1
    Hdr_96_set.insert("SenderCompID_t_787573023");
    Hdr_96.add_attribute("TID", "TargetCompID_t_599201062"); // 1
    Hdr_96_set.insert("TargetCompID_t_599201062");
    Hdr_96.add_attribute("OBID", "OnBehalfOfCompID_t_457930046"); // 1
    Hdr_96_set.insert("OnBehalfOfCompID_t_457930046");
    Hdr_96.add_attribute("D2ID", "DeliverToCompID_t_266444545"); // 1
    Hdr_96_set.insert("DeliverToCompID_t_266444545");
    Hdr_96.add_attribute("SSub", "SenderSubID_t_1020400975"); // 1
    Hdr_96_set.insert("SenderSubID_t_1020400975");
    Hdr_96.add_attribute("SLoc", "SenderLocationID_t_387589290"); // 1
    Hdr_96_set.insert("SenderLocationID_t_387589290");
    Hdr_96.add_attribute("TSub", "TargetSubID_t_1226898749"); // 1
    Hdr_96_set.insert("TargetSubID_t_1226898749");
    Hdr_96.add_attribute("TLoc", "TargetLocationID_t_76850745"); // 1
    Hdr_96_set.insert("TargetLocationID_t_76850745");
    Hdr_96.add_attribute("OBSub", "OnBehalfOfSubID_t_1197201601"); // 1
    Hdr_96_set.insert("OnBehalfOfSubID_t_1197201601");
    Hdr_96.add_attribute("OBLoc", "OnBehalfOfLocationID_t_194172019"); // 1
    Hdr_96_set.insert("OnBehalfOfLocationID_t_194172019");
    Hdr_96.add_attribute("D2Sub", "DeliverToSubID_t_857420980"); // 1
    Hdr_96_set.insert("DeliverToSubID_t_857420980");
    Hdr_96.add_attribute("D2Loc", "DeliverToLocationID_t_1484961829"); // 1
    Hdr_96_set.insert("DeliverToLocationID_t_1484961829");
    Hdr_96.add_attribute("PosDup", "N"); // 1
    Hdr_96_set.insert("N");
    Hdr_96.add_attribute("PosRsnd", "Y"); // 1
    Hdr_96_set.insert("Y");
    Hdr_96.add_attribute("Snt", "SendingTime_t_445596420"); // 1
    Hdr_96_set.insert("SendingTime_t_445596420");
    Hdr_96.add_attribute("OrigSnt", "OrigSendingTime_t_1026250664"); // 1
    Hdr_96_set.insert("OrigSendingTime_t_1026250664");
    Hdr_96.add_attribute("MsgEncd", "MessageEncoding_t_300070985"); // 1
    Hdr_96_set.insert("MessageEncoding_t_300070985");
    all_values.push_back(Hdr_96_set);
    all_compo_names.insert("Hdr_96_set");

    {
      xml_element Hop_96{"Hop"};
      multiset<string> Hop_96_set;
      Hop_96.add_attribute("ID", "HopCompID_t_98706503"); // 2
      Hop_96_set.insert("HopCompID_t_98706503");
      Hop_96.add_attribute("Ref", "1958479326"); // 2
      Hop_96_set.insert("1958479326");
      Hop_96.add_attribute("Snt", "HopSendingTime_t_1197846765"); // 2
      Hop_96_set.insert("HopSendingTime_t_1197846765");
      all_values.push_back(Hop_96_set);
      all_compo_names.insert("Hop_96_set");

      Hdr_96.add_element(Hop_96);
    }
    elt.add_element(Hdr_96);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_19{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_19_set;
    ApplSeqCtrl_19.add_attribute("ApplID", "ApplID_t_1609308458"); // 1
    ApplSeqCtrl_19_set.insert("ApplID_t_1609308458");
    ApplSeqCtrl_19.add_attribute("ApplSeqNum", "220235920"); // 1
    ApplSeqCtrl_19_set.insert("220235920");
    ApplSeqCtrl_19.add_attribute("ApplLastSeqNum", "1333029906"); // 1
    ApplSeqCtrl_19_set.insert("1333029906");
    ApplSeqCtrl_19.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_19_set.insert("true");
    all_values.push_back(ApplSeqCtrl_19_set);
    all_compo_names.insert("ApplSeqCtrl_19_set");

    elt.add_element(ApplSeqCtrl_19);
  } // end ApplSeqCtrl
  { // Pty
    xml_element Pty_441{"Pty"};
    multiset<string> Pty_441_set;
    Pty_441.add_attribute("ID", "RootPartyID_t_515578783"); // 1
    Pty_441_set.insert("RootPartyID_t_515578783");
    Pty_441.add_attribute("Src", "7"); // 1
    Pty_441_set.insert("7");
    Pty_441.add_attribute("R", "85"); // 1
    Pty_441_set.insert("85");
    all_values.push_back(Pty_441_set);
    all_compo_names.insert("Pty_441_set");

    {
      xml_element Sub_441{"Sub"};
      multiset<string> Sub_441_set;
      Sub_441.add_attribute("ID", "RootPartySubID_t_441900165"); // 2
      Sub_441_set.insert("RootPartySubID_t_441900165");
      Sub_441.add_attribute("Typ", "16"); // 2
      Sub_441_set.insert("16");
      all_values.push_back(Sub_441_set);
      all_compo_names.insert("Sub_441_set");

      Pty_441.add_element(Sub_441);
    }
    elt.add_element(Pty_441);
  } // end Pty
  { // Pty
    xml_element Pty_442{"Pty"};
    multiset<string> Pty_442_set;
    Pty_442.add_attribute("ID", "RootPartyID_t_2124563425"); // 1
    Pty_442_set.insert("RootPartyID_t_2124563425");
    Pty_442.add_attribute("Src", "2"); // 1
    Pty_442_set.insert("2");
    Pty_442.add_attribute("R", "42"); // 1
    Pty_442_set.insert("42");
    all_values.push_back(Pty_442_set);
    all_compo_names.insert("Pty_442_set");

    {
      xml_element Sub_442{"Sub"};
      multiset<string> Sub_442_set;
      Sub_442.add_attribute("ID", "RootPartySubID_t_435009823"); // 2
      Sub_442_set.insert("RootPartySubID_t_435009823");
      Sub_442.add_attribute("Typ", "22"); // 2
      Sub_442_set.insert("22");
      all_values.push_back(Sub_442_set);
      all_compo_names.insert("Sub_442_set");

      Pty_442.add_element(Sub_442);
    }
    elt.add_element(Pty_442);
  } // end Pty
  { // Pty
    xml_element Pty_443{"Pty"};
    multiset<string> Pty_443_set;
    Pty_443.add_attribute("ID", "RootPartyID_t_1044440554"); // 1
    Pty_443_set.insert("RootPartyID_t_1044440554");
    Pty_443.add_attribute("Src", "E"); // 1
    Pty_443_set.insert("E");
    Pty_443.add_attribute("R", "9"); // 1
    Pty_443_set.insert("9");
    all_values.push_back(Pty_443_set);
    all_compo_names.insert("Pty_443_set");

    {
      xml_element Sub_443{"Sub"};
      multiset<string> Sub_443_set;
      Sub_443.add_attribute("ID", "RootPartySubID_t_1121291300"); // 2
      Sub_443_set.insert("RootPartySubID_t_1121291300");
      Sub_443.add_attribute("Typ", "17"); // 2
      Sub_443_set.insert("17");
      all_values.push_back(Sub_443_set);
      all_compo_names.insert("Sub_443_set");

      Pty_443.add_element(Sub_443);
    }
    elt.add_element(Pty_443);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_88{"Instrmt"};
    multiset<string> Instrmt_88_set;
    Instrmt_88.add_attribute("Sym", "Symbol_t_769504855"); // 1
    Instrmt_88_set.insert("Symbol_t_769504855");
    Instrmt_88.add_attribute("Sfx", "CD"); // 1
    Instrmt_88_set.insert("CD");
    Instrmt_88.add_attribute("ID", "SecurityID_t_1357278896"); // 1
    Instrmt_88_set.insert("SecurityID_t_1357278896");
    Instrmt_88.add_attribute("Src", "K"); // 1
    Instrmt_88_set.insert("K");
    Instrmt_88.add_attribute("Prod", "12"); // 1
    Instrmt_88_set.insert("12");
    Instrmt_88.add_attribute("ProdCmplx", "ProductComplex_t_1802875316"); // 1
    Instrmt_88_set.insert("ProductComplex_t_1802875316");
    Instrmt_88.add_attribute("SecGrp", "SecurityGroup_t_1699603254"); // 1
    Instrmt_88_set.insert("SecurityGroup_t_1699603254");
    Instrmt_88.add_attribute("CFI", "CFICode_t_239301814"); // 1
    Instrmt_88_set.insert("CFICode_t_239301814");
    Instrmt_88.add_attribute("SecTyp", "CS"); // 1
    Instrmt_88_set.insert("CS");
    Instrmt_88.add_attribute("SubTyp", "SecuritySubType_t_1510598932"); // 1
    Instrmt_88_set.insert("SecuritySubType_t_1510598932");
    Instrmt_88.add_attribute("MMY", "1437148579"); // 1
    Instrmt_88_set.insert("1437148579");
    Instrmt_88.add_attribute("MatDt", "MaturityDate_t_1363406629"); // 1
    Instrmt_88_set.insert("MaturityDate_t_1363406629");
    Instrmt_88.add_attribute("MatTm", "1730834852"); // 1
    Instrmt_88_set.insert("1730834852");
    Instrmt_88.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_622694838"); // 1
    Instrmt_88_set.insert("SettleOnOpenFlag_t_622694838");
    Instrmt_88.add_attribute("AsgnMeth", "1310898681"); // 1
    Instrmt_88_set.insert("1310898681");
    Instrmt_88.add_attribute("Status", "1"); // 1
    Instrmt_88_set.insert("1");
    Instrmt_88.add_attribute("CpnPmt", "CouponPaymentDate_t_1138273621"); // 1
    Instrmt_88_set.insert("CouponPaymentDate_t_1138273621");
    Instrmt_88.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_88_set.insert("XR");
    Instrmt_88.add_attribute("Snrty", "SB"); // 1
    Instrmt_88_set.insert("SB");
    Instrmt_88.add_attribute("NotlPctOut", "15801737.860000"); // 1
    Instrmt_88_set.insert("15801737.860000");
    Instrmt_88.add_attribute("OrigNotlPctOut", "4420407.610000"); // 1
    Instrmt_88_set.insert("4420407.610000");
    Instrmt_88.add_attribute("AttchPnt", "18393244.330000"); // 1
    Instrmt_88_set.insert("18393244.330000");
    Instrmt_88.add_attribute("DetchPnt", "6621633.270000"); // 1
    Instrmt_88_set.insert("6621633.270000");
    Instrmt_88.add_attribute("Issued", "IssueDate_t_466080340"); // 1
    Instrmt_88_set.insert("IssueDate_t_466080340");
    Instrmt_88.add_attribute("RepoCollSecTyp", "126850608"); // 1
    Instrmt_88_set.insert("126850608");
    Instrmt_88.add_attribute("RepoTrm", "10597414"); // 1
    Instrmt_88_set.insert("10597414");
    Instrmt_88.add_attribute("RepoRt", "15105208.950000"); // 1
    Instrmt_88_set.insert("15105208.950000");
    Instrmt_88.add_attribute("Fctr", "9494497.210000"); // 1
    Instrmt_88_set.insert("9494497.210000");
    Instrmt_88.add_attribute("CrdRtg", "CreditRating_t_585930250"); // 1
    Instrmt_88_set.insert("CreditRating_t_585930250");
    Instrmt_88.add_attribute("Rgstry", "InstrRegistry_t_484328547"); // 1
    Instrmt_88_set.insert("InstrRegistry_t_484328547");
    Instrmt_88.add_attribute("IssuCtry", "821766788"); // 1
    Instrmt_88_set.insert("821766788");
    Instrmt_88.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1355435105"); // 1
    Instrmt_88_set.insert("StateOrProvinceOfIssue_t_1355435105");
    Instrmt_88.add_attribute("Lcl", "LocaleOfIssue_t_315557179"); // 1
    Instrmt_88_set.insert("LocaleOfIssue_t_315557179");
    Instrmt_88.add_attribute("Redeem", "RedemptionDate_t_31562036"); // 1
    Instrmt_88_set.insert("RedemptionDate_t_31562036");
    Instrmt_88.add_attribute("StrkPx", "20287876.950000"); // 1
    Instrmt_88_set.insert("20287876.950000");
    Instrmt_88.add_attribute("StrkCcy", "JPY"); // 1
    Instrmt_88_set.insert("JPY");
    Instrmt_88.add_attribute("StrkMult", "15809073.020000"); // 1
    Instrmt_88_set.insert("15809073.020000");
    Instrmt_88.add_attribute("StrkValu", "4940898.220000"); // 1
    Instrmt_88_set.insert("4940898.220000");
    Instrmt_88.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_88_set.insert("4");
    Instrmt_88.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_88_set.insert("2");
    Instrmt_88.add_attribute("StrkPxBndryPrcsn", "19312384.020000"); // 1
    Instrmt_88_set.insert("19312384.020000");
    Instrmt_88.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_88_set.insert("1");
    Instrmt_88.add_attribute("OptAt", "527373791"); // 1
    Instrmt_88_set.insert("527373791");
    Instrmt_88.add_attribute("Mult", "4064495.920000"); // 1
    Instrmt_88_set.insert("4064495.920000");
    Instrmt_88.add_attribute("MultTyp", "0"); // 1
    Instrmt_88_set.insert("0");
    Instrmt_88.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_88_set.insert("1");
    Instrmt_88.add_attribute("MinPxIncr", "15447232.130000"); // 1
    Instrmt_88_set.insert("15447232.130000");
    Instrmt_88.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_985075781"); // 1
    Instrmt_88_set.insert("MinPriceIncrementAmount_t_985075781");
    Instrmt_88.add_attribute("UOM", "Gal"); // 1
    Instrmt_88_set.insert("Gal");
    Instrmt_88.add_attribute("UOMQty", "9774133.510000"); // 1
    Instrmt_88_set.insert("9774133.510000");
    Instrmt_88.add_attribute("PxUOM", "lbs"); // 1
    Instrmt_88_set.insert("lbs");
    Instrmt_88.add_attribute("PxUOMQty", "19181409.920000"); // 1
    Instrmt_88_set.insert("19181409.920000");
    Instrmt_88.add_attribute("SettlMeth", "P"); // 1
    Instrmt_88_set.insert("P");
    Instrmt_88.add_attribute("ExerStyle", "2"); // 1
    Instrmt_88_set.insert("2");
    Instrmt_88.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_88_set.insert("3");
    Instrmt_88.add_attribute("OptPayAmt", "OptPayoutAmount_t_1650174093"); // 1
    Instrmt_88_set.insert("OptPayoutAmount_t_1650174093");
    Instrmt_88.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_88_set.insert("INT");
    Instrmt_88.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_88_set.insert("CDSD");
    Instrmt_88.add_attribute("ListMeth", "1"); // 1
    Instrmt_88_set.insert("1");
    Instrmt_88.add_attribute("CapPx", "17405626.770000"); // 1
    Instrmt_88_set.insert("17405626.770000");
    Instrmt_88.add_attribute("FlrPx", "16687244.620000"); // 1
    Instrmt_88_set.insert("16687244.620000");
    Instrmt_88.add_attribute("PutCall", "0"); // 1
    Instrmt_88_set.insert("0");
    Instrmt_88.add_attribute("FlexInd", "true"); // 1
    Instrmt_88_set.insert("true");
    Instrmt_88.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_88_set.insert("true");
    Instrmt_88.add_attribute("TmUnit", "Min"); // 1
    Instrmt_88_set.insert("Min");
    Instrmt_88.add_attribute("CpnRt", "1634242.160000"); // 1
    Instrmt_88_set.insert("1634242.160000");
    Instrmt_88.add_attribute("Exch", "SecurityExchange_t_1387240202"); // 1
    Instrmt_88_set.insert("SecurityExchange_t_1387240202");
    Instrmt_88.add_attribute("PosLmt", "758783502"); // 1
    Instrmt_88_set.insert("758783502");
    Instrmt_88.add_attribute("NTPosLmt", "657514038"); // 1
    Instrmt_88_set.insert("657514038");
    Instrmt_88.add_attribute("Issr", "Issuer_t_828292077"); // 1
    Instrmt_88_set.insert("Issuer_t_828292077");
    Instrmt_88.add_attribute("EncIssrLen", "1702806088"); // 1
    Instrmt_88_set.insert("1702806088");
    Instrmt_88.add_attribute("EncIssr", "EncodedIssuer_t_441268792"); // 1
    Instrmt_88_set.insert("EncodedIssuer_t_441268792");
    Instrmt_88.add_attribute("Desc", "SecurityDesc_t_1632750581"); // 1
    Instrmt_88_set.insert("SecurityDesc_t_1632750581");
    Instrmt_88.add_attribute("EncSecDescLen", "82696231"); // 1
    Instrmt_88_set.insert("82696231");
    Instrmt_88.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_847718384"); // 1
    Instrmt_88_set.insert("EncodedSecurityDesc_t_847718384");
    Instrmt_88.add_attribute("Pool", "Pool_t_1600624119"); // 1
    Instrmt_88_set.insert("Pool_t_1600624119");
    Instrmt_88.add_attribute("CSetMo", "446751783"); // 1
    Instrmt_88_set.insert("446751783");
    Instrmt_88.add_attribute("CPPgm", "99"); // 1
    Instrmt_88_set.insert("99");
    Instrmt_88.add_attribute("CPRegT", "CPRegType_t_438216253"); // 1
    Instrmt_88_set.insert("CPRegType_t_438216253");
    Instrmt_88.add_attribute("Dated", "DatedDate_t_525568342"); // 1
    Instrmt_88_set.insert("DatedDate_t_525568342");
    Instrmt_88.add_attribute("IntAcrl", "InterestAccrualDate_t_1222371301"); // 1
    Instrmt_88_set.insert("InterestAccrualDate_t_1222371301");
    all_values.push_back(Instrmt_88_set);
    all_compo_names.insert("Instrmt_88_set");

    {
      xml_element AID_91{"AID"};
      multiset<string> AID_91_set;
      AID_91.add_attribute("AltID", "SecurityAltID_t_1865332795"); // 2
      AID_91_set.insert("SecurityAltID_t_1865332795");
      AID_91.add_attribute("AltIDSrc", "M"); // 2
      AID_91_set.insert("M");
      all_values.push_back(AID_91_set);
      all_compo_names.insert("AID_91_set");

      Instrmt_88.add_element(AID_91);
    }
    {
      xml_element SecXML_91{"SecXML"};
      multiset<string> SecXML_91_set;
      SecXML_91.add_attribute("Schema", "SecurityXMLSchema_t_714464332"); // 2
      SecXML_91_set.insert("SecurityXMLSchema_t_714464332");
      all_values.push_back(SecXML_91_set);
      all_compo_names.insert("SecXML_91_set");

      Instrmt_88.add_element(SecXML_91);
    }
    {
      xml_element Evnt_91{"Evnt"};
      multiset<string> Evnt_91_set;
      Evnt_91.add_attribute("EventTyp", "11"); // 2
      Evnt_91_set.insert("11");
      Evnt_91.add_attribute("Dt", "EventDate_t_193733639"); // 2
      Evnt_91_set.insert("EventDate_t_193733639");
      Evnt_91.add_attribute("Tm", "EventTime_t_217154777"); // 2
      Evnt_91_set.insert("EventTime_t_217154777");
      Evnt_91.add_attribute("Px", "7197965.120000"); // 2
      Evnt_91_set.insert("7197965.120000");
      Evnt_91.add_attribute("Txt", "EventText_t_1040691313"); // 2
      Evnt_91_set.insert("EventText_t_1040691313");
      all_values.push_back(Evnt_91_set);
      all_compo_names.insert("Evnt_91_set");

      Instrmt_88.add_element(Evnt_91);
    }
    {
      xml_element Pty_444{"Pty"};
      multiset<string> Pty_444_set;
      Pty_444.add_attribute("ID", "InstrumentPartyID_t_305775472"); // 2
      Pty_444_set.insert("InstrumentPartyID_t_305775472");
      Pty_444.add_attribute("Src", "A"); // 2
      Pty_444_set.insert("A");
      Pty_444.add_attribute("R", "24"); // 2
      Pty_444_set.insert("24");
      all_values.push_back(Pty_444_set);
      all_compo_names.insert("Pty_444_set");

      {
        xml_element Sub_444{"Sub"};
        multiset<string> Sub_444_set;
        Sub_444.add_attribute("ID", "InstrumentPartySubID_t_1749831272"); // 3
        Sub_444_set.insert("InstrumentPartySubID_t_1749831272");
        Sub_444.add_attribute("Typ", "17"); // 3
        Sub_444_set.insert("17");
        all_values.push_back(Sub_444_set);
        all_compo_names.insert("Sub_444_set");

        Pty_444.add_element(Sub_444);
      }
      Instrmt_88.add_element(Pty_444);
    }
    {
      xml_element CmplxEvnt_88{"CmplxEvnt"};
      multiset<string> CmplxEvnt_88_set;
      CmplxEvnt_88.add_attribute("Typ", "8"); // 2
      CmplxEvnt_88_set.insert("8");
      CmplxEvnt_88.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_927707472"); // 2
      CmplxEvnt_88_set.insert("ComplexOptPayoutAmount_t_927707472");
      CmplxEvnt_88.add_attribute("Px", "3849359.650000"); // 2
      CmplxEvnt_88_set.insert("3849359.650000");
      CmplxEvnt_88.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_88_set.insert("5");
      CmplxEvnt_88.add_attribute("PxBndryPrcsn", "16864909.740000"); // 2
      CmplxEvnt_88_set.insert("16864909.740000");
      CmplxEvnt_88.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_88_set.insert("3");
      CmplxEvnt_88.add_attribute("Cond", "1"); // 2
      CmplxEvnt_88_set.insert("1");
      all_values.push_back(CmplxEvnt_88_set);
      all_compo_names.insert("CmplxEvnt_88_set");

      {
        xml_element EvntDts_88{"EvntDts"};
        multiset<string> EvntDts_88_set;
        EvntDts_88.add_attribute("StartDt", "ComplexEventStartDate_t_1241813415"); // 3
        EvntDts_88_set.insert("ComplexEventStartDate_t_1241813415");
        EvntDts_88.add_attribute("EndDt", "ComplexEventEndDate_t_1483718796"); // 3
        EvntDts_88_set.insert("ComplexEventEndDate_t_1483718796");
        all_values.push_back(EvntDts_88_set);
        all_compo_names.insert("EvntDts_88_set");

        {
          xml_element EvntTms_88{"EvntTms"};
          multiset<string> EvntTms_88_set;
          EvntTms_88.add_attribute("StartTm", "1815534190"); // 4
          EvntTms_88_set.insert("1815534190");
          EvntTms_88.add_attribute("EndTm", "1324509646"); // 4
          EvntTms_88_set.insert("1324509646");
          all_values.push_back(EvntTms_88_set);
          all_compo_names.insert("EvntTms_88_set");

          EvntDts_88.add_element(EvntTms_88);
        }
        CmplxEvnt_88.add_element(EvntDts_88);
      }
      Instrmt_88.add_element(CmplxEvnt_88);
    }
    elt.add_element(Instrmt_88);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_31{"FinDetls"};
    multiset<string> FinDetls_31_set;
    FinDetls_31.add_attribute("AgmtDesc", "AgreementDesc_t_183953533"); // 1
    FinDetls_31_set.insert("AgreementDesc_t_183953533");
    FinDetls_31.add_attribute("AgmtID", "AgreementID_t_1268674661"); // 1
    FinDetls_31_set.insert("AgreementID_t_1268674661");
    FinDetls_31.add_attribute("AgmtDt", "AgreementDate_t_1771261429"); // 1
    FinDetls_31_set.insert("AgreementDate_t_1771261429");
    FinDetls_31.add_attribute("AgmtCcy", "USD"); // 1
    FinDetls_31_set.insert("USD");
    FinDetls_31.add_attribute("TrmTyp", "1"); // 1
    FinDetls_31_set.insert("1");
    FinDetls_31.add_attribute("StartDt", "StartDate_t_1651282783"); // 1
    FinDetls_31_set.insert("StartDate_t_1651282783");
    FinDetls_31.add_attribute("EndDt", "EndDate_t_1424740062"); // 1
    FinDetls_31_set.insert("EndDate_t_1424740062");
    FinDetls_31.add_attribute("DlvryTyp", "3"); // 1
    FinDetls_31_set.insert("3");
    FinDetls_31.add_attribute("MgnRatio", "2182634.670000"); // 1
    FinDetls_31_set.insert("2182634.670000");
    all_values.push_back(FinDetls_31_set);
    all_compo_names.insert("FinDetls_31_set");

    elt.add_element(FinDetls_31);
  } // end FinDetls
  { // Yield
    xml_element Yield_30{"Yield"};
    multiset<string> Yield_30_set;
    Yield_30.add_attribute("Typ", "LASTQUARTER"); // 1
    Yield_30_set.insert("LASTQUARTER");
    Yield_30.add_attribute("Yld", "6393054.500000"); // 1
    Yield_30_set.insert("6393054.500000");
    Yield_30.add_attribute("CalcDt", "YieldCalcDate_t_435418244"); // 1
    Yield_30_set.insert("YieldCalcDate_t_435418244");
    Yield_30.add_attribute("RedDt", "YieldRedemptionDate_t_1608098957"); // 1
    Yield_30_set.insert("YieldRedemptionDate_t_1608098957");
    Yield_30.add_attribute("RedPx", "16799967.640000"); // 1
    Yield_30_set.insert("16799967.640000");
    Yield_30.add_attribute("RedPxTyp", "14"); // 1
    Yield_30_set.insert("14");
    all_values.push_back(Yield_30_set);
    all_compo_names.insert("Yield_30_set");

    elt.add_element(Yield_30);
  } // end Yield
  { // Undly
    xml_element Undly_117{"Undly"};
    multiset<string> Undly_117_set;
    Undly_117.add_attribute("Sym", "UnderlyingSymbol_t_94445243"); // 1
    Undly_117_set.insert("UnderlyingSymbol_t_94445243");
    Undly_117.add_attribute("Sfx", "WI"); // 1
    Undly_117_set.insert("WI");
    Undly_117.add_attribute("ID", "UnderlyingSecurityID_t_2142486248"); // 1
    Undly_117_set.insert("UnderlyingSecurityID_t_2142486248");
    Undly_117.add_attribute("Src", "L"); // 1
    Undly_117_set.insert("L");
    Undly_117.add_attribute("Prod", "12"); // 1
    Undly_117_set.insert("12");
    Undly_117.add_attribute("CFI", "UnderlyingCFICode_t_379938565"); // 1
    Undly_117_set.insert("UnderlyingCFICode_t_379938565");
    Undly_117.add_attribute("SecTyp", "TLQN"); // 1
    Undly_117_set.insert("TLQN");
    Undly_117.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_810256140"); // 1
    Undly_117_set.insert("UnderlyingSecuritySubType_t_810256140");
    Undly_117.add_attribute("MMY", "1422388569"); // 1
    Undly_117_set.insert("1422388569");
    Undly_117.add_attribute("Mat", "UnderlyingMaturityDate_t_1893939009"); // 1
    Undly_117_set.insert("UnderlyingMaturityDate_t_1893939009");
    Undly_117.add_attribute("MatTm", "2052069555"); // 1
    Undly_117_set.insert("2052069555");
    Undly_117.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_758623718"); // 1
    Undly_117_set.insert("UnderlyingCouponPaymentDate_t_758623718");
    Undly_117.add_attribute("RestrctTyp", "XR"); // 1
    Undly_117_set.insert("XR");
    Undly_117.add_attribute("Snrty", "SB"); // 1
    Undly_117_set.insert("SB");
    Undly_117.add_attribute("NotlPctOut", "9425772.510000"); // 1
    Undly_117_set.insert("9425772.510000");
    Undly_117.add_attribute("OrigNotlPctOut", "6831805.640000"); // 1
    Undly_117_set.insert("6831805.640000");
    Undly_117.add_attribute("AttchPnt", "8528733.350000"); // 1
    Undly_117_set.insert("8528733.350000");
    Undly_117.add_attribute("DetchPnt", "13714887.330000"); // 1
    Undly_117_set.insert("13714887.330000");
    Undly_117.add_attribute("Issued", "UnderlyingIssueDate_t_242587831"); // 1
    Undly_117_set.insert("UnderlyingIssueDate_t_242587831");
    Undly_117.add_attribute("RepoCollSecTyp", "1002219459"); // 1
    Undly_117_set.insert("1002219459");
    Undly_117.add_attribute("RepoTrm", "875287869"); // 1
    Undly_117_set.insert("875287869");
    Undly_117.add_attribute("RepoRt", "16673278.930000"); // 1
    Undly_117_set.insert("16673278.930000");
    Undly_117.add_attribute("Fctr", "14477912.700000"); // 1
    Undly_117_set.insert("14477912.700000");
    Undly_117.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1093551336"); // 1
    Undly_117_set.insert("UnderlyingCreditRating_t_1093551336");
    Undly_117.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_408146689"); // 1
    Undly_117_set.insert("UnderlyingInstrRegistry_t_408146689");
    Undly_117.add_attribute("Ctry", "2087096720"); // 1
    Undly_117_set.insert("2087096720");
    Undly_117.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1528969581"); // 1
    Undly_117_set.insert("UnderlyingStateOrProvinceOfIssue_t_1528969581");
    Undly_117.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_2016245646"); // 1
    Undly_117_set.insert("UnderlyingLocaleOfIssue_t_2016245646");
    Undly_117.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1619609836"); // 1
    Undly_117_set.insert("UnderlyingRedemptionDate_t_1619609836");
    Undly_117.add_attribute("StrkPx", "1226796.490000"); // 1
    Undly_117_set.insert("1226796.490000");
    Undly_117.add_attribute("StrkCcy", "JPY"); // 1
    Undly_117_set.insert("JPY");
    Undly_117.add_attribute("OptA", "466220990"); // 1
    Undly_117_set.insert("466220990");
    Undly_117.add_attribute("Mult", "17847390.970000"); // 1
    Undly_117_set.insert("17847390.970000");
    Undly_117.add_attribute("MultTyp", "2"); // 1
    Undly_117_set.insert("2");
    Undly_117.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_117_set.insert("4");
    Undly_117.add_attribute("UOM", "MMbbl"); // 1
    Undly_117_set.insert("MMbbl");
    Undly_117.add_attribute("UOMQty", "14869070.530000"); // 1
    Undly_117_set.insert("14869070.530000");
    Undly_117.add_attribute("PxUOM", "Alw"); // 1
    Undly_117_set.insert("Alw");
    Undly_117.add_attribute("PxUOMQty", "14395825.840000"); // 1
    Undly_117_set.insert("14395825.840000");
    Undly_117.add_attribute("TmUnit", "Wk"); // 1
    Undly_117_set.insert("Wk");
    Undly_117.add_attribute("ExerStyle", "0"); // 1
    Undly_117_set.insert("0");
    Undly_117.add_attribute("CpnRt", "507226.540000"); // 1
    Undly_117_set.insert("507226.540000");
    Undly_117.add_attribute("Exch", "UnderlyingSecurityExchange_t_647868317"); // 1
    Undly_117_set.insert("UnderlyingSecurityExchange_t_647868317");
    Undly_117.add_attribute("Issr", "UnderlyingIssuer_t_1533923756"); // 1
    Undly_117_set.insert("UnderlyingIssuer_t_1533923756");
    Undly_117.add_attribute("EncUndIssrLen", "993299905"); // 1
    Undly_117_set.insert("993299905");
    Undly_117.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1331048882"); // 1
    Undly_117_set.insert("EncodedUnderlyingIssuer_t_1331048882");
    Undly_117.add_attribute("Desc", "UnderlyingSecurityDesc_t_239313443"); // 1
    Undly_117_set.insert("UnderlyingSecurityDesc_t_239313443");
    Undly_117.add_attribute("EncUndSecDescLen", "217304990"); // 1
    Undly_117_set.insert("217304990");
    Undly_117.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1573636713"); // 1
    Undly_117_set.insert("EncodedUnderlyingSecurityDesc_t_1573636713");
    Undly_117.add_attribute("CPPgm", "UnderlyingCPProgram_t_1241532902"); // 1
    Undly_117_set.insert("UnderlyingCPProgram_t_1241532902");
    Undly_117.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1092592859"); // 1
    Undly_117_set.insert("UnderlyingCPRegType_t_1092592859");
    Undly_117.add_attribute("AllocPct", "10934809.580000"); // 1
    Undly_117_set.insert("10934809.580000");
    Undly_117.add_attribute("Ccy", "JPY"); // 1
    Undly_117_set.insert("JPY");
    Undly_117.add_attribute("Qty", "15016276.470000"); // 1
    Undly_117_set.insert("15016276.470000");
    Undly_117.add_attribute("SettlTyp", "4"); // 1
    Undly_117_set.insert("4");
    Undly_117.add_attribute("CashAmt", "UnderlyingCashAmount_t_1567630129"); // 1
    Undly_117_set.insert("UnderlyingCashAmount_t_1567630129");
    Undly_117.add_attribute("CashTyp", "FIXED"); // 1
    Undly_117_set.insert("FIXED");
    Undly_117.add_attribute("Px", "21010634.330000"); // 1
    Undly_117_set.insert("21010634.330000");
    Undly_117.add_attribute("DirtPx", "16903097.780000"); // 1
    Undly_117_set.insert("16903097.780000");
    Undly_117.add_attribute("EndPx", "10126424.950000"); // 1
    Undly_117_set.insert("10126424.950000");
    Undly_117.add_attribute("StartVal", "UnderlyingStartValue_t_1667634865"); // 1
    Undly_117_set.insert("UnderlyingStartValue_t_1667634865");
    Undly_117.add_attribute("CurVal", "UnderlyingCurrentValue_t_9047121"); // 1
    Undly_117_set.insert("UnderlyingCurrentValue_t_9047121");
    Undly_117.add_attribute("EndVal", "UnderlyingEndValue_t_649897944"); // 1
    Undly_117_set.insert("UnderlyingEndValue_t_649897944");
    Undly_117.add_attribute("AdjQty", "14433865.180000"); // 1
    Undly_117_set.insert("14433865.180000");
    Undly_117.add_attribute("FxRate", "17465169.250000"); // 1
    Undly_117_set.insert("17465169.250000");
    Undly_117.add_attribute("FxRateCalc", "M"); // 1
    Undly_117_set.insert("M");
    Undly_117.add_attribute("CapValu", "UnderlyingCapValue_t_782809924"); // 1
    Undly_117_set.insert("UnderlyingCapValue_t_782809924");
    Undly_117.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2146759221"); // 1
    Undly_117_set.insert("UnderlyingSettlMethod_t_2146759221");
    Undly_117.add_attribute("PutCall", "2106674542"); // 1
    Undly_117_set.insert("2106674542");
    all_values.push_back(Undly_117_set);
    all_compo_names.insert("Undly_117_set");

    {
      xml_element UndAID_117{"UndAID"};
      multiset<string> UndAID_117_set;
      UndAID_117.add_attribute("AltID", "UnderlyingSecurityAltID_t_2016172338"); // 2
      UndAID_117_set.insert("UnderlyingSecurityAltID_t_2016172338");
      UndAID_117.add_attribute("AltIDSrc", "K"); // 2
      UndAID_117_set.insert("K");
      all_values.push_back(UndAID_117_set);
      all_compo_names.insert("UndAID_117_set");

      Undly_117.add_element(UndAID_117);
    }
    {
      xml_element Stip_184{"Stip"};
      multiset<string> Stip_184_set;
      Stip_184.add_attribute("Typ", "MPR"); // 2
      Stip_184_set.insert("MPR");
      Stip_184.add_attribute("Val", "UnderlyingStipValue_t_516557008"); // 2
      Stip_184_set.insert("UnderlyingStipValue_t_516557008");
      all_values.push_back(Stip_184_set);
      all_compo_names.insert("Stip_184_set");

      Undly_117.add_element(Stip_184);
    }
    {
      xml_element Pty_445{"Pty"};
      multiset<string> Pty_445_set;
      Pty_445.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1838027532"); // 2
      Pty_445_set.insert("UnderlyingInstrumentPartyID_t_1838027532");
      Pty_445.add_attribute("Src", "E"); // 2
      Pty_445_set.insert("E");
      Pty_445.add_attribute("R", "27"); // 2
      Pty_445_set.insert("27");
      all_values.push_back(Pty_445_set);
      all_compo_names.insert("Pty_445_set");

      {
        xml_element Sub_445{"Sub"};
        multiset<string> Sub_445_set;
        Sub_445.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2077340976"); // 3
        Sub_445_set.insert("UnderlyingInstrumentPartySubID_t_2077340976");
        Sub_445.add_attribute("Typ", "21"); // 3
        Sub_445_set.insert("21");
        all_values.push_back(Sub_445_set);
        all_compo_names.insert("Sub_445_set");

        Pty_445.add_element(Sub_445);
      }
      Undly_117.add_element(Pty_445);
    }
    elt.add_element(Undly_117);
  } // end Undly
  { // Undly
    xml_element Undly_118{"Undly"};
    multiset<string> Undly_118_set;
    Undly_118.add_attribute("Sym", "UnderlyingSymbol_t_1273758955"); // 1
    Undly_118_set.insert("UnderlyingSymbol_t_1273758955");
    Undly_118.add_attribute("Sfx", "CD"); // 1
    Undly_118_set.insert("CD");
    Undly_118.add_attribute("ID", "UnderlyingSecurityID_t_165627655"); // 1
    Undly_118_set.insert("UnderlyingSecurityID_t_165627655");
    Undly_118.add_attribute("Src", "4"); // 1
    Undly_118_set.insert("4");
    Undly_118.add_attribute("Prod", "11"); // 1
    Undly_118_set.insert("11");
    Undly_118.add_attribute("CFI", "UnderlyingCFICode_t_204288203"); // 1
    Undly_118_set.insert("UnderlyingCFICode_t_204288203");
    Undly_118.add_attribute("SecTyp", "FADN"); // 1
    Undly_118_set.insert("FADN");
    Undly_118.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_47200704"); // 1
    Undly_118_set.insert("UnderlyingSecuritySubType_t_47200704");
    Undly_118.add_attribute("MMY", "1771918332"); // 1
    Undly_118_set.insert("1771918332");
    Undly_118.add_attribute("Mat", "UnderlyingMaturityDate_t_944289910"); // 1
    Undly_118_set.insert("UnderlyingMaturityDate_t_944289910");
    Undly_118.add_attribute("MatTm", "780489"); // 1
    Undly_118_set.insert("780489");
    Undly_118.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1314744463"); // 1
    Undly_118_set.insert("UnderlyingCouponPaymentDate_t_1314744463");
    Undly_118.add_attribute("RestrctTyp", "MR"); // 1
    Undly_118_set.insert("MR");
    Undly_118.add_attribute("Snrty", "SB"); // 1
    Undly_118_set.insert("SB");
    Undly_118.add_attribute("NotlPctOut", "13237915.840000"); // 1
    Undly_118_set.insert("13237915.840000");
    Undly_118.add_attribute("OrigNotlPctOut", "4593467.010000"); // 1
    Undly_118_set.insert("4593467.010000");
    Undly_118.add_attribute("AttchPnt", "9643182.250000"); // 1
    Undly_118_set.insert("9643182.250000");
    Undly_118.add_attribute("DetchPnt", "9228248.610000"); // 1
    Undly_118_set.insert("9228248.610000");
    Undly_118.add_attribute("Issued", "UnderlyingIssueDate_t_1126438660"); // 1
    Undly_118_set.insert("UnderlyingIssueDate_t_1126438660");
    Undly_118.add_attribute("RepoCollSecTyp", "1747128149"); // 1
    Undly_118_set.insert("1747128149");
    Undly_118.add_attribute("RepoTrm", "922100434"); // 1
    Undly_118_set.insert("922100434");
    Undly_118.add_attribute("RepoRt", "10856295.540000"); // 1
    Undly_118_set.insert("10856295.540000");
    Undly_118.add_attribute("Fctr", "16158168.400000"); // 1
    Undly_118_set.insert("16158168.400000");
    Undly_118.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1226204210"); // 1
    Undly_118_set.insert("UnderlyingCreditRating_t_1226204210");
    Undly_118.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1095543103"); // 1
    Undly_118_set.insert("UnderlyingInstrRegistry_t_1095543103");
    Undly_118.add_attribute("Ctry", "2132373848"); // 1
    Undly_118_set.insert("2132373848");
    Undly_118.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_916748094"); // 1
    Undly_118_set.insert("UnderlyingStateOrProvinceOfIssue_t_916748094");
    Undly_118.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_2098756556"); // 1
    Undly_118_set.insert("UnderlyingLocaleOfIssue_t_2098756556");
    Undly_118.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1832496090"); // 1
    Undly_118_set.insert("UnderlyingRedemptionDate_t_1832496090");
    Undly_118.add_attribute("StrkPx", "8466054.220000"); // 1
    Undly_118_set.insert("8466054.220000");
    Undly_118.add_attribute("StrkCcy", "CAN"); // 1
    Undly_118_set.insert("CAN");
    Undly_118.add_attribute("OptA", "2017995653"); // 1
    Undly_118_set.insert("2017995653");
    Undly_118.add_attribute("Mult", "13374190.080000"); // 1
    Undly_118_set.insert("13374190.080000");
    Undly_118.add_attribute("MultTyp", "0"); // 1
    Undly_118_set.insert("0");
    Undly_118.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_118_set.insert("0");
    Undly_118.add_attribute("UOM", "tn"); // 1
    Undly_118_set.insert("tn");
    Undly_118.add_attribute("UOMQty", "7524279.260000"); // 1
    Undly_118_set.insert("7524279.260000");
    Undly_118.add_attribute("PxUOM", "lbs"); // 1
    Undly_118_set.insert("lbs");
    Undly_118.add_attribute("PxUOMQty", "11661418.960000"); // 1
    Undly_118_set.insert("11661418.960000");
    Undly_118.add_attribute("TmUnit", "D"); // 1
    Undly_118_set.insert("D");
    Undly_118.add_attribute("ExerStyle", "1"); // 1
    Undly_118_set.insert("1");
    Undly_118.add_attribute("CpnRt", "3334027.110000"); // 1
    Undly_118_set.insert("3334027.110000");
    Undly_118.add_attribute("Exch", "UnderlyingSecurityExchange_t_1506166594"); // 1
    Undly_118_set.insert("UnderlyingSecurityExchange_t_1506166594");
    Undly_118.add_attribute("Issr", "UnderlyingIssuer_t_1152655660"); // 1
    Undly_118_set.insert("UnderlyingIssuer_t_1152655660");
    Undly_118.add_attribute("EncUndIssrLen", "1657194295"); // 1
    Undly_118_set.insert("1657194295");
    Undly_118.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1965513296"); // 1
    Undly_118_set.insert("EncodedUnderlyingIssuer_t_1965513296");
    Undly_118.add_attribute("Desc", "UnderlyingSecurityDesc_t_2116973886"); // 1
    Undly_118_set.insert("UnderlyingSecurityDesc_t_2116973886");
    Undly_118.add_attribute("EncUndSecDescLen", "432535508"); // 1
    Undly_118_set.insert("432535508");
    Undly_118.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_944468308"); // 1
    Undly_118_set.insert("EncodedUnderlyingSecurityDesc_t_944468308");
    Undly_118.add_attribute("CPPgm", "UnderlyingCPProgram_t_1716618387"); // 1
    Undly_118_set.insert("UnderlyingCPProgram_t_1716618387");
    Undly_118.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1354635942"); // 1
    Undly_118_set.insert("UnderlyingCPRegType_t_1354635942");
    Undly_118.add_attribute("AllocPct", "20300978.620000"); // 1
    Undly_118_set.insert("20300978.620000");
    Undly_118.add_attribute("Ccy", "USD"); // 1
    Undly_118_set.insert("USD");
    Undly_118.add_attribute("Qty", "9781573.170000"); // 1
    Undly_118_set.insert("9781573.170000");
    Undly_118.add_attribute("SettlTyp", "5"); // 1
    Undly_118_set.insert("5");
    Undly_118.add_attribute("CashAmt", "UnderlyingCashAmount_t_1350104598"); // 1
    Undly_118_set.insert("UnderlyingCashAmount_t_1350104598");
    Undly_118.add_attribute("CashTyp", "FIXED"); // 1
    Undly_118_set.insert("FIXED");
    Undly_118.add_attribute("Px", "8548542.210000"); // 1
    Undly_118_set.insert("8548542.210000");
    Undly_118.add_attribute("DirtPx", "492263.730000"); // 1
    Undly_118_set.insert("492263.730000");
    Undly_118.add_attribute("EndPx", "21012215.780000"); // 1
    Undly_118_set.insert("21012215.780000");
    Undly_118.add_attribute("StartVal", "UnderlyingStartValue_t_1813625618"); // 1
    Undly_118_set.insert("UnderlyingStartValue_t_1813625618");
    Undly_118.add_attribute("CurVal", "UnderlyingCurrentValue_t_2067222026"); // 1
    Undly_118_set.insert("UnderlyingCurrentValue_t_2067222026");
    Undly_118.add_attribute("EndVal", "UnderlyingEndValue_t_1291156938"); // 1
    Undly_118_set.insert("UnderlyingEndValue_t_1291156938");
    Undly_118.add_attribute("AdjQty", "8446696.320000"); // 1
    Undly_118_set.insert("8446696.320000");
    Undly_118.add_attribute("FxRate", "15034811.380000"); // 1
    Undly_118_set.insert("15034811.380000");
    Undly_118.add_attribute("FxRateCalc", "M"); // 1
    Undly_118_set.insert("M");
    Undly_118.add_attribute("CapValu", "UnderlyingCapValue_t_1597097559"); // 1
    Undly_118_set.insert("UnderlyingCapValue_t_1597097559");
    Undly_118.add_attribute("SetMeth", "UnderlyingSettlMethod_t_986940954"); // 1
    Undly_118_set.insert("UnderlyingSettlMethod_t_986940954");
    Undly_118.add_attribute("PutCall", "1851522398"); // 1
    Undly_118_set.insert("1851522398");
    all_values.push_back(Undly_118_set);
    all_compo_names.insert("Undly_118_set");

    {
      xml_element UndAID_118{"UndAID"};
      multiset<string> UndAID_118_set;
      UndAID_118.add_attribute("AltID", "UnderlyingSecurityAltID_t_1146331748"); // 2
      UndAID_118_set.insert("UnderlyingSecurityAltID_t_1146331748");
      UndAID_118.add_attribute("AltIDSrc", "M"); // 2
      UndAID_118_set.insert("M");
      all_values.push_back(UndAID_118_set);
      all_compo_names.insert("UndAID_118_set");

      Undly_118.add_element(UndAID_118);
    }
    {
      xml_element Stip_185{"Stip"};
      multiset<string> Stip_185_set;
      Stip_185.add_attribute("Typ", "MAT"); // 2
      Stip_185_set.insert("MAT");
      Stip_185.add_attribute("Val", "UnderlyingStipValue_t_505014694"); // 2
      Stip_185_set.insert("UnderlyingStipValue_t_505014694");
      all_values.push_back(Stip_185_set);
      all_compo_names.insert("Stip_185_set");

      Undly_118.add_element(Stip_185);
    }
    {
      xml_element Pty_446{"Pty"};
      multiset<string> Pty_446_set;
      Pty_446.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1623836920"); // 2
      Pty_446_set.insert("UnderlyingInstrumentPartyID_t_1623836920");
      Pty_446.add_attribute("Src", "H"); // 2
      Pty_446_set.insert("H");
      Pty_446.add_attribute("R", "84"); // 2
      Pty_446_set.insert("84");
      all_values.push_back(Pty_446_set);
      all_compo_names.insert("Pty_446_set");

      {
        xml_element Sub_446{"Sub"};
        multiset<string> Sub_446_set;
        Sub_446.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1593327158"); // 3
        Sub_446_set.insert("UnderlyingInstrumentPartySubID_t_1593327158");
        Sub_446.add_attribute("Typ", "18"); // 3
        Sub_446_set.insert("18");
        all_values.push_back(Sub_446_set);
        all_compo_names.insert("Sub_446_set");

        Pty_446.add_element(Sub_446);
      }
      Undly_118.add_element(Pty_446);
    }
    elt.add_element(Undly_118);
  } // end Undly
  { // Undly
    xml_element Undly_119{"Undly"};
    multiset<string> Undly_119_set;
    Undly_119.add_attribute("Sym", "UnderlyingSymbol_t_1267512650"); // 1
    Undly_119_set.insert("UnderlyingSymbol_t_1267512650");
    Undly_119.add_attribute("Sfx", "WI"); // 1
    Undly_119_set.insert("WI");
    Undly_119.add_attribute("ID", "UnderlyingSecurityID_t_1334323558"); // 1
    Undly_119_set.insert("UnderlyingSecurityID_t_1334323558");
    Undly_119.add_attribute("Src", "L"); // 1
    Undly_119_set.insert("L");
    Undly_119.add_attribute("Prod", "5"); // 1
    Undly_119_set.insert("5");
    Undly_119.add_attribute("CFI", "UnderlyingCFICode_t_1767680062"); // 1
    Undly_119_set.insert("UnderlyingCFICode_t_1767680062");
    Undly_119.add_attribute("SecTyp", "TBA"); // 1
    Undly_119_set.insert("TBA");
    Undly_119.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1369771608"); // 1
    Undly_119_set.insert("UnderlyingSecuritySubType_t_1369771608");
    Undly_119.add_attribute("MMY", "970301012"); // 1
    Undly_119_set.insert("970301012");
    Undly_119.add_attribute("Mat", "UnderlyingMaturityDate_t_910230760"); // 1
    Undly_119_set.insert("UnderlyingMaturityDate_t_910230760");
    Undly_119.add_attribute("MatTm", "77142182"); // 1
    Undly_119_set.insert("77142182");
    Undly_119.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1019527385"); // 1
    Undly_119_set.insert("UnderlyingCouponPaymentDate_t_1019527385");
    Undly_119.add_attribute("RestrctTyp", "XR"); // 1
    Undly_119_set.insert("XR");
    Undly_119.add_attribute("Snrty", "SR"); // 1
    Undly_119_set.insert("SR");
    Undly_119.add_attribute("NotlPctOut", "9392657.630000"); // 1
    Undly_119_set.insert("9392657.630000");
    Undly_119.add_attribute("OrigNotlPctOut", "76419.810000"); // 1
    Undly_119_set.insert("76419.810000");
    Undly_119.add_attribute("AttchPnt", "5879537.850000"); // 1
    Undly_119_set.insert("5879537.850000");
    Undly_119.add_attribute("DetchPnt", "2952632.530000"); // 1
    Undly_119_set.insert("2952632.530000");
    Undly_119.add_attribute("Issued", "UnderlyingIssueDate_t_693022483"); // 1
    Undly_119_set.insert("UnderlyingIssueDate_t_693022483");
    Undly_119.add_attribute("RepoCollSecTyp", "37567696"); // 1
    Undly_119_set.insert("37567696");
    Undly_119.add_attribute("RepoTrm", "1282204207"); // 1
    Undly_119_set.insert("1282204207");
    Undly_119.add_attribute("RepoRt", "3970612.330000"); // 1
    Undly_119_set.insert("3970612.330000");
    Undly_119.add_attribute("Fctr", "11838994.440000"); // 1
    Undly_119_set.insert("11838994.440000");
    Undly_119.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1753385467"); // 1
    Undly_119_set.insert("UnderlyingCreditRating_t_1753385467");
    Undly_119.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_434502694"); // 1
    Undly_119_set.insert("UnderlyingInstrRegistry_t_434502694");
    Undly_119.add_attribute("Ctry", "1688914138"); // 1
    Undly_119_set.insert("1688914138");
    Undly_119.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1229738739"); // 1
    Undly_119_set.insert("UnderlyingStateOrProvinceOfIssue_t_1229738739");
    Undly_119.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_2129138450"); // 1
    Undly_119_set.insert("UnderlyingLocaleOfIssue_t_2129138450");
    Undly_119.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2011958481"); // 1
    Undly_119_set.insert("UnderlyingRedemptionDate_t_2011958481");
    Undly_119.add_attribute("StrkPx", "6755822.490000"); // 1
    Undly_119_set.insert("6755822.490000");
    Undly_119.add_attribute("StrkCcy", "CHF"); // 1
    Undly_119_set.insert("CHF");
    Undly_119.add_attribute("OptA", "1838044146"); // 1
    Undly_119_set.insert("1838044146");
    Undly_119.add_attribute("Mult", "12956659.760000"); // 1
    Undly_119_set.insert("12956659.760000");
    Undly_119.add_attribute("MultTyp", "0"); // 1
    Undly_119_set.insert("0");
    Undly_119.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_119_set.insert("0");
    Undly_119.add_attribute("UOM", "MMBtu"); // 1
    Undly_119_set.insert("MMBtu");
    Undly_119.add_attribute("UOMQty", "1154312.350000"); // 1
    Undly_119_set.insert("1154312.350000");
    Undly_119.add_attribute("PxUOM", "Bu"); // 1
    Undly_119_set.insert("Bu");
    Undly_119.add_attribute("PxUOMQty", "18861634.030000"); // 1
    Undly_119_set.insert("18861634.030000");
    Undly_119.add_attribute("TmUnit", "Min"); // 1
    Undly_119_set.insert("Min");
    Undly_119.add_attribute("ExerStyle", "2"); // 1
    Undly_119_set.insert("2");
    Undly_119.add_attribute("CpnRt", "7582071.400000"); // 1
    Undly_119_set.insert("7582071.400000");
    Undly_119.add_attribute("Exch", "UnderlyingSecurityExchange_t_1889630686"); // 1
    Undly_119_set.insert("UnderlyingSecurityExchange_t_1889630686");
    Undly_119.add_attribute("Issr", "UnderlyingIssuer_t_1080688270"); // 1
    Undly_119_set.insert("UnderlyingIssuer_t_1080688270");
    Undly_119.add_attribute("EncUndIssrLen", "1697472904"); // 1
    Undly_119_set.insert("1697472904");
    Undly_119.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1897272668"); // 1
    Undly_119_set.insert("EncodedUnderlyingIssuer_t_1897272668");
    Undly_119.add_attribute("Desc", "UnderlyingSecurityDesc_t_1668642055"); // 1
    Undly_119_set.insert("UnderlyingSecurityDesc_t_1668642055");
    Undly_119.add_attribute("EncUndSecDescLen", "1992736157"); // 1
    Undly_119_set.insert("1992736157");
    Undly_119.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_442811503"); // 1
    Undly_119_set.insert("EncodedUnderlyingSecurityDesc_t_442811503");
    Undly_119.add_attribute("CPPgm", "UnderlyingCPProgram_t_1706209751"); // 1
    Undly_119_set.insert("UnderlyingCPProgram_t_1706209751");
    Undly_119.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1127456717"); // 1
    Undly_119_set.insert("UnderlyingCPRegType_t_1127456717");
    Undly_119.add_attribute("AllocPct", "8398727.370000"); // 1
    Undly_119_set.insert("8398727.370000");
    Undly_119.add_attribute("Ccy", "JPY"); // 1
    Undly_119_set.insert("JPY");
    Undly_119.add_attribute("Qty", "12743754.310000"); // 1
    Undly_119_set.insert("12743754.310000");
    Undly_119.add_attribute("SettlTyp", "2"); // 1
    Undly_119_set.insert("2");
    Undly_119.add_attribute("CashAmt", "UnderlyingCashAmount_t_1963097275"); // 1
    Undly_119_set.insert("UnderlyingCashAmount_t_1963097275");
    Undly_119.add_attribute("CashTyp", "FIXED"); // 1
    Undly_119_set.insert("FIXED");
    Undly_119.add_attribute("Px", "1485308.710000"); // 1
    Undly_119_set.insert("1485308.710000");
    Undly_119.add_attribute("DirtPx", "4911958.760000"); // 1
    Undly_119_set.insert("4911958.760000");
    Undly_119.add_attribute("EndPx", "12173726.520000"); // 1
    Undly_119_set.insert("12173726.520000");
    Undly_119.add_attribute("StartVal", "UnderlyingStartValue_t_1280518354"); // 1
    Undly_119_set.insert("UnderlyingStartValue_t_1280518354");
    Undly_119.add_attribute("CurVal", "UnderlyingCurrentValue_t_181756374"); // 1
    Undly_119_set.insert("UnderlyingCurrentValue_t_181756374");
    Undly_119.add_attribute("EndVal", "UnderlyingEndValue_t_365554981"); // 1
    Undly_119_set.insert("UnderlyingEndValue_t_365554981");
    Undly_119.add_attribute("AdjQty", "14151490.550000"); // 1
    Undly_119_set.insert("14151490.550000");
    Undly_119.add_attribute("FxRate", "722467.020000"); // 1
    Undly_119_set.insert("722467.020000");
    Undly_119.add_attribute("FxRateCalc", "D"); // 1
    Undly_119_set.insert("D");
    Undly_119.add_attribute("CapValu", "UnderlyingCapValue_t_1530580290"); // 1
    Undly_119_set.insert("UnderlyingCapValue_t_1530580290");
    Undly_119.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1332508638"); // 1
    Undly_119_set.insert("UnderlyingSettlMethod_t_1332508638");
    Undly_119.add_attribute("PutCall", "1020097126"); // 1
    Undly_119_set.insert("1020097126");
    all_values.push_back(Undly_119_set);
    all_compo_names.insert("Undly_119_set");

    {
      xml_element UndAID_119{"UndAID"};
      multiset<string> UndAID_119_set;
      UndAID_119.add_attribute("AltID", "UnderlyingSecurityAltID_t_408758637"); // 2
      UndAID_119_set.insert("UnderlyingSecurityAltID_t_408758637");
      UndAID_119.add_attribute("AltIDSrc", "F"); // 2
      UndAID_119_set.insert("F");
      all_values.push_back(UndAID_119_set);
      all_compo_names.insert("UndAID_119_set");

      Undly_119.add_element(UndAID_119);
    }
    {
      xml_element Stip_186{"Stip"};
      multiset<string> Stip_186_set;
      Stip_186.add_attribute("Typ", "MINQTY"); // 2
      Stip_186_set.insert("MINQTY");
      Stip_186.add_attribute("Val", "UnderlyingStipValue_t_150905676"); // 2
      Stip_186_set.insert("UnderlyingStipValue_t_150905676");
      all_values.push_back(Stip_186_set);
      all_compo_names.insert("Stip_186_set");

      Undly_119.add_element(Stip_186);
    }
    {
      xml_element Pty_447{"Pty"};
      multiset<string> Pty_447_set;
      Pty_447.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1603117378"); // 2
      Pty_447_set.insert("UnderlyingInstrumentPartyID_t_1603117378");
      Pty_447.add_attribute("Src", "C"); // 2
      Pty_447_set.insert("C");
      Pty_447.add_attribute("R", "47"); // 2
      Pty_447_set.insert("47");
      all_values.push_back(Pty_447_set);
      all_compo_names.insert("Pty_447_set");

      {
        xml_element Sub_447{"Sub"};
        multiset<string> Sub_447_set;
        Sub_447.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1124275786"); // 3
        Sub_447_set.insert("UnderlyingInstrumentPartySubID_t_1124275786");
        Sub_447.add_attribute("Typ", "33"); // 3
        Sub_447_set.insert("33");
        all_values.push_back(Sub_447_set);
        all_compo_names.insert("Sub_447_set");

        Pty_447.add_element(Sub_447);
      }
      Undly_119.add_element(Pty_447);
    }
    elt.add_element(Undly_119);
  } // end Undly
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_35{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_35_set;
    SprdBnchmkCurve_35.add_attribute("Spread", "3435061.990000"); // 1
    SprdBnchmkCurve_35_set.insert("3435061.990000");
    SprdBnchmkCurve_35.add_attribute("Ccy", "CAN"); // 1
    SprdBnchmkCurve_35_set.insert("CAN");
    SprdBnchmkCurve_35.add_attribute("Name", "LIBID"); // 1
    SprdBnchmkCurve_35_set.insert("LIBID");
    SprdBnchmkCurve_35.add_attribute("Point", "BenchmarkCurvePoint_t_1425627437"); // 1
    SprdBnchmkCurve_35_set.insert("BenchmarkCurvePoint_t_1425627437");
    SprdBnchmkCurve_35.add_attribute("Px", "8868776.370000"); // 1
    SprdBnchmkCurve_35_set.insert("8868776.370000");
    SprdBnchmkCurve_35.add_attribute("PxTyp", "3"); // 1
    SprdBnchmkCurve_35_set.insert("3");
    SprdBnchmkCurve_35.add_attribute("SecID", "BenchmarkSecurityID_t_1709683475"); // 1
    SprdBnchmkCurve_35_set.insert("BenchmarkSecurityID_t_1709683475");
    SprdBnchmkCurve_35.add_attribute("SecIDSrc", "3"); // 1
    SprdBnchmkCurve_35_set.insert("3");
    all_values.push_back(SprdBnchmkCurve_35_set);
    all_compo_names.insert("SprdBnchmkCurve_35_set");

    elt.add_element(SprdBnchmkCurve_35);
  } // end SprdBnchmkCurve
  { // Amt
    xml_element Amt_15{"Amt"};
    multiset<string> Amt_15_set;
    Amt_15.add_attribute("Typ", "TVAR"); // 1
    Amt_15_set.insert("TVAR");
    Amt_15.add_attribute("Amt", "PosAmt_t_1193687140"); // 1
    Amt_15_set.insert("PosAmt_t_1193687140");
    Amt_15.add_attribute("Ccy", "PositionCurrency_t_636189958"); // 1
    Amt_15_set.insert("PositionCurrency_t_636189958");
    all_values.push_back(Amt_15_set);
    all_compo_names.insert("Amt_15_set");

    elt.add_element(Amt_15);
  } // end Amt
  { // TrdLeg
    xml_element TrdLeg_0{"TrdLeg"};
    multiset<string> TrdLeg_0_set;
    TrdLeg_0.add_attribute("Qty", "13754435.150000"); // 1
    TrdLeg_0_set.insert("13754435.150000");
    TrdLeg_0.add_attribute("SwapTyp", "5"); // 1
    TrdLeg_0_set.insert("5");
    TrdLeg_0.add_attribute("RptID", "LegReportID_t_258914459"); // 1
    TrdLeg_0_set.insert("LegReportID_t_258914459");
    TrdLeg_0.add_attribute("LegNo", "1447690217"); // 1
    TrdLeg_0_set.insert("1447690217");
    TrdLeg_0.add_attribute("PosEfct", "R"); // 1
    TrdLeg_0_set.insert("R");
    TrdLeg_0.add_attribute("Cover", "1"); // 1
    TrdLeg_0_set.insert("1");
    TrdLeg_0.add_attribute("RefID", "LegRefID_t_632715207"); // 1
    TrdLeg_0_set.insert("LegRefID_t_632715207");
    TrdLeg_0.add_attribute("SettlTyp", "1"); // 1
    TrdLeg_0_set.insert("1");
    TrdLeg_0.add_attribute("SettlDt", "LegSettlDate_t_50769739"); // 1
    TrdLeg_0_set.insert("LegSettlDate_t_50769739");
    TrdLeg_0.add_attribute("LastPx", "11551443.150000"); // 1
    TrdLeg_0_set.insert("11551443.150000");
    TrdLeg_0.add_attribute("SettlCcy", "EUR"); // 1
    TrdLeg_0_set.insert("EUR");
    TrdLeg_0.add_attribute("LegLastFwdPnts", "6107780.450000"); // 1
    TrdLeg_0_set.insert("6107780.450000");
    TrdLeg_0.add_attribute("LegCalcCcyLastQty", "21148899.310000"); // 1
    TrdLeg_0_set.insert("21148899.310000");
    TrdLeg_0.add_attribute("LegGrossTrdAmt", "LegGrossTradeAmt_t_102370111"); // 1
    TrdLeg_0_set.insert("LegGrossTradeAmt_t_102370111");
    TrdLeg_0.add_attribute("LegVolatility", "17350538.310000"); // 1
    TrdLeg_0_set.insert("17350538.310000");
    TrdLeg_0.add_attribute("LegDividendYield", "11409523.160000"); // 1
    TrdLeg_0_set.insert("11409523.160000");
    TrdLeg_0.add_attribute("LegCurrencyRatio", "4458763.100000"); // 1
    TrdLeg_0_set.insert("4458763.100000");
    TrdLeg_0.add_attribute("LegExecInst", "9"); // 1
    TrdLeg_0_set.insert("9");
    TrdLeg_0.add_attribute("LastQty", "12944714.170000"); // 1
    TrdLeg_0_set.insert("12944714.170000");
    all_values.push_back(TrdLeg_0_set);
    all_compo_names.insert("TrdLeg_0_set");

    {
      xml_element Leg_101{"Leg"};
      multiset<string> Leg_101_set;
      Leg_101.add_attribute("Sym", "LegSymbol_t_1629255247"); // 2
      Leg_101_set.insert("LegSymbol_t_1629255247");
      Leg_101.add_attribute("Sfx", "CD"); // 2
      Leg_101_set.insert("CD");
      Leg_101.add_attribute("ID", "LegSecurityID_t_33865407"); // 2
      Leg_101_set.insert("LegSecurityID_t_33865407");
      Leg_101.add_attribute("Src", "6"); // 2
      Leg_101_set.insert("6");
      Leg_101.add_attribute("Prod", "1"); // 2
      Leg_101_set.insert("1");
      Leg_101.add_attribute("CFI", "LegCFICode_t_736356671"); // 2
      Leg_101_set.insert("LegCFICode_t_736356671");
      Leg_101.add_attribute("SecTyp", "TECP"); // 2
      Leg_101_set.insert("TECP");
      Leg_101.add_attribute("SecSubTyp", "LegSecuritySubType_t_969130035"); // 2
      Leg_101_set.insert("LegSecuritySubType_t_969130035");
      Leg_101.add_attribute("MMY", "1930043812"); // 2
      Leg_101_set.insert("1930043812");
      Leg_101.add_attribute("Mat", "LegMaturityDate_t_1994533231"); // 2
      Leg_101_set.insert("LegMaturityDate_t_1994533231");
      Leg_101.add_attribute("MatTm", "1960379087"); // 2
      Leg_101_set.insert("1960379087");
      Leg_101.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1158003679"); // 2
      Leg_101_set.insert("LegCouponPaymentDate_t_1158003679");
      Leg_101.add_attribute("Issued", "LegIssueDate_t_848794523"); // 2
      Leg_101_set.insert("LegIssueDate_t_848794523");
      Leg_101.add_attribute("RepoCollSecTyp", "71809899"); // 2
      Leg_101_set.insert("71809899");
      Leg_101.add_attribute("RepoTrm", "458210248"); // 2
      Leg_101_set.insert("458210248");
      Leg_101.add_attribute("RepoRt", "9844731.860000"); // 2
      Leg_101_set.insert("9844731.860000");
      Leg_101.add_attribute("Fctr", "18613046.480000"); // 2
      Leg_101_set.insert("18613046.480000");
      Leg_101.add_attribute("CrdRtg", "LegCreditRating_t_1090925455"); // 2
      Leg_101_set.insert("LegCreditRating_t_1090925455");
      Leg_101.add_attribute("Rgstry", "LegInstrRegistry_t_2140248975"); // 2
      Leg_101_set.insert("LegInstrRegistry_t_2140248975");
      Leg_101.add_attribute("Ctry", "1912074387"); // 2
      Leg_101_set.insert("1912074387");
      Leg_101.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_98586122"); // 2
      Leg_101_set.insert("LegStateOrProvinceOfIssue_t_98586122");
      Leg_101.add_attribute("Lcl", "LegLocaleOfIssue_t_779361736"); // 2
      Leg_101_set.insert("LegLocaleOfIssue_t_779361736");
      Leg_101.add_attribute("Redeem", "LegRedemptionDate_t_2113749802"); // 2
      Leg_101_set.insert("LegRedemptionDate_t_2113749802");
      Leg_101.add_attribute("Strk", "7093641.670000"); // 2
      Leg_101_set.insert("7093641.670000");
      Leg_101.add_attribute("StrkCcy", "CHF"); // 2
      Leg_101_set.insert("CHF");
      Leg_101.add_attribute("OptA", "296934351"); // 2
      Leg_101_set.insert("296934351");
      Leg_101.add_attribute("Cmult", "18877203.350000"); // 2
      Leg_101_set.insert("18877203.350000");
      Leg_101.add_attribute("MultTyp", "0"); // 2
      Leg_101_set.insert("0");
      Leg_101.add_attribute("FlowSchedTyp", "4"); // 2
      Leg_101_set.insert("4");
      Leg_101.add_attribute("UOM", "Bbl"); // 2
      Leg_101_set.insert("Bbl");
      Leg_101.add_attribute("UOMQty", "21437678.230000"); // 2
      Leg_101_set.insert("21437678.230000");
      Leg_101.add_attribute("PxUOM", "Bu"); // 2
      Leg_101_set.insert("Bu");
      Leg_101.add_attribute("PxUOMQty", "10685735.120000"); // 2
      Leg_101_set.insert("10685735.120000");
      Leg_101.add_attribute("TmUnit", "S"); // 2
      Leg_101_set.insert("S");
      Leg_101.add_attribute("ExerStyle", "2"); // 2
      Leg_101_set.insert("2");
      Leg_101.add_attribute("CpnRt", "18049301.830000"); // 2
      Leg_101_set.insert("18049301.830000");
      Leg_101.add_attribute("Exch", "LegSecurityExchange_t_1146669767"); // 2
      Leg_101_set.insert("LegSecurityExchange_t_1146669767");
      Leg_101.add_attribute("Issr", "LegIssuer_t_196268010"); // 2
      Leg_101_set.insert("LegIssuer_t_196268010");
      Leg_101.add_attribute("EncLegIssrLen", "1587490347"); // 2
      Leg_101_set.insert("1587490347");
      Leg_101.add_attribute("EncLegIssr", "EncodedLegIssuer_t_993719350"); // 2
      Leg_101_set.insert("EncodedLegIssuer_t_993719350");
      Leg_101.add_attribute("Desc", "LegSecurityDesc_t_9163449"); // 2
      Leg_101_set.insert("LegSecurityDesc_t_9163449");
      Leg_101.add_attribute("EncLegSecDescLen", "598010378"); // 2
      Leg_101_set.insert("598010378");
      Leg_101.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1842513873"); // 2
      Leg_101_set.insert("EncodedLegSecurityDesc_t_1842513873");
      Leg_101.add_attribute("RatioQty", "809733.480000"); // 2
      Leg_101_set.insert("809733.480000");
      Leg_101.add_attribute("Side", "3"); // 2
      Leg_101_set.insert("3");
      Leg_101.add_attribute("Ccy", "CHF"); // 2
      Leg_101_set.insert("CHF");
      Leg_101.add_attribute("Pool", "LegPool_t_2147146081"); // 2
      Leg_101_set.insert("LegPool_t_2147146081");
      Leg_101.add_attribute("Dated", "LegDatedDate_t_672268739"); // 2
      Leg_101_set.insert("LegDatedDate_t_672268739");
      Leg_101.add_attribute("CSetMo", "1706868736"); // 2
      Leg_101_set.insert("1706868736");
      Leg_101.add_attribute("IntAcrl", "LegInterestAccrualDate_t_98248555"); // 2
      Leg_101_set.insert("LegInterestAccrualDate_t_98248555");
      Leg_101.add_attribute("PutCall", "1451630475"); // 2
      Leg_101_set.insert("1451630475");
      Leg_101.add_attribute("LegOptionRatio", "16731348.910000"); // 2
      Leg_101_set.insert("16731348.910000");
      Leg_101.add_attribute("Px", "8076127.230000"); // 2
      Leg_101_set.insert("8076127.230000");
      all_values.push_back(Leg_101_set);
      all_compo_names.insert("Leg_101_set");

      {
        xml_element LegAID_96{"LegAID"};
        multiset<string> LegAID_96_set;
        LegAID_96.add_attribute("SecAltID", "LegSecurityAltID_t_50914846"); // 3
        LegAID_96_set.insert("LegSecurityAltID_t_50914846");
        LegAID_96.add_attribute("SecAltIDSrc", "5"); // 3
        LegAID_96_set.insert("5");
        all_values.push_back(LegAID_96_set);
        all_compo_names.insert("LegAID_96_set");

        Leg_101.add_element(LegAID_96);
      }
      TrdLeg_0.add_element(Leg_101);
    }
    {
      xml_element Stip_187{"Stip"};
      multiset<string> Stip_187_set;
      Stip_187.add_attribute("StipTyp", "PPM"); // 2
      Stip_187_set.insert("PPM");
      Stip_187.add_attribute("StipVal", "LegStipulationValue_t_1938635182"); // 2
      Stip_187_set.insert("LegStipulationValue_t_1938635182");
      all_values.push_back(Stip_187_set);
      all_compo_names.insert("Stip_187_set");

      TrdLeg_0.add_element(Stip_187);
    }
    {
      xml_element Pty_448{"Pty"};
      multiset<string> Pty_448_set;
      Pty_448.add_attribute("ID", "NestedPartyID_t_108800084"); // 2
      Pty_448_set.insert("NestedPartyID_t_108800084");
      Pty_448.add_attribute("Src", "1"); // 2
      Pty_448_set.insert("1");
      Pty_448.add_attribute("R", "4"); // 2
      Pty_448_set.insert("4");
      all_values.push_back(Pty_448_set);
      all_compo_names.insert("Pty_448_set");

      {
        xml_element Sub_448{"Sub"};
        multiset<string> Sub_448_set;
        Sub_448.add_attribute("ID", "NestedPartySubID_t_105084259"); // 3
        Sub_448_set.insert("NestedPartySubID_t_105084259");
        Sub_448.add_attribute("Typ", "18"); // 3
        Sub_448_set.insert("18");
        all_values.push_back(Sub_448_set);
        all_compo_names.insert("Sub_448_set");

        Pty_448.add_element(Sub_448);
      }
      TrdLeg_0.add_element(Pty_448);
    }
    {
      xml_element TradeCapLegUndlyGrp_0{"TradeCapLegUndlyGrp"};
      {
        xml_element Instrmt_89{"Instrmt"};
        multiset<string> Instrmt_89_set;
        Instrmt_89.add_attribute("Sym", "UnderlyingLegSymbol_t_1894433151"); // 3
        Instrmt_89_set.insert("UnderlyingLegSymbol_t_1894433151");
        Instrmt_89.add_attribute("Sfx", "UnderlyingLegSymbolSfx_t_2040894401"); // 3
        Instrmt_89_set.insert("UnderlyingLegSymbolSfx_t_2040894401");
        Instrmt_89.add_attribute("ID", "UnderlyingLegSecurityID_t_1015413759"); // 3
        Instrmt_89_set.insert("UnderlyingLegSecurityID_t_1015413759");
        Instrmt_89.add_attribute("Src", "UnderlyingLegSecurityIDSource_t_1551879686"); // 3
        Instrmt_89_set.insert("UnderlyingLegSecurityIDSource_t_1551879686");
        Instrmt_89.add_attribute("CFI", "UnderlyingLegCFICode_t_1040080520"); // 3
        Instrmt_89_set.insert("UnderlyingLegCFICode_t_1040080520");
        Instrmt_89.add_attribute("SecType", "UnderlyingLegSecurityType_t_1211681769"); // 3
        Instrmt_89_set.insert("UnderlyingLegSecurityType_t_1211681769");
        Instrmt_89.add_attribute("SubType", "UnderlyingLegSecuritySubType_t_991886386"); // 3
        Instrmt_89_set.insert("UnderlyingLegSecuritySubType_t_991886386");
        Instrmt_89.add_attribute("MMY", "2033799871"); // 3
        Instrmt_89_set.insert("2033799871");
        Instrmt_89.add_attribute("MatDt", "UnderlyingLegMaturityDate_t_1220845218"); // 3
        Instrmt_89_set.insert("UnderlyingLegMaturityDate_t_1220845218");
        Instrmt_89.add_attribute("MatTm", "1589896764"); // 3
        Instrmt_89_set.insert("1589896764");
        Instrmt_89.add_attribute("StrkPx", "17288300.960000"); // 3
        Instrmt_89_set.insert("17288300.960000");
        Instrmt_89.add_attribute("OptAt", "1301818567"); // 3
        Instrmt_89_set.insert("1301818567");
        Instrmt_89.add_attribute("PutCall", "498633743"); // 3
        Instrmt_89_set.insert("498633743");
        Instrmt_89.add_attribute("Exch", "UnderlyingLegSecurityExchange_t_260849860"); // 3
        Instrmt_89_set.insert("UnderlyingLegSecurityExchange_t_260849860");
        Instrmt_89.add_attribute("Desc", "UnderlyingLegSecurityDesc_t_1096612916"); // 3
        Instrmt_89_set.insert("UnderlyingLegSecurityDesc_t_1096612916");
        all_values.push_back(Instrmt_89_set);
        all_compo_names.insert("Instrmt_89_set");

        {
          xml_element AID_92{"AID"};
          multiset<string> AID_92_set;
          AID_92.add_attribute("AltID", "UnderlyingLegSecurityAltID_t_498296176"); // 4
          AID_92_set.insert("UnderlyingLegSecurityAltID_t_498296176");
          AID_92.add_attribute("AltIDSrc", "UnderlyingLegSecurityAltIDSource_t_933118599"); // 4
          AID_92_set.insert("UnderlyingLegSecurityAltIDSource_t_933118599");
          all_values.push_back(AID_92_set);
          all_compo_names.insert("AID_92_set");

          Instrmt_89.add_element(AID_92);
        }
        TradeCapLegUndlyGrp_0.add_element(Instrmt_89);
      }
      TrdLeg_0.add_element(TradeCapLegUndlyGrp_0);
    }
    elt.add_element(TrdLeg_0);
  } // end TrdLeg
  { // TrdLeg
    xml_element TrdLeg_1{"TrdLeg"};
    multiset<string> TrdLeg_1_set;
    TrdLeg_1.add_attribute("Qty", "6559980.040000"); // 1
    TrdLeg_1_set.insert("6559980.040000");
    TrdLeg_1.add_attribute("SwapTyp", "1"); // 1
    TrdLeg_1_set.insert("1");
    TrdLeg_1.add_attribute("RptID", "LegReportID_t_237265426"); // 1
    TrdLeg_1_set.insert("LegReportID_t_237265426");
    TrdLeg_1.add_attribute("LegNo", "181649247"); // 1
    TrdLeg_1_set.insert("181649247");
    TrdLeg_1.add_attribute("PosEfct", "R"); // 1
    TrdLeg_1_set.insert("R");
    TrdLeg_1.add_attribute("Cover", "0"); // 1
    TrdLeg_1_set.insert("0");
    TrdLeg_1.add_attribute("RefID", "LegRefID_t_1923420404"); // 1
    TrdLeg_1_set.insert("LegRefID_t_1923420404");
    TrdLeg_1.add_attribute("SettlTyp", "1"); // 1
    TrdLeg_1_set.insert("1");
    TrdLeg_1.add_attribute("SettlDt", "LegSettlDate_t_79331806"); // 1
    TrdLeg_1_set.insert("LegSettlDate_t_79331806");
    TrdLeg_1.add_attribute("LastPx", "20322204.880000"); // 1
    TrdLeg_1_set.insert("20322204.880000");
    TrdLeg_1.add_attribute("SettlCcy", "CAN"); // 1
    TrdLeg_1_set.insert("CAN");
    TrdLeg_1.add_attribute("LegLastFwdPnts", "21373047.480000"); // 1
    TrdLeg_1_set.insert("21373047.480000");
    TrdLeg_1.add_attribute("LegCalcCcyLastQty", "16740665.150000"); // 1
    TrdLeg_1_set.insert("16740665.150000");
    TrdLeg_1.add_attribute("LegGrossTrdAmt", "LegGrossTradeAmt_t_652140948"); // 1
    TrdLeg_1_set.insert("LegGrossTradeAmt_t_652140948");
    TrdLeg_1.add_attribute("LegVolatility", "20307155.010000"); // 1
    TrdLeg_1_set.insert("20307155.010000");
    TrdLeg_1.add_attribute("LegDividendYield", "5419966.260000"); // 1
    TrdLeg_1_set.insert("5419966.260000");
    TrdLeg_1.add_attribute("LegCurrencyRatio", "565369.870000"); // 1
    TrdLeg_1_set.insert("565369.870000");
    TrdLeg_1.add_attribute("LegExecInst", "s"); // 1
    TrdLeg_1_set.insert("s");
    TrdLeg_1.add_attribute("LastQty", "17536783.950000"); // 1
    TrdLeg_1_set.insert("17536783.950000");
    all_values.push_back(TrdLeg_1_set);
    all_compo_names.insert("TrdLeg_1_set");

    {
      xml_element Leg_102{"Leg"};
      multiset<string> Leg_102_set;
      Leg_102.add_attribute("Sym", "LegSymbol_t_1048423373"); // 2
      Leg_102_set.insert("LegSymbol_t_1048423373");
      Leg_102.add_attribute("Sfx", "WI"); // 2
      Leg_102_set.insert("WI");
      Leg_102.add_attribute("ID", "LegSecurityID_t_827039965"); // 2
      Leg_102_set.insert("LegSecurityID_t_827039965");
      Leg_102.add_attribute("Src", "C"); // 2
      Leg_102_set.insert("C");
      Leg_102.add_attribute("Prod", "3"); // 2
      Leg_102_set.insert("3");
      Leg_102.add_attribute("CFI", "LegCFICode_t_2128858532"); // 2
      Leg_102_set.insert("LegCFICode_t_2128858532");
      Leg_102.add_attribute("SecTyp", "TLQN"); // 2
      Leg_102_set.insert("TLQN");
      Leg_102.add_attribute("SecSubTyp", "LegSecuritySubType_t_651824905"); // 2
      Leg_102_set.insert("LegSecuritySubType_t_651824905");
      Leg_102.add_attribute("MMY", "1077987800"); // 2
      Leg_102_set.insert("1077987800");
      Leg_102.add_attribute("Mat", "LegMaturityDate_t_1487766409"); // 2
      Leg_102_set.insert("LegMaturityDate_t_1487766409");
      Leg_102.add_attribute("MatTm", "1584943504"); // 2
      Leg_102_set.insert("1584943504");
      Leg_102.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1733985805"); // 2
      Leg_102_set.insert("LegCouponPaymentDate_t_1733985805");
      Leg_102.add_attribute("Issued", "LegIssueDate_t_2084311141"); // 2
      Leg_102_set.insert("LegIssueDate_t_2084311141");
      Leg_102.add_attribute("RepoCollSecTyp", "1822208930"); // 2
      Leg_102_set.insert("1822208930");
      Leg_102.add_attribute("RepoTrm", "1915635052"); // 2
      Leg_102_set.insert("1915635052");
      Leg_102.add_attribute("RepoRt", "13409849.480000"); // 2
      Leg_102_set.insert("13409849.480000");
      Leg_102.add_attribute("Fctr", "21103892.030000"); // 2
      Leg_102_set.insert("21103892.030000");
      Leg_102.add_attribute("CrdRtg", "LegCreditRating_t_1691571808"); // 2
      Leg_102_set.insert("LegCreditRating_t_1691571808");
      Leg_102.add_attribute("Rgstry", "LegInstrRegistry_t_1702205829"); // 2
      Leg_102_set.insert("LegInstrRegistry_t_1702205829");
      Leg_102.add_attribute("Ctry", "42237361"); // 2
      Leg_102_set.insert("42237361");
      Leg_102.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1576308649"); // 2
      Leg_102_set.insert("LegStateOrProvinceOfIssue_t_1576308649");
      Leg_102.add_attribute("Lcl", "LegLocaleOfIssue_t_1587996560"); // 2
      Leg_102_set.insert("LegLocaleOfIssue_t_1587996560");
      Leg_102.add_attribute("Redeem", "LegRedemptionDate_t_947428807"); // 2
      Leg_102_set.insert("LegRedemptionDate_t_947428807");
      Leg_102.add_attribute("Strk", "15661297.490000"); // 2
      Leg_102_set.insert("15661297.490000");
      Leg_102.add_attribute("StrkCcy", "EUR"); // 2
      Leg_102_set.insert("EUR");
      Leg_102.add_attribute("OptA", "1449361602"); // 2
      Leg_102_set.insert("1449361602");
      Leg_102.add_attribute("Cmult", "16565760.530000"); // 2
      Leg_102_set.insert("16565760.530000");
      Leg_102.add_attribute("MultTyp", "2"); // 2
      Leg_102_set.insert("2");
      Leg_102.add_attribute("FlowSchedTyp", "3"); // 2
      Leg_102_set.insert("3");
      Leg_102.add_attribute("UOM", "tn"); // 2
      Leg_102_set.insert("tn");
      Leg_102.add_attribute("UOMQty", "5570464.670000"); // 2
      Leg_102_set.insert("5570464.670000");
      Leg_102.add_attribute("PxUOM", "Bcf"); // 2
      Leg_102_set.insert("Bcf");
      Leg_102.add_attribute("PxUOMQty", "20898107.650000"); // 2
      Leg_102_set.insert("20898107.650000");
      Leg_102.add_attribute("TmUnit", "H"); // 2
      Leg_102_set.insert("H");
      Leg_102.add_attribute("ExerStyle", "0"); // 2
      Leg_102_set.insert("0");
      Leg_102.add_attribute("CpnRt", "20711856.500000"); // 2
      Leg_102_set.insert("20711856.500000");
      Leg_102.add_attribute("Exch", "LegSecurityExchange_t_2037353189"); // 2
      Leg_102_set.insert("LegSecurityExchange_t_2037353189");
      Leg_102.add_attribute("Issr", "LegIssuer_t_2077618876"); // 2
      Leg_102_set.insert("LegIssuer_t_2077618876");
      Leg_102.add_attribute("EncLegIssrLen", "1001689802"); // 2
      Leg_102_set.insert("1001689802");
      Leg_102.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1377635950"); // 2
      Leg_102_set.insert("EncodedLegIssuer_t_1377635950");
      Leg_102.add_attribute("Desc", "LegSecurityDesc_t_1515078733"); // 2
      Leg_102_set.insert("LegSecurityDesc_t_1515078733");
      Leg_102.add_attribute("EncLegSecDescLen", "588191959"); // 2
      Leg_102_set.insert("588191959");
      Leg_102.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1314463443"); // 2
      Leg_102_set.insert("EncodedLegSecurityDesc_t_1314463443");
      Leg_102.add_attribute("RatioQty", "11898040.150000"); // 2
      Leg_102_set.insert("11898040.150000");
      Leg_102.add_attribute("Side", "5"); // 2
      Leg_102_set.insert("5");
      Leg_102.add_attribute("Ccy", "JPY"); // 2
      Leg_102_set.insert("JPY");
      Leg_102.add_attribute("Pool", "LegPool_t_2047915172"); // 2
      Leg_102_set.insert("LegPool_t_2047915172");
      Leg_102.add_attribute("Dated", "LegDatedDate_t_62686924"); // 2
      Leg_102_set.insert("LegDatedDate_t_62686924");
      Leg_102.add_attribute("CSetMo", "1194946932"); // 2
      Leg_102_set.insert("1194946932");
      Leg_102.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1476740173"); // 2
      Leg_102_set.insert("LegInterestAccrualDate_t_1476740173");
      Leg_102.add_attribute("PutCall", "1650683484"); // 2
      Leg_102_set.insert("1650683484");
      Leg_102.add_attribute("LegOptionRatio", "21423757.390000"); // 2
      Leg_102_set.insert("21423757.390000");
      Leg_102.add_attribute("Px", "8953862.740000"); // 2
      Leg_102_set.insert("8953862.740000");
      all_values.push_back(Leg_102_set);
      all_compo_names.insert("Leg_102_set");

      {
        xml_element LegAID_97{"LegAID"};
        multiset<string> LegAID_97_set;
        LegAID_97.add_attribute("SecAltID", "LegSecurityAltID_t_617779263"); // 3
        LegAID_97_set.insert("LegSecurityAltID_t_617779263");
        LegAID_97.add_attribute("SecAltIDSrc", "B"); // 3
        LegAID_97_set.insert("B");
        all_values.push_back(LegAID_97_set);
        all_compo_names.insert("LegAID_97_set");

        Leg_102.add_element(LegAID_97);
      }
      TrdLeg_1.add_element(Leg_102);
    }
    {
      xml_element Stip_188{"Stip"};
      multiset<string> Stip_188_set;
      Stip_188.add_attribute("StipTyp", "BROKERCREDIT"); // 2
      Stip_188_set.insert("BROKERCREDIT");
      Stip_188.add_attribute("StipVal", "LegStipulationValue_t_126871668"); // 2
      Stip_188_set.insert("LegStipulationValue_t_126871668");
      all_values.push_back(Stip_188_set);
      all_compo_names.insert("Stip_188_set");

      TrdLeg_1.add_element(Stip_188);
    }
    {
      xml_element Pty_449{"Pty"};
      multiset<string> Pty_449_set;
      Pty_449.add_attribute("ID", "NestedPartyID_t_1103084941"); // 2
      Pty_449_set.insert("NestedPartyID_t_1103084941");
      Pty_449.add_attribute("Src", "C"); // 2
      Pty_449_set.insert("C");
      Pty_449.add_attribute("R", "62"); // 2
      Pty_449_set.insert("62");
      all_values.push_back(Pty_449_set);
      all_compo_names.insert("Pty_449_set");

      {
        xml_element Sub_449{"Sub"};
        multiset<string> Sub_449_set;
        Sub_449.add_attribute("ID", "NestedPartySubID_t_1660131408"); // 3
        Sub_449_set.insert("NestedPartySubID_t_1660131408");
        Sub_449.add_attribute("Typ", "25"); // 3
        Sub_449_set.insert("25");
        all_values.push_back(Sub_449_set);
        all_compo_names.insert("Sub_449_set");

        Pty_449.add_element(Sub_449);
      }
      TrdLeg_1.add_element(Pty_449);
    }
    {
      xml_element TradeCapLegUndlyGrp_1{"TradeCapLegUndlyGrp"};
      {
        xml_element Instrmt_90{"Instrmt"};
        multiset<string> Instrmt_90_set;
        Instrmt_90.add_attribute("Sym", "UnderlyingLegSymbol_t_1331969586"); // 3
        Instrmt_90_set.insert("UnderlyingLegSymbol_t_1331969586");
        Instrmt_90.add_attribute("Sfx", "UnderlyingLegSymbolSfx_t_560530717"); // 3
        Instrmt_90_set.insert("UnderlyingLegSymbolSfx_t_560530717");
        Instrmt_90.add_attribute("ID", "UnderlyingLegSecurityID_t_735583806"); // 3
        Instrmt_90_set.insert("UnderlyingLegSecurityID_t_735583806");
        Instrmt_90.add_attribute("Src", "UnderlyingLegSecurityIDSource_t_1255671588"); // 3
        Instrmt_90_set.insert("UnderlyingLegSecurityIDSource_t_1255671588");
        Instrmt_90.add_attribute("CFI", "UnderlyingLegCFICode_t_450400259"); // 3
        Instrmt_90_set.insert("UnderlyingLegCFICode_t_450400259");
        Instrmt_90.add_attribute("SecType", "UnderlyingLegSecurityType_t_665719034"); // 3
        Instrmt_90_set.insert("UnderlyingLegSecurityType_t_665719034");
        Instrmt_90.add_attribute("SubType", "UnderlyingLegSecuritySubType_t_109877742"); // 3
        Instrmt_90_set.insert("UnderlyingLegSecuritySubType_t_109877742");
        Instrmt_90.add_attribute("MMY", "1828036209"); // 3
        Instrmt_90_set.insert("1828036209");
        Instrmt_90.add_attribute("MatDt", "UnderlyingLegMaturityDate_t_33314119"); // 3
        Instrmt_90_set.insert("UnderlyingLegMaturityDate_t_33314119");
        Instrmt_90.add_attribute("MatTm", "698069702"); // 3
        Instrmt_90_set.insert("698069702");
        Instrmt_90.add_attribute("StrkPx", "9950160.050000"); // 3
        Instrmt_90_set.insert("9950160.050000");
        Instrmt_90.add_attribute("OptAt", "1223118135"); // 3
        Instrmt_90_set.insert("1223118135");
        Instrmt_90.add_attribute("PutCall", "1054413066"); // 3
        Instrmt_90_set.insert("1054413066");
        Instrmt_90.add_attribute("Exch", "UnderlyingLegSecurityExchange_t_1502980748"); // 3
        Instrmt_90_set.insert("UnderlyingLegSecurityExchange_t_1502980748");
        Instrmt_90.add_attribute("Desc", "UnderlyingLegSecurityDesc_t_228344057"); // 3
        Instrmt_90_set.insert("UnderlyingLegSecurityDesc_t_228344057");
        all_values.push_back(Instrmt_90_set);
        all_compo_names.insert("Instrmt_90_set");

        {
          xml_element AID_93{"AID"};
          multiset<string> AID_93_set;
          AID_93.add_attribute("AltID", "UnderlyingLegSecurityAltID_t_954844590"); // 4
          AID_93_set.insert("UnderlyingLegSecurityAltID_t_954844590");
          AID_93.add_attribute("AltIDSrc", "UnderlyingLegSecurityAltIDSource_t_1565667673"); // 4
          AID_93_set.insert("UnderlyingLegSecurityAltIDSource_t_1565667673");
          all_values.push_back(AID_93_set);
          all_compo_names.insert("AID_93_set");

          Instrmt_90.add_element(AID_93);
        }
        TradeCapLegUndlyGrp_1.add_element(Instrmt_90);
      }
      TrdLeg_1.add_element(TradeCapLegUndlyGrp_1);
    }
    elt.add_element(TrdLeg_1);
  } // end TrdLeg
  { // TrdLeg
    xml_element TrdLeg_2{"TrdLeg"};
    multiset<string> TrdLeg_2_set;
    TrdLeg_2.add_attribute("Qty", "14232909.890000"); // 1
    TrdLeg_2_set.insert("14232909.890000");
    TrdLeg_2.add_attribute("SwapTyp", "1"); // 1
    TrdLeg_2_set.insert("1");
    TrdLeg_2.add_attribute("RptID", "LegReportID_t_1068867509"); // 1
    TrdLeg_2_set.insert("LegReportID_t_1068867509");
    TrdLeg_2.add_attribute("LegNo", "1418183080"); // 1
    TrdLeg_2_set.insert("1418183080");
    TrdLeg_2.add_attribute("PosEfct", "N"); // 1
    TrdLeg_2_set.insert("N");
    TrdLeg_2.add_attribute("Cover", "1"); // 1
    TrdLeg_2_set.insert("1");
    TrdLeg_2.add_attribute("RefID", "LegRefID_t_865161279"); // 1
    TrdLeg_2_set.insert("LegRefID_t_865161279");
    TrdLeg_2.add_attribute("SettlTyp", "7"); // 1
    TrdLeg_2_set.insert("7");
    TrdLeg_2.add_attribute("SettlDt", "LegSettlDate_t_1813518441"); // 1
    TrdLeg_2_set.insert("LegSettlDate_t_1813518441");
    TrdLeg_2.add_attribute("LastPx", "19682462.200000"); // 1
    TrdLeg_2_set.insert("19682462.200000");
    TrdLeg_2.add_attribute("SettlCcy", "GBP"); // 1
    TrdLeg_2_set.insert("GBP");
    TrdLeg_2.add_attribute("LegLastFwdPnts", "14808939.800000"); // 1
    TrdLeg_2_set.insert("14808939.800000");
    TrdLeg_2.add_attribute("LegCalcCcyLastQty", "11089960.120000"); // 1
    TrdLeg_2_set.insert("11089960.120000");
    TrdLeg_2.add_attribute("LegGrossTrdAmt", "LegGrossTradeAmt_t_240163200"); // 1
    TrdLeg_2_set.insert("LegGrossTradeAmt_t_240163200");
    TrdLeg_2.add_attribute("LegVolatility", "20414246.980000"); // 1
    TrdLeg_2_set.insert("20414246.980000");
    TrdLeg_2.add_attribute("LegDividendYield", "18445798.180000"); // 1
    TrdLeg_2_set.insert("18445798.180000");
    TrdLeg_2.add_attribute("LegCurrencyRatio", "14958347.880000"); // 1
    TrdLeg_2_set.insert("14958347.880000");
    TrdLeg_2.add_attribute("LegExecInst", "r"); // 1
    TrdLeg_2_set.insert("r");
    TrdLeg_2.add_attribute("LastQty", "3628152.040000"); // 1
    TrdLeg_2_set.insert("3628152.040000");
    all_values.push_back(TrdLeg_2_set);
    all_compo_names.insert("TrdLeg_2_set");

    {
      xml_element Leg_103{"Leg"};
      multiset<string> Leg_103_set;
      Leg_103.add_attribute("Sym", "LegSymbol_t_1605712530"); // 2
      Leg_103_set.insert("LegSymbol_t_1605712530");
      Leg_103.add_attribute("Sfx", "CD"); // 2
      Leg_103_set.insert("CD");
      Leg_103.add_attribute("ID", "LegSecurityID_t_396129324"); // 2
      Leg_103_set.insert("LegSecurityID_t_396129324");
      Leg_103.add_attribute("Src", "3"); // 2
      Leg_103_set.insert("3");
      Leg_103.add_attribute("Prod", "7"); // 2
      Leg_103_set.insert("7");
      Leg_103.add_attribute("CFI", "LegCFICode_t_1619247459"); // 2
      Leg_103_set.insert("LegCFICode_t_1619247459");
      Leg_103.add_attribute("SecTyp", "EUCP"); // 2
      Leg_103_set.insert("EUCP");
      Leg_103.add_attribute("SecSubTyp", "LegSecuritySubType_t_375406976"); // 2
      Leg_103_set.insert("LegSecuritySubType_t_375406976");
      Leg_103.add_attribute("MMY", "1847591516"); // 2
      Leg_103_set.insert("1847591516");
      Leg_103.add_attribute("Mat", "LegMaturityDate_t_18072593"); // 2
      Leg_103_set.insert("LegMaturityDate_t_18072593");
      Leg_103.add_attribute("MatTm", "1941074649"); // 2
      Leg_103_set.insert("1941074649");
      Leg_103.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1123398858"); // 2
      Leg_103_set.insert("LegCouponPaymentDate_t_1123398858");
      Leg_103.add_attribute("Issued", "LegIssueDate_t_302173709"); // 2
      Leg_103_set.insert("LegIssueDate_t_302173709");
      Leg_103.add_attribute("RepoCollSecTyp", "862458510"); // 2
      Leg_103_set.insert("862458510");
      Leg_103.add_attribute("RepoTrm", "394098290"); // 2
      Leg_103_set.insert("394098290");
      Leg_103.add_attribute("RepoRt", "14816610.990000"); // 2
      Leg_103_set.insert("14816610.990000");
      Leg_103.add_attribute("Fctr", "4016216.350000"); // 2
      Leg_103_set.insert("4016216.350000");
      Leg_103.add_attribute("CrdRtg", "LegCreditRating_t_1259259569"); // 2
      Leg_103_set.insert("LegCreditRating_t_1259259569");
      Leg_103.add_attribute("Rgstry", "LegInstrRegistry_t_710929071"); // 2
      Leg_103_set.insert("LegInstrRegistry_t_710929071");
      Leg_103.add_attribute("Ctry", "67656429"); // 2
      Leg_103_set.insert("67656429");
      Leg_103.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1080022141"); // 2
      Leg_103_set.insert("LegStateOrProvinceOfIssue_t_1080022141");
      Leg_103.add_attribute("Lcl", "LegLocaleOfIssue_t_362651600"); // 2
      Leg_103_set.insert("LegLocaleOfIssue_t_362651600");
      Leg_103.add_attribute("Redeem", "LegRedemptionDate_t_1123333691"); // 2
      Leg_103_set.insert("LegRedemptionDate_t_1123333691");
      Leg_103.add_attribute("Strk", "4134324.740000"); // 2
      Leg_103_set.insert("4134324.740000");
      Leg_103.add_attribute("StrkCcy", "CAN"); // 2
      Leg_103_set.insert("CAN");
      Leg_103.add_attribute("OptA", "307373524"); // 2
      Leg_103_set.insert("307373524");
      Leg_103.add_attribute("Cmult", "11687437.820000"); // 2
      Leg_103_set.insert("11687437.820000");
      Leg_103.add_attribute("MultTyp", "0"); // 2
      Leg_103_set.insert("0");
      Leg_103.add_attribute("FlowSchedTyp", "3"); // 2
      Leg_103_set.insert("3");
      Leg_103.add_attribute("UOM", "USD"); // 2
      Leg_103_set.insert("USD");
      Leg_103.add_attribute("UOMQty", "1700769.130000"); // 2
      Leg_103_set.insert("1700769.130000");
      Leg_103.add_attribute("PxUOM", "t"); // 2
      Leg_103_set.insert("t");
      Leg_103.add_attribute("PxUOMQty", "19276883.100000"); // 2
      Leg_103_set.insert("19276883.100000");
      Leg_103.add_attribute("TmUnit", "Min"); // 2
      Leg_103_set.insert("Min");
      Leg_103.add_attribute("ExerStyle", "0"); // 2
      Leg_103_set.insert("0");
      Leg_103.add_attribute("CpnRt", "13994521.210000"); // 2
      Leg_103_set.insert("13994521.210000");
      Leg_103.add_attribute("Exch", "LegSecurityExchange_t_1537087148"); // 2
      Leg_103_set.insert("LegSecurityExchange_t_1537087148");
      Leg_103.add_attribute("Issr", "LegIssuer_t_2071925555"); // 2
      Leg_103_set.insert("LegIssuer_t_2071925555");
      Leg_103.add_attribute("EncLegIssrLen", "1099559990"); // 2
      Leg_103_set.insert("1099559990");
      Leg_103.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1555159741"); // 2
      Leg_103_set.insert("EncodedLegIssuer_t_1555159741");
      Leg_103.add_attribute("Desc", "LegSecurityDesc_t_1865516556"); // 2
      Leg_103_set.insert("LegSecurityDesc_t_1865516556");
      Leg_103.add_attribute("EncLegSecDescLen", "75475200"); // 2
      Leg_103_set.insert("75475200");
      Leg_103.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1857333450"); // 2
      Leg_103_set.insert("EncodedLegSecurityDesc_t_1857333450");
      Leg_103.add_attribute("RatioQty", "5804914.180000"); // 2
      Leg_103_set.insert("5804914.180000");
      Leg_103.add_attribute("Side", "3"); // 2
      Leg_103_set.insert("3");
      Leg_103.add_attribute("Ccy", "USD"); // 2
      Leg_103_set.insert("USD");
      Leg_103.add_attribute("Pool", "LegPool_t_1728833060"); // 2
      Leg_103_set.insert("LegPool_t_1728833060");
      Leg_103.add_attribute("Dated", "LegDatedDate_t_1902439973"); // 2
      Leg_103_set.insert("LegDatedDate_t_1902439973");
      Leg_103.add_attribute("CSetMo", "1049769483"); // 2
      Leg_103_set.insert("1049769483");
      Leg_103.add_attribute("IntAcrl", "LegInterestAccrualDate_t_661371553"); // 2
      Leg_103_set.insert("LegInterestAccrualDate_t_661371553");
      Leg_103.add_attribute("PutCall", "117607925"); // 2
      Leg_103_set.insert("117607925");
      Leg_103.add_attribute("LegOptionRatio", "256195.260000"); // 2
      Leg_103_set.insert("256195.260000");
      Leg_103.add_attribute("Px", "10748040.270000"); // 2
      Leg_103_set.insert("10748040.270000");
      all_values.push_back(Leg_103_set);
      all_compo_names.insert("Leg_103_set");

      {
        xml_element LegAID_98{"LegAID"};
        multiset<string> LegAID_98_set;
        LegAID_98.add_attribute("SecAltID", "LegSecurityAltID_t_1589255537"); // 3
        LegAID_98_set.insert("LegSecurityAltID_t_1589255537");
        LegAID_98.add_attribute("SecAltIDSrc", "8"); // 3
        LegAID_98_set.insert("8");
        all_values.push_back(LegAID_98_set);
        all_compo_names.insert("LegAID_98_set");

        Leg_103.add_element(LegAID_98);
      }
      TrdLeg_2.add_element(Leg_103);
    }
    {
      xml_element Stip_189{"Stip"};
      multiset<string> Stip_189_set;
      Stip_189.add_attribute("StipTyp", "PMAX"); // 2
      Stip_189_set.insert("PMAX");
      Stip_189.add_attribute("StipVal", "LegStipulationValue_t_610515671"); // 2
      Stip_189_set.insert("LegStipulationValue_t_610515671");
      all_values.push_back(Stip_189_set);
      all_compo_names.insert("Stip_189_set");

      TrdLeg_2.add_element(Stip_189);
    }
    {
      xml_element Pty_450{"Pty"};
      multiset<string> Pty_450_set;
      Pty_450.add_attribute("ID", "NestedPartyID_t_2100964448"); // 2
      Pty_450_set.insert("NestedPartyID_t_2100964448");
      Pty_450.add_attribute("Src", "7"); // 2
      Pty_450_set.insert("7");
      Pty_450.add_attribute("R", "67"); // 2
      Pty_450_set.insert("67");
      all_values.push_back(Pty_450_set);
      all_compo_names.insert("Pty_450_set");

      {
        xml_element Sub_450{"Sub"};
        multiset<string> Sub_450_set;
        Sub_450.add_attribute("ID", "NestedPartySubID_t_123557713"); // 3
        Sub_450_set.insert("NestedPartySubID_t_123557713");
        Sub_450.add_attribute("Typ", "26"); // 3
        Sub_450_set.insert("26");
        all_values.push_back(Sub_450_set);
        all_compo_names.insert("Sub_450_set");

        Pty_450.add_element(Sub_450);
      }
      TrdLeg_2.add_element(Pty_450);
    }
    {
      xml_element TradeCapLegUndlyGrp_2{"TradeCapLegUndlyGrp"};
      {
        xml_element Instrmt_91{"Instrmt"};
        multiset<string> Instrmt_91_set;
        Instrmt_91.add_attribute("Sym", "UnderlyingLegSymbol_t_1922279320"); // 3
        Instrmt_91_set.insert("UnderlyingLegSymbol_t_1922279320");
        Instrmt_91.add_attribute("Sfx", "UnderlyingLegSymbolSfx_t_449933211"); // 3
        Instrmt_91_set.insert("UnderlyingLegSymbolSfx_t_449933211");
        Instrmt_91.add_attribute("ID", "UnderlyingLegSecurityID_t_112052371"); // 3
        Instrmt_91_set.insert("UnderlyingLegSecurityID_t_112052371");
        Instrmt_91.add_attribute("Src", "UnderlyingLegSecurityIDSource_t_1174247793"); // 3
        Instrmt_91_set.insert("UnderlyingLegSecurityIDSource_t_1174247793");
        Instrmt_91.add_attribute("CFI", "UnderlyingLegCFICode_t_1987020360"); // 3
        Instrmt_91_set.insert("UnderlyingLegCFICode_t_1987020360");
        Instrmt_91.add_attribute("SecType", "UnderlyingLegSecurityType_t_36494278"); // 3
        Instrmt_91_set.insert("UnderlyingLegSecurityType_t_36494278");
        Instrmt_91.add_attribute("SubType", "UnderlyingLegSecuritySubType_t_126324135"); // 3
        Instrmt_91_set.insert("UnderlyingLegSecuritySubType_t_126324135");
        Instrmt_91.add_attribute("MMY", "1394696453"); // 3
        Instrmt_91_set.insert("1394696453");
        Instrmt_91.add_attribute("MatDt", "UnderlyingLegMaturityDate_t_1902010834"); // 3
        Instrmt_91_set.insert("UnderlyingLegMaturityDate_t_1902010834");
        Instrmt_91.add_attribute("MatTm", "201799335"); // 3
        Instrmt_91_set.insert("201799335");
        Instrmt_91.add_attribute("StrkPx", "11045462.560000"); // 3
        Instrmt_91_set.insert("11045462.560000");
        Instrmt_91.add_attribute("OptAt", "335018604"); // 3
        Instrmt_91_set.insert("335018604");
        Instrmt_91.add_attribute("PutCall", "671372826"); // 3
        Instrmt_91_set.insert("671372826");
        Instrmt_91.add_attribute("Exch", "UnderlyingLegSecurityExchange_t_148573510"); // 3
        Instrmt_91_set.insert("UnderlyingLegSecurityExchange_t_148573510");
        Instrmt_91.add_attribute("Desc", "UnderlyingLegSecurityDesc_t_1317131658"); // 3
        Instrmt_91_set.insert("UnderlyingLegSecurityDesc_t_1317131658");
        all_values.push_back(Instrmt_91_set);
        all_compo_names.insert("Instrmt_91_set");

        {
          xml_element AID_94{"AID"};
          multiset<string> AID_94_set;
          AID_94.add_attribute("AltID", "UnderlyingLegSecurityAltID_t_252722238"); // 4
          AID_94_set.insert("UnderlyingLegSecurityAltID_t_252722238");
          AID_94.add_attribute("AltIDSrc", "UnderlyingLegSecurityAltIDSource_t_2051013483"); // 4
          AID_94_set.insert("UnderlyingLegSecurityAltIDSource_t_2051013483");
          all_values.push_back(AID_94_set);
          all_compo_names.insert("AID_94_set");

          Instrmt_91.add_element(AID_94);
        }
        TradeCapLegUndlyGrp_2.add_element(Instrmt_91);
      }
      TrdLeg_2.add_element(TradeCapLegUndlyGrp_2);
    }
    elt.add_element(TrdLeg_2);
  } // end TrdLeg
  { // TrdRegTS
    xml_element TrdRegTS_15{"TrdRegTS"};
    multiset<string> TrdRegTS_15_set;
    TrdRegTS_15.add_attribute("TS", "TrdRegTimestamp_t_914093791"); // 1
    TrdRegTS_15_set.insert("TrdRegTimestamp_t_914093791");
    TrdRegTS_15.add_attribute("Typ", "1"); // 1
    TrdRegTS_15_set.insert("1");
    TrdRegTS_15.add_attribute("Src", "TrdRegTimestampOrigin_t_245037019"); // 1
    TrdRegTS_15_set.insert("TrdRegTimestampOrigin_t_245037019");
    TrdRegTS_15.add_attribute("DskTyp", "PR"); // 1
    TrdRegTS_15_set.insert("PR");
    TrdRegTS_15.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_15_set.insert("1");
    TrdRegTS_15.add_attribute("DskOrdHndlInst", "MOO"); // 1
    TrdRegTS_15_set.insert("MOO");
    all_values.push_back(TrdRegTS_15_set);
    all_compo_names.insert("TrdRegTS_15_set");

    elt.add_element(TrdRegTS_15);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_16{"TrdRegTS"};
    multiset<string> TrdRegTS_16_set;
    TrdRegTS_16.add_attribute("TS", "TrdRegTimestamp_t_1223591722"); // 1
    TrdRegTS_16_set.insert("TrdRegTimestamp_t_1223591722");
    TrdRegTS_16.add_attribute("Typ", "4"); // 1
    TrdRegTS_16_set.insert("4");
    TrdRegTS_16.add_attribute("Src", "TrdRegTimestampOrigin_t_1587634236"); // 1
    TrdRegTS_16_set.insert("TrdRegTimestampOrigin_t_1587634236");
    TrdRegTS_16.add_attribute("DskTyp", "PR"); // 1
    TrdRegTS_16_set.insert("PR");
    TrdRegTS_16.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_16_set.insert("1");
    TrdRegTS_16.add_attribute("DskOrdHndlInst", "MQT"); // 1
    TrdRegTS_16_set.insert("MQT");
    all_values.push_back(TrdRegTS_16_set);
    all_compo_names.insert("TrdRegTS_16_set");

    elt.add_element(TrdRegTS_16);
  } // end TrdRegTS
  { // RptSide
    xml_element RptSide_0{"RptSide"};
    multiset<string> RptSide_0_set;
    RptSide_0.add_attribute("Side", "2"); // 1
    RptSide_0_set.insert("2");
    RptSide_0.add_attribute("SideExecID", "SideExecID_t_13641513"); // 1
    RptSide_0_set.insert("SideExecID_t_13641513");
    RptSide_0.add_attribute("OrdDelay", "1785070270"); // 1
    RptSide_0_set.insert("1785070270");
    RptSide_0.add_attribute("OrdDelayUnit", "15"); // 1
    RptSide_0_set.insert("15");
    RptSide_0.add_attribute("SideQty", "2000661873"); // 1
    RptSide_0_set.insert("2000661873");
    RptSide_0.add_attribute("RptID", "SideTradeReportID_t_1821564548"); // 1
    RptSide_0_set.insert("SideTradeReportID_t_1821564548");
    RptSide_0.add_attribute("FillStationCd", "SideFillStationCd_t_1143383930"); // 1
    RptSide_0_set.insert("SideFillStationCd_t_1143383930");
    RptSide_0.add_attribute("RsnCD", "SideReasonCd_t_1247874679"); // 1
    RptSide_0_set.insert("SideReasonCd_t_1247874679");
    RptSide_0.add_attribute("RptSeq", "1576091734"); // 1
    RptSide_0_set.insert("1576091734");
    RptSide_0.add_attribute("TrdSubTyp", "26"); // 1
    RptSide_0_set.insert("26");
    RptSide_0.add_attribute("NetGrossInd", "2"); // 1
    RptSide_0_set.insert("2");
    RptSide_0.add_attribute("Ccy", "USD"); // 1
    RptSide_0_set.insert("USD");
    RptSide_0.add_attribute("SettlCcy", "CHF"); // 1
    RptSide_0_set.insert("CHF");
    RptSide_0.add_attribute("Acct", "Account_t_121794682"); // 1
    RptSide_0_set.insert("Account_t_121794682");
    RptSide_0.add_attribute("AcctIDSrc", "3"); // 1
    RptSide_0_set.insert("3");
    RptSide_0.add_attribute("AcctTyp", "1"); // 1
    RptSide_0_set.insert("1");
    RptSide_0.add_attribute("ProcCode", "4"); // 1
    RptSide_0_set.insert("4");
    RptSide_0.add_attribute("OddLot", "N"); // 1
    RptSide_0_set.insert("N");
    RptSide_0.add_attribute("InptSrc", "TradeInputSource_t_1545212862"); // 1
    RptSide_0_set.insert("TradeInputSource_t_1545212862");
    RptSide_0.add_attribute("InptDev", "TradeInputDevice_t_877302644"); // 1
    RptSide_0_set.insert("TradeInputDevice_t_877302644");
    RptSide_0.add_attribute("ComplianceID", "ComplianceID_t_1888571689"); // 1
    RptSide_0_set.insert("ComplianceID_t_1888571689");
    RptSide_0.add_attribute("SolFlag", "N"); // 1
    RptSide_0_set.insert("N");
    RptSide_0.add_attribute("CustCpcty", "4"); // 1
    RptSide_0_set.insert("4");
    RptSide_0.add_attribute("SesID", "4"); // 1
    RptSide_0_set.insert("4");
    RptSide_0.add_attribute("SesSub", "7"); // 1
    RptSide_0_set.insert("7");
    RptSide_0.add_attribute("TmBkt", "TimeBracket_t_1063411178"); // 1
    RptSide_0_set.insert("TimeBracket_t_1063411178");
    RptSide_0.add_attribute("NumDaysInt", "2030013338"); // 1
    RptSide_0_set.insert("2030013338");
    RptSide_0.add_attribute("ExDt", "ExDate_t_35741541"); // 1
    RptSide_0_set.insert("ExDate_t_35741541");
    RptSide_0.add_attribute("AcrdIntRt", "5889454.290000"); // 1
    RptSide_0_set.insert("5889454.290000");
    RptSide_0.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_1872825340"); // 1
    RptSide_0_set.insert("AccruedInterestAmt_t_1872825340");
    RptSide_0.add_attribute("IntAtMat", "InterestAtMaturity_t_49383054"); // 1
    RptSide_0_set.insert("InterestAtMaturity_t_49383054");
    RptSide_0.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_226532051"); // 1
    RptSide_0_set.insert("EndAccruedInterestAmt_t_226532051");
    RptSide_0.add_attribute("StartCsh", "StartCash_t_742401487"); // 1
    RptSide_0_set.insert("StartCash_t_742401487");
    RptSide_0.add_attribute("EndCsh", "EndCash_t_2050044928"); // 1
    RptSide_0_set.insert("EndCash_t_2050044928");
    RptSide_0.add_attribute("Concession", "Concession_t_2048096599"); // 1
    RptSide_0_set.insert("Concession_t_2048096599");
    RptSide_0.add_attribute("TotTakedown", "TotalTakedown_t_1885785417"); // 1
    RptSide_0_set.insert("TotalTakedown_t_1885785417");
    RptSide_0.add_attribute("NetMny", "NetMoney_t_1150435959"); // 1
    RptSide_0_set.insert("NetMoney_t_1150435959");
    RptSide_0.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1476704685"); // 1
    RptSide_0_set.insert("SettlCurrAmt_t_1476704685");
    RptSide_0.add_attribute("SettlCurrFxRt", "10834850.350000"); // 1
    RptSide_0_set.insert("10834850.350000");
    RptSide_0.add_attribute("SettlCurrFxRtCalc", "M"); // 1
    RptSide_0_set.insert("M");
    RptSide_0.add_attribute("PosEfct", "D"); // 1
    RptSide_0_set.insert("D");
    RptSide_0.add_attribute("Txt", "Text_t_952557479"); // 1
    RptSide_0_set.insert("Text_t_952557479");
    RptSide_0.add_attribute("EncTxtLen", "1708884043"); // 1
    RptSide_0_set.insert("1708884043");
    RptSide_0.add_attribute("EncTxt", "EncodedText_t_173606076"); // 1
    RptSide_0_set.insert("EncodedText_t_173606076");
    RptSide_0.add_attribute("MLegRptTyp", "1"); // 1
    RptSide_0_set.insert("1");
    RptSide_0.add_attribute("ExchRule", "ExchangeRule_t_1965924675"); // 1
    RptSide_0_set.insert("ExchangeRule_t_1965924675");
    RptSide_0.add_attribute("AllocInd", "5"); // 1
    RptSide_0_set.insert("5");
    RptSide_0.add_attribute("PreallocMeth", "1"); // 1
    RptSide_0_set.insert("1");
    RptSide_0.add_attribute("AllocID", "AllocID_t_96619419"); // 1
    RptSide_0_set.insert("AllocID_t_96619419");
    RptSide_0.add_attribute("SideGrossTradeAmt", "SideGrossTradeAmt_t_871511133"); // 1
    RptSide_0_set.insert("SideGrossTradeAmt_t_871511133");
    RptSide_0.add_attribute("AgrsrInd", "N"); // 1
    RptSide_0_set.insert("N");
    RptSide_0.add_attribute("ExchSpeclInstr", "ExchangeSpecialInstructions_t_1985191108"); // 1
    RptSide_0_set.insert("ExchangeSpecialInstructions_t_1985191108");
    RptSide_0.add_attribute("OrdCat", "2"); // 1
    RptSide_0_set.insert("2");
    RptSide_0.add_attribute("LqdtyInd", "3"); // 1
    RptSide_0_set.insert("3");
    all_values.push_back(RptSide_0_set);
    all_compo_names.insert("RptSide_0_set");

    {
      xml_element Pty_451{"Pty"};
      multiset<string> Pty_451_set;
      Pty_451.add_attribute("ID", "PartyID_t_1799704469"); // 2
      Pty_451_set.insert("PartyID_t_1799704469");
      Pty_451.add_attribute("Src", "F"); // 2
      Pty_451_set.insert("F");
      Pty_451.add_attribute("R", "43"); // 2
      Pty_451_set.insert("43");
      all_values.push_back(Pty_451_set);
      all_compo_names.insert("Pty_451_set");

      {
        xml_element Sub_451{"Sub"};
        multiset<string> Sub_451_set;
        Sub_451.add_attribute("ID", "PartySubID_t_1682234159"); // 3
        Sub_451_set.insert("PartySubID_t_1682234159");
        Sub_451.add_attribute("Typ", "33"); // 3
        Sub_451_set.insert("33");
        all_values.push_back(Sub_451_set);
        all_compo_names.insert("Sub_451_set");

        Pty_451.add_element(Sub_451);
      }
      RptSide_0.add_element(Pty_451);
    }
    {
      xml_element ClrInst_9{"ClrInst"};
      multiset<string> ClrInst_9_set;
      ClrInst_9.add_attribute("ClrngInstrctn", "13"); // 2
      ClrInst_9_set.insert("13");
      all_values.push_back(ClrInst_9_set);
      all_compo_names.insert("ClrInst_9_set");

      RptSide_0.add_element(ClrInst_9);
    }
    {
      xml_element Comm_25{"Comm"};
      multiset<string> Comm_25_set;
      Comm_25.add_attribute("Comm", "Commission_t_1407575851"); // 2
      Comm_25_set.insert("Commission_t_1407575851");
      Comm_25.add_attribute("CommTyp", "1"); // 2
      Comm_25_set.insert("1");
      Comm_25.add_attribute("Ccy", "USD"); // 2
      Comm_25_set.insert("USD");
      Comm_25.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_25_set.insert("N");
      all_values.push_back(Comm_25_set);
      all_compo_names.insert("Comm_25_set");

      RptSide_0.add_element(Comm_25);
    }
    {
      xml_element ContAmt_2{"ContAmt"};
      multiset<string> ContAmt_2_set;
      ContAmt_2.add_attribute("ContAmtTyp", "15"); // 2
      ContAmt_2_set.insert("15");
      ContAmt_2.add_attribute("ContAmtValu", "18882791.080000"); // 2
      ContAmt_2_set.insert("18882791.080000");
      ContAmt_2.add_attribute("ContAmtCurr", "USD"); // 2
      ContAmt_2_set.insert("USD");
      all_values.push_back(ContAmt_2_set);
      all_compo_names.insert("ContAmt_2_set");

      RptSide_0.add_element(ContAmt_2);
    }
    {
      xml_element Stip_190{"Stip"};
      multiset<string> Stip_190_set;
      Stip_190.add_attribute("Typ", "ISSUE"); // 2
      Stip_190_set.insert("ISSUE");
      Stip_190.add_attribute("Val", "StipulationValue_t_573954807"); // 2
      Stip_190_set.insert("StipulationValue_t_573954807");
      all_values.push_back(Stip_190_set);
      all_compo_names.insert("Stip_190_set");

      RptSide_0.add_element(Stip_190);
    }
    {
      xml_element MiscFees_20{"MiscFees"};
      multiset<string> MiscFees_20_set;
      MiscFees_20.add_attribute("Amt", "MiscFeeAmt_t_995040724"); // 2
      MiscFees_20_set.insert("MiscFeeAmt_t_995040724");
      MiscFees_20.add_attribute("Curr", "GBP"); // 2
      MiscFees_20_set.insert("GBP");
      MiscFees_20.add_attribute("Typ", "4"); // 2
      MiscFees_20_set.insert("4");
      MiscFees_20.add_attribute("Basis", "1"); // 2
      MiscFees_20_set.insert("1");
      all_values.push_back(MiscFees_20_set);
      all_compo_names.insert("MiscFees_20_set");

      RptSide_0.add_element(MiscFees_20);
    }
    {
      xml_element Alloc_9{"Alloc"};
      multiset<string> Alloc_9_set;
      Alloc_9.add_attribute("Acct", "AllocAccount_t_2101279877"); // 2
      Alloc_9_set.insert("AllocAccount_t_2101279877");
      Alloc_9.add_attribute("ActIDSrc", "2"); // 2
      Alloc_9_set.insert("2");
      Alloc_9.add_attribute("AllocSettlCcy", "USD"); // 2
      Alloc_9_set.insert("USD");
      Alloc_9.add_attribute("IndAllocID", "IndividualAllocID_t_1366456204"); // 2
      Alloc_9_set.insert("IndividualAllocID_t_1366456204");
      Alloc_9.add_attribute("Qty", "15065231.070000"); // 2
      Alloc_9_set.insert("15065231.070000");
      Alloc_9.add_attribute("CustCpcty", "AllocCustomerCapacity_t_2035606756"); // 2
      Alloc_9_set.insert("AllocCustomerCapacity_t_2035606756");
      Alloc_9.add_attribute("Meth", "2"); // 2
      Alloc_9_set.insert("2");
      Alloc_9.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_152509809"); // 2
      Alloc_9_set.insert("SecondaryIndividualAllocID_t_152509809");
      Alloc_9.add_attribute("ClrFeeInd", "AllocClearingFeeIndicator_t_1687827577"); // 2
      Alloc_9_set.insert("AllocClearingFeeIndicator_t_1687827577");
      all_values.push_back(Alloc_9_set);
      all_compo_names.insert("Alloc_9_set");

      {
        xml_element Pty_452{"Pty"};
        multiset<string> Pty_452_set;
        Pty_452.add_attribute("ID", "Nested2PartyID_t_1350309714"); // 3
        Pty_452_set.insert("Nested2PartyID_t_1350309714");
        Pty_452.add_attribute("Src", "3"); // 3
        Pty_452_set.insert("3");
        Pty_452.add_attribute("R", "13"); // 3
        Pty_452_set.insert("13");
        all_values.push_back(Pty_452_set);
        all_compo_names.insert("Pty_452_set");

        {
          xml_element Sub_452{"Sub"};
          multiset<string> Sub_452_set;
          Sub_452.add_attribute("ID", "Nested2PartySubID_t_1613994630"); // 4
          Sub_452_set.insert("Nested2PartySubID_t_1613994630");
          Sub_452.add_attribute("Typ", "30"); // 4
          Sub_452_set.insert("30");
          all_values.push_back(Sub_452_set);
          all_compo_names.insert("Sub_452_set");

          Pty_452.add_element(Sub_452);
        }
        Alloc_9.add_element(Pty_452);
      }
      RptSide_0.add_element(Alloc_9);
    }
    {
      xml_element TrdRegTS_17{"TrdRegTS"};
      multiset<string> TrdRegTS_17_set;
      TrdRegTS_17.add_attribute("TS", "SideTrdRegTimestamp_t_482670292"); // 2
      TrdRegTS_17_set.insert("SideTrdRegTimestamp_t_482670292");
      TrdRegTS_17.add_attribute("Typ", "2"); // 2
      TrdRegTS_17_set.insert("2");
      TrdRegTS_17.add_attribute("Src", "SideTrdRegTimestampSrc_t_685126360"); // 2
      TrdRegTS_17_set.insert("SideTrdRegTimestampSrc_t_685126360");
      all_values.push_back(TrdRegTS_17_set);
      all_compo_names.insert("TrdRegTS_17_set");

      RptSide_0.add_element(TrdRegTS_17);
    }
    {
      xml_element SettlDetails_1{"SettlDetails"};
      multiset<string> SettlDetails_1_set;
      SettlDetails_1.add_attribute("SettlSrc", "2"); // 2
      SettlDetails_1_set.insert("2");
      all_values.push_back(SettlDetails_1_set);
      all_compo_names.insert("SettlDetails_1_set");

      {
        xml_element Pty_453{"Pty"};
        multiset<string> Pty_453_set;
        Pty_453.add_attribute("ID", "SettlPartyID_t_2142691850"); // 3
        Pty_453_set.insert("SettlPartyID_t_2142691850");
        Pty_453.add_attribute("Src", "2"); // 3
        Pty_453_set.insert("2");
        Pty_453.add_attribute("R", "38"); // 3
        Pty_453_set.insert("38");
        all_values.push_back(Pty_453_set);
        all_compo_names.insert("Pty_453_set");

        {
          xml_element Sub_453{"Sub"};
          multiset<string> Sub_453_set;
          Sub_453.add_attribute("ID", "SettlPartySubID_t_1361273411"); // 4
          Sub_453_set.insert("SettlPartySubID_t_1361273411");
          Sub_453.add_attribute("Typ", "1"); // 4
          Sub_453_set.insert("1");
          all_values.push_back(Sub_453_set);
          all_compo_names.insert("Sub_453_set");

          Pty_453.add_element(Sub_453);
        }
        SettlDetails_1.add_element(Pty_453);
      }
      RptSide_0.add_element(SettlDetails_1);
    }
    {
      xml_element TrdRptOrdDetl_0{"TrdRptOrdDetl"};
      multiset<string> TrdRptOrdDetl_0_set;
      TrdRptOrdDetl_0.add_attribute("OrdID", "OrderID_t_1050239938"); // 2
      TrdRptOrdDetl_0_set.insert("OrderID_t_1050239938");
      TrdRptOrdDetl_0.add_attribute("OrdID2", "SecondaryOrderID_t_1935228218"); // 2
      TrdRptOrdDetl_0_set.insert("SecondaryOrderID_t_1935228218");
      TrdRptOrdDetl_0.add_attribute("ClOrdID", "ClOrdID_t_1860364744"); // 2
      TrdRptOrdDetl_0_set.insert("ClOrdID_t_1860364744");
      TrdRptOrdDetl_0.add_attribute("ClOrdID2", "SecondaryClOrdID_t_679594265"); // 2
      TrdRptOrdDetl_0_set.insert("SecondaryClOrdID_t_679594265");
      TrdRptOrdDetl_0.add_attribute("ListID", "ListID_t_2070583420"); // 2
      TrdRptOrdDetl_0_set.insert("ListID_t_2070583420");
      TrdRptOrdDetl_0.add_attribute("RefOrdID", "RefOrderID_t_881527896"); // 2
      TrdRptOrdDetl_0_set.insert("RefOrderID_t_881527896");
      TrdRptOrdDetl_0.add_attribute("RefOrdIDSrc", "3"); // 2
      TrdRptOrdDetl_0_set.insert("3");
      TrdRptOrdDetl_0.add_attribute("RefOrdIDRsn", "1"); // 2
      TrdRptOrdDetl_0_set.insert("1");
      TrdRptOrdDetl_0.add_attribute("OrdTyp", "9"); // 2
      TrdRptOrdDetl_0_set.insert("9");
      TrdRptOrdDetl_0.add_attribute("Px", "20497642.290000"); // 2
      TrdRptOrdDetl_0_set.insert("20497642.290000");
      TrdRptOrdDetl_0.add_attribute("StopPx", "20747952.970000"); // 2
      TrdRptOrdDetl_0_set.insert("20747952.970000");
      TrdRptOrdDetl_0.add_attribute("ExecInst", "i"); // 2
      TrdRptOrdDetl_0_set.insert("i");
      TrdRptOrdDetl_0.add_attribute("OrdStat", "E"); // 2
      TrdRptOrdDetl_0_set.insert("E");
      TrdRptOrdDetl_0.add_attribute("LeavesQty", "19629184.050000"); // 2
      TrdRptOrdDetl_0_set.insert("19629184.050000");
      TrdRptOrdDetl_0.add_attribute("CumQty", "17178118.640000"); // 2
      TrdRptOrdDetl_0_set.insert("17178118.640000");
      TrdRptOrdDetl_0.add_attribute("TmInForce", "7"); // 2
      TrdRptOrdDetl_0_set.insert("7");
      TrdRptOrdDetl_0.add_attribute("ExpireTm", "ExpireTime_t_1503262334"); // 2
      TrdRptOrdDetl_0_set.insert("ExpireTime_t_1503262334");
      TrdRptOrdDetl_0.add_attribute("Cpcty", "G"); // 2
      TrdRptOrdDetl_0_set.insert("G");
      TrdRptOrdDetl_0.add_attribute("Rstctions", "8"); // 2
      TrdRptOrdDetl_0_set.insert("8");
      TrdRptOrdDetl_0.add_attribute("BkngTyp", "1"); // 2
      TrdRptOrdDetl_0_set.insert("1");
      TrdRptOrdDetl_0.add_attribute("OrigCustOrdCpcty", "2"); // 2
      TrdRptOrdDetl_0_set.insert("2");
      TrdRptOrdDetl_0.add_attribute("OrdInptDev", "OrderInputDevice_t_1583472187"); // 2
      TrdRptOrdDetl_0_set.insert("OrderInputDevice_t_1583472187");
      TrdRptOrdDetl_0.add_attribute("LotTyp", "3"); // 2
      TrdRptOrdDetl_0_set.insert("3");
      TrdRptOrdDetl_0.add_attribute("TransBkdTm", "TransBkdTime_t_166727865"); // 2
      TrdRptOrdDetl_0_set.insert("TransBkdTime_t_166727865");
      TrdRptOrdDetl_0.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_121114899"); // 2
      TrdRptOrdDetl_0_set.insert("OrigOrdModTime_t_121114899");
      all_values.push_back(TrdRptOrdDetl_0_set);
      all_compo_names.insert("TrdRptOrdDetl_0_set");

      {
        xml_element OrdQty_27{"OrdQty"};
        multiset<string> OrdQty_27_set;
        OrdQty_27.add_attribute("Qty", "15461910.490000"); // 3
        OrdQty_27_set.insert("15461910.490000");
        OrdQty_27.add_attribute("Cash", "1619360.670000"); // 3
        OrdQty_27_set.insert("1619360.670000");
        OrdQty_27.add_attribute("Pct", "12317295.700000"); // 3
        OrdQty_27_set.insert("12317295.700000");
        OrdQty_27.add_attribute("RndDir", "1"); // 3
        OrdQty_27_set.insert("1");
        OrdQty_27.add_attribute("RndMod", "15232094.780000"); // 3
        OrdQty_27_set.insert("15232094.780000");
        all_values.push_back(OrdQty_27_set);
        all_compo_names.insert("OrdQty_27_set");

        TrdRptOrdDetl_0.add_element(OrdQty_27);
      }
      {
        xml_element DsplyInstr_8{"DsplyInstr"};
        multiset<string> DsplyInstr_8_set;
        DsplyInstr_8.add_attribute("DisplayQty", "20970535.900000"); // 3
        DsplyInstr_8_set.insert("20970535.900000");
        DsplyInstr_8.add_attribute("SecDspQty", "6749067.810000"); // 3
        DsplyInstr_8_set.insert("6749067.810000");
        DsplyInstr_8.add_attribute("DspWhn", "1"); // 3
        DsplyInstr_8_set.insert("1");
        DsplyInstr_8.add_attribute("DspMthd", "3"); // 3
        DsplyInstr_8_set.insert("3");
        DsplyInstr_8.add_attribute("DsplLwQty", "13545010.460000"); // 3
        DsplyInstr_8_set.insert("13545010.460000");
        DsplyInstr_8.add_attribute("DisplayHighQty", "12340538.200000"); // 3
        DsplyInstr_8_set.insert("12340538.200000");
        DsplyInstr_8.add_attribute("DspMinIncr", "5439789.350000"); // 3
        DsplyInstr_8_set.insert("5439789.350000");
        DsplyInstr_8.add_attribute("RfrshQty", "5903181.520000"); // 3
        DsplyInstr_8_set.insert("5903181.520000");
        all_values.push_back(DsplyInstr_8_set);
        all_compo_names.insert("DsplyInstr_8_set");

        TrdRptOrdDetl_0.add_element(DsplyInstr_8);
      }
      RptSide_0.add_element(TrdRptOrdDetl_0);
    }
    elt.add_element(RptSide_0);
  } // end RptSide
  { // TrdRepIndicatorsGrp
    xml_element TrdRepIndicatorsGrp_0{"TrdRepIndicatorsGrp"};
    multiset<string> TrdRepIndicatorsGrp_0_set;
    TrdRepIndicatorsGrp_0.add_attribute("PtyRole", "58"); // 1
    TrdRepIndicatorsGrp_0_set.insert("58");
    TrdRepIndicatorsGrp_0.add_attribute("TrdRepInd", "false"); // 1
    TrdRepIndicatorsGrp_0_set.insert("false");
    all_values.push_back(TrdRepIndicatorsGrp_0_set);
    all_compo_names.insert("TrdRepIndicatorsGrp_0_set");

    elt.add_element(TrdRepIndicatorsGrp_0);
  } // end TrdRepIndicatorsGrp
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
