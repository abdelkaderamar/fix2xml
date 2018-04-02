#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/QuoteRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"QuotReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteRequest_message_t_0;
  elt.add_attribute("ReqID", "QuoteReqID_t_534280030");
  elt.add_attribute("RFQReqID", "RFQReqID_t_359906899");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1649584539");
  elt.add_attribute("BkngTyp", "2");
  elt.add_attribute("Cpcty", "I");
  elt.add_attribute("Rstctions", "5");
  elt.add_attribute("PrvtQt", "true");
  elt.add_attribute("RspdntTyp", "2");
  elt.add_attribute("PrTrdAnon", "false");
  elt.add_attribute("Txt", "Text_t_1381452537");
  elt.add_attribute("EncTxtLen", "951285738");
  elt.add_attribute("EncTxt", "EncodedText_t_1631581811");
  all_values.push_back(QuoteRequest_message_t_0);
  all_compo_names.insert("QuoteRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
