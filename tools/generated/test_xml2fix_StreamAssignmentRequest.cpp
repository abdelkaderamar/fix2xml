#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/StreamAssignmentRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( StreamAssignmentRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"StrmAsgnReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> StreamAssignmentRequest_message_t_0;
  elt.add_attribute("ReqID", "StreamAsgnReqID_t_1971272956");
  elt.add_attribute("AsgnReqTyp", "2");
  all_values.push_back(StreamAssignmentRequest_message_t_0);
  all_compo_names.insert("StreamAssignmentRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
