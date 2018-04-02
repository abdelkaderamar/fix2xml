#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  ASSERT_TRUE(converter.init());

  xml_element elt {"ExecRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ExecutionReport_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_854432789");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_1290644041");
  elt.add_attribute("ID2", "SecondaryClOrdID_t_1328109159");
  elt.add_attribute("ExecID2", "SecondaryExecID_t_2047300462");
  elt.add_attribute("ID", "ClOrdID_t_1657998304");
  elt.add_attribute("OrigID", "OrigClOrdID_t_597559303");
  elt.add_attribute("LnkID", "ClOrdLinkID_t_1374850455");
  elt.add_attribute("RspID", "QuoteRespID_t_1982505508");
  elt.add_attribute("StatReqID", "OrdStatusReqID_t_1719396963");
  elt.add_attribute("MassStatReqID", "MassStatusReqID_t_2122718798");
  elt.add_attribute("HstCxID", "HostCrossID_t_673592263");
  elt.add_attribute("TotNumRpts", "1731240554");
  elt.add_attribute("LastRptReqed", "Y");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_1713424296");
  elt.add_attribute("ListID", "ListID_t_1113595894");
  elt.add_attribute("CrssID", "CrossID_t_611356626");
  elt.add_attribute("OrigCrssID", "OrigCrossID_t_808413529");
  elt.add_attribute("CrssTyp", "1");
  elt.add_attribute("MtchID", "TrdMatchID_t_2062164219");
  elt.add_attribute("ExecID", "ExecID_t_1216884681");
  elt.add_attribute("ExecRefID", "ExecRefID_t_1612088339");
  elt.add_attribute("ExecTyp", "J");
  elt.add_attribute("Stat", "D");
  elt.add_attribute("WorkingInd", "N");
  elt.add_attribute("RejRsn", "8");
  elt.add_attribute("ExecRstmtRsn", "0");
  elt.add_attribute("Acct", "Account_t_338340426");
  elt.add_attribute("AcctIDSrc", "4");
  elt.add_attribute("AcctTyp", "1");
  elt.add_attribute("DayBkngInst", "2");
  elt.add_attribute("BkngUnit", "0");
  elt.add_attribute("PreallocMeth", "1");
  elt.add_attribute("AllocID", "AllocID_t_1225492129");
  elt.add_attribute("SettlTyp", "C");
  elt.add_attribute("SettlDt", "SettlDate_t_1441838534");
  elt.add_attribute("MtchTyp", "M5");
  elt.add_attribute("OrdCat", "1");
  elt.add_attribute("CshMgn", "1");
  elt.add_attribute("ClrFeeInd", "B");
  elt.add_attribute("Side", "A");
  elt.add_attribute("QtyTyp", "0");
  elt.add_attribute("LotTyp", "2");
  elt.add_attribute("Typ", "K");
  elt.add_attribute("PxTyp", "2");
  elt.add_attribute("Px", "8105615.570000");
  elt.add_attribute("PxPrtScp", "1");
  elt.add_attribute("StopPx", "5074642.630000");
  elt.add_attribute("PeggedPx", "16189750.860000");
  elt.add_attribute("PggdRefPx", "6179047.330000");
  elt.add_attribute("DsctnPx", "4221448.340000");
  elt.add_attribute("TgtStrategy", "2");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_82509425");
  elt.add_attribute("ParticipationRt", "12933204.710000");
  elt.add_attribute("TgtStrategyPerformance", "6824021.180000");
  elt.add_attribute("Ccy", "GBP");
  elt.add_attribute("ComplianceID", "ComplianceID_t_1481356001");
  elt.add_attribute("SolFlag", "Y");
  elt.add_attribute("TmInForce", "7");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_21461283");
  elt.add_attribute("ExpireDt", "ExpireDate_t_611512103");
  elt.add_attribute("ExpireTm", "ExpireTime_t_1079360989");
  elt.add_attribute("ExecInst", "e");
  elt.add_attribute("AgrsrInd", "N");
  elt.add_attribute("Cpcty", "W");
  elt.add_attribute("Rstctions", "A");
  elt.add_attribute("PrTrdAnon", "true");
  elt.add_attribute("CustCpcty", "2");
  elt.add_attribute("LastQty", "15270432.300000");
  elt.add_attribute("CalcCcyLastQty", "9965560.160000");
  elt.add_attribute("LastSwapPnts", "5676833.060000");
  elt.add_attribute("UndLastQty", "240000.740000");
  elt.add_attribute("LastPx", "936932.780000");
  elt.add_attribute("UndLastPx", "13263320.610000");
  elt.add_attribute("LastParPx", "20675913.590000");
  elt.add_attribute("LastSpotRt", "9042548.350000");
  elt.add_attribute("LastFwdPnts", "10510930.620000");
  elt.add_attribute("LastMkt", "LastMkt_t_427571974");
  elt.add_attribute("SesID", "1");
  elt.add_attribute("SesSub", "5");
  elt.add_attribute("TmBkt", "TimeBracket_t_849716808");
  elt.add_attribute("LastCpcty", "2");
  elt.add_attribute("LeavesQty", "17515072.210000");
  elt.add_attribute("CumQty", "21430372.790000");
  elt.add_attribute("AvgPx", "17465245.120000");
  elt.add_attribute("DayOrdQty", "20898308.100000");
  elt.add_attribute("DayCumQty", "13144105.730000");
  elt.add_attribute("DayAvgPx", "10803968.650000");
  elt.add_attribute("TotNoFills", "619011177");
  elt.add_attribute("LastFragment", "Y");
  elt.add_attribute("GTBkngInst", "2");
  elt.add_attribute("TrdDt", "TradeDate_t_1230523280");
  elt.add_attribute("TxnTm", "TransactTime_t_1648338832");
  elt.add_attribute("RptToExch", "N");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_920043865");
  elt.add_attribute("NumDaysInt", "1585635403");
  elt.add_attribute("ExDt", "ExDate_t_1375695393");
  elt.add_attribute("AcrdIntRt", "13455712.360000");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_978426861");
  elt.add_attribute("IntAtMat", "InterestAtMaturity_t_755254975");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_194643604");
  elt.add_attribute("StartCsh", "StartCash_t_1546110167");
  elt.add_attribute("EndCsh", "EndCash_t_779255049");
  elt.add_attribute("TrddFlatSwitch", "N");
  elt.add_attribute("BasisFeatureDt", "BasisFeatureDate_t_724958581");
  elt.add_attribute("BasisFeaturePx", "6993627.600000");
  elt.add_attribute("Concession", "Concession_t_1192591718");
  elt.add_attribute("TotTakedown", "TotalTakedown_t_1776051643");
  elt.add_attribute("NetMny", "NetMoney_t_1126934734");
  elt.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1568337992");
  elt.add_attribute("SettlCcy", "JPY");
  elt.add_attribute("SettlCurrFxRt", "4849767.370000");
  elt.add_attribute("SettlCurrFxRtCalc", "M");
  elt.add_attribute("HandlInst", "3");
  elt.add_attribute("MinQty", "840176.010000");
  elt.add_attribute("MtchInc", "8439365.260000");
  elt.add_attribute("MxPxLvls", "1139132099");
  elt.add_attribute("MaxFloor", "11644144.670000");
  elt.add_attribute("PosEfct", "F");
  elt.add_attribute("MaxShow", "17081099.420000");
  elt.add_attribute("BkngTyp", "2");
  elt.add_attribute("Txt", "Text_t_545987336");
  elt.add_attribute("EncTxtLen", "1208965126");
  elt.add_attribute("EncTxt", "EncodedText_t_636646472");
  elt.add_attribute("SettlDt2", "SettlDate2_t_1466031201");
  elt.add_attribute("Qty2", "6471168.820000");
  elt.add_attribute("LastFwdPnts2", "20123418.650000");
  elt.add_attribute("MLegRptTyp", "3");
  elt.add_attribute("CxllationRights", "Y");
  elt.add_attribute("MnyLaunderingStat", "3");
  elt.add_attribute("RegistID", "RegistID_t_858762394");
  elt.add_attribute("Designation", "Designation_t_1024170262");
  elt.add_attribute("TransBkdTm", "TransBkdTime_t_1399368242");
  elt.add_attribute("ExecValuationPoint", "ExecValuationPoint_t_1147099276");
  elt.add_attribute("ExecPxTyp", "E");
  elt.add_attribute("ExecPxAdjment", "20987310.020000");
  elt.add_attribute("PriInd", "0");
  elt.add_attribute("PxImprvmnt", "13776968.390000");
  elt.add_attribute("LastLqdtyInd", "2");
  elt.add_attribute("CopyMsgInd", "true");
  elt.add_attribute("DividendYield", "5277789.820000");
  elt.add_attribute("ManOrdInd", "false");
  elt.add_attribute("CustDrctdOrd", "true");
  elt.add_attribute("RcvdDptID", "ReceivedDeptID_t_1429368347");
  elt.add_attribute("CustOrdHdlInst", "MOC");
  elt.add_attribute("OrdHndlInstSrc", "1");
  elt.add_attribute("Vol", "1258212.250000");
  elt.add_attribute("TmToExp", "18712036.090000");
  elt.add_attribute("RFR", "13464704.960000");
  elt.add_attribute("PxDelta", "15887689.290000");
  all_values.push_back(ExecutionReport_message_t_0);
  all_compo_names.insert("ExecutionReport_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
