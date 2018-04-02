#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/Advertisement.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Advertisement_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"Adv" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Advertisement_message_t_0;
  elt.add_attribute("AdvId", "AdvId_t_2099790049");
  elt.add_attribute("AdvTransTyp", "N");
  elt.add_attribute("AdvRefID", "AdvRefID_t_217729330");
  elt.add_attribute("AdvSide", "X");
  elt.add_attribute("Qty", "3764666.940000");
  elt.add_attribute("QtyTyp", "1");
  elt.add_attribute("Px", "10491005.540000");
  elt.add_attribute("Ccy", "JPY");
  elt.add_attribute("TrdDt", "TradeDate_t_1363726220");
  elt.add_attribute("TxnTm", "TransactTime_t_188167025");
  elt.add_attribute("Txt", "Text_t_1849127835");
  elt.add_attribute("EncTxtLen", "724065152");
  elt.add_attribute("EncTxt", "EncodedText_t_2116570527");
  elt.add_attribute("URL", "URLLink_t_1953819618");
  elt.add_attribute("LastMkt", "LastMkt_t_234579104");
  elt.add_attribute("SesID", "1");
  elt.add_attribute("SesSub", "4");
  all_values.push_back(Advertisement_message_t_0);
  all_compo_names.insert("Advertisement_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
