#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MassQuote.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MassQuote_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MassQuot" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MassQuote_message_t_0;
  elt.add_attribute("ReqID", "QuoteReqID_t_48131160");
  elt.add_attribute("QID", "QuoteID_t_594943530");
  elt.add_attribute("Typ", "1");
  elt.add_attribute("RspLvl", "2");
  elt.add_attribute("Acct", "Account_t_619824695");
  elt.add_attribute("AcctIDSrc", "2");
  elt.add_attribute("AcctTyp", "6");
  elt.add_attribute("DefBidSz", "2900311.920000");
  elt.add_attribute("DefOfrSz", "19164708.000000");
  all_values.push_back(MassQuote_message_t_0);
  all_compo_names.insert("MassQuote_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
