#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/DerivativeSecurityListRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( DerivativeSecurityListRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"DerivSecListReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> DerivativeSecurityListRequest_message_t_0;
  elt.add_attribute("ReqID", "SecurityReqID_t_282165968");
  elt.add_attribute("ListReqTyp", "5");
  elt.add_attribute("MktID", "MarketID_t_1852387515");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1420318349");
  elt.add_attribute("SubTyp", "SecuritySubType_t_514063198");
  elt.add_attribute("Ccy", "EUR");
  elt.add_attribute("Txt", "Text_t_201261629");
  elt.add_attribute("EncTxtLen", "1517995397");
  elt.add_attribute("EncTxt", "EncodedText_t_2083257485");
  elt.add_attribute("SesID", "5");
  elt.add_attribute("SesSub", "4");
  elt.add_attribute("SubReqTyp", "0");
  all_values.push_back(DerivativeSecurityListRequest_message_t_0);
  all_compo_names.insert("DerivativeSecurityListRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
