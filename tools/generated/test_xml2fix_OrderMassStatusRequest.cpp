#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderMassStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassStatusRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdMassStatReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassStatusRequest_message_t_0;
  elt.add_attribute("ReqID", "MassStatusReqID_t_607699816");
  elt.add_attribute("MassStatReqTyp", "2");
  elt.add_attribute("Acct", "Account_t_1934519398");
  elt.add_attribute("AcctIDSrc", "1");
  elt.add_attribute("SesID", "3");
  elt.add_attribute("SesSub", "1");
  elt.add_attribute("Side", "5");
  all_values.push_back(OrderMassStatusRequest_message_t_0);
  all_compo_names.insert("OrderMassStatusRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
