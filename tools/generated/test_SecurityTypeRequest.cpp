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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityTypeRequest msg;

  list<multiset<string>> all_values;
  multiset<string> SecurityTypeRequest_0;
  FIX::EncodedText EncodedText_86("DATA_2039671549");
  msg.set(EncodedText_86);
  SecurityTypeRequest_0.insert(EncodedText_86.getString());
  FIX::EncodedTextLen EncodedTextLen_86(1820792606);
  msg.set(EncodedTextLen_86);
  SecurityTypeRequest_0.insert(EncodedTextLen_86.getString());
  FIX::MarketID MarketID_26("EXCHANGE_1237519863");
  msg.set(MarketID_26);
  SecurityTypeRequest_0.insert(MarketID_26.getString());
  FIX::MarketSegmentID MarketSegmentID_26("STRING_831909978");
  msg.set(MarketSegmentID_26);
  SecurityTypeRequest_0.insert(MarketSegmentID_26.getString());
  FIX::Product Product_83(6);
  msg.set(Product_83);
  SecurityTypeRequest_0.insert(Product_83.getString());
  FIX::SecurityReqID SecurityReqID_9("STRING_1308372797");
  msg.set(SecurityReqID_9);
  SecurityTypeRequest_0.insert(SecurityReqID_9.getString());
  FIX::SecuritySubType SecuritySubType_82("STRING_1166735177");
  msg.set(SecuritySubType_82);
  SecurityTypeRequest_0.insert(SecuritySubType_82.getString());
  FIX::SecurityType SecurityType_83("STRING_BDN");
  msg.set(SecurityType_83);
  SecurityTypeRequest_0.insert(SecurityType_83.getString());
  FIX::Text Text_86("STRING_119319427");
  msg.set(Text_86);
  SecurityTypeRequest_0.insert(Text_86.getString());
  FIX::TradingSessionID TradingSessionID_98("STRING_2");
  msg.set(TradingSessionID_98);
  SecurityTypeRequest_0.insert(TradingSessionID_98.getString());
  FIX::TradingSessionSubID TradingSessionSubID_98("STRING_7");
  msg.set(TradingSessionSubID_98);
  SecurityTypeRequest_0.insert(TradingSessionSubID_98.getString());
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
