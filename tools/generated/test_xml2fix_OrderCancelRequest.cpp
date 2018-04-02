#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderCancelRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderCancelRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdCxlReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderCancelRequest_message_t_0;
  elt.add_attribute("OrigID", "OrigClOrdID_t_519967606");
  elt.add_attribute("OrdID", "OrderID_t_1506786237");
  elt.add_attribute("ID", "ClOrdID_t_112876179");
  elt.add_attribute("ID2", "SecondaryClOrdID_t_245102177");
  elt.add_attribute("LnkID", "ClOrdLinkID_t_831086259");
  elt.add_attribute("ListID", "ListID_t_1019846753");
  elt.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_202662252");
  elt.add_attribute("Acct", "Account_t_81198068");
  elt.add_attribute("AcctIDSrc", "2");
  elt.add_attribute("AcctTyp", "4");
  elt.add_attribute("Side", "6");
  elt.add_attribute("TxnTm", "TransactTime_t_151656694");
  elt.add_attribute("ComplianceID", "ComplianceID_t_2060224048");
  elt.add_attribute("Txt", "Text_t_1727263567");
  elt.add_attribute("EncTxtLen", "1039989904");
  elt.add_attribute("EncTxt", "EncodedText_t_1253984996");
  all_values.push_back(OrderCancelRequest_message_t_0);
  all_compo_names.insert("OrderCancelRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
