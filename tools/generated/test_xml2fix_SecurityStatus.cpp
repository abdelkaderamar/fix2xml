#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityStatus.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityStatus_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecStat" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityStatus_message_t_0;
  elt.add_attribute("StatReqID", "SecurityStatusReqID_t_627952893");
  elt.add_attribute("Ccy", "JPY");
  elt.add_attribute("MktID", "MarketID_t_252223552");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_56417488");
  elt.add_attribute("SesID", "1");
  elt.add_attribute("SesSub", "2");
  elt.add_attribute("Unsol", "N");
  elt.add_attribute("TrdgStat", "16");
  elt.add_attribute("SecTrdEvnt", "3");
  elt.add_attribute("FinclStat", "2");
  elt.add_attribute("CorpActn", "V");
  elt.add_attribute("HaltRsn", "2");
  elt.add_attribute("InViewOfCmn", "N");
  elt.add_attribute("DueToReltd", "N");
  elt.add_attribute("MDBkTyp", "2");
  elt.add_attribute("MktDepth", "918816471");
  elt.add_attribute("BuyVol", "5289606.560000");
  elt.add_attribute("SellVol", "16688353.190000");
  elt.add_attribute("HighPx", "11223318.360000");
  elt.add_attribute("LowPx", "15658572.080000");
  elt.add_attribute("LastPx", "8702520.690000");
  elt.add_attribute("TxnTm", "TransactTime_t_772317762");
  elt.add_attribute("Adjmt", "3");
  elt.add_attribute("FirstPx", "8055108.710000");
  elt.add_attribute("Txt", "Text_t_664049388");
  elt.add_attribute("EncTxtLen", "625910781");
  elt.add_attribute("EncTxt", "EncodedText_t_236185471");
  all_values.push_back(SecurityStatus_message_t_0);
  all_compo_names.insert("SecurityStatus_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
