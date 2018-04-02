#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/QuoteCancel.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteCancel_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"QuotCxl" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteCancel_message_t_0;
  elt.add_attribute("ReqID", "QuoteReqID_t_851571379");
  elt.add_attribute("QID", "QuoteID_t_1707118131");
  elt.add_attribute("QtMsgID", "QuoteMsgID_t_1907013950");
  elt.add_attribute("CxlTyp", "6");
  elt.add_attribute("Typ", "2");
  elt.add_attribute("RspLvl", "3");
  elt.add_attribute("Acct", "Account_t_1392076979");
  elt.add_attribute("AcctIDSrc", "4");
  elt.add_attribute("AcctTyp", "6");
  elt.add_attribute("SesID", "2");
  elt.add_attribute("SesSub", "2");
  all_values.push_back(QuoteCancel_message_t_0);
  all_compo_names.insert("QuoteCancel_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
