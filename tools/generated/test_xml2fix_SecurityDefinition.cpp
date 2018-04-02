#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityDefinition.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityDefinition_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecDef" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityDefinition_message_t_0;
  elt.add_attribute("RptID", "1164429888");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_175680616");
  elt.add_attribute("ReqID", "SecurityReqID_t_1006123628");
  elt.add_attribute("RspID", "SecurityResponseID_t_954757794");
  elt.add_attribute("RspTyp", "3");
  elt.add_attribute("CorpActn", "S");
  elt.add_attribute("Ccy", "GBP");
  elt.add_attribute("Txt", "Text_t_948019366");
  elt.add_attribute("EncTxtLen", "230821952");
  elt.add_attribute("EncTxt", "EncodedText_t_805039912");
  elt.add_attribute("TxnTm", "TransactTime_t_1205835862");
  all_values.push_back(SecurityDefinition_message_t_0);
  all_compo_names.insert("SecurityDefinition_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
