#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityDefinitionUpdateReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityDefinitionUpdateReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecDefUpd" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityDefinitionUpdateReport_message_t_0;
  elt.add_attribute("RptID", "1178656929");
  elt.add_attribute("ReqID", "SecurityReqID_t_1717737727");
  elt.add_attribute("RspID", "SecurityResponseID_t_2005131006");
  elt.add_attribute("RspTyp", "2");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1643548377");
  elt.add_attribute("UpdActn", "D");
  elt.add_attribute("CorpActn", "D");
  elt.add_attribute("Ccy", "CHF");
  elt.add_attribute("Txt", "Text_t_1582799615");
  elt.add_attribute("EncTxtLen", "1040580314");
  elt.add_attribute("EncTxt", "EncodedText_t_1159813601");
  elt.add_attribute("TxnTm", "TransactTime_t_1167075496");
  all_values.push_back(SecurityDefinitionUpdateReport_message_t_0);
  all_compo_names.insert("SecurityDefinitionUpdateReport_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
