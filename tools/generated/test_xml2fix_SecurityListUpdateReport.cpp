#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityListUpdateReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityListUpdateReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecListUpd" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityListUpdateReport_message_t_0;
  elt.add_attribute("RptID", "1979567258");
  elt.add_attribute("ListID", "SecurityListID_t_1615546460");
  elt.add_attribute("ListRefID", "SecurityListRefID_t_1184813831");
  elt.add_attribute("ListDesc", "SecurityListDesc_t_1229981058");
  elt.add_attribute("ListTyp", "2");
  elt.add_attribute("LstTypSrc", "1");
  elt.add_attribute("ReqID", "SecurityReqID_t_1036896552");
  elt.add_attribute("RspID", "SecurityResponseID_t_1348900398");
  elt.add_attribute("ReqRslt", "2");
  elt.add_attribute("TotNoReltdSym", "1069616960");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_2082742449");
  elt.add_attribute("UpdActn", "M");
  elt.add_attribute("CorpActn", "B");
  elt.add_attribute("MktID", "MarketID_t_1578158248");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_573936314");
  elt.add_attribute("TxnTm", "TransactTime_t_182273204");
  elt.add_attribute("LastFragment", "N");
  all_values.push_back(SecurityListUpdateReport_message_t_0);
  all_compo_names.insert("SecurityListUpdateReport_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
