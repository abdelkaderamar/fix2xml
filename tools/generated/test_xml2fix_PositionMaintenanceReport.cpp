#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/PositionMaintenanceReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( PositionMaintenanceReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"PosMntRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> PositionMaintenanceReport_message_t_0;
  elt.add_attribute("RptID", "PosMaintRptID_t_1941882358");
  elt.add_attribute("TxnTyp", "1");
  elt.add_attribute("ReqID", "PosReqID_t_1726807214");
  elt.add_attribute("Actn", "3");
  elt.add_attribute("OrigReqRefID", "OrigPosReqRefID_t_1213859667");
  elt.add_attribute("Stat", "2");
  elt.add_attribute("Rslt", "1");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1823518325");
  elt.add_attribute("SetSesID", "EOD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_2051285195");
  elt.add_attribute("Acct", "Account_t_553100506");
  elt.add_attribute("AcctIDSrc", "99");
  elt.add_attribute("AcctTyp", "2");
  elt.add_attribute("RptRefID", "PosMaintRptRefID_t_1849230200");
  elt.add_attribute("Ccy", "USD");
  elt.add_attribute("SettlCcy", "CHF");
  elt.add_attribute("CntraryInstrctnInd", "true");
  elt.add_attribute("PriorSpreadInd", "true");
  elt.add_attribute("TxnTm", "TransactTime_t_260928687");
  elt.add_attribute("AdjTyp", "2");
  elt.add_attribute("ThresholdAmt", "16570895.800000");
  elt.add_attribute("Txt", "Text_t_956469183");
  elt.add_attribute("EncTxtLen", "1610289592");
  elt.add_attribute("EncTxt", "EncodedText_t_1884808459");
  all_values.push_back(PositionMaintenanceReport_message_t_0);
  all_compo_names.insert("PositionMaintenanceReport_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
