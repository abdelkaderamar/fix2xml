#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderMassActionReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassActionReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdMassActRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassActionReport_message_t_0;
  elt.add_attribute("ClOrdID", "ClOrdID_t_1127688137");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1371799670");
  elt.add_attribute("MassActionReportID", "MassActionReportID_t_1566760647");
  elt.add_attribute("MassActionType", "2");
  elt.add_attribute("MassActionScope", "1");
  elt.add_attribute("MassActionResponse", "0");
  elt.add_attribute("MassActionRejectReason", "3");
  elt.add_attribute("TotAffctdOrds", "1405641279");
  elt.add_attribute("MktID", "MarketID_t_1526324475");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1297603889");
  elt.add_attribute("SesID", "5");
  elt.add_attribute("SesSub", "2");
  elt.add_attribute("Side", "9");
  elt.add_attribute("TxnTm", "TransactTime_t_1988535013");
  elt.add_attribute("Txt", "Text_t_1886126627");
  elt.add_attribute("EncTxtLen", "2097780223");
  elt.add_attribute("EncTxt", "EncodedText_t_1347837602");
  all_values.push_back(OrderMassActionReport_message_t_0);
  all_compo_names.insert("OrderMassActionReport_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
