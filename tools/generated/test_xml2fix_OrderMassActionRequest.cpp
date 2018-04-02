#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderMassActionRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassActionRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdMassActReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassActionRequest_message_t_0;
  elt.add_attribute("ClOrdID", "ClOrdID_t_1999002806");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_195398752");
  elt.add_attribute("MassActionType", "1");
  elt.add_attribute("MassActionScope", "12");
  elt.add_attribute("MktID", "MarketID_t_398061005");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_112638282");
  elt.add_attribute("SesID", "6");
  elt.add_attribute("SesSub", "3");
  elt.add_attribute("Side", "G");
  elt.add_attribute("TxnTm", "TransactTime_t_419063865");
  elt.add_attribute("Txt", "Text_t_1171706453");
  elt.add_attribute("EncTxtLen", "804018319");
  elt.add_attribute("EncTxt", "EncodedText_t_1459053769");
  all_values.push_back(OrderMassActionRequest_message_t_0);
  all_compo_names.insert("OrderMassActionRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
