#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderMassCancelReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassCancelReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdMassCxlRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassCancelReport_message_t_0;
  elt.add_attribute("ClOrdID", "ClOrdID_t_278207801");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1931706456");
  elt.add_attribute("OrdID", "OrderID_t_683369792");
  elt.add_attribute("MassActionReportID", "MassActionReportID_t_1844968449");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_1598800569");
  elt.add_attribute("ReqTyp", "9");
  elt.add_attribute("Rsp", "4");
  elt.add_attribute("MassCxlRejRsn", "5");
  elt.add_attribute("TotAffctdOrds", "171145275");
  elt.add_attribute("SesID", "1");
  elt.add_attribute("SesSub", "7");
  elt.add_attribute("MktID", "MarketID_t_936556057");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_148130608");
  elt.add_attribute("Side", "5");
  elt.add_attribute("TxnTm", "TransactTime_t_777607422");
  elt.add_attribute("Txt", "Text_t_2034257236");
  elt.add_attribute("EncTxtLen", "624401523");
  elt.add_attribute("EncTxt", "EncodedText_t_2125445024");
  all_values.push_back(OrderMassCancelReport_message_t_0);
  all_compo_names.insert("OrderMassCancelReport_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
