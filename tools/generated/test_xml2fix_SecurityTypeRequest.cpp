#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityTypeRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityTypeRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecTypReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityTypeRequest_message_t_0;
  elt.add_attribute("ReqID", "SecurityReqID_t_21499014");
  elt.add_attribute("Txt", "Text_t_1490721088");
  elt.add_attribute("EncTxtLen", "1647494004");
  elt.add_attribute("EncTxt", "EncodedText_t_823386887");
  elt.add_attribute("MktID", "MarketID_t_1802844410");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_157032131");
  elt.add_attribute("SesID", "1");
  elt.add_attribute("SesSub", "7");
  elt.add_attribute("Prod", "11");
  elt.add_attribute("SecTyp", "PS");
  elt.add_attribute("SubTyp", "SecuritySubType_t_1560475963");
  all_values.push_back(SecurityTypeRequest_message_t_0);
  all_compo_names.insert("SecurityTypeRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
