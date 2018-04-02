#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityStatusRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecStatReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityStatusRequest_message_t_0;
  elt.add_attribute("StatReqID", "SecurityStatusReqID_t_1237985703");
  elt.add_attribute("Ccy", "CAN");
  elt.add_attribute("SubReqTyp", "0");
  elt.add_attribute("MktID", "MarketID_t_998705652");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_596786936");
  elt.add_attribute("SesID", "5");
  elt.add_attribute("SesSub", "2");
  all_values.push_back(SecurityStatusRequest_message_t_0);
  all_compo_names.insert("SecurityStatusRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
