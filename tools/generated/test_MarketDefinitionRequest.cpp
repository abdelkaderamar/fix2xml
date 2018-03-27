#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/MarketDefinitionRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDefinitionRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MarketDefinitionRequest msg;

  list<multiset<string>> all_values;
  multiset<string> MarketDefinitionRequest_0;
  FIX::MarketID MarketID_7("EXCHANGE_369884882");
  msg.set(MarketID_7);
  MarketDefinitionRequest_0.insert(MarketID_7.getString());
  FIX::MarketReqID MarketReqID_1("STRING_1240925720");
  msg.set(MarketReqID_1);
  MarketDefinitionRequest_0.insert(MarketReqID_1.getString());
  FIX::MarketSegmentID MarketSegmentID_7("STRING_661748059");
  msg.set(MarketSegmentID_7);
  MarketDefinitionRequest_0.insert(MarketSegmentID_7.getString());
  FIX::ParentMktSegmID ParentMktSegmID_1("STRING_252490423");
  msg.set(ParentMktSegmID_1);
  MarketDefinitionRequest_0.insert(ParentMktSegmID_1.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_3('1');
  msg.set(SubscriptionRequestType_3);
  MarketDefinitionRequest_0.insert(SubscriptionRequestType_3.getString());
  all_values.push_back(MarketDefinitionRequest_0);


  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  cout << "FIX components" << endl;
  for (const auto& l : all_values) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
  }
  cout << "XML components" << endl;
  for (const auto& l : elt_lists) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
  }

  for (const auto& xml_l : elt_lists) {
    bool found = false;
    for (const auto& l : all_values) {
      if (includes(l.begin(), l.end(), xml_l.begin(), xml_l.end())) {
        found = true;
        break;
      } // end if includes
    } // end for all_values
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  fix2xml::fix_env::init_xerces();
  return RUN_ALL_TESTS();
  fix2xml::fix_env::terminate_xerces();
}
