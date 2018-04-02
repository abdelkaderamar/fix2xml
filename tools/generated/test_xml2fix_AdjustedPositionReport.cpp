#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AdjustedPositionReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AdjustedPositionReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AdjPosRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AdjustedPositionReport_message_t_0;
  elt.add_attribute("RptID", "PosMaintRptID_t_1520320178");
  elt.add_attribute("ReqTyp", "3");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1505032357");
  elt.add_attribute("SetSesID", "ETH");
  elt.add_attribute("RptRefID", "PosMaintRptRefID_t_1933276349");
  elt.add_attribute("SetPx", "15006802.790000");
  elt.add_attribute("PriSetPx", "4052205.150000");
  all_values.push_back(AdjustedPositionReport_message_t_0);
  all_compo_names.insert("AdjustedPositionReport_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
