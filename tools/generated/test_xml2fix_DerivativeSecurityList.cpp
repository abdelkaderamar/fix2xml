#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/DerivativeSecurityList.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( DerivativeSecurityList_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"DerivSecList" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> DerivativeSecurityList_message_t_0;
  elt.add_attribute("RptID", "222664611");
  elt.add_attribute("ReqID", "SecurityReqID_t_780645567");
  elt.add_attribute("RspID", "SecurityResponseID_t_1882090579");
  elt.add_attribute("ReqRslt", "4");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_50050824");
  elt.add_attribute("TxnTm", "TransactTime_t_227069930");
  elt.add_attribute("TotNoReltdSym", "820701532");
  elt.add_attribute("LastFragment", "Y");
  all_values.push_back(DerivativeSecurityList_message_t_0);
  all_compo_names.insert("DerivativeSecurityList_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
