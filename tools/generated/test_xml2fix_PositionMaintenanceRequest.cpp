#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/PositionMaintenanceRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( PositionMaintenanceRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"PosMntReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> PositionMaintenanceRequest_message_t_0;
  elt.add_attribute("ReqID", "PosReqID_t_249648259");
  elt.add_attribute("TxnTyp", "5");
  elt.add_attribute("Actn", "4");
  elt.add_attribute("OrigReqRefID", "OrigPosReqRefID_t_1838441591");
  elt.add_attribute("RptRefID", "PosMaintRptRefID_t_993512376");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_695998457");
  elt.add_attribute("SetSesID", "ITD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_572835942");
  elt.add_attribute("Acct", "Account_t_468358543");
  elt.add_attribute("AcctIDSrc", "99");
  elt.add_attribute("AcctTyp", "7");
  elt.add_attribute("Ccy", "JPY");
  elt.add_attribute("TxnTm", "TransactTime_t_441461259");
  elt.add_attribute("AdjTyp", "2");
  elt.add_attribute("CntraryInstrctnInd", "true");
  elt.add_attribute("PriorSpreadInd", "true");
  elt.add_attribute("ThresholdAmt", "14040015.840000");
  elt.add_attribute("Txt", "Text_t_163782618");
  elt.add_attribute("EncTxtLen", "1540201721");
  elt.add_attribute("EncTxt", "EncodedText_t_509410696");
  elt.add_attribute("SettlCcy", "USD");
  all_values.push_back(PositionMaintenanceRequest_message_t_0);
  all_compo_names.insert("PositionMaintenanceRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
