#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ListStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ListStatusRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ListStatReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ListStatusRequest_message_t_0;
  elt.add_attribute("ID", "ListID_t_1918820928");
  elt.add_attribute("Txt", "Text_t_64934944");
  elt.add_attribute("EncTxtLen", "124827220");
  elt.add_attribute("EncTxt", "EncodedText_t_1939345257");
  all_values.push_back(ListStatusRequest_message_t_0);
  all_compo_names.insert("ListStatusRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
