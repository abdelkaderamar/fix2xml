#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDataIncrementalRefresh.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDataIncrementalRefresh_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MktDataInc" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDataIncrementalRefresh_message_t_0;
  elt.add_attribute("MDBkTyp", "1");
  elt.add_attribute("MDFeedTyp", "MDFeedType_t_326109027");
  elt.add_attribute("TrdDt", "TradeDate_t_1304555724");
  elt.add_attribute("ReqID", "MDReqID_t_1825928632");
  elt.add_attribute("ApplQuDepth", "538754607");
  elt.add_attribute("ApplQuResolution", "1");
  all_values.push_back(MarketDataIncrementalRefresh_message_t_0);
  all_compo_names.insert("MarketDataIncrementalRefresh_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
