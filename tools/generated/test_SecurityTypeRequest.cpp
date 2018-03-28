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
  multiset<string> SecurityTypeRequest_0;
  FIX::EncodedText EncodedText_83("DATA_1911404717");
  msg.set(EncodedText_83);
  SecurityTypeRequest_0.insert(EncodedText_83.getString());
  FIX::EncodedTextLen EncodedTextLen_83(723237033);
  msg.set(EncodedTextLen_83);
  SecurityTypeRequest_0.insert(EncodedTextLen_83.getString());
  FIX::MarketID MarketID_21("EXCHANGE_2073823065");
  msg.set(MarketID_21);
  SecurityTypeRequest_0.insert(MarketID_21.getString());
  FIX::MarketSegmentID MarketSegmentID_21("STRING_762529111");
  msg.set(MarketSegmentID_21);
  SecurityTypeRequest_0.insert(MarketSegmentID_21.getString());
  FIX::Product Product_90(7);
  msg.set(Product_90);
  SecurityTypeRequest_0.insert(Product_90.getString());
  FIX::SecurityReqID SecurityReqID_9("STRING_701746271");
  msg.set(SecurityReqID_9);
  SecurityTypeRequest_0.insert(SecurityReqID_9.getString());
  FIX::SecuritySubType SecuritySubType_89("STRING_1289089362");
  msg.set(SecuritySubType_89);
  SecurityTypeRequest_0.insert(SecuritySubType_89.getString());
  FIX::SecurityType SecurityType_90("STRING_REPLACD");
  msg.set(SecurityType_90);
  SecurityTypeRequest_0.insert(SecurityType_90.getString());
  FIX::Text Text_83("STRING_1861209787");
  msg.set(Text_83);
  SecurityTypeRequest_0.insert(Text_83.getString());
  FIX::TradingSessionID TradingSessionID_88("STRING_1");
  msg.set(TradingSessionID_88);
  SecurityTypeRequest_0.insert(TradingSessionID_88.getString());
  FIX::TradingSessionSubID TradingSessionSubID_88("STRING_3");
  msg.set(TradingSessionSubID_88);
  SecurityTypeRequest_0.insert(TradingSessionSubID_88.getString());
  all_values.push_back(SecurityTypeRequest_0);


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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
