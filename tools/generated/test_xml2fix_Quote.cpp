#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/Quote.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Quote_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"Quot" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Quote_message_t_0;
  elt.add_attribute("ReqID", "QuoteReqID_t_1971230893");
  elt.add_attribute("QID", "QuoteID_t_810974983");
  elt.add_attribute("QtMsgID", "QuoteMsgID_t_1668578385");
  elt.add_attribute("RspID", "QuoteRespID_t_409063599");
  elt.add_attribute("Typ", "0");
  elt.add_attribute("PrvtQt", "false");
  elt.add_attribute("RspLvl", "0");
  elt.add_attribute("SesID", "3");
  elt.add_attribute("SesSub", "5");
  elt.add_attribute("Side", "5");
  elt.add_attribute("SettlTyp", "B");
  elt.add_attribute("SettlDt", "SettlDate_t_352429500");
  elt.add_attribute("SettlDt2", "SettlDate2_t_929707376");
  elt.add_attribute("Qty2", "8431491.740000");
  elt.add_attribute("Ccy", "CHF");
  elt.add_attribute("SettlCcy", "USD");
  elt.add_attribute("Acct", "Account_t_17990522");
  elt.add_attribute("AcctIDSrc", "4");
  elt.add_attribute("AcctTyp", "4");
  elt.add_attribute("BidPx", "6612599.200000");
  elt.add_attribute("OfrPx", "7347557.750000");
  elt.add_attribute("MktBidPx", "11998610.960000");
  elt.add_attribute("MktOfrPx", "17665653.850000");
  elt.add_attribute("MinBidSz", "8413972.810000");
  elt.add_attribute("BidSz", "20995698.250000");
  elt.add_attribute("MinOfrSz", "8881698.200000");
  elt.add_attribute("OfrSz", "3407568.600000");
  elt.add_attribute("MinQty", "13612056.020000");
  elt.add_attribute("ValidUntilTm", "ValidUntilTime_t_483003242");
  elt.add_attribute("BidSpotRt", "1645041.050000");
  elt.add_attribute("OfrSpotRt", "246969.380000");
  elt.add_attribute("BidFwdPnts", "40979.790000");
  elt.add_attribute("OfrFwdPnts", "5735677.050000");
  elt.add_attribute("BidSwapPnts", "5158086.620000");
  elt.add_attribute("OfrSwapPnts", "11085436.130000");
  elt.add_attribute("MidPx", "3769331.930000");
  elt.add_attribute("BidYld", "1498630.700000");
  elt.add_attribute("MidYld", "13861813.060000");
  elt.add_attribute("OfrYld", "19717324.780000");
  elt.add_attribute("TxnTm", "TransactTime_t_965450497");
  elt.add_attribute("OrdTyp", "P");
  elt.add_attribute("BidFwdPnts2", "7539562.060000");
  elt.add_attribute("OfrFwdPnts2", "18085996.710000");
  elt.add_attribute("SettlCurrBidFxRt", "7143469.220000");
  elt.add_attribute("SettlCurrOfrFxRt", "376128.890000");
  elt.add_attribute("SettlCurrFxRtCalc", "D");
  elt.add_attribute("CommTyp", "4");
  elt.add_attribute("Comm", "Commission_t_55603411");
  elt.add_attribute("CustCpcty", "1");
  elt.add_attribute("ExDest", "ExDestination_t_485902150");
  elt.add_attribute("ExDestIDSrc", "D");
  elt.add_attribute("BkngTyp", "1");
  elt.add_attribute("Cpcty", "G");
  elt.add_attribute("Rstctions", "F");
  elt.add_attribute("PxTyp", "16");
  elt.add_attribute("Txt", "Text_t_1637849424");
  elt.add_attribute("EncTxtLen", "1224114889");
  elt.add_attribute("EncTxt", "EncodedText_t_1742509844");
  all_values.push_back(Quote_message_t_0);
  all_compo_names.insert("Quote_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
