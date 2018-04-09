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
  elt.add_attribute("OrdID", "OrderID_t_745415199"); // 0
  ExecutionReport_message_t_0.insert("OrderID_t_745415199");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_1194754362"); // 0
  ExecutionReport_message_t_0.insert("SecondaryOrderID_t_1194754362");
  elt.add_attribute("ID2", "SecondaryClOrdID_t_1431640902"); // 0
  ExecutionReport_message_t_0.insert("SecondaryClOrdID_t_1431640902");
  elt.add_attribute("ExecID2", "SecondaryExecID_t_1346881517"); // 0
  ExecutionReport_message_t_0.insert("SecondaryExecID_t_1346881517");
  elt.add_attribute("ID", "ClOrdID_t_700619864"); // 0
  ExecutionReport_message_t_0.insert("ClOrdID_t_700619864");
  elt.add_attribute("OrigID", "OrigClOrdID_t_1394944417"); // 0
  ExecutionReport_message_t_0.insert("OrigClOrdID_t_1394944417");
  elt.add_attribute("LnkID", "ClOrdLinkID_t_1514754178"); // 0
  ExecutionReport_message_t_0.insert("ClOrdLinkID_t_1514754178");
  elt.add_attribute("RspID", "QuoteRespID_t_1168076888"); // 0
  ExecutionReport_message_t_0.insert("QuoteRespID_t_1168076888");
  elt.add_attribute("StatReqID", "OrdStatusReqID_t_2117983290"); // 0
  ExecutionReport_message_t_0.insert("OrdStatusReqID_t_2117983290");
  elt.add_attribute("MassStatReqID", "MassStatusReqID_t_556747165"); // 0
  ExecutionReport_message_t_0.insert("MassStatusReqID_t_556747165");
  elt.add_attribute("HstCxID", "HostCrossID_t_1619479163"); // 0
  ExecutionReport_message_t_0.insert("HostCrossID_t_1619479163");
  elt.add_attribute("TotNumRpts", "1282001173"); // 0
  ExecutionReport_message_t_0.insert("1282001173");
  elt.add_attribute("LastRptReqed", "Y"); // 0
  ExecutionReport_message_t_0.insert("Y");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_406960843"); // 0
  ExecutionReport_message_t_0.insert("TradeOriginationDate_t_406960843");
  elt.add_attribute("ListID", "ListID_t_1187586455"); // 0
  ExecutionReport_message_t_0.insert("ListID_t_1187586455");
  elt.add_attribute("CrssID", "CrossID_t_876977358"); // 0
  ExecutionReport_message_t_0.insert("CrossID_t_876977358");
  elt.add_attribute("OrigCrssID", "OrigCrossID_t_990704850"); // 0
  ExecutionReport_message_t_0.insert("OrigCrossID_t_990704850");
  elt.add_attribute("CrssTyp", "3"); // 0
  ExecutionReport_message_t_0.insert("3");
  elt.add_attribute("MtchID", "TrdMatchID_t_1407386618"); // 0
  ExecutionReport_message_t_0.insert("TrdMatchID_t_1407386618");
  elt.add_attribute("ExecID", "ExecID_t_784791904"); // 0
  ExecutionReport_message_t_0.insert("ExecID_t_784791904");
  elt.add_attribute("ExecRefID", "ExecRefID_t_871014250"); // 0
  ExecutionReport_message_t_0.insert("ExecRefID_t_871014250");
  elt.add_attribute("ExecTyp", "6"); // 0
  ExecutionReport_message_t_0.insert("6");
  elt.add_attribute("Stat", "0"); // 0
  ExecutionReport_message_t_0.insert("0");
  elt.add_attribute("WorkingInd", "N"); // 0
  ExecutionReport_message_t_0.insert("N");
  elt.add_attribute("RejRsn", "13"); // 0
  ExecutionReport_message_t_0.insert("13");
  elt.add_attribute("ExecRstmtRsn", "6"); // 0
  ExecutionReport_message_t_0.insert("6");
  elt.add_attribute("Acct", "Account_t_92542911"); // 0
  ExecutionReport_message_t_0.insert("Account_t_92542911");
  elt.add_attribute("AcctIDSrc", "99"); // 0
  ExecutionReport_message_t_0.insert("99");
  elt.add_attribute("AcctTyp", "3"); // 0
  ExecutionReport_message_t_0.insert("3");
  elt.add_attribute("DayBkngInst", "2"); // 0
  ExecutionReport_message_t_0.insert("2");
  elt.add_attribute("BkngUnit", "2"); // 0
  ExecutionReport_message_t_0.insert("2");
  elt.add_attribute("PreallocMeth", "0"); // 0
  ExecutionReport_message_t_0.insert("0");
  elt.add_attribute("AllocID", "AllocID_t_1414921898"); // 0
  ExecutionReport_message_t_0.insert("AllocID_t_1414921898");
  elt.add_attribute("SettlTyp", "C"); // 0
  ExecutionReport_message_t_0.insert("C");
  elt.add_attribute("SettlDt", "SettlDate_t_1638907185"); // 0
  ExecutionReport_message_t_0.insert("SettlDate_t_1638907185");
  elt.add_attribute("MtchTyp", "6"); // 0
  ExecutionReport_message_t_0.insert("6");
  elt.add_attribute("OrdCat", "6"); // 0
  ExecutionReport_message_t_0.insert("6");
  elt.add_attribute("CshMgn", "3"); // 0
  ExecutionReport_message_t_0.insert("3");
  elt.add_attribute("ClrFeeInd", "4"); // 0
  ExecutionReport_message_t_0.insert("4");
  elt.add_attribute("Side", "6"); // 0
  ExecutionReport_message_t_0.insert("6");
  elt.add_attribute("QtyTyp", "0"); // 0
  ExecutionReport_message_t_0.insert("0");
  elt.add_attribute("LotTyp", "3"); // 0
  ExecutionReport_message_t_0.insert("3");
  elt.add_attribute("Typ", "3"); // 0
  ExecutionReport_message_t_0.insert("3");
  elt.add_attribute("PxTyp", "2"); // 0
  ExecutionReport_message_t_0.insert("2");
  elt.add_attribute("Px", "10150913.610000"); // 0
  ExecutionReport_message_t_0.insert("10150913.610000");
  elt.add_attribute("PxPrtScp", "2"); // 0
  ExecutionReport_message_t_0.insert("2");
  elt.add_attribute("StopPx", "11832892.830000"); // 0
  ExecutionReport_message_t_0.insert("11832892.830000");
  elt.add_attribute("PeggedPx", "20057962.120000"); // 0
  ExecutionReport_message_t_0.insert("20057962.120000");
  elt.add_attribute("PggdRefPx", "6370851.520000"); // 0
  ExecutionReport_message_t_0.insert("6370851.520000");
  elt.add_attribute("DsctnPx", "4431922.530000"); // 0
  ExecutionReport_message_t_0.insert("4431922.530000");
  elt.add_attribute("TgtStrategy", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_1508099402"); // 0
  ExecutionReport_message_t_0.insert("TargetStrategyParameters_t_1508099402");
  elt.add_attribute("ParticipationRt", "11633481.970000"); // 0
  ExecutionReport_message_t_0.insert("11633481.970000");
  elt.add_attribute("TgtStrategyPerformance", "5783062.150000"); // 0
  ExecutionReport_message_t_0.insert("5783062.150000");
  elt.add_attribute("Ccy", "CAN"); // 0
  ExecutionReport_message_t_0.insert("CAN");
  elt.add_attribute("ComplianceID", "ComplianceID_t_1379735695"); // 0
  ExecutionReport_message_t_0.insert("ComplianceID_t_1379735695");
  elt.add_attribute("SolFlag", "N"); // 0
  ExecutionReport_message_t_0.insert("N");
  elt.add_attribute("TmInForce", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_926346164"); // 0
  ExecutionReport_message_t_0.insert("EffectiveTime_t_926346164");
  elt.add_attribute("ExpireDt", "ExpireDate_t_1758696084"); // 0
  ExecutionReport_message_t_0.insert("ExpireDate_t_1758696084");
  elt.add_attribute("ExpireTm", "ExpireTime_t_104177390"); // 0
  ExecutionReport_message_t_0.insert("ExpireTime_t_104177390");
  elt.add_attribute("ExecInst", "m"); // 0
  ExecutionReport_message_t_0.insert("m");
  elt.add_attribute("AgrsrInd", "Y"); // 0
  ExecutionReport_message_t_0.insert("Y");
  elt.add_attribute("Cpcty", "A"); // 0
  ExecutionReport_message_t_0.insert("A");
  elt.add_attribute("Rstctions", "5"); // 0
  ExecutionReport_message_t_0.insert("5");
  elt.add_attribute("PrTrdAnon", "false"); // 0
  ExecutionReport_message_t_0.insert("false");
  elt.add_attribute("CustCpcty", "4"); // 0
  ExecutionReport_message_t_0.insert("4");
  elt.add_attribute("LastQty", "17159730.840000"); // 0
  ExecutionReport_message_t_0.insert("17159730.840000");
  elt.add_attribute("CalcCcyLastQty", "21303274.520000"); // 0
  ExecutionReport_message_t_0.insert("21303274.520000");
  elt.add_attribute("LastSwapPnts", "7194147.760000"); // 0
  ExecutionReport_message_t_0.insert("7194147.760000");
  elt.add_attribute("UndLastQty", "11314143.160000"); // 0
  ExecutionReport_message_t_0.insert("11314143.160000");
  elt.add_attribute("LastPx", "5909743.230000"); // 0
  ExecutionReport_message_t_0.insert("5909743.230000");
  elt.add_attribute("UndLastPx", "19359817.630000"); // 0
  ExecutionReport_message_t_0.insert("19359817.630000");
  elt.add_attribute("LastParPx", "14377262.410000"); // 0
  ExecutionReport_message_t_0.insert("14377262.410000");
  elt.add_attribute("LastSpotRt", "16060656.840000"); // 0
  ExecutionReport_message_t_0.insert("16060656.840000");
  elt.add_attribute("LastFwdPnts", "451679.090000"); // 0
  ExecutionReport_message_t_0.insert("451679.090000");
  elt.add_attribute("LastMkt", "LastMkt_t_473531876"); // 0
  ExecutionReport_message_t_0.insert("LastMkt_t_473531876");
  elt.add_attribute("SesID", "3"); // 0
  ExecutionReport_message_t_0.insert("3");
  elt.add_attribute("SesSub", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("TmBkt", "TimeBracket_t_916724129"); // 0
  ExecutionReport_message_t_0.insert("TimeBracket_t_916724129");
  elt.add_attribute("LastCpcty", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("LeavesQty", "428688.150000"); // 0
  ExecutionReport_message_t_0.insert("428688.150000");
  elt.add_attribute("CumQty", "20800723.260000"); // 0
  ExecutionReport_message_t_0.insert("20800723.260000");
  elt.add_attribute("AvgPx", "5383052.830000"); // 0
  ExecutionReport_message_t_0.insert("5383052.830000");
  elt.add_attribute("DayOrdQty", "14888544.520000"); // 0
  ExecutionReport_message_t_0.insert("14888544.520000");
  elt.add_attribute("DayCumQty", "5114222.080000"); // 0
  ExecutionReport_message_t_0.insert("5114222.080000");
  elt.add_attribute("DayAvgPx", "19180409.780000"); // 0
  ExecutionReport_message_t_0.insert("19180409.780000");
  elt.add_attribute("TotNoFills", "879899352"); // 0
  ExecutionReport_message_t_0.insert("879899352");
  elt.add_attribute("LastFragment", "Y"); // 0
  ExecutionReport_message_t_0.insert("Y");
  elt.add_attribute("GTBkngInst", "2"); // 0
  ExecutionReport_message_t_0.insert("2");
  elt.add_attribute("TrdDt", "TradeDate_t_491111788"); // 0
  ExecutionReport_message_t_0.insert("TradeDate_t_491111788");
  elt.add_attribute("TxnTm", "TransactTime_t_1434812489"); // 0
  ExecutionReport_message_t_0.insert("TransactTime_t_1434812489");
  elt.add_attribute("RptToExch", "N"); // 0
  ExecutionReport_message_t_0.insert("N");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_1517246123"); // 0
  ExecutionReport_message_t_0.insert("GrossTradeAmt_t_1517246123");
  elt.add_attribute("NumDaysInt", "108111634"); // 0
  ExecutionReport_message_t_0.insert("108111634");
  elt.add_attribute("ExDt", "ExDate_t_477587047"); // 0
  ExecutionReport_message_t_0.insert("ExDate_t_477587047");
  elt.add_attribute("AcrdIntRt", "3639549.240000"); // 0
  ExecutionReport_message_t_0.insert("3639549.240000");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_892960597"); // 0
  ExecutionReport_message_t_0.insert("AccruedInterestAmt_t_892960597");
  elt.add_attribute("IntAtMat", "InterestAtMaturity_t_46076483"); // 0
  ExecutionReport_message_t_0.insert("InterestAtMaturity_t_46076483");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_346798729"); // 0
  ExecutionReport_message_t_0.insert("EndAccruedInterestAmt_t_346798729");
  elt.add_attribute("StartCsh", "StartCash_t_1612375374"); // 0
  ExecutionReport_message_t_0.insert("StartCash_t_1612375374");
  elt.add_attribute("EndCsh", "EndCash_t_1177490799"); // 0
  ExecutionReport_message_t_0.insert("EndCash_t_1177490799");
  elt.add_attribute("TrddFlatSwitch", "N"); // 0
  ExecutionReport_message_t_0.insert("N");
  elt.add_attribute("BasisFeatureDt", "BasisFeatureDate_t_1400873489"); // 0
  ExecutionReport_message_t_0.insert("BasisFeatureDate_t_1400873489");
  elt.add_attribute("BasisFeaturePx", "4677333.920000"); // 0
  ExecutionReport_message_t_0.insert("4677333.920000");
  elt.add_attribute("Concession", "Concession_t_396355088"); // 0
  ExecutionReport_message_t_0.insert("Concession_t_396355088");
  elt.add_attribute("TotTakedown", "TotalTakedown_t_1446041398"); // 0
  ExecutionReport_message_t_0.insert("TotalTakedown_t_1446041398");
  elt.add_attribute("NetMny", "NetMoney_t_941265268"); // 0
  ExecutionReport_message_t_0.insert("NetMoney_t_941265268");
  elt.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1860733337"); // 0
  ExecutionReport_message_t_0.insert("SettlCurrAmt_t_1860733337");
  elt.add_attribute("SettlCcy", "CHF"); // 0
  ExecutionReport_message_t_0.insert("CHF");
  elt.add_attribute("SettlCurrFxRt", "18207324.050000"); // 0
  ExecutionReport_message_t_0.insert("18207324.050000");
  elt.add_attribute("SettlCurrFxRtCalc", "M"); // 0
  ExecutionReport_message_t_0.insert("M");
  elt.add_attribute("HandlInst", "3"); // 0
  ExecutionReport_message_t_0.insert("3");
  elt.add_attribute("MinQty", "2115540.410000"); // 0
  ExecutionReport_message_t_0.insert("2115540.410000");
  elt.add_attribute("MtchInc", "15125340.790000"); // 0
  ExecutionReport_message_t_0.insert("15125340.790000");
  elt.add_attribute("MxPxLvls", "154516636"); // 0
  ExecutionReport_message_t_0.insert("154516636");
  elt.add_attribute("MaxFloor", "21295950.190000"); // 0
  ExecutionReport_message_t_0.insert("21295950.190000");
  elt.add_attribute("PosEfct", "D"); // 0
  ExecutionReport_message_t_0.insert("D");
  elt.add_attribute("MaxShow", "14851517.350000"); // 0
  ExecutionReport_message_t_0.insert("14851517.350000");
  elt.add_attribute("BkngTyp", "2"); // 0
  ExecutionReport_message_t_0.insert("2");
  elt.add_attribute("Txt", "Text_t_736061572"); // 0
  ExecutionReport_message_t_0.insert("Text_t_736061572");
  elt.add_attribute("EncTxtLen", "772480576"); // 0
  ExecutionReport_message_t_0.insert("772480576");
  elt.add_attribute("EncTxt", "EncodedText_t_446806544"); // 0
  ExecutionReport_message_t_0.insert("EncodedText_t_446806544");
  elt.add_attribute("SettlDt2", "SettlDate2_t_105824047"); // 0
  ExecutionReport_message_t_0.insert("SettlDate2_t_105824047");
  elt.add_attribute("Qty2", "8805922.100000"); // 0
  ExecutionReport_message_t_0.insert("8805922.100000");
  elt.add_attribute("LastFwdPnts2", "9243935.920000"); // 0
  ExecutionReport_message_t_0.insert("9243935.920000");
  elt.add_attribute("MLegRptTyp", "2"); // 0
  ExecutionReport_message_t_0.insert("2");
  elt.add_attribute("CxllationRights", "M"); // 0
  ExecutionReport_message_t_0.insert("M");
  elt.add_attribute("MnyLaunderingStat", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("RegistID", "RegistID_t_816577700"); // 0
  ExecutionReport_message_t_0.insert("RegistID_t_816577700");
  elt.add_attribute("Designation", "Designation_t_1238444534"); // 0
  ExecutionReport_message_t_0.insert("Designation_t_1238444534");
  elt.add_attribute("TransBkdTm", "TransBkdTime_t_477227"); // 0
  ExecutionReport_message_t_0.insert("TransBkdTime_t_477227");
  elt.add_attribute("ExecValuationPoint", "ExecValuationPoint_t_1754350752"); // 0
  ExecutionReport_message_t_0.insert("ExecValuationPoint_t_1754350752");
  elt.add_attribute("ExecPxTyp", "S"); // 0
  ExecutionReport_message_t_0.insert("S");
  elt.add_attribute("ExecPxAdjment", "4682106.190000"); // 0
  ExecutionReport_message_t_0.insert("4682106.190000");
  elt.add_attribute("PriInd", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("PxImprvmnt", "19378757.730000"); // 0
  ExecutionReport_message_t_0.insert("19378757.730000");
  elt.add_attribute("LastLqdtyInd", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("CopyMsgInd", "true"); // 0
  ExecutionReport_message_t_0.insert("true");
  elt.add_attribute("DividendYield", "19186865.840000"); // 0
  ExecutionReport_message_t_0.insert("19186865.840000");
  elt.add_attribute("ManOrdInd", "false"); // 0
  ExecutionReport_message_t_0.insert("false");
  elt.add_attribute("CustDrctdOrd", "false"); // 0
  ExecutionReport_message_t_0.insert("false");
  elt.add_attribute("RcvdDptID", "ReceivedDeptID_t_1942366210"); // 0
  ExecutionReport_message_t_0.insert("ReceivedDeptID_t_1942366210");
  elt.add_attribute("CustOrdHdlInst", "AON"); // 0
  ExecutionReport_message_t_0.insert("AON");
  elt.add_attribute("OrdHndlInstSrc", "1"); // 0
  ExecutionReport_message_t_0.insert("1");
  elt.add_attribute("Vol", "13074166.410000"); // 0
  ExecutionReport_message_t_0.insert("13074166.410000");
  elt.add_attribute("TmToExp", "9175927.010000"); // 0
  ExecutionReport_message_t_0.insert("9175927.010000");
  elt.add_attribute("RFR", "17308697.000000"); // 0
  ExecutionReport_message_t_0.insert("17308697.000000");
  elt.add_attribute("PxDelta", "15523664.250000"); // 0
  ExecutionReport_message_t_0.insert("15523664.250000");
  all_values.push_back(ExecutionReport_message_t_0);
  all_compo_names.insert("ExecutionReport_message_t");

  { // Hdr
    xml_element Hdr_32{"Hdr"};
    multiset<string> Hdr_32_set;
    Hdr_32.add_attribute("SeqNum", "255260788"); // 1
    Hdr_32_set.insert("255260788");
    Hdr_32.add_attribute("SID", "SenderCompID_t_262400918"); // 1
    Hdr_32_set.insert("SenderCompID_t_262400918");
    Hdr_32.add_attribute("TID", "TargetCompID_t_140944349"); // 1
    Hdr_32_set.insert("TargetCompID_t_140944349");
    Hdr_32.add_attribute("OBID", "OnBehalfOfCompID_t_1027741365"); // 1
    Hdr_32_set.insert("OnBehalfOfCompID_t_1027741365");
    Hdr_32.add_attribute("D2ID", "DeliverToCompID_t_709207462"); // 1
    Hdr_32_set.insert("DeliverToCompID_t_709207462");
    Hdr_32.add_attribute("SSub", "SenderSubID_t_246768396"); // 1
    Hdr_32_set.insert("SenderSubID_t_246768396");
    Hdr_32.add_attribute("SLoc", "SenderLocationID_t_1908333575"); // 1
    Hdr_32_set.insert("SenderLocationID_t_1908333575");
    Hdr_32.add_attribute("TSub", "TargetSubID_t_1633601054"); // 1
    Hdr_32_set.insert("TargetSubID_t_1633601054");
    Hdr_32.add_attribute("TLoc", "TargetLocationID_t_716547367"); // 1
    Hdr_32_set.insert("TargetLocationID_t_716547367");
    Hdr_32.add_attribute("OBSub", "OnBehalfOfSubID_t_1534402735"); // 1
    Hdr_32_set.insert("OnBehalfOfSubID_t_1534402735");
    Hdr_32.add_attribute("OBLoc", "OnBehalfOfLocationID_t_456587482"); // 1
    Hdr_32_set.insert("OnBehalfOfLocationID_t_456587482");
    Hdr_32.add_attribute("D2Sub", "DeliverToSubID_t_1533125068"); // 1
    Hdr_32_set.insert("DeliverToSubID_t_1533125068");
    Hdr_32.add_attribute("D2Loc", "DeliverToLocationID_t_625363621"); // 1
    Hdr_32_set.insert("DeliverToLocationID_t_625363621");
    Hdr_32.add_attribute("PosDup", "Y"); // 1
    Hdr_32_set.insert("Y");
    Hdr_32.add_attribute("PosRsnd", "N"); // 1
    Hdr_32_set.insert("N");
    Hdr_32.add_attribute("Snt", "SendingTime_t_1117197996"); // 1
    Hdr_32_set.insert("SendingTime_t_1117197996");
    Hdr_32.add_attribute("OrigSnt", "OrigSendingTime_t_925275328"); // 1
    Hdr_32_set.insert("OrigSendingTime_t_925275328");
    Hdr_32.add_attribute("MsgEncd", "MessageEncoding_t_1143214365"); // 1
    Hdr_32_set.insert("MessageEncoding_t_1143214365");
    all_values.push_back(Hdr_32_set);
    all_compo_names.insert("Hdr_32_set");

    {
      xml_element Hop_32{"Hop"};
      multiset<string> Hop_32_set;
      Hop_32.add_attribute("ID", "HopCompID_t_907590121"); // 2
      Hop_32_set.insert("HopCompID_t_907590121");
      Hop_32.add_attribute("Ref", "187267568"); // 2
      Hop_32_set.insert("187267568");
      Hop_32.add_attribute("Snt", "HopSendingTime_t_859686247"); // 2
      Hop_32_set.insert("HopSendingTime_t_859686247");
      all_values.push_back(Hop_32_set);
      all_compo_names.insert("Hop_32_set");

      Hdr_32.add_element(Hop_32);
    }
    elt.add_element(Hdr_32);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_4{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_4_set;
    ApplSeqCtrl_4.add_attribute("ApplID", "ApplID_t_678793057"); // 1
    ApplSeqCtrl_4_set.insert("ApplID_t_678793057");
    ApplSeqCtrl_4.add_attribute("ApplSeqNum", "1307249206"); // 1
    ApplSeqCtrl_4_set.insert("1307249206");
    ApplSeqCtrl_4.add_attribute("ApplLastSeqNum", "249406887"); // 1
    ApplSeqCtrl_4_set.insert("249406887");
    ApplSeqCtrl_4.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_4_set.insert("true");
    all_values.push_back(ApplSeqCtrl_4_set);
    all_compo_names.insert("ApplSeqCtrl_4_set");

    elt.add_element(ApplSeqCtrl_4);
  } // end ApplSeqCtrl
  { // Pty
    xml_element Pty_141{"Pty"};
    multiset<string> Pty_141_set;
    Pty_141.add_attribute("ID", "PartyID_t_1998165215"); // 1
    Pty_141_set.insert("PartyID_t_1998165215");
    Pty_141.add_attribute("Src", "2"); // 1
    Pty_141_set.insert("2");
    Pty_141.add_attribute("R", "48"); // 1
    Pty_141_set.insert("48");
    all_values.push_back(Pty_141_set);
    all_compo_names.insert("Pty_141_set");

    {
      xml_element Sub_141{"Sub"};
      multiset<string> Sub_141_set;
      Sub_141.add_attribute("ID", "PartySubID_t_1581551267"); // 2
      Sub_141_set.insert("PartySubID_t_1581551267");
      Sub_141.add_attribute("Typ", "25"); // 2
      Sub_141_set.insert("25");
      all_values.push_back(Sub_141_set);
      all_compo_names.insert("Sub_141_set");

      Pty_141.add_element(Sub_141);
    }
    elt.add_element(Pty_141);
  } // end Pty
  { // Pty
    xml_element Pty_142{"Pty"};
    multiset<string> Pty_142_set;
    Pty_142.add_attribute("ID", "PartyID_t_1095695113"); // 1
    Pty_142_set.insert("PartyID_t_1095695113");
    Pty_142.add_attribute("Src", "2"); // 1
    Pty_142_set.insert("2");
    Pty_142.add_attribute("R", "4"); // 1
    Pty_142_set.insert("4");
    all_values.push_back(Pty_142_set);
    all_compo_names.insert("Pty_142_set");

    {
      xml_element Sub_142{"Sub"};
      multiset<string> Sub_142_set;
      Sub_142.add_attribute("ID", "PartySubID_t_2123436478"); // 2
      Sub_142_set.insert("PartySubID_t_2123436478");
      Sub_142.add_attribute("Typ", "13"); // 2
      Sub_142_set.insert("13");
      all_values.push_back(Sub_142_set);
      all_compo_names.insert("Sub_142_set");

      Pty_142.add_element(Sub_142);
    }
    elt.add_element(Pty_142);
  } // end Pty
  { // Pty
    xml_element Pty_143{"Pty"};
    multiset<string> Pty_143_set;
    Pty_143.add_attribute("ID", "PartyID_t_1573687783"); // 1
    Pty_143_set.insert("PartyID_t_1573687783");
    Pty_143.add_attribute("Src", "3"); // 1
    Pty_143_set.insert("3");
    Pty_143.add_attribute("R", "68"); // 1
    Pty_143_set.insert("68");
    all_values.push_back(Pty_143_set);
    all_compo_names.insert("Pty_143_set");

    {
      xml_element Sub_143{"Sub"};
      multiset<string> Sub_143_set;
      Sub_143.add_attribute("ID", "PartySubID_t_142751503"); // 2
      Sub_143_set.insert("PartySubID_t_142751503");
      Sub_143.add_attribute("Typ", "3"); // 2
      Sub_143_set.insert("3");
      all_values.push_back(Sub_143_set);
      all_compo_names.insert("Sub_143_set");

      Pty_143.add_element(Sub_143);
    }
    elt.add_element(Pty_143);
  } // end Pty
  { // Contra
    xml_element Contra_0{"Contra"};
    multiset<string> Contra_0_set;
    Contra_0.add_attribute("CntraBrkr", "ContraBroker_t_1675876571"); // 1
    Contra_0_set.insert("ContraBroker_t_1675876571");
    Contra_0.add_attribute("CntraTrdr", "ContraTrader_t_1896569115"); // 1
    Contra_0_set.insert("ContraTrader_t_1896569115");
    Contra_0.add_attribute("CntraTrdQty", "8054455.970000"); // 1
    Contra_0_set.insert("8054455.970000");
    Contra_0.add_attribute("CntraTrdTm", "ContraTradeTime_t_668385095"); // 1
    Contra_0_set.insert("ContraTradeTime_t_668385095");
    Contra_0.add_attribute("CntraLegRefID", "ContraLegRefID_t_866283463"); // 1
    Contra_0_set.insert("ContraLegRefID_t_866283463");
    all_values.push_back(Contra_0_set);
    all_compo_names.insert("Contra_0_set");

    elt.add_element(Contra_0);
  } // end Contra
  { // Contra
    xml_element Contra_1{"Contra"};
    multiset<string> Contra_1_set;
    Contra_1.add_attribute("CntraBrkr", "ContraBroker_t_1730720926"); // 1
    Contra_1_set.insert("ContraBroker_t_1730720926");
    Contra_1.add_attribute("CntraTrdr", "ContraTrader_t_1811599461"); // 1
    Contra_1_set.insert("ContraTrader_t_1811599461");
    Contra_1.add_attribute("CntraTrdQty", "17738735.850000"); // 1
    Contra_1_set.insert("17738735.850000");
    Contra_1.add_attribute("CntraTrdTm", "ContraTradeTime_t_1917988494"); // 1
    Contra_1_set.insert("ContraTradeTime_t_1917988494");
    Contra_1.add_attribute("CntraLegRefID", "ContraLegRefID_t_523802060"); // 1
    Contra_1_set.insert("ContraLegRefID_t_523802060");
    all_values.push_back(Contra_1_set);
    all_compo_names.insert("Contra_1_set");

    elt.add_element(Contra_1);
  } // end Contra
  { // Contra
    xml_element Contra_2{"Contra"};
    multiset<string> Contra_2_set;
    Contra_2.add_attribute("CntraBrkr", "ContraBroker_t_305182994"); // 1
    Contra_2_set.insert("ContraBroker_t_305182994");
    Contra_2.add_attribute("CntraTrdr", "ContraTrader_t_1077754052"); // 1
    Contra_2_set.insert("ContraTrader_t_1077754052");
    Contra_2.add_attribute("CntraTrdQty", "7732089.470000"); // 1
    Contra_2_set.insert("7732089.470000");
    Contra_2.add_attribute("CntraTrdTm", "ContraTradeTime_t_778858614"); // 1
    Contra_2_set.insert("ContraTradeTime_t_778858614");
    Contra_2.add_attribute("CntraLegRefID", "ContraLegRefID_t_1000595676"); // 1
    Contra_2_set.insert("ContraLegRefID_t_1000595676");
    all_values.push_back(Contra_2_set);
    all_compo_names.insert("Contra_2_set");

    elt.add_element(Contra_2);
  } // end Contra
  { // PreAll
    xml_element PreAll_3{"PreAll"};
    multiset<string> PreAll_3_set;
    PreAll_3.add_attribute("Acct", "AllocAccount_t_412467228"); // 1
    PreAll_3_set.insert("AllocAccount_t_412467228");
    PreAll_3.add_attribute("ActIDSrc", "4"); // 1
    PreAll_3_set.insert("4");
    PreAll_3.add_attribute("AllocSettlCcy", "GBP"); // 1
    PreAll_3_set.insert("GBP");
    PreAll_3.add_attribute("IndAllocID", "IndividualAllocID_t_789241466"); // 1
    PreAll_3_set.insert("IndividualAllocID_t_789241466");
    PreAll_3.add_attribute("Qty", "19019103.200000"); // 1
    PreAll_3_set.insert("19019103.200000");
    all_values.push_back(PreAll_3_set);
    all_compo_names.insert("PreAll_3_set");

    {
      xml_element Pty_144{"Pty"};
      multiset<string> Pty_144_set;
      Pty_144.add_attribute("ID", "NestedPartyID_t_777878006"); // 2
      Pty_144_set.insert("NestedPartyID_t_777878006");
      Pty_144.add_attribute("Src", "6"); // 2
      Pty_144_set.insert("6");
      Pty_144.add_attribute("R", "25"); // 2
      Pty_144_set.insert("25");
      all_values.push_back(Pty_144_set);
      all_compo_names.insert("Pty_144_set");

      {
        xml_element Sub_144{"Sub"};
        multiset<string> Sub_144_set;
        Sub_144.add_attribute("ID", "NestedPartySubID_t_204082141"); // 3
        Sub_144_set.insert("NestedPartySubID_t_204082141");
        Sub_144.add_attribute("Typ", "33"); // 3
        Sub_144_set.insert("33");
        all_values.push_back(Sub_144_set);
        all_compo_names.insert("Sub_144_set");

        Pty_144.add_element(Sub_144);
      }
      PreAll_3.add_element(Pty_144);
    }
    elt.add_element(PreAll_3);
  } // end PreAll
  { // Instrmt
    xml_element Instrmt_24{"Instrmt"};
    multiset<string> Instrmt_24_set;
    Instrmt_24.add_attribute("Sym", "Symbol_t_51896078"); // 1
    Instrmt_24_set.insert("Symbol_t_51896078");
    Instrmt_24.add_attribute("Sfx", "CD"); // 1
    Instrmt_24_set.insert("CD");
    Instrmt_24.add_attribute("ID", "SecurityID_t_1773202548"); // 1
    Instrmt_24_set.insert("SecurityID_t_1773202548");
    Instrmt_24.add_attribute("Src", "E"); // 1
    Instrmt_24_set.insert("E");
    Instrmt_24.add_attribute("Prod", "3"); // 1
    Instrmt_24_set.insert("3");
    Instrmt_24.add_attribute("ProdCmplx", "ProductComplex_t_1522288015"); // 1
    Instrmt_24_set.insert("ProductComplex_t_1522288015");
    Instrmt_24.add_attribute("SecGrp", "SecurityGroup_t_1205722564"); // 1
    Instrmt_24_set.insert("SecurityGroup_t_1205722564");
    Instrmt_24.add_attribute("CFI", "CFICode_t_543611663"); // 1
    Instrmt_24_set.insert("CFICode_t_543611663");
    Instrmt_24.add_attribute("SecTyp", "EUCORP"); // 1
    Instrmt_24_set.insert("EUCORP");
    Instrmt_24.add_attribute("SubTyp", "SecuritySubType_t_788959842"); // 1
    Instrmt_24_set.insert("SecuritySubType_t_788959842");
    Instrmt_24.add_attribute("MMY", "207727476"); // 1
    Instrmt_24_set.insert("207727476");
    Instrmt_24.add_attribute("MatDt", "MaturityDate_t_2014961416"); // 1
    Instrmt_24_set.insert("MaturityDate_t_2014961416");
    Instrmt_24.add_attribute("MatTm", "559464689"); // 1
    Instrmt_24_set.insert("559464689");
    Instrmt_24.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_731529536"); // 1
    Instrmt_24_set.insert("SettleOnOpenFlag_t_731529536");
    Instrmt_24.add_attribute("AsgnMeth", "172660762"); // 1
    Instrmt_24_set.insert("172660762");
    Instrmt_24.add_attribute("Status", "2"); // 1
    Instrmt_24_set.insert("2");
    Instrmt_24.add_attribute("CpnPmt", "CouponPaymentDate_t_1504738484"); // 1
    Instrmt_24_set.insert("CouponPaymentDate_t_1504738484");
    Instrmt_24.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_24_set.insert("MR");
    Instrmt_24.add_attribute("Snrty", "SB"); // 1
    Instrmt_24_set.insert("SB");
    Instrmt_24.add_attribute("NotlPctOut", "21286289.990000"); // 1
    Instrmt_24_set.insert("21286289.990000");
    Instrmt_24.add_attribute("OrigNotlPctOut", "13639866.050000"); // 1
    Instrmt_24_set.insert("13639866.050000");
    Instrmt_24.add_attribute("AttchPnt", "1838771.220000"); // 1
    Instrmt_24_set.insert("1838771.220000");
    Instrmt_24.add_attribute("DetchPnt", "391034.850000"); // 1
    Instrmt_24_set.insert("391034.850000");
    Instrmt_24.add_attribute("Issued", "IssueDate_t_814945223"); // 1
    Instrmt_24_set.insert("IssueDate_t_814945223");
    Instrmt_24.add_attribute("RepoCollSecTyp", "973118589"); // 1
    Instrmt_24_set.insert("973118589");
    Instrmt_24.add_attribute("RepoTrm", "1941013805"); // 1
    Instrmt_24_set.insert("1941013805");
    Instrmt_24.add_attribute("RepoRt", "15928232.290000"); // 1
    Instrmt_24_set.insert("15928232.290000");
    Instrmt_24.add_attribute("Fctr", "17383128.860000"); // 1
    Instrmt_24_set.insert("17383128.860000");
    Instrmt_24.add_attribute("CrdRtg", "CreditRating_t_2101116477"); // 1
    Instrmt_24_set.insert("CreditRating_t_2101116477");
    Instrmt_24.add_attribute("Rgstry", "InstrRegistry_t_1796905371"); // 1
    Instrmt_24_set.insert("InstrRegistry_t_1796905371");
    Instrmt_24.add_attribute("IssuCtry", "92826293"); // 1
    Instrmt_24_set.insert("92826293");
    Instrmt_24.add_attribute("StPrv", "StateOrProvinceOfIssue_t_5528908"); // 1
    Instrmt_24_set.insert("StateOrProvinceOfIssue_t_5528908");
    Instrmt_24.add_attribute("Lcl", "LocaleOfIssue_t_2143739015"); // 1
    Instrmt_24_set.insert("LocaleOfIssue_t_2143739015");
    Instrmt_24.add_attribute("Redeem", "RedemptionDate_t_1866028841"); // 1
    Instrmt_24_set.insert("RedemptionDate_t_1866028841");
    Instrmt_24.add_attribute("StrkPx", "4058058.750000"); // 1
    Instrmt_24_set.insert("4058058.750000");
    Instrmt_24.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_24_set.insert("CAN");
    Instrmt_24.add_attribute("StrkMult", "16115284.390000"); // 1
    Instrmt_24_set.insert("16115284.390000");
    Instrmt_24.add_attribute("StrkValu", "4150935.980000"); // 1
    Instrmt_24_set.insert("4150935.980000");
    Instrmt_24.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_24_set.insert("1");
    Instrmt_24.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_24_set.insert("5");
    Instrmt_24.add_attribute("StrkPxBndryPrcsn", "6228210.740000"); // 1
    Instrmt_24_set.insert("6228210.740000");
    Instrmt_24.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_24_set.insert("1");
    Instrmt_24.add_attribute("OptAt", "812469323"); // 1
    Instrmt_24_set.insert("812469323");
    Instrmt_24.add_attribute("Mult", "13543506.100000"); // 1
    Instrmt_24_set.insert("13543506.100000");
    Instrmt_24.add_attribute("MultTyp", "0"); // 1
    Instrmt_24_set.insert("0");
    Instrmt_24.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_24_set.insert("1");
    Instrmt_24.add_attribute("MinPxIncr", "7116054.460000"); // 1
    Instrmt_24_set.insert("7116054.460000");
    Instrmt_24.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_326095299"); // 1
    Instrmt_24_set.insert("MinPriceIncrementAmount_t_326095299");
    Instrmt_24.add_attribute("UOM", "MMBtu"); // 1
    Instrmt_24_set.insert("MMBtu");
    Instrmt_24.add_attribute("UOMQty", "6927507.970000"); // 1
    Instrmt_24_set.insert("6927507.970000");
    Instrmt_24.add_attribute("PxUOM", "t"); // 1
    Instrmt_24_set.insert("t");
    Instrmt_24.add_attribute("PxUOMQty", "9764123.080000"); // 1
    Instrmt_24_set.insert("9764123.080000");
    Instrmt_24.add_attribute("SettlMeth", "P"); // 1
    Instrmt_24_set.insert("P");
    Instrmt_24.add_attribute("ExerStyle", "0"); // 1
    Instrmt_24_set.insert("0");
    Instrmt_24.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_24_set.insert("2");
    Instrmt_24.add_attribute("OptPayAmt", "OptPayoutAmount_t_525384440"); // 1
    Instrmt_24_set.insert("OptPayoutAmount_t_525384440");
    Instrmt_24.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_24_set.insert("INX");
    Instrmt_24.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_24_set.insert("EQTY");
    Instrmt_24.add_attribute("ListMeth", "0"); // 1
    Instrmt_24_set.insert("0");
    Instrmt_24.add_attribute("CapPx", "15997884.320000"); // 1
    Instrmt_24_set.insert("15997884.320000");
    Instrmt_24.add_attribute("FlrPx", "16331864.280000"); // 1
    Instrmt_24_set.insert("16331864.280000");
    Instrmt_24.add_attribute("PutCall", "0"); // 1
    Instrmt_24_set.insert("0");
    Instrmt_24.add_attribute("FlexInd", "true"); // 1
    Instrmt_24_set.insert("true");
    Instrmt_24.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_24_set.insert("true");
    Instrmt_24.add_attribute("TmUnit", "D"); // 1
    Instrmt_24_set.insert("D");
    Instrmt_24.add_attribute("CpnRt", "14675257.350000"); // 1
    Instrmt_24_set.insert("14675257.350000");
    Instrmt_24.add_attribute("Exch", "SecurityExchange_t_445081183"); // 1
    Instrmt_24_set.insert("SecurityExchange_t_445081183");
    Instrmt_24.add_attribute("PosLmt", "354396844"); // 1
    Instrmt_24_set.insert("354396844");
    Instrmt_24.add_attribute("NTPosLmt", "1882619333"); // 1
    Instrmt_24_set.insert("1882619333");
    Instrmt_24.add_attribute("Issr", "Issuer_t_1927002223"); // 1
    Instrmt_24_set.insert("Issuer_t_1927002223");
    Instrmt_24.add_attribute("EncIssrLen", "607401478"); // 1
    Instrmt_24_set.insert("607401478");
    Instrmt_24.add_attribute("EncIssr", "EncodedIssuer_t_357956759"); // 1
    Instrmt_24_set.insert("EncodedIssuer_t_357956759");
    Instrmt_24.add_attribute("Desc", "SecurityDesc_t_1128917383"); // 1
    Instrmt_24_set.insert("SecurityDesc_t_1128917383");
    Instrmt_24.add_attribute("EncSecDescLen", "1419870801"); // 1
    Instrmt_24_set.insert("1419870801");
    Instrmt_24.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1712307369"); // 1
    Instrmt_24_set.insert("EncodedSecurityDesc_t_1712307369");
    Instrmt_24.add_attribute("Pool", "Pool_t_503493305"); // 1
    Instrmt_24_set.insert("Pool_t_503493305");
    Instrmt_24.add_attribute("CSetMo", "1722075218"); // 1
    Instrmt_24_set.insert("1722075218");
    Instrmt_24.add_attribute("CPPgm", "1"); // 1
    Instrmt_24_set.insert("1");
    Instrmt_24.add_attribute("CPRegT", "CPRegType_t_829588605"); // 1
    Instrmt_24_set.insert("CPRegType_t_829588605");
    Instrmt_24.add_attribute("Dated", "DatedDate_t_367126756"); // 1
    Instrmt_24_set.insert("DatedDate_t_367126756");
    Instrmt_24.add_attribute("IntAcrl", "InterestAccrualDate_t_969179965"); // 1
    Instrmt_24_set.insert("InterestAccrualDate_t_969179965");
    all_values.push_back(Instrmt_24_set);
    all_compo_names.insert("Instrmt_24_set");

    {
      xml_element AID_27{"AID"};
      multiset<string> AID_27_set;
      AID_27.add_attribute("AltID", "SecurityAltID_t_372186861"); // 2
      AID_27_set.insert("SecurityAltID_t_372186861");
      AID_27.add_attribute("AltIDSrc", "B"); // 2
      AID_27_set.insert("B");
      all_values.push_back(AID_27_set);
      all_compo_names.insert("AID_27_set");

      Instrmt_24.add_element(AID_27);
    }
    {
      xml_element SecXML_27{"SecXML"};
      multiset<string> SecXML_27_set;
      SecXML_27.add_attribute("Schema", "SecurityXMLSchema_t_1701034248"); // 2
      SecXML_27_set.insert("SecurityXMLSchema_t_1701034248");
      all_values.push_back(SecXML_27_set);
      all_compo_names.insert("SecXML_27_set");

      Instrmt_24.add_element(SecXML_27);
    }
    {
      xml_element Evnt_27{"Evnt"};
      multiset<string> Evnt_27_set;
      Evnt_27.add_attribute("EventTyp", "2"); // 2
      Evnt_27_set.insert("2");
      Evnt_27.add_attribute("Dt", "EventDate_t_1145586314"); // 2
      Evnt_27_set.insert("EventDate_t_1145586314");
      Evnt_27.add_attribute("Tm", "EventTime_t_78935041"); // 2
      Evnt_27_set.insert("EventTime_t_78935041");
      Evnt_27.add_attribute("Px", "5326134.030000"); // 2
      Evnt_27_set.insert("5326134.030000");
      Evnt_27.add_attribute("Txt", "EventText_t_538462801"); // 2
      Evnt_27_set.insert("EventText_t_538462801");
      all_values.push_back(Evnt_27_set);
      all_compo_names.insert("Evnt_27_set");

      Instrmt_24.add_element(Evnt_27);
    }
    {
      xml_element Pty_145{"Pty"};
      multiset<string> Pty_145_set;
      Pty_145.add_attribute("ID", "InstrumentPartyID_t_557952311"); // 2
      Pty_145_set.insert("InstrumentPartyID_t_557952311");
      Pty_145.add_attribute("Src", "C"); // 2
      Pty_145_set.insert("C");
      Pty_145.add_attribute("R", "45"); // 2
      Pty_145_set.insert("45");
      all_values.push_back(Pty_145_set);
      all_compo_names.insert("Pty_145_set");

      {
        xml_element Sub_145{"Sub"};
        multiset<string> Sub_145_set;
        Sub_145.add_attribute("ID", "InstrumentPartySubID_t_1042498489"); // 3
        Sub_145_set.insert("InstrumentPartySubID_t_1042498489");
        Sub_145.add_attribute("Typ", "1"); // 3
        Sub_145_set.insert("1");
        all_values.push_back(Sub_145_set);
        all_compo_names.insert("Sub_145_set");

        Pty_145.add_element(Sub_145);
      }
      Instrmt_24.add_element(Pty_145);
    }
    {
      xml_element CmplxEvnt_24{"CmplxEvnt"};
      multiset<string> CmplxEvnt_24_set;
      CmplxEvnt_24.add_attribute("Typ", "2"); // 2
      CmplxEvnt_24_set.insert("2");
      CmplxEvnt_24.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1932850542"); // 2
      CmplxEvnt_24_set.insert("ComplexOptPayoutAmount_t_1932850542");
      CmplxEvnt_24.add_attribute("Px", "9010040.740000"); // 2
      CmplxEvnt_24_set.insert("9010040.740000");
      CmplxEvnt_24.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_24_set.insert("3");
      CmplxEvnt_24.add_attribute("PxBndryPrcsn", "1397637.380000"); // 2
      CmplxEvnt_24_set.insert("1397637.380000");
      CmplxEvnt_24.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_24_set.insert("2");
      CmplxEvnt_24.add_attribute("Cond", "1"); // 2
      CmplxEvnt_24_set.insert("1");
      all_values.push_back(CmplxEvnt_24_set);
      all_compo_names.insert("CmplxEvnt_24_set");

      {
        xml_element EvntDts_24{"EvntDts"};
        multiset<string> EvntDts_24_set;
        EvntDts_24.add_attribute("StartDt", "ComplexEventStartDate_t_747165217"); // 3
        EvntDts_24_set.insert("ComplexEventStartDate_t_747165217");
        EvntDts_24.add_attribute("EndDt", "ComplexEventEndDate_t_994096518"); // 3
        EvntDts_24_set.insert("ComplexEventEndDate_t_994096518");
        all_values.push_back(EvntDts_24_set);
        all_compo_names.insert("EvntDts_24_set");

        {
          xml_element EvntTms_24{"EvntTms"};
          multiset<string> EvntTms_24_set;
          EvntTms_24.add_attribute("StartTm", "581930697"); // 4
          EvntTms_24_set.insert("581930697");
          EvntTms_24.add_attribute("EndTm", "19552370"); // 4
          EvntTms_24_set.insert("19552370");
          all_values.push_back(EvntTms_24_set);
          all_compo_names.insert("EvntTms_24_set");

          EvntDts_24.add_element(EvntTms_24);
        }
        CmplxEvnt_24.add_element(EvntDts_24);
      }
      Instrmt_24.add_element(CmplxEvnt_24);
    }
    elt.add_element(Instrmt_24);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_10{"FinDetls"};
    multiset<string> FinDetls_10_set;
    FinDetls_10.add_attribute("AgmtDesc", "AgreementDesc_t_558920240"); // 1
    FinDetls_10_set.insert("AgreementDesc_t_558920240");
    FinDetls_10.add_attribute("AgmtID", "AgreementID_t_1085424002"); // 1
    FinDetls_10_set.insert("AgreementID_t_1085424002");
    FinDetls_10.add_attribute("AgmtDt", "AgreementDate_t_1741627588"); // 1
    FinDetls_10_set.insert("AgreementDate_t_1741627588");
    FinDetls_10.add_attribute("AgmtCcy", "CAN"); // 1
    FinDetls_10_set.insert("CAN");
    FinDetls_10.add_attribute("TrmTyp", "1"); // 1
    FinDetls_10_set.insert("1");
    FinDetls_10.add_attribute("StartDt", "StartDate_t_1804529373"); // 1
    FinDetls_10_set.insert("StartDate_t_1804529373");
    FinDetls_10.add_attribute("EndDt", "EndDate_t_139715821"); // 1
    FinDetls_10_set.insert("EndDate_t_139715821");
    FinDetls_10.add_attribute("DlvryTyp", "1"); // 1
    FinDetls_10_set.insert("1");
    FinDetls_10.add_attribute("MgnRatio", "13580799.740000"); // 1
    FinDetls_10_set.insert("13580799.740000");
    all_values.push_back(FinDetls_10_set);
    all_compo_names.insert("FinDetls_10_set");

    elt.add_element(FinDetls_10);
  } // end FinDetls
  { // Undly
    xml_element Undly_33{"Undly"};
    multiset<string> Undly_33_set;
    Undly_33.add_attribute("Sym", "UnderlyingSymbol_t_302912427"); // 1
    Undly_33_set.insert("UnderlyingSymbol_t_302912427");
    Undly_33.add_attribute("Sfx", "WI"); // 1
    Undly_33_set.insert("WI");
    Undly_33.add_attribute("ID", "UnderlyingSecurityID_t_1402059565"); // 1
    Undly_33_set.insert("UnderlyingSecurityID_t_1402059565");
    Undly_33.add_attribute("Src", "D"); // 1
    Undly_33_set.insert("D");
    Undly_33.add_attribute("Prod", "10"); // 1
    Undly_33_set.insert("10");
    Undly_33.add_attribute("CFI", "UnderlyingCFICode_t_1386977753"); // 1
    Undly_33_set.insert("UnderlyingCFICode_t_1386977753");
    Undly_33.add_attribute("SecTyp", "TAN"); // 1
    Undly_33_set.insert("TAN");
    Undly_33.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_889982167"); // 1
    Undly_33_set.insert("UnderlyingSecuritySubType_t_889982167");
    Undly_33.add_attribute("MMY", "820456092"); // 1
    Undly_33_set.insert("820456092");
    Undly_33.add_attribute("Mat", "UnderlyingMaturityDate_t_93954366"); // 1
    Undly_33_set.insert("UnderlyingMaturityDate_t_93954366");
    Undly_33.add_attribute("MatTm", "675349061"); // 1
    Undly_33_set.insert("675349061");
    Undly_33.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1721460167"); // 1
    Undly_33_set.insert("UnderlyingCouponPaymentDate_t_1721460167");
    Undly_33.add_attribute("RestrctTyp", "MR"); // 1
    Undly_33_set.insert("MR");
    Undly_33.add_attribute("Snrty", "SR"); // 1
    Undly_33_set.insert("SR");
    Undly_33.add_attribute("NotlPctOut", "2101162.780000"); // 1
    Undly_33_set.insert("2101162.780000");
    Undly_33.add_attribute("OrigNotlPctOut", "13679460.670000"); // 1
    Undly_33_set.insert("13679460.670000");
    Undly_33.add_attribute("AttchPnt", "15622780.160000"); // 1
    Undly_33_set.insert("15622780.160000");
    Undly_33.add_attribute("DetchPnt", "12042127.970000"); // 1
    Undly_33_set.insert("12042127.970000");
    Undly_33.add_attribute("Issued", "UnderlyingIssueDate_t_1949876764"); // 1
    Undly_33_set.insert("UnderlyingIssueDate_t_1949876764");
    Undly_33.add_attribute("RepoCollSecTyp", "1581830387"); // 1
    Undly_33_set.insert("1581830387");
    Undly_33.add_attribute("RepoTrm", "1763133037"); // 1
    Undly_33_set.insert("1763133037");
    Undly_33.add_attribute("RepoRt", "8878171.190000"); // 1
    Undly_33_set.insert("8878171.190000");
    Undly_33.add_attribute("Fctr", "11759743.270000"); // 1
    Undly_33_set.insert("11759743.270000");
    Undly_33.add_attribute("CrdRtg", "UnderlyingCreditRating_t_450998797"); // 1
    Undly_33_set.insert("UnderlyingCreditRating_t_450998797");
    Undly_33.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_655346078"); // 1
    Undly_33_set.insert("UnderlyingInstrRegistry_t_655346078");
    Undly_33.add_attribute("Ctry", "1137245024"); // 1
    Undly_33_set.insert("1137245024");
    Undly_33.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_108044522"); // 1
    Undly_33_set.insert("UnderlyingStateOrProvinceOfIssue_t_108044522");
    Undly_33.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_795061899"); // 1
    Undly_33_set.insert("UnderlyingLocaleOfIssue_t_795061899");
    Undly_33.add_attribute("Redeem", "UnderlyingRedemptionDate_t_294571137"); // 1
    Undly_33_set.insert("UnderlyingRedemptionDate_t_294571137");
    Undly_33.add_attribute("StrkPx", "14661244.960000"); // 1
    Undly_33_set.insert("14661244.960000");
    Undly_33.add_attribute("StrkCcy", "USD"); // 1
    Undly_33_set.insert("USD");
    Undly_33.add_attribute("OptA", "755655863"); // 1
    Undly_33_set.insert("755655863");
    Undly_33.add_attribute("Mult", "9190839.790000"); // 1
    Undly_33_set.insert("9190839.790000");
    Undly_33.add_attribute("MultTyp", "1"); // 1
    Undly_33_set.insert("1");
    Undly_33.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_33_set.insert("1");
    Undly_33.add_attribute("UOM", "Bbl"); // 1
    Undly_33_set.insert("Bbl");
    Undly_33.add_attribute("UOMQty", "1569159.550000"); // 1
    Undly_33_set.insert("1569159.550000");
    Undly_33.add_attribute("PxUOM", "MWh"); // 1
    Undly_33_set.insert("MWh");
    Undly_33.add_attribute("PxUOMQty", "9790341.770000"); // 1
    Undly_33_set.insert("9790341.770000");
    Undly_33.add_attribute("TmUnit", "H"); // 1
    Undly_33_set.insert("H");
    Undly_33.add_attribute("ExerStyle", "0"); // 1
    Undly_33_set.insert("0");
    Undly_33.add_attribute("CpnRt", "5530106.960000"); // 1
    Undly_33_set.insert("5530106.960000");
    Undly_33.add_attribute("Exch", "UnderlyingSecurityExchange_t_18319427"); // 1
    Undly_33_set.insert("UnderlyingSecurityExchange_t_18319427");
    Undly_33.add_attribute("Issr", "UnderlyingIssuer_t_836099921"); // 1
    Undly_33_set.insert("UnderlyingIssuer_t_836099921");
    Undly_33.add_attribute("EncUndIssrLen", "763126974"); // 1
    Undly_33_set.insert("763126974");
    Undly_33.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1386265494"); // 1
    Undly_33_set.insert("EncodedUnderlyingIssuer_t_1386265494");
    Undly_33.add_attribute("Desc", "UnderlyingSecurityDesc_t_250894289"); // 1
    Undly_33_set.insert("UnderlyingSecurityDesc_t_250894289");
    Undly_33.add_attribute("EncUndSecDescLen", "1967339771"); // 1
    Undly_33_set.insert("1967339771");
    Undly_33.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1188658611"); // 1
    Undly_33_set.insert("EncodedUnderlyingSecurityDesc_t_1188658611");
    Undly_33.add_attribute("CPPgm", "UnderlyingCPProgram_t_1832724676"); // 1
    Undly_33_set.insert("UnderlyingCPProgram_t_1832724676");
    Undly_33.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1582989160"); // 1
    Undly_33_set.insert("UnderlyingCPRegType_t_1582989160");
    Undly_33.add_attribute("AllocPct", "20764757.300000"); // 1
    Undly_33_set.insert("20764757.300000");
    Undly_33.add_attribute("Ccy", "CAN"); // 1
    Undly_33_set.insert("CAN");
    Undly_33.add_attribute("Qty", "5843381.600000"); // 1
    Undly_33_set.insert("5843381.600000");
    Undly_33.add_attribute("SettlTyp", "2"); // 1
    Undly_33_set.insert("2");
    Undly_33.add_attribute("CashAmt", "UnderlyingCashAmount_t_2142032480"); // 1
    Undly_33_set.insert("UnderlyingCashAmount_t_2142032480");
    Undly_33.add_attribute("CashTyp", "FIXED"); // 1
    Undly_33_set.insert("FIXED");
    Undly_33.add_attribute("Px", "1455478.690000"); // 1
    Undly_33_set.insert("1455478.690000");
    Undly_33.add_attribute("DirtPx", "14606733.280000"); // 1
    Undly_33_set.insert("14606733.280000");
    Undly_33.add_attribute("EndPx", "8964244.740000"); // 1
    Undly_33_set.insert("8964244.740000");
    Undly_33.add_attribute("StartVal", "UnderlyingStartValue_t_743031433"); // 1
    Undly_33_set.insert("UnderlyingStartValue_t_743031433");
    Undly_33.add_attribute("CurVal", "UnderlyingCurrentValue_t_68845544"); // 1
    Undly_33_set.insert("UnderlyingCurrentValue_t_68845544");
    Undly_33.add_attribute("EndVal", "UnderlyingEndValue_t_1815508453"); // 1
    Undly_33_set.insert("UnderlyingEndValue_t_1815508453");
    Undly_33.add_attribute("AdjQty", "344065.770000"); // 1
    Undly_33_set.insert("344065.770000");
    Undly_33.add_attribute("FxRate", "6719850.850000"); // 1
    Undly_33_set.insert("6719850.850000");
    Undly_33.add_attribute("FxRateCalc", "M"); // 1
    Undly_33_set.insert("M");
    Undly_33.add_attribute("CapValu", "UnderlyingCapValue_t_191322532"); // 1
    Undly_33_set.insert("UnderlyingCapValue_t_191322532");
    Undly_33.add_attribute("SetMeth", "UnderlyingSettlMethod_t_17623146"); // 1
    Undly_33_set.insert("UnderlyingSettlMethod_t_17623146");
    Undly_33.add_attribute("PutCall", "805637067"); // 1
    Undly_33_set.insert("805637067");
    all_values.push_back(Undly_33_set);
    all_compo_names.insert("Undly_33_set");

    {
      xml_element UndAID_33{"UndAID"};
      multiset<string> UndAID_33_set;
      UndAID_33.add_attribute("AltID", "UnderlyingSecurityAltID_t_442192854"); // 2
      UndAID_33_set.insert("UnderlyingSecurityAltID_t_442192854");
      UndAID_33.add_attribute("AltIDSrc", "4"); // 2
      UndAID_33_set.insert("4");
      all_values.push_back(UndAID_33_set);
      all_compo_names.insert("UndAID_33_set");

      Undly_33.add_element(UndAID_33);
    }
    {
      xml_element Stip_54{"Stip"};
      multiset<string> Stip_54_set;
      Stip_54.add_attribute("Typ", "BANKQUAL"); // 2
      Stip_54_set.insert("BANKQUAL");
      Stip_54.add_attribute("Val", "UnderlyingStipValue_t_460512281"); // 2
      Stip_54_set.insert("UnderlyingStipValue_t_460512281");
      all_values.push_back(Stip_54_set);
      all_compo_names.insert("Stip_54_set");

      Undly_33.add_element(Stip_54);
    }
    {
      xml_element Pty_146{"Pty"};
      multiset<string> Pty_146_set;
      Pty_146.add_attribute("ID", "UnderlyingInstrumentPartyID_t_874710188"); // 2
      Pty_146_set.insert("UnderlyingInstrumentPartyID_t_874710188");
      Pty_146.add_attribute("Src", "6"); // 2
      Pty_146_set.insert("6");
      Pty_146.add_attribute("R", "61"); // 2
      Pty_146_set.insert("61");
      all_values.push_back(Pty_146_set);
      all_compo_names.insert("Pty_146_set");

      {
        xml_element Sub_146{"Sub"};
        multiset<string> Sub_146_set;
        Sub_146.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1125604478"); // 3
        Sub_146_set.insert("UnderlyingInstrumentPartySubID_t_1125604478");
        Sub_146.add_attribute("Typ", "28"); // 3
        Sub_146_set.insert("28");
        all_values.push_back(Sub_146_set);
        all_compo_names.insert("Sub_146_set");

        Pty_146.add_element(Sub_146);
      }
      Undly_33.add_element(Pty_146);
    }
    elt.add_element(Undly_33);
  } // end Undly
  { // Undly
    xml_element Undly_34{"Undly"};
    multiset<string> Undly_34_set;
    Undly_34.add_attribute("Sym", "UnderlyingSymbol_t_887952738"); // 1
    Undly_34_set.insert("UnderlyingSymbol_t_887952738");
    Undly_34.add_attribute("Sfx", "CD"); // 1
    Undly_34_set.insert("CD");
    Undly_34.add_attribute("ID", "UnderlyingSecurityID_t_1377136373"); // 1
    Undly_34_set.insert("UnderlyingSecurityID_t_1377136373");
    Undly_34.add_attribute("Src", "B"); // 1
    Undly_34_set.insert("B");
    Undly_34.add_attribute("Prod", "13"); // 1
    Undly_34_set.insert("13");
    Undly_34.add_attribute("CFI", "UnderlyingCFICode_t_1263640683"); // 1
    Undly_34_set.insert("UnderlyingCFICode_t_1263640683");
    Undly_34.add_attribute("SecTyp", "RETIRED"); // 1
    Undly_34_set.insert("RETIRED");
    Undly_34.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1523037594"); // 1
    Undly_34_set.insert("UnderlyingSecuritySubType_t_1523037594");
    Undly_34.add_attribute("MMY", "1258189515"); // 1
    Undly_34_set.insert("1258189515");
    Undly_34.add_attribute("Mat", "UnderlyingMaturityDate_t_633199393"); // 1
    Undly_34_set.insert("UnderlyingMaturityDate_t_633199393");
    Undly_34.add_attribute("MatTm", "1668585463"); // 1
    Undly_34_set.insert("1668585463");
    Undly_34.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_571379195"); // 1
    Undly_34_set.insert("UnderlyingCouponPaymentDate_t_571379195");
    Undly_34.add_attribute("RestrctTyp", "XR"); // 1
    Undly_34_set.insert("XR");
    Undly_34.add_attribute("Snrty", "SD"); // 1
    Undly_34_set.insert("SD");
    Undly_34.add_attribute("NotlPctOut", "6402247.390000"); // 1
    Undly_34_set.insert("6402247.390000");
    Undly_34.add_attribute("OrigNotlPctOut", "11976486.720000"); // 1
    Undly_34_set.insert("11976486.720000");
    Undly_34.add_attribute("AttchPnt", "2985398.260000"); // 1
    Undly_34_set.insert("2985398.260000");
    Undly_34.add_attribute("DetchPnt", "13122098.250000"); // 1
    Undly_34_set.insert("13122098.250000");
    Undly_34.add_attribute("Issued", "UnderlyingIssueDate_t_1024251562"); // 1
    Undly_34_set.insert("UnderlyingIssueDate_t_1024251562");
    Undly_34.add_attribute("RepoCollSecTyp", "489862358"); // 1
    Undly_34_set.insert("489862358");
    Undly_34.add_attribute("RepoTrm", "1329832971"); // 1
    Undly_34_set.insert("1329832971");
    Undly_34.add_attribute("RepoRt", "18298886.290000"); // 1
    Undly_34_set.insert("18298886.290000");
    Undly_34.add_attribute("Fctr", "9320552.120000"); // 1
    Undly_34_set.insert("9320552.120000");
    Undly_34.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1368443238"); // 1
    Undly_34_set.insert("UnderlyingCreditRating_t_1368443238");
    Undly_34.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1041052744"); // 1
    Undly_34_set.insert("UnderlyingInstrRegistry_t_1041052744");
    Undly_34.add_attribute("Ctry", "1392567493"); // 1
    Undly_34_set.insert("1392567493");
    Undly_34.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_95669779"); // 1
    Undly_34_set.insert("UnderlyingStateOrProvinceOfIssue_t_95669779");
    Undly_34.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1015343834"); // 1
    Undly_34_set.insert("UnderlyingLocaleOfIssue_t_1015343834");
    Undly_34.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1091861621"); // 1
    Undly_34_set.insert("UnderlyingRedemptionDate_t_1091861621");
    Undly_34.add_attribute("StrkPx", "12212742.570000"); // 1
    Undly_34_set.insert("12212742.570000");
    Undly_34.add_attribute("StrkCcy", "CAN"); // 1
    Undly_34_set.insert("CAN");
    Undly_34.add_attribute("OptA", "2032119763"); // 1
    Undly_34_set.insert("2032119763");
    Undly_34.add_attribute("Mult", "391437.720000"); // 1
    Undly_34_set.insert("391437.720000");
    Undly_34.add_attribute("MultTyp", "1"); // 1
    Undly_34_set.insert("1");
    Undly_34.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_34_set.insert("3");
    Undly_34.add_attribute("UOM", "Bu"); // 1
    Undly_34_set.insert("Bu");
    Undly_34.add_attribute("UOMQty", "20505585.130000"); // 1
    Undly_34_set.insert("20505585.130000");
    Undly_34.add_attribute("PxUOM", "lbs"); // 1
    Undly_34_set.insert("lbs");
    Undly_34.add_attribute("PxUOMQty", "4134903.220000"); // 1
    Undly_34_set.insert("4134903.220000");
    Undly_34.add_attribute("TmUnit", "H"); // 1
    Undly_34_set.insert("H");
    Undly_34.add_attribute("ExerStyle", "0"); // 1
    Undly_34_set.insert("0");
    Undly_34.add_attribute("CpnRt", "9848695.180000"); // 1
    Undly_34_set.insert("9848695.180000");
    Undly_34.add_attribute("Exch", "UnderlyingSecurityExchange_t_2065898125"); // 1
    Undly_34_set.insert("UnderlyingSecurityExchange_t_2065898125");
    Undly_34.add_attribute("Issr", "UnderlyingIssuer_t_717485988"); // 1
    Undly_34_set.insert("UnderlyingIssuer_t_717485988");
    Undly_34.add_attribute("EncUndIssrLen", "1625094257"); // 1
    Undly_34_set.insert("1625094257");
    Undly_34.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1116063149"); // 1
    Undly_34_set.insert("EncodedUnderlyingIssuer_t_1116063149");
    Undly_34.add_attribute("Desc", "UnderlyingSecurityDesc_t_1016025814"); // 1
    Undly_34_set.insert("UnderlyingSecurityDesc_t_1016025814");
    Undly_34.add_attribute("EncUndSecDescLen", "789820434"); // 1
    Undly_34_set.insert("789820434");
    Undly_34.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2140314712"); // 1
    Undly_34_set.insert("EncodedUnderlyingSecurityDesc_t_2140314712");
    Undly_34.add_attribute("CPPgm", "UnderlyingCPProgram_t_1505888173"); // 1
    Undly_34_set.insert("UnderlyingCPProgram_t_1505888173");
    Undly_34.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2119653405"); // 1
    Undly_34_set.insert("UnderlyingCPRegType_t_2119653405");
    Undly_34.add_attribute("AllocPct", "18227196.930000"); // 1
    Undly_34_set.insert("18227196.930000");
    Undly_34.add_attribute("Ccy", "GBP"); // 1
    Undly_34_set.insert("GBP");
    Undly_34.add_attribute("Qty", "7162887.900000"); // 1
    Undly_34_set.insert("7162887.900000");
    Undly_34.add_attribute("SettlTyp", "2"); // 1
    Undly_34_set.insert("2");
    Undly_34.add_attribute("CashAmt", "UnderlyingCashAmount_t_1436282775"); // 1
    Undly_34_set.insert("UnderlyingCashAmount_t_1436282775");
    Undly_34.add_attribute("CashTyp", "FIXED"); // 1
    Undly_34_set.insert("FIXED");
    Undly_34.add_attribute("Px", "6274052.040000"); // 1
    Undly_34_set.insert("6274052.040000");
    Undly_34.add_attribute("DirtPx", "5100733.840000"); // 1
    Undly_34_set.insert("5100733.840000");
    Undly_34.add_attribute("EndPx", "3936400.230000"); // 1
    Undly_34_set.insert("3936400.230000");
    Undly_34.add_attribute("StartVal", "UnderlyingStartValue_t_459735915"); // 1
    Undly_34_set.insert("UnderlyingStartValue_t_459735915");
    Undly_34.add_attribute("CurVal", "UnderlyingCurrentValue_t_394709499"); // 1
    Undly_34_set.insert("UnderlyingCurrentValue_t_394709499");
    Undly_34.add_attribute("EndVal", "UnderlyingEndValue_t_432783795"); // 1
    Undly_34_set.insert("UnderlyingEndValue_t_432783795");
    Undly_34.add_attribute("AdjQty", "11090114.470000"); // 1
    Undly_34_set.insert("11090114.470000");
    Undly_34.add_attribute("FxRate", "19514064.770000"); // 1
    Undly_34_set.insert("19514064.770000");
    Undly_34.add_attribute("FxRateCalc", "D"); // 1
    Undly_34_set.insert("D");
    Undly_34.add_attribute("CapValu", "UnderlyingCapValue_t_1012086312"); // 1
    Undly_34_set.insert("UnderlyingCapValue_t_1012086312");
    Undly_34.add_attribute("SetMeth", "UnderlyingSettlMethod_t_736173754"); // 1
    Undly_34_set.insert("UnderlyingSettlMethod_t_736173754");
    Undly_34.add_attribute("PutCall", "1574925"); // 1
    Undly_34_set.insert("1574925");
    all_values.push_back(Undly_34_set);
    all_compo_names.insert("Undly_34_set");

    {
      xml_element UndAID_34{"UndAID"};
      multiset<string> UndAID_34_set;
      UndAID_34.add_attribute("AltID", "UnderlyingSecurityAltID_t_1548360570"); // 2
      UndAID_34_set.insert("UnderlyingSecurityAltID_t_1548360570");
      UndAID_34.add_attribute("AltIDSrc", "3"); // 2
      UndAID_34_set.insert("3");
      all_values.push_back(UndAID_34_set);
      all_compo_names.insert("UndAID_34_set");

      Undly_34.add_element(UndAID_34);
    }
    {
      xml_element Stip_55{"Stip"};
      multiset<string> Stip_55_set;
      Stip_55.add_attribute("Typ", "RATING"); // 2
      Stip_55_set.insert("RATING");
      Stip_55.add_attribute("Val", "UnderlyingStipValue_t_1466775047"); // 2
      Stip_55_set.insert("UnderlyingStipValue_t_1466775047");
      all_values.push_back(Stip_55_set);
      all_compo_names.insert("Stip_55_set");

      Undly_34.add_element(Stip_55);
    }
    {
      xml_element Pty_147{"Pty"};
      multiset<string> Pty_147_set;
      Pty_147.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1907012482"); // 2
      Pty_147_set.insert("UnderlyingInstrumentPartyID_t_1907012482");
      Pty_147.add_attribute("Src", "6"); // 2
      Pty_147_set.insert("6");
      Pty_147.add_attribute("R", "3"); // 2
      Pty_147_set.insert("3");
      all_values.push_back(Pty_147_set);
      all_compo_names.insert("Pty_147_set");

      {
        xml_element Sub_147{"Sub"};
        multiset<string> Sub_147_set;
        Sub_147.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_775554649"); // 3
        Sub_147_set.insert("UnderlyingInstrumentPartySubID_t_775554649");
        Sub_147.add_attribute("Typ", "30"); // 3
        Sub_147_set.insert("30");
        all_values.push_back(Sub_147_set);
        all_compo_names.insert("Sub_147_set");

        Pty_147.add_element(Sub_147);
      }
      Undly_34.add_element(Pty_147);
    }
    elt.add_element(Undly_34);
  } // end Undly
  { // Stip
    xml_element Stip_56{"Stip"};
    multiset<string> Stip_56_set;
    Stip_56.add_attribute("Typ", "WAC"); // 1
    Stip_56_set.insert("WAC");
    Stip_56.add_attribute("Val", "StipulationValue_t_1226045245"); // 1
    Stip_56_set.insert("StipulationValue_t_1226045245");
    all_values.push_back(Stip_56_set);
    all_compo_names.insert("Stip_56_set");

    elt.add_element(Stip_56);
  } // end Stip
  { // Stip
    xml_element Stip_57{"Stip"};
    multiset<string> Stip_57_set;
    Stip_57.add_attribute("Typ", "WHOLE"); // 1
    Stip_57_set.insert("WHOLE");
    Stip_57.add_attribute("Val", "StipulationValue_t_424418911"); // 1
    Stip_57_set.insert("StipulationValue_t_424418911");
    all_values.push_back(Stip_57_set);
    all_compo_names.insert("Stip_57_set");

    elt.add_element(Stip_57);
  } // end Stip
  { // Stip
    xml_element Stip_58{"Stip"};
    multiset<string> Stip_58_set;
    Stip_58.add_attribute("Typ", "PPL"); // 1
    Stip_58_set.insert("PPL");
    Stip_58.add_attribute("Val", "StipulationValue_t_819710448"); // 1
    Stip_58_set.insert("StipulationValue_t_819710448");
    all_values.push_back(Stip_58_set);
    all_compo_names.insert("Stip_58_set");

    elt.add_element(Stip_58);
  } // end Stip
  { // OrdQty
    xml_element OrdQty_8{"OrdQty"};
    multiset<string> OrdQty_8_set;
    OrdQty_8.add_attribute("Qty", "21074461.420000"); // 1
    OrdQty_8_set.insert("21074461.420000");
    OrdQty_8.add_attribute("Cash", "18554573.680000"); // 1
    OrdQty_8_set.insert("18554573.680000");
    OrdQty_8.add_attribute("Pct", "4038594.240000"); // 1
    OrdQty_8_set.insert("4038594.240000");
    OrdQty_8.add_attribute("RndDir", "2"); // 1
    OrdQty_8_set.insert("2");
    OrdQty_8.add_attribute("RndMod", "2180471.040000"); // 1
    OrdQty_8_set.insert("2180471.040000");
    all_values.push_back(OrdQty_8_set);
    all_compo_names.insert("OrdQty_8_set");

    elt.add_element(OrdQty_8);
  } // end OrdQty
  { // TrgrInstr
    xml_element TrgrInstr_1{"TrgrInstr"};
    multiset<string> TrgrInstr_1_set;
    TrgrInstr_1.add_attribute("TrgrTyp", "4"); // 1
    TrgrInstr_1_set.insert("4");
    TrgrInstr_1.add_attribute("TrgrActn", "1"); // 1
    TrgrInstr_1_set.insert("1");
    TrgrInstr_1.add_attribute("TrgrPx", "6127566.030000"); // 1
    TrgrInstr_1_set.insert("6127566.030000");
    TrgrInstr_1.add_attribute("TrgrSym", "TriggerSymbol_t_1230283243"); // 1
    TrgrInstr_1_set.insert("TriggerSymbol_t_1230283243");
    TrgrInstr_1.add_attribute("TrgrSecID", "TriggerSecurityID_t_8631413"); // 1
    TrgrInstr_1_set.insert("TriggerSecurityID_t_8631413");
    TrgrInstr_1.add_attribute("TrgrSecIDSrc", "6"); // 1
    TrgrInstr_1_set.insert("6");
    TrgrInstr_1.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_818367846"); // 1
    TrgrInstr_1_set.insert("TriggerSecurityDesc_t_818367846");
    TrgrInstr_1.add_attribute("TrgrPxTyp", "1"); // 1
    TrgrInstr_1_set.insert("1");
    TrgrInstr_1.add_attribute("TrgrPxTypScp", "3"); // 1
    TrgrInstr_1_set.insert("3");
    TrgrInstr_1.add_attribute("TrgrPxDir", "D"); // 1
    TrgrInstr_1_set.insert("D");
    TrgrInstr_1.add_attribute("TrgrNewPx", "4215946.480000"); // 1
    TrgrInstr_1_set.insert("4215946.480000");
    TrgrInstr_1.add_attribute("TrgrOrdTyp", "2"); // 1
    TrgrInstr_1_set.insert("2");
    TrgrInstr_1.add_attribute("TrgrNewQty", "18063872.150000"); // 1
    TrgrInstr_1_set.insert("18063872.150000");
    TrgrInstr_1.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_1888369696"); // 1
    TrgrInstr_1_set.insert("TriggerTradingSessionID_t_1888369696");
    TrgrInstr_1.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_2101908515"); // 1
    TrgrInstr_1_set.insert("TriggerTradingSessionSubID_t_2101908515");
    all_values.push_back(TrgrInstr_1_set);
    all_compo_names.insert("TrgrInstr_1_set");

    elt.add_element(TrgrInstr_1);
  } // end TrgrInstr
  { // PegInstr
    xml_element PegInstr_1{"PegInstr"};
    multiset<string> PegInstr_1_set;
    PegInstr_1.add_attribute("OfstVal", "1229586.200000"); // 1
    PegInstr_1_set.insert("1229586.200000");
    PegInstr_1.add_attribute("PegPxTyp", "7"); // 1
    PegInstr_1_set.insert("7");
    PegInstr_1.add_attribute("MoveTyp", "0"); // 1
    PegInstr_1_set.insert("0");
    PegInstr_1.add_attribute("OfstTyp", "3"); // 1
    PegInstr_1_set.insert("3");
    PegInstr_1.add_attribute("LmtTyp", "1"); // 1
    PegInstr_1_set.insert("1");
    PegInstr_1.add_attribute("RndDir", "1"); // 1
    PegInstr_1_set.insert("1");
    PegInstr_1.add_attribute("Scope", "1"); // 1
    PegInstr_1_set.insert("1");
    PegInstr_1.add_attribute("PegSecurityIDSource", "3"); // 1
    PegInstr_1_set.insert("3");
    PegInstr_1.add_attribute("PegSecID", "PegSecurityID_t_1288357602"); // 1
    PegInstr_1_set.insert("PegSecurityID_t_1288357602");
    PegInstr_1.add_attribute("PgSymbl", "PegSymbol_t_874570297"); // 1
    PegInstr_1_set.insert("PegSymbol_t_874570297");
    PegInstr_1.add_attribute("PegSecDesc", "PegSecurityDesc_t_1527558317"); // 1
    PegInstr_1_set.insert("PegSecurityDesc_t_1527558317");
    all_values.push_back(PegInstr_1_set);
    all_compo_names.insert("PegInstr_1_set");

    elt.add_element(PegInstr_1);
  } // end PegInstr
  { // DiscInstr
    xml_element DiscInstr_1{"DiscInstr"};
    multiset<string> DiscInstr_1_set;
    DiscInstr_1.add_attribute("DsctnInst", "0"); // 1
    DiscInstr_1_set.insert("0");
    DiscInstr_1.add_attribute("OfstValu", "5825440.170000"); // 1
    DiscInstr_1_set.insert("5825440.170000");
    DiscInstr_1.add_attribute("MoveTyp", "1"); // 1
    DiscInstr_1_set.insert("1");
    DiscInstr_1.add_attribute("OfstTyp", "3"); // 1
    DiscInstr_1_set.insert("3");
    DiscInstr_1.add_attribute("LimitTyp", "0"); // 1
    DiscInstr_1_set.insert("0");
    DiscInstr_1.add_attribute("RndDir", "2"); // 1
    DiscInstr_1_set.insert("2");
    DiscInstr_1.add_attribute("Scope", "2"); // 1
    DiscInstr_1_set.insert("2");
    all_values.push_back(DiscInstr_1_set);
    all_compo_names.insert("DiscInstr_1_set");

    elt.add_element(DiscInstr_1);
  } // end DiscInstr
  { // StrtPrmGrp
    xml_element StrtPrmGrp_2{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_2_set;
    StrtPrmGrp_2.add_attribute("StrtPrmNme", "StrategyParameterName_t_1811716784"); // 1
    StrtPrmGrp_2_set.insert("StrategyParameterName_t_1811716784");
    StrtPrmGrp_2.add_attribute("StrtPrmTyp", "29"); // 1
    StrtPrmGrp_2_set.insert("29");
    StrtPrmGrp_2.add_attribute("StrtPrmVal", "StrategyParameterValue_t_1830027158"); // 1
    StrtPrmGrp_2_set.insert("StrategyParameterValue_t_1830027158");
    all_values.push_back(StrtPrmGrp_2_set);
    all_compo_names.insert("StrtPrmGrp_2_set");

    elt.add_element(StrtPrmGrp_2);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_3{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_3_set;
    StrtPrmGrp_3.add_attribute("StrtPrmNme", "StrategyParameterName_t_482600982"); // 1
    StrtPrmGrp_3_set.insert("StrategyParameterName_t_482600982");
    StrtPrmGrp_3.add_attribute("StrtPrmTyp", "28"); // 1
    StrtPrmGrp_3_set.insert("28");
    StrtPrmGrp_3.add_attribute("StrtPrmVal", "StrategyParameterValue_t_835396697"); // 1
    StrtPrmGrp_3_set.insert("StrategyParameterValue_t_835396697");
    all_values.push_back(StrtPrmGrp_3_set);
    all_compo_names.insert("StrtPrmGrp_3_set");

    elt.add_element(StrtPrmGrp_3);
  } // end StrtPrmGrp
  { // FillsGrp
    xml_element FillsGrp_0{"FillsGrp"};
    multiset<string> FillsGrp_0_set;
    FillsGrp_0.add_attribute("FillExecID", "FillExecID_t_38767901"); // 1
    FillsGrp_0_set.insert("FillExecID_t_38767901");
    FillsGrp_0.add_attribute("FillPx", "10302927.300000"); // 1
    FillsGrp_0_set.insert("10302927.300000");
    FillsGrp_0.add_attribute("FillQty", "9614473.200000"); // 1
    FillsGrp_0_set.insert("9614473.200000");
    FillsGrp_0.add_attribute("LqdtyInd", "2"); // 1
    FillsGrp_0_set.insert("2");
    all_values.push_back(FillsGrp_0_set);
    all_compo_names.insert("FillsGrp_0_set");

    {
      xml_element Pty_148{"Pty"};
      multiset<string> Pty_148_set;
      Pty_148.add_attribute("ID", "Nested4PartyID_t_984717597"); // 2
      Pty_148_set.insert("Nested4PartyID_t_984717597");
      Pty_148.add_attribute("Src", "9"); // 2
      Pty_148_set.insert("9");
      Pty_148.add_attribute("R", "53"); // 2
      Pty_148_set.insert("53");
      all_values.push_back(Pty_148_set);
      all_compo_names.insert("Pty_148_set");

      {
        xml_element Sub_148{"Sub"};
        multiset<string> Sub_148_set;
        Sub_148.add_attribute("ID", "Nested4PartySubID_t_1714697114"); // 3
        Sub_148_set.insert("Nested4PartySubID_t_1714697114");
        Sub_148.add_attribute("Typ", "7"); // 3
        Sub_148_set.insert("7");
        all_values.push_back(Sub_148_set);
        all_compo_names.insert("Sub_148_set");

        Pty_148.add_element(Sub_148);
      }
      FillsGrp_0.add_element(Pty_148);
    }
    elt.add_element(FillsGrp_0);
  } // end FillsGrp
  { // Comm
    xml_element Comm_10{"Comm"};
    multiset<string> Comm_10_set;
    Comm_10.add_attribute("Comm", "Commission_t_560320756"); // 1
    Comm_10_set.insert("Commission_t_560320756");
    Comm_10.add_attribute("CommTyp", "5"); // 1
    Comm_10_set.insert("5");
    Comm_10.add_attribute("Ccy", "GBP"); // 1
    Comm_10_set.insert("GBP");
    Comm_10.add_attribute("FundRenewWaiv", "N"); // 1
    Comm_10_set.insert("N");
    all_values.push_back(Comm_10_set);
    all_compo_names.insert("Comm_10_set");

    elt.add_element(Comm_10);
  } // end Comm
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_10{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_10_set;
    SprdBnchmkCurve_10.add_attribute("Spread", "16437224.020000"); // 1
    SprdBnchmkCurve_10_set.insert("16437224.020000");
    SprdBnchmkCurve_10.add_attribute("Ccy", "CAN"); // 1
    SprdBnchmkCurve_10_set.insert("CAN");
    SprdBnchmkCurve_10.add_attribute("Name", "Treasury"); // 1
    SprdBnchmkCurve_10_set.insert("Treasury");
    SprdBnchmkCurve_10.add_attribute("Point", "BenchmarkCurvePoint_t_432177387"); // 1
    SprdBnchmkCurve_10_set.insert("BenchmarkCurvePoint_t_432177387");
    SprdBnchmkCurve_10.add_attribute("Px", "5085503.540000"); // 1
    SprdBnchmkCurve_10_set.insert("5085503.540000");
    SprdBnchmkCurve_10.add_attribute("PxTyp", "2"); // 1
    SprdBnchmkCurve_10_set.insert("2");
    SprdBnchmkCurve_10.add_attribute("SecID", "BenchmarkSecurityID_t_1013610928"); // 1
    SprdBnchmkCurve_10_set.insert("BenchmarkSecurityID_t_1013610928");
    SprdBnchmkCurve_10.add_attribute("SecIDSrc", "6"); // 1
    SprdBnchmkCurve_10_set.insert("6");
    all_values.push_back(SprdBnchmkCurve_10_set);
    all_compo_names.insert("SprdBnchmkCurve_10_set");

    elt.add_element(SprdBnchmkCurve_10);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_5{"Yield"};
    multiset<string> Yield_5_set;
    Yield_5.add_attribute("Typ", "AFTERTAX"); // 1
    Yield_5_set.insert("AFTERTAX");
    Yield_5.add_attribute("Yld", "6778440.640000"); // 1
    Yield_5_set.insert("6778440.640000");
    Yield_5.add_attribute("CalcDt", "YieldCalcDate_t_1987797289"); // 1
    Yield_5_set.insert("YieldCalcDate_t_1987797289");
    Yield_5.add_attribute("RedDt", "YieldRedemptionDate_t_1975265128"); // 1
    Yield_5_set.insert("YieldRedemptionDate_t_1975265128");
    Yield_5.add_attribute("RedPx", "11604450.460000"); // 1
    Yield_5_set.insert("11604450.460000");
    Yield_5.add_attribute("RedPxTyp", "11"); // 1
    Yield_5_set.insert("11");
    all_values.push_back(Yield_5_set);
    all_compo_names.insert("Yield_5_set");

    elt.add_element(Yield_5);
  } // end Yield
  { // RtSrc
    xml_element RtSrc_4{"RtSrc"};
    multiset<string> RtSrc_4_set;
    RtSrc_4.add_attribute("RtSrc", "99"); // 1
    RtSrc_4_set.insert("99");
    RtSrc_4.add_attribute("RtSrcTyp", "1"); // 1
    RtSrc_4_set.insert("1");
    RtSrc_4.add_attribute("RefPg", "ReferencePage_t_1693470907"); // 1
    RtSrc_4_set.insert("ReferencePage_t_1693470907");
    all_values.push_back(RtSrc_4_set);
    all_compo_names.insert("RtSrc_4_set");

    elt.add_element(RtSrc_4);
  } // end RtSrc
  { // RtSrc
    xml_element RtSrc_5{"RtSrc"};
    multiset<string> RtSrc_5_set;
    RtSrc_5.add_attribute("RtSrc", "0"); // 1
    RtSrc_5_set.insert("0");
    RtSrc_5.add_attribute("RtSrcTyp", "0"); // 1
    RtSrc_5_set.insert("0");
    RtSrc_5.add_attribute("RefPg", "ReferencePage_t_530704856"); // 1
    RtSrc_5_set.insert("ReferencePage_t_530704856");
    all_values.push_back(RtSrc_5_set);
    all_compo_names.insert("RtSrc_5_set");

    elt.add_element(RtSrc_5);
  } // end RtSrc
  { // DsplyInstr
    xml_element DsplyInstr_1{"DsplyInstr"};
    multiset<string> DsplyInstr_1_set;
    DsplyInstr_1.add_attribute("DisplayQty", "2138747.640000"); // 1
    DsplyInstr_1_set.insert("2138747.640000");
    DsplyInstr_1.add_attribute("SecDspQty", "13792869.380000"); // 1
    DsplyInstr_1_set.insert("13792869.380000");
    DsplyInstr_1.add_attribute("DspWhn", "1"); // 1
    DsplyInstr_1_set.insert("1");
    DsplyInstr_1.add_attribute("DspMthd", "1"); // 1
    DsplyInstr_1_set.insert("1");
    DsplyInstr_1.add_attribute("DsplLwQty", "19396076.940000"); // 1
    DsplyInstr_1_set.insert("19396076.940000");
    DsplyInstr_1.add_attribute("DisplayHighQty", "5290704.790000"); // 1
    DsplyInstr_1_set.insert("5290704.790000");
    DsplyInstr_1.add_attribute("DspMinIncr", "12967832.690000"); // 1
    DsplyInstr_1_set.insert("12967832.690000");
    DsplyInstr_1.add_attribute("RfrshQty", "10602926.700000"); // 1
    DsplyInstr_1_set.insert("10602926.700000");
    all_values.push_back(DsplyInstr_1_set);
    all_compo_names.insert("DsplyInstr_1_set");

    elt.add_element(DsplyInstr_1);
  } // end DsplyInstr
  { // ContAmt
    xml_element ContAmt_0{"ContAmt"};
    multiset<string> ContAmt_0_set;
    ContAmt_0.add_attribute("ContAmtTyp", "8"); // 1
    ContAmt_0_set.insert("8");
    ContAmt_0.add_attribute("ContAmtValu", "17085359.640000"); // 1
    ContAmt_0_set.insert("17085359.640000");
    ContAmt_0.add_attribute("ContAmtCurr", "USD"); // 1
    ContAmt_0_set.insert("USD");
    all_values.push_back(ContAmt_0_set);
    all_compo_names.insert("ContAmt_0_set");

    elt.add_element(ContAmt_0);
  } // end ContAmt
  { // Exec
    xml_element Exec_0{"Exec"};
    multiset<string> Exec_0_set;
    Exec_0.add_attribute("Qty", "14299931.500000"); // 1
    Exec_0_set.insert("14299931.500000");
    Exec_0.add_attribute("OrdQty", "17511786.870000"); // 1
    Exec_0_set.insert("17511786.870000");
    Exec_0.add_attribute("SwapTyp", "5"); // 1
    Exec_0_set.insert("5");
    Exec_0.add_attribute("LegAllocID", "LegAllocID_t_526367617"); // 1
    Exec_0_set.insert("LegAllocID_t_526367617");
    Exec_0.add_attribute("PosEfct", "D"); // 1
    Exec_0_set.insert("D");
    Exec_0.add_attribute("Cover", "1"); // 1
    Exec_0_set.insert("1");
    Exec_0.add_attribute("RefID", "LegRefID_t_366681259"); // 1
    Exec_0_set.insert("LegRefID_t_366681259");
    Exec_0.add_attribute("SettlTyp", "1"); // 1
    Exec_0_set.insert("1");
    Exec_0.add_attribute("SettlDt", "LegSettlDate_t_697646093"); // 1
    Exec_0_set.insert("LegSettlDate_t_697646093");
    Exec_0.add_attribute("LastPx", "19716518.010000"); // 1
    Exec_0_set.insert("19716518.010000");
    Exec_0.add_attribute("SettlCcy", "JPY"); // 1
    Exec_0_set.insert("JPY");
    Exec_0.add_attribute("LegLastFwdPnts", "14679065.960000"); // 1
    Exec_0_set.insert("14679065.960000");
    Exec_0.add_attribute("LegCalcCcyLastQty", "19333635.730000"); // 1
    Exec_0_set.insert("19333635.730000");
    Exec_0.add_attribute("LegGrossTrdAmt", "LegGrossTradeAmt_t_142620068"); // 1
    Exec_0_set.insert("LegGrossTradeAmt_t_142620068");
    Exec_0.add_attribute("LegVolatility", "7438153.400000"); // 1
    Exec_0_set.insert("7438153.400000");
    Exec_0.add_attribute("LegDividendYield", "3165847.820000"); // 1
    Exec_0_set.insert("3165847.820000");
    Exec_0.add_attribute("LegCurrencyRatio", "3564948.330000"); // 1
    Exec_0_set.insert("3564948.330000");
    Exec_0.add_attribute("LegExecInst", "Y"); // 1
    Exec_0_set.insert("Y");
    Exec_0.add_attribute("LastQty", "4145031.040000"); // 1
    Exec_0_set.insert("4145031.040000");
    all_values.push_back(Exec_0_set);
    all_compo_names.insert("Exec_0_set");

    {
      xml_element Leg_37{"Leg"};
      multiset<string> Leg_37_set;
      Leg_37.add_attribute("Sym", "LegSymbol_t_884125997"); // 2
      Leg_37_set.insert("LegSymbol_t_884125997");
      Leg_37.add_attribute("Sfx", "CD"); // 2
      Leg_37_set.insert("CD");
      Leg_37.add_attribute("ID", "LegSecurityID_t_943573583"); // 2
      Leg_37_set.insert("LegSecurityID_t_943573583");
      Leg_37.add_attribute("Src", "7"); // 2
      Leg_37_set.insert("7");
      Leg_37.add_attribute("Prod", "5"); // 2
      Leg_37_set.insert("5");
      Leg_37.add_attribute("CFI", "LegCFICode_t_1044670173"); // 2
      Leg_37_set.insert("LegCFICode_t_1044670173");
      Leg_37.add_attribute("SecTyp", "SPCLT"); // 2
      Leg_37_set.insert("SPCLT");
      Leg_37.add_attribute("SecSubTyp", "LegSecuritySubType_t_389087662"); // 2
      Leg_37_set.insert("LegSecuritySubType_t_389087662");
      Leg_37.add_attribute("MMY", "1966112969"); // 2
      Leg_37_set.insert("1966112969");
      Leg_37.add_attribute("Mat", "LegMaturityDate_t_1698252436"); // 2
      Leg_37_set.insert("LegMaturityDate_t_1698252436");
      Leg_37.add_attribute("MatTm", "382317365"); // 2
      Leg_37_set.insert("382317365");
      Leg_37.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1248622472"); // 2
      Leg_37_set.insert("LegCouponPaymentDate_t_1248622472");
      Leg_37.add_attribute("Issued", "LegIssueDate_t_1301947475"); // 2
      Leg_37_set.insert("LegIssueDate_t_1301947475");
      Leg_37.add_attribute("RepoCollSecTyp", "1389157996"); // 2
      Leg_37_set.insert("1389157996");
      Leg_37.add_attribute("RepoTrm", "1774990089"); // 2
      Leg_37_set.insert("1774990089");
      Leg_37.add_attribute("RepoRt", "10508804.850000"); // 2
      Leg_37_set.insert("10508804.850000");
      Leg_37.add_attribute("Fctr", "9263590.430000"); // 2
      Leg_37_set.insert("9263590.430000");
      Leg_37.add_attribute("CrdRtg", "LegCreditRating_t_2141671348"); // 2
      Leg_37_set.insert("LegCreditRating_t_2141671348");
      Leg_37.add_attribute("Rgstry", "LegInstrRegistry_t_627594974"); // 2
      Leg_37_set.insert("LegInstrRegistry_t_627594974");
      Leg_37.add_attribute("Ctry", "1624005136"); // 2
      Leg_37_set.insert("1624005136");
      Leg_37.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1965839501"); // 2
      Leg_37_set.insert("LegStateOrProvinceOfIssue_t_1965839501");
      Leg_37.add_attribute("Lcl", "LegLocaleOfIssue_t_867487641"); // 2
      Leg_37_set.insert("LegLocaleOfIssue_t_867487641");
      Leg_37.add_attribute("Redeem", "LegRedemptionDate_t_489672733"); // 2
      Leg_37_set.insert("LegRedemptionDate_t_489672733");
      Leg_37.add_attribute("Strk", "12862624.490000"); // 2
      Leg_37_set.insert("12862624.490000");
      Leg_37.add_attribute("StrkCcy", "CHF"); // 2
      Leg_37_set.insert("CHF");
      Leg_37.add_attribute("OptA", "2030077789"); // 2
      Leg_37_set.insert("2030077789");
      Leg_37.add_attribute("Cmult", "9699523.480000"); // 2
      Leg_37_set.insert("9699523.480000");
      Leg_37.add_attribute("MultTyp", "0"); // 2
      Leg_37_set.insert("0");
      Leg_37.add_attribute("FlowSchedTyp", "4"); // 2
      Leg_37_set.insert("4");
      Leg_37.add_attribute("UOM", "t"); // 2
      Leg_37_set.insert("t");
      Leg_37.add_attribute("UOMQty", "18729136.320000"); // 2
      Leg_37_set.insert("18729136.320000");
      Leg_37.add_attribute("PxUOM", "Alw"); // 2
      Leg_37_set.insert("Alw");
      Leg_37.add_attribute("PxUOMQty", "1805453.880000"); // 2
      Leg_37_set.insert("1805453.880000");
      Leg_37.add_attribute("TmUnit", "Wk"); // 2
      Leg_37_set.insert("Wk");
      Leg_37.add_attribute("ExerStyle", "2"); // 2
      Leg_37_set.insert("2");
      Leg_37.add_attribute("CpnRt", "12252155.610000"); // 2
      Leg_37_set.insert("12252155.610000");
      Leg_37.add_attribute("Exch", "LegSecurityExchange_t_585303244"); // 2
      Leg_37_set.insert("LegSecurityExchange_t_585303244");
      Leg_37.add_attribute("Issr", "LegIssuer_t_843078456"); // 2
      Leg_37_set.insert("LegIssuer_t_843078456");
      Leg_37.add_attribute("EncLegIssrLen", "1043844883"); // 2
      Leg_37_set.insert("1043844883");
      Leg_37.add_attribute("EncLegIssr", "EncodedLegIssuer_t_136072032"); // 2
      Leg_37_set.insert("EncodedLegIssuer_t_136072032");
      Leg_37.add_attribute("Desc", "LegSecurityDesc_t_1225395822"); // 2
      Leg_37_set.insert("LegSecurityDesc_t_1225395822");
      Leg_37.add_attribute("EncLegSecDescLen", "144983707"); // 2
      Leg_37_set.insert("144983707");
      Leg_37.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1438019507"); // 2
      Leg_37_set.insert("EncodedLegSecurityDesc_t_1438019507");
      Leg_37.add_attribute("RatioQty", "4670701.700000"); // 2
      Leg_37_set.insert("4670701.700000");
      Leg_37.add_attribute("Side", "5"); // 2
      Leg_37_set.insert("5");
      Leg_37.add_attribute("Ccy", "GBP"); // 2
      Leg_37_set.insert("GBP");
      Leg_37.add_attribute("Pool", "LegPool_t_1914161497"); // 2
      Leg_37_set.insert("LegPool_t_1914161497");
      Leg_37.add_attribute("Dated", "LegDatedDate_t_969011319"); // 2
      Leg_37_set.insert("LegDatedDate_t_969011319");
      Leg_37.add_attribute("CSetMo", "869950702"); // 2
      Leg_37_set.insert("869950702");
      Leg_37.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1732517350"); // 2
      Leg_37_set.insert("LegInterestAccrualDate_t_1732517350");
      Leg_37.add_attribute("PutCall", "1836498960"); // 2
      Leg_37_set.insert("1836498960");
      Leg_37.add_attribute("LegOptionRatio", "13596234.350000"); // 2
      Leg_37_set.insert("13596234.350000");
      Leg_37.add_attribute("Px", "8712961.520000"); // 2
      Leg_37_set.insert("8712961.520000");
      all_values.push_back(Leg_37_set);
      all_compo_names.insert("Leg_37_set");

      {
        xml_element LegAID_37{"LegAID"};
        multiset<string> LegAID_37_set;
        LegAID_37.add_attribute("SecAltID", "LegSecurityAltID_t_342382878"); // 3
        LegAID_37_set.insert("LegSecurityAltID_t_342382878");
        LegAID_37.add_attribute("SecAltIDSrc", "4"); // 3
        LegAID_37_set.insert("4");
        all_values.push_back(LegAID_37_set);
        all_compo_names.insert("LegAID_37_set");

        Leg_37.add_element(LegAID_37);
      }
      Exec_0.add_element(Leg_37);
    }
    {
      xml_element Stip_59{"Stip"};
      multiset<string> Stip_59_set;
      Stip_59.add_attribute("StipTyp", "TRDVAR"); // 2
      Stip_59_set.insert("TRDVAR");
      Stip_59.add_attribute("StipVal", "LegStipulationValue_t_1312335227"); // 2
      Stip_59_set.insert("LegStipulationValue_t_1312335227");
      all_values.push_back(Stip_59_set);
      all_compo_names.insert("Stip_59_set");

      Exec_0.add_element(Stip_59);
    }
    {
      xml_element PreAll_4{"PreAll"};
      multiset<string> PreAll_4_set;
      PreAll_4.add_attribute("AllocAcct", "LegAllocAccount_t_833220223"); // 2
      PreAll_4_set.insert("LegAllocAccount_t_833220223");
      PreAll_4.add_attribute("IndAllocID", "LegIndividualAllocID_t_612103065"); // 2
      PreAll_4_set.insert("LegIndividualAllocID_t_612103065");
      PreAll_4.add_attribute("AllocQty", "5493070.320000"); // 2
      PreAll_4_set.insert("5493070.320000");
      PreAll_4.add_attribute("AllocAcctIDSrc", "LegAllocAcctIDSource_t_558650207"); // 2
      PreAll_4_set.insert("LegAllocAcctIDSource_t_558650207");
      PreAll_4.add_attribute("AllocSettlCcy", "USD"); // 2
      PreAll_4_set.insert("USD");
      all_values.push_back(PreAll_4_set);
      all_compo_names.insert("PreAll_4_set");

      {
        xml_element Pty_149{"Pty"};
        multiset<string> Pty_149_set;
        Pty_149.add_attribute("ID", "Nested2PartyID_t_317505810"); // 3
        Pty_149_set.insert("Nested2PartyID_t_317505810");
        Pty_149.add_attribute("Src", "D"); // 3
        Pty_149_set.insert("D");
        Pty_149.add_attribute("R", "72"); // 3
        Pty_149_set.insert("72");
        all_values.push_back(Pty_149_set);
        all_compo_names.insert("Pty_149_set");

        {
          xml_element Sub_149{"Sub"};
          multiset<string> Sub_149_set;
          Sub_149.add_attribute("ID", "Nested2PartySubID_t_902809054"); // 4
          Sub_149_set.insert("Nested2PartySubID_t_902809054");
          Sub_149.add_attribute("Typ", "13"); // 4
          Sub_149_set.insert("13");
          all_values.push_back(Sub_149_set);
          all_compo_names.insert("Sub_149_set");

          Pty_149.add_element(Sub_149);
        }
        PreAll_4.add_element(Pty_149);
      }
      Exec_0.add_element(PreAll_4);
    }
    {
      xml_element Pty_150{"Pty"};
      multiset<string> Pty_150_set;
      Pty_150.add_attribute("ID", "Nested3PartyID_t_851429217"); // 2
      Pty_150_set.insert("Nested3PartyID_t_851429217");
      Pty_150.add_attribute("Src", "H"); // 2
      Pty_150_set.insert("H");
      Pty_150.add_attribute("R", "44"); // 2
      Pty_150_set.insert("44");
      all_values.push_back(Pty_150_set);
      all_compo_names.insert("Pty_150_set");

      {
        xml_element Sub_150{"Sub"};
        multiset<string> Sub_150_set;
        Sub_150.add_attribute("ID", "Nested3PartySubID_t_996412924"); // 3
        Sub_150_set.insert("Nested3PartySubID_t_996412924");
        Sub_150.add_attribute("Typ", "6"); // 3
        Sub_150_set.insert("6");
        all_values.push_back(Sub_150_set);
        all_compo_names.insert("Sub_150_set");

        Pty_150.add_element(Sub_150);
      }
      Exec_0.add_element(Pty_150);
    }
    elt.add_element(Exec_0);
  } // end Exec
  { // MiscFees
    xml_element MiscFees_12{"MiscFees"};
    multiset<string> MiscFees_12_set;
    MiscFees_12.add_attribute("Amt", "MiscFeeAmt_t_768903072"); // 1
    MiscFees_12_set.insert("MiscFeeAmt_t_768903072");
    MiscFees_12.add_attribute("Curr", "EUR"); // 1
    MiscFees_12_set.insert("EUR");
    MiscFees_12.add_attribute("Typ", "10"); // 1
    MiscFees_12_set.insert("10");
    MiscFees_12.add_attribute("Basis", "2"); // 1
    MiscFees_12_set.insert("2");
    all_values.push_back(MiscFees_12_set);
    all_compo_names.insert("MiscFees_12_set");

    elt.add_element(MiscFees_12);
  } // end MiscFees
  { // MiscFees
    xml_element MiscFees_13{"MiscFees"};
    multiset<string> MiscFees_13_set;
    MiscFees_13.add_attribute("Amt", "MiscFeeAmt_t_1196006376"); // 1
    MiscFees_13_set.insert("MiscFeeAmt_t_1196006376");
    MiscFees_13.add_attribute("Curr", "CHF"); // 1
    MiscFees_13_set.insert("CHF");
    MiscFees_13.add_attribute("Typ", "3"); // 1
    MiscFees_13_set.insert("3");
    MiscFees_13.add_attribute("Basis", "1"); // 1
    MiscFees_13_set.insert("1");
    all_values.push_back(MiscFees_13_set);
    all_compo_names.insert("MiscFees_13_set");

    elt.add_element(MiscFees_13);
  } // end MiscFees
  { // TrdRegTS
    xml_element TrdRegTS_9{"TrdRegTS"};
    multiset<string> TrdRegTS_9_set;
    TrdRegTS_9.add_attribute("TS", "TrdRegTimestamp_t_252578752"); // 1
    TrdRegTS_9_set.insert("TrdRegTimestamp_t_252578752");
    TrdRegTS_9.add_attribute("Typ", "6"); // 1
    TrdRegTS_9_set.insert("6");
    TrdRegTS_9.add_attribute("Src", "TrdRegTimestampOrigin_t_836094378"); // 1
    TrdRegTS_9_set.insert("TrdRegTimestampOrigin_t_836094378");
    TrdRegTS_9.add_attribute("DskTyp", "S"); // 1
    TrdRegTS_9_set.insert("S");
    TrdRegTS_9.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_9_set.insert("1");
    TrdRegTS_9.add_attribute("DskOrdHndlInst", "RSV"); // 1
    TrdRegTS_9_set.insert("RSV");
    all_values.push_back(TrdRegTS_9_set);
    all_compo_names.insert("TrdRegTS_9_set");

    elt.add_element(TrdRegTS_9);
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
