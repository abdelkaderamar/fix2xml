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
  FIX::EncodedText EncodedText_93("DATA_81710933");
  msg.set(EncodedText_93);
  SecurityTypeRequest_0.insert(EncodedText_93.getString());
  FIX::EncodedTextLen EncodedTextLen_93(463182292);
  msg.set(EncodedTextLen_93);
  SecurityTypeRequest_0.insert(EncodedTextLen_93.getString());
  FIX::MarketID MarketID_22("EXCHANGE_14521772");
  msg.set(MarketID_22);
  SecurityTypeRequest_0.insert(MarketID_22.getString());
  FIX::MarketSegmentID MarketSegmentID_22("STRING_1955907878");
  msg.set(MarketSegmentID_22);
  SecurityTypeRequest_0.insert(MarketSegmentID_22.getString());
  FIX::Product Product_83(5);
  msg.set(Product_83);
  SecurityTypeRequest_0.insert(Product_83.getString());
  FIX::SecurityReqID SecurityReqID_9("STRING_412727228");
  msg.set(SecurityReqID_9);
  SecurityTypeRequest_0.insert(SecurityReqID_9.getString());
  FIX::SecuritySubType SecuritySubType_82("STRING_1544795110");
  msg.set(SecuritySubType_82);
  SecurityTypeRequest_0.insert(SecuritySubType_82.getString());
  FIX::SecurityType SecurityType_83("STRING_FXFWD");
  msg.set(SecurityType_83);
  SecurityTypeRequest_0.insert(SecurityType_83.getString());
  FIX::Text Text_93("STRING_1709137962");
  msg.set(Text_93);
  SecurityTypeRequest_0.insert(Text_93.getString());
  FIX::TradingSessionID TradingSessionID_90("STRING_5");
  msg.set(TradingSessionID_90);
  SecurityTypeRequest_0.insert(TradingSessionID_90.getString());
  FIX::TradingSessionSubID TradingSessionSubID_90("STRING_6");
  msg.set(TradingSessionSubID_90);
  SecurityTypeRequest_0.insert(TradingSessionSubID_90.getString());
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
