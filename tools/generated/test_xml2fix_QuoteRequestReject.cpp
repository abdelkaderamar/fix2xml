#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/QuoteRequestReject.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteRequestReject_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"QuotReqRej" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteRequestReject_message_t_0;
  elt.add_attribute("ReqID", "QuoteReqID_t_2098315869");
  elt.add_attribute("RFQReqID", "RFQReqID_t_1511641441");
  elt.add_attribute("ReqRejRsn", "99");
  elt.add_attribute("PrvtQt", "true");
  elt.add_attribute("RspdntTyp", "3");
  elt.add_attribute("PrTrdAnon", "false");
  elt.add_attribute("Txt", "Text_t_1510892179");
  elt.add_attribute("EncTxtLen", "360936974");
  elt.add_attribute("EncTxt", "EncodedText_t_1511798566");
  all_values.push_back(QuoteRequestReject_message_t_0);
  all_compo_names.insert("QuoteRequestReject_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
