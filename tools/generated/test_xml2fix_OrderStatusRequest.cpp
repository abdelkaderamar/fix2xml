#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderStatusRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdStatReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderStatusRequest_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_695540495");
  elt.add_attribute("ID", "ClOrdID_t_1332008410");
  elt.add_attribute("ID2", "SecondaryClOrdID_t_227718879");
  elt.add_attribute("LnkID", "ClOrdLinkID_t_1440662724");
  elt.add_attribute("StatReqID", "OrdStatusReqID_t_428300742");
  elt.add_attribute("Acct", "Account_t_1164274936");
  elt.add_attribute("AcctIDSrc", "5");
  elt.add_attribute("Side", "B");
  all_values.push_back(OrderStatusRequest_message_t_0);
  all_compo_names.insert("OrderStatusRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
