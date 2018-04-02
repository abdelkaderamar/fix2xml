#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/RegistrationInstructions.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RegistrationInstructions_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"RgstInstrctns" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RegistrationInstructions_message_t_0;
  elt.add_attribute("ID", "RegistID_t_866760201");
  elt.add_attribute("TransTyp", "1");
  elt.add_attribute("RefID", "RegistRefID_t_1422538721");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1205820317");
  elt.add_attribute("Acct", "Account_t_943284385");
  elt.add_attribute("AcctIDSrc", "2");
  elt.add_attribute("AcctTyp", "RegistAcctType_t_986673829");
  elt.add_attribute("TaxAdvantageTyp", "10");
  elt.add_attribute("OwnershipTyp", "J");
  all_values.push_back(RegistrationInstructions_message_t_0);
  all_compo_names.insert("RegistrationInstructions_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
