#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDefinitionUpdateReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDefinitionUpdateReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MktDefUpd" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDefinitionUpdateReport_message_t_0;
  elt.add_attribute("MktRptID", "MarketReportID_t_2068682704");
  elt.add_attribute("MktReqID", "MarketReqID_t_1013109113");
  elt.add_attribute("MktUpdtActn", "A");
  elt.add_attribute("MktID", "MarketID_t_1810211419");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_129252411");
  elt.add_attribute("MarketSegmentDesc", "MarketSegmentDesc_t_793268235");
  elt.add_attribute("EncodedMktSegmDescLen", "1877849162");
  elt.add_attribute("EncodedMktSegmDesc", "EncodedMktSegmDesc_t_549951434");
  elt.add_attribute("ParentMktSegmID", "ParentMktSegmID_t_1028241909");
  elt.add_attribute("Ccy", "CHF");
  elt.add_attribute("TxnTm", "TransactTime_t_1351662483");
  elt.add_attribute("Txt", "Text_t_1418270363");
  elt.add_attribute("EncTxtLen", "2011241759");
  elt.add_attribute("EncTxt", "EncodedText_t_1614817152");
  all_values.push_back(MarketDefinitionUpdateReport_message_t_0);
  all_compo_names.insert("MarketDefinitionUpdateReport_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
