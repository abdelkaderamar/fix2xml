#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderCancelReject.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderCancelReject_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdCxlRej" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderCancelReject_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_1815839763");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_1371616877");
  elt.add_attribute("ID2", "SecondaryClOrdID_t_1881163259");
  elt.add_attribute("ID", "ClOrdID_t_1259826528");
  elt.add_attribute("LnkID", "ClOrdLinkID_t_1183149570");
  elt.add_attribute("OrigID", "OrigClOrdID_t_1468430813");
  elt.add_attribute("Stat", "8");
  elt.add_attribute("WorkingInd", "N");
  elt.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_1663954461");
  elt.add_attribute("ListID", "ListID_t_747049812");
  elt.add_attribute("Acct", "Account_t_885173770");
  elt.add_attribute("AcctIDSrc", "5");
  elt.add_attribute("AcctTyp", "1");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_1854478453");
  elt.add_attribute("TrdDt", "TradeDate_t_615229700");
  elt.add_attribute("TxnTm", "TransactTime_t_1987877132");
  elt.add_attribute("CxlRejRspTo", "2");
  elt.add_attribute("CxlRejRsn", "1");
  elt.add_attribute("Txt", "Text_t_1748333038");
  elt.add_attribute("EncTxtLen", "1346983367");
  elt.add_attribute("EncTxt", "EncodedText_t_1458242430");
  all_values.push_back(OrderCancelReject_message_t_0);
  all_compo_names.insert("OrderCancelReject_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
