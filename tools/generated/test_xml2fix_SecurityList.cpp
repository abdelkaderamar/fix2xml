#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityList.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityList_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecList" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityList_message_t_0;
  elt.add_attribute("RptID", "1782885412");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_2107832967");
  elt.add_attribute("ListID", "SecurityListID_t_1397897448");
  elt.add_attribute("ListRefID", "SecurityListRefID_t_440441676");
  elt.add_attribute("ListDesc", "SecurityListDesc_t_1166185181");
  elt.add_attribute("ListTyp", "2");
  elt.add_attribute("LstTypSrc", "3");
  elt.add_attribute("ReqID", "SecurityReqID_t_1593954209");
  elt.add_attribute("RspID", "SecurityResponseID_t_32720408");
  elt.add_attribute("ReqRslt", "3");
  elt.add_attribute("TxnTm", "TransactTime_t_241745700");
  elt.add_attribute("TotNoReltdSym", "1215786948");
  elt.add_attribute("MktID", "MarketID_t_1642899447");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_682204688");
  elt.add_attribute("LastFragment", "Y");
  all_values.push_back(SecurityList_message_t_0);
  all_compo_names.insert("SecurityList_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
