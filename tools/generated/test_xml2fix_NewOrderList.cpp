#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/NewOrderList.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( NewOrderList_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"NewOrdList" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NewOrderList_message_t_0;
  elt.add_attribute("ID", "ListID_t_341977704");
  elt.add_attribute("BidID", "BidID_t_1306137936");
  elt.add_attribute("ClBidID", "ClientBidID_t_453401794");
  elt.add_attribute("ProgRptReqs", "3");
  elt.add_attribute("BidTyp", "1");
  elt.add_attribute("ProgPeriodIntvl", "1387468680");
  elt.add_attribute("CxllationRights", "O");
  elt.add_attribute("MnyLaunderingStat", "1");
  elt.add_attribute("RegistID", "RegistID_t_1153312179");
  elt.add_attribute("ListExecInstTyp", "1");
  elt.add_attribute("ListExecInst", "ListExecInst_t_1559874581");
  elt.add_attribute("ContingencyType", "3");
  elt.add_attribute("EncListExecInstLen", "2063225860");
  elt.add_attribute("EncListExecInst", "EncodedListExecInst_t_1954940878");
  elt.add_attribute("AOSPct", "20248803.930000");
  elt.add_attribute("AOSValu", "AllowableOneSidednessValue_t_811514536");
  elt.add_attribute("AOSCurr", "USD");
  elt.add_attribute("TotNoOrds", "1590270054");
  elt.add_attribute("LastFragment", "N");
  all_values.push_back(NewOrderList_message_t_0);
  all_compo_names.insert("NewOrderList_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
