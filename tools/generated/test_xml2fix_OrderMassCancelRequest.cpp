#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderMassCancelRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassCancelRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdMassCxlReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassCancelRequest_message_t_0;
  elt.add_attribute("ClOrdID", "ClOrdID_t_1885776394");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_819800276");
  elt.add_attribute("ReqTyp", "A");
  elt.add_attribute("SesID", "3");
  elt.add_attribute("SesSub", "1");
  elt.add_attribute("MktID", "MarketID_t_122039871");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_877065829");
  elt.add_attribute("Side", "7");
  elt.add_attribute("TxnTm", "TransactTime_t_1346278271");
  elt.add_attribute("Txt", "Text_t_1296129694");
  elt.add_attribute("EncTxtLen", "1501050139");
  elt.add_attribute("EncTxt", "EncodedText_t_2812942");
  all_values.push_back(OrderMassCancelRequest_message_t_0);
  all_compo_names.insert("OrderMassCancelRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
