#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDataRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDataRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MktDataReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDataRequest_message_t_0;
  elt.add_attribute("ReqID", "MDReqID_t_88446899");
  elt.add_attribute("SubReqTyp", "0");
  elt.add_attribute("MktDepth", "330903526");
  elt.add_attribute("UpdtTyp", "1");
  elt.add_attribute("AggBook", "Y");
  elt.add_attribute("OpenClsSettlFlag", "2");
  elt.add_attribute("Scope", "1");
  elt.add_attribute("ImplctDel", "Y");
  elt.add_attribute("ApplQuActn", "3");
  elt.add_attribute("ApplQuMax", "1070157540");
  elt.add_attribute("MDQteTyp", "3");
  all_values.push_back(MarketDataRequest_message_t_0);
  all_compo_names.insert("MarketDataRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
