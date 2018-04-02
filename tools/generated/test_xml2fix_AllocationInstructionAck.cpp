#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AllocationInstructionAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationInstructionAck_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AllocInstrctnAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationInstructionAck_message_t_0;
  elt.add_attribute("ID", "AllocID_t_1909925254");
  elt.add_attribute("ID2", "SecondaryAllocID_t_340284960");
  elt.add_attribute("TrdDt", "TradeDate_t_55952476");
  elt.add_attribute("TxnTm", "TransactTime_t_1186726180");
  elt.add_attribute("Stat", "2");
  elt.add_attribute("RejCode", "0");
  elt.add_attribute("Typ", "11");
  elt.add_attribute("ImReqTyp", "3");
  elt.add_attribute("MtchStat", "2");
  elt.add_attribute("Prod", "8");
  elt.add_attribute("SecTyp", "TBA");
  elt.add_attribute("Txt", "Text_t_1186052753");
  elt.add_attribute("EncTxtLen", "2116531445");
  elt.add_attribute("EncTxt", "EncodedText_t_781857834");
  all_values.push_back(AllocationInstructionAck_message_t_0);
  all_compo_names.insert("AllocationInstructionAck_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
