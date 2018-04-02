#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityTypes.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityTypes_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecTyps" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityTypes_message_t_0;
  elt.add_attribute("ReqID", "SecurityReqID_t_809851243");
  elt.add_attribute("RspID", "SecurityResponseID_t_118223129");
  elt.add_attribute("RspTyp", "5");
  elt.add_attribute("TotNoSecTyps", "1932183079");
  elt.add_attribute("LastFragment", "Y");
  elt.add_attribute("Txt", "Text_t_1952079704");
  elt.add_attribute("EncTxtLen", "557017194");
  elt.add_attribute("EncTxt", "EncodedText_t_24587210");
  elt.add_attribute("MktID", "MarketID_t_610106927");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1221066582");
  elt.add_attribute("SesID", "6");
  elt.add_attribute("SesSub", "1");
  elt.add_attribute("SubReqTyp", "1");
  all_values.push_back(SecurityTypes_message_t_0);
  all_compo_names.insert("SecurityTypes_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
