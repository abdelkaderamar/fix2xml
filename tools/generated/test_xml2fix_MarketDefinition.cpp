#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDefinition.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDefinition_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MktDef" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDefinition_message_t_0;
  elt.add_attribute("MktRptID", "MarketReportID_t_1081512499");
  elt.add_attribute("MktReqID", "MarketReqID_t_1969838750");
  elt.add_attribute("MktID", "MarketID_t_263154669");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_777344445");
  elt.add_attribute("MarketSegmentDesc", "MarketSegmentDesc_t_731185418");
  elt.add_attribute("EncodedMktSegmDescLen", "41448577");
  elt.add_attribute("EncodedMktSegmDesc", "EncodedMktSegmDesc_t_187199570");
  elt.add_attribute("ParentMktSegmID", "ParentMktSegmID_t_24881165");
  elt.add_attribute("Ccy", "USD");
  elt.add_attribute("TxnTm", "TransactTime_t_1817690144");
  elt.add_attribute("Txt", "Text_t_1296082601");
  elt.add_attribute("EncTxtLen", "41268860");
  elt.add_attribute("EncTxt", "EncodedText_t_106555109");
  all_values.push_back(MarketDefinition_message_t_0);
  all_compo_names.insert("MarketDefinition_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
