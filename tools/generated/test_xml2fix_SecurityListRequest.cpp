#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityListRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityListRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecListReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityListRequest_message_t_0;
  elt.add_attribute("ReqID", "SecurityReqID_t_106865111");
  elt.add_attribute("ListReqTyp", "1");
  elt.add_attribute("ListID", "SecurityListID_t_8248463");
  elt.add_attribute("ListTyp", "1");
  elt.add_attribute("LstTypSrc", "3");
  elt.add_attribute("MktID", "MarketID_t_2013379469");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_749133973");
  elt.add_attribute("Ccy", "JPY");
  elt.add_attribute("Txt", "Text_t_1377175795");
  elt.add_attribute("EncTxtLen", "939564382");
  elt.add_attribute("EncTxt", "EncodedText_t_64650911");
  elt.add_attribute("SesID", "5");
  elt.add_attribute("SesSub", "6");
  elt.add_attribute("SubReqTyp", "1");
  all_values.push_back(SecurityListRequest_message_t_0);
  all_compo_names.insert("SecurityListRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
