#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/QuoteResponse.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteResponse_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"QuotRsp" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteResponse_message_t_0;
  elt.add_attribute("RspID", "QuoteRespID_t_1070526662");
  elt.add_attribute("QID", "QuoteID_t_120467276");
  elt.add_attribute("QtMsgID", "QuoteMsgID_t_240583235");
  elt.add_attribute("RspTyp", "6");
  elt.add_attribute("ClOrdID", "ClOrdID_t_453565283");
  elt.add_attribute("Cpcty", "R");
  elt.add_attribute("Rstctions", "B");
  elt.add_attribute("IOIID", "IOIID_t_1163596484");
  elt.add_attribute("Typ", "3");
  elt.add_attribute("PrTrdAnon", "true");
  elt.add_attribute("SesID", "1");
  elt.add_attribute("SesSub", "3");
  elt.add_attribute("Side", "2");
  elt.add_attribute("MinQty", "8386291.030000");
  elt.add_attribute("SettlTyp", "1");
  elt.add_attribute("SettlDt", "SettlDate_t_936057639");
  elt.add_attribute("SettlDt2", "SettlDate2_t_16994581");
  elt.add_attribute("Qty2", "3862485.980000");
  elt.add_attribute("Ccy", "JPY");
  elt.add_attribute("Acct", "Account_t_1337534336");
  elt.add_attribute("AcctIDSrc", "3");
  elt.add_attribute("AcctTyp", "4");
  elt.add_attribute("BidPx", "7016921.300000");
  elt.add_attribute("OfrPx", "5882132.260000");
  elt.add_attribute("MktBidPx", "16360566.300000");
  elt.add_attribute("MktOfrPx", "14676029.080000");
  elt.add_attribute("MinBidSz", "12484404.130000");
  elt.add_attribute("BidSz", "9994651.620000");
  elt.add_attribute("MinOfrSz", "18285398.820000");
  elt.add_attribute("OfrSz", "6127553.310000");
  elt.add_attribute("ValidUntilTm", "ValidUntilTime_t_2069991824");
  elt.add_attribute("BidSpotRt", "19490071.590000");
  elt.add_attribute("OfrSpotRt", "8533385.660000");
  elt.add_attribute("BidFwdPnts", "5567673.010000");
  elt.add_attribute("OfrFwdPnts", "2550887.940000");
  elt.add_attribute("MidPx", "3385151.320000");
  elt.add_attribute("BidYld", "18633025.020000");
  elt.add_attribute("MidYld", "14186852.780000");
  elt.add_attribute("OfrYld", "13656317.480000");
  elt.add_attribute("TxnTm", "TransactTime_t_933327788");
  elt.add_attribute("OrdTyp", "2");
  elt.add_attribute("BidFwdPnts2", "6051716.140000");
  elt.add_attribute("OfrFwdPnts2", "16529376.130000");
  elt.add_attribute("SettlCurrBidFxRt", "18077072.480000");
  elt.add_attribute("SettlCurrOfrFxRt", "20132180.510000");
  elt.add_attribute("SettlCurrFxRtCalc", "D");
  elt.add_attribute("Comm", "Commission_t_1824701829");
  elt.add_attribute("CommTyp", "1");
  elt.add_attribute("CustCpcty", "2");
  elt.add_attribute("ExDest", "ExDestination_t_1075665299");
  elt.add_attribute("ExDestIDSrc", "E");
  elt.add_attribute("Txt", "Text_t_1941600721");
  elt.add_attribute("EncTxtLen", "277460991");
  elt.add_attribute("EncTxt", "EncodedText_t_143725820");
  elt.add_attribute("Px", "3823303.000000");
  elt.add_attribute("PxTyp", "9");
  all_values.push_back(QuoteResponse_message_t_0);
  all_compo_names.insert("QuoteResponse_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
