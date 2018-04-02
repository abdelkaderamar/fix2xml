#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ContraryIntentionReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ContraryIntentionReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ContIntRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ContraryIntentionReport_message_t_0;
  elt.add_attribute("RptID", "ContIntRptID_t_953877680");
  elt.add_attribute("TxnTm", "TransactTime_t_1194190595");
  elt.add_attribute("LateInd", "true");
  elt.add_attribute("InptSrc", "InputSource_t_978023483");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_363484648");
  elt.add_attribute("Txt", "Text_t_1710116686");
  elt.add_attribute("EncTxtLen", "495904854");
  elt.add_attribute("EncTxt", "EncodedText_t_389073232");
  all_values.push_back(ContraryIntentionReport_message_t_0);
  all_compo_names.insert("ContraryIntentionReport_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
