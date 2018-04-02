#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/RequestForPositionsAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RequestForPositionsAck_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ReqForPossAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RequestForPositionsAck_message_t_0;
  elt.add_attribute("RptID", "PosMaintRptID_t_1520953778");
  elt.add_attribute("ReqID", "PosReqID_t_1464386948");
  elt.add_attribute("TotRpts", "646546071");
  elt.add_attribute("Unsol", "Y");
  elt.add_attribute("Rslt", "0");
  elt.add_attribute("Stat", "2");
  elt.add_attribute("ReqTyp", "6");
  elt.add_attribute("MtchStat", "0");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1816786869");
  elt.add_attribute("SubReqTyp", "2");
  elt.add_attribute("SetSesID", "EOD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_957261626");
  elt.add_attribute("SettlCcy", "EUR");
  elt.add_attribute("Acct", "Account_t_1940466750");
  elt.add_attribute("AcctIDSrc", "2");
  elt.add_attribute("AcctTyp", "2");
  elt.add_attribute("Ccy", "JPY");
  elt.add_attribute("RspTransportTyp", "1");
  elt.add_attribute("RspDest", "ResponseDestination_t_2041235486");
  elt.add_attribute("Txt", "Text_t_432438652");
  elt.add_attribute("EncTxtLen", "2073294298");
  elt.add_attribute("EncTxt", "EncodedText_t_812410197");
  all_values.push_back(RequestForPositionsAck_message_t_0);
  all_compo_names.insert("RequestForPositionsAck_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
