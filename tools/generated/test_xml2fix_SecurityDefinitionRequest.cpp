#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityDefinitionRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityDefinitionRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecDefReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityDefinitionRequest_message_t_0;
  elt.add_attribute("ReqID", "SecurityReqID_t_556501693");
  elt.add_attribute("ReqTyp", "2");
  elt.add_attribute("MktID", "MarketID_t_427769027");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_225804914");
  elt.add_attribute("Ccy", "CHF");
  elt.add_attribute("Txt", "Text_t_1183066540");
  elt.add_attribute("EncTxtLen", "909057395");
  elt.add_attribute("EncTxt", "EncodedText_t_440458988");
  elt.add_attribute("SesID", "4");
  elt.add_attribute("SesSub", "6");
  elt.add_attribute("ExpirationCycle", "0");
  elt.add_attribute("SubReqTyp", "2");
  all_values.push_back(SecurityDefinitionRequest_message_t_0);
  all_compo_names.insert("SecurityDefinitionRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
