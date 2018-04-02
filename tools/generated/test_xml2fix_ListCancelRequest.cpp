#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ListCancelRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ListCancelRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ListCxlReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ListCancelRequest_message_t_0;
  elt.add_attribute("ID", "ListID_t_474517008");
  elt.add_attribute("TxnTm", "TransactTime_t_720707735");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_1781069667");
  elt.add_attribute("TrdDt", "TradeDate_t_1002295990");
  elt.add_attribute("Txt", "Text_t_1628057719");
  elt.add_attribute("EncTxtLen", "1879108095");
  elt.add_attribute("EncTxt", "EncodedText_t_284180689");
  all_values.push_back(ListCancelRequest_message_t_0);
  all_compo_names.insert("ListCancelRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
