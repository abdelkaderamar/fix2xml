#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ListExecute.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ListExecute_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ListExct" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ListExecute_message_t_0;
  elt.add_attribute("ID", "ListID_t_212645580");
  elt.add_attribute("ClBidID", "ClientBidID_t_2061164125");
  elt.add_attribute("BidID", "BidID_t_410001915");
  elt.add_attribute("TxnTm", "TransactTime_t_2083849189");
  elt.add_attribute("Txt", "Text_t_1260150973");
  elt.add_attribute("EncTxtLen", "1998770844");
  elt.add_attribute("EncTxt", "EncodedText_t_1368195445");
  all_values.push_back(ListExecute_message_t_0);
  all_compo_names.insert("ListExecute_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
