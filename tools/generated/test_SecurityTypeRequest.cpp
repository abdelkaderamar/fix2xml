#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/SecurityTypeRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityTypeRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityTypeRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityTypeRequest_0;
  FIX::EncodedText EncodedText_91("DATA_1344165122");
  msg.set(EncodedText_91);
  SecurityTypeRequest_0.insert(EncodedText_91.getString());
  FIX::EncodedTextLen EncodedTextLen_91(1871350422);
  msg.set(EncodedTextLen_91);
  SecurityTypeRequest_0.insert(EncodedTextLen_91.getString());
  FIX::MarketID MarketID_25("EXCHANGE_615538374");
  msg.set(MarketID_25);
  SecurityTypeRequest_0.insert(MarketID_25.getString());
  FIX::MarketSegmentID MarketSegmentID_25("STRING_143585169");
  msg.set(MarketSegmentID_25);
  SecurityTypeRequest_0.insert(MarketSegmentID_25.getString());
  FIX::Product Product_92(10);
  msg.set(Product_92);
  SecurityTypeRequest_0.insert(Product_92.getString());
  FIX::SecurityReqID SecurityReqID_9("STRING_1296326537");
  msg.set(SecurityReqID_9);
  SecurityTypeRequest_0.insert(SecurityReqID_9.getString());
  FIX::SecuritySubType SecuritySubType_91("STRING_1193624650");
  msg.set(SecuritySubType_91);
  SecurityTypeRequest_0.insert(SecuritySubType_91.getString());
  FIX::SecurityType SecurityType_92("STRING_BOX");
  msg.set(SecurityType_92);
  SecurityTypeRequest_0.insert(SecurityType_92.getString());
  FIX::Text Text_91("STRING_82357752");
  msg.set(Text_91);
  SecurityTypeRequest_0.insert(Text_91.getString());
  FIX::TradingSessionID TradingSessionID_115("STRING_3");
  msg.set(TradingSessionID_115);
  SecurityTypeRequest_0.insert(TradingSessionID_115.getString());
  FIX::TradingSessionSubID TradingSessionSubID_115("STRING_2");
  msg.set(TradingSessionSubID_115);
  SecurityTypeRequest_0.insert(TradingSessionSubID_115.getString());
  all_values.push_back(SecurityTypeRequest_0);

  all_compo_names.insert("SecurityTypeRequest");


  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  if (elt_lists.size() != all_values.size())  {
    cout << "########################" << endl;
    multiset<string> elt_compo_name;
    elt.all_components(elt_compo_name);
    copy(elt_compo_name.begin(), elt_compo_name.end(), ostream_iterator<string>(cout, "\n"));
    cout << "########################" << endl; 
    copy(all_compo_names.begin(), all_compo_names.end(), ostream_iterator<string>(cout, "\n"));
  }  cout << "FIX components" << endl;
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
