#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SettlementObligationReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SettlementObligationReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SettlObligation" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SettlementObligationReport_message_t_0;
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1620642794");
  elt.add_attribute("CycleNo", "1856452002");
  elt.add_attribute("SettlMsgID", "SettlObligMsgID_t_1138255182");
  elt.add_attribute("SettlMode", "2");
  elt.add_attribute("Txt", "Text_t_555260753");
  elt.add_attribute("EncTxtLen", "1449823819");
  elt.add_attribute("EncTxt", "EncodedText_t_1582339113");
  elt.add_attribute("TxnTm", "TransactTime_t_1175278335");
  all_values.push_back(SettlementObligationReport_message_t_0);
  all_compo_names.insert("SettlementObligationReport_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
