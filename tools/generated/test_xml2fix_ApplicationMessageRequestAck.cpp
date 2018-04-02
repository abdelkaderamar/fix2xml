#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ApplicationMessageRequestAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ApplicationMessageRequestAck_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ApplMsgReqAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ApplicationMessageRequestAck_message_t_0;
  elt.add_attribute("ApplRespID", "ApplResponseID_t_801919371");
  elt.add_attribute("ApplReqID", "ApplReqID_t_279988341");
  elt.add_attribute("ApplReqTyp", "2");
  elt.add_attribute("ApplRespTyp", "1");
  elt.add_attribute("ApplTotMsgCnt", "1967838033");
  elt.add_attribute("Txt", "Text_t_1017781679");
  elt.add_attribute("EncTxtLen", "1062833282");
  elt.add_attribute("EncTxt", "EncodedText_t_918356567");
  all_values.push_back(ApplicationMessageRequestAck_message_t_0);
  all_compo_names.insert("ApplicationMessageRequestAck_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
