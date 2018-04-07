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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ExecRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ExecutionReport_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_678123548"); // 0
  ExecutionReport_message_t_0.insert("OrderID_t_678123548");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_820533689"); // 0
  ExecutionReport_message_t_0.insert("SecondaryOrderID_t_820533689");
  elt.add_attribute("ID2", "SecondaryClOrdID_t_1510064152"); // 0
  ExecutionReport_message_t_0.insert("SecondaryClOrdID_t_1510064152");
  elt.add_attribute("ExecID2", "SecondaryExecID_t_1106462445"); // 0
  ExecutionReport_message_t_0.insert("SecondaryExecID_t_1106462445");
  elt.add_attribute("ID", "ClOrdID_t_1152306724"); // 0
  ExecutionReport_message_t_0.insert("ClOrdID_t_1152306724");
  elt.add_attribute("OrigID", "OrigClOrdID_t_159178324"); // 0
  ExecutionReport_message_t_0.insert("OrigClOrdID_t_159178324");
  elt.add_attribute("LnkID", "ClOrdLinkID_t_1817305373"); // 0
  ExecutionReport_message_t_0.insert("ClOrdLinkID_t_1817305373");
  elt.add_attribute("RspID", "QuoteRespID_t_1734511690"); // 0
  ExecutionReport_message_t_0.insert("QuoteRespID_t_1734511690");
  elt.add_attribute("StatReqID", "OrdStatusReqID_t_326646116"); // 0
  ExecutionReport_message_t_0.insert("OrdStatusReqID_t_326646116");
  elt.add_attribute("MassStatReqID", "MassStatusReqID_t_1693102623"); // 0
  ExecutionReport_message_t_0.insert("MassStatusReqID_t_1693102623");
  elt.add_attribute("HstCxID", "HostCrossID_t_1207463505"); // 0
  ExecutionReport_message_t_0.insert("HostCrossID_t_1207463505");
  elt.add_attribute("TotNumRpts", "579457876"); // 0
  ExecutionReport_message_t_0.insert("579457876");
  elt.add_attribute("LastRptReqed", "N"); // 0
  ExecutionReport_message_t_0.insert("N");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_1105745553"); // 0
  ExecutionReport_message_t_0.insert("TradeOriginationDate_t_1105745553");
  elt.add_attribute("ListID", "ListID_t_1395374670"); // 0
  ExecutionReport_message_t_0.insert("ListID_t_1395374670");
  elt.add_attribute("CrssID", "CrossID_t_1118959702"); // 0
  ExecutionReport_message_t_0.insert("CrossID_t_1118959702");
  elt.add_attribute("OrigCrssID", "OrigCrossID_t_1914503380"); // 0
  ExecutionReport_message_t_0.insert("OrigCrossID_t_1914503380");
  elt.add_attribute("CrssTyp", "3"); // 0
  ExecutionReport_message_t_0.insert("3");
  elt.add_attribute("MtchID", "TrdMatchID_t_867936227"); // 0
  ExecutionReport_message_t_0.insert("TrdMatchID_t_867936227");
  elt.add_attribute("ExecID", "ExecID_t_632807337"); // 0
  ExecutionReport_message_t_0.insert("ExecID_t_632807337");
  elt.add_attribute("ExecRefID", "ExecRefID_t_1339234113"); // 0
  ExecutionReport_message_t_0.insert("ExecRefID_t_1339234113");
  elt.add_attribute("ExecTyp", "7"); // 0
  ExecutionReport_message_t_0.insert("7");
  elt.add_attribute("Stat", "0"); // 0
  ExecutionReport_message_t_0.insert("0");
  elt.add_attribute("WorkingInd", "N"); // 0
  ExecutionReport_message_t_0.insert("N");
  elt.add_attribute("RejRsn", "13"); // 0
  ExecutionReport_message_t_0.insert("13");
  elt.add_attribute("ExecRstmtRsn", "11"); // 0
  ExecutionReport_message_t_0.insert("11");
  elt.add_attribute("Acct", "Account_t_1463666848"); // 0
  ExecutionReport_message_t_0.insert("Account_t_1463666848");
  elt.add_attribute("AcctIDSrc", "2"); // 0
  ExecutionReport_message_t_0.insert("2");
  elt.add_attribute("AcctTyp", "6"); // 0
  ExecutionReport_message_t_0.insert("6");
  elt.add_attribute("DayBkngInst", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("BkngUnit", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("PreallocMeth", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("AllocID", "AllocID_t_939132207"); // 0
  ExecutionReport_message_t_0.insert("AllocID_t_939132207");
  elt.add_attribute("SettlTyp", "4"); // 0
  ExecutionReport_message_t_0.insert("4");
  elt.add_attribute("SettlDt", "SettlDate_t_1226630619"); // 0
  ExecutionReport_message_t_0.insert("SettlDate_t_1226630619");
  elt.add_attribute("MtchTyp", "6"); // 0
  ExecutionReport_message_t_0.insert("6");
  elt.add_attribute("OrdCat", "6"); // 0
  ExecutionReport_message_t_0.insert("6");
  elt.add_attribute("CshMgn", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("ClrFeeInd", "2"); // 0
  ExecutionReport_message_t_0.insert("2");
  elt.add_attribute("Side", "D"); // 0
  ExecutionReport_message_t_0.insert("D");
  elt.add_attribute("QtyTyp", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("LotTyp", "4"); // 0
  ExecutionReport_message_t_0.insert("4");
  elt.add_attribute("Typ", "9"); // 0
  ExecutionReport_message_t_0.insert("9");
  elt.add_attribute("PxTyp", "19"); // 0
  ExecutionReport_message_t_0.insert("19");
  elt.add_attribute("Px", "18441923.840000"); // 0
  ExecutionReport_message_t_0.insert("18441923.840000");
  elt.add_attribute("PxPrtScp", "2"); // 0
  ExecutionReport_message_t_0.insert("2");
  elt.add_attribute("StopPx", "18631064.850000"); // 0
  ExecutionReport_message_t_0.insert("18631064.850000");
  elt.add_attribute("PeggedPx", "16112121.160000"); // 0
  ExecutionReport_message_t_0.insert("16112121.160000");
  elt.add_attribute("PggdRefPx", "3627466.200000"); // 0
  ExecutionReport_message_t_0.insert("3627466.200000");
  elt.add_attribute("DsctnPx", "5835590.650000"); // 0
  ExecutionReport_message_t_0.insert("5835590.650000");
  elt.add_attribute("TgtStrategy", "3"); // 0
  ExecutionReport_message_t_0.insert("3");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_1701980734"); // 0
  ExecutionReport_message_t_0.insert("TargetStrategyParameters_t_1701980734");
  elt.add_attribute("ParticipationRt", "10040894.900000"); // 0
  ExecutionReport_message_t_0.insert("10040894.900000");
  elt.add_attribute("TgtStrategyPerformance", "1499668.550000"); // 0
  ExecutionReport_message_t_0.insert("1499668.550000");
  elt.add_attribute("Ccy", "USD"); // 0
  ExecutionReport_message_t_0.insert("USD");
  elt.add_attribute("ComplianceID", "ComplianceID_t_1501001695"); // 0
  ExecutionReport_message_t_0.insert("ComplianceID_t_1501001695");
  elt.add_attribute("SolFlag", "Y"); // 0
  ExecutionReport_message_t_0.insert("Y");
  elt.add_attribute("TmInForce", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_943046320"); // 0
  ExecutionReport_message_t_0.insert("EffectiveTime_t_943046320");
  elt.add_attribute("ExpireDt", "ExpireDate_t_498843469"); // 0
  ExecutionReport_message_t_0.insert("ExpireDate_t_498843469");
  elt.add_attribute("ExpireTm", "ExpireTime_t_1579811484"); // 0
  ExecutionReport_message_t_0.insert("ExpireTime_t_1579811484");
  elt.add_attribute("ExecInst", "6"); // 0
  ExecutionReport_message_t_0.insert("6");
  elt.add_attribute("AgrsrInd", "Y"); // 0
  ExecutionReport_message_t_0.insert("Y");
  elt.add_attribute("Cpcty", "I"); // 0
  ExecutionReport_message_t_0.insert("I");
  elt.add_attribute("Rstctions", "6"); // 0
  ExecutionReport_message_t_0.insert("6");
  elt.add_attribute("PrTrdAnon", "false"); // 0
  ExecutionReport_message_t_0.insert("false");
  elt.add_attribute("CustCpcty", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("LastQty", "10388138.090000"); // 0
  ExecutionReport_message_t_0.insert("10388138.090000");
  elt.add_attribute("CalcCcyLastQty", "9129142.840000"); // 0
  ExecutionReport_message_t_0.insert("9129142.840000");
  elt.add_attribute("LastSwapPnts", "4799354.760000"); // 0
  ExecutionReport_message_t_0.insert("4799354.760000");
  elt.add_attribute("UndLastQty", "14808851.280000"); // 0
  ExecutionReport_message_t_0.insert("14808851.280000");
  elt.add_attribute("LastPx", "16513611.150000"); // 0
  ExecutionReport_message_t_0.insert("16513611.150000");
  elt.add_attribute("UndLastPx", "2477636.530000"); // 0
  ExecutionReport_message_t_0.insert("2477636.530000");
  elt.add_attribute("LastParPx", "775482.630000"); // 0
  ExecutionReport_message_t_0.insert("775482.630000");
  elt.add_attribute("LastSpotRt", "13480698.510000"); // 0
  ExecutionReport_message_t_0.insert("13480698.510000");
  elt.add_attribute("LastFwdPnts", "14109664.990000"); // 0
  ExecutionReport_message_t_0.insert("14109664.990000");
  elt.add_attribute("LastMkt", "LastMkt_t_1940654749"); // 0
  ExecutionReport_message_t_0.insert("LastMkt_t_1940654749");
  elt.add_attribute("SesID", "6"); // 0
  ExecutionReport_message_t_0.insert("6");
  elt.add_attribute("SesSub", "5"); // 0
  ExecutionReport_message_t_0.insert("5");
  elt.add_attribute("TmBkt", "TimeBracket_t_376730166"); // 0
  ExecutionReport_message_t_0.insert("TimeBracket_t_376730166");
  elt.add_attribute("LastCpcty", "2"); // 0
  ExecutionReport_message_t_0.insert("2");
  elt.add_attribute("LeavesQty", "13282102.060000"); // 0
  ExecutionReport_message_t_0.insert("13282102.060000");
  elt.add_attribute("CumQty", "13808196.560000"); // 0
  ExecutionReport_message_t_0.insert("13808196.560000");
  elt.add_attribute("AvgPx", "10583009.800000"); // 0
  ExecutionReport_message_t_0.insert("10583009.800000");
  elt.add_attribute("DayOrdQty", "2447883.080000"); // 0
  ExecutionReport_message_t_0.insert("2447883.080000");
  elt.add_attribute("DayCumQty", "4969730.280000"); // 0
  ExecutionReport_message_t_0.insert("4969730.280000");
  elt.add_attribute("DayAvgPx", "4118190.280000"); // 0
  ExecutionReport_message_t_0.insert("4118190.280000");
  elt.add_attribute("TotNoFills", "625033259"); // 0
  ExecutionReport_message_t_0.insert("625033259");
  elt.add_attribute("LastFragment", "Y"); // 0
  ExecutionReport_message_t_0.insert("Y");
  elt.add_attribute("GTBkngInst", "2"); // 0
  ExecutionReport_message_t_0.insert("2");
  elt.add_attribute("TrdDt", "TradeDate_t_1123876728"); // 0
  ExecutionReport_message_t_0.insert("TradeDate_t_1123876728");
  elt.add_attribute("TxnTm", "TransactTime_t_21663346"); // 0
  ExecutionReport_message_t_0.insert("TransactTime_t_21663346");
  elt.add_attribute("RptToExch", "N"); // 0
  ExecutionReport_message_t_0.insert("N");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_414368756"); // 0
  ExecutionReport_message_t_0.insert("GrossTradeAmt_t_414368756");
  elt.add_attribute("NumDaysInt", "304020690"); // 0
  ExecutionReport_message_t_0.insert("304020690");
  elt.add_attribute("ExDt", "ExDate_t_412957659"); // 0
  ExecutionReport_message_t_0.insert("ExDate_t_412957659");
  elt.add_attribute("AcrdIntRt", "17962997.150000"); // 0
  ExecutionReport_message_t_0.insert("17962997.150000");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_1595585867"); // 0
  ExecutionReport_message_t_0.insert("AccruedInterestAmt_t_1595585867");
  elt.add_attribute("IntAtMat", "InterestAtMaturity_t_1451771468"); // 0
  ExecutionReport_message_t_0.insert("InterestAtMaturity_t_1451771468");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_561730352"); // 0
  ExecutionReport_message_t_0.insert("EndAccruedInterestAmt_t_561730352");
  elt.add_attribute("StartCsh", "StartCash_t_2075521343"); // 0
  ExecutionReport_message_t_0.insert("StartCash_t_2075521343");
  elt.add_attribute("EndCsh", "EndCash_t_785172948"); // 0
  ExecutionReport_message_t_0.insert("EndCash_t_785172948");
  elt.add_attribute("TrddFlatSwitch", "Y"); // 0
  ExecutionReport_message_t_0.insert("Y");
  elt.add_attribute("BasisFeatureDt", "BasisFeatureDate_t_175801348"); // 0
  ExecutionReport_message_t_0.insert("BasisFeatureDate_t_175801348");
  elt.add_attribute("BasisFeaturePx", "8627212.120000"); // 0
  ExecutionReport_message_t_0.insert("8627212.120000");
  elt.add_attribute("Concession", "Concession_t_1413677671"); // 0
  ExecutionReport_message_t_0.insert("Concession_t_1413677671");
  elt.add_attribute("TotTakedown", "TotalTakedown_t_1586767848"); // 0
  ExecutionReport_message_t_0.insert("TotalTakedown_t_1586767848");
  elt.add_attribute("NetMny", "NetMoney_t_655892313"); // 0
  ExecutionReport_message_t_0.insert("NetMoney_t_655892313");
  elt.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_77992342"); // 0
  ExecutionReport_message_t_0.insert("SettlCurrAmt_t_77992342");
  elt.add_attribute("SettlCcy", "CHF"); // 0
  ExecutionReport_message_t_0.insert("CHF");
  elt.add_attribute("SettlCurrFxRt", "9863264.670000"); // 0
  ExecutionReport_message_t_0.insert("9863264.670000");
  elt.add_attribute("SettlCurrFxRtCalc", "M"); // 0
  ExecutionReport_message_t_0.insert("M");
  elt.add_attribute("HandlInst", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("MinQty", "20446274.480000"); // 0
  ExecutionReport_message_t_0.insert("20446274.480000");
  elt.add_attribute("MtchInc", "6385121.860000"); // 0
  ExecutionReport_message_t_0.insert("6385121.860000");
  elt.add_attribute("MxPxLvls", "762931516"); // 0
  ExecutionReport_message_t_0.insert("762931516");
  elt.add_attribute("MaxFloor", "3089628.280000"); // 0
  ExecutionReport_message_t_0.insert("3089628.280000");
  elt.add_attribute("PosEfct", "N"); // 0
  ExecutionReport_message_t_0.insert("N");
  elt.add_attribute("MaxShow", "13522670.250000"); // 0
  ExecutionReport_message_t_0.insert("13522670.250000");
  elt.add_attribute("BkngTyp", "0"); // 0
  ExecutionReport_message_t_0.insert("0");
  elt.add_attribute("Txt", "Text_t_239938526"); // 0
  ExecutionReport_message_t_0.insert("Text_t_239938526");
  elt.add_attribute("EncTxtLen", "1373930371"); // 0
  ExecutionReport_message_t_0.insert("1373930371");
  elt.add_attribute("EncTxt", "EncodedText_t_1934424371"); // 0
  ExecutionReport_message_t_0.insert("EncodedText_t_1934424371");
  elt.add_attribute("SettlDt2", "SettlDate2_t_654307283"); // 0
  ExecutionReport_message_t_0.insert("SettlDate2_t_654307283");
  elt.add_attribute("Qty2", "16779510.620000"); // 0
  ExecutionReport_message_t_0.insert("16779510.620000");
  elt.add_attribute("LastFwdPnts2", "1998983.820000"); // 0
  ExecutionReport_message_t_0.insert("1998983.820000");
  elt.add_attribute("MLegRptTyp", "3"); // 0
  ExecutionReport_message_t_0.insert("3");
  elt.add_attribute("CxllationRights", "N"); // 0
  ExecutionReport_message_t_0.insert("N");
  elt.add_attribute("MnyLaunderingStat", "2"); // 0
  ExecutionReport_message_t_0.insert("2");
  elt.add_attribute("RegistID", "RegistID_t_864853702"); // 0
  ExecutionReport_message_t_0.insert("RegistID_t_864853702");
  elt.add_attribute("Designation", "Designation_t_1054090976"); // 0
  ExecutionReport_message_t_0.insert("Designation_t_1054090976");
  elt.add_attribute("TransBkdTm", "TransBkdTime_t_289359151"); // 0
  ExecutionReport_message_t_0.insert("TransBkdTime_t_289359151");
  elt.add_attribute("ExecValuationPoint", "ExecValuationPoint_t_930461522"); // 0
  ExecutionReport_message_t_0.insert("ExecValuationPoint_t_930461522");
  elt.add_attribute("ExecPxTyp", "P"); // 0
  ExecutionReport_message_t_0.insert("P");
  elt.add_attribute("ExecPxAdjment", "11520803.630000"); // 0
  ExecutionReport_message_t_0.insert("11520803.630000");
  elt.add_attribute("PriInd", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("PxImprvmnt", "6691765.250000"); // 0
  ExecutionReport_message_t_0.insert("6691765.250000");
  elt.add_attribute("LastLqdtyInd", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("CopyMsgInd", "false"); // 0
  ExecutionReport_message_t_0.insert("false");
  elt.add_attribute("DividendYield", "18821738.450000"); // 0
  ExecutionReport_message_t_0.insert("18821738.450000");
  elt.add_attribute("ManOrdInd", "false"); // 0
  ExecutionReport_message_t_0.insert("false");
  elt.add_attribute("CustDrctdOrd", "false"); // 0
  ExecutionReport_message_t_0.insert("false");
  elt.add_attribute("RcvdDptID", "ReceivedDeptID_t_128414075"); // 0
  ExecutionReport_message_t_0.insert("ReceivedDeptID_t_128414075");
  elt.add_attribute("CustOrdHdlInst", "S.W"); // 0
  ExecutionReport_message_t_0.insert("S.W");
  elt.add_attribute("OrdHndlInstSrc", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("Vol", "7669262.610000"); // 0
  ExecutionReport_message_t_0.insert("7669262.610000");
  elt.add_attribute("TmToExp", "17220015.110000"); // 0
  ExecutionReport_message_t_0.insert("17220015.110000");
  elt.add_attribute("RFR", "14670809.830000"); // 0
  ExecutionReport_message_t_0.insert("14670809.830000");
  elt.add_attribute("PxDelta", "20304717.070000"); // 0
  ExecutionReport_message_t_0.insert("20304717.070000");
  all_values.push_back(ExecutionReport_message_t_0);
  all_compo_names.insert("ExecutionReport_message_t");

  { // Hdr
    xml_element Hdr_32{"Hdr"};
    multiset<string> Hdr_32_set;
    Hdr_32.add_attribute("SeqNum", "926784888"); // 1
    Hdr_32_set.insert("926784888");
    Hdr_32.add_attribute("SID", "SenderCompID_t_983425511"); // 1
    Hdr_32_set.insert("SenderCompID_t_983425511");
    Hdr_32.add_attribute("TID", "TargetCompID_t_122926586"); // 1
    Hdr_32_set.insert("TargetCompID_t_122926586");
    Hdr_32.add_attribute("OBID", "OnBehalfOfCompID_t_153231612"); // 1
    Hdr_32_set.insert("OnBehalfOfCompID_t_153231612");
    Hdr_32.add_attribute("D2ID", "DeliverToCompID_t_770366234"); // 1
    Hdr_32_set.insert("DeliverToCompID_t_770366234");
    Hdr_32.add_attribute("SSub", "SenderSubID_t_777233869"); // 1
    Hdr_32_set.insert("SenderSubID_t_777233869");
    Hdr_32.add_attribute("SLoc", "SenderLocationID_t_1831182674"); // 1
    Hdr_32_set.insert("SenderLocationID_t_1831182674");
    Hdr_32.add_attribute("TSub", "TargetSubID_t_970264617"); // 1
    Hdr_32_set.insert("TargetSubID_t_970264617");
    Hdr_32.add_attribute("TLoc", "TargetLocationID_t_1080357219"); // 1
    Hdr_32_set.insert("TargetLocationID_t_1080357219");
    Hdr_32.add_attribute("OBSub", "OnBehalfOfSubID_t_809752307"); // 1
    Hdr_32_set.insert("OnBehalfOfSubID_t_809752307");
    Hdr_32.add_attribute("OBLoc", "OnBehalfOfLocationID_t_474450820"); // 1
    Hdr_32_set.insert("OnBehalfOfLocationID_t_474450820");
    Hdr_32.add_attribute("D2Sub", "DeliverToSubID_t_1945210922"); // 1
    Hdr_32_set.insert("DeliverToSubID_t_1945210922");
    Hdr_32.add_attribute("D2Loc", "DeliverToLocationID_t_1863843283"); // 1
    Hdr_32_set.insert("DeliverToLocationID_t_1863843283");
    Hdr_32.add_attribute("PosDup", "Y"); // 1
    Hdr_32_set.insert("Y");
    Hdr_32.add_attribute("PosRsnd", "N"); // 1
    Hdr_32_set.insert("N");
    Hdr_32.add_attribute("Snt", "SendingTime_t_946251960"); // 1
    Hdr_32_set.insert("SendingTime_t_946251960");
    Hdr_32.add_attribute("OrigSnt", "OrigSendingTime_t_1915890335"); // 1
    Hdr_32_set.insert("OrigSendingTime_t_1915890335");
    Hdr_32.add_attribute("MsgEncd", "MessageEncoding_t_924844341"); // 1
    Hdr_32_set.insert("MessageEncoding_t_924844341");
    all_values.push_back(Hdr_32_set);
    all_compo_names.insert("Hdr_32_set");

    {
      xml_element Hop_32{"Hop"};
      multiset<string> Hop_32_set;
      Hop_32.add_attribute("ID", "HopCompID_t_1615428485"); // 2
      Hop_32_set.insert("HopCompID_t_1615428485");
      Hop_32.add_attribute("Ref", "1576379363"); // 2
      Hop_32_set.insert("1576379363");
      Hop_32.add_attribute("Snt", "HopSendingTime_t_1199492228"); // 2
      Hop_32_set.insert("HopSendingTime_t_1199492228");
      all_values.push_back(Hop_32_set);
      all_compo_names.insert("Hop_32_set");

      Hdr_32.add_element(Hop_32);
    }
    elt.add_element(Hdr_32);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_4{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_4_set;
    ApplSeqCtrl_4.add_attribute("ApplID", "ApplID_t_1350118682"); // 1
    ApplSeqCtrl_4_set.insert("ApplID_t_1350118682");
    ApplSeqCtrl_4.add_attribute("ApplSeqNum", "122007223"); // 1
    ApplSeqCtrl_4_set.insert("122007223");
    ApplSeqCtrl_4.add_attribute("ApplLastSeqNum", "312982935"); // 1
    ApplSeqCtrl_4_set.insert("312982935");
    ApplSeqCtrl_4.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_4_set.insert("false");
    all_values.push_back(ApplSeqCtrl_4_set);
    all_compo_names.insert("ApplSeqCtrl_4_set");

    elt.add_element(ApplSeqCtrl_4);
  } // end ApplSeqCtrl
  { // Pty
    xml_element Pty_159{"Pty"};
    multiset<string> Pty_159_set;
    Pty_159.add_attribute("ID", "PartyID_t_1471101090"); // 1
    Pty_159_set.insert("PartyID_t_1471101090");
    Pty_159.add_attribute("Src", "4"); // 1
    Pty_159_set.insert("4");
    Pty_159.add_attribute("R", "37"); // 1
    Pty_159_set.insert("37");
    all_values.push_back(Pty_159_set);
    all_compo_names.insert("Pty_159_set");

    {
      xml_element Sub_159{"Sub"};
      multiset<string> Sub_159_set;
      Sub_159.add_attribute("ID", "PartySubID_t_790698425"); // 2
      Sub_159_set.insert("PartySubID_t_790698425");
      Sub_159.add_attribute("Typ", "19"); // 2
      Sub_159_set.insert("19");
      all_values.push_back(Sub_159_set);
      all_compo_names.insert("Sub_159_set");

      Pty_159.add_element(Sub_159);
    }
    elt.add_element(Pty_159);
  } // end Pty
  { // Pty
    xml_element Pty_160{"Pty"};
    multiset<string> Pty_160_set;
    Pty_160.add_attribute("ID", "PartyID_t_1582379969"); // 1
    Pty_160_set.insert("PartyID_t_1582379969");
    Pty_160.add_attribute("Src", "I"); // 1
    Pty_160_set.insert("I");
    Pty_160.add_attribute("R", "78"); // 1
    Pty_160_set.insert("78");
    all_values.push_back(Pty_160_set);
    all_compo_names.insert("Pty_160_set");

    {
      xml_element Sub_160{"Sub"};
      multiset<string> Sub_160_set;
      Sub_160.add_attribute("ID", "PartySubID_t_1735611581"); // 2
      Sub_160_set.insert("PartySubID_t_1735611581");
      Sub_160.add_attribute("Typ", "7"); // 2
      Sub_160_set.insert("7");
      all_values.push_back(Sub_160_set);
      all_compo_names.insert("Sub_160_set");

      Pty_160.add_element(Sub_160);
    }
    elt.add_element(Pty_160);
  } // end Pty
  { // Pty
    xml_element Pty_161{"Pty"};
    multiset<string> Pty_161_set;
    Pty_161.add_attribute("ID", "PartyID_t_881123885"); // 1
    Pty_161_set.insert("PartyID_t_881123885");
    Pty_161.add_attribute("Src", "6"); // 1
    Pty_161_set.insert("6");
    Pty_161.add_attribute("R", "5"); // 1
    Pty_161_set.insert("5");
    all_values.push_back(Pty_161_set);
    all_compo_names.insert("Pty_161_set");

    {
      xml_element Sub_161{"Sub"};
      multiset<string> Sub_161_set;
      Sub_161.add_attribute("ID", "PartySubID_t_1961481105"); // 2
      Sub_161_set.insert("PartySubID_t_1961481105");
      Sub_161.add_attribute("Typ", "33"); // 2
      Sub_161_set.insert("33");
      all_values.push_back(Sub_161_set);
      all_compo_names.insert("Sub_161_set");

      Pty_161.add_element(Sub_161);
    }
    elt.add_element(Pty_161);
  } // end Pty
  { // Contra
    xml_element Contra_0{"Contra"};
    multiset<string> Contra_0_set;
    Contra_0.add_attribute("CntraBrkr", "ContraBroker_t_1759208379"); // 1
    Contra_0_set.insert("ContraBroker_t_1759208379");
    Contra_0.add_attribute("CntraTrdr", "ContraTrader_t_1945422550"); // 1
    Contra_0_set.insert("ContraTrader_t_1945422550");
    Contra_0.add_attribute("CntraTrdQty", "4580482.840000"); // 1
    Contra_0_set.insert("4580482.840000");
    Contra_0.add_attribute("CntraTrdTm", "ContraTradeTime_t_339913527"); // 1
    Contra_0_set.insert("ContraTradeTime_t_339913527");
    Contra_0.add_attribute("CntraLegRefID", "ContraLegRefID_t_744190862"); // 1
    Contra_0_set.insert("ContraLegRefID_t_744190862");
    all_values.push_back(Contra_0_set);
    all_compo_names.insert("Contra_0_set");

    elt.add_element(Contra_0);
  } // end Contra
  { // PreAll
    xml_element PreAll_3{"PreAll"};
    multiset<string> PreAll_3_set;
    PreAll_3.add_attribute("Acct", "AllocAccount_t_1264757868"); // 1
    PreAll_3_set.insert("AllocAccount_t_1264757868");
    PreAll_3.add_attribute("ActIDSrc", "1"); // 1
    PreAll_3_set.insert("1");
    PreAll_3.add_attribute("AllocSettlCcy", "USD"); // 1
    PreAll_3_set.insert("USD");
    PreAll_3.add_attribute("IndAllocID", "IndividualAllocID_t_1562254382"); // 1
    PreAll_3_set.insert("IndividualAllocID_t_1562254382");
    PreAll_3.add_attribute("Qty", "19248415.570000"); // 1
    PreAll_3_set.insert("19248415.570000");
    all_values.push_back(PreAll_3_set);
    all_compo_names.insert("PreAll_3_set");

    {
      xml_element Pty_162{"Pty"};
      multiset<string> Pty_162_set;
      Pty_162.add_attribute("ID", "NestedPartyID_t_629749384"); // 2
      Pty_162_set.insert("NestedPartyID_t_629749384");
      Pty_162.add_attribute("Src", "F"); // 2
      Pty_162_set.insert("F");
      Pty_162.add_attribute("R", "69"); // 2
      Pty_162_set.insert("69");
      all_values.push_back(Pty_162_set);
      all_compo_names.insert("Pty_162_set");

      {
        xml_element Sub_162{"Sub"};
        multiset<string> Sub_162_set;
        Sub_162.add_attribute("ID", "NestedPartySubID_t_2100850474"); // 3
        Sub_162_set.insert("NestedPartySubID_t_2100850474");
        Sub_162.add_attribute("Typ", "22"); // 3
        Sub_162_set.insert("22");
        all_values.push_back(Sub_162_set);
        all_compo_names.insert("Sub_162_set");

        Pty_162.add_element(Sub_162);
      }
      PreAll_3.add_element(Pty_162);
    }
    elt.add_element(PreAll_3);
  } // end PreAll
  { // PreAll
    xml_element PreAll_4{"PreAll"};
    multiset<string> PreAll_4_set;
    PreAll_4.add_attribute("Acct", "AllocAccount_t_1514030208"); // 1
    PreAll_4_set.insert("AllocAccount_t_1514030208");
    PreAll_4.add_attribute("ActIDSrc", "3"); // 1
    PreAll_4_set.insert("3");
    PreAll_4.add_attribute("AllocSettlCcy", "JPY"); // 1
    PreAll_4_set.insert("JPY");
    PreAll_4.add_attribute("IndAllocID", "IndividualAllocID_t_370705541"); // 1
    PreAll_4_set.insert("IndividualAllocID_t_370705541");
    PreAll_4.add_attribute("Qty", "10761323.100000"); // 1
    PreAll_4_set.insert("10761323.100000");
    all_values.push_back(PreAll_4_set);
    all_compo_names.insert("PreAll_4_set");

    {
      xml_element Pty_163{"Pty"};
      multiset<string> Pty_163_set;
      Pty_163.add_attribute("ID", "NestedPartyID_t_537054463"); // 2
      Pty_163_set.insert("NestedPartyID_t_537054463");
      Pty_163.add_attribute("Src", "5"); // 2
      Pty_163_set.insert("5");
      Pty_163.add_attribute("R", "85"); // 2
      Pty_163_set.insert("85");
      all_values.push_back(Pty_163_set);
      all_compo_names.insert("Pty_163_set");

      {
        xml_element Sub_163{"Sub"};
        multiset<string> Sub_163_set;
        Sub_163.add_attribute("ID", "NestedPartySubID_t_1956365071"); // 3
        Sub_163_set.insert("NestedPartySubID_t_1956365071");
        Sub_163.add_attribute("Typ", "9"); // 3
        Sub_163_set.insert("9");
        all_values.push_back(Sub_163_set);
        all_compo_names.insert("Sub_163_set");

        Pty_163.add_element(Sub_163);
      }
      PreAll_4.add_element(Pty_163);
    }
    elt.add_element(PreAll_4);
  } // end PreAll
  { // Instrmt
    xml_element Instrmt_27{"Instrmt"};
    multiset<string> Instrmt_27_set;
    Instrmt_27.add_attribute("Sym", "Symbol_t_1771253652"); // 1
    Instrmt_27_set.insert("Symbol_t_1771253652");
    Instrmt_27.add_attribute("Sfx", "WI"); // 1
    Instrmt_27_set.insert("WI");
    Instrmt_27.add_attribute("ID", "SecurityID_t_1829221517"); // 1
    Instrmt_27_set.insert("SecurityID_t_1829221517");
    Instrmt_27.add_attribute("Src", "I"); // 1
    Instrmt_27_set.insert("I");
    Instrmt_27.add_attribute("Prod", "5"); // 1
    Instrmt_27_set.insert("5");
    Instrmt_27.add_attribute("ProdCmplx", "ProductComplex_t_139786153"); // 1
    Instrmt_27_set.insert("ProductComplex_t_139786153");
    Instrmt_27.add_attribute("SecGrp", "SecurityGroup_t_1722891910"); // 1
    Instrmt_27_set.insert("SecurityGroup_t_1722891910");
    Instrmt_27.add_attribute("CFI", "CFICode_t_432590454"); // 1
    Instrmt_27_set.insert("CFICode_t_432590454");
    Instrmt_27.add_attribute("SecTyp", "MF"); // 1
    Instrmt_27_set.insert("MF");
    Instrmt_27.add_attribute("SubTyp", "SecuritySubType_t_840166130"); // 1
    Instrmt_27_set.insert("SecuritySubType_t_840166130");
    Instrmt_27.add_attribute("MMY", "644726154"); // 1
    Instrmt_27_set.insert("644726154");
    Instrmt_27.add_attribute("MatDt", "MaturityDate_t_21591811"); // 1
    Instrmt_27_set.insert("MaturityDate_t_21591811");
    Instrmt_27.add_attribute("MatTm", "1156932579"); // 1
    Instrmt_27_set.insert("1156932579");
    Instrmt_27.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_59496888"); // 1
    Instrmt_27_set.insert("SettleOnOpenFlag_t_59496888");
    Instrmt_27.add_attribute("AsgnMeth", "1946433368"); // 1
    Instrmt_27_set.insert("1946433368");
    Instrmt_27.add_attribute("Status", "2"); // 1
    Instrmt_27_set.insert("2");
    Instrmt_27.add_attribute("CpnPmt", "CouponPaymentDate_t_952800380"); // 1
    Instrmt_27_set.insert("CouponPaymentDate_t_952800380");
    Instrmt_27.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_27_set.insert("FR");
    Instrmt_27.add_attribute("Snrty", "SD"); // 1
    Instrmt_27_set.insert("SD");
    Instrmt_27.add_attribute("NotlPctOut", "19440792.430000"); // 1
    Instrmt_27_set.insert("19440792.430000");
    Instrmt_27.add_attribute("OrigNotlPctOut", "239314.080000"); // 1
    Instrmt_27_set.insert("239314.080000");
    Instrmt_27.add_attribute("AttchPnt", "3366303.930000"); // 1
    Instrmt_27_set.insert("3366303.930000");
    Instrmt_27.add_attribute("DetchPnt", "7688378.890000"); // 1
    Instrmt_27_set.insert("7688378.890000");
    Instrmt_27.add_attribute("Issued", "IssueDate_t_972857938"); // 1
    Instrmt_27_set.insert("IssueDate_t_972857938");
    Instrmt_27.add_attribute("RepoCollSecTyp", "707335934"); // 1
    Instrmt_27_set.insert("707335934");
    Instrmt_27.add_attribute("RepoTrm", "1844970199"); // 1
    Instrmt_27_set.insert("1844970199");
    Instrmt_27.add_attribute("RepoRt", "15099124.020000"); // 1
    Instrmt_27_set.insert("15099124.020000");
    Instrmt_27.add_attribute("Fctr", "14750479.990000"); // 1
    Instrmt_27_set.insert("14750479.990000");
    Instrmt_27.add_attribute("CrdRtg", "CreditRating_t_1654742746"); // 1
    Instrmt_27_set.insert("CreditRating_t_1654742746");
    Instrmt_27.add_attribute("Rgstry", "InstrRegistry_t_1318793825"); // 1
    Instrmt_27_set.insert("InstrRegistry_t_1318793825");
    Instrmt_27.add_attribute("IssuCtry", "1462547556"); // 1
    Instrmt_27_set.insert("1462547556");
    Instrmt_27.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1278512751"); // 1
    Instrmt_27_set.insert("StateOrProvinceOfIssue_t_1278512751");
    Instrmt_27.add_attribute("Lcl", "LocaleOfIssue_t_1209254514"); // 1
    Instrmt_27_set.insert("LocaleOfIssue_t_1209254514");
    Instrmt_27.add_attribute("Redeem", "RedemptionDate_t_1144285425"); // 1
    Instrmt_27_set.insert("RedemptionDate_t_1144285425");
    Instrmt_27.add_attribute("StrkPx", "5140074.860000"); // 1
    Instrmt_27_set.insert("5140074.860000");
    Instrmt_27.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_27_set.insert("CAN");
    Instrmt_27.add_attribute("StrkMult", "894157.490000"); // 1
    Instrmt_27_set.insert("894157.490000");
    Instrmt_27.add_attribute("StrkValu", "13302445.600000"); // 1
    Instrmt_27_set.insert("13302445.600000");
    Instrmt_27.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_27_set.insert("4");
    Instrmt_27.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_27_set.insert("5");
    Instrmt_27.add_attribute("StrkPxBndryPrcsn", "19749707.140000"); // 1
    Instrmt_27_set.insert("19749707.140000");
    Instrmt_27.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_27_set.insert("3");
    Instrmt_27.add_attribute("OptAt", "2086514458"); // 1
    Instrmt_27_set.insert("2086514458");
    Instrmt_27.add_attribute("Mult", "20344676.020000"); // 1
    Instrmt_27_set.insert("20344676.020000");
    Instrmt_27.add_attribute("MultTyp", "0"); // 1
    Instrmt_27_set.insert("0");
    Instrmt_27.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_27_set.insert("3");
    Instrmt_27.add_attribute("MinPxIncr", "8397843.350000"); // 1
    Instrmt_27_set.insert("8397843.350000");
    Instrmt_27.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_2128239083"); // 1
    Instrmt_27_set.insert("MinPriceIncrementAmount_t_2128239083");
    Instrmt_27.add_attribute("UOM", "MMbbl"); // 1
    Instrmt_27_set.insert("MMbbl");
    Instrmt_27.add_attribute("UOMQty", "6363799.300000"); // 1
    Instrmt_27_set.insert("6363799.300000");
    Instrmt_27.add_attribute("PxUOM", "tn"); // 1
    Instrmt_27_set.insert("tn");
    Instrmt_27.add_attribute("PxUOMQty", "16549083.080000"); // 1
    Instrmt_27_set.insert("16549083.080000");
    Instrmt_27.add_attribute("SettlMeth", "P"); // 1
    Instrmt_27_set.insert("P");
    Instrmt_27.add_attribute("ExerStyle", "2"); // 1
    Instrmt_27_set.insert("2");
    Instrmt_27.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_27_set.insert("1");
    Instrmt_27.add_attribute("OptPayAmt", "OptPayoutAmount_t_1102704370"); // 1
    Instrmt_27_set.insert("OptPayoutAmount_t_1102704370");
    Instrmt_27.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_27_set.insert("STD");
    Instrmt_27.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_27_set.insert("CDSD");
    Instrmt_27.add_attribute("ListMeth", "1"); // 1
    Instrmt_27_set.insert("1");
    Instrmt_27.add_attribute("CapPx", "16587673.610000"); // 1
    Instrmt_27_set.insert("16587673.610000");
    Instrmt_27.add_attribute("FlrPx", "10048725.020000"); // 1
    Instrmt_27_set.insert("10048725.020000");
    Instrmt_27.add_attribute("PutCall", "0"); // 1
    Instrmt_27_set.insert("0");
    Instrmt_27.add_attribute("FlexInd", "false"); // 1
    Instrmt_27_set.insert("false");
    Instrmt_27.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_27_set.insert("false");
    Instrmt_27.add_attribute("TmUnit", "Mo"); // 1
    Instrmt_27_set.insert("Mo");
    Instrmt_27.add_attribute("CpnRt", "16181923.330000"); // 1
    Instrmt_27_set.insert("16181923.330000");
    Instrmt_27.add_attribute("Exch", "SecurityExchange_t_1285745858"); // 1
    Instrmt_27_set.insert("SecurityExchange_t_1285745858");
    Instrmt_27.add_attribute("PosLmt", "344415807"); // 1
    Instrmt_27_set.insert("344415807");
    Instrmt_27.add_attribute("NTPosLmt", "800953245"); // 1
    Instrmt_27_set.insert("800953245");
    Instrmt_27.add_attribute("Issr", "Issuer_t_788574914"); // 1
    Instrmt_27_set.insert("Issuer_t_788574914");
    Instrmt_27.add_attribute("EncIssrLen", "1273997687"); // 1
    Instrmt_27_set.insert("1273997687");
    Instrmt_27.add_attribute("EncIssr", "EncodedIssuer_t_628440311"); // 1
    Instrmt_27_set.insert("EncodedIssuer_t_628440311");
    Instrmt_27.add_attribute("Desc", "SecurityDesc_t_312995780"); // 1
    Instrmt_27_set.insert("SecurityDesc_t_312995780");
    Instrmt_27.add_attribute("EncSecDescLen", "1213028497"); // 1
    Instrmt_27_set.insert("1213028497");
    Instrmt_27.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_515424266"); // 1
    Instrmt_27_set.insert("EncodedSecurityDesc_t_515424266");
    Instrmt_27.add_attribute("Pool", "Pool_t_1783850015"); // 1
    Instrmt_27_set.insert("Pool_t_1783850015");
    Instrmt_27.add_attribute("CSetMo", "791257623"); // 1
    Instrmt_27_set.insert("791257623");
    Instrmt_27.add_attribute("CPPgm", "2"); // 1
    Instrmt_27_set.insert("2");
    Instrmt_27.add_attribute("CPRegT", "CPRegType_t_1764605450"); // 1
    Instrmt_27_set.insert("CPRegType_t_1764605450");
    Instrmt_27.add_attribute("Dated", "DatedDate_t_2109535538"); // 1
    Instrmt_27_set.insert("DatedDate_t_2109535538");
    Instrmt_27.add_attribute("IntAcrl", "InterestAccrualDate_t_1991588531"); // 1
    Instrmt_27_set.insert("InterestAccrualDate_t_1991588531");
    all_values.push_back(Instrmt_27_set);
    all_compo_names.insert("Instrmt_27_set");

    {
      xml_element AID_30{"AID"};
      multiset<string> AID_30_set;
      AID_30.add_attribute("AltID", "SecurityAltID_t_1769292294"); // 2
      AID_30_set.insert("SecurityAltID_t_1769292294");
      AID_30.add_attribute("AltIDSrc", "J"); // 2
      AID_30_set.insert("J");
      all_values.push_back(AID_30_set);
      all_compo_names.insert("AID_30_set");

      Instrmt_27.add_element(AID_30);
    }
    {
      xml_element SecXML_30{"SecXML"};
      multiset<string> SecXML_30_set;
      SecXML_30.add_attribute("Schema", "SecurityXMLSchema_t_1249322703"); // 2
      SecXML_30_set.insert("SecurityXMLSchema_t_1249322703");
      all_values.push_back(SecXML_30_set);
      all_compo_names.insert("SecXML_30_set");

      Instrmt_27.add_element(SecXML_30);
    }
    {
      xml_element Evnt_30{"Evnt"};
      multiset<string> Evnt_30_set;
      Evnt_30.add_attribute("EventTyp", "8"); // 2
      Evnt_30_set.insert("8");
      Evnt_30.add_attribute("Dt", "EventDate_t_1831720793"); // 2
      Evnt_30_set.insert("EventDate_t_1831720793");
      Evnt_30.add_attribute("Tm", "EventTime_t_204543425"); // 2
      Evnt_30_set.insert("EventTime_t_204543425");
      Evnt_30.add_attribute("Px", "9393269.640000"); // 2
      Evnt_30_set.insert("9393269.640000");
      Evnt_30.add_attribute("Txt", "EventText_t_1374045739"); // 2
      Evnt_30_set.insert("EventText_t_1374045739");
      all_values.push_back(Evnt_30_set);
      all_compo_names.insert("Evnt_30_set");

      Instrmt_27.add_element(Evnt_30);
    }
    {
      xml_element Pty_164{"Pty"};
      multiset<string> Pty_164_set;
      Pty_164.add_attribute("ID", "InstrumentPartyID_t_814506894"); // 2
      Pty_164_set.insert("InstrumentPartyID_t_814506894");
      Pty_164.add_attribute("Src", "A"); // 2
      Pty_164_set.insert("A");
      Pty_164.add_attribute("R", "63"); // 2
      Pty_164_set.insert("63");
      all_values.push_back(Pty_164_set);
      all_compo_names.insert("Pty_164_set");

      {
        xml_element Sub_164{"Sub"};
        multiset<string> Sub_164_set;
        Sub_164.add_attribute("ID", "InstrumentPartySubID_t_555499466"); // 3
        Sub_164_set.insert("InstrumentPartySubID_t_555499466");
        Sub_164.add_attribute("Typ", "8"); // 3
        Sub_164_set.insert("8");
        all_values.push_back(Sub_164_set);
        all_compo_names.insert("Sub_164_set");

        Pty_164.add_element(Sub_164);
      }
      Instrmt_27.add_element(Pty_164);
    }
    {
      xml_element CmplxEvnt_27{"CmplxEvnt"};
      multiset<string> CmplxEvnt_27_set;
      CmplxEvnt_27.add_attribute("Typ", "9"); // 2
      CmplxEvnt_27_set.insert("9");
      CmplxEvnt_27.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_810499525"); // 2
      CmplxEvnt_27_set.insert("ComplexOptPayoutAmount_t_810499525");
      CmplxEvnt_27.add_attribute("Px", "6418575.900000"); // 2
      CmplxEvnt_27_set.insert("6418575.900000");
      CmplxEvnt_27.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_27_set.insert("2");
      CmplxEvnt_27.add_attribute("PxBndryPrcsn", "11549153.320000"); // 2
      CmplxEvnt_27_set.insert("11549153.320000");
      CmplxEvnt_27.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_27_set.insert("1");
      CmplxEvnt_27.add_attribute("Cond", "2"); // 2
      CmplxEvnt_27_set.insert("2");
      all_values.push_back(CmplxEvnt_27_set);
      all_compo_names.insert("CmplxEvnt_27_set");

      {
        xml_element EvntDts_27{"EvntDts"};
        multiset<string> EvntDts_27_set;
        EvntDts_27.add_attribute("StartDt", "ComplexEventStartDate_t_281429371"); // 3
        EvntDts_27_set.insert("ComplexEventStartDate_t_281429371");
        EvntDts_27.add_attribute("EndDt", "ComplexEventEndDate_t_2071251147"); // 3
        EvntDts_27_set.insert("ComplexEventEndDate_t_2071251147");
        all_values.push_back(EvntDts_27_set);
        all_compo_names.insert("EvntDts_27_set");

        {
          xml_element EvntTms_27{"EvntTms"};
          multiset<string> EvntTms_27_set;
          EvntTms_27.add_attribute("StartTm", "472941778"); // 4
          EvntTms_27_set.insert("472941778");
          EvntTms_27.add_attribute("EndTm", "1494457869"); // 4
          EvntTms_27_set.insert("1494457869");
          all_values.push_back(EvntTms_27_set);
          all_compo_names.insert("EvntTms_27_set");

          EvntDts_27.add_element(EvntTms_27);
        }
        CmplxEvnt_27.add_element(EvntDts_27);
      }
      Instrmt_27.add_element(CmplxEvnt_27);
    }
    elt.add_element(Instrmt_27);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_10{"FinDetls"};
    multiset<string> FinDetls_10_set;
    FinDetls_10.add_attribute("AgmtDesc", "AgreementDesc_t_439191765"); // 1
    FinDetls_10_set.insert("AgreementDesc_t_439191765");
    FinDetls_10.add_attribute("AgmtID", "AgreementID_t_109308145"); // 1
    FinDetls_10_set.insert("AgreementID_t_109308145");
    FinDetls_10.add_attribute("AgmtDt", "AgreementDate_t_138231844"); // 1
    FinDetls_10_set.insert("AgreementDate_t_138231844");
    FinDetls_10.add_attribute("AgmtCcy", "JPY"); // 1
    FinDetls_10_set.insert("JPY");
    FinDetls_10.add_attribute("TrmTyp", "3"); // 1
    FinDetls_10_set.insert("3");
    FinDetls_10.add_attribute("StartDt", "StartDate_t_1638505249"); // 1
    FinDetls_10_set.insert("StartDate_t_1638505249");
    FinDetls_10.add_attribute("EndDt", "EndDate_t_1495722242"); // 1
    FinDetls_10_set.insert("EndDate_t_1495722242");
    FinDetls_10.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_10_set.insert("0");
    FinDetls_10.add_attribute("MgnRatio", "7403443.040000"); // 1
    FinDetls_10_set.insert("7403443.040000");
    all_values.push_back(FinDetls_10_set);
    all_compo_names.insert("FinDetls_10_set");

    elt.add_element(FinDetls_10);
  } // end FinDetls
  { // Undly
    xml_element Undly_37{"Undly"};
    multiset<string> Undly_37_set;
    Undly_37.add_attribute("Sym", "UnderlyingSymbol_t_1401481078"); // 1
    Undly_37_set.insert("UnderlyingSymbol_t_1401481078");
    Undly_37.add_attribute("Sfx", "CD"); // 1
    Undly_37_set.insert("CD");
    Undly_37.add_attribute("ID", "UnderlyingSecurityID_t_886918986"); // 1
    Undly_37_set.insert("UnderlyingSecurityID_t_886918986");
    Undly_37.add_attribute("Src", "I"); // 1
    Undly_37_set.insert("I");
    Undly_37.add_attribute("Prod", "1"); // 1
    Undly_37_set.insert("1");
    Undly_37.add_attribute("CFI", "UnderlyingCFICode_t_1337529663"); // 1
    Undly_37_set.insert("UnderlyingCFICode_t_1337529663");
    Undly_37.add_attribute("SecTyp", "BDN"); // 1
    Undly_37_set.insert("BDN");
    Undly_37.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_167410443"); // 1
    Undly_37_set.insert("UnderlyingSecuritySubType_t_167410443");
    Undly_37.add_attribute("MMY", "361194919"); // 1
    Undly_37_set.insert("361194919");
    Undly_37.add_attribute("Mat", "UnderlyingMaturityDate_t_1092586636"); // 1
    Undly_37_set.insert("UnderlyingMaturityDate_t_1092586636");
    Undly_37.add_attribute("MatTm", "977909968"); // 1
    Undly_37_set.insert("977909968");
    Undly_37.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1003052509"); // 1
    Undly_37_set.insert("UnderlyingCouponPaymentDate_t_1003052509");
    Undly_37.add_attribute("RestrctTyp", "XR"); // 1
    Undly_37_set.insert("XR");
    Undly_37.add_attribute("Snrty", "SB"); // 1
    Undly_37_set.insert("SB");
    Undly_37.add_attribute("NotlPctOut", "2983796.970000"); // 1
    Undly_37_set.insert("2983796.970000");
    Undly_37.add_attribute("OrigNotlPctOut", "6239037.170000"); // 1
    Undly_37_set.insert("6239037.170000");
    Undly_37.add_attribute("AttchPnt", "2667710.240000"); // 1
    Undly_37_set.insert("2667710.240000");
    Undly_37.add_attribute("DetchPnt", "2221471.960000"); // 1
    Undly_37_set.insert("2221471.960000");
    Undly_37.add_attribute("Issued", "UnderlyingIssueDate_t_1096845495"); // 1
    Undly_37_set.insert("UnderlyingIssueDate_t_1096845495");
    Undly_37.add_attribute("RepoCollSecTyp", "1761228893"); // 1
    Undly_37_set.insert("1761228893");
    Undly_37.add_attribute("RepoTrm", "661338961"); // 1
    Undly_37_set.insert("661338961");
    Undly_37.add_attribute("RepoRt", "12061536.400000"); // 1
    Undly_37_set.insert("12061536.400000");
    Undly_37.add_attribute("Fctr", "18994607.370000"); // 1
    Undly_37_set.insert("18994607.370000");
    Undly_37.add_attribute("CrdRtg", "UnderlyingCreditRating_t_308255679"); // 1
    Undly_37_set.insert("UnderlyingCreditRating_t_308255679");
    Undly_37.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_932583588"); // 1
    Undly_37_set.insert("UnderlyingInstrRegistry_t_932583588");
    Undly_37.add_attribute("Ctry", "1999744471"); // 1
    Undly_37_set.insert("1999744471");
    Undly_37.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1946760928"); // 1
    Undly_37_set.insert("UnderlyingStateOrProvinceOfIssue_t_1946760928");
    Undly_37.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_280822182"); // 1
    Undly_37_set.insert("UnderlyingLocaleOfIssue_t_280822182");
    Undly_37.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1569504755"); // 1
    Undly_37_set.insert("UnderlyingRedemptionDate_t_1569504755");
    Undly_37.add_attribute("StrkPx", "5396215.850000"); // 1
    Undly_37_set.insert("5396215.850000");
    Undly_37.add_attribute("StrkCcy", "EUR"); // 1
    Undly_37_set.insert("EUR");
    Undly_37.add_attribute("OptA", "1484509315"); // 1
    Undly_37_set.insert("1484509315");
    Undly_37.add_attribute("Mult", "11153331.900000"); // 1
    Undly_37_set.insert("11153331.900000");
    Undly_37.add_attribute("MultTyp", "2"); // 1
    Undly_37_set.insert("2");
    Undly_37.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_37_set.insert("1");
    Undly_37.add_attribute("UOM", "MMBtu"); // 1
    Undly_37_set.insert("MMBtu");
    Undly_37.add_attribute("UOMQty", "1635394.700000"); // 1
    Undly_37_set.insert("1635394.700000");
    Undly_37.add_attribute("PxUOM", "Bcf"); // 1
    Undly_37_set.insert("Bcf");
    Undly_37.add_attribute("PxUOMQty", "6665741.250000"); // 1
    Undly_37_set.insert("6665741.250000");
    Undly_37.add_attribute("TmUnit", "Wk"); // 1
    Undly_37_set.insert("Wk");
    Undly_37.add_attribute("ExerStyle", "0"); // 1
    Undly_37_set.insert("0");
    Undly_37.add_attribute("CpnRt", "16696266.340000"); // 1
    Undly_37_set.insert("16696266.340000");
    Undly_37.add_attribute("Exch", "UnderlyingSecurityExchange_t_1720083825"); // 1
    Undly_37_set.insert("UnderlyingSecurityExchange_t_1720083825");
    Undly_37.add_attribute("Issr", "UnderlyingIssuer_t_79598707"); // 1
    Undly_37_set.insert("UnderlyingIssuer_t_79598707");
    Undly_37.add_attribute("EncUndIssrLen", "1968006331"); // 1
    Undly_37_set.insert("1968006331");
    Undly_37.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_196503894"); // 1
    Undly_37_set.insert("EncodedUnderlyingIssuer_t_196503894");
    Undly_37.add_attribute("Desc", "UnderlyingSecurityDesc_t_346369731"); // 1
    Undly_37_set.insert("UnderlyingSecurityDesc_t_346369731");
    Undly_37.add_attribute("EncUndSecDescLen", "42669879"); // 1
    Undly_37_set.insert("42669879");
    Undly_37.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1293349389"); // 1
    Undly_37_set.insert("EncodedUnderlyingSecurityDesc_t_1293349389");
    Undly_37.add_attribute("CPPgm", "UnderlyingCPProgram_t_2107598624"); // 1
    Undly_37_set.insert("UnderlyingCPProgram_t_2107598624");
    Undly_37.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_704008840"); // 1
    Undly_37_set.insert("UnderlyingCPRegType_t_704008840");
    Undly_37.add_attribute("AllocPct", "3520193.820000"); // 1
    Undly_37_set.insert("3520193.820000");
    Undly_37.add_attribute("Ccy", "EUR"); // 1
    Undly_37_set.insert("EUR");
    Undly_37.add_attribute("Qty", "12846029.700000"); // 1
    Undly_37_set.insert("12846029.700000");
    Undly_37.add_attribute("SettlTyp", "5"); // 1
    Undly_37_set.insert("5");
    Undly_37.add_attribute("CashAmt", "UnderlyingCashAmount_t_811541800"); // 1
    Undly_37_set.insert("UnderlyingCashAmount_t_811541800");
    Undly_37.add_attribute("CashTyp", "DIFF"); // 1
    Undly_37_set.insert("DIFF");
    Undly_37.add_attribute("Px", "11338576.430000"); // 1
    Undly_37_set.insert("11338576.430000");
    Undly_37.add_attribute("DirtPx", "13511633.850000"); // 1
    Undly_37_set.insert("13511633.850000");
    Undly_37.add_attribute("EndPx", "17938393.570000"); // 1
    Undly_37_set.insert("17938393.570000");
    Undly_37.add_attribute("StartVal", "UnderlyingStartValue_t_1957359829"); // 1
    Undly_37_set.insert("UnderlyingStartValue_t_1957359829");
    Undly_37.add_attribute("CurVal", "UnderlyingCurrentValue_t_688189052"); // 1
    Undly_37_set.insert("UnderlyingCurrentValue_t_688189052");
    Undly_37.add_attribute("EndVal", "UnderlyingEndValue_t_761688900"); // 1
    Undly_37_set.insert("UnderlyingEndValue_t_761688900");
    Undly_37.add_attribute("AdjQty", "12614215.360000"); // 1
    Undly_37_set.insert("12614215.360000");
    Undly_37.add_attribute("FxRate", "17846093.430000"); // 1
    Undly_37_set.insert("17846093.430000");
    Undly_37.add_attribute("FxRateCalc", "D"); // 1
    Undly_37_set.insert("D");
    Undly_37.add_attribute("CapValu", "UnderlyingCapValue_t_1424961006"); // 1
    Undly_37_set.insert("UnderlyingCapValue_t_1424961006");
    Undly_37.add_attribute("SetMeth", "UnderlyingSettlMethod_t_900956430"); // 1
    Undly_37_set.insert("UnderlyingSettlMethod_t_900956430");
    Undly_37.add_attribute("PutCall", "1733642230"); // 1
    Undly_37_set.insert("1733642230");
    all_values.push_back(Undly_37_set);
    all_compo_names.insert("Undly_37_set");

    {
      xml_element UndAID_37{"UndAID"};
      multiset<string> UndAID_37_set;
      UndAID_37.add_attribute("AltID", "UnderlyingSecurityAltID_t_533603464"); // 2
      UndAID_37_set.insert("UnderlyingSecurityAltID_t_533603464");
      UndAID_37.add_attribute("AltIDSrc", "D"); // 2
      UndAID_37_set.insert("D");
      all_values.push_back(UndAID_37_set);
      all_compo_names.insert("UndAID_37_set");

      Undly_37.add_element(UndAID_37);
    }
    {
      xml_element Stip_54{"Stip"};
      multiset<string> Stip_54_set;
      Stip_54.add_attribute("Typ", "ISSUESIZE"); // 2
      Stip_54_set.insert("ISSUESIZE");
      Stip_54.add_attribute("Val", "UnderlyingStipValue_t_106203641"); // 2
      Stip_54_set.insert("UnderlyingStipValue_t_106203641");
      all_values.push_back(Stip_54_set);
      all_compo_names.insert("Stip_54_set");

      Undly_37.add_element(Stip_54);
    }
    {
      xml_element Pty_165{"Pty"};
      multiset<string> Pty_165_set;
      Pty_165.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1074812191"); // 2
      Pty_165_set.insert("UnderlyingInstrumentPartyID_t_1074812191");
      Pty_165.add_attribute("Src", "7"); // 2
      Pty_165_set.insert("7");
      Pty_165.add_attribute("R", "20"); // 2
      Pty_165_set.insert("20");
      all_values.push_back(Pty_165_set);
      all_compo_names.insert("Pty_165_set");

      {
        xml_element Sub_165{"Sub"};
        multiset<string> Sub_165_set;
        Sub_165.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1421181922"); // 3
        Sub_165_set.insert("UnderlyingInstrumentPartySubID_t_1421181922");
        Sub_165.add_attribute("Typ", "3"); // 3
        Sub_165_set.insert("3");
        all_values.push_back(Sub_165_set);
        all_compo_names.insert("Sub_165_set");

        Pty_165.add_element(Sub_165);
      }
      Undly_37.add_element(Pty_165);
    }
    elt.add_element(Undly_37);
  } // end Undly
  { // Undly
    xml_element Undly_38{"Undly"};
    multiset<string> Undly_38_set;
    Undly_38.add_attribute("Sym", "UnderlyingSymbol_t_1596056925"); // 1
    Undly_38_set.insert("UnderlyingSymbol_t_1596056925");
    Undly_38.add_attribute("Sfx", "CD"); // 1
    Undly_38_set.insert("CD");
    Undly_38.add_attribute("ID", "UnderlyingSecurityID_t_1822986620"); // 1
    Undly_38_set.insert("UnderlyingSecurityID_t_1822986620");
    Undly_38.add_attribute("Src", "2"); // 1
    Undly_38_set.insert("2");
    Undly_38.add_attribute("Prod", "13"); // 1
    Undly_38_set.insert("13");
    Undly_38.add_attribute("CFI", "UnderlyingCFICode_t_687767492"); // 1
    Undly_38_set.insert("UnderlyingCFICode_t_687767492");
    Undly_38.add_attribute("SecTyp", "CORP"); // 1
    Undly_38_set.insert("CORP");
    Undly_38.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_657741851"); // 1
    Undly_38_set.insert("UnderlyingSecuritySubType_t_657741851");
    Undly_38.add_attribute("MMY", "1499309292"); // 1
    Undly_38_set.insert("1499309292");
    Undly_38.add_attribute("Mat", "UnderlyingMaturityDate_t_503137135"); // 1
    Undly_38_set.insert("UnderlyingMaturityDate_t_503137135");
    Undly_38.add_attribute("MatTm", "1791599495"); // 1
    Undly_38_set.insert("1791599495");
    Undly_38.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_702989029"); // 1
    Undly_38_set.insert("UnderlyingCouponPaymentDate_t_702989029");
    Undly_38.add_attribute("RestrctTyp", "FR"); // 1
    Undly_38_set.insert("FR");
    Undly_38.add_attribute("Snrty", "SR"); // 1
    Undly_38_set.insert("SR");
    Undly_38.add_attribute("NotlPctOut", "13911780.810000"); // 1
    Undly_38_set.insert("13911780.810000");
    Undly_38.add_attribute("OrigNotlPctOut", "9111817.440000"); // 1
    Undly_38_set.insert("9111817.440000");
    Undly_38.add_attribute("AttchPnt", "7154135.640000"); // 1
    Undly_38_set.insert("7154135.640000");
    Undly_38.add_attribute("DetchPnt", "10283037.760000"); // 1
    Undly_38_set.insert("10283037.760000");
    Undly_38.add_attribute("Issued", "UnderlyingIssueDate_t_1978249850"); // 1
    Undly_38_set.insert("UnderlyingIssueDate_t_1978249850");
    Undly_38.add_attribute("RepoCollSecTyp", "2140374570"); // 1
    Undly_38_set.insert("2140374570");
    Undly_38.add_attribute("RepoTrm", "1929260206"); // 1
    Undly_38_set.insert("1929260206");
    Undly_38.add_attribute("RepoRt", "15644084.320000"); // 1
    Undly_38_set.insert("15644084.320000");
    Undly_38.add_attribute("Fctr", "5264943.860000"); // 1
    Undly_38_set.insert("5264943.860000");
    Undly_38.add_attribute("CrdRtg", "UnderlyingCreditRating_t_776990043"); // 1
    Undly_38_set.insert("UnderlyingCreditRating_t_776990043");
    Undly_38.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_672710001"); // 1
    Undly_38_set.insert("UnderlyingInstrRegistry_t_672710001");
    Undly_38.add_attribute("Ctry", "632698027"); // 1
    Undly_38_set.insert("632698027");
    Undly_38.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1851802234"); // 1
    Undly_38_set.insert("UnderlyingStateOrProvinceOfIssue_t_1851802234");
    Undly_38.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1749017902"); // 1
    Undly_38_set.insert("UnderlyingLocaleOfIssue_t_1749017902");
    Undly_38.add_attribute("Redeem", "UnderlyingRedemptionDate_t_935405563"); // 1
    Undly_38_set.insert("UnderlyingRedemptionDate_t_935405563");
    Undly_38.add_attribute("StrkPx", "11255005.090000"); // 1
    Undly_38_set.insert("11255005.090000");
    Undly_38.add_attribute("StrkCcy", "CHF"); // 1
    Undly_38_set.insert("CHF");
    Undly_38.add_attribute("OptA", "359313759"); // 1
    Undly_38_set.insert("359313759");
    Undly_38.add_attribute("Mult", "3960150.060000"); // 1
    Undly_38_set.insert("3960150.060000");
    Undly_38.add_attribute("MultTyp", "1"); // 1
    Undly_38_set.insert("1");
    Undly_38.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_38_set.insert("3");
    Undly_38.add_attribute("UOM", "MMbbl"); // 1
    Undly_38_set.insert("MMbbl");
    Undly_38.add_attribute("UOMQty", "12697671.300000"); // 1
    Undly_38_set.insert("12697671.300000");
    Undly_38.add_attribute("PxUOM", "t"); // 1
    Undly_38_set.insert("t");
    Undly_38.add_attribute("PxUOMQty", "4356081.420000"); // 1
    Undly_38_set.insert("4356081.420000");
    Undly_38.add_attribute("TmUnit", "Yr"); // 1
    Undly_38_set.insert("Yr");
    Undly_38.add_attribute("ExerStyle", "2"); // 1
    Undly_38_set.insert("2");
    Undly_38.add_attribute("CpnRt", "11385971.710000"); // 1
    Undly_38_set.insert("11385971.710000");
    Undly_38.add_attribute("Exch", "UnderlyingSecurityExchange_t_1922397110"); // 1
    Undly_38_set.insert("UnderlyingSecurityExchange_t_1922397110");
    Undly_38.add_attribute("Issr", "UnderlyingIssuer_t_1208552449"); // 1
    Undly_38_set.insert("UnderlyingIssuer_t_1208552449");
    Undly_38.add_attribute("EncUndIssrLen", "382291604"); // 1
    Undly_38_set.insert("382291604");
    Undly_38.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_686095206"); // 1
    Undly_38_set.insert("EncodedUnderlyingIssuer_t_686095206");
    Undly_38.add_attribute("Desc", "UnderlyingSecurityDesc_t_1923966013"); // 1
    Undly_38_set.insert("UnderlyingSecurityDesc_t_1923966013");
    Undly_38.add_attribute("EncUndSecDescLen", "1410595381"); // 1
    Undly_38_set.insert("1410595381");
    Undly_38.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_516861408"); // 1
    Undly_38_set.insert("EncodedUnderlyingSecurityDesc_t_516861408");
    Undly_38.add_attribute("CPPgm", "UnderlyingCPProgram_t_1916856935"); // 1
    Undly_38_set.insert("UnderlyingCPProgram_t_1916856935");
    Undly_38.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1192371939"); // 1
    Undly_38_set.insert("UnderlyingCPRegType_t_1192371939");
    Undly_38.add_attribute("AllocPct", "20812698.410000"); // 1
    Undly_38_set.insert("20812698.410000");
    Undly_38.add_attribute("Ccy", "USD"); // 1
    Undly_38_set.insert("USD");
    Undly_38.add_attribute("Qty", "6064961.940000"); // 1
    Undly_38_set.insert("6064961.940000");
    Undly_38.add_attribute("SettlTyp", "4"); // 1
    Undly_38_set.insert("4");
    Undly_38.add_attribute("CashAmt", "UnderlyingCashAmount_t_1673680569"); // 1
    Undly_38_set.insert("UnderlyingCashAmount_t_1673680569");
    Undly_38.add_attribute("CashTyp", "FIXED"); // 1
    Undly_38_set.insert("FIXED");
    Undly_38.add_attribute("Px", "18639712.640000"); // 1
    Undly_38_set.insert("18639712.640000");
    Undly_38.add_attribute("DirtPx", "6516974.300000"); // 1
    Undly_38_set.insert("6516974.300000");
    Undly_38.add_attribute("EndPx", "9285424.820000"); // 1
    Undly_38_set.insert("9285424.820000");
    Undly_38.add_attribute("StartVal", "UnderlyingStartValue_t_100466457"); // 1
    Undly_38_set.insert("UnderlyingStartValue_t_100466457");
    Undly_38.add_attribute("CurVal", "UnderlyingCurrentValue_t_1011011189"); // 1
    Undly_38_set.insert("UnderlyingCurrentValue_t_1011011189");
    Undly_38.add_attribute("EndVal", "UnderlyingEndValue_t_1324557489"); // 1
    Undly_38_set.insert("UnderlyingEndValue_t_1324557489");
    Undly_38.add_attribute("AdjQty", "2850379.580000"); // 1
    Undly_38_set.insert("2850379.580000");
    Undly_38.add_attribute("FxRate", "3162302.640000"); // 1
    Undly_38_set.insert("3162302.640000");
    Undly_38.add_attribute("FxRateCalc", "D"); // 1
    Undly_38_set.insert("D");
    Undly_38.add_attribute("CapValu", "UnderlyingCapValue_t_1554805088"); // 1
    Undly_38_set.insert("UnderlyingCapValue_t_1554805088");
    Undly_38.add_attribute("SetMeth", "UnderlyingSettlMethod_t_279191191"); // 1
    Undly_38_set.insert("UnderlyingSettlMethod_t_279191191");
    Undly_38.add_attribute("PutCall", "696464482"); // 1
    Undly_38_set.insert("696464482");
    all_values.push_back(Undly_38_set);
    all_compo_names.insert("Undly_38_set");

    {
      xml_element UndAID_38{"UndAID"};
      multiset<string> UndAID_38_set;
      UndAID_38.add_attribute("AltID", "UnderlyingSecurityAltID_t_1180225706"); // 2
      UndAID_38_set.insert("UnderlyingSecurityAltID_t_1180225706");
      UndAID_38.add_attribute("AltIDSrc", "3"); // 2
      UndAID_38_set.insert("3");
      all_values.push_back(UndAID_38_set);
      all_compo_names.insert("UndAID_38_set");

      Undly_38.add_element(UndAID_38);
    }
    {
      xml_element Stip_55{"Stip"};
      multiset<string> Stip_55_set;
      Stip_55.add_attribute("Typ", "TRDVAR"); // 2
      Stip_55_set.insert("TRDVAR");
      Stip_55.add_attribute("Val", "UnderlyingStipValue_t_955139168"); // 2
      Stip_55_set.insert("UnderlyingStipValue_t_955139168");
      all_values.push_back(Stip_55_set);
      all_compo_names.insert("Stip_55_set");

      Undly_38.add_element(Stip_55);
    }
    {
      xml_element Pty_166{"Pty"};
      multiset<string> Pty_166_set;
      Pty_166.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1094820414"); // 2
      Pty_166_set.insert("UnderlyingInstrumentPartyID_t_1094820414");
      Pty_166.add_attribute("Src", "1"); // 2
      Pty_166_set.insert("1");
      Pty_166.add_attribute("R", "41"); // 2
      Pty_166_set.insert("41");
      all_values.push_back(Pty_166_set);
      all_compo_names.insert("Pty_166_set");

      {
        xml_element Sub_166{"Sub"};
        multiset<string> Sub_166_set;
        Sub_166.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_871302779"); // 3
        Sub_166_set.insert("UnderlyingInstrumentPartySubID_t_871302779");
        Sub_166.add_attribute("Typ", "24"); // 3
        Sub_166_set.insert("24");
        all_values.push_back(Sub_166_set);
        all_compo_names.insert("Sub_166_set");

        Pty_166.add_element(Sub_166);
      }
      Undly_38.add_element(Pty_166);
    }
    elt.add_element(Undly_38);
  } // end Undly
  { // Undly
    xml_element Undly_39{"Undly"};
    multiset<string> Undly_39_set;
    Undly_39.add_attribute("Sym", "UnderlyingSymbol_t_10612135"); // 1
    Undly_39_set.insert("UnderlyingSymbol_t_10612135");
    Undly_39.add_attribute("Sfx", "WI"); // 1
    Undly_39_set.insert("WI");
    Undly_39.add_attribute("ID", "UnderlyingSecurityID_t_525353282"); // 1
    Undly_39_set.insert("UnderlyingSecurityID_t_525353282");
    Undly_39.add_attribute("Src", "9"); // 1
    Undly_39_set.insert("9");
    Undly_39.add_attribute("Prod", "11"); // 1
    Undly_39_set.insert("11");
    Undly_39.add_attribute("CFI", "UnderlyingCFICode_t_347231617"); // 1
    Undly_39_set.insert("UnderlyingCFICode_t_347231617");
    Undly_39.add_attribute("SecTyp", "TBOND"); // 1
    Undly_39_set.insert("TBOND");
    Undly_39.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1865109441"); // 1
    Undly_39_set.insert("UnderlyingSecuritySubType_t_1865109441");
    Undly_39.add_attribute("MMY", "2020912186"); // 1
    Undly_39_set.insert("2020912186");
    Undly_39.add_attribute("Mat", "UnderlyingMaturityDate_t_758924971"); // 1
    Undly_39_set.insert("UnderlyingMaturityDate_t_758924971");
    Undly_39.add_attribute("MatTm", "1581597058"); // 1
    Undly_39_set.insert("1581597058");
    Undly_39.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_525125968"); // 1
    Undly_39_set.insert("UnderlyingCouponPaymentDate_t_525125968");
    Undly_39.add_attribute("RestrctTyp", "MR"); // 1
    Undly_39_set.insert("MR");
    Undly_39.add_attribute("Snrty", "SR"); // 1
    Undly_39_set.insert("SR");
    Undly_39.add_attribute("NotlPctOut", "15361371.570000"); // 1
    Undly_39_set.insert("15361371.570000");
    Undly_39.add_attribute("OrigNotlPctOut", "8645412.940000"); // 1
    Undly_39_set.insert("8645412.940000");
    Undly_39.add_attribute("AttchPnt", "19671014.730000"); // 1
    Undly_39_set.insert("19671014.730000");
    Undly_39.add_attribute("DetchPnt", "18523674.220000"); // 1
    Undly_39_set.insert("18523674.220000");
    Undly_39.add_attribute("Issued", "UnderlyingIssueDate_t_1125397634"); // 1
    Undly_39_set.insert("UnderlyingIssueDate_t_1125397634");
    Undly_39.add_attribute("RepoCollSecTyp", "1374422914"); // 1
    Undly_39_set.insert("1374422914");
    Undly_39.add_attribute("RepoTrm", "2131558613"); // 1
    Undly_39_set.insert("2131558613");
    Undly_39.add_attribute("RepoRt", "18218621.160000"); // 1
    Undly_39_set.insert("18218621.160000");
    Undly_39.add_attribute("Fctr", "4071649.720000"); // 1
    Undly_39_set.insert("4071649.720000");
    Undly_39.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2017826577"); // 1
    Undly_39_set.insert("UnderlyingCreditRating_t_2017826577");
    Undly_39.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1509440121"); // 1
    Undly_39_set.insert("UnderlyingInstrRegistry_t_1509440121");
    Undly_39.add_attribute("Ctry", "1362304140"); // 1
    Undly_39_set.insert("1362304140");
    Undly_39.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_965163343"); // 1
    Undly_39_set.insert("UnderlyingStateOrProvinceOfIssue_t_965163343");
    Undly_39.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1579309731"); // 1
    Undly_39_set.insert("UnderlyingLocaleOfIssue_t_1579309731");
    Undly_39.add_attribute("Redeem", "UnderlyingRedemptionDate_t_856054866"); // 1
    Undly_39_set.insert("UnderlyingRedemptionDate_t_856054866");
    Undly_39.add_attribute("StrkPx", "18364661.230000"); // 1
    Undly_39_set.insert("18364661.230000");
    Undly_39.add_attribute("StrkCcy", "EUR"); // 1
    Undly_39_set.insert("EUR");
    Undly_39.add_attribute("OptA", "329658542"); // 1
    Undly_39_set.insert("329658542");
    Undly_39.add_attribute("Mult", "14376443.570000"); // 1
    Undly_39_set.insert("14376443.570000");
    Undly_39.add_attribute("MultTyp", "2"); // 1
    Undly_39_set.insert("2");
    Undly_39.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_39_set.insert("2");
    Undly_39.add_attribute("UOM", "Bu"); // 1
    Undly_39_set.insert("Bu");
    Undly_39.add_attribute("UOMQty", "13619598.520000"); // 1
    Undly_39_set.insert("13619598.520000");
    Undly_39.add_attribute("PxUOM", "Bcf"); // 1
    Undly_39_set.insert("Bcf");
    Undly_39.add_attribute("PxUOMQty", "16583045.120000"); // 1
    Undly_39_set.insert("16583045.120000");
    Undly_39.add_attribute("TmUnit", "Min"); // 1
    Undly_39_set.insert("Min");
    Undly_39.add_attribute("ExerStyle", "2"); // 1
    Undly_39_set.insert("2");
    Undly_39.add_attribute("CpnRt", "359468.320000"); // 1
    Undly_39_set.insert("359468.320000");
    Undly_39.add_attribute("Exch", "UnderlyingSecurityExchange_t_1660868628"); // 1
    Undly_39_set.insert("UnderlyingSecurityExchange_t_1660868628");
    Undly_39.add_attribute("Issr", "UnderlyingIssuer_t_2100005001"); // 1
    Undly_39_set.insert("UnderlyingIssuer_t_2100005001");
    Undly_39.add_attribute("EncUndIssrLen", "1572083989"); // 1
    Undly_39_set.insert("1572083989");
    Undly_39.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_377926275"); // 1
    Undly_39_set.insert("EncodedUnderlyingIssuer_t_377926275");
    Undly_39.add_attribute("Desc", "UnderlyingSecurityDesc_t_1919622827"); // 1
    Undly_39_set.insert("UnderlyingSecurityDesc_t_1919622827");
    Undly_39.add_attribute("EncUndSecDescLen", "1276967763"); // 1
    Undly_39_set.insert("1276967763");
    Undly_39.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1503323909"); // 1
    Undly_39_set.insert("EncodedUnderlyingSecurityDesc_t_1503323909");
    Undly_39.add_attribute("CPPgm", "UnderlyingCPProgram_t_1146562093"); // 1
    Undly_39_set.insert("UnderlyingCPProgram_t_1146562093");
    Undly_39.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1261042728"); // 1
    Undly_39_set.insert("UnderlyingCPRegType_t_1261042728");
    Undly_39.add_attribute("AllocPct", "11777023.770000"); // 1
    Undly_39_set.insert("11777023.770000");
    Undly_39.add_attribute("Ccy", "GBP"); // 1
    Undly_39_set.insert("GBP");
    Undly_39.add_attribute("Qty", "5396588.500000"); // 1
    Undly_39_set.insert("5396588.500000");
    Undly_39.add_attribute("SettlTyp", "2"); // 1
    Undly_39_set.insert("2");
    Undly_39.add_attribute("CashAmt", "UnderlyingCashAmount_t_2096549001"); // 1
    Undly_39_set.insert("UnderlyingCashAmount_t_2096549001");
    Undly_39.add_attribute("CashTyp", "FIXED"); // 1
    Undly_39_set.insert("FIXED");
    Undly_39.add_attribute("Px", "16246024.230000"); // 1
    Undly_39_set.insert("16246024.230000");
    Undly_39.add_attribute("DirtPx", "17855314.760000"); // 1
    Undly_39_set.insert("17855314.760000");
    Undly_39.add_attribute("EndPx", "8837760.080000"); // 1
    Undly_39_set.insert("8837760.080000");
    Undly_39.add_attribute("StartVal", "UnderlyingStartValue_t_343785777"); // 1
    Undly_39_set.insert("UnderlyingStartValue_t_343785777");
    Undly_39.add_attribute("CurVal", "UnderlyingCurrentValue_t_2115190018"); // 1
    Undly_39_set.insert("UnderlyingCurrentValue_t_2115190018");
    Undly_39.add_attribute("EndVal", "UnderlyingEndValue_t_173936717"); // 1
    Undly_39_set.insert("UnderlyingEndValue_t_173936717");
    Undly_39.add_attribute("AdjQty", "11548511.060000"); // 1
    Undly_39_set.insert("11548511.060000");
    Undly_39.add_attribute("FxRate", "12339086.530000"); // 1
    Undly_39_set.insert("12339086.530000");
    Undly_39.add_attribute("FxRateCalc", "D"); // 1
    Undly_39_set.insert("D");
    Undly_39.add_attribute("CapValu", "UnderlyingCapValue_t_369327310"); // 1
    Undly_39_set.insert("UnderlyingCapValue_t_369327310");
    Undly_39.add_attribute("SetMeth", "UnderlyingSettlMethod_t_70253081"); // 1
    Undly_39_set.insert("UnderlyingSettlMethod_t_70253081");
    Undly_39.add_attribute("PutCall", "1469633555"); // 1
    Undly_39_set.insert("1469633555");
    all_values.push_back(Undly_39_set);
    all_compo_names.insert("Undly_39_set");

    {
      xml_element UndAID_39{"UndAID"};
      multiset<string> UndAID_39_set;
      UndAID_39.add_attribute("AltID", "UnderlyingSecurityAltID_t_342728485"); // 2
      UndAID_39_set.insert("UnderlyingSecurityAltID_t_342728485");
      UndAID_39.add_attribute("AltIDSrc", "4"); // 2
      UndAID_39_set.insert("4");
      all_values.push_back(UndAID_39_set);
      all_compo_names.insert("UndAID_39_set");

      Undly_39.add_element(UndAID_39);
    }
    {
      xml_element Stip_56{"Stip"};
      multiset<string> Stip_56_set;
      Stip_56.add_attribute("Typ", "REFINT"); // 2
      Stip_56_set.insert("REFINT");
      Stip_56.add_attribute("Val", "UnderlyingStipValue_t_2003597114"); // 2
      Stip_56_set.insert("UnderlyingStipValue_t_2003597114");
      all_values.push_back(Stip_56_set);
      all_compo_names.insert("Stip_56_set");

      Undly_39.add_element(Stip_56);
    }
    {
      xml_element Pty_167{"Pty"};
      multiset<string> Pty_167_set;
      Pty_167.add_attribute("ID", "UnderlyingInstrumentPartyID_t_440715920"); // 2
      Pty_167_set.insert("UnderlyingInstrumentPartyID_t_440715920");
      Pty_167.add_attribute("Src", "4"); // 2
      Pty_167_set.insert("4");
      Pty_167.add_attribute("R", "6"); // 2
      Pty_167_set.insert("6");
      all_values.push_back(Pty_167_set);
      all_compo_names.insert("Pty_167_set");

      {
        xml_element Sub_167{"Sub"};
        multiset<string> Sub_167_set;
        Sub_167.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_212855099"); // 3
        Sub_167_set.insert("UnderlyingInstrumentPartySubID_t_212855099");
        Sub_167.add_attribute("Typ", "3"); // 3
        Sub_167_set.insert("3");
        all_values.push_back(Sub_167_set);
        all_compo_names.insert("Sub_167_set");

        Pty_167.add_element(Sub_167);
      }
      Undly_39.add_element(Pty_167);
    }
    elt.add_element(Undly_39);
  } // end Undly
  { // Stip
    xml_element Stip_57{"Stip"};
    multiset<string> Stip_57_set;
    Stip_57.add_attribute("Typ", "LEAVEQTY"); // 1
    Stip_57_set.insert("LEAVEQTY");
    Stip_57.add_attribute("Val", "StipulationValue_t_1320707573"); // 1
    Stip_57_set.insert("StipulationValue_t_1320707573");
    all_values.push_back(Stip_57_set);
    all_compo_names.insert("Stip_57_set");

    elt.add_element(Stip_57);
  } // end Stip
  { // Stip
    xml_element Stip_58{"Stip"};
    multiset<string> Stip_58_set;
    Stip_58.add_attribute("Typ", "YIELD"); // 1
    Stip_58_set.insert("YIELD");
    Stip_58.add_attribute("Val", "StipulationValue_t_765660609"); // 1
    Stip_58_set.insert("StipulationValue_t_765660609");
    all_values.push_back(Stip_58_set);
    all_compo_names.insert("Stip_58_set");

    elt.add_element(Stip_58);
  } // end Stip
  { // Stip
    xml_element Stip_59{"Stip"};
    multiset<string> Stip_59_set;
    Stip_59.add_attribute("Typ", "POOL"); // 1
    Stip_59_set.insert("POOL");
    Stip_59.add_attribute("Val", "StipulationValue_t_1307241229"); // 1
    Stip_59_set.insert("StipulationValue_t_1307241229");
    all_values.push_back(Stip_59_set);
    all_compo_names.insert("Stip_59_set");

    elt.add_element(Stip_59);
  } // end Stip
  { // OrdQty
    xml_element OrdQty_8{"OrdQty"};
    multiset<string> OrdQty_8_set;
    OrdQty_8.add_attribute("Qty", "15342081.660000"); // 1
    OrdQty_8_set.insert("15342081.660000");
    OrdQty_8.add_attribute("Cash", "2536749.360000"); // 1
    OrdQty_8_set.insert("2536749.360000");
    OrdQty_8.add_attribute("Pct", "12787261.630000"); // 1
    OrdQty_8_set.insert("12787261.630000");
    OrdQty_8.add_attribute("RndDir", "2"); // 1
    OrdQty_8_set.insert("2");
    OrdQty_8.add_attribute("RndMod", "20392064.130000"); // 1
    OrdQty_8_set.insert("20392064.130000");
    all_values.push_back(OrdQty_8_set);
    all_compo_names.insert("OrdQty_8_set");

    elt.add_element(OrdQty_8);
  } // end OrdQty
  { // TrgrInstr
    xml_element TrgrInstr_1{"TrgrInstr"};
    multiset<string> TrgrInstr_1_set;
    TrgrInstr_1.add_attribute("TrgrTyp", "1"); // 1
    TrgrInstr_1_set.insert("1");
    TrgrInstr_1.add_attribute("TrgrActn", "3"); // 1
    TrgrInstr_1_set.insert("3");
    TrgrInstr_1.add_attribute("TrgrPx", "20069127.830000"); // 1
    TrgrInstr_1_set.insert("20069127.830000");
    TrgrInstr_1.add_attribute("TrgrSym", "TriggerSymbol_t_188955241"); // 1
    TrgrInstr_1_set.insert("TriggerSymbol_t_188955241");
    TrgrInstr_1.add_attribute("TrgrSecID", "TriggerSecurityID_t_362480177"); // 1
    TrgrInstr_1_set.insert("TriggerSecurityID_t_362480177");
    TrgrInstr_1.add_attribute("TrgrSecIDSrc", "5"); // 1
    TrgrInstr_1_set.insert("5");
    TrgrInstr_1.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_284285"); // 1
    TrgrInstr_1_set.insert("TriggerSecurityDesc_t_284285");
    TrgrInstr_1.add_attribute("TrgrPxTyp", "5"); // 1
    TrgrInstr_1_set.insert("5");
    TrgrInstr_1.add_attribute("TrgrPxTypScp", "1"); // 1
    TrgrInstr_1_set.insert("1");
    TrgrInstr_1.add_attribute("TrgrPxDir", "U"); // 1
    TrgrInstr_1_set.insert("U");
    TrgrInstr_1.add_attribute("TrgrNewPx", "10745359.730000"); // 1
    TrgrInstr_1_set.insert("10745359.730000");
    TrgrInstr_1.add_attribute("TrgrOrdTyp", "1"); // 1
    TrgrInstr_1_set.insert("1");
    TrgrInstr_1.add_attribute("TrgrNewQty", "8280145.800000"); // 1
    TrgrInstr_1_set.insert("8280145.800000");
    TrgrInstr_1.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_930649439"); // 1
    TrgrInstr_1_set.insert("TriggerTradingSessionID_t_930649439");
    TrgrInstr_1.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_2092501357"); // 1
    TrgrInstr_1_set.insert("TriggerTradingSessionSubID_t_2092501357");
    all_values.push_back(TrgrInstr_1_set);
    all_compo_names.insert("TrgrInstr_1_set");

    elt.add_element(TrgrInstr_1);
  } // end TrgrInstr
  { // PegInstr
    xml_element PegInstr_1{"PegInstr"};
    multiset<string> PegInstr_1_set;
    PegInstr_1.add_attribute("OfstVal", "17581953.090000"); // 1
    PegInstr_1_set.insert("17581953.090000");
    PegInstr_1.add_attribute("PegPxTyp", "5"); // 1
    PegInstr_1_set.insert("5");
    PegInstr_1.add_attribute("MoveTyp", "0"); // 1
    PegInstr_1_set.insert("0");
    PegInstr_1.add_attribute("OfstTyp", "1"); // 1
    PegInstr_1_set.insert("1");
    PegInstr_1.add_attribute("LmtTyp", "2"); // 1
    PegInstr_1_set.insert("2");
    PegInstr_1.add_attribute("RndDir", "2"); // 1
    PegInstr_1_set.insert("2");
    PegInstr_1.add_attribute("Scope", "3"); // 1
    PegInstr_1_set.insert("3");
    PegInstr_1.add_attribute("PegSecurityIDSource", "8"); // 1
    PegInstr_1_set.insert("8");
    PegInstr_1.add_attribute("PegSecID", "PegSecurityID_t_135466962"); // 1
    PegInstr_1_set.insert("PegSecurityID_t_135466962");
    PegInstr_1.add_attribute("PgSymbl", "PegSymbol_t_1295693661"); // 1
    PegInstr_1_set.insert("PegSymbol_t_1295693661");
    PegInstr_1.add_attribute("PegSecDesc", "PegSecurityDesc_t_681909143"); // 1
    PegInstr_1_set.insert("PegSecurityDesc_t_681909143");
    all_values.push_back(PegInstr_1_set);
    all_compo_names.insert("PegInstr_1_set");

    elt.add_element(PegInstr_1);
  } // end PegInstr
  { // DiscInstr
    xml_element DiscInstr_1{"DiscInstr"};
    multiset<string> DiscInstr_1_set;
    DiscInstr_1.add_attribute("DsctnInst", "1"); // 1
    DiscInstr_1_set.insert("1");
    DiscInstr_1.add_attribute("OfstValu", "15493685.980000"); // 1
    DiscInstr_1_set.insert("15493685.980000");
    DiscInstr_1.add_attribute("MoveTyp", "0"); // 1
    DiscInstr_1_set.insert("0");
    DiscInstr_1.add_attribute("OfstTyp", "3"); // 1
    DiscInstr_1_set.insert("3");
    DiscInstr_1.add_attribute("LimitTyp", "2"); // 1
    DiscInstr_1_set.insert("2");
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
    StrtPrmGrp_3.add_attribute("StrtPrmNme", "StrategyParameterName_t_17125424"); // 1
    StrtPrmGrp_3_set.insert("StrategyParameterName_t_17125424");
    StrtPrmGrp_3.add_attribute("StrtPrmTyp", "29"); // 1
    StrtPrmGrp_3_set.insert("29");
    StrtPrmGrp_3.add_attribute("StrtPrmVal", "StrategyParameterValue_t_246374639"); // 1
    StrtPrmGrp_3_set.insert("StrategyParameterValue_t_246374639");
    all_values.push_back(StrtPrmGrp_3_set);
    all_compo_names.insert("StrtPrmGrp_3_set");

    elt.add_element(StrtPrmGrp_3);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_4{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_4_set;
    StrtPrmGrp_4.add_attribute("StrtPrmNme", "StrategyParameterName_t_17409709"); // 1
    StrtPrmGrp_4_set.insert("StrategyParameterName_t_17409709");
    StrtPrmGrp_4.add_attribute("StrtPrmTyp", "28"); // 1
    StrtPrmGrp_4_set.insert("28");
    StrtPrmGrp_4.add_attribute("StrtPrmVal", "StrategyParameterValue_t_1409965508"); // 1
    StrtPrmGrp_4_set.insert("StrategyParameterValue_t_1409965508");
    all_values.push_back(StrtPrmGrp_4_set);
    all_compo_names.insert("StrtPrmGrp_4_set");

    elt.add_element(StrtPrmGrp_4);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_5{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_5_set;
    StrtPrmGrp_5.add_attribute("StrtPrmNme", "StrategyParameterName_t_1487327549"); // 1
    StrtPrmGrp_5_set.insert("StrategyParameterName_t_1487327549");
    StrtPrmGrp_5.add_attribute("StrtPrmTyp", "17"); // 1
    StrtPrmGrp_5_set.insert("17");
    StrtPrmGrp_5.add_attribute("StrtPrmVal", "StrategyParameterValue_t_914267297"); // 1
    StrtPrmGrp_5_set.insert("StrategyParameterValue_t_914267297");
    all_values.push_back(StrtPrmGrp_5_set);
    all_compo_names.insert("StrtPrmGrp_5_set");

    elt.add_element(StrtPrmGrp_5);
  } // end StrtPrmGrp
  { // FillsGrp
    xml_element FillsGrp_0{"FillsGrp"};
    multiset<string> FillsGrp_0_set;
    FillsGrp_0.add_attribute("FillExecID", "FillExecID_t_693136924"); // 1
    FillsGrp_0_set.insert("FillExecID_t_693136924");
    FillsGrp_0.add_attribute("FillPx", "8592850.060000"); // 1
    FillsGrp_0_set.insert("8592850.060000");
    FillsGrp_0.add_attribute("FillQty", "19260537.900000"); // 1
    FillsGrp_0_set.insert("19260537.900000");
    FillsGrp_0.add_attribute("LqdtyInd", "2"); // 1
    FillsGrp_0_set.insert("2");
    all_values.push_back(FillsGrp_0_set);
    all_compo_names.insert("FillsGrp_0_set");

    {
      xml_element Pty_168{"Pty"};
      multiset<string> Pty_168_set;
      Pty_168.add_attribute("ID", "Nested4PartyID_t_1017157814"); // 2
      Pty_168_set.insert("Nested4PartyID_t_1017157814");
      Pty_168.add_attribute("Src", "1"); // 2
      Pty_168_set.insert("1");
      Pty_168.add_attribute("R", "4"); // 2
      Pty_168_set.insert("4");
      all_values.push_back(Pty_168_set);
      all_compo_names.insert("Pty_168_set");

      {
        xml_element Sub_168{"Sub"};
        multiset<string> Sub_168_set;
        Sub_168.add_attribute("ID", "Nested4PartySubID_t_386964167"); // 3
        Sub_168_set.insert("Nested4PartySubID_t_386964167");
        Sub_168.add_attribute("Typ", "22"); // 3
        Sub_168_set.insert("22");
        all_values.push_back(Sub_168_set);
        all_compo_names.insert("Sub_168_set");

        Pty_168.add_element(Sub_168);
      }
      FillsGrp_0.add_element(Pty_168);
    }
    elt.add_element(FillsGrp_0);
  } // end FillsGrp
  { // Comm
    xml_element Comm_16{"Comm"};
    multiset<string> Comm_16_set;
    Comm_16.add_attribute("Comm", "Commission_t_1987063201"); // 1
    Comm_16_set.insert("Commission_t_1987063201");
    Comm_16.add_attribute("CommTyp", "1"); // 1
    Comm_16_set.insert("1");
    Comm_16.add_attribute("Ccy", "JPY"); // 1
    Comm_16_set.insert("JPY");
    Comm_16.add_attribute("FundRenewWaiv", "Y"); // 1
    Comm_16_set.insert("Y");
    all_values.push_back(Comm_16_set);
    all_compo_names.insert("Comm_16_set");

    elt.add_element(Comm_16);
  } // end Comm
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_10{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_10_set;
    SprdBnchmkCurve_10.add_attribute("Spread", "11376093.380000"); // 1
    SprdBnchmkCurve_10_set.insert("11376093.380000");
    SprdBnchmkCurve_10.add_attribute("Ccy", "USD"); // 1
    SprdBnchmkCurve_10_set.insert("USD");
    SprdBnchmkCurve_10.add_attribute("Name", "LIBOR"); // 1
    SprdBnchmkCurve_10_set.insert("LIBOR");
    SprdBnchmkCurve_10.add_attribute("Point", "BenchmarkCurvePoint_t_162810537"); // 1
    SprdBnchmkCurve_10_set.insert("BenchmarkCurvePoint_t_162810537");
    SprdBnchmkCurve_10.add_attribute("Px", "3192885.280000"); // 1
    SprdBnchmkCurve_10_set.insert("3192885.280000");
    SprdBnchmkCurve_10.add_attribute("PxTyp", "15"); // 1
    SprdBnchmkCurve_10_set.insert("15");
    SprdBnchmkCurve_10.add_attribute("SecID", "BenchmarkSecurityID_t_179935961"); // 1
    SprdBnchmkCurve_10_set.insert("BenchmarkSecurityID_t_179935961");
    SprdBnchmkCurve_10.add_attribute("SecIDSrc", "E"); // 1
    SprdBnchmkCurve_10_set.insert("E");
    all_values.push_back(SprdBnchmkCurve_10_set);
    all_compo_names.insert("SprdBnchmkCurve_10_set");

    elt.add_element(SprdBnchmkCurve_10);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_5{"Yield"};
    multiset<string> Yield_5_set;
    Yield_5.add_attribute("Typ", "GOVTEQUIV"); // 1
    Yield_5_set.insert("GOVTEQUIV");
    Yield_5.add_attribute("Yld", "1973456.700000"); // 1
    Yield_5_set.insert("1973456.700000");
    Yield_5.add_attribute("CalcDt", "YieldCalcDate_t_1258351359"); // 1
    Yield_5_set.insert("YieldCalcDate_t_1258351359");
    Yield_5.add_attribute("RedDt", "YieldRedemptionDate_t_1240594051"); // 1
    Yield_5_set.insert("YieldRedemptionDate_t_1240594051");
    Yield_5.add_attribute("RedPx", "16846732.190000"); // 1
    Yield_5_set.insert("16846732.190000");
    Yield_5.add_attribute("RedPxTyp", "11"); // 1
    Yield_5_set.insert("11");
    all_values.push_back(Yield_5_set);
    all_compo_names.insert("Yield_5_set");

    elt.add_element(Yield_5);
  } // end Yield
  { // RtSrc
    xml_element RtSrc_5{"RtSrc"};
    multiset<string> RtSrc_5_set;
    RtSrc_5.add_attribute("RtSrc", "1"); // 1
    RtSrc_5_set.insert("1");
    RtSrc_5.add_attribute("RtSrcTyp", "0"); // 1
    RtSrc_5_set.insert("0");
    RtSrc_5.add_attribute("RefPg", "ReferencePage_t_866662706"); // 1
    RtSrc_5_set.insert("ReferencePage_t_866662706");
    all_values.push_back(RtSrc_5_set);
    all_compo_names.insert("RtSrc_5_set");

    elt.add_element(RtSrc_5);
  } // end RtSrc
  { // RtSrc
    xml_element RtSrc_6{"RtSrc"};
    multiset<string> RtSrc_6_set;
    RtSrc_6.add_attribute("RtSrc", "99"); // 1
    RtSrc_6_set.insert("99");
    RtSrc_6.add_attribute("RtSrcTyp", "1"); // 1
    RtSrc_6_set.insert("1");
    RtSrc_6.add_attribute("RefPg", "ReferencePage_t_1883820520"); // 1
    RtSrc_6_set.insert("ReferencePage_t_1883820520");
    all_values.push_back(RtSrc_6_set);
    all_compo_names.insert("RtSrc_6_set");

    elt.add_element(RtSrc_6);
  } // end RtSrc
  { // DsplyInstr
    xml_element DsplyInstr_1{"DsplyInstr"};
    multiset<string> DsplyInstr_1_set;
    DsplyInstr_1.add_attribute("DisplayQty", "10800484.910000"); // 1
    DsplyInstr_1_set.insert("10800484.910000");
    DsplyInstr_1.add_attribute("SecDspQty", "18892298.650000"); // 1
    DsplyInstr_1_set.insert("18892298.650000");
    DsplyInstr_1.add_attribute("DspWhn", "1"); // 1
    DsplyInstr_1_set.insert("1");
    DsplyInstr_1.add_attribute("DspMthd", "3"); // 1
    DsplyInstr_1_set.insert("3");
    DsplyInstr_1.add_attribute("DsplLwQty", "17288094.180000"); // 1
    DsplyInstr_1_set.insert("17288094.180000");
    DsplyInstr_1.add_attribute("DisplayHighQty", "6457321.700000"); // 1
    DsplyInstr_1_set.insert("6457321.700000");
    DsplyInstr_1.add_attribute("DspMinIncr", "11083199.580000"); // 1
    DsplyInstr_1_set.insert("11083199.580000");
    DsplyInstr_1.add_attribute("RfrshQty", "1028144.660000"); // 1
    DsplyInstr_1_set.insert("1028144.660000");
    all_values.push_back(DsplyInstr_1_set);
    all_compo_names.insert("DsplyInstr_1_set");

    elt.add_element(DsplyInstr_1);
  } // end DsplyInstr
  { // ContAmt
    xml_element ContAmt_0{"ContAmt"};
    multiset<string> ContAmt_0_set;
    ContAmt_0.add_attribute("ContAmtTyp", "12"); // 1
    ContAmt_0_set.insert("12");
    ContAmt_0.add_attribute("ContAmtValu", "4374548.200000"); // 1
    ContAmt_0_set.insert("4374548.200000");
    ContAmt_0.add_attribute("ContAmtCurr", "CAN"); // 1
    ContAmt_0_set.insert("CAN");
    all_values.push_back(ContAmt_0_set);
    all_compo_names.insert("ContAmt_0_set");

    elt.add_element(ContAmt_0);
  } // end ContAmt
  { // ContAmt
    xml_element ContAmt_1{"ContAmt"};
    multiset<string> ContAmt_1_set;
    ContAmt_1.add_attribute("ContAmtTyp", "2"); // 1
    ContAmt_1_set.insert("2");
    ContAmt_1.add_attribute("ContAmtValu", "15877843.430000"); // 1
    ContAmt_1_set.insert("15877843.430000");
    ContAmt_1.add_attribute("ContAmtCurr", "USD"); // 1
    ContAmt_1_set.insert("USD");
    all_values.push_back(ContAmt_1_set);
    all_compo_names.insert("ContAmt_1_set");

    elt.add_element(ContAmt_1);
  } // end ContAmt
  { // Exec
    xml_element Exec_0{"Exec"};
    multiset<string> Exec_0_set;
    Exec_0.add_attribute("Qty", "20920287.950000"); // 1
    Exec_0_set.insert("20920287.950000");
    Exec_0.add_attribute("OrdQty", "9775469.880000"); // 1
    Exec_0_set.insert("9775469.880000");
    Exec_0.add_attribute("SwapTyp", "2"); // 1
    Exec_0_set.insert("2");
    Exec_0.add_attribute("LegAllocID", "LegAllocID_t_1185139198"); // 1
    Exec_0_set.insert("LegAllocID_t_1185139198");
    Exec_0.add_attribute("PosEfct", "N"); // 1
    Exec_0_set.insert("N");
    Exec_0.add_attribute("Cover", "1"); // 1
    Exec_0_set.insert("1");
    Exec_0.add_attribute("RefID", "LegRefID_t_1192516898"); // 1
    Exec_0_set.insert("LegRefID_t_1192516898");
    Exec_0.add_attribute("SettlTyp", "5"); // 1
    Exec_0_set.insert("5");
    Exec_0.add_attribute("SettlDt", "LegSettlDate_t_1708899218"); // 1
    Exec_0_set.insert("LegSettlDate_t_1708899218");
    Exec_0.add_attribute("LastPx", "20591796.040000"); // 1
    Exec_0_set.insert("20591796.040000");
    Exec_0.add_attribute("SettlCcy", "CAN"); // 1
    Exec_0_set.insert("CAN");
    Exec_0.add_attribute("LegLastFwdPnts", "17955164.760000"); // 1
    Exec_0_set.insert("17955164.760000");
    Exec_0.add_attribute("LegCalcCcyLastQty", "7834513.000000"); // 1
    Exec_0_set.insert("7834513.000000");
    Exec_0.add_attribute("LegGrossTrdAmt", "LegGrossTradeAmt_t_727480012"); // 1
    Exec_0_set.insert("LegGrossTradeAmt_t_727480012");
    Exec_0.add_attribute("LegVolatility", "19188175.160000"); // 1
    Exec_0_set.insert("19188175.160000");
    Exec_0.add_attribute("LegDividendYield", "1560468.700000"); // 1
    Exec_0_set.insert("1560468.700000");
    Exec_0.add_attribute("LegCurrencyRatio", "3088057.820000"); // 1
    Exec_0_set.insert("3088057.820000");
    Exec_0.add_attribute("LegExecInst", "k"); // 1
    Exec_0_set.insert("k");
    Exec_0.add_attribute("LastQty", "12643668.280000"); // 1
    Exec_0_set.insert("12643668.280000");
    all_values.push_back(Exec_0_set);
    all_compo_names.insert("Exec_0_set");

    {
      xml_element Leg_39{"Leg"};
      multiset<string> Leg_39_set;
      Leg_39.add_attribute("Sym", "LegSymbol_t_411620248"); // 2
      Leg_39_set.insert("LegSymbol_t_411620248");
      Leg_39.add_attribute("Sfx", "WI"); // 2
      Leg_39_set.insert("WI");
      Leg_39.add_attribute("ID", "LegSecurityID_t_1362812476"); // 2
      Leg_39_set.insert("LegSecurityID_t_1362812476");
      Leg_39.add_attribute("Src", "8"); // 2
      Leg_39_set.insert("8");
      Leg_39.add_attribute("Prod", "11"); // 2
      Leg_39_set.insert("11");
      Leg_39.add_attribute("CFI", "LegCFICode_t_1892475177"); // 2
      Leg_39_set.insert("LegCFICode_t_1892475177");
      Leg_39.add_attribute("SecTyp", "FXFWD"); // 2
      Leg_39_set.insert("FXFWD");
      Leg_39.add_attribute("SecSubTyp", "LegSecuritySubType_t_1816217329"); // 2
      Leg_39_set.insert("LegSecuritySubType_t_1816217329");
      Leg_39.add_attribute("MMY", "2006391781"); // 2
      Leg_39_set.insert("2006391781");
      Leg_39.add_attribute("Mat", "LegMaturityDate_t_82058097"); // 2
      Leg_39_set.insert("LegMaturityDate_t_82058097");
      Leg_39.add_attribute("MatTm", "1679434224"); // 2
      Leg_39_set.insert("1679434224");
      Leg_39.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1950936928"); // 2
      Leg_39_set.insert("LegCouponPaymentDate_t_1950936928");
      Leg_39.add_attribute("Issued", "LegIssueDate_t_1059605085"); // 2
      Leg_39_set.insert("LegIssueDate_t_1059605085");
      Leg_39.add_attribute("RepoCollSecTyp", "653518829"); // 2
      Leg_39_set.insert("653518829");
      Leg_39.add_attribute("RepoTrm", "988592478"); // 2
      Leg_39_set.insert("988592478");
      Leg_39.add_attribute("RepoRt", "15743416.450000"); // 2
      Leg_39_set.insert("15743416.450000");
      Leg_39.add_attribute("Fctr", "6484422.790000"); // 2
      Leg_39_set.insert("6484422.790000");
      Leg_39.add_attribute("CrdRtg", "LegCreditRating_t_33625728"); // 2
      Leg_39_set.insert("LegCreditRating_t_33625728");
      Leg_39.add_attribute("Rgstry", "LegInstrRegistry_t_1794126258"); // 2
      Leg_39_set.insert("LegInstrRegistry_t_1794126258");
      Leg_39.add_attribute("Ctry", "209857849"); // 2
      Leg_39_set.insert("209857849");
      Leg_39.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2092805332"); // 2
      Leg_39_set.insert("LegStateOrProvinceOfIssue_t_2092805332");
      Leg_39.add_attribute("Lcl", "LegLocaleOfIssue_t_1497529067"); // 2
      Leg_39_set.insert("LegLocaleOfIssue_t_1497529067");
      Leg_39.add_attribute("Redeem", "LegRedemptionDate_t_1195591644"); // 2
      Leg_39_set.insert("LegRedemptionDate_t_1195591644");
      Leg_39.add_attribute("Strk", "17408381.610000"); // 2
      Leg_39_set.insert("17408381.610000");
      Leg_39.add_attribute("StrkCcy", "CAN"); // 2
      Leg_39_set.insert("CAN");
      Leg_39.add_attribute("OptA", "1512172029"); // 2
      Leg_39_set.insert("1512172029");
      Leg_39.add_attribute("Cmult", "2895435.890000"); // 2
      Leg_39_set.insert("2895435.890000");
      Leg_39.add_attribute("MultTyp", "2"); // 2
      Leg_39_set.insert("2");
      Leg_39.add_attribute("FlowSchedTyp", "3"); // 2
      Leg_39_set.insert("3");
      Leg_39.add_attribute("UOM", "lbs"); // 2
      Leg_39_set.insert("lbs");
      Leg_39.add_attribute("UOMQty", "4960140.400000"); // 2
      Leg_39_set.insert("4960140.400000");
      Leg_39.add_attribute("PxUOM", "t"); // 2
      Leg_39_set.insert("t");
      Leg_39.add_attribute("PxUOMQty", "7692392.450000"); // 2
      Leg_39_set.insert("7692392.450000");
      Leg_39.add_attribute("TmUnit", "S"); // 2
      Leg_39_set.insert("S");
      Leg_39.add_attribute("ExerStyle", "1"); // 2
      Leg_39_set.insert("1");
      Leg_39.add_attribute("CpnRt", "5142307.740000"); // 2
      Leg_39_set.insert("5142307.740000");
      Leg_39.add_attribute("Exch", "LegSecurityExchange_t_646945887"); // 2
      Leg_39_set.insert("LegSecurityExchange_t_646945887");
      Leg_39.add_attribute("Issr", "LegIssuer_t_786341907"); // 2
      Leg_39_set.insert("LegIssuer_t_786341907");
      Leg_39.add_attribute("EncLegIssrLen", "373138907"); // 2
      Leg_39_set.insert("373138907");
      Leg_39.add_attribute("EncLegIssr", "EncodedLegIssuer_t_729003984"); // 2
      Leg_39_set.insert("EncodedLegIssuer_t_729003984");
      Leg_39.add_attribute("Desc", "LegSecurityDesc_t_318292483"); // 2
      Leg_39_set.insert("LegSecurityDesc_t_318292483");
      Leg_39.add_attribute("EncLegSecDescLen", "176592188"); // 2
      Leg_39_set.insert("176592188");
      Leg_39.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1788609070"); // 2
      Leg_39_set.insert("EncodedLegSecurityDesc_t_1788609070");
      Leg_39.add_attribute("RatioQty", "9718113.130000"); // 2
      Leg_39_set.insert("9718113.130000");
      Leg_39.add_attribute("Side", "B"); // 2
      Leg_39_set.insert("B");
      Leg_39.add_attribute("Ccy", "GBP"); // 2
      Leg_39_set.insert("GBP");
      Leg_39.add_attribute("Pool", "LegPool_t_1198810395"); // 2
      Leg_39_set.insert("LegPool_t_1198810395");
      Leg_39.add_attribute("Dated", "LegDatedDate_t_862109678"); // 2
      Leg_39_set.insert("LegDatedDate_t_862109678");
      Leg_39.add_attribute("CSetMo", "1830111441"); // 2
      Leg_39_set.insert("1830111441");
      Leg_39.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1144132079"); // 2
      Leg_39_set.insert("LegInterestAccrualDate_t_1144132079");
      Leg_39.add_attribute("PutCall", "212155097"); // 2
      Leg_39_set.insert("212155097");
      Leg_39.add_attribute("LegOptionRatio", "8782194.370000"); // 2
      Leg_39_set.insert("8782194.370000");
      Leg_39.add_attribute("Px", "7374865.920000"); // 2
      Leg_39_set.insert("7374865.920000");
      all_values.push_back(Leg_39_set);
      all_compo_names.insert("Leg_39_set");

      {
        xml_element LegAID_39{"LegAID"};
        multiset<string> LegAID_39_set;
        LegAID_39.add_attribute("SecAltID", "LegSecurityAltID_t_345651816"); // 3
        LegAID_39_set.insert("LegSecurityAltID_t_345651816");
        LegAID_39.add_attribute("SecAltIDSrc", "7"); // 3
        LegAID_39_set.insert("7");
        all_values.push_back(LegAID_39_set);
        all_compo_names.insert("LegAID_39_set");

        Leg_39.add_element(LegAID_39);
      }
      Exec_0.add_element(Leg_39);
    }
    {
      xml_element Stip_60{"Stip"};
      multiset<string> Stip_60_set;
      Stip_60.add_attribute("StipTyp", "INSURED"); // 2
      Stip_60_set.insert("INSURED");
      Stip_60.add_attribute("StipVal", "LegStipulationValue_t_635195405"); // 2
      Stip_60_set.insert("LegStipulationValue_t_635195405");
      all_values.push_back(Stip_60_set);
      all_compo_names.insert("Stip_60_set");

      Exec_0.add_element(Stip_60);
    }
    {
      xml_element PreAll_5{"PreAll"};
      multiset<string> PreAll_5_set;
      PreAll_5.add_attribute("AllocAcct", "LegAllocAccount_t_738201238"); // 2
      PreAll_5_set.insert("LegAllocAccount_t_738201238");
      PreAll_5.add_attribute("IndAllocID", "LegIndividualAllocID_t_2031413042"); // 2
      PreAll_5_set.insert("LegIndividualAllocID_t_2031413042");
      PreAll_5.add_attribute("AllocQty", "416221.740000"); // 2
      PreAll_5_set.insert("416221.740000");
      PreAll_5.add_attribute("AllocAcctIDSrc", "LegAllocAcctIDSource_t_1234215278"); // 2
      PreAll_5_set.insert("LegAllocAcctIDSource_t_1234215278");
      PreAll_5.add_attribute("AllocSettlCcy", "CAN"); // 2
      PreAll_5_set.insert("CAN");
      all_values.push_back(PreAll_5_set);
      all_compo_names.insert("PreAll_5_set");

      {
        xml_element Pty_169{"Pty"};
        multiset<string> Pty_169_set;
        Pty_169.add_attribute("ID", "Nested2PartyID_t_431820739"); // 3
        Pty_169_set.insert("Nested2PartyID_t_431820739");
        Pty_169.add_attribute("Src", "6"); // 3
        Pty_169_set.insert("6");
        Pty_169.add_attribute("R", "14"); // 3
        Pty_169_set.insert("14");
        all_values.push_back(Pty_169_set);
        all_compo_names.insert("Pty_169_set");

        {
          xml_element Sub_169{"Sub"};
          multiset<string> Sub_169_set;
          Sub_169.add_attribute("ID", "Nested2PartySubID_t_1078766626"); // 4
          Sub_169_set.insert("Nested2PartySubID_t_1078766626");
          Sub_169.add_attribute("Typ", "6"); // 4
          Sub_169_set.insert("6");
          all_values.push_back(Sub_169_set);
          all_compo_names.insert("Sub_169_set");

          Pty_169.add_element(Sub_169);
        }
        PreAll_5.add_element(Pty_169);
      }
      Exec_0.add_element(PreAll_5);
    }
    {
      xml_element Pty_170{"Pty"};
      multiset<string> Pty_170_set;
      Pty_170.add_attribute("ID", "Nested3PartyID_t_1698231100"); // 2
      Pty_170_set.insert("Nested3PartyID_t_1698231100");
      Pty_170.add_attribute("Src", "C"); // 2
      Pty_170_set.insert("C");
      Pty_170.add_attribute("R", "34"); // 2
      Pty_170_set.insert("34");
      all_values.push_back(Pty_170_set);
      all_compo_names.insert("Pty_170_set");

      {
        xml_element Sub_170{"Sub"};
        multiset<string> Sub_170_set;
        Sub_170.add_attribute("ID", "Nested3PartySubID_t_1874823288"); // 3
        Sub_170_set.insert("Nested3PartySubID_t_1874823288");
        Sub_170.add_attribute("Typ", "21"); // 3
        Sub_170_set.insert("21");
        all_values.push_back(Sub_170_set);
        all_compo_names.insert("Sub_170_set");

        Pty_170.add_element(Sub_170);
      }
      Exec_0.add_element(Pty_170);
    }
    elt.add_element(Exec_0);
  } // end Exec
  { // MiscFees
    xml_element MiscFees_19{"MiscFees"};
    multiset<string> MiscFees_19_set;
    MiscFees_19.add_attribute("Amt", "MiscFeeAmt_t_892524307"); // 1
    MiscFees_19_set.insert("MiscFeeAmt_t_892524307");
    MiscFees_19.add_attribute("Curr", "CHF"); // 1
    MiscFees_19_set.insert("CHF");
    MiscFees_19.add_attribute("Typ", "11"); // 1
    MiscFees_19_set.insert("11");
    MiscFees_19.add_attribute("Basis", "1"); // 1
    MiscFees_19_set.insert("1");
    all_values.push_back(MiscFees_19_set);
    all_compo_names.insert("MiscFees_19_set");

    elt.add_element(MiscFees_19);
  } // end MiscFees
  { // TrdRegTS
    xml_element TrdRegTS_10{"TrdRegTS"};
    multiset<string> TrdRegTS_10_set;
    TrdRegTS_10.add_attribute("TS", "TrdRegTimestamp_t_1087983133"); // 1
    TrdRegTS_10_set.insert("TrdRegTimestamp_t_1087983133");
    TrdRegTS_10.add_attribute("Typ", "2"); // 1
    TrdRegTS_10_set.insert("2");
    TrdRegTS_10.add_attribute("Src", "TrdRegTimestampOrigin_t_1853292090"); // 1
    TrdRegTS_10_set.insert("TrdRegTimestampOrigin_t_1853292090");
    TrdRegTS_10.add_attribute("DskTyp", "IN"); // 1
    TrdRegTS_10_set.insert("IN");
    TrdRegTS_10.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_10_set.insert("1");
    TrdRegTS_10.add_attribute("DskOrdHndlInst", "LOO"); // 1
    TrdRegTS_10_set.insert("LOO");
    all_values.push_back(TrdRegTS_10_set);
    all_compo_names.insert("TrdRegTS_10_set");

    elt.add_element(TrdRegTS_10);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_11{"TrdRegTS"};
    multiset<string> TrdRegTS_11_set;
    TrdRegTS_11.add_attribute("TS", "TrdRegTimestamp_t_1927644700"); // 1
    TrdRegTS_11_set.insert("TrdRegTimestamp_t_1927644700");
    TrdRegTS_11.add_attribute("Typ", "4"); // 1
    TrdRegTS_11_set.insert("4");
    TrdRegTS_11.add_attribute("Src", "TrdRegTimestampOrigin_t_1097817126"); // 1
    TrdRegTS_11_set.insert("TrdRegTimestampOrigin_t_1097817126");
    TrdRegTS_11.add_attribute("DskTyp", "A"); // 1
    TrdRegTS_11_set.insert("A");
    TrdRegTS_11.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_11_set.insert("1");
    TrdRegTS_11.add_attribute("DskOrdHndlInst", "MOO"); // 1
    TrdRegTS_11_set.insert("MOO");
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
