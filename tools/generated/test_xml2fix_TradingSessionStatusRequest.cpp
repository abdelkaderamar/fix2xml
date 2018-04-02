#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/TradingSessionStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradingSessionStatusRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdgSesStatReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradingSessionStatusRequest_message_t_0;
  elt.add_attribute("ReqID", "TradSesReqID_t_103283846");
  elt.add_attribute("MktID", "MarketID_t_626506969");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_125752177");
  elt.add_attribute("SesID", "3");
  elt.add_attribute("SesSub", "2");
  elt.add_attribute("Method", "1");
  elt.add_attribute("Mode", "2");
  elt.add_attribute("SubReqTyp", "1");
  elt.add_attribute("Exch", "SecurityExchange_t_1997648616");
  all_values.push_back(TradingSessionStatusRequest_message_t_0);
  all_compo_names.insert("TradingSessionStatusRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
