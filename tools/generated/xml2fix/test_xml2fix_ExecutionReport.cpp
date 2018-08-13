#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ExecutionReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ExecutionReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ExecRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ExecutionReport_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_1637186480"); // 0
  ExecutionReport_message_t_0.insert("OrderID_t_1637186480");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_571833269"); // 0
  ExecutionReport_message_t_0.insert("SecondaryOrderID_t_571833269");
  elt.add_attribute("ID2", "SecondaryClOrdID_t_406565561"); // 0
  ExecutionReport_message_t_0.insert("SecondaryClOrdID_t_406565561");
  elt.add_attribute("ExecID2", "SecondaryExecID_t_1850921046"); // 0
  ExecutionReport_message_t_0.insert("SecondaryExecID_t_1850921046");
  elt.add_attribute("ID", "ClOrdID_t_741980785"); // 0
  ExecutionReport_message_t_0.insert("ClOrdID_t_741980785");
  elt.add_attribute("OrigID", "OrigClOrdID_t_687778893"); // 0
  ExecutionReport_message_t_0.insert("OrigClOrdID_t_687778893");
  elt.add_attribute("LnkID", "ClOrdLinkID_t_1249816741"); // 0
  ExecutionReport_message_t_0.insert("ClOrdLinkID_t_1249816741");
  elt.add_attribute("RspID", "QuoteRespID_t_949922379"); // 0
  ExecutionReport_message_t_0.insert("QuoteRespID_t_949922379");
  elt.add_attribute("StatReqID", "OrdStatusReqID_t_1176246002"); // 0
  ExecutionReport_message_t_0.insert("OrdStatusReqID_t_1176246002");
  elt.add_attribute("MassStatReqID", "MassStatusReqID_t_534321875"); // 0
  ExecutionReport_message_t_0.insert("MassStatusReqID_t_534321875");
  elt.add_attribute("HstCxID", "HostCrossID_t_871574610"); // 0
  ExecutionReport_message_t_0.insert("HostCrossID_t_871574610");
  elt.add_attribute("TotNumRpts", "1433786016"); // 0
  ExecutionReport_message_t_0.insert("1433786016");
  elt.add_attribute("LastRptReqed", "Y"); // 0
  ExecutionReport_message_t_0.insert("Y");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_1457503285"); // 0
  ExecutionReport_message_t_0.insert("TradeOriginationDate_t_1457503285");
  elt.add_attribute("ListID", "ListID_t_71332392"); // 0
  ExecutionReport_message_t_0.insert("ListID_t_71332392");
  elt.add_attribute("CrssID", "CrossID_t_1576925481"); // 0
  ExecutionReport_message_t_0.insert("CrossID_t_1576925481");
  elt.add_attribute("OrigCrssID", "OrigCrossID_t_756423916"); // 0
  ExecutionReport_message_t_0.insert("OrigCrossID_t_756423916");
  elt.add_attribute("CrssTyp", "3"); // 0
  ExecutionReport_message_t_0.insert("3");
  elt.add_attribute("MtchID", "TrdMatchID_t_1639260762"); // 0
  ExecutionReport_message_t_0.insert("TrdMatchID_t_1639260762");
  elt.add_attribute("ExecID", "ExecID_t_1972631123"); // 0
  ExecutionReport_message_t_0.insert("ExecID_t_1972631123");
  elt.add_attribute("ExecRefID", "ExecRefID_t_1168489872"); // 0
  ExecutionReport_message_t_0.insert("ExecRefID_t_1168489872");
  elt.add_attribute("ExecTyp", "B"); // 0
  ExecutionReport_message_t_0.insert("B");
  elt.add_attribute("Stat", "E"); // 0
  ExecutionReport_message_t_0.insert("E");
  elt.add_attribute("WorkingInd", "Y"); // 0
  ExecutionReport_message_t_0.insert("Y");
  elt.add_attribute("RejRsn", "15"); // 0
  ExecutionReport_message_t_0.insert("15");
  elt.add_attribute("ExecRstmtRsn", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("Acct", "Account_t_1536364074"); // 0
  ExecutionReport_message_t_0.insert("Account_t_1536364074");
  elt.add_attribute("AcctIDSrc", "99"); // 0
  ExecutionReport_message_t_0.insert("99");
  elt.add_attribute("AcctTyp", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("DayBkngInst", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("BkngUnit", "2"); // 0
  ExecutionReport_message_t_0.insert("2");
  elt.add_attribute("PreallocMeth", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("AllocID", "AllocID_t_2102696721"); // 0
  ExecutionReport_message_t_0.insert("AllocID_t_2102696721");
  elt.add_attribute("SettlTyp", "7"); // 0
  ExecutionReport_message_t_0.insert("7");
  elt.add_attribute("SettlDt", "SettlDate_t_1952123761"); // 0
  ExecutionReport_message_t_0.insert("SettlDate_t_1952123761");
  elt.add_attribute("MtchTyp", "M1"); // 0
  ExecutionReport_message_t_0.insert("M1");
  elt.add_attribute("OrdCat", "8"); // 0
  ExecutionReport_message_t_0.insert("8");
  elt.add_attribute("CshMgn", "2"); // 0
  ExecutionReport_message_t_0.insert("2");
  elt.add_attribute("ClrFeeInd", "L"); // 0
  ExecutionReport_message_t_0.insert("L");
  elt.add_attribute("Side", "3"); // 0
  ExecutionReport_message_t_0.insert("3");
  elt.add_attribute("QtyTyp", "0"); // 0
  ExecutionReport_message_t_0.insert("0");
  elt.add_attribute("LotTyp", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("Typ", "B"); // 0
  ExecutionReport_message_t_0.insert("B");
  elt.add_attribute("PxTyp", "6"); // 0
  ExecutionReport_message_t_0.insert("6");
  elt.add_attribute("Px", "18287104.860000"); // 0
  ExecutionReport_message_t_0.insert("18287104.860000");
  elt.add_attribute("PxPrtScp", "3"); // 0
  ExecutionReport_message_t_0.insert("3");
  elt.add_attribute("StopPx", "8570303.000000"); // 0
  ExecutionReport_message_t_0.insert("8570303.000000");
  elt.add_attribute("PeggedPx", "4376507.540000"); // 0
  ExecutionReport_message_t_0.insert("4376507.540000");
  elt.add_attribute("PggdRefPx", "11401827.650000"); // 0
  ExecutionReport_message_t_0.insert("11401827.650000");
  elt.add_attribute("DsctnPx", "3488074.140000"); // 0
  ExecutionReport_message_t_0.insert("3488074.140000");
  elt.add_attribute("TgtStrategy", "3"); // 0
  ExecutionReport_message_t_0.insert("3");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_161188989"); // 0
  ExecutionReport_message_t_0.insert("TargetStrategyParameters_t_161188989");
  elt.add_attribute("ParticipationRt", "6304080.230000"); // 0
  ExecutionReport_message_t_0.insert("6304080.230000");
  elt.add_attribute("TgtStrategyPerformance", "4769006.370000"); // 0
  ExecutionReport_message_t_0.insert("4769006.370000");
  elt.add_attribute("Ccy", "CAN"); // 0
  ExecutionReport_message_t_0.insert("CAN");
  elt.add_attribute("ComplianceID", "ComplianceID_t_383391667"); // 0
  ExecutionReport_message_t_0.insert("ComplianceID_t_383391667");
  elt.add_attribute("SolFlag", "Y"); // 0
  ExecutionReport_message_t_0.insert("Y");
  elt.add_attribute("TmInForce", "4"); // 0
  ExecutionReport_message_t_0.insert("4");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_994891549"); // 0
  ExecutionReport_message_t_0.insert("EffectiveTime_t_994891549");
  elt.add_attribute("ExpireDt", "ExpireDate_t_1598642787"); // 0
  ExecutionReport_message_t_0.insert("ExpireDate_t_1598642787");
  elt.add_attribute("ExpireTm", "ExpireTime_t_726451876"); // 0
  ExecutionReport_message_t_0.insert("ExpireTime_t_726451876");
  elt.add_attribute("ExecInst", "m"); // 0
  ExecutionReport_message_t_0.insert("m");
  elt.add_attribute("AgrsrInd", "Y"); // 0
  ExecutionReport_message_t_0.insert("Y");
  elt.add_attribute("Cpcty", "A"); // 0
  ExecutionReport_message_t_0.insert("A");
  elt.add_attribute("Rstctions", "9"); // 0
  ExecutionReport_message_t_0.insert("9");
  elt.add_attribute("PrTrdAnon", "false"); // 0
  ExecutionReport_message_t_0.insert("false");
  elt.add_attribute("CustCpcty", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("LastQty", "19551912.330000"); // 0
  ExecutionReport_message_t_0.insert("19551912.330000");
  elt.add_attribute("CalcCcyLastQty", "17506823.090000"); // 0
  ExecutionReport_message_t_0.insert("17506823.090000");
  elt.add_attribute("LastSwapPnts", "11542969.390000"); // 0
  ExecutionReport_message_t_0.insert("11542969.390000");
  elt.add_attribute("UndLastQty", "13964863.150000"); // 0
  ExecutionReport_message_t_0.insert("13964863.150000");
  elt.add_attribute("LastPx", "21218895.090000"); // 0
  ExecutionReport_message_t_0.insert("21218895.090000");
  elt.add_attribute("UndLastPx", "8808100.770000"); // 0
  ExecutionReport_message_t_0.insert("8808100.770000");
  elt.add_attribute("LastParPx", "6765911.340000"); // 0
  ExecutionReport_message_t_0.insert("6765911.340000");
  elt.add_attribute("LastSpotRt", "18031163.470000"); // 0
  ExecutionReport_message_t_0.insert("18031163.470000");
  elt.add_attribute("LastFwdPnts", "6786556.080000"); // 0
  ExecutionReport_message_t_0.insert("6786556.080000");
  elt.add_attribute("LastMkt", "LastMkt_t_1533621434"); // 0
  ExecutionReport_message_t_0.insert("LastMkt_t_1533621434");
  elt.add_attribute("SesID", "3"); // 0
  ExecutionReport_message_t_0.insert("3");
  elt.add_attribute("SesSub", "3"); // 0
  ExecutionReport_message_t_0.insert("3");
  elt.add_attribute("TmBkt", "TimeBracket_t_1882428849"); // 0
  ExecutionReport_message_t_0.insert("TimeBracket_t_1882428849");
  elt.add_attribute("LastCpcty", "4"); // 0
  ExecutionReport_message_t_0.insert("4");
  elt.add_attribute("LeavesQty", "19800273.620000"); // 0
  ExecutionReport_message_t_0.insert("19800273.620000");
  elt.add_attribute("CumQty", "3653532.240000"); // 0
  ExecutionReport_message_t_0.insert("3653532.240000");
  elt.add_attribute("AvgPx", "8329823.210000"); // 0
  ExecutionReport_message_t_0.insert("8329823.210000");
  elt.add_attribute("DayOrdQty", "5114426.230000"); // 0
  ExecutionReport_message_t_0.insert("5114426.230000");
  elt.add_attribute("DayCumQty", "10582280.870000"); // 0
  ExecutionReport_message_t_0.insert("10582280.870000");
  elt.add_attribute("DayAvgPx", "12163739.880000"); // 0
  ExecutionReport_message_t_0.insert("12163739.880000");
  elt.add_attribute("TotNoFills", "579221958"); // 0
  ExecutionReport_message_t_0.insert("579221958");
  elt.add_attribute("LastFragment", "Y"); // 0
  ExecutionReport_message_t_0.insert("Y");
  elt.add_attribute("GTBkngInst", "2"); // 0
  ExecutionReport_message_t_0.insert("2");
  elt.add_attribute("TrdDt", "TradeDate_t_30381097"); // 0
  ExecutionReport_message_t_0.insert("TradeDate_t_30381097");
  elt.add_attribute("TxnTm", "TransactTime_t_46544230"); // 0
  ExecutionReport_message_t_0.insert("TransactTime_t_46544230");
  elt.add_attribute("RptToExch", "N"); // 0
  ExecutionReport_message_t_0.insert("N");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_1584236957"); // 0
  ExecutionReport_message_t_0.insert("GrossTradeAmt_t_1584236957");
  elt.add_attribute("NumDaysInt", "1496665630"); // 0
  ExecutionReport_message_t_0.insert("1496665630");
  elt.add_attribute("ExDt", "ExDate_t_2060610532"); // 0
  ExecutionReport_message_t_0.insert("ExDate_t_2060610532");
  elt.add_attribute("AcrdIntRt", "16878030.280000"); // 0
  ExecutionReport_message_t_0.insert("16878030.280000");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_63268150"); // 0
  ExecutionReport_message_t_0.insert("AccruedInterestAmt_t_63268150");
  elt.add_attribute("IntAtMat", "InterestAtMaturity_t_1868318117"); // 0
  ExecutionReport_message_t_0.insert("InterestAtMaturity_t_1868318117");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_1291001689"); // 0
  ExecutionReport_message_t_0.insert("EndAccruedInterestAmt_t_1291001689");
  elt.add_attribute("StartCsh", "StartCash_t_1217565089"); // 0
  ExecutionReport_message_t_0.insert("StartCash_t_1217565089");
  elt.add_attribute("EndCsh", "EndCash_t_1117320784"); // 0
  ExecutionReport_message_t_0.insert("EndCash_t_1117320784");
  elt.add_attribute("TrddFlatSwitch", "Y"); // 0
  ExecutionReport_message_t_0.insert("Y");
  elt.add_attribute("BasisFeatureDt", "BasisFeatureDate_t_2098375167"); // 0
  ExecutionReport_message_t_0.insert("BasisFeatureDate_t_2098375167");
  elt.add_attribute("BasisFeaturePx", "17939119.180000"); // 0
  ExecutionReport_message_t_0.insert("17939119.180000");
  elt.add_attribute("Concession", "Concession_t_921040250"); // 0
  ExecutionReport_message_t_0.insert("Concession_t_921040250");
  elt.add_attribute("TotTakedown", "TotalTakedown_t_629547127"); // 0
  ExecutionReport_message_t_0.insert("TotalTakedown_t_629547127");
  elt.add_attribute("NetMny", "NetMoney_t_1180049704"); // 0
  ExecutionReport_message_t_0.insert("NetMoney_t_1180049704");
  elt.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1014323704"); // 0
  ExecutionReport_message_t_0.insert("SettlCurrAmt_t_1014323704");
  elt.add_attribute("SettlCcy", "CAN"); // 0
  ExecutionReport_message_t_0.insert("CAN");
  elt.add_attribute("SettlCurrFxRt", "13704053.880000"); // 0
  ExecutionReport_message_t_0.insert("13704053.880000");
  elt.add_attribute("SettlCurrFxRtCalc", "D"); // 0
  ExecutionReport_message_t_0.insert("D");
  elt.add_attribute("HandlInst", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("MinQty", "559040.610000"); // 0
  ExecutionReport_message_t_0.insert("559040.610000");
  elt.add_attribute("MtchInc", "6448881.900000"); // 0
  ExecutionReport_message_t_0.insert("6448881.900000");
  elt.add_attribute("MxPxLvls", "191092569"); // 0
  ExecutionReport_message_t_0.insert("191092569");
  elt.add_attribute("MaxFloor", "12722780.490000"); // 0
  ExecutionReport_message_t_0.insert("12722780.490000");
  elt.add_attribute("PosEfct", "C"); // 0
  ExecutionReport_message_t_0.insert("C");
  elt.add_attribute("MaxShow", "16586685.710000"); // 0
  ExecutionReport_message_t_0.insert("16586685.710000");
  elt.add_attribute("BkngTyp", "2"); // 0
  ExecutionReport_message_t_0.insert("2");
  elt.add_attribute("Txt", "Text_t_1254491245"); // 0
  ExecutionReport_message_t_0.insert("Text_t_1254491245");
  elt.add_attribute("EncTxtLen", "1705212801"); // 0
  ExecutionReport_message_t_0.insert("1705212801");
  elt.add_attribute("EncTxt", "EncodedText_t_348452444"); // 0
  ExecutionReport_message_t_0.insert("EncodedText_t_348452444");
  elt.add_attribute("SettlDt2", "SettlDate2_t_691244555"); // 0
  ExecutionReport_message_t_0.insert("SettlDate2_t_691244555");
  elt.add_attribute("Qty2", "10543947.830000"); // 0
  ExecutionReport_message_t_0.insert("10543947.830000");
  elt.add_attribute("LastFwdPnts2", "2615793.280000"); // 0
  ExecutionReport_message_t_0.insert("2615793.280000");
  elt.add_attribute("MLegRptTyp", "2"); // 0
  ExecutionReport_message_t_0.insert("2");
  elt.add_attribute("CxllationRights", "N"); // 0
  ExecutionReport_message_t_0.insert("N");
  elt.add_attribute("MnyLaunderingStat", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("RegistID", "RegistID_t_1522565625"); // 0
  ExecutionReport_message_t_0.insert("RegistID_t_1522565625");
  elt.add_attribute("Designation", "Designation_t_187744375"); // 0
  ExecutionReport_message_t_0.insert("Designation_t_187744375");
  elt.add_attribute("TransBkdTm", "TransBkdTime_t_1099734581"); // 0
  ExecutionReport_message_t_0.insert("TransBkdTime_t_1099734581");
  elt.add_attribute("ExecValuationPoint", "ExecValuationPoint_t_640489528"); // 0
  ExecutionReport_message_t_0.insert("ExecValuationPoint_t_640489528");
  elt.add_attribute("ExecPxTyp", "Q"); // 0
  ExecutionReport_message_t_0.insert("Q");
  elt.add_attribute("ExecPxAdjment", "7461628.510000"); // 0
  ExecutionReport_message_t_0.insert("7461628.510000");
  elt.add_attribute("PriInd", "0"); // 0
  ExecutionReport_message_t_0.insert("0");
  elt.add_attribute("PxImprvmnt", "7681830.210000"); // 0
  ExecutionReport_message_t_0.insert("7681830.210000");
  elt.add_attribute("LastLqdtyInd", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("CopyMsgInd", "false"); // 0
  ExecutionReport_message_t_0.insert("false");
  elt.add_attribute("DividendYield", "10690848.740000"); // 0
  ExecutionReport_message_t_0.insert("10690848.740000");
  elt.add_attribute("ManOrdInd", "false"); // 0
  ExecutionReport_message_t_0.insert("false");
  elt.add_attribute("CustDrctdOrd", "false"); // 0
  ExecutionReport_message_t_0.insert("false");
  elt.add_attribute("RcvdDptID", "ReceivedDeptID_t_1202530442"); // 0
  ExecutionReport_message_t_0.insert("ReceivedDeptID_t_1202530442");
  elt.add_attribute("CustOrdHdlInst", "NH"); // 0
  ExecutionReport_message_t_0.insert("NH");
  elt.add_attribute("OrdHndlInstSrc", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("Vol", "18474186.320000"); // 0
  ExecutionReport_message_t_0.insert("18474186.320000");
  elt.add_attribute("TmToExp", "176808.650000"); // 0
  ExecutionReport_message_t_0.insert("176808.650000");
  elt.add_attribute("RFR", "9794736.850000"); // 0
  ExecutionReport_message_t_0.insert("9794736.850000");
  elt.add_attribute("PxDelta", "9240451.330000"); // 0
  ExecutionReport_message_t_0.insert("9240451.330000");
  all_values.push_back(ExecutionReport_message_t_0);
  all_compo_names.insert("ExecutionReport_message_t");

  { // Hdr
    xml_element Hdr_32{"Hdr"};
    multiset<string> Hdr_32_set;
    Hdr_32.add_attribute("SeqNum", "1676349436"); // 1
    Hdr_32_set.insert("1676349436");
    Hdr_32.add_attribute("SID", "SenderCompID_t_168049975"); // 1
    Hdr_32_set.insert("SenderCompID_t_168049975");
    Hdr_32.add_attribute("TID", "TargetCompID_t_31052730"); // 1
    Hdr_32_set.insert("TargetCompID_t_31052730");
    Hdr_32.add_attribute("OBID", "OnBehalfOfCompID_t_1234078589"); // 1
    Hdr_32_set.insert("OnBehalfOfCompID_t_1234078589");
    Hdr_32.add_attribute("D2ID", "DeliverToCompID_t_516502420"); // 1
    Hdr_32_set.insert("DeliverToCompID_t_516502420");
    Hdr_32.add_attribute("SSub", "SenderSubID_t_722297285"); // 1
    Hdr_32_set.insert("SenderSubID_t_722297285");
    Hdr_32.add_attribute("SLoc", "SenderLocationID_t_140989724"); // 1
    Hdr_32_set.insert("SenderLocationID_t_140989724");
    Hdr_32.add_attribute("TSub", "TargetSubID_t_778081748"); // 1
    Hdr_32_set.insert("TargetSubID_t_778081748");
    Hdr_32.add_attribute("TLoc", "TargetLocationID_t_953861221"); // 1
    Hdr_32_set.insert("TargetLocationID_t_953861221");
    Hdr_32.add_attribute("OBSub", "OnBehalfOfSubID_t_1258652657"); // 1
    Hdr_32_set.insert("OnBehalfOfSubID_t_1258652657");
    Hdr_32.add_attribute("OBLoc", "OnBehalfOfLocationID_t_760495546"); // 1
    Hdr_32_set.insert("OnBehalfOfLocationID_t_760495546");
    Hdr_32.add_attribute("D2Sub", "DeliverToSubID_t_328943198"); // 1
    Hdr_32_set.insert("DeliverToSubID_t_328943198");
    Hdr_32.add_attribute("D2Loc", "DeliverToLocationID_t_1446397032"); // 1
    Hdr_32_set.insert("DeliverToLocationID_t_1446397032");
    Hdr_32.add_attribute("PosDup", "Y"); // 1
    Hdr_32_set.insert("Y");
    Hdr_32.add_attribute("PosRsnd", "N"); // 1
    Hdr_32_set.insert("N");
    Hdr_32.add_attribute("Snt", "SendingTime_t_1585032926"); // 1
    Hdr_32_set.insert("SendingTime_t_1585032926");
    Hdr_32.add_attribute("OrigSnt", "OrigSendingTime_t_458909331"); // 1
    Hdr_32_set.insert("OrigSendingTime_t_458909331");
    Hdr_32.add_attribute("MsgEncd", "MessageEncoding_t_383478856"); // 1
    Hdr_32_set.insert("MessageEncoding_t_383478856");
    all_values.push_back(Hdr_32_set);
    all_compo_names.insert("Hdr_32_set");

    {
      xml_element Hop_32{"Hop"};
      multiset<string> Hop_32_set;
      Hop_32.add_attribute("ID", "HopCompID_t_205732300"); // 2
      Hop_32_set.insert("HopCompID_t_205732300");
      Hop_32.add_attribute("Ref", "237638239"); // 2
      Hop_32_set.insert("237638239");
      Hop_32.add_attribute("Snt", "HopSendingTime_t_811848691"); // 2
      Hop_32_set.insert("HopSendingTime_t_811848691");
      all_values.push_back(Hop_32_set);
      all_compo_names.insert("Hop_32_set");

      Hdr_32.add_element(Hop_32);
    }
    elt.add_element(Hdr_32);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_4{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_4_set;
    ApplSeqCtrl_4.add_attribute("ApplID", "ApplID_t_1274817174"); // 1
    ApplSeqCtrl_4_set.insert("ApplID_t_1274817174");
    ApplSeqCtrl_4.add_attribute("ApplSeqNum", "931362052"); // 1
    ApplSeqCtrl_4_set.insert("931362052");
    ApplSeqCtrl_4.add_attribute("ApplLastSeqNum", "463140266"); // 1
    ApplSeqCtrl_4_set.insert("463140266");
    ApplSeqCtrl_4.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_4_set.insert("true");
    all_values.push_back(ApplSeqCtrl_4_set);
    all_compo_names.insert("ApplSeqCtrl_4_set");

    elt.add_element(ApplSeqCtrl_4);
  } // end ApplSeqCtrl
  { // Pty
    xml_element Pty_150{"Pty"};
    multiset<string> Pty_150_set;
    Pty_150.add_attribute("ID", "PartyID_t_170335902"); // 1
    Pty_150_set.insert("PartyID_t_170335902");
    Pty_150.add_attribute("Src", "8"); // 1
    Pty_150_set.insert("8");
    Pty_150.add_attribute("R", "79"); // 1
    Pty_150_set.insert("79");
    all_values.push_back(Pty_150_set);
    all_compo_names.insert("Pty_150_set");

    {
      xml_element Sub_150{"Sub"};
      multiset<string> Sub_150_set;
      Sub_150.add_attribute("ID", "PartySubID_t_1149809587"); // 2
      Sub_150_set.insert("PartySubID_t_1149809587");
      Sub_150.add_attribute("Typ", "17"); // 2
      Sub_150_set.insert("17");
      all_values.push_back(Sub_150_set);
      all_compo_names.insert("Sub_150_set");

      Pty_150.add_element(Sub_150);
    }
    elt.add_element(Pty_150);
  } // end Pty
  { // Contra
    xml_element Contra_0{"Contra"};
    multiset<string> Contra_0_set;
    Contra_0.add_attribute("CntraBrkr", "ContraBroker_t_1317859563"); // 1
    Contra_0_set.insert("ContraBroker_t_1317859563");
    Contra_0.add_attribute("CntraTrdr", "ContraTrader_t_984896816"); // 1
    Contra_0_set.insert("ContraTrader_t_984896816");
    Contra_0.add_attribute("CntraTrdQty", "15385755.900000"); // 1
    Contra_0_set.insert("15385755.900000");
    Contra_0.add_attribute("CntraTrdTm", "ContraTradeTime_t_1834361983"); // 1
    Contra_0_set.insert("ContraTradeTime_t_1834361983");
    Contra_0.add_attribute("CntraLegRefID", "ContraLegRefID_t_1707194102"); // 1
    Contra_0_set.insert("ContraLegRefID_t_1707194102");
    all_values.push_back(Contra_0_set);
    all_compo_names.insert("Contra_0_set");

    elt.add_element(Contra_0);
  } // end Contra
  { // Contra
    xml_element Contra_1{"Contra"};
    multiset<string> Contra_1_set;
    Contra_1.add_attribute("CntraBrkr", "ContraBroker_t_1679565314"); // 1
    Contra_1_set.insert("ContraBroker_t_1679565314");
    Contra_1.add_attribute("CntraTrdr", "ContraTrader_t_464960083"); // 1
    Contra_1_set.insert("ContraTrader_t_464960083");
    Contra_1.add_attribute("CntraTrdQty", "5135716.750000"); // 1
    Contra_1_set.insert("5135716.750000");
    Contra_1.add_attribute("CntraTrdTm", "ContraTradeTime_t_790734323"); // 1
    Contra_1_set.insert("ContraTradeTime_t_790734323");
    Contra_1.add_attribute("CntraLegRefID", "ContraLegRefID_t_1225455629"); // 1
    Contra_1_set.insert("ContraLegRefID_t_1225455629");
    all_values.push_back(Contra_1_set);
    all_compo_names.insert("Contra_1_set");

    elt.add_element(Contra_1);
  } // end Contra
  { // PreAll
    xml_element PreAll_1{"PreAll"};
    multiset<string> PreAll_1_set;
    PreAll_1.add_attribute("Acct", "AllocAccount_t_89647708"); // 1
    PreAll_1_set.insert("AllocAccount_t_89647708");
    PreAll_1.add_attribute("ActIDSrc", "2"); // 1
    PreAll_1_set.insert("2");
    PreAll_1.add_attribute("AllocSettlCcy", "USD"); // 1
    PreAll_1_set.insert("USD");
    PreAll_1.add_attribute("IndAllocID", "IndividualAllocID_t_1397111440"); // 1
    PreAll_1_set.insert("IndividualAllocID_t_1397111440");
    PreAll_1.add_attribute("Qty", "479428.070000"); // 1
    PreAll_1_set.insert("479428.070000");
    all_values.push_back(PreAll_1_set);
    all_compo_names.insert("PreAll_1_set");

    {
      xml_element Pty_151{"Pty"};
      multiset<string> Pty_151_set;
      Pty_151.add_attribute("ID", "NestedPartyID_t_1880412934"); // 2
      Pty_151_set.insert("NestedPartyID_t_1880412934");
      Pty_151.add_attribute("Src", "C"); // 2
      Pty_151_set.insert("C");
      Pty_151.add_attribute("R", "16"); // 2
      Pty_151_set.insert("16");
      all_values.push_back(Pty_151_set);
      all_compo_names.insert("Pty_151_set");

      {
        xml_element Sub_151{"Sub"};
        multiset<string> Sub_151_set;
        Sub_151.add_attribute("ID", "NestedPartySubID_t_1007746461"); // 3
        Sub_151_set.insert("NestedPartySubID_t_1007746461");
        Sub_151.add_attribute("Typ", "24"); // 3
        Sub_151_set.insert("24");
        all_values.push_back(Sub_151_set);
        all_compo_names.insert("Sub_151_set");

        Pty_151.add_element(Sub_151);
      }
      PreAll_1.add_element(Pty_151);
    }
    elt.add_element(PreAll_1);
  } // end PreAll
  { // Instrmt
    xml_element Instrmt_25{"Instrmt"};
    multiset<string> Instrmt_25_set;
    Instrmt_25.add_attribute("Sym", "Symbol_t_1322931765"); // 1
    Instrmt_25_set.insert("Symbol_t_1322931765");
    Instrmt_25.add_attribute("Sfx", "WI"); // 1
    Instrmt_25_set.insert("WI");
    Instrmt_25.add_attribute("ID", "SecurityID_t_1176578431"); // 1
    Instrmt_25_set.insert("SecurityID_t_1176578431");
    Instrmt_25.add_attribute("Src", "3"); // 1
    Instrmt_25_set.insert("3");
    Instrmt_25.add_attribute("Prod", "10"); // 1
    Instrmt_25_set.insert("10");
    Instrmt_25.add_attribute("ProdCmplx", "ProductComplex_t_1952209644"); // 1
    Instrmt_25_set.insert("ProductComplex_t_1952209644");
    Instrmt_25.add_attribute("SecGrp", "SecurityGroup_t_495593607"); // 1
    Instrmt_25_set.insert("SecurityGroup_t_495593607");
    Instrmt_25.add_attribute("CFI", "CFICode_t_173769820"); // 1
    Instrmt_25_set.insert("CFICode_t_173769820");
    Instrmt_25.add_attribute("SecTyp", "TAXA"); // 1
    Instrmt_25_set.insert("TAXA");
    Instrmt_25.add_attribute("SubTyp", "SecuritySubType_t_1813453170"); // 1
    Instrmt_25_set.insert("SecuritySubType_t_1813453170");
    Instrmt_25.add_attribute("MMY", "1158666637"); // 1
    Instrmt_25_set.insert("1158666637");
    Instrmt_25.add_attribute("MatDt", "MaturityDate_t_1647798587"); // 1
    Instrmt_25_set.insert("MaturityDate_t_1647798587");
    Instrmt_25.add_attribute("MatTm", "1500331505"); // 1
    Instrmt_25_set.insert("1500331505");
    Instrmt_25.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_718377091"); // 1
    Instrmt_25_set.insert("SettleOnOpenFlag_t_718377091");
    Instrmt_25.add_attribute("AsgnMeth", "1179880253"); // 1
    Instrmt_25_set.insert("1179880253");
    Instrmt_25.add_attribute("Status", "2"); // 1
    Instrmt_25_set.insert("2");
    Instrmt_25.add_attribute("CpnPmt", "CouponPaymentDate_t_1231948766"); // 1
    Instrmt_25_set.insert("CouponPaymentDate_t_1231948766");
    Instrmt_25.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_25_set.insert("MR");
    Instrmt_25.add_attribute("Snrty", "SR"); // 1
    Instrmt_25_set.insert("SR");
    Instrmt_25.add_attribute("NotlPctOut", "20744636.390000"); // 1
    Instrmt_25_set.insert("20744636.390000");
    Instrmt_25.add_attribute("OrigNotlPctOut", "20602622.850000"); // 1
    Instrmt_25_set.insert("20602622.850000");
    Instrmt_25.add_attribute("AttchPnt", "19814656.790000"); // 1
    Instrmt_25_set.insert("19814656.790000");
    Instrmt_25.add_attribute("DetchPnt", "17389275.900000"); // 1
    Instrmt_25_set.insert("17389275.900000");
    Instrmt_25.add_attribute("Issued", "IssueDate_t_1587459271"); // 1
    Instrmt_25_set.insert("IssueDate_t_1587459271");
    Instrmt_25.add_attribute("RepoCollSecTyp", "1231093471"); // 1
    Instrmt_25_set.insert("1231093471");
    Instrmt_25.add_attribute("RepoTrm", "1786870397"); // 1
    Instrmt_25_set.insert("1786870397");
    Instrmt_25.add_attribute("RepoRt", "13203885.580000"); // 1
    Instrmt_25_set.insert("13203885.580000");
    Instrmt_25.add_attribute("Fctr", "7183595.020000"); // 1
    Instrmt_25_set.insert("7183595.020000");
    Instrmt_25.add_attribute("CrdRtg", "CreditRating_t_499178248"); // 1
    Instrmt_25_set.insert("CreditRating_t_499178248");
    Instrmt_25.add_attribute("Rgstry", "InstrRegistry_t_180651371"); // 1
    Instrmt_25_set.insert("InstrRegistry_t_180651371");
    Instrmt_25.add_attribute("IssuCtry", "1136987586"); // 1
    Instrmt_25_set.insert("1136987586");
    Instrmt_25.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1822110014"); // 1
    Instrmt_25_set.insert("StateOrProvinceOfIssue_t_1822110014");
    Instrmt_25.add_attribute("Lcl", "LocaleOfIssue_t_1518261800"); // 1
    Instrmt_25_set.insert("LocaleOfIssue_t_1518261800");
    Instrmt_25.add_attribute("Redeem", "RedemptionDate_t_166082369"); // 1
    Instrmt_25_set.insert("RedemptionDate_t_166082369");
    Instrmt_25.add_attribute("StrkPx", "11678940.340000"); // 1
    Instrmt_25_set.insert("11678940.340000");
    Instrmt_25.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_25_set.insert("USD");
    Instrmt_25.add_attribute("StrkMult", "16634876.410000"); // 1
    Instrmt_25_set.insert("16634876.410000");
    Instrmt_25.add_attribute("StrkValu", "9119573.550000"); // 1
    Instrmt_25_set.insert("9119573.550000");
    Instrmt_25.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_25_set.insert("4");
    Instrmt_25.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_25_set.insert("5");
    Instrmt_25.add_attribute("StrkPxBndryPrcsn", "20706239.920000"); // 1
    Instrmt_25_set.insert("20706239.920000");
    Instrmt_25.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_25_set.insert("4");
    Instrmt_25.add_attribute("OptAt", "682305021"); // 1
    Instrmt_25_set.insert("682305021");
    Instrmt_25.add_attribute("Mult", "6415174.350000"); // 1
    Instrmt_25_set.insert("6415174.350000");
    Instrmt_25.add_attribute("MultTyp", "0"); // 1
    Instrmt_25_set.insert("0");
    Instrmt_25.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_25_set.insert("2");
    Instrmt_25.add_attribute("MinPxIncr", "18734662.010000"); // 1
    Instrmt_25_set.insert("18734662.010000");
    Instrmt_25.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_583357485"); // 1
    Instrmt_25_set.insert("MinPriceIncrementAmount_t_583357485");
    Instrmt_25.add_attribute("UOM", "Bcf"); // 1
    Instrmt_25_set.insert("Bcf");
    Instrmt_25.add_attribute("UOMQty", "18004461.920000"); // 1
    Instrmt_25_set.insert("18004461.920000");
    Instrmt_25.add_attribute("PxUOM", "MMBtu"); // 1
    Instrmt_25_set.insert("MMBtu");
    Instrmt_25.add_attribute("PxUOMQty", "13773585.640000"); // 1
    Instrmt_25_set.insert("13773585.640000");
    Instrmt_25.add_attribute("SettlMeth", "C"); // 1
    Instrmt_25_set.insert("C");
    Instrmt_25.add_attribute("ExerStyle", "0"); // 1
    Instrmt_25_set.insert("0");
    Instrmt_25.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_25_set.insert("2");
    Instrmt_25.add_attribute("OptPayAmt", "OptPayoutAmount_t_1031276884"); // 1
    Instrmt_25_set.insert("OptPayoutAmount_t_1031276884");
    Instrmt_25.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_25_set.insert("STD");
    Instrmt_25.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_25_set.insert("EQTY");
    Instrmt_25.add_attribute("ListMeth", "0"); // 1
    Instrmt_25_set.insert("0");
    Instrmt_25.add_attribute("CapPx", "14371516.750000"); // 1
    Instrmt_25_set.insert("14371516.750000");
    Instrmt_25.add_attribute("FlrPx", "1688318.280000"); // 1
    Instrmt_25_set.insert("1688318.280000");
    Instrmt_25.add_attribute("PutCall", "0"); // 1
    Instrmt_25_set.insert("0");
    Instrmt_25.add_attribute("FlexInd", "false"); // 1
    Instrmt_25_set.insert("false");
    Instrmt_25.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_25_set.insert("true");
    Instrmt_25.add_attribute("TmUnit", "H"); // 1
    Instrmt_25_set.insert("H");
    Instrmt_25.add_attribute("CpnRt", "15461173.620000"); // 1
    Instrmt_25_set.insert("15461173.620000");
    Instrmt_25.add_attribute("Exch", "SecurityExchange_t_305722564"); // 1
    Instrmt_25_set.insert("SecurityExchange_t_305722564");
    Instrmt_25.add_attribute("PosLmt", "1888979526"); // 1
    Instrmt_25_set.insert("1888979526");
    Instrmt_25.add_attribute("NTPosLmt", "310591070"); // 1
    Instrmt_25_set.insert("310591070");
    Instrmt_25.add_attribute("Issr", "Issuer_t_385753927"); // 1
    Instrmt_25_set.insert("Issuer_t_385753927");
    Instrmt_25.add_attribute("EncIssrLen", "1070953042"); // 1
    Instrmt_25_set.insert("1070953042");
    Instrmt_25.add_attribute("EncIssr", "EncodedIssuer_t_233731414"); // 1
    Instrmt_25_set.insert("EncodedIssuer_t_233731414");
    Instrmt_25.add_attribute("Desc", "SecurityDesc_t_2113583878"); // 1
    Instrmt_25_set.insert("SecurityDesc_t_2113583878");
    Instrmt_25.add_attribute("EncSecDescLen", "1753258063"); // 1
    Instrmt_25_set.insert("1753258063");
    Instrmt_25.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_875248850"); // 1
    Instrmt_25_set.insert("EncodedSecurityDesc_t_875248850");
    Instrmt_25.add_attribute("Pool", "Pool_t_726326787"); // 1
    Instrmt_25_set.insert("Pool_t_726326787");
    Instrmt_25.add_attribute("CSetMo", "105887378"); // 1
    Instrmt_25_set.insert("105887378");
    Instrmt_25.add_attribute("CPPgm", "99"); // 1
    Instrmt_25_set.insert("99");
    Instrmt_25.add_attribute("CPRegT", "CPRegType_t_1309684272"); // 1
    Instrmt_25_set.insert("CPRegType_t_1309684272");
    Instrmt_25.add_attribute("Dated", "DatedDate_t_1649263911"); // 1
    Instrmt_25_set.insert("DatedDate_t_1649263911");
    Instrmt_25.add_attribute("IntAcrl", "InterestAccrualDate_t_254193948"); // 1
    Instrmt_25_set.insert("InterestAccrualDate_t_254193948");
    all_values.push_back(Instrmt_25_set);
    all_compo_names.insert("Instrmt_25_set");

    {
      xml_element AID_28{"AID"};
      multiset<string> AID_28_set;
      AID_28.add_attribute("AltID", "SecurityAltID_t_1805820395"); // 2
      AID_28_set.insert("SecurityAltID_t_1805820395");
      AID_28.add_attribute("AltIDSrc", "I"); // 2
      AID_28_set.insert("I");
      all_values.push_back(AID_28_set);
      all_compo_names.insert("AID_28_set");

      Instrmt_25.add_element(AID_28);
    }
    {
      xml_element SecXML_28{"SecXML"};
      multiset<string> SecXML_28_set;
      SecXML_28.add_attribute("Schema", "SecurityXMLSchema_t_1646084082"); // 2
      SecXML_28_set.insert("SecurityXMLSchema_t_1646084082");
      all_values.push_back(SecXML_28_set);
      all_compo_names.insert("SecXML_28_set");

      Instrmt_25.add_element(SecXML_28);
    }
    {
      xml_element Evnt_28{"Evnt"};
      multiset<string> Evnt_28_set;
      Evnt_28.add_attribute("EventTyp", "2"); // 2
      Evnt_28_set.insert("2");
      Evnt_28.add_attribute("Dt", "EventDate_t_1340107215"); // 2
      Evnt_28_set.insert("EventDate_t_1340107215");
      Evnt_28.add_attribute("Tm", "EventTime_t_529877318"); // 2
      Evnt_28_set.insert("EventTime_t_529877318");
      Evnt_28.add_attribute("Px", "8509487.970000"); // 2
      Evnt_28_set.insert("8509487.970000");
      Evnt_28.add_attribute("Txt", "EventText_t_371951458"); // 2
      Evnt_28_set.insert("EventText_t_371951458");
      all_values.push_back(Evnt_28_set);
      all_compo_names.insert("Evnt_28_set");

      Instrmt_25.add_element(Evnt_28);
    }
    {
      xml_element Pty_152{"Pty"};
      multiset<string> Pty_152_set;
      Pty_152.add_attribute("ID", "InstrumentPartyID_t_2060332451"); // 2
      Pty_152_set.insert("InstrumentPartyID_t_2060332451");
      Pty_152.add_attribute("Src", "F"); // 2
      Pty_152_set.insert("F");
      Pty_152.add_attribute("R", "30"); // 2
      Pty_152_set.insert("30");
      all_values.push_back(Pty_152_set);
      all_compo_names.insert("Pty_152_set");

      {
        xml_element Sub_152{"Sub"};
        multiset<string> Sub_152_set;
        Sub_152.add_attribute("ID", "InstrumentPartySubID_t_1117930301"); // 3
        Sub_152_set.insert("InstrumentPartySubID_t_1117930301");
        Sub_152.add_attribute("Typ", "31"); // 3
        Sub_152_set.insert("31");
        all_values.push_back(Sub_152_set);
        all_compo_names.insert("Sub_152_set");

        Pty_152.add_element(Sub_152);
      }
      Instrmt_25.add_element(Pty_152);
    }
    {
      xml_element CmplxEvnt_25{"CmplxEvnt"};
      multiset<string> CmplxEvnt_25_set;
      CmplxEvnt_25.add_attribute("Typ", "5"); // 2
      CmplxEvnt_25_set.insert("5");
      CmplxEvnt_25.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1343422186"); // 2
      CmplxEvnt_25_set.insert("ComplexOptPayoutAmount_t_1343422186");
      CmplxEvnt_25.add_attribute("Px", "3471803.660000"); // 2
      CmplxEvnt_25_set.insert("3471803.660000");
      CmplxEvnt_25.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_25_set.insert("4");
      CmplxEvnt_25.add_attribute("PxBndryPrcsn", "10849180.640000"); // 2
      CmplxEvnt_25_set.insert("10849180.640000");
      CmplxEvnt_25.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_25_set.insert("2");
      CmplxEvnt_25.add_attribute("Cond", "1"); // 2
      CmplxEvnt_25_set.insert("1");
      all_values.push_back(CmplxEvnt_25_set);
      all_compo_names.insert("CmplxEvnt_25_set");

      {
        xml_element EvntDts_25{"EvntDts"};
        multiset<string> EvntDts_25_set;
        EvntDts_25.add_attribute("StartDt", "ComplexEventStartDate_t_8387458"); // 3
        EvntDts_25_set.insert("ComplexEventStartDate_t_8387458");
        EvntDts_25.add_attribute("EndDt", "ComplexEventEndDate_t_891502850"); // 3
        EvntDts_25_set.insert("ComplexEventEndDate_t_891502850");
        all_values.push_back(EvntDts_25_set);
        all_compo_names.insert("EvntDts_25_set");

        {
          xml_element EvntTms_25{"EvntTms"};
          multiset<string> EvntTms_25_set;
          EvntTms_25.add_attribute("StartTm", "1533274206"); // 4
          EvntTms_25_set.insert("1533274206");
          EvntTms_25.add_attribute("EndTm", "1761645521"); // 4
          EvntTms_25_set.insert("1761645521");
          all_values.push_back(EvntTms_25_set);
          all_compo_names.insert("EvntTms_25_set");

          EvntDts_25.add_element(EvntTms_25);
        }
        CmplxEvnt_25.add_element(EvntDts_25);
      }
      Instrmt_25.add_element(CmplxEvnt_25);
    }
    elt.add_element(Instrmt_25);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_10{"FinDetls"};
    multiset<string> FinDetls_10_set;
    FinDetls_10.add_attribute("AgmtDesc", "AgreementDesc_t_1766751700"); // 1
    FinDetls_10_set.insert("AgreementDesc_t_1766751700");
    FinDetls_10.add_attribute("AgmtID", "AgreementID_t_112117345"); // 1
    FinDetls_10_set.insert("AgreementID_t_112117345");
    FinDetls_10.add_attribute("AgmtDt", "AgreementDate_t_1867532899"); // 1
    FinDetls_10_set.insert("AgreementDate_t_1867532899");
    FinDetls_10.add_attribute("AgmtCcy", "GBP"); // 1
    FinDetls_10_set.insert("GBP");
    FinDetls_10.add_attribute("TrmTyp", "3"); // 1
    FinDetls_10_set.insert("3");
    FinDetls_10.add_attribute("StartDt", "StartDate_t_474693404"); // 1
    FinDetls_10_set.insert("StartDate_t_474693404");
    FinDetls_10.add_attribute("EndDt", "EndDate_t_1080138365"); // 1
    FinDetls_10_set.insert("EndDate_t_1080138365");
    FinDetls_10.add_attribute("DlvryTyp", "2"); // 1
    FinDetls_10_set.insert("2");
    FinDetls_10.add_attribute("MgnRatio", "21207774.860000"); // 1
    FinDetls_10_set.insert("21207774.860000");
    all_values.push_back(FinDetls_10_set);
    all_compo_names.insert("FinDetls_10_set");

    elt.add_element(FinDetls_10);
  } // end FinDetls
  { // Undly
    xml_element Undly_37{"Undly"};
    multiset<string> Undly_37_set;
    Undly_37.add_attribute("Sym", "UnderlyingSymbol_t_1441075557"); // 1
    Undly_37_set.insert("UnderlyingSymbol_t_1441075557");
    Undly_37.add_attribute("Sfx", "WI"); // 1
    Undly_37_set.insert("WI");
    Undly_37.add_attribute("ID", "UnderlyingSecurityID_t_1525535655"); // 1
    Undly_37_set.insert("UnderlyingSecurityID_t_1525535655");
    Undly_37.add_attribute("Src", "L"); // 1
    Undly_37_set.insert("L");
    Undly_37.add_attribute("Prod", "2"); // 1
    Undly_37_set.insert("2");
    Undly_37.add_attribute("CFI", "UnderlyingCFICode_t_1666152479"); // 1
    Undly_37_set.insert("UnderlyingCFICode_t_1666152479");
    Undly_37.add_attribute("SecTyp", "FXNDF"); // 1
    Undly_37_set.insert("FXNDF");
    Undly_37.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1533950261"); // 1
    Undly_37_set.insert("UnderlyingSecuritySubType_t_1533950261");
    Undly_37.add_attribute("MMY", "467215482"); // 1
    Undly_37_set.insert("467215482");
    Undly_37.add_attribute("Mat", "UnderlyingMaturityDate_t_1082024138"); // 1
    Undly_37_set.insert("UnderlyingMaturityDate_t_1082024138");
    Undly_37.add_attribute("MatTm", "729888799"); // 1
    Undly_37_set.insert("729888799");
    Undly_37.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_814395848"); // 1
    Undly_37_set.insert("UnderlyingCouponPaymentDate_t_814395848");
    Undly_37.add_attribute("RestrctTyp", "XR"); // 1
    Undly_37_set.insert("XR");
    Undly_37.add_attribute("Snrty", "SD"); // 1
    Undly_37_set.insert("SD");
    Undly_37.add_attribute("NotlPctOut", "14721672.840000"); // 1
    Undly_37_set.insert("14721672.840000");
    Undly_37.add_attribute("OrigNotlPctOut", "16831345.150000"); // 1
    Undly_37_set.insert("16831345.150000");
    Undly_37.add_attribute("AttchPnt", "18231943.210000"); // 1
    Undly_37_set.insert("18231943.210000");
    Undly_37.add_attribute("DetchPnt", "2161864.870000"); // 1
    Undly_37_set.insert("2161864.870000");
    Undly_37.add_attribute("Issued", "UnderlyingIssueDate_t_1068925073"); // 1
    Undly_37_set.insert("UnderlyingIssueDate_t_1068925073");
    Undly_37.add_attribute("RepoCollSecTyp", "1437356195"); // 1
    Undly_37_set.insert("1437356195");
    Undly_37.add_attribute("RepoTrm", "1982938187"); // 1
    Undly_37_set.insert("1982938187");
    Undly_37.add_attribute("RepoRt", "11810424.190000"); // 1
    Undly_37_set.insert("11810424.190000");
    Undly_37.add_attribute("Fctr", "11574054.460000"); // 1
    Undly_37_set.insert("11574054.460000");
    Undly_37.add_attribute("CrdRtg", "UnderlyingCreditRating_t_55953995"); // 1
    Undly_37_set.insert("UnderlyingCreditRating_t_55953995");
    Undly_37.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_455360389"); // 1
    Undly_37_set.insert("UnderlyingInstrRegistry_t_455360389");
    Undly_37.add_attribute("Ctry", "379234961"); // 1
    Undly_37_set.insert("379234961");
    Undly_37.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_530647399"); // 1
    Undly_37_set.insert("UnderlyingStateOrProvinceOfIssue_t_530647399");
    Undly_37.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1535498754"); // 1
    Undly_37_set.insert("UnderlyingLocaleOfIssue_t_1535498754");
    Undly_37.add_attribute("Redeem", "UnderlyingRedemptionDate_t_480203303"); // 1
    Undly_37_set.insert("UnderlyingRedemptionDate_t_480203303");
    Undly_37.add_attribute("StrkPx", "5039412.380000"); // 1
    Undly_37_set.insert("5039412.380000");
    Undly_37.add_attribute("StrkCcy", "GBP"); // 1
    Undly_37_set.insert("GBP");
    Undly_37.add_attribute("OptA", "1007112395"); // 1
    Undly_37_set.insert("1007112395");
    Undly_37.add_attribute("Mult", "15881376.190000"); // 1
    Undly_37_set.insert("15881376.190000");
    Undly_37.add_attribute("MultTyp", "2"); // 1
    Undly_37_set.insert("2");
    Undly_37.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_37_set.insert("0");
    Undly_37.add_attribute("UOM", "USD"); // 1
    Undly_37_set.insert("USD");
    Undly_37.add_attribute("UOMQty", "17931488.820000"); // 1
    Undly_37_set.insert("17931488.820000");
    Undly_37.add_attribute("PxUOM", "USD"); // 1
    Undly_37_set.insert("USD");
    Undly_37.add_attribute("PxUOMQty", "15740219.320000"); // 1
    Undly_37_set.insert("15740219.320000");
    Undly_37.add_attribute("TmUnit", "Wk"); // 1
    Undly_37_set.insert("Wk");
    Undly_37.add_attribute("ExerStyle", "1"); // 1
    Undly_37_set.insert("1");
    Undly_37.add_attribute("CpnRt", "2409341.330000"); // 1
    Undly_37_set.insert("2409341.330000");
    Undly_37.add_attribute("Exch", "UnderlyingSecurityExchange_t_843649911"); // 1
    Undly_37_set.insert("UnderlyingSecurityExchange_t_843649911");
    Undly_37.add_attribute("Issr", "UnderlyingIssuer_t_1206810983"); // 1
    Undly_37_set.insert("UnderlyingIssuer_t_1206810983");
    Undly_37.add_attribute("EncUndIssrLen", "1713101417"); // 1
    Undly_37_set.insert("1713101417");
    Undly_37.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_379300778"); // 1
    Undly_37_set.insert("EncodedUnderlyingIssuer_t_379300778");
    Undly_37.add_attribute("Desc", "UnderlyingSecurityDesc_t_882521657"); // 1
    Undly_37_set.insert("UnderlyingSecurityDesc_t_882521657");
    Undly_37.add_attribute("EncUndSecDescLen", "1929287904"); // 1
    Undly_37_set.insert("1929287904");
    Undly_37.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1448225852"); // 1
    Undly_37_set.insert("EncodedUnderlyingSecurityDesc_t_1448225852");
    Undly_37.add_attribute("CPPgm", "UnderlyingCPProgram_t_172394204"); // 1
    Undly_37_set.insert("UnderlyingCPProgram_t_172394204");
    Undly_37.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1764742444"); // 1
    Undly_37_set.insert("UnderlyingCPRegType_t_1764742444");
    Undly_37.add_attribute("AllocPct", "4817846.230000"); // 1
    Undly_37_set.insert("4817846.230000");
    Undly_37.add_attribute("Ccy", "CHF"); // 1
    Undly_37_set.insert("CHF");
    Undly_37.add_attribute("Qty", "9371450.120000"); // 1
    Undly_37_set.insert("9371450.120000");
    Undly_37.add_attribute("SettlTyp", "5"); // 1
    Undly_37_set.insert("5");
    Undly_37.add_attribute("CashAmt", "UnderlyingCashAmount_t_203860191"); // 1
    Undly_37_set.insert("UnderlyingCashAmount_t_203860191");
    Undly_37.add_attribute("CashTyp", "FIXED"); // 1
    Undly_37_set.insert("FIXED");
    Undly_37.add_attribute("Px", "417542.660000"); // 1
    Undly_37_set.insert("417542.660000");
    Undly_37.add_attribute("DirtPx", "7078014.290000"); // 1
    Undly_37_set.insert("7078014.290000");
    Undly_37.add_attribute("EndPx", "3877620.820000"); // 1
    Undly_37_set.insert("3877620.820000");
    Undly_37.add_attribute("StartVal", "UnderlyingStartValue_t_1963033127"); // 1
    Undly_37_set.insert("UnderlyingStartValue_t_1963033127");
    Undly_37.add_attribute("CurVal", "UnderlyingCurrentValue_t_1714913824"); // 1
    Undly_37_set.insert("UnderlyingCurrentValue_t_1714913824");
    Undly_37.add_attribute("EndVal", "UnderlyingEndValue_t_1975899701"); // 1
    Undly_37_set.insert("UnderlyingEndValue_t_1975899701");
    Undly_37.add_attribute("AdjQty", "14023717.070000"); // 1
    Undly_37_set.insert("14023717.070000");
    Undly_37.add_attribute("FxRate", "9905625.310000"); // 1
    Undly_37_set.insert("9905625.310000");
    Undly_37.add_attribute("FxRateCalc", "D"); // 1
    Undly_37_set.insert("D");
    Undly_37.add_attribute("CapValu", "UnderlyingCapValue_t_1048036941"); // 1
    Undly_37_set.insert("UnderlyingCapValue_t_1048036941");
    Undly_37.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1800161499"); // 1
    Undly_37_set.insert("UnderlyingSettlMethod_t_1800161499");
    Undly_37.add_attribute("PutCall", "361760787"); // 1
    Undly_37_set.insert("361760787");
    all_values.push_back(Undly_37_set);
    all_compo_names.insert("Undly_37_set");

    {
      xml_element UndAID_37{"UndAID"};
      multiset<string> UndAID_37_set;
      UndAID_37.add_attribute("AltID", "UnderlyingSecurityAltID_t_1775726313"); // 2
      UndAID_37_set.insert("UnderlyingSecurityAltID_t_1775726313");
      UndAID_37.add_attribute("AltIDSrc", "8"); // 2
      UndAID_37_set.insert("8");
      all_values.push_back(UndAID_37_set);
      all_compo_names.insert("UndAID_37_set");

      Undly_37.add_element(UndAID_37);
    }
    {
      xml_element Stip_57{"Stip"};
      multiset<string> Stip_57_set;
      Stip_57.add_attribute("Typ", "PSA"); // 2
      Stip_57_set.insert("PSA");
      Stip_57.add_attribute("Val", "UnderlyingStipValue_t_471892577"); // 2
      Stip_57_set.insert("UnderlyingStipValue_t_471892577");
      all_values.push_back(Stip_57_set);
      all_compo_names.insert("Stip_57_set");

      Undly_37.add_element(Stip_57);
    }
    {
      xml_element Pty_153{"Pty"};
      multiset<string> Pty_153_set;
      Pty_153.add_attribute("ID", "UnderlyingInstrumentPartyID_t_251492955"); // 2
      Pty_153_set.insert("UnderlyingInstrumentPartyID_t_251492955");
      Pty_153.add_attribute("Src", "1"); // 2
      Pty_153_set.insert("1");
      Pty_153.add_attribute("R", "28"); // 2
      Pty_153_set.insert("28");
      all_values.push_back(Pty_153_set);
      all_compo_names.insert("Pty_153_set");

      {
        xml_element Sub_153{"Sub"};
        multiset<string> Sub_153_set;
        Sub_153.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1134014612"); // 3
        Sub_153_set.insert("UnderlyingInstrumentPartySubID_t_1134014612");
        Sub_153.add_attribute("Typ", "20"); // 3
        Sub_153_set.insert("20");
        all_values.push_back(Sub_153_set);
        all_compo_names.insert("Sub_153_set");

        Pty_153.add_element(Sub_153);
      }
      Undly_37.add_element(Pty_153);
    }
    elt.add_element(Undly_37);
  } // end Undly
  { // Stip
    xml_element Stip_58{"Stip"};
    multiset<string> Stip_58_set;
    Stip_58.add_attribute("Typ", "ISSUER"); // 1
    Stip_58_set.insert("ISSUER");
    Stip_58.add_attribute("Val", "StipulationValue_t_1714859390"); // 1
    Stip_58_set.insert("StipulationValue_t_1714859390");
    all_values.push_back(Stip_58_set);
    all_compo_names.insert("Stip_58_set");

    elt.add_element(Stip_58);
  } // end Stip
  { // Stip
    xml_element Stip_59{"Stip"};
    multiset<string> Stip_59_set;
    Stip_59.add_attribute("Typ", "MATURITY"); // 1
    Stip_59_set.insert("MATURITY");
    Stip_59.add_attribute("Val", "StipulationValue_t_488724818"); // 1
    Stip_59_set.insert("StipulationValue_t_488724818");
    all_values.push_back(Stip_59_set);
    all_compo_names.insert("Stip_59_set");

    elt.add_element(Stip_59);
  } // end Stip
  { // OrdQty
    xml_element OrdQty_6{"OrdQty"};
    multiset<string> OrdQty_6_set;
    OrdQty_6.add_attribute("Qty", "13880721.820000"); // 1
    OrdQty_6_set.insert("13880721.820000");
    OrdQty_6.add_attribute("Cash", "15708651.940000"); // 1
    OrdQty_6_set.insert("15708651.940000");
    OrdQty_6.add_attribute("Pct", "502757.820000"); // 1
    OrdQty_6_set.insert("502757.820000");
    OrdQty_6.add_attribute("RndDir", "1"); // 1
    OrdQty_6_set.insert("1");
    OrdQty_6.add_attribute("RndMod", "18960253.120000"); // 1
    OrdQty_6_set.insert("18960253.120000");
    all_values.push_back(OrdQty_6_set);
    all_compo_names.insert("OrdQty_6_set");

    elt.add_element(OrdQty_6);
  } // end OrdQty
  { // TrgrInstr
    xml_element TrgrInstr_1{"TrgrInstr"};
    multiset<string> TrgrInstr_1_set;
    TrgrInstr_1.add_attribute("TrgrTyp", "1"); // 1
    TrgrInstr_1_set.insert("1");
    TrgrInstr_1.add_attribute("TrgrActn", "2"); // 1
    TrgrInstr_1_set.insert("2");
    TrgrInstr_1.add_attribute("TrgrPx", "1363037.460000"); // 1
    TrgrInstr_1_set.insert("1363037.460000");
    TrgrInstr_1.add_attribute("TrgrSym", "TriggerSymbol_t_2055063175"); // 1
    TrgrInstr_1_set.insert("TriggerSymbol_t_2055063175");
    TrgrInstr_1.add_attribute("TrgrSecID", "TriggerSecurityID_t_1867163978"); // 1
    TrgrInstr_1_set.insert("TriggerSecurityID_t_1867163978");
    TrgrInstr_1.add_attribute("TrgrSecIDSrc", "E"); // 1
    TrgrInstr_1_set.insert("E");
    TrgrInstr_1.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_1309951234"); // 1
    TrgrInstr_1_set.insert("TriggerSecurityDesc_t_1309951234");
    TrgrInstr_1.add_attribute("TrgrPxTyp", "2"); // 1
    TrgrInstr_1_set.insert("2");
    TrgrInstr_1.add_attribute("TrgrPxTypScp", "2"); // 1
    TrgrInstr_1_set.insert("2");
    TrgrInstr_1.add_attribute("TrgrPxDir", "D"); // 1
    TrgrInstr_1_set.insert("D");
    TrgrInstr_1.add_attribute("TrgrNewPx", "3629207.120000"); // 1
    TrgrInstr_1_set.insert("3629207.120000");
    TrgrInstr_1.add_attribute("TrgrOrdTyp", "1"); // 1
    TrgrInstr_1_set.insert("1");
    TrgrInstr_1.add_attribute("TrgrNewQty", "19862308.410000"); // 1
    TrgrInstr_1_set.insert("19862308.410000");
    TrgrInstr_1.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_1555086332"); // 1
    TrgrInstr_1_set.insert("TriggerTradingSessionID_t_1555086332");
    TrgrInstr_1.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_1864398010"); // 1
    TrgrInstr_1_set.insert("TriggerTradingSessionSubID_t_1864398010");
    all_values.push_back(TrgrInstr_1_set);
    all_compo_names.insert("TrgrInstr_1_set");

    elt.add_element(TrgrInstr_1);
  } // end TrgrInstr
  { // PegInstr
    xml_element PegInstr_1{"PegInstr"};
    multiset<string> PegInstr_1_set;
    PegInstr_1.add_attribute("OfstVal", "3106397.700000"); // 1
    PegInstr_1_set.insert("3106397.700000");
    PegInstr_1.add_attribute("PegPxTyp", "9"); // 1
    PegInstr_1_set.insert("9");
    PegInstr_1.add_attribute("MoveTyp", "0"); // 1
    PegInstr_1_set.insert("0");
    PegInstr_1.add_attribute("OfstTyp", "1"); // 1
    PegInstr_1_set.insert("1");
    PegInstr_1.add_attribute("LmtTyp", "2"); // 1
    PegInstr_1_set.insert("2");
    PegInstr_1.add_attribute("RndDir", "2"); // 1
    PegInstr_1_set.insert("2");
    PegInstr_1.add_attribute("Scope", "2"); // 1
    PegInstr_1_set.insert("2");
    PegInstr_1.add_attribute("PegSecurityIDSource", "L"); // 1
    PegInstr_1_set.insert("L");
    PegInstr_1.add_attribute("PegSecID", "PegSecurityID_t_1550203389"); // 1
    PegInstr_1_set.insert("PegSecurityID_t_1550203389");
    PegInstr_1.add_attribute("PgSymbl", "PegSymbol_t_1947488867"); // 1
    PegInstr_1_set.insert("PegSymbol_t_1947488867");
    PegInstr_1.add_attribute("PegSecDesc", "PegSecurityDesc_t_440760237"); // 1
    PegInstr_1_set.insert("PegSecurityDesc_t_440760237");
    all_values.push_back(PegInstr_1_set);
    all_compo_names.insert("PegInstr_1_set");

    elt.add_element(PegInstr_1);
  } // end PegInstr
  { // DiscInstr
    xml_element DiscInstr_1{"DiscInstr"};
    multiset<string> DiscInstr_1_set;
    DiscInstr_1.add_attribute("DsctnInst", "3"); // 1
    DiscInstr_1_set.insert("3");
    DiscInstr_1.add_attribute("OfstValu", "13708704.140000"); // 1
    DiscInstr_1_set.insert("13708704.140000");
    DiscInstr_1.add_attribute("MoveTyp", "1"); // 1
    DiscInstr_1_set.insert("1");
    DiscInstr_1.add_attribute("OfstTyp", "0"); // 1
    DiscInstr_1_set.insert("0");
    DiscInstr_1.add_attribute("LimitTyp", "1"); // 1
    DiscInstr_1_set.insert("1");
    DiscInstr_1.add_attribute("RndDir", "1"); // 1
    DiscInstr_1_set.insert("1");
    DiscInstr_1.add_attribute("Scope", "3"); // 1
    DiscInstr_1_set.insert("3");
    all_values.push_back(DiscInstr_1_set);
    all_compo_names.insert("DiscInstr_1_set");

    elt.add_element(DiscInstr_1);
  } // end DiscInstr
  { // StrtPrmGrp
    xml_element StrtPrmGrp_3{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_3_set;
    StrtPrmGrp_3.add_attribute("StrtPrmNme", "StrategyParameterName_t_490645595"); // 1
    StrtPrmGrp_3_set.insert("StrategyParameterName_t_490645595");
    StrtPrmGrp_3.add_attribute("StrtPrmTyp", "9"); // 1
    StrtPrmGrp_3_set.insert("9");
    StrtPrmGrp_3.add_attribute("StrtPrmVal", "StrategyParameterValue_t_1220435624"); // 1
    StrtPrmGrp_3_set.insert("StrategyParameterValue_t_1220435624");
    all_values.push_back(StrtPrmGrp_3_set);
    all_compo_names.insert("StrtPrmGrp_3_set");

    elt.add_element(StrtPrmGrp_3);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_4{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_4_set;
    StrtPrmGrp_4.add_attribute("StrtPrmNme", "StrategyParameterName_t_1800596830"); // 1
    StrtPrmGrp_4_set.insert("StrategyParameterName_t_1800596830");
    StrtPrmGrp_4.add_attribute("StrtPrmTyp", "13"); // 1
    StrtPrmGrp_4_set.insert("13");
    StrtPrmGrp_4.add_attribute("StrtPrmVal", "StrategyParameterValue_t_2120377927"); // 1
    StrtPrmGrp_4_set.insert("StrategyParameterValue_t_2120377927");
    all_values.push_back(StrtPrmGrp_4_set);
    all_compo_names.insert("StrtPrmGrp_4_set");

    elt.add_element(StrtPrmGrp_4);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_5{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_5_set;
    StrtPrmGrp_5.add_attribute("StrtPrmNme", "StrategyParameterName_t_2011101357"); // 1
    StrtPrmGrp_5_set.insert("StrategyParameterName_t_2011101357");
    StrtPrmGrp_5.add_attribute("StrtPrmTyp", "23"); // 1
    StrtPrmGrp_5_set.insert("23");
    StrtPrmGrp_5.add_attribute("StrtPrmVal", "StrategyParameterValue_t_1234597369"); // 1
    StrtPrmGrp_5_set.insert("StrategyParameterValue_t_1234597369");
    all_values.push_back(StrtPrmGrp_5_set);
    all_compo_names.insert("StrtPrmGrp_5_set");

    elt.add_element(StrtPrmGrp_5);
  } // end StrtPrmGrp
  { // FillsGrp
    xml_element FillsGrp_0{"FillsGrp"};
    multiset<string> FillsGrp_0_set;
    FillsGrp_0.add_attribute("FillExecID", "FillExecID_t_587937390"); // 1
    FillsGrp_0_set.insert("FillExecID_t_587937390");
    FillsGrp_0.add_attribute("FillPx", "9515117.310000"); // 1
    FillsGrp_0_set.insert("9515117.310000");
    FillsGrp_0.add_attribute("FillQty", "130046.720000"); // 1
    FillsGrp_0_set.insert("130046.720000");
    FillsGrp_0.add_attribute("LqdtyInd", "2"); // 1
    FillsGrp_0_set.insert("2");
    all_values.push_back(FillsGrp_0_set);
    all_compo_names.insert("FillsGrp_0_set");

    {
      xml_element Pty_154{"Pty"};
      multiset<string> Pty_154_set;
      Pty_154.add_attribute("ID", "Nested4PartyID_t_836738784"); // 2
      Pty_154_set.insert("Nested4PartyID_t_836738784");
      Pty_154.add_attribute("Src", "B"); // 2
      Pty_154_set.insert("B");
      Pty_154.add_attribute("R", "17"); // 2
      Pty_154_set.insert("17");
      all_values.push_back(Pty_154_set);
      all_compo_names.insert("Pty_154_set");

      {
        xml_element Sub_154{"Sub"};
        multiset<string> Sub_154_set;
        Sub_154.add_attribute("ID", "Nested4PartySubID_t_672082783"); // 3
        Sub_154_set.insert("Nested4PartySubID_t_672082783");
        Sub_154.add_attribute("Typ", "4"); // 3
        Sub_154_set.insert("4");
        all_values.push_back(Sub_154_set);
        all_compo_names.insert("Sub_154_set");

        Pty_154.add_element(Sub_154);
      }
      FillsGrp_0.add_element(Pty_154);
    }
    elt.add_element(FillsGrp_0);
  } // end FillsGrp
  { // FillsGrp
    xml_element FillsGrp_1{"FillsGrp"};
    multiset<string> FillsGrp_1_set;
    FillsGrp_1.add_attribute("FillExecID", "FillExecID_t_992178699"); // 1
    FillsGrp_1_set.insert("FillExecID_t_992178699");
    FillsGrp_1.add_attribute("FillPx", "748025.240000"); // 1
    FillsGrp_1_set.insert("748025.240000");
    FillsGrp_1.add_attribute("FillQty", "1411280.540000"); // 1
    FillsGrp_1_set.insert("1411280.540000");
    FillsGrp_1.add_attribute("LqdtyInd", "1"); // 1
    FillsGrp_1_set.insert("1");
    all_values.push_back(FillsGrp_1_set);
    all_compo_names.insert("FillsGrp_1_set");

    {
      xml_element Pty_155{"Pty"};
      multiset<string> Pty_155_set;
      Pty_155.add_attribute("ID", "Nested4PartyID_t_865594448"); // 2
      Pty_155_set.insert("Nested4PartyID_t_865594448");
      Pty_155.add_attribute("Src", "H"); // 2
      Pty_155_set.insert("H");
      Pty_155.add_attribute("R", "66"); // 2
      Pty_155_set.insert("66");
      all_values.push_back(Pty_155_set);
      all_compo_names.insert("Pty_155_set");

      {
        xml_element Sub_155{"Sub"};
        multiset<string> Sub_155_set;
        Sub_155.add_attribute("ID", "Nested4PartySubID_t_1100835096"); // 3
        Sub_155_set.insert("Nested4PartySubID_t_1100835096");
        Sub_155.add_attribute("Typ", "24"); // 3
        Sub_155_set.insert("24");
        all_values.push_back(Sub_155_set);
        all_compo_names.insert("Sub_155_set");

        Pty_155.add_element(Sub_155);
      }
      FillsGrp_1.add_element(Pty_155);
    }
    elt.add_element(FillsGrp_1);
  } // end FillsGrp
  { // Comm
    xml_element Comm_13{"Comm"};
    multiset<string> Comm_13_set;
    Comm_13.add_attribute("Comm", "Commission_t_359557376"); // 1
    Comm_13_set.insert("Commission_t_359557376");
    Comm_13.add_attribute("CommTyp", "4"); // 1
    Comm_13_set.insert("4");
    Comm_13.add_attribute("Ccy", "EUR"); // 1
    Comm_13_set.insert("EUR");
    Comm_13.add_attribute("FundRenewWaiv", "Y"); // 1
    Comm_13_set.insert("Y");
    all_values.push_back(Comm_13_set);
    all_compo_names.insert("Comm_13_set");

    elt.add_element(Comm_13);
  } // end Comm
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_10{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_10_set;
    SprdBnchmkCurve_10.add_attribute("Spread", "8125947.000000"); // 1
    SprdBnchmkCurve_10_set.insert("8125947.000000");
    SprdBnchmkCurve_10.add_attribute("Ccy", "EUR"); // 1
    SprdBnchmkCurve_10_set.insert("EUR");
    SprdBnchmkCurve_10.add_attribute("Name", "Treasury"); // 1
    SprdBnchmkCurve_10_set.insert("Treasury");
    SprdBnchmkCurve_10.add_attribute("Point", "BenchmarkCurvePoint_t_366933863"); // 1
    SprdBnchmkCurve_10_set.insert("BenchmarkCurvePoint_t_366933863");
    SprdBnchmkCurve_10.add_attribute("Px", "14457620.830000"); // 1
    SprdBnchmkCurve_10_set.insert("14457620.830000");
    SprdBnchmkCurve_10.add_attribute("PxTyp", "5"); // 1
    SprdBnchmkCurve_10_set.insert("5");
    SprdBnchmkCurve_10.add_attribute("SecID", "BenchmarkSecurityID_t_69298765"); // 1
    SprdBnchmkCurve_10_set.insert("BenchmarkSecurityID_t_69298765");
    SprdBnchmkCurve_10.add_attribute("SecIDSrc", "4"); // 1
    SprdBnchmkCurve_10_set.insert("4");
    all_values.push_back(SprdBnchmkCurve_10_set);
    all_compo_names.insert("SprdBnchmkCurve_10_set");

    elt.add_element(SprdBnchmkCurve_10);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_5{"Yield"};
    multiset<string> Yield_5_set;
    Yield_5.add_attribute("Typ", "SEMIANNUAL"); // 1
    Yield_5_set.insert("SEMIANNUAL");
    Yield_5.add_attribute("Yld", "823034.380000"); // 1
    Yield_5_set.insert("823034.380000");
    Yield_5.add_attribute("CalcDt", "YieldCalcDate_t_133248854"); // 1
    Yield_5_set.insert("YieldCalcDate_t_133248854");
    Yield_5.add_attribute("RedDt", "YieldRedemptionDate_t_1660853216"); // 1
    Yield_5_set.insert("YieldRedemptionDate_t_1660853216");
    Yield_5.add_attribute("RedPx", "12571412.360000"); // 1
    Yield_5_set.insert("12571412.360000");
    Yield_5.add_attribute("RedPxTyp", "18"); // 1
    Yield_5_set.insert("18");
    all_values.push_back(Yield_5_set);
    all_compo_names.insert("Yield_5_set");

    elt.add_element(Yield_5);
  } // end Yield
  { // RtSrc
    xml_element RtSrc_3{"RtSrc"};
    multiset<string> RtSrc_3_set;
    RtSrc_3.add_attribute("RtSrc", "99"); // 1
    RtSrc_3_set.insert("99");
    RtSrc_3.add_attribute("RtSrcTyp", "1"); // 1
    RtSrc_3_set.insert("1");
    RtSrc_3.add_attribute("RefPg", "ReferencePage_t_260254875"); // 1
    RtSrc_3_set.insert("ReferencePage_t_260254875");
    all_values.push_back(RtSrc_3_set);
    all_compo_names.insert("RtSrc_3_set");

    elt.add_element(RtSrc_3);
  } // end RtSrc
  { // RtSrc
    xml_element RtSrc_4{"RtSrc"};
    multiset<string> RtSrc_4_set;
    RtSrc_4.add_attribute("RtSrc", "1"); // 1
    RtSrc_4_set.insert("1");
    RtSrc_4.add_attribute("RtSrcTyp", "1"); // 1
    RtSrc_4_set.insert("1");
    RtSrc_4.add_attribute("RefPg", "ReferencePage_t_1125849323"); // 1
    RtSrc_4_set.insert("ReferencePage_t_1125849323");
    all_values.push_back(RtSrc_4_set);
    all_compo_names.insert("RtSrc_4_set");

    elt.add_element(RtSrc_4);
  } // end RtSrc
  { // DsplyInstr
    xml_element DsplyInstr_1{"DsplyInstr"};
    multiset<string> DsplyInstr_1_set;
    DsplyInstr_1.add_attribute("DisplayQty", "11039069.460000"); // 1
    DsplyInstr_1_set.insert("11039069.460000");
    DsplyInstr_1.add_attribute("SecDspQty", "12275174.290000"); // 1
    DsplyInstr_1_set.insert("12275174.290000");
    DsplyInstr_1.add_attribute("DspWhn", "1"); // 1
    DsplyInstr_1_set.insert("1");
    DsplyInstr_1.add_attribute("DspMthd", "2"); // 1
    DsplyInstr_1_set.insert("2");
    DsplyInstr_1.add_attribute("DsplLwQty", "15870748.050000"); // 1
    DsplyInstr_1_set.insert("15870748.050000");
    DsplyInstr_1.add_attribute("DisplayHighQty", "15675266.710000"); // 1
    DsplyInstr_1_set.insert("15675266.710000");
    DsplyInstr_1.add_attribute("DspMinIncr", "11799929.210000"); // 1
    DsplyInstr_1_set.insert("11799929.210000");
    DsplyInstr_1.add_attribute("RfrshQty", "2897941.290000"); // 1
    DsplyInstr_1_set.insert("2897941.290000");
    all_values.push_back(DsplyInstr_1_set);
    all_compo_names.insert("DsplyInstr_1_set");

    elt.add_element(DsplyInstr_1);
  } // end DsplyInstr
  { // ContAmt
    xml_element ContAmt_0{"ContAmt"};
    multiset<string> ContAmt_0_set;
    ContAmt_0.add_attribute("ContAmtTyp", "6"); // 1
    ContAmt_0_set.insert("6");
    ContAmt_0.add_attribute("ContAmtValu", "7931102.820000"); // 1
    ContAmt_0_set.insert("7931102.820000");
    ContAmt_0.add_attribute("ContAmtCurr", "CHF"); // 1
    ContAmt_0_set.insert("CHF");
    all_values.push_back(ContAmt_0_set);
    all_compo_names.insert("ContAmt_0_set");

    elt.add_element(ContAmt_0);
  } // end ContAmt
  { // ContAmt
    xml_element ContAmt_1{"ContAmt"};
    multiset<string> ContAmt_1_set;
    ContAmt_1.add_attribute("ContAmtTyp", "14"); // 1
    ContAmt_1_set.insert("14");
    ContAmt_1.add_attribute("ContAmtValu", "5792458.660000"); // 1
    ContAmt_1_set.insert("5792458.660000");
    ContAmt_1.add_attribute("ContAmtCurr", "EUR"); // 1
    ContAmt_1_set.insert("EUR");
    all_values.push_back(ContAmt_1_set);
    all_compo_names.insert("ContAmt_1_set");

    elt.add_element(ContAmt_1);
  } // end ContAmt
  { // Exec
    xml_element Exec_0{"Exec"};
    multiset<string> Exec_0_set;
    Exec_0.add_attribute("Qty", "13273100.850000"); // 1
    Exec_0_set.insert("13273100.850000");
    Exec_0.add_attribute("OrdQty", "13116463.490000"); // 1
    Exec_0_set.insert("13116463.490000");
    Exec_0.add_attribute("SwapTyp", "2"); // 1
    Exec_0_set.insert("2");
    Exec_0.add_attribute("LegAllocID", "LegAllocID_t_840679653"); // 1
    Exec_0_set.insert("LegAllocID_t_840679653");
    Exec_0.add_attribute("PosEfct", "D"); // 1
    Exec_0_set.insert("D");
    Exec_0.add_attribute("Cover", "1"); // 1
    Exec_0_set.insert("1");
    Exec_0.add_attribute("RefID", "LegRefID_t_1026132004"); // 1
    Exec_0_set.insert("LegRefID_t_1026132004");
    Exec_0.add_attribute("SettlTyp", "0"); // 1
    Exec_0_set.insert("0");
    Exec_0.add_attribute("SettlDt", "LegSettlDate_t_1790189864"); // 1
    Exec_0_set.insert("LegSettlDate_t_1790189864");
    Exec_0.add_attribute("LastPx", "12863868.800000"); // 1
    Exec_0_set.insert("12863868.800000");
    Exec_0.add_attribute("SettlCcy", "USD"); // 1
    Exec_0_set.insert("USD");
    Exec_0.add_attribute("LegLastFwdPnts", "2647525.550000"); // 1
    Exec_0_set.insert("2647525.550000");
    Exec_0.add_attribute("LegCalcCcyLastQty", "5678997.830000"); // 1
    Exec_0_set.insert("5678997.830000");
    Exec_0.add_attribute("LegGrossTrdAmt", "LegGrossTradeAmt_t_173766119"); // 1
    Exec_0_set.insert("LegGrossTradeAmt_t_173766119");
    Exec_0.add_attribute("LegVolatility", "3439533.270000"); // 1
    Exec_0_set.insert("3439533.270000");
    Exec_0.add_attribute("LegDividendYield", "82499.800000"); // 1
    Exec_0_set.insert("82499.800000");
    Exec_0.add_attribute("LegCurrencyRatio", "17608409.250000"); // 1
    Exec_0_set.insert("17608409.250000");
    Exec_0.add_attribute("LegExecInst", "H"); // 1
    Exec_0_set.insert("H");
    Exec_0.add_attribute("LastQty", "11882429.010000"); // 1
    Exec_0_set.insert("11882429.010000");
    all_values.push_back(Exec_0_set);
    all_compo_names.insert("Exec_0_set");

    {
      xml_element Leg_38{"Leg"};
      multiset<string> Leg_38_set;
      Leg_38.add_attribute("Sym", "LegSymbol_t_2050635054"); // 2
      Leg_38_set.insert("LegSymbol_t_2050635054");
      Leg_38.add_attribute("Sfx", "WI"); // 2
      Leg_38_set.insert("WI");
      Leg_38.add_attribute("ID", "LegSecurityID_t_1033346875"); // 2
      Leg_38_set.insert("LegSecurityID_t_1033346875");
      Leg_38.add_attribute("Src", "D"); // 2
      Leg_38_set.insert("D");
      Leg_38.add_attribute("Prod", "10"); // 2
      Leg_38_set.insert("10");
      Leg_38.add_attribute("CFI", "LegCFICode_t_1663939828"); // 2
      Leg_38_set.insert("LegCFICode_t_1663939828");
      Leg_38.add_attribute("SecTyp", "MPP"); // 2
      Leg_38_set.insert("MPP");
      Leg_38.add_attribute("SecSubTyp", "LegSecuritySubType_t_492266055"); // 2
      Leg_38_set.insert("LegSecuritySubType_t_492266055");
      Leg_38.add_attribute("MMY", "19651833"); // 2
      Leg_38_set.insert("19651833");
      Leg_38.add_attribute("Mat", "LegMaturityDate_t_938165097"); // 2
      Leg_38_set.insert("LegMaturityDate_t_938165097");
      Leg_38.add_attribute("MatTm", "957727746"); // 2
      Leg_38_set.insert("957727746");
      Leg_38.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1346961919"); // 2
      Leg_38_set.insert("LegCouponPaymentDate_t_1346961919");
      Leg_38.add_attribute("Issued", "LegIssueDate_t_102327798"); // 2
      Leg_38_set.insert("LegIssueDate_t_102327798");
      Leg_38.add_attribute("RepoCollSecTyp", "1556438292"); // 2
      Leg_38_set.insert("1556438292");
      Leg_38.add_attribute("RepoTrm", "40157924"); // 2
      Leg_38_set.insert("40157924");
      Leg_38.add_attribute("RepoRt", "5236317.350000"); // 2
      Leg_38_set.insert("5236317.350000");
      Leg_38.add_attribute("Fctr", "11810573.230000"); // 2
      Leg_38_set.insert("11810573.230000");
      Leg_38.add_attribute("CrdRtg", "LegCreditRating_t_1066289929"); // 2
      Leg_38_set.insert("LegCreditRating_t_1066289929");
      Leg_38.add_attribute("Rgstry", "LegInstrRegistry_t_395716095"); // 2
      Leg_38_set.insert("LegInstrRegistry_t_395716095");
      Leg_38.add_attribute("Ctry", "823763540"); // 2
      Leg_38_set.insert("823763540");
      Leg_38.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_205193161"); // 2
      Leg_38_set.insert("LegStateOrProvinceOfIssue_t_205193161");
      Leg_38.add_attribute("Lcl", "LegLocaleOfIssue_t_2007192580"); // 2
      Leg_38_set.insert("LegLocaleOfIssue_t_2007192580");
      Leg_38.add_attribute("Redeem", "LegRedemptionDate_t_1917495878"); // 2
      Leg_38_set.insert("LegRedemptionDate_t_1917495878");
      Leg_38.add_attribute("Strk", "4699457.160000"); // 2
      Leg_38_set.insert("4699457.160000");
      Leg_38.add_attribute("StrkCcy", "EUR"); // 2
      Leg_38_set.insert("EUR");
      Leg_38.add_attribute("OptA", "813899044"); // 2
      Leg_38_set.insert("813899044");
      Leg_38.add_attribute("Cmult", "4358586.960000"); // 2
      Leg_38_set.insert("4358586.960000");
      Leg_38.add_attribute("MultTyp", "2"); // 2
      Leg_38_set.insert("2");
      Leg_38.add_attribute("FlowSchedTyp", "4"); // 2
      Leg_38_set.insert("4");
      Leg_38.add_attribute("UOM", "Bbl"); // 2
      Leg_38_set.insert("Bbl");
      Leg_38.add_attribute("UOMQty", "16077706.800000"); // 2
      Leg_38_set.insert("16077706.800000");
      Leg_38.add_attribute("PxUOM", "USD"); // 2
      Leg_38_set.insert("USD");
      Leg_38.add_attribute("PxUOMQty", "5099648.250000"); // 2
      Leg_38_set.insert("5099648.250000");
      Leg_38.add_attribute("TmUnit", "S"); // 2
      Leg_38_set.insert("S");
      Leg_38.add_attribute("ExerStyle", "0"); // 2
      Leg_38_set.insert("0");
      Leg_38.add_attribute("CpnRt", "264210.050000"); // 2
      Leg_38_set.insert("264210.050000");
      Leg_38.add_attribute("Exch", "LegSecurityExchange_t_2012854555"); // 2
      Leg_38_set.insert("LegSecurityExchange_t_2012854555");
      Leg_38.add_attribute("Issr", "LegIssuer_t_1762718043"); // 2
      Leg_38_set.insert("LegIssuer_t_1762718043");
      Leg_38.add_attribute("EncLegIssrLen", "46072838"); // 2
      Leg_38_set.insert("46072838");
      Leg_38.add_attribute("EncLegIssr", "EncodedLegIssuer_t_803536004"); // 2
      Leg_38_set.insert("EncodedLegIssuer_t_803536004");
      Leg_38.add_attribute("Desc", "LegSecurityDesc_t_572962141"); // 2
      Leg_38_set.insert("LegSecurityDesc_t_572962141");
      Leg_38.add_attribute("EncLegSecDescLen", "1393034757"); // 2
      Leg_38_set.insert("1393034757");
      Leg_38.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_905863802"); // 2
      Leg_38_set.insert("EncodedLegSecurityDesc_t_905863802");
      Leg_38.add_attribute("RatioQty", "21294004.330000"); // 2
      Leg_38_set.insert("21294004.330000");
      Leg_38.add_attribute("Side", "B"); // 2
      Leg_38_set.insert("B");
      Leg_38.add_attribute("Ccy", "EUR"); // 2
      Leg_38_set.insert("EUR");
      Leg_38.add_attribute("Pool", "LegPool_t_351998963"); // 2
      Leg_38_set.insert("LegPool_t_351998963");
      Leg_38.add_attribute("Dated", "LegDatedDate_t_1825211632"); // 2
      Leg_38_set.insert("LegDatedDate_t_1825211632");
      Leg_38.add_attribute("CSetMo", "1986737649"); // 2
      Leg_38_set.insert("1986737649");
      Leg_38.add_attribute("IntAcrl", "LegInterestAccrualDate_t_557192124"); // 2
      Leg_38_set.insert("LegInterestAccrualDate_t_557192124");
      Leg_38.add_attribute("PutCall", "1684920564"); // 2
      Leg_38_set.insert("1684920564");
      Leg_38.add_attribute("LegOptionRatio", "17567498.790000"); // 2
      Leg_38_set.insert("17567498.790000");
      Leg_38.add_attribute("Px", "10271378.400000"); // 2
      Leg_38_set.insert("10271378.400000");
      all_values.push_back(Leg_38_set);
      all_compo_names.insert("Leg_38_set");

      {
        xml_element LegAID_38{"LegAID"};
        multiset<string> LegAID_38_set;
        LegAID_38.add_attribute("SecAltID", "LegSecurityAltID_t_2112529280"); // 3
        LegAID_38_set.insert("LegSecurityAltID_t_2112529280");
        LegAID_38.add_attribute("SecAltIDSrc", "F"); // 3
        LegAID_38_set.insert("F");
        all_values.push_back(LegAID_38_set);
        all_compo_names.insert("LegAID_38_set");

        Leg_38.add_element(LegAID_38);
      }
      Exec_0.add_element(Leg_38);
    }
    {
      xml_element Stip_60{"Stip"};
      multiset<string> Stip_60_set;
      Stip_60.add_attribute("StipTyp", "BGNCON"); // 2
      Stip_60_set.insert("BGNCON");
      Stip_60.add_attribute("StipVal", "LegStipulationValue_t_400904329"); // 2
      Stip_60_set.insert("LegStipulationValue_t_400904329");
      all_values.push_back(Stip_60_set);
      all_compo_names.insert("Stip_60_set");

      Exec_0.add_element(Stip_60);
    }
    {
      xml_element PreAll_2{"PreAll"};
      multiset<string> PreAll_2_set;
      PreAll_2.add_attribute("AllocAcct", "LegAllocAccount_t_1257663855"); // 2
      PreAll_2_set.insert("LegAllocAccount_t_1257663855");
      PreAll_2.add_attribute("IndAllocID", "LegIndividualAllocID_t_271448631"); // 2
      PreAll_2_set.insert("LegIndividualAllocID_t_271448631");
      PreAll_2.add_attribute("AllocQty", "20250059.270000"); // 2
      PreAll_2_set.insert("20250059.270000");
      PreAll_2.add_attribute("AllocAcctIDSrc", "LegAllocAcctIDSource_t_717950887"); // 2
      PreAll_2_set.insert("LegAllocAcctIDSource_t_717950887");
      PreAll_2.add_attribute("AllocSettlCcy", "USD"); // 2
      PreAll_2_set.insert("USD");
      all_values.push_back(PreAll_2_set);
      all_compo_names.insert("PreAll_2_set");

      {
        xml_element Pty_156{"Pty"};
        multiset<string> Pty_156_set;
        Pty_156.add_attribute("ID", "Nested2PartyID_t_874499608"); // 3
        Pty_156_set.insert("Nested2PartyID_t_874499608");
        Pty_156.add_attribute("Src", "3"); // 3
        Pty_156_set.insert("3");
        Pty_156.add_attribute("R", "44"); // 3
        Pty_156_set.insert("44");
        all_values.push_back(Pty_156_set);
        all_compo_names.insert("Pty_156_set");

        {
          xml_element Sub_156{"Sub"};
          multiset<string> Sub_156_set;
          Sub_156.add_attribute("ID", "Nested2PartySubID_t_739870515"); // 4
          Sub_156_set.insert("Nested2PartySubID_t_739870515");
          Sub_156.add_attribute("Typ", "18"); // 4
          Sub_156_set.insert("18");
          all_values.push_back(Sub_156_set);
          all_compo_names.insert("Sub_156_set");

          Pty_156.add_element(Sub_156);
        }
        PreAll_2.add_element(Pty_156);
      }
      Exec_0.add_element(PreAll_2);
    }
    {
      xml_element Pty_157{"Pty"};
      multiset<string> Pty_157_set;
      Pty_157.add_attribute("ID", "Nested3PartyID_t_459980947"); // 2
      Pty_157_set.insert("Nested3PartyID_t_459980947");
      Pty_157.add_attribute("Src", "C"); // 2
      Pty_157_set.insert("C");
      Pty_157.add_attribute("R", "50"); // 2
      Pty_157_set.insert("50");
      all_values.push_back(Pty_157_set);
      all_compo_names.insert("Pty_157_set");

      {
        xml_element Sub_157{"Sub"};
        multiset<string> Sub_157_set;
        Sub_157.add_attribute("ID", "Nested3PartySubID_t_1853015705"); // 3
        Sub_157_set.insert("Nested3PartySubID_t_1853015705");
        Sub_157.add_attribute("Typ", "7"); // 3
        Sub_157_set.insert("7");
        all_values.push_back(Sub_157_set);
        all_compo_names.insert("Sub_157_set");

        Pty_157.add_element(Sub_157);
      }
      Exec_0.add_element(Pty_157);
    }
    elt.add_element(Exec_0);
  } // end Exec
  { // MiscFees
    xml_element MiscFees_18{"MiscFees"};
    multiset<string> MiscFees_18_set;
    MiscFees_18.add_attribute("Amt", "MiscFeeAmt_t_1138724739"); // 1
    MiscFees_18_set.insert("MiscFeeAmt_t_1138724739");
    MiscFees_18.add_attribute("Curr", "CAN"); // 1
    MiscFees_18_set.insert("CAN");
    MiscFees_18.add_attribute("Typ", "4"); // 1
    MiscFees_18_set.insert("4");
    MiscFees_18.add_attribute("Basis", "2"); // 1
    MiscFees_18_set.insert("2");
    all_values.push_back(MiscFees_18_set);
    all_compo_names.insert("MiscFees_18_set");

    elt.add_element(MiscFees_18);
  } // end MiscFees
  { // MiscFees
    xml_element MiscFees_19{"MiscFees"};
    multiset<string> MiscFees_19_set;
    MiscFees_19.add_attribute("Amt", "MiscFeeAmt_t_1924190202"); // 1
    MiscFees_19_set.insert("MiscFeeAmt_t_1924190202");
    MiscFees_19.add_attribute("Curr", "EUR"); // 1
    MiscFees_19_set.insert("EUR");
    MiscFees_19.add_attribute("Typ", "3"); // 1
    MiscFees_19_set.insert("3");
    MiscFees_19.add_attribute("Basis", "0"); // 1
    MiscFees_19_set.insert("0");
    all_values.push_back(MiscFees_19_set);
    all_compo_names.insert("MiscFees_19_set");

    elt.add_element(MiscFees_19);
  } // end MiscFees
  { // TrdRegTS
    xml_element TrdRegTS_10{"TrdRegTS"};
    multiset<string> TrdRegTS_10_set;
    TrdRegTS_10.add_attribute("TS", "TrdRegTimestamp_t_1086501014"); // 1
    TrdRegTS_10_set.insert("TrdRegTimestamp_t_1086501014");
    TrdRegTS_10.add_attribute("Typ", "5"); // 1
    TrdRegTS_10_set.insert("5");
    TrdRegTS_10.add_attribute("Src", "TrdRegTimestampOrigin_t_1312397072"); // 1
    TrdRegTS_10_set.insert("TrdRegTimestampOrigin_t_1312397072");
    TrdRegTS_10.add_attribute("DskTyp", "A"); // 1
    TrdRegTS_10_set.insert("A");
    TrdRegTS_10.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_10_set.insert("1");
    TrdRegTS_10.add_attribute("DskOrdHndlInst", "WRK"); // 1
    TrdRegTS_10_set.insert("WRK");
    all_values.push_back(TrdRegTS_10_set);
    all_compo_names.insert("TrdRegTS_10_set");

    elt.add_element(TrdRegTS_10);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_11{"TrdRegTS"};
    multiset<string> TrdRegTS_11_set;
    TrdRegTS_11.add_attribute("TS", "TrdRegTimestamp_t_914632108"); // 1
    TrdRegTS_11_set.insert("TrdRegTimestamp_t_914632108");
    TrdRegTS_11.add_attribute("Typ", "4"); // 1
    TrdRegTS_11_set.insert("4");
    TrdRegTS_11.add_attribute("Src", "TrdRegTimestampOrigin_t_1577406455"); // 1
    TrdRegTS_11_set.insert("TrdRegTimestampOrigin_t_1577406455");
    TrdRegTS_11.add_attribute("DskTyp", "T"); // 1
    TrdRegTS_11_set.insert("T");
    TrdRegTS_11.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_11_set.insert("1");
    TrdRegTS_11.add_attribute("DskOrdHndlInst", "E.W"); // 1
    TrdRegTS_11_set.insert("E.W");
    all_values.push_back(TrdRegTS_11_set);
    all_compo_names.insert("TrdRegTS_11_set");

    elt.add_element(TrdRegTS_11);
  } // end TrdRegTS
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
