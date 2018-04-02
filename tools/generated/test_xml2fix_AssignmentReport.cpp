#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AssignmentReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AssignmentReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AsgnRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AssignmentReport_message_t_0;
  elt.add_attribute("RptID", "AsgnRptID_t_1623590516");
  elt.add_attribute("ReqID", "PosReqID_t_203894064");
  elt.add_attribute("TotNumAsgnRpts", "1538147243");
  elt.add_attribute("LastRptReqed", "N");
  elt.add_attribute("Acct", "Account_t_128486925");
  elt.add_attribute("AcctTyp", "1");
  elt.add_attribute("Ccy", "EUR");
  elt.add_attribute("ThresholdAmt", "8073264.870000");
  elt.add_attribute("SetPx", "15397247.810000");
  elt.add_attribute("SetPxTyp", "1");
  elt.add_attribute("UndSetPx", "978012.600000");
  elt.add_attribute("PriSetPx", "6433599.990000");
  elt.add_attribute("ExpireDt", "ExpireDate_t_401847950");
  elt.add_attribute("AsgnMeth", "P");
  elt.add_attribute("Unit", "1555919.970000");
  elt.add_attribute("OpenInt", "OpenInterest_t_1392025201");
  elt.add_attribute("ExrMethod", "M");
  elt.add_attribute("SetSesID", "EOD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_357901741");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1973749878");
  elt.add_attribute("Txt", "Text_t_588521441");
  elt.add_attribute("EncTxtLen", "1015484140");
  elt.add_attribute("EncTxt", "EncodedText_t_628185601");
  all_values.push_back(AssignmentReport_message_t_0);
  all_compo_names.insert("AssignmentReport_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
