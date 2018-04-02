#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDataSnapshotFullRefresh.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDataSnapshotFullRefresh_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MktDataFull" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDataSnapshotFullRefresh_message_t_0;
  elt.add_attribute("TotNumRpts", "557877497");
  elt.add_attribute("RptID", "918650187");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_2046317709");
  elt.add_attribute("MDBkTyp", "2");
  elt.add_attribute("MDSubBkTyp", "1043477407");
  elt.add_attribute("MktDepth", "1838179318");
  elt.add_attribute("MDFeedTyp", "MDFeedType_t_1162264394");
  elt.add_attribute("RefInd", "false");
  elt.add_attribute("TrdDt", "TradeDate_t_1263626946");
  elt.add_attribute("ReqID", "MDReqID_t_556528689");
  elt.add_attribute("MDStrmID", "MDStreamID_t_67637742");
  elt.add_attribute("FinclStat", "2");
  elt.add_attribute("CorpActn", "Q");
  elt.add_attribute("NetChgPrevDay", "6063923.500000");
  elt.add_attribute("ApplQuDepth", "1638935223");
  elt.add_attribute("ApplQuResolution", "1");
  all_values.push_back(MarketDataSnapshotFullRefresh_message_t_0);
  all_compo_names.insert("MarketDataSnapshotFullRefresh_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
