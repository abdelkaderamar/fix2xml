#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdCaptRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReport_message_t_0;
  elt.add_attribute("RptID", "TradeReportID_t_1601599153");
  elt.add_attribute("TrdID", "TradeID_t_770718378");
  elt.add_attribute("TrdID2", "SecondaryTradeID_t_1762514380");
  elt.add_attribute("FirmTrdID", "FirmTradeID_t_1395351271");
  elt.add_attribute("FirmTrdID2", "SecondaryFirmTradeID_t_1130639763");
  elt.add_attribute("TransTyp", "4");
  elt.add_attribute("RptTyp", "6");
  elt.add_attribute("TrdRptStat", "0");
  elt.add_attribute("ReqID", "TradeRequestID_t_698157759");
  elt.add_attribute("TrdTyp", "15");
  elt.add_attribute("TrdSubTyp", "28");
  elt.add_attribute("TrdTyp2", "35");
  elt.add_attribute("TrdHandlInst", "5");
  elt.add_attribute("OrigTrdHandlInst", "3");
  elt.add_attribute("OrigTrdDt", "OrigTradeDate_t_1753601541");
  elt.add_attribute("OrigTrdID", "OrigTradeID_t_352714739");
  elt.add_attribute("OrignTrdID2", "OrigSecondaryTradeID_t_1935479318");
  elt.add_attribute("TrnsfrRsn", "TransferReason_t_1055941712");
  elt.add_attribute("ExecTyp", "E");
  elt.add_attribute("TotNumTrdRpts", "963274005");
  elt.add_attribute("LastRptReqed", "N");
  elt.add_attribute("Unsol", "N");
  elt.add_attribute("SubReqTyp", "1");
  elt.add_attribute("RptRefID", "TradeReportRefID_t_1868854962");
  elt.add_attribute("RptRefID2", "SecondaryTradeReportRefID_t_642116215");
  elt.add_attribute("RptID2", "SecondaryTradeReportID_t_543292299");
  elt.add_attribute("LinkID", "TradeLinkID_t_545860333");
  elt.add_attribute("MtchID", "TrdMatchID_t_469456609");
  elt.add_attribute("ExecID", "ExecID_t_1940401807");
  elt.add_attribute("ExecID2", "SecondaryExecID_t_369649641");
  elt.add_attribute("ExecRstmtRsn", "8");
  elt.add_attribute("PrevlyRpted", "N");
  elt.add_attribute("PxTyp", "18");
  elt.add_attribute("AsOfInd", "0");
  elt.add_attribute("SetSesID", "ITD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_123524135");
  elt.add_attribute("VenuTyp", "X");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1949711454");
  elt.add_attribute("MktID", "MarketID_t_548429270");
  elt.add_attribute("QtyTyp", "2");
  elt.add_attribute("UndSesID", "UnderlyingTradingSessionID_t_558126261");
  elt.add_attribute("UndSesSub", "UnderlyingTradingSessionSubID_t_72195833");
  elt.add_attribute("LastQty", "14379041.660000");
  elt.add_attribute("LastPx", "7871838.630000");
  elt.add_attribute("CalcCcyLastQty", "14524143.980000");
  elt.add_attribute("Ccy", "GBP");
  elt.add_attribute("SettlCcy", "USD");
  elt.add_attribute("LastParPx", "9274688.060000");
  elt.add_attribute("LastSpotRt", "562004.250000");
  elt.add_attribute("LastFwdPnts", "3407855.940000");
  elt.add_attribute("LastSwapPnts", "4597984.560000");
  elt.add_attribute("LastMkt", "LastMkt_t_1264073635");
  elt.add_attribute("TrdDt", "TradeDate_t_62156908");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1101914672");
  elt.add_attribute("AvgPx", "18073659.340000");
  elt.add_attribute("AvgPxInd", "2");
  elt.add_attribute("MLegRptTyp", "1");
  elt.add_attribute("TrdLegRefID", "TradeLegRefID_t_1600284093");
  elt.add_attribute("TxnTm", "TransactTime_t_977666882");
  elt.add_attribute("SettlTyp", "B");
  elt.add_attribute("SettlDt", "SettlDate_t_847317757");
  elt.add_attribute("StlDt", "UnderlyingSettlementDate_t_2118034902");
  elt.add_attribute("MtchStat", "2");
  elt.add_attribute("MtchTyp", "M2");
  elt.add_attribute("Vol", "940753.900000");
  elt.add_attribute("DividendYield", "18010516.330000");
  elt.add_attribute("RFR", "12919305.000000");
  elt.add_attribute("CurrencyRatio", "6425046.600000");
  elt.add_attribute("CopyMsgInd", "true");
  elt.add_attribute("PubTrdInd", "Y");
  elt.add_attribute("TrdPubInd", "2");
  elt.add_attribute("ShrtSaleRsn", "1");
  elt.add_attribute("TierCD", "TierCode_t_489756976");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_19631243");
  elt.add_attribute("LastUpdateTm", "LastUpdateTime_t_810568370");
  elt.add_attribute("RndPx", "16296555.780000");
  elt.add_attribute("TZTransactTime", "TZTransactTime_t_1260041311");
  elt.add_attribute("ReportedPxDiff", "true");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_409640737");
  elt.add_attribute("RejTxt", "RejectText_t_1316241736");
  elt.add_attribute("FeeMult", "11038340.880000");
  all_values.push_back(TradeCaptureReport_message_t_0);
  all_compo_names.insert("TradeCaptureReport_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
