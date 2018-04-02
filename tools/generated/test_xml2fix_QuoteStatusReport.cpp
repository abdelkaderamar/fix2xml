#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/QuoteStatusReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteStatusReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"QuotStatRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteStatusReport_message_t_0;
  elt.add_attribute("StatReqID", "QuoteStatusReqID_t_1611328728");
  elt.add_attribute("ReqID", "QuoteReqID_t_1630770713");
  elt.add_attribute("QID", "QuoteID_t_765499136");
  elt.add_attribute("QtMsgID", "QuoteMsgID_t_1292384963");
  elt.add_attribute("RspID", "QuoteRespID_t_96042397");
  elt.add_attribute("Typ", "0");
  elt.add_attribute("CxlTyp", "3");
  elt.add_attribute("SesID", "4");
  elt.add_attribute("SesSub", "7");
  elt.add_attribute("Side", "5");
  elt.add_attribute("SettlTyp", "8");
  elt.add_attribute("SettlDt", "SettlDate_t_960593468");
  elt.add_attribute("SettlDt2", "SettlDate2_t_620198899");
  elt.add_attribute("Qty2", "5060441.960000");
  elt.add_attribute("Ccy", "GBP");
  elt.add_attribute("Acct", "Account_t_1111215810");
  elt.add_attribute("AcctIDSrc", "4");
  elt.add_attribute("AcctTyp", "1");
  elt.add_attribute("ExpireTm", "ExpireTime_t_976950214");
  elt.add_attribute("Px", "18408868.260000");
  elt.add_attribute("PxTyp", "2");
  elt.add_attribute("BidPx", "12289332.160000");
  elt.add_attribute("OfrPx", "691684.360000");
  elt.add_attribute("MktBidPx", "20023841.240000");
  elt.add_attribute("MktOfrPx", "6709669.060000");
  elt.add_attribute("MinBidSz", "20107691.570000");
  elt.add_attribute("BidSz", "1323614.680000");
  elt.add_attribute("MinOfrSz", "8146927.270000");
  elt.add_attribute("OfrSz", "2456158.090000");
  elt.add_attribute("MinQty", "20458790.900000");
  elt.add_attribute("ValidUntilTm", "ValidUntilTime_t_278537807");
  elt.add_attribute("BidSpotRt", "18763865.230000");
  elt.add_attribute("OfrSpotRt", "6638945.780000");
  elt.add_attribute("BidFwdPnts", "15709227.700000");
  elt.add_attribute("OfrFwdPnts", "19724289.200000");
  elt.add_attribute("MidPx", "13519018.900000");
  elt.add_attribute("BidYld", "5173475.960000");
  elt.add_attribute("MidYld", "7743262.350000");
  elt.add_attribute("OfrYld", "4491928.560000");
  elt.add_attribute("TxnTm", "TransactTime_t_1866344865");
  elt.add_attribute("OrdTyp", "C");
  elt.add_attribute("BidFwdPnts2", "14097863.240000");
  elt.add_attribute("OfrFwdPnts2", "3390601.160000");
  elt.add_attribute("SettlCurrBidFxRt", "4207828.790000");
  elt.add_attribute("SettlCurrOfrFxRt", "11562239.320000");
  elt.add_attribute("SettlCurrFxRtCalc", "M");
  elt.add_attribute("CommTyp", "1");
  elt.add_attribute("Comm", "Commission_t_408115506");
  elt.add_attribute("CustCpcty", "1");
  elt.add_attribute("ExDest", "ExDestination_t_361465256");
  elt.add_attribute("ExDestIDSrc", "G");
  elt.add_attribute("BkngTyp", "1");
  elt.add_attribute("Cpcty", "A");
  elt.add_attribute("Rstctions", "6");
  elt.add_attribute("Stat", "15");
  elt.add_attribute("RejRsn", "5");
  elt.add_attribute("Txt", "Text_t_33972630");
  elt.add_attribute("EncTxtLen", "1944334925");
  elt.add_attribute("EncTxt", "EncodedText_t_928574457");
  all_values.push_back(QuoteStatusReport_message_t_0);
  all_compo_names.insert("QuoteStatusReport_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
