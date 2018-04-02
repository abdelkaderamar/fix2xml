#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdCaptRptAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReportAck_message_t_0;
  elt.add_attribute("RptID", "TradeReportID_t_869439193");
  elt.add_attribute("TrdID", "TradeID_t_432831723");
  elt.add_attribute("TrdID2", "SecondaryTradeID_t_1165990996");
  elt.add_attribute("FirmTrdID", "FirmTradeID_t_1971353865");
  elt.add_attribute("FirmTrdID2", "SecondaryFirmTradeID_t_92714009");
  elt.add_attribute("TransTyp", "3");
  elt.add_attribute("RptTyp", "10");
  elt.add_attribute("TrdTyp", "38");
  elt.add_attribute("TrdSubTyp", "24");
  elt.add_attribute("TrdTyp2", "47");
  elt.add_attribute("TrdHandlInst", "2");
  elt.add_attribute("OrigTrdHandlInst", "2");
  elt.add_attribute("OrigTrdDt", "OrigTradeDate_t_1667163678");
  elt.add_attribute("OrigTrdID", "OrigTradeID_t_1882534905");
  elt.add_attribute("OrignTrdID2", "OrigSecondaryTradeID_t_668818116");
  elt.add_attribute("TrnsfrRsn", "TransferReason_t_1320731663");
  elt.add_attribute("ExecTyp", "J");
  elt.add_attribute("RptRefID", "TradeReportRefID_t_1311322777");
  elt.add_attribute("RptRefID2", "SecondaryTradeReportRefID_t_1796857456");
  elt.add_attribute("TrdRptStat", "0");
  elt.add_attribute("RejRsn", "0");
  elt.add_attribute("RptID2", "SecondaryTradeReportID_t_1563403767");
  elt.add_attribute("SubReqTyp", "1");
  elt.add_attribute("LinkID", "TradeLinkID_t_2045654514");
  elt.add_attribute("MtchID", "TrdMatchID_t_226488489");
  elt.add_attribute("ExecID", "ExecID_t_701483778");
  elt.add_attribute("ExecID2", "SecondaryExecID_t_1158212177");
  elt.add_attribute("ExecRstmtRsn", "6");
  elt.add_attribute("PrevlyRpted", "Y");
  elt.add_attribute("PxTyp", "16");
  elt.add_attribute("UndSesID", "UnderlyingTradingSessionID_t_2093371072");
  elt.add_attribute("UndSesSub", "UnderlyingTradingSessionSubID_t_1980563708");
  elt.add_attribute("SetSesID", "RTH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_1111878421");
  elt.add_attribute("QtyTyp", "1");
  elt.add_attribute("LastQty", "8525159.990000");
  elt.add_attribute("LastPx", "7384030.100000");
  elt.add_attribute("VenuTyp", "E");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_398030453");
  elt.add_attribute("MktID", "MarketID_t_1342594482");
  elt.add_attribute("LastParPx", "10427038.700000");
  elt.add_attribute("CalcCcyLastQty", "7908626.650000");
  elt.add_attribute("LastSwapPnts", "19173372.090000");
  elt.add_attribute("Ccy", "CHF");
  elt.add_attribute("SettlCcy", "USD");
  elt.add_attribute("LastSpotRt", "15528956.800000");
  elt.add_attribute("LastFwdPnts", "17499944.540000");
  elt.add_attribute("LastMkt", "LastMkt_t_1532489372");
  elt.add_attribute("TrdDt", "TradeDate_t_134966903");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1628534077");
  elt.add_attribute("AvgPx", "9484094.910000");
  elt.add_attribute("AvgPxInd", "1");
  elt.add_attribute("MLegRptTyp", "3");
  elt.add_attribute("TrdLegRefID", "TradeLegRefID_t_1174897980");
  elt.add_attribute("TxnTm", "TransactTime_t_2055762529");
  elt.add_attribute("SettlTyp", "8");
  elt.add_attribute("MtchStat", "2");
  elt.add_attribute("MtchTyp", "7");
  elt.add_attribute("CopyMsgInd", "true");
  elt.add_attribute("PubTrdInd", "Y");
  elt.add_attribute("TrdPubInd", "0");
  elt.add_attribute("ShrtSaleRsn", "4");
  elt.add_attribute("RspTransportTyp", "0");
  elt.add_attribute("RspDest", "ResponseDestination_t_509433734");
  elt.add_attribute("Txt", "Text_t_329238079");
  elt.add_attribute("EncTxtLen", "1813120172");
  elt.add_attribute("EncTxt", "EncodedText_t_1561625511");
  elt.add_attribute("AsOfInd", "0");
  elt.add_attribute("ClrFeeInd", "C");
  elt.add_attribute("TierCD", "TierCode_t_456845733");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_1518131198");
  elt.add_attribute("LastUpdateTm", "LastUpdateTime_t_778084568");
  elt.add_attribute("RndPx", "10192296.330000");
  elt.add_attribute("RptSys", "RptSys_t_2044045121");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_1216756245");
  elt.add_attribute("SettlDt", "SettlDate_t_754861549");
  elt.add_attribute("FeeMult", "14494571.530000");
  all_values.push_back(TradeCaptureReportAck_message_t_0);
  all_compo_names.insert("TradeCaptureReportAck_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
