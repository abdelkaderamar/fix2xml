#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/TradingSessionListRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradingSessionListRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdgSesListReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradingSessionListRequest_message_t_0;
  elt.add_attribute("ReqID", "TradSesReqID_t_1558020523");
  elt.add_attribute("MktID", "MarketID_t_1044414602");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1391734734");
  elt.add_attribute("SesID", "2");
  elt.add_attribute("SesSub", "3");
  elt.add_attribute("Exch", "SecurityExchange_t_126064787");
  elt.add_attribute("Method", "1");
  elt.add_attribute("Mode", "1");
  elt.add_attribute("SubReqTyp", "0");
  all_values.push_back(TradingSessionListRequest_message_t_0);
  all_compo_names.insert("TradingSessionListRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
