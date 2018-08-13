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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdCaptRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReport_message_t_0;
  elt.add_attribute("RptID", "TradeReportID_t_1115795974"); // 0
  TradeCaptureReport_message_t_0.insert("TradeReportID_t_1115795974");
  elt.add_attribute("TrdID", "TradeID_t_352306292"); // 0
  TradeCaptureReport_message_t_0.insert("TradeID_t_352306292");
  elt.add_attribute("TrdID2", "SecondaryTradeID_t_377357043"); // 0
  TradeCaptureReport_message_t_0.insert("SecondaryTradeID_t_377357043");
  elt.add_attribute("FirmTrdID", "FirmTradeID_t_123861411"); // 0
  TradeCaptureReport_message_t_0.insert("FirmTradeID_t_123861411");
  elt.add_attribute("FirmTrdID2", "SecondaryFirmTradeID_t_1863854211"); // 0
  TradeCaptureReport_message_t_0.insert("SecondaryFirmTradeID_t_1863854211");
  elt.add_attribute("TransTyp", "1"); // 0
  TradeCaptureReport_message_t_0.insert("1");
  elt.add_attribute("RptTyp", "6"); // 0
  TradeCaptureReport_message_t_0.insert("6");
  elt.add_attribute("TrdRptStat", "3"); // 0
  TradeCaptureReport_message_t_0.insert("3");
  elt.add_attribute("ReqID", "TradeRequestID_t_1474149349"); // 0
  TradeCaptureReport_message_t_0.insert("TradeRequestID_t_1474149349");
  elt.add_attribute("TrdTyp", "26"); // 0
  TradeCaptureReport_message_t_0.insert("26");
  elt.add_attribute("TrdSubTyp", "38"); // 0
  TradeCaptureReport_message_t_0.insert("38");
  elt.add_attribute("TrdTyp2", "33"); // 0
  TradeCaptureReport_message_t_0.insert("33");
  elt.add_attribute("TrdHandlInst", "1"); // 0
  TradeCaptureReport_message_t_0.insert("1");
  elt.add_attribute("OrigTrdHandlInst", "5"); // 0
  TradeCaptureReport_message_t_0.insert("5");
  elt.add_attribute("OrigTrdDt", "OrigTradeDate_t_1389831096"); // 0
  TradeCaptureReport_message_t_0.insert("OrigTradeDate_t_1389831096");
  elt.add_attribute("OrigTrdID", "OrigTradeID_t_1870825784"); // 0
  TradeCaptureReport_message_t_0.insert("OrigTradeID_t_1870825784");
  elt.add_attribute("OrignTrdID2", "OrigSecondaryTradeID_t_263490797"); // 0
  TradeCaptureReport_message_t_0.insert("OrigSecondaryTradeID_t_263490797");
  elt.add_attribute("TrnsfrRsn", "TransferReason_t_794936007"); // 0
  TradeCaptureReport_message_t_0.insert("TransferReason_t_794936007");
  elt.add_attribute("ExecTyp", "F"); // 0
  TradeCaptureReport_message_t_0.insert("F");
  elt.add_attribute("TotNumTrdRpts", "1081791036"); // 0
  TradeCaptureReport_message_t_0.insert("1081791036");
  elt.add_attribute("LastRptReqed", "N"); // 0
  TradeCaptureReport_message_t_0.insert("N");
  elt.add_attribute("Unsol", "N"); // 0
  TradeCaptureReport_message_t_0.insert("N");
  elt.add_attribute("SubReqTyp", "1"); // 0
  TradeCaptureReport_message_t_0.insert("1");
  elt.add_attribute("RptRefID", "TradeReportRefID_t_560851580"); // 0
  TradeCaptureReport_message_t_0.insert("TradeReportRefID_t_560851580");
  elt.add_attribute("RptRefID2", "SecondaryTradeReportRefID_t_1118153818"); // 0
  TradeCaptureReport_message_t_0.insert("SecondaryTradeReportRefID_t_1118153818");
  elt.add_attribute("RptID2", "SecondaryTradeReportID_t_2025944100"); // 0
  TradeCaptureReport_message_t_0.insert("SecondaryTradeReportID_t_2025944100");
  elt.add_attribute("LinkID", "TradeLinkID_t_1916010073"); // 0
  TradeCaptureReport_message_t_0.insert("TradeLinkID_t_1916010073");
  elt.add_attribute("MtchID", "TrdMatchID_t_665681156"); // 0
  TradeCaptureReport_message_t_0.insert("TrdMatchID_t_665681156");
  elt.add_attribute("ExecID", "ExecID_t_594057271"); // 0
  TradeCaptureReport_message_t_0.insert("ExecID_t_594057271");
  elt.add_attribute("ExecID2", "SecondaryExecID_t_1600316618"); // 0
  TradeCaptureReport_message_t_0.insert("SecondaryExecID_t_1600316618");
  elt.add_attribute("ExecRstmtRsn", "6"); // 0
  TradeCaptureReport_message_t_0.insert("6");
  elt.add_attribute("PrevlyRpted", "Y"); // 0
  TradeCaptureReport_message_t_0.insert("Y");
  elt.add_attribute("PxTyp", "9"); // 0
  TradeCaptureReport_message_t_0.insert("9");
  elt.add_attribute("AsOfInd", "0"); // 0
  TradeCaptureReport_message_t_0.insert("0");
  elt.add_attribute("SetSesID", "ITD"); // 0
  TradeCaptureReport_message_t_0.insert("ITD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_1668993473"); // 0
  TradeCaptureReport_message_t_0.insert("SettlSessSubID_t_1668993473");
  elt.add_attribute("VenuTyp", "X"); // 0
  TradeCaptureReport_message_t_0.insert("X");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1619526999"); // 0
  TradeCaptureReport_message_t_0.insert("MarketSegmentID_t_1619526999");
  elt.add_attribute("MktID", "MarketID_t_638961669"); // 0
  TradeCaptureReport_message_t_0.insert("MarketID_t_638961669");
  elt.add_attribute("QtyTyp", "1"); // 0
  TradeCaptureReport_message_t_0.insert("1");
  elt.add_attribute("UndSesID", "UnderlyingTradingSessionID_t_961774586"); // 0
  TradeCaptureReport_message_t_0.insert("UnderlyingTradingSessionID_t_961774586");
  elt.add_attribute("UndSesSub", "UnderlyingTradingSessionSubID_t_1677642305"); // 0
  TradeCaptureReport_message_t_0.insert("UnderlyingTradingSessionSubID_t_1677642305");
  elt.add_attribute("LastQty", "6513119.010000"); // 0
  TradeCaptureReport_message_t_0.insert("6513119.010000");
  elt.add_attribute("LastPx", "11406763.050000"); // 0
  TradeCaptureReport_message_t_0.insert("11406763.050000");
  elt.add_attribute("CalcCcyLastQty", "14208029.240000"); // 0
  TradeCaptureReport_message_t_0.insert("14208029.240000");
  elt.add_attribute("Ccy", "CHF"); // 0
  TradeCaptureReport_message_t_0.insert("CHF");
  elt.add_attribute("SettlCcy", "CAN"); // 0
  TradeCaptureReport_message_t_0.insert("CAN");
  elt.add_attribute("LastParPx", "5569139.660000"); // 0
  TradeCaptureReport_message_t_0.insert("5569139.660000");
  elt.add_attribute("LastSpotRt", "6186011.090000"); // 0
  TradeCaptureReport_message_t_0.insert("6186011.090000");
  elt.add_attribute("LastFwdPnts", "17476659.830000"); // 0
  TradeCaptureReport_message_t_0.insert("17476659.830000");
  elt.add_attribute("LastSwapPnts", "8201864.290000"); // 0
  TradeCaptureReport_message_t_0.insert("8201864.290000");
  elt.add_attribute("LastMkt", "LastMkt_t_1834871239"); // 0
  TradeCaptureReport_message_t_0.insert("LastMkt_t_1834871239");
  elt.add_attribute("TrdDt", "TradeDate_t_161033915"); // 0
  TradeCaptureReport_message_t_0.insert("TradeDate_t_161033915");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1938340247"); // 0
  TradeCaptureReport_message_t_0.insert("ClearingBusinessDate_t_1938340247");
  elt.add_attribute("AvgPx", "17133316.910000"); // 0
  TradeCaptureReport_message_t_0.insert("17133316.910000");
  elt.add_attribute("AvgPxInd", "0"); // 0
  TradeCaptureReport_message_t_0.insert("0");
  elt.add_attribute("MLegRptTyp", "3"); // 0
  TradeCaptureReport_message_t_0.insert("3");
  elt.add_attribute("TrdLegRefID", "TradeLegRefID_t_159905314"); // 0
  TradeCaptureReport_message_t_0.insert("TradeLegRefID_t_159905314");
  elt.add_attribute("TxnTm", "TransactTime_t_1529876958"); // 0
  TradeCaptureReport_message_t_0.insert("TransactTime_t_1529876958");
  elt.add_attribute("SettlTyp", "8"); // 0
  TradeCaptureReport_message_t_0.insert("8");
  elt.add_attribute("SettlDt", "SettlDate_t_1869758560"); // 0
  TradeCaptureReport_message_t_0.insert("SettlDate_t_1869758560");
  elt.add_attribute("StlDt", "UnderlyingSettlementDate_t_1335016220"); // 0
  TradeCaptureReport_message_t_0.insert("UnderlyingSettlementDate_t_1335016220");
  elt.add_attribute("MtchStat", "0"); // 0
  TradeCaptureReport_message_t_0.insert("0");
  elt.add_attribute("MtchTyp", "S4"); // 0
  TradeCaptureReport_message_t_0.insert("S4");
  elt.add_attribute("Vol", "8565260.460000"); // 0
  TradeCaptureReport_message_t_0.insert("8565260.460000");
  elt.add_attribute("DividendYield", "12417316.380000"); // 0
  TradeCaptureReport_message_t_0.insert("12417316.380000");
  elt.add_attribute("RFR", "10280329.190000"); // 0
  TradeCaptureReport_message_t_0.insert("10280329.190000");
  elt.add_attribute("CurrencyRatio", "14954877.150000"); // 0
  TradeCaptureReport_message_t_0.insert("14954877.150000");
  elt.add_attribute("CopyMsgInd", "true"); // 0
  TradeCaptureReport_message_t_0.insert("true");
  elt.add_attribute("PubTrdInd", "Y"); // 0
  TradeCaptureReport_message_t_0.insert("Y");
  elt.add_attribute("TrdPubInd", "0"); // 0
  TradeCaptureReport_message_t_0.insert("0");
  elt.add_attribute("ShrtSaleRsn", "3"); // 0
  TradeCaptureReport_message_t_0.insert("3");
  elt.add_attribute("TierCD", "TierCode_t_983000163"); // 0
  TradeCaptureReport_message_t_0.insert("TierCode_t_983000163");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_298965648"); // 0
  TradeCaptureReport_message_t_0.insert("MessageEventSource_t_298965648");
  elt.add_attribute("LastUpdateTm", "LastUpdateTime_t_984305909"); // 0
  TradeCaptureReport_message_t_0.insert("LastUpdateTime_t_984305909");
  elt.add_attribute("RndPx", "18470186.040000"); // 0
  TradeCaptureReport_message_t_0.insert("18470186.040000");
  elt.add_attribute("TZTransactTime", "TZTransactTime_t_1983259369"); // 0
  TradeCaptureReport_message_t_0.insert("TZTransactTime_t_1983259369");
  elt.add_attribute("ReportedPxDiff", "true"); // 0
  TradeCaptureReport_message_t_0.insert("true");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_256448923"); // 0
  TradeCaptureReport_message_t_0.insert("GrossTradeAmt_t_256448923");
  elt.add_attribute("RejTxt", "RejectText_t_454376831"); // 0
  TradeCaptureReport_message_t_0.insert("RejectText_t_454376831");
  elt.add_attribute("FeeMult", "12730836.010000"); // 0
  TradeCaptureReport_message_t_0.insert("12730836.010000");
  all_values.push_back(TradeCaptureReport_message_t_0);
  all_compo_names.insert("TradeCaptureReport_message_t");

  { // Hdr
    xml_element Hdr_96{"Hdr"};
    multiset<string> Hdr_96_set;
    Hdr_96.add_attribute("SeqNum", "1076635352"); // 1
    Hdr_96_set.insert("1076635352");
    Hdr_96.add_attribute("SID", "SenderCompID_t_141764422"); // 1
    Hdr_96_set.insert("SenderCompID_t_141764422");
    Hdr_96.add_attribute("TID", "TargetCompID_t_1434117516"); // 1
    Hdr_96_set.insert("TargetCompID_t_1434117516");
    Hdr_96.add_attribute("OBID", "OnBehalfOfCompID_t_867491951"); // 1
    Hdr_96_set.insert("OnBehalfOfCompID_t_867491951");
    Hdr_96.add_attribute("D2ID", "DeliverToCompID_t_1855096113"); // 1
    Hdr_96_set.insert("DeliverToCompID_t_1855096113");
    Hdr_96.add_attribute("SSub", "SenderSubID_t_1363677856"); // 1
    Hdr_96_set.insert("SenderSubID_t_1363677856");
    Hdr_96.add_attribute("SLoc", "SenderLocationID_t_1324029706"); // 1
    Hdr_96_set.insert("SenderLocationID_t_1324029706");
    Hdr_96.add_attribute("TSub", "TargetSubID_t_2015001427"); // 1
    Hdr_96_set.insert("TargetSubID_t_2015001427");
    Hdr_96.add_attribute("TLoc", "TargetLocationID_t_746071166"); // 1
    Hdr_96_set.insert("TargetLocationID_t_746071166");
    Hdr_96.add_attribute("OBSub", "OnBehalfOfSubID_t_975275398"); // 1
    Hdr_96_set.insert("OnBehalfOfSubID_t_975275398");
    Hdr_96.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1737276339"); // 1
    Hdr_96_set.insert("OnBehalfOfLocationID_t_1737276339");
    Hdr_96.add_attribute("D2Sub", "DeliverToSubID_t_2081087387"); // 1
    Hdr_96_set.insert("DeliverToSubID_t_2081087387");
    Hdr_96.add_attribute("D2Loc", "DeliverToLocationID_t_198586070"); // 1
    Hdr_96_set.insert("DeliverToLocationID_t_198586070");
    Hdr_96.add_attribute("PosDup", "N"); // 1
    Hdr_96_set.insert("N");
    Hdr_96.add_attribute("PosRsnd", "Y"); // 1
    Hdr_96_set.insert("Y");
    Hdr_96.add_attribute("Snt", "SendingTime_t_1440317709"); // 1
    Hdr_96_set.insert("SendingTime_t_1440317709");
    Hdr_96.add_attribute("OrigSnt", "OrigSendingTime_t_26331531"); // 1
    Hdr_96_set.insert("OrigSendingTime_t_26331531");
    Hdr_96.add_attribute("MsgEncd", "MessageEncoding_t_138133852"); // 1
    Hdr_96_set.insert("MessageEncoding_t_138133852");
    all_values.push_back(Hdr_96_set);
    all_compo_names.insert("Hdr_96_set");

    {
      xml_element Hop_96{"Hop"};
      multiset<string> Hop_96_set;
      Hop_96.add_attribute("ID", "HopCompID_t_1879652367"); // 2
      Hop_96_set.insert("HopCompID_t_1879652367");
      Hop_96.add_attribute("Ref", "2016139037"); // 2
      Hop_96_set.insert("2016139037");
      Hop_96.add_attribute("Snt", "HopSendingTime_t_1163780224"); // 2
      Hop_96_set.insert("HopSendingTime_t_1163780224");
      all_values.push_back(Hop_96_set);
      all_compo_names.insert("Hop_96_set");

      Hdr_96.add_element(Hop_96);
    }
    elt.add_element(Hdr_96);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_19{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_19_set;
    ApplSeqCtrl_19.add_attribute("ApplID", "ApplID_t_822815278"); // 1
    ApplSeqCtrl_19_set.insert("ApplID_t_822815278");
    ApplSeqCtrl_19.add_attribute("ApplSeqNum", "851655552"); // 1
    ApplSeqCtrl_19_set.insert("851655552");
    ApplSeqCtrl_19.add_attribute("ApplLastSeqNum", "1462745872"); // 1
    ApplSeqCtrl_19_set.insert("1462745872");
    ApplSeqCtrl_19.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_19_set.insert("true");
    all_values.push_back(ApplSeqCtrl_19_set);
    all_compo_names.insert("ApplSeqCtrl_19_set");

    elt.add_element(ApplSeqCtrl_19);
  } // end ApplSeqCtrl
  { // Pty
    xml_element Pty_433{"Pty"};
    multiset<string> Pty_433_set;
    Pty_433.add_attribute("ID", "RootPartyID_t_1298521593"); // 1
    Pty_433_set.insert("RootPartyID_t_1298521593");
    Pty_433.add_attribute("Src", "D"); // 1
    Pty_433_set.insert("D");
    Pty_433.add_attribute("R", "2"); // 1
    Pty_433_set.insert("2");
    all_values.push_back(Pty_433_set);
    all_compo_names.insert("Pty_433_set");

    {
      xml_element Sub_433{"Sub"};
      multiset<string> Sub_433_set;
      Sub_433.add_attribute("ID", "RootPartySubID_t_1752898424"); // 2
      Sub_433_set.insert("RootPartySubID_t_1752898424");
      Sub_433.add_attribute("Typ", "8"); // 2
      Sub_433_set.insert("8");
      all_values.push_back(Sub_433_set);
      all_compo_names.insert("Sub_433_set");

      Pty_433.add_element(Sub_433);
    }
    elt.add_element(Pty_433);
  } // end Pty
  { // Pty
    xml_element Pty_434{"Pty"};
    multiset<string> Pty_434_set;
    Pty_434.add_attribute("ID", "RootPartyID_t_1884274783"); // 1
    Pty_434_set.insert("RootPartyID_t_1884274783");
    Pty_434.add_attribute("Src", "1"); // 1
    Pty_434_set.insert("1");
    Pty_434.add_attribute("R", "9"); // 1
    Pty_434_set.insert("9");
    all_values.push_back(Pty_434_set);
    all_compo_names.insert("Pty_434_set");

    {
      xml_element Sub_434{"Sub"};
      multiset<string> Sub_434_set;
      Sub_434.add_attribute("ID", "RootPartySubID_t_604283086"); // 2
      Sub_434_set.insert("RootPartySubID_t_604283086");
      Sub_434.add_attribute("Typ", "19"); // 2
      Sub_434_set.insert("19");
      all_values.push_back(Sub_434_set);
      all_compo_names.insert("Sub_434_set");

      Pty_434.add_element(Sub_434);
    }
    elt.add_element(Pty_434);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_86{"Instrmt"};
    multiset<string> Instrmt_86_set;
    Instrmt_86.add_attribute("Sym", "Symbol_t_1108450485"); // 1
    Instrmt_86_set.insert("Symbol_t_1108450485");
    Instrmt_86.add_attribute("Sfx", "CD"); // 1
    Instrmt_86_set.insert("CD");
    Instrmt_86.add_attribute("ID", "SecurityID_t_1469793091"); // 1
    Instrmt_86_set.insert("SecurityID_t_1469793091");
    Instrmt_86.add_attribute("Src", "G"); // 1
    Instrmt_86_set.insert("G");
    Instrmt_86.add_attribute("Prod", "8"); // 1
    Instrmt_86_set.insert("8");
    Instrmt_86.add_attribute("ProdCmplx", "ProductComplex_t_1059585782"); // 1
    Instrmt_86_set.insert("ProductComplex_t_1059585782");
    Instrmt_86.add_attribute("SecGrp", "SecurityGroup_t_1788125390"); // 1
    Instrmt_86_set.insert("SecurityGroup_t_1788125390");
    Instrmt_86.add_attribute("CFI", "CFICode_t_954690613"); // 1
    Instrmt_86_set.insert("CFICode_t_954690613");
    Instrmt_86.add_attribute("SecTyp", "TPRN"); // 1
    Instrmt_86_set.insert("TPRN");
    Instrmt_86.add_attribute("SubTyp", "SecuritySubType_t_430771527"); // 1
    Instrmt_86_set.insert("SecuritySubType_t_430771527");
    Instrmt_86.add_attribute("MMY", "247524674"); // 1
    Instrmt_86_set.insert("247524674");
    Instrmt_86.add_attribute("MatDt", "MaturityDate_t_84215926"); // 1
    Instrmt_86_set.insert("MaturityDate_t_84215926");
    Instrmt_86.add_attribute("MatTm", "568905379"); // 1
    Instrmt_86_set.insert("568905379");
    Instrmt_86.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_2127177041"); // 1
    Instrmt_86_set.insert("SettleOnOpenFlag_t_2127177041");
    Instrmt_86.add_attribute("AsgnMeth", "2100354963"); // 1
    Instrmt_86_set.insert("2100354963");
    Instrmt_86.add_attribute("Status", "2"); // 1
    Instrmt_86_set.insert("2");
    Instrmt_86.add_attribute("CpnPmt", "CouponPaymentDate_t_802508671"); // 1
    Instrmt_86_set.insert("CouponPaymentDate_t_802508671");
    Instrmt_86.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_86_set.insert("XR");
    Instrmt_86.add_attribute("Snrty", "SR"); // 1
    Instrmt_86_set.insert("SR");
    Instrmt_86.add_attribute("NotlPctOut", "4621462.110000"); // 1
    Instrmt_86_set.insert("4621462.110000");
    Instrmt_86.add_attribute("OrigNotlPctOut", "13557173.750000"); // 1
    Instrmt_86_set.insert("13557173.750000");
    Instrmt_86.add_attribute("AttchPnt", "1989857.730000"); // 1
    Instrmt_86_set.insert("1989857.730000");
    Instrmt_86.add_attribute("DetchPnt", "17946850.180000"); // 1
    Instrmt_86_set.insert("17946850.180000");
    Instrmt_86.add_attribute("Issued", "IssueDate_t_15873159"); // 1
    Instrmt_86_set.insert("IssueDate_t_15873159");
    Instrmt_86.add_attribute("RepoCollSecTyp", "1951884197"); // 1
    Instrmt_86_set.insert("1951884197");
    Instrmt_86.add_attribute("RepoTrm", "105340130"); // 1
    Instrmt_86_set.insert("105340130");
    Instrmt_86.add_attribute("RepoRt", "19001479.420000"); // 1
    Instrmt_86_set.insert("19001479.420000");
    Instrmt_86.add_attribute("Fctr", "16990633.960000"); // 1
    Instrmt_86_set.insert("16990633.960000");
    Instrmt_86.add_attribute("CrdRtg", "CreditRating_t_1997596406"); // 1
    Instrmt_86_set.insert("CreditRating_t_1997596406");
    Instrmt_86.add_attribute("Rgstry", "InstrRegistry_t_356947381"); // 1
    Instrmt_86_set.insert("InstrRegistry_t_356947381");
    Instrmt_86.add_attribute("IssuCtry", "1153855059"); // 1
    Instrmt_86_set.insert("1153855059");
    Instrmt_86.add_attribute("StPrv", "StateOrProvinceOfIssue_t_958563243"); // 1
    Instrmt_86_set.insert("StateOrProvinceOfIssue_t_958563243");
    Instrmt_86.add_attribute("Lcl", "LocaleOfIssue_t_137776525"); // 1
    Instrmt_86_set.insert("LocaleOfIssue_t_137776525");
    Instrmt_86.add_attribute("Redeem", "RedemptionDate_t_476164502"); // 1
    Instrmt_86_set.insert("RedemptionDate_t_476164502");
    Instrmt_86.add_attribute("StrkPx", "6656012.470000"); // 1
    Instrmt_86_set.insert("6656012.470000");
    Instrmt_86.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_86_set.insert("CAN");
    Instrmt_86.add_attribute("StrkMult", "3062429.890000"); // 1
    Instrmt_86_set.insert("3062429.890000");
    Instrmt_86.add_attribute("StrkValu", "18485716.810000"); // 1
    Instrmt_86_set.insert("18485716.810000");
    Instrmt_86.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_86_set.insert("4");
    Instrmt_86.add_attribute("StrkPxBndryMeth", "3"); // 1
    Instrmt_86_set.insert("3");
    Instrmt_86.add_attribute("StrkPxBndryPrcsn", "20960963.550000"); // 1
    Instrmt_86_set.insert("20960963.550000");
    Instrmt_86.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_86_set.insert("2");
    Instrmt_86.add_attribute("OptAt", "1305919896"); // 1
    Instrmt_86_set.insert("1305919896");
    Instrmt_86.add_attribute("Mult", "20757897.480000"); // 1
    Instrmt_86_set.insert("20757897.480000");
    Instrmt_86.add_attribute("MultTyp", "1"); // 1
    Instrmt_86_set.insert("1");
    Instrmt_86.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_86_set.insert("2");
    Instrmt_86.add_attribute("MinPxIncr", "7308147.710000"); // 1
    Instrmt_86_set.insert("7308147.710000");
    Instrmt_86.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_287765139"); // 1
    Instrmt_86_set.insert("MinPriceIncrementAmount_t_287765139");
    Instrmt_86.add_attribute("UOM", "MMBtu"); // 1
    Instrmt_86_set.insert("MMBtu");
    Instrmt_86.add_attribute("UOMQty", "11929609.830000"); // 1
    Instrmt_86_set.insert("11929609.830000");
    Instrmt_86.add_attribute("PxUOM", "Alw"); // 1
    Instrmt_86_set.insert("Alw");
    Instrmt_86.add_attribute("PxUOMQty", "21380554.520000"); // 1
    Instrmt_86_set.insert("21380554.520000");
    Instrmt_86.add_attribute("SettlMeth", "P"); // 1
    Instrmt_86_set.insert("P");
    Instrmt_86.add_attribute("ExerStyle", "0"); // 1
    Instrmt_86_set.insert("0");
    Instrmt_86.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_86_set.insert("1");
    Instrmt_86.add_attribute("OptPayAmt", "OptPayoutAmount_t_945502483"); // 1
    Instrmt_86_set.insert("OptPayoutAmount_t_945502483");
    Instrmt_86.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_86_set.insert("STD");
    Instrmt_86.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_86_set.insert("EQTY");
    Instrmt_86.add_attribute("ListMeth", "1"); // 1
    Instrmt_86_set.insert("1");
    Instrmt_86.add_attribute("CapPx", "17689673.490000"); // 1
    Instrmt_86_set.insert("17689673.490000");
    Instrmt_86.add_attribute("FlrPx", "5004071.610000"); // 1
    Instrmt_86_set.insert("5004071.610000");
    Instrmt_86.add_attribute("PutCall", "1"); // 1
    Instrmt_86_set.insert("1");
    Instrmt_86.add_attribute("FlexInd", "false"); // 1
    Instrmt_86_set.insert("false");
    Instrmt_86.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_86_set.insert("true");
    Instrmt_86.add_attribute("TmUnit", "Wk"); // 1
    Instrmt_86_set.insert("Wk");
    Instrmt_86.add_attribute("CpnRt", "6531412.950000"); // 1
    Instrmt_86_set.insert("6531412.950000");
    Instrmt_86.add_attribute("Exch", "SecurityExchange_t_364838301"); // 1
    Instrmt_86_set.insert("SecurityExchange_t_364838301");
    Instrmt_86.add_attribute("PosLmt", "578539073"); // 1
    Instrmt_86_set.insert("578539073");
    Instrmt_86.add_attribute("NTPosLmt", "354229328"); // 1
    Instrmt_86_set.insert("354229328");
    Instrmt_86.add_attribute("Issr", "Issuer_t_1958472980"); // 1
    Instrmt_86_set.insert("Issuer_t_1958472980");
    Instrmt_86.add_attribute("EncIssrLen", "1315553590"); // 1
    Instrmt_86_set.insert("1315553590");
    Instrmt_86.add_attribute("EncIssr", "EncodedIssuer_t_302842035"); // 1
    Instrmt_86_set.insert("EncodedIssuer_t_302842035");
    Instrmt_86.add_attribute("Desc", "SecurityDesc_t_1488839938"); // 1
    Instrmt_86_set.insert("SecurityDesc_t_1488839938");
    Instrmt_86.add_attribute("EncSecDescLen", "473989839"); // 1
    Instrmt_86_set.insert("473989839");
    Instrmt_86.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_231148135"); // 1
    Instrmt_86_set.insert("EncodedSecurityDesc_t_231148135");
    Instrmt_86.add_attribute("Pool", "Pool_t_972078210"); // 1
    Instrmt_86_set.insert("Pool_t_972078210");
    Instrmt_86.add_attribute("CSetMo", "1365111691"); // 1
    Instrmt_86_set.insert("1365111691");
    Instrmt_86.add_attribute("CPPgm", "1"); // 1
    Instrmt_86_set.insert("1");
    Instrmt_86.add_attribute("CPRegT", "CPRegType_t_1259843350"); // 1
    Instrmt_86_set.insert("CPRegType_t_1259843350");
    Instrmt_86.add_attribute("Dated", "DatedDate_t_1156697722"); // 1
    Instrmt_86_set.insert("DatedDate_t_1156697722");
    Instrmt_86.add_attribute("IntAcrl", "InterestAccrualDate_t_7440241"); // 1
    Instrmt_86_set.insert("InterestAccrualDate_t_7440241");
    all_values.push_back(Instrmt_86_set);
    all_compo_names.insert("Instrmt_86_set");

    {
      xml_element AID_89{"AID"};
      multiset<string> AID_89_set;
      AID_89.add_attribute("AltID", "SecurityAltID_t_755842217"); // 2
      AID_89_set.insert("SecurityAltID_t_755842217");
      AID_89.add_attribute("AltIDSrc", "L"); // 2
      AID_89_set.insert("L");
      all_values.push_back(AID_89_set);
      all_compo_names.insert("AID_89_set");

      Instrmt_86.add_element(AID_89);
    }
    {
      xml_element SecXML_89{"SecXML"};
      multiset<string> SecXML_89_set;
      SecXML_89.add_attribute("Schema", "SecurityXMLSchema_t_847602594"); // 2
      SecXML_89_set.insert("SecurityXMLSchema_t_847602594");
      all_values.push_back(SecXML_89_set);
      all_compo_names.insert("SecXML_89_set");

      Instrmt_86.add_element(SecXML_89);
    }
    {
      xml_element Evnt_89{"Evnt"};
      multiset<string> Evnt_89_set;
      Evnt_89.add_attribute("EventTyp", "4"); // 2
      Evnt_89_set.insert("4");
      Evnt_89.add_attribute("Dt", "EventDate_t_942241881"); // 2
      Evnt_89_set.insert("EventDate_t_942241881");
      Evnt_89.add_attribute("Tm", "EventTime_t_1793105077"); // 2
      Evnt_89_set.insert("EventTime_t_1793105077");
      Evnt_89.add_attribute("Px", "16797342.110000"); // 2
      Evnt_89_set.insert("16797342.110000");
      Evnt_89.add_attribute("Txt", "EventText_t_288793983"); // 2
      Evnt_89_set.insert("EventText_t_288793983");
      all_values.push_back(Evnt_89_set);
      all_compo_names.insert("Evnt_89_set");

      Instrmt_86.add_element(Evnt_89);
    }
    {
      xml_element Pty_435{"Pty"};
      multiset<string> Pty_435_set;
      Pty_435.add_attribute("ID", "InstrumentPartyID_t_441236671"); // 2
      Pty_435_set.insert("InstrumentPartyID_t_441236671");
      Pty_435.add_attribute("Src", "2"); // 2
      Pty_435_set.insert("2");
      Pty_435.add_attribute("R", "62"); // 2
      Pty_435_set.insert("62");
      all_values.push_back(Pty_435_set);
      all_compo_names.insert("Pty_435_set");

      {
        xml_element Sub_435{"Sub"};
        multiset<string> Sub_435_set;
        Sub_435.add_attribute("ID", "InstrumentPartySubID_t_47931508"); // 3
        Sub_435_set.insert("InstrumentPartySubID_t_47931508");
        Sub_435.add_attribute("Typ", "16"); // 3
        Sub_435_set.insert("16");
        all_values.push_back(Sub_435_set);
        all_compo_names.insert("Sub_435_set");

        Pty_435.add_element(Sub_435);
      }
      Instrmt_86.add_element(Pty_435);
    }
    {
      xml_element CmplxEvnt_86{"CmplxEvnt"};
      multiset<string> CmplxEvnt_86_set;
      CmplxEvnt_86.add_attribute("Typ", "7"); // 2
      CmplxEvnt_86_set.insert("7");
      CmplxEvnt_86.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_320227592"); // 2
      CmplxEvnt_86_set.insert("ComplexOptPayoutAmount_t_320227592");
      CmplxEvnt_86.add_attribute("Px", "17136194.350000"); // 2
      CmplxEvnt_86_set.insert("17136194.350000");
      CmplxEvnt_86.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_86_set.insert("5");
      CmplxEvnt_86.add_attribute("PxBndryPrcsn", "8987666.650000"); // 2
      CmplxEvnt_86_set.insert("8987666.650000");
      CmplxEvnt_86.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_86_set.insert("1");
      CmplxEvnt_86.add_attribute("Cond", "1"); // 2
      CmplxEvnt_86_set.insert("1");
      all_values.push_back(CmplxEvnt_86_set);
      all_compo_names.insert("CmplxEvnt_86_set");

      {
        xml_element EvntDts_86{"EvntDts"};
        multiset<string> EvntDts_86_set;
        EvntDts_86.add_attribute("StartDt", "ComplexEventStartDate_t_66836608"); // 3
        EvntDts_86_set.insert("ComplexEventStartDate_t_66836608");
        EvntDts_86.add_attribute("EndDt", "ComplexEventEndDate_t_223207150"); // 3
        EvntDts_86_set.insert("ComplexEventEndDate_t_223207150");
        all_values.push_back(EvntDts_86_set);
        all_compo_names.insert("EvntDts_86_set");

        {
          xml_element EvntTms_86{"EvntTms"};
          multiset<string> EvntTms_86_set;
          EvntTms_86.add_attribute("StartTm", "1282956732"); // 4
          EvntTms_86_set.insert("1282956732");
          EvntTms_86.add_attribute("EndTm", "540826447"); // 4
          EvntTms_86_set.insert("540826447");
          all_values.push_back(EvntTms_86_set);
          all_compo_names.insert("EvntTms_86_set");

          EvntDts_86.add_element(EvntTms_86);
        }
        CmplxEvnt_86.add_element(EvntDts_86);
      }
      Instrmt_86.add_element(CmplxEvnt_86);
    }
    elt.add_element(Instrmt_86);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_30{"FinDetls"};
    multiset<string> FinDetls_30_set;
    FinDetls_30.add_attribute("AgmtDesc", "AgreementDesc_t_454355285"); // 1
    FinDetls_30_set.insert("AgreementDesc_t_454355285");
    FinDetls_30.add_attribute("AgmtID", "AgreementID_t_107551294"); // 1
    FinDetls_30_set.insert("AgreementID_t_107551294");
    FinDetls_30.add_attribute("AgmtDt", "AgreementDate_t_1905938138"); // 1
    FinDetls_30_set.insert("AgreementDate_t_1905938138");
    FinDetls_30.add_attribute("AgmtCcy", "GBP"); // 1
    FinDetls_30_set.insert("GBP");
    FinDetls_30.add_attribute("TrmTyp", "1"); // 1
    FinDetls_30_set.insert("1");
    FinDetls_30.add_attribute("StartDt", "StartDate_t_1423758433"); // 1
    FinDetls_30_set.insert("StartDate_t_1423758433");
    FinDetls_30.add_attribute("EndDt", "EndDate_t_2123236861"); // 1
    FinDetls_30_set.insert("EndDate_t_2123236861");
    FinDetls_30.add_attribute("DlvryTyp", "3"); // 1
    FinDetls_30_set.insert("3");
    FinDetls_30.add_attribute("MgnRatio", "1238773.790000"); // 1
    FinDetls_30_set.insert("1238773.790000");
    all_values.push_back(FinDetls_30_set);
    all_compo_names.insert("FinDetls_30_set");

    elt.add_element(FinDetls_30);
  } // end FinDetls
  { // Yield
    xml_element Yield_32{"Yield"};
    multiset<string> Yield_32_set;
    Yield_32.add_attribute("Typ", "LONGAVGLIFE"); // 1
    Yield_32_set.insert("LONGAVGLIFE");
    Yield_32.add_attribute("Yld", "8571799.720000"); // 1
    Yield_32_set.insert("8571799.720000");
    Yield_32.add_attribute("CalcDt", "YieldCalcDate_t_1916982457"); // 1
    Yield_32_set.insert("YieldCalcDate_t_1916982457");
    Yield_32.add_attribute("RedDt", "YieldRedemptionDate_t_1923201668"); // 1
    Yield_32_set.insert("YieldRedemptionDate_t_1923201668");
    Yield_32.add_attribute("RedPx", "11459739.550000"); // 1
    Yield_32_set.insert("11459739.550000");
    Yield_32.add_attribute("RedPxTyp", "14"); // 1
    Yield_32_set.insert("14");
    all_values.push_back(Yield_32_set);
    all_compo_names.insert("Yield_32_set");

    elt.add_element(Yield_32);
  } // end Yield
  { // Undly
    xml_element Undly_120{"Undly"};
    multiset<string> Undly_120_set;
    Undly_120.add_attribute("Sym", "UnderlyingSymbol_t_1935175100"); // 1
    Undly_120_set.insert("UnderlyingSymbol_t_1935175100");
    Undly_120.add_attribute("Sfx", "CD"); // 1
    Undly_120_set.insert("CD");
    Undly_120.add_attribute("ID", "UnderlyingSecurityID_t_2137414073"); // 1
    Undly_120_set.insert("UnderlyingSecurityID_t_2137414073");
    Undly_120.add_attribute("Src", "J"); // 1
    Undly_120_set.insert("J");
    Undly_120.add_attribute("Prod", "13"); // 1
    Undly_120_set.insert("13");
    Undly_120.add_attribute("CFI", "UnderlyingCFICode_t_1703549860"); // 1
    Undly_120_set.insert("UnderlyingCFICode_t_1703549860");
    Undly_120.add_attribute("SecTyp", "VRDN"); // 1
    Undly_120_set.insert("VRDN");
    Undly_120.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1477661245"); // 1
    Undly_120_set.insert("UnderlyingSecuritySubType_t_1477661245");
    Undly_120.add_attribute("MMY", "1623914975"); // 1
    Undly_120_set.insert("1623914975");
    Undly_120.add_attribute("Mat", "UnderlyingMaturityDate_t_1330708516"); // 1
    Undly_120_set.insert("UnderlyingMaturityDate_t_1330708516");
    Undly_120.add_attribute("MatTm", "1544497853"); // 1
    Undly_120_set.insert("1544497853");
    Undly_120.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1847122125"); // 1
    Undly_120_set.insert("UnderlyingCouponPaymentDate_t_1847122125");
    Undly_120.add_attribute("RestrctTyp", "FR"); // 1
    Undly_120_set.insert("FR");
    Undly_120.add_attribute("Snrty", "SD"); // 1
    Undly_120_set.insert("SD");
    Undly_120.add_attribute("NotlPctOut", "1539937.620000"); // 1
    Undly_120_set.insert("1539937.620000");
    Undly_120.add_attribute("OrigNotlPctOut", "5737328.940000"); // 1
    Undly_120_set.insert("5737328.940000");
    Undly_120.add_attribute("AttchPnt", "18437787.900000"); // 1
    Undly_120_set.insert("18437787.900000");
    Undly_120.add_attribute("DetchPnt", "15703119.530000"); // 1
    Undly_120_set.insert("15703119.530000");
    Undly_120.add_attribute("Issued", "UnderlyingIssueDate_t_1941127539"); // 1
    Undly_120_set.insert("UnderlyingIssueDate_t_1941127539");
    Undly_120.add_attribute("RepoCollSecTyp", "611447355"); // 1
    Undly_120_set.insert("611447355");
    Undly_120.add_attribute("RepoTrm", "846586738"); // 1
    Undly_120_set.insert("846586738");
    Undly_120.add_attribute("RepoRt", "19168807.520000"); // 1
    Undly_120_set.insert("19168807.520000");
    Undly_120.add_attribute("Fctr", "5263854.460000"); // 1
    Undly_120_set.insert("5263854.460000");
    Undly_120.add_attribute("CrdRtg", "UnderlyingCreditRating_t_970464118"); // 1
    Undly_120_set.insert("UnderlyingCreditRating_t_970464118");
    Undly_120.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_12864561"); // 1
    Undly_120_set.insert("UnderlyingInstrRegistry_t_12864561");
    Undly_120.add_attribute("Ctry", "1383565419"); // 1
    Undly_120_set.insert("1383565419");
    Undly_120.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_739962927"); // 1
    Undly_120_set.insert("UnderlyingStateOrProvinceOfIssue_t_739962927");
    Undly_120.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1936066229"); // 1
    Undly_120_set.insert("UnderlyingLocaleOfIssue_t_1936066229");
    Undly_120.add_attribute("Redeem", "UnderlyingRedemptionDate_t_382055726"); // 1
    Undly_120_set.insert("UnderlyingRedemptionDate_t_382055726");
    Undly_120.add_attribute("StrkPx", "9506984.070000"); // 1
    Undly_120_set.insert("9506984.070000");
    Undly_120.add_attribute("StrkCcy", "GBP"); // 1
    Undly_120_set.insert("GBP");
    Undly_120.add_attribute("OptA", "1209365395"); // 1
    Undly_120_set.insert("1209365395");
    Undly_120.add_attribute("Mult", "8554489.390000"); // 1
    Undly_120_set.insert("8554489.390000");
    Undly_120.add_attribute("MultTyp", "0"); // 1
    Undly_120_set.insert("0");
    Undly_120.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_120_set.insert("0");
    Undly_120.add_attribute("UOM", "oz_tr"); // 1
    Undly_120_set.insert("oz_tr");
    Undly_120.add_attribute("UOMQty", "11123195.130000"); // 1
    Undly_120_set.insert("11123195.130000");
    Undly_120.add_attribute("PxUOM", "tn"); // 1
    Undly_120_set.insert("tn");
    Undly_120.add_attribute("PxUOMQty", "20354301.260000"); // 1
    Undly_120_set.insert("20354301.260000");
    Undly_120.add_attribute("TmUnit", "Yr"); // 1
    Undly_120_set.insert("Yr");
    Undly_120.add_attribute("ExerStyle", "1"); // 1
    Undly_120_set.insert("1");
    Undly_120.add_attribute("CpnRt", "17350686.030000"); // 1
    Undly_120_set.insert("17350686.030000");
    Undly_120.add_attribute("Exch", "UnderlyingSecurityExchange_t_761725981"); // 1
    Undly_120_set.insert("UnderlyingSecurityExchange_t_761725981");
    Undly_120.add_attribute("Issr", "UnderlyingIssuer_t_453292430"); // 1
    Undly_120_set.insert("UnderlyingIssuer_t_453292430");
    Undly_120.add_attribute("EncUndIssrLen", "1889062365"); // 1
    Undly_120_set.insert("1889062365");
    Undly_120.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1335458875"); // 1
    Undly_120_set.insert("EncodedUnderlyingIssuer_t_1335458875");
    Undly_120.add_attribute("Desc", "UnderlyingSecurityDesc_t_149587573"); // 1
    Undly_120_set.insert("UnderlyingSecurityDesc_t_149587573");
    Undly_120.add_attribute("EncUndSecDescLen", "1311890670"); // 1
    Undly_120_set.insert("1311890670");
    Undly_120.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1129102766"); // 1
    Undly_120_set.insert("EncodedUnderlyingSecurityDesc_t_1129102766");
    Undly_120.add_attribute("CPPgm", "UnderlyingCPProgram_t_761034928"); // 1
    Undly_120_set.insert("UnderlyingCPProgram_t_761034928");
    Undly_120.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_10993761"); // 1
    Undly_120_set.insert("UnderlyingCPRegType_t_10993761");
    Undly_120.add_attribute("AllocPct", "8984998.710000"); // 1
    Undly_120_set.insert("8984998.710000");
    Undly_120.add_attribute("Ccy", "EUR"); // 1
    Undly_120_set.insert("EUR");
    Undly_120.add_attribute("Qty", "9113644.320000"); // 1
    Undly_120_set.insert("9113644.320000");
    Undly_120.add_attribute("SettlTyp", "2"); // 1
    Undly_120_set.insert("2");
    Undly_120.add_attribute("CashAmt", "UnderlyingCashAmount_t_1721420806"); // 1
    Undly_120_set.insert("UnderlyingCashAmount_t_1721420806");
    Undly_120.add_attribute("CashTyp", "DIFF"); // 1
    Undly_120_set.insert("DIFF");
    Undly_120.add_attribute("Px", "9055578.720000"); // 1
    Undly_120_set.insert("9055578.720000");
    Undly_120.add_attribute("DirtPx", "5246355.650000"); // 1
    Undly_120_set.insert("5246355.650000");
    Undly_120.add_attribute("EndPx", "15654655.270000"); // 1
    Undly_120_set.insert("15654655.270000");
    Undly_120.add_attribute("StartVal", "UnderlyingStartValue_t_1075305050"); // 1
    Undly_120_set.insert("UnderlyingStartValue_t_1075305050");
    Undly_120.add_attribute("CurVal", "UnderlyingCurrentValue_t_1734000960"); // 1
    Undly_120_set.insert("UnderlyingCurrentValue_t_1734000960");
    Undly_120.add_attribute("EndVal", "UnderlyingEndValue_t_273430818"); // 1
    Undly_120_set.insert("UnderlyingEndValue_t_273430818");
    Undly_120.add_attribute("AdjQty", "6510328.410000"); // 1
    Undly_120_set.insert("6510328.410000");
    Undly_120.add_attribute("FxRate", "13747772.870000"); // 1
    Undly_120_set.insert("13747772.870000");
    Undly_120.add_attribute("FxRateCalc", "D"); // 1
    Undly_120_set.insert("D");
    Undly_120.add_attribute("CapValu", "UnderlyingCapValue_t_1763352354"); // 1
    Undly_120_set.insert("UnderlyingCapValue_t_1763352354");
    Undly_120.add_attribute("SetMeth", "UnderlyingSettlMethod_t_345731211"); // 1
    Undly_120_set.insert("UnderlyingSettlMethod_t_345731211");
    Undly_120.add_attribute("PutCall", "572892447"); // 1
    Undly_120_set.insert("572892447");
    all_values.push_back(Undly_120_set);
    all_compo_names.insert("Undly_120_set");

    {
      xml_element UndAID_120{"UndAID"};
      multiset<string> UndAID_120_set;
      UndAID_120.add_attribute("AltID", "UnderlyingSecurityAltID_t_2058896735"); // 2
      UndAID_120_set.insert("UnderlyingSecurityAltID_t_2058896735");
      UndAID_120.add_attribute("AltIDSrc", "8"); // 2
      UndAID_120_set.insert("8");
      all_values.push_back(UndAID_120_set);
      all_compo_names.insert("UndAID_120_set");

      Undly_120.add_element(UndAID_120);
    }
    {
      xml_element Stip_191{"Stip"};
      multiset<string> Stip_191_set;
      Stip_191.add_attribute("Typ", "PXSOURCE"); // 2
      Stip_191_set.insert("PXSOURCE");
      Stip_191.add_attribute("Val", "UnderlyingStipValue_t_673139068"); // 2
      Stip_191_set.insert("UnderlyingStipValue_t_673139068");
      all_values.push_back(Stip_191_set);
      all_compo_names.insert("Stip_191_set");

      Undly_120.add_element(Stip_191);
    }
    {
      xml_element Pty_436{"Pty"};
      multiset<string> Pty_436_set;
      Pty_436.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1314475420"); // 2
      Pty_436_set.insert("UnderlyingInstrumentPartyID_t_1314475420");
      Pty_436.add_attribute("Src", "8"); // 2
      Pty_436_set.insert("8");
      Pty_436.add_attribute("R", "32"); // 2
      Pty_436_set.insert("32");
      all_values.push_back(Pty_436_set);
      all_compo_names.insert("Pty_436_set");

      {
        xml_element Sub_436{"Sub"};
        multiset<string> Sub_436_set;
        Sub_436.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1464062993"); // 3
        Sub_436_set.insert("UnderlyingInstrumentPartySubID_t_1464062993");
        Sub_436.add_attribute("Typ", "2"); // 3
        Sub_436_set.insert("2");
        all_values.push_back(Sub_436_set);
        all_compo_names.insert("Sub_436_set");

        Pty_436.add_element(Sub_436);
      }
      Undly_120.add_element(Pty_436);
    }
    elt.add_element(Undly_120);
  } // end Undly
  { // Undly
    xml_element Undly_121{"Undly"};
    multiset<string> Undly_121_set;
    Undly_121.add_attribute("Sym", "UnderlyingSymbol_t_990217062"); // 1
    Undly_121_set.insert("UnderlyingSymbol_t_990217062");
    Undly_121.add_attribute("Sfx", "WI"); // 1
    Undly_121_set.insert("WI");
    Undly_121.add_attribute("ID", "UnderlyingSecurityID_t_1224940550"); // 1
    Undly_121_set.insert("UnderlyingSecurityID_t_1224940550");
    Undly_121.add_attribute("Src", "G"); // 1
    Undly_121_set.insert("G");
    Undly_121.add_attribute("Prod", "11"); // 1
    Undly_121_set.insert("11");
    Undly_121.add_attribute("CFI", "UnderlyingCFICode_t_58914781"); // 1
    Undly_121_set.insert("UnderlyingCFICode_t_58914781");
    Undly_121.add_attribute("SecTyp", "COFP"); // 1
    Undly_121_set.insert("COFP");
    Undly_121.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1888536793"); // 1
    Undly_121_set.insert("UnderlyingSecuritySubType_t_1888536793");
    Undly_121.add_attribute("MMY", "1780335587"); // 1
    Undly_121_set.insert("1780335587");
    Undly_121.add_attribute("Mat", "UnderlyingMaturityDate_t_1352544730"); // 1
    Undly_121_set.insert("UnderlyingMaturityDate_t_1352544730");
    Undly_121.add_attribute("MatTm", "646611017"); // 1
    Undly_121_set.insert("646611017");
    Undly_121.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_157487504"); // 1
    Undly_121_set.insert("UnderlyingCouponPaymentDate_t_157487504");
    Undly_121.add_attribute("RestrctTyp", "MR"); // 1
    Undly_121_set.insert("MR");
    Undly_121.add_attribute("Snrty", "SR"); // 1
    Undly_121_set.insert("SR");
    Undly_121.add_attribute("NotlPctOut", "18914884.640000"); // 1
    Undly_121_set.insert("18914884.640000");
    Undly_121.add_attribute("OrigNotlPctOut", "10439574.270000"); // 1
    Undly_121_set.insert("10439574.270000");
    Undly_121.add_attribute("AttchPnt", "2254652.610000"); // 1
    Undly_121_set.insert("2254652.610000");
    Undly_121.add_attribute("DetchPnt", "11187821.030000"); // 1
    Undly_121_set.insert("11187821.030000");
    Undly_121.add_attribute("Issued", "UnderlyingIssueDate_t_1728903396"); // 1
    Undly_121_set.insert("UnderlyingIssueDate_t_1728903396");
    Undly_121.add_attribute("RepoCollSecTyp", "1988817615"); // 1
    Undly_121_set.insert("1988817615");
    Undly_121.add_attribute("RepoTrm", "1464513315"); // 1
    Undly_121_set.insert("1464513315");
    Undly_121.add_attribute("RepoRt", "1543121.950000"); // 1
    Undly_121_set.insert("1543121.950000");
    Undly_121.add_attribute("Fctr", "19002307.030000"); // 1
    Undly_121_set.insert("19002307.030000");
    Undly_121.add_attribute("CrdRtg", "UnderlyingCreditRating_t_178212656"); // 1
    Undly_121_set.insert("UnderlyingCreditRating_t_178212656");
    Undly_121.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_314789597"); // 1
    Undly_121_set.insert("UnderlyingInstrRegistry_t_314789597");
    Undly_121.add_attribute("Ctry", "425886123"); // 1
    Undly_121_set.insert("425886123");
    Undly_121.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1492688076"); // 1
    Undly_121_set.insert("UnderlyingStateOrProvinceOfIssue_t_1492688076");
    Undly_121.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_216845716"); // 1
    Undly_121_set.insert("UnderlyingLocaleOfIssue_t_216845716");
    Undly_121.add_attribute("Redeem", "UnderlyingRedemptionDate_t_287000419"); // 1
    Undly_121_set.insert("UnderlyingRedemptionDate_t_287000419");
    Undly_121.add_attribute("StrkPx", "8092674.210000"); // 1
    Undly_121_set.insert("8092674.210000");
    Undly_121.add_attribute("StrkCcy", "GBP"); // 1
    Undly_121_set.insert("GBP");
    Undly_121.add_attribute("OptA", "886881694"); // 1
    Undly_121_set.insert("886881694");
    Undly_121.add_attribute("Mult", "5082494.080000"); // 1
    Undly_121_set.insert("5082494.080000");
    Undly_121.add_attribute("MultTyp", "0"); // 1
    Undly_121_set.insert("0");
    Undly_121.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_121_set.insert("4");
    Undly_121.add_attribute("UOM", "oz_tr"); // 1
    Undly_121_set.insert("oz_tr");
    Undly_121.add_attribute("UOMQty", "16710484.850000"); // 1
    Undly_121_set.insert("16710484.850000");
    Undly_121.add_attribute("PxUOM", "Bbl"); // 1
    Undly_121_set.insert("Bbl");
    Undly_121.add_attribute("PxUOMQty", "2000161.290000"); // 1
    Undly_121_set.insert("2000161.290000");
    Undly_121.add_attribute("TmUnit", "Wk"); // 1
    Undly_121_set.insert("Wk");
    Undly_121.add_attribute("ExerStyle", "1"); // 1
    Undly_121_set.insert("1");
    Undly_121.add_attribute("CpnRt", "3575036.340000"); // 1
    Undly_121_set.insert("3575036.340000");
    Undly_121.add_attribute("Exch", "UnderlyingSecurityExchange_t_1646636177"); // 1
    Undly_121_set.insert("UnderlyingSecurityExchange_t_1646636177");
    Undly_121.add_attribute("Issr", "UnderlyingIssuer_t_66529275"); // 1
    Undly_121_set.insert("UnderlyingIssuer_t_66529275");
    Undly_121.add_attribute("EncUndIssrLen", "101508450"); // 1
    Undly_121_set.insert("101508450");
    Undly_121.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_543109956"); // 1
    Undly_121_set.insert("EncodedUnderlyingIssuer_t_543109956");
    Undly_121.add_attribute("Desc", "UnderlyingSecurityDesc_t_291994536"); // 1
    Undly_121_set.insert("UnderlyingSecurityDesc_t_291994536");
    Undly_121.add_attribute("EncUndSecDescLen", "1220290554"); // 1
    Undly_121_set.insert("1220290554");
    Undly_121.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_124529705"); // 1
    Undly_121_set.insert("EncodedUnderlyingSecurityDesc_t_124529705");
    Undly_121.add_attribute("CPPgm", "UnderlyingCPProgram_t_133328504"); // 1
    Undly_121_set.insert("UnderlyingCPProgram_t_133328504");
    Undly_121.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_537320221"); // 1
    Undly_121_set.insert("UnderlyingCPRegType_t_537320221");
    Undly_121.add_attribute("AllocPct", "2788419.000000"); // 1
    Undly_121_set.insert("2788419.000000");
    Undly_121.add_attribute("Ccy", "CHF"); // 1
    Undly_121_set.insert("CHF");
    Undly_121.add_attribute("Qty", "5936314.980000"); // 1
    Undly_121_set.insert("5936314.980000");
    Undly_121.add_attribute("SettlTyp", "4"); // 1
    Undly_121_set.insert("4");
    Undly_121.add_attribute("CashAmt", "UnderlyingCashAmount_t_60737306"); // 1
    Undly_121_set.insert("UnderlyingCashAmount_t_60737306");
    Undly_121.add_attribute("CashTyp", "FIXED"); // 1
    Undly_121_set.insert("FIXED");
    Undly_121.add_attribute("Px", "5989621.020000"); // 1
    Undly_121_set.insert("5989621.020000");
    Undly_121.add_attribute("DirtPx", "8700047.270000"); // 1
    Undly_121_set.insert("8700047.270000");
    Undly_121.add_attribute("EndPx", "937860.720000"); // 1
    Undly_121_set.insert("937860.720000");
    Undly_121.add_attribute("StartVal", "UnderlyingStartValue_t_1876179584"); // 1
    Undly_121_set.insert("UnderlyingStartValue_t_1876179584");
    Undly_121.add_attribute("CurVal", "UnderlyingCurrentValue_t_1756886422"); // 1
    Undly_121_set.insert("UnderlyingCurrentValue_t_1756886422");
    Undly_121.add_attribute("EndVal", "UnderlyingEndValue_t_602035481"); // 1
    Undly_121_set.insert("UnderlyingEndValue_t_602035481");
    Undly_121.add_attribute("AdjQty", "7471467.030000"); // 1
    Undly_121_set.insert("7471467.030000");
    Undly_121.add_attribute("FxRate", "18613191.160000"); // 1
    Undly_121_set.insert("18613191.160000");
    Undly_121.add_attribute("FxRateCalc", "D"); // 1
    Undly_121_set.insert("D");
    Undly_121.add_attribute("CapValu", "UnderlyingCapValue_t_270711540"); // 1
    Undly_121_set.insert("UnderlyingCapValue_t_270711540");
    Undly_121.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1706804955"); // 1
    Undly_121_set.insert("UnderlyingSettlMethod_t_1706804955");
    Undly_121.add_attribute("PutCall", "1369215800"); // 1
    Undly_121_set.insert("1369215800");
    all_values.push_back(Undly_121_set);
    all_compo_names.insert("Undly_121_set");

    {
      xml_element UndAID_121{"UndAID"};
      multiset<string> UndAID_121_set;
      UndAID_121.add_attribute("AltID", "UnderlyingSecurityAltID_t_1146821108"); // 2
      UndAID_121_set.insert("UnderlyingSecurityAltID_t_1146821108");
      UndAID_121.add_attribute("AltIDSrc", "6"); // 2
      UndAID_121_set.insert("6");
      all_values.push_back(UndAID_121_set);
      all_compo_names.insert("UndAID_121_set");

      Undly_121.add_element(UndAID_121);
    }
    {
      xml_element Stip_192{"Stip"};
      multiset<string> Stip_192_set;
      Stip_192.add_attribute("Typ", "ORDRINCR"); // 2
      Stip_192_set.insert("ORDRINCR");
      Stip_192.add_attribute("Val", "UnderlyingStipValue_t_645973637"); // 2
      Stip_192_set.insert("UnderlyingStipValue_t_645973637");
      all_values.push_back(Stip_192_set);
      all_compo_names.insert("Stip_192_set");

      Undly_121.add_element(Stip_192);
    }
    {
      xml_element Pty_437{"Pty"};
      multiset<string> Pty_437_set;
      Pty_437.add_attribute("ID", "UnderlyingInstrumentPartyID_t_117947438"); // 2
      Pty_437_set.insert("UnderlyingInstrumentPartyID_t_117947438");
      Pty_437.add_attribute("Src", "G"); // 2
      Pty_437_set.insert("G");
      Pty_437.add_attribute("R", "14"); // 2
      Pty_437_set.insert("14");
      all_values.push_back(Pty_437_set);
      all_compo_names.insert("Pty_437_set");

      {
        xml_element Sub_437{"Sub"};
        multiset<string> Sub_437_set;
        Sub_437.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_409941975"); // 3
        Sub_437_set.insert("UnderlyingInstrumentPartySubID_t_409941975");
        Sub_437.add_attribute("Typ", "3"); // 3
        Sub_437_set.insert("3");
        all_values.push_back(Sub_437_set);
        all_compo_names.insert("Sub_437_set");

        Pty_437.add_element(Sub_437);
      }
      Undly_121.add_element(Pty_437);
    }
    elt.add_element(Undly_121);
  } // end Undly
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_37{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_37_set;
    SprdBnchmkCurve_37.add_attribute("Spread", "13136132.980000"); // 1
    SprdBnchmkCurve_37_set.insert("13136132.980000");
    SprdBnchmkCurve_37.add_attribute("Ccy", "GBP"); // 1
    SprdBnchmkCurve_37_set.insert("GBP");
    SprdBnchmkCurve_37.add_attribute("Name", "Treasury"); // 1
    SprdBnchmkCurve_37_set.insert("Treasury");
    SprdBnchmkCurve_37.add_attribute("Point", "BenchmarkCurvePoint_t_429346038"); // 1
    SprdBnchmkCurve_37_set.insert("BenchmarkCurvePoint_t_429346038");
    SprdBnchmkCurve_37.add_attribute("Px", "64042.410000"); // 1
    SprdBnchmkCurve_37_set.insert("64042.410000");
    SprdBnchmkCurve_37.add_attribute("PxTyp", "17"); // 1
    SprdBnchmkCurve_37_set.insert("17");
    SprdBnchmkCurve_37.add_attribute("SecID", "BenchmarkSecurityID_t_741307720"); // 1
    SprdBnchmkCurve_37_set.insert("BenchmarkSecurityID_t_741307720");
    SprdBnchmkCurve_37.add_attribute("SecIDSrc", "C"); // 1
    SprdBnchmkCurve_37_set.insert("C");
    all_values.push_back(SprdBnchmkCurve_37_set);
    all_compo_names.insert("SprdBnchmkCurve_37_set");

    elt.add_element(SprdBnchmkCurve_37);
  } // end SprdBnchmkCurve
  { // Amt
    xml_element Amt_16{"Amt"};
    multiset<string> Amt_16_set;
    Amt_16.add_attribute("Typ", "ACPN"); // 1
    Amt_16_set.insert("ACPN");
    Amt_16.add_attribute("Amt", "PosAmt_t_937146275"); // 1
    Amt_16_set.insert("PosAmt_t_937146275");
    Amt_16.add_attribute("Ccy", "PositionCurrency_t_942866336"); // 1
    Amt_16_set.insert("PositionCurrency_t_942866336");
    all_values.push_back(Amt_16_set);
    all_compo_names.insert("Amt_16_set");

    elt.add_element(Amt_16);
  } // end Amt
  { // Amt
    xml_element Amt_17{"Amt"};
    multiset<string> Amt_17_set;
    Amt_17.add_attribute("Typ", "ACPN"); // 1
    Amt_17_set.insert("ACPN");
    Amt_17.add_attribute("Amt", "PosAmt_t_546549049"); // 1
    Amt_17_set.insert("PosAmt_t_546549049");
    Amt_17.add_attribute("Ccy", "PositionCurrency_t_1544901817"); // 1
    Amt_17_set.insert("PositionCurrency_t_1544901817");
    all_values.push_back(Amt_17_set);
    all_compo_names.insert("Amt_17_set");

    elt.add_element(Amt_17);
  } // end Amt
  { // TrdLeg
    xml_element TrdLeg_0{"TrdLeg"};
    multiset<string> TrdLeg_0_set;
    TrdLeg_0.add_attribute("Qty", "2603845.170000"); // 1
    TrdLeg_0_set.insert("2603845.170000");
    TrdLeg_0.add_attribute("SwapTyp", "1"); // 1
    TrdLeg_0_set.insert("1");
    TrdLeg_0.add_attribute("RptID", "LegReportID_t_2086824002"); // 1
    TrdLeg_0_set.insert("LegReportID_t_2086824002");
    TrdLeg_0.add_attribute("LegNo", "1967189472"); // 1
    TrdLeg_0_set.insert("1967189472");
    TrdLeg_0.add_attribute("PosEfct", "C"); // 1
    TrdLeg_0_set.insert("C");
    TrdLeg_0.add_attribute("Cover", "0"); // 1
    TrdLeg_0_set.insert("0");
    TrdLeg_0.add_attribute("RefID", "LegRefID_t_2018607635"); // 1
    TrdLeg_0_set.insert("LegRefID_t_2018607635");
    TrdLeg_0.add_attribute("SettlTyp", "7"); // 1
    TrdLeg_0_set.insert("7");
    TrdLeg_0.add_attribute("SettlDt", "LegSettlDate_t_1732135099"); // 1
    TrdLeg_0_set.insert("LegSettlDate_t_1732135099");
    TrdLeg_0.add_attribute("LastPx", "21365550.730000"); // 1
    TrdLeg_0_set.insert("21365550.730000");
    TrdLeg_0.add_attribute("SettlCcy", "CAN"); // 1
    TrdLeg_0_set.insert("CAN");
    TrdLeg_0.add_attribute("LegLastFwdPnts", "3990134.000000"); // 1
    TrdLeg_0_set.insert("3990134.000000");
    TrdLeg_0.add_attribute("LegCalcCcyLastQty", "20968484.550000"); // 1
    TrdLeg_0_set.insert("20968484.550000");
    TrdLeg_0.add_attribute("LegGrossTrdAmt", "LegGrossTradeAmt_t_2087348343"); // 1
    TrdLeg_0_set.insert("LegGrossTradeAmt_t_2087348343");
    TrdLeg_0.add_attribute("LegVolatility", "9422838.790000"); // 1
    TrdLeg_0_set.insert("9422838.790000");
    TrdLeg_0.add_attribute("LegDividendYield", "13877198.190000"); // 1
    TrdLeg_0_set.insert("13877198.190000");
    TrdLeg_0.add_attribute("LegCurrencyRatio", "15323198.940000"); // 1
    TrdLeg_0_set.insert("15323198.940000");
    TrdLeg_0.add_attribute("LegExecInst", "G"); // 1
    TrdLeg_0_set.insert("G");
    TrdLeg_0.add_attribute("LastQty", "13941240.600000"); // 1
    TrdLeg_0_set.insert("13941240.600000");
    all_values.push_back(TrdLeg_0_set);
    all_compo_names.insert("TrdLeg_0_set");

    {
      xml_element Leg_101{"Leg"};
      multiset<string> Leg_101_set;
      Leg_101.add_attribute("Sym", "LegSymbol_t_1570922943"); // 2
      Leg_101_set.insert("LegSymbol_t_1570922943");
      Leg_101.add_attribute("Sfx", "CD"); // 2
      Leg_101_set.insert("CD");
      Leg_101.add_attribute("ID", "LegSecurityID_t_1461265608"); // 2
      Leg_101_set.insert("LegSecurityID_t_1461265608");
      Leg_101.add_attribute("Src", "G"); // 2
      Leg_101_set.insert("G");
      Leg_101.add_attribute("Prod", "12"); // 2
      Leg_101_set.insert("12");
      Leg_101.add_attribute("CFI", "LegCFICode_t_250928235"); // 2
      Leg_101_set.insert("LegCFICode_t_250928235");
      Leg_101.add_attribute("SecTyp", "PZFJ"); // 2
      Leg_101_set.insert("PZFJ");
      Leg_101.add_attribute("SecSubTyp", "LegSecuritySubType_t_227205923"); // 2
      Leg_101_set.insert("LegSecuritySubType_t_227205923");
      Leg_101.add_attribute("MMY", "797477284"); // 2
      Leg_101_set.insert("797477284");
      Leg_101.add_attribute("Mat", "LegMaturityDate_t_612804064"); // 2
      Leg_101_set.insert("LegMaturityDate_t_612804064");
      Leg_101.add_attribute("MatTm", "2043318385"); // 2
      Leg_101_set.insert("2043318385");
      Leg_101.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1057861801"); // 2
      Leg_101_set.insert("LegCouponPaymentDate_t_1057861801");
      Leg_101.add_attribute("Issued", "LegIssueDate_t_1179421904"); // 2
      Leg_101_set.insert("LegIssueDate_t_1179421904");
      Leg_101.add_attribute("RepoCollSecTyp", "1982658739"); // 2
      Leg_101_set.insert("1982658739");
      Leg_101.add_attribute("RepoTrm", "877567625"); // 2
      Leg_101_set.insert("877567625");
      Leg_101.add_attribute("RepoRt", "9677718.960000"); // 2
      Leg_101_set.insert("9677718.960000");
      Leg_101.add_attribute("Fctr", "9213365.540000"); // 2
      Leg_101_set.insert("9213365.540000");
      Leg_101.add_attribute("CrdRtg", "LegCreditRating_t_748691612"); // 2
      Leg_101_set.insert("LegCreditRating_t_748691612");
      Leg_101.add_attribute("Rgstry", "LegInstrRegistry_t_335357675"); // 2
      Leg_101_set.insert("LegInstrRegistry_t_335357675");
      Leg_101.add_attribute("Ctry", "505988005"); // 2
      Leg_101_set.insert("505988005");
      Leg_101.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_737763037"); // 2
      Leg_101_set.insert("LegStateOrProvinceOfIssue_t_737763037");
      Leg_101.add_attribute("Lcl", "LegLocaleOfIssue_t_1531171339"); // 2
      Leg_101_set.insert("LegLocaleOfIssue_t_1531171339");
      Leg_101.add_attribute("Redeem", "LegRedemptionDate_t_1279723050"); // 2
      Leg_101_set.insert("LegRedemptionDate_t_1279723050");
      Leg_101.add_attribute("Strk", "11367764.380000"); // 2
      Leg_101_set.insert("11367764.380000");
      Leg_101.add_attribute("StrkCcy", "GBP"); // 2
      Leg_101_set.insert("GBP");
      Leg_101.add_attribute("OptA", "2079060317"); // 2
      Leg_101_set.insert("2079060317");
      Leg_101.add_attribute("Cmult", "7207723.170000"); // 2
      Leg_101_set.insert("7207723.170000");
      Leg_101.add_attribute("MultTyp", "0"); // 2
      Leg_101_set.insert("0");
      Leg_101.add_attribute("FlowSchedTyp", "2"); // 2
      Leg_101_set.insert("2");
      Leg_101.add_attribute("UOM", "Bcf"); // 2
      Leg_101_set.insert("Bcf");
      Leg_101.add_attribute("UOMQty", "278632.880000"); // 2
      Leg_101_set.insert("278632.880000");
      Leg_101.add_attribute("PxUOM", "Bbl"); // 2
      Leg_101_set.insert("Bbl");
      Leg_101.add_attribute("PxUOMQty", "14286783.380000"); // 2
      Leg_101_set.insert("14286783.380000");
      Leg_101.add_attribute("TmUnit", "H"); // 2
      Leg_101_set.insert("H");
      Leg_101.add_attribute("ExerStyle", "0"); // 2
      Leg_101_set.insert("0");
      Leg_101.add_attribute("CpnRt", "16796065.730000"); // 2
      Leg_101_set.insert("16796065.730000");
      Leg_101.add_attribute("Exch", "LegSecurityExchange_t_1515768742"); // 2
      Leg_101_set.insert("LegSecurityExchange_t_1515768742");
      Leg_101.add_attribute("Issr", "LegIssuer_t_654106664"); // 2
      Leg_101_set.insert("LegIssuer_t_654106664");
      Leg_101.add_attribute("EncLegIssrLen", "329600209"); // 2
      Leg_101_set.insert("329600209");
      Leg_101.add_attribute("EncLegIssr", "EncodedLegIssuer_t_2128572806"); // 2
      Leg_101_set.insert("EncodedLegIssuer_t_2128572806");
      Leg_101.add_attribute("Desc", "LegSecurityDesc_t_549941401"); // 2
      Leg_101_set.insert("LegSecurityDesc_t_549941401");
      Leg_101.add_attribute("EncLegSecDescLen", "1387462010"); // 2
      Leg_101_set.insert("1387462010");
      Leg_101.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1160511062"); // 2
      Leg_101_set.insert("EncodedLegSecurityDesc_t_1160511062");
      Leg_101.add_attribute("RatioQty", "3851164.930000"); // 2
      Leg_101_set.insert("3851164.930000");
      Leg_101.add_attribute("Side", "4"); // 2
      Leg_101_set.insert("4");
      Leg_101.add_attribute("Ccy", "CHF"); // 2
      Leg_101_set.insert("CHF");
      Leg_101.add_attribute("Pool", "LegPool_t_866237599"); // 2
      Leg_101_set.insert("LegPool_t_866237599");
      Leg_101.add_attribute("Dated", "LegDatedDate_t_316156986"); // 2
      Leg_101_set.insert("LegDatedDate_t_316156986");
      Leg_101.add_attribute("CSetMo", "1812441052"); // 2
      Leg_101_set.insert("1812441052");
      Leg_101.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1604000636"); // 2
      Leg_101_set.insert("LegInterestAccrualDate_t_1604000636");
      Leg_101.add_attribute("PutCall", "1847328325"); // 2
      Leg_101_set.insert("1847328325");
      Leg_101.add_attribute("LegOptionRatio", "9446804.550000"); // 2
      Leg_101_set.insert("9446804.550000");
      Leg_101.add_attribute("Px", "5932934.260000"); // 2
      Leg_101_set.insert("5932934.260000");
      all_values.push_back(Leg_101_set);
      all_compo_names.insert("Leg_101_set");

      {
        xml_element LegAID_96{"LegAID"};
        multiset<string> LegAID_96_set;
        LegAID_96.add_attribute("SecAltID", "LegSecurityAltID_t_1180380824"); // 3
        LegAID_96_set.insert("LegSecurityAltID_t_1180380824");
        LegAID_96.add_attribute("SecAltIDSrc", "6"); // 3
        LegAID_96_set.insert("6");
        all_values.push_back(LegAID_96_set);
        all_compo_names.insert("LegAID_96_set");

        Leg_101.add_element(LegAID_96);
      }
      TrdLeg_0.add_element(Leg_101);
    }
    {
      xml_element Stip_193{"Stip"};
      multiset<string> Stip_193_set;
      Stip_193.add_attribute("StipTyp", "ISSUER"); // 2
      Stip_193_set.insert("ISSUER");
      Stip_193.add_attribute("StipVal", "LegStipulationValue_t_1901153141"); // 2
      Stip_193_set.insert("LegStipulationValue_t_1901153141");
      all_values.push_back(Stip_193_set);
      all_compo_names.insert("Stip_193_set");

      TrdLeg_0.add_element(Stip_193);
    }
    {
      xml_element Pty_438{"Pty"};
      multiset<string> Pty_438_set;
      Pty_438.add_attribute("ID", "NestedPartyID_t_621208545"); // 2
      Pty_438_set.insert("NestedPartyID_t_621208545");
      Pty_438.add_attribute("Src", "E"); // 2
      Pty_438_set.insert("E");
      Pty_438.add_attribute("R", "69"); // 2
      Pty_438_set.insert("69");
      all_values.push_back(Pty_438_set);
      all_compo_names.insert("Pty_438_set");

      {
        xml_element Sub_438{"Sub"};
        multiset<string> Sub_438_set;
        Sub_438.add_attribute("ID", "NestedPartySubID_t_649071833"); // 3
        Sub_438_set.insert("NestedPartySubID_t_649071833");
        Sub_438.add_attribute("Typ", "33"); // 3
        Sub_438_set.insert("33");
        all_values.push_back(Sub_438_set);
        all_compo_names.insert("Sub_438_set");

        Pty_438.add_element(Sub_438);
      }
      TrdLeg_0.add_element(Pty_438);
    }
    {
      xml_element TradeCapLegUndlyGrp_0{"TradeCapLegUndlyGrp"};
      {
        xml_element Instrmt_87{"Instrmt"};
        multiset<string> Instrmt_87_set;
        Instrmt_87.add_attribute("Sym", "UnderlyingLegSymbol_t_1149760561"); // 3
        Instrmt_87_set.insert("UnderlyingLegSymbol_t_1149760561");
        Instrmt_87.add_attribute("Sfx", "UnderlyingLegSymbolSfx_t_949454680"); // 3
        Instrmt_87_set.insert("UnderlyingLegSymbolSfx_t_949454680");
        Instrmt_87.add_attribute("ID", "UnderlyingLegSecurityID_t_1376154353"); // 3
        Instrmt_87_set.insert("UnderlyingLegSecurityID_t_1376154353");
        Instrmt_87.add_attribute("Src", "UnderlyingLegSecurityIDSource_t_681883486"); // 3
        Instrmt_87_set.insert("UnderlyingLegSecurityIDSource_t_681883486");
        Instrmt_87.add_attribute("CFI", "UnderlyingLegCFICode_t_317739774"); // 3
        Instrmt_87_set.insert("UnderlyingLegCFICode_t_317739774");
        Instrmt_87.add_attribute("SecType", "UnderlyingLegSecurityType_t_2030261018"); // 3
        Instrmt_87_set.insert("UnderlyingLegSecurityType_t_2030261018");
        Instrmt_87.add_attribute("SubType", "UnderlyingLegSecuritySubType_t_1011483695"); // 3
        Instrmt_87_set.insert("UnderlyingLegSecuritySubType_t_1011483695");
        Instrmt_87.add_attribute("MMY", "298828932"); // 3
        Instrmt_87_set.insert("298828932");
        Instrmt_87.add_attribute("MatDt", "UnderlyingLegMaturityDate_t_432718771"); // 3
        Instrmt_87_set.insert("UnderlyingLegMaturityDate_t_432718771");
        Instrmt_87.add_attribute("MatTm", "251462057"); // 3
        Instrmt_87_set.insert("251462057");
        Instrmt_87.add_attribute("StrkPx", "14593399.940000"); // 3
        Instrmt_87_set.insert("14593399.940000");
        Instrmt_87.add_attribute("OptAt", "817835264"); // 3
        Instrmt_87_set.insert("817835264");
        Instrmt_87.add_attribute("PutCall", "369008044"); // 3
        Instrmt_87_set.insert("369008044");
        Instrmt_87.add_attribute("Exch", "UnderlyingLegSecurityExchange_t_1440139305"); // 3
        Instrmt_87_set.insert("UnderlyingLegSecurityExchange_t_1440139305");
        Instrmt_87.add_attribute("Desc", "UnderlyingLegSecurityDesc_t_2124288311"); // 3
        Instrmt_87_set.insert("UnderlyingLegSecurityDesc_t_2124288311");
        all_values.push_back(Instrmt_87_set);
        all_compo_names.insert("Instrmt_87_set");

        {
          xml_element AID_90{"AID"};
          multiset<string> AID_90_set;
          AID_90.add_attribute("AltID", "UnderlyingLegSecurityAltID_t_1235245643"); // 4
          AID_90_set.insert("UnderlyingLegSecurityAltID_t_1235245643");
          AID_90.add_attribute("AltIDSrc", "UnderlyingLegSecurityAltIDSource_t_1756296291"); // 4
          AID_90_set.insert("UnderlyingLegSecurityAltIDSource_t_1756296291");
          all_values.push_back(AID_90_set);
          all_compo_names.insert("AID_90_set");

          Instrmt_87.add_element(AID_90);
        }
        TradeCapLegUndlyGrp_0.add_element(Instrmt_87);
      }
      TrdLeg_0.add_element(TradeCapLegUndlyGrp_0);
    }
    elt.add_element(TrdLeg_0);
  } // end TrdLeg
  { // TrdLeg
    xml_element TrdLeg_1{"TrdLeg"};
    multiset<string> TrdLeg_1_set;
    TrdLeg_1.add_attribute("Qty", "17892457.160000"); // 1
    TrdLeg_1_set.insert("17892457.160000");
    TrdLeg_1.add_attribute("SwapTyp", "1"); // 1
    TrdLeg_1_set.insert("1");
    TrdLeg_1.add_attribute("RptID", "LegReportID_t_1456140968"); // 1
    TrdLeg_1_set.insert("LegReportID_t_1456140968");
    TrdLeg_1.add_attribute("LegNo", "586442523"); // 1
    TrdLeg_1_set.insert("586442523");
    TrdLeg_1.add_attribute("PosEfct", "N"); // 1
    TrdLeg_1_set.insert("N");
    TrdLeg_1.add_attribute("Cover", "0"); // 1
    TrdLeg_1_set.insert("0");
    TrdLeg_1.add_attribute("RefID", "LegRefID_t_603227076"); // 1
    TrdLeg_1_set.insert("LegRefID_t_603227076");
    TrdLeg_1.add_attribute("SettlTyp", "6"); // 1
    TrdLeg_1_set.insert("6");
    TrdLeg_1.add_attribute("SettlDt", "LegSettlDate_t_242707638"); // 1
    TrdLeg_1_set.insert("LegSettlDate_t_242707638");
    TrdLeg_1.add_attribute("LastPx", "12244356.210000"); // 1
    TrdLeg_1_set.insert("12244356.210000");
    TrdLeg_1.add_attribute("SettlCcy", "EUR"); // 1
    TrdLeg_1_set.insert("EUR");
    TrdLeg_1.add_attribute("LegLastFwdPnts", "18735074.550000"); // 1
    TrdLeg_1_set.insert("18735074.550000");
    TrdLeg_1.add_attribute("LegCalcCcyLastQty", "2922891.530000"); // 1
    TrdLeg_1_set.insert("2922891.530000");
    TrdLeg_1.add_attribute("LegGrossTrdAmt", "LegGrossTradeAmt_t_1113550423"); // 1
    TrdLeg_1_set.insert("LegGrossTradeAmt_t_1113550423");
    TrdLeg_1.add_attribute("LegVolatility", "6754784.870000"); // 1
    TrdLeg_1_set.insert("6754784.870000");
    TrdLeg_1.add_attribute("LegDividendYield", "16684435.070000"); // 1
    TrdLeg_1_set.insert("16684435.070000");
    TrdLeg_1.add_attribute("LegCurrencyRatio", "17954339.090000"); // 1
    TrdLeg_1_set.insert("17954339.090000");
    TrdLeg_1.add_attribute("LegExecInst", "H"); // 1
    TrdLeg_1_set.insert("H");
    TrdLeg_1.add_attribute("LastQty", "15512208.770000"); // 1
    TrdLeg_1_set.insert("15512208.770000");
    all_values.push_back(TrdLeg_1_set);
    all_compo_names.insert("TrdLeg_1_set");

    {
      xml_element Leg_102{"Leg"};
      multiset<string> Leg_102_set;
      Leg_102.add_attribute("Sym", "LegSymbol_t_659433957"); // 2
      Leg_102_set.insert("LegSymbol_t_659433957");
      Leg_102.add_attribute("Sfx", "CD"); // 2
      Leg_102_set.insert("CD");
      Leg_102.add_attribute("ID", "LegSecurityID_t_1983939648"); // 2
      Leg_102_set.insert("LegSecurityID_t_1983939648");
      Leg_102.add_attribute("Src", "7"); // 2
      Leg_102_set.insert("7");
      Leg_102.add_attribute("Prod", "4"); // 2
      Leg_102_set.insert("4");
      Leg_102.add_attribute("CFI", "LegCFICode_t_654291265"); // 2
      Leg_102_set.insert("LegCFICode_t_654291265");
      Leg_102.add_attribute("SecTyp", "SPCLT"); // 2
      Leg_102_set.insert("SPCLT");
      Leg_102.add_attribute("SecSubTyp", "LegSecuritySubType_t_2044042846"); // 2
      Leg_102_set.insert("LegSecuritySubType_t_2044042846");
      Leg_102.add_attribute("MMY", "631095928"); // 2
      Leg_102_set.insert("631095928");
      Leg_102.add_attribute("Mat", "LegMaturityDate_t_367666054"); // 2
      Leg_102_set.insert("LegMaturityDate_t_367666054");
      Leg_102.add_attribute("MatTm", "1652855489"); // 2
      Leg_102_set.insert("1652855489");
      Leg_102.add_attribute("CpnPmt", "LegCouponPaymentDate_t_272857996"); // 2
      Leg_102_set.insert("LegCouponPaymentDate_t_272857996");
      Leg_102.add_attribute("Issued", "LegIssueDate_t_1059428686"); // 2
      Leg_102_set.insert("LegIssueDate_t_1059428686");
      Leg_102.add_attribute("RepoCollSecTyp", "961512809"); // 2
      Leg_102_set.insert("961512809");
      Leg_102.add_attribute("RepoTrm", "859300519"); // 2
      Leg_102_set.insert("859300519");
      Leg_102.add_attribute("RepoRt", "1970010.970000"); // 2
      Leg_102_set.insert("1970010.970000");
      Leg_102.add_attribute("Fctr", "14505509.540000"); // 2
      Leg_102_set.insert("14505509.540000");
      Leg_102.add_attribute("CrdRtg", "LegCreditRating_t_1462527595"); // 2
      Leg_102_set.insert("LegCreditRating_t_1462527595");
      Leg_102.add_attribute("Rgstry", "LegInstrRegistry_t_2006927251"); // 2
      Leg_102_set.insert("LegInstrRegistry_t_2006927251");
      Leg_102.add_attribute("Ctry", "1693258592"); // 2
      Leg_102_set.insert("1693258592");
      Leg_102.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_539479569"); // 2
      Leg_102_set.insert("LegStateOrProvinceOfIssue_t_539479569");
      Leg_102.add_attribute("Lcl", "LegLocaleOfIssue_t_1349962793"); // 2
      Leg_102_set.insert("LegLocaleOfIssue_t_1349962793");
      Leg_102.add_attribute("Redeem", "LegRedemptionDate_t_1657048453"); // 2
      Leg_102_set.insert("LegRedemptionDate_t_1657048453");
      Leg_102.add_attribute("Strk", "2655033.760000"); // 2
      Leg_102_set.insert("2655033.760000");
      Leg_102.add_attribute("StrkCcy", "USD"); // 2
      Leg_102_set.insert("USD");
      Leg_102.add_attribute("OptA", "940981863"); // 2
      Leg_102_set.insert("940981863");
      Leg_102.add_attribute("Cmult", "11632118.050000"); // 2
      Leg_102_set.insert("11632118.050000");
      Leg_102.add_attribute("MultTyp", "1"); // 2
      Leg_102_set.insert("1");
      Leg_102.add_attribute("FlowSchedTyp", "0"); // 2
      Leg_102_set.insert("0");
      Leg_102.add_attribute("UOM", "Bbl"); // 2
      Leg_102_set.insert("Bbl");
      Leg_102.add_attribute("UOMQty", "9304994.470000"); // 2
      Leg_102_set.insert("9304994.470000");
      Leg_102.add_attribute("PxUOM", "Alw"); // 2
      Leg_102_set.insert("Alw");
      Leg_102.add_attribute("PxUOMQty", "4034050.350000"); // 2
      Leg_102_set.insert("4034050.350000");
      Leg_102.add_attribute("TmUnit", "D"); // 2
      Leg_102_set.insert("D");
      Leg_102.add_attribute("ExerStyle", "0"); // 2
      Leg_102_set.insert("0");
      Leg_102.add_attribute("CpnRt", "10576963.000000"); // 2
      Leg_102_set.insert("10576963.000000");
      Leg_102.add_attribute("Exch", "LegSecurityExchange_t_973815872"); // 2
      Leg_102_set.insert("LegSecurityExchange_t_973815872");
      Leg_102.add_attribute("Issr", "LegIssuer_t_1579226411"); // 2
      Leg_102_set.insert("LegIssuer_t_1579226411");
      Leg_102.add_attribute("EncLegIssrLen", "1688792228"); // 2
      Leg_102_set.insert("1688792228");
      Leg_102.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1341481927"); // 2
      Leg_102_set.insert("EncodedLegIssuer_t_1341481927");
      Leg_102.add_attribute("Desc", "LegSecurityDesc_t_1084598252"); // 2
      Leg_102_set.insert("LegSecurityDesc_t_1084598252");
      Leg_102.add_attribute("EncLegSecDescLen", "1961650225"); // 2
      Leg_102_set.insert("1961650225");
      Leg_102.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_253426965"); // 2
      Leg_102_set.insert("EncodedLegSecurityDesc_t_253426965");
      Leg_102.add_attribute("RatioQty", "20461110.610000"); // 2
      Leg_102_set.insert("20461110.610000");
      Leg_102.add_attribute("Side", "9"); // 2
      Leg_102_set.insert("9");
      Leg_102.add_attribute("Ccy", "EUR"); // 2
      Leg_102_set.insert("EUR");
      Leg_102.add_attribute("Pool", "LegPool_t_2135994692"); // 2
      Leg_102_set.insert("LegPool_t_2135994692");
      Leg_102.add_attribute("Dated", "LegDatedDate_t_309871666"); // 2
      Leg_102_set.insert("LegDatedDate_t_309871666");
      Leg_102.add_attribute("CSetMo", "894953311"); // 2
      Leg_102_set.insert("894953311");
      Leg_102.add_attribute("IntAcrl", "LegInterestAccrualDate_t_527990613"); // 2
      Leg_102_set.insert("LegInterestAccrualDate_t_527990613");
      Leg_102.add_attribute("PutCall", "1659834459"); // 2
      Leg_102_set.insert("1659834459");
      Leg_102.add_attribute("LegOptionRatio", "4045181.170000"); // 2
      Leg_102_set.insert("4045181.170000");
      Leg_102.add_attribute("Px", "7934939.890000"); // 2
      Leg_102_set.insert("7934939.890000");
      all_values.push_back(Leg_102_set);
      all_compo_names.insert("Leg_102_set");

      {
        xml_element LegAID_97{"LegAID"};
        multiset<string> LegAID_97_set;
        LegAID_97.add_attribute("SecAltID", "LegSecurityAltID_t_1154602757"); // 3
        LegAID_97_set.insert("LegSecurityAltID_t_1154602757");
        LegAID_97.add_attribute("SecAltIDSrc", "E"); // 3
        LegAID_97_set.insert("E");
        all_values.push_back(LegAID_97_set);
        all_compo_names.insert("LegAID_97_set");

        Leg_102.add_element(LegAID_97);
      }
      TrdLeg_1.add_element(Leg_102);
    }
    {
      xml_element Stip_194{"Stip"};
      multiset<string> Stip_194_set;
      Stip_194.add_attribute("StipTyp", "HAIRCUT"); // 2
      Stip_194_set.insert("HAIRCUT");
      Stip_194.add_attribute("StipVal", "LegStipulationValue_t_170330915"); // 2
      Stip_194_set.insert("LegStipulationValue_t_170330915");
      all_values.push_back(Stip_194_set);
      all_compo_names.insert("Stip_194_set");

      TrdLeg_1.add_element(Stip_194);
    }
    {
      xml_element Pty_439{"Pty"};
      multiset<string> Pty_439_set;
      Pty_439.add_attribute("ID", "NestedPartyID_t_1298698835"); // 2
      Pty_439_set.insert("NestedPartyID_t_1298698835");
      Pty_439.add_attribute("Src", "1"); // 2
      Pty_439_set.insert("1");
      Pty_439.add_attribute("R", "3"); // 2
      Pty_439_set.insert("3");
      all_values.push_back(Pty_439_set);
      all_compo_names.insert("Pty_439_set");

      {
        xml_element Sub_439{"Sub"};
        multiset<string> Sub_439_set;
        Sub_439.add_attribute("ID", "NestedPartySubID_t_81714634"); // 3
        Sub_439_set.insert("NestedPartySubID_t_81714634");
        Sub_439.add_attribute("Typ", "23"); // 3
        Sub_439_set.insert("23");
        all_values.push_back(Sub_439_set);
        all_compo_names.insert("Sub_439_set");

        Pty_439.add_element(Sub_439);
      }
      TrdLeg_1.add_element(Pty_439);
    }
    {
      xml_element TradeCapLegUndlyGrp_1{"TradeCapLegUndlyGrp"};
      {
        xml_element Instrmt_88{"Instrmt"};
        multiset<string> Instrmt_88_set;
        Instrmt_88.add_attribute("Sym", "UnderlyingLegSymbol_t_1140684984"); // 3
        Instrmt_88_set.insert("UnderlyingLegSymbol_t_1140684984");
        Instrmt_88.add_attribute("Sfx", "UnderlyingLegSymbolSfx_t_1923110096"); // 3
        Instrmt_88_set.insert("UnderlyingLegSymbolSfx_t_1923110096");
        Instrmt_88.add_attribute("ID", "UnderlyingLegSecurityID_t_2135139567"); // 3
        Instrmt_88_set.insert("UnderlyingLegSecurityID_t_2135139567");
        Instrmt_88.add_attribute("Src", "UnderlyingLegSecurityIDSource_t_50897636"); // 3
        Instrmt_88_set.insert("UnderlyingLegSecurityIDSource_t_50897636");
        Instrmt_88.add_attribute("CFI", "UnderlyingLegCFICode_t_749442320"); // 3
        Instrmt_88_set.insert("UnderlyingLegCFICode_t_749442320");
        Instrmt_88.add_attribute("SecType", "UnderlyingLegSecurityType_t_1566882330"); // 3
        Instrmt_88_set.insert("UnderlyingLegSecurityType_t_1566882330");
        Instrmt_88.add_attribute("SubType", "UnderlyingLegSecuritySubType_t_1739689865"); // 3
        Instrmt_88_set.insert("UnderlyingLegSecuritySubType_t_1739689865");
        Instrmt_88.add_attribute("MMY", "2090924247"); // 3
        Instrmt_88_set.insert("2090924247");
        Instrmt_88.add_attribute("MatDt", "UnderlyingLegMaturityDate_t_503996934"); // 3
        Instrmt_88_set.insert("UnderlyingLegMaturityDate_t_503996934");
        Instrmt_88.add_attribute("MatTm", "1553856442"); // 3
        Instrmt_88_set.insert("1553856442");
        Instrmt_88.add_attribute("StrkPx", "1968675.650000"); // 3
        Instrmt_88_set.insert("1968675.650000");
        Instrmt_88.add_attribute("OptAt", "402624347"); // 3
        Instrmt_88_set.insert("402624347");
        Instrmt_88.add_attribute("PutCall", "79839890"); // 3
        Instrmt_88_set.insert("79839890");
        Instrmt_88.add_attribute("Exch", "UnderlyingLegSecurityExchange_t_647295627"); // 3
        Instrmt_88_set.insert("UnderlyingLegSecurityExchange_t_647295627");
        Instrmt_88.add_attribute("Desc", "UnderlyingLegSecurityDesc_t_1751802715"); // 3
        Instrmt_88_set.insert("UnderlyingLegSecurityDesc_t_1751802715");
        all_values.push_back(Instrmt_88_set);
        all_compo_names.insert("Instrmt_88_set");

        {
          xml_element AID_91{"AID"};
          multiset<string> AID_91_set;
          AID_91.add_attribute("AltID", "UnderlyingLegSecurityAltID_t_68350934"); // 4
          AID_91_set.insert("UnderlyingLegSecurityAltID_t_68350934");
          AID_91.add_attribute("AltIDSrc", "UnderlyingLegSecurityAltIDSource_t_957167293"); // 4
          AID_91_set.insert("UnderlyingLegSecurityAltIDSource_t_957167293");
          all_values.push_back(AID_91_set);
          all_compo_names.insert("AID_91_set");

          Instrmt_88.add_element(AID_91);
        }
        TradeCapLegUndlyGrp_1.add_element(Instrmt_88);
      }
      TrdLeg_1.add_element(TradeCapLegUndlyGrp_1);
    }
    elt.add_element(TrdLeg_1);
  } // end TrdLeg
  { // TrdLeg
    xml_element TrdLeg_2{"TrdLeg"};
    multiset<string> TrdLeg_2_set;
    TrdLeg_2.add_attribute("Qty", "4992723.780000"); // 1
    TrdLeg_2_set.insert("4992723.780000");
    TrdLeg_2.add_attribute("SwapTyp", "5"); // 1
    TrdLeg_2_set.insert("5");
    TrdLeg_2.add_attribute("RptID", "LegReportID_t_469518104"); // 1
    TrdLeg_2_set.insert("LegReportID_t_469518104");
    TrdLeg_2.add_attribute("LegNo", "903790495"); // 1
    TrdLeg_2_set.insert("903790495");
    TrdLeg_2.add_attribute("PosEfct", "C"); // 1
    TrdLeg_2_set.insert("C");
    TrdLeg_2.add_attribute("Cover", "0"); // 1
    TrdLeg_2_set.insert("0");
    TrdLeg_2.add_attribute("RefID", "LegRefID_t_1931423841"); // 1
    TrdLeg_2_set.insert("LegRefID_t_1931423841");
    TrdLeg_2.add_attribute("SettlTyp", "9"); // 1
    TrdLeg_2_set.insert("9");
    TrdLeg_2.add_attribute("SettlDt", "LegSettlDate_t_1794451777"); // 1
    TrdLeg_2_set.insert("LegSettlDate_t_1794451777");
    TrdLeg_2.add_attribute("LastPx", "10826390.280000"); // 1
    TrdLeg_2_set.insert("10826390.280000");
    TrdLeg_2.add_attribute("SettlCcy", "GBP"); // 1
    TrdLeg_2_set.insert("GBP");
    TrdLeg_2.add_attribute("LegLastFwdPnts", "11643536.630000"); // 1
    TrdLeg_2_set.insert("11643536.630000");
    TrdLeg_2.add_attribute("LegCalcCcyLastQty", "8030087.770000"); // 1
    TrdLeg_2_set.insert("8030087.770000");
    TrdLeg_2.add_attribute("LegGrossTrdAmt", "LegGrossTradeAmt_t_1524933063"); // 1
    TrdLeg_2_set.insert("LegGrossTradeAmt_t_1524933063");
    TrdLeg_2.add_attribute("LegVolatility", "9399801.110000"); // 1
    TrdLeg_2_set.insert("9399801.110000");
    TrdLeg_2.add_attribute("LegDividendYield", "7906646.960000"); // 1
    TrdLeg_2_set.insert("7906646.960000");
    TrdLeg_2.add_attribute("LegCurrencyRatio", "15758306.990000"); // 1
    TrdLeg_2_set.insert("15758306.990000");
    TrdLeg_2.add_attribute("LegExecInst", "Z"); // 1
    TrdLeg_2_set.insert("Z");
    TrdLeg_2.add_attribute("LastQty", "2100633.780000"); // 1
    TrdLeg_2_set.insert("2100633.780000");
    all_values.push_back(TrdLeg_2_set);
    all_compo_names.insert("TrdLeg_2_set");

    {
      xml_element Leg_103{"Leg"};
      multiset<string> Leg_103_set;
      Leg_103.add_attribute("Sym", "LegSymbol_t_1168036916"); // 2
      Leg_103_set.insert("LegSymbol_t_1168036916");
      Leg_103.add_attribute("Sfx", "WI"); // 2
      Leg_103_set.insert("WI");
      Leg_103.add_attribute("ID", "LegSecurityID_t_714060312"); // 2
      Leg_103_set.insert("LegSecurityID_t_714060312");
      Leg_103.add_attribute("Src", "7"); // 2
      Leg_103_set.insert("7");
      Leg_103.add_attribute("Prod", "2"); // 2
      Leg_103_set.insert("2");
      Leg_103.add_attribute("CFI", "LegCFICode_t_1116684659"); // 2
      Leg_103_set.insert("LegCFICode_t_1116684659");
      Leg_103.add_attribute("SecTyp", "CP"); // 2
      Leg_103_set.insert("CP");
      Leg_103.add_attribute("SecSubTyp", "LegSecuritySubType_t_329542575"); // 2
      Leg_103_set.insert("LegSecuritySubType_t_329542575");
      Leg_103.add_attribute("MMY", "721003726"); // 2
      Leg_103_set.insert("721003726");
      Leg_103.add_attribute("Mat", "LegMaturityDate_t_722600535"); // 2
      Leg_103_set.insert("LegMaturityDate_t_722600535");
      Leg_103.add_attribute("MatTm", "1286709869"); // 2
      Leg_103_set.insert("1286709869");
      Leg_103.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1220276105"); // 2
      Leg_103_set.insert("LegCouponPaymentDate_t_1220276105");
      Leg_103.add_attribute("Issued", "LegIssueDate_t_1318942083"); // 2
      Leg_103_set.insert("LegIssueDate_t_1318942083");
      Leg_103.add_attribute("RepoCollSecTyp", "1756227973"); // 2
      Leg_103_set.insert("1756227973");
      Leg_103.add_attribute("RepoTrm", "2124066600"); // 2
      Leg_103_set.insert("2124066600");
      Leg_103.add_attribute("RepoRt", "5612939.710000"); // 2
      Leg_103_set.insert("5612939.710000");
      Leg_103.add_attribute("Fctr", "12328651.870000"); // 2
      Leg_103_set.insert("12328651.870000");
      Leg_103.add_attribute("CrdRtg", "LegCreditRating_t_1908006793"); // 2
      Leg_103_set.insert("LegCreditRating_t_1908006793");
      Leg_103.add_attribute("Rgstry", "LegInstrRegistry_t_1538121712"); // 2
      Leg_103_set.insert("LegInstrRegistry_t_1538121712");
      Leg_103.add_attribute("Ctry", "879833316"); // 2
      Leg_103_set.insert("879833316");
      Leg_103.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_843162174"); // 2
      Leg_103_set.insert("LegStateOrProvinceOfIssue_t_843162174");
      Leg_103.add_attribute("Lcl", "LegLocaleOfIssue_t_1888658135"); // 2
      Leg_103_set.insert("LegLocaleOfIssue_t_1888658135");
      Leg_103.add_attribute("Redeem", "LegRedemptionDate_t_1264081395"); // 2
      Leg_103_set.insert("LegRedemptionDate_t_1264081395");
      Leg_103.add_attribute("Strk", "20075158.370000"); // 2
      Leg_103_set.insert("20075158.370000");
      Leg_103.add_attribute("StrkCcy", "JPY"); // 2
      Leg_103_set.insert("JPY");
      Leg_103.add_attribute("OptA", "800012300"); // 2
      Leg_103_set.insert("800012300");
      Leg_103.add_attribute("Cmult", "13348479.600000"); // 2
      Leg_103_set.insert("13348479.600000");
      Leg_103.add_attribute("MultTyp", "1"); // 2
      Leg_103_set.insert("1");
      Leg_103.add_attribute("FlowSchedTyp", "3"); // 2
      Leg_103_set.insert("3");
      Leg_103.add_attribute("UOM", "USD"); // 2
      Leg_103_set.insert("USD");
      Leg_103.add_attribute("UOMQty", "12379147.780000"); // 2
      Leg_103_set.insert("12379147.780000");
      Leg_103.add_attribute("PxUOM", "MWh"); // 2
      Leg_103_set.insert("MWh");
      Leg_103.add_attribute("PxUOMQty", "1114880.020000"); // 2
      Leg_103_set.insert("1114880.020000");
      Leg_103.add_attribute("TmUnit", "H"); // 2
      Leg_103_set.insert("H");
      Leg_103.add_attribute("ExerStyle", "1"); // 2
      Leg_103_set.insert("1");
      Leg_103.add_attribute("CpnRt", "12281726.620000"); // 2
      Leg_103_set.insert("12281726.620000");
      Leg_103.add_attribute("Exch", "LegSecurityExchange_t_319090441"); // 2
      Leg_103_set.insert("LegSecurityExchange_t_319090441");
      Leg_103.add_attribute("Issr", "LegIssuer_t_1986603638"); // 2
      Leg_103_set.insert("LegIssuer_t_1986603638");
      Leg_103.add_attribute("EncLegIssrLen", "1949176388"); // 2
      Leg_103_set.insert("1949176388");
      Leg_103.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1041690977"); // 2
      Leg_103_set.insert("EncodedLegIssuer_t_1041690977");
      Leg_103.add_attribute("Desc", "LegSecurityDesc_t_1125829859"); // 2
      Leg_103_set.insert("LegSecurityDesc_t_1125829859");
      Leg_103.add_attribute("EncLegSecDescLen", "1021968845"); // 2
      Leg_103_set.insert("1021968845");
      Leg_103.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_213149412"); // 2
      Leg_103_set.insert("EncodedLegSecurityDesc_t_213149412");
      Leg_103.add_attribute("RatioQty", "7345741.840000"); // 2
      Leg_103_set.insert("7345741.840000");
      Leg_103.add_attribute("Side", "7"); // 2
      Leg_103_set.insert("7");
      Leg_103.add_attribute("Ccy", "USD"); // 2
      Leg_103_set.insert("USD");
      Leg_103.add_attribute("Pool", "LegPool_t_759074943"); // 2
      Leg_103_set.insert("LegPool_t_759074943");
      Leg_103.add_attribute("Dated", "LegDatedDate_t_165081448"); // 2
      Leg_103_set.insert("LegDatedDate_t_165081448");
      Leg_103.add_attribute("CSetMo", "699789040"); // 2
      Leg_103_set.insert("699789040");
      Leg_103.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1602237117"); // 2
      Leg_103_set.insert("LegInterestAccrualDate_t_1602237117");
      Leg_103.add_attribute("PutCall", "2053739583"); // 2
      Leg_103_set.insert("2053739583");
      Leg_103.add_attribute("LegOptionRatio", "19638704.350000"); // 2
      Leg_103_set.insert("19638704.350000");
      Leg_103.add_attribute("Px", "14622693.060000"); // 2
      Leg_103_set.insert("14622693.060000");
      all_values.push_back(Leg_103_set);
      all_compo_names.insert("Leg_103_set");

      {
        xml_element LegAID_98{"LegAID"};
        multiset<string> LegAID_98_set;
        LegAID_98.add_attribute("SecAltID", "LegSecurityAltID_t_450439200"); // 3
        LegAID_98_set.insert("LegSecurityAltID_t_450439200");
        LegAID_98.add_attribute("SecAltIDSrc", "6"); // 3
        LegAID_98_set.insert("6");
        all_values.push_back(LegAID_98_set);
        all_compo_names.insert("LegAID_98_set");

        Leg_103.add_element(LegAID_98);
      }
      TrdLeg_2.add_element(Leg_103);
    }
    {
      xml_element Stip_195{"Stip"};
      multiset<string> Stip_195_set;
      Stip_195.add_attribute("StipTyp", "PROD"); // 2
      Stip_195_set.insert("PROD");
      Stip_195.add_attribute("StipVal", "LegStipulationValue_t_1785287160"); // 2
      Stip_195_set.insert("LegStipulationValue_t_1785287160");
      all_values.push_back(Stip_195_set);
      all_compo_names.insert("Stip_195_set");

      TrdLeg_2.add_element(Stip_195);
    }
    {
      xml_element Pty_440{"Pty"};
      multiset<string> Pty_440_set;
      Pty_440.add_attribute("ID", "NestedPartyID_t_527795459"); // 2
      Pty_440_set.insert("NestedPartyID_t_527795459");
      Pty_440.add_attribute("Src", "F"); // 2
      Pty_440_set.insert("F");
      Pty_440.add_attribute("R", "61"); // 2
      Pty_440_set.insert("61");
      all_values.push_back(Pty_440_set);
      all_compo_names.insert("Pty_440_set");

      {
        xml_element Sub_440{"Sub"};
        multiset<string> Sub_440_set;
        Sub_440.add_attribute("ID", "NestedPartySubID_t_1765710237"); // 3
        Sub_440_set.insert("NestedPartySubID_t_1765710237");
        Sub_440.add_attribute("Typ", "32"); // 3
        Sub_440_set.insert("32");
        all_values.push_back(Sub_440_set);
        all_compo_names.insert("Sub_440_set");

        Pty_440.add_element(Sub_440);
      }
      TrdLeg_2.add_element(Pty_440);
    }
    {
      xml_element TradeCapLegUndlyGrp_2{"TradeCapLegUndlyGrp"};
      {
        xml_element Instrmt_89{"Instrmt"};
        multiset<string> Instrmt_89_set;
        Instrmt_89.add_attribute("Sym", "UnderlyingLegSymbol_t_1294202853"); // 3
        Instrmt_89_set.insert("UnderlyingLegSymbol_t_1294202853");
        Instrmt_89.add_attribute("Sfx", "UnderlyingLegSymbolSfx_t_1430551077"); // 3
        Instrmt_89_set.insert("UnderlyingLegSymbolSfx_t_1430551077");
        Instrmt_89.add_attribute("ID", "UnderlyingLegSecurityID_t_1941140571"); // 3
        Instrmt_89_set.insert("UnderlyingLegSecurityID_t_1941140571");
        Instrmt_89.add_attribute("Src", "UnderlyingLegSecurityIDSource_t_374891867"); // 3
        Instrmt_89_set.insert("UnderlyingLegSecurityIDSource_t_374891867");
        Instrmt_89.add_attribute("CFI", "UnderlyingLegCFICode_t_1749641519"); // 3
        Instrmt_89_set.insert("UnderlyingLegCFICode_t_1749641519");
        Instrmt_89.add_attribute("SecType", "UnderlyingLegSecurityType_t_1780260561"); // 3
        Instrmt_89_set.insert("UnderlyingLegSecurityType_t_1780260561");
        Instrmt_89.add_attribute("SubType", "UnderlyingLegSecuritySubType_t_176584608"); // 3
        Instrmt_89_set.insert("UnderlyingLegSecuritySubType_t_176584608");
        Instrmt_89.add_attribute("MMY", "643848848"); // 3
        Instrmt_89_set.insert("643848848");
        Instrmt_89.add_attribute("MatDt", "UnderlyingLegMaturityDate_t_758606772"); // 3
        Instrmt_89_set.insert("UnderlyingLegMaturityDate_t_758606772");
        Instrmt_89.add_attribute("MatTm", "1198553453"); // 3
        Instrmt_89_set.insert("1198553453");
        Instrmt_89.add_attribute("StrkPx", "8569982.600000"); // 3
        Instrmt_89_set.insert("8569982.600000");
        Instrmt_89.add_attribute("OptAt", "1493180956"); // 3
        Instrmt_89_set.insert("1493180956");
        Instrmt_89.add_attribute("PutCall", "49621603"); // 3
        Instrmt_89_set.insert("49621603");
        Instrmt_89.add_attribute("Exch", "UnderlyingLegSecurityExchange_t_1631441643"); // 3
        Instrmt_89_set.insert("UnderlyingLegSecurityExchange_t_1631441643");
        Instrmt_89.add_attribute("Desc", "UnderlyingLegSecurityDesc_t_1313136680"); // 3
        Instrmt_89_set.insert("UnderlyingLegSecurityDesc_t_1313136680");
        all_values.push_back(Instrmt_89_set);
        all_compo_names.insert("Instrmt_89_set");

        {
          xml_element AID_92{"AID"};
          multiset<string> AID_92_set;
          AID_92.add_attribute("AltID", "UnderlyingLegSecurityAltID_t_808696547"); // 4
          AID_92_set.insert("UnderlyingLegSecurityAltID_t_808696547");
          AID_92.add_attribute("AltIDSrc", "UnderlyingLegSecurityAltIDSource_t_1796523091"); // 4
          AID_92_set.insert("UnderlyingLegSecurityAltIDSource_t_1796523091");
          all_values.push_back(AID_92_set);
          all_compo_names.insert("AID_92_set");

          Instrmt_89.add_element(AID_92);
        }
        TradeCapLegUndlyGrp_2.add_element(Instrmt_89);
      }
      TrdLeg_2.add_element(TradeCapLegUndlyGrp_2);
    }
    elt.add_element(TrdLeg_2);
  } // end TrdLeg
  { // TrdRegTS
    xml_element TrdRegTS_16{"TrdRegTS"};
    multiset<string> TrdRegTS_16_set;
    TrdRegTS_16.add_attribute("TS", "TrdRegTimestamp_t_263450016"); // 1
    TrdRegTS_16_set.insert("TrdRegTimestamp_t_263450016");
    TrdRegTS_16.add_attribute("Typ", "6"); // 1
    TrdRegTS_16_set.insert("6");
    TrdRegTS_16.add_attribute("Src", "TrdRegTimestampOrigin_t_1829312508"); // 1
    TrdRegTS_16_set.insert("TrdRegTimestampOrigin_t_1829312508");
    TrdRegTS_16.add_attribute("DskTyp", "S"); // 1
    TrdRegTS_16_set.insert("S");
    TrdRegTS_16.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_16_set.insert("1");
    TrdRegTS_16.add_attribute("DskOrdHndlInst", "CNH"); // 1
    TrdRegTS_16_set.insert("CNH");
    all_values.push_back(TrdRegTS_16_set);
    all_compo_names.insert("TrdRegTS_16_set");

    elt.add_element(TrdRegTS_16);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_17{"TrdRegTS"};
    multiset<string> TrdRegTS_17_set;
    TrdRegTS_17.add_attribute("TS", "TrdRegTimestamp_t_1840517281"); // 1
    TrdRegTS_17_set.insert("TrdRegTimestamp_t_1840517281");
    TrdRegTS_17.add_attribute("Typ", "4"); // 1
    TrdRegTS_17_set.insert("4");
    TrdRegTS_17.add_attribute("Src", "TrdRegTimestampOrigin_t_667541917"); // 1
    TrdRegTS_17_set.insert("TrdRegTimestampOrigin_t_667541917");
    TrdRegTS_17.add_attribute("DskTyp", "S"); // 1
    TrdRegTS_17_set.insert("S");
    TrdRegTS_17.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_17_set.insert("1");
    TrdRegTS_17.add_attribute("DskOrdHndlInst", "CNH"); // 1
    TrdRegTS_17_set.insert("CNH");
    all_values.push_back(TrdRegTS_17_set);
    all_compo_names.insert("TrdRegTS_17_set");

    elt.add_element(TrdRegTS_17);
  } // end TrdRegTS
  { // RptSide
    xml_element RptSide_0{"RptSide"};
    multiset<string> RptSide_0_set;
    RptSide_0.add_attribute("Side", "5"); // 1
    RptSide_0_set.insert("5");
    RptSide_0.add_attribute("SideExecID", "SideExecID_t_1716319583"); // 1
    RptSide_0_set.insert("SideExecID_t_1716319583");
    RptSide_0.add_attribute("OrdDelay", "227519107"); // 1
    RptSide_0_set.insert("227519107");
    RptSide_0.add_attribute("OrdDelayUnit", "15"); // 1
    RptSide_0_set.insert("15");
    RptSide_0.add_attribute("SideQty", "1318477454"); // 1
    RptSide_0_set.insert("1318477454");
    RptSide_0.add_attribute("RptID", "SideTradeReportID_t_2007779668"); // 1
    RptSide_0_set.insert("SideTradeReportID_t_2007779668");
    RptSide_0.add_attribute("FillStationCd", "SideFillStationCd_t_524448623"); // 1
    RptSide_0_set.insert("SideFillStationCd_t_524448623");
    RptSide_0.add_attribute("RsnCD", "SideReasonCd_t_1962326302"); // 1
    RptSide_0_set.insert("SideReasonCd_t_1962326302");
    RptSide_0.add_attribute("RptSeq", "618902792"); // 1
    RptSide_0_set.insert("618902792");
    RptSide_0.add_attribute("TrdSubTyp", "37"); // 1
    RptSide_0_set.insert("37");
    RptSide_0.add_attribute("NetGrossInd", "1"); // 1
    RptSide_0_set.insert("1");
    RptSide_0.add_attribute("Ccy", "USD"); // 1
    RptSide_0_set.insert("USD");
    RptSide_0.add_attribute("SettlCcy", "EUR"); // 1
    RptSide_0_set.insert("EUR");
    RptSide_0.add_attribute("Acct", "Account_t_433836579"); // 1
    RptSide_0_set.insert("Account_t_433836579");
    RptSide_0.add_attribute("AcctIDSrc", "2"); // 1
    RptSide_0_set.insert("2");
    RptSide_0.add_attribute("AcctTyp", "8"); // 1
    RptSide_0_set.insert("8");
    RptSide_0.add_attribute("ProcCode", "6"); // 1
    RptSide_0_set.insert("6");
    RptSide_0.add_attribute("OddLot", "N"); // 1
    RptSide_0_set.insert("N");
    RptSide_0.add_attribute("InptSrc", "TradeInputSource_t_825007714"); // 1
    RptSide_0_set.insert("TradeInputSource_t_825007714");
    RptSide_0.add_attribute("InptDev", "TradeInputDevice_t_275522271"); // 1
    RptSide_0_set.insert("TradeInputDevice_t_275522271");
    RptSide_0.add_attribute("ComplianceID", "ComplianceID_t_1513351959"); // 1
    RptSide_0_set.insert("ComplianceID_t_1513351959");
    RptSide_0.add_attribute("SolFlag", "N"); // 1
    RptSide_0_set.insert("N");
    RptSide_0.add_attribute("CustCpcty", "1"); // 1
    RptSide_0_set.insert("1");
    RptSide_0.add_attribute("SesID", "4"); // 1
    RptSide_0_set.insert("4");
    RptSide_0.add_attribute("SesSub", "5"); // 1
    RptSide_0_set.insert("5");
    RptSide_0.add_attribute("TmBkt", "TimeBracket_t_118338580"); // 1
    RptSide_0_set.insert("TimeBracket_t_118338580");
    RptSide_0.add_attribute("NumDaysInt", "1983142993"); // 1
    RptSide_0_set.insert("1983142993");
    RptSide_0.add_attribute("ExDt", "ExDate_t_1918064595"); // 1
    RptSide_0_set.insert("ExDate_t_1918064595");
    RptSide_0.add_attribute("AcrdIntRt", "5522007.640000"); // 1
    RptSide_0_set.insert("5522007.640000");
    RptSide_0.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_1956115141"); // 1
    RptSide_0_set.insert("AccruedInterestAmt_t_1956115141");
    RptSide_0.add_attribute("IntAtMat", "InterestAtMaturity_t_1486900531"); // 1
    RptSide_0_set.insert("InterestAtMaturity_t_1486900531");
    RptSide_0.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_779719871"); // 1
    RptSide_0_set.insert("EndAccruedInterestAmt_t_779719871");
    RptSide_0.add_attribute("StartCsh", "StartCash_t_156495509"); // 1
    RptSide_0_set.insert("StartCash_t_156495509");
    RptSide_0.add_attribute("EndCsh", "EndCash_t_657894337"); // 1
    RptSide_0_set.insert("EndCash_t_657894337");
    RptSide_0.add_attribute("Concession", "Concession_t_640015891"); // 1
    RptSide_0_set.insert("Concession_t_640015891");
    RptSide_0.add_attribute("TotTakedown", "TotalTakedown_t_680944132"); // 1
    RptSide_0_set.insert("TotalTakedown_t_680944132");
    RptSide_0.add_attribute("NetMny", "NetMoney_t_472736992"); // 1
    RptSide_0_set.insert("NetMoney_t_472736992");
    RptSide_0.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1258918683"); // 1
    RptSide_0_set.insert("SettlCurrAmt_t_1258918683");
    RptSide_0.add_attribute("SettlCurrFxRt", "2564625.610000"); // 1
    RptSide_0_set.insert("2564625.610000");
    RptSide_0.add_attribute("SettlCurrFxRtCalc", "M"); // 1
    RptSide_0_set.insert("M");
    RptSide_0.add_attribute("PosEfct", "F"); // 1
    RptSide_0_set.insert("F");
    RptSide_0.add_attribute("Txt", "Text_t_2029086242"); // 1
    RptSide_0_set.insert("Text_t_2029086242");
    RptSide_0.add_attribute("EncTxtLen", "1300376816"); // 1
    RptSide_0_set.insert("1300376816");
    RptSide_0.add_attribute("EncTxt", "EncodedText_t_353771916"); // 1
    RptSide_0_set.insert("EncodedText_t_353771916");
    RptSide_0.add_attribute("MLegRptTyp", "1"); // 1
    RptSide_0_set.insert("1");
    RptSide_0.add_attribute("ExchRule", "ExchangeRule_t_1105215170"); // 1
    RptSide_0_set.insert("ExchangeRule_t_1105215170");
    RptSide_0.add_attribute("AllocInd", "0"); // 1
    RptSide_0_set.insert("0");
    RptSide_0.add_attribute("PreallocMeth", "1"); // 1
    RptSide_0_set.insert("1");
    RptSide_0.add_attribute("AllocID", "AllocID_t_465348902"); // 1
    RptSide_0_set.insert("AllocID_t_465348902");
    RptSide_0.add_attribute("SideGrossTradeAmt", "SideGrossTradeAmt_t_174474837"); // 1
    RptSide_0_set.insert("SideGrossTradeAmt_t_174474837");
    RptSide_0.add_attribute("AgrsrInd", "Y"); // 1
    RptSide_0_set.insert("Y");
    RptSide_0.add_attribute("ExchSpeclInstr", "ExchangeSpecialInstructions_t_1978700862"); // 1
    RptSide_0_set.insert("ExchangeSpecialInstructions_t_1978700862");
    RptSide_0.add_attribute("OrdCat", "1"); // 1
    RptSide_0_set.insert("1");
    RptSide_0.add_attribute("LqdtyInd", "2"); // 1
    RptSide_0_set.insert("2");
    all_values.push_back(RptSide_0_set);
    all_compo_names.insert("RptSide_0_set");

    {
      xml_element Pty_441{"Pty"};
      multiset<string> Pty_441_set;
      Pty_441.add_attribute("ID", "PartyID_t_988107265"); // 2
      Pty_441_set.insert("PartyID_t_988107265");
      Pty_441.add_attribute("Src", "A"); // 2
      Pty_441_set.insert("A");
      Pty_441.add_attribute("R", "37"); // 2
      Pty_441_set.insert("37");
      all_values.push_back(Pty_441_set);
      all_compo_names.insert("Pty_441_set");

      {
        xml_element Sub_441{"Sub"};
        multiset<string> Sub_441_set;
        Sub_441.add_attribute("ID", "PartySubID_t_823766610"); // 3
        Sub_441_set.insert("PartySubID_t_823766610");
        Sub_441.add_attribute("Typ", "24"); // 3
        Sub_441_set.insert("24");
        all_values.push_back(Sub_441_set);
        all_compo_names.insert("Sub_441_set");

        Pty_441.add_element(Sub_441);
      }
      RptSide_0.add_element(Pty_441);
    }
    {
      xml_element ClrInst_8{"ClrInst"};
      multiset<string> ClrInst_8_set;
      ClrInst_8.add_attribute("ClrngInstrctn", "7"); // 2
      ClrInst_8_set.insert("7");
      all_values.push_back(ClrInst_8_set);
      all_compo_names.insert("ClrInst_8_set");

      RptSide_0.add_element(ClrInst_8);
    }
    {
      xml_element Comm_23{"Comm"};
      multiset<string> Comm_23_set;
      Comm_23.add_attribute("Comm", "Commission_t_632398104"); // 2
      Comm_23_set.insert("Commission_t_632398104");
      Comm_23.add_attribute("CommTyp", "6"); // 2
      Comm_23_set.insert("6");
      Comm_23.add_attribute("Ccy", "CAN"); // 2
      Comm_23_set.insert("CAN");
      Comm_23.add_attribute("FundRenewWaiv", "Y"); // 2
      Comm_23_set.insert("Y");
      all_values.push_back(Comm_23_set);
      all_compo_names.insert("Comm_23_set");

      RptSide_0.add_element(Comm_23);
    }
    {
      xml_element ContAmt_2{"ContAmt"};
      multiset<string> ContAmt_2_set;
      ContAmt_2.add_attribute("ContAmtTyp", "8"); // 2
      ContAmt_2_set.insert("8");
      ContAmt_2.add_attribute("ContAmtValu", "14698377.450000"); // 2
      ContAmt_2_set.insert("14698377.450000");
      ContAmt_2.add_attribute("ContAmtCurr", "GBP"); // 2
      ContAmt_2_set.insert("GBP");
      all_values.push_back(ContAmt_2_set);
      all_compo_names.insert("ContAmt_2_set");

      RptSide_0.add_element(ContAmt_2);
    }
    {
      xml_element Stip_196{"Stip"};
      multiset<string> Stip_196_set;
      Stip_196.add_attribute("Typ", "REFINT"); // 2
      Stip_196_set.insert("REFINT");
      Stip_196.add_attribute("Val", "StipulationValue_t_2009248517"); // 2
      Stip_196_set.insert("StipulationValue_t_2009248517");
      all_values.push_back(Stip_196_set);
      all_compo_names.insert("Stip_196_set");

      RptSide_0.add_element(Stip_196);
    }
    {
      xml_element MiscFees_20{"MiscFees"};
      multiset<string> MiscFees_20_set;
      MiscFees_20.add_attribute("Amt", "MiscFeeAmt_t_1534549221"); // 2
      MiscFees_20_set.insert("MiscFeeAmt_t_1534549221");
      MiscFees_20.add_attribute("Curr", "USD"); // 2
      MiscFees_20_set.insert("USD");
      MiscFees_20.add_attribute("Typ", "2"); // 2
      MiscFees_20_set.insert("2");
      MiscFees_20.add_attribute("Basis", "2"); // 2
      MiscFees_20_set.insert("2");
      all_values.push_back(MiscFees_20_set);
      all_compo_names.insert("MiscFees_20_set");

      RptSide_0.add_element(MiscFees_20);
    }
    {
      xml_element Alloc_8{"Alloc"};
      multiset<string> Alloc_8_set;
      Alloc_8.add_attribute("Acct", "AllocAccount_t_119873208"); // 2
      Alloc_8_set.insert("AllocAccount_t_119873208");
      Alloc_8.add_attribute("ActIDSrc", "3"); // 2
      Alloc_8_set.insert("3");
      Alloc_8.add_attribute("AllocSettlCcy", "GBP"); // 2
      Alloc_8_set.insert("GBP");
      Alloc_8.add_attribute("IndAllocID", "IndividualAllocID_t_1412263097"); // 2
      Alloc_8_set.insert("IndividualAllocID_t_1412263097");
      Alloc_8.add_attribute("Qty", "20768322.360000"); // 2
      Alloc_8_set.insert("20768322.360000");
      Alloc_8.add_attribute("CustCpcty", "AllocCustomerCapacity_t_416439324"); // 2
      Alloc_8_set.insert("AllocCustomerCapacity_t_416439324");
      Alloc_8.add_attribute("Meth", "2"); // 2
      Alloc_8_set.insert("2");
      Alloc_8.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_1186152533"); // 2
      Alloc_8_set.insert("SecondaryIndividualAllocID_t_1186152533");
      Alloc_8.add_attribute("ClrFeeInd", "AllocClearingFeeIndicator_t_1404546589"); // 2
      Alloc_8_set.insert("AllocClearingFeeIndicator_t_1404546589");
      all_values.push_back(Alloc_8_set);
      all_compo_names.insert("Alloc_8_set");

      {
        xml_element Pty_442{"Pty"};
        multiset<string> Pty_442_set;
        Pty_442.add_attribute("ID", "Nested2PartyID_t_1028049910"); // 3
        Pty_442_set.insert("Nested2PartyID_t_1028049910");
        Pty_442.add_attribute("Src", "F"); // 3
        Pty_442_set.insert("F");
        Pty_442.add_attribute("R", "51"); // 3
        Pty_442_set.insert("51");
        all_values.push_back(Pty_442_set);
        all_compo_names.insert("Pty_442_set");

        {
          xml_element Sub_442{"Sub"};
          multiset<string> Sub_442_set;
          Sub_442.add_attribute("ID", "Nested2PartySubID_t_1422672308"); // 4
          Sub_442_set.insert("Nested2PartySubID_t_1422672308");
          Sub_442.add_attribute("Typ", "8"); // 4
          Sub_442_set.insert("8");
          all_values.push_back(Sub_442_set);
          all_compo_names.insert("Sub_442_set");

          Pty_442.add_element(Sub_442);
        }
        Alloc_8.add_element(Pty_442);
      }
      RptSide_0.add_element(Alloc_8);
    }
    {
      xml_element TrdRegTS_18{"TrdRegTS"};
      multiset<string> TrdRegTS_18_set;
      TrdRegTS_18.add_attribute("TS", "SideTrdRegTimestamp_t_713227656"); // 2
      TrdRegTS_18_set.insert("SideTrdRegTimestamp_t_713227656");
      TrdRegTS_18.add_attribute("Typ", "7"); // 2
      TrdRegTS_18_set.insert("7");
      TrdRegTS_18.add_attribute("Src", "SideTrdRegTimestampSrc_t_753250563"); // 2
      TrdRegTS_18_set.insert("SideTrdRegTimestampSrc_t_753250563");
      all_values.push_back(TrdRegTS_18_set);
      all_compo_names.insert("TrdRegTS_18_set");

      RptSide_0.add_element(TrdRegTS_18);
    }
    {
      xml_element SettlDetails_1{"SettlDetails"};
      multiset<string> SettlDetails_1_set;
      SettlDetails_1.add_attribute("SettlSrc", "3"); // 2
      SettlDetails_1_set.insert("3");
      all_values.push_back(SettlDetails_1_set);
      all_compo_names.insert("SettlDetails_1_set");

      {
        xml_element Pty_443{"Pty"};
        multiset<string> Pty_443_set;
        Pty_443.add_attribute("ID", "SettlPartyID_t_1548645209"); // 3
        Pty_443_set.insert("SettlPartyID_t_1548645209");
        Pty_443.add_attribute("Src", "B"); // 3
        Pty_443_set.insert("B");
        Pty_443.add_attribute("R", "80"); // 3
        Pty_443_set.insert("80");
        all_values.push_back(Pty_443_set);
        all_compo_names.insert("Pty_443_set");

        {
          xml_element Sub_443{"Sub"};
          multiset<string> Sub_443_set;
          Sub_443.add_attribute("ID", "SettlPartySubID_t_265832172"); // 4
          Sub_443_set.insert("SettlPartySubID_t_265832172");
          Sub_443.add_attribute("Typ", "16"); // 4
          Sub_443_set.insert("16");
          all_values.push_back(Sub_443_set);
          all_compo_names.insert("Sub_443_set");

          Pty_443.add_element(Sub_443);
        }
        SettlDetails_1.add_element(Pty_443);
      }
      RptSide_0.add_element(SettlDetails_1);
    }
    {
      xml_element TrdRptOrdDetl_0{"TrdRptOrdDetl"};
      multiset<string> TrdRptOrdDetl_0_set;
      TrdRptOrdDetl_0.add_attribute("OrdID", "OrderID_t_403292025"); // 2
      TrdRptOrdDetl_0_set.insert("OrderID_t_403292025");
      TrdRptOrdDetl_0.add_attribute("OrdID2", "SecondaryOrderID_t_127597041"); // 2
      TrdRptOrdDetl_0_set.insert("SecondaryOrderID_t_127597041");
      TrdRptOrdDetl_0.add_attribute("ClOrdID", "ClOrdID_t_1650941978"); // 2
      TrdRptOrdDetl_0_set.insert("ClOrdID_t_1650941978");
      TrdRptOrdDetl_0.add_attribute("ClOrdID2", "SecondaryClOrdID_t_2011194926"); // 2
      TrdRptOrdDetl_0_set.insert("SecondaryClOrdID_t_2011194926");
      TrdRptOrdDetl_0.add_attribute("ListID", "ListID_t_1289738727"); // 2
      TrdRptOrdDetl_0_set.insert("ListID_t_1289738727");
      TrdRptOrdDetl_0.add_attribute("RefOrdID", "RefOrderID_t_1391779468"); // 2
      TrdRptOrdDetl_0_set.insert("RefOrderID_t_1391779468");
      TrdRptOrdDetl_0.add_attribute("RefOrdIDSrc", "3"); // 2
      TrdRptOrdDetl_0_set.insert("3");
      TrdRptOrdDetl_0.add_attribute("RefOrdIDRsn", "0"); // 2
      TrdRptOrdDetl_0_set.insert("0");
      TrdRptOrdDetl_0.add_attribute("OrdTyp", "H"); // 2
      TrdRptOrdDetl_0_set.insert("H");
      TrdRptOrdDetl_0.add_attribute("Px", "4281539.010000"); // 2
      TrdRptOrdDetl_0_set.insert("4281539.010000");
      TrdRptOrdDetl_0.add_attribute("StopPx", "19948340.460000"); // 2
      TrdRptOrdDetl_0_set.insert("19948340.460000");
      TrdRptOrdDetl_0.add_attribute("ExecInst", "A"); // 2
      TrdRptOrdDetl_0_set.insert("A");
      TrdRptOrdDetl_0.add_attribute("OrdStat", "4"); // 2
      TrdRptOrdDetl_0_set.insert("4");
      TrdRptOrdDetl_0.add_attribute("LeavesQty", "2637897.220000"); // 2
      TrdRptOrdDetl_0_set.insert("2637897.220000");
      TrdRptOrdDetl_0.add_attribute("CumQty", "1508719.890000"); // 2
      TrdRptOrdDetl_0_set.insert("1508719.890000");
      TrdRptOrdDetl_0.add_attribute("TmInForce", "3"); // 2
      TrdRptOrdDetl_0_set.insert("3");
      TrdRptOrdDetl_0.add_attribute("ExpireTm", "ExpireTime_t_1668336312"); // 2
      TrdRptOrdDetl_0_set.insert("ExpireTime_t_1668336312");
      TrdRptOrdDetl_0.add_attribute("Cpcty", "G"); // 2
      TrdRptOrdDetl_0_set.insert("G");
      TrdRptOrdDetl_0.add_attribute("Rstctions", "4"); // 2
      TrdRptOrdDetl_0_set.insert("4");
      TrdRptOrdDetl_0.add_attribute("BkngTyp", "0"); // 2
      TrdRptOrdDetl_0_set.insert("0");
      TrdRptOrdDetl_0.add_attribute("OrigCustOrdCpcty", "4"); // 2
      TrdRptOrdDetl_0_set.insert("4");
      TrdRptOrdDetl_0.add_attribute("OrdInptDev", "OrderInputDevice_t_3653837"); // 2
      TrdRptOrdDetl_0_set.insert("OrderInputDevice_t_3653837");
      TrdRptOrdDetl_0.add_attribute("LotTyp", "1"); // 2
      TrdRptOrdDetl_0_set.insert("1");
      TrdRptOrdDetl_0.add_attribute("TransBkdTm", "TransBkdTime_t_1610822149"); // 2
      TrdRptOrdDetl_0_set.insert("TransBkdTime_t_1610822149");
      TrdRptOrdDetl_0.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_756904400"); // 2
      TrdRptOrdDetl_0_set.insert("OrigOrdModTime_t_756904400");
      all_values.push_back(TrdRptOrdDetl_0_set);
      all_compo_names.insert("TrdRptOrdDetl_0_set");

      {
        xml_element OrdQty_26{"OrdQty"};
        multiset<string> OrdQty_26_set;
        OrdQty_26.add_attribute("Qty", "18170311.410000"); // 3
        OrdQty_26_set.insert("18170311.410000");
        OrdQty_26.add_attribute("Cash", "10119837.100000"); // 3
        OrdQty_26_set.insert("10119837.100000");
        OrdQty_26.add_attribute("Pct", "5622667.190000"); // 3
        OrdQty_26_set.insert("5622667.190000");
        OrdQty_26.add_attribute("RndDir", "1"); // 3
        OrdQty_26_set.insert("1");
        OrdQty_26.add_attribute("RndMod", "12778158.820000"); // 3
        OrdQty_26_set.insert("12778158.820000");
        all_values.push_back(OrdQty_26_set);
        all_compo_names.insert("OrdQty_26_set");

        TrdRptOrdDetl_0.add_element(OrdQty_26);
      }
      {
        xml_element DsplyInstr_10{"DsplyInstr"};
        multiset<string> DsplyInstr_10_set;
        DsplyInstr_10.add_attribute("DisplayQty", "6786594.750000"); // 3
        DsplyInstr_10_set.insert("6786594.750000");
        DsplyInstr_10.add_attribute("SecDspQty", "8973148.850000"); // 3
        DsplyInstr_10_set.insert("8973148.850000");
        DsplyInstr_10.add_attribute("DspWhn", "1"); // 3
        DsplyInstr_10_set.insert("1");
        DsplyInstr_10.add_attribute("DspMthd", "2"); // 3
        DsplyInstr_10_set.insert("2");
        DsplyInstr_10.add_attribute("DsplLwQty", "7610261.630000"); // 3
        DsplyInstr_10_set.insert("7610261.630000");
        DsplyInstr_10.add_attribute("DisplayHighQty", "5476680.030000"); // 3
        DsplyInstr_10_set.insert("5476680.030000");
        DsplyInstr_10.add_attribute("DspMinIncr", "15738972.730000"); // 3
        DsplyInstr_10_set.insert("15738972.730000");
        DsplyInstr_10.add_attribute("RfrshQty", "4005958.680000"); // 3
        DsplyInstr_10_set.insert("4005958.680000");
        all_values.push_back(DsplyInstr_10_set);
        all_compo_names.insert("DsplyInstr_10_set");

        TrdRptOrdDetl_0.add_element(DsplyInstr_10);
      }
      RptSide_0.add_element(TrdRptOrdDetl_0);
    }
    elt.add_element(RptSide_0);
  } // end RptSide
  { // TrdRepIndicatorsGrp
    xml_element TrdRepIndicatorsGrp_0{"TrdRepIndicatorsGrp"};
    multiset<string> TrdRepIndicatorsGrp_0_set;
    TrdRepIndicatorsGrp_0.add_attribute("PtyRole", "45"); // 1
    TrdRepIndicatorsGrp_0_set.insert("45");
    TrdRepIndicatorsGrp_0.add_attribute("TrdRepInd", "false"); // 1
    TrdRepIndicatorsGrp_0_set.insert("false");
    all_values.push_back(TrdRepIndicatorsGrp_0_set);
    all_compo_names.insert("TrdRepIndicatorsGrp_0_set");

    elt.add_element(TrdRepIndicatorsGrp_0);
  } // end TrdRepIndicatorsGrp
  { // TrdRepIndicatorsGrp
    xml_element TrdRepIndicatorsGrp_1{"TrdRepIndicatorsGrp"};
    multiset<string> TrdRepIndicatorsGrp_1_set;
    TrdRepIndicatorsGrp_1.add_attribute("PtyRole", "44"); // 1
    TrdRepIndicatorsGrp_1_set.insert("44");
    TrdRepIndicatorsGrp_1.add_attribute("TrdRepInd", "true"); // 1
    TrdRepIndicatorsGrp_1_set.insert("true");
    all_values.push_back(TrdRepIndicatorsGrp_1_set);
    all_compo_names.insert("TrdRepIndicatorsGrp_1_set");

    elt.add_element(TrdRepIndicatorsGrp_1);
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
