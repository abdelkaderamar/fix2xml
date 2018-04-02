#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/UserNotification.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( UserNotification_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"UserNotifctn" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> UserNotification_message_t_0;
  elt.add_attribute("UserStat", "3");
  elt.add_attribute("Txt", "Text_t_1880686696");
  elt.add_attribute("EncTxtLen", "1572375628");
  elt.add_attribute("EncTxt", "EncodedText_t_1861514972");
  all_values.push_back(UserNotification_message_t_0);
  all_compo_names.insert("UserNotification_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
