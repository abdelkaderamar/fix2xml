#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/RegistrationInstructionsResponse.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RegistrationInstructionsResponse_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"RgstInstrctnsRsp" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RegistrationInstructionsResponse_message_t_0;
  elt.add_attribute("ID", "RegistID_t_2017027985");
  elt.add_attribute("TransTyp", "1");
  elt.add_attribute("RefID", "RegistRefID_t_940913196");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1826617318");
  elt.add_attribute("Acct", "Account_t_132179507");
  elt.add_attribute("AcctIDSrc", "3");
  elt.add_attribute("RegStat", "R");
  elt.add_attribute("RejRsnCd", "17");
  elt.add_attribute("Dtls", "RegistRejReasonText_t_1145572946");
  all_values.push_back(RegistrationInstructionsResponse_message_t_0);
  all_compo_names.insert("RegistrationInstructionsResponse_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
