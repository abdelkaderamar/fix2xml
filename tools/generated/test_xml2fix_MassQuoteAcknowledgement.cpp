#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MassQuoteAcknowledgement.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MassQuoteAcknowledgement_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MassQuotAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MassQuoteAcknowledgement_message_t_0;
  elt.add_attribute("ReqID", "QuoteReqID_t_728105728");
  elt.add_attribute("QID", "QuoteID_t_396586301");
  elt.add_attribute("Stat", "6");
  elt.add_attribute("RejRsn", "6");
  elt.add_attribute("RspLvl", "2");
  elt.add_attribute("Typ", "1");
  elt.add_attribute("CxlTyp", "6");
  elt.add_attribute("Acct", "Account_t_1342990654");
  elt.add_attribute("AcctIDSrc", "1");
  elt.add_attribute("AcctTyp", "4");
  elt.add_attribute("Txt", "Text_t_1005718425");
  elt.add_attribute("EncTxtLen", "1509857853");
  elt.add_attribute("EncTxt", "EncodedText_t_1431735018");
  all_values.push_back(MassQuoteAcknowledgement_message_t_0);
  all_compo_names.insert("MassQuoteAcknowledgement_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
