#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SettlementInstructions.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SettlementInstructions_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SettlInstrctns" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SettlementInstructions_message_t_0;
  elt.add_attribute("SettlInstMsgID", "SettlInstMsgID_t_1941235766");
  elt.add_attribute("SettlInstReqID", "SettlInstReqID_t_359921385");
  elt.add_attribute("SettlInstMode", "2");
  elt.add_attribute("SettlInstReqRejCode", "99");
  elt.add_attribute("Txt", "Text_t_1441749019");
  elt.add_attribute("EncTxtLen", "1507655053");
  elt.add_attribute("EncTxt", "EncodedText_t_1596055584");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1246345075");
  elt.add_attribute("TxnTm", "TransactTime_t_2064672247");
  all_values.push_back(SettlementInstructions_message_t_0);
  all_compo_names.insert("SettlementInstructions_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
