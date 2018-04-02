#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/DontKnowTrade.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( DontKnowTradeDK_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"DkTrd" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> DontKnowTradeDK_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_1438800437");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_903296672");
  elt.add_attribute("ExecID", "ExecID_t_1231190811");
  elt.add_attribute("DkRsn", "F");
  elt.add_attribute("Side", "G");
  elt.add_attribute("LastQty", "9657977.420000");
  elt.add_attribute("LastPx", "16941363.780000");
  elt.add_attribute("Txt", "Text_t_1733993063");
  elt.add_attribute("EncTxtLen", "1192867673");
  elt.add_attribute("EncTxt", "EncodedText_t_367354263");
  all_values.push_back(DontKnowTradeDK_message_t_0);
  all_compo_names.insert("DontKnowTradeDK_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
