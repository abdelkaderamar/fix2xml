#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ConfirmationRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ConfirmationRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CnfmReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ConfirmationRequest_message_t_0;
  elt.add_attribute("CnfmReqID", "ConfirmReqID_t_1116832236");
  elt.add_attribute("CnfmTyp", "3");
  elt.add_attribute("AllocID", "AllocID_t_1277336269");
  elt.add_attribute("AllocID2", "SecondaryAllocID_t_1222623954");
  elt.add_attribute("IndAllocID", "IndividualAllocID_t_18383846");
  elt.add_attribute("TxnTm", "TransactTime_t_2069646384");
  elt.add_attribute("Acct", "AllocAccount_t_1495520000");
  elt.add_attribute("ActIDSrc", "1");
  elt.add_attribute("AcctTyp", "3");
  elt.add_attribute("Txt", "Text_t_917428860");
  elt.add_attribute("EncTxtLen", "504412993");
  elt.add_attribute("EncTxt", "EncodedText_t_691947545");
  all_values.push_back(ConfirmationRequest_message_t_0);
  all_compo_names.insert("ConfirmationRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
