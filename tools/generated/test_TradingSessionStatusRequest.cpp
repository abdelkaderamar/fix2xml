#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/TradingSessionStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradingSessionStatusRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::TradingSessionStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> TradingSessionStatusRequest_0;
  FIX::MarketID MarketID_35("EXCHANGE_1729012902");
  msg.set(MarketID_35);
  TradingSessionStatusRequest_0.insert(MarketID_35.getString());
  FIX::MarketSegmentID MarketSegmentID_35("STRING_918323931");
  msg.set(MarketSegmentID_35);
  TradingSessionStatusRequest_0.insert(MarketSegmentID_35.getString());
  FIX::SecurityExchange SecurityExchange_98("EXCHANGE_188447744");
  msg.set(SecurityExchange_98);
  TradingSessionStatusRequest_0.insert(SecurityExchange_98.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_18('0');
  msg.set(SubscriptionRequestType_18);
  TradingSessionStatusRequest_0.insert(SubscriptionRequestType_18.getString());
  FIX::TradSesMethod TradSesMethod_5(1);
  msg.set(TradSesMethod_5);
  TradingSessionStatusRequest_0.insert(TradSesMethod_5.getString());
  FIX::TradSesMode TradSesMode_5(1);
  msg.set(TradSesMode_5);
  TradingSessionStatusRequest_0.insert(TradSesMode_5.getString());
  FIX::TradSesReqID TradSesReqID_4("STRING_1853890093");
  msg.set(TradSesReqID_4);
  TradingSessionStatusRequest_0.insert(TradSesReqID_4.getString());
  FIX::TradingSessionID TradingSessionID_108("STRING_2");
  msg.set(TradingSessionID_108);
  TradingSessionStatusRequest_0.insert(TradingSessionID_108.getString());
  FIX::TradingSessionSubID TradingSessionSubID_108("STRING_7");
  msg.set(TradingSessionSubID_108);
  TradingSessionStatusRequest_0.insert(TradingSessionSubID_108.getString());
  all_values.push_back(TradingSessionStatusRequest_0);


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
