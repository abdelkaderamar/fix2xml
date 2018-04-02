#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CrossOrderCancelRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CrossOrderCancelRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CrssOrdCxlReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CrossOrderCancelRequest_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_1350155543");
  elt.add_attribute("ID", "CrossID_t_1280351745");
  elt.add_attribute("OrigID", "OrigCrossID_t_839661941");
  elt.add_attribute("HstCxID", "HostCrossID_t_1511632752");
  elt.add_attribute("Typ", "1");
  elt.add_attribute("Priorty", "0");
  elt.add_attribute("TxnTm", "TransactTime_t_1350887893");
  all_values.push_back(CrossOrderCancelRequest_message_t_0);
  all_compo_names.insert("CrossOrderCancelRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
