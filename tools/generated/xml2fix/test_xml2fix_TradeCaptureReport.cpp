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
  elt.add_attribute("RptID", "TradeReportID_t_1870820941"); // 0
  TradeCaptureReport_message_t_0.insert("TradeReportID_t_1870820941");
  elt.add_attribute("TrdID", "TradeID_t_694833743"); // 0
  TradeCaptureReport_message_t_0.insert("TradeID_t_694833743");
  elt.add_attribute("TrdID2", "SecondaryTradeID_t_1559120163"); // 0
  TradeCaptureReport_message_t_0.insert("SecondaryTradeID_t_1559120163");
  elt.add_attribute("FirmTrdID", "FirmTradeID_t_14976224"); // 0
  TradeCaptureReport_message_t_0.insert("FirmTradeID_t_14976224");
  elt.add_attribute("FirmTrdID2", "SecondaryFirmTradeID_t_1132939372"); // 0
  TradeCaptureReport_message_t_0.insert("SecondaryFirmTradeID_t_1132939372");
  elt.add_attribute("TransTyp", "2"); // 0
  TradeCaptureReport_message_t_0.insert("2");
  elt.add_attribute("RptTyp", "9"); // 0
  TradeCaptureReport_message_t_0.insert("9");
  elt.add_attribute("TrdRptStat", "0"); // 0
  TradeCaptureReport_message_t_0.insert("0");
  elt.add_attribute("ReqID", "TradeRequestID_t_2098592951"); // 0
  TradeCaptureReport_message_t_0.insert("TradeRequestID_t_2098592951");
  elt.add_attribute("TrdTyp", "27"); // 0
  TradeCaptureReport_message_t_0.insert("27");
  elt.add_attribute("TrdSubTyp", "21"); // 0
  TradeCaptureReport_message_t_0.insert("21");
  elt.add_attribute("TrdTyp2", "34"); // 0
  TradeCaptureReport_message_t_0.insert("34");
  elt.add_attribute("TrdHandlInst", "5"); // 0
  TradeCaptureReport_message_t_0.insert("5");
  elt.add_attribute("OrigTrdHandlInst", "0"); // 0
  TradeCaptureReport_message_t_0.insert("0");
  elt.add_attribute("OrigTrdDt", "OrigTradeDate_t_788806666"); // 0
  TradeCaptureReport_message_t_0.insert("OrigTradeDate_t_788806666");
  elt.add_attribute("OrigTrdID", "OrigTradeID_t_550081230"); // 0
  TradeCaptureReport_message_t_0.insert("OrigTradeID_t_550081230");
  elt.add_attribute("OrignTrdID2", "OrigSecondaryTradeID_t_436969723"); // 0
  TradeCaptureReport_message_t_0.insert("OrigSecondaryTradeID_t_436969723");
  elt.add_attribute("TrnsfrRsn", "TransferReason_t_1969708104"); // 0
  TradeCaptureReport_message_t_0.insert("TransferReason_t_1969708104");
  elt.add_attribute("ExecTyp", "9"); // 0
  TradeCaptureReport_message_t_0.insert("9");
  elt.add_attribute("TotNumTrdRpts", "1390456527"); // 0
  TradeCaptureReport_message_t_0.insert("1390456527");
  elt.add_attribute("LastRptReqed", "Y"); // 0
  TradeCaptureReport_message_t_0.insert("Y");
  elt.add_attribute("Unsol", "N"); // 0
  TradeCaptureReport_message_t_0.insert("N");
  elt.add_attribute("SubReqTyp", "2"); // 0
  TradeCaptureReport_message_t_0.insert("2");
  elt.add_attribute("RptRefID", "TradeReportRefID_t_211803070"); // 0
  TradeCaptureReport_message_t_0.insert("TradeReportRefID_t_211803070");
  elt.add_attribute("RptRefID2", "SecondaryTradeReportRefID_t_1444951039"); // 0
  TradeCaptureReport_message_t_0.insert("SecondaryTradeReportRefID_t_1444951039");
  elt.add_attribute("RptID2", "SecondaryTradeReportID_t_646262815"); // 0
  TradeCaptureReport_message_t_0.insert("SecondaryTradeReportID_t_646262815");
  elt.add_attribute("LinkID", "TradeLinkID_t_1844602367"); // 0
  TradeCaptureReport_message_t_0.insert("TradeLinkID_t_1844602367");
  elt.add_attribute("MtchID", "TrdMatchID_t_1899638618"); // 0
  TradeCaptureReport_message_t_0.insert("TrdMatchID_t_1899638618");
  elt.add_attribute("ExecID", "ExecID_t_339748129"); // 0
  TradeCaptureReport_message_t_0.insert("ExecID_t_339748129");
  elt.add_attribute("ExecID2", "SecondaryExecID_t_1779141103"); // 0
  TradeCaptureReport_message_t_0.insert("SecondaryExecID_t_1779141103");
  elt.add_attribute("ExecRstmtRsn", "5"); // 0
  TradeCaptureReport_message_t_0.insert("5");
  elt.add_attribute("PrevlyRpted", "N"); // 0
  TradeCaptureReport_message_t_0.insert("N");
  elt.add_attribute("PxTyp", "18"); // 0
  TradeCaptureReport_message_t_0.insert("18");
  elt.add_attribute("AsOfInd", "1"); // 0
  TradeCaptureReport_message_t_0.insert("1");
  elt.add_attribute("SetSesID", "EOD"); // 0
  TradeCaptureReport_message_t_0.insert("EOD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_1459430570"); // 0
  TradeCaptureReport_message_t_0.insert("SettlSessSubID_t_1459430570");
  elt.add_attribute("VenuTyp", "E"); // 0
  TradeCaptureReport_message_t_0.insert("E");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1802908888"); // 0
  TradeCaptureReport_message_t_0.insert("MarketSegmentID_t_1802908888");
  elt.add_attribute("MktID", "MarketID_t_746117697"); // 0
  TradeCaptureReport_message_t_0.insert("MarketID_t_746117697");
  elt.add_attribute("QtyTyp", "0"); // 0
  TradeCaptureReport_message_t_0.insert("0");
  elt.add_attribute("UndSesID", "UnderlyingTradingSessionID_t_383022851"); // 0
  TradeCaptureReport_message_t_0.insert("UnderlyingTradingSessionID_t_383022851");
  elt.add_attribute("UndSesSub", "UnderlyingTradingSessionSubID_t_1377710701"); // 0
  TradeCaptureReport_message_t_0.insert("UnderlyingTradingSessionSubID_t_1377710701");
  elt.add_attribute("LastQty", "18017901.320000"); // 0
  TradeCaptureReport_message_t_0.insert("18017901.320000");
  elt.add_attribute("LastPx", "13286093.260000"); // 0
  TradeCaptureReport_message_t_0.insert("13286093.260000");
  elt.add_attribute("CalcCcyLastQty", "16129903.870000"); // 0
  TradeCaptureReport_message_t_0.insert("16129903.870000");
  elt.add_attribute("Ccy", "JPY"); // 0
  TradeCaptureReport_message_t_0.insert("JPY");
  elt.add_attribute("SettlCcy", "GBP"); // 0
  TradeCaptureReport_message_t_0.insert("GBP");
  elt.add_attribute("LastParPx", "3722784.350000"); // 0
  TradeCaptureReport_message_t_0.insert("3722784.350000");
  elt.add_attribute("LastSpotRt", "12929329.900000"); // 0
  TradeCaptureReport_message_t_0.insert("12929329.900000");
  elt.add_attribute("LastFwdPnts", "2140635.300000"); // 0
  TradeCaptureReport_message_t_0.insert("2140635.300000");
  elt.add_attribute("LastSwapPnts", "5429970.040000"); // 0
  TradeCaptureReport_message_t_0.insert("5429970.040000");
  elt.add_attribute("LastMkt", "LastMkt_t_67405591"); // 0
  TradeCaptureReport_message_t_0.insert("LastMkt_t_67405591");
  elt.add_attribute("TrdDt", "TradeDate_t_425866600"); // 0
  TradeCaptureReport_message_t_0.insert("TradeDate_t_425866600");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1987948043"); // 0
  TradeCaptureReport_message_t_0.insert("ClearingBusinessDate_t_1987948043");
  elt.add_attribute("AvgPx", "7136684.060000"); // 0
  TradeCaptureReport_message_t_0.insert("7136684.060000");
  elt.add_attribute("AvgPxInd", "2"); // 0
  TradeCaptureReport_message_t_0.insert("2");
  elt.add_attribute("MLegRptTyp", "3"); // 0
  TradeCaptureReport_message_t_0.insert("3");
  elt.add_attribute("TrdLegRefID", "TradeLegRefID_t_1053416536"); // 0
  TradeCaptureReport_message_t_0.insert("TradeLegRefID_t_1053416536");
  elt.add_attribute("TxnTm", "TransactTime_t_1902126423"); // 0
  TradeCaptureReport_message_t_0.insert("TransactTime_t_1902126423");
  elt.add_attribute("SettlTyp", "B"); // 0
  TradeCaptureReport_message_t_0.insert("B");
  elt.add_attribute("SettlDt", "SettlDate_t_1116501958"); // 0
  TradeCaptureReport_message_t_0.insert("SettlDate_t_1116501958");
  elt.add_attribute("StlDt", "UnderlyingSettlementDate_t_81133973"); // 0
  TradeCaptureReport_message_t_0.insert("UnderlyingSettlementDate_t_81133973");
  elt.add_attribute("MtchStat", "1"); // 0
  TradeCaptureReport_message_t_0.insert("1");
  elt.add_attribute("MtchTyp", "A2"); // 0
  TradeCaptureReport_message_t_0.insert("A2");
  elt.add_attribute("Vol", "15405645.430000"); // 0
  TradeCaptureReport_message_t_0.insert("15405645.430000");
  elt.add_attribute("DividendYield", "8643108.680000"); // 0
  TradeCaptureReport_message_t_0.insert("8643108.680000");
  elt.add_attribute("RFR", "8499888.450000"); // 0
  TradeCaptureReport_message_t_0.insert("8499888.450000");
  elt.add_attribute("CurrencyRatio", "1391985.930000"); // 0
  TradeCaptureReport_message_t_0.insert("1391985.930000");
  elt.add_attribute("CopyMsgInd", "false"); // 0
  TradeCaptureReport_message_t_0.insert("false");
  elt.add_attribute("PubTrdInd", "N"); // 0
  TradeCaptureReport_message_t_0.insert("N");
  elt.add_attribute("TrdPubInd", "1"); // 0
  TradeCaptureReport_message_t_0.insert("1");
  elt.add_attribute("ShrtSaleRsn", "3"); // 0
  TradeCaptureReport_message_t_0.insert("3");
  elt.add_attribute("TierCD", "TierCode_t_414137374"); // 0
  TradeCaptureReport_message_t_0.insert("TierCode_t_414137374");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_982416033"); // 0
  TradeCaptureReport_message_t_0.insert("MessageEventSource_t_982416033");
  elt.add_attribute("LastUpdateTm", "LastUpdateTime_t_284770470"); // 0
  TradeCaptureReport_message_t_0.insert("LastUpdateTime_t_284770470");
  elt.add_attribute("RndPx", "1453442.820000"); // 0
  TradeCaptureReport_message_t_0.insert("1453442.820000");
  elt.add_attribute("TZTransactTime", "TZTransactTime_t_884892496"); // 0
  TradeCaptureReport_message_t_0.insert("TZTransactTime_t_884892496");
  elt.add_attribute("ReportedPxDiff", "true"); // 0
  TradeCaptureReport_message_t_0.insert("true");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_517622718"); // 0
  TradeCaptureReport_message_t_0.insert("GrossTradeAmt_t_517622718");
  elt.add_attribute("RejTxt", "RejectText_t_30341838"); // 0
  TradeCaptureReport_message_t_0.insert("RejectText_t_30341838");
  elt.add_attribute("FeeMult", "7641716.060000"); // 0
  TradeCaptureReport_message_t_0.insert("7641716.060000");
  all_values.push_back(TradeCaptureReport_message_t_0);
  all_compo_names.insert("TradeCaptureReport_message_t");

  { // Hdr
    xml_element Hdr_96{"Hdr"};
    multiset<string> Hdr_96_set;
    Hdr_96.add_attribute("SeqNum", "1060619722"); // 1
    Hdr_96_set.insert("1060619722");
    Hdr_96.add_attribute("SID", "SenderCompID_t_97747429"); // 1
    Hdr_96_set.insert("SenderCompID_t_97747429");
    Hdr_96.add_attribute("TID", "TargetCompID_t_1190038207"); // 1
    Hdr_96_set.insert("TargetCompID_t_1190038207");
    Hdr_96.add_attribute("OBID", "OnBehalfOfCompID_t_901084117"); // 1
    Hdr_96_set.insert("OnBehalfOfCompID_t_901084117");
    Hdr_96.add_attribute("D2ID", "DeliverToCompID_t_811415836"); // 1
    Hdr_96_set.insert("DeliverToCompID_t_811415836");
    Hdr_96.add_attribute("SSub", "SenderSubID_t_1313023527"); // 1
    Hdr_96_set.insert("SenderSubID_t_1313023527");
    Hdr_96.add_attribute("SLoc", "SenderLocationID_t_493703482"); // 1
    Hdr_96_set.insert("SenderLocationID_t_493703482");
    Hdr_96.add_attribute("TSub", "TargetSubID_t_1864832372"); // 1
    Hdr_96_set.insert("TargetSubID_t_1864832372");
    Hdr_96.add_attribute("TLoc", "TargetLocationID_t_1067666302"); // 1
    Hdr_96_set.insert("TargetLocationID_t_1067666302");
    Hdr_96.add_attribute("OBSub", "OnBehalfOfSubID_t_256643185"); // 1
    Hdr_96_set.insert("OnBehalfOfSubID_t_256643185");
    Hdr_96.add_attribute("OBLoc", "OnBehalfOfLocationID_t_833850682"); // 1
    Hdr_96_set.insert("OnBehalfOfLocationID_t_833850682");
    Hdr_96.add_attribute("D2Sub", "DeliverToSubID_t_1148800275"); // 1
    Hdr_96_set.insert("DeliverToSubID_t_1148800275");
    Hdr_96.add_attribute("D2Loc", "DeliverToLocationID_t_1749023390"); // 1
    Hdr_96_set.insert("DeliverToLocationID_t_1749023390");
    Hdr_96.add_attribute("PosDup", "N"); // 1
    Hdr_96_set.insert("N");
    Hdr_96.add_attribute("PosRsnd", "N"); // 1
    Hdr_96_set.insert("N");
    Hdr_96.add_attribute("Snt", "SendingTime_t_465850611"); // 1
    Hdr_96_set.insert("SendingTime_t_465850611");
    Hdr_96.add_attribute("OrigSnt", "OrigSendingTime_t_730919485"); // 1
    Hdr_96_set.insert("OrigSendingTime_t_730919485");
    Hdr_96.add_attribute("MsgEncd", "MessageEncoding_t_681079763"); // 1
    Hdr_96_set.insert("MessageEncoding_t_681079763");
    all_values.push_back(Hdr_96_set);
    all_compo_names.insert("Hdr_96_set");

    {
      xml_element Hop_96{"Hop"};
      multiset<string> Hop_96_set;
      Hop_96.add_attribute("ID", "HopCompID_t_653201446"); // 2
      Hop_96_set.insert("HopCompID_t_653201446");
      Hop_96.add_attribute("Ref", "1963931182"); // 2
      Hop_96_set.insert("1963931182");
      Hop_96.add_attribute("Snt", "HopSendingTime_t_50505409"); // 2
      Hop_96_set.insert("HopSendingTime_t_50505409");
      all_values.push_back(Hop_96_set);
      all_compo_names.insert("Hop_96_set");

      Hdr_96.add_element(Hop_96);
    }
    elt.add_element(Hdr_96);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_19{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_19_set;
    ApplSeqCtrl_19.add_attribute("ApplID", "ApplID_t_494858765"); // 1
    ApplSeqCtrl_19_set.insert("ApplID_t_494858765");
    ApplSeqCtrl_19.add_attribute("ApplSeqNum", "230584908"); // 1
    ApplSeqCtrl_19_set.insert("230584908");
    ApplSeqCtrl_19.add_attribute("ApplLastSeqNum", "1032921443"); // 1
    ApplSeqCtrl_19_set.insert("1032921443");
    ApplSeqCtrl_19.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_19_set.insert("false");
    all_values.push_back(ApplSeqCtrl_19_set);
    all_compo_names.insert("ApplSeqCtrl_19_set");

    elt.add_element(ApplSeqCtrl_19);
  } // end ApplSeqCtrl
  { // Pty
    xml_element Pty_410{"Pty"};
    multiset<string> Pty_410_set;
    Pty_410.add_attribute("ID", "RootPartyID_t_1917813939"); // 1
    Pty_410_set.insert("RootPartyID_t_1917813939");
    Pty_410.add_attribute("Src", "3"); // 1
    Pty_410_set.insert("3");
    Pty_410.add_attribute("R", "63"); // 1
    Pty_410_set.insert("63");
    all_values.push_back(Pty_410_set);
    all_compo_names.insert("Pty_410_set");

    {
      xml_element Sub_410{"Sub"};
      multiset<string> Sub_410_set;
      Sub_410.add_attribute("ID", "RootPartySubID_t_1948155778"); // 2
      Sub_410_set.insert("RootPartySubID_t_1948155778");
      Sub_410.add_attribute("Typ", "21"); // 2
      Sub_410_set.insert("21");
      all_values.push_back(Sub_410_set);
      all_compo_names.insert("Sub_410_set");

      Pty_410.add_element(Sub_410);
    }
    elt.add_element(Pty_410);
  } // end Pty
  { // Pty
    xml_element Pty_411{"Pty"};
    multiset<string> Pty_411_set;
    Pty_411.add_attribute("ID", "RootPartyID_t_1954171631"); // 1
    Pty_411_set.insert("RootPartyID_t_1954171631");
    Pty_411.add_attribute("Src", "6"); // 1
    Pty_411_set.insert("6");
    Pty_411.add_attribute("R", "18"); // 1
    Pty_411_set.insert("18");
    all_values.push_back(Pty_411_set);
    all_compo_names.insert("Pty_411_set");

    {
      xml_element Sub_411{"Sub"};
      multiset<string> Sub_411_set;
      Sub_411.add_attribute("ID", "RootPartySubID_t_707772100"); // 2
      Sub_411_set.insert("RootPartySubID_t_707772100");
      Sub_411.add_attribute("Typ", "24"); // 2
      Sub_411_set.insert("24");
      all_values.push_back(Sub_411_set);
      all_compo_names.insert("Sub_411_set");

      Pty_411.add_element(Sub_411);
    }
    elt.add_element(Pty_411);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_82{"Instrmt"};
    multiset<string> Instrmt_82_set;
    Instrmt_82.add_attribute("Sym", "Symbol_t_302003356"); // 1
    Instrmt_82_set.insert("Symbol_t_302003356");
    Instrmt_82.add_attribute("Sfx", "CD"); // 1
    Instrmt_82_set.insert("CD");
    Instrmt_82.add_attribute("ID", "SecurityID_t_427184119"); // 1
    Instrmt_82_set.insert("SecurityID_t_427184119");
    Instrmt_82.add_attribute("Src", "H"); // 1
    Instrmt_82_set.insert("H");
    Instrmt_82.add_attribute("Prod", "10"); // 1
    Instrmt_82_set.insert("10");
    Instrmt_82.add_attribute("ProdCmplx", "ProductComplex_t_1261034802"); // 1
    Instrmt_82_set.insert("ProductComplex_t_1261034802");
    Instrmt_82.add_attribute("SecGrp", "SecurityGroup_t_370986285"); // 1
    Instrmt_82_set.insert("SecurityGroup_t_370986285");
    Instrmt_82.add_attribute("CFI", "CFICode_t_1059658510"); // 1
    Instrmt_82_set.insert("CFICode_t_1059658510");
    Instrmt_82.add_attribute("SecTyp", "EUSUPRA"); // 1
    Instrmt_82_set.insert("EUSUPRA");
    Instrmt_82.add_attribute("SubTyp", "SecuritySubType_t_912867456"); // 1
    Instrmt_82_set.insert("SecuritySubType_t_912867456");
    Instrmt_82.add_attribute("MMY", "1525509121"); // 1
    Instrmt_82_set.insert("1525509121");
    Instrmt_82.add_attribute("MatDt", "MaturityDate_t_1872884927"); // 1
    Instrmt_82_set.insert("MaturityDate_t_1872884927");
    Instrmt_82.add_attribute("MatTm", "1593947219"); // 1
    Instrmt_82_set.insert("1593947219");
    Instrmt_82.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_31226919"); // 1
    Instrmt_82_set.insert("SettleOnOpenFlag_t_31226919");
    Instrmt_82.add_attribute("AsgnMeth", "1689332461"); // 1
    Instrmt_82_set.insert("1689332461");
    Instrmt_82.add_attribute("Status", "2"); // 1
    Instrmt_82_set.insert("2");
    Instrmt_82.add_attribute("CpnPmt", "CouponPaymentDate_t_526085684"); // 1
    Instrmt_82_set.insert("CouponPaymentDate_t_526085684");
    Instrmt_82.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_82_set.insert("MM");
    Instrmt_82.add_attribute("Snrty", "SR"); // 1
    Instrmt_82_set.insert("SR");
    Instrmt_82.add_attribute("NotlPctOut", "13057149.200000"); // 1
    Instrmt_82_set.insert("13057149.200000");
    Instrmt_82.add_attribute("OrigNotlPctOut", "1483629.130000"); // 1
    Instrmt_82_set.insert("1483629.130000");
    Instrmt_82.add_attribute("AttchPnt", "3002207.150000"); // 1
    Instrmt_82_set.insert("3002207.150000");
    Instrmt_82.add_attribute("DetchPnt", "4879685.840000"); // 1
    Instrmt_82_set.insert("4879685.840000");
    Instrmt_82.add_attribute("Issued", "IssueDate_t_1041914822"); // 1
    Instrmt_82_set.insert("IssueDate_t_1041914822");
    Instrmt_82.add_attribute("RepoCollSecTyp", "100892845"); // 1
    Instrmt_82_set.insert("100892845");
    Instrmt_82.add_attribute("RepoTrm", "434393854"); // 1
    Instrmt_82_set.insert("434393854");
    Instrmt_82.add_attribute("RepoRt", "8486028.050000"); // 1
    Instrmt_82_set.insert("8486028.050000");
    Instrmt_82.add_attribute("Fctr", "21467960.530000"); // 1
    Instrmt_82_set.insert("21467960.530000");
    Instrmt_82.add_attribute("CrdRtg", "CreditRating_t_1570857332"); // 1
    Instrmt_82_set.insert("CreditRating_t_1570857332");
    Instrmt_82.add_attribute("Rgstry", "InstrRegistry_t_1556374905"); // 1
    Instrmt_82_set.insert("InstrRegistry_t_1556374905");
    Instrmt_82.add_attribute("IssuCtry", "709147800"); // 1
    Instrmt_82_set.insert("709147800");
    Instrmt_82.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1872860688"); // 1
    Instrmt_82_set.insert("StateOrProvinceOfIssue_t_1872860688");
    Instrmt_82.add_attribute("Lcl", "LocaleOfIssue_t_610366839"); // 1
    Instrmt_82_set.insert("LocaleOfIssue_t_610366839");
    Instrmt_82.add_attribute("Redeem", "RedemptionDate_t_1136331920"); // 1
    Instrmt_82_set.insert("RedemptionDate_t_1136331920");
    Instrmt_82.add_attribute("StrkPx", "10950466.990000"); // 1
    Instrmt_82_set.insert("10950466.990000");
    Instrmt_82.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_82_set.insert("USD");
    Instrmt_82.add_attribute("StrkMult", "14660329.840000"); // 1
    Instrmt_82_set.insert("14660329.840000");
    Instrmt_82.add_attribute("StrkValu", "9806604.680000"); // 1
    Instrmt_82_set.insert("9806604.680000");
    Instrmt_82.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_82_set.insert("1");
    Instrmt_82.add_attribute("StrkPxBndryMeth", "3"); // 1
    Instrmt_82_set.insert("3");
    Instrmt_82.add_attribute("StrkPxBndryPrcsn", "3586859.410000"); // 1
    Instrmt_82_set.insert("3586859.410000");
    Instrmt_82.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_82_set.insert("4");
    Instrmt_82.add_attribute("OptAt", "1825364012"); // 1
    Instrmt_82_set.insert("1825364012");
    Instrmt_82.add_attribute("Mult", "3899128.600000"); // 1
    Instrmt_82_set.insert("3899128.600000");
    Instrmt_82.add_attribute("MultTyp", "1"); // 1
    Instrmt_82_set.insert("1");
    Instrmt_82.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_82_set.insert("3");
    Instrmt_82.add_attribute("MinPxIncr", "9159985.450000"); // 1
    Instrmt_82_set.insert("9159985.450000");
    Instrmt_82.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_431532331"); // 1
    Instrmt_82_set.insert("MinPriceIncrementAmount_t_431532331");
    Instrmt_82.add_attribute("UOM", "tn"); // 1
    Instrmt_82_set.insert("tn");
    Instrmt_82.add_attribute("UOMQty", "742298.170000"); // 1
    Instrmt_82_set.insert("742298.170000");
    Instrmt_82.add_attribute("PxUOM", "MMbbl"); // 1
    Instrmt_82_set.insert("MMbbl");
    Instrmt_82.add_attribute("PxUOMQty", "49604.840000"); // 1
    Instrmt_82_set.insert("49604.840000");
    Instrmt_82.add_attribute("SettlMeth", "P"); // 1
    Instrmt_82_set.insert("P");
    Instrmt_82.add_attribute("ExerStyle", "1"); // 1
    Instrmt_82_set.insert("1");
    Instrmt_82.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_82_set.insert("2");
    Instrmt_82.add_attribute("OptPayAmt", "OptPayoutAmount_t_996592255"); // 1
    Instrmt_82_set.insert("OptPayoutAmount_t_996592255");
    Instrmt_82.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_82_set.insert("PCTPAR");
    Instrmt_82.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_82_set.insert("EQTY");
    Instrmt_82.add_attribute("ListMeth", "1"); // 1
    Instrmt_82_set.insert("1");
    Instrmt_82.add_attribute("CapPx", "18793041.280000"); // 1
    Instrmt_82_set.insert("18793041.280000");
    Instrmt_82.add_attribute("FlrPx", "8143135.350000"); // 1
    Instrmt_82_set.insert("8143135.350000");
    Instrmt_82.add_attribute("PutCall", "0"); // 1
    Instrmt_82_set.insert("0");
    Instrmt_82.add_attribute("FlexInd", "false"); // 1
    Instrmt_82_set.insert("false");
    Instrmt_82.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_82_set.insert("false");
    Instrmt_82.add_attribute("TmUnit", "Wk"); // 1
    Instrmt_82_set.insert("Wk");
    Instrmt_82.add_attribute("CpnRt", "2631892.770000"); // 1
    Instrmt_82_set.insert("2631892.770000");
    Instrmt_82.add_attribute("Exch", "SecurityExchange_t_53044881"); // 1
    Instrmt_82_set.insert("SecurityExchange_t_53044881");
    Instrmt_82.add_attribute("PosLmt", "558939015"); // 1
    Instrmt_82_set.insert("558939015");
    Instrmt_82.add_attribute("NTPosLmt", "1243849746"); // 1
    Instrmt_82_set.insert("1243849746");
    Instrmt_82.add_attribute("Issr", "Issuer_t_1444893397"); // 1
    Instrmt_82_set.insert("Issuer_t_1444893397");
    Instrmt_82.add_attribute("EncIssrLen", "790355808"); // 1
    Instrmt_82_set.insert("790355808");
    Instrmt_82.add_attribute("EncIssr", "EncodedIssuer_t_1602535687"); // 1
    Instrmt_82_set.insert("EncodedIssuer_t_1602535687");
    Instrmt_82.add_attribute("Desc", "SecurityDesc_t_414659545"); // 1
    Instrmt_82_set.insert("SecurityDesc_t_414659545");
    Instrmt_82.add_attribute("EncSecDescLen", "468236172"); // 1
    Instrmt_82_set.insert("468236172");
    Instrmt_82.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1992448548"); // 1
    Instrmt_82_set.insert("EncodedSecurityDesc_t_1992448548");
    Instrmt_82.add_attribute("Pool", "Pool_t_1073758154"); // 1
    Instrmt_82_set.insert("Pool_t_1073758154");
    Instrmt_82.add_attribute("CSetMo", "1790569165"); // 1
    Instrmt_82_set.insert("1790569165");
    Instrmt_82.add_attribute("CPPgm", "99"); // 1
    Instrmt_82_set.insert("99");
    Instrmt_82.add_attribute("CPRegT", "CPRegType_t_1505290485"); // 1
    Instrmt_82_set.insert("CPRegType_t_1505290485");
    Instrmt_82.add_attribute("Dated", "DatedDate_t_1495308934"); // 1
    Instrmt_82_set.insert("DatedDate_t_1495308934");
    Instrmt_82.add_attribute("IntAcrl", "InterestAccrualDate_t_835193262"); // 1
    Instrmt_82_set.insert("InterestAccrualDate_t_835193262");
    all_values.push_back(Instrmt_82_set);
    all_compo_names.insert("Instrmt_82_set");

    {
      xml_element AID_85{"AID"};
      multiset<string> AID_85_set;
      AID_85.add_attribute("AltID", "SecurityAltID_t_2085185729"); // 2
      AID_85_set.insert("SecurityAltID_t_2085185729");
      AID_85.add_attribute("AltIDSrc", "B"); // 2
      AID_85_set.insert("B");
      all_values.push_back(AID_85_set);
      all_compo_names.insert("AID_85_set");

      Instrmt_82.add_element(AID_85);
    }
    {
      xml_element SecXML_85{"SecXML"};
      multiset<string> SecXML_85_set;
      SecXML_85.add_attribute("Schema", "SecurityXMLSchema_t_1397391663"); // 2
      SecXML_85_set.insert("SecurityXMLSchema_t_1397391663");
      all_values.push_back(SecXML_85_set);
      all_compo_names.insert("SecXML_85_set");

      Instrmt_82.add_element(SecXML_85);
    }
    {
      xml_element Evnt_85{"Evnt"};
      multiset<string> Evnt_85_set;
      Evnt_85.add_attribute("EventTyp", "7"); // 2
      Evnt_85_set.insert("7");
      Evnt_85.add_attribute("Dt", "EventDate_t_1606122748"); // 2
      Evnt_85_set.insert("EventDate_t_1606122748");
      Evnt_85.add_attribute("Tm", "EventTime_t_246500270"); // 2
      Evnt_85_set.insert("EventTime_t_246500270");
      Evnt_85.add_attribute("Px", "18824413.700000"); // 2
      Evnt_85_set.insert("18824413.700000");
      Evnt_85.add_attribute("Txt", "EventText_t_1711288483"); // 2
      Evnt_85_set.insert("EventText_t_1711288483");
      all_values.push_back(Evnt_85_set);
      all_compo_names.insert("Evnt_85_set");

      Instrmt_82.add_element(Evnt_85);
    }
    {
      xml_element Pty_412{"Pty"};
      multiset<string> Pty_412_set;
      Pty_412.add_attribute("ID", "InstrumentPartyID_t_666466210"); // 2
      Pty_412_set.insert("InstrumentPartyID_t_666466210");
      Pty_412.add_attribute("Src", "H"); // 2
      Pty_412_set.insert("H");
      Pty_412.add_attribute("R", "24"); // 2
      Pty_412_set.insert("24");
      all_values.push_back(Pty_412_set);
      all_compo_names.insert("Pty_412_set");

      {
        xml_element Sub_412{"Sub"};
        multiset<string> Sub_412_set;
        Sub_412.add_attribute("ID", "InstrumentPartySubID_t_811809190"); // 3
        Sub_412_set.insert("InstrumentPartySubID_t_811809190");
        Sub_412.add_attribute("Typ", "23"); // 3
        Sub_412_set.insert("23");
        all_values.push_back(Sub_412_set);
        all_compo_names.insert("Sub_412_set");

        Pty_412.add_element(Sub_412);
      }
      Instrmt_82.add_element(Pty_412);
    }
    {
      xml_element CmplxEvnt_82{"CmplxEvnt"};
      multiset<string> CmplxEvnt_82_set;
      CmplxEvnt_82.add_attribute("Typ", "1"); // 2
      CmplxEvnt_82_set.insert("1");
      CmplxEvnt_82.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2052198869"); // 2
      CmplxEvnt_82_set.insert("ComplexOptPayoutAmount_t_2052198869");
      CmplxEvnt_82.add_attribute("Px", "721547.980000"); // 2
      CmplxEvnt_82_set.insert("721547.980000");
      CmplxEvnt_82.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_82_set.insert("1");
      CmplxEvnt_82.add_attribute("PxBndryPrcsn", "4636542.360000"); // 2
      CmplxEvnt_82_set.insert("4636542.360000");
      CmplxEvnt_82.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_82_set.insert("2");
      CmplxEvnt_82.add_attribute("Cond", "2"); // 2
      CmplxEvnt_82_set.insert("2");
      all_values.push_back(CmplxEvnt_82_set);
      all_compo_names.insert("CmplxEvnt_82_set");

      {
        xml_element EvntDts_82{"EvntDts"};
        multiset<string> EvntDts_82_set;
        EvntDts_82.add_attribute("StartDt", "ComplexEventStartDate_t_1254010044"); // 3
        EvntDts_82_set.insert("ComplexEventStartDate_t_1254010044");
        EvntDts_82.add_attribute("EndDt", "ComplexEventEndDate_t_771056584"); // 3
        EvntDts_82_set.insert("ComplexEventEndDate_t_771056584");
        all_values.push_back(EvntDts_82_set);
        all_compo_names.insert("EvntDts_82_set");

        {
          xml_element EvntTms_82{"EvntTms"};
          multiset<string> EvntTms_82_set;
          EvntTms_82.add_attribute("StartTm", "2093878002"); // 4
          EvntTms_82_set.insert("2093878002");
          EvntTms_82.add_attribute("EndTm", "1722246216"); // 4
          EvntTms_82_set.insert("1722246216");
          all_values.push_back(EvntTms_82_set);
          all_compo_names.insert("EvntTms_82_set");

          EvntDts_82.add_element(EvntTms_82);
        }
        CmplxEvnt_82.add_element(EvntDts_82);
      }
      Instrmt_82.add_element(CmplxEvnt_82);
    }
    elt.add_element(Instrmt_82);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_30{"FinDetls"};
    multiset<string> FinDetls_30_set;
    FinDetls_30.add_attribute("AgmtDesc", "AgreementDesc_t_616021484"); // 1
    FinDetls_30_set.insert("AgreementDesc_t_616021484");
    FinDetls_30.add_attribute("AgmtID", "AgreementID_t_1020152508"); // 1
    FinDetls_30_set.insert("AgreementID_t_1020152508");
    FinDetls_30.add_attribute("AgmtDt", "AgreementDate_t_1365331733"); // 1
    FinDetls_30_set.insert("AgreementDate_t_1365331733");
    FinDetls_30.add_attribute("AgmtCcy", "EUR"); // 1
    FinDetls_30_set.insert("EUR");
    FinDetls_30.add_attribute("TrmTyp", "4"); // 1
    FinDetls_30_set.insert("4");
    FinDetls_30.add_attribute("StartDt", "StartDate_t_64694543"); // 1
    FinDetls_30_set.insert("StartDate_t_64694543");
    FinDetls_30.add_attribute("EndDt", "EndDate_t_315661426"); // 1
    FinDetls_30_set.insert("EndDate_t_315661426");
    FinDetls_30.add_attribute("DlvryTyp", "2"); // 1
    FinDetls_30_set.insert("2");
    FinDetls_30.add_attribute("MgnRatio", "14620862.060000"); // 1
    FinDetls_30_set.insert("14620862.060000");
    all_values.push_back(FinDetls_30_set);
    all_compo_names.insert("FinDetls_30_set");

    elt.add_element(FinDetls_30);
  } // end FinDetls
  { // Yield
    xml_element Yield_27{"Yield"};
    multiset<string> Yield_27_set;
    Yield_27.add_attribute("Typ", "TRUE"); // 1
    Yield_27_set.insert("TRUE");
    Yield_27.add_attribute("Yld", "16720655.380000"); // 1
    Yield_27_set.insert("16720655.380000");
    Yield_27.add_attribute("CalcDt", "YieldCalcDate_t_1708586476"); // 1
    Yield_27_set.insert("YieldCalcDate_t_1708586476");
    Yield_27.add_attribute("RedDt", "YieldRedemptionDate_t_1610131295"); // 1
    Yield_27_set.insert("YieldRedemptionDate_t_1610131295");
    Yield_27.add_attribute("RedPx", "12358703.740000"); // 1
    Yield_27_set.insert("12358703.740000");
    Yield_27.add_attribute("RedPxTyp", "5"); // 1
    Yield_27_set.insert("5");
    all_values.push_back(Yield_27_set);
    all_compo_names.insert("Yield_27_set");

    elt.add_element(Yield_27);
  } // end Yield
  { // Undly
    xml_element Undly_112{"Undly"};
    multiset<string> Undly_112_set;
    Undly_112.add_attribute("Sym", "UnderlyingSymbol_t_1613988745"); // 1
    Undly_112_set.insert("UnderlyingSymbol_t_1613988745");
    Undly_112.add_attribute("Sfx", "CD"); // 1
    Undly_112_set.insert("CD");
    Undly_112.add_attribute("ID", "UnderlyingSecurityID_t_885875018"); // 1
    Undly_112_set.insert("UnderlyingSecurityID_t_885875018");
    Undly_112.add_attribute("Src", "L"); // 1
    Undly_112_set.insert("L");
    Undly_112.add_attribute("Prod", "1"); // 1
    Undly_112_set.insert("1");
    Undly_112.add_attribute("CFI", "UnderlyingCFICode_t_958029817"); // 1
    Undly_112_set.insert("UnderlyingCFICode_t_958029817");
    Undly_112.add_attribute("SecTyp", "AMENDED"); // 1
    Undly_112_set.insert("AMENDED");
    Undly_112.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1407747686"); // 1
    Undly_112_set.insert("UnderlyingSecuritySubType_t_1407747686");
    Undly_112.add_attribute("MMY", "126550713"); // 1
    Undly_112_set.insert("126550713");
    Undly_112.add_attribute("Mat", "UnderlyingMaturityDate_t_1561328793"); // 1
    Undly_112_set.insert("UnderlyingMaturityDate_t_1561328793");
    Undly_112.add_attribute("MatTm", "514274082"); // 1
    Undly_112_set.insert("514274082");
    Undly_112.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_897607297"); // 1
    Undly_112_set.insert("UnderlyingCouponPaymentDate_t_897607297");
    Undly_112.add_attribute("RestrctTyp", "XR"); // 1
    Undly_112_set.insert("XR");
    Undly_112.add_attribute("Snrty", "SB"); // 1
    Undly_112_set.insert("SB");
    Undly_112.add_attribute("NotlPctOut", "15136287.810000"); // 1
    Undly_112_set.insert("15136287.810000");
    Undly_112.add_attribute("OrigNotlPctOut", "3803920.080000"); // 1
    Undly_112_set.insert("3803920.080000");
    Undly_112.add_attribute("AttchPnt", "14543683.840000"); // 1
    Undly_112_set.insert("14543683.840000");
    Undly_112.add_attribute("DetchPnt", "7431300.620000"); // 1
    Undly_112_set.insert("7431300.620000");
    Undly_112.add_attribute("Issued", "UnderlyingIssueDate_t_758351353"); // 1
    Undly_112_set.insert("UnderlyingIssueDate_t_758351353");
    Undly_112.add_attribute("RepoCollSecTyp", "20041756"); // 1
    Undly_112_set.insert("20041756");
    Undly_112.add_attribute("RepoTrm", "807824605"); // 1
    Undly_112_set.insert("807824605");
    Undly_112.add_attribute("RepoRt", "10740127.800000"); // 1
    Undly_112_set.insert("10740127.800000");
    Undly_112.add_attribute("Fctr", "859845.460000"); // 1
    Undly_112_set.insert("859845.460000");
    Undly_112.add_attribute("CrdRtg", "UnderlyingCreditRating_t_122427163"); // 1
    Undly_112_set.insert("UnderlyingCreditRating_t_122427163");
    Undly_112.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_801702705"); // 1
    Undly_112_set.insert("UnderlyingInstrRegistry_t_801702705");
    Undly_112.add_attribute("Ctry", "1758050084"); // 1
    Undly_112_set.insert("1758050084");
    Undly_112.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1831013640"); // 1
    Undly_112_set.insert("UnderlyingStateOrProvinceOfIssue_t_1831013640");
    Undly_112.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_264350353"); // 1
    Undly_112_set.insert("UnderlyingLocaleOfIssue_t_264350353");
    Undly_112.add_attribute("Redeem", "UnderlyingRedemptionDate_t_846436810"); // 1
    Undly_112_set.insert("UnderlyingRedemptionDate_t_846436810");
    Undly_112.add_attribute("StrkPx", "20585826.780000"); // 1
    Undly_112_set.insert("20585826.780000");
    Undly_112.add_attribute("StrkCcy", "CHF"); // 1
    Undly_112_set.insert("CHF");
    Undly_112.add_attribute("OptA", "950477259"); // 1
    Undly_112_set.insert("950477259");
    Undly_112.add_attribute("Mult", "796512.210000"); // 1
    Undly_112_set.insert("796512.210000");
    Undly_112.add_attribute("MultTyp", "2"); // 1
    Undly_112_set.insert("2");
    Undly_112.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_112_set.insert("3");
    Undly_112.add_attribute("UOM", "t"); // 1
    Undly_112_set.insert("t");
    Undly_112.add_attribute("UOMQty", "19903211.660000"); // 1
    Undly_112_set.insert("19903211.660000");
    Undly_112.add_attribute("PxUOM", "MWh"); // 1
    Undly_112_set.insert("MWh");
    Undly_112.add_attribute("PxUOMQty", "11642317.510000"); // 1
    Undly_112_set.insert("11642317.510000");
    Undly_112.add_attribute("TmUnit", "H"); // 1
    Undly_112_set.insert("H");
    Undly_112.add_attribute("ExerStyle", "2"); // 1
    Undly_112_set.insert("2");
    Undly_112.add_attribute("CpnRt", "20618390.490000"); // 1
    Undly_112_set.insert("20618390.490000");
    Undly_112.add_attribute("Exch", "UnderlyingSecurityExchange_t_764405811"); // 1
    Undly_112_set.insert("UnderlyingSecurityExchange_t_764405811");
    Undly_112.add_attribute("Issr", "UnderlyingIssuer_t_1758145480"); // 1
    Undly_112_set.insert("UnderlyingIssuer_t_1758145480");
    Undly_112.add_attribute("EncUndIssrLen", "1427984182"); // 1
    Undly_112_set.insert("1427984182");
    Undly_112.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1144797819"); // 1
    Undly_112_set.insert("EncodedUnderlyingIssuer_t_1144797819");
    Undly_112.add_attribute("Desc", "UnderlyingSecurityDesc_t_1065030216"); // 1
    Undly_112_set.insert("UnderlyingSecurityDesc_t_1065030216");
    Undly_112.add_attribute("EncUndSecDescLen", "23630597"); // 1
    Undly_112_set.insert("23630597");
    Undly_112.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1903149172"); // 1
    Undly_112_set.insert("EncodedUnderlyingSecurityDesc_t_1903149172");
    Undly_112.add_attribute("CPPgm", "UnderlyingCPProgram_t_1085071972"); // 1
    Undly_112_set.insert("UnderlyingCPProgram_t_1085071972");
    Undly_112.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_831455202"); // 1
    Undly_112_set.insert("UnderlyingCPRegType_t_831455202");
    Undly_112.add_attribute("AllocPct", "8296783.040000"); // 1
    Undly_112_set.insert("8296783.040000");
    Undly_112.add_attribute("Ccy", "GBP"); // 1
    Undly_112_set.insert("GBP");
    Undly_112.add_attribute("Qty", "16313810.100000"); // 1
    Undly_112_set.insert("16313810.100000");
    Undly_112.add_attribute("SettlTyp", "2"); // 1
    Undly_112_set.insert("2");
    Undly_112.add_attribute("CashAmt", "UnderlyingCashAmount_t_637412358"); // 1
    Undly_112_set.insert("UnderlyingCashAmount_t_637412358");
    Undly_112.add_attribute("CashTyp", "DIFF"); // 1
    Undly_112_set.insert("DIFF");
    Undly_112.add_attribute("Px", "16280597.650000"); // 1
    Undly_112_set.insert("16280597.650000");
    Undly_112.add_attribute("DirtPx", "5485113.880000"); // 1
    Undly_112_set.insert("5485113.880000");
    Undly_112.add_attribute("EndPx", "10895075.650000"); // 1
    Undly_112_set.insert("10895075.650000");
    Undly_112.add_attribute("StartVal", "UnderlyingStartValue_t_1941001673"); // 1
    Undly_112_set.insert("UnderlyingStartValue_t_1941001673");
    Undly_112.add_attribute("CurVal", "UnderlyingCurrentValue_t_1498988647"); // 1
    Undly_112_set.insert("UnderlyingCurrentValue_t_1498988647");
    Undly_112.add_attribute("EndVal", "UnderlyingEndValue_t_1169158786"); // 1
    Undly_112_set.insert("UnderlyingEndValue_t_1169158786");
    Undly_112.add_attribute("AdjQty", "19017288.560000"); // 1
    Undly_112_set.insert("19017288.560000");
    Undly_112.add_attribute("FxRate", "12460757.080000"); // 1
    Undly_112_set.insert("12460757.080000");
    Undly_112.add_attribute("FxRateCalc", "M"); // 1
    Undly_112_set.insert("M");
    Undly_112.add_attribute("CapValu", "UnderlyingCapValue_t_1744566374"); // 1
    Undly_112_set.insert("UnderlyingCapValue_t_1744566374");
    Undly_112.add_attribute("SetMeth", "UnderlyingSettlMethod_t_253426806"); // 1
    Undly_112_set.insert("UnderlyingSettlMethod_t_253426806");
    Undly_112.add_attribute("PutCall", "1223587928"); // 1
    Undly_112_set.insert("1223587928");
    all_values.push_back(Undly_112_set);
    all_compo_names.insert("Undly_112_set");

    {
      xml_element UndAID_112{"UndAID"};
      multiset<string> UndAID_112_set;
      UndAID_112.add_attribute("AltID", "UnderlyingSecurityAltID_t_1001249038"); // 2
      UndAID_112_set.insert("UnderlyingSecurityAltID_t_1001249038");
      UndAID_112.add_attribute("AltIDSrc", "A"); // 2
      UndAID_112_set.insert("A");
      all_values.push_back(UndAID_112_set);
      all_compo_names.insert("UndAID_112_set");

      Undly_112.add_element(UndAID_112);
    }
    {
      xml_element Stip_179{"Stip"};
      multiset<string> Stip_179_set;
      Stip_179.add_attribute("Typ", "STRUCT"); // 2
      Stip_179_set.insert("STRUCT");
      Stip_179.add_attribute("Val", "UnderlyingStipValue_t_1765654849"); // 2
      Stip_179_set.insert("UnderlyingStipValue_t_1765654849");
      all_values.push_back(Stip_179_set);
      all_compo_names.insert("Stip_179_set");

      Undly_112.add_element(Stip_179);
    }
    {
      xml_element Pty_413{"Pty"};
      multiset<string> Pty_413_set;
      Pty_413.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1533197467"); // 2
      Pty_413_set.insert("UnderlyingInstrumentPartyID_t_1533197467");
      Pty_413.add_attribute("Src", "6"); // 2
      Pty_413_set.insert("6");
      Pty_413.add_attribute("R", "47"); // 2
      Pty_413_set.insert("47");
      all_values.push_back(Pty_413_set);
      all_compo_names.insert("Pty_413_set");

      {
        xml_element Sub_413{"Sub"};
        multiset<string> Sub_413_set;
        Sub_413.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_450744036"); // 3
        Sub_413_set.insert("UnderlyingInstrumentPartySubID_t_450744036");
        Sub_413.add_attribute("Typ", "9"); // 3
        Sub_413_set.insert("9");
        all_values.push_back(Sub_413_set);
        all_compo_names.insert("Sub_413_set");

        Pty_413.add_element(Sub_413);
      }
      Undly_112.add_element(Pty_413);
    }
    elt.add_element(Undly_112);
  } // end Undly
  { // Undly
    xml_element Undly_113{"Undly"};
    multiset<string> Undly_113_set;
    Undly_113.add_attribute("Sym", "UnderlyingSymbol_t_518634544"); // 1
    Undly_113_set.insert("UnderlyingSymbol_t_518634544");
    Undly_113.add_attribute("Sfx", "CD"); // 1
    Undly_113_set.insert("CD");
    Undly_113.add_attribute("ID", "UnderlyingSecurityID_t_1273529663"); // 1
    Undly_113_set.insert("UnderlyingSecurityID_t_1273529663");
    Undly_113.add_attribute("Src", "G"); // 1
    Undly_113_set.insert("G");
    Undly_113.add_attribute("Prod", "7"); // 1
    Undly_113_set.insert("7");
    Undly_113.add_attribute("CFI", "UnderlyingCFICode_t_79928381"); // 1
    Undly_113_set.insert("UnderlyingCFICode_t_79928381");
    Undly_113.add_attribute("SecTyp", "EUFRN"); // 1
    Undly_113_set.insert("EUFRN");
    Undly_113.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1341011834"); // 1
    Undly_113_set.insert("UnderlyingSecuritySubType_t_1341011834");
    Undly_113.add_attribute("MMY", "717340739"); // 1
    Undly_113_set.insert("717340739");
    Undly_113.add_attribute("Mat", "UnderlyingMaturityDate_t_580457926"); // 1
    Undly_113_set.insert("UnderlyingMaturityDate_t_580457926");
    Undly_113.add_attribute("MatTm", "821587951"); // 1
    Undly_113_set.insert("821587951");
    Undly_113.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1265852127"); // 1
    Undly_113_set.insert("UnderlyingCouponPaymentDate_t_1265852127");
    Undly_113.add_attribute("RestrctTyp", "XR"); // 1
    Undly_113_set.insert("XR");
    Undly_113.add_attribute("Snrty", "SR"); // 1
    Undly_113_set.insert("SR");
    Undly_113.add_attribute("NotlPctOut", "6173571.270000"); // 1
    Undly_113_set.insert("6173571.270000");
    Undly_113.add_attribute("OrigNotlPctOut", "6916406.300000"); // 1
    Undly_113_set.insert("6916406.300000");
    Undly_113.add_attribute("AttchPnt", "3693511.840000"); // 1
    Undly_113_set.insert("3693511.840000");
    Undly_113.add_attribute("DetchPnt", "18634328.350000"); // 1
    Undly_113_set.insert("18634328.350000");
    Undly_113.add_attribute("Issued", "UnderlyingIssueDate_t_750996806"); // 1
    Undly_113_set.insert("UnderlyingIssueDate_t_750996806");
    Undly_113.add_attribute("RepoCollSecTyp", "2113917559"); // 1
    Undly_113_set.insert("2113917559");
    Undly_113.add_attribute("RepoTrm", "2116859641"); // 1
    Undly_113_set.insert("2116859641");
    Undly_113.add_attribute("RepoRt", "19745847.340000"); // 1
    Undly_113_set.insert("19745847.340000");
    Undly_113.add_attribute("Fctr", "9676829.490000"); // 1
    Undly_113_set.insert("9676829.490000");
    Undly_113.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1891911629"); // 1
    Undly_113_set.insert("UnderlyingCreditRating_t_1891911629");
    Undly_113.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_965044415"); // 1
    Undly_113_set.insert("UnderlyingInstrRegistry_t_965044415");
    Undly_113.add_attribute("Ctry", "585854150"); // 1
    Undly_113_set.insert("585854150");
    Undly_113.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1277625448"); // 1
    Undly_113_set.insert("UnderlyingStateOrProvinceOfIssue_t_1277625448");
    Undly_113.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1383488279"); // 1
    Undly_113_set.insert("UnderlyingLocaleOfIssue_t_1383488279");
    Undly_113.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1348823170"); // 1
    Undly_113_set.insert("UnderlyingRedemptionDate_t_1348823170");
    Undly_113.add_attribute("StrkPx", "17283694.840000"); // 1
    Undly_113_set.insert("17283694.840000");
    Undly_113.add_attribute("StrkCcy", "GBP"); // 1
    Undly_113_set.insert("GBP");
    Undly_113.add_attribute("OptA", "1116701845"); // 1
    Undly_113_set.insert("1116701845");
    Undly_113.add_attribute("Mult", "9516087.540000"); // 1
    Undly_113_set.insert("9516087.540000");
    Undly_113.add_attribute("MultTyp", "1"); // 1
    Undly_113_set.insert("1");
    Undly_113.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_113_set.insert("4");
    Undly_113.add_attribute("UOM", "tn"); // 1
    Undly_113_set.insert("tn");
    Undly_113.add_attribute("UOMQty", "19004971.260000"); // 1
    Undly_113_set.insert("19004971.260000");
    Undly_113.add_attribute("PxUOM", "t"); // 1
    Undly_113_set.insert("t");
    Undly_113.add_attribute("PxUOMQty", "17488778.740000"); // 1
    Undly_113_set.insert("17488778.740000");
    Undly_113.add_attribute("TmUnit", "S"); // 1
    Undly_113_set.insert("S");
    Undly_113.add_attribute("ExerStyle", "1"); // 1
    Undly_113_set.insert("1");
    Undly_113.add_attribute("CpnRt", "8672463.540000"); // 1
    Undly_113_set.insert("8672463.540000");
    Undly_113.add_attribute("Exch", "UnderlyingSecurityExchange_t_2003436896"); // 1
    Undly_113_set.insert("UnderlyingSecurityExchange_t_2003436896");
    Undly_113.add_attribute("Issr", "UnderlyingIssuer_t_158829190"); // 1
    Undly_113_set.insert("UnderlyingIssuer_t_158829190");
    Undly_113.add_attribute("EncUndIssrLen", "1484603481"); // 1
    Undly_113_set.insert("1484603481");
    Undly_113.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_547593878"); // 1
    Undly_113_set.insert("EncodedUnderlyingIssuer_t_547593878");
    Undly_113.add_attribute("Desc", "UnderlyingSecurityDesc_t_528180374"); // 1
    Undly_113_set.insert("UnderlyingSecurityDesc_t_528180374");
    Undly_113.add_attribute("EncUndSecDescLen", "1200552668"); // 1
    Undly_113_set.insert("1200552668");
    Undly_113.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1298590684"); // 1
    Undly_113_set.insert("EncodedUnderlyingSecurityDesc_t_1298590684");
    Undly_113.add_attribute("CPPgm", "UnderlyingCPProgram_t_494614285"); // 1
    Undly_113_set.insert("UnderlyingCPProgram_t_494614285");
    Undly_113.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1169928661"); // 1
    Undly_113_set.insert("UnderlyingCPRegType_t_1169928661");
    Undly_113.add_attribute("AllocPct", "11256917.710000"); // 1
    Undly_113_set.insert("11256917.710000");
    Undly_113.add_attribute("Ccy", "JPY"); // 1
    Undly_113_set.insert("JPY");
    Undly_113.add_attribute("Qty", "20907361.860000"); // 1
    Undly_113_set.insert("20907361.860000");
    Undly_113.add_attribute("SettlTyp", "2"); // 1
    Undly_113_set.insert("2");
    Undly_113.add_attribute("CashAmt", "UnderlyingCashAmount_t_44498443"); // 1
    Undly_113_set.insert("UnderlyingCashAmount_t_44498443");
    Undly_113.add_attribute("CashTyp", "DIFF"); // 1
    Undly_113_set.insert("DIFF");
    Undly_113.add_attribute("Px", "12494909.060000"); // 1
    Undly_113_set.insert("12494909.060000");
    Undly_113.add_attribute("DirtPx", "17728679.270000"); // 1
    Undly_113_set.insert("17728679.270000");
    Undly_113.add_attribute("EndPx", "10048199.090000"); // 1
    Undly_113_set.insert("10048199.090000");
    Undly_113.add_attribute("StartVal", "UnderlyingStartValue_t_969464973"); // 1
    Undly_113_set.insert("UnderlyingStartValue_t_969464973");
    Undly_113.add_attribute("CurVal", "UnderlyingCurrentValue_t_742086124"); // 1
    Undly_113_set.insert("UnderlyingCurrentValue_t_742086124");
    Undly_113.add_attribute("EndVal", "UnderlyingEndValue_t_1956428663"); // 1
    Undly_113_set.insert("UnderlyingEndValue_t_1956428663");
    Undly_113.add_attribute("AdjQty", "20377518.880000"); // 1
    Undly_113_set.insert("20377518.880000");
    Undly_113.add_attribute("FxRate", "2706932.000000"); // 1
    Undly_113_set.insert("2706932.000000");
    Undly_113.add_attribute("FxRateCalc", "D"); // 1
    Undly_113_set.insert("D");
    Undly_113.add_attribute("CapValu", "UnderlyingCapValue_t_1790765367"); // 1
    Undly_113_set.insert("UnderlyingCapValue_t_1790765367");
    Undly_113.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1140312110"); // 1
    Undly_113_set.insert("UnderlyingSettlMethod_t_1140312110");
    Undly_113.add_attribute("PutCall", "441876377"); // 1
    Undly_113_set.insert("441876377");
    all_values.push_back(Undly_113_set);
    all_compo_names.insert("Undly_113_set");

    {
      xml_element UndAID_113{"UndAID"};
      multiset<string> UndAID_113_set;
      UndAID_113.add_attribute("AltID", "UnderlyingSecurityAltID_t_2124236771"); // 2
      UndAID_113_set.insert("UnderlyingSecurityAltID_t_2124236771");
      UndAID_113.add_attribute("AltIDSrc", "H"); // 2
      UndAID_113_set.insert("H");
      all_values.push_back(UndAID_113_set);
      all_compo_names.insert("UndAID_113_set");

      Undly_113.add_element(UndAID_113);
    }
    {
      xml_element Stip_180{"Stip"};
      multiset<string> Stip_180_set;
      Stip_180.add_attribute("Typ", "GEOG"); // 2
      Stip_180_set.insert("GEOG");
      Stip_180.add_attribute("Val", "UnderlyingStipValue_t_1980190019"); // 2
      Stip_180_set.insert("UnderlyingStipValue_t_1980190019");
      all_values.push_back(Stip_180_set);
      all_compo_names.insert("Stip_180_set");

      Undly_113.add_element(Stip_180);
    }
    {
      xml_element Pty_414{"Pty"};
      multiset<string> Pty_414_set;
      Pty_414.add_attribute("ID", "UnderlyingInstrumentPartyID_t_842864514"); // 2
      Pty_414_set.insert("UnderlyingInstrumentPartyID_t_842864514");
      Pty_414.add_attribute("Src", "D"); // 2
      Pty_414_set.insert("D");
      Pty_414.add_attribute("R", "79"); // 2
      Pty_414_set.insert("79");
      all_values.push_back(Pty_414_set);
      all_compo_names.insert("Pty_414_set");

      {
        xml_element Sub_414{"Sub"};
        multiset<string> Sub_414_set;
        Sub_414.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1371044888"); // 3
        Sub_414_set.insert("UnderlyingInstrumentPartySubID_t_1371044888");
        Sub_414.add_attribute("Typ", "30"); // 3
        Sub_414_set.insert("30");
        all_values.push_back(Sub_414_set);
        all_compo_names.insert("Sub_414_set");

        Pty_414.add_element(Sub_414);
      }
      Undly_113.add_element(Pty_414);
    }
    elt.add_element(Undly_113);
  } // end Undly
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_32{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_32_set;
    SprdBnchmkCurve_32.add_attribute("Spread", "16788909.340000"); // 1
    SprdBnchmkCurve_32_set.insert("16788909.340000");
    SprdBnchmkCurve_32.add_attribute("Ccy", "GBP"); // 1
    SprdBnchmkCurve_32_set.insert("GBP");
    SprdBnchmkCurve_32.add_attribute("Name", "SONIA"); // 1
    SprdBnchmkCurve_32_set.insert("SONIA");
    SprdBnchmkCurve_32.add_attribute("Point", "BenchmarkCurvePoint_t_1180472760"); // 1
    SprdBnchmkCurve_32_set.insert("BenchmarkCurvePoint_t_1180472760");
    SprdBnchmkCurve_32.add_attribute("Px", "17835968.880000"); // 1
    SprdBnchmkCurve_32_set.insert("17835968.880000");
    SprdBnchmkCurve_32.add_attribute("PxTyp", "6"); // 1
    SprdBnchmkCurve_32_set.insert("6");
    SprdBnchmkCurve_32.add_attribute("SecID", "BenchmarkSecurityID_t_1081140497"); // 1
    SprdBnchmkCurve_32_set.insert("BenchmarkSecurityID_t_1081140497");
    SprdBnchmkCurve_32.add_attribute("SecIDSrc", "8"); // 1
    SprdBnchmkCurve_32_set.insert("8");
    all_values.push_back(SprdBnchmkCurve_32_set);
    all_compo_names.insert("SprdBnchmkCurve_32_set");

    elt.add_element(SprdBnchmkCurve_32);
  } // end SprdBnchmkCurve
  { // Amt
    xml_element Amt_14{"Amt"};
    multiset<string> Amt_14_set;
    Amt_14.add_attribute("Typ", "SMTM"); // 1
    Amt_14_set.insert("SMTM");
    Amt_14.add_attribute("Amt", "PosAmt_t_1453479611"); // 1
    Amt_14_set.insert("PosAmt_t_1453479611");
    Amt_14.add_attribute("Ccy", "PositionCurrency_t_784428674"); // 1
    Amt_14_set.insert("PositionCurrency_t_784428674");
    all_values.push_back(Amt_14_set);
    all_compo_names.insert("Amt_14_set");

    elt.add_element(Amt_14);
  } // end Amt
  { // Amt
    xml_element Amt_15{"Amt"};
    multiset<string> Amt_15_set;
    Amt_15.add_attribute("Typ", "SETL"); // 1
    Amt_15_set.insert("SETL");
    Amt_15.add_attribute("Amt", "PosAmt_t_48082087"); // 1
    Amt_15_set.insert("PosAmt_t_48082087");
    Amt_15.add_attribute("Ccy", "PositionCurrency_t_593373689"); // 1
    Amt_15_set.insert("PositionCurrency_t_593373689");
    all_values.push_back(Amt_15_set);
    all_compo_names.insert("Amt_15_set");

    elt.add_element(Amt_15);
  } // end Amt
  { // Amt
    xml_element Amt_16{"Amt"};
    multiset<string> Amt_16_set;
    Amt_16.add_attribute("Typ", "CPN"); // 1
    Amt_16_set.insert("CPN");
    Amt_16.add_attribute("Amt", "PosAmt_t_318775288"); // 1
    Amt_16_set.insert("PosAmt_t_318775288");
    Amt_16.add_attribute("Ccy", "PositionCurrency_t_1433855840"); // 1
    Amt_16_set.insert("PositionCurrency_t_1433855840");
    all_values.push_back(Amt_16_set);
    all_compo_names.insert("Amt_16_set");

    elt.add_element(Amt_16);
  } // end Amt
  { // TrdLeg
    xml_element TrdLeg_0{"TrdLeg"};
    multiset<string> TrdLeg_0_set;
    TrdLeg_0.add_attribute("Qty", "14590873.980000"); // 1
    TrdLeg_0_set.insert("14590873.980000");
    TrdLeg_0.add_attribute("SwapTyp", "4"); // 1
    TrdLeg_0_set.insert("4");
    TrdLeg_0.add_attribute("RptID", "LegReportID_t_662915811"); // 1
    TrdLeg_0_set.insert("LegReportID_t_662915811");
    TrdLeg_0.add_attribute("LegNo", "2143122722"); // 1
    TrdLeg_0_set.insert("2143122722");
    TrdLeg_0.add_attribute("PosEfct", "D"); // 1
    TrdLeg_0_set.insert("D");
    TrdLeg_0.add_attribute("Cover", "1"); // 1
    TrdLeg_0_set.insert("1");
    TrdLeg_0.add_attribute("RefID", "LegRefID_t_838503588"); // 1
    TrdLeg_0_set.insert("LegRefID_t_838503588");
    TrdLeg_0.add_attribute("SettlTyp", "6"); // 1
    TrdLeg_0_set.insert("6");
    TrdLeg_0.add_attribute("SettlDt", "LegSettlDate_t_875922432"); // 1
    TrdLeg_0_set.insert("LegSettlDate_t_875922432");
    TrdLeg_0.add_attribute("LastPx", "620648.290000"); // 1
    TrdLeg_0_set.insert("620648.290000");
    TrdLeg_0.add_attribute("SettlCcy", "GBP"); // 1
    TrdLeg_0_set.insert("GBP");
    TrdLeg_0.add_attribute("LegLastFwdPnts", "19277240.030000"); // 1
    TrdLeg_0_set.insert("19277240.030000");
    TrdLeg_0.add_attribute("LegCalcCcyLastQty", "1046820.480000"); // 1
    TrdLeg_0_set.insert("1046820.480000");
    TrdLeg_0.add_attribute("LegGrossTrdAmt", "LegGrossTradeAmt_t_1064428775"); // 1
    TrdLeg_0_set.insert("LegGrossTradeAmt_t_1064428775");
    TrdLeg_0.add_attribute("LegVolatility", "9607131.150000"); // 1
    TrdLeg_0_set.insert("9607131.150000");
    TrdLeg_0.add_attribute("LegDividendYield", "18882789.370000"); // 1
    TrdLeg_0_set.insert("18882789.370000");
    TrdLeg_0.add_attribute("LegCurrencyRatio", "16647803.710000"); // 1
    TrdLeg_0_set.insert("16647803.710000");
    TrdLeg_0.add_attribute("LegExecInst", "W"); // 1
    TrdLeg_0_set.insert("W");
    TrdLeg_0.add_attribute("LastQty", "15688906.200000"); // 1
    TrdLeg_0_set.insert("15688906.200000");
    all_values.push_back(TrdLeg_0_set);
    all_compo_names.insert("TrdLeg_0_set");

    {
      xml_element Leg_97{"Leg"};
      multiset<string> Leg_97_set;
      Leg_97.add_attribute("Sym", "LegSymbol_t_1444389136"); // 2
      Leg_97_set.insert("LegSymbol_t_1444389136");
      Leg_97.add_attribute("Sfx", "CD"); // 2
      Leg_97_set.insert("CD");
      Leg_97.add_attribute("ID", "LegSecurityID_t_874886583"); // 2
      Leg_97_set.insert("LegSecurityID_t_874886583");
      Leg_97.add_attribute("Src", "9"); // 2
      Leg_97_set.insert("9");
      Leg_97.add_attribute("Prod", "10"); // 2
      Leg_97_set.insert("10");
      Leg_97.add_attribute("CFI", "LegCFICode_t_922968671"); // 2
      Leg_97_set.insert("LegCFICode_t_922968671");
      Leg_97.add_attribute("SecTyp", "CP"); // 2
      Leg_97_set.insert("CP");
      Leg_97.add_attribute("SecSubTyp", "LegSecuritySubType_t_125527769"); // 2
      Leg_97_set.insert("LegSecuritySubType_t_125527769");
      Leg_97.add_attribute("MMY", "1241743959"); // 2
      Leg_97_set.insert("1241743959");
      Leg_97.add_attribute("Mat", "LegMaturityDate_t_2108563692"); // 2
      Leg_97_set.insert("LegMaturityDate_t_2108563692");
      Leg_97.add_attribute("MatTm", "811690457"); // 2
      Leg_97_set.insert("811690457");
      Leg_97.add_attribute("CpnPmt", "LegCouponPaymentDate_t_553347709"); // 2
      Leg_97_set.insert("LegCouponPaymentDate_t_553347709");
      Leg_97.add_attribute("Issued", "LegIssueDate_t_1836812262"); // 2
      Leg_97_set.insert("LegIssueDate_t_1836812262");
      Leg_97.add_attribute("RepoCollSecTyp", "1474606269"); // 2
      Leg_97_set.insert("1474606269");
      Leg_97.add_attribute("RepoTrm", "548986784"); // 2
      Leg_97_set.insert("548986784");
      Leg_97.add_attribute("RepoRt", "7266999.150000"); // 2
      Leg_97_set.insert("7266999.150000");
      Leg_97.add_attribute("Fctr", "19702284.520000"); // 2
      Leg_97_set.insert("19702284.520000");
      Leg_97.add_attribute("CrdRtg", "LegCreditRating_t_1387490372"); // 2
      Leg_97_set.insert("LegCreditRating_t_1387490372");
      Leg_97.add_attribute("Rgstry", "LegInstrRegistry_t_262830133"); // 2
      Leg_97_set.insert("LegInstrRegistry_t_262830133");
      Leg_97.add_attribute("Ctry", "698667236"); // 2
      Leg_97_set.insert("698667236");
      Leg_97.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1449555201"); // 2
      Leg_97_set.insert("LegStateOrProvinceOfIssue_t_1449555201");
      Leg_97.add_attribute("Lcl", "LegLocaleOfIssue_t_1645755584"); // 2
      Leg_97_set.insert("LegLocaleOfIssue_t_1645755584");
      Leg_97.add_attribute("Redeem", "LegRedemptionDate_t_1105996955"); // 2
      Leg_97_set.insert("LegRedemptionDate_t_1105996955");
      Leg_97.add_attribute("Strk", "12297955.560000"); // 2
      Leg_97_set.insert("12297955.560000");
      Leg_97.add_attribute("StrkCcy", "GBP"); // 2
      Leg_97_set.insert("GBP");
      Leg_97.add_attribute("OptA", "43025024"); // 2
      Leg_97_set.insert("43025024");
      Leg_97.add_attribute("Cmult", "14912329.210000"); // 2
      Leg_97_set.insert("14912329.210000");
      Leg_97.add_attribute("MultTyp", "0"); // 2
      Leg_97_set.insert("0");
      Leg_97.add_attribute("FlowSchedTyp", "1"); // 2
      Leg_97_set.insert("1");
      Leg_97.add_attribute("UOM", "Bcf"); // 2
      Leg_97_set.insert("Bcf");
      Leg_97.add_attribute("UOMQty", "9846279.410000"); // 2
      Leg_97_set.insert("9846279.410000");
      Leg_97.add_attribute("PxUOM", "tn"); // 2
      Leg_97_set.insert("tn");
      Leg_97.add_attribute("PxUOMQty", "17875264.770000"); // 2
      Leg_97_set.insert("17875264.770000");
      Leg_97.add_attribute("TmUnit", "D"); // 2
      Leg_97_set.insert("D");
      Leg_97.add_attribute("ExerStyle", "2"); // 2
      Leg_97_set.insert("2");
      Leg_97.add_attribute("CpnRt", "5630115.000000"); // 2
      Leg_97_set.insert("5630115.000000");
      Leg_97.add_attribute("Exch", "LegSecurityExchange_t_1740669955"); // 2
      Leg_97_set.insert("LegSecurityExchange_t_1740669955");
      Leg_97.add_attribute("Issr", "LegIssuer_t_1370570926"); // 2
      Leg_97_set.insert("LegIssuer_t_1370570926");
      Leg_97.add_attribute("EncLegIssrLen", "1804755459"); // 2
      Leg_97_set.insert("1804755459");
      Leg_97.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1701749999"); // 2
      Leg_97_set.insert("EncodedLegIssuer_t_1701749999");
      Leg_97.add_attribute("Desc", "LegSecurityDesc_t_34777736"); // 2
      Leg_97_set.insert("LegSecurityDesc_t_34777736");
      Leg_97.add_attribute("EncLegSecDescLen", "210619521"); // 2
      Leg_97_set.insert("210619521");
      Leg_97.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1391078613"); // 2
      Leg_97_set.insert("EncodedLegSecurityDesc_t_1391078613");
      Leg_97.add_attribute("RatioQty", "15093840.050000"); // 2
      Leg_97_set.insert("15093840.050000");
      Leg_97.add_attribute("Side", "2"); // 2
      Leg_97_set.insert("2");
      Leg_97.add_attribute("Ccy", "EUR"); // 2
      Leg_97_set.insert("EUR");
      Leg_97.add_attribute("Pool", "LegPool_t_2147096677"); // 2
      Leg_97_set.insert("LegPool_t_2147096677");
      Leg_97.add_attribute("Dated", "LegDatedDate_t_233125014"); // 2
      Leg_97_set.insert("LegDatedDate_t_233125014");
      Leg_97.add_attribute("CSetMo", "2030796045"); // 2
      Leg_97_set.insert("2030796045");
      Leg_97.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1449168231"); // 2
      Leg_97_set.insert("LegInterestAccrualDate_t_1449168231");
      Leg_97.add_attribute("PutCall", "1878880598"); // 2
      Leg_97_set.insert("1878880598");
      Leg_97.add_attribute("LegOptionRatio", "9893093.520000"); // 2
      Leg_97_set.insert("9893093.520000");
      Leg_97.add_attribute("Px", "5314801.390000"); // 2
      Leg_97_set.insert("5314801.390000");
      all_values.push_back(Leg_97_set);
      all_compo_names.insert("Leg_97_set");

      {
        xml_element LegAID_94{"LegAID"};
        multiset<string> LegAID_94_set;
        LegAID_94.add_attribute("SecAltID", "LegSecurityAltID_t_1481834582"); // 3
        LegAID_94_set.insert("LegSecurityAltID_t_1481834582");
        LegAID_94.add_attribute("SecAltIDSrc", "L"); // 3
        LegAID_94_set.insert("L");
        all_values.push_back(LegAID_94_set);
        all_compo_names.insert("LegAID_94_set");

        Leg_97.add_element(LegAID_94);
      }
      TrdLeg_0.add_element(Leg_97);
    }
    {
      xml_element Stip_181{"Stip"};
      multiset<string> Stip_181_set;
      Stip_181.add_attribute("StipTyp", "RATING"); // 2
      Stip_181_set.insert("RATING");
      Stip_181.add_attribute("StipVal", "LegStipulationValue_t_825583856"); // 2
      Stip_181_set.insert("LegStipulationValue_t_825583856");
      all_values.push_back(Stip_181_set);
      all_compo_names.insert("Stip_181_set");

      TrdLeg_0.add_element(Stip_181);
    }
    {
      xml_element Pty_415{"Pty"};
      multiset<string> Pty_415_set;
      Pty_415.add_attribute("ID", "NestedPartyID_t_552490240"); // 2
      Pty_415_set.insert("NestedPartyID_t_552490240");
      Pty_415.add_attribute("Src", "7"); // 2
      Pty_415_set.insert("7");
      Pty_415.add_attribute("R", "76"); // 2
      Pty_415_set.insert("76");
      all_values.push_back(Pty_415_set);
      all_compo_names.insert("Pty_415_set");

      {
        xml_element Sub_415{"Sub"};
        multiset<string> Sub_415_set;
        Sub_415.add_attribute("ID", "NestedPartySubID_t_1537118182"); // 3
        Sub_415_set.insert("NestedPartySubID_t_1537118182");
        Sub_415.add_attribute("Typ", "11"); // 3
        Sub_415_set.insert("11");
        all_values.push_back(Sub_415_set);
        all_compo_names.insert("Sub_415_set");

        Pty_415.add_element(Sub_415);
      }
      TrdLeg_0.add_element(Pty_415);
    }
    {
      xml_element TradeCapLegUndlyGrp_0{"TradeCapLegUndlyGrp"};
      {
        xml_element Instrmt_83{"Instrmt"};
        multiset<string> Instrmt_83_set;
        Instrmt_83.add_attribute("Sym", "UnderlyingLegSymbol_t_1378266579"); // 3
        Instrmt_83_set.insert("UnderlyingLegSymbol_t_1378266579");
        Instrmt_83.add_attribute("Sfx", "UnderlyingLegSymbolSfx_t_455596637"); // 3
        Instrmt_83_set.insert("UnderlyingLegSymbolSfx_t_455596637");
        Instrmt_83.add_attribute("ID", "UnderlyingLegSecurityID_t_1771856017"); // 3
        Instrmt_83_set.insert("UnderlyingLegSecurityID_t_1771856017");
        Instrmt_83.add_attribute("Src", "UnderlyingLegSecurityIDSource_t_1941278080"); // 3
        Instrmt_83_set.insert("UnderlyingLegSecurityIDSource_t_1941278080");
        Instrmt_83.add_attribute("CFI", "UnderlyingLegCFICode_t_48782944"); // 3
        Instrmt_83_set.insert("UnderlyingLegCFICode_t_48782944");
        Instrmt_83.add_attribute("SecType", "UnderlyingLegSecurityType_t_994943296"); // 3
        Instrmt_83_set.insert("UnderlyingLegSecurityType_t_994943296");
        Instrmt_83.add_attribute("SubType", "UnderlyingLegSecuritySubType_t_1598549891"); // 3
        Instrmt_83_set.insert("UnderlyingLegSecuritySubType_t_1598549891");
        Instrmt_83.add_attribute("MMY", "1750532943"); // 3
        Instrmt_83_set.insert("1750532943");
        Instrmt_83.add_attribute("MatDt", "UnderlyingLegMaturityDate_t_1029721032"); // 3
        Instrmt_83_set.insert("UnderlyingLegMaturityDate_t_1029721032");
        Instrmt_83.add_attribute("MatTm", "1809169412"); // 3
        Instrmt_83_set.insert("1809169412");
        Instrmt_83.add_attribute("StrkPx", "9941279.080000"); // 3
        Instrmt_83_set.insert("9941279.080000");
        Instrmt_83.add_attribute("OptAt", "391621389"); // 3
        Instrmt_83_set.insert("391621389");
        Instrmt_83.add_attribute("PutCall", "421292069"); // 3
        Instrmt_83_set.insert("421292069");
        Instrmt_83.add_attribute("Exch", "UnderlyingLegSecurityExchange_t_964422789"); // 3
        Instrmt_83_set.insert("UnderlyingLegSecurityExchange_t_964422789");
        Instrmt_83.add_attribute("Desc", "UnderlyingLegSecurityDesc_t_1723750198"); // 3
        Instrmt_83_set.insert("UnderlyingLegSecurityDesc_t_1723750198");
        all_values.push_back(Instrmt_83_set);
        all_compo_names.insert("Instrmt_83_set");

        {
          xml_element AID_86{"AID"};
          multiset<string> AID_86_set;
          AID_86.add_attribute("AltID", "UnderlyingLegSecurityAltID_t_420905099"); // 4
          AID_86_set.insert("UnderlyingLegSecurityAltID_t_420905099");
          AID_86.add_attribute("AltIDSrc", "UnderlyingLegSecurityAltIDSource_t_1197547803"); // 4
          AID_86_set.insert("UnderlyingLegSecurityAltIDSource_t_1197547803");
          all_values.push_back(AID_86_set);
          all_compo_names.insert("AID_86_set");

          Instrmt_83.add_element(AID_86);
        }
        TradeCapLegUndlyGrp_0.add_element(Instrmt_83);
      }
      TrdLeg_0.add_element(TradeCapLegUndlyGrp_0);
    }
    elt.add_element(TrdLeg_0);
  } // end TrdLeg
  { // TrdRegTS
    xml_element TrdRegTS_15{"TrdRegTS"};
    multiset<string> TrdRegTS_15_set;
    TrdRegTS_15.add_attribute("TS", "TrdRegTimestamp_t_1870073330"); // 1
    TrdRegTS_15_set.insert("TrdRegTimestamp_t_1870073330");
    TrdRegTS_15.add_attribute("Typ", "3"); // 1
    TrdRegTS_15_set.insert("3");
    TrdRegTS_15.add_attribute("Src", "TrdRegTimestampOrigin_t_448888300"); // 1
    TrdRegTS_15_set.insert("TrdRegTimestampOrigin_t_448888300");
    TrdRegTS_15.add_attribute("DskTyp", "O"); // 1
    TrdRegTS_15_set.insert("O");
    TrdRegTS_15.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_15_set.insert("1");
    TrdRegTS_15.add_attribute("DskOrdHndlInst", "IOC"); // 1
    TrdRegTS_15_set.insert("IOC");
    all_values.push_back(TrdRegTS_15_set);
    all_compo_names.insert("TrdRegTS_15_set");

    elt.add_element(TrdRegTS_15);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_16{"TrdRegTS"};
    multiset<string> TrdRegTS_16_set;
    TrdRegTS_16.add_attribute("TS", "TrdRegTimestamp_t_828574985"); // 1
    TrdRegTS_16_set.insert("TrdRegTimestamp_t_828574985");
    TrdRegTS_16.add_attribute("Typ", "4"); // 1
    TrdRegTS_16_set.insert("4");
    TrdRegTS_16.add_attribute("Src", "TrdRegTimestampOrigin_t_2013629975"); // 1
    TrdRegTS_16_set.insert("TrdRegTimestampOrigin_t_2013629975");
    TrdRegTS_16.add_attribute("DskTyp", "AR"); // 1
    TrdRegTS_16_set.insert("AR");
    TrdRegTS_16.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_16_set.insert("1");
    TrdRegTS_16.add_attribute("DskOrdHndlInst", "MOC"); // 1
    TrdRegTS_16_set.insert("MOC");
    all_values.push_back(TrdRegTS_16_set);
    all_compo_names.insert("TrdRegTS_16_set");

    elt.add_element(TrdRegTS_16);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_17{"TrdRegTS"};
    multiset<string> TrdRegTS_17_set;
    TrdRegTS_17.add_attribute("TS", "TrdRegTimestamp_t_1867287997"); // 1
    TrdRegTS_17_set.insert("TrdRegTimestamp_t_1867287997");
    TrdRegTS_17.add_attribute("Typ", "4"); // 1
    TrdRegTS_17_set.insert("4");
    TrdRegTS_17.add_attribute("Src", "TrdRegTimestampOrigin_t_1858861147"); // 1
    TrdRegTS_17_set.insert("TrdRegTimestampOrigin_t_1858861147");
    TrdRegTS_17.add_attribute("DskTyp", "T"); // 1
    TrdRegTS_17_set.insert("T");
    TrdRegTS_17.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_17_set.insert("1");
    TrdRegTS_17.add_attribute("DskOrdHndlInst", "MAC"); // 1
    TrdRegTS_17_set.insert("MAC");
    all_values.push_back(TrdRegTS_17_set);
    all_compo_names.insert("TrdRegTS_17_set");

    elt.add_element(TrdRegTS_17);
  } // end TrdRegTS
  { // RptSide
    xml_element RptSide_0{"RptSide"};
    multiset<string> RptSide_0_set;
    RptSide_0.add_attribute("Side", "5"); // 1
    RptSide_0_set.insert("5");
    RptSide_0.add_attribute("SideExecID", "SideExecID_t_1510693387"); // 1
    RptSide_0_set.insert("SideExecID_t_1510693387");
    RptSide_0.add_attribute("OrdDelay", "1368841047"); // 1
    RptSide_0_set.insert("1368841047");
    RptSide_0.add_attribute("OrdDelayUnit", "13"); // 1
    RptSide_0_set.insert("13");
    RptSide_0.add_attribute("SideQty", "357337647"); // 1
    RptSide_0_set.insert("357337647");
    RptSide_0.add_attribute("RptID", "SideTradeReportID_t_1760462436"); // 1
    RptSide_0_set.insert("SideTradeReportID_t_1760462436");
    RptSide_0.add_attribute("FillStationCd", "SideFillStationCd_t_1385724734"); // 1
    RptSide_0_set.insert("SideFillStationCd_t_1385724734");
    RptSide_0.add_attribute("RsnCD", "SideReasonCd_t_1321760436"); // 1
    RptSide_0_set.insert("SideReasonCd_t_1321760436");
    RptSide_0.add_attribute("RptSeq", "1336728986"); // 1
    RptSide_0_set.insert("1336728986");
    RptSide_0.add_attribute("TrdSubTyp", "15"); // 1
    RptSide_0_set.insert("15");
    RptSide_0.add_attribute("NetGrossInd", "2"); // 1
    RptSide_0_set.insert("2");
    RptSide_0.add_attribute("Ccy", "EUR"); // 1
    RptSide_0_set.insert("EUR");
    RptSide_0.add_attribute("SettlCcy", "CHF"); // 1
    RptSide_0_set.insert("CHF");
    RptSide_0.add_attribute("Acct", "Account_t_1783289337"); // 1
    RptSide_0_set.insert("Account_t_1783289337");
    RptSide_0.add_attribute("AcctIDSrc", "3"); // 1
    RptSide_0_set.insert("3");
    RptSide_0.add_attribute("AcctTyp", "7"); // 1
    RptSide_0_set.insert("7");
    RptSide_0.add_attribute("ProcCode", "2"); // 1
    RptSide_0_set.insert("2");
    RptSide_0.add_attribute("OddLot", "Y"); // 1
    RptSide_0_set.insert("Y");
    RptSide_0.add_attribute("InptSrc", "TradeInputSource_t_424998648"); // 1
    RptSide_0_set.insert("TradeInputSource_t_424998648");
    RptSide_0.add_attribute("InptDev", "TradeInputDevice_t_1804855811"); // 1
    RptSide_0_set.insert("TradeInputDevice_t_1804855811");
    RptSide_0.add_attribute("ComplianceID", "ComplianceID_t_1185080573"); // 1
    RptSide_0_set.insert("ComplianceID_t_1185080573");
    RptSide_0.add_attribute("SolFlag", "Y"); // 1
    RptSide_0_set.insert("Y");
    RptSide_0.add_attribute("CustCpcty", "1"); // 1
    RptSide_0_set.insert("1");
    RptSide_0.add_attribute("SesID", "1"); // 1
    RptSide_0_set.insert("1");
    RptSide_0.add_attribute("SesSub", "2"); // 1
    RptSide_0_set.insert("2");
    RptSide_0.add_attribute("TmBkt", "TimeBracket_t_868836879"); // 1
    RptSide_0_set.insert("TimeBracket_t_868836879");
    RptSide_0.add_attribute("NumDaysInt", "799680159"); // 1
    RptSide_0_set.insert("799680159");
    RptSide_0.add_attribute("ExDt", "ExDate_t_1299801100"); // 1
    RptSide_0_set.insert("ExDate_t_1299801100");
    RptSide_0.add_attribute("AcrdIntRt", "12079568.940000"); // 1
    RptSide_0_set.insert("12079568.940000");
    RptSide_0.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_2102427059"); // 1
    RptSide_0_set.insert("AccruedInterestAmt_t_2102427059");
    RptSide_0.add_attribute("IntAtMat", "InterestAtMaturity_t_663010839"); // 1
    RptSide_0_set.insert("InterestAtMaturity_t_663010839");
    RptSide_0.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_429314293"); // 1
    RptSide_0_set.insert("EndAccruedInterestAmt_t_429314293");
    RptSide_0.add_attribute("StartCsh", "StartCash_t_919376076"); // 1
    RptSide_0_set.insert("StartCash_t_919376076");
    RptSide_0.add_attribute("EndCsh", "EndCash_t_1020348486"); // 1
    RptSide_0_set.insert("EndCash_t_1020348486");
    RptSide_0.add_attribute("Concession", "Concession_t_42293081"); // 1
    RptSide_0_set.insert("Concession_t_42293081");
    RptSide_0.add_attribute("TotTakedown", "TotalTakedown_t_157617163"); // 1
    RptSide_0_set.insert("TotalTakedown_t_157617163");
    RptSide_0.add_attribute("NetMny", "NetMoney_t_194625275"); // 1
    RptSide_0_set.insert("NetMoney_t_194625275");
    RptSide_0.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1379022067"); // 1
    RptSide_0_set.insert("SettlCurrAmt_t_1379022067");
    RptSide_0.add_attribute("SettlCurrFxRt", "19642469.960000"); // 1
    RptSide_0_set.insert("19642469.960000");
    RptSide_0.add_attribute("SettlCurrFxRtCalc", "M"); // 1
    RptSide_0_set.insert("M");
    RptSide_0.add_attribute("PosEfct", "D"); // 1
    RptSide_0_set.insert("D");
    RptSide_0.add_attribute("Txt", "Text_t_1345982864"); // 1
    RptSide_0_set.insert("Text_t_1345982864");
    RptSide_0.add_attribute("EncTxtLen", "1867219211"); // 1
    RptSide_0_set.insert("1867219211");
    RptSide_0.add_attribute("EncTxt", "EncodedText_t_1273042586"); // 1
    RptSide_0_set.insert("EncodedText_t_1273042586");
    RptSide_0.add_attribute("MLegRptTyp", "1"); // 1
    RptSide_0_set.insert("1");
    RptSide_0.add_attribute("ExchRule", "ExchangeRule_t_1283800595"); // 1
    RptSide_0_set.insert("ExchangeRule_t_1283800595");
    RptSide_0.add_attribute("AllocInd", "5"); // 1
    RptSide_0_set.insert("5");
    RptSide_0.add_attribute("PreallocMeth", "1"); // 1
    RptSide_0_set.insert("1");
    RptSide_0.add_attribute("AllocID", "AllocID_t_1789261522"); // 1
    RptSide_0_set.insert("AllocID_t_1789261522");
    RptSide_0.add_attribute("SideGrossTradeAmt", "SideGrossTradeAmt_t_109409907"); // 1
    RptSide_0_set.insert("SideGrossTradeAmt_t_109409907");
    RptSide_0.add_attribute("AgrsrInd", "Y"); // 1
    RptSide_0_set.insert("Y");
    RptSide_0.add_attribute("ExchSpeclInstr", "ExchangeSpecialInstructions_t_826858447"); // 1
    RptSide_0_set.insert("ExchangeSpecialInstructions_t_826858447");
    RptSide_0.add_attribute("OrdCat", "2"); // 1
    RptSide_0_set.insert("2");
    RptSide_0.add_attribute("LqdtyInd", "3"); // 1
    RptSide_0_set.insert("3");
    all_values.push_back(RptSide_0_set);
    all_compo_names.insert("RptSide_0_set");

    {
      xml_element Pty_416{"Pty"};
      multiset<string> Pty_416_set;
      Pty_416.add_attribute("ID", "PartyID_t_1922341597"); // 2
      Pty_416_set.insert("PartyID_t_1922341597");
      Pty_416.add_attribute("Src", "A"); // 2
      Pty_416_set.insert("A");
      Pty_416.add_attribute("R", "38"); // 2
      Pty_416_set.insert("38");
      all_values.push_back(Pty_416_set);
      all_compo_names.insert("Pty_416_set");

      {
        xml_element Sub_416{"Sub"};
        multiset<string> Sub_416_set;
        Sub_416.add_attribute("ID", "PartySubID_t_574538108"); // 3
        Sub_416_set.insert("PartySubID_t_574538108");
        Sub_416.add_attribute("Typ", "11"); // 3
        Sub_416_set.insert("11");
        all_values.push_back(Sub_416_set);
        all_compo_names.insert("Sub_416_set");

        Pty_416.add_element(Sub_416);
      }
      RptSide_0.add_element(Pty_416);
    }
    {
      xml_element ClrInst_4{"ClrInst"};
      multiset<string> ClrInst_4_set;
      ClrInst_4.add_attribute("ClrngInstrctn", "12"); // 2
      ClrInst_4_set.insert("12");
      all_values.push_back(ClrInst_4_set);
      all_compo_names.insert("ClrInst_4_set");

      RptSide_0.add_element(ClrInst_4);
    }
    {
      xml_element Comm_18{"Comm"};
      multiset<string> Comm_18_set;
      Comm_18.add_attribute("Comm", "Commission_t_529481520"); // 2
      Comm_18_set.insert("Commission_t_529481520");
      Comm_18.add_attribute("CommTyp", "3"); // 2
      Comm_18_set.insert("3");
      Comm_18.add_attribute("Ccy", "USD"); // 2
      Comm_18_set.insert("USD");
      Comm_18.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_18_set.insert("N");
      all_values.push_back(Comm_18_set);
      all_compo_names.insert("Comm_18_set");

      RptSide_0.add_element(Comm_18);
    }
    {
      xml_element ContAmt_1{"ContAmt"};
      multiset<string> ContAmt_1_set;
      ContAmt_1.add_attribute("ContAmtTyp", "3"); // 2
      ContAmt_1_set.insert("3");
      ContAmt_1.add_attribute("ContAmtValu", "16064747.590000"); // 2
      ContAmt_1_set.insert("16064747.590000");
      ContAmt_1.add_attribute("ContAmtCurr", "CAN"); // 2
      ContAmt_1_set.insert("CAN");
      all_values.push_back(ContAmt_1_set);
      all_compo_names.insert("ContAmt_1_set");

      RptSide_0.add_element(ContAmt_1);
    }
    {
      xml_element Stip_182{"Stip"};
      multiset<string> Stip_182_set;
      Stip_182.add_attribute("Typ", "MPR"); // 2
      Stip_182_set.insert("MPR");
      Stip_182.add_attribute("Val", "StipulationValue_t_779098344"); // 2
      Stip_182_set.insert("StipulationValue_t_779098344");
      all_values.push_back(Stip_182_set);
      all_compo_names.insert("Stip_182_set");

      RptSide_0.add_element(Stip_182);
    }
    {
      xml_element MiscFees_14{"MiscFees"};
      multiset<string> MiscFees_14_set;
      MiscFees_14.add_attribute("Amt", "MiscFeeAmt_t_141020176"); // 2
      MiscFees_14_set.insert("MiscFeeAmt_t_141020176");
      MiscFees_14.add_attribute("Curr", "CHF"); // 2
      MiscFees_14_set.insert("CHF");
      MiscFees_14.add_attribute("Typ", "1"); // 2
      MiscFees_14_set.insert("1");
      MiscFees_14.add_attribute("Basis", "2"); // 2
      MiscFees_14_set.insert("2");
      all_values.push_back(MiscFees_14_set);
      all_compo_names.insert("MiscFees_14_set");

      RptSide_0.add_element(MiscFees_14);
    }
    {
      xml_element Alloc_4{"Alloc"};
      multiset<string> Alloc_4_set;
      Alloc_4.add_attribute("Acct", "AllocAccount_t_1782634502"); // 2
      Alloc_4_set.insert("AllocAccount_t_1782634502");
      Alloc_4.add_attribute("ActIDSrc", "4"); // 2
      Alloc_4_set.insert("4");
      Alloc_4.add_attribute("AllocSettlCcy", "JPY"); // 2
      Alloc_4_set.insert("JPY");
      Alloc_4.add_attribute("IndAllocID", "IndividualAllocID_t_1207883928"); // 2
      Alloc_4_set.insert("IndividualAllocID_t_1207883928");
      Alloc_4.add_attribute("Qty", "20057528.460000"); // 2
      Alloc_4_set.insert("20057528.460000");
      Alloc_4.add_attribute("CustCpcty", "AllocCustomerCapacity_t_103787176"); // 2
      Alloc_4_set.insert("AllocCustomerCapacity_t_103787176");
      Alloc_4.add_attribute("Meth", "1"); // 2
      Alloc_4_set.insert("1");
      Alloc_4.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_338987100"); // 2
      Alloc_4_set.insert("SecondaryIndividualAllocID_t_338987100");
      Alloc_4.add_attribute("ClrFeeInd", "AllocClearingFeeIndicator_t_2026128773"); // 2
      Alloc_4_set.insert("AllocClearingFeeIndicator_t_2026128773");
      all_values.push_back(Alloc_4_set);
      all_compo_names.insert("Alloc_4_set");

      {
        xml_element Pty_417{"Pty"};
        multiset<string> Pty_417_set;
        Pty_417.add_attribute("ID", "Nested2PartyID_t_180419770"); // 3
        Pty_417_set.insert("Nested2PartyID_t_180419770");
        Pty_417.add_attribute("Src", "7"); // 3
        Pty_417_set.insert("7");
        Pty_417.add_attribute("R", "45"); // 3
        Pty_417_set.insert("45");
        all_values.push_back(Pty_417_set);
        all_compo_names.insert("Pty_417_set");

        {
          xml_element Sub_417{"Sub"};
          multiset<string> Sub_417_set;
          Sub_417.add_attribute("ID", "Nested2PartySubID_t_662567295"); // 4
          Sub_417_set.insert("Nested2PartySubID_t_662567295");
          Sub_417.add_attribute("Typ", "4"); // 4
          Sub_417_set.insert("4");
          all_values.push_back(Sub_417_set);
          all_compo_names.insert("Sub_417_set");

          Pty_417.add_element(Sub_417);
        }
        Alloc_4.add_element(Pty_417);
      }
      RptSide_0.add_element(Alloc_4);
    }
    {
      xml_element TrdRegTS_18{"TrdRegTS"};
      multiset<string> TrdRegTS_18_set;
      TrdRegTS_18.add_attribute("TS", "SideTrdRegTimestamp_t_982664754"); // 2
      TrdRegTS_18_set.insert("SideTrdRegTimestamp_t_982664754");
      TrdRegTS_18.add_attribute("Typ", "6"); // 2
      TrdRegTS_18_set.insert("6");
      TrdRegTS_18.add_attribute("Src", "SideTrdRegTimestampSrc_t_790428585"); // 2
      TrdRegTS_18_set.insert("SideTrdRegTimestampSrc_t_790428585");
      all_values.push_back(TrdRegTS_18_set);
      all_compo_names.insert("TrdRegTS_18_set");

      RptSide_0.add_element(TrdRegTS_18);
    }
    {
      xml_element SettlDetails_2{"SettlDetails"};
      multiset<string> SettlDetails_2_set;
      SettlDetails_2.add_attribute("SettlSrc", "2"); // 2
      SettlDetails_2_set.insert("2");
      all_values.push_back(SettlDetails_2_set);
      all_compo_names.insert("SettlDetails_2_set");

      {
        xml_element Pty_418{"Pty"};
        multiset<string> Pty_418_set;
        Pty_418.add_attribute("ID", "SettlPartyID_t_1825748861"); // 3
        Pty_418_set.insert("SettlPartyID_t_1825748861");
        Pty_418.add_attribute("Src", "F"); // 3
        Pty_418_set.insert("F");
        Pty_418.add_attribute("R", "57"); // 3
        Pty_418_set.insert("57");
        all_values.push_back(Pty_418_set);
        all_compo_names.insert("Pty_418_set");

        {
          xml_element Sub_418{"Sub"};
          multiset<string> Sub_418_set;
          Sub_418.add_attribute("ID", "SettlPartySubID_t_2038397339"); // 4
          Sub_418_set.insert("SettlPartySubID_t_2038397339");
          Sub_418.add_attribute("Typ", "24"); // 4
          Sub_418_set.insert("24");
          all_values.push_back(Sub_418_set);
          all_compo_names.insert("Sub_418_set");

          Pty_418.add_element(Sub_418);
        }
        SettlDetails_2.add_element(Pty_418);
      }
      RptSide_0.add_element(SettlDetails_2);
    }
    {
      xml_element TrdRptOrdDetl_0{"TrdRptOrdDetl"};
      multiset<string> TrdRptOrdDetl_0_set;
      TrdRptOrdDetl_0.add_attribute("OrdID", "OrderID_t_1166267922"); // 2
      TrdRptOrdDetl_0_set.insert("OrderID_t_1166267922");
      TrdRptOrdDetl_0.add_attribute("OrdID2", "SecondaryOrderID_t_670012035"); // 2
      TrdRptOrdDetl_0_set.insert("SecondaryOrderID_t_670012035");
      TrdRptOrdDetl_0.add_attribute("ClOrdID", "ClOrdID_t_1926257987"); // 2
      TrdRptOrdDetl_0_set.insert("ClOrdID_t_1926257987");
      TrdRptOrdDetl_0.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1788005246"); // 2
      TrdRptOrdDetl_0_set.insert("SecondaryClOrdID_t_1788005246");
      TrdRptOrdDetl_0.add_attribute("ListID", "ListID_t_1168845942"); // 2
      TrdRptOrdDetl_0_set.insert("ListID_t_1168845942");
      TrdRptOrdDetl_0.add_attribute("RefOrdID", "RefOrderID_t_1192837102"); // 2
      TrdRptOrdDetl_0_set.insert("RefOrderID_t_1192837102");
      TrdRptOrdDetl_0.add_attribute("RefOrdIDSrc", "0"); // 2
      TrdRptOrdDetl_0_set.insert("0");
      TrdRptOrdDetl_0.add_attribute("RefOrdIDRsn", "0"); // 2
      TrdRptOrdDetl_0_set.insert("0");
      TrdRptOrdDetl_0.add_attribute("OrdTyp", "C"); // 2
      TrdRptOrdDetl_0_set.insert("C");
      TrdRptOrdDetl_0.add_attribute("Px", "21462589.310000"); // 2
      TrdRptOrdDetl_0_set.insert("21462589.310000");
      TrdRptOrdDetl_0.add_attribute("StopPx", "809255.240000"); // 2
      TrdRptOrdDetl_0_set.insert("809255.240000");
      TrdRptOrdDetl_0.add_attribute("ExecInst", "W"); // 2
      TrdRptOrdDetl_0_set.insert("W");
      TrdRptOrdDetl_0.add_attribute("OrdStat", "A"); // 2
      TrdRptOrdDetl_0_set.insert("A");
      TrdRptOrdDetl_0.add_attribute("LeavesQty", "1847127.000000"); // 2
      TrdRptOrdDetl_0_set.insert("1847127.000000");
      TrdRptOrdDetl_0.add_attribute("CumQty", "2023011.010000"); // 2
      TrdRptOrdDetl_0_set.insert("2023011.010000");
      TrdRptOrdDetl_0.add_attribute("TmInForce", "1"); // 2
      TrdRptOrdDetl_0_set.insert("1");
      TrdRptOrdDetl_0.add_attribute("ExpireTm", "ExpireTime_t_63357826"); // 2
      TrdRptOrdDetl_0_set.insert("ExpireTime_t_63357826");
      TrdRptOrdDetl_0.add_attribute("Cpcty", "W"); // 2
      TrdRptOrdDetl_0_set.insert("W");
      TrdRptOrdDetl_0.add_attribute("Rstctions", "F"); // 2
      TrdRptOrdDetl_0_set.insert("F");
      TrdRptOrdDetl_0.add_attribute("BkngTyp", "1"); // 2
      TrdRptOrdDetl_0_set.insert("1");
      TrdRptOrdDetl_0.add_attribute("OrigCustOrdCpcty", "3"); // 2
      TrdRptOrdDetl_0_set.insert("3");
      TrdRptOrdDetl_0.add_attribute("OrdInptDev", "OrderInputDevice_t_1835659727"); // 2
      TrdRptOrdDetl_0_set.insert("OrderInputDevice_t_1835659727");
      TrdRptOrdDetl_0.add_attribute("LotTyp", "3"); // 2
      TrdRptOrdDetl_0_set.insert("3");
      TrdRptOrdDetl_0.add_attribute("TransBkdTm", "TransBkdTime_t_705530177"); // 2
      TrdRptOrdDetl_0_set.insert("TransBkdTime_t_705530177");
      TrdRptOrdDetl_0.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_478604664"); // 2
      TrdRptOrdDetl_0_set.insert("OrigOrdModTime_t_478604664");
      all_values.push_back(TrdRptOrdDetl_0_set);
      all_compo_names.insert("TrdRptOrdDetl_0_set");

      {
        xml_element OrdQty_24{"OrdQty"};
        multiset<string> OrdQty_24_set;
        OrdQty_24.add_attribute("Qty", "17832445.160000"); // 3
        OrdQty_24_set.insert("17832445.160000");
        OrdQty_24.add_attribute("Cash", "3837953.900000"); // 3
        OrdQty_24_set.insert("3837953.900000");
        OrdQty_24.add_attribute("Pct", "31850.040000"); // 3
        OrdQty_24_set.insert("31850.040000");
        OrdQty_24.add_attribute("RndDir", "0"); // 3
        OrdQty_24_set.insert("0");
        OrdQty_24.add_attribute("RndMod", "2747090.810000"); // 3
        OrdQty_24_set.insert("2747090.810000");
        all_values.push_back(OrdQty_24_set);
        all_compo_names.insert("OrdQty_24_set");

        TrdRptOrdDetl_0.add_element(OrdQty_24);
      }
      {
        xml_element DsplyInstr_8{"DsplyInstr"};
        multiset<string> DsplyInstr_8_set;
        DsplyInstr_8.add_attribute("DisplayQty", "17884228.160000"); // 3
        DsplyInstr_8_set.insert("17884228.160000");
        DsplyInstr_8.add_attribute("SecDspQty", "5450586.040000"); // 3
        DsplyInstr_8_set.insert("5450586.040000");
        DsplyInstr_8.add_attribute("DspWhn", "1"); // 3
        DsplyInstr_8_set.insert("1");
        DsplyInstr_8.add_attribute("DspMthd", "4"); // 3
        DsplyInstr_8_set.insert("4");
        DsplyInstr_8.add_attribute("DsplLwQty", "1855802.020000"); // 3
        DsplyInstr_8_set.insert("1855802.020000");
        DsplyInstr_8.add_attribute("DisplayHighQty", "21135670.580000"); // 3
        DsplyInstr_8_set.insert("21135670.580000");
        DsplyInstr_8.add_attribute("DspMinIncr", "6125506.090000"); // 3
        DsplyInstr_8_set.insert("6125506.090000");
        DsplyInstr_8.add_attribute("RfrshQty", "14296276.770000"); // 3
        DsplyInstr_8_set.insert("14296276.770000");
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
    TrdRepIndicatorsGrp_0.add_attribute("PtyRole", "10"); // 1
    TrdRepIndicatorsGrp_0_set.insert("10");
    TrdRepIndicatorsGrp_0.add_attribute("TrdRepInd", "true"); // 1
    TrdRepIndicatorsGrp_0_set.insert("true");
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
