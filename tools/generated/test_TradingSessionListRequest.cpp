#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/TradingSessionListRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradingSessionListRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::TradingSessionListRequest msg;

  list<multiset<string>> all_values;
  multiset<string> TradingSessionListRequest_0;
  FIX::MarketID MarketID_29("EXCHANGE_1141316420");
  msg.set(MarketID_29);
  TradingSessionListRequest_0.insert(MarketID_29.getString());
  FIX::MarketSegmentID MarketSegmentID_29("STRING_1092511572");
  msg.set(MarketSegmentID_29);
  TradingSessionListRequest_0.insert(MarketSegmentID_29.getString());
  FIX::SecurityExchange SecurityExchange_96("EXCHANGE_504920761");
  msg.set(SecurityExchange_96);
  TradingSessionListRequest_0.insert(SecurityExchange_96.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_17('1');
  msg.set(SubscriptionRequestType_17);
  TradingSessionListRequest_0.insert(SubscriptionRequestType_17.getString());
  FIX::TradSesMethod TradSesMethod_3(1);
  msg.set(TradSesMethod_3);
  TradingSessionListRequest_0.insert(TradSesMethod_3.getString());
  FIX::TradSesMode TradSesMode_3(1);
  msg.set(TradSesMode_3);
  TradingSessionListRequest_0.insert(TradSesMode_3.getString());
  FIX::TradSesReqID TradSesReqID_1("STRING_1526085341");
  msg.set(TradSesReqID_1);
  TradingSessionListRequest_0.insert(TradSesReqID_1.getString());
  FIX::TradingSessionID TradingSessionID_98("STRING_4");
  msg.set(TradingSessionID_98);
  TradingSessionListRequest_0.insert(TradingSessionID_98.getString());
  FIX::TradingSessionSubID TradingSessionSubID_98("STRING_1");
  msg.set(TradingSessionSubID_98);
  TradingSessionListRequest_0.insert(TradingSessionSubID_98.getString());
  all_values.push_back(TradingSessionListRequest_0);


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
