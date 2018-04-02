#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/BusinessMessageReject.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( BusinessMessageReject_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"BizMsgRej" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> BusinessMessageReject_message_t_0;
  elt.add_attribute("RefSeqNum", "1542697730");
  elt.add_attribute("RefMsgTyp", "AT");
  elt.add_attribute("RefApplVerID", "6");
  elt.add_attribute("RefApplExtID", "1684460393");
  elt.add_attribute("RefCstmApplVerID", "RefCstmApplVerID_t_1808811638");
  elt.add_attribute("BizRejRefID", "BusinessRejectRefID_t_1736567464");
  elt.add_attribute("BizRejRsn", "6");
  elt.add_attribute("Txt", "Text_t_1268548724");
  elt.add_attribute("EncTxtLen", "1895176291");
  elt.add_attribute("EncTxt", "EncodedText_t_2579053");
  all_values.push_back(BusinessMessageReject_message_t_0);
  all_compo_names.insert("BusinessMessageReject_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
