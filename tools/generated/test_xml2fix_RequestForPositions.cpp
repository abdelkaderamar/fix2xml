#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/RequestForPositions.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RequestForPositions_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ReqForPoss" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RequestForPositions_message_t_0;
  elt.add_attribute("ReqID", "PosReqID_t_1287958405");
  elt.add_attribute("ReqTyp", "2");
  elt.add_attribute("MtchStat", "1");
  elt.add_attribute("SubReqTyp", "1");
  elt.add_attribute("SettlCcy", "JPY");
  elt.add_attribute("Acct", "Account_t_1342346422");
  elt.add_attribute("AcctIDSrc", "99");
  elt.add_attribute("AcctTyp", "3");
  elt.add_attribute("Ccy", "EUR");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1874852109");
  elt.add_attribute("SetSesID", "ETH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_731991236");
  elt.add_attribute("TxnTm", "TransactTime_t_249869966");
  elt.add_attribute("RspTransportTyp", "1");
  elt.add_attribute("RspDest", "ResponseDestination_t_1937811553");
  elt.add_attribute("Txt", "Text_t_1193154351");
  elt.add_attribute("EncTxtLen", "624992437");
  elt.add_attribute("EncTxt", "EncodedText_t_777001734");
  all_values.push_back(RequestForPositions_message_t_0);
  all_compo_names.insert("RequestForPositions_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
