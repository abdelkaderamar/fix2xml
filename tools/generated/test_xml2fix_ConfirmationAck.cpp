#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ConfirmationAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Confirmation_Ack_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CnfmAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Confirmation_Ack_message_t_0;
  elt.add_attribute("CnfmID", "ConfirmID_t_921549343");
  elt.add_attribute("TrdDt", "TradeDate_t_1329487522");
  elt.add_attribute("TxnTm", "TransactTime_t_2004796622");
  elt.add_attribute("AffirmStat", "1");
  elt.add_attribute("CnfmRejRsn", "99");
  elt.add_attribute("MtchStat", "1");
  elt.add_attribute("Txt", "Text_t_1398254827");
  elt.add_attribute("EncTxtLen", "891620155");
  elt.add_attribute("EncTxt", "EncodedText_t_795281063");
  all_values.push_back(Confirmation_Ack_message_t_0);
  all_compo_names.insert("Confirmation_Ack_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
