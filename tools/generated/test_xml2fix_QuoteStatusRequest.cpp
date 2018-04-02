#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/QuoteStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteStatusRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"QuotStatReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteStatusRequest_message_t_0;
  elt.add_attribute("StatReqID", "QuoteStatusReqID_t_279588439");
  elt.add_attribute("QID", "QuoteID_t_1842730367");
  elt.add_attribute("Acct", "Account_t_1207112265");
  elt.add_attribute("AcctIDSrc", "1");
  elt.add_attribute("AcctTyp", "6");
  elt.add_attribute("SesID", "6");
  elt.add_attribute("SesSub", "7");
  elt.add_attribute("SubReqTyp", "1");
  all_values.push_back(QuoteStatusRequest_message_t_0);
  all_compo_names.insert("QuoteStatusRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
