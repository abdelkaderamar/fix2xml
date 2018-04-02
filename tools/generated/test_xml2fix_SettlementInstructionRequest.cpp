#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SettlementInstructionRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SettlementInstructionRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SettlInstrctnReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SettlementInstructionRequest_message_t_0;
  elt.add_attribute("SettlInstReqID", "SettlInstReqID_t_1458681976");
  elt.add_attribute("TxnTm", "TransactTime_t_620017582");
  elt.add_attribute("Acct", "AllocAccount_t_30023586");
  elt.add_attribute("ActIDSrc", "3");
  elt.add_attribute("Side", "7");
  elt.add_attribute("Prod", "5");
  elt.add_attribute("SecTyp", "PFAND");
  elt.add_attribute("CFI", "CFICode_t_1238303532");
  elt.add_attribute("SettlCcy", "JPY");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_2061690419");
  elt.add_attribute("ExpireTm", "ExpireTime_t_1146783937");
  elt.add_attribute("LastUpdateTm", "LastUpdateTime_t_1022069607");
  elt.add_attribute("StandInstDbTyp", "0");
  elt.add_attribute("StandInstDbName", "StandInstDbName_t_946929070");
  elt.add_attribute("StandInstDbID", "StandInstDbID_t_913104379");
  all_values.push_back(SettlementInstructionRequest_message_t_0);
  all_compo_names.insert("SettlementInstructionRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
