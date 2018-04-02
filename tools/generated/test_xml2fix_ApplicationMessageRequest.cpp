#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ApplicationMessageRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ApplicationMessageRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ApplMsgReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ApplicationMessageRequest_message_t_0;
  elt.add_attribute("ApplReqID", "ApplReqID_t_60157190");
  elt.add_attribute("ApplReqTyp", "3");
  elt.add_attribute("Txt", "Text_t_1983860576");
  elt.add_attribute("EncTxtLen", "372772253");
  elt.add_attribute("EncTxt", "EncodedText_t_657582399");
  all_values.push_back(ApplicationMessageRequest_message_t_0);
  all_compo_names.insert("ApplicationMessageRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
