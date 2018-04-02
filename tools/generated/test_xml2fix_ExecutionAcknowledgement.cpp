#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ExecutionAcknowledgement.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ExecutionAcknowledgement_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ExecAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ExecutionAcknowledgement_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_1359689480");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_1242472881");
  elt.add_attribute("ID", "ClOrdID_t_1927031486");
  elt.add_attribute("ExecAckStat", "0");
  elt.add_attribute("ExecID", "ExecID_t_408471152");
  elt.add_attribute("DkRsn", "D");
  elt.add_attribute("Side", "B");
  elt.add_attribute("LastQty", "9246249.660000");
  elt.add_attribute("LastPx", "7912094.720000");
  elt.add_attribute("PxTyp", "6");
  elt.add_attribute("LastParPx", "8049278.840000");
  elt.add_attribute("CumQty", "825262.620000");
  elt.add_attribute("AvgPx", "576575.050000");
  elt.add_attribute("Txt", "Text_t_2036118695");
  elt.add_attribute("EncTxtLen", "1743991310");
  elt.add_attribute("EncTxt", "EncodedText_t_1741599744");
  all_values.push_back(ExecutionAcknowledgement_message_t_0);
  all_compo_names.insert("ExecutionAcknowledgement_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
